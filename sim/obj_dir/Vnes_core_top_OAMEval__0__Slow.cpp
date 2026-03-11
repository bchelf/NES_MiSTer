// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_OAMEval___eval_static__TOP__nes_core_top__nes_inst__ppu__spriteeval(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___eval_static__TOP__nes_core_top__nes_inst__ppu__spriteeval\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__oam_state = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__oam_eval__DOT__last_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5734399178201910577ull);
    vlSelf->__PVT__oam_eval__DOT__last_tile = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10458221737673381056ull);
    vlSelf->__PVT__oam_eval__DOT__last_attr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10783406987768530928ull);
    vlSelf->__PVT__oam_eval__DOT__eval_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10776461625220758409ull);
    vlSelf->__PVT__oam_eval__DOT__sec_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10241211702081331851ull);
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___eval_initial__TOP__nes_core_top__nes_inst__ppu__spriteeval(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___eval_initial__TOP__nes_core_top__nes_inst__ppu__spriteeval\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(64, 7, 0x1fU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 0U);
    VL_ASSIGNSEL_QI(64, 3, 0x3dU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 0U);
    vlSelfRef.__PVT__corrupting_write = 0U;
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__0(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__oam_row_last = (0x0000001fU & 
                                     ((IData)(vlSelfRef.__PVT__old_using_secondary)
                                       ? (IData)(vlSelfRef.__PVT__oam_secondary_addr)
                                       : VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 3U, 5)));
    VL_ASSIGNSEL_QI(64, 15, 0U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_CONCAT_III(15,6,9, VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__oam_secondary_addr)), 
                                  VL_CONCAT_III(9,1,8, 
                                                (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__oam_secondary_ovr))), (IData)(vlSelfRef.__PVT__oam_data))));
    VL_ASSIGNSEL_QI(64, 16, 0x0000000fU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_CONCAT_III(16,5,11, VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__sprite0_curr), 
                                                         VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__sprite0), (IData)(vlSelfRef.__PVT__repeat_count))), 
                                  VL_CONCAT_III(11,4,7, 
                                                VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.__PVT__spr_counter), (IData)(vlSelfRef.__PVT__n_ovr)), 
                                                VL_CONCAT_III(7,4,3, (IData)(vlSelfRef.__PVT__oam_secondary_row_ex), (IData)(vlSelfRef.__PVT__oam_secondary_row)))));
    VL_ASSIGNSEL_QI(64, 10, 0x00000026U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_CONCAT_III(10,6,4, (IData)(vlSelfRef.__PVT__oam_addr_ex), 
                                  VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__ex_ovr), 
                                                VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__oam_secondary_column), (IData)(vlSelfRef.__PVT__overflow)))));
    VL_ASSIGNSEL_QI(64, 8, 0x30U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, vlSelfRef.__PVT__oam_addr);
    VL_ASSIGNSEL_QI(64, 3, 0x38U, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    ((0U == vlSelfRef.__PVT__oam_state)
                      ? 0U : ((1U == vlSelfRef.__PVT__oam_state)
                               ? 1U : ((2U == vlSelfRef.__PVT__oam_state)
                                        ? 2U : ((3U 
                                                 == vlSelfRef.__PVT__oam_state)
                                                 ? 3U
                                                 : 4U)))));
    VL_ASSIGNSEL_QI(64, 2, 0x0000003bU, vlSelfRef.__PVT__SS_OAMEVAL_BACK, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__old_using_secondary), (IData)(vlSelfRef.__PVT__old_rendering)));
    vlSelfRef.__PVT__oam_bus = vlSelfRef.__PVT__oam_data;
    vlSelfRef.__PVT__masked_sprites = VL_REDAND_II(3, (IData)(vlSelfRef.__PVT__repeat_count));
    vlSelfRef.__PVT__oam_wr_enabled = (1U & ((~ (IData)(vlSelfRef.__PVT__oam_secondary_ovr)) 
                                             & (~ (IData)(vlSelfRef.__PVT__is_pre_render))));
    vlSelfRef.__PVT__secondary_write = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__Din 
        = vlSelfRef.__PVT__SS_OAMEVAL_BACK;
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__1(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_OAMEVAL = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__Dout;
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__2(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__PVT__visible = (0x00f0U > (IData)(vlSelfRef.__PVT__scanline));
    vlSelfRef.__PVT__evaluating = ((IData)(vlSelfRef.__PVT__visible) 
                                   & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSelfRef.__PVT__rendering = (((IData)(vlSelfRef.__PVT__is_pre_render) 
                                   | (IData)(vlSelfRef.__PVT__visible)) 
                                  & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSelfRef.__PVT__clear_secondary_addr = ((((0x003fU 
                                                == (IData)(vlSelfRef.__PVT__cycle)) 
                                               | (0x00ffU 
                                                  == (IData)(vlSelfRef.__PVT__cycle))) 
                                              | (0x0153U 
                                                 == (IData)(vlSelfRef.__PVT__cycle))) 
                                             & (IData)(vlSelfRef.__PVT__rendering));
    vlSelfRef.__PVT__using_secondary = ((IData)(vlSelfRef.__PVT__rendering) 
                                        & (((~ VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U)) 
                                            & (0x00ffU 
                                               >= (IData)(vlSelfRef.__PVT__cycle))) 
                                           | (0x00ffU 
                                              < (IData)(vlSelfRef.__PVT__cycle))));
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__3(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__4(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___stl_sequent__TOP__nes_core_top__nes_inst__ppu__spriteeval__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval__iREG_SAVESTATE.__PVT__BUS_Dout;
    vlSelfRef.__PVT__oam_row_cur = (0x0000001fU & ((IData)(vlSelfRef.__PVT__using_secondary)
                                                    ? (IData)(vlSelfRef.__PVT__oam_secondary_addr)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__oam_addr_write)
                                                     ? 
                                                    VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_din), 3U, 5)
                                                     : 
                                                    VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_addr), 3U, 5))));
    vlSelfRef.__PVT__oam_read_addr = ((IData)(vlSelfRef.__PVT__oam_addr_write)
                                       ? (IData)(vlSelfRef.__PVT__oam_din)
                                       : (IData)(vlSelfRef.__PVT__oam_addr));
    vlSelfRef.__PVT__oam_dbus = ((IData)(vlSelfRef.__PVT__oam_data_write)
                                  ? (IData)(vlSelfRef.__PVT__oam_din)
                                  : (IData)(vlSelfRef.__PVT__oam_data));
    vlSelfRef.__PVT__is_attr_byte = (2U == (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__oam_read_addr), 0U, 2)));
    vlSelfRef.__PVT__in_range = (((0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8)) 
                                  >= (IData)(vlSelfRef.__PVT__oam_dbus)) 
                                 & (VL_EXTEND_II(32,8, 
                                                 (0x000000ffU 
                                                  & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline), 0U, 8))) 
                                    < (VL_EXTEND_II(32,8, (IData)(vlSelfRef.__PVT__oam_dbus)) 
                                       + ((IData)(vlSelfRef.__PVT__obj_size)
                                           ? 0x00000010U
                                           : 8U))));
}

