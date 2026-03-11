// Simulation-only T65 compatibility wrapper.
// This wraps a synthesized Verilog netlist generated from the real local
// rtl/t65/T65.vhd implementation so the desktop Verilator harness can run
// against T65 behavior without changing FPGA synthesis sources.
module T65 (
    input  logic [1:0]  mode,
    input  logic        BCD_en,
    input  logic        res_n,
    input  logic        pwr_n,
    input  logic        clk,
    input  logic        enable,
    input  logic        rdy,
    input  logic        IRQ_n,
    input  logic        NMI_n,
    output logic        R_W_n,
    output logic [15:0] A,
    input  logic [7:0]  DI,
    output logic [7:0]  DO,
    output logic        Instrnew,
    input  logic [63:0] SaveStateBus_Din,
    input  logic [9:0]  SaveStateBus_Adr,
    input  logic        SaveStateBus_wren,
    input  logic        SaveStateBus_rst,
    input  logic        SaveStateBus_load,
    output logic [63:0] SaveStateBus_Dout
);
    logic [23:0] a24_i;
    logic        rw_n_i;
    logic        rw_n_prev;
    logic        rdy_i;
    logic [7:0]  do_i;

    // Preserve 6502 behavior where write cycles complete even when RDY is low.
    // rw_n_i is a registered flip-flop output of T65_real so this is not a
    // combinational loop: when R_W_n=0 (write phase), RDY is ignored entirely.
    assign rdy_i = rdy | ~rw_n_i;
    T65_real cpu_impl (
        .Mode             (mode),
        .BCD_en           (BCD_en),
        .Res_n            (res_n),
        .Pwr_n            (pwr_n),
        .Enable           (enable),
        .Clk              (clk),
        .Rdy              (rdy_i),
        .Abort_n          (1'b1),
        .IRQ_n            (IRQ_n),
        .NMI_n            (NMI_n),
        .SO_n             (1'b1),
        .R_W_n            (rw_n_i),
        .A                (a24_i),
        .DI               (DI),
        .DO               (do_i),
        .Instrnew         (Instrnew),
        .SaveStateBus_Din (SaveStateBus_Din),
        .SaveStateBus_Adr (SaveStateBus_Adr),
        .SaveStateBus_wren(SaveStateBus_wren),
        .SaveStateBus_rst (SaveStateBus_rst),
        .SaveStateBus_load(SaveStateBus_load),
        .SaveStateBus_Dout(SaveStateBus_Dout)
    );

    always_ff @(posedge clk or negedge pwr_n) begin
        if (!pwr_n) rw_n_prev <= 1'b1;
        else if (!res_n) rw_n_prev <= 1'b1;
        else rw_n_prev <= rw_n_i;
    end

    assign R_W_n = rw_n_i;
    assign A = a24_i[15:0];
    assign DO = do_i;
endmodule
