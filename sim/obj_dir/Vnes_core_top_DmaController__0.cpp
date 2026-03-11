// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_DmaController___nba_sequent__TOP__nes_core_top__nes_inst__dma__0(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___nba_sequent__TOP__nes_core_top__nes_inst__dma__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__read = (1U & (~ (IData)(vlSelfRef.__PVT__put_cycle)));
}

void Vnes_core_top_DmaController___nba_sequent__TOP__nes_core_top__nes_inst__dma__1(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___nba_sequent__TOP__nes_core_top__nes_inst__dma__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__spr_state = vlSelfRef.__PVT__spr_state;
    vlSelfRef.__Vdly__dmc_state = vlSelfRef.__PVT__dmc_state;
    vlSelfRef.__Vdly__sprite_dma_lastval = vlSelfRef.__PVT__sprite_dma_lastval;
    vlSelfRef.__Vdly__sprite_dma_addr = vlSelfRef.__PVT__sprite_dma_addr;
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__dmc_state = 0U;
        vlSelfRef.__Vdly__spr_state = 0U;
        vlSelfRef.__Vdly__sprite_dma_lastval = 0U;
        vlSelfRef.__Vdly__sprite_dma_addr = 0U;
    } else if (vlSelfRef.__PVT__ce) {
        if (((((~ (IData)(vlSelfRef.__PVT__dmc_state)) 
               & (IData)(vlSelfRef.__PVT__dmc_trigger)) 
              & (IData)(vlSelfRef.__PVT__cpu_read)) 
             & (IData)(vlSelfRef.__PVT__put_ce))) {
            vlSelfRef.__Vdly__dmc_state = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__dmc_state) & (IData)(vlSelfRef.__PVT__put_ce))) {
            vlSelfRef.__Vdly__dmc_state = 0U;
        }
        if (vlSelfRef.__PVT__sprite_trigger) {
            vlSelfRef.__Vdly__sprite_dma_addr = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__data_from_cpu), 0U);
            vlSelfRef.__Vdly__spr_state = 1U;
        }
        if ((((1U == (IData)(vlSelfRef.__PVT__spr_state)) 
              & (IData)(vlSelfRef.__PVT__cpu_read)) 
             & (IData)(vlSelfRef.__PVT__get_ce))) {
            vlSelfRef.__Vdly__spr_state = 3U;
        }
        if (((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 1U) 
              & (IData)(vlSelfRef.__PVT__put_ce)) & (IData)(vlSelfRef.__PVT__dmc_state))) {
            vlSelfRef.__Vdly__spr_state = 1U;
        }
        if ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 1U) 
             & (IData)(vlSelfRef.__PVT__get_ce))) {
            VL_ASSIGNSEL_II(16, 8, 0U, vlSelfRef.__Vdly__sprite_dma_addr, 
                            (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__new_sprite_dma_addr), 0U, 8)));
        }
        if (((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 1U) 
              & (IData)(vlSelfRef.__PVT__get_ce)) & 
             VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__new_sprite_dma_addr), 8U))) {
            vlSelfRef.__Vdly__spr_state = 0U;
        }
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 1U))) {
            vlSelfRef.__Vdly__sprite_dma_lastval = vlSelfRef.__PVT__dma_data_to_ram;
        }
    }
    vlSelfRef.__PVT__sprite_dma_lastval = vlSelfRef.__Vdly__sprite_dma_lastval;
    vlSelfRef.__PVT__sprite_dma_addr = vlSelfRef.__Vdly__sprite_dma_addr;
    vlSelfRef.__PVT__spr_state = vlSelfRef.__Vdly__spr_state;
    vlSelfRef.__PVT__dmc_state = vlSelfRef.__Vdly__dmc_state;
    vlSelfRef.__PVT__data_to_ram = vlSelfRef.__PVT__sprite_dma_lastval;
    vlSelfRef.__PVT__new_sprite_dma_addr = (0x000001ffU 
                                            & ((IData)(1U) 
                                               + VL_EXTEND_II(9,8, 
                                                              (0x000000ffU 
                                                               & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__sprite_dma_addr), 0U, 8)))));
}

void Vnes_core_top_DmaController___nba_comb__TOP__nes_core_top__nes_inst__dma__0(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___nba_comb__TOP__nes_core_top__nes_inst__dma__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pause_cpu = (1U & ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 0U) 
                                         | (IData)(vlSelfRef.__PVT__dmc_trigger)) 
                                        | (IData)(vlSelfRef.__PVT__dmc_state)));
}

void Vnes_core_top_DmaController___nba_comb__TOP__nes_core_top__nes_inst__dma__1(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___nba_comb__TOP__nes_core_top__nes_inst__dma__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dmc_ack = (((IData)(vlSelfRef.__PVT__dmc_state) 
                                 & (~ (IData)(vlSelfRef.__PVT__put_cycle))) 
                                & (IData)(vlSelfRef.__PVT__dmc_trigger));
    vlSelfRef.__PVT__aout = ((IData)(vlSelfRef.__PVT__dmc_ack)
                              ? (IData)(vlSelfRef.__PVT__dmc_dma_addr)
                              : ((IData)(vlSelfRef.__PVT__put_cycle)
                                  ? 0x2004U : (IData)(vlSelfRef.__PVT__sprite_dma_addr)));
    vlSelfRef.__PVT__aout_enable = (1U & ((IData)(vlSelfRef.__PVT__dmc_ack) 
                                          | VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 1U)));
}
