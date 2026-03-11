// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_NoiseChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Noi(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___eval_initial__TOP__nes_core_top__nes_inst__apu__Noi\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__is_triangle = 0U;
    vlSelfRef.__PVT__noise_pal_lut[0U] = 0x0200U;
    vlSelfRef.__PVT__noise_pal_lut[1U] = 0x0280U;
    vlSelfRef.__PVT__noise_pal_lut[2U] = 0x0550U;
    vlSelfRef.__PVT__noise_pal_lut[3U] = 0x05d5U;
    vlSelfRef.__PVT__noise_pal_lut[4U] = 0x0393U;
    vlSelfRef.__PVT__noise_pal_lut[5U] = 0x074fU;
    vlSelfRef.__PVT__noise_pal_lut[6U] = 0x061bU;
    vlSelfRef.__PVT__noise_pal_lut[7U] = 0x041fU;
    vlSelfRef.__PVT__noise_pal_lut[8U] = 0x0661U;
    vlSelfRef.__PVT__noise_pal_lut[9U] = 0x01c5U;
    vlSelfRef.__PVT__noise_pal_lut[10U] = 0x06aeU;
    vlSelfRef.__PVT__noise_pal_lut[11U] = 0x0093U;
    vlSelfRef.__PVT__noise_pal_lut[12U] = 0x04feU;
    vlSelfRef.__PVT__noise_pal_lut[13U] = 0x012dU;
    vlSelfRef.__PVT__noise_pal_lut[14U] = 0x0679U;
    vlSelfRef.__PVT__noise_pal_lut[15U] = 0x0392U;
    vlSelfRef.__PVT__noise_ntsc_lut[0U] = 0x0200U;
    vlSelfRef.__PVT__noise_ntsc_lut[1U] = 0x0280U;
    vlSelfRef.__PVT__noise_ntsc_lut[2U] = 0x02a8U;
    vlSelfRef.__PVT__noise_ntsc_lut[3U] = 0x06eaU;
    vlSelfRef.__PVT__noise_ntsc_lut[4U] = 0x04e4U;
    vlSelfRef.__PVT__noise_ntsc_lut[5U] = 0x0674U;
    vlSelfRef.__PVT__noise_ntsc_lut[6U] = 0x0630U;
    vlSelfRef.__PVT__noise_ntsc_lut[7U] = 0x0730U;
    vlSelfRef.__PVT__noise_ntsc_lut[8U] = 0x04acU;
    vlSelfRef.__PVT__noise_ntsc_lut[9U] = 0x0304U;
    vlSelfRef.__PVT__noise_ntsc_lut[10U] = 0x0722U;
    vlSelfRef.__PVT__noise_ntsc_lut[11U] = 0x0230U;
    vlSelfRef.__PVT__noise_ntsc_lut[12U] = 0x0213U;
    vlSelfRef.__PVT__noise_ntsc_lut[13U] = 0x0782U;
    vlSelfRef.__PVT__noise_ntsc_lut[14U] = 6U;
    vlSelfRef.__PVT__noise_ntsc_lut[15U] = 0x0014U;
}

VL_ATTR_COLD void Vnes_core_top_NoiseChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__0(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lc = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__lc_on;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__aclk1_d 
        = vlSelfRef.__PVT__aclk1_d;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__aclk1 
        = vlSelfRef.__PVT__aclk1;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__enabled 
        = vlSelfRef.__PVT__Enabled;
    vlSelfRef.__PVT__Envelope = vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__envelope;
    vlSelfRef.__PVT__IsNonZero = vlSelfRef.__PVT__lc;
    vlSelfRef.__PVT__Sample = ((1U & ((~ (IData)(vlSelfRef.__PVT__lc)) 
                                      | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__Shift), 0x0eU)))
                                ? 0U : (IData)(vlSelfRef.__PVT__Envelope));
}

VL_ATTR_COLD void Vnes_core_top_NoiseChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__1(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_NoiseChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__2(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___stl_sequent__TOP__nes_core_top__nes_inst__apu__Noi__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__LenNoi__halt_in = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 5U));
    vlSelfRef.__Vcellinp__EnvNoi__din = (0x0000003fU 
                                         & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__DIN), 0U, 6));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__load_value 
        = vlSelfRef.__PVT__lc_load;
    vlSelfRef.__Vcellinp__LenNoi__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSelfRef.__Vcellinp__EnvNoi__addr = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__Addr), 0U));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__LenNoi.__PVT__len_clk 
        = vlSelfRef.__PVT__LenCtr_Clock;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Noi__EnvNoi.__PVT__env_clk 
        = vlSelfRef.__PVT__Env_Clock;
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

VL_ATTR_COLD void Vnes_core_top_NoiseChan___ctor_var_reset(Vnes_core_top_NoiseChan* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_NoiseChan___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__aclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874142104224401774ull);
    vlSelf->__PVT__aclk1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17132189197396772515ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__Addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11431796577763697799ull);
    vlSelf->__PVT__DIN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8165808950731919723ull);
    vlSelf->__PVT__PAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15568346935915704965ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__lc_load = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5534629435928922586ull);
    vlSelf->__PVT__LenCtr_Clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10895322105101661190ull);
    vlSelf->__PVT__Env_Clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15953158291593417081ull);
    vlSelf->__PVT__Enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1523862819411814026ull);
    vlSelf->__PVT__Sample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4658883583127319325ull);
    vlSelf->__PVT__IsNonZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7117364141142730080ull);
    vlSelf->__PVT__ShortMode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15559931488887046696ull);
    vlSelf->__PVT__Shift = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10934108124362684570ull);
    vlSelf->__PVT__Period = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17136591538500772590ull);
    vlSelf->__PVT__Envelope = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13973348108612840920ull);
    vlSelf->__PVT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15093523069074929757ull);
    vlSelf->__PVT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 320489813128309691ull);
    vlSelf->__Vcellinp__LenNoi__addr = 0;
    vlSelf->__Vcellinp__LenNoi__halt_in = 0;
    vlSelf->__Vcellinp__EnvNoi__addr = 0;
    vlSelf->__Vcellinp__EnvNoi__din = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__noise_pal_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13151729014449680236ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__noise_ntsc_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11761028997295716295ull);
    }
    vlSelf->__PVT__noise_timer = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2459755787569188258ull);
    vlSelf->__PVT__noise_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1767189524402468457ull);
    vlSelf->__Vdly__noise_timer = 0;
    vlSelf->__Vdly__noise_clock = 0;
    vlSelf->__Vdly__Shift = 0;
    vlSelf->__Vdly__ShortMode = 0;
    vlSelf->__Vdly__Period = 0;
}
