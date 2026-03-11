// Simulation-only stubs for VHDL entities that are part of FPGA build flows.
// These modules are used only by the Verilator desktop harness in sim/.

module eReg_SavestateV #(
    parameter integer Adr = 0,
    parameter [63:0] def = 64'h0
) (
    input  logic        clk,
    input  logic [63:0] BUS_Din,
    input  logic [9:0]  BUS_Adr,
    input  logic        BUS_wren,
    input  logic        BUS_rst,
    output logic [63:0] BUS_Dout,
    input  logic [63:0] Din,
    output logic [63:0] Dout
);
    logic [63:0] dout_r = def;
    always_ff @(posedge clk) begin
        if (BUS_rst) dout_r <= def;
        else if (BUS_wren && BUS_Adr == Adr[9:0]) dout_r <= BUS_Din;
    end
    assign Dout = dout_r;
    assign BUS_Dout = (BUS_Adr == Adr[9:0]) ? Din : 64'h0;
endmodule

module savestates (
    input  logic        clk,
    input  logic        reset_in,
    output logic        reset_ss,
    output logic        reset_delay,
    output logic        load_done,
    input  logic        increaseSSHeaderCount,
    input  logic        save,
    input  logic        load,
    input  logic [31:0] savestate_address,
    output logic        savestate_busy,
    input  logic        paused,
    output logic [63:0] BUS_Din,
    output logic [9:0]  BUS_Adr,
    output logic        BUS_wren,
    output logic        BUS_rst,
    input  logic [63:0] BUS_Dout,
    output logic        loading_savestate,
    output logic        saving_savestate,
    output logic        sleep_savestate,
    output logic [24:0] Save_RAMAddr,
    output logic        Save_RAMRdEn,
    output logic        Save_RAMWrEn,
    output logic [7:0]  Save_RAMWriteData,
    input  logic [7:0]  Save_RAMReadData,
    output logic [2:0]  Save_RAMType,
    output logic [63:0] bus_out_Din,
    input  logic [63:0] bus_out_Dout,
    output logic [25:0] bus_out_Adr,
    output logic        bus_out_rnw,
    output logic        bus_out_ena,
    output logic [7:0]  bus_out_be,
    input  logic        bus_out_done
);
    always_comb begin
        reset_ss = reset_in;
        reset_delay = reset_in;
        load_done = 1'b0;
        savestate_busy = 1'b0;
        BUS_Din = 64'h0;
        BUS_Adr = 10'h0;
        BUS_wren = 1'b0;
        BUS_rst = 1'b0;
        loading_savestate = 1'b0;
        saving_savestate = 1'b0;
        sleep_savestate = 1'b0;
        Save_RAMAddr = 25'h0;
        Save_RAMRdEn = 1'b0;
        Save_RAMWrEn = 1'b0;
        Save_RAMWriteData = 8'h0;
        Save_RAMType = 3'h0;
        bus_out_Din = 64'h0;
        bus_out_Adr = 26'h0;
        bus_out_rnw = 1'b0;
        bus_out_ena = 1'b0;
        bus_out_be = 8'h00;
    end
endmodule

module statemanager #(
    parameter integer Softmap_SaveState_ADDR = 0,
    parameter integer Softmap_Rewind_ADDR = 0
) (
    input  logic        clk,
    input  logic        reset,
    input  logic        rewind_on,
    input  logic        rewind_active,
    input  logic [1:0]  savestate_number,
    input  logic        save,
    input  logic        load,
    output logic        sleep_rewind,
    input  logic        vsync,
    output logic        request_savestate,
    output logic        request_loadstate,
    output logic [31:0] request_address,
    input  logic        request_busy
);
    always_comb begin
        sleep_rewind = 1'b0;
        request_savestate = 1'b0;
        request_loadstate = 1'b0;
        request_address = 32'h0;
    end
endmodule

module eseopll (
    input  logic        clk21m,
    input  logic        reset,
    input  logic        clkena,
    input  logic        enawait,
    input  logic        req,
    output logic        ack,
    input  logic        wrt,
    input  logic [15:0] adr,
    input  logic [7:0]  dbo,
    output logic signed [13:0] wav
);
    assign ack = req;
    assign wav = '0;
endmodule

module spram #(
    parameter integer addr_width = 8,
    parameter integer data_width = 8,
    parameter string mem_name = "spram",
    parameter string mem_init_file = ""
) (
    input  logic                    clock,
    input  logic [addr_width-1:0]   address,
    input  logic [data_width-1:0]   data,
    input  logic                    wren,
    output logic [data_width-1:0]   q
);
    logic [data_width-1:0] mem [0:(1<<addr_width)-1];
    always_ff @(posedge clock) begin
        if (wren) mem[address] <= data;
        q <= mem[address];
    end
endmodule

