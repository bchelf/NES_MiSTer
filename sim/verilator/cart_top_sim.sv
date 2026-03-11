// Simulation-only cart_top replacement for Verilator desktop harness.
// Supports mapper 0 / NROM path with straightforward address translation.
// This module is not used in FPGA synthesis builds.

module cart_top (
    input             clk,
    input             ce,
    input             cpu_ce,
    input             paused,
    input             reset,
    input      [63:0] flags,
    input      [15:0] prg_ain,
    output reg [24:0] prg_aout,
    input             prg_read,
    input             prg_write,
    input       [7:0] prg_din,
    output reg  [7:0] prg_dout,
    input       [7:0] prg_from_ram,
    output reg        prg_allow,
    output reg        prg_bus_write,
    output reg        prg_conflict,
    output reg        has_savestate,
    output reg        prg_conflict_d0,
    output reg        has_flashsaves,
    input       [9:0] prg_mask,
    input       [9:0] chr_mask,
    input             chr_ex,
    input             chr_read,
    input             chr_write,
    input       [7:0] chr_din,
    input      [13:0] chr_ain_orig,
    input      [13:0] chr_ain_ex,
    output reg [21:0] chr_aout,
    output reg  [7:0] chr_dout,
    output reg        has_chr_dout,
    output reg        chr_allow,
    output reg        vram_a10,
    output reg        vram_ce,
    output reg [17:0] mapper_addr,
    input       [7:0] mapper_data_in,
    output reg  [7:0] mapper_data_out,
    output reg        mapper_prg_write,
    output reg        mapper_ovr,
    output reg        irq,
    input      [15:0] audio_in,
    output reg [15:0] audio,
    output reg  [1:0] diskside,
    input             fds_busy,
    input             fds_eject,
    input             fds_auto_eject,
    input       [1:0] max_diskside,
    input             fds_fast,
    input       [63:0]  SaveStateBus_Din,
    input       [ 9:0]  SaveStateBus_Adr,
    input               SaveStateBus_wren,
    input               SaveStateBus_rst,
    input               SaveStateBus_load,
    output      [63:0]  SaveStateBus_Dout,
    input         Savestate_MAPRAMactive,
    input  [12:0] Savestate_MAPRAMAddr,
    input         Savestate_MAPRAMRdEn,
    input         Savestate_MAPRAMWrEn,
    input  [7:0]  Savestate_MAPRAMWriteData,
    output [7:0]  Savestate_MAPRAMReadData
);
    // Simulation-only direct NROM storage (preloaded from sim_main.cpp).
    // This bypasses SDRAM timing for cartridge ROM reads while retaining
    // normal CPU RAM/CIRAM behavior through existing paths.
    localparam int PRG_ROM_MAX = 32768;  // Mapper-0 PRG (16KB or 32KB)
    localparam int CHR_ROM_MAX = 8192;   // Mapper-0 CHR (8KB)
    reg [7:0] prg_rom [0:PRG_ROM_MAX-1];
    reg [7:0] chr_rom [0:CHR_ROM_MAX-1];

    wire [13:0] chr_ain = chr_ex ? chr_ain_ex : chr_ain_orig;
    wire mirroring_vertical = flags[14];
    wire chr_is_ram = flags[15];
    wire [7:0] mapper_num = flags[7:0];
    wire prg_16k = (flags[10:8] == 3'd0);
    wire mapper0 = (mapper_num == 8'h00);

    wire [14:0] prg_offs = prg_ain - 16'h8000;
    wire [13:0] prg_idx  = prg_16k ? prg_offs[13:0] : prg_offs[14:1];
    wire [7:0] prg_rom_byte = prg_16k ? prg_rom[prg_offs[13:0]] : prg_rom[prg_offs[14:0]];
    wire [7:0] chr_rom_byte = chr_rom[chr_ain[12:0]];

    // Debug taps for simulation bring-up.
    reg [7:0] dbg_prg_rom_byte;
    reg [7:0] dbg_chr_rom_byte;
    reg       dbg_mapper0_prg_hit;
    reg       dbg_mapper0_chr_hit;
    reg       dbg_chr_is_ram;

    always @* begin
        prg_aout = 25'h0;
        prg_dout = 8'hFF;
        prg_allow = 1'b0;
        prg_bus_write = 1'b0;
        prg_conflict = 1'b0;
        has_savestate = 1'b0;
        prg_conflict_d0 = 1'b0;
        has_flashsaves = 1'b0;

        chr_aout = 22'h0;
        chr_dout = 8'h00;
        has_chr_dout = 1'b0;
        chr_allow = 1'b0;
        vram_a10 = mirroring_vertical ? chr_ain[10] : chr_ain[11];
        vram_ce = chr_ain[13];

        mapper_addr = 18'h0;
        mapper_data_out = 8'h0;
        mapper_prg_write = 1'b0;
        mapper_ovr = 1'b0;
        irq = 1'b0;
        audio = audio_in;
        diskside = 2'b00;
        dbg_prg_rom_byte = prg_rom_byte;
        dbg_chr_rom_byte = chr_rom_byte;
        dbg_mapper0_prg_hit = 1'b0;
        dbg_mapper0_chr_hit = 1'b0;
        dbg_chr_is_ram = chr_is_ram;

        if (prg_ain < 16'h2000) begin
            // CPU RAM region
            prg_aout = {11'b11_1000_0000_0, prg_ain[10:0]};
            prg_allow = 1'b1;
        end else if (prg_ain >= 16'h8000) begin
            // Keep PRG behavior on the normal cpumem/prg_allow path.
            // The core expects mapper-0 PRG reads through cpumem_din.
            prg_aout = {3'b000, (prg_16k ? {7'h00, prg_ain[13:0]} : {6'h00, prg_ain[14:0]})};
            prg_allow = ~prg_write;
            dbg_mapper0_prg_hit = mapper0;
        end else if (prg_ain >= 16'h6000) begin
            // Cartridge RAM region
            prg_aout = {4'b1111, 10'h000, prg_ain[10:0]};
            prg_allow = 1'b1;
        end

        if (chr_ain[13]) begin
            // CIRAM nametable region
            chr_aout = {11'b11_0000_0000_0, vram_a10, chr_ain[9:0]};
            chr_allow = 1'b1;
            vram_ce = 1'b1;
        end else begin
            // Pattern table region.
            if (mapper0 && !chr_is_ram) begin
                // Route through the 0x200000 base so nes_core_top's chr_rom
                // (preloaded from the ROM file) is used via ppumem_din.
                chr_aout = {2'b10, 6'h00, chr_ain};
                chr_allow = 1'b0;
                vram_ce = 1'b0;
                dbg_mapper0_chr_hit = 1'b1;
            end else begin
                // CHR ROM/RAM at SDRAM base 0x200000
                chr_aout = {2'b10, 6'h00, chr_ain};
                chr_allow = chr_is_ram;
                vram_ce = 1'b0;
            end
        end

        // Unsupported mapper fallback: keep deterministic open-bus style behavior.
        if (mapper_num != 8'h00) begin
            prg_allow = (prg_ain < 16'h2000);
            if (prg_ain < 16'h2000) prg_aout = {11'b11_1000_0000_0, prg_ain[10:0]};
            chr_allow = 1'b0;
        end
    end

    assign SaveStateBus_Dout = 64'h0;
    assign Savestate_MAPRAMReadData = 8'h0;

    wire _unused_ok = &{
        1'b0,
        clk, ce, cpu_ce, paused, reset, prg_read, prg_write, prg_din[0], prg_from_ram[0],
        prg_mask[0], chr_mask[0], chr_read, chr_write, chr_din[0], mapper_data_in[0],
        fds_busy, fds_eject, fds_auto_eject, max_diskside[0], fds_fast,
        SaveStateBus_Din[0], SaveStateBus_Adr[0], SaveStateBus_wren, SaveStateBus_rst, SaveStateBus_load,
        Savestate_MAPRAMactive, Savestate_MAPRAMAddr[0], Savestate_MAPRAMRdEn, Savestate_MAPRAMWrEn, Savestate_MAPRAMWriteData[0]
    };
endmodule
