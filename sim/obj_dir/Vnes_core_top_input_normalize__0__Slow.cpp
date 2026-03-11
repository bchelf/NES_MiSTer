// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_input_normalize___stl_sequent__TOP__nes_core_top__input_normalize_inst__0(Vnes_core_top_input_normalize* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_input_normalize___stl_sequent__TOP__nes_core_top__input_normalize_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(8, 3, 0U, vlSelfRef.__PVT__p1_norm, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 2U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 1U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 0U)))));
    VL_ASSIGNSEL_II(8, 3, 3U, vlSelfRef.__PVT__p1_norm, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 5U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 4U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 3U)))));
    VL_ASSIGNSEL_II(8, 2, 6U, vlSelfRef.__PVT__p1_norm, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 7U)), 
                                  (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p1_raw), 6U))));
    VL_ASSIGNSEL_II(8, 3, 0U, vlSelfRef.__PVT__p2_norm, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 2U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 1U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 0U)))));
    VL_ASSIGNSEL_II(8, 3, 3U, vlSelfRef.__PVT__p2_norm, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 5U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 4U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 3U)))));
    VL_ASSIGNSEL_II(8, 2, 6U, vlSelfRef.__PVT__p2_norm, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 7U)), 
                                  (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p2_raw), 6U))));
}

VL_ATTR_COLD void Vnes_core_top_input_normalize___ctor_var_reset(Vnes_core_top_input_normalize* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_input_normalize___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__p1_raw = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3469830462043911921ull);
    vlSelf->__PVT__p2_raw = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14755197201188998480ull);
    vlSelf->__PVT__p1_norm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16903033423412745279ull);
    vlSelf->__PVT__p2_norm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7608357010677147775ull);
}
