// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_debug_dots___stl_sequent__TOP__nes_core_top__nes_inst__ppu__debug_d__0(Vnes_core_top_debug_dots* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_debug_dots___stl_sequent__TOP__nes_core_top__nes_inst__ppu__debug_d__0\n"); );
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

VL_ATTR_COLD void Vnes_core_top_debug_dots___ctor_var_reset(Vnes_core_top_debug_dots* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_debug_dots___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__color = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 465961873555653160ull);
    vlSelf->__PVT__custom1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8774563440650675048ull);
    vlSelf->__PVT__custom2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7461297666175535586ull);
    vlSelf->__PVT__w2000 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3689232593796606708ull);
    vlSelf->__PVT__w2001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1337000940616319750ull);
    vlSelf->__PVT__r2002 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3858239646736814470ull);
    vlSelf->__PVT__w2003 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17509828834719204782ull);
    vlSelf->__PVT__r2004 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587550508507606314ull);
    vlSelf->__PVT__w2004 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9065131539055937719ull);
    vlSelf->__PVT__w2005 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12416347778237305895ull);
    vlSelf->__PVT__w2006 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539998210285627007ull);
    vlSelf->__PVT__r2007 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10617719884073926914ull);
    vlSelf->__PVT__w2007 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8187766557105323969ull);
    vlSelf->__PVT__new_color = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9058573761841068353ull);
}
