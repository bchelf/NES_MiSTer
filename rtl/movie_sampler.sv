module movie_sampler
(
	input  logic        clk,
	input  logic        reset,
	input  logic        frame_tick,
	input  logic [7:0]  p1_frame,
	input  logic [7:0]  p2_frame,
	output logic [31:0] sampled_frame_idx,
	output logic [7:0]  sampled_p1,
	output logic [7:0]  sampled_p2
);

	always_ff @(posedge clk) begin
		if (reset) begin
			sampled_frame_idx <= 32'd0;
			sampled_p1 <= 8'd0;
			sampled_p2 <= 8'd0;
		end else if (frame_tick) begin
			sampled_frame_idx <= sampled_frame_idx + 32'd1;
			sampled_p1 <= p1_frame;
			sampled_p2 <= p2_frame;
		end
	end

endmodule
