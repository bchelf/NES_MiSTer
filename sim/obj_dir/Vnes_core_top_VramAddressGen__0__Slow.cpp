// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_VramAddressGen___eval_initial__TOP__nes_core_top__nes_inst__ppu__vram0(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___eval_initial__TOP__nes_core_top__nes_inst__ppu__vram0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(64, 9, 0x37U, vlSelfRef.__PVT__SS_vram_BACK, 0U);
}

VL_ATTR_COLD void Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__0(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__write_2006b = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__write_shift), 1U));
    VL_ASSIGNSEL_QQ(64, 34, 0U, vlSelfRef.__PVT__SS_vram_BACK, 
                    VL_CONCAT_QII(34,3,31, (IData)(vlSelfRef.__PVT__vram_x), 
                                  VL_CONCAT_III(31,15,16, (IData)(vlSelfRef.__PVT__vram_t), 
                                                VL_CONCAT_III(16,15,1, (IData)(vlSelfRef.__PVT__vram_v), (IData)(vlSelfRef.__PVT__ppu_incr)))));
    VL_ASSIGNBIT_QI(0x22U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__ppu_address_latch);
    VL_ASSIGNSEL_QI(64, 2, 0x33U, vlSelfRef.__PVT__SS_vram_BACK, vlSelfRef.__PVT__write_shift);
    vlSelfRef.__PVT__fine_x_scroll = vlSelfRef.__PVT__vram_x;
    vlSelfRef.__PVT__vram = vlSelfRef.__PVT__vram_v;
    vlSelfRef.__PVT__inc_horizontal = (((7U == (7U 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                        & ((0x00ffU 
                                            >= (IData)(vlSelfRef.__PVT__cycle)) 
                                           | ((0x0140U 
                                               <= (IData)(vlSelfRef.__PVT__cycle)) 
                                              & (0x014fU 
                                                 >= (IData)(vlSelfRef.__PVT__cycle))))) 
                                       & (IData)(vlSelfRef.__PVT__is_rendering));
    vlSelfRef.__PVT__inc_vertical = ((0x00ffU == (IData)(vlSelfRef.__PVT__cycle)) 
                                     & (IData)(vlSelfRef.__PVT__is_rendering));
    vlSelfRef.__PVT__SS_vram = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__Dout;
    vlSelfRef.__PVT__copy_hscroll = (((0x0100U == (IData)(vlSelfRef.__PVT__cycle)) 
                                      & (IData)(vlSelfRef.__PVT__is_rendering)) 
                                     | (IData)(vlSelfRef.__PVT__write_2006b));
    vlSelfRef.__PVT__copy_vscroll = (((((0x0117U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                        & (0x012fU 
                                           >= (IData)(vlSelfRef.__PVT__cycle))) 
                                       & (IData)(vlSelfRef.__PVT__is_pre_render)) 
                                      & (IData)(vlSelfRef.__PVT__is_rendering)) 
                                     | (IData)(vlSelfRef.__PVT__write_2006b));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__Din 
        = vlSelfRef.__PVT__SS_vram_BACK;
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.__PVT__vram_t_mask, 
                    (1U & VL_BITSEL_IIII(6, (((IData)(vlSelfRef.__PVT__write_2006b) 
                                              | (IData)(vlSelfRef.__PVT__copy_hscroll))
                                              ? VL_CONCAT_III(6,1,5, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0aU)), 
                                                              (0x0000001fU 
                                                               & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0U, 5)))
                                              : 0x3fU), 5U)));
    VL_ASSIGNSEL_II(15, 5, 0U, vlSelfRef.__PVT__vram_t_mask, 
                    (0x0000001fU & VL_SEL_IIII(6, (
                                                   ((IData)(vlSelfRef.__PVT__write_2006b) 
                                                    | (IData)(vlSelfRef.__PVT__copy_hscroll))
                                                    ? 
                                                   VL_CONCAT_III(6,1,5, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0aU)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0U, 5)))
                                                    : 0x3fU), 0U, 5)));
    VL_ASSIGNSEL_II(15, 4, 0x0bU, vlSelfRef.__PVT__vram_t_mask, 
                    (0x0000000fU & VL_SEL_IIII(9, (
                                                   ((IData)(vlSelfRef.__PVT__write_2006b) 
                                                    | (IData)(vlSelfRef.__PVT__copy_vscroll))
                                                    ? 
                                                   VL_CONCAT_III(9,4,5, 
                                                                 (0x0000000fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0bU, 4)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 5U, 5)))
                                                    : 0x01ffU), 5U, 4)));
    VL_ASSIGNSEL_II(15, 5, 5U, vlSelfRef.__PVT__vram_t_mask, 
                    (0x0000001fU & VL_SEL_IIII(9, (
                                                   ((IData)(vlSelfRef.__PVT__write_2006b) 
                                                    | (IData)(vlSelfRef.__PVT__copy_vscroll))
                                                    ? 
                                                   VL_CONCAT_III(9,4,5, 
                                                                 (0x0000000fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 0x0bU, 4)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram_t), 5U, 5)))
                                                    : 0x01ffU), 0U, 5)));
}

VL_ATTR_COLD void Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__1(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_ATTR_COLD void Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__2(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

VL_ATTR_COLD void Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__3(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___stl_sequent__TOP__nes_core_top__nes_inst__ppu__vram0__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0__iREG_SAVESTATE.__PVT__BUS_Dout;
}

VL_ATTR_COLD void Vnes_core_top_VramAddressGen___ctor_var_reset(Vnes_core_top_VramAddressGen* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_VramAddressGen___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__is_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 384756990955494270ull);
    vlSelf->__PVT__ain = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11345839893430635791ull);
    vlSelf->__PVT__din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15192908731043726583ull);
    vlSelf->__PVT__read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916498648420597437ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__is_pre_render = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5133444082975203607ull);
    vlSelf->__PVT__trigger_2007 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13072681931248473175ull);
    vlSelf->__PVT__cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->__PVT__vram = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9703584266822826543ull);
    vlSelf->__PVT__fine_x_scroll = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 223026050135352908ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__SS_vram = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9395771566239402198ull);
    vlSelf->__PVT__SS_vram_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17224809186021746220ull);
    vlSelf->__PVT__ppu_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3096452158208357283ull);
    vlSelf->__PVT__vram_v = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10003602513780302477ull);
    vlSelf->__PVT__vram_t = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6412962142143865977ull);
    vlSelf->__PVT__vram_x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6614959384855404433ull);
    vlSelf->__PVT__ppu_address_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16336683404887590091ull);
    vlSelf->__PVT__write_shift = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9451358047895225231ull);
    vlSelf->__PVT__write_2006b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15814881913303167879ull);
    vlSelf->__PVT__inc_horizontal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12422588181658841570ull);
    vlSelf->__PVT__inc_vertical = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17379922811023313107ull);
    vlSelf->__PVT__copy_hscroll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4126862613212187540ull);
    vlSelf->__PVT__copy_vscroll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13067126978064675776ull);
    vlSelf->__PVT__vram_t_mask = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16699284277431874823ull);
    vlSelf->__Vdly__ppu_incr = 0;
    vlSelf->__Vdly__vram_v = 0;
    vlSelf->__Vdly__vram_t = 0;
    vlSelf->__Vdly__vram_x = 0;
    vlSelf->__Vdly__ppu_address_latch = 0;
    vlSelf->__Vdly__write_shift = 0;
}
