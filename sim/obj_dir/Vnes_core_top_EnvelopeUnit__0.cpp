// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_EnvelopeUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__EnvSq__0(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__EnvSq__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__envunit__DOT__env_div = vlSelfRef.__PVT__envunit__DOT__env_div;
    vlSelfRef.__Vdly__envunit__DOT__env_reload = vlSelfRef.__PVT__envunit__DOT__env_reload;
    vlSelfRef.__Vdly__envunit__DOT__env_loop = vlSelfRef.__PVT__envunit__DOT__env_loop;
    vlSelfRef.__Vdly__env_count = vlSelfRef.__PVT__env_count;
    vlSelfRef.__Vdly__env_vol = vlSelfRef.__PVT__env_vol;
    vlSelfRef.__Vdly__env_disabled = vlSelfRef.__PVT__env_disabled;
    if (vlSelfRef.__PVT__env_clk) {
        if (vlSelfRef.__PVT__envunit__DOT__env_reload) {
            vlSelfRef.__Vdly__envunit__DOT__env_div 
                = vlSelfRef.__PVT__env_vol;
            vlSelfRef.__Vdly__env_count = 0x0fU;
            vlSelfRef.__Vdly__envunit__DOT__env_reload = 0U;
        } else {
            vlSelfRef.__Vdly__envunit__DOT__env_div 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__envunit__DOT__env_div) 
                                  - (IData)(1U)));
            if ((1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__envunit__DOT__env_div))))) {
                vlSelfRef.__Vdly__envunit__DOT__env_div 
                    = vlSelfRef.__PVT__env_vol;
                if ((VL_REDOR_I((IData)(vlSelfRef.__PVT__env_count)) 
                     | (IData)(vlSelfRef.__PVT__envunit__DOT__env_loop))) {
                    vlSelfRef.__Vdly__env_count = (0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__env_count) 
                                                      - (IData)(1U)));
                }
            }
        }
    }
    if (vlSelfRef.__PVT__write) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__addr)))) {
            vlSelfRef.__Vdly__envunit__DOT__env_loop 
                = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 5U));
            vlSelfRef.__Vdly__env_disabled = (1U & 
                                              VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 4U));
            vlSelfRef.__Vdly__env_vol = (0x0000000fU 
                                         & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 0U, 4));
        }
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__envunit__DOT__env_reload = 1U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__envunit__DOT__env_loop = 0U;
        vlSelfRef.__Vdly__envunit__DOT__env_div = 0U;
        vlSelfRef.__Vdly__env_vol = 0U;
        vlSelfRef.__Vdly__env_count = 0U;
        vlSelfRef.__Vdly__envunit__DOT__env_reload = 0U;
    }
    vlSelfRef.__PVT__envunit__DOT__env_div = vlSelfRef.__Vdly__envunit__DOT__env_div;
    vlSelfRef.__PVT__envunit__DOT__env_reload = vlSelfRef.__Vdly__envunit__DOT__env_reload;
    vlSelfRef.__PVT__envunit__DOT__env_loop = vlSelfRef.__Vdly__envunit__DOT__env_loop;
    vlSelfRef.__PVT__env_count = vlSelfRef.__Vdly__env_count;
    vlSelfRef.__PVT__env_disabled = vlSelfRef.__Vdly__env_disabled;
    vlSelfRef.__PVT__env_vol = vlSelfRef.__Vdly__env_vol;
    vlSelfRef.__PVT__envelope = ((IData)(vlSelfRef.__PVT__env_disabled)
                                  ? (IData)(vlSelfRef.__PVT__env_vol)
                                  : (IData)(vlSelfRef.__PVT__env_count));
}

