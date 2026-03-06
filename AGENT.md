# AGENT.md

## Repository Overview
This repository is the MiSTer NES FPGA core (`NES_MiSTer`), based on FPGANES and maintained in the MiSTer ecosystem.

Upstream project:
- https://github.com/MiSTer-devel/NES_MiSTer

## Development Model
This fork is experimenting with TAS-oriented functionality and controller HUD debugging tools while preserving existing gameplay behavior.

## Input Path Architecture
Controller inputs enter through `hps_io` joystick signals in `NES.sv` (`joyA/joyB/joyC/joyD`) and are converted into NES button ordering (`nes_joy_A/B/C/D`).

The effective controller bytes used to load the NES joypad shift sources are:
- `joypad_bits_load_p1`
- `joypad_bits_load_p2`

These values feed `joypad_bits` / `joypad_bits2`, which are then shifted in response to `joypad_clock` and read through `$4016/$4017` behavior.

`rtl/input_normalize.sv` receives:
- `p1_raw = joypad_bits_load_p1[7:0]`
- `p2_raw = joypad_bits_load_p2[7:0]`

and outputs normalized bits:
- bit0 A
- bit1 B
- bit2 Select
- bit3 Start
- bit4 Up
- bit5 Down
- bit6 Left
- bit7 Right

`p1_frame` / `p2_frame` are frame-latched snapshots of these normalized effective bits and are used by the HUD renderer.

Important: HUD logic must read the same effective controller bits that drive the `$4016/$4017` shift-register path, not raw HPS joystick bits.

## Raw Serial Mode
`raw_serial` is enabled by `status[52:51]` in `NES.sv`.

When `raw_serial` is active, gameplay controller reads use external serial controller lines (`USER_IN`) through the raw serial path, not only the normal parallel joypad bit path.

To avoid showing incorrect controller state, HUD is intentionally disabled in this mode:
- `hud_mode_effective = raw_serial ? 2'd0 : hud_mode`

## HUD Implementation (P0)
P0 HUD-related modules/files:
- `rtl/hud_controller.sv`
- `rtl/hud_assets.sv`
- `rtl/input_normalize.sv`

Key behavior:
- `frame_tick` is derived from `nes_vblank` rising edge.
- `p1_frame` / `p2_frame` latch once per frame on `frame_tick`.
- `hud_controller` reads `cycle`/`scanline` and frame-latched inputs to render overlay pixels.
- `hud_assets` provides 128x64 base/mask ROM-style bitmaps used by the HUD renderer.
- Overlay is applied in `NES.sv` by muxing HUD RGB over core RGB before `video_mixer`.

HUD options in `CONF_STR`:
- Input HUD: Off / P1 / P1+P2
- HUD Position: TL / TR / BL / BR
- HUD Scale: 1x / 2x

## Coding Constraints
Agents modifying this repository should follow these constraints:
- Do not change gameplay behavior.
- Do not alter controller shift-register semantics.
- HUD must read effective controller bits, not raw joystick input.
- Avoid modifying NES timing or the video pipeline unless required.

## TAS Architecture Constraints

Future TAS playback must inject controller input at the same point
used to load joypad_bits_load_p1/p2 so that playback matches the
hardware shift register semantics.

## Future TAS Work (High Level Only)
Future goals discussed for this fork include:
- TAS movie playback
- TAS input override
- Coaching comparison mode

This document does not define implementation details for those systems.

## Safety Guidelines for Agents
Agents should:
- Make minimal, targeted changes.
- Avoid speculative refactors.
- Run verification passes after implementing changes.
- Explain reasoning clearly when touching core timing or input logic.
