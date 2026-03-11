// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_TriangleChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Tri(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Tri\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__is_triangle = 1U;
}

VL_ATTR_COLD void Vnes_core_top_TriangleChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Tri__0(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Tri__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__LinCtrZero = (1U & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__LinCtr))));
    vlSelfRef.__PVT__lc = vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__lc_on;
    vlSelfRef.__PVT__Sample = (0x0000000fU & (((1U 
                                                < (IData)(vlSelfRef.__PVT__applied_period)) 
                                               | (IData)(vlSelfRef.__PVT__allow_us))
                                               ? (VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__SeqPos), 0U, 4) 
                                                  ^ VL_REPLICATE_IOI(1, 
                                                                     (1U 
                                                                      & (~ 
                                                                         VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__SeqPos), 4U))), 4U))
                                               : (IData)(vlSelfRef.__PVT__sample_latch)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_d;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__enabled 
        = vlSelfRef.__PVT__Enabled;
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
}

VL_ATTR_COLD void Vnes_core_top_TriangleChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Tri__1(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Tri__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
}

VL_ATTR_COLD void Vnes_core_top_TriangleChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Tri__2(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Tri__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenTri__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 7U));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__load_value 
        = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenTri__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Tri__LenTri.__PVT__len_clk 
        = vlSelfRef.__PVT__LenCtr_Clock;
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

VL_ATTR_COLD void Vnes_core_top_TriangleChan___ctor_var_reset(Vnes_core_top_TriangleChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_TriangleChan___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__phi1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322190517738230497ull);
    vlSelf->__PVT__aclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874142104224401774ull);
    vlSelf->__PVT__aclk1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17132189197396772515ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__allow_us = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13458428841343595221ull);
    vlSelf->__PVT__Addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11431796577763697799ull);
    vlSelf->__PVT__DIN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8165808950731919723ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__lc_load = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5534629435928922586ull);
    vlSelf->__PVT__LenCtr_Clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10895322105101661190ull);
    vlSelf->__PVT__LinCtr_Clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4241458458286912472ull);
    vlSelf->__PVT__Enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1523862819411814026ull);
    vlSelf->__PVT__Sample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4658883583127319325ull);
    vlSelf->__PVT__IsNonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7117364141142730080ull);
    vlSelf->__PVT__Period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17136591538500772590ull);
    vlSelf->__PVT__applied_period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8920175908736393232ull);
    vlSelf->__PVT__TimerCtr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12822169922645343947ull);
    vlSelf->__PVT__SeqPos = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3474882656088689835ull);
    vlSelf->__PVT__LinCtrPeriod = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 271044546030162530ull);
    vlSelf->__PVT__LinCtrPeriod_1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1353539802747734598ull);
    vlSelf->__PVT__LinCtr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14943890838218148726ull);
    vlSelf->__PVT__LinCtrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5360692239062511159ull);
    vlSelf->__PVT__line_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3550685575971218872ull);
    vlSelf->__PVT__LinCtrZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5297688660448315360ull);
    vlSelf->__PVT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 320489813128309691ull);
    vlSelf->__PVT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15093523069074929757ull);
    vlSelf->__PVT__sample_latch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11860397505277454395ull);
    vlSelf->__Vcellinp__LenTri__addr = 0;
    vlSelf->__Vcellinp__LenTri__halt_in = 0;
    vlSelf->__Vdly__TimerCtr = 0;
    vlSelf->__Vdly__applied_period = 0;
    vlSelf->__Vdly__SeqPos = 0;
    vlSelf->__Vdly__LinCtrPeriod_1 = 0;
    vlSelf->__Vdly__LinCtr = 0;
    vlSelf->__Vdly__line_reload = 0;
    vlSelf->__Vdly__LinCtrl = 0;
    vlSelf->__Vdly__LinCtrPeriod = 0;
    vlSelf->__Vdly__Period = 0;
    vlSelf->__Vdly__sample_latch = 0;
}
