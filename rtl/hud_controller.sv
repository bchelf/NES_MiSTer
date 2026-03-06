module hud_controller
(
	input  logic        clk,
	input  logic [8:0]  x,
	input  logic [8:0]  y,
	input  logic [7:0]  p1_frame,
	input  logic [7:0]  p2_frame,
	input  logic [1:0]  hud_mode,
	input  logic [1:0]  hud_position,
	input  logic        hud_scale,
	output logic        hud_active,
	output logic [23:0] hud_pixel
);

	localparam int HUD_W = 64;
	localparam int HUD_H = 32;
	localparam int SCR_W = 256;
	localparam int SCR_H = 240;
	localparam int MARGIN = 8;

	logic base_px;
	logic mask_a;
	logic mask_b;
	logic mask_start;
	logic mask_select;
	logic mask_up;
	logic mask_down;
	logic mask_left;
	logic mask_right;
	logic [6:0] local_x;
	logic [5:0] local_y;
	logic [7:0] active_buttons;

	hud_assets assets
	(
		.x(local_x),
		.y(local_y),
		.base(base_px),
		.mask_a(mask_a),
		.mask_b(mask_b),
		.mask_start(mask_start),
		.mask_select(mask_select),
		.mask_up(mask_up),
		.mask_down(mask_down),
		.mask_left(mask_left),
		.mask_right(mask_right)
	);

	always_comb begin
		integer scale_mul;
		integer sprite_w;
		integer sprite_h;
		integer gap;
		integer count;
		integer total_w;
		integer x0;
		integer y0;
		integer rel_x;
		integer rel_y;
		integer ctrl_sel;
		integer ctrl_x;
		integer x_i;
		integer y_i;
		logic lit_px;
		logic draw_px;

		count = (hud_mode == 2'd2) ? 2 : (hud_mode == 2'd1) ? 1 : 0;
		// Two 2x HUDs cannot fit in 256 active pixels.
		// Keep P1+P2 mode readable by forcing 1x in dual-controller mode.
		scale_mul = (hud_scale && (count == 1)) ? 2 : 1;
		sprite_w = HUD_W * scale_mul;
		sprite_h = HUD_H * scale_mul;
		gap = 8 * scale_mul;
		total_w = (count == 2) ? (sprite_w * 2 + gap) : sprite_w;

		case (hud_position)
			2'd0: begin
				x0 = MARGIN;
				y0 = MARGIN;
			end
			2'd1: begin
				x0 = SCR_W - total_w - MARGIN;
				y0 = MARGIN;
			end
			2'd2: begin
				x0 = MARGIN;
				y0 = SCR_H - sprite_h - MARGIN;
			end
			default: begin
				x0 = SCR_W - total_w - MARGIN;
				y0 = SCR_H - sprite_h - MARGIN;
			end
		endcase

		if (x0 < 0) x0 = 0;
		if (y0 < 0) y0 = 0;

		hud_active = 1'b0;
		hud_pixel = 24'h000000;
		local_x = 7'd0;
		local_y = 6'd0;
		active_buttons = 8'h00;
		draw_px = 1'b0;
		lit_px = 1'b0;
		x_i = {1'b0, x};
		y_i = {1'b0, y};

		if (count != 0 && x_i >= x0 && x_i < (x0 + total_w) && y_i >= y0 && y_i < (y0 + sprite_h)) begin
			rel_x = x_i - x0;
			rel_y = y_i - y0;
			ctrl_sel = 0;

			if (count == 2 && rel_x >= (sprite_w + gap)) ctrl_sel = 1;
			ctrl_x = rel_x - ((ctrl_sel == 1) ? (sprite_w + gap) : 0);

			if (ctrl_x >= 0 && ctrl_x < sprite_w) begin
				// Render at 64x32 base size by sampling the 128x64 asset.
				// At 2x (single HUD), map 1:1 back to the source asset.
				if (scale_mul == 2) begin
					local_x = ctrl_x[6:0];
					local_y = rel_y[5:0];
				end else begin
					local_x = {ctrl_x[5:0], 1'b0};
					local_y = {rel_y[4:0], 1'b0};
				end
				active_buttons = (ctrl_sel == 0) ? p1_frame : p2_frame;

				lit_px =
					(mask_a      && active_buttons[0]) |
					(mask_b      && active_buttons[1]) |
					(mask_select && active_buttons[2]) |
					(mask_start  && active_buttons[3]) |
					(mask_up     && active_buttons[4]) |
					(mask_down   && active_buttons[5]) |
					(mask_left   && active_buttons[6]) |
					(mask_right  && active_buttons[7]);

				draw_px = base_px | lit_px;
				if (draw_px) begin
					hud_active = 1'b1;
					hud_pixel = lit_px ? 24'hFF4040 : 24'hD0D0D0;
				end
			end
		end
	end

endmodule
