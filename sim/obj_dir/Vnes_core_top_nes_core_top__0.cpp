// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__0(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__0\n"); );
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
}

void Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__1(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_reset_noSS = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__reset_noSS;
    vlSelfRef.__PVT__p1_norm = vlSymsp->TOP__nes_core_top__input_normalize_inst.__PVT__p1_norm;
    vlSelfRef.__PVT__p2_norm = vlSymsp->TOP__nes_core_top__input_normalize_inst.__PVT__p2_norm;
    vlSelfRef.hud_active = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_active;
    vlSelfRef.hud_pixel = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_pixel;
}

void Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__2(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mapper_has_savestate = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_has_savestate;
    vlSelfRef.__PVT__bram_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_addr;
    vlSelfRef.__PVT__bram_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_dout;
    vlSelfRef.__PVT__bram_override = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_override;
    vlSelfRef.__PVT__diskside = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__diskside;
    vlSelfRef.__PVT__bram_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_write;
    vlSelfRef.__PVT__state_loaded = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__state_loaded;
    vlSelfRef.__PVT__save_out_din = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_Din;
    vlSelfRef.__PVT__save_out_adr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_Adr;
    vlSelfRef.__PVT__save_out_rnw = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_rnw;
    vlSelfRef.__PVT__save_out_ena = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_ena;
    vlSelfRef.__PVT__save_out_be = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__SAVE_out_be;
    vlSelfRef.__PVT__ppumem_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_write;
    vlSelfRef.__PVT__mapper_has_flashsaves = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_has_flashsaves;
    vlSelfRef.__PVT__ppumem_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_addr;
    vlSelfRef.__PVT__cpumem_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_write;
    vlSelfRef.__PVT__cpumem_read = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_read;
    vlSelfRef.__PVT__save_written = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__save_written;
    vlSelfRef.__PVT__cpumem_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_addr;
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

void Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__3(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___ico_sequent__TOP__nes_core_top__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_chr_to_ppu = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__chr_to_ppu;
    vlSelfRef.__PVT__cpumem_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_dout;
    vlSelfRef.dbg_cpu_din = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__internal_data_bus;
}

void Vnes_core_top_nes_core_top___act_sequent__TOP__nes_core_top__0(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___act_sequent__TOP__nes_core_top__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hud_active = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_active;
    vlSelfRef.hud_pixel = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_pixel;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__0(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gg_avail = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__gg_avail;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__1(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_odd_or_even = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__odd_or_even;
    vlSelfRef.__PVT__nes_div = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__nes_div;
    vlSelfRef.__PVT__corepaused = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__corepaused;
    vlSelfRef.dbg_reset_noSS = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__reset_noSS;
    vlSelfRef.dbg_cpu_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_ce;
    vlSelfRef.__PVT__apu_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__apu_ce;
    vlSelfRef.__PVT__refresh = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__refresh;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__2(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_dma_put_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__put_ce;
    vlSelfRef.dbg_dma_get_ce = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__get_ce;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__3(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__last_joyclk0 = vlSelfRef.__PVT__last_joyclk0;
    vlSelfRef.__Vdly__last_joyclk1 = vlSelfRef.__PVT__last_joyclk1;
    vlSelfRef.__VdlySet__ciram__v0 = 0U;
    vlSelfRef.__VdlySet__chr_rom__v0 = 0U;
    vlSelfRef.__Vdly__joy1_shift = vlSelfRef.__PVT__joy1_shift;
    vlSelfRef.__Vdly__joy2_shift = vlSelfRef.__PVT__joy2_shift;
    vlSelfRef.__VdlySet__cpu_ram__v0 = 0U;
    vlSelfRef.__VdlySet__cart_ram__v0 = 0U;
    vlSelfRef.__Vdly__vblank_prev = vlSelfRef.__PVT__vblank_prev;
    vlSelfRef.__Vdly__p1_frame = vlSelfRef.__PVT__p1_frame;
    vlSelfRef.__Vdly__p2_frame = vlSelfRef.__PVT__p2_frame;
    if (vlSelfRef.__PVT__cpumem_write) {
        if (((0x00380000U <= vlSelfRef.__PVT__cpumem_addr) 
             & (0x00380800U > vlSelfRef.__PVT__cpumem_addr))) {
            vlSelfRef.__VdlyVal__cpu_ram__v0 = vlSelfRef.__PVT__cpumem_dout;
            vlSelfRef.__VdlyDim0__cpu_ram__v0 = (0x000007ffU 
                                                 & VL_SEL_IIII(25, vlSelfRef.__PVT__cpumem_addr, 0U, 11));
            vlSelfRef.__VdlySet__cpu_ram__v0 = 1U;
        } else if (((0x001e0000U <= vlSelfRef.__PVT__cpumem_addr) 
                    & (0x001e0800U > vlSelfRef.__PVT__cpumem_addr))) {
            vlSelfRef.__VdlyVal__cart_ram__v0 = vlSelfRef.__PVT__cpumem_dout;
            vlSelfRef.__VdlyDim0__cart_ram__v0 = (0x000007ffU 
                                                  & VL_SEL_IIII(25, vlSelfRef.__PVT__cpumem_addr, 0U, 11));
            vlSelfRef.__VdlySet__cart_ram__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__ppumem_write) {
        if (((0x00300000U <= vlSelfRef.__PVT__ppumem_addr) 
             & (0x00300800U > vlSelfRef.__PVT__ppumem_addr))) {
            vlSelfRef.__VdlyVal__ciram__v0 = vlSelfRef.__PVT__ppumem_dout;
            vlSelfRef.__VdlyDim0__ciram__v0 = (0x000007ffU 
                                               & VL_SEL_IIII(22, vlSelfRef.__PVT__ppumem_addr, 0U, 11));
            vlSelfRef.__VdlySet__ciram__v0 = 1U;
        } else if (((0x00200000U <= vlSelfRef.__PVT__ppumem_addr) 
                    & (0x00204000U > vlSelfRef.__PVT__ppumem_addr))) {
            vlSelfRef.__VdlyVal__chr_rom__v0 = vlSelfRef.__PVT__ppumem_dout;
            vlSelfRef.__VdlyDim0__chr_rom__v0 = (0x00001fffU 
                                                 & VL_SEL_IIII(22, vlSelfRef.__PVT__ppumem_addr, 0U, 13));
            vlSelfRef.__VdlySet__chr_rom__v0 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__joy1_shift = 0U;
        vlSelfRef.__Vdly__joy2_shift = 0U;
        vlSelfRef.__Vdly__last_joyclk0 = 0U;
        vlSelfRef.__Vdly__last_joyclk1 = 0U;
    } else {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__joypad_out), 0U))) {
            vlSelfRef.__Vdly__joy1_shift = vlSelfRef.joy1_buttons;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__last_joyclk0)) 
                          & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__joypad_clock), 0U)))) {
            vlSelfRef.__Vdly__joy1_shift = VL_EXTEND_II(8,7, 
                                                        (0x0000007fU 
                                                         & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__joy1_shift), 1U, 7)));
        }
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__joypad_out), 1U))) {
            vlSelfRef.__Vdly__joy2_shift = vlSelfRef.joy2_buttons;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__last_joyclk1)) 
                          & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__joypad_clock), 1U)))) {
            vlSelfRef.__Vdly__joy2_shift = VL_EXTEND_II(8,7, 
                                                        (0x0000007fU 
                                                         & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__joy2_shift), 1U, 7)));
        }
        vlSelfRef.__Vdly__last_joyclk0 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__joypad_clock), 0U));
        vlSelfRef.__Vdly__last_joyclk1 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__joypad_clock), 1U));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__vblank_prev = 0U;
        vlSelfRef.__Vdly__p1_frame = 0U;
        vlSelfRef.__Vdly__p2_frame = 0U;
    } else {
        vlSelfRef.__Vdly__vblank_prev = vlSelfRef.vblank;
        if (vlSelfRef.__PVT__frame_tick) {
            vlSelfRef.__Vdly__p1_frame = vlSelfRef.__PVT__p1_norm;
            vlSelfRef.__Vdly__p2_frame = vlSelfRef.__PVT__p2_norm;
        }
    }
    vlSelfRef.__PVT__last_joyclk0 = vlSelfRef.__Vdly__last_joyclk0;
    vlSelfRef.__PVT__last_joyclk1 = vlSelfRef.__Vdly__last_joyclk1;
    if (vlSelfRef.__VdlySet__ciram__v0) {
        vlSelfRef.__PVT__ciram[vlSelfRef.__VdlyDim0__ciram__v0] 
            = vlSelfRef.__VdlyVal__ciram__v0;
    }
    if (vlSelfRef.__VdlySet__chr_rom__v0) {
        vlSelfRef.__PVT__chr_rom[vlSelfRef.__VdlyDim0__chr_rom__v0] 
            = vlSelfRef.__VdlyVal__chr_rom__v0;
    }
    vlSelfRef.__PVT__joy1_shift = vlSelfRef.__Vdly__joy1_shift;
    vlSelfRef.__PVT__joy2_shift = vlSelfRef.__Vdly__joy2_shift;
    if (vlSelfRef.__VdlySet__cpu_ram__v0) {
        vlSelfRef.__PVT__cpu_ram[vlSelfRef.__VdlyDim0__cpu_ram__v0] 
            = vlSelfRef.__VdlyVal__cpu_ram__v0;
    }
    if (vlSelfRef.__VdlySet__cart_ram__v0) {
        vlSelfRef.__PVT__cart_ram[vlSelfRef.__VdlyDim0__cart_ram__v0] 
            = vlSelfRef.__VdlyVal__cart_ram__v0;
    }
    vlSelfRef.__PVT__vblank_prev = vlSelfRef.__Vdly__vblank_prev;
    vlSelfRef.__PVT__p1_frame = vlSelfRef.__Vdly__p1_frame;
    vlSelfRef.__PVT__p2_frame = vlSelfRef.__Vdly__p2_frame;
    vlSelfRef.__PVT__joypad1_data = VL_EXTEND_II(5,1, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__joy1_shift), 0U)));
    vlSelfRef.__PVT__joypad2_data = VL_EXTEND_II(5,1, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__joy2_shift), 0U)));
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__p1_frame 
        = vlSelfRef.__PVT__p1_frame;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__p2_frame 
        = vlSelfRef.__PVT__p2_frame;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad1_data 
        = vlSelfRef.__PVT__joypad1_data;
    vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad2_data 
        = vlSelfRef.__PVT__joypad2_data;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__4(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_en_bg = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__enable_playfield;
    vlSelfRef.dbg_en_obj = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__enable_objects;
    vlSelfRef.dbg_vbl_en = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vbl_enable;
    vlSelfRef.dbg_nmi_occ = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__nmi_occured;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__5(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_nmi = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__nmi;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__6(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_dma_spr_state = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__spr_state;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__7(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hblank = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__hblank;
    vlSelfRef.vsync = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__vsync;
    vlSelfRef.hsync = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__hsync;
    vlSelfRef.vblank = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__vblank;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__8(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_cpu_pc = (0x0000ffffU & VL_SEL_IQII(64, vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Regs, 0x30U, 16));
    vlSelfRef.dbg_cpu_regs = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Regs;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__9(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_cpu_rnw = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_rnw;
    vlSelfRef.dbg_cpu_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpu_dout;
}

void Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__10(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_sequent__TOP__nes_core_top__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__joypad_out = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__joypad_out;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__0(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_render_d = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__is_rendering_d;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__1(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ppumem_read = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_read;
    vlSelfRef.dbg_ppumem_read = vlSelfRef.__PVT__ppumem_read;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__2(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_tick = ((IData)(vlSelfRef.vblank) 
                                   & (~ (IData)(vlSelfRef.__PVT__vblank_prev)));
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__3(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.scanline = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__scanline;
    vlSelfRef.cycle = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cycle;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__y 
        = vlSelfRef.scanline;
    vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__x 
        = vlSelfRef.cycle;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__4(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_pause_cpu = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__pause_cpu;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__5(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_dma_active = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__dma_aout_enable;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__6(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hud_active = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_active;
    vlSelfRef.hud_pixel = vlSymsp->TOP__nes_core_top__hud_controller_inst.__PVT__hud_pixel;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__7(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__8(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mapper_has_savestate = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_has_savestate;
    vlSelfRef.__PVT__bram_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_addr;
    vlSelfRef.__PVT__bram_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_dout;
    vlSelfRef.__PVT__bram_override = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_override;
    vlSelfRef.__PVT__diskside = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__diskside;
    vlSelfRef.__PVT__bram_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__bram_write;
    vlSelfRef.__PVT__ppumem_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_write;
    vlSelfRef.__PVT__mapper_has_flashsaves = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__mapper_has_flashsaves;
    vlSelfRef.__PVT__ppumem_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_addr;
    vlSelfRef.__PVT__cpumem_write = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_write;
    vlSelfRef.__PVT__cpumem_read = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_read;
    vlSelfRef.__PVT__save_written = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__save_written;
    vlSelfRef.__PVT__cpumem_addr = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_addr;
    vlSelfRef.sample = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__sample;
    vlSelfRef.dbg_ppumem_write = vlSelfRef.__PVT__ppumem_write;
    vlSelfRef.dbg_ppumem_addr = vlSelfRef.__PVT__ppumem_addr;
    vlSelfRef.dbg_cpumem_write = vlSelfRef.__PVT__cpumem_write;
    vlSelfRef.dbg_cpumem_read = vlSelfRef.__PVT__cpumem_read;
    vlSelfRef.dbg_cpumem_addr = vlSelfRef.__PVT__cpumem_addr;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__9(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__10(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_chr_to_ppu = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__chr_to_ppu;
    vlSelfRef.__PVT__cpumem_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__cpumem_dout;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__11(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__emphasis = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__emphasis;
    vlSelfRef.__PVT__ppumem_dout = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__ppumem_dout;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__12(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.color = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__color;
}

void Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__13(Vnes_core_top_nes_core_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnes_core_top_nes_core_top___nba_comb__TOP__nes_core_top__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_cpu_din = vlSymsp->TOP__nes_core_top__nes_inst.__PVT__internal_data_bus;
}
