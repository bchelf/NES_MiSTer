// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__0(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Pwr_n 
        = vlSelfRef.__PVT__pwr_n;
}

void Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__1(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__SaveStateBus_load;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__IRQ_n 
        = vlSelfRef.__PVT__IRQ_n;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Res_n 
        = vlSelfRef.__PVT__res_n;
}

void Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__2(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__DI 
        = vlSelfRef.__PVT__DI;
}

void Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__3(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___ico_sequent__TOP__nes_core_top__nes_inst__cpu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Dout;
}

void Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__0(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Enable 
        = vlSelfRef.__PVT__enable;
}

void Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__1(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__NMI_n 
        = vlSelfRef.__PVT__NMI_n;
}

void Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__2(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__rw_n_prev = vlSelfRef.__PVT__rw_n_prev;
    vlSelfRef.__Vdly__rw_n_prev = (1U & ((~ (IData)(vlSelfRef.__PVT__pwr_n)) 
                                         | ((~ (IData)(vlSelfRef.__PVT__res_n)) 
                                            | (IData)(vlSelfRef.__PVT__rw_n_i))));
    vlSelfRef.__PVT__rw_n_prev = vlSelfRef.__Vdly__rw_n_prev;
}

void Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__3(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rw_n_i = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__R_W_n;
    vlSelfRef.__PVT__do_i = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__DO;
    vlSelfRef.__PVT__R_W_n = vlSelfRef.__PVT__rw_n_i;
    vlSelfRef.__PVT__DO = vlSelfRef.__PVT__do_i;
}

void Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__4(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__a24_i = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__A;
    vlSelfRef.__PVT__Instrnew = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Instrnew;
    vlSelfRef.__PVT__A = (0x0000ffffU & VL_SEL_IIII(24, vlSelfRef.__PVT__a24_i, 0U, 16));
}

void Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__5(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_sequent__TOP__nes_core_top__nes_inst__cpu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Res_n 
        = vlSelfRef.__PVT__res_n;
}

void Vnes_core_top_T65___nba_comb__TOP__nes_core_top__nes_inst__cpu__0(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_comb__TOP__nes_core_top__nes_inst__cpu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdy_i = (1U & ((IData)(vlSelfRef.__PVT__rdy) 
                                    | (~ (IData)(vlSelfRef.__PVT__rw_n_i))));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Rdy 
        = vlSelfRef.__PVT__rdy_i;
}

void Vnes_core_top_T65___nba_comb__TOP__nes_core_top__nes_inst__cpu__1(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_comb__TOP__nes_core_top__nes_inst__cpu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__IRQ_n 
        = vlSelfRef.__PVT__IRQ_n;
}

void Vnes_core_top_T65___nba_comb__TOP__nes_core_top__nes_inst__cpu__2(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___nba_comb__TOP__nes_core_top__nes_inst__cpu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__DI 
        = vlSelfRef.__PVT__DI;
}
