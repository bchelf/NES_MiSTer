// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__0(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

void Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__1(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMAddr 
        = vlSelfRef.__PVT__Savestate_OAMAddr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMWriteData 
        = vlSelfRef.__PVT__Savestate_OAMWriteData;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMRdEn 
        = vlSelfRef.__PVT__Savestate_OAMRdEn;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMWrEn 
        = vlSelfRef.__PVT__Savestate_OAMWrEn;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__clear 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__2(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_din = (0x000000ffU & ((IData)(vlSelfRef.__PVT__vram_r)
                                                 ? (IData)(vlSelfRef.__PVT__vram_dbus_in)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__vram_w)
                                                  ? (IData)(vlSelfRef.__PVT__vram_dout)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__ALE)
                                                   ? 
                                                  VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8)
                                                   : (IData)(vlSelfRef.__PVT__vram_dbus_in)))));
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6;
}

void Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__3(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___ico_sequent__TOP__nes_core_top__nes_inst__ppu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spriteset_load_in = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__load_in;
    vlSelfRef.__Vcellout__clock__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__vram0__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__spriteeval__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__palette_ram__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_in 
        = vlSelfRef.__PVT__spriteset_load_in;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__clock__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[3U] = vlSelfRef.__Vcellout__vram0__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[4U] = vlSelfRef.__Vcellout__spriteeval__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[5U] = vlSelfRef.__Vcellout__palette_ram__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_Dout = (((((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                              | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                             | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[4U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[5U]);
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__0(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__vram_read_delayed = vlSelfRef.__PVT__vram_read_delayed;
    vlSelfRef.__VdlySet__color_pipe__v0 = 0U;
    vlSelfRef.__Vdly__decay_high = vlSelfRef.__PVT__decay_high;
    vlSelfRef.__Vdly__decay_low = vlSelfRef.__PVT__decay_low;
    vlSelfRef.__Vdly__refresh_high = vlSelfRef.__PVT__refresh_high;
    vlSelfRef.__Vdly__refresh_low = vlSelfRef.__PVT__refresh_low;
    vlSelfRef.__Vdly__write_2007_delayed = vlSelfRef.__PVT__write_2007_delayed;
    vlSelfRef.__Vdly__read_2007_delayed = vlSelfRef.__PVT__read_2007_delayed;
    vlSelfRef.__Vdly__obj_patt = vlSelfRef.__PVT__obj_patt;
    vlSelfRef.__Vdly__bg_patt = vlSelfRef.__PVT__bg_patt;
    vlSelfRef.__Vdly__obj_size = vlSelfRef.__PVT__obj_size;
    vlSelfRef.__Vdly__enable_playfield = vlSelfRef.__PVT__enable_playfield;
    vlSelfRef.__Vdly__enable_objects = vlSelfRef.__PVT__enable_objects;
    vlSelfRef.__Vdly__eb_sr = vlSelfRef.__PVT__eb_sr;
    vlSelfRef.__Vdly__eo_sr = vlSelfRef.__PVT__eo_sr;
    vlSelfRef.__Vdly__sprite_sr = vlSelfRef.__PVT__sprite_sr;
    vlSelfRef.__Vdly__re_sr = vlSelfRef.__PVT__re_sr;
    vlSelfRef.__Vdly__vram_latch = vlSelfRef.__PVT__vram_latch;
    vlSelfRef.__Vdly__vram_a_byte = vlSelfRef.__PVT__vram_a_byte;
    vlSelfRef.__Vdly__latched_dout = vlSelfRef.__PVT__latched_dout;
    vlSelfRef.__Vdly__sprite0_hit_bg = vlSelfRef.__PVT__sprite0_hit_bg;
    vlSelfRef.__Vdly__emph_reg = vlSelfRef.__PVT__emph_reg;
    vlSelfRef.__Vdly__vbl_enable = vlSelfRef.__PVT__vbl_enable;
    vlSelfRef.__Vdly__grayscale = vlSelfRef.__PVT__grayscale;
    vlSelfRef.__Vdly__nmi_occured = vlSelfRef.__PVT__nmi_occured;
    vlSelfRef.__Vdly__playfield_clip = vlSelfRef.__PVT__playfield_clip;
    vlSelfRef.__Vdly__object_clip = vlSelfRef.__PVT__object_clip;
    vlSelfRef.__Vdly__bg_patt1 = vlSelfRef.__PVT__bg_patt1;
    vlSelfRef.__Vdly__obj_patt1 = vlSelfRef.__PVT__obj_patt1;
    vlSelfRef.__Vdly__obj_size1 = vlSelfRef.__PVT__obj_size1;
    if (vlSelfRef.__PVT__SaveStateBus_load) {
        vlSelfRef.__Vdly__vram_latch = (0x000000ffU 
                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x0eU, 8));
        vlSelfRef.__Vdly__vram_read_delayed = (1U & 
                                               VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x16U));
        vlSelfRef.__Vdly__vram_a_byte = (0x000000ffU 
                                         & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x32U, 8));
    } else if (vlSelfRef.__PVT__ce) {
        if (vlSelfRef.__PVT__ALE) {
            vlSelfRef.__Vdly__vram_a_byte = vlSelfRef.__PVT__vram_latch_value;
        }
        if (vlSelfRef.__PVT__vram_read_delayed) {
            vlSelfRef.__Vdly__vram_latch = vlSelfRef.__PVT__vram_din;
        }
        vlSelfRef.__Vdly__vram_read_delayed = vlSelfRef.__PVT__vram_r_ppudata;
    }
    if (vlSelfRef.__PVT__SaveStateBus_load) {
        vlSelfRef.__Vdly__sprite0_hit_bg = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0U));
    } else if (vlSelfRef.__PVT__ce) {
        if ((1U & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__sprite_sr), 2U)))) {
            vlSelfRef.__Vdly__sprite_sr = VL_CONCAT_III(4,3,1, 
                                                        (7U 
                                                         & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__sprite_sr), 0U, 3)), 0U);
        }
        if (((0x0153U == (IData)(vlSelfRef.__PVT__cycle)) 
             & (IData)(vlSelfRef.__PVT__in_rendering_frame))) {
            vlSelfRef.__Vdly__sprite_sr = VL_EXTEND_II(4,1, (IData)(vlSelfRef.__PVT__rendering_regs));
        }
        if ((0x0100U == (IData)(vlSelfRef.__PVT__cycle))) {
            vlSelfRef.__Vdly__sprite_sr = 0U;
        }
        if (vlSelfRef.__PVT__clear_signal) {
            vlSelfRef.__Vdly__sprite0_hit_bg = 0U;
        } else if (vlSelfRef.__PVT__spr0_hit) {
            vlSelfRef.__Vdly__sprite0_hit_bg = 1U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__obj_patt = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 1U));
        vlSelfRef.__Vdly__bg_patt = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 2U));
        vlSelfRef.__Vdly__obj_size = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 3U));
        vlSelfRef.__Vdly__vbl_enable = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 4U));
        vlSelfRef.__Vdly__grayscale = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 5U));
        vlSelfRef.__Vdly__playfield_clip = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 6U));
        vlSelfRef.__Vdly__object_clip = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 7U));
        vlSelfRef.__Vdly__enable_playfield = (1U & 
                                              VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 8U));
        vlSelfRef.__Vdly__enable_objects = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 9U));
        vlSelfRef.__Vdly__emph_reg = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x0aU, 3));
        vlSelfRef.__Vdly__nmi_occured = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x0dU));
        vlSelfRef.__Vdly__re_sr = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x22U, 3));
    } else if (vlSelfRef.__PVT__ce) {
        vlSelfRef.__Vdly__obj_patt1 = vlSelfRef.__PVT__obj_patt;
        vlSelfRef.__Vdly__bg_patt1 = vlSelfRef.__PVT__bg_patt;
        vlSelfRef.__Vdly__obj_size1 = vlSelfRef.__PVT__obj_size;
        vlSelfRef.__Vdly__re_sr = VL_CONCAT_III(3,2,1, 
                                                (3U 
                                                 & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__re_sr), 0U, 2)), (IData)(vlSelfRef.__PVT__rendering_regs));
        vlSelfRef.__Vdly__eo_sr = VL_CONCAT_III(3,2,1, 
                                                (3U 
                                                 & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__eo_sr), 0U, 2)), (IData)(vlSelfRef.__PVT__enable_objects));
        vlSelfRef.__Vdly__eb_sr = VL_CONCAT_III(3,2,1, 
                                                (3U 
                                                 & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__eb_sr), 0U, 2)), (IData)(vlSelfRef.__PVT__enable_playfield));
        if (vlSelfRef.__PVT__write) {
            if ((0U == (IData)(vlSelfRef.__PVT__ain))) {
                vlSelfRef.__Vdly__obj_patt = (1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 3U));
                vlSelfRef.__Vdly__bg_patt = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 4U));
                vlSelfRef.__Vdly__obj_size = (1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 5U));
                vlSelfRef.__Vdly__vbl_enable = (1U 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 7U));
            } else if ((1U == (IData)(vlSelfRef.__PVT__ain))) {
                vlSelfRef.__Vdly__grayscale = (1U & 
                                               VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 0U));
                vlSelfRef.__Vdly__playfield_clip = 
                    (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 1U));
                vlSelfRef.__Vdly__object_clip = (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 2U));
                vlSelfRef.__Vdly__enable_playfield 
                    = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 3U));
                vlSelfRef.__Vdly__enable_objects = 
                    (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 4U));
                vlSelfRef.__Vdly__emph_reg = (7U & 
                                              (VL_REDOR_I((IData)(vlSelfRef.__PVT__sys_type))
                                                ? VL_CONCAT_III(3,1,2, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 7U)), 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 5U)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 6U))))
                                                : VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 5U, 3)));
            }
            if (vlSelfRef.__PVT__clear) {
                vlSelfRef.__Vdly__obj_patt = 0U;
                vlSelfRef.__Vdly__bg_patt = 0U;
                vlSelfRef.__Vdly__obj_size = 0U;
                vlSelfRef.__Vdly__vbl_enable = 0U;
                vlSelfRef.__Vdly__grayscale = 0U;
                vlSelfRef.__Vdly__playfield_clip = 0U;
                vlSelfRef.__Vdly__object_clip = 0U;
                vlSelfRef.__Vdly__enable_playfield = 0U;
                vlSelfRef.__Vdly__enable_objects = 0U;
                vlSelfRef.__Vdly__emph_reg = 0U;
            }
        }
        if (vlSelfRef.__PVT__set_nmi) {
            vlSelfRef.__Vdly__nmi_occured = 1U;
        }
        if (vlSelfRef.__PVT__clear_nmi) {
            vlSelfRef.__Vdly__nmi_occured = 0U;
        }
    }
    vlSelfRef.__PVT__vram_read_delayed = vlSelfRef.__Vdly__vram_read_delayed;
    vlSelfRef.__PVT__vram_latch = vlSelfRef.__Vdly__vram_latch;
    vlSelfRef.__PVT__vram_a_byte = vlSelfRef.__Vdly__vram_a_byte;
    vlSelfRef.__PVT__sprite0_hit_bg = vlSelfRef.__Vdly__sprite0_hit_bg;
    vlSelfRef.__PVT__sprite_sr = vlSelfRef.__Vdly__sprite_sr;
    vlSelfRef.__PVT__obj_patt = vlSelfRef.__Vdly__obj_patt;
    vlSelfRef.__PVT__bg_patt = vlSelfRef.__Vdly__bg_patt;
    vlSelfRef.__PVT__obj_size = vlSelfRef.__Vdly__obj_size;
    vlSelfRef.__PVT__emph_reg = vlSelfRef.__Vdly__emph_reg;
    vlSelfRef.__PVT__enable_playfield = vlSelfRef.__Vdly__enable_playfield;
    vlSelfRef.__PVT__enable_objects = vlSelfRef.__Vdly__enable_objects;
    vlSelfRef.__PVT__vbl_enable = vlSelfRef.__Vdly__vbl_enable;
    vlSelfRef.__PVT__grayscale = vlSelfRef.__Vdly__grayscale;
    vlSelfRef.__PVT__nmi_occured = vlSelfRef.__Vdly__nmi_occured;
    vlSelfRef.__PVT__eb_sr = vlSelfRef.__Vdly__eb_sr;
    vlSelfRef.__PVT__eo_sr = vlSelfRef.__Vdly__eo_sr;
    vlSelfRef.__PVT__playfield_clip = vlSelfRef.__Vdly__playfield_clip;
    vlSelfRef.__PVT__object_clip = vlSelfRef.__Vdly__object_clip;
    vlSelfRef.__PVT__bg_patt1 = vlSelfRef.__Vdly__bg_patt1;
    vlSelfRef.__PVT__obj_patt1 = vlSelfRef.__Vdly__obj_patt1;
    vlSelfRef.__PVT__obj_size1 = vlSelfRef.__Vdly__obj_size1;
    vlSelfRef.__Vdly__clear = vlSelfRef.__PVT__clear;
    vlSelfRef.__PVT__re_sr = vlSelfRef.__Vdly__re_sr;
    VL_ASSIGNSEL_QI(64, 9, 0x0000000eU, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.__PVT__vram_read_delayed), (IData)(vlSelfRef.__PVT__vram_latch)));
    VL_ASSIGNSEL_QI(64, 8, 0x32U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__vram_a_byte);
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__sprite0_hit_bg);
    vlSelfRef.__Vcellinp__sprite_gen__counting = (1U 
                                                  & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__sprite_sr), 2U));
    VL_ASSIGNSEL_QI(64, 3, 1U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__obj_size), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__bg_patt), (IData)(vlSelfRef.__PVT__obj_patt))));
    VL_ASSIGNSEL_QI(64, 3, 0x0aU, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__emph_reg);
    VL_ASSIGNBIT_QI(8U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__enable_playfield);
    vlSelfRef.__PVT__rendering_regs = ((IData)(vlSelfRef.__PVT__enable_objects) 
                                       | (IData)(vlSelfRef.__PVT__enable_playfield));
    VL_ASSIGNBIT_QI(9U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__enable_objects);
    VL_ASSIGNSEL_QI(64, 2, 4U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__grayscale), (IData)(vlSelfRef.__PVT__vbl_enable)));
    VL_ASSIGNBIT_QI(0x0dU, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__nmi_occured);
    vlSelfRef.__PVT__nmi = ((IData)(vlSelfRef.__PVT__nmi_occured) 
                            & (IData)(vlSelfRef.__PVT__vbl_enable));
    VL_ASSIGNSEL_QI(64, 2, 6U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__object_clip), (IData)(vlSelfRef.__PVT__playfield_clip)));
    vlSelfRef.__PVT__auto_mask = (((3U == (IData)(vlSelfRef.__PVT__mask)) 
                                   & (~ (IData)(vlSelfRef.__PVT__object_clip))) 
                                  & (~ (IData)(vlSelfRef.__PVT__playfield_clip)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__obj_patt 
        = vlSelfRef.__PVT__obj_patt1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__obj_patt 
        = vlSelfRef.__PVT__obj_patt1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__obj_size 
        = vlSelfRef.__PVT__obj_size1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__obj_size 
        = vlSelfRef.__PVT__obj_size1;
    if (((IData)(vlSelfRef.__PVT__ce) & (IData)(vlSelfRef.__PVT__clear_signal))) {
        vlSelfRef.__Vdly__clear = 0U;
    }
    if (vlSelfRef.__PVT__refresh_high) {
        vlSelfRef.__Vdly__decay_high = 0x00312856U;
        vlSelfRef.__Vdly__refresh_high = 0U;
    }
    if (vlSelfRef.__PVT__refresh_low) {
        vlSelfRef.__Vdly__decay_low = 0x00312856U;
        vlSelfRef.__Vdly__refresh_low = 0U;
    }
    if (vlSelfRef.__PVT__ce) {
        vlSelfRef.__Vdly__read_2007_delayed = VL_CONCAT_III(5,4,1, 
                                                            (0x0000000fU 
                                                             & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 0U, 4)), 
                                                            ((IData)(vlSelfRef.__PVT__read) 
                                                             & (7U 
                                                                == (IData)(vlSelfRef.__PVT__ain))));
        vlSelfRef.__Vdly__write_2007_delayed = VL_CONCAT_III(5,4,1, 
                                                             (0x0000000fU 
                                                              & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 0U, 4)), 
                                                             ((IData)(vlSelfRef.__PVT__write) 
                                                              & (7U 
                                                                 == (IData)(vlSelfRef.__PVT__ain))));
        vlSelfRef.__VdlyVal__color_pipe__v0 = vlSelfRef.__PVT__color1;
        vlSelfRef.__VdlySet__color_pipe__v0 = 1U;
        vlSelfRef.__VdlyVal__color_pipe__v1 = vlSelfRef.__PVT__color_pipe[0U];
        vlSelfRef.__VdlyVal__color_pipe__v2 = vlSelfRef.__PVT__color_pipe[1U];
        vlSelfRef.__VdlyVal__color_pipe__v3 = vlSelfRef.__PVT__color_pipe[2U];
        vlSelfRef.__Vdly__latched_dout = vlSelfRef.__PVT__ppu_dbus;
        if ((0U < vlSelfRef.__PVT__decay_high)) {
            vlSelfRef.__Vdly__decay_high = (0x00ffffffU 
                                            & (vlSelfRef.__PVT__decay_high 
                                               - (IData)(1U)));
        } else {
            VL_ASSIGNSEL_II(8, 3, 5U, vlSelfRef.__Vdly__latched_dout, 0U);
        }
        if ((0U < vlSelfRef.__PVT__decay_low)) {
            vlSelfRef.__Vdly__decay_low = (0x00ffffffU 
                                           & (vlSelfRef.__PVT__decay_low 
                                              - (IData)(1U)));
        } else {
            VL_ASSIGNSEL_II(8, 5, 0U, vlSelfRef.__Vdly__latched_dout, 0U);
        }
    }
    if (vlSelfRef.__PVT__read) {
        if ((2U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__refresh_high = 1U;
        } else if ((4U == (IData)(vlSelfRef.__PVT__ain))) {
            vlSelfRef.__Vdly__refresh_high = 1U;
            vlSelfRef.__Vdly__refresh_low = 1U;
        } else if ((7U == (IData)(vlSelfRef.__PVT__ain))) {
            if (vlSelfRef.__PVT__is_pal_address) {
                vlSelfRef.__Vdly__refresh_low = 1U;
            } else {
                vlSelfRef.__Vdly__refresh_high = 1U;
                vlSelfRef.__Vdly__refresh_low = 1U;
            }
        }
    } else if (vlSelfRef.__PVT__write) {
        vlSelfRef.__Vdly__refresh_high = 1U;
        vlSelfRef.__Vdly__refresh_low = 1U;
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__latched_dout = 0U;
        vlSelfRef.__Vdly__clear = vlSelfRef.__PVT__rst_behavior;
    }
    if (vlSelfRef.__PVT__SaveStateBus_load) {
        vlSelfRef.__Vdly__refresh_high = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x17U));
        vlSelfRef.__Vdly__refresh_low = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x18U));
        vlSelfRef.__Vdly__latched_dout = (0x000000ffU 
                                          & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x19U, 8));
        vlSelfRef.__Vdly__clear = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x21U));
        vlSelfRef.__Vdly__read_2007_delayed = (0x0000001fU 
                                               & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x25U, 5));
        vlSelfRef.__Vdly__write_2007_delayed = (0x0000001fU 
                                                & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU, 0x2aU, 5));
        vlSelfRef.__Vdly__decay_low = (0x00ffffffU 
                                       & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU_DECAY, 0U, 24));
        vlSelfRef.__Vdly__decay_high = (0x00ffffffU 
                                        & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PPU_DECAY, 0x18U, 24));
    }
    VL_ASSIGNSEL_QI(64, 3, 0x22U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__re_sr);
    vlSelfRef.__PVT__rendering_enabled = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__re_sr), 1U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__counting 
        = vlSelfRef.__Vcellinp__sprite_gen__counting;
    vlSelfRef.__PVT__render_ena_out = vlSelfRef.__PVT__rendering_regs;
    if (vlSelfRef.__VdlySet__color_pipe__v0) {
        vlSelfRef.__PVT__color_pipe[0U] = vlSelfRef.__VdlyVal__color_pipe__v0;
        vlSelfRef.__PVT__color_pipe[1U] = vlSelfRef.__VdlyVal__color_pipe__v1;
        vlSelfRef.__PVT__color_pipe[2U] = vlSelfRef.__VdlyVal__color_pipe__v2;
        vlSelfRef.__PVT__color_pipe[3U] = vlSelfRef.__VdlyVal__color_pipe__v3;
    }
    vlSelfRef.__PVT__decay_high = vlSelfRef.__Vdly__decay_high;
    vlSelfRef.__PVT__decay_low = vlSelfRef.__Vdly__decay_low;
    vlSelfRef.__PVT__refresh_high = vlSelfRef.__Vdly__refresh_high;
    vlSelfRef.__PVT__refresh_low = vlSelfRef.__Vdly__refresh_low;
    vlSelfRef.__PVT__clear = vlSelfRef.__Vdly__clear;
    vlSelfRef.__PVT__latched_dout = vlSelfRef.__Vdly__latched_dout;
    vlSelfRef.__PVT__write_2007_delayed = vlSelfRef.__Vdly__write_2007_delayed;
    vlSelfRef.__PVT__read_2007_delayed = vlSelfRef.__Vdly__read_2007_delayed;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__rendering_enabled 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    VL_ASSIGNSEL_QQ(64, 48, 0U, vlSelfRef.__PVT__SS_PPU_DECAY_BACK, 
                    VL_CONCAT_QII(48,24,24, vlSelfRef.__PVT__decay_high, vlSelfRef.__PVT__decay_low));
    VL_ASSIGNSEL_QI(64, 11, 0x00000017U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(11,9,2, VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.__PVT__clear), (IData)(vlSelfRef.__PVT__latched_dout)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__refresh_low), (IData)(vlSelfRef.__PVT__refresh_high))));
    vlSelfRef.__PVT__dout = vlSelfRef.__PVT__latched_dout;
    vlSelfRef.__PVT__vram_w_ppudata_d = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 3U));
    VL_ASSIGNSEL_QI(64, 5, 0x2aU, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__write_2007_delayed);
    vlSelfRef.__PVT__vram_w_ppudata = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 2U));
    vlSelfRef.__PVT__vram_r_ppudata_d = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 3U));
    VL_ASSIGNSEL_QI(64, 5, 0x25U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__read_2007_delayed);
    vlSelfRef.__PVT__vram_r_ppudata = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 2U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__Din 
        = vlSelfRef.__PVT__SS_PPU_DECAY_BACK;
    vlSelfRef.__Vcellinp__vram0__trigger_2007 = ((IData)(vlSelfRef.__PVT__vram_w_ppudata_d) 
                                                 | (IData)(vlSelfRef.__PVT__vram_r_ppudata_d));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__Din 
        = vlSelfRef.__PVT__SS_PPU_BACK;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__1(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU____pinNumber6;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__2(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg_name_table = vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__name_table;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__3(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fine_x_scroll = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__fine_x_scroll;
    vlSelfRef.__PVT__vram = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__vram;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__fine_x_scroll 
        = vlSelfRef.__PVT__fine_x_scroll;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__vram_v 
        = vlSelfRef.__PVT__vram;
    vlSelfRef.__Vcellinp__palette_ram__raw_addr = (0x0000001fU 
                                                   & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 5));
    vlSelfRef.__PVT__is_pal_address = (0x3fU == (0x0000003fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 8U, 6)));
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__4(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__vram0__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[3U] = vlSelfRef.__Vcellout__vram0__SaveStateBus_Dout;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__5(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Savestate_OAMReadData = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMReadData;
    vlSelfRef.__PVT__sprite_overflow = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__overflow;
    vlSelfRef.__PVT__obj0_on_line = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__sprite0;
    vlSelfRef.__PVT__oam_bus_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_bus_ex;
    vlSelfRef.__PVT__oam_bus = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_bus;
    vlSelfRef.__PVT__masked_sprites = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__masked_sprites;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__masked_sprites 
        = vlSelfRef.__PVT__masked_sprites;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__6(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__spriteeval__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[4U] = vlSelfRef.__Vcellout__spriteeval__SaveStateBus_Dout;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__7(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__palette_ram__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[5U] = vlSelfRef.__Vcellout__palette_ram__SaveStateBus_Dout;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__8(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_in_vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_in_vblank;
    vlSelfRef.__PVT__hblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__hblank;
    vlSelfRef.__PVT__vsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__vsync;
    vlSelfRef.__PVT__hsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__hsync;
    vlSelfRef.__PVT__vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__vblank;
    vlSelfRef.__PVT__cycle = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__cycle;
    vlSelfRef.__PVT__at_last_cycle_group = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__at_last_cycle_group;
    vlSelfRef.__PVT__end_of_line = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__end_of_line;
    vlSelfRef.__PVT__is_pre_render_line = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_pre_render;
    vlSelfRef.__PVT__scanline = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__scanline;
    vlSelfRef.__PVT__short_frame = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__short_frame;
    vlSelfRef.__PVT__evenframe = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__evenframe;
    vlSelfRef.__PVT__exiting_vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__exiting_vblank;
    vlSelfRef.__PVT__is_vbe_sl = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_vbe_sl;
    vlSelfRef.__PVT__entering_vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__entering_vblank;
    vlSelfRef.__Vcellinp__bg_painter__latch_pattern2 
        = (0U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)));
    vlSelfRef.__Vcellinp__bg_painter__latch_pattern1 
        = (6U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)));
    vlSelfRef.__Vcellinp__bg_painter__latch_attrtable 
        = (4U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__cycle 
        = vlSelfRef.__PVT__cycle;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__cycle 
        = vlSelfRef.__PVT__cycle;
    vlSelfRef.__PVT__in_draw_range = (1U & ((~ ((0x010fU 
                                                 <= (IData)(vlSelfRef.__PVT__cycle)) 
                                                & (0x0148U 
                                                   >= (IData)(vlSelfRef.__PVT__cycle)))) 
                                            & (~ (IData)(vlSelfRef.__PVT__vblank))));
    vlSelfRef.__PVT__mask_right = ((0x00f8U < (IData)(vlSelfRef.__PVT__cycle)) 
                                   & (2U == (IData)(vlSelfRef.__PVT__mask)));
    vlSelfRef.__PVT__out_of_clip = (8U < (IData)(vlSelfRef.__PVT__cycle));
    vlSelfRef.__PVT__read_cycle = (1U & (~ VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U)));
    vlSelfRef.__PVT__pattern_table_upper = ((3U == 
                                             (3U & 
                                              VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 2))) 
                                            | (0U == 
                                               (3U 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 2))));
    vlSelfRef.__PVT__sprite_load_en = ((0x0101U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                       & (0x0141U > (IData)(vlSelfRef.__PVT__cycle)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__end_of_line 
        = vlSelfRef.__PVT__end_of_line;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__is_pre_render 
        = vlSelfRef.__PVT__is_pre_render_line;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__is_pre_render 
        = vlSelfRef.__PVT__is_pre_render_line;
    vlSelfRef.__PVT__clear_signal = vlSelfRef.__PVT__is_pre_render_line;
    vlSelfRef.__PVT__pal_mask = (1U & (((~ VL_REDOR_I((IData)(vlSelfRef.__PVT__scanline))) 
                                        | (3U > (IData)(vlSelfRef.__PVT__cycle))) 
                                       | (0x00feU < (IData)(vlSelfRef.__PVT__cycle))));
    vlSelfRef.__PVT__in_rendering_frame = ((0x00f0U 
                                            > (IData)(vlSelfRef.__PVT__scanline)) 
                                           | (IData)(vlSelfRef.__PVT__is_pre_render_line));
    vlSelfRef.__PVT__in_visible_frame = ((((0x00f0U 
                                            > (IData)(vlSelfRef.__PVT__scanline)) 
                                           | (IData)(vlSelfRef.__PVT__is_pre_render_line)) 
                                          & (0U < (IData)(vlSelfRef.__PVT__cycle))) 
                                         & (0x0101U 
                                            > (IData)(vlSelfRef.__PVT__cycle)));
    vlSelfRef.__PVT__scanline_nopr = ((IData)(vlSelfRef.__PVT__is_pre_render_line)
                                       ? (VL_REDOR_I((IData)(vlSelfRef.__PVT__sys_type))
                                           ? 0x0137U
                                           : 0x0105U)
                                       : (IData)(vlSelfRef.__PVT__scanline));
    vlSelfRef.__PVT__special_dot = (((~ (IData)(vlSelfRef.__PVT__evenframe)) 
                                     & (0U == (IData)(vlSelfRef.__PVT__cycle))) 
                                    & (0U == (IData)(vlSelfRef.__PVT__scanline)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__is_vbe 
        = vlSelfRef.__PVT__is_vbe_sl;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_pattern2 
        = vlSelfRef.__Vcellinp__bg_painter__latch_pattern2;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_pattern1 
        = vlSelfRef.__Vcellinp__bg_painter__latch_pattern1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_attrtable 
        = vlSelfRef.__Vcellinp__bg_painter__latch_attrtable;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__enabled 
        = vlSelfRef.__PVT__sprite_load_en;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__enabled 
        = vlSelfRef.__PVT__sprite_load_en;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__clear_signal 
        = vlSelfRef.__PVT__clear_signal;
    vlSelfRef.__PVT__mask_pal = (VL_REDOR_I((IData)(vlSelfRef.__PVT__sys_type)) 
                                 & (IData)(vlSelfRef.__PVT__pal_mask));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__in_range 
        = vlSelfRef.__PVT__in_rendering_frame;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__enable 
        = vlSelfRef.__PVT__in_visible_frame;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__scanline 
        = vlSelfRef.__PVT__scanline_nopr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__scanline 
        = vlSelfRef.__PVT__scanline_nopr;
    vlSelfRef.__Vcellinp__address_gen_ex__scanline 
        = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline_nopr), 0U, 8));
    vlSelfRef.__PVT__nametable_read = (((((1U == (7U 
                                                  & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                          | (2U == 
                                             (7U & 
                                              VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))) 
                                         | ((IData)(vlSelfRef.__PVT__sprite_load_en) 
                                            & ((3U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))))) 
                                        | (0x0150U 
                                           < (IData)(vlSelfRef.__PVT__cycle))) 
                                       | (IData)(vlSelfRef.__PVT__special_dot));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__scanline 
        = vlSelfRef.__Vcellinp__address_gen_ex__scanline;
    vlSelfRef.__PVT__attribute_read = (((3U == (7U 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                        | (4U == (7U 
                                                  & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))) 
                                       & (~ (IData)(vlSelfRef.__PVT__nametable_read)));
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__9(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__clock__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__clock__SaveStateBus_Dout;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__10(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_PPU = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__Dout;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__11(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_PPU_DECAY = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__Dout;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__12(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__clear 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__pclk0 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__ce 
        = vlSelfRef.__PVT__ce;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__13(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__trigger_2007 
        = vlSelfRef.__Vcellinp__vram0__trigger_2007;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__clear 
        = vlSelfRef.__PVT__clear;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__obj_size 
        = vlSelfRef.__PVT__obj_size1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_rendering 
        = vlSelfRef.__PVT__rendering_regs;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__0(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg_pixel_noblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__pixel;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__1(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sprite_vram_addr = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__vram_addr;
}

void Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__14(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_sequent__TOP__nes_core_top__nes_inst__ppu__14\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__raw_addr 
        = vlSelfRef.__Vcellinp__palette_ram__raw_addr;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__2(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__bg_painter__latch_nametable 
        = ((2U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
           & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSelfRef.__PVT__is_rendering_d = (VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__re_sr), 2U) 
                                       & (((0x00f0U 
                                            > (IData)(vlSelfRef.__PVT__scanline)) 
                                           | ((IData)(vlSelfRef.__PVT__is_pre_render_line) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__cycle)))) 
                                          | ((0x00f1U 
                                              == (IData)(vlSelfRef.__PVT__scanline)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__cycle)))));
    vlSelfRef.__PVT__is_rendering = ((IData)(vlSelfRef.__PVT__rendering_enabled) 
                                     & ((0x00f0U > (IData)(vlSelfRef.__PVT__scanline)) 
                                        | (IData)(vlSelfRef.__PVT__is_pre_render_line)));
    vlSelfRef.__PVT__mask_left = ((~ (IData)(vlSelfRef.__PVT__out_of_clip)) 
                                  & ((VL_REDOR_I((IData)(vlSelfRef.__PVT__mask)) 
                                      & (~ VL_REDAND_II(2, (IData)(vlSelfRef.__PVT__mask)))) 
                                     | (IData)(vlSelfRef.__PVT__auto_mask)));
    vlSelfRef.__PVT__show_bg_on_pixel = (((IData)(vlSelfRef.__PVT__playfield_clip) 
                                          | (IData)(vlSelfRef.__PVT__out_of_clip)) 
                                         & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__eb_sr), 1U));
    vlSelfRef.__PVT__show_obj_on_pixel = (((IData)(vlSelfRef.__PVT__object_clip) 
                                           | (IData)(vlSelfRef.__PVT__out_of_clip)) 
                                          & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__eo_sr), 1U));
    vlSelfRef.__PVT__bgp_en = (((IData)(vlSelfRef.__PVT__in_visible_frame) 
                                | ((0x0141U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                   & (0x0150U >= (IData)(vlSelfRef.__PVT__cycle)))) 
                               & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_nametable 
        = vlSelfRef.__Vcellinp__bg_painter__latch_nametable;
    vlSelfRef.__PVT__ALE = (1U & (((IData)(vlSelfRef.__PVT__is_rendering_d) 
                                   & (~ (IData)(vlSelfRef.__PVT__read_cycle))) 
                                  | (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 1U) 
                                     | VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 1U))));
    vlSelfRef.__PVT__vram_r = ((IData)(vlSelfRef.__PVT__vram_r_ppudata) 
                               | (((IData)(vlSelfRef.__PVT__is_rendering_d) 
                                   & (IData)(vlSelfRef.__PVT__read_cycle)) 
                                  & ((0U != (IData)(vlSelfRef.__PVT__cycle)) 
                                     | (IData)(vlSelfRef.__PVT__special_dot))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__is_rendering 
        = vlSelfRef.__PVT__is_rendering;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__enable 
        = vlSelfRef.__PVT__bgp_en;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__3(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spriteset_load_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__load;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_ex 
        = vlSelfRef.__PVT__spriteset_load_ex;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__4(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spriteset_load = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__load;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load 
        = vlSelfRef.__PVT__spriteset_load;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__5(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_obj0_pixel = vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__is_sprite0;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__6(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = (((((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                              | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                             | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[4U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[5U]);
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__7(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__address_gen__temp = ((IData)(vlSelfRef.__PVT__is_rendering)
                                                ? (IData)(vlSelfRef.__PVT__oam_bus)
                                                : 0xffU);
    vlSelfRef.__Vcellinp__address_gen_ex__temp = ((IData)(vlSelfRef.__PVT__is_rendering)
                                                   ? vlSelfRef.__PVT__oam_bus_ex
                                                   : 0xffffffffU);
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__temp 
        = vlSelfRef.__Vcellinp__address_gen__temp;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__temp 
        = vlSelfRef.__Vcellinp__address_gen_ex__temp;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__8(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pal_writes_valid = ((IData)(vlSelfRef.__PVT__is_pal_address) 
                                         & (~ (IData)(vlSelfRef.__PVT__is_rendering)));
    vlSelfRef.__PVT__vram_w = (((~ (IData)(vlSelfRef.__PVT__vram_r)) 
                                & (IData)(vlSelfRef.__PVT__vram_w_ppudata)) 
                               & (~ (IData)(vlSelfRef.__PVT__is_pal_address)));
    vlSelfRef.__Vcellinp__palette_ram__write = ((IData)(vlSelfRef.__PVT__vram_w_ppudata) 
                                                & (IData)(vlSelfRef.__PVT__pal_writes_valid));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__write 
        = vlSelfRef.__Vcellinp__palette_ram__write;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__9(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg_pixel = VL_CONCAT_III(4,2,2, 
                                              (3U & 
                                               VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg_pixel_noblank), 2U, 2)), 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT__show_bg_on_pixel)
                                                 ? 
                                                VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg_pixel_noblank), 0U, 2)
                                                 : 0U)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__bg 
        = vlSelfRef.__PVT__bg_pixel;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__10(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__ain 
        = vlSelfRef.__PVT__ain;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__read 
        = vlSelfRef.__PVT__read;
    vlSelfRef.__Vcellinp__debug_d__r2007 = ((IData)(vlSelfRef.__PVT__read) 
                                            & (7U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__r2004 = ((IData)(vlSelfRef.__PVT__read) 
                                            & (4U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__r2002 = ((IData)(vlSelfRef.__PVT__read) 
                                            & (2U == (IData)(vlSelfRef.__PVT__ain)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__write 
        = vlSelfRef.__PVT__write;
    vlSelfRef.__Vcellinp__spriteeval__oam_addr_write 
        = ((IData)(vlSelfRef.__PVT__write) & (3U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__spriteeval__oam_data_write 
        = ((IData)(vlSelfRef.__PVT__write) & (4U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2007 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (7U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2006 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (6U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2005 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (5U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2004 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (4U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2003 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (3U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2001 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (1U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2000 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (0U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__PVT__write_2001 = ((IData)(vlSelfRef.__PVT__write) 
                                   & (1U == (IData)(vlSelfRef.__PVT__ain)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__r2007 
        = vlSelfRef.__Vcellinp__debug_d__r2007;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__r2004 
        = vlSelfRef.__Vcellinp__debug_d__r2004;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__r2002 
        = vlSelfRef.__Vcellinp__debug_d__r2002;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_addr_write 
        = vlSelfRef.__Vcellinp__spriteeval__oam_addr_write;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_data_write 
        = vlSelfRef.__Vcellinp__spriteeval__oam_data_write;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2007 
        = vlSelfRef.__Vcellinp__debug_d__w2007;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2006 
        = vlSelfRef.__Vcellinp__debug_d__w2006;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2005 
        = vlSelfRef.__Vcellinp__debug_d__w2005;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2004 
        = vlSelfRef.__Vcellinp__debug_d__w2004;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2003 
        = vlSelfRef.__Vcellinp__debug_d__w2003;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2001 
        = vlSelfRef.__Vcellinp__debug_d__w2001;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2000 
        = vlSelfRef.__Vcellinp__debug_d__w2000;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__11(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__use_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__use_ex;
    vlSelfRef.__PVT__sprite_vram_addr_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__vram_addr;
    vlSelfRef.__PVT__spriteset_load_in_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__load_in;
    vlSelfRef.__PVT__vram_a_ex = VL_EXTEND_II(14,13, (IData)(vlSelfRef.__PVT__sprite_vram_addr_ex));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_in_ex 
        = vlSelfRef.__PVT__spriteset_load_in_ex;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__12(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spr0_hit = ((((((((IData)(vlSelfRef.__PVT__is_rendering) 
                                       & (IData)(vlSelfRef.__PVT__in_visible_frame)) 
                                      & (0x0100U != (IData)(vlSelfRef.__PVT__cycle))) 
                                     & (~ (IData)(vlSelfRef.__PVT__is_pre_render_line))) 
                                    & (IData)(vlSelfRef.__PVT__obj0_on_line)) 
                                   & (IData)(vlSelfRef.__PVT__is_obj0_pixel)) 
                                  & (IData)(vlSelfRef.__PVT__show_obj_on_pixel)) 
                                 & (0U != (3U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg_pixel), 0U, 2))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__custom2 
        = vlSelfRef.__PVT__spr0_hit;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__13(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__obj_pixel_noblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__bits;
    vlSelfRef.__PVT__obj_pixel = VL_CONCAT_III(5,3,2, 
                                               (7U 
                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel_noblank), 2U, 3)), 
                                               (3U 
                                                & ((IData)(vlSelfRef.__PVT__show_obj_on_pixel)
                                                    ? 
                                                   VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel_noblank), 0U, 2)
                                                    : 0U)));
    vlSelfRef.__Vcellinp__pixel_muxer__obj_prio = (1U 
                                                   & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel), 4U));
    vlSelfRef.__Vcellinp__pixel_muxer__obj = (0x0000000fU 
                                              & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel), 0U, 4));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__obj_prio 
        = vlSelfRef.__Vcellinp__pixel_muxer__obj_prio;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__obj 
        = vlSelfRef.__Vcellinp__pixel_muxer__obj;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__14(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__14\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_nmi = ((IData)(vlSelfRef.__PVT__clear_signal) 
                                  | ((IData)(vlSelfRef.__PVT__read) 
                                     & (2U == (IData)(vlSelfRef.__PVT__ain))));
    vlSelfRef.__PVT__set_nmi = ((IData)(vlSelfRef.__PVT__entering_vblank) 
                                & (~ (IData)(vlSelfRef.__PVT__clear_nmi)));
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__15(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__15\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__is_rendering_d) {
        vlSelfRef.__PVT__vram_r_ex = ((IData)(vlSelfRef.__PVT__sprite_load_en) 
                                      & ((IData)(vlSelfRef.__PVT__use_ex) 
                                         & (IData)(vlSelfRef.__PVT__extra_sprites)));
        vlSelfRef.__PVT__vram_a = ((IData)(vlSelfRef.__PVT__nametable_read)
                                    ? VL_CONCAT_III(14,2,12, 2U, 
                                                    (0x00000fffU 
                                                     & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 12)))
                                    : ((IData)(vlSelfRef.__PVT__attribute_read)
                                        ? VL_CONCAT_III(14,4,10, 
                                                        VL_CONCAT_III(4,2,2, 2U, 
                                                                      (3U 
                                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0x0aU, 2))), 
                                                        VL_CONCAT_III(10,4,6, 0x0fU, 
                                                                      VL_CONCAT_III(6,3,3, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 7U, 3)), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 2U, 3)))))
                                        : ((IData)(vlSelfRef.__PVT__sprite_load_en)
                                            ? VL_EXTEND_II(14,13, (IData)(vlSelfRef.__PVT__sprite_vram_addr))
                                            : VL_CONCAT_III(14,2,12, 
                                                            VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__bg_patt1)), 
                                                            VL_CONCAT_III(12,8,4, (IData)(vlSelfRef.__PVT__bg_name_table), 
                                                                          VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__pattern_table_upper), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0x0cU, 3))))))));
    } else {
        vlSelfRef.__PVT__vram_a = (0x00003fffU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 14));
        vlSelfRef.__PVT__vram_r_ex = 0U;
    }
    vlSelfRef.__Vcellinp__palette_ram__c_corrupt = 
        ((IData)(vlSelfRef.__PVT__attribute_read) ? 
         (VL_REDAND_II(2, (3U & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0x0cU, 2))) 
          & VL_REDAND_II(4, (0x0000000fU & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 8U, 4))))
          : VL_REDAND_II(6, (0x0000003fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 8U, 6))));
    vlSelfRef.__PVT__vram_latch_value = (0x000000ffU 
                                         & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__c_corrupt 
        = vlSelfRef.__Vcellinp__palette_ram__c_corrupt;
    vlSelfRef.__PVT__vram_addr = VL_CONCAT_III(14,6,8, 
                                               (0x0000003fU 
                                                & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 8U, 6)), 
                                               ((IData)(vlSelfRef.__PVT__ALE)
                                                 ? (IData)(vlSelfRef.__PVT__vram_latch_value)
                                                 : (IData)(vlSelfRef.__PVT__vram_a_byte)));
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__16(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__16\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pixel_is_obj = vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__is_obj;
    vlSelfRef.__PVT__pixel = vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__out;
    vlSelfRef.__PVT__pram_addr = (0x0000001fU & (((IData)(vlSelfRef.__PVT__is_rendering) 
                                                  & (IData)(vlSelfRef.__PVT__in_visible_frame))
                                                  ? (IData)(vlSelfRef.__PVT__pixel)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__pal_writes_valid)
                                                   ? 
                                                  VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 5)
                                                   : 0U)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__addr 
        = vlSelfRef.__PVT__pram_addr;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__17(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__17\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__color2 = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__dout;
    vlSelfRef.__PVT__color1 = ((((IData)(vlSelfRef.__PVT__mask_right) 
                                 | (IData)(vlSelfRef.__PVT__mask_left)) 
                                | (IData)(vlSelfRef.__PVT__mask_pal))
                                ? 0x0eU : (IData)(vlSelfRef.__PVT__color2));
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__18(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__18\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ppu_dbus = ((IData)(vlSelfRef.__PVT__write)
                                  ? (IData)(vlSelfRef.__PVT__din)
                                  : ((IData)(vlSelfRef.__PVT__read)
                                      ? ((2U == (IData)(vlSelfRef.__PVT__ain))
                                          ? VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__nmi_occured), 
                                                          VL_CONCAT_III(7,1,6, 
                                                                        (((IData)(vlSelfRef.__PVT__spr0_hit) 
                                                                          | (IData)(vlSelfRef.__PVT__sprite0_hit_bg)) 
                                                                         & (~ (IData)(vlSelfRef.__PVT__clear_signal))), 
                                                                        VL_CONCAT_III(6,1,5, 
                                                                                ((IData)(vlSelfRef.__PVT__sprite_overflow) 
                                                                                & (~ (IData)(vlSelfRef.__PVT__clear_signal))), 
                                                                                (0x0000001fU 
                                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__latched_dout), 0U, 5)))))
                                          : ((4U == (IData)(vlSelfRef.__PVT__ain))
                                              ? (IData)(vlSelfRef.__PVT__oam_bus)
                                              : ((7U 
                                                  == (IData)(vlSelfRef.__PVT__ain))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__is_pal_address)
                                                   ? 
                                                  VL_CONCAT_III(8,2,6, 
                                                                (3U 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__latched_dout), 6U, 2)), 
                                                                ((IData)(vlSelfRef.__PVT__grayscale)
                                                                  ? 
                                                                 VL_CONCAT_III(6,2,4, 
                                                                               (3U 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__color1), 4U, 2)), 0U)
                                                                  : (IData)(vlSelfRef.__PVT__color1)))
                                                   : (IData)(vlSelfRef.__PVT__vram_latch))
                                                  : (IData)(vlSelfRef.__PVT__latched_dout))))
                                      : (IData)(vlSelfRef.__PVT__latched_dout)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__din 
        = vlSelfRef.__PVT__ppu_dbus;
    vlSelfRef.__Vcellinp__palette_ram__din = (0x0000003fU 
                                              & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 0U, 6));
    vlSelfRef.__PVT__emphasis = VL_CONCAT_III(3,1,2, 
                                              (1U & 
                                               ((IData)(vlSelfRef.__PVT__write_2001)
                                                 ? 
                                                VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 7U)
                                                 : 
                                                VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__emph_reg), 2U))), 
                                              VL_CONCAT_III(2,1,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__emph_reg), 1U)), 
                                                            (1U 
                                                             & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__emph_reg), 0U))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_din 
        = vlSelfRef.__PVT__ppu_dbus;
    vlSelfRef.__PVT__grayscale_bit = (1U & ((IData)(vlSelfRef.__PVT__write_2001)
                                             ? VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 0U)
                                             : (IData)(vlSelfRef.__PVT__grayscale)));
    vlSelfRef.__PVT__vram_dout = (0x000000ffU & ((IData)(vlSelfRef.__PVT__ALE)
                                                  ? 
                                                 VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8)
                                                  : (IData)(vlSelfRef.__PVT__ppu_dbus)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__din 
        = vlSelfRef.__Vcellinp__palette_ram__din;
    vlSelfRef.__PVT__not_grayscale = (((IData)(vlSelfRef.__PVT__in_draw_range) 
                                       | ((IData)(vlSelfRef.__PVT__vram_r_ppudata) 
                                          & (IData)(vlSelfRef.__PVT__is_pal_address))) 
                                      & (~ (IData)(vlSelfRef.__PVT__grayscale_bit)));
    vlSelfRef.__PVT__color0 = ((IData)(vlSelfRef.__PVT__not_grayscale)
                                ? vlSelfRef.__PVT__color_pipe[0U]
                                : VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IIII(6, vlSelfRef.__PVT__color_pipe[0U], 4U, 2)), 0U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__color 
        = vlSelfRef.__PVT__color0;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__19(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__19\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_range = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__in_range;
    vlSelfRef.__PVT__color = vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__new_color;
    vlSelfRef.__Vcellinp__address_gen__in_range = ((IData)(vlSelfRef.__PVT__in_range) 
                                                   & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__in_range 
        = vlSelfRef.__Vcellinp__address_gen__in_range;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__20(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__20\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_din = (0x000000ffU & ((IData)(vlSelfRef.__PVT__vram_r)
                                                 ? (IData)(vlSelfRef.__PVT__vram_dbus_in)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__vram_w)
                                                  ? (IData)(vlSelfRef.__PVT__vram_dout)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__ALE)
                                                   ? 
                                                  VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8)
                                                   : (IData)(vlSelfRef.__PVT__vram_dbus_in)))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
}

void Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__21(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___nba_comb__TOP__nes_core_top__nes_inst__ppu__21\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spriteset_load_in = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__load_in;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_in 
        = vlSelfRef.__PVT__spriteset_load_in;
}
