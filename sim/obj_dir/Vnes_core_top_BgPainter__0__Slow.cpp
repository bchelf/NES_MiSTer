// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_BgPainter___eval_initial__TOP__nes_core_top__nes_inst__ppu__bg_painter(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___eval_initial__TOP__nes_core_top__nes_inst__ppu__bg_painter\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__playfield_pipe_1 = 0U;
    vlSelfRef.__PVT__playfield_pipe_2 = 0U;
    vlSelfRef.__PVT__playfield_pipe_3 = 0U;
    vlSelfRef.__PVT__playfield_pipe_4 = 0U;
    vlSelfRef.__PVT__current_name_table = 0U;
    vlSelfRef.__PVT__current_attribute_table = 0U;
    vlSelfRef.__PVT__bg0 = 0U;
}

VL_ATTR_COLD void Vnes_core_top_BgPainter___stl_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__0(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___stl_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__name_table = vlSelfRef.__PVT__current_name_table;
}

VL_ATTR_COLD void Vnes_core_top_BgPainter___stl_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__1(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___stl_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i = VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__fine_x_scroll));
    vlSelfRef.__PVT__pixel = VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, 
                                                                ((8U 
                                                                  >= (IData)(vlSelfRef.__PVT__i)) 
                                                                 && (1U 
                                                                     & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__playfield_pipe_4), (IData)(vlSelfRef.__PVT__i)))), 
                                                                ((8U 
                                                                  >= (IData)(vlSelfRef.__PVT__i)) 
                                                                 && (1U 
                                                                     & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__playfield_pipe_3), (IData)(vlSelfRef.__PVT__i))))), 
                                           VL_CONCAT_III(2,1,1, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__playfield_pipe_2), (IData)(vlSelfRef.__PVT__i))), 
                                                         (1U 
                                                          & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__playfield_pipe_1), (IData)(vlSelfRef.__PVT__i)))));
}

VL_ATTR_COLD void Vnes_core_top_BgPainter___stl_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__2(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___stl_sequent__TOP__nes_core_top__nes_inst__ppu__bg_painter__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bg1 = vlSelfRef.__PVT__vram_data;
}

VL_ATTR_COLD void Vnes_core_top_BgPainter___ctor_var_reset(Vnes_core_top_BgPainter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_BgPainter___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__pclk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3981506145831982167ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__latch_nametable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 723519181011329382ull);
    vlSelf->__PVT__latch_attrtable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8506287286505028447ull);
    vlSelf->__PVT__latch_pattern1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13778769171019914608ull);
    vlSelf->__PVT__latch_pattern2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15561808779237801806ull);
    vlSelf->__PVT__fine_x_scroll = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 223026050135352908ull);
    vlSelf->__PVT__vram_v = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10003602513780302477ull);
    vlSelf->__PVT__name_table = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7454705933812334166ull);
    vlSelf->__PVT__vram_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2088857008593821939ull);
    vlSelf->__PVT__pixel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10711155561333107431ull);
    vlSelf->__PVT__playfield_pipe_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7698405537640139386ull);
    vlSelf->__PVT__playfield_pipe_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11650664616863469200ull);
    vlSelf->__PVT__playfield_pipe_3 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14153920533591191187ull);
    vlSelf->__PVT__playfield_pipe_4 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7844876040279258410ull);
    vlSelf->__PVT__current_name_table = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12381610094681327200ull);
    vlSelf->__PVT__current_attribute_table = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8206848859695793221ull);
    vlSelf->__PVT__bg0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8146317926743868273ull);
    vlSelf->__PVT__bg1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9437318336470835132ull);
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15817570140490810055ull);
    vlSelf->__Vdly__current_name_table = 0;
    vlSelf->__Vdly__current_attribute_table = 0;
    vlSelf->__Vdly__bg0 = 0;
    vlSelf->__Vdly__playfield_pipe_1 = 0;
    vlSelf->__Vdly__playfield_pipe_2 = 0;
    vlSelf->__Vdly__playfield_pipe_3 = 0;
    vlSelf->__Vdly__playfield_pipe_4 = 0;
}
