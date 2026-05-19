// SOCD (Simultaneous Opposite Cardinal Directions) neutralizer.
// While both opposite-direction bits are reported high, force both to 0.
// Also handles the case where the upstream input layer (USB HAT switches,
// OS-level SOCD cleaning, etc) cannot report both directions high at the
// same time: a direct flip from one direction to the other with no
// observed neutral sample is treated as "both intended" and the pair is
// NOP'd. NOP is released when both raw inputs are 0, or when exactly one
// direction has been held alone continuously for SETTLE_CYCLES (allowing
// the user to release one of the two and have the still-held one take
// over without needing both to go back to neutral).
//
// This module operates purely on the joypad sample wire; its outputs are
// consumed combinationally by the existing joypad shift-register load, so
// it adds no timing pressure to the NES CPU/PPU/APU paths.

module socd_neutralize #(
	parameter [16:0] SETTLE_CYCLES = 17'd86_000  // ~4ms @ ~21.5 MHz
) (
	input  logic clk,
	input  logic neg_raw,
	input  logic pos_raw,
	output logic neg_out,
	output logic pos_out
);

	localparam logic [1:0] ST_NEUTRAL  = 2'd0;
	localparam logic [1:0] ST_HOLD_NEG = 2'd1;
	localparam logic [1:0] ST_HOLD_POS = 2'd2;
	localparam logic [1:0] ST_CONFLICT = 2'd3;

	logic [1:0]  state  = ST_NEUTRAL;
	logic [16:0] settle = '0;

	wire both = neg_raw & pos_raw;

	always_ff @(posedge clk) begin
		case (state)
			ST_NEUTRAL: begin
				settle <= '0;
				if      (both)     state <= ST_CONFLICT;
				else if (neg_raw)  state <= ST_HOLD_NEG;
				else if (pos_raw)  state <= ST_HOLD_POS;
			end
			ST_HOLD_NEG: begin
				settle <= '0;
				if      (pos_raw)  state <= ST_CONFLICT; // L→R direct flip OR both high
				else if (~neg_raw) state <= ST_NEUTRAL;
			end
			ST_HOLD_POS: begin
				settle <= '0;
				if      (neg_raw)  state <= ST_CONFLICT;
				else if (~pos_raw) state <= ST_NEUTRAL;
			end
			ST_CONFLICT: begin
				if (~neg_raw & ~pos_raw) begin
					state  <= ST_NEUTRAL;
					settle <= '0;
				end else if (both) begin
					settle <= '0;                       // reset any release timer
				end else begin
					if (settle >= SETTLE_CYCLES) begin
						state  <= neg_raw ? ST_HOLD_NEG : ST_HOLD_POS;
						settle <= '0;
					end else begin
						settle <= settle + 17'd1;
					end
				end
			end
		endcase
	end

	// Output is purely combinational off the state and raw inputs.
	// NOP whenever we're latched in CONFLICT or both raw bits are currently high.
	assign neg_out = (state == ST_CONFLICT || both) ? 1'b0 : neg_raw;
	assign pos_out = (state == ST_CONFLICT || both) ? 1'b0 : pos_raw;

endmodule
