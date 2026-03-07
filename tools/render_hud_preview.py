#!/usr/bin/env python3
"""Render an offline PNG preview matching the current RTL NES HUD geometry.

This script mirrors `rtl/hud_assets.sv` and `rtl/hud_controller.sv` logic:
- Parses geometry constants from RTL localparams.
- Uses the same integer geometry tests (rect/circle/rounded rect).
- Uses the same HUD placement and asset sampling rules.
"""

from __future__ import annotations

import re
import struct
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
RTL_ASSETS = ROOT / "rtl" / "hud_assets.sv"
RTL_CTRL = ROOT / "rtl" / "hud_controller.sv"
OUT = ROOT / "tools" / "hud_preview.png"


def parse_localparams(path: Path) -> dict[str, int]:
    text = path.read_text()
    out: dict[str, int] = {}
    for m in re.finditer(r"localparam\s+int\s+(\w+)\s*=\s*(-?\d+)\s*;", text):
        out[m.group(1)] = int(m.group(2))
    return out


def parse_hud_colors(path: Path) -> tuple[tuple[int, int, int], tuple[int, int, int]]:
    text = path.read_text()
    m = re.search(r"hud_pixel\s*=\s*lit_px\s*\?\s*24'h([0-9A-Fa-f]{6})\s*:\s*24'h([0-9A-Fa-f]{6})", text)
    if not m:
        raise RuntimeError("Could not find HUD colors in hud_controller.sv")

    def rgb(h: str) -> tuple[int, int, int]:
        v = int(h, 16)
        return ((v >> 16) & 0xFF, (v >> 8) & 0xFF, v & 0xFF)

    return rgb(m.group(1)), rgb(m.group(2))


def in_rect(px: int, py: int, x0: int, y0: int, rw: int, rh: int) -> bool:
    return (px >= x0) and (px < x0 + rw) and (py >= y0) and (py < y0 + rh)


def in_circle(px: int, py: int, cx: int, cy: int, r: int) -> bool:
    dx = px - cx
    dy = py - cy
    return (dx * dx + dy * dy) <= (r * r)


def in_round_rect(px: int, py: int, x0: int, y0: int, rw: int, rh: int, rr: int) -> bool:
    x1 = x0 + rw - 1
    y1 = y0 + rh - 1
    if px < x0 or px > x1 or py < y0 or py > y1:
        return False
    nx = (x0 + rr) if (px < (x0 + rr)) else ((x1 - rr) if (px > (x1 - rr)) else px)
    ny = (y0 + rr) if (py < (y0 + rr)) else ((y1 - rr) if (py > (y1 - rr)) else py)
    dx = px - nx
    dy = py - ny
    return (dx * dx + dy * dy) <= (rr * rr)


