module nes_core_top #(
    parameter bit DEBUG = 1'b0,
    parameter bit HUD   = 1'b0
) (
    input  logic       clk,
    input  logic       reset,
    input  logic [7:0] joy1_buttons,
    input  logic [7:0] joy2_buttons,
    input  logic [1:0] hud_mode,
    input  logic [1:0] hud_position,
    input  logic       hud_scale,
    input  logic [63:0] mapper_flags_in,
    input  logic [20:0] prg_mask_in,
    input  logic [19:0] chr_mask_in,

    output logic [5:0] color,
    output logic [8:0] cycle,
    output logic [8:0] scanline,
    output logic       hblank,
    output logic       vblank,
    output logic       hsync,
    output logic       vsync,
    output logic [15:0] sample,
    output logic       hud_active,
    output logic [23:0] hud_pixel,

    output logic [15:0] dbg_cpu_addr,
    output logic        dbg_mr_int,
    output logic        dbg_mw_int,
    output logic [7:0]  dbg_cpu_din,
    output logic [7:0]  dbg_cpu_dout,
    output logic [15:0] dbg_cpu_pc,
    output logic [63:0] dbg_cpu_regs,
    output logic        dbg_nmi,
    output logic        dbg_pause_cpu,
    output logic        dbg_dma_active,
    output logic        dbg_dma_sprite_trigger,
    output logic        dbg_cpu_ce,
    output logic        dbg_reset_noSS,
    output logic        dbg_cpu_rnw,
    output logic [1:0]  dbg_dma_spr_state,
    output logic        dbg_dma_get_ce,
    output logic        dbg_dma_put_ce,
    output logic        dbg_odd_or_even,
    output logic        dbg_en_bg,
    output logic        dbg_en_obj,
    output logic        dbg_vbl_en,
    output logic        dbg_nmi_occ,
    output logic        dbg_render_d,
    output logic [24:0] dbg_cpumem_addr,
    output logic        dbg_cpumem_read,
    output logic        dbg_cpumem_write,
    output logic [21:0] dbg_ppumem_addr,
    output logic        dbg_ppumem_read,
    output logic        dbg_ppumem_write,
    output logic [7:0]  dbg_chr_to_ppu,
    output logic [7:0]  dbg_ppumem_din
);

    // Simulation memory model.
    localparam int PRG_ROM_MAX = 32768;
    localparam int CHR_ROM_MAX = 8192;
    logic [7:0] prg_rom [0:PRG_ROM_MAX-1];
    logic [7:0] chr_rom [0:CHR_ROM_MAX-1];
    logic [7:0] cpu_ram [0:2047];
    logic [7:0] ciram   [0:2047];
    logic [7:0] cart_ram[0:2047];

    // External controller serial model driven from keyboard bitfields.
    logic [7:0] joy1_shift, joy2_shift;
    logic       last_joyclk0, last_joyclk1;

    logic [1:0] joypad_clock;
    logic [2:0] joypad_out;
    logic [4:0] joypad1_data, joypad2_data;
    logic [7:0] p1_norm, p2_norm;
    logic [7:0] p1_frame, p2_frame;
    logic       vblank_prev;
    logic       frame_tick;

    logic [24:0] cpumem_addr;
    logic        cpumem_read;
    logic        cpumem_write;
    logic [7:0]  cpumem_dout;
    logic [7:0]  cpumem_din;

    logic [21:0] ppumem_addr;
    logic        ppumem_read;
    logic        ppumem_write;
    logic [7:0]  ppumem_dout;
    logic [7:0]  ppumem_din;

    logic [17:0] bram_addr;
    logic [7:0]  bram_din;
    logic [7:0]  bram_dout;
    logic        bram_write;
    logic        bram_override;

    logic [1:0] nes_div;
    logic [1:0] diskside;
    logic       refresh;
    logic       apu_ce;
    logic       gg_avail;
    logic [2:0] emphasis;
    logic       save_written;
    logic       mapper_has_flashsaves;
    logic       mapper_has_savestate;
    logic       sleep_savestate;
    logic       state_loaded;
    logic       corepaused;

    logic [24:0] savestate_sdram_addr;
    logic        savestate_sdram_rden;
    logic        savestate_sdram_wren;
    logic [7:0]  savestate_sdram_wdata;
    logic [7:0]  savestate_sdram_rdata;

    logic [63:0] savestateext_din;
    logic [9:0]  savestateext_adr;
    logic        savestateext_wren;
    logic        savestateext_rst;
    logic [63:0] savestateext_dout;
    logic        savestateext_load;

    logic [63:0] save_out_din;
    logic [63:0] save_out_dout;
    logic [25:0] save_out_adr;
    logic        save_out_rnw;
    logic        save_out_ena;
    logic [7:0]  save_out_be;
    logic        save_out_done;

    assign bram_din = 8'h00;
    assign savestate_sdram_rdata = 8'h00;
    assign savestateext_dout = 64'h0;
    assign save_out_dout = 64'h0;
    assign save_out_done = 1'b1;

    // CPU memory read mux
    always_comb begin
        cpumem_din = 8'h00;
        if (cpumem_addr < 25'h008000) begin
            cpumem_din = prg_rom[cpumem_addr[14:0]];
        end else if (cpumem_addr >= 25'h380000 && cpumem_addr < 25'h380800) begin
            cpumem_din = cpu_ram[cpumem_addr[10:0]];
        end else if (cpumem_addr >= 25'h1E0000 && cpumem_addr < 25'h1E0800) begin
            cpumem_din = cart_ram[cpumem_addr[10:0]];
        end
    end

    // PPU memory read mux (CIRAM / CHR-RAM fallback)
    always_comb begin
        ppumem_din = 8'h00;
        if (ppumem_addr >= 22'h300000 && ppumem_addr < 22'h300800) begin
            ppumem_din = ciram[ppumem_addr[10:0]];
        end else if (ppumem_addr >= 22'h200000 && ppumem_addr < 22'h204000) begin
            ppumem_din = chr_rom[ppumem_addr[12:0]];
        end
    end

    // Writes
    always_ff @(posedge clk) begin
        if (cpumem_write) begin
            if (cpumem_addr >= 25'h380000 && cpumem_addr < 25'h380800) begin
                cpu_ram[cpumem_addr[10:0]] <= cpumem_dout;
            end else if (cpumem_addr >= 25'h1E0000 && cpumem_addr < 25'h1E0800) begin
                cart_ram[cpumem_addr[10:0]] <= cpumem_dout;
            end
        end

        if (ppumem_write) begin
            if (ppumem_addr >= 22'h300000 && ppumem_addr < 22'h300800) begin
                ciram[ppumem_addr[10:0]] <= ppumem_dout;
            end else if (ppumem_addr >= 22'h200000 && ppumem_addr < 22'h204000) begin
                chr_rom[ppumem_addr[12:0]] <= ppumem_dout;
            end
        end

        if (reset) begin
            joy1_shift <= 8'h00;
            joy2_shift <= 8'h00;
            last_joyclk0 <= 1'b0;
            last_joyclk1 <= 1'b0;
        end else begin
            if (joypad_out[0]) begin
                joy1_shift <= joy1_buttons;
            end else if (!last_joyclk0 && joypad_clock[0]) begin
                joy1_shift <= {1'b0, joy1_shift[7:1]};
            end

            if (joypad_out[1]) begin
                joy2_shift <= joy2_buttons;
            end else if (!last_joyclk1 && joypad_clock[1]) begin
                joy2_shift <= {1'b0, joy2_shift[7:1]};
            end

            last_joyclk0 <= joypad_clock[0];
            last_joyclk1 <= joypad_clock[1];
        end
    end

    assign joypad1_data = {4'b0, joy1_shift[0]};
    assign joypad2_data = {4'b0, joy2_shift[0]};
    assign frame_tick = vblank & ~vblank_prev;

    NES nes_inst (
        .clk(clk),
        .reset_nes(reset),
        .ppu_rst_behavior(1'b0),
        .cold_reset(reset),
        .pausecore(1'b0),
        .corepaused(corepaused),
        .sys_type(2'b00),
        .nes_div(nes_div),
        .mapper_flags(mapper_flags_in),
        .sample(sample),
        .color(color),
        .joypad_clock(joypad_clock),
        .joypad_out(joypad_out),
        .joypad1_data(joypad1_data),
        .joypad2_data(joypad2_data),
        .fds_busy(1'b0),
        .fds_eject(1'b0),
        .fds_auto_eject(1'b0),
        .max_diskside(2'b0),
        .fds_fast(1'b0),
        .diskside(diskside),
        .audio_channels(5'h1F),
        .ex_sprites(1'b0),
        .mask(2'b00),
        .dejitter_timing(1'b0),
        .cpumem_addr(cpumem_addr),
        .cpumem_read(cpumem_read),
        .cpumem_write(cpumem_write),
        .cpumem_dout(cpumem_dout),
        .cpumem_din(cpumem_din),
        .ppumem_addr(ppumem_addr),
        .ppumem_read(ppumem_read),
        .ppumem_write(ppumem_write),
        .ppumem_dout(ppumem_dout),
        .ppumem_din(ppumem_din),
        .refresh(refresh),
        .prg_mask(prg_mask_in),
        .chr_mask(chr_mask_in),
        .bram_addr(bram_addr),
        .bram_din(bram_din),
        .bram_dout(bram_dout),
        .bram_write(bram_write),
        .bram_override(bram_override),
        .cycle(cycle),
        .scanline(scanline),
        .int_audio(1'b1),
        .ext_audio(1'b1),
        .apu_ce(apu_ce),
        .gg(1'b0),
        .gg_code(129'h0),
        .gg_avail(gg_avail),
        .gg_reset(1'b0),
        .emphasis(emphasis),
        .save_written(save_written),
        .mapper_has_flashsaves(mapper_has_flashsaves),
        .debug_dots(1'b0),
        .mapper_has_savestate(mapper_has_savestate),
        .increaseSSHeaderCount(1'b0),
        .save_state(1'b0),
        .load_state(1'b0),
        .savestate_number(2'b00),
        .sleep_savestate(sleep_savestate),
        .state_loaded(state_loaded),
        .hsync(hsync),
        .hblank(hblank),
        .vsync(vsync),
        .vblank(vblank),
        .Savestate_SDRAMAddr(savestate_sdram_addr),
        .Savestate_SDRAMRdEn(savestate_sdram_rden),
        .Savestate_SDRAMWrEn(savestate_sdram_wren),
        .Savestate_SDRAMWriteData(savestate_sdram_wdata),
        .Savestate_SDRAMReadData(savestate_sdram_rdata),
        .SaveStateExt_Din(savestateext_din),
        .SaveStateExt_Adr(savestateext_adr),
        .SaveStateExt_wren(savestateext_wren),
        .SaveStateExt_rst(savestateext_rst),
        .SaveStateExt_Dout(savestateext_dout),
        .SaveStateExt_load(savestateext_load),
        .SAVE_out_Din(save_out_din),
        .SAVE_out_Dout(save_out_dout),
        .SAVE_out_Adr(save_out_adr),
        .SAVE_out_rnw(save_out_rnw),
        .SAVE_out_ena(save_out_ena),
        .SAVE_out_be(save_out_be),
        .SAVE_out_done(save_out_done)
    );

    generate
    if (HUD) begin : g_hud_on
        input_normalize input_normalize_inst (
            .p1_raw(joy1_buttons),
            .p2_raw(joy2_buttons),
            .p1_norm(p1_norm),
            .p2_norm(p2_norm)
        );

        hud_controller hud_controller_inst (
            .clk(clk),
            .x(cycle),
            .y(scanline),
            .p1_frame(p1_frame),
            .p2_frame(p2_frame),
            .hud_mode(hud_mode),
            .hud_position(hud_position),
            .hud_scale(hud_scale),
            .hud_active(hud_active),
            .hud_pixel(hud_pixel)
        );

        always_ff @(posedge clk) begin
            if (reset) begin
                vblank_prev <= 1'b0;
                p1_frame <= 8'h00;
                p2_frame <= 8'h00;
            end else begin
                vblank_prev <= vblank;
                if (frame_tick) begin
                    p1_frame <= p1_norm;
                    p2_frame <= p2_norm;
                end
            end
        end
    end else begin : g_hud_off
        always_ff @(posedge clk) begin
            if (reset) vblank_prev <= 1'b0;
            else vblank_prev <= vblank;
        end
        assign p1_norm = '0;
        assign p2_norm = '0;
        assign p1_frame = '0;
        assign p2_frame = '0;
        assign hud_active = 1'b0;
        assign hud_pixel = 24'h000000;
    end
    endgenerate

    generate
    if (DEBUG) begin : g_debug_on
        // Debug visibility taps (simulation diagnostics only).
        assign dbg_cpu_addr     = nes_inst.addr;
        assign dbg_mr_int       = nes_inst.mr_int;
        assign dbg_mw_int       = nes_inst.mw_int;
        assign dbg_cpu_din      = nes_inst.internal_data_bus;
        assign dbg_cpu_dout     = nes_inst.cpu_dout;
        assign dbg_cpu_pc       = nes_inst.cpu.cpu_impl.Regs[63:48];
        assign dbg_cpu_regs     = nes_inst.cpu.cpu_impl.Regs;
        assign dbg_nmi          = nes_inst.nmi;
        assign dbg_pause_cpu    = nes_inst.pause_cpu;
        assign dbg_dma_active   = nes_inst.dma_aout_enable;
        assign dbg_dma_sprite_trigger = nes_inst.apu_cs && nes_inst.addr[4:0] == 5'h14 && ~nes_inst.cpu_rnw;
        assign dbg_cpu_ce       = nes_inst.cpu_ce;
        assign dbg_reset_noSS   = nes_inst.reset_noSS;
        assign dbg_cpu_rnw      = nes_inst.cpu_rnw;
        assign dbg_dma_spr_state = nes_inst.dma.spr_state;
        assign dbg_dma_get_ce    = nes_inst.get_ce;
        assign dbg_dma_put_ce    = nes_inst.put_ce;
        assign dbg_odd_or_even   = nes_inst.odd_or_even;
        assign dbg_en_bg        = nes_inst.ppu.enable_playfield;
        assign dbg_en_obj       = nes_inst.ppu.enable_objects;
        assign dbg_vbl_en       = nes_inst.ppu.vbl_enable;
        assign dbg_nmi_occ      = nes_inst.ppu.nmi_occured;
        assign dbg_render_d     = nes_inst.ppu.is_rendering_d;
        assign dbg_cpumem_addr  = cpumem_addr;
        assign dbg_cpumem_read  = cpumem_read;
        assign dbg_cpumem_write = cpumem_write;
        assign dbg_ppumem_addr  = ppumem_addr;
        assign dbg_ppumem_read  = ppumem_read;
        assign dbg_ppumem_write = ppumem_write;
        assign dbg_chr_to_ppu   = nes_inst.chr_to_ppu;
        assign dbg_ppumem_din   = ppumem_din;
    end else begin : g_debug_off
        assign dbg_cpu_addr     = '0;
        assign dbg_mr_int       = 1'b0;
        assign dbg_mw_int       = 1'b0;
        assign dbg_cpu_din      = '0;
        assign dbg_cpu_dout     = '0;
        assign dbg_cpu_pc       = '0;
        assign dbg_cpu_regs     = '0;
        assign dbg_nmi          = 1'b0;
        assign dbg_pause_cpu    = 1'b0;
        assign dbg_dma_active   = 1'b0;
        assign dbg_dma_sprite_trigger = 1'b0;
        assign dbg_cpu_ce       = 1'b0;
        assign dbg_reset_noSS   = 1'b0;
        assign dbg_cpu_rnw      = 1'b0;
        assign dbg_dma_spr_state = '0;
        assign dbg_dma_get_ce    = 1'b0;
        assign dbg_dma_put_ce    = 1'b0;
        assign dbg_odd_or_even   = 1'b0;
        assign dbg_en_bg        = 1'b0;
        assign dbg_en_obj       = 1'b0;
        assign dbg_vbl_en       = 1'b0;
        assign dbg_nmi_occ      = 1'b0;
        assign dbg_render_d     = 1'b0;
        assign dbg_cpumem_addr  = '0;
        assign dbg_cpumem_read  = 1'b0;
        assign dbg_cpumem_write = 1'b0;
        assign dbg_ppumem_addr  = '0;
        assign dbg_ppumem_read  = 1'b0;
        assign dbg_ppumem_write = 1'b0;
        assign dbg_chr_to_ppu   = '0;
        assign dbg_ppumem_din   = '0;
    end
    endgenerate

endmodule
