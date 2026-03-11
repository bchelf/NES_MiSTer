// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_SquareChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Squ1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Squ1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__is_triangle = 0U;
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__lc = vlSelf->__PVT__LenSq->__PVT__lc_on;
    vlSelf->__PVT__LenSq->__PVT__aclk1_d = vlSelfRef.__PVT__aclk1_d;
    vlSelf->__PVT__LenSq->__PVT__aclk1 = vlSelfRef.__PVT__aclk1;
    vlSelf->__PVT__LenSq->__PVT__enabled = vlSelfRef.__PVT__Enabled;
    vlSelfRef.__PVT__DutyEnabledUsed = ((IData)(vlSelfRef.__PVT__MMC5) 
                                        ^ (IData)(vlSelfRef.__PVT__DutyEnabled));
    vlSelfRef.__PVT__PeriodRhs = (0x000007ffU & ((IData)(vlSelfRef.__PVT__SweepNegate)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__ShiftedPeriod)) 
                                                  + 
                                                  VL_EXTEND_II(11,1, (IData)(vlSelfRef.__PVT__sq2)))
                                                  : (IData)(vlSelfRef.__PVT__ShiftedPeriod)));
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
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

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Envelope = vlSelf->__PVT__EnvSq->__PVT__envelope;
    vlSelfRef.__PVT__Sample = ((1U & (((~ (IData)(vlSelfRef.__PVT__lc)) 
                                       | (~ (IData)(vlSelfRef.__PVT__ValidFreq))) 
                                      | (~ (IData)(vlSelfRef.__PVT__DutyEnabledUsed))))
                                ? 0U : (IData)(vlSelfRef.__PVT__Envelope));
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__EnvSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__LenSq->__PVT__cold_reset = vlSelfRef.__PVT__cold_reset;
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__3(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenSq__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 5U));
    vlSelfRef.__Vcellinp__EnvSq__din = (0x0000003fU 
                                        & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 6));
    vlSelf->__PVT__LenSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__EnvSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__LenSq->__PVT__load_value = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__Vcellinp__EnvSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelf->__PVT__EnvSq->__PVT__env_clk = vlSelfRef.__PVT__Env_Clock;
    vlSelfRef.__Vcellinp__LenSq__len_clk = ((IData)(vlSelfRef.__PVT__MMC5)
                                             ? (IData)(vlSelfRef.__PVT__Env_Clock)
                                             : (IData)(vlSelfRef.__PVT__LenCtr_Clock));
    vlSelfRef.__PVT__subunit_write = (((0U == (IData)(vlSelfRef.__PVT__Addr)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__Addr))) 
                                      & (IData)(vlSelfRef.__PVT__write));
    vlSelf->__PVT__LenSq->__PVT__halt_in = vlSelfRef.__Vcellinp__LenSq__halt_in;
    vlSelf->__PVT__EnvSq->__PVT__din = vlSelfRef.__Vcellinp__EnvSq__din;
    vlSelf->__PVT__LenSq->__PVT__addr = vlSelfRef.__Vcellinp__LenSq__addr;
    vlSelf->__PVT__EnvSq->__PVT__addr = vlSelfRef.__Vcellinp__EnvSq__addr;
    vlSelf->__PVT__LenSq->__PVT__len_clk = vlSelfRef.__Vcellinp__LenSq__len_clk;
    vlSelf->__PVT__LenSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
    vlSelf->__PVT__EnvSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Squ2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Squ2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__is_triangle = 0U;
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__0(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__lc = vlSelf->__PVT__LenSq->__PVT__lc_on;
    vlSelf->__PVT__LenSq->__PVT__aclk1_d = vlSelfRef.__PVT__aclk1_d;
    vlSelf->__PVT__LenSq->__PVT__aclk1 = vlSelfRef.__PVT__aclk1;
    vlSelf->__PVT__LenSq->__PVT__enabled = vlSelfRef.__PVT__Enabled;
    vlSelfRef.__PVT__DutyEnabledUsed = ((IData)(vlSelfRef.__PVT__MMC5) 
                                        ^ (IData)(vlSelfRef.__PVT__DutyEnabled));
    vlSelfRef.__PVT__PeriodRhs = (0x000007ffU & ((IData)(vlSelfRef.__PVT__SweepNegate)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__ShiftedPeriod)) 
                                                  + 
                                                  VL_EXTEND_II(11,1, (IData)(vlSelfRef.__PVT__sq2)))
                                                  : (IData)(vlSelfRef.__PVT__ShiftedPeriod)));
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
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

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__1(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Envelope = vlSelf->__PVT__EnvSq->__PVT__envelope;
    vlSelfRef.__PVT__Sample = ((1U & (((~ (IData)(vlSelfRef.__PVT__lc)) 
                                       | (~ (IData)(vlSelfRef.__PVT__ValidFreq))) 
                                      | (~ (IData)(vlSelfRef.__PVT__DutyEnabledUsed))))
                                ? 0U : (IData)(vlSelfRef.__PVT__Envelope));
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__2(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__LenSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__EnvSq->__PVT__clk = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__LenSq->__PVT__cold_reset = vlSelfRef.__PVT__cold_reset;
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__3(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenSq__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 5U));
    vlSelfRef.__Vcellinp__EnvSq__din = (0x0000003fU 
                                        & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 6));
    vlSelf->__PVT__LenSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__EnvSq->__PVT__reset = vlSelfRef.__PVT__reset;
    vlSelf->__PVT__LenSq->__PVT__load_value = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__Vcellinp__EnvSq__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelf->__PVT__EnvSq->__PVT__env_clk = vlSelfRef.__PVT__Env_Clock;
    vlSelfRef.__Vcellinp__LenSq__len_clk = ((IData)(vlSelfRef.__PVT__MMC5)
                                             ? (IData)(vlSelfRef.__PVT__Env_Clock)
                                             : (IData)(vlSelfRef.__PVT__LenCtr_Clock));
    vlSelfRef.__PVT__subunit_write = (((0U == (IData)(vlSelfRef.__PVT__Addr)) 
                                       | (3U == (IData)(vlSelfRef.__PVT__Addr))) 
                                      & (IData)(vlSelfRef.__PVT__write));
    vlSelf->__PVT__LenSq->__PVT__halt_in = vlSelfRef.__Vcellinp__LenSq__halt_in;
    vlSelf->__PVT__EnvSq->__PVT__din = vlSelfRef.__Vcellinp__EnvSq__din;
    vlSelf->__PVT__LenSq->__PVT__addr = vlSelfRef.__Vcellinp__LenSq__addr;
    vlSelf->__PVT__EnvSq->__PVT__addr = vlSelfRef.__Vcellinp__EnvSq__addr;
    vlSelf->__PVT__LenSq->__PVT__len_clk = vlSelfRef.__Vcellinp__LenSq__len_clk;
    vlSelf->__PVT__LenSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
    vlSelf->__PVT__EnvSq->__PVT__write = vlSelfRef.__PVT__subunit_write;
}

