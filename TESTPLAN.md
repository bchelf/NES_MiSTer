# TESTPLAN.md

## P0 HUD Manual Test Plan (Real MiSTer Hardware)

### Setup
1. Copy the built NES core `.rbf` to MiSTer.
2. Boot NES core and load any game with immediate controller response (e.g., title/menu navigation).
3. In OSD: set `Input HUD = P1` to start.

### 1) Button Mapping Validation (P1)
1. Press and hold each button one at a time on P1: `A`, `B`, `Select`, `Start`, `Up`, `Down`, `Left`, `Right`.
2. Confirm exactly the matching HUD region lights for each press.
Expected:
- Correct 1:1 mapping, no wrong region lights.

### 2) Diagonals (P1)
1. Hold `Up+Left`, `Up+Right`, `Down+Left`, `Down+Right`.
Expected:
- Two D-pad directions light simultaneously for each diagonal.

### 3) Rapid Tapping
1. Rapidly tap `A` then `B` repeatedly.
2. Rapidly tap D-pad directions.
Expected:
- HUD tracks taps without sticking or obvious dropped visual state.

### 4) Start/Select
1. Press `Start` only, then `Select` only, then both together.
Expected:
- Start/Select mask regions light correctly, including simultaneous press.

### 5) P1 vs P2
1. Set `Input HUD = P1+P2`.
2. Press buttons only on P1, then only on P2.
Expected:
- Left HUD responds to P1 only.
- Right HUD responds to P2 only.
- No cross-lighting between players.

### 6) HUD Position Options
1. Cycle `HUD Position`: `TL`, `TR`, `BL`, `BR`.
Expected:
- HUD appears in selected corner each time.
- Game remains visible and playable.

### 7) Scale Options
1. With `Input HUD = P1`, switch `HUD Scale` between `1x` and `2x`.
2. With `Input HUD = P1+P2`, switch `HUD Scale`.
Expected:
- P1 mode size changes between scales.
- P1+P2 remains usable and visible (both controllers visible).

### 8) Reset Behavior
1. Trigger core reset from OSD (`Reset`).
2. After reset, press buttons again.
Expected:
- HUD resumes normal operation after reset.
- No stale lit buttons after reset.

### 9) Opening/Closing OSD
1. Open OSD while pressing inputs; close OSD.
2. Repeat several times.
Expected:
- No HUD corruption/sticking after OSD transitions.
- Gameplay/input behavior unchanged.

### 10) Video Outputs
1. Run tests 1-9 on HDMI output.
2. If analog output is available, repeat key checks (1, 5, 6, 7, 9).
Expected:
- HUD renders correctly on HDMI and analog (if present).

## Pass Criteria
- All expected outcomes above are met.
- No gameplay/input regressions observed during testing.