void Vnes_core_top_EnvelopeUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__EnvSq__0(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__EnvSq__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__envunit__DOT__env_div = vlSelfRef.__PVT__envunit__DOT__env_div;
    vlSelfRef.__Vdly__envunit__DOT__env_reload = vlSelfRef.__PVT__envunit__DOT__env_reload;
    vlSelfRef.__Vdly__envunit__DOT__env_loop = vlSelfRef.__PVT__envunit__DOT__env_loop;
    vlSelfRef.__Vdly__env_count = vlSelfRef.__PVT__env_count;
    vlSelfRef.__Vdly__env_vol = vlSelfRef.__PVT__env_vol;
    vlSelfRef.__Vdly__env_disabled = vlSelfRef.__PVT__env_disabled;
    if (vlSelfRef.__PVT__env_clk) {
        if (vlSelfRef.__PVT__envunit__DOT__env_reload) {
            vlSelfRef.__Vdly__envunit__DOT__env_div 
                = vlSelfRef.__PVT__env_vol;
            vlSelfRef.__Vdly__env_count = 0x0fU;
            vlSelfRef.__Vdly__envunit__DOT__env_reload = 0U;
        } else {
            vlSelfRef.__Vdly__envunit__DOT__env_div 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__envunit__DOT__env_div) 
                                  - (IData)(1U)));
            if ((1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__envunit__DOT__env_div))))) {
                vlSelfRef.__Vdly__envunit__DOT__env_div 
                    = vlSelfRef.__PVT__env_vol;
                if ((VL_REDOR_I((IData)(vlSelfRef.__PVT__env_count)) 
                     | (IData)(vlSelfRef.__PVT__envunit__DOT__env_loop))) {
                    vlSelfRef.__Vdly__env_count = (0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__env_count) 
                                                      - (IData)(1U)));
                }
            }
        }
    }
    if (vlSelfRef.__PVT__write) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__addr)))) {
            vlSelfRef.__Vdly__envunit__DOT__env_loop 
                = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 5U));
            vlSelfRef.__Vdly__env_disabled = (1U & 
                                              VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 4U));
            vlSelfRef.__Vdly__env_vol = (0x0000000fU 
                                         & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 0U, 4));
        }
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__envunit__DOT__env_reload = 1U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__envunit__DOT__env_loop = 0U;
        vlSelfRef.__Vdly__envunit__DOT__env_div = 0U;
        vlSelfRef.__Vdly__env_vol = 0U;
        vlSelfRef.__Vdly__env_count = 0U;
        vlSelfRef.__Vdly__envunit__DOT__env_reload = 0U;
    }
    vlSelfRef.__PVT__envunit__DOT__env_div = vlSelfRef.__Vdly__envunit__DOT__env_div;
    vlSelfRef.__PVT__envunit__DOT__env_reload = vlSelfRef.__Vdly__envunit__DOT__env_reload;
    vlSelfRef.__PVT__envunit__DOT__env_loop = vlSelfRef.__Vdly__envunit__DOT__env_loop;
    vlSelfRef.__PVT__env_count = vlSelfRef.__Vdly__env_count;
    vlSelfRef.__PVT__env_disabled = vlSelfRef.__Vdly__env_disabled;
    vlSelfRef.__PVT__env_vol = vlSelfRef.__Vdly__env_vol;
    vlSelfRef.__PVT__envelope = ((IData)(vlSelfRef.__PVT__env_disabled)
                                  ? (IData)(vlSelfRef.__PVT__env_vol)
                                  : (IData)(vlSelfRef.__PVT__env_count));
}

void Vnes_core_top_EnvelopeUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi__0(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__envunit__DOT__env_div = vlSelfRef.__PVT__envunit__DOT__env_div;
    vlSelfRef.__Vdly__envunit__DOT__env_reload = vlSelfRef.__PVT__envunit__DOT__env_reload;
    vlSelfRef.__Vdly__envunit__DOT__env_loop = vlSelfRef.__PVT__envunit__DOT__env_loop;
    vlSelfRef.__Vdly__env_count = vlSelfRef.__PVT__env_count;
    vlSelfRef.__Vdly__env_vol = vlSelfRef.__PVT__env_vol;
    vlSelfRef.__Vdly__env_disabled = vlSelfRef.__PVT__env_disabled;
    if (vlSelfRef.__PVT__env_clk) {
        if (vlSelfRef.__PVT__envunit__DOT__env_reload) {
            vlSelfRef.__Vdly__envunit__DOT__env_div 
                = vlSelfRef.__PVT__env_vol;
            vlSelfRef.__Vdly__env_count = 0x0fU;
            vlSelfRef.__Vdly__envunit__DOT__env_reload = 0U;
        } else {
            vlSelfRef.__Vdly__envunit__DOT__env_div 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__envunit__DOT__env_div) 
                                  - (IData)(1U)));
            if ((1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__envunit__DOT__env_div))))) {
                vlSelfRef.__Vdly__envunit__DOT__env_div 
                    = vlSelfRef.__PVT__env_vol;
                if ((VL_REDOR_I((IData)(vlSelfRef.__PVT__env_count)) 
                     | (IData)(vlSelfRef.__PVT__envunit__DOT__env_loop))) {
                    vlSelfRef.__Vdly__env_count = (0x0000000fU 
                                                   & ((IData)(vlSelfRef.__PVT__env_count) 
                                                      - (IData)(1U)));
                }
            }
        }
    }
    if (vlSelfRef.__PVT__write) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__addr)))) {
            vlSelfRef.__Vdly__envunit__DOT__env_loop 
                = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 5U));
            vlSelfRef.__Vdly__env_disabled = (1U & 
                                              VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 4U));
            vlSelfRef.__Vdly__env_vol = (0x0000000fU 
                                         & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__din), 0U, 4));
        }
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__envunit__DOT__env_reload = 1U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__envunit__DOT__env_loop = 0U;
        vlSelfRef.__Vdly__envunit__DOT__env_div = 0U;
        vlSelfRef.__Vdly__env_vol = 0U;
        vlSelfRef.__Vdly__env_count = 0U;
        vlSelfRef.__Vdly__envunit__DOT__env_reload = 0U;
    }
    vlSelfRef.__PVT__envunit__DOT__env_div = vlSelfRef.__Vdly__envunit__DOT__env_div;
    vlSelfRef.__PVT__envunit__DOT__env_reload = vlSelfRef.__Vdly__envunit__DOT__env_reload;
    vlSelfRef.__PVT__envunit__DOT__env_loop = vlSelfRef.__Vdly__envunit__DOT__env_loop;
    vlSelfRef.__PVT__env_count = vlSelfRef.__Vdly__env_count;
    vlSelfRef.__PVT__env_disabled = vlSelfRef.__Vdly__env_disabled;
    vlSelfRef.__PVT__env_vol = vlSelfRef.__Vdly__env_vol;
    vlSelfRef.__PVT__envelope = ((IData)(vlSelfRef.__PVT__env_disabled)
                                  ? (IData)(vlSelfRef.__PVT__env_vol)
                                  : (IData)(vlSelfRef.__PVT__env_count));
}