VL_ATTR_COLD void Vnes_core_top_OAMEval___ctor_var_reset(Vnes_core_top_OAMEval* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_OAMEval___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__clear_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11346451819102565857ull);
    vlSelf->__PVT__end_of_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11983790436732281692ull);
    vlSelf->__PVT__rendering_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2139148875927654860ull);
    vlSelf->__PVT__obj_size = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1296829394038349534ull);
    vlSelf->__PVT__scanline = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 654532841143486145ull);
    vlSelf->__PVT__cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->__PVT__oam_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 210884539504366625ull);
    vlSelf->__PVT__oam_bus_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 27410904743937763ull);
    vlSelf->__PVT__oam_addr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7286796446714916506ull);
    vlSelf->__PVT__oam_data_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14809839573776482743ull);
    vlSelf->__PVT__oam_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1568149308481763296ull);
    vlSelf->__PVT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16341344440165733293ull);
    vlSelf->__PVT__sprite0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14038109857233711300ull);
    vlSelf->__PVT__is_vbe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17816012569704361459ull);
    vlSelf->__PVT__PAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15568346935915704965ull);
    vlSelf->__PVT__in_range = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3211589220843833547ull);
    vlSelf->__PVT__masked_sprites = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116067895197533560ull);
    vlSelf->__PVT__is_pre_render = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5133444082975203607ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__Savestate_OAMAddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12711775546231412907ull);
    vlSelf->__PVT__Savestate_OAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5665818448393404105ull);
    vlSelf->__PVT__Savestate_OAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12091760391566813420ull);
    vlSelf->__PVT__Savestate_OAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12305695533774351145ull);
    vlSelf->__PVT__Savestate_OAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15269148196214267110ull);
    vlSelf->__PVT__SS_OAMEVAL = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8106863308002218342ull);
    vlSelf->__PVT__SS_OAMEVAL_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12462168404758970854ull);
    vlSelf->__PVT__oam_dbus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10412707275328618506ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__oam_temp[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 637077529057298808ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__oam[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6812429778023518247ull);
    }
    vlSelf->__PVT__oam_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8015498871720626571ull);
    vlSelf->__PVT__oam_secondary_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12799425484821291714ull);
    vlSelf->__PVT__oam_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16710274985766287553ull);
    vlSelf->__PVT__oam_secondary_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 542101150773882937ull);
    vlSelf->__PVT__oam_addr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1487301684174367376ull);
    vlSelf->__PVT__oam_secondary_row_ex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9800670469219455436ull);
    vlSelf->__PVT__spr_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8250353559699489239ull);
    vlSelf->__PVT__old_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8630096014894244763ull);
    vlSelf->__PVT__old_using_secondary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1581521222566429311ull);
    vlSelf->__PVT__visible = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2645716972831216280ull);
    vlSelf->__PVT__rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832690048632048236ull);
    vlSelf->__PVT__evaluating = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4984854246729767118ull);
    vlSelf->__PVT__secondary_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6541320529750345835ull);
    vlSelf->__PVT__oam_read_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8642307184660089662ull);
    vlSelf->__PVT__is_attr_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12503991971248353852ull);
    vlSelf->__PVT__using_secondary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13580450288719040101ull);
    vlSelf->__PVT__oam_row_cur = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11255937850466445934ull);
    vlSelf->__PVT__oam_row_last = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6954063508696192701ull);
    vlSelf->__PVT__corrupting_write = 0U;
    ;
    vlSelf->__PVT__clear_secondary_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17515705203919840535ull);
    vlSelf->__PVT__oam_secondary_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9792631433971272975ull);
    vlSelf->__PVT__sprite0_curr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11438738442161430990ull);
    vlSelf->__PVT__repeat_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4232819059144452831ull);
    vlSelf->__PVT__n_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11706496983166331259ull);
    vlSelf->__PVT__ex_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18279142058001222692ull);
    vlSelf->__PVT__oam_secondary_column = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1425755373439810877ull);
    vlSelf->__PVT__oam_wr_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12261659241584306544ull);
    vlSelf->__Vdly__Savestate_OAMReadData = 0;
    vlSelf->__Vdly__oam_data = 0;
    vlSelf->__Vdly__oam_secondary_ovr = 0;
    vlSelf->__Vdly__oam_secondary_addr = 0;
    vlSelf->__Vdly__oam_secondary_row = 0;
    vlSelf->__Vdly__oam_secondary_row_ex = 0;
    vlSelf->__Vdly__n_ovr = 0;
    vlSelf->__Vdly__spr_counter = 0;
    vlSelf->__Vdly__repeat_count = 0;
    vlSelf->__Vdly__sprite0 = 0;
    vlSelf->__Vdly__sprite0_curr = 0;
    vlSelf->__Vdly__overflow = 0;
    vlSelf->__Vdly__oam_secondary_column = 0;
    vlSelf->__Vdly__ex_ovr = 0;
    vlSelf->__Vdly__oam_addr_ex = 0;
    vlSelf->__Vdly__oam_addr = 0;
    vlSelf->__Vdly__oam_state = 0;
    vlSelf->__Vdly__old_rendering = 0;
    vlSelf->__Vdly__old_using_secondary = 0;
    vlSelf->__Vdly__oam_bus_ex = 0;
    vlSelf->__Vdly__oam_eval__DOT__eval_count = 0;
    vlSelf->__Vdly__oam_eval__DOT__last_y = 0;
    vlSelf->__Vdly__oam_eval__DOT__last_tile = 0;
    vlSelf->__Vdly__oam_eval__DOT__last_attr = 0;
    vlSelf->__VdlyVal__oam__v0 = 0;
    vlSelf->__VdlyDim0__oam__v0 = 0;
    vlSelf->__VdlySet__oam__v0 = 0;
    vlSelf->__VdlySet__oam_temp__v0 = 0;
    vlSelf->__VdlyVal__oam__v1 = 0;
    vlSelf->__VdlyDim0__oam__v1 = 0;
    vlSelf->__VdlySet__oam__v1 = 0;
    vlSelf->__VdlyVal__oam__v2 = 0;
    vlSelf->__VdlyDim0__oam__v2 = 0;
    vlSelf->__VdlyVal__oam__v3 = 0;
    vlSelf->__VdlyDim0__oam__v3 = 0;
    vlSelf->__VdlyVal__oam__v4 = 0;
    vlSelf->__VdlyDim0__oam__v4 = 0;
    vlSelf->__VdlyVal__oam__v5 = 0;
    vlSelf->__VdlyDim0__oam__v5 = 0;
    vlSelf->__VdlyVal__oam__v6 = 0;
    vlSelf->__VdlyDim0__oam__v6 = 0;
    vlSelf->__VdlyVal__oam__v7 = 0;
    vlSelf->__VdlyDim0__oam__v7 = 0;
    vlSelf->__VdlyVal__oam__v8 = 0;
    vlSelf->__VdlyDim0__oam__v8 = 0;
    vlSelf->__VdlyVal__oam_temp__v64 = 0;
    vlSelf->__VdlyDim0__oam_temp__v64 = 0;
    vlSelf->__VdlyDim0__oam_temp__v65 = 0;
    vlSelf->__VdlySet__oam_temp__v65 = 0;
    vlSelf->__VdlyDim0__oam_temp__v66 = 0;
    vlSelf->__VdlyVal__oam_temp__v67 = 0;
    vlSelf->__VdlyDim0__oam_temp__v67 = 0;
    vlSelf->__VdlySet__oam_temp__v67 = 0;
    vlSelf->__VdlyVal__oam_temp__v68 = 0;
    vlSelf->__VdlyDim0__oam_temp__v68 = 0;
    vlSelf->__VdlyVal__oam_temp__v69 = 0;
    vlSelf->__VdlyDim0__oam_temp__v69 = 0;
    vlSelf->__VdlyVal__oam_temp__v70 = 0;
    vlSelf->__VdlyDim0__oam_temp__v70 = 0;
    vlSelf->__VdlyVal__oam_temp__v71 = 0;
    vlSelf->__VdlyDim0__oam_temp__v71 = 0;
    vlSelf->__VdlySet__oam_temp__v71 = 0;
    vlSelf->__VdlyVal__oam__v9 = 0;
    vlSelf->__VdlyDim0__oam__v9 = 0;
    vlSelf->__VdlySet__oam__v9 = 0;
}
