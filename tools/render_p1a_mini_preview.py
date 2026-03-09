#!/usr/bin/env python3
"""
Render a visual mockup of the expected P1A-mini passive sampler debug overlay.

This is a standalone preview tool for layout review only.
It does not depend on MiSTer build tools and does not touch FPGA RTL.
"""

from __future__ import annotations

from pathlib import Path

from PIL import Image, ImageDraw, ImageFont


# NES normalized bit order (keep easy to edit here)
# bit0=A bit1=B bit2=Select bit3=Start bit4=Up bit5=Down bit6=Left bit7=Right
BUTTON_BITS = [
    ("A", 0),
    ("B", 1),
    ("SEL", 2),
    ("STA", 3),
    ("U", 4),
    ("D", 5),
    ("L", 6),
    ("R", 7),
]

CANVAS_W = 256
CANVAS_H = 240
UPSCALE = 4
PANEL_GAP = 8

OUT_PATH = Path(__file__).resolve().parent / "p1a_mini_preview.png"


def bits_to_bin(v: int) -> str:
    return format(v & 0xFF, "08b")


def decode_buttons(v: int) -> str:
    pressed = [name for name, bit in BUTTON_BITS if (v >> bit) & 1]
    return ",".join(pressed) if pressed else "-"


def get_font(size: int = 10) -> ImageFont.ImageFont:
    try:
        return ImageFont.truetype("DejaVuSansMono.ttf", size)
    except OSError:
        return ImageFont.load_default()


def draw_button_badge(draw: ImageDraw.ImageDraw, x: int, y: int, w: int, h: int, label: str, active: bool) -> None:
    bg = (200, 64, 64) if active else (48, 56, 64)
    fg = (255, 255, 255) if active else (185, 195, 210)
    draw.rectangle((x, y, x + w, y + h), outline=(180, 190, 210), fill=bg)
    draw.text((x + 3, y + 2), label, fill=fg, font=get_font(9))


def draw_controller_hud(draw: ImageDraw.ImageDraw, ox: int, oy: int, p1_bits: int) -> None:
    # Base panel
    panel_w, panel_h = 92, 40
    draw.rounded_rectangle(
        (ox, oy, ox + panel_w, oy + panel_h),
        radius=6,
        outline=(214, 214, 214),
        fill=(20, 24, 30),
        width=1,
    )

    # D-pad cross
    dpx, dpy = ox + 14, oy + 12
    active = {name: bool((p1_bits >> bit) & 1) for name, bit in BUTTON_BITS}
    base_col = (186, 190, 198)
    on_col = (255, 80, 80)

    # Cross outline
    draw.rectangle((dpx + 4, dpy, dpx + 8, dpy + 16), outline=base_col, fill=(28, 34, 40))
    draw.rectangle((dpx, dpy + 4, dpx + 12, dpy + 12), outline=base_col, fill=(28, 34, 40))

    # Direction fills
    if active["U"]:
        draw.rectangle((dpx + 5, dpy + 1, dpx + 7, dpy + 4), fill=on_col)
    if active["D"]:
        draw.rectangle((dpx + 5, dpy + 12, dpx + 7, dpy + 15), fill=on_col)
    if active["L"]:
        draw.rectangle((dpx + 1, dpy + 5, dpx + 4, dpy + 7), fill=on_col)
    if active["R"]:
        draw.rectangle((dpx + 8, dpy + 5, dpx + 11, dpy + 7), fill=on_col)

    # Start / Select bars
    sx = ox + 38
    sy = oy + 24
    draw.rectangle((sx, sy, sx + 12, sy + 5), outline=base_col, fill=(28, 34, 40))
    draw.rectangle((sx + 16, sy, sx + 28, sy + 5), outline=base_col, fill=(28, 34, 40))
    if active["SEL"]:
        draw.rectangle((sx + 2, sy + 2, sx + 10, sy + 3), fill=on_col)
    if active["STA"]:
        draw.rectangle((sx + 18, sy + 2, sx + 26, sy + 3), fill=on_col)

    # A/B circles
    ab_col = on_col if active["A"] else (30, 34, 42)
    bb_col = on_col if active["B"] else (30, 34, 42)
    draw.ellipse((ox + 73, oy + 10, ox + 83, oy + 20), outline=base_col, fill=ab_col)
    draw.ellipse((ox + 60, oy + 14, ox + 70, oy + 24), outline=base_col, fill=bb_col)

    draw.text((ox + 3, oy - 10), "P1 HUD", fill=(210, 220, 235), font=get_font(9))


def draw_debug_panel(draw: ImageDraw.ImageDraw, ox: int, oy: int, frame_idx: int, p1: int, p2: int) -> None:
    w, h = 132, 76
    draw.rectangle((ox, oy, ox + w, oy + h), outline=(170, 178, 196), fill=(18, 22, 28))
    f = get_font(10)
    accent = (242, 245, 252)
    sub = (184, 192, 208)

    lines = [
        f"FRAME: {frame_idx:08d}",
        f"P1: 8'h{p1:02X}",
        f"P2: 8'h{p2:02X}",
        f"P1 BIN: {bits_to_bin(p1)}",
        f"P2 BIN: {bits_to_bin(p2)}",
        f"P1 BTN: {decode_buttons(p1)}",
    ]

    y = oy + 6
    for i, line in enumerate(lines):
        draw.text((ox + 6, y), line, fill=accent if i < 3 else sub, font=f)
        y += 11


def draw_mock_gameplay_bg(draw: ImageDraw.ImageDraw) -> None:
    draw.rectangle((0, 0, CANVAS_W - 1, CANVAS_H - 1), fill=(34, 38, 44))
    draw.rectangle((8, 8, CANVAS_W - 9, CANVAS_H - 9), outline=(56, 62, 70), width=1)
    draw.rectangle((16, 24, CANVAS_W - 17, CANVAS_H - 17), outline=(48, 54, 62), width=1)


def draw_case_panel(case_name: str, frame_idx: int, p1: int, p2: int) -> Image.Image:
    img = Image.new("RGB", (CANVAS_W, CANVAS_H), (0, 0, 0))
    draw = ImageDraw.Draw(img)

    draw_mock_gameplay_bg(draw)
    draw.text((8, 8), case_name, fill=(235, 240, 252), font=get_font(10))

    # Overlay layout: controller HUD in top-left, debug report to the right.
    draw_controller_hud(draw, ox=10, oy=26, p1_bits=p1)
    draw_debug_panel(draw, ox=112, oy=26, frame_idx=frame_idx, p1=p1, p2=p2)
    return img


def compose_cases(cases: list[tuple[str, int, int, int]]) -> Image.Image:
    # Stack vertically for direct case-by-case comparison.
    h = len(cases) * CANVAS_H + (len(cases) - 1) * PANEL_GAP
    out = Image.new("RGB", (CANVAS_W, h), (10, 10, 12))
    y = 0
    for name, frame_idx, p1, p2 in cases:
        panel = draw_case_panel(name, frame_idx, p1, p2)
        out.paste(panel, (0, y))
        y += CANVAS_H + PANEL_GAP
    return out


def main() -> None:
    cases = [
        ("Panel A", 0, 0x00, 0x00),
        ("Panel B", 123, 0x81, 0x00),
        ("Panel C", 4567, 0xFF, 0x3C),
    ]

    composite = compose_cases(cases)
    upscaled = composite.resize(
        (composite.width * UPSCALE, composite.height * UPSCALE),
        resample=Image.Resampling.NEAREST,
    )
    upscaled.save(OUT_PATH)
    print(f"Wrote {OUT_PATH}")


if __name__ == "__main__":
    main()

