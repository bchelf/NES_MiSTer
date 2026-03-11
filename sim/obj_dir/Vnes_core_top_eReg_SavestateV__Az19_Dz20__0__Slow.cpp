// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_eReg_SavestateV__Az19_Dz20___eval_static__TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3(Vnes_core_top_eReg_SavestateV__Az19_Dz20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az19_Dz20___eval_static__TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dout_r = 0x080214032c240d01ULL;
}

VL_ATTR_COLD void Vnes_core_top_eReg_SavestateV__Az19_Dz20___stl_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3__0(Vnes_core_top_eReg_SavestateV__Az19_Dz20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az19_Dz20___stl_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Dout = vlSelfRef.__PVT__dout_r;
}

VL_ATTR_COLD void Vnes_core_top_eReg_SavestateV__Az19_Dz20___stl_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3__1(Vnes_core_top_eReg_SavestateV__Az19_Dz20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az19_Dz20___stl_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__BUS_Dout = ((0x000aU == (IData)(vlSelfRef.__PVT__BUS_Adr))
                                  ? vlSelfRef.__PVT__Din
                                  : 0ULL);
}

VL_ATTR_COLD void Vnes_core_top_eReg_SavestateV__Az19_Dz20___ctor_var_reset(Vnes_core_top_eReg_SavestateV__Az19_Dz20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az19_Dz20___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__BUS_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13598017407245669262ull);
    vlSelf->__PVT__BUS_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16603433034645341190ull);
    vlSelf->__PVT__BUS_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11394164693920454426ull);
    vlSelf->__PVT__BUS_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3275790117773076912ull);
    vlSelf->__PVT__BUS_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3786246471585276152ull);
    vlSelf->__PVT__Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9141223672684087197ull);
    vlSelf->__PVT__Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15704708257054531514ull);
    vlSelf->__Vdly__dout_r = 0;
}
