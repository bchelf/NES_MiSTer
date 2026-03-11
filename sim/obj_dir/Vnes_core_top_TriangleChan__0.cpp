// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_TriangleChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Tri__0(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Tri__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
}

void Vnes_core_top_TriangleChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Tri__1(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Tri__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__0(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lc = vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__lc_on;
}

void Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__1(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_d;
}

void Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__2(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TimerCtr = vlSelfRef.__PVT__TimerCtr;
    vlSelfRef.__Vdly__LinCtrPeriod_1 = vlSelfRef.__PVT__LinCtrPeriod_1;
    vlSelfRef.__Vdly__line_reload = vlSelfRef.__PVT__line_reload;
    vlSelfRef.__Vdly__LinCtrl = vlSelfRef.__PVT__LinCtrl;
    vlSelfRef.__Vdly__LinCtrPeriod = vlSelfRef.__PVT__LinCtrPeriod;
    vlSelfRef.__Vdly__Period = vlSelfRef.__PVT__Period;
    vlSelfRef.__Vdly__LinCtr = vlSelfRef.__PVT__LinCtr;
    vlSelfRef.__Vdly__applied_period = vlSelfRef.__PVT__applied_period;
    vlSelfRef.__Vdly__SeqPos = vlSelfRef.__PVT__SeqPos;
    vlSelfRef.__Vdly__sample_latch = vlSelfRef.__PVT__sample_latch;
    if (vlSelfRef.__PVT__phi1) {
        if ((0U == (IData)(vlSelfRef.__PVT__TimerCtr))) {
            vlSelfRef.__Vdly__TimerCtr = vlSelfRef.__PVT__Period;
            vlSelfRef.__Vdly__applied_period = vlSelfRef.__PVT__Period;
            if (((IData)(vlSelfRef.__PVT__IsNonZero) 
                 & (~ (IData)(vlSelfRef.__PVT__LinCtrZero)))) {
                vlSelfRef.__Vdly__SeqPos = (0x0000001fU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__SeqPos)));
            }
        } else {
            vlSelfRef.__Vdly__TimerCtr = (0x000007ffU 
                                          & ((IData)(vlSelfRef.__PVT__TimerCtr) 
                                             - (IData)(1U)));
        }
    }
    if (vlSelfRef.__PVT__aclk1) {
        vlSelfRef.__Vdly__LinCtrPeriod_1 = vlSelfRef.__PVT__LinCtrPeriod;
    }
    if (vlSelfRef.__PVT__LinCtr_Clock) {
        if (vlSelfRef.__PVT__line_reload) {
            vlSelfRef.__Vdly__LinCtr = vlSelfRef.__PVT__LinCtrPeriod_1;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__LinCtrZero)))) {
            vlSelfRef.__Vdly__LinCtr = (0x0000007fU 
                                        & ((IData)(vlSelfRef.__PVT__LinCtr) 
                                           - (IData)(1U)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__LinCtrl)))) {
            vlSelfRef.__Vdly__line_reload = 0U;
        }
    }
    if (vlSelfRef.__PVT__write) {
        if ((0U == (IData)(vlSelfRef.__PVT__Addr))) {
            vlSelfRef.__Vdly__LinCtrl = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
            vlSelfRef.__Vdly__LinCtrPeriod = (0x0000007fU 
                                              & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 7));
        } else if ((2U == (IData)(vlSelfRef.__PVT__Addr))) {
            VL_ASSIGNSEL_II(11, 8, 0U, vlSelfRef.__Vdly__Period, vlSelfRef.__PVT__DIN);
        } else if ((3U == (IData)(vlSelfRef.__PVT__Addr))) {
            VL_ASSIGNSEL_II(11, 3, 8U, vlSelfRef.__Vdly__Period, 
                            (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 3)));
            vlSelfRef.__Vdly__line_reload = 1U;
        }
    }
    if (vlSelfRef.__PVT__cold_reset) {
        vlSelfRef.__Vdly__sample_latch = 0x0fU;
        vlSelfRef.__Vdly__Period = 0U;
        vlSelfRef.__Vdly__TimerCtr = 0U;
        vlSelfRef.__Vdly__SeqPos = 0U;
        vlSelfRef.__Vdly__LinCtrPeriod = 0U;
        vlSelfRef.__Vdly__LinCtr = 0U;
        vlSelfRef.__Vdly__LinCtrl = 0U;
        vlSelfRef.__Vdly__line_reload = 0U;
    }
    if ((1U < (IData)(vlSelfRef.__PVT__applied_period))) {
        vlSelfRef.__Vdly__sample_latch = vlSelfRef.__PVT__Sample;
    }
    vlSelfRef.__PVT__TimerCtr = vlSelfRef.__Vdly__TimerCtr;
    vlSelfRef.__PVT__LinCtrPeriod_1 = vlSelfRef.__Vdly__LinCtrPeriod_1;
    vlSelfRef.__PVT__line_reload = vlSelfRef.__Vdly__line_reload;
    vlSelfRef.__PVT__LinCtrl = vlSelfRef.__Vdly__LinCtrl;
    vlSelfRef.__PVT__LinCtrPeriod = vlSelfRef.__Vdly__LinCtrPeriod;
    vlSelfRef.__PVT__Period = vlSelfRef.__Vdly__Period;
    vlSelfRef.__PVT__LinCtr = vlSelfRef.__Vdly__LinCtr;
    vlSelfRef.__PVT__applied_period = vlSelfRef.__Vdly__applied_period;
    vlSelfRef.__PVT__SeqPos = vlSelfRef.__Vdly__SeqPos;
    vlSelfRef.__PVT__sample_latch = vlSelfRef.__Vdly__sample_latch;
    vlSelfRef.__PVT__LinCtrZero = (1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__LinCtr))));
    vlSelfRef.__PVT__Sample = (0x0000000fU & (((1U 
                                                < (IData)(vlSelfRef.__PVT__applied_period)) 
                                               | (IData)(vlSelfRef.__PVT__allow_us))
                                               ? (VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__SeqPos), 0U, 4) 
                                                  ^ VL_REPLICATE_IOI(1, 
                                                                     (1U 
                                                                      & (~ 
                                                                         VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__SeqPos), 4U))), 4U))
                                               : (IData)(vlSelfRef.__PVT__sample_latch)));
}

void Vnes_core_top_TriangleChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Tri__0(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Tri__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__enabled 
        = vlSelfRef.__PVT__Enabled;
}

void Vnes_core_top_TriangleChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Tri__1(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Tri__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__len_clk 
        = vlSelfRef.__PVT__LenCtr_Clock;
}

void Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__3(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
}

void Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__4(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Tri__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
}

void Vnes_core_top_TriangleChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Tri__2(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Tri__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenTri__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__load_value 
        = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenTri__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__PVT__subunit_write = (((0U == (IData)(vlSelfRef.__PVT__Addr)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__Addr))) 
                                      & (IData)(vlSelfRef.__PVT__write));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__halt_in 
        = vlSelfRef.__Vcellinp__LenTri__halt_in;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__addr 
        = vlSelfRef.__Vcellinp__LenTri__addr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__write 
        = vlSelfRef.__PVT__subunit_write;
}