VL_ATTR_COLD void Vnes_core_top_SquareChan___ctor_var_reset(Vnes_core_top_SquareChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SquareChan___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__MMC5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981470898745018067ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__aclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874142104224401774ull);
    vlSelf->__PVT__aclk1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17132189197396772515ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__allow_us = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13458428841343595221ull);
    vlSelf->__PVT__sq2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3714869029210062705ull);
    vlSelf->__PVT__Addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11431796577763697799ull);
    vlSelf->__PVT__DIN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8165808950731919723ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__lc_load = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5534629435928922586ull);
    vlSelf->__PVT__LenCtr_Clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10895322105101661190ull);
    vlSelf->__PVT__Env_Clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15953158291593417081ull);
    vlSelf->__PVT__get_or_put = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673809810432003319ull);
    vlSelf->__PVT__Enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1523862819411814026ull);
    vlSelf->__PVT__Sample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4658883583127319325ull);
    vlSelf->__PVT__IsNonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7117364141142730080ull);
    vlSelf->__PVT__Duty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3304562359501237278ull);
    vlSelf->__PVT__SweepEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13546060945944067283ull);
    vlSelf->__PVT__SweepNegate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13938171556279034882ull);
    vlSelf->__PVT__SweepReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14741907803081520637ull);
    vlSelf->__PVT__SweepPeriod = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12856502510787275107ull);
    vlSelf->__PVT__SweepDivider = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9243464740733540891ull);
    vlSelf->__PVT__SweepShift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5503127397518762607ull);
    vlSelf->__PVT__Period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17136591538500772590ull);
    vlSelf->__PVT__TimerCtr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12822169922645343947ull);
    vlSelf->__PVT__SeqPos = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3474882656088689835ull);
    vlSelf->__PVT__ShiftedPeriod = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14706937083430682167ull);
    vlSelf->__PVT__PeriodRhs = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 313862811898301971ull);
    vlSelf->__PVT__NewSweepPeriod = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3745389298738799352ull);
    vlSelf->__PVT__ValidFreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17675175433247755670ull);
    vlSelf->__PVT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15093523069074929757ull);
    vlSelf->__PVT__Envelope = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13973348108612840920ull);
    vlSelf->__PVT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 320489813128309691ull);
    vlSelf->__PVT__DutyEnabledUsed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 856093697498570020ull);
    vlSelf->__PVT__DutyEnabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16607873572566384268ull);
    vlSelf->__Vcellinp__LenSq__addr = 0;
    vlSelf->__Vcellinp__LenSq__halt_in = 0;
    vlSelf->__Vcellinp__LenSq__len_clk = 0;
    vlSelf->__Vcellinp__EnvSq__addr = 0;
    vlSelf->__Vcellinp__EnvSq__din = 0;
    vlSelf->__Vdly__TimerCtr = 0;
    vlSelf->__Vdly__SeqPos = 0;
    vlSelf->__Vdly__SweepDivider = 0;
    vlSelf->__Vdly__Period = 0;
    vlSelf->__Vdly__SweepReset = 0;
    vlSelf->__Vdly__Duty = 0;
    vlSelf->__Vdly__SweepEnable = 0;
    vlSelf->__Vdly__SweepPeriod = 0;
    vlSelf->__Vdly__SweepNegate = 0;
    vlSelf->__Vdly__SweepShift = 0;
}
