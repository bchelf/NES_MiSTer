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

	localparam int PIXELS = W * H;

	logic [PIXELS-1:0] base_rom;
	logic [PIXELS-1:0] a_rom;
	logic [PIXELS-1:0] b_rom;
	logic [PIXELS-1:0] start_rom;
	logic [PIXELS-1:0] select_rom;
	logic [PIXELS-1:0] up_rom;
	logic [PIXELS-1:0] down_rom;
	logic [PIXELS-1:0] left_rom;
	logic [PIXELS-1:0] right_rom;

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

	function automatic int idx(input integer px, input integer py);
		idx = py * W + px;
	endfunction

	initial begin : init_rom
		integer px;
		integer py;
		integer i;
		bit outer;
		bit inner;
		bit dpad_h;
		bit dpad_v;
		bit start_outline;
		bit select_outline;
		bit face_a_outline;
		bit face_b_outline;

		for (i = 0; i < PIXELS; i = i + 1) begin
			base_rom[i]   = 1'b0;
			a_rom[i]      = 1'b0;
			b_rom[i]      = 1'b0;
			start_rom[i]  = 1'b0;
			select_rom[i] = 1'b0;
			up_rom[i]     = 1'b0;
			down_rom[i]   = 1'b0;
			left_rom[i]   = 1'b0;
			right_rom[i]  = 1'b0;
		end

		for (py = 0; py < H; py = py + 1) begin
			for (px = 0; px < W; px = px + 1) begin
				// Main controller shell outline.
				outer = in_round_rect(px, py, 2, 6, 124, 52, 10);
				inner = in_round_rect(px, py, 5, 9, 118, 46, 8);
				if (outer && !inner) base_rom[idx(px, py)] = 1'b1;

				// D-pad base outline.
				dpad_h = (py >= 29 && py <= 35 && px >= 17 && px <= 41);
				dpad_v = (px >= 26 && px <= 32 && py >= 20 && py <= 44);
				if ((dpad_h || dpad_v) &&
					!((py >= 30 && py <= 34 && px >= 19 && px <= 39) || (px >= 27 && px <= 31 && py >= 22 && py <= 42))) begin
					base_rom[idx(px, py)] = 1'b1;
				end

				// Start/Select outlines.
				start_outline  = in_round_rect(px, py, 66, 34, 16, 8, 3) && !in_round_rect(px, py, 67, 35, 14, 6, 2);
				select_outline = in_round_rect(px, py, 46, 34, 16, 8, 3) && !in_round_rect(px, py, 47, 35, 14, 6, 2);
				if (start_outline || select_outline) base_rom[idx(px, py)] = 1'b1;

				// A/B outlines.
				face_a_outline = in_circle(px, py, 95, 30, 9) && !in_circle(px, py, 95, 30, 7);
				face_b_outline = in_circle(px, py, 80, 37, 9) && !in_circle(px, py, 80, 37, 7);
				if (face_a_outline || face_b_outline) base_rom[idx(px, py)] = 1'b1;

				// Per-button masks.
				if (in_circle(px, py, 95, 30, 7)) a_rom[idx(px, py)] = 1'b1;
				if (in_circle(px, py, 80, 37, 7)) b_rom[idx(px, py)] = 1'b1;
				if (in_round_rect(px, py, 67, 35, 14, 6, 2)) start_rom[idx(px, py)] = 1'b1;
				if (in_round_rect(px, py, 47, 35, 14, 6, 2)) select_rom[idx(px, py)] = 1'b1;

				if (px >= 27 && px <= 31 && py >= 22 && py <= 30) up_rom[idx(px, py)] = 1'b1;
				if (px >= 27 && px <= 31 && py >= 34 && py <= 42) down_rom[idx(px, py)] = 1'b1;
				if (px >= 19 && px <= 27 && py >= 30 && py <= 34) left_rom[idx(px, py)] = 1'b1;
				if (px >= 31 && px <= 39 && py >= 30 && py <= 34) right_rom[idx(px, py)] = 1'b1;
			end
		end
	end

	always_comb begin
		integer a;
		a = idx(x, y);
		base        = base_rom[a];
		mask_a      = a_rom[a];
		mask_b      = b_rom[a];
		mask_start  = start_rom[a];
		mask_select = select_rom[a];
		mask_up     = up_rom[a];
		mask_down   = down_rom[a];
		mask_left   = left_rom[a];
		mask_right  = right_rom[a];
	end

endmodule
