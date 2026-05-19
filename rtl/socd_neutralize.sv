// SOCD (Simultaneous Opposite Cardinal Directions) neutralizer.
// Each direction's "held" state is extended by HOLD_CYCLES after the raw
// bit drops. If both extended states overlap, the pair is forced to 0.
// This handles both input styles uniformly:
//   - Two-button / NKRO sources that report both bits high simultaneously
//     trigger conflict immediately, with no timer involvement.
//   - USB HAT-switch / SOCD-cleaned sources, which only ever report one
//     direction at a time, still hit conflict because the just-released
//     direction is "remembered" long enough for the opposite raw bit to
//     rise within the window.
// The module is purely on the joypad sample wire ahead of the existing
// strobe-driven shift register, so it adds no NES core critical path.

module socd_neutralize #(
	parameter [16:0] HOLD_CYCLES = 17'd86_000  // ~4ms @ ~21.5 MHz
) (
	input  logic clk,
	input  logic neg_raw,
	input  logic pos_raw,
	output logic neg_out,
	output logic pos_out
);

	logic [16:0] neg_hold = '0;
	logic [16:0] pos_hold = '0;

	always_ff @(posedge clk) begin
		if (neg_raw)             neg_hold <= HOLD_CYCLES;
		else if (|neg_hold)      neg_hold <= neg_hold - 17'd1;

		if (pos_raw)             pos_hold <= HOLD_CYCLES;
		else if (|pos_hold)      pos_hold <= pos_hold - 17'd1;
	end

	wire conflict = (neg_raw | (|neg_hold)) & (pos_raw | (|pos_hold));

	assign neg_out = conflict ? 1'b0 : neg_raw;
	assign pos_out = conflict ? 1'b0 : pos_raw;

endmodule
