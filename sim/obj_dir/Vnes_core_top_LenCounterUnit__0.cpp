// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__LenSq__0(Vnes_core_top_LenCounterUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__LenSq__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lenunit__DOT__lc_on_1;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_next;
    vlSelfRef.__Vdly__lenunit__DOT__clear_next = vlSelfRef.__PVT__lenunit__DOT__clear_next;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_int;
    vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__lenunit__DOT__halt;
    vlSelfRef.__Vdly__lc_on = vlSelfRef.__PVT__lc_on;
    if (vlSelfRef.__PVT__aclk1_d) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enabled)))) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lc_on;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt) 
                                     | (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        vlSelfRef.__Vdly__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__lenunit__DOT__halt)) 
                     & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.__PVT__write) {
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__lc_on = 1U;
            vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
                = vlSelfRef.__PVT__load_value;
        } else {
            vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__halt_in;
        }
    }
    if (((IData)(vlSelfRef.__PVT__len_clk) & (IData)(vlSelfRef.__PVT__lenunit__DOT__lc_on_1))) {
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.__PVT__lenunit__DOT__clear_next) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__is_triangle)) 
                   | (IData)(vlSelfRef.__PVT__cold_reset)))) {
            vlSelfRef.__Vdly__lenunit__DOT__halt = 0U;
        }
        vlSelfRef.__Vdly__lc_on = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next = 0U;
    }
    vlSelfRef.__PVT__lenunit__DOT__lc_on_1 = vlSelfRef.__Vdly__lenunit__DOT__lc_on_1;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_next 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_next;
    vlSelfRef.__PVT__lenunit__DOT__clear_next = vlSelfRef.__Vdly__lenunit__DOT__clear_next;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_int 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_int;
    vlSelfRef.__PVT__lenunit__DOT__halt = vlSelfRef.__Vdly__lenunit__DOT__halt;
    vlSelfRef.__PVT__lc_on = vlSelfRef.__Vdly__lc_on;
}

void Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__LenSq__0(Vnes_core_top_LenCounterUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__LenSq__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lenunit__DOT__lc_on_1;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_next;
    vlSelfRef.__Vdly__lenunit__DOT__clear_next = vlSelfRef.__PVT__lenunit__DOT__clear_next;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_int;
    vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__lenunit__DOT__halt;
    vlSelfRef.__Vdly__lc_on = vlSelfRef.__PVT__lc_on;
    if (vlSelfRef.__PVT__aclk1_d) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enabled)))) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lc_on;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt) 
                                     | (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        vlSelfRef.__Vdly__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__lenunit__DOT__halt)) 
                     & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.__PVT__write) {
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__lc_on = 1U;
            vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
                = vlSelfRef.__PVT__load_value;
        } else {
            vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__halt_in;
        }
    }
    if (((IData)(vlSelfRef.__PVT__len_clk) & (IData)(vlSelfRef.__PVT__lenunit__DOT__lc_on_1))) {
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.__PVT__lenunit__DOT__clear_next) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__is_triangle)) 
                   | (IData)(vlSelfRef.__PVT__cold_reset)))) {
            vlSelfRef.__Vdly__lenunit__DOT__halt = 0U;
        }
        vlSelfRef.__Vdly__lc_on = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next = 0U;
    }
    vlSelfRef.__PVT__lenunit__DOT__lc_on_1 = vlSelfRef.__Vdly__lenunit__DOT__lc_on_1;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_next 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_next;
    vlSelfRef.__PVT__lenunit__DOT__clear_next = vlSelfRef.__Vdly__lenunit__DOT__clear_next;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_int 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_int;
    vlSelfRef.__PVT__lenunit__DOT__halt = vlSelfRef.__Vdly__lenunit__DOT__halt;
    vlSelfRef.__PVT__lc_on = vlSelfRef.__Vdly__lc_on;
}

void Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__LenTri__0(Vnes_core_top_LenCounterUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__LenTri__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lenunit__DOT__lc_on_1;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_next;
    vlSelfRef.__Vdly__lenunit__DOT__clear_next = vlSelfRef.__PVT__lenunit__DOT__clear_next;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_int;
    vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__lenunit__DOT__halt;
    vlSelfRef.__Vdly__lc_on = vlSelfRef.__PVT__lc_on;
    if (vlSelfRef.__PVT__aclk1_d) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enabled)))) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lc_on;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt) 
                                     | (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        vlSelfRef.__Vdly__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__lenunit__DOT__halt)) 
                     & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.__PVT__write) {
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__lc_on = 1U;
            vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
                = vlSelfRef.__PVT__load_value;
        } else {
            vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__halt_in;
        }
    }
    if (((IData)(vlSelfRef.__PVT__len_clk) & (IData)(vlSelfRef.__PVT__lenunit__DOT__lc_on_1))) {
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.__PVT__lenunit__DOT__clear_next) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__is_triangle)) 
                   | (IData)(vlSelfRef.__PVT__cold_reset)))) {
            vlSelfRef.__Vdly__lenunit__DOT__halt = 0U;
        }
        vlSelfRef.__Vdly__lc_on = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next = 0U;
    }
    vlSelfRef.__PVT__lenunit__DOT__lc_on_1 = vlSelfRef.__Vdly__lenunit__DOT__lc_on_1;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_next 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_next;
    vlSelfRef.__PVT__lenunit__DOT__clear_next = vlSelfRef.__Vdly__lenunit__DOT__clear_next;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_int 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_int;
    vlSelfRef.__PVT__lenunit__DOT__halt = vlSelfRef.__Vdly__lenunit__DOT__halt;
    vlSelfRef.__PVT__lc_on = vlSelfRef.__Vdly__lc_on;
}

void Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__LenNoi__0(Vnes_core_top_LenCounterUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_LenCounterUnit___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__LenNoi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lenunit__DOT__lc_on_1;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_next;
    vlSelfRef.__Vdly__lenunit__DOT__clear_next = vlSelfRef.__PVT__lenunit__DOT__clear_next;
    vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
        = vlSelfRef.__PVT__lenunit__DOT__len_counter_int;
    vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__lenunit__DOT__halt;
    vlSelfRef.__Vdly__lc_on = vlSelfRef.__PVT__lc_on;
    if (vlSelfRef.__PVT__aclk1_d) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__enabled)))) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__lenunit__DOT__lc_on_1 = vlSelfRef.__PVT__lc_on;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt) 
                                     | (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        vlSelfRef.__Vdly__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__lenunit__DOT__halt)) 
                     & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.__PVT__write) {
        if (vlSelfRef.__PVT__addr) {
            vlSelfRef.__Vdly__lc_on = 1U;
            vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
                = vlSelfRef.__PVT__load_value;
        } else {
            vlSelfRef.__Vdly__lenunit__DOT__halt = vlSelfRef.__PVT__halt_in;
        }
    }
    if (((IData)(vlSelfRef.__PVT__len_clk) & (IData)(vlSelfRef.__PVT__lenunit__DOT__lc_on_1))) {
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.__PVT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.__PVT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.__PVT__lenunit__DOT__clear_next) {
            vlSelfRef.__Vdly__lc_on = 0U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__is_triangle)) 
                   | (IData)(vlSelfRef.__PVT__cold_reset)))) {
            vlSelfRef.__Vdly__lenunit__DOT__halt = 0U;
        }
        vlSelfRef.__Vdly__lc_on = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_int = 0U;
        vlSelfRef.__Vdly__lenunit__DOT__len_counter_next = 0U;
    }
    vlSelfRef.__PVT__lenunit__DOT__lc_on_1 = vlSelfRef.__Vdly__lenunit__DOT__lc_on_1;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_next 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_next;
    vlSelfRef.__PVT__lenunit__DOT__clear_next = vlSelfRef.__Vdly__lenunit__DOT__clear_next;
    vlSelfRef.__PVT__lenunit__DOT__len_counter_int 
        = vlSelfRef.__Vdly__lenunit__DOT__len_counter_int;
    vlSelfRef.__PVT__lenunit__DOT__halt = vlSelfRef.__Vdly__lenunit__DOT__halt;
    vlSelfRef.__PVT__lc_on = vlSelfRef.__Vdly__lc_on;
}
