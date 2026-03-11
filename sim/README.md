# NES_MiSTer Verilator + SDL2 Development Harness

This directory contains a desktop simulation harness for NES_MiSTer development/debugging.

It is intentionally isolated under `sim/` and does **not** modify FPGA synthesis behavior.

## Purpose

Run a Verilated model with a live SDL2 video window and keyboard input for faster iteration on development/debug tasks.

## Requirements

### macOS

```bash
brew install verilator sdl2
```

Optional (only if regenerating the simulation T65 netlist from local VHDL):

```bash
brew install ghdl
```

### Debian/Ubuntu

```bash
sudo apt install verilator libsdl2-dev
```

## Build and run

```bash
cd sim
make
./sim_nes roms/smb1.nes
```

Fast/default build notes:

- `make` now builds an optimized simulator focused on runtime speed.
- `make fast` is an alias for the optimized build.
- `make debug` is an alias to the current build; use runtime trace flags for deep diagnostics.
- `make debug-signals` rebuilds with deep RTL debug taps enabled (slower, needed for detailed CPU/PPU/DMA traces).
- `make hud` rebuilds with RTL HUD rendering enabled (slower; default fast build compiles HUD path out).

Optional flags:

- `--dump-frames` : dump each frame as `frame_000001.png`, ...
- `--debug-video` : dump only the first 120 completed frames as `debug_frame_000001.png`, ...
- `--verbose` : print ROM/load/reset/frame diagnostics (non-black pixels, frame-change hash, CPU address)
- `--max-frames N` : stop after N frames
- `--headless` : run without SDL video presentation
- `--hud off|p1|p1p2` : input HUD mode (default `p1`)
- `--hud-pos tl|tr|bl|br` : HUD corner (default `tl`)
- `--hud-scale 1|2` : HUD scale (default `1`)
- `--trace-cpu` : enable CPU-side deep trace logs (interrupt/vector/stack/fetch flow)
- `--trace-ppu` : enable PPU-side deep trace logs ($2002/$2001/PPU register tracing)
- `--perf` : print simulation performance counters (cycle/stall/DMA summary)

Note: `--trace-cpu`, `--trace-ppu`, and detailed DMA/RDY counters in `--perf` require a `make debug-signals` build.
Note: HUD runtime flags require a `make hud` build; in default fast builds HUD outputs are disabled for speed.

By default the simulator runs with minimal diagnostics for better speed. Deep traces are opt-in.

If no ROM is provided, the simulator prints:

```text
Usage: sim_nes <romfile>
Example:
./sim_nes roms/smb1.nes
```

## Running A ROM

Place ROM files under `sim/roms/` (or pass any valid path):

```bash
cd sim
make
./sim_nes roms/smb1.nes
```

Initial ROM support:

- iNES format
- Mapper 0 (NROM)
- Mapper 1 (MMC1)

Unsupported mappers exit with:

```text
Unsupported mapper: <id>
```

## Keyboard controls

- `W` = Up
- `A` = Left
- `S` = Down
- `D` = Right
- `K` = B
- `L` = A
- `[` = Select
- `]` = Start
- `Esc` = Quit

## Notes and assumptions

- This is a development harness, not the FPGA deployment target.
- It must not introduce gameplay timing changes into the real core.
- The current MiSTer top-level (`emu` in `NES.sv`) is platform/HPS-oriented and includes VHDL and FPGA-vendor primitives that Verilator cannot compile directly.
- To keep this flow self-contained, `sim/verilator/stubs_vhdl.sv` provides simulation-only replacement modules for unsupported VHDL/primitive blocks. This keeps synthesis paths untouched but means desktop behavior is a debug harness, not a bit-accurate hardware model.
- The simulation CPU path now uses a synthesized Verilog netlist generated from the real local `rtl/t65/*.vhd` sources (`sim/third_party/t65/T65_synth.v`) via GHDL, wrapped by `sim/verilator/t65_arlet_wrapper.sv` to match the port naming expected by `rtl/nes.v`.
- Regeneration command is documented at the top of `sim/third_party/t65/T65_synth.v`.
- Keyboard input is captured in the harness (`input.cpp`) and mapped to an NES bitfield; wiring that state into gameplay input is left as a hook in `sim_main.cpp` for a future sim wrapper around MiSTer/HPS input plumbing.
- Frame dumping now writes PNG directly from the harness (no extra runtime dependency required).

## Constraints

- Simulator code stays in `sim/` only.
- No dependencies are added to synthesis/build paths.
- No gameplay RTL timing behavior is modified by this harness.
