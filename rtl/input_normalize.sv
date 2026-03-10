module input_normalize
(
	input  logic [7:0] p1_raw,
	input  logic [7:0] p2_raw,
	output logic [7:0] p1_norm,
	output logic [7:0] p2_norm
);

	always_comb begin
		// Normalized order:
		// bit0 A, bit1 B, bit2 Select, bit3 Start,
		// bit4 Up, bit5 Down, bit6 Left, bit7 Right.
		p1_norm[0] = p1_raw[0];
		p1_norm[1] = p1_raw[1];
		p1_norm[2] = p1_raw[2];
		p1_norm[3] = p1_raw[3];
		p1_norm[4] = p1_raw[4];
		p1_norm[5] = p1_raw[5];
		p1_norm[6] = p1_raw[6];
		p1_norm[7] = p1_raw[7];

		p2_norm[0] = p2_raw[0];
		p2_norm[1] = p2_raw[1];
		p2_norm[2] = p2_raw[2];
		p2_norm[3] = p2_raw[3];
		p2_norm[4] = p2_raw[4];
		p2_norm[5] = p2_raw[5];
		p2_norm[6] = p2_raw[6];
		p2_norm[7] = p2_raw[7];
	end

endmodule