module dpram #(
    parameter string init_file = " ",
    parameter integer widthad_a = 8,
    parameter integer width_a = 8
) (
    input  logic                  clock_a,
    input  logic [widthad_a-1:0]  address_a,
    input  logic [width_a-1:0]    data_a,
    input  logic                  wren_a,
    input  logic                  byteena_a = 1'b1,
    output logic [width_a-1:0]    q_a,
    input  logic                  clock_b,
    input  logic [widthad_a-1:0]  address_b,
    input  logic [width_a-1:0]    data_b,
    input  logic                  wren_b,
    input  logic                  byteena_b = 1'b1,
    output logic [width_a-1:0]    q_b
);
    logic [width_a-1:0] mem [0:(1<<widthad_a)-1];
    always_ff @(posedge clock_a) begin
        if (wren_a && byteena_a) mem[address_a] <= data_a;
        q_a <= mem[address_a];
    end
    always_ff @(posedge clock_b) begin
        if (wren_b && byteena_b) mem[address_b] <= data_b;
        q_b <= mem[address_b];
    end
endmodule

module altddio_out #(
    parameter string extend_oe_disable = "OFF",
    parameter string intended_device_family = "Cyclone V",
    parameter string invert_output = "OFF",
    parameter string lpm_hint = "UNUSED",
    parameter string lpm_type = "altddio_out",
    parameter string oe_reg = "UNREGISTERED",
    parameter string power_up_high = "OFF",
    parameter integer width = 1
) (
    input  logic [width-1:0] datain_h,
    input  logic [width-1:0] datain_l,
    input  logic             outclock,
    output logic [width-1:0] dataout,
    input  logic             aclr,
    input  logic             aset,
    input  logic             oe,
    input  logic             outclocken,
    input  logic             sclr,
    input  logic             sset
);
    always_ff @(posedge outclock or posedge aclr or posedge aset) begin
        if (aclr) dataout <= '0;
        else if (aset) dataout <= '1;
        else if (outclocken && oe) begin
            if (sclr) dataout <= '0;
            else if (sset) dataout <= '1;
            else dataout <= datain_h;
        end
    end
endmodule

module altera_std_synchronizer #(
    parameter integer depth = 3
) (
    input  logic clk,
    input  logic reset_n,
    input  logic din,
    output logic dout
);
    logic [depth-1:0] shift;
    integer i;
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            shift <= '0;
        end else begin
            shift[0] <= din;
            for (i = 1; i < depth; i = i + 1) shift[i] <= shift[i-1];
        end
    end
    assign dout = shift[depth-1];
endmodule

module cyclonev_lcell_comb #(
    parameter [63:0] lut_mask = 64'h0,
    parameter string dont_touch = "off"
) (
    input  logic dataa,
    input  logic datab,
    input  logic datac,
    input  logic datad,
    input  logic datae,
    input  logic dataf,
    output logic combout
);
    assign combout = dataa ^ datab ^ datac ^ datad ^ datae ^ dataf;
endmodule

module altera_pll #(
    parameter string operation_mode = "direct",
    parameter integer number_of_clocks = 3
) (
    input  logic rst,
    output logic [number_of_clocks-1:0] outclk,
    output logic locked,
    input  logic [63:0] reconfig_to_pll,
    output logic fboutclk,
    input  logic fbclk,
    input  logic refclk,
    output logic [63:0] reconfig_from_pll
);
    always_ff @(posedge refclk or posedge rst) begin
        if (rst) begin
            outclk <= '0;
            locked <= 1'b0;
            fboutclk <= 1'b0;
            reconfig_from_pll <= 64'h0;
        end else begin
            outclk <= ~outclk;
            locked <= 1'b1;
            fboutclk <= ~fboutclk;
            reconfig_from_pll <= reconfig_to_pll;
        end
    end
endmodule

module pll (
    input  logic        refclk,
    input  logic        rst,
    output logic        outclk_0,
    output logic        outclk_1,
    output logic        outclk_2,
    output logic        locked,
    input  logic [63:0] reconfig_to_pll,
    output logic [63:0] reconfig_from_pll
);
    always_ff @(posedge refclk or posedge rst) begin
        if (rst) begin
            outclk_0 <= 1'b0;
            outclk_1 <= 1'b0;
            outclk_2 <= 1'b0;
            locked <= 1'b0;
            reconfig_from_pll <= 64'h0;
        end else begin
            outclk_0 <= ~outclk_0;
            outclk_1 <= ~outclk_1;
            outclk_2 <= ~outclk_2;
            locked <= 1'b1;
            reconfig_from_pll <= reconfig_to_pll;
        end
    end
endmodule

module pll_cfg #(
    parameter ENABLE_BYTEENABLE = 0,
    parameter BYTEENABLE_WIDTH = 4,
    parameter RECONFIG_ADDR_WIDTH = 6,
    parameter RECONFIG_DATA_WIDTH = 32,
    parameter reconf_width = 64,
    parameter WAIT_FOR_LOCK = 1
) (
    input  logic        mgmt_clk,
    input  logic        mgmt_reset,
    output logic        mgmt_waitrequest,
    input  logic        mgmt_read,
    input  logic        mgmt_write,
    output logic [31:0] mgmt_readdata,
    input  logic [5:0]  mgmt_address,
    input  logic [31:0] mgmt_writedata,
    output logic [63:0] reconfig_to_pll,
    input  logic [63:0] reconfig_from_pll
);
    always_comb begin
        mgmt_waitrequest = 1'b0;
        mgmt_readdata = 32'h0;
        reconfig_to_pll = reconfig_from_pll;
    end
