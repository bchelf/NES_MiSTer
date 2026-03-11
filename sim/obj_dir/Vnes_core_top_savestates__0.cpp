// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_savestates___ico_sequent__TOP__nes_core_top__nes_inst__savestates__0(Vnes_core_top_savestates* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_savestates___ico_sequent__TOP__nes_core_top__nes_inst__savestates__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reset_ss = vlSelfRef.__PVT__reset_in;
    vlSelfRef.__PVT__reset_delay = vlSelfRef.__PVT__reset_in;
    vlSelfRef.__PVT__load_done = 0U;
    vlSelfRef.__PVT__savestate_busy = 0U;
    vlSelfRef.__PVT__BUS_Din = 0ULL;
    vlSelfRef.__PVT__BUS_Adr = 0U;
    vlSelfRef.__PVT__BUS_wren = 0U;
    vlSelfRef.__PVT__BUS_rst = 0U;
    vlSelfRef.__PVT__loading_savestate = 0U;
    vlSelfRef.__PVT__saving_savestate = 0U;
    vlSelfRef.__PVT__sleep_savestate = 0U;
    vlSelfRef.__PVT__Save_RAMAddr = 0U;
    vlSelfRef.__PVT__Save_RAMRdEn = 0U;
    vlSelfRef.__PVT__Save_RAMWrEn = 0U;
    vlSelfRef.__PVT__Save_RAMWriteData = 0U;
    vlSelfRef.__PVT__Save_RAMType = 0U;
    vlSelfRef.__PVT__bus_out_Din = 0ULL;
    vlSelfRef.__PVT__bus_out_Adr = 0U;
    vlSelfRef.__PVT__bus_out_rnw = 0U;
    vlSelfRef.__PVT__bus_out_ena = 0U;
    vlSelfRef.__PVT__bus_out_be = 0U;
}
