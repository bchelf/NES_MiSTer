// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_eReg_SavestateV__Az1___ico_sequent__TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP__0(Vnes_core_top_eReg_SavestateV__Az1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az1___ico_sequent__TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__BUS_Dout = ((0x0010U == (IData)(vlSelfRef.__PVT__BUS_Adr))
                                  ? vlSelfRef.__PVT__Din
                                  : 0ULL);
}

void Vnes_core_top_eReg_SavestateV__Az1___nba_sequent__TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP__0(Vnes_core_top_eReg_SavestateV__Az1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az1___nba_sequent__TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__BUS_Dout = ((0x0010U == (IData)(vlSelfRef.__PVT__BUS_Adr))
                                  ? vlSelfRef.__PVT__Din
                                  : 0ULL);
}

void Vnes_core_top_eReg_SavestateV__Az1___nba_sequent__TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP__1(Vnes_core_top_eReg_SavestateV__Az1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_eReg_SavestateV__Az1___nba_sequent__TOP__nes_core_top__nes_inst__apu__iREG_SAVESTATE_APU_TOP__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dout_r = vlSelfRef.__PVT__dout_r;
    if (vlSelfRef.__PVT__BUS_rst) {
        vlSelfRef.__Vdly__dout_r = 0ULL;
    } else if (((IData)(vlSelfRef.__PVT__BUS_wren) 
                & (0x0010U == (IData)(vlSelfRef.__PVT__BUS_Adr)))) {
        vlSelfRef.__Vdly__dout_r = vlSelfRef.__PVT__BUS_Din;
    }
    vlSelfRef.__PVT__dout_r = vlSelfRef.__Vdly__dout_r;
    vlSelfRef.__PVT__Dout = vlSelfRef.__PVT__dout_r;
}