endmodule

module sdram (
    inout  logic [15:0] SDRAM_DQ,
    output logic [12:0] SDRAM_A,
    output logic        SDRAM_DQML,
    output logic        SDRAM_DQMH,
    output logic [1:0]  SDRAM_BA,
    output logic        SDRAM_nCS,
    output logic        SDRAM_nWE,
    output logic        SDRAM_nRAS,
    output logic        SDRAM_nCAS,
    output logic        SDRAM_CLK,
    output logic        SDRAM_CKE,
    input  logic        init,
    input  logic        clk,
    input  logic [24:0] ch0_addr,
    input  logic        ch0_rd,
    input  logic        ch0_wr,
    input  logic [7:0]  ch0_din,
    output logic [7:0]  ch0_dout,
    output logic        ch0_busy,
    input  logic [24:0] ch1_addr,
    input  logic        ch1_rd,
    input  logic        ch1_wr,
    input  logic [7:0]  ch1_din,
    output logic [7:0]  ch1_dout,
    output logic        ch1_busy,
    input  logic [24:0] ch2_addr,
    input  logic        ch2_rd,
    input  logic        ch2_wr,
    input  logic [7:0]  ch2_din,
    output logic [7:0]  ch2_dout,
    output logic        ch2_busy,
    input  logic        refresh,
    input  logic [15:0] ss_in,
    input  logic        ss_load,
    output logic [15:0] ss_out
);
    localparam int MEM_BYTES = 8 * 1024 * 1024;
    logic [7:0] mem [0:MEM_BYTES-1];
    logic [24:0] dbg_last_ch1_addr;
    logic [7:0]  dbg_last_ch1_dout;
    logic        dbg_last_ch1_rd;
    integer i;

    assign SDRAM_DQ = 'z;
    assign SDRAM_A = '0;
    assign SDRAM_DQML = 1'b1;
    assign SDRAM_DQMH = 1'b1;
    assign SDRAM_BA = 2'b00;
    assign SDRAM_nCS = 1'b1;
    assign SDRAM_nWE = 1'b1;
    assign SDRAM_nRAS = 1'b1;
    assign SDRAM_nCAS = 1'b1;
    assign SDRAM_CLK = clk;
    assign SDRAM_CKE = 1'b1;
    assign ss_out = 16'h0000;

    function automatic [22:0] idx(input logic [24:0] a);
        idx = a[22:0];
    endfunction

    initial begin
        for (i = 0; i < MEM_BYTES; i = i + 1) mem[i] = 8'h00;
        dbg_last_ch1_addr = '0;
        dbg_last_ch1_dout = '0;
        dbg_last_ch1_rd = 1'b0;
    end

    always_ff @(posedge clk) begin
        if (init) begin
            ch0_busy <= 1'b0;
            ch1_busy <= 1'b0;
            ch2_busy <= 1'b0;
            ch0_dout <= 8'h00;
            ch1_dout <= 8'h00;
            ch2_dout <= 8'h00;
            dbg_last_ch1_rd <= 1'b0;
        end else begin
            ch0_busy <= ch0_rd | ch0_wr;
            ch1_busy <= ch1_rd | ch1_wr;
            ch2_busy <= ch2_rd | ch2_wr;
            dbg_last_ch1_rd <= 1'b0;

            if (ch0_wr && idx(ch0_addr) < MEM_BYTES) begin
                mem[idx(ch0_addr)] <= ch0_din;
            end
            if (ch1_wr && idx(ch1_addr) < MEM_BYTES) begin
                mem[idx(ch1_addr)] <= ch1_din;
            end
            if (ch2_wr && idx(ch2_addr) < MEM_BYTES) begin
                mem[idx(ch2_addr)] <= ch2_din;
            end

            if (ch0_rd) begin
                ch0_dout <= (idx(ch0_addr) < MEM_BYTES) ? mem[idx(ch0_addr)] : 8'h00;
            end
            if (ch1_rd) begin
                ch1_dout <= (idx(ch1_addr) < MEM_BYTES) ? mem[idx(ch1_addr)] : 8'h00;
                dbg_last_ch1_addr <= ch1_addr;
                dbg_last_ch1_dout <= (idx(ch1_addr) < MEM_BYTES) ? mem[idx(ch1_addr)] : 8'h00;
                dbg_last_ch1_rd <= 1'b1;
            end
            if (ch2_rd) begin
                ch2_dout <= (idx(ch2_addr) < MEM_BYTES) ? mem[idx(ch2_addr)] : 8'h00;
            end
        end
    end
endmodule
