// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__EnvSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__LenSq->__PVT__cold_reset = vlSelfRef.__PVT__cold_reset;
}

void Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__EnvSq->__PVT__reset = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lc = vlSelf->__PVT__LenSq->__PVT__lc_on;
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Envelope = vlSelf->__PVT__EnvSq->__PVT__envelope;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TimerCtr = vlSelfRef.__PVT__TimerCtr;
    vlSelfRef.__Vdly__SweepDivider = vlSelfRef.__PVT__SweepDivider;
    vlSelfRef.__Vdly__SweepReset = vlSelfRef.__PVT__SweepReset;
    vlSelfRef.__Vdly__SweepEnable = vlSelfRef.__PVT__SweepEnable;
    vlSelfRef.__Vdly__SweepPeriod = vlSelfRef.__PVT__SweepPeriod;
    vlSelfRef.__Vdly__SeqPos = vlSelfRef.__PVT__SeqPos;
    vlSelfRef.__Vdly__SweepShift = vlSelfRef.__PVT__SweepShift;
    vlSelfRef.__Vdly__Period = vlSelfRef.__PVT__Period;
    vlSelfRef.__Vdly__Duty = vlSelfRef.__PVT__Duty;
    vlSelfRef.__Vdly__SweepNegate = vlSelfRef.__PVT__SweepNegate;
    if (vlSelfRef.__PVT__aclk1_d) {
        if ((0U == (IData)(vlSelfRef.__PVT__TimerCtr))) {
            vlSelfRef.__Vdly__TimerCtr = VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__Period));
            vlSelfRef.__Vdly__SeqPos = (7U & ((IData)(vlSelfRef.__PVT__SeqPos) 
                                              - (IData)(1U)));
        } else {
            vlSelfRef.__Vdly__TimerCtr = (0x00000fffU 
                                          & ((IData)(vlSelfRef.__PVT__TimerCtr) 
                                             - (IData)(1U)));
        }
    }
    if (vlSelfRef.__PVT__LenCtr_Clock) {
        if ((0U == (IData)(vlSelfRef.__PVT__SweepDivider))) {
            vlSelfRef.__Vdly__SweepDivider = vlSelfRef.__PVT__SweepPeriod;
            if ((((IData)(vlSelfRef.__PVT__SweepEnable) 
                  & (0U != (IData)(vlSelfRef.__PVT__SweepShift))) 
                 & (IData)(vlSelfRef.__PVT__ValidFreq))) {
                vlSelfRef.__Vdly__Period = (0x000007ffU 
                                            & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__NewSweepPeriod), 0U, 11));
            }
        } else {
            vlSelfRef.__Vdly__SweepDivider = (7U & 
                                              ((IData)(vlSelfRef.__PVT__SweepDivider) 
                                               - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__SweepReset) {
            vlSelfRef.__Vdly__SweepDivider = vlSelfRef.__PVT__SweepPeriod;
        }
        vlSelfRef.__Vdly__SweepReset = 0U;
    }
    if (vlSelfRef.__PVT__write) {
        if ((0U == (IData)(vlSelfRef.__PVT__Addr))) {
            vlSelfRef.__Vdly__Duty = (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 6U, 2));
        } else if ((1U == (IData)(vlSelfRef.__PVT__Addr))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__MMC5)))) {
                vlSelfRef.__Vdly__SweepEnable = (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
                vlSelfRef.__Vdly__SweepPeriod = (7U 
                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 4U, 3));
                vlSelfRef.__Vdly__SweepNegate = (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 3U));
                vlSelfRef.__Vdly__SweepShift = (7U 
                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 3));
                vlSelfRef.__Vdly__SweepReset = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__Addr))) {
            VL_ASSIGNSEL_II(11, 8, 0U, vlSelfRef.__Vdly__Period, vlSelfRef.__PVT__DIN);
        } else if ((3U == (IData)(vlSelfRef.__PVT__Addr))) {
            VL_ASSIGNSEL_II(11, 3, 8U, vlSelfRef.__Vdly__Period, 
                            (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 3)));
            vlSelfRef.__Vdly__SeqPos = 0U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__Duty = 0U;
        vlSelfRef.__Vdly__SweepEnable = 0U;
        vlSelfRef.__Vdly__SweepNegate = 0U;
        vlSelfRef.__Vdly__SweepReset = 0U;
        vlSelfRef.__Vdly__SweepPeriod = 0U;
        vlSelfRef.__Vdly__SweepDivider = 0U;
        vlSelfRef.__Vdly__SweepShift = 0U;
        vlSelfRef.__Vdly__Period = 0U;
        vlSelfRef.__Vdly__TimerCtr = 0U;
        vlSelfRef.__Vdly__SeqPos = 0U;
    }
    vlSelfRef.__PVT__TimerCtr = vlSelfRef.__Vdly__TimerCtr;
    vlSelfRef.__PVT__SweepDivider = vlSelfRef.__Vdly__SweepDivider;
    vlSelfRef.__PVT__SweepReset = vlSelfRef.__Vdly__SweepReset;
    vlSelfRef.__PVT__SweepEnable = vlSelfRef.__Vdly__SweepEnable;
    vlSelfRef.__PVT__SweepPeriod = vlSelfRef.__Vdly__SweepPeriod;
    vlSelfRef.__PVT__SeqPos = vlSelfRef.__Vdly__SeqPos;
    vlSelfRef.__PVT__Duty = vlSelfRef.__Vdly__Duty;
    vlSelfRef.__PVT__SweepShift = vlSelfRef.__Vdly__SweepShift;
    vlSelfRef.__PVT__SweepNegate = vlSelfRef.__Vdly__SweepNegate;
    vlSelfRef.__PVT__Period = vlSelfRef.__Vdly__Period;
    if ((0U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (7U == (IData)(vlSelfRef.__PVT__SeqPos));
    } else if ((1U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (6U <= (IData)(vlSelfRef.__PVT__SeqPos));
    } else if ((2U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (4U <= (IData)(vlSelfRef.__PVT__SeqPos));
    } else if ((3U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (6U > (IData)(vlSelfRef.__PVT__SeqPos));
    }
    vlSelfRef.__PVT__ShiftedPeriod = ((IData)(vlSelfRef.__PVT__Period) 
                                      >> (IData)(vlSelfRef.__PVT__SweepShift));
    vlSelfRef.__PVT__DutyEnabledUsed = ((IData)(vlSelfRef.__PVT__MMC5) 
                                        ^ (IData)(vlSelfRef.__PVT__DutyEnabled));
    vlSelfRef.__PVT__PeriodRhs = (0x000007ffU & ((IData)(vlSelfRef.__PVT__SweepNegate)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__ShiftedPeriod)) 
                                                  + 
                                                  VL_EXTEND_II(11,1, (IData)(vlSelfRef.__PVT__sq2)))
                                                  : (IData)(vlSelfRef.__PVT__ShiftedPeriod)));
    vlSelfRef.__PVT__NewSweepPeriod = (0x00000fffU 
                                       & (VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__Period)) 
                                          + VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__PeriodRhs))));
    vlSelfRef.__PVT__ValidFreq = (((IData)(vlSelfRef.__PVT__MMC5) 
                                   & (IData)(vlSelfRef.__PVT__allow_us)) 
                                  | (VL_REDOR_I((0x000000ffU 
                                                 & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__Period), 3U, 8))) 
                                     & ((IData)(vlSelfRef.__PVT__SweepNegate) 
                                        | (~ VL_BITSEL_IIII(12, (IData)(vlSelfRef.__PVT__NewSweepPeriod), 0x0bU)))));
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__enabled = vlSelfRef.__PVT__Enabled;
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__EnvSq->__PVT__env_clk = vlSelfRef.__PVT__Env_Clock;
    vlSelfRef.__Vcellinp__LenSq__len_clk = ((IData)(vlSelfRef.__PVT__MMC5)
                                             ? (IData)(vlSelfRef.__PVT__Env_Clock)
                                             : (IData)(vlSelfRef.__PVT__LenCtr_Clock));
    vlSelf->__PVT__LenSq->__PVT__len_clk = vlSelfRef.__Vcellinp__LenSq__len_clk;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__3(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__aclk1 = vlSelfRef.__PVT__aclk1;
    vlSelf->__PVT__LenSq->__PVT__aclk1_d = vlSelfRef.__PVT__aclk1_d;
    vlSelf->__PVT__LenSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__EnvSq->__PVT__reset = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sample = ((1U & (((~ (IData)(vlSelfRef.__PVT__lc)) 
                                       | (~ (IData)(vlSelfRef.__PVT__ValidFreq))) 
                                      | (~ (IData)(vlSelfRef.__PVT__DutyEnabledUsed))))
                                ? 0U : (IData)(vlSelfRef.__PVT__Envelope));
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__3(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ1__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenSq__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 5U));
    vlSelfRef.__Vcellinp__EnvSq__din = (0x0000003fU 
                                        & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 6));
    vlSelf->__PVT__LenSq->__PVT__load_value = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__Vcellinp__EnvSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__PVT__subunit_write = (((0U == (IData)(vlSelfRef.__PVT__Addr)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__Addr))) 
                                      & (IData)(vlSelfRef.__PVT__write));
    vlSelf->__PVT__LenSq->__PVT__halt_in = vlSelfRef.__Vcellinp__LenSq__halt_in;
    vlSelf->__PVT__EnvSq->__PVT__din = vlSelfRef.__Vcellinp__EnvSq__din;
    vlSelf->__PVT__LenSq->__PVT__addr = vlSelfRef.__Vcellinp__LenSq__addr;
    vlSelf->__PVT__EnvSq->__PVT__addr = vlSelfRef.__Vcellinp__EnvSq__addr;
    vlSelf->__PVT__LenSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
    vlSelf->__PVT__EnvSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
}

void Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__EnvSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__LenSq->__PVT__cold_reset = vlSelfRef.__PVT__cold_reset;
}

void Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___ico_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__EnvSq->__PVT__reset = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lc = vlSelf->__PVT__LenSq->__PVT__lc_on;
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Envelope = vlSelf->__PVT__EnvSq->__PVT__envelope;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TimerCtr = vlSelfRef.__PVT__TimerCtr;
    vlSelfRef.__Vdly__SweepDivider = vlSelfRef.__PVT__SweepDivider;
    vlSelfRef.__Vdly__SweepReset = vlSelfRef.__PVT__SweepReset;
    vlSelfRef.__Vdly__SweepEnable = vlSelfRef.__PVT__SweepEnable;
    vlSelfRef.__Vdly__SweepPeriod = vlSelfRef.__PVT__SweepPeriod;
    vlSelfRef.__Vdly__SeqPos = vlSelfRef.__PVT__SeqPos;
    vlSelfRef.__Vdly__SweepShift = vlSelfRef.__PVT__SweepShift;
    vlSelfRef.__Vdly__Period = vlSelfRef.__PVT__Period;
    vlSelfRef.__Vdly__Duty = vlSelfRef.__PVT__Duty;
    vlSelfRef.__Vdly__SweepNegate = vlSelfRef.__PVT__SweepNegate;
    if (vlSelfRef.__PVT__aclk1_d) {
        if ((0U == (IData)(vlSelfRef.__PVT__TimerCtr))) {
            vlSelfRef.__Vdly__TimerCtr = VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__Period));
            vlSelfRef.__Vdly__SeqPos = (7U & ((IData)(vlSelfRef.__PVT__SeqPos) 
                                              - (IData)(1U)));
        } else {
            vlSelfRef.__Vdly__TimerCtr = (0x00000fffU 
                                          & ((IData)(vlSelfRef.__PVT__TimerCtr) 
                                             - (IData)(1U)));
        }
    }
    if (vlSelfRef.__PVT__LenCtr_Clock) {
        if ((0U == (IData)(vlSelfRef.__PVT__SweepDivider))) {
            vlSelfRef.__Vdly__SweepDivider = vlSelfRef.__PVT__SweepPeriod;
            if ((((IData)(vlSelfRef.__PVT__SweepEnable) 
                  & (0U != (IData)(vlSelfRef.__PVT__SweepShift))) 
                 & (IData)(vlSelfRef.__PVT__ValidFreq))) {
                vlSelfRef.__Vdly__Period = (0x000007ffU 
                                            & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__NewSweepPeriod), 0U, 11));
            }
        } else {
            vlSelfRef.__Vdly__SweepDivider = (7U & 
                                              ((IData)(vlSelfRef.__PVT__SweepDivider) 
                                               - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__SweepReset) {
            vlSelfRef.__Vdly__SweepDivider = vlSelfRef.__PVT__SweepPeriod;
        }
        vlSelfRef.__Vdly__SweepReset = 0U;
    }
    if (vlSelfRef.__PVT__write) {
        if ((0U == (IData)(vlSelfRef.__PVT__Addr))) {
            vlSelfRef.__Vdly__Duty = (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 6U, 2));
        } else if ((1U == (IData)(vlSelfRef.__PVT__Addr))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__MMC5)))) {
                vlSelfRef.__Vdly__SweepEnable = (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
                vlSelfRef.__Vdly__SweepPeriod = (7U 
                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 4U, 3));
                vlSelfRef.__Vdly__SweepNegate = (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 3U));
                vlSelfRef.__Vdly__SweepShift = (7U 
                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 3));
                vlSelfRef.__Vdly__SweepReset = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__Addr))) {
            VL_ASSIGNSEL_II(11, 8, 0U, vlSelfRef.__Vdly__Period, vlSelfRef.__PVT__DIN);
        } else if ((3U == (IData)(vlSelfRef.__PVT__Addr))) {
            VL_ASSIGNSEL_II(11, 3, 8U, vlSelfRef.__Vdly__Period, 
                            (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 3)));
            vlSelfRef.__Vdly__SeqPos = 0U;
        }
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__Duty = 0U;
        vlSelfRef.__Vdly__SweepEnable = 0U;
        vlSelfRef.__Vdly__SweepNegate = 0U;
        vlSelfRef.__Vdly__SweepReset = 0U;
        vlSelfRef.__Vdly__SweepPeriod = 0U;
        vlSelfRef.__Vdly__SweepDivider = 0U;
        vlSelfRef.__Vdly__SweepShift = 0U;
        vlSelfRef.__Vdly__Period = 0U;
        vlSelfRef.__Vdly__TimerCtr = 0U;
        vlSelfRef.__Vdly__SeqPos = 0U;
    }
    vlSelfRef.__PVT__TimerCtr = vlSelfRef.__Vdly__TimerCtr;
    vlSelfRef.__PVT__SweepDivider = vlSelfRef.__Vdly__SweepDivider;
    vlSelfRef.__PVT__SweepReset = vlSelfRef.__Vdly__SweepReset;
    vlSelfRef.__PVT__SweepEnable = vlSelfRef.__Vdly__SweepEnable;
    vlSelfRef.__PVT__SweepPeriod = vlSelfRef.__Vdly__SweepPeriod;
    vlSelfRef.__PVT__SeqPos = vlSelfRef.__Vdly__SeqPos;
    vlSelfRef.__PVT__Duty = vlSelfRef.__Vdly__Duty;
    vlSelfRef.__PVT__SweepShift = vlSelfRef.__Vdly__SweepShift;
    vlSelfRef.__PVT__SweepNegate = vlSelfRef.__Vdly__SweepNegate;
    vlSelfRef.__PVT__Period = vlSelfRef.__Vdly__Period;
    if ((0U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (7U == (IData)(vlSelfRef.__PVT__SeqPos));
    } else if ((1U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (6U <= (IData)(vlSelfRef.__PVT__SeqPos));
    } else if ((2U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (4U <= (IData)(vlSelfRef.__PVT__SeqPos));
    } else if ((3U == (IData)(vlSelfRef.__PVT__Duty))) {
        vlSelfRef.__PVT__DutyEnabled = (6U > (IData)(vlSelfRef.__PVT__SeqPos));
    }
    vlSelfRef.__PVT__ShiftedPeriod = ((IData)(vlSelfRef.__PVT__Period) 
                                      >> (IData)(vlSelfRef.__PVT__SweepShift));
    vlSelfRef.__PVT__DutyEnabledUsed = ((IData)(vlSelfRef.__PVT__MMC5) 
                                        ^ (IData)(vlSelfRef.__PVT__DutyEnabled));
    vlSelfRef.__PVT__PeriodRhs = (0x000007ffU & ((IData)(vlSelfRef.__PVT__SweepNegate)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__ShiftedPeriod)) 
                                                  + 
                                                  VL_EXTEND_II(11,1, (IData)(vlSelfRef.__PVT__sq2)))
                                                  : (IData)(vlSelfRef.__PVT__ShiftedPeriod)));
    vlSelfRef.__PVT__NewSweepPeriod = (0x00000fffU 
                                       & (VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__Period)) 
                                          + VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__PeriodRhs))));
    vlSelfRef.__PVT__ValidFreq = (((IData)(vlSelfRef.__PVT__MMC5) 
                                   & (IData)(vlSelfRef.__PVT__allow_us)) 
                                  | (VL_REDOR_I((0x000000ffU 
                                                 & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__Period), 3U, 8))) 
                                     & ((IData)(vlSelfRef.__PVT__SweepNegate) 
                                        | (~ VL_BITSEL_IIII(12, (IData)(vlSelfRef.__PVT__NewSweepPeriod), 0x0bU)))));
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__enabled = vlSelfRef.__PVT__Enabled;
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__EnvSq->__PVT__env_clk = vlSelfRef.__PVT__Env_Clock;
    vlSelfRef.__Vcellinp__LenSq__len_clk = ((IData)(vlSelfRef.__PVT__MMC5)
                                             ? (IData)(vlSelfRef.__PVT__Env_Clock)
                                             : (IData)(vlSelfRef.__PVT__LenCtr_Clock));
    vlSelf->__PVT__LenSq->__PVT__len_clk = vlSelfRef.__Vcellinp__LenSq__len_clk;
}

void Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__3(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__aclk1 = vlSelfRef.__PVT__aclk1;
    vlSelf->__PVT__LenSq->__PVT__aclk1_d = vlSelfRef.__PVT__aclk1_d;
    vlSelf->__PVT__LenSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__EnvSq->__PVT__reset = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sample = ((1U & (((~ (IData)(vlSelfRef.__PVT__lc)) 
                                       | (~ (IData)(vlSelfRef.__PVT__ValidFreq))) 
                                      | (~ (IData)(vlSelfRef.__PVT__DutyEnabledUsed))))
                                ? 0U : (IData)(vlSelfRef.__PVT__Envelope));
}

void Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__3(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___nba_comb__TOP__nes_core_top__nes_inst__apu__Squ2__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenSq__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 5U));
    vlSelfRef.__Vcellinp__EnvSq__din = (0x0000003fU 
                                        & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 6));
    vlSelf->__PVT__LenSq->__PVT__load_value = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__Vcellinp__EnvSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__PVT__subunit_write = (((0U == (IData)(vlSelfRef.__PVT__Addr)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__Addr))) 
                                      & (IData)(vlSelfRef.__PVT__write));
    vlSelf->__PVT__LenSq->__PVT__halt_in = vlSelfRef.__Vcellinp__LenSq__halt_in;
    vlSelf->__PVT__EnvSq->__PVT__din = vlSelfRef.__Vcellinp__EnvSq__din;
    vlSelf->__PVT__LenSq->__PVT__addr = vlSelfRef.__Vcellinp__LenSq__addr;
    vlSelf->__PVT__EnvSq->__PVT__addr = vlSelfRef.__Vcellinp__EnvSq__addr;
    vlSelf->__PVT__LenSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
    vlSelf->__PVT__EnvSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
}
