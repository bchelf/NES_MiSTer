module hud_assets
#(
	parameter int W = 128,
	parameter int H = 64
)
(
	input  logic [6:0] x,
	input  logic [5:0] y,
	output logic base,
	output logic mask_a,
	output logic mask_b,
	output logic mask_start,
	output logic mask_select,
	output logic mask_up,
	output logic mask_down,
	output logic mask_left,
	output logic mask_right
);

	function automatic bit in_round_rect(
		input integer px,
		input integer py,
		input integer x0,
		input integer y0,
		input integer rw,
		input integer rh,
		input integer rr
	);
		integer cx;
		integer cy;
		integer dx;
		integer dy;
		begin
			if (px < x0 || px >= (x0 + rw) || py < y0 || py >= (y0 + rh)) begin
				in_round_rect = 1'b0;
			end else if ((px >= x0 + rr && px < x0 + rw - rr) || (py >= y0 + rr && py < y0 + rh - rr)) begin
				in_round_rect = 1'b1;
			end else begin
				cx = (px < x0 + rr) ? (x0 + rr - 1) : (x0 + rw - rr);
				cy = (py < y0 + rr) ? (y0 + rr - 1) : (y0 + rh - rr);
				dx = px - cx;
				dy = py - cy;
				in_round_rect = (dx * dx + dy * dy) <= (rr * rr);
			end
		end
	endfunction

	function automatic bit in_circle(
		input integer px,
		input integer py,
		input integer cx,
		input integer cy,
		input integer r
	);
		integer dx;
		integer dy;
		begin
			dx = px - cx;
			dy = py - cy;
			in_circle = (dx * dx + dy * dy) <= (r * r);
		end
	endfunction

	always_comb begin
		integer px;
		integer py;
		bit dpad_h;
		bit dpad_v;

		px = x;
		py = y;

		dpad_h = (py >= 29 && py <= 35 && px >= 17 && px <= 41);
		dpad_v = (px >= 26 && px <= 32 && py >= 20 && py <= 44);

		base =
			(in_round_rect(px, py, 2, 6, 124, 52, 10) && !in_round_rect(px, py, 5, 9, 118, 46, 8)) ||
			((dpad_h || dpad_v) &&
			 !((py >= 30 && py <= 34 && px >= 19 && px <= 39) || (px >= 27 && px <= 31 && py >= 22 && py <= 42))) ||
			(in_round_rect(px, py, 66, 34, 16, 8, 3) && !in_round_rect(px, py, 67, 35, 14, 6, 2)) ||
			(in_round_rect(px, py, 46, 34, 16, 8, 3) && !in_round_rect(px, py, 47, 35, 14, 6, 2)) ||
			(in_circle(px, py, 95, 30, 9) && !in_circle(px, py, 95, 30, 7)) ||
			(in_circle(px, py, 80, 37, 9) && !in_circle(px, py, 80, 37, 7));

		mask_a      = in_circle(px, py, 95, 30, 7);
		mask_b      = in_circle(px, py, 80, 37, 7);
		mask_start  = in_round_rect(px, py, 67, 35, 14, 6, 2);
		mask_select = in_round_rect(px, py, 47, 35, 14, 6, 2);
		mask_up     = (px >= 27 && px <= 31 && py >= 22 && py <= 30);
		mask_down   = (px >= 27 && px <= 31 && py >= 34 && py <= 42);
		mask_left   = (px >= 19 && px <= 27 && py >= 30 && py <= 34);
		mask_right  = (px >= 31 && px <= 39 && py >= 30 && py <= 34);
	end

endmodule
