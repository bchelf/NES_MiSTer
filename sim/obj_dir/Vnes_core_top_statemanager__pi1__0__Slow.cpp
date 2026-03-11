// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_statemanager__pi1___eval_initial__TOP__nes_core_top__nes_inst__statemanager(Vnes_core_top_statemanager__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_statemanager__pi1___eval_initial__TOP__nes_core_top__nes_inst__statemanager\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sleep_rewind = 0U;
    vlSelfRef.__PVT__request_savestate = 0U;
    vlSelfRef.__PVT__request_loadstate = 0U;
    vlSelfRef.__PVT__request_address = 0U;
}

VL_ATTR_COLD void Vnes_core_top_statemanager__pi1___ctor_var_reset(Vnes_core_top_statemanager__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_statemanager__pi1___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__rewind_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12717476485017197122ull);
    vlSelf->__PVT__rewind_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 291182965923927571ull);
    vlSelf->__PVT__savestate_number = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11330586379740218870ull);
    vlSelf->__PVT__save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6940317727511027048ull);
    vlSelf->__PVT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1148748992964133306ull);
    vlSelf->__PVT__sleep_rewind = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6854157354993652420ull);
    vlSelf->__PVT__vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->__PVT__request_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3880153163905291674ull);
    vlSelf->__PVT__request_loadstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10380673913833985853ull);
    vlSelf->__PVT__request_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1651968373515292879ull);
    vlSelf->__PVT__request_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16749978589070217096ull);
}
