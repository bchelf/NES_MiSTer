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

	// Controller body
	localparam int BODY_X = 2;
	localparam int BODY_Y = 6;
	localparam int BODY_W = 124;
	localparam int BODY_H = 52;
	localparam int BODY_R_OUTER = 10;
	localparam int BODY_BORDER = 1;

	// D-pad geometry
	localparam int DP_CX = 28;
	localparam int DP_CY = 32;
	localparam int DP_SEG = 6;       // Direction segment size (equal fill area)
	localparam int DP_BORDER = 1;    // Outline thickness

	// A/B geometry
	localparam int AB_A_CX = 106;
	localparam int AB_A_CY = 32;
	localparam int AB_B_CX = 88;
	localparam int AB_B_CY = 32;
	localparam int AB_FILL_R = 5;
	localparam int AB_OUTER_R = 7;

	// Start/Select geometry
	localparam int SS_Y = 35;
	localparam int SS_SEL_X = 46;
	localparam int SS_START_X = 62;
	localparam int SS_W = 13;
	localparam int SS_H = 6;
	localparam int SS_BORDER = 1;

	function automatic bit in_rect(
		input integer px,
		input integer py,
		input integer x0,
		input integer y0,
		input integer rw,
		input integer rh
	);
		begin
			in_rect = (px >= x0) && (px < x0 + rw) && (py >= y0) && (py < y0 + rh);
		end
	endfunction

	function automatic bit body_outline_raw_at(
		input integer px,
		input integer py
	);
		bit outer;
		bit inner;
		begin
			outer = in_round_rect(px, py, BODY_X, BODY_Y, BODY_W, BODY_H, BODY_R_OUTER);
			inner = in_round_rect(px, py, BODY_X + BODY_BORDER, BODY_Y + BODY_BORDER,
				BODY_W - (2 * BODY_BORDER), BODY_H - (2 * BODY_BORDER), BODY_R_OUTER - BODY_BORDER);
			body_outline_raw_at = outer && !inner;
		end
	endfunction

	function automatic bit in_round_rect(
		input integer px,
		input integer py,
		input integer x0,
		input integer y0,
		input integer rw,
		input integer rh,
		input integer rr
	);
		integer x1;
		integer y1;
		integer nx;
		integer ny;
		integer dx;
		integer dy;
		begin
			x1 = x0 + rw - 1;
			y1 = y0 + rh - 1;
			if (px < x0 || px > x1 || py < y0 || py > y1) begin
				in_round_rect = 1'b0;
			end else begin
				nx = (px < (x0 + rr)) ? (x0 + rr) : (px > (x1 - rr)) ? (x1 - rr) : px;
				ny = (py < (y0 + rr)) ? (y0 + rr) : (py > (y1 - rr)) ? (y1 - rr) : py;
				dx = px - nx;
				dy = py - ny;
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
		bit body_outer;
		bit body_inner;
		bit body_raw;
		bit body_fix;
		bit body_outline;

		bit dp_center;
		bit dp_up;
		bit dp_down;
		bit dp_left;
		bit dp_right;
		bit dp_fill;
		bit dp_center_o;
		bit dp_up_o;
		bit dp_down_o;
		bit dp_left_o;
		bit dp_right_o;
		bit dp_outer;

		bit start_in;
		bit select_in;
		bit start_out;
		bit select_out;

		bit a_fill;
		bit b_fill;
		bit a_out;
		bit b_out;

		px = x;
		py = y;

		body_outer = in_round_rect(px, py, BODY_X, BODY_Y, BODY_W, BODY_H, BODY_R_OUTER);
		body_inner = in_round_rect(px, py, BODY_X + BODY_BORDER, BODY_Y + BODY_BORDER,
			BODY_W - (2 * BODY_BORDER), BODY_H - (2 * BODY_BORDER), BODY_R_OUTER - BODY_BORDER);
		body_raw = body_outer && !body_inner;
		// 1x HUD samples only even/even asset pixels (local_x/y = rel*2). Add bridge pixels
		// only on even/even coordinates when neighboring raw body outline exists.
		body_fix = ~px[0] && ~py[0] && !body_raw &&
			(
				body_outline_raw_at(px-1, py) || body_outline_raw_at(px+1, py) ||
				body_outline_raw_at(px, py-1) || body_outline_raw_at(px, py+1) ||
				body_outline_raw_at(px-1, py-1) || body_outline_raw_at(px+1, py-1) ||
				body_outline_raw_at(px-1, py+1) || body_outline_raw_at(px+1, py+1)
			);
		body_outline = body_raw || body_fix;

		// Equal-area directional segments (each DP_SEG x DP_SEG).
		dp_center = in_rect(px, py, DP_CX - DP_SEG/2, DP_CY - DP_SEG/2, DP_SEG, DP_SEG);
		dp_up     = in_rect(px, py, DP_CX - DP_SEG/2, DP_CY - (3*DP_SEG/2), DP_SEG, DP_SEG);
		dp_down   = in_rect(px, py, DP_CX - DP_SEG/2, DP_CY + DP_SEG/2, DP_SEG, DP_SEG);
		dp_left   = in_rect(px, py, DP_CX - (3*DP_SEG/2), DP_CY - DP_SEG/2, DP_SEG, DP_SEG);
		dp_right  = in_rect(px, py, DP_CX + DP_SEG/2, DP_CY - DP_SEG/2, DP_SEG, DP_SEG);
		dp_fill = dp_center || dp_up || dp_down || dp_left || dp_right;

		dp_center_o = in_rect(px, py, DP_CX - (DP_SEG/2 + DP_BORDER), DP_CY - (DP_SEG/2 + DP_BORDER),
			DP_SEG + 2*DP_BORDER, DP_SEG + 2*DP_BORDER);
		dp_up_o = in_rect(px, py, DP_CX - (DP_SEG/2 + DP_BORDER), DP_CY - (3*DP_SEG/2 + DP_BORDER),
			DP_SEG + 2*DP_BORDER, DP_SEG + 2*DP_BORDER);
		dp_down_o = in_rect(px, py, DP_CX - (DP_SEG/2 + DP_BORDER), DP_CY + DP_SEG/2 - DP_BORDER,
			DP_SEG + 2*DP_BORDER, DP_SEG + 2*DP_BORDER);
		dp_left_o = in_rect(px, py, DP_CX - (3*DP_SEG/2 + DP_BORDER), DP_CY - (DP_SEG/2 + DP_BORDER),
			DP_SEG + 2*DP_BORDER, DP_SEG + 2*DP_BORDER);
		dp_right_o = in_rect(px, py, DP_CX + DP_SEG/2 - DP_BORDER, DP_CY - (DP_SEG/2 + DP_BORDER),
			DP_SEG + 2*DP_BORDER, DP_SEG + 2*DP_BORDER);
		dp_outer = dp_center_o || dp_up_o || dp_down_o || dp_left_o || dp_right_o;

		a_fill = in_circle(px, py, AB_A_CX, AB_A_CY, AB_FILL_R);
		b_fill = in_circle(px, py, AB_B_CX, AB_B_CY, AB_FILL_R);
		a_out = in_circle(px, py, AB_A_CX, AB_A_CY, AB_OUTER_R);
		b_out = in_circle(px, py, AB_B_CX, AB_B_CY, AB_OUTER_R);

		start_out = in_rect(px, py, SS_START_X - SS_BORDER, SS_Y - SS_BORDER,
			SS_W + 2*SS_BORDER, SS_H + 2*SS_BORDER);
		select_out = in_rect(px, py, SS_SEL_X - SS_BORDER, SS_Y - SS_BORDER,
			SS_W + 2*SS_BORDER, SS_H + 2*SS_BORDER);
		start_in = in_rect(px, py, SS_START_X, SS_Y, SS_W, SS_H);
		select_in = in_rect(px, py, SS_SEL_X, SS_Y, SS_W, SS_H);

		base =
			body_outline ||
			(dp_outer && !dp_fill) ||
			(start_out && !start_in) ||
			(select_out && !select_in) ||
			(a_out && !a_fill) ||
			(b_out && !b_fill);

		mask_a      = a_fill;
		mask_b      = b_fill;
		// Note: HUD 1x samples every other asset row (local_y = rel_y << 1).
		// Use a 3px-high band aligned to sampled rows so it appears 2px tall on screen.
		mask_start  = in_rect(px, py, SS_START_X + 1, SS_Y + (SS_H/2) - 2, SS_W - 2, 3);
		mask_select = in_rect(px, py, SS_SEL_X + 1, SS_Y + (SS_H/2) - 2, SS_W - 2, 3);
		mask_up     = dp_up;
		mask_down   = dp_down;
		mask_left   = dp_left;
		mask_right  = dp_right;
	end

endmodule
