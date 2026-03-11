// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_APUMixer___nba_comb__TOP__nes_core_top__nes_inst__apu__mixer__0(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___nba_comb__TOP__nes_core_top__nes_inst__apu__mixer__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mix = (0x000001ffU & ((VL_EXTEND_II(9,6, vlSelfRef.__PVT__tri_lut
                                                         [vlSelfRef.__PVT__triangle]) 
                                            + VL_EXTEND_II(9,6, vlSelfRef.__PVT__noise_lut
                                                           [vlSelfRef.__PVT__noise])) 
                                           + VL_EXTEND_II(9,8, vlSelfRef.__PVT__dmc_lut
                                                          [vlSelfRef.__PVT__dmc])));
    vlSelfRef.__PVT__ch2 = vlSelfRef.__PVT__mix_lut
        [vlSelfRef.__PVT__mix];
}

void Vnes_core_top_APUMixer___nba_comb__TOP__nes_core_top__nes_inst__apu__mixer__1(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___nba_comb__TOP__nes_core_top__nes_inst__apu__mixer__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__squares = (0x0000001fU & (VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__square1)) 
                                               + VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__square2))));
    vlSelfRef.__PVT__ch1 = vlSelfRef.__PVT__pulse_lut
        [vlSelfRef.__PVT__squares];
}

void Vnes_core_top_APUMixer___nba_comb__TOP__nes_core_top__nes_inst__apu__mixer__2(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___nba_comb__TOP__nes_core_top__nes_inst__apu__mixer__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sample = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__ch1) 
                                              + (IData)(vlSelfRef.__PVT__ch2)));
}
