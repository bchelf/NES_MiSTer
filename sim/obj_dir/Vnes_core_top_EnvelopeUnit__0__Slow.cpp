// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___eval_static__TOP__nes_core_top__nes_inst__apu__Squ1__EnvSq(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___eval_static__TOP__nes_core_top__nes_inst__apu__Squ1__EnvSq\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15110653456138013327ull);
    vlSelf->__PVT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10224888727895357022ull);
    vlSelf->__PVT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 244479624510654020ull);
    vlSelf->__PVT__envunit__DOT__env_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5275038686556399018ull);
}

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__EnvSq__0(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ1__EnvSq__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__envelope = ((IData)(vlSelfRef.__PVT__env_disabled)
                                  ? (IData)(vlSelfRef.__PVT__env_vol)
                                  : (IData)(vlSelfRef.__PVT__env_count));
}

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___eval_static__TOP__nes_core_top__nes_inst__apu__Squ2__EnvSq(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___eval_static__TOP__nes_core_top__nes_inst__apu__Squ2__EnvSq\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15110653456138013327ull);
    vlSelf->__PVT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10224888727895357022ull);
    vlSelf->__PVT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 244479624510654020ull);
    vlSelf->__PVT__envunit__DOT__env_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5275038686556399018ull);
}

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__EnvSq__0(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___stl_sequent__TOP__nes_core_top__nes_inst__apu__Squ2__EnvSq__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__envelope = ((IData)(vlSelfRef.__PVT__env_disabled)
                                  ? (IData)(vlSelfRef.__PVT__env_vol)
                                  : (IData)(vlSelfRef.__PVT__env_count));
}

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___eval_static__TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___eval_static__TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15110653456138013327ull);
    vlSelf->__PVT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10224888727895357022ull);
    vlSelf->__PVT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 244479624510654020ull);
    vlSelf->__PVT__envunit__DOT__env_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5275038686556399018ull);
}

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi__0(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__envelope = ((IData)(vlSelfRef.__PVT__env_disabled)
                                  ? (IData)(vlSelfRef.__PVT__env_vol)
                                  : (IData)(vlSelfRef.__PVT__env_count));
}

VL_ATTR_COLD void Vnes_core_top_EnvelopeUnit___ctor_var_reset(Vnes_core_top_EnvelopeUnit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_EnvelopeUnit___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__env_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098884414295681718ull);
    vlSelf->__PVT__din = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15192908731043726583ull);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__envelope = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16929131332744732125ull);
    vlSelf->__PVT__env_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16558387802380286463ull);
    vlSelf->__PVT__env_vol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1229408920951560875ull);
    vlSelf->__PVT__env_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1771557404056683371ull);
    vlSelf->__Vdly__envunit__DOT__env_div = 0;
    vlSelf->__Vdly__env_count = 0;
    vlSelf->__Vdly__envunit__DOT__env_reload = 0;
    vlSelf->__Vdly__envunit__DOT__env_loop = 0;
    vlSelf->__Vdly__env_disabled = 0;
    vlSelf->__Vdly__env_vol = 0;
}
