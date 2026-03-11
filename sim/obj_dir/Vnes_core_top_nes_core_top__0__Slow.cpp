// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_nes_core_top___eval_initial__TOP__nes_core_top(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___eval_initial__TOP__nes_core_top\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bram_din = 0U;
    vlSelfRef.__PVT__savestate_sdram_rdata = 0U;
    vlSelfRef.__PVT__savestateext_dout = 0ULL;
    vlSelfRef.__PVT__save_out_dout = 0ULL;
    vlSelfRef.__PVT__save_out_done = 1U;
    vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__out2 = 0U;
    vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en2 = 3U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__savestate_number = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__load_state = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__save_state = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__increaseSSHeaderCount = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__debug_dots = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__gg_reset = 0U;
    VL_CONST_W_1X(129,vlSymsp->TOP__nes_core_top__nes_inst.__PVT__gg_code,0x00000000);
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__gg = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ext_audio = 1U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__int_audio = 1U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__dejitter_timing = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mask = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ex_sprites = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__audio_channels = 0x1fU;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__fds_fast = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__max_diskside = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__fds_auto_eject = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__fds_eject = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__fds_busy = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__pausecore = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppu_rst_behavior = 0U;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__0(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst.sys_type__en 
        = vlSelfRef.sys_type__en0;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_done 
        = vlSelfRef.__PVT__save_out_done;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_Dout 
        = vlSelfRef.__PVT__save_out_dout;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_din 
        = vlSelfRef.__PVT__bram_din;
    vlSelfRef.dbg_dma_spr_state = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__spr_state;
    vlSelfRef.dbg_odd_or_even = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__odd_or_even;
    vlSelfRef.dbg_en_bg = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__enable_playfield;
    vlSelfRef.dbg_en_obj = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__enable_objects;
    vlSelfRef.dbg_vbl_en = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vbl_enable;
    vlSelfRef.dbg_nmi_occ = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__nmi_occured;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SaveStateExt_Dout 
        = vlSelfRef.__PVT__savestateext_dout;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__Savestate_SDRAMReadData 
        = vlSelfRef.__PVT__savestate_sdram_rdata;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__p2_frame 
        = vlSelfRef.__PVT__p2_frame;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__p1_frame 
        = vlSelfRef.__PVT__p1_frame;
    vlSelfRef.__PVT__joypad1_data = VL_EXTEND_II(5,1, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__joy1_shift), 0U)));
    vlSelfRef.__PVT__joypad2_data = VL_EXTEND_II(5,1, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__joy2_shift), 0U)));
    vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en1 
        = vlSelfRef.sys_type__en0;
    vlSelfRef.__PVT__nes_div = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__nes_div;
    vlSelfRef.__PVT__corepaused = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__corepaused;
    vlSelfRef.__PVT__joypad_out = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad_out;
    vlSelfRef.dbg_cpu_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_ce;
    vlSelfRef.__PVT__apu_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__apu_ce;
    vlSelfRef.__PVT__refresh = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__refresh;
    vlSelfRef.dbg_render_d = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__is_rendering_d;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad1_data 
        = vlSelfRef.__PVT__joypad1_data;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad2_data 
        = vlSelfRef.__PVT__joypad2_data;
    vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en 
        = ((IData)(vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en1) 
           | (IData)(vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en2));
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__1(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__chr_mask 
        = vlSelfRef.chr_mask_in;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__prg_mask 
        = vlSelfRef.prg_mask_in;
    vlSymsp->TOP__nes_core_top__input_normalize_inst.__PVT__p2_raw 
        = vlSelfRef.joy2_buttons;
    vlSymsp->TOP__nes_core_top__input_normalize_inst.__PVT__p1_raw 
        = vlSelfRef.joy1_buttons;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_scale 
        = vlSelfRef.hud_scale;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_position 
        = vlSelfRef.hud_position;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_mode 
        = vlSelfRef.hud_mode;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_flags 
        = vlSelfRef.mapper_flags_in;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cold_reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__reset_nes 
        = vlSelfRef.reset;
    vlSelfRef.dbg_cpu_pc = (0x0000ffffU & VL_SEL_IQII(64, vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Regs, 0x30U, 16));
    vlSelfRef.dbg_cpu_regs = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Regs;
    vlSelfRef.hblank = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__hblank;
    vlSelfRef.vsync = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__vsync;
    vlSelfRef.hsync = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__hsync;
    vlSelfRef.vblank = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__vblank;
    vlSelfRef.dbg_nmi = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__nmi;
    vlSelfRef.dbg_dma_put_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__put_ce;
    vlSelfRef.dbg_dma_get_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__get_ce;
    vlSelfRef.__PVT__gg_avail = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__gg_avail;
    vlSelfRef.dbg_cpu_rnw = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_rnw;
    vlSelfRef.dbg_cpu_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_dout;
    vlSelfRef.scanline = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__scanline;
    vlSelfRef.cycle = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cycle;
    vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__out1 
        = vlSymsp->TOP__nes_core_top__nes_inst.sys_type__out;
    vlSelfRef.__PVT__frame_tick = ((IData)(vlSelfRef.vblank) 
                                   & (~ (IData)(vlSelfRef.__PVT__vblank_prev)));
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__y 
        = vlSelfRef.scanline;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__x 
        = vlSelfRef.cycle;
    vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong 
        = (((IData)(vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__out1) 
            & (IData)(vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en1)) 
           | ((IData)(vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__out2) 
              & (IData)(vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong__en2)));
    vlSelfRef.__Vcellinpt__nes_inst__sys_type = vlSelfRef.__Vcellinpt__nes_inst__sys_type__strong;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__sys_type 
        = vlSelfRef.__Vcellinpt__nes_inst__sys_type;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__2(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_reset_noSS = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__reset_noSS;
    vlSelfRef.__PVT__ppumem_read = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_read;
    vlSelfRef.__PVT__p1_norm = vlSymsp->TOP__nes_core_top__input_normalize_inst.__PVT__p1_norm;
    vlSelfRef.__PVT__p2_norm = vlSymsp->TOP__nes_core_top__input_normalize_inst.__PVT__p2_norm;
    vlSelfRef.dbg_ppumem_read = vlSelfRef.__PVT__ppumem_read;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__3(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_loaded = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__state_loaded;
    vlSelfRef.__PVT__save_out_din = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_Din;
    vlSelfRef.__PVT__save_out_adr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_Adr;
    vlSelfRef.__PVT__save_out_rnw = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_rnw;
    vlSelfRef.__PVT__save_out_ena = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_ena;
    vlSelfRef.__PVT__save_out_be = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_be;
    vlSelfRef.dbg_pause_cpu = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__pause_cpu;
    vlSelfRef.dbg_dma_active = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__dma_aout_enable;
    vlSelfRef.__PVT__sleep_savestate = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__sleep_savestate;
    vlSelfRef.__PVT__savestate_sdram_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__Savestate_SDRAMAddr;
    vlSelfRef.__PVT__savestate_sdram_wdata = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__Savestate_SDRAMWriteData;
    vlSelfRef.__PVT__savestate_sdram_rden = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__Savestate_SDRAMRdEn;
    vlSelfRef.__PVT__savestate_sdram_wren = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__Savestate_SDRAMWrEn;
    vlSelfRef.__PVT__savestateext_rst = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SaveStateExt_rst;
    vlSelfRef.__PVT__savestateext_wren = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SaveStateExt_wren;
    vlSelfRef.__PVT__savestateext_load = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SaveStateExt_load;
    vlSelfRef.__PVT__savestateext_din = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SaveStateExt_Din;
    vlSelfRef.__PVT__savestateext_adr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SaveStateExt_Adr;
    vlSelfRef.dbg_mr_int = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mr_int;
    vlSelfRef.dbg_mw_int = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mw_int;
    vlSelfRef.dbg_cpu_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__addr;
    vlSelfRef.dbg_dma_sprite_trigger = (((IData)(vlSymsp->TOP__nes_core_top__nes_inst.__PVT__apu_cs) 
                                         & (0x14U == 
                                            (0x0000001fU 
                                             & VL_SEL_IIII(16, (IData)(vlSymsp->TOP__nes_core_top__nes_inst.__PVT__addr), 0U, 5)))) 
                                        & (~ (IData)(vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_rnw)));
    vlSelfRef.__PVT__joypad_clock = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad_clock;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__4(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mapper_has_savestate = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_has_savestate;
    vlSelfRef.__PVT__bram_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_addr;
    vlSelfRef.__PVT__bram_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_dout;
    vlSelfRef.__PVT__bram_override = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_override;
    vlSelfRef.__PVT__diskside = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__diskside;
    vlSelfRef.__PVT__bram_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_write;
    vlSelfRef.__PVT__emphasis = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__emphasis;
    vlSelfRef.__PVT__ppumem_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_write;
    vlSelfRef.__PVT__mapper_has_flashsaves = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_has_flashsaves;
    vlSelfRef.__PVT__ppumem_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_addr;
    vlSelfRef.__PVT__cpumem_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_write;
    vlSelfRef.__PVT__cpumem_read = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_read;
    vlSelfRef.__PVT__save_written = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__save_written;
    vlSelfRef.__PVT__cpumem_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_addr;
    vlSelfRef.__PVT__ppumem_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_dout;
    vlSelfRef.sample = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__sample;
    vlSelfRef.dbg_ppumem_write = vlSelfRef.__PVT__ppumem_write;
    vlSelfRef.dbg_ppumem_addr = vlSelfRef.__PVT__ppumem_addr;
    vlSelfRef.__PVT__ppumem_din = 0U;
    if (((0x00300000U <= vlSelfRef.__PVT__ppumem_addr) 
         & (0x00300800U > vlSelfRef.__PVT__ppumem_addr))) {
        vlSelfRef.__PVT__ppumem_din = vlSelfRef.__PVT__ciram
            [(0x000007ffU & VL_SEL_IIII(22, vlSelfRef.__PVT__ppumem_addr, 0U, 11))];
    } else if (((0x00200000U <= vlSelfRef.__PVT__ppumem_addr) 
                & (0x00204000U > vlSelfRef.__PVT__ppumem_addr))) {
        vlSelfRef.__PVT__ppumem_din = vlSelfRef.__PVT__chr_rom
            [(0x00001fffU & VL_SEL_IIII(22, vlSelfRef.__PVT__ppumem_addr, 0U, 13))];
    }
    vlSelfRef.dbg_cpumem_write = vlSelfRef.__PVT__cpumem_write;
    vlSelfRef.dbg_cpumem_read = vlSelfRef.__PVT__cpumem_read;
    vlSelfRef.dbg_cpumem_addr = vlSelfRef.__PVT__cpumem_addr;
    vlSelfRef.__PVT__cpumem_din = 0U;
    if ((0x00008000U > vlSelfRef.__PVT__cpumem_addr)) {
        vlSelfRef.__PVT__cpumem_din = vlSelfRef.__PVT__prg_rom
            [(0x00007fffU & VL_SEL_IIII(25, vlSelfRef.__PVT__cpumem_addr, 0U, 15))];
    } else if (((0x00380000U <= vlSelfRef.__PVT__cpumem_addr) 
                & (0x00380800U > vlSelfRef.__PVT__cpumem_addr))) {
        vlSelfRef.__PVT__cpumem_din = vlSelfRef.__PVT__cpu_ram
            [(0x000007ffU & VL_SEL_IIII(25, vlSelfRef.__PVT__cpumem_addr, 0U, 11))];
    } else if (((0x001e0000U <= vlSelfRef.__PVT__cpumem_addr) 
                & (0x001e0800U > vlSelfRef.__PVT__cpumem_addr))) {
        vlSelfRef.__PVT__cpumem_din = vlSelfRef.__PVT__cart_ram
            [(0x000007ffU & VL_SEL_IIII(25, vlSelfRef.__PVT__cpumem_addr, 0U, 11))];
    }
    vlSelfRef.dbg_ppumem_din = vlSelfRef.__PVT__ppumem_din;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_din 
        = vlSelfRef.__PVT__ppumem_din;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_din 
        = vlSelfRef.__PVT__cpumem_din;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__5(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_sequent__TOP__nes_core_top__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_chr_to_ppu = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__chr_to_ppu;
    vlSelfRef.color = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__color;
    vlSelfRef.__PVT__cpumem_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_dout;
    vlSelfRef.dbg_cpu_din = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__internal_data_bus;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___stl_comb__TOP__nes_core_top__0(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___stl_comb__TOP__nes_core_top__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hud_active = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_active;
    vlSelfRef.hud_pixel = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_pixel;
}

VL_ATTR_COLD void Vnes_core_top_nes_core_top___ctor_var_reset(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->joy1_buttons = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8194419947211337393ull);
    vlSelf->joy2_buttons = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 354344828584982116ull);
    vlSelf->hud_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7734235649417673634ull);
    vlSelf->hud_position = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2236806011414328919ull);
    vlSelf->hud_scale = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10686910262396484424ull);
    vlSelf->mapper_flags_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14314204036101715669ull);
    vlSelf->prg_mask_in = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 8537506947523944703ull);
    vlSelf->chr_mask_in = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6396535610031155116ull);
    vlSelf->color = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 465961873555653160ull);
    vlSelf->cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->scanline = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 654532841143486145ull);
    vlSelf->hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14877665802122487536ull);
    vlSelf->hud_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17862221856657587656ull);
    vlSelf->hud_pixel = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15427161734038475003ull);
    vlSelf->dbg_cpu_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5799407711276468096ull);
    vlSelf->dbg_mr_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13244814874910450744ull);
    vlSelf->dbg_mw_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3368059569312720153ull);
    vlSelf->dbg_cpu_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3998891376769879205ull);
    vlSelf->dbg_cpu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17099113803595599864ull);
    vlSelf->dbg_cpu_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13788619681378170624ull);
    vlSelf->dbg_cpu_regs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6278616643218805886ull);
    vlSelf->dbg_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440533632083781006ull);
    vlSelf->dbg_pause_cpu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8175058116448611456ull);
    vlSelf->dbg_dma_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4319834060495665376ull);
    vlSelf->dbg_dma_sprite_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8779818595317840788ull);
    vlSelf->dbg_cpu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10922176111196675467ull);
    vlSelf->dbg_reset_noSS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15675652301583447143ull);
    vlSelf->dbg_cpu_rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613484424153786ull);
    vlSelf->dbg_dma_spr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1395458678760166406ull);
    vlSelf->dbg_dma_get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3212116088188960829ull);
    vlSelf->dbg_dma_put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5163963362259016302ull);
    vlSelf->dbg_odd_or_even = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9914571296055599555ull);
    vlSelf->dbg_en_bg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17051108008528152963ull);
    vlSelf->dbg_en_obj = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16635920954833946153ull);
    vlSelf->dbg_vbl_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137809405547789221ull);
    vlSelf->dbg_nmi_occ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13535831848030408782ull);
    vlSelf->dbg_render_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9586124440387739647ull);
    vlSelf->dbg_cpumem_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6332221917756965821ull);
    vlSelf->dbg_cpumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15612308933624323068ull);
    vlSelf->dbg_cpumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1864707573172073665ull);
    vlSelf->dbg_ppumem_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1131768710484304579ull);
    vlSelf->dbg_ppumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10933022542194134988ull);
    vlSelf->dbg_ppumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 390034132101396150ull);
    vlSelf->dbg_chr_to_ppu = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15106838644325053706ull);
    vlSelf->dbg_ppumem_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12934696378487082892ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->__PVT__prg_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9258659434245489437ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__chr_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15277888043624747219ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__cpu_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1695162683031188791ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__ciram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11085673303413488860ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__cart_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10263079932699624266ull);
    }
    vlSelf->__PVT__joy1_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10496018972347711659ull);
    vlSelf->__PVT__joy2_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10835518746062504121ull);
    vlSelf->__PVT__last_joyclk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17534422900660242381ull);
    vlSelf->__PVT__last_joyclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13264363829780036272ull);
    vlSelf->__PVT__joypad_clock = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1392439112855830223ull);
    vlSelf->__PVT__joypad_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12821089782801497810ull);
    vlSelf->__PVT__joypad1_data = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7132106306334881243ull);
    vlSelf->__PVT__joypad2_data = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3460307899717449300ull);
    vlSelf->__PVT__p1_norm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16903033423412745279ull);
    vlSelf->__PVT__p2_norm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7608357010677147775ull);
    vlSelf->__PVT__p1_frame = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18190167911042426255ull);
    vlSelf->__PVT__p2_frame = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 467252077747980564ull);
    vlSelf->__PVT__vblank_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2954382451719285880ull);
    vlSelf->__PVT__frame_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5763993079970323934ull);
    vlSelf->__PVT__cpumem_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11572510893649339924ull);
    vlSelf->__PVT__cpumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18146093364141548723ull);
    vlSelf->__PVT__cpumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15690853108995230419ull);
    vlSelf->__PVT__cpumem_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4041495758004609876ull);
    vlSelf->__PVT__cpumem_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7098350794267157805ull);
    vlSelf->__PVT__ppumem_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11784519773625091443ull);
    vlSelf->__PVT__ppumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3581064054973896638ull);
    vlSelf->__PVT__ppumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2820770936254837823ull);
    vlSelf->__PVT__ppumem_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15324033191143946083ull);
    vlSelf->__PVT__ppumem_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13567189146810591411ull);
    vlSelf->__PVT__bram_addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10458784103138679157ull);
    vlSelf->__PVT__bram_din = 0U;
    ;
    vlSelf->__PVT__bram_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13038917118336520507ull);
    vlSelf->__PVT__bram_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14914250307306904362ull);
    vlSelf->__PVT__bram_override = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734754758455516112ull);
    vlSelf->__PVT__nes_div = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13701569722795626316ull);
    vlSelf->__PVT__diskside = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14453812024835779944ull);
    vlSelf->__PVT__refresh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12242286718717544838ull);
    vlSelf->__PVT__apu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7079689171004307316ull);
    vlSelf->__PVT__gg_avail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18245037342359187923ull);
    vlSelf->__PVT__emphasis = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15600364000377428379ull);
    vlSelf->__PVT__save_written = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12999593531671791576ull);
    vlSelf->__PVT__mapper_has_flashsaves = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14921181330445867937ull);
    vlSelf->__PVT__mapper_has_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9066047425907630609ull);
    vlSelf->__PVT__sleep_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3460690964128772266ull);
    vlSelf->__PVT__state_loaded = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1489981880265496740ull);
    vlSelf->__PVT__corepaused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11246190229135106281ull);
    vlSelf->__PVT__savestate_sdram_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6435875189322760638ull);
    vlSelf->__PVT__savestate_sdram_rden = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12818373365018391201ull);
    vlSelf->__PVT__savestate_sdram_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16657164560137986392ull);
    vlSelf->__PVT__savestate_sdram_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10967769533811296349ull);
    vlSelf->__PVT__savestate_sdram_rdata = 0U;
    ;
    vlSelf->__PVT__savestateext_din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5314407889893542386ull);
    vlSelf->__PVT__savestateext_adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11735802302740052245ull);
    vlSelf->__PVT__savestateext_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13450727235889754457ull);
    vlSelf->__PVT__savestateext_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14957162501689584112ull);
    vlSelf->__PVT__savestateext_dout = 0U;
    ;
    vlSelf->__PVT__savestateext_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6063239047377892191ull);
    vlSelf->__PVT__save_out_din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6155337213708942973ull);
    vlSelf->__PVT__save_out_dout = 0U;
    ;
    vlSelf->__PVT__save_out_adr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6433074342664939541ull);
    vlSelf->__PVT__save_out_rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2980589941370250447ull);
    vlSelf->__PVT__save_out_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11554594691194994134ull);
    vlSelf->__PVT__save_out_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3750231235673416159ull);
    vlSelf->__PVT__save_out_done = 1U;
    ;
    vlSelf->__Vcellinpt__nes_inst__sys_type = 0;
    vlSelf->sys_type__en0 = 0;
    vlSelf->__Vcellinpt__nes_inst__sys_type__strong = 0;
    vlSelf->__Vcellinpt__nes_inst__sys_type__strong__en = 0;
    vlSelf->__Vcellinpt__nes_inst__sys_type__strong__out1 = 0;
    vlSelf->__Vcellinpt__nes_inst__sys_type__strong__en1 = 0;
    vlSelf->__Vcellinpt__nes_inst__sys_type__strong__out2 = 0U;
    ;
    vlSelf->__Vcellinpt__nes_inst__sys_type__strong__en2 = 3U;
    ;
    vlSelf->__Vdly__joy1_shift = 0;
    vlSelf->__Vdly__joy2_shift = 0;
    vlSelf->__Vdly__last_joyclk0 = 0;
    vlSelf->__Vdly__last_joyclk1 = 0;
    vlSelf->__Vdly__vblank_prev = 0;
    vlSelf->__Vdly__p1_frame = 0;
    vlSelf->__Vdly__p2_frame = 0;
    vlSelf->__VdlyVal__cpu_ram__v0 = 0;
    vlSelf->__VdlyDim0__cpu_ram__v0 = 0;
    vlSelf->__VdlySet__cpu_ram__v0 = 0;
    vlSelf->__VdlyVal__cart_ram__v0 = 0;
    vlSelf->__VdlyDim0__cart_ram__v0 = 0;
    vlSelf->__VdlySet__cart_ram__v0 = 0;
    vlSelf->__VdlyVal__ciram__v0 = 0;
    vlSelf->__VdlyDim0__ciram__v0 = 0;
    vlSelf->__VdlySet__ciram__v0 = 0;
    vlSelf->__VdlyVal__chr_rom__v0 = 0;
    vlSelf->__VdlyDim0__chr_rom__v0 = 0;
    vlSelf->__VdlySet__chr_rom__v0 = 0;
}
