// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_NES___eval_static__TOP__nes_core_top__nes_inst(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___eval_static__TOP__nes_core_top__nes_inst\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__odd_or_even = 1U;
    vlSelfRef.__PVT__div_cpu = 1U;
    vlSelfRef.__PVT__div_ppu = 1U;
    vlSelfRef.__PVT__div_sys = 0U;
    vlSelfRef.__PVT__freeze_clocks = 0U;
    vlSelfRef.__PVT__ppu_tick = 0U;
    vlSelfRef.__PVT__hold_reset = 0U;
    vlSelfRef.__PVT__corepause_active = 0U;
    vlSelfRef.__PVT__corepause_active_delay = 0U;
    vlSelfRef.__PVT__skip_pause_ce = 0U;
    vlSelfRef.__PVT__corepause_delay = 0U;
    vlSelfRef.__PVT__div_ppu_pause = 0U;
}

VL_ATTR_COLD void Vnes_core_top_NES___eval_initial__TOP__nes_core_top__nes_inst(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___eval_initial__TOP__nes_core_top__nes_inst\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__BCD_en = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__mode = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__MMC5 = 0U;
    VL_ASSIGNSEL_QQ(64, 47, 0x11U, vlSelfRef.__PVT__SS_TOP_BACK, 0ULL);
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__vsync = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__rewind_active = 0U;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__rewind_on = 0U;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__0(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_in_vblank_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__is_in_vblank;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__audio_channels 
        = vlSelfRef.__PVT__audio_channels;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__rst_behavior 
        = vlSelfRef.__PVT__ppu_rst_behavior;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__fds_auto_eject 
        = vlSelfRef.__PVT__fds_auto_eject;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__max_diskside 
        = vlSelfRef.__PVT__max_diskside;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__fds_fast 
        = vlSelfRef.__PVT__fds_fast;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__fds_busy 
        = vlSelfRef.__PVT__fds_busy;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__fds_eject 
        = vlSelfRef.__PVT__fds_eject;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__paused 
        = vlSelfRef.__PVT__freeze_clocks;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__reset 
        = vlSelfRef.__PVT__gg_reset;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__paused 
        = vlSelfRef.__PVT__corepause_active_delay;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__increaseSSHeaderCount 
        = vlSelfRef.__PVT__increaseSSHeaderCount;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__load 
        = vlSelfRef.__PVT__load_state;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__save 
        = vlSelfRef.__PVT__save_state;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__savestate_number 
        = vlSelfRef.__PVT__savestate_number;
    vlSelfRef.__PVT__skip_ppu_cycle = ((4U == (IData)(vlSelfRef.__PVT__cpu_tick_count)) 
                                       & (0U == (IData)(vlSelfRef.__PVT__ppu_tick)));
    vlSelfRef.__PVT__nes_div = vlSelfRef.__PVT__div_sys;
    vlSelfRef.__PVT__corepaused = vlSelfRef.__PVT__corepause_active;
    vlSelfRef.__PVT__joypad_out = vlSelfRef.__PVT__joy_out;
    vlSelfRef.__PVT__savestate_address = vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__request_address;
    vlSelfRef.__PVT__savestate_loadstate = vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__request_loadstate;
    vlSelfRef.__PVT__savestate_savestate = vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__request_savestate;
    vlSelfRef.__PVT__cart_ce = (0x0aU == (IData)(vlSelfRef.__PVT__div_cpu));
    vlSelfRef.__PVT__sleep_rewind = vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__sleep_rewind;
    vlSelfRef.__PVT__Savestate_MAPRAMReadData = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMReadData;
    vlSelfRef.__Vcellout__multi_mapper__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellinp__codes__enable = (1U & (~ (IData)(vlSelfRef.__PVT__gg)));
    VL_ASSIGNSEL_QI(64, 9, 0U, vlSelfRef.__PVT__SS_TOP_BACK, 
                    VL_CONCAT_III(9,8,1, (IData)(vlSelfRef.__PVT__open_bus_data), (IData)(vlSelfRef.__PVT__odd_or_even)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__debug_dots 
        = vlSelfRef.__PVT__debug_dots;
    vlSelfRef.__PVT__phi2 = ((4U < (IData)(vlSelfRef.__PVT__div_cpu)) 
                             & (0x0cU > (IData)(vlSelfRef.__PVT__div_cpu)));
    VL_ASSIGN_W(129, vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__code, vlSelfRef.__PVT__gg_code);
    vlSelfRef.__PVT__scanline_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__scanline;
    vlSelfRef.__PVT__cycle_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__cycle;
    vlSelfRef.__PVT__use_fake_h = ((IData)(vlSelfRef.__PVT__freeze_clocks) 
                                   & (6U > (IData)(vlSelfRef.__PVT__faux_pixel_cnt)));
    vlSelfRef.__PVT__ppu_ce = (4U == (IData)(vlSelfRef.__PVT__div_ppu));
    vlSelfRef.__PVT__ppu_read = (1U == (IData)(vlSelfRef.__PVT__ppu_tick));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__get_or_put 
        = vlSelfRef.__PVT__odd_or_even;
    vlSelfRef.__PVT__ppu_write = (1U == (IData)(vlSelfRef.__PVT__ppu_tick));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__mask 
        = vlSelfRef.__PVT__mask;
    vlSelfRef.__PVT__cpu_ce = (0x0cU == (IData)(vlSelfRef.__PVT__div_cpu));
    vlSelfRef.__PVT__audio_en = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__int_audio), (IData)(vlSelfRef.__PVT__ext_audio));
    vlSelfRef.__PVT__cart_pre = ((6U <= (IData)(vlSelfRef.__PVT__div_cpu)) 
                                 & (0x0aU >= (IData)(vlSelfRef.__PVT__div_cpu)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__extra_sprites 
        = vlSelfRef.__PVT__ex_sprites;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__put_cycle 
        = vlSelfRef.__PVT__odd_or_even;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__savestate_address 
        = vlSelfRef.__PVT__savestate_address;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__load 
        = vlSelfRef.__PVT__savestate_loadstate;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__save 
        = vlSelfRef.__PVT__savestate_savestate;
    vlSelfRef.__PVT__SaveStateBus_wired_or[3U] = vlSelfRef.__Vcellout__multi_mapper__SaveStateBus_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__enable 
        = vlSelfRef.__Vcellinp__codes__enable;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__PHI2 
        = vlSelfRef.__PVT__phi2;
    vlSelfRef.__PVT__ppu_ce_pause = ((IData)(vlSelfRef.__PVT__corepause_active)
                                      ? (4U == (IData)(vlSelfRef.__PVT__div_ppu_pause))
                                      : (IData)(vlSelfRef.__PVT__ppu_ce));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__ce 
        = vlSelfRef.__PVT__ppu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__ce 
        = vlSelfRef.__PVT__cpu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__cpu_ce 
        = vlSelfRef.__PVT__cpu_ce;
    vlSelfRef.__PVT__apu_ce = vlSelfRef.__PVT__cpu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__enable 
        = vlSelfRef.__PVT__cpu_ce;
    vlSelfRef.__PVT__refresh = ((IData)(vlSelfRef.__PVT__corepause_active_delay) 
                                & (IData)(vlSelfRef.__PVT__ppu_ce_pause));
    vlSelfRef.__Vcellinp__clockgen_pause__ce = ((IData)(vlSelfRef.__PVT__ppu_ce_pause) 
                                                & (~ (IData)(vlSelfRef.__PVT__skip_pause_ce)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__ce 
        = vlSelfRef.__PVT__apu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__ce 
        = vlSelfRef.__Vcellinp__clockgen_pause__ce;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__1(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dma_data_to_ram = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__data_to_ram;
    vlSelfRef.__PVT__dma_read = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__read;
    vlSelfRef.__PVT__hblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__hblank;
    vlSelfRef.__PVT__vsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vsync;
    vlSelfRef.__PVT__hsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__hsync;
    vlSelfRef.__PVT__Savestate_OAMReadData = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMReadData;
    vlSelfRef.__PVT__vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vblank;
    vlSelfRef.__PVT__nmi = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__nmi;
    vlSelfRef.__PVT__ppu_dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__dout;
    vlSelfRef.__PVT__scanline_ppu = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__scanline;
    vlSelfRef.__PVT__ppu_cycle = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__cycle;
    vlSelfRef.__PVT__render_ena = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__render_ena_out;
    vlSelfRef.sys_type__out__strong__out1 = vlSymsp->TOP__nes_core_top__nes_inst__ppu.sys_type__out;
    vlSelfRef.sys_type__en0 = vlSymsp->TOP__nes_core_top__nes_inst__ppu.sys_type__en;
    vlSelfRef.__PVT__apu_dma_addr = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaAddr;
    vlSelfRef.__PVT__put_ce = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__put_ce;
    vlSelfRef.__PVT__get_ce = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__get_ce;
    vlSelfRef.__PVT__evenframe_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__evenframe;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_done 
        = vlSelfRef.__PVT__SAVE_out_done;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_Dout 
        = vlSelfRef.__PVT__SAVE_out_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_data_in 
        = vlSelfRef.__PVT__bram_din;
    vlSelfRef.__PVT__gg_avail = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__available;
    vlSelfRef.__PVT__cpu_rnw = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__R_W_n;
    vlSelfRef.__PVT__cpu_dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__DO;
    vlSelfRef.__PVT__SS_TOP = vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__Dout;
    vlSelfRef.__Vcellinp__cpu__NMI_n = (1U & (~ (IData)(vlSelfRef.__PVT__nmi)));
    vlSelfRef.__PVT__scanline = ((IData)(vlSelfRef.__PVT__corepause_active)
                                  ? (IData)(vlSelfRef.__PVT__scanline_paused)
                                  : (IData)(vlSelfRef.__PVT__scanline_ppu));
    vlSelfRef.__PVT__cycle = ((IData)(vlSelfRef.__PVT__use_fake_h)
                               ? 0x0154U : ((IData)(vlSelfRef.__PVT__corepause_active)
                                             ? (IData)(vlSelfRef.__PVT__cycle_paused)
                                             : (IData)(vlSelfRef.__PVT__ppu_cycle)));
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__is_rendering 
        = vlSelfRef.__PVT__render_ena;
    vlSelfRef.sys_type__out__strong__en1 = vlSelfRef.sys_type__en0;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dmc_dma_addr 
        = vlSelfRef.__PVT__apu_dma_addr;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__put_ce 
        = vlSelfRef.__PVT__put_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__get_ce 
        = vlSelfRef.__PVT__get_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__cpu_read 
        = vlSelfRef.__PVT__cpu_rnw;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__RW 
        = vlSelfRef.__PVT__cpu_rnw;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__data_from_cpu 
        = vlSelfRef.__PVT__cpu_dout;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__NMI_n 
        = vlSelfRef.__Vcellinp__cpu__NMI_n;
    vlSelfRef.sys_type__out__strong__en = vlSelfRef.sys_type__out__strong__en1;
    vlSelfRef.sys_type__out__strong = ((IData)(vlSelfRef.sys_type__out__strong__out1) 
                                       & (IData)(vlSelfRef.sys_type__out__strong__en1));
    vlSelfRef.sys_type__en = vlSelfRef.sys_type__out__strong__en;
    vlSelfRef.sys_type__out = vlSelfRef.sys_type__out__strong;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__2(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apu_dma_request = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaReq;
    vlSelfRef.__PVT__apu_irq = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__IRQ;
    vlSelfRef.__PVT__apu_dout = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DOUT;
    vlSelfRef.__PVT__evenframe = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__evenframe;
    vlSelfRef.__PVT__chr_read = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_r;
    vlSelfRef.__PVT__chr_write = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_w;
    vlSelfRef.__Vcellinp__multi_mapper__chr_mask = 
        (0x000003ffU & VL_SEL_IIII(20, vlSelfRef.__PVT__chr_mask, 0U, 10));
    vlSelfRef.__Vcellinp__multi_mapper__prg_mask = 
        (0x000003ffU & VL_SEL_IIII(21, vlSelfRef.__PVT__prg_mask, 0U, 10));
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__flags 
        = vlSelfRef.__PVT__mapper_flags;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSelfRef.__Vcellinp__cpu__pwr_n = (1U & (~ (IData)(vlSelfRef.__PVT__cold_reset)));
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__reset 
        = vlSelfRef.__PVT__reset_nes;
    vlSelfRef.__PVT__reset_noSS = (((IData)(vlSelfRef.__PVT__reset_nes) 
                                    | (IData)(vlSelfRef.__PVT__hold_reset)) 
                                   | (IData)(vlSelfRef.__PVT__bootvector_flag));
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__reset_in 
        = vlSelfRef.__PVT__reset_nes;
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__sys_type 
        = vlSelfRef.__PVT__sys_type;
    vlSelfRef.__Vcellinp__apu__PAL = (1U == (IData)(vlSelfRef.__PVT__sys_type));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__sys_type 
        = vlSelfRef.__PVT__sys_type;
    vlSelfRef.__PVT__cpu_Instrnew = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__Instrnew;
    vlSelfRef.__PVT__cpu_addr = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__A;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dmc_trigger 
        = vlSelfRef.__PVT__apu_dma_request;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_read 
        = vlSelfRef.__PVT__chr_read;
    vlSelfRef.__PVT__ppumem_read = vlSelfRef.__PVT__chr_read;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_write 
        = vlSelfRef.__PVT__chr_write;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_mask 
        = vlSelfRef.__Vcellinp__multi_mapper__chr_mask;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_mask 
        = vlSelfRef.__Vcellinp__multi_mapper__prg_mask;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__pwr_n 
        = vlSelfRef.__Vcellinp__cpu__pwr_n;
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSelfRef.__Vcellinp__multi_mapper__ce = ((IData)(vlSelfRef.__PVT__cart_ce) 
                                              & (~ (IData)(vlSelfRef.__PVT__reset_noSS)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__PAL 
        = vlSelfRef.__Vcellinp__apu__PAL;
    vlSelfRef.__PVT__apu_cs = (0x0200U == (0x000007ffU 
                                           & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__cpu_addr), 5U, 11)));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__ce 
        = vlSelfRef.__Vcellinp__multi_mapper__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__CS 
        = vlSelfRef.__PVT__apu_cs;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__3(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_read_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_r_ex;
    vlSelfRef.__PVT__chr_addr = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_addr;
    vlSelfRef.__PVT__reset_delay = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__reset_delay;
    vlSelfRef.__PVT__state_loaded = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__load_done;
    vlSelfRef.__PVT__savestate_busy = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__savestate_busy;
    vlSelfRef.__PVT__SAVE_out_Din = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_Din;
    vlSelfRef.__PVT__SAVE_out_Adr = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_Adr;
    vlSelfRef.__PVT__SAVE_out_rnw = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_rnw;
    vlSelfRef.__PVT__SAVE_out_ena = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_ena;
    vlSelfRef.__PVT__SAVE_out_be = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_be;
    vlSelfRef.__PVT__saving_savestate = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__saving_savestate;
    vlSelfRef.__PVT__sleep_savestates = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__sleep_savestate;
    vlSelfRef.__PVT__Savestate_RAMAddr = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMAddr;
    vlSelfRef.__PVT__Savestate_RAMWriteData = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMWriteData;
    vlSelfRef.__PVT__Savestate_RAMRdEn = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMRdEn;
    vlSelfRef.__PVT__Savestate_RAMWrEn = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMWrEn;
    vlSelfRef.__PVT__Savestate_RAMType = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMType;
    vlSelfRef.__PVT__SaveStateBus_rst = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_rst;
    vlSelfRef.__PVT__SaveStateBus_wren = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_wren;
    vlSelfRef.__PVT__loading_savestate = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__loading_savestate;
    vlSelfRef.__PVT__reset_ss = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__reset_ss;
    vlSelfRef.__PVT__SaveStateBus_Din = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Din;
    vlSelfRef.__PVT__SaveStateBus_Adr = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Adr;
    vlSelfRef.__PVT__skip_pixel_pause = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__short_frame;
    vlSelfRef.__PVT__pause_cpu = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__pause_cpu;
    vlSelfRef.__PVT__apu_dma_ack = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dmc_ack;
    vlSelfRef.__PVT__dma_aout = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__aout;
    vlSelfRef.__PVT__dma_aout_enable = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__aout_enable;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_ex 
        = vlSelfRef.__PVT__chr_read_ex;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_ain_orig 
        = vlSelfRef.__PVT__chr_addr;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__request_busy 
        = vlSelfRef.__PVT__savestate_busy;
    vlSelfRef.__PVT__sleep_savestate = ((IData)(vlSelfRef.__PVT__sleep_rewind) 
                                        | (IData)(vlSelfRef.__PVT__sleep_savestates));
    vlSelfRef.__PVT__Savestate_SDRAMAddr = vlSelfRef.__PVT__Savestate_RAMAddr;
    vlSelfRef.__PVT__Savestate_MAPRAMAddr = (0x00001fffU 
                                             & VL_SEL_IIII(25, vlSelfRef.__PVT__Savestate_RAMAddr, 0U, 13));
    vlSelfRef.__PVT__Savestate_OAMAddr = (0x000000ffU 
                                          & VL_SEL_IIII(25, vlSelfRef.__PVT__Savestate_RAMAddr, 0U, 8));
    vlSelfRef.__PVT__Savestate_SDRAMWriteData = vlSelfRef.__PVT__Savestate_RAMWriteData;
    vlSelfRef.__PVT__Savestate_MAPRAMWriteData = vlSelfRef.__PVT__Savestate_RAMWriteData;
    vlSelfRef.__PVT__Savestate_OAMWriteData = vlSelfRef.__PVT__Savestate_RAMWriteData;
    vlSelfRef.__PVT__Savestate_SDRAMRdEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMRdEn) 
                                            & (1U < (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_SDRAMWrEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMWrEn) 
                                            & (1U < (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_MAPRAMRdEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMRdEn) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_MAPRAMWrEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMWrEn) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_RAMReadData = ((0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType))
                                               ? (IData)(vlSelfRef.__PVT__Savestate_OAMReadData)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__Savestate_RAMType))
                                                   ? (IData)(vlSelfRef.__PVT__Savestate_MAPRAMReadData)
                                                   : (IData)(vlSelfRef.__PVT__Savestate_SDRAMReadData)));
    vlSelfRef.__PVT__Savestate_OAMRdEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMRdEn) 
                                          & (0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_OAMWrEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMWrEn) 
                                          & (0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSelfRef.__PVT__SaveStateExt_rst = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSelfRef.__PVT__SaveStateExt_wren = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSelfRef.__PVT__SaveStateExt_load = vlSelfRef.__PVT__loading_savestate;
    vlSelfRef.__PVT__Savestate_MAPRAMactive = ((IData)(vlSelfRef.__PVT__loading_savestate) 
                                               | (IData)(vlSelfRef.__PVT__saving_savestate));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSelfRef.__PVT__cpu_reset = ((IData)(vlSelfRef.__PVT__reset_ss) 
                                  | (IData)(vlSelfRef.__PVT__hold_reset));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSelfRef.__PVT__SaveStateExt_Din = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSelfRef.__PVT__SaveStateExt_Adr = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSelfRef.__Vcellinp__cpu__rdy = (1U & (~ (IData)(vlSelfRef.__PVT__pause_cpu)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaAck 
        = vlSelfRef.__PVT__apu_dma_ack;
    vlSelfRef.__PVT__mr_int = ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                                ? (IData)(vlSelfRef.__PVT__dma_read)
                                : (IData)(vlSelfRef.__PVT__cpu_rnw));
    vlSelfRef.__PVT__mw_int = (1U & ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                                      ? (~ (IData)(vlSelfRef.__PVT__dma_read))
                                      : (~ (IData)(vlSelfRef.__PVT__cpu_rnw))));
    vlSelfRef.__PVT__dbus = ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                              ? (IData)(vlSelfRef.__PVT__dma_data_to_ram)
                              : (IData)(vlSelfRef.__PVT__cpu_dout));
    vlSelfRef.__PVT__addr = ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                              ? (IData)(vlSelfRef.__PVT__dma_aout)
                              : (IData)(vlSelfRef.__PVT__cpu_addr));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMAddr 
        = vlSelfRef.__PVT__Savestate_MAPRAMAddr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMAddr 
        = vlSelfRef.__PVT__Savestate_OAMAddr;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMWriteData 
        = vlSelfRef.__PVT__Savestate_MAPRAMWriteData;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMWriteData 
        = vlSelfRef.__PVT__Savestate_OAMWriteData;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMRdEn 
        = vlSelfRef.__PVT__Savestate_MAPRAMRdEn;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMWrEn 
        = vlSelfRef.__PVT__Savestate_MAPRAMWrEn;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMReadData 
        = vlSelfRef.__PVT__Savestate_RAMReadData;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMRdEn 
        = vlSelfRef.__PVT__Savestate_OAMRdEn;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMWrEn 
        = vlSelfRef.__PVT__Savestate_OAMWrEn;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMactive 
        = vlSelfRef.__PVT__Savestate_MAPRAMactive;
    vlSelfRef.__Vcellinp__cpu__res_n = (1U & ((~ (IData)(vlSelfRef.__PVT__cpu_reset)) 
                                              & (~ (IData)(vlSelfRef.__PVT__cold_reset))));
    vlSelfRef.__PVT__reset = ((IData)(vlSelfRef.__PVT__cpu_reset) 
                              | (IData)(vlSelfRef.__PVT__bootvector_flag));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__rdy 
        = vlSelfRef.__Vcellinp__cpu__rdy;
    vlSelfRef.__PVT__mr_ppu = ((IData)(vlSelfRef.__PVT__mr_int) 
                               & (IData)(vlSelfRef.__PVT__ppu_read));
    vlSelfRef.__Vcellinp__ppu__RWn = ((IData)(vlSelfRef.__PVT__mr_int) 
                                      & (~ (IData)(vlSelfRef.__PVT__mw_int)));
    vlSelfRef.__PVT__mw_ppu = ((IData)(vlSelfRef.__PVT__mw_int) 
                               & (IData)(vlSelfRef.__PVT__ppu_write));
    vlSelfRef.__PVT__prg_write = ((IData)(vlSelfRef.__PVT__mw_int) 
                                  & (IData)(vlSelfRef.__PVT__cart_pre));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DIN 
        = vlSelfRef.__PVT__dbus;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__din 
        = vlSelfRef.__PVT__dbus;
    vlSelfRef.__Vcellinp__ppu__cs = ((1U == (7U & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0x0dU, 3))) 
                                     & (IData)(vlSelfRef.__PVT__phi2));
    vlSelfRef.__Vcellinp__dma__sprite_trigger = (((IData)(vlSelfRef.__PVT__apu_cs) 
                                                  & (0x14U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5)))) 
                                                 & (~ (IData)(vlSelfRef.__PVT__cpu_rnw)));
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__addr_in 
        = vlSelfRef.__PVT__addr;
    vlSelfRef.__Vcellinp__apu__ADDR = (0x0000001fU 
                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5));
    vlSelfRef.__PVT__apu_reg_cs = ((IData)(vlSelfRef.__PVT__apu_cs) 
                                   & (0x15U == (0x0000001fU 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5))));
    vlSelfRef.__Vcellinp__ppu__ain = (7U & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 3));
    vlSelfRef.__PVT__joypad1_cs = ((IData)(vlSelfRef.__PVT__apu_cs) 
                                   & (0x16U == (0x0000001fU 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5))));
    vlSelfRef.__PVT__joypad2_cs = ((IData)(vlSelfRef.__PVT__apu_cs) 
                                   & (0x17U == (0x0000001fU 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5))));
    vlSelfRef.__PVT__ppu_cs = ((0x2000U <= (IData)(vlSelfRef.__PVT__addr)) 
                               & (0x4000U > (IData)(vlSelfRef.__PVT__addr)));
    vlSelfRef.__PVT__prg_addr = vlSelfRef.__PVT__addr;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__res_n 
        = vlSelfRef.__Vcellinp__cpu__res_n;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__RWn 
        = vlSelfRef.__Vcellinp__ppu__RWn;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_write 
        = vlSelfRef.__PVT__prg_write;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__cs 
        = vlSelfRef.__Vcellinp__ppu__cs;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__sprite_trigger 
        = vlSelfRef.__Vcellinp__dma__sprite_trigger;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__ADDR 
        = vlSelfRef.__Vcellinp__apu__ADDR;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__ain 
        = vlSelfRef.__Vcellinp__ppu__ain;
    vlSelfRef.__PVT__joypad_clock = VL_CONCAT_III(2,1,1, 
                                                  ((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                                   & (IData)(vlSelfRef.__PVT__cpu_rnw)), 
                                                  ((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                                   & (IData)(vlSelfRef.__PVT__cpu_rnw)));
    vlSelfRef.__PVT__prg_read = ((((IData)(vlSelfRef.__PVT__mr_int) 
                                   & (IData)(vlSelfRef.__PVT__cart_pre)) 
                                  & (0x0200U != (0x000007ffU 
                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 5U, 11)))) 
                                 & (~ (IData)(vlSelfRef.__PVT__ppu_cs)));
    vlSelfRef.__Vcellinp__ppu__read = ((IData)(vlSelfRef.__PVT__ppu_cs) 
                                       & (IData)(vlSelfRef.__PVT__mr_ppu));
    vlSelfRef.__Vcellinp__ppu__write = ((IData)(vlSelfRef.__PVT__ppu_cs) 
                                        & (IData)(vlSelfRef.__PVT__mw_ppu));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_ain 
        = vlSelfRef.__PVT__prg_addr;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_read 
        = vlSelfRef.__PVT__prg_read;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__read 
        = vlSelfRef.__Vcellinp__ppu__read;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__write 
        = vlSelfRef.__Vcellinp__ppu__write;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__4(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sample_apu = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__Sample;
    vlSelfRef.__PVT__skip_pixel = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__short_frame;
    vlSelfRef.__PVT__chr_addr_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_a_ex;
    vlSelfRef.__PVT__sample_inverted = (0x0000ffffU 
                                        & ((IData)(0xffffU) 
                                           - (IData)(vlSelfRef.__PVT__sample_apu)));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_ain_ex 
        = vlSelfRef.__PVT__chr_addr_ex;
    vlSelfRef.__PVT__audio_mappers = ((1U == (IData)(vlSelfRef.__PVT__audio_en))
                                       ? 0U : (IData)(vlSelfRef.__PVT__sample_inverted));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__audio_in 
        = vlSelfRef.__PVT__audio_mappers;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__5(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_a10 = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__vram_a10;
    vlSelfRef.__PVT__mapper_has_savestate = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_savestate;
    vlSelfRef.__PVT__bram_addr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_addr;
    vlSelfRef.__PVT__bram_dout = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_data_out;
    vlSelfRef.__PVT__bram_override = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_ovr;
    vlSelfRef.__PVT__diskside = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__diskside;
    vlSelfRef.__PVT__chr_allow = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_allow;
    vlSelfRef.__PVT__vram_ce = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__vram_ce;
    vlSelfRef.__PVT__sample_ext = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__audio;
    vlSelfRef.__PVT__prg_conflict_d0 = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_conflict_d0;
    vlSelfRef.__PVT__bram_write = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_prg_write;
    vlSelfRef.__PVT__has_flashsaves = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_flashsaves;
    vlSelfRef.__PVT__mapper_irq = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__irq;
    vlSelfRef.__PVT__prg_conflict = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_conflict;
    vlSelfRef.__PVT__chr_from_ppu_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_dout;
    vlSelfRef.__PVT__has_chr_from_ppu_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_chr_dout;
    vlSelfRef.__PVT__chr_linaddr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_aout;
    vlSelfRef.__PVT__prg_bus_write = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_bus_write;
    vlSelfRef.__PVT__prg_dout_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_dout;
    vlSelfRef.__PVT__prg_allow = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_allow;
    vlSelfRef.__PVT__prg_linaddr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_aout;
    vlSelfRef.__PVT__emphasis = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__emphasis;
    vlSelfRef.__PVT__chr_from_ppu = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_dout;
    vlSelfRef.__PVT__ppumem_write = ((IData)(vlSelfRef.__PVT__chr_write) 
                                     & ((IData)(vlSelfRef.__PVT__chr_allow) 
                                        | (IData)(vlSelfRef.__PVT__vram_ce)));
    if ((0U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = 0U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_ext;
    } else if ((2U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_inverted;
    } else if ((3U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_ext;
    }
    vlSelfRef.__PVT__mapper_has_flashsaves = vlSelfRef.__PVT__has_flashsaves;
    vlSelfRef.__Vcellinp__cpu__IRQ_n = (1U & (~ ((IData)(vlSelfRef.__PVT__apu_irq) 
                                                 | (IData)(vlSelfRef.__PVT__mapper_irq))));
    vlSelfRef.__PVT__ppumem_addr = vlSelfRef.__PVT__chr_linaddr;
    vlSelfRef.__PVT__cpumem_write = ((IData)(vlSelfRef.__PVT__prg_write) 
                                     & (IData)(vlSelfRef.__PVT__prg_allow));
    vlSelfRef.__PVT__cpumem_read = (((IData)(vlSelfRef.__PVT__prg_read) 
                                     & (IData)(vlSelfRef.__PVT__prg_allow)) 
                                    | ((IData)(vlSelfRef.__PVT__prg_write) 
                                       & (IData)(vlSelfRef.__PVT__prg_conflict)));
    vlSelfRef.__PVT__save_written = ((IData)(vlSelfRef.__PVT__has_flashsaves)
                                      ? (((~ VL_BITSEL_IIII(25, vlSelfRef.__PVT__prg_linaddr, 0x18U)) 
                                          & (IData)(vlSelfRef.__PVT__prg_write)) 
                                         & (IData)(vlSelfRef.__PVT__prg_allow))
                                      : ((0x14U == 
                                          (0x000000ffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__mapper_flags, 0U, 8)))
                                          ? (((0x0fU 
                                               == (0x0000000fU 
                                                   & VL_SEL_IIII(25, vlSelfRef.__PVT__prg_linaddr, 0x12U, 4))) 
                                              & (IData)(vlSelfRef.__PVT__prg_write)) 
                                             & (IData)(vlSelfRef.__PVT__prg_allow))
                                          : (((3U == 
                                               (7U 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_addr), 0x0dU, 3))) 
                                              & (IData)(vlSelfRef.__PVT__prg_write)) 
                                             | (IData)(vlSelfRef.__PVT__bram_write))));
    vlSelfRef.__PVT__cpumem_addr = vlSelfRef.__PVT__prg_linaddr;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_din 
        = vlSelfRef.__PVT__chr_from_ppu;
    vlSelfRef.__PVT__ppumem_dout = vlSelfRef.__PVT__chr_from_ppu;
    vlSelfRef.__PVT__sample = vlSelfRef.__PVT__sample_a;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__IRQ_n 
        = vlSelfRef.__Vcellinp__cpu__IRQ_n;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__6(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_to_ppu = ((IData)(vlSelfRef.__PVT__has_chr_from_ppu_mapper)
                                    ? (IData)(vlSelfRef.__PVT__chr_from_ppu_mapper)
                                    : (IData)(vlSelfRef.__PVT__ppumem_din));
    vlSelfRef.__PVT__prg_din = (((IData)(vlSelfRef.__PVT__dbus) 
                                 & ((IData)(vlSelfRef.__PVT__prg_conflict)
                                     ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                     : 0xffU)) | ((IData)(vlSelfRef.__PVT__prg_conflict_d0)
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__cpumem_din))
                                                   : 0U));
    vlSelfRef.__Vcellinp__codes__data_in = ((IData)(vlSelfRef.__PVT__prg_allow)
                                             ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                             : (IData)(vlSelfRef.__PVT__prg_dout_mapper));
    vlSelfRef.__PVT__external_data_bus = (0x000000ffU 
                                          & ((IData)(vlSelfRef.__PVT__reset)
                                              ? VL_SEL_IQII(64, vlSelfRef.__PVT__SS_TOP, 9U, 8)
                                              : (((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                                  & (~ (IData)(vlSelfRef.__PVT__dma_aout_enable)))
                                                  ? 
                                                 VL_CONCAT_III(8,3,5, 
                                                               (7U 
                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__open_bus_data), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad1_data))
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                                   & (~ (IData)(vlSelfRef.__PVT__dma_aout_enable)))
                                                   ? 
                                                  VL_CONCAT_III(8,3,5, 
                                                                (7U 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__open_bus_data), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad2_data))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__ppu_cs)
                                                    ? (IData)(vlSelfRef.__PVT__ppu_dout)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__prg_allow)
                                                     ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__prg_bus_write)
                                                      ? (IData)(vlSelfRef.__PVT__prg_dout_mapper)
                                                      : (IData)(vlSelfRef.__PVT__open_bus_data))))))));
    vlSelfRef.__Vcellout__cpu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__apu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__color = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__color;
    vlSelfRef.__Vcellout__ppu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_dbus_in 
        = vlSelfRef.__PVT__chr_to_ppu;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_din 
        = vlSelfRef.__PVT__prg_din;
    vlSelfRef.__PVT__cpumem_dout = vlSelfRef.__PVT__prg_din;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__data_in 
        = vlSelfRef.__Vcellinp__codes__data_in;
    VL_ASSIGNSEL_QI(64, 8, 9U, vlSelfRef.__PVT__SS_TOP_BACK, vlSelfRef.__PVT__external_data_bus);
    vlSelfRef.__PVT__from_data_bus = vlSelfRef.__PVT__external_data_bus;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__cpu__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__apu__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__ppu__SaveStateBus_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__Din 
        = vlSelfRef.__PVT__SS_TOP_BACK;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_from_ram 
        = vlSelfRef.__PVT__from_data_bus;
    vlSelfRef.__PVT__dma_data_bus = (((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                      & (IData)(vlSelfRef.__PVT__dma_aout_enable))
                                      ? VL_CONCAT_III(8,3,5, 
                                                      (7U 
                                                       & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad1_data))
                                      : (((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                          & (IData)(vlSelfRef.__PVT__dma_aout_enable))
                                          ? VL_CONCAT_III(8,3,5, 
                                                          (7U 
                                                           & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad2_data))
                                          : (IData)(vlSelfRef.__PVT__from_data_bus)));
    vlSelfRef.__PVT__apu_reg_value = VL_CONCAT_III(8,2,6, 
                                                   (3U 
                                                    & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__apu_dout), 6U, 2)), 
                                                   VL_CONCAT_III(6,1,5, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__apu_dout), 0U, 5))));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaData 
        = vlSelfRef.__PVT__dma_data_bus;
    vlSelfRef.__PVT__internal_data_bus = ((IData)(vlSelfRef.__PVT__apu_reg_cs)
                                           ? (IData)(vlSelfRef.__PVT__apu_reg_value)
                                           : (IData)(vlSelfRef.__PVT__from_data_bus));
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dma_data_to_ram 
        = vlSelfRef.__PVT__internal_data_bus;
    vlSelfRef.__Vcellinp__cpu__DI = ((IData)(vlSelfRef.__PVT__cpu_rnw)
                                      ? (IData)(vlSelfRef.__PVT__internal_data_bus)
                                      : (IData)(vlSelfRef.__PVT__cpu_dout));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__DI 
        = vlSelfRef.__Vcellinp__cpu__DI;
}