class HudGeom:
    def __init__(self, p: dict[str, int]):
        self.p = p

    def body_outline_raw_at(self, px: int, py: int) -> bool:
        p = self.p
        outer = in_round_rect(px, py, p["BODY_X"], p["BODY_Y"], p["BODY_W"], p["BODY_H"], p["BODY_R_OUTER"])
        inner = in_round_rect(
            px,
            py,
            p["BODY_X"] + p["BODY_BORDER"],
            p["BODY_Y"] + p["BODY_BORDER"],
            p["BODY_W"] - (2 * p["BODY_BORDER"]),
            p["BODY_H"] - (2 * p["BODY_BORDER"]),
            p["BODY_R_OUTER"] - p["BODY_BORDER"],
        )
        return outer and not inner

    def asset_pixel(self, px: int, py: int) -> tuple[bool, dict[str, bool]]:
        p = self.p

        body_outer = in_round_rect(px, py, p["BODY_X"], p["BODY_Y"], p["BODY_W"], p["BODY_H"], p["BODY_R_OUTER"])
        body_inner = in_round_rect(
            px,
            py,
            p["BODY_X"] + p["BODY_BORDER"],
            p["BODY_Y"] + p["BODY_BORDER"],
            p["BODY_W"] - (2 * p["BODY_BORDER"]),
            p["BODY_H"] - (2 * p["BODY_BORDER"]),
            p["BODY_R_OUTER"] - p["BODY_BORDER"],
        )
        body_raw = body_outer and not body_inner
        body_fix = (
            ((px & 1) == 0)
            and ((py & 1) == 0)
            and (not body_raw)
            and (
                self.body_outline_raw_at(px - 1, py)
                or self.body_outline_raw_at(px + 1, py)
                or self.body_outline_raw_at(px, py - 1)
                or self.body_outline_raw_at(px, py + 1)
                or self.body_outline_raw_at(px - 1, py - 1)
                or self.body_outline_raw_at(px + 1, py - 1)
                or self.body_outline_raw_at(px - 1, py + 1)
                or self.body_outline_raw_at(px + 1, py + 1)
            )
        )
        body_outline = body_raw or body_fix

        dp_seg = p["DP_SEG"]
        dp_cx = p["DP_CX"]
        dp_cy = p["DP_CY"]
        dp_border = p["DP_BORDER"]

        dp_center = in_rect(px, py, dp_cx - dp_seg // 2, dp_cy - dp_seg // 2, dp_seg, dp_seg)
        dp_up = in_rect(px, py, dp_cx - dp_seg // 2, dp_cy - (3 * dp_seg // 2), dp_seg, dp_seg)
        dp_down = in_rect(px, py, dp_cx - dp_seg // 2, dp_cy + dp_seg // 2, dp_seg, dp_seg)
        dp_left = in_rect(px, py, dp_cx - (3 * dp_seg // 2), dp_cy - dp_seg // 2, dp_seg, dp_seg)
        dp_right = in_rect(px, py, dp_cx + dp_seg // 2, dp_cy - dp_seg // 2, dp_seg, dp_seg)
        dp_fill = dp_center or dp_up or dp_down or dp_left or dp_right

        dp_center_o = in_rect(
            px,
            py,
            dp_cx - (dp_seg // 2 + dp_border),
            dp_cy - (dp_seg // 2 + dp_border),
            dp_seg + 2 * dp_border,
            dp_seg + 2 * dp_border,
        )
        dp_up_o = in_rect(
            px,
            py,
            dp_cx - (dp_seg // 2 + dp_border),
            dp_cy - (3 * dp_seg // 2 + dp_border),
            dp_seg + 2 * dp_border,
            dp_seg + 2 * dp_border,
        )
        dp_down_o = in_rect(
            px,
            py,
            dp_cx - (dp_seg // 2 + dp_border),
            dp_cy + dp_seg // 2 - dp_border,
            dp_seg + 2 * dp_border,
            dp_seg + 2 * dp_border,
        )
        dp_left_o = in_rect(
            px,
            py,
            dp_cx - (3 * dp_seg // 2 + dp_border),
            dp_cy - (dp_seg // 2 + dp_border),
            dp_seg + 2 * dp_border,
            dp_seg + 2 * dp_border,
        )
        dp_right_o = in_rect(
            px,
            py,
            dp_cx + dp_seg // 2 - dp_border,
            dp_cy - (dp_seg // 2 + dp_border),
            dp_seg + 2 * dp_border,
            dp_seg + 2 * dp_border,
        )
        dp_outer = dp_center_o or dp_up_o or dp_down_o or dp_left_o or dp_right_o

        a_fill = in_circle(px, py, p["AB_A_CX"], p["AB_A_CY"], p["AB_FILL_R"])
        b_fill = in_circle(px, py, p["AB_B_CX"], p["AB_B_CY"], p["AB_FILL_R"])
        a_out = in_circle(px, py, p["AB_A_CX"], p["AB_A_CY"], p["AB_OUTER_R"])
        b_out = in_circle(px, py, p["AB_B_CX"], p["AB_B_CY"], p["AB_OUTER_R"])

        start_out = in_rect(
            px,
            py,
            p["SS_START_X"] - p["SS_BORDER"],
            p["SS_Y"] - p["SS_BORDER"],
            p["SS_W"] + 2 * p["SS_BORDER"],
            p["SS_H"] + 2 * p["SS_BORDER"],
        )
        select_out = in_rect(
            px,
            py,
            p["SS_SEL_X"] - p["SS_BORDER"],
            p["SS_Y"] - p["SS_BORDER"],
            p["SS_W"] + 2 * p["SS_BORDER"],
            p["SS_H"] + 2 * p["SS_BORDER"],
        )
        start_in = in_rect(px, py, p["SS_START_X"], p["SS_Y"], p["SS_W"], p["SS_H"])
        select_in = in_rect(px, py, p["SS_SEL_X"], p["SS_Y"], p["SS_W"], p["SS_H"])

        base = (
            body_outline
            or (dp_outer and not dp_fill)
            or (start_out and not start_in)
            or (select_out and not select_in)
            or (a_out and not a_fill)
            or (b_out and not b_fill)
        )

        masks = {
            "a": a_fill,
            "b": b_fill,
            "select": in_rect(px, py, p["SS_SEL_X"] + 1, p["SS_Y"] + (p["SS_H"] // 2) - 2, p["SS_W"] - 2, 3),
            "start": in_rect(px, py, p["SS_START_X"] + 1, p["SS_Y"] + (p["SS_H"] // 2) - 2, p["SS_W"] - 2, 3),
            "up": dp_up,
            "down": dp_down,
            "left": dp_left,
            "right": dp_right,
        }
        return base, masks


def render_hud_screen(
    ctrl: dict[str, int],
    geom: HudGeom,
    pressed: int,
    lit_rgb: tuple[int, int, int],
    base_rgb: tuple[int, int, int],
) -> tuple[list[tuple[int, int, int]], int, int]:
    w = ctrl["SCR_W"]
    h = ctrl["SCR_H"]
    hud_w = ctrl["HUD_W"]
    hud_h = ctrl["HUD_H"]
    side = ctrl["SIDE_MARGIN"]
    top = ctrl["TOP_MARGIN"]

    hud_mode = 1  # P1
    hud_position = 0  # TL
    hud_scale = 0  # 1x

    count = 2 if hud_mode == 2 else (1 if hud_mode == 1 else 0)
    scale_mul = 2 if (hud_scale and count == 1) else 1
    sprite_w = hud_w * scale_mul
    sprite_h = hud_h * scale_mul
    gap = 8 * scale_mul
    total_w = (sprite_w * 2 + gap) if (count == 2) else sprite_w

    if hud_position == 0:
        x0, y0 = side, top
    elif hud_position == 1:
        x0, y0 = w - total_w - side, top
    elif hud_position == 2:
        x0, y0 = side, h - sprite_h - ctrl["BOTTOM_MARGIN"]
    else:
        x0, y0 = w - total_w - side, h - sprite_h - ctrl["BOTTOM_MARGIN"]

    x0 = max(0, x0)
    y0 = max(0, y0)

    img = [(18, 18, 18)] * (w * h)

    for y in range(h):
        for x in range(w):
            if not (count != 0 and x >= x0 and x < (x0 + total_w) and y >= y0 and y < (y0 + sprite_h)):
                continue

            rel_x = x - x0
            rel_y = y - y0
            ctrl_sel = 1 if (count == 2 and rel_x >= (sprite_w + gap)) else 0
            ctrl_x = rel_x - ((sprite_w + gap) if ctrl_sel == 1 else 0)
            if ctrl_x < 0 or ctrl_x >= sprite_w:
                continue

            if scale_mul == 2:
                local_x = ctrl_x & 0x7F
                local_y = rel_y & 0x3F
            else:
                local_x = (ctrl_x << 1) & 0x7F
                local_y = (rel_y << 1) & 0x3F

            base, masks = geom.asset_pixel(local_x, local_y)
            lit = (
                (masks["a"] and (pressed & (1 << 0)))
                or (masks["b"] and (pressed & (1 << 1)))
                or (masks["select"] and (pressed & (1 << 2)))
                or (masks["start"] and (pressed & (1 << 3)))
                or (masks["up"] and (pressed & (1 << 4)))
                or (masks["down"] and (pressed & (1 << 5)))
                or (masks["left"] and (pressed & (1 << 6)))
                or (masks["right"] and (pressed & (1 << 7)))
            )
            if base or lit:
                img[y * w + x] = lit_rgb if lit else base_rgb

    return img, w, h


FONT = {
    "A": ["010", "101", "111", "101", "101"],
    "B": ["110", "101", "110", "101", "110"],
    "D": ["110", "101", "101", "101", "110"],
    "E": ["111", "100", "110", "100", "111"],
    "H": ["101", "101", "111", "101", "101"],
    "I": ["111", "010", "010", "010", "111"],
    "L": ["100", "100", "100", "100", "111"],
    "N": ["101", "111", "111", "111", "101"],
    "O": ["111", "101", "101", "101", "111"],
    "P": ["110", "101", "110", "100", "100"],
    "R": ["110", "101", "110", "101", "101"],
    "S": ["111", "100", "111", "001", "111"],
    "T": ["111", "010", "010", "010", "010"],
    "U": ["101", "101", "101", "101", "111"],
    "V": ["101", "101", "101", "101", "010"],
    "W": ["101", "101", "111", "111", "101"],
    " ": ["000", "000", "000", "000", "000"],
    "0": ["111", "101", "101", "101", "111"],
    "1": ["010", "110", "010", "010", "111"],
    "2": ["111", "001", "111", "100", "111"],
}


def draw_text(img: list[tuple[int, int, int]], w: int, h: int, x: int, y: int, s: str, scale: int = 2, color=(230, 230, 230)):
    cx = x
    for ch in s:
        glyph = FONT.get(ch.upper(), FONT[" "])
        for gy, row in enumerate(glyph):
            for gx, bit in enumerate(row):
                if bit == "1":
                    for yy in range(scale):
                        for xx in range(scale):
                            px = cx + gx * scale + xx
                            py = y + gy * scale + yy
                            if 0 <= px < w and 0 <= py < h:
                                img[py * w + px] = color
        cx += (4 * scale)


def blit(dst: list[tuple[int, int, int]], dw: int, dh: int, src: list[tuple[int, int, int]], sw: int, sh: int, ox: int, oy: int):
    for y in range(sh):
        dy = oy + y
        if dy < 0 or dy >= dh:
            continue
        row_d = dy * dw
        row_s = y * sw
        for x in range(sw):
            dx = ox + x
            if 0 <= dx < dw:
                dst[row_d + dx] = src[row_s + x]


def draw_rect_outline(img: list[tuple[int, int, int]], w: int, h: int, x: int, y: int, rw: int, rh: int, c=(90, 90, 90)):
    for px in range(x, x + rw):
        if 0 <= px < w:
            if 0 <= y < h:
                img[y * w + px] = c
            if 0 <= y + rh - 1 < h:
                img[(y + rh - 1) * w + px] = c
    for py in range(y, y + rh):
        if 0 <= py < h:
            if 0 <= x < w:
                img[py * w + x] = c
            if 0 <= x + rw - 1 < w:
                img[py * w + (x + rw - 1)] = c


def upscale_nearest(src: list[tuple[int, int, int]], w: int, h: int, s: int) -> tuple[list[tuple[int, int, int]], int, int]:
    nw, nh = w * s, h * s
    dst = [(0, 0, 0)] * (nw * nh)
    for y in range(h):
        for x in range(w):
            c = src[y * w + x]
            for yy in range(s):
                base = (y * s + yy) * nw
                for xx in range(s):
                    dst[base + x * s + xx] = c
    return dst, nw, nh


def write_png(path: Path, rgb: list[tuple[int, int, int]], w: int, h: int):
    raw = bytearray()
    for y in range(h):
        raw.append(0)
        row = rgb[y * w : (y + 1) * w]
        for r, g, b in row:
            raw.extend((r, g, b))

    def chunk(tag: bytes, data: bytes) -> bytes:
        return struct.pack(">I", len(data)) + tag + data + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF)

    ihdr = struct.pack(">IIBBBBB", w, h, 8, 2, 0, 0, 0)
    idat = zlib.compress(bytes(raw), level=9)
    png = b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", ihdr) + chunk(b"IDAT", idat) + chunk(b"IEND", b"")
    path.write_bytes(png)


def count_state_pixels(geom: HudGeom):
    base_count = 0
    mask_counts = {k: 0 for k in ("up", "down", "left", "right", "a", "b", "start", "select")}
    overlap_ab = 0
    for y in range(64):
        for x in range(128):
            base, m = geom.asset_pixel(x, y)
            base_count += int(base)
            for k in mask_counts:
                mask_counts[k] += int(m[k])
            overlap_ab += int(m["a"] and m["b"])
    return base_count, mask_counts, overlap_ab


def main():
    assets = parse_localparams(RTL_ASSETS)
    ctrl = parse_localparams(RTL_CTRL)
    lit_rgb, base_rgb = parse_hud_colors(RTL_CTRL)
    geom = HudGeom(assets)

    no_img, sw, sh = render_hud_screen(ctrl, geom, pressed=0x00, lit_rgb=lit_rgb, base_rgb=base_rgb)
    all_img, _, _ = render_hud_screen(ctrl, geom, pressed=0xFF, lit_rgb=lit_rgb, base_rgb=base_rgb)

    title_h = 24
    label_h = 20
    outer_m = 12
    gap = 20
    cw = outer_m * 2 + sw * 2 + gap
    ch = outer_m + title_h + label_h + sh + outer_m
    canvas = [(8, 8, 8)] * (cw * ch)

    draw_text(canvas, cw, ch, outer_m, outer_m, "NES HUD PREVIEW", scale=2)

    left_x = outer_m
    right_x = outer_m + sw + gap
    panel_y = outer_m + title_h + label_h

    draw_text(canvas, cw, ch, left_x, outer_m + title_h, "NO BUTTONS PRESSED", scale=2)
    draw_text(canvas, cw, ch, right_x, outer_m + title_h, "ALL BUTTONS PRESSED", scale=2)

    blit(canvas, cw, ch, no_img, sw, sh, left_x, panel_y)
    blit(canvas, cw, ch, all_img, sw, sh, right_x, panel_y)

    draw_rect_outline(canvas, cw, ch, left_x - 1, panel_y - 1, sw + 2, sh + 2)
    draw_rect_outline(canvas, cw, ch, right_x - 1, panel_y - 1, sw + 2, sh + 2)

    upscaled, uw, uh = upscale_nearest(canvas, cw, ch, s=3)
    write_png(OUT, upscaled, uw, uh)

    base_count, mask_counts, overlap_ab = count_state_pixels(geom)
    print(f"Wrote: {OUT}")
    print(f"Panel logical size: {sw}x{sh}, output size: {uw}x{uh}")
    print(f"HUD top offset (from rtl/hud_controller.sv): {ctrl.get('TOP_MARGIN')}")
    print(
        "AB geometry:",
        {k: assets[k] for k in ("AB_A_CX", "AB_A_CY", "AB_B_CX", "AB_B_CY", "AB_FILL_R", "AB_OUTER_R")},
    )
    print(
        "Start/Select geometry:",
        {k: assets[k] for k in ("SS_SEL_X", "SS_START_X", "SS_W", "SS_H")},
    )
    print(f"Base pixels: {base_count}")
    print("Mask pixels:", mask_counts)
    print(f"A/B overlap pixels: {overlap_ab}")


if __name__ == "__main__":
    main()
