// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_debug_dots___nba_comb__TOP__nes_core_top__nes_inst__ppu__debug_d__0(Vnes_core_top_debug_dots* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_debug_dots___nba_comb__TOP__nes_core_top__nes_inst__ppu__debug_d__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__new_color = vlSelfRef.__PVT__color;
    if (vlSelfRef.__PVT__enable) {
        if (vlSelfRef.__PVT__custom1) {
            vlSelfRef.__PVT__new_color = 0x31U;
        } else if (vlSelfRef.__PVT__custom2) {
            vlSelfRef.__PVT__new_color = 0x34U;
        } else if (vlSelfRef.__PVT__w2000) {
            vlSelfRef.__PVT__new_color = 0x16U;
        } else if (vlSelfRef.__PVT__w2001) {
            vlSelfRef.__PVT__new_color = 3U;
        } else if (vlSelfRef.__PVT__r2002) {
            vlSelfRef.__PVT__new_color = 0x17U;
        } else if (vlSelfRef.__PVT__w2003) {
            vlSelfRef.__PVT__new_color = 0x15U;
        } else if (vlSelfRef.__PVT__r2004) {
            vlSelfRef.__PVT__new_color = 9U;
        } else if (vlSelfRef.__PVT__w2004) {
            vlSelfRef.__PVT__new_color = 0x28U;
        } else if (vlSelfRef.__PVT__w2005) {
            vlSelfRef.__PVT__new_color = 0x1aU;
        } else if (vlSelfRef.__PVT__w2006) {
            vlSelfRef.__PVT__new_color = 0x12U;
        } else if (vlSelfRef.__PVT__r2007) {
            vlSelfRef.__PVT__new_color = 0x21U;
        } else if (vlSelfRef.__PVT__w2007) {
            vlSelfRef.__PVT__new_color = 6U;
        }
    }
}