VL_ATTR_COLD void Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__7(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___stl_sequent__TOP__nes_core_top__nes_inst__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__genie_ovr = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__genie_ovr;
    vlSelfRef.__PVT__genie_data = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__genie_data;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_TOP____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[4U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_TOP____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_Dout = (((((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                              | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                             | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[4U]) 
                                          | vlSelfRef.__PVT__SaveStateExt_Dout);
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Dout 
        = vlSelfRef.__PVT__SaveStateBus_Dout;
}

VL_ATTR_COLD void Vnes_core_top_NES___ctor_var_reset(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset_nes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10645675768451461053ull);
    vlSelf->__PVT__ppu_rst_behavior = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10950182513514101945ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__pausecore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3096587323667671607ull);
    vlSelf->__PVT__corepaused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11246190229135106281ull);
    vlSelf->__PVT__sys_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12678443134343359385ull);
    vlSelf->__PVT__nes_div = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13701569722795626316ull);
    vlSelf->__PVT__mapper_flags = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8016424174808949728ull);
    vlSelf->__PVT__sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14877665802122487536ull);
    vlSelf->__PVT__color = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 465961873555653160ull);
    vlSelf->__PVT__joypad_clock = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1392439112855830223ull);
    vlSelf->__PVT__joypad_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12821089782801497810ull);
    vlSelf->__PVT__joypad1_data = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7132106306334881243ull);
    vlSelf->__PVT__joypad2_data = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3460307899717449300ull);
    vlSelf->__PVT__fds_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14082033140487425350ull);
    vlSelf->__PVT__fds_eject = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8855700390889327706ull);
    vlSelf->__PVT__fds_auto_eject = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6830451990629182503ull);
    vlSelf->__PVT__max_diskside = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6148179546198233061ull);
    vlSelf->__PVT__fds_fast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3155636354892996366ull);
    vlSelf->__PVT__diskside = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14453812024835779944ull);
    vlSelf->__PVT__audio_channels = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8674427581541877616ull);
    vlSelf->__PVT__ex_sprites = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3311972154087999307ull);
    vlSelf->__PVT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13980441125567301684ull);
    vlSelf->__PVT__dejitter_timing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1739236165932195119ull);
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
    vlSelf->__PVT__refresh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12242286718717544838ull);
    vlSelf->__PVT__prg_mask = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 17880926985789218452ull);
    vlSelf->__PVT__chr_mask = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6258872983445368596ull);
    vlSelf->__PVT__bram_addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10458784103138679157ull);
    vlSelf->__PVT__bram_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5075279192243035165ull);
    vlSelf->__PVT__bram_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13038917118336520507ull);
    vlSelf->__PVT__bram_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14914250307306904362ull);
    vlSelf->__PVT__bram_override = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734754758455516112ull);
    vlSelf->__PVT__cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->__PVT__scanline = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 654532841143486145ull);
    vlSelf->__PVT__int_audio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10490182714614226344ull);
    vlSelf->__PVT__ext_audio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14285356906386560186ull);
    vlSelf->__PVT__apu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7079689171004307316ull);
    vlSelf->__PVT__gg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11596500424625732877ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__gg_code, __VscopeHash, 11342642967172607889ull);
    vlSelf->__PVT__gg_avail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18245037342359187923ull);
    vlSelf->__PVT__gg_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6381127999868475728ull);
    vlSelf->__PVT__emphasis = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15600364000377428379ull);
    vlSelf->__PVT__save_written = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12999593531671791576ull);
    vlSelf->__PVT__mapper_has_flashsaves = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14921181330445867937ull);
    vlSelf->__PVT__debug_dots = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12816960009943112552ull);
    vlSelf->__PVT__mapper_has_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9066047425907630609ull);
    vlSelf->__PVT__increaseSSHeaderCount = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6878619865022596285ull);
    vlSelf->__PVT__save_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12223108347511091831ull);
    vlSelf->__PVT__load_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646746156978539956ull);
    vlSelf->__PVT__savestate_number = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11330586379740218870ull);
    vlSelf->__PVT__sleep_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3460690964128772266ull);
    vlSelf->__PVT__state_loaded = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1489981880265496740ull);
    vlSelf->__PVT__hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->__PVT__hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->__PVT__vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->__PVT__vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->__PVT__Savestate_SDRAMAddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10880651220979126361ull);
    vlSelf->__PVT__Savestate_SDRAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10185974113616422370ull);
    vlSelf->__PVT__Savestate_SDRAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17367137282120916287ull);
    vlSelf->__PVT__Savestate_SDRAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1749558778740942308ull);
    vlSelf->__PVT__Savestate_SDRAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7051929845243231257ull);
    vlSelf->__PVT__SaveStateExt_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16590983890517172538ull);
    vlSelf->__PVT__SaveStateExt_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7432326705923088582ull);
    vlSelf->__PVT__SaveStateExt_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10167888764967275788ull);
    vlSelf->__PVT__SaveStateExt_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4192612033526349576ull);
    vlSelf->__PVT__SaveStateExt_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7735660284603178086ull);
    vlSelf->__PVT__SaveStateExt_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2187369914897308064ull);
    vlSelf->__PVT__SAVE_out_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3797571956275267448ull);
    vlSelf->__PVT__SAVE_out_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12957775889286129002ull);
    vlSelf->__PVT__SAVE_out_Adr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3677645122681641753ull);
    vlSelf->__PVT__SAVE_out_rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17106025814601971554ull);
    vlSelf->__PVT__SAVE_out_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16983309625961932622ull);
    vlSelf->__PVT__SAVE_out_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 479863662807440211ull);
    vlSelf->__PVT__SAVE_out_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15877017310695691990ull);
    vlSelf->__PVT__from_data_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6560509616532484156ull);
    vlSelf->__PVT__cpu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6826750069088491744ull);
    vlSelf->__PVT__cpu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668535522681808478ull);
    vlSelf->__PVT__ppu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11189680384998950973ull);
    vlSelf->__PVT__cart_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6404297480749507118ull);
    vlSelf->__PVT__cart_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18131124691746001544ull);
    vlSelf->__PVT__ppu_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1488115816908806318ull);
    vlSelf->__PVT__ppu_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6682785757134063937ull);
    vlSelf->__PVT__phi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5858276535966841215ull);
    vlSelf->__PVT__skip_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952471997317625230ull);
    vlSelf->__PVT__faux_pixel_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15900936263707528572ull);
    vlSelf->__PVT__use_fake_h = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12447561479191454109ull);
    vlSelf->__PVT__last_sys_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11630276212230680195ull);
    vlSelf->__PVT__cpu_tick_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7190777495403718108ull);
    vlSelf->__PVT__skip_ppu_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3250876422602818118ull);
    vlSelf->__PVT__bootvector_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9224877687431086765ull);
    vlSelf->__PVT__cpu_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6510357798985103082ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__reset_noSS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16498746201009486903ull);
    vlSelf->__PVT__skip_pixel_pause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13782966379161476592ull);
    vlSelf->__PVT__ppu_ce_pause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 367289817379758013ull);
    vlSelf->__PVT__render_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17738323072601696965ull);
    vlSelf->__PVT__cycle_paused = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18080336546781318696ull);
    vlSelf->__PVT__scanline_paused = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10425296935410435344ull);
    vlSelf->__PVT__is_in_vblank_paused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17879340701408437162ull);
    vlSelf->__PVT__evenframe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3861517047138621945ull);
    vlSelf->__PVT__evenframe_paused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022594431869317245ull);
    vlSelf->__Vcellinp__clockgen_pause__ce = 0;
    vlSelf->__PVT__cpu_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9730387426955054438ull);
    vlSelf->__PVT__cpu_rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3062589004175287587ull);
    vlSelf->__PVT__pause_cpu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 632701397991589166ull);
    vlSelf->__PVT__nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4495189327971372216ull);
    vlSelf->__PVT__mapper_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4585444155536170774ull);
    vlSelf->__PVT__apu_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8528129494564100472ull);
    vlSelf->__PVT__cpu_Instrnew = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8597665784255369804ull);
    vlSelf->__PVT__apu_reg_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17715802724343068ull);
    vlSelf->__PVT__apu_reg_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3269488001826890812ull);
    vlSelf->__PVT__internal_data_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8982467298486746286ull);
    vlSelf->__Vcellout__cpu__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__cpu__DI = 0;
    vlSelf->__Vcellinp__cpu__NMI_n = 0;
    vlSelf->__Vcellinp__cpu__IRQ_n = 0;
    vlSelf->__Vcellinp__cpu__rdy = 0;
    vlSelf->__Vcellinp__cpu__pwr_n = 0;
    vlSelf->__Vcellinp__cpu__res_n = 0;
    vlSelf->__PVT__dma_aout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16405346836667838582ull);
    vlSelf->__PVT__dma_aout_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12870135436910262364ull);
    vlSelf->__PVT__dma_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11724282634292636919ull);
    vlSelf->__PVT__dma_data_to_ram = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6658827166194314617ull);
    vlSelf->__PVT__apu_dma_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10423653683523706893ull);
    vlSelf->__PVT__apu_dma_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8173968182296633862ull);
    vlSelf->__PVT__apu_dma_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4166041192288873215ull);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__dma_data_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11981615106007929073ull);
    vlSelf->__PVT__dbus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 200439678470031548ull);
    vlSelf->__PVT__mr_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11588470317588546307ull);
    vlSelf->__PVT__mw_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18427204135878389141ull);
    vlSelf->__PVT__get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10476713293322569593ull);
    vlSelf->__PVT__put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7411521946655991260ull);
    vlSelf->__Vcellinp__dma__sprite_trigger = 0;
    vlSelf->__PVT__apu_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 755911008076747184ull);
    vlSelf->__PVT__apu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10585569869918127152ull);
    vlSelf->__PVT__sample_apu = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13474389799004202026ull);
    vlSelf->__Vcellout__apu__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__apu__ADDR = 0;
    vlSelf->__Vcellinp__apu__PAL = 0;
    vlSelf->__PVT__sample_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15109859932489065452ull);
    vlSelf->__PVT__sample_inverted = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4206116846397850689ull);
    vlSelf->__PVT__audio_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2545896845033866733ull);
    vlSelf->__PVT__audio_mappers = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16876921661489212421ull);
    vlSelf->__PVT__joypad1_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7182038728656527376ull);
    vlSelf->__PVT__joypad2_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8501481756743303148ull);
    vlSelf->__PVT__joy_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5884683836334869747ull);
    vlSelf->__PVT__joy_latch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15411400233700393413ull);
    vlSelf->__PVT__mr_ppu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16064754103046802226ull);
    vlSelf->__PVT__mw_ppu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15160595363861146464ull);
    vlSelf->__PVT__ppu_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2621170106790362704ull);
    vlSelf->__PVT__ppu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15012318443543106817ull);
    vlSelf->__PVT__chr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14589331528117138436ull);
    vlSelf->__PVT__chr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10916681796329076040ull);
    vlSelf->__PVT__chr_read_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676321976287579363ull);
    vlSelf->__PVT__chr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8919572073661363373ull);
    vlSelf->__PVT__chr_addr_ex = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11499280346578699324ull);
    vlSelf->__PVT__chr_from_ppu = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11532419692689637646ull);
    vlSelf->__PVT__chr_to_ppu = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13963511564292582102ull);
    vlSelf->__PVT__ppu_cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11175893721959102603ull);
    vlSelf->__PVT__scanline_ppu = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8735440658594251954ull);
    vlSelf->__Vcellout__ppu__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__ppu__write = 0;
    vlSelf->__Vcellinp__ppu__read = 0;
    vlSelf->__Vcellinp__ppu__ain = 0;
    vlSelf->__Vcellinp__ppu__RWn = 0;
    vlSelf->__Vcellinp__ppu__cs = 0;
    vlSelf->__PVT__prg_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10709847666911140634ull);
    vlSelf->__PVT__prg_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4430254572038706230ull);
    vlSelf->__PVT__prg_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851513205751821558ull);
    vlSelf->__PVT__prg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2252266799405555228ull);
    vlSelf->__PVT__prg_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729877762311282252ull);
    vlSelf->__PVT__vram_a10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10198815525948894885ull);
    vlSelf->__PVT__vram_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17131660032944699880ull);
    vlSelf->__PVT__chr_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14221669999169248403ull);
    vlSelf->__PVT__prg_linaddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5840791595707863797ull);
    vlSelf->__PVT__chr_linaddr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17661225940791870637ull);
    vlSelf->__PVT__prg_dout_mapper = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4185275418419240136ull);
    vlSelf->__PVT__chr_from_ppu_mapper = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2897797850186542281ull);
    vlSelf->__PVT__sample_ext = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2846301415800890678ull);
    vlSelf->__PVT__has_chr_from_ppu_mapper = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12717692140620214109ull);
    vlSelf->__PVT__prg_bus_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 999133541473202864ull);
    vlSelf->__PVT__prg_conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376108461598133527ull);
    vlSelf->__PVT__prg_conflict_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4745699886316196742ull);
    vlSelf->__PVT__has_flashsaves = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11423871626191891505ull);
    vlSelf->__Vcellout__multi_mapper__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__multi_mapper__chr_mask = 0;
    vlSelf->__Vcellinp__multi_mapper__prg_mask = 0;
    vlSelf->__Vcellinp__multi_mapper__ce = 0;
    vlSelf->__PVT__genie_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398155173552563403ull);
    vlSelf->__PVT__genie_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14658343563678416978ull);
    vlSelf->__Vcellinp__codes__data_in = 0;
    vlSelf->__Vcellinp__codes__enable = 0;
    vlSelf->__PVT__open_bus_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 22738254765412413ull);
    vlSelf->__PVT__external_data_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12346677590054290896ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__Savestate_RAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13978859004156898175ull);
    vlSelf->__PVT__Savestate_RAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17250641747704687855ull);
    vlSelf->__PVT__Savestate_RAMAddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15489061933199421097ull);
    vlSelf->__PVT__Savestate_RAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4469390809862663724ull);
    vlSelf->__PVT__Savestate_RAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5196228710029791508ull);
    vlSelf->__PVT__Savestate_RAMType = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9225313219948993704ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__SaveStateBus_wired_or[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10529134642807903460ull);
    }
    vlSelf->__PVT__reset_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13191081210891679665ull);
    vlSelf->__PVT__reset_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912911662922244719ull);
    vlSelf->__PVT__savestate_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3427444405730625769ull);
    vlSelf->__PVT__savestate_loadstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15144598306855520800ull);
    vlSelf->__PVT__savestate_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 470533832370033810ull);
    vlSelf->__PVT__savestate_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2874717711479428778ull);
    vlSelf->__PVT__SS_TOP = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15190589227049041675ull);
    vlSelf->__PVT__SS_TOP_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16550716590804147279ull);
    vlSelf->__Vcellout__iREG_SAVESTATE_TOP____pinNumber6 = 0;
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__loading_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15569634275978827255ull);
    vlSelf->__PVT__saving_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1947625003157339840ull);
    vlSelf->__PVT__sleep_savestates = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15157349201664447728ull);
    vlSelf->__PVT__sleep_rewind = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6854157354993652420ull);
    vlSelf->__PVT__Savestate_OAMAddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12711775546231412907ull);
    vlSelf->__PVT__Savestate_OAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5665818448393404105ull);
    vlSelf->__PVT__Savestate_OAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12091760391566813420ull);
    vlSelf->__PVT__Savestate_OAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12305695533774351145ull);
    vlSelf->__PVT__Savestate_OAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15269148196214267110ull);
    vlSelf->__PVT__Savestate_MAPRAMactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3785319032713785414ull);
    vlSelf->__PVT__Savestate_MAPRAMAddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5648909781909128907ull);
    vlSelf->__PVT__Savestate_MAPRAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11343271571960599525ull);
    vlSelf->__PVT__Savestate_MAPRAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13031227993117237279ull);
    vlSelf->__PVT__Savestate_MAPRAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15729642974767438807ull);
    vlSelf->__PVT__Savestate_MAPRAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13186874851272558539ull);
    vlSelf->sys_type__en0 = 0;
    vlSelf->sys_type__out = 0;
    vlSelf->sys_type__en = 0;
    vlSelf->sys_type__out__strong = 0;
    vlSelf->sys_type__out__strong__en = 0;
    vlSelf->sys_type__out__strong__out1 = 0;
    vlSelf->sys_type__out__strong__en1 = 0;
    vlSelf->__Vdly__hold_reset = 0;
    vlSelf->__Vdly__div_cpu = 0;
    vlSelf->__Vdly__div_ppu = 0;
    vlSelf->__Vdly__ppu_tick = 0;
    vlSelf->__Vdly__cpu_tick_count = 0;
    vlSelf->__Vdly__div_sys = 0;
    vlSelf->__Vdly__freeze_clocks = 0;
    vlSelf->__Vdly__faux_pixel_cnt = 0;
    vlSelf->__Vdly__bootvector_flag = 0;
    vlSelf->__Vdly__odd_or_even = 0;
    vlSelf->__Vdly__last_sys_type = 0;
    vlSelf->__Vdly__skip_pause_ce = 0;
    vlSelf->__Vdly__corepause_active = 0;
    vlSelf->__Vdly__corepause_active_delay = 0;
    vlSelf->__Vdly__div_ppu_pause = 0;
    vlSelf->__Vdly__corepause_delay = 0;
    vlSelf->__Vdly__joy_out = 0;
    vlSelf->__Vdly__joy_latch = 0;
    vlSelf->__Vdly__open_bus_data = 0;
}
