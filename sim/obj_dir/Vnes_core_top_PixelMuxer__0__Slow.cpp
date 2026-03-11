// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_PixelMuxer___stl_sequent__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__0(Vnes_core_top_PixelMuxer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PixelMuxer___stl_sequent__TOP__nes_core_top__nes_inst__ppu__pixel_muxer__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg_valid = VL_REDOR_I((3U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg), 0U, 2)));
    vlSelfRef.__PVT__obj_valid = VL_REDOR_I((3U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__obj), 0U, 2)));
    vlSelfRef.__PVT__is_obj = ((IData)(vlSelfRef.__PVT__obj_valid) 
                               & (~ ((IData)(vlSelfRef.__PVT__obj_prio) 
                                     & (IData)(vlSelfRef.__PVT__bg_valid))));
    vlSelfRef.__PVT__out = (((IData)(vlSelfRef.__PVT__bg_valid) 
                             | (IData)(vlSelfRef.__PVT__obj_valid))
                             ? ((IData)(vlSelfRef.__PVT__is_obj)
                                 ? VL_CONCAT_III(5,1,4, 1U, (IData)(vlSelfRef.__PVT__obj))
                                 : VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__bg)))
                             : 0U);
}

VL_ATTR_COLD void Vnes_core_top_PixelMuxer___ctor_var_reset(Vnes_core_top_PixelMuxer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PixelMuxer___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__bg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2585883641122922046ull);
    vlSelf->__PVT__obj = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7366673498037863690ull);
    vlSelf->__PVT__obj_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15296568115452408210ull);
    vlSelf->__PVT__out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7519490245117619040ull);
    vlSelf->__PVT__is_obj = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16942662676791982506ull);
    vlSelf->__PVT__bg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12507556849423978164ull);
    vlSelf->__PVT__obj_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5023206706592224108ull);
}
