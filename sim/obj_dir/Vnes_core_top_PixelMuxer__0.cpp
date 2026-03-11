// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_PixelMuxer___nba_comb__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__0(Vnes_core_top_PixelMuxer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PixelMuxer___nba_comb__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg_valid = VL_REDOR_I((3U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg), 0U, 2)));
}

void Vnes_core_top_PixelMuxer___nba_comb__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__1(Vnes_core_top_PixelMuxer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PixelMuxer___nba_comb__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__obj_valid = VL_REDOR_I((3U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__obj), 0U, 2)));
}

void Vnes_core_top_PixelMuxer___nba_comb__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__2(Vnes_core_top_PixelMuxer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PixelMuxer___nba_comb__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_obj = ((IData)(vlSelfRef.__PVT__obj_valid) 
                               & (~ ((IData)(vlSelfRef.__PVT__obj_prio) 
                                     & (IData)(vlSelfRef.__PVT__bg_valid))));
    vlSelfRef.__PVT__out = (((IData)(vlSelfRef.__PVT__bg_valid) 
                             | (IData)(vlSelfRef.__PVT__obj_valid))
                             ? ((IData)(vlSelfRef.__PVT__is_obj)
                                 ? VL_CONCAT_III(5,1,4, 1U, (IData)(vlSelfRef.__PVT__obj))
                                 : VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__bg)))
                             : 0U);
}
