module cpu_wrapper_tb(
    input  logic clk,
    input  logic res_n,
    input  logic pwr_n,
    input  logic enable,
    input  logic rdy,
    input  logic irq_n,
    input  logic nmi_n,
    output logic [15:0] addr,
    output logic [7:0]  do_data,
    output logic [7:0]  di_data,
    output logic        rw_n,
    output logic [7:0]  mem2,
    output logic [7:0]  mem3,
    output logic [7:0]  mem4
);
    logic [7:0] mem [0:65535];

    logic [1:0]  mode;
    logic        bcd_en;
    logic        instrnew;
    logic [63:0] ss_din;
    logic [9:0]  ss_adr;
    logic        ss_wren;
    logic        ss_rst;
    logic        ss_load;
    logic [63:0] ss_dout;

    T65 dut (
        .mode(mode),
        .BCD_en(bcd_en),
        .res_n(res_n),
        .pwr_n(pwr_n),
        .clk(clk),
        .enable(enable),
        .rdy(rdy),
        .IRQ_n(irq_n),
        .NMI_n(nmi_n),
        .R_W_n(rw_n),
        .A(addr),
        .DI(di_data),
        .DO(do_data),
        .Instrnew(instrnew),
        .SaveStateBus_Din(ss_din),
        .SaveStateBus_Adr(ss_adr),
        .SaveStateBus_wren(ss_wren),
        .SaveStateBus_rst(ss_rst),
        .SaveStateBus_load(ss_load),
        .SaveStateBus_Dout(ss_dout)
    );

    logic [7:0] di_reg;
    assign di_data = di_reg;
    assign mem2 = mem[16'h0002];
    assign mem3 = mem[16'h0003];
    assign mem4 = mem[16'h0004];

    always_ff @(posedge clk) begin
        // Break combinational AB->DI->AB loops by modeling a synchronous data bus.
        di_reg <= rw_n ? mem[addr] : do_data;
        if (!rw_n) mem[addr] <= do_data;
    end

    integer i;
    initial begin
        mode = 2'b00;
        bcd_en = 1'b0;
        ss_din = 64'h0;
        ss_adr = 10'h0;
        ss_wren = 1'b0;
        ss_rst = 1'b0;
        ss_load = 1'b0;
        di_reg = 8'h00;

        for (i = 0; i < 65536; i = i + 1) mem[i] = 8'hEA; // NOP fill

        // Reset vector -> 0x8000
        mem[16'hFFFC] = 8'h00;
        mem[16'hFFFD] = 8'h80;

        // IRQ/BRK vector -> 0x9000
        mem[16'hFFFE] = 8'h00;
        mem[16'hFFFF] = 8'h90;

        // NMI vector -> 0xA000
        mem[16'hFFFA] = 8'h00;
        mem[16'hFFFB] = 8'hA0;

        // Main program @8000:
        // LDA #$12; STA $02; CLI; NOP; NOP; JMP $8005
        mem[16'h8000] = 8'hA9;
        mem[16'h8001] = 8'h12;
        mem[16'h8002] = 8'h85;
        mem[16'h8003] = 8'h02;
        mem[16'h8004] = 8'h58;
        mem[16'h8005] = 8'hEA;
        mem[16'h8006] = 8'hEA;
        mem[16'h8007] = 8'h4C;
        mem[16'h8008] = 8'h05;
        mem[16'h8009] = 8'h80;

        // IRQ handler @9000: LDA #$34; STA $03; RTI
        mem[16'h9000] = 8'hA9;
        mem[16'h9001] = 8'h34;
        mem[16'h9002] = 8'h85;
        mem[16'h9003] = 8'h03;
        mem[16'h9004] = 8'h40;

        // NMI handler @A000: LDA #$56; STA $04; RTI
        mem[16'hA000] = 8'hA9;
        mem[16'hA001] = 8'h56;
        mem[16'hA002] = 8'h85;
        mem[16'hA003] = 8'h04;
        mem[16'hA004] = 8'h40;
    end
endmodule
