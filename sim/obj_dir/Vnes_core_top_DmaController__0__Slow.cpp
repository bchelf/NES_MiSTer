// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_DmaController___stl_sequent__TOP__nes_core_top__nes_inst__dma__0(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___stl_sequent__TOP__nes_core_top__nes_inst__dma__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__new_sprite_dma_addr = (0x000001ffU 
                                            & ((IData)(1U) 
                                               + VL_EXTEND_II(9,8, 
                                                              (0x000000ffU 
                                                               & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__sprite_dma_addr), 0U, 8)))));
    vlSelfRef.__PVT__data_to_ram = vlSelfRef.__PVT__sprite_dma_lastval;
    vlSelfRef.__PVT__read = (1U & (~ (IData)(vlSelfRef.__PVT__put_cycle)));
}

VL_ATTR_COLD void Vnes_core_top_DmaController___stl_sequent__TOP__nes_core_top__nes_inst__dma__1(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___stl_sequent__TOP__nes_core_top__nes_inst__dma__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pause_cpu = (1U & ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__spr_state), 0U) 
                                         | (IData)(vlSelfRef.__PVT__dmc_trigger)) 
                                        | (IData)(vlSelfRef.__PVT__dmc_state)));
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

VL_ATTR_COLD void Vnes_core_top_DmaController___ctor_var_reset(Vnes_core_top_DmaController* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_DmaController___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__put_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626605300908968523ull);
    vlSelf->__PVT__put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7411521946655991260ull);
    vlSelf->__PVT__get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10476713293322569593ull);
    vlSelf->__PVT__sprite_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4738122326527996924ull);
    vlSelf->__PVT__dmc_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16378856289027013839ull);
    vlSelf->__PVT__cpu_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6028156289179386584ull);
    vlSelf->__PVT__data_from_cpu = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15700181204776725429ull);
    vlSelf->__PVT__dma_data_to_ram = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6658827166194314617ull);
    vlSelf->__PVT__dmc_dma_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16515451110388891421ull);
    vlSelf->__PVT__aout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5554438228664214756ull);
    vlSelf->__PVT__aout_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9858519888662991614ull);
    vlSelf->__PVT__read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916498648420597437ull);
    vlSelf->__PVT__data_to_ram = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9002362687254678874ull);
    vlSelf->__PVT__dmc_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7672146816534260324ull);
    vlSelf->__PVT__pause_cpu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 632701397991589166ull);
    vlSelf->__PVT__dmc_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16178468368960018867ull);
    vlSelf->__PVT__spr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3215042860442241545ull);
    vlSelf->__PVT__sprite_dma_lastval = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11522111293997652774ull);
    vlSelf->__PVT__sprite_dma_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3618800731086007738ull);
    vlSelf->__PVT__new_sprite_dma_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11686630747848649766ull);
    vlSelf->__Vdly__dmc_state = 0;
    vlSelf->__Vdly__spr_state = 0;
    vlSelf->__Vdly__sprite_dma_lastval = 0;
    vlSelf->__Vdly__sprite_dma_addr = 0;
}
