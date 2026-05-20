// SOCD (Simultaneous Opposite Cardinal Directions) neutralizer.
// Each direction's "held" state is extended by HOLD_CYCLES after the raw
// bit drops. If both extended states overlap, the pair is forced to 0.
// This handles both input styles uniformly:
//   - Two-button / NKRO sources that report both bits high simultaneously
//     trigger conflict immediately, with no timer involvement.
//   - USB HAT-switch / SOCD-cleaned sources, which only ever report one
//     direction at a time, can hit conflict only while the just-released
//     direction is "remembered" and the opposite raw bit rises within
//     the window.
//   - If an exclusive source flips directly from one direction to the
//     other with no observed neutral, keep the pair neutral while that
//     replacement direction remains reported, up to DIRECT_CONFLICT_CYCLES.
//     If the upstream layer permanently hides the old held direction, this
//     is necessarily a best-effort fallback: the FPGA still cannot observe
//     which physical direction was released first.
// The module is purely on the joypad sample wire ahead of the existing
// strobe-driven shift register, so it adds no NES core critical path.

module socd_neutralize #(
	parameter [20:0] HOLD_CYCLES = 21'd700_000,              // ~32ms @ ~21.5 MHz
	parameter [23:0] DIRECT_CONFLICT_CYCLES = 24'd10_750_000 // ~500ms @ ~21.5 MHz
) (
	input  logic clk,
	input  logic neg_raw,
	input  logic pos_raw,
	output logic neg_out,
	output logic pos_out
);

	localparam [1:0] RAW_NONE = 2'b00;
	localparam [1:0] RAW_NEG  = 2'b01;
	localparam [1:0] RAW_POS  = 2'b10;
	localparam [1:0] RAW_BOTH = 2'b11;

	logic [20:0] neg_hold = '0;
	logic [20:0] pos_hold = '0;
	logic [23:0] direct_conflict_cnt = '0;
	logic [1:0]  raw_prev = RAW_NONE;
	logic [1:0]  direct_original = RAW_NONE;

	wire [1:0] raw_pair = {pos_raw, neg_raw};
	wire direct_flip = ((raw_prev == RAW_NEG) && (raw_pair == RAW_POS)) ||
	                   ((raw_prev == RAW_POS) && (raw_pair == RAW_NEG));

	always_ff @(posedge clk) begin
		if (neg_raw)             neg_hold <= HOLD_CYCLES;
		else if (|neg_hold)      neg_hold <= neg_hold - 21'd1;

		if (pos_raw)             pos_hold <= HOLD_CYCLES;
		else if (|pos_hold)      pos_hold <= pos_hold - 21'd1;

		if (direct_flip) begin
			direct_conflict_cnt <= DIRECT_CONFLICT_CYCLES;
			direct_original <= raw_prev;
		end else if ((raw_pair == RAW_NONE) || (raw_pair == RAW_BOTH) || (raw_pair == direct_original)) begin
			direct_conflict_cnt <= '0;
		end else if (|direct_conflict_cnt) begin
			direct_conflict_cnt <= direct_conflict_cnt - 24'd1;
		end

		raw_prev <= raw_pair;
	end

	wire remembered_conflict = (neg_raw | (|neg_hold)) & (pos_raw | (|pos_hold));
	wire direct_conflict = (|direct_conflict_cnt) &&
	                       (raw_pair != RAW_NONE) &&
	                       (raw_pair != RAW_BOTH) &&
	                       (raw_pair != direct_original);
	wire conflict = remembered_conflict | direct_conflict;

	assign neg_out = conflict ? 1'b0 : neg_raw;
	assign pos_out = conflict ? 1'b0 : pos_raw;

endmodule
