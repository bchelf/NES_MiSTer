// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_NoiseChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Noi__0(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Noi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
}

void Vnes_core_top_NoiseChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Noi__1(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Noi__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__0(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__noise_timer = vlSelfRef.__PVT__noise_timer;
    vlSelfRef.__Vdly__noise_clock = vlSelfRef.__PVT__noise_clock;
    vlSelfRef.__Vdly__ShortMode = vlSelfRef.__PVT__ShortMode;
    vlSelfRef.__Vdly__Period = vlSelfRef.__PVT__Period;
    vlSelfRef.__Vdly__Shift = vlSelfRef.__PVT__Shift;
    if (vlSelfRef.__PVT__aclk1_d) {
        vlSelfRef.__Vdly__noise_timer = VL_CONCAT_III(11,10,1, 
                                                      (0x000003ffU 
                                                       & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__noise_timer), 0U, 10)), 
                                                      (1U 
                                                       & ((VL_BITSEL_IIII(11, (IData)(vlSelfRef.__PVT__noise_timer), 0x0aU) 
                                                           ^ 
                                                           VL_BITSEL_IIII(11, (IData)(vlSelfRef.__PVT__noise_timer), 8U)) 
                                                          | (~ 
                                                             VL_REDOR_I((IData)(vlSelfRef.__PVT__noise_timer))))));
        if (vlSelfRef.__PVT__noise_clock) {
            vlSelfRef.__Vdly__noise_clock = 0U;
            vlSelfRef.__Vdly__noise_timer = ((IData)(vlSelfRef.__PVT__PAL)
                                              ? vlSelfRef.__PVT__noise_pal_lut
                                             [vlSelfRef.__PVT__Period]
                                              : vlSelfRef.__PVT__noise_ntsc_lut
                                             [vlSelfRef.__PVT__Period]);
            vlSelfRef.__Vdly__Shift = VL_CONCAT_III(15,14,1, 
                                                    (0x00003fffU 
                                                     & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__Shift), 0U, 14)), 
                                                    (1U 
                                                     & ((VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__Shift), 0x0eU) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.__PVT__ShortMode)
                                                           ? 
                                                          VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__Shift), 8U)
                                                           : 
                                                          VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__Shift), 0x0dU))) 
                                                        | (~ 
                                                           VL_REDOR_I((IData)(vlSelfRef.__PVT__Shift))))));
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        if ((0x0400U == (IData)(vlSelfRef.__PVT__noise_timer))) {
            vlSelfRef.__Vdly__noise_clock = 1U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__write) & (2U == (IData)(vlSelfRef.__PVT__Addr)))) {
        vlSelfRef.__Vdly__ShortMode = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
        vlSelfRef.__Vdly__Period = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 4));
    }
    if (vlSelfRef.__PVT__reset) {
        if (VL_REDOR_I((IData)(vlSelfRef.__PVT__noise_timer))) {
            vlSelfRef.__Vdly__noise_timer = ((IData)(vlSelfRef.__PVT__PAL)
                                              ? vlSelfRef.__PVT__noise_pal_lut[0U]
                                              : vlSelfRef.__PVT__noise_ntsc_lut[0U]);
        }
        vlSelfRef.__Vdly__ShortMode = 0U;
        vlSelfRef.__Vdly__Shift = 0U;
        vlSelfRef.__Vdly__Period = 0U;
    }
    if (vlSelfRef.__PVT__cold_reset) {
        vlSelfRef.__Vdly__noise_timer = 0U;
    }
    vlSelfRef.__PVT__noise_timer = vlSelfRef.__Vdly__noise_timer;
    vlSelfRef.__PVT__noise_clock = vlSelfRef.__Vdly__noise_clock;
    vlSelfRef.__PVT__ShortMode = vlSelfRef.__Vdly__ShortMode;
    vlSelfRef.__PVT__Period = vlSelfRef.__Vdly__Period;
    vlSelfRef.__PVT__Shift = vlSelfRef.__Vdly__Shift;
}

void Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__1(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lc = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__lc_on;
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
}

void Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__2(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Envelope = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__envelope;
}

void Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__0(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__enabled 
        = vlSelfRef.__PVT__Enabled;
}

void Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__1(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__len_clk 
        = vlSelfRef.__PVT__LenCtr_Clock;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__env_clk 
        = vlSelfRef.__PVT__Env_Clock;
}

void Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__3(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Noi__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_d;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__2(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sample = ((1U & ((~ (IData)(vlSelfRef.__PVT__lc)) 
                                      | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__Shift), 0x0eU)))
                                ? 0U : (IData)(vlSelfRef.__PVT__Envelope));
}

void Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__3(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Noi__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenNoi__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 5U));
    vlSelfRef.__Vcellinp__EnvNoi__din = (0x0000003fU 
                                         & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 6));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__load_value 
        = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenNoi__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__Vcellinp__EnvNoi__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__PVT__subunit_write = (((0U == (IData)(vlSelfRef.__PVT__Addr)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__Addr))) 
                                      & (IData)(vlSelfRef.__PVT__write));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__halt_in 
        = vlSelfRef.__Vcellinp__LenNoi__halt_in;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__din 
        = vlSelfRef.__Vcellinp__EnvNoi__din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__addr 
        = vlSelfRef.__Vcellinp__LenNoi__addr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__addr 
        = vlSelfRef.__Vcellinp__EnvNoi__addr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__write 
        = vlSelfRef.__PVT__subunit_write;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__write 
        = vlSelfRef.__PVT__subunit_write;
}
