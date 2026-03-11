// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_T65_real___eval_initial__TOP__nes_core_top__nes_inst__cpu__cpu_impl(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___eval_initial__TOP__nes_core_top__nes_inst__cpu__cpu_impl\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__p = 0U;
    vlSelfRef.__PVT__ad = 0U;
    vlSelfRef.__PVT__dl = 0U;
    vlSelfRef.__PVT__n633 = 0x3fU;
    vlSelfRef.__PVT__n916 = 0U;
    vlSelfRef.__PVT__n917 = 0U;
    vlSelfRef.__PVT__n918 = 0U;
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__res_n_d = vlSelfRef.__PVT__n948;
    vlSelfRef.__PVT__n533 = (1U & (~ (IData)(vlSelfRef.__PVT__SO_n)));
    vlSelfRef.__PVT__res_n_i = vlSelfRef.__PVT__n946;
    vlSelfRef.__PVT__nmi_entered = vlSelfRef.__PVT__n951;
    vlSelfRef.__PVT__so_n_o = vlSelfRef.__PVT__n938;
    vlSelfRef.__PVT__ef_i = vlSelfRef.__PVT__n925;
    vlSelfRef.__PVT__mf_i = vlSelfRef.__PVT__n926;
    vlSelfRef.__PVT__xf_i = vlSelfRef.__PVT__n927;
    vlSelfRef.__PVT__nmi_n_o = vlSelfRef.__PVT__n940;
    vlSelfRef.__PVT__irq_n_o = vlSelfRef.__PVT__n939;
    vlSelfRef.__PVT__nmiact = vlSelfRef.__PVT__n941;
    vlSelfRef.__PVT__rstcycle = vlSelfRef.__PVT__n935;
    vlSelfRef.__PVT__rdy_mod = vlSelfRef.__PVT__n949;
    vlSelfRef.__PVT__irqcycle = vlSelfRef.__PVT__n936;
    vlSelfRef.__PVT__nmicycle = vlSelfRef.__PVT__n937;
    vlSelfRef.__PVT__y = vlSelfRef.__PVT__n915;
    vlSelfRef.__PVT__busb_r = vlSelfRef.__PVT__n944;
    vlSelfRef.__PVT__abc = vlSelfRef.__PVT__n913;
    vlSelfRef.__PVT__x = vlSelfRef.__PVT__n914;
    vlSelfRef.__PVT__wrn_i = vlSelfRef.__PVT__n950;
    vlSelfRef.__PVT__write_data_r = vlSelfRef.__PVT__n933;
    vlSelfRef.__PVT__ad = vlSelfRef.__PVT__n917;
    vlSelfRef.__PVT__bah = vlSelfRef.__PVT__n919;
    vlSelfRef.__PVT__dbr = vlSelfRef.__PVT__n922;
    vlSelfRef.__PVT__pbr = vlSelfRef.__PVT__n921;
    vlSelfRef.__PVT__bal = vlSelfRef.__PVT__n920;
    vlSelfRef.__PVT__s = vlSelfRef.__PVT__n924;
    vlSelfRef.__PVT__dl = vlSelfRef.__PVT__n918;
    vlSelfRef.__PVT__pc = vlSelfRef.__PVT__n923;
    vlSelfRef.__PVT__mode_r = vlSelfRef.__PVT__n930;
    vlSelfRef.__PVT__set_addr_to_r = vlSelfRef.__PVT__n934;
    vlSelfRef.__PVT__bcd_en_r = vlSelfRef.__PVT__n931;
    vlSelfRef.__PVT__mcycle = vlSelfRef.__PVT__n929;
    vlSelfRef.__PVT__busb = vlSelfRef.__PVT__n943;
    vlSelfRef.__PVT__p = vlSelfRef.__PVT__n916;
    vlSelfRef.__PVT__busa_r = vlSelfRef.__PVT__n942;
    vlSelfRef.__PVT__ir = vlSelfRef.__PVT__n928;
    vlSelfRef.__PVT__alu_op_r = vlSelfRef.__PVT__n932;
    vlSelfRef.__PVT__n836 = (1U & (~ (IData)(vlSelfRef.__PVT__res_n_i)));
    vlSelfRef.__PVT__n557 = (1U & (~ (IData)(vlSelfRef.__PVT__res_n_i)));
    vlSelfRef.__PVT__n138 = (1U & (~ (IData)(vlSelfRef.__PVT__res_n_i)));
    vlSelfRef.__PVT__n534 = ((IData)(vlSelfRef.__PVT__n533) 
                             & (IData)(vlSelfRef.__PVT__so_n_o));
    vlSelfRef.__PVT__EF = vlSelfRef.__PVT__ef_i;
    vlSelfRef.__PVT__MF = vlSelfRef.__PVT__mf_i;
    vlSelfRef.__PVT__XF = vlSelfRef.__PVT__xf_i;
    vlSelfRef.__PVT__n847 = (1U & (~ (IData)(vlSelfRef.__PVT__irq_n_o)));
    vlSelfRef.__PVT__NMI_ack = vlSelfRef.__PVT__nmiact;
    vlSelfRef.__PVT__n206 = (1U & (~ (IData)(vlSelfRef.__PVT__rstcycle)));
    vlSelfRef.__PVT__n453 = (1U & (~ (IData)(vlSelfRef.__PVT__rstcycle)));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__rdy_mod 
        = vlSelfRef.__PVT__rdy_mod;
    vlSelfRef.__PVT__n219 = (1U & (~ (IData)(vlSelfRef.__PVT__irqcycle)));
    vlSelfRef.__PVT__n182 = (1U & (~ (IData)(vlSelfRef.__PVT__irqcycle)));
    vlSelfRef.__PVT__n188 = ((IData)(vlSelfRef.__PVT__irqcycle) 
                             | (IData)(vlSelfRef.__PVT__nmicycle));
    vlSelfRef.__PVT__n221 = (1U & (~ (IData)(vlSelfRef.__PVT__nmicycle)));
    vlSelfRef.__PVT__n183 = (1U & (~ (IData)(vlSelfRef.__PVT__nmicycle)));
    vlSelfRef.__PVT__n777 = ((IData)(vlSelfRef.__PVT__irqcycle) 
                             | (IData)(vlSelfRef.__PVT__nmicycle));
    vlSelfRef.__PVT__n525 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 8U, 8));
    vlSelfRef.__PVT__n386 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n79 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n607 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n75 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n713 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n787 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n816 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n367 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__y), 0U, 8));
    vlSelfRef.__PVT__n515 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 8U, 8));
    vlSelfRef.__PVT__n382 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n83 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n73 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n707 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n721 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n739 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n725 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n731 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n781 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n801 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n806 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n365 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__abc), 0U, 8));
    vlSelfRef.__PVT__n520 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 8U, 8));
    vlSelfRef.__PVT__n384 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n81 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n609 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n74 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n710 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n735 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n740 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n784 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n802 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n812 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n807 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n366 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__x), 0U, 8));
    vlSelfRef.__PVT__n33 = (1U & (~ (IData)(vlSelfRef.__PVT__wrn_i)));
    vlSelfRef.__PVT__R_W_n = vlSelfRef.__PVT__wrn_i;
    vlSelfRef.__PVT__n780 = (0U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n783 = (1U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n786 = (2U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n789 = (3U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n792 = (4U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n794 = (5U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n797 = (6U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n800 = (7U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n805 = (8U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n811 = (9U == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n815 = (0x0aU == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n819 = (0x0bU == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n822 = (0x0cU == (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n575 = (0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__ad)));
    vlSelfRef.__PVT__n588 = (0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bah)));
    vlSelfRef.__PVT__n592 = (0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bah)));
    vlSelfRef.__PVT__n761 = VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__bah));
    vlSelfRef.__PVT__n756 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__dbr), 0U);
    vlSelfRef.__PVT__n586 = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__bal), 8U));
    vlSelfRef.__PVT__n577 = (0x000001ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__bal)));
    vlSelfRef.__PVT__n580 = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__bal), 0U, 8));
    vlSelfRef.__PVT__n698 = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__bal), 8U));
    vlSelfRef.__PVT__n762 = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__bal), 0U, 8));
    vlSelfRef.__PVT__n212 = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__s) 
                                            - (IData)(1U)));
    vlSelfRef.__PVT__n202 = (0x0000ffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__s)));
    vlSelfRef.__PVT__n203 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 8U, 8));
    vlSelfRef.__PVT__n191 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 0U, 8));
    vlSelfRef.__PVT__n76 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 0U, 8));
    vlSelfRef.__PVT__n716 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 0U, 8));
    vlSelfRef.__PVT__n790 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 0U, 8));
    vlSelfRef.__PVT__n126 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 0U, 8));
    vlSelfRef.__PVT__n750 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__s), 0U, 8));
    vlSelfRef.__PVT__n234 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__dl), 7U));
    vlSelfRef.__PVT__n358 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__dl), 7U));
    vlSelfRef.__PVT__n77 = VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__pc), (IData)(vlSelfRef.__PVT__s));
    vlSelfRef.__PVT__n236 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 8U, 8));
    vlSelfRef.__PVT__n239 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 8U, 8));
    vlSelfRef.__PVT__n227 = (0x0000ffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__pc)));
    vlSelfRef.__PVT__n224 = (0x0000ffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__pc)));
    vlSelfRef.__PVT__n186 = (0x0000ffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__pc)));
    vlSelfRef.__PVT__n795 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 0U, 8));
    vlSelfRef.__PVT__n798 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 8U, 8));
    vlSelfRef.__PVT__n766 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 8U, 8));
    vlSelfRef.__PVT__n362 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 0U, 8));
    vlSelfRef.__PVT__n356 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__pc), 0U, 8));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__mode 
        = vlSelfRef.__PVT__mode_r;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__mode 
        = vlSelfRef.__PVT__mode_r;
    vlSelfRef.__PVT__n65 = (0U != (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n567 = (0U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n569 = (2U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n637 = (3U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n754 = (1U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n759 = (2U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n765 = (3U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n771 = (0U == (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__bcd_en 
        = vlSelfRef.__PVT__bcd_en_r;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__bcd_en 
        = vlSelfRef.__PVT__bcd_en_r;
    vlSelfRef.__PVT__n37 = (0U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n48 = (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__mcycle), 1U, 2));
    vlSelfRef.__PVT__n56 = (5U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n58 = (6U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n864 = (7U != (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n866 = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__mcycle)));
    vlSelfRef.__PVT__n160 = (0U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n623 = (4U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n162 = (3U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n167 = (4U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n451 = (4U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n217 = (1U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n617 = (4U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n181 = (0U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n381 = (0U == (IData)(vlSelfRef.__PVT__mcycle));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__mcycle 
        = vlSelfRef.__PVT__mcycle;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__busb 
        = vlSelfRef.__PVT__busb;
    vlSelfRef.__PVT__n848 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p), 2U));
    vlSelfRef.__PVT__n776 = (0xefU & (IData)(vlSelfRef.__PVT__p));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__p 
        = vlSelfRef.__PVT__p;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__p_in 
        = vlSelfRef.__PVT__p;
    vlSelfRef.__PVT__n911 = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,15,17, 
                                                        VL_CONCAT_III(15,7,8, 
                                                                      VL_EXTEND_II(7,1, (IData)(vlSelfRef.__PVT__nmi_entered)), (IData)(vlSelfRef.__PVT__dl)), 
                                                        VL_CONCAT_III(17,8,9, (IData)(vlSelfRef.__PVT__bah), (IData)(vlSelfRef.__PVT__bal))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__ad), (IData)(vlSelfRef.__PVT__busb_r)), 
                                                        VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__busb), (IData)(vlSelfRef.__PVT__busa_r))));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__busa 
        = vlSelfRef.__PVT__busa_r;
    vlSelfRef.__PVT__n41 = (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 6U, 2));
    vlSelfRef.__PVT__n44 = (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 1U, 2));
    vlSelfRef.__PVT__n487 = (0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 0U, 5));
    vlSelfRef.__PVT__n478 = (0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 0U, 5));
    vlSelfRef.__PVT__n881 = (0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 0U, 5));
    vlSelfRef.__PVT__n164 = (0x93U != (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n169 = (0x93U == (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n845 = (0U != (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n449 = (0U == (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n614 = (0U == (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n215 = (0U == (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n400 = (0x0000001fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 0U, 5));
    vlSelfRef.__PVT__n403 = (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ir), 5U, 3));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ir 
        = vlSelfRef.__PVT__ir;
    vlSelfRef.__PVT__n129 = (0x0000000fU & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__alu_op_r), 0U, 4));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__op 
        = vlSelfRef.__PVT__alu_op_r;
    vlSelfRef.__PVT__n184 = ((IData)(vlSelfRef.__PVT__n183) 
                             & (IData)(vlSelfRef.__PVT__n182));
    vlSelfRef.__PVT__n608 = (0x000000ffU & ((IData)(vlSelfRef.__PVT__ad) 
                                            + (IData)(vlSelfRef.__PVT__n607)));
    vlSelfRef.__PVT__n817 = ((IData)(vlSelfRef.__PVT__n816) 
                             & (IData)(vlSelfRef.__PVT__busb_r));
    vlSelfRef.__PVT__n727 = (0xeeU | (IData)(vlSelfRef.__PVT__n725));
    vlSelfRef.__PVT__n733 = (0xeeU | (IData)(vlSelfRef.__PVT__n731));
    vlSelfRef.__PVT__n610 = (0x000000ffU & ((IData)(vlSelfRef.__PVT__ad) 
                                            + (IData)(vlSelfRef.__PVT__n609)));
    vlSelfRef.__PVT__n741 = ((IData)(vlSelfRef.__PVT__n739) 
                             & (IData)(vlSelfRef.__PVT__n740));
    vlSelfRef.__PVT__n803 = ((IData)(vlSelfRef.__PVT__n801) 
                             & (IData)(vlSelfRef.__PVT__n802));
    vlSelfRef.__PVT__n813 = ((IData)(vlSelfRef.__PVT__n812) 
                             & (IData)(vlSelfRef.__PVT__busb_r));
    vlSelfRef.__PVT__n808 = ((IData)(vlSelfRef.__PVT__n806) 
                             & (IData)(vlSelfRef.__PVT__n807));
    vlSelfRef.__PVT__n910 = VL_CONCAT_QIQ(64,30,34, 
                                          VL_CONCAT_III(30,21,9, 
                                                        VL_EXTEND_II(21,1, (IData)(vlSelfRef.__PVT__nmiact)), 
                                                        VL_CONCAT_III(9,3,6, 
                                                                      VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__nmicycle), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__irqcycle), (IData)(vlSelfRef.__PVT__rstcycle))), 
                                                                      VL_CONCAT_III(6,3,3, (IData)(vlSelfRef.__PVT__mcycle), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__so_n_o), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__nmi_n_o), (IData)(vlSelfRef.__PVT__irq_n_o)))))), 
                                          VL_CONCAT_QII(34,16,18, 
                                                        VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n367), (IData)(vlSelfRef.__PVT__n366)), 
                                                        VL_CONCAT_III(18,8,10, (IData)(vlSelfRef.__PVT__n365), 
                                                                      VL_CONCAT_III(10,8,2, (IData)(vlSelfRef.__PVT__p), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rdy_mod), (IData)(vlSelfRef.__PVT__xf_i))))));
    vlSelfRef.__PVT__n823 = VL_CONCAT_III(13,7,6, VL_CONCAT_III(7,4,3, 
                                                                VL_CONCAT_III(4,2,2, 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n822), (IData)(vlSelfRef.__PVT__n819)), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n815), (IData)(vlSelfRef.__PVT__n811))), 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n805), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n800), (IData)(vlSelfRef.__PVT__n797)))), 
                                          VL_CONCAT_III(6,3,3, 
                                                        VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n794), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n792), (IData)(vlSelfRef.__PVT__n789))), 
                                                        VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n786), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n783), (IData)(vlSelfRef.__PVT__n780)))));
    vlSelfRef.__PVT__n757 = VL_CONCAT_III(24,16,8, (IData)(vlSelfRef.__PVT__n756), (IData)(vlSelfRef.__PVT__ad));
    vlSelfRef.__PVT__n581 = VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__n580));
    vlSelfRef.__PVT__n699 = (1U & (~ (IData)(vlSelfRef.__PVT__n698)));
    vlSelfRef.__PVT__n763 = VL_CONCAT_III(24,16,8, (IData)(vlSelfRef.__PVT__n761), (IData)(vlSelfRef.__PVT__n762));
    vlSelfRef.__PVT__n912 = VL_CONCAT_QII(48,32,16, 
                                          VL_CONCAT_III(32,16,16, 
                                                        VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__p), (IData)(vlSelfRef.__PVT__n76)), 
                                                        VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n75), (IData)(vlSelfRef.__PVT__n74))), 
                                          VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n73), (IData)(vlSelfRef.__PVT__ir)));
    vlSelfRef.__PVT__n752 = VL_CONCAT_III(24,16,8, 1U, (IData)(vlSelfRef.__PVT__n750));
    vlSelfRef.__PVT__n235 = (1U & (~ (IData)(vlSelfRef.__PVT__n234)));
    vlSelfRef.__PVT__n359 = VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.__PVT__n358), (IData)(vlSelfRef.__PVT__dl));
    vlSelfRef.__PVT__n78 = VL_CONCAT_QII(40,32,8, vlSelfRef.__PVT__n77, (IData)(vlSelfRef.__PVT__p));
    vlSelfRef.__PVT__n238 = (0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__n236)));
    vlSelfRef.__PVT__n241 = (0x000000ffU & ((IData)(vlSelfRef.__PVT__n239) 
                                            - (IData)(1U)));
    vlSelfRef.__PVT__n249 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n227), 0U, 8));
    vlSelfRef.__PVT__n253 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n227), 8U, 8));
    vlSelfRef.__PVT__n767 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__pbr), (IData)(vlSelfRef.__PVT__n766));
    vlSelfRef.__PVT__n364 = VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__n362));
    vlSelfRef.__PVT__n357 = VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__n356));
    vlSelfRef.__PVT__n66 = vlSelfRef.__PVT__n65;
    vlSelfRef.__PVT__n570 = ((IData)(vlSelfRef.__PVT__n567) 
                             | (IData)(vlSelfRef.__PVT__n569));
    vlSelfRef.__PVT__n772 = VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n771), (IData)(vlSelfRef.__PVT__n765)), 
                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n759), (IData)(vlSelfRef.__PVT__n754)));
    vlSelfRef.__PVT__n38 = vlSelfRef.__PVT__n37;
    vlSelfRef.__PVT__n50 = (0U != (IData)(vlSelfRef.__PVT__n48));
    vlSelfRef.__PVT__n59 = ((IData)(vlSelfRef.__PVT__n56) 
                            | (IData)(vlSelfRef.__PVT__n58));
    vlSelfRef.__PVT__n867 = ((IData)(vlSelfRef.__PVT__n864)
                              ? (IData)(vlSelfRef.__PVT__n866)
                              : (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n626 = vlSelfRef.__PVT__n623;
    vlSelfRef.__PVT__n618 = ((IData)(vlSelfRef.__PVT__n617) 
                             & (IData)(vlSelfRef.__PVT__nmiact));
    vlSelfRef.__PVT__n849 = (1U & (~ (IData)(vlSelfRef.__PVT__n848)));
    vlSelfRef.__PVT__n778 = ((IData)(vlSelfRef.__PVT__n777)
                              ? (IData)(vlSelfRef.__PVT__n776)
                              : (IData)(vlSelfRef.__PVT__p));
    vlSelfRef.__PVT__ss_3_back = vlSelfRef.__PVT__n911;
    vlSelfRef.__PVT__n43 = (2U != (IData)(vlSelfRef.__PVT__n41));
    vlSelfRef.__PVT__n46 = (3U == (IData)(vlSelfRef.__PVT__n44));
    vlSelfRef.__PVT__n489 = (0x10U != (IData)(vlSelfRef.__PVT__n487));
    vlSelfRef.__PVT__n480 = (0x10U != (IData)(vlSelfRef.__PVT__n478));
    vlSelfRef.__PVT__n883 = (0x10U != (IData)(vlSelfRef.__PVT__n881));
    vlSelfRef.__PVT__n165 = ((IData)(vlSelfRef.__PVT__n164) 
                             & (IData)(vlSelfRef.__PVT__n162));
    vlSelfRef.__PVT__n170 = ((IData)(vlSelfRef.__PVT__n169) 
                             & (IData)(vlSelfRef.__PVT__n167));
    vlSelfRef.__PVT__n846 = ((IData)(vlSelfRef.__PVT__n845) 
                             & (IData)(vlSelfRef.__PVT__nmiact));
    vlSelfRef.__PVT__n452 = ((IData)(vlSelfRef.__PVT__n451) 
                             & (IData)(vlSelfRef.__PVT__n449));
    vlSelfRef.__PVT__n218 = ((IData)(vlSelfRef.__PVT__n217) 
                             & (IData)(vlSelfRef.__PVT__n215));
    vlSelfRef.__PVT__n402 = (0x18U == (IData)(vlSelfRef.__PVT__n400));
    vlSelfRef.__PVT__n406 = (0U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n409 = (1U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n412 = (2U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n415 = (3U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n418 = (5U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n421 = (6U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n424 = (7U == (IData)(vlSelfRef.__PVT__n403));
    vlSelfRef.__PVT__n909 = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        VL_CONCAT_III(16,5,11, 
                                                                      VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__mf_i), 
                                                                                VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__ef_i), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__wrn_i), (IData)(vlSelfRef.__PVT__set_addr_to_r)))), 
                                                                      VL_CONCAT_III(11,4,7, (IData)(vlSelfRef.__PVT__write_data_r), 
                                                                                VL_CONCAT_III(7,4,3, (IData)(vlSelfRef.__PVT__n129), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__bcd_en_r), (IData)(vlSelfRef.__PVT__mode_r))))), 
                                                        VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__dbr), (IData)(vlSelfRef.__PVT__pbr))), 
                                          VL_CONCAT_III(32,8,24, (IData)(vlSelfRef.__PVT__n126), 
                                                        VL_CONCAT_III(24,8,16, (IData)(vlSelfRef.__PVT__ir), (IData)(vlSelfRef.__PVT__pc))));
    vlSelfRef.__PVT__n193 = ((IData)(vlSelfRef.__PVT__n184) 
                             & (IData)(vlSelfRef.__PVT__n181));
    vlSelfRef.__PVT__n809 = ((IData)(vlSelfRef.__PVT__n808) 
                             & (IData)(vlSelfRef.__PVT__busb_r));
    vlSelfRef.__PVT__ss_2_back = vlSelfRef.__PVT__n910;
    vlSelfRef.__PVT__n13 = (0x000000ffU & VL_SEL_IQII(48, vlSelfRef.__PVT__n912, 0U, 8));
    vlSelfRef.__PVT__n14 = (0x000000ffU & VL_SEL_IQII(48, vlSelfRef.__PVT__n912, 8U, 8));
    vlSelfRef.__PVT__n15 = (0x000000ffU & VL_SEL_IQII(48, vlSelfRef.__PVT__n912, 0x10U, 8));
    vlSelfRef.__PVT__n16 = (0x000000ffU & VL_SEL_IQII(48, vlSelfRef.__PVT__n912, 0x18U, 8));
    vlSelfRef.__PVT__n17 = (0x000000ffU & VL_SEL_IQII(48, vlSelfRef.__PVT__n912, 0x20U, 8));
    vlSelfRef.__PVT__n18 = (0x000000ffU & VL_SEL_IQII(48, vlSelfRef.__PVT__n912, 0x28U, 8));
    vlSelfRef.__PVT__n80 = VL_CONCAT_QQI(48,40,8, vlSelfRef.__PVT__n78, (IData)(vlSelfRef.__PVT__n79));
    vlSelfRef.__PVT__n242 = ((IData)(vlSelfRef.__PVT__n235)
                              ? (IData)(vlSelfRef.__PVT__n238)
                              : (IData)(vlSelfRef.__PVT__n241));
    vlSelfRef.__PVT__n360 = (0x000001ffU & ((IData)(vlSelfRef.__PVT__n357) 
                                            + (IData)(vlSelfRef.__PVT__n359)));
    vlSelfRef.__PVT__VDA = vlSelfRef.__PVT__n66;
    vlSelfRef.__PVT__Sync = vlSelfRef.__PVT__n38;
    vlSelfRef.__PVT__n60 = ((IData)(vlSelfRef.__PVT__n59) 
                            & (IData)(vlSelfRef.__PVT__irqcycle));
    vlSelfRef.__PVT__n619 = ((IData)(vlSelfRef.__PVT__nmicycle) 
                             | (IData)(vlSelfRef.__PVT__n618));
    vlSelfRef.__PVT__n850 = ((IData)(vlSelfRef.__PVT__n849) 
                             & (IData)(vlSelfRef.__PVT__n847));
    vlSelfRef.__PVT__pwithb = vlSelfRef.__PVT__n778;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__din 
        = vlSelfRef.__PVT__ss_3_back;
    vlSelfRef.__PVT__n47 = ((IData)(vlSelfRef.__PVT__n46) 
                            & (IData)(vlSelfRef.__PVT__n43));
    vlSelfRef.__PVT__n171 = ((IData)(vlSelfRef.__PVT__n165) 
                             | (IData)(vlSelfRef.__PVT__n170));
    vlSelfRef.__PVT__n859 = vlSelfRef.__PVT__n846;
    vlSelfRef.__PVT__n454 = ((IData)(vlSelfRef.__PVT__n453) 
                             & (IData)(vlSelfRef.__PVT__n452));
    vlSelfRef.__PVT__n220 = ((IData)(vlSelfRef.__PVT__n219) 
                             & (IData)(vlSelfRef.__PVT__n218));
    vlSelfRef.__PVT__n425 = VL_CONCAT_III(7,4,3, VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n424), (IData)(vlSelfRef.__PVT__n421)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n418), (IData)(vlSelfRef.__PVT__n415))), 
                                          VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n412), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n409), (IData)(vlSelfRef.__PVT__n406))));
    vlSelfRef.__PVT__ss_1_back = vlSelfRef.__PVT__n909;
    vlSelfRef.__PVT__n187 = ((IData)(vlSelfRef.__PVT__n193)
                              ? (IData)(vlSelfRef.__PVT__n186)
                              : (IData)(vlSelfRef.__PVT__pc));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__din 
        = vlSelfRef.__PVT__ss_2_back;
    vlSelfRef.__PVT__DEBUG__05bI__05d = vlSelfRef.__PVT__n13;
    vlSelfRef.__PVT__DEBUG__05bA__05d = vlSelfRef.__PVT__n14;
    vlSelfRef.__PVT__DEBUG__05bX__05d = vlSelfRef.__PVT__n15;
    vlSelfRef.__PVT__DEBUG__05bY__05d = vlSelfRef.__PVT__n16;
    vlSelfRef.__PVT__DEBUG__05bS__05d = vlSelfRef.__PVT__n17;
    vlSelfRef.__PVT__DEBUG__05bP__05d = vlSelfRef.__PVT__n18;
    vlSelfRef.__PVT__n82 = VL_CONCAT_QQI(56,48,8, vlSelfRef.__PVT__n80, (IData)(vlSelfRef.__PVT__n81));
    vlSelfRef.__PVT__n61 = (1U & (~ (IData)(vlSelfRef.__PVT__n60)));
    vlSelfRef.__PVT__n620 = ((IData)(vlSelfRef.__PVT__n619) 
                             | (IData)(vlSelfRef.__PVT__nmi_entered));
    vlSelfRef.__PVT__n853 = vlSelfRef.__PVT__n850;
    vlSelfRef.__PVT__n825 = (((((((((0x1000U == (IData)(vlSelfRef.__PVT__n823)) 
                                    | (0x0800U == (IData)(vlSelfRef.__PVT__n823))) 
                                   | (0x0400U == (IData)(vlSelfRef.__PVT__n823))) 
                                  | (0x0200U == (IData)(vlSelfRef.__PVT__n823))) 
                                 | (0x0100U == (IData)(vlSelfRef.__PVT__n823))) 
                                | (0x0080U == (IData)(vlSelfRef.__PVT__n823))) 
                               | (0x0040U == (IData)(vlSelfRef.__PVT__n823))) 
                              | (0x0020U == (IData)(vlSelfRef.__PVT__n823)))
                              ? ((0x1000U == (IData)(vlSelfRef.__PVT__n823))
                                  ? 0U : ((0x0800U 
                                           == (IData)(vlSelfRef.__PVT__n823))
                                           ? (IData)(vlSelfRef.__PVT__n817)
                                           : ((0x0400U 
                                               == (IData)(vlSelfRef.__PVT__n823))
                                               ? (IData)(vlSelfRef.__PVT__n813)
                                               : ((0x0200U 
                                                   == (IData)(vlSelfRef.__PVT__n823))
                                                   ? (IData)(vlSelfRef.__PVT__n809)
                                                   : 
                                                  ((0x0100U 
                                                    == (IData)(vlSelfRef.__PVT__n823))
                                                    ? (IData)(vlSelfRef.__PVT__n803)
                                                    : 
                                                   ((0x0080U 
                                                     == (IData)(vlSelfRef.__PVT__n823))
                                                     ? (IData)(vlSelfRef.__PVT__n798)
                                                     : 
                                                    ((0x0040U 
                                                      == (IData)(vlSelfRef.__PVT__n823))
                                                      ? (IData)(vlSelfRef.__PVT__n795)
                                                      : (IData)(vlSelfRef.__PVT__pwithb))))))))
                              : ((0x0010U == (IData)(vlSelfRef.__PVT__n823))
                                  ? (IData)(vlSelfRef.__PVT__n790)
                                  : ((8U == (IData)(vlSelfRef.__PVT__n823))
                                      ? (IData)(vlSelfRef.__PVT__n787)
                                      : ((4U == (IData)(vlSelfRef.__PVT__n823))
                                          ? (IData)(vlSelfRef.__PVT__n784)
                                          : ((2U == (IData)(vlSelfRef.__PVT__n823))
                                              ? (IData)(vlSelfRef.__PVT__n781)
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__n823))
                                                  ? (IData)(vlSelfRef.__PVT__dl)
                                                  : 0U))))));
    vlSelfRef.__PVT__n51 = ((IData)(vlSelfRef.__PVT__n50) 
                            & (IData)(vlSelfRef.__PVT__n47));
    vlSelfRef.__PVT__n222 = ((IData)(vlSelfRef.__PVT__n221) 
                             & (IData)(vlSelfRef.__PVT__n220));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__din 
        = vlSelfRef.__PVT__ss_1_back;
    vlSelfRef.__PVT__n84 = VL_CONCAT_QQI(64,56,8, vlSelfRef.__PVT__n82, (IData)(vlSelfRef.__PVT__n83));
    vlSelfRef.__PVT__VP_n = vlSelfRef.__PVT__n61;
    vlSelfRef.__PVT__n630 = ((IData)(vlSelfRef.__PVT__n620) 
                             & (IData)(vlSelfRef.__PVT__n626));
    vlSelfRef.__PVT__n628 = ((IData)(vlSelfRef.__PVT__n620)
                              ? 2U : 6U);
    vlSelfRef.__PVT__n855 = ((~ (IData)(vlSelfRef.__PVT__n846)) 
                             & (IData)(vlSelfRef.__PVT__n853));
    vlSelfRef.__PVT__do_r = vlSelfRef.__PVT__n825;
    vlSelfRef.__PVT__n52 = (1U & (~ (IData)(vlSelfRef.__PVT__n51)));
    vlSelfRef.__PVT__n225 = ((IData)(vlSelfRef.__PVT__n222)
                              ? (IData)(vlSelfRef.__PVT__n224)
                              : (IData)(vlSelfRef.__PVT__n187));
    vlSelfRef.__PVT__Regs = vlSelfRef.__PVT__n84;
    vlSelfRef.__PVT__n635 = ((~ (IData)(vlSelfRef.__PVT__rstcycle)) 
                             & (IData)(vlSelfRef.__PVT__n630));
    vlSelfRef.__PVT__n631 = ((IData)(vlSelfRef.__PVT__rstcycle)
                              ? 4U : (IData)(vlSelfRef.__PVT__n628));
    vlSelfRef.__PVT__n593 = ((IData)(vlSelfRef.__PVT__n592) 
                             & (IData)(vlSelfRef.__PVT__do_r));
    vlSelfRef.__PVT__DO = vlSelfRef.__PVT__do_r;
    vlSelfRef.__PVT__ML_n = vlSelfRef.__PVT__n52;
    vlSelfRef.__PVT__n251 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n225), 0U, 8));
    vlSelfRef.__PVT__n255 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n225), 8U, 8));
    vlSelfRef.__PVT__n243 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n225), 8U, 8));
    vlSelfRef.__PVT__n647 = ((IData)(vlSelfRef.__PVT__n614) 
                             & (IData)(vlSelfRef.__PVT__n635));
    vlSelfRef.__PVT__n641 = (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__n631), 1U, 2));
    vlSelfRef.__PVT__n639 = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__n631), 0U));
    vlSelfRef.__PVT__n640 = ((IData)(vlSelfRef.__PVT__n637) 
                             | (IData)(vlSelfRef.__PVT__n639));
    vlSelfRef.__PVT__n644 = VL_CONCAT_III(9,6,3, (IData)(vlSelfRef.__PVT__n633), 
                                          VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__n641), (IData)(vlSelfRef.__PVT__n640)));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n208 = (0U == (IData)(vlSelfRef.__PVT__Mode));
    vlSelfRef.__PVT__n461 = (0U != (IData)(vlSelfRef.__PVT__Mode));
    vlSelfRef.__PVT__n947 = ((IData)(vlSelfRef.__PVT__Enable) 
                             | (IData)(vlSelfRef.__PVT__res_n_d));
    vlSelfRef.__PVT__n945 = ((IData)(vlSelfRef.__PVT__Enable)
                              ? (IData)(vlSelfRef.__PVT__res_n_d)
                              : (IData)(vlSelfRef.__PVT__res_n_i));
    vlSelfRef.__PVT__ss_3 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__dout;
    vlSelfRef.__PVT__ss_1 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__dout;
    vlSelfRef.__PVT__ss_2 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__dout;
    vlSelfRef.__PVT__ldad = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldad;
    vlSelfRef.__PVT__ldbah = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldbah;
    vlSelfRef.__PVT__adadd = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__adadd;
    vlSelfRef.__PVT__ldalu = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldalu;
    vlSelfRef.__PVT__dec_s = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__dec_s;
    vlSelfRef.__PVT__inc_s = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__inc_s;
    vlSelfRef.__PVT__ldbal = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldbal;
    vlSelfRef.__PVT__addy = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__addy;
    vlSelfRef.__PVT__set_addr_to = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__set_addr_to;
    vlSelfRef.__PVT__lddi = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__lddi;
    vlSelfRef.__PVT__write = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__write;
    vlSelfRef.__PVT__lds = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__lds;
    vlSelfRef.__PVT__lcycle = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__lcycle;
    vlSelfRef.__PVT__brkatna = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__brkatna;
    vlSelfRef.__PVT__jump = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__jump;
    vlSelfRef.__PVT__baadd = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__baadd;
    vlSelfRef.__PVT__ldp = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldp;
    vlSelfRef.__PVT__savep = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__savep;
    vlSelfRef.__PVT__pcadd = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__pcadd;
    vlSelfRef.__PVT__baquirk = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__baquirk;
    vlSelfRef.__PVT__lda = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__lda;
    vlSelfRef.__PVT__ldx = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldx;
    vlSelfRef.__PVT__ldy = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__ldy;
    vlSelfRef.__PVT__set_busa_to = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__set_busa_to;
    vlSelfRef.__PVT__write_data = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__write_data;
    vlSelfRef.__PVT__alu_op = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__mcode.__PVT__alu_op;
    vlSelfRef.__PVT__alu_q = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__q;
    vlSelfRef.__PVT__p_out = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu.__PVT__p_out;
    vlSelfRef.__PVT__n209 = ((IData)(vlSelfRef.__PVT__n206) 
                             | (IData)(vlSelfRef.__PVT__n208));
    vlSelfRef.__PVT__n558 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0U, 8));
    vlSelfRef.__PVT__n559 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 8U, 8));
    vlSelfRef.__PVT__n560 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x10U, 8));
    vlSelfRef.__PVT__n561 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x18U, 8));
    vlSelfRef.__PVT__n562 = (0x000001ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x20U, 9));
    vlSelfRef.__PVT__n563 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x29U, 8));
    vlSelfRef.__PVT__n564 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x31U, 8));
    vlSelfRef.__PVT__n565 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x39U));
    vlSelfRef.__PVT__n139 = (0x0000ffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0U, 16));
    vlSelfRef.__PVT__n140 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x10U, 8));
    vlSelfRef.__PVT__n141 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x20U, 8));
    vlSelfRef.__PVT__n142 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x28U, 8));
    vlSelfRef.__PVT__n143 = (3U & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x30U, 2));
    vlSelfRef.__PVT__n144 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x32U));
    vlSelfRef.__PVT__n148 = (0x0000000fU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x37U, 4));
    vlSelfRef.__PVT__n150 = (3U & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x3bU, 2));
    vlSelfRef.__PVT__n152 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x3dU));
    vlSelfRef.__PVT__n153 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x3eU));
    vlSelfRef.__PVT__n154 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x3fU));
    vlSelfRef.__PVT__n145 = (0x0000000fU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x33U, 4));
    vlSelfRef.__PVT__n157 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_1, 0x18U, 8));
    vlSelfRef.__PVT__n837 = (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x25U, 3));
    vlSelfRef.__PVT__n838 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x28U));
    vlSelfRef.__PVT__n839 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x29U));
    vlSelfRef.__PVT__n840 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x2aU));
    vlSelfRef.__PVT__n841 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x2bU));
    vlSelfRef.__PVT__n155 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0U));
    vlSelfRef.__PVT__n377 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x22U));
    vlSelfRef.__PVT__n378 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x23U));
    vlSelfRef.__PVT__n374 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x0aU, 8));
    vlSelfRef.__PVT__n375 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x12U, 8));
    vlSelfRef.__PVT__n376 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_2, 0x1aU, 8));
    vlSelfRef.__PVT__n158 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_2, 1U));
    vlSelfRef.__PVT__n373 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_2, 2U, 8));
    vlSelfRef.__PVT__n611 = ((IData)(vlSelfRef.__PVT__addy)
                              ? (IData)(vlSelfRef.__PVT__n608)
                              : (IData)(vlSelfRef.__PVT__n610));
    vlSelfRef.__PVT__n178 = (1U & (~ (IData)(vlSelfRef.__PVT__write)));
    vlSelfRef.__PVT__n195 = ((IData)(vlSelfRef.__PVT__lds) 
                             & (IData)(vlSelfRef.__PVT__n181));
    vlSelfRef.__PVT__n828 = ((IData)(vlSelfRef.__PVT__mcycle) 
                             == (IData)(vlSelfRef.__PVT__lcycle));
    vlSelfRef.__PVT__n842 = ((IData)(vlSelfRef.__PVT__mcycle) 
                             == (IData)(vlSelfRef.__PVT__lcycle));
    vlSelfRef.__PVT__n700 = ((IData)(vlSelfRef.__PVT__brkatna) 
                             & (IData)(vlSelfRef.__PVT__n699));
    vlSelfRef.__PVT__n69 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__jump), 1U));
    vlSelfRef.__PVT__n491 = (1U != (IData)(vlSelfRef.__PVT__jump));
    vlSelfRef.__PVT__n482 = (1U != (IData)(vlSelfRef.__PVT__jump));
    vlSelfRef.__PVT__n885 = (1U != (IData)(vlSelfRef.__PVT__jump));
    vlSelfRef.__PVT__n229 = (1U == (IData)(vlSelfRef.__PVT__jump));
    vlSelfRef.__PVT__n232 = (2U == (IData)(vlSelfRef.__PVT__jump));
    vlSelfRef.__PVT__n247 = (3U == (IData)(vlSelfRef.__PVT__jump));
    vlSelfRef.__PVT__n579 = (1U == (IData)(vlSelfRef.__PVT__baadd));
    vlSelfRef.__PVT__n585 = (2U == (IData)(vlSelfRef.__PVT__baadd));
    vlSelfRef.__PVT__n602 = (3U == (IData)(vlSelfRef.__PVT__baadd));
    vlSelfRef.__PVT__n361 = ((IData)(vlSelfRef.__PVT__pcadd)
                              ? (IData)(vlSelfRef.__PVT__n360)
                              : (IData)(vlSelfRef.__PVT__n364));
    vlSelfRef.__PVT__n590 = (0U == (IData)(vlSelfRef.__PVT__baquirk));
    vlSelfRef.__PVT__n595 = (1U == (IData)(vlSelfRef.__PVT__baquirk));
    vlSelfRef.__PVT__n597 = (2U == (IData)(vlSelfRef.__PVT__baquirk));
    vlSelfRef.__PVT__n392 = ((IData)(vlSelfRef.__PVT__lda) 
                             & (IData)(vlSelfRef.__PVT__n381));
    vlSelfRef.__PVT__n394 = ((IData)(vlSelfRef.__PVT__ldx) 
                             & (IData)(vlSelfRef.__PVT__n381));
    vlSelfRef.__PVT__n388 = ((IData)(vlSelfRef.__PVT__lda) 
                             | (IData)(vlSelfRef.__PVT__ldx));
    vlSelfRef.__PVT__n396 = ((IData)(vlSelfRef.__PVT__ldy) 
                             & (IData)(vlSelfRef.__PVT__n381));
    vlSelfRef.__PVT__n706 = (0U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n709 = (1U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n712 = (2U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n715 = (3U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n718 = (4U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n720 = (5U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n724 = (6U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n730 = (7U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n738 = (8U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n743 = (9U == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n746 = (0x0aU == (IData)(vlSelfRef.__PVT__set_busa_to));
    vlSelfRef.__PVT__n210 = ((IData)(vlSelfRef.__PVT__n209) 
                             & (IData)(vlSelfRef.__PVT__dec_s));
    vlSelfRef.__PVT__n147 = VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__n145));
    vlSelfRef.__PVT__n296 = VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__n157));
    vlSelfRef.__PVT__n179 = ((IData)(vlSelfRef.__PVT__n178) 
                             | (IData)(vlSelfRef.__PVT__rstcycle));
    vlSelfRef.__PVT__n192 = ((IData)(vlSelfRef.__PVT__n195)
                              ? (IData)(vlSelfRef.__PVT__alu_q)
                              : (IData)(vlSelfRef.__PVT__n191));
    vlSelfRef.__PVT__n70 = (1U & (~ (IData)(vlSelfRef.__PVT__n69)));
    vlSelfRef.__PVT__n492 = ((IData)(vlSelfRef.__PVT__n489) 
                             | (IData)(vlSelfRef.__PVT__n491));
    vlSelfRef.__PVT__n483 = ((IData)(vlSelfRef.__PVT__n480) 
                             | (IData)(vlSelfRef.__PVT__n482));
    vlSelfRef.__PVT__n886 = ((IData)(vlSelfRef.__PVT__n883) 
                             | (IData)(vlSelfRef.__PVT__n885));
    vlSelfRef.__PVT__n248 = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n247), 
                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n232), (IData)(vlSelfRef.__PVT__n229)));
    vlSelfRef.__PVT__n603 = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n602), 
                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n585), (IData)(vlSelfRef.__PVT__n579)));
    vlSelfRef.__PVT__pcadder = vlSelfRef.__PVT__n361;
    vlSelfRef.__PVT__n598 = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n597), 
                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n595), (IData)(vlSelfRef.__PVT__n590)));
    vlSelfRef.__PVT__n389 = ((IData)(vlSelfRef.__PVT__n388) 
                             | (IData)(vlSelfRef.__PVT__ldy));
    vlSelfRef.__PVT__n747 = VL_CONCAT_III(11,6,5, VL_CONCAT_III(6,3,3, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n746), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n743), (IData)(vlSelfRef.__PVT__n738))), 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n730), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n724), (IData)(vlSelfRef.__PVT__n720)))), 
                                          VL_CONCAT_III(5,3,2, 
                                                        VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n718), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n715), (IData)(vlSelfRef.__PVT__n712))), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n709), (IData)(vlSelfRef.__PVT__n706))));
    vlSelfRef.__PVT__n204 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n203), (IData)(vlSelfRef.__PVT__n192));
    vlSelfRef.__PVT__n71 = vlSelfRef.__PVT__n70;
    vlSelfRef.__PVT__n502 = ((IData)(vlSelfRef.__PVT__n492) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n604 = ((4U == (IData)(vlSelfRef.__PVT__n603))
                              ? (IData)(vlSelfRef.__PVT__ad)
                              : ((2U == (IData)(vlSelfRef.__PVT__n603))
                                  ? (IData)(vlSelfRef.__PVT__ad)
                                  : ((1U == (IData)(vlSelfRef.__PVT__n603))
                                      ? (IData)(vlSelfRef.__PVT__n575)
                                      : (IData)(vlSelfRef.__PVT__ad))));
    vlSelfRef.__PVT__n245 = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__pcadder), 0U, 8));
    vlSelfRef.__PVT__n233 = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__pcadder), 8U));
    vlSelfRef.__PVT__n701 = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__pcadder), 8U));
    vlSelfRef.__PVT__n768 = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__pcadder), 0U, 8));
    vlSelfRef.__PVT__n599 = ((4U == (IData)(vlSelfRef.__PVT__n598))
                              ? (IData)(vlSelfRef.__PVT__do_r)
                              : ((2U == (IData)(vlSelfRef.__PVT__n598))
                                  ? (IData)(vlSelfRef.__PVT__n593)
                                  : ((1U == (IData)(vlSelfRef.__PVT__n598))
                                      ? (IData)(vlSelfRef.__PVT__n588)
                                      : (IData)(vlSelfRef.__PVT__bah))));
    vlSelfRef.__PVT__n397 = ((IData)(vlSelfRef.__PVT__n389) 
                             & (IData)(vlSelfRef.__PVT__n381));
    vlSelfRef.__PVT__n205 = ((IData)(vlSelfRef.__PVT__inc_s)
                              ? (IData)(vlSelfRef.__PVT__n202)
                              : (IData)(vlSelfRef.__PVT__n204));
    vlSelfRef.__PVT__VPA = vlSelfRef.__PVT__n71;
    vlSelfRef.__PVT__n612 = ((IData)(vlSelfRef.__PVT__adadd)
                              ? (IData)(vlSelfRef.__PVT__n611)
                              : (IData)(vlSelfRef.__PVT__n604));
    vlSelfRef.__PVT__n244 = ((IData)(vlSelfRef.__PVT__n233)
                              ? (IData)(vlSelfRef.__PVT__n242)
                              : (IData)(vlSelfRef.__PVT__n243));
    vlSelfRef.__PVT__n702 = (1U & (~ (IData)(vlSelfRef.__PVT__n701)));
    vlSelfRef.__PVT__n769 = VL_CONCAT_III(24,16,8, (IData)(vlSelfRef.__PVT__n767), (IData)(vlSelfRef.__PVT__n768));
    vlSelfRef.__PVT__n600 = ((IData)(vlSelfRef.__PVT__n586)
                              ? (IData)(vlSelfRef.__PVT__n599)
                              : (IData)(vlSelfRef.__PVT__bah));
    vlSelfRef.__PVT__n390 = ((IData)(vlSelfRef.__PVT__n397)
                              ? (IData)(vlSelfRef.__PVT__p_out)
                              : (IData)(vlSelfRef.__PVT__p));
    vlSelfRef.__PVT__n213 = ((IData)(vlSelfRef.__PVT__n210)
                              ? (IData)(vlSelfRef.__PVT__n212)
                              : (IData)(vlSelfRef.__PVT__n205));
    vlSelfRef.__PVT__n703 = ((IData)(vlSelfRef.__PVT__pcadd) 
                             & (IData)(vlSelfRef.__PVT__n702));
    vlSelfRef.__PVT__n774 = ((8U == (IData)(vlSelfRef.__PVT__n772))
                              ? vlSelfRef.__PVT__n769
                              : ((4U == (IData)(vlSelfRef.__PVT__n772))
                                  ? vlSelfRef.__PVT__n763
                                  : ((2U == (IData)(vlSelfRef.__PVT__n772))
                                      ? vlSelfRef.__PVT__n757
                                      : ((1U == (IData)(vlSelfRef.__PVT__n772))
                                          ? vlSelfRef.__PVT__n752
                                          : 0U))));
    vlSelfRef.__PVT__n605 = ((4U == (IData)(vlSelfRef.__PVT__n603))
                              ? (IData)(vlSelfRef.__PVT__n600)
                              : (IData)(vlSelfRef.__PVT__bah));
    vlSelfRef.__PVT__n398 = ((IData)(vlSelfRef.__PVT__savep)
                              ? (IData)(vlSelfRef.__PVT__p_out)
                              : (IData)(vlSelfRef.__PVT__n390));
    vlSelfRef.__PVT__n704 = ((IData)(vlSelfRef.__PVT__n700) 
                             | (IData)(vlSelfRef.__PVT__n703));
    vlSelfRef.__PVT__A = vlSelfRef.__PVT__n774;
    vlSelfRef.__PVT__n643 = ((IData)(vlSelfRef.__PVT__n614)
                              ? 0xffU : (IData)(vlSelfRef.__PVT__n605));
    vlSelfRef.__PVT__n399 = ((IData)(vlSelfRef.__PVT__ldp)
                              ? (IData)(vlSelfRef.__PVT__alu_q)
                              : (IData)(vlSelfRef.__PVT__n398));
    vlSelfRef.__PVT__brk = vlSelfRef.__PVT__n704;
    vlSelfRef.__PVT__n443 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 1U));
    vlSelfRef.__PVT__n444 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 7U));
    vlSelfRef.__PVT__n435 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 0U));
    vlSelfRef.__PVT__n439 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 6U));
    vlSelfRef.__PVT__n426 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 0U));
    vlSelfRef.__PVT__n432 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 6U));
    vlSelfRef.__PVT__n437 = (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 2U, 2));
    vlSelfRef.__PVT__n428 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 2U));
    vlSelfRef.__PVT__n430 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n399), 3U));
    vlSelfRef.__PVT__n829 = (1U & (~ (IData)(vlSelfRef.__PVT__brk)));
    vlSelfRef.__PVT__n200 = ((IData)(vlSelfRef.__PVT__brk)
                              ? 0U : (IData)(vlSelfRef.__PVT__set_addr_to));
    vlSelfRef.__PVT__n843 = ((IData)(vlSelfRef.__PVT__n842) 
                             | (IData)(vlSelfRef.__PVT__brk));
    vlSelfRef.__PVT__n427 = ((0x40U == (IData)(vlSelfRef.__PVT__n425))
                              ? (IData)(vlSelfRef.__PVT__n426)
                              : ((0x20U == (IData)(vlSelfRef.__PVT__n425))
                                  ? (IData)(vlSelfRef.__PVT__n426)
                                  : ((0x10U == (IData)(vlSelfRef.__PVT__n425))
                                      ? (IData)(vlSelfRef.__PVT__n426)
                                      : ((8U == (IData)(vlSelfRef.__PVT__n425))
                                          ? (IData)(vlSelfRef.__PVT__n426)
                                          : ((4U == (IData)(vlSelfRef.__PVT__n425))
                                              ? (IData)(vlSelfRef.__PVT__n426)
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__n425)) 
                                                 || ((1U 
                                                      != (IData)(vlSelfRef.__PVT__n425)) 
                                                     && (IData)(vlSelfRef.__PVT__n426))))))));
    vlSelfRef.__PVT__n433 = ((0x40U == (IData)(vlSelfRef.__PVT__n425))
                              ? (IData)(vlSelfRef.__PVT__n432)
                              : ((0x20U == (IData)(vlSelfRef.__PVT__n425))
                                  ? (IData)(vlSelfRef.__PVT__n432)
                                  : ((0x10U != (IData)(vlSelfRef.__PVT__n425)) 
                                     && (IData)(vlSelfRef.__PVT__n432))));
    vlSelfRef.__PVT__n429 = ((0x40U == (IData)(vlSelfRef.__PVT__n425))
                              ? (IData)(vlSelfRef.__PVT__n428)
                              : ((0x20U == (IData)(vlSelfRef.__PVT__n425))
                                  ? (IData)(vlSelfRef.__PVT__n428)
                                  : ((0x10U == (IData)(vlSelfRef.__PVT__n425))
                                      ? (IData)(vlSelfRef.__PVT__n428)
                                      : ((8U == (IData)(vlSelfRef.__PVT__n425)) 
                                         || ((4U != (IData)(vlSelfRef.__PVT__n425)) 
                                             && (IData)(vlSelfRef.__PVT__n428))))));
    vlSelfRef.__PVT__n431 = ((0x40U == (IData)(vlSelfRef.__PVT__n425)) 
                             || ((0x20U != (IData)(vlSelfRef.__PVT__n425)) 
                                 && (IData)(vlSelfRef.__PVT__n430)));
    vlSelfRef.__PVT__n830 = ((IData)(vlSelfRef.__PVT__n829) 
                             & (IData)(vlSelfRef.__PVT__n828));
    vlSelfRef.__PVT__n869 = ((IData)(vlSelfRef.__PVT__n843)
                              ? 0U : (IData)(vlSelfRef.__PVT__n867));
    vlSelfRef.__PVT__n874 = ((IData)(vlSelfRef.__PVT__n846) 
                             & (IData)(vlSelfRef.__PVT__n843));
    vlSelfRef.__PVT__n436 = ((IData)(vlSelfRef.__PVT__n402)
                              ? (IData)(vlSelfRef.__PVT__n427)
                              : (IData)(vlSelfRef.__PVT__n435));
    vlSelfRef.__PVT__n440 = ((IData)(vlSelfRef.__PVT__n402)
                              ? (IData)(vlSelfRef.__PVT__n433)
                              : (IData)(vlSelfRef.__PVT__n439));
    vlSelfRef.__PVT__n434 = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n431), (IData)(vlSelfRef.__PVT__n429));
    vlSelfRef.__PVT__n831 = vlSelfRef.__PVT__n830;
    vlSelfRef.__PVT__n438 = ((IData)(vlSelfRef.__PVT__n402)
                              ? (IData)(vlSelfRef.__PVT__n434)
                              : (IData)(vlSelfRef.__PVT__n437));
    vlSelfRef.__PVT__Instrnew = vlSelfRef.__PVT__n831;
    vlSelfRef.__PVT__n456 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__n438), 0U));
    vlSelfRef.__PVT__n458 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__n438), 1U));
    vlSelfRef.__PVT__n457 = ((IData)(vlSelfRef.__PVT__n454) 
                             | (IData)(vlSelfRef.__PVT__n456));
    vlSelfRef.__PVT__n463 = ((~ (IData)(vlSelfRef.__PVT__n461)) 
                             & (IData)(vlSelfRef.__PVT__n458));
    vlSelfRef.__PVT__n465 = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n458), (IData)(vlSelfRef.__PVT__n457));
    vlSelfRef.__PVT__n464 = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n463), 1U);
    vlSelfRef.__PVT__n466 = ((IData)(vlSelfRef.__PVT__rstcycle)
                              ? (IData)(vlSelfRef.__PVT__n464)
                              : (IData)(vlSelfRef.__PVT__n465));
    vlSelfRef.__PVT__n468 = VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__n444), 
                                                               VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n440), 3U)), 
                                          VL_CONCAT_III(4,2,2, (IData)(vlSelfRef.__PVT__n466), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n443), (IData)(vlSelfRef.__PVT__n436))));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n880 = (1U & (~ (IData)(vlSelfRef.__PVT__NMI_n)));
    vlSelfRef.__PVT__n493 = ((IData)(vlSelfRef.__PVT__n502)
                              ? (IData)(vlSelfRef.__PVT__NMI_n)
                              : (IData)(vlSelfRef.__PVT__nmi_n_o));
    vlSelfRef.__PVT__n887 = ((IData)(vlSelfRef.__PVT__n886) 
                             & (IData)(vlSelfRef.__PVT__n880));
    vlSelfRef.__PVT__n888 = ((IData)(vlSelfRef.__PVT__n887) 
                             & (IData)(vlSelfRef.__PVT__nmi_n_o));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__3(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__clk 
        = vlSelfRef.__PVT__Clk;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__clk 
        = vlSelfRef.__PVT__Clk;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__clk 
        = vlSelfRef.__PVT__Clk;
    vlSelfRef.__PVT__n137 = (1U & (~ (IData)(vlSelfRef.__PVT__Pwr_n)));
    vlSelfRef.__PVT__n372 = (1U & (~ (IData)(vlSelfRef.__PVT__Pwr_n)));
    vlSelfRef.__PVT__n516 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n515));
    vlSelfRef.__PVT__n521 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n520));
    vlSelfRef.__PVT__n526 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n525));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__4(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSelfRef.__PVT__n510 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n378)
                              : (IData)(vlSelfRef.__PVT__n493));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSelfRef.__PVT__n115 = (1U & (~ (IData)(vlSelfRef.__PVT__Res_n)));
    vlSelfRef.__PVT__n172 = (1U & (~ (IData)(vlSelfRef.__PVT__Rdy)));
    vlSelfRef.__PVT__n34 = ((IData)(vlSelfRef.__PVT__Rdy) 
                            | (IData)(vlSelfRef.__PVT__n33));
    vlSelfRef.__PVT__n531 = ((IData)(vlSelfRef.__PVT__n372)
                              ? (IData)(vlSelfRef.__PVT__nmi_n_o)
                              : (IData)(vlSelfRef.__PVT__n510));
    vlSelfRef.__PVT__n173 = ((IData)(vlSelfRef.__PVT__n172) 
                             & (IData)(vlSelfRef.__PVT__n171));
    vlSelfRef.__PVT__really_rdy = vlSelfRef.__PVT__n34;
    vlSelfRef.__PVT__n175 = ((IData)(vlSelfRef.__PVT__n173) 
                             | (IData)(vlSelfRef.__PVT__rdy_mod));
    vlSelfRef.__PVT__n893 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n665 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n666 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n667 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n668 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n669 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n670 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n672 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n278 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n279 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n281 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n282 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n283 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n284 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n663 = ((IData)(vlSelfRef.__PVT__n570) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n280 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n288 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n289 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n290 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n292 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n484 = (1U & (~ (IData)(vlSelfRef.__PVT__really_rdy)));
    vlSelfRef.__PVT__n271 = ((IData)(vlSelfRef.__PVT__n181) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n272 = ((IData)(vlSelfRef.__PVT__n181) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n273 = ((IData)(vlSelfRef.__PVT__n181) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n500 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n470 = ((IData)(vlSelfRef.__PVT__n392) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n472 = ((IData)(vlSelfRef.__PVT__n394) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n474 = ((IData)(vlSelfRef.__PVT__n396) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n876 = ((IData)(vlSelfRef.__PVT__n843) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n877 = ((IData)(vlSelfRef.__PVT__n843) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n878 = ((IData)(vlSelfRef.__PVT__n843) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n879 = ((IData)(vlSelfRef.__PVT__n874) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n177 = ((~ (IData)(vlSelfRef.__PVT__n160)) 
                             & (IData)(vlSelfRef.__PVT__n175));
    vlSelfRef.__PVT__n875 = ((IData)(vlSelfRef.__PVT__n893)
                              ? (IData)(vlSelfRef.__PVT__n869)
                              : (IData)(vlSelfRef.__PVT__mcycle));
    vlSelfRef.__PVT__n664 = ((IData)(vlSelfRef.__PVT__n672)
                              ? (IData)(vlSelfRef.__PVT__n647)
                              : (IData)(vlSelfRef.__PVT__nmi_entered));
    vlSelfRef.__PVT__n259 = ((IData)(vlSelfRef.__PVT__n278)
                              ? 0xffU : (IData)(vlSelfRef.__PVT__pbr));
    vlSelfRef.__PVT__n261 = ((IData)(vlSelfRef.__PVT__n279)
                              ? 0xffU : (IData)(vlSelfRef.__PVT__dbr));
    vlSelfRef.__PVT__n264 = ((IData)(vlSelfRef.__PVT__n281)
                              ? (IData)(vlSelfRef.__PVT__n213)
                              : (IData)(vlSelfRef.__PVT__s));
    vlSelfRef.__PVT__n266 = ((~ (IData)(vlSelfRef.__PVT__n282)) 
                             & (IData)(vlSelfRef.__PVT__ef_i));
    vlSelfRef.__PVT__n268 = ((~ (IData)(vlSelfRef.__PVT__n283)) 
                             & (IData)(vlSelfRef.__PVT__mf_i));
    vlSelfRef.__PVT__n270 = ((~ (IData)(vlSelfRef.__PVT__n284)) 
                             & (IData)(vlSelfRef.__PVT__xf_i));
    vlSelfRef.__PVT__n671 = ((IData)(vlSelfRef.__PVT__n663) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n274 = ((IData)(vlSelfRef.__PVT__n288)
                              ? (IData)(vlSelfRef.__PVT__alu_op)
                              : (IData)(vlSelfRef.__PVT__alu_op_r));
    vlSelfRef.__PVT__n275 = ((IData)(vlSelfRef.__PVT__n289)
                              ? (IData)(vlSelfRef.__PVT__write_data)
                              : (IData)(vlSelfRef.__PVT__write_data_r));
    vlSelfRef.__PVT__n276 = ((IData)(vlSelfRef.__PVT__n290)
                              ? (IData)(vlSelfRef.__PVT__n200)
                              : (IData)(vlSelfRef.__PVT__set_addr_to_r));
    vlSelfRef.__PVT__n277 = ((IData)(vlSelfRef.__PVT__n292)
                              ? (IData)(vlSelfRef.__PVT__n179)
                              : (IData)(vlSelfRef.__PVT__wrn_i));
    vlSelfRef.__PVT__n485 = ((IData)(vlSelfRef.__PVT__n483) 
                             | (IData)(vlSelfRef.__PVT__n484));
    vlSelfRef.__PVT__n285 = ((IData)(vlSelfRef.__PVT__n271) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n286 = ((IData)(vlSelfRef.__PVT__n272) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n287 = ((IData)(vlSelfRef.__PVT__n273) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n475 = ((IData)(vlSelfRef.__PVT__n500)
                              ? (IData)(vlSelfRef.__PVT__n468)
                              : (IData)(vlSelfRef.__PVT__p));
    vlSelfRef.__PVT__n495 = ((IData)(vlSelfRef.__PVT__n470) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n497 = ((IData)(vlSelfRef.__PVT__n472) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n499 = ((IData)(vlSelfRef.__PVT__n474) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n894 = ((IData)(vlSelfRef.__PVT__n876) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n895 = ((IData)(vlSelfRef.__PVT__n877) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n896 = ((IData)(vlSelfRef.__PVT__n878) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n862 = ((~ (IData)(vlSelfRef.__PVT__n879)) 
                             & (IData)(vlSelfRef.__PVT__nmiact));
    vlSelfRef.__PVT__n291 = ((IData)(vlSelfRef.__PVT__Enable)
                              ? (IData)(vlSelfRef.__PVT__n177)
                              : (IData)(vlSelfRef.__PVT__rdy_mod));
    vlSelfRef.__PVT__n898 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n837)
                              : (IData)(vlSelfRef.__PVT__n875));
    vlSelfRef.__PVT__n680 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n565)
                              : (IData)(vlSelfRef.__PVT__n664));
    vlSelfRef.__PVT__n293 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__pbr)
                              : (IData)(vlSelfRef.__PVT__n259));
    vlSelfRef.__PVT__n294 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__dbr)
                              : (IData)(vlSelfRef.__PVT__n261));
    vlSelfRef.__PVT__n297 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n296)
                              : (IData)(vlSelfRef.__PVT__n264));
    vlSelfRef.__PVT__n298 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__ef_i)
                              : (IData)(vlSelfRef.__PVT__n266));
    vlSelfRef.__PVT__n299 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__mf_i)
                              : (IData)(vlSelfRef.__PVT__n268));
    vlSelfRef.__PVT__n300 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__xf_i)
                              : (IData)(vlSelfRef.__PVT__n270));
    vlSelfRef.__PVT__n304 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__alu_op_r)
                              : (IData)(vlSelfRef.__PVT__n274));
    vlSelfRef.__PVT__n305 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__write_data_r)
                              : (IData)(vlSelfRef.__PVT__n275));
    vlSelfRef.__PVT__n306 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__set_addr_to_r)
                              : (IData)(vlSelfRef.__PVT__n276));
    vlSelfRef.__PVT__n308 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__wrn_i)
                              : (IData)(vlSelfRef.__PVT__n277));
    vlSelfRef.__PVT__n501 = ((IData)(vlSelfRef.__PVT__n485) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n197 = ((IData)(vlSelfRef.__PVT__n286)
                              ? (IData)(vlSelfRef.__PVT__Mode)
                              : (IData)(vlSelfRef.__PVT__mode_r));
    vlSelfRef.__PVT__n198 = ((IData)(vlSelfRef.__PVT__n287)
                              ? (IData)(vlSelfRef.__PVT__BCD_en)
                              : (IData)(vlSelfRef.__PVT__bcd_en_r));
    vlSelfRef.__PVT__n507 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n373)
                              : (IData)(vlSelfRef.__PVT__n475));
    vlSelfRef.__PVT__n383 = ((IData)(vlSelfRef.__PVT__n495)
                              ? (IData)(vlSelfRef.__PVT__alu_q)
                              : (IData)(vlSelfRef.__PVT__n382));
    vlSelfRef.__PVT__n385 = ((IData)(vlSelfRef.__PVT__n497)
                              ? (IData)(vlSelfRef.__PVT__alu_q)
                              : (IData)(vlSelfRef.__PVT__n384));
    vlSelfRef.__PVT__n387 = ((IData)(vlSelfRef.__PVT__n499)
                              ? (IData)(vlSelfRef.__PVT__alu_q)
                              : (IData)(vlSelfRef.__PVT__n386));
    vlSelfRef.__PVT__n871 = ((~ (IData)(vlSelfRef.__PVT__n894)) 
                             & (IData)(vlSelfRef.__PVT__rstcycle));
    vlSelfRef.__PVT__n872 = ((IData)(vlSelfRef.__PVT__n895)
                              ? (IData)(vlSelfRef.__PVT__n855)
                              : (IData)(vlSelfRef.__PVT__irqcycle));
    vlSelfRef.__PVT__n873 = ((IData)(vlSelfRef.__PVT__n896)
                              ? (IData)(vlSelfRef.__PVT__n859)
                              : (IData)(vlSelfRef.__PVT__nmicycle));
    vlSelfRef.__PVT__n890 = ((IData)(vlSelfRef.__PVT__n888) 
                             | (IData)(vlSelfRef.__PVT__n862));
    vlSelfRef.__PVT__n307 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n158)
                              : (IData)(vlSelfRef.__PVT__n291));
    vlSelfRef.__PVT__n688 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__nmi_entered)
                              : (IData)(vlSelfRef.__PVT__n680));
    vlSelfRef.__PVT__n309 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n141)
                              : (IData)(vlSelfRef.__PVT__n293));
    vlSelfRef.__PVT__n310 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n142)
                              : (IData)(vlSelfRef.__PVT__n294));
    vlSelfRef.__PVT__n312 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__s)
                              : (IData)(vlSelfRef.__PVT__n297));
    vlSelfRef.__PVT__n313 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n153)
                              : (IData)(vlSelfRef.__PVT__n298));
    vlSelfRef.__PVT__n314 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n154)
                              : (IData)(vlSelfRef.__PVT__n299));
    vlSelfRef.__PVT__n315 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n155)
                              : (IData)(vlSelfRef.__PVT__n300));
    vlSelfRef.__PVT__n319 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n147)
                              : (IData)(vlSelfRef.__PVT__n304));
    vlSelfRef.__PVT__n320 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n148)
                              : (IData)(vlSelfRef.__PVT__n305));
    vlSelfRef.__PVT__n321 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n150)
                              : (IData)(vlSelfRef.__PVT__n306));
    vlSelfRef.__PVT__n323 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n152)
                              : (IData)(vlSelfRef.__PVT__n308));
    vlSelfRef.__PVT__n302 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__mode_r)
                              : (IData)(vlSelfRef.__PVT__n197));
    vlSelfRef.__PVT__n303 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__bcd_en_r)
                              : (IData)(vlSelfRef.__PVT__n198));
    vlSelfRef.__PVT__n528 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n507));
    vlSelfRef.__PVT__n504 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n374)
                              : (IData)(vlSelfRef.__PVT__n383));
    vlSelfRef.__PVT__n505 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n375)
                              : (IData)(vlSelfRef.__PVT__n385));
    vlSelfRef.__PVT__n506 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n376)
                              : (IData)(vlSelfRef.__PVT__n387));
    vlSelfRef.__PVT__n899 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n838)
                              : (IData)(vlSelfRef.__PVT__n871));
    vlSelfRef.__PVT__n900 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n839)
                              : (IData)(vlSelfRef.__PVT__n872));
    vlSelfRef.__PVT__n901 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n840)
                              : (IData)(vlSelfRef.__PVT__n873));
    vlSelfRef.__PVT__n892 = ((~ (IData)(vlSelfRef.__PVT__nmi_entered)) 
                             & (IData)(vlSelfRef.__PVT__n890));
    vlSelfRef.__PVT__n322 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__rdy_mod)
                              : (IData)(vlSelfRef.__PVT__n307));
    vlSelfRef.__PVT__n324 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__pbr)
                              : (IData)(vlSelfRef.__PVT__n309));
    vlSelfRef.__PVT__n325 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__dbr)
                              : (IData)(vlSelfRef.__PVT__n310));
    vlSelfRef.__PVT__n328 = ((IData)(vlSelfRef.__PVT__n137)
                              ? 0U : (IData)(vlSelfRef.__PVT__n312));
    vlSelfRef.__PVT__n329 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__ef_i)
                              : (IData)(vlSelfRef.__PVT__n313));
    vlSelfRef.__PVT__n330 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__mf_i)
                              : (IData)(vlSelfRef.__PVT__n314));
    vlSelfRef.__PVT__n331 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__xf_i)
                              : (IData)(vlSelfRef.__PVT__n315));
    vlSelfRef.__PVT__n335 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__alu_op_r)
                              : (IData)(vlSelfRef.__PVT__n319));
    vlSelfRef.__PVT__n336 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__write_data_r)
                              : (IData)(vlSelfRef.__PVT__n320));
    vlSelfRef.__PVT__n337 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__set_addr_to_r)
                              : (IData)(vlSelfRef.__PVT__n321));
    vlSelfRef.__PVT__n339 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__wrn_i)
                              : (IData)(vlSelfRef.__PVT__n323));
    vlSelfRef.__PVT__n317 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n143)
                              : (IData)(vlSelfRef.__PVT__n302));
    vlSelfRef.__PVT__n318 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n144)
                              : (IData)(vlSelfRef.__PVT__n303));
    vlSelfRef.__PVT__n538 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 7U));
    vlSelfRef.__PVT__n539 = (0x0000003fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 0U, 6));
    vlSelfRef.__PVT__n536 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 6U));
    vlSelfRef.__PVT__n513 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n504));
    vlSelfRef.__PVT__n518 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n505));
    vlSelfRef.__PVT__n523 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n506));
    vlSelfRef.__PVT__n897 = ((IData)(vlSelfRef.__PVT__Enable)
                              ? (IData)(vlSelfRef.__PVT__n892)
                              : (IData)(vlSelfRef.__PVT__nmiact));
    vlSelfRef.__PVT__n338 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__rdy_mod)
                              : (IData)(vlSelfRef.__PVT__n322));
    vlSelfRef.__PVT__n333 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__mode_r)
                              : (IData)(vlSelfRef.__PVT__n317));
    vlSelfRef.__PVT__n334 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__bcd_en_r)
                              : (IData)(vlSelfRef.__PVT__n318));
    vlSelfRef.__PVT__n537 = ((IData)(vlSelfRef.__PVT__n534) 
                             | (IData)(vlSelfRef.__PVT__n536));
    vlSelfRef.__PVT__n540 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n516), (IData)(vlSelfRef.__PVT__n513));
    vlSelfRef.__PVT__n542 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n521), (IData)(vlSelfRef.__PVT__n518));
    vlSelfRef.__PVT__n544 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n526), (IData)(vlSelfRef.__PVT__n523));
    vlSelfRef.__PVT__n902 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n841)
                              : (IData)(vlSelfRef.__PVT__n897));
    vlSelfRef.__PVT__n546 = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__n538), 
                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__n537), (IData)(vlSelfRef.__PVT__n539)));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__5(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_wired_or_0 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_dout;
    vlSelfRef.__PVT__reg_wired_or_1 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_dout;
    vlSelfRef.__PVT__reg_wired_or_2 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_dout;
    vlSelfRef.__PVT__n31 = (vlSelfRef.__PVT__reg_wired_or_0 
                            | vlSelfRef.__PVT__reg_wired_or_1);
    vlSelfRef.__PVT__n32 = (vlSelfRef.__PVT__n31 | vlSelfRef.__PVT__reg_wired_or_2);
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSelfRef.__PVT__n32;
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__6(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n486 = ((IData)(vlSelfRef.__PVT__n501)
                              ? (IData)(vlSelfRef.__PVT__IRQ_n)
                              : (IData)(vlSelfRef.__PVT__irq_n_o));
    vlSelfRef.__PVT__n509 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n377)
                              : (IData)(vlSelfRef.__PVT__n486));
    vlSelfRef.__PVT__n530 = ((IData)(vlSelfRef.__PVT__n372)
                              ? (IData)(vlSelfRef.__PVT__irq_n_o)
                              : (IData)(vlSelfRef.__PVT__n509));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__7(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n662 = ((IData)(vlSelfRef.__PVT__n670)
                              ? (IData)(vlSelfRef.__PVT__DI)
                              : (IData)(vlSelfRef.__PVT__busb));
    vlSelfRef.__PVT__n572 = (0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__DI)));
    vlSelfRef.__PVT__n651 = ((IData)(vlSelfRef.__PVT__ldad)
                              ? (IData)(vlSelfRef.__PVT__DI)
                              : (IData)(vlSelfRef.__PVT__n612));
    vlSelfRef.__PVT__n655 = ((IData)(vlSelfRef.__PVT__ldbah)
                              ? (IData)(vlSelfRef.__PVT__DI)
                              : (IData)(vlSelfRef.__PVT__n643));
    vlSelfRef.__PVT__n190 = ((IData)(vlSelfRef.__PVT__n188)
                              ? 0U : (IData)(vlSelfRef.__PVT__DI));
    vlSelfRef.__PVT__n649 = ((IData)(vlSelfRef.__PVT__lddi)
                              ? (IData)(vlSelfRef.__PVT__DI)
                              : (IData)(vlSelfRef.__PVT__dl));
    vlSelfRef.__PVT__n230 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__DI), (IData)(vlSelfRef.__PVT__dl));
    vlSelfRef.__PVT__n722 = ((IData)(vlSelfRef.__PVT__n721) 
                             & (IData)(vlSelfRef.__PVT__DI));
    vlSelfRef.__PVT__n728 = ((IData)(vlSelfRef.__PVT__n727) 
                             & (IData)(vlSelfRef.__PVT__DI));
    vlSelfRef.__PVT__n734 = ((IData)(vlSelfRef.__PVT__n733) 
                             & (IData)(vlSelfRef.__PVT__DI));
    vlSelfRef.__PVT__n678 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__busb)
                              : (IData)(vlSelfRef.__PVT__n662));
    vlSelfRef.__PVT__n573 = ((IData)(vlSelfRef.__PVT__n671)
                              ? (IData)(vlSelfRef.__PVT__n572)
                              : (IData)(vlSelfRef.__PVT__busb_r));
    vlSelfRef.__PVT__n656 = ((IData)(vlSelfRef.__PVT__n665)
                              ? (IData)(vlSelfRef.__PVT__n651)
                              : (IData)(vlSelfRef.__PVT__ad));
    vlSelfRef.__PVT__n658 = ((IData)(vlSelfRef.__PVT__n667)
                              ? (IData)(vlSelfRef.__PVT__n655)
                              : (IData)(vlSelfRef.__PVT__bah));
    vlSelfRef.__PVT__n196 = ((IData)(vlSelfRef.__PVT__n285)
                              ? (IData)(vlSelfRef.__PVT__n190)
                              : (IData)(vlSelfRef.__PVT__ir));
    vlSelfRef.__PVT__n650 = ((IData)(vlSelfRef.__PVT__ldalu)
                              ? (IData)(vlSelfRef.__PVT__alu_q)
                              : (IData)(vlSelfRef.__PVT__n649));
    vlSelfRef.__PVT__n250 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n230), 0U, 8));
    vlSelfRef.__PVT__n254 = (0x000000ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n230), 8U, 8));
    vlSelfRef.__PVT__n736 = ((IData)(vlSelfRef.__PVT__n734) 
                             & (IData)(vlSelfRef.__PVT__n735));
    vlSelfRef.__PVT__n686 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n559)
                              : (IData)(vlSelfRef.__PVT__n678));
    vlSelfRef.__PVT__n679 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__busb_r)
                              : (IData)(vlSelfRef.__PVT__n573));
    vlSelfRef.__PVT__n673 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__ad)
                              : (IData)(vlSelfRef.__PVT__n656));
    vlSelfRef.__PVT__n675 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__bah)
                              : (IData)(vlSelfRef.__PVT__n658));
    vlSelfRef.__PVT__n301 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__ir)
                              : (IData)(vlSelfRef.__PVT__n196));
    vlSelfRef.__PVT__n657 = ((IData)(vlSelfRef.__PVT__n666)
                              ? (IData)(vlSelfRef.__PVT__n650)
                              : (IData)(vlSelfRef.__PVT__dl));
    vlSelfRef.__PVT__n252 = ((4U == (IData)(vlSelfRef.__PVT__n248))
                              ? (IData)(vlSelfRef.__PVT__n245)
                              : ((2U == (IData)(vlSelfRef.__PVT__n248))
                                  ? (IData)(vlSelfRef.__PVT__n250)
                                  : ((1U == (IData)(vlSelfRef.__PVT__n248))
                                      ? (IData)(vlSelfRef.__PVT__n249)
                                      : (IData)(vlSelfRef.__PVT__n251))));
    vlSelfRef.__PVT__n256 = ((4U == (IData)(vlSelfRef.__PVT__n248))
                              ? (IData)(vlSelfRef.__PVT__n244)
                              : ((2U == (IData)(vlSelfRef.__PVT__n248))
                                  ? (IData)(vlSelfRef.__PVT__n254)
                                  : ((1U == (IData)(vlSelfRef.__PVT__n248))
                                      ? (IData)(vlSelfRef.__PVT__n253)
                                      : (IData)(vlSelfRef.__PVT__n255))));
    vlSelfRef.__PVT__n749 = (((((((((0x0400U == (IData)(vlSelfRef.__PVT__n747)) 
                                    | (0x0200U == (IData)(vlSelfRef.__PVT__n747))) 
                                   | (0x0100U == (IData)(vlSelfRef.__PVT__n747))) 
                                  | (0x0080U == (IData)(vlSelfRef.__PVT__n747))) 
                                 | (0x0040U == (IData)(vlSelfRef.__PVT__n747))) 
                                | (0x0020U == (IData)(vlSelfRef.__PVT__n747))) 
                               | (0x0010U == (IData)(vlSelfRef.__PVT__n747))) 
                              | (8U == (IData)(vlSelfRef.__PVT__n747)))
                              ? ((0x0400U == (IData)(vlSelfRef.__PVT__n747))
                                  ? 0U : ((0x0200U 
                                           == (IData)(vlSelfRef.__PVT__n747))
                                           ? (IData)(vlSelfRef.__PVT__n741)
                                           : ((0x0100U 
                                               == (IData)(vlSelfRef.__PVT__n747))
                                               ? (IData)(vlSelfRef.__PVT__n736)
                                               : ((0x0080U 
                                                   == (IData)(vlSelfRef.__PVT__n747))
                                                   ? (IData)(vlSelfRef.__PVT__n728)
                                                   : 
                                                  ((0x0040U 
                                                    == (IData)(vlSelfRef.__PVT__n747))
                                                    ? (IData)(vlSelfRef.__PVT__n722)
                                                    : 
                                                   ((0x0020U 
                                                     == (IData)(vlSelfRef.__PVT__n747))
                                                     ? (IData)(vlSelfRef.__PVT__p)
                                                     : 
                                                    ((0x0010U 
                                                      == (IData)(vlSelfRef.__PVT__n747))
                                                      ? (IData)(vlSelfRef.__PVT__n716)
                                                      : (IData)(vlSelfRef.__PVT__n713))))))))
                              : ((4U == (IData)(vlSelfRef.__PVT__n747))
                                  ? (IData)(vlSelfRef.__PVT__n710)
                                  : ((2U == (IData)(vlSelfRef.__PVT__n747))
                                      ? (IData)(vlSelfRef.__PVT__n707)
                                      : ((1U == (IData)(vlSelfRef.__PVT__n747))
                                          ? (IData)(vlSelfRef.__PVT__DI)
                                          : 0U))));
    vlSelfRef.__PVT__n687 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n560)
                              : (IData)(vlSelfRef.__PVT__n679));
    vlSelfRef.__PVT__n681 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n561)
                              : (IData)(vlSelfRef.__PVT__n673));
    vlSelfRef.__PVT__n683 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n563)
                              : (IData)(vlSelfRef.__PVT__n675));
    vlSelfRef.__PVT__n316 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n140)
                              : (IData)(vlSelfRef.__PVT__n301));
    vlSelfRef.__PVT__n674 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__dl)
                              : (IData)(vlSelfRef.__PVT__n657));
    vlSelfRef.__PVT__n262 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n256), (IData)(vlSelfRef.__PVT__n252));
    vlSelfRef.__PVT__busa = vlSelfRef.__PVT__n749;
    vlSelfRef.__PVT__n332 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__ir)
                              : (IData)(vlSelfRef.__PVT__n316));
    vlSelfRef.__PVT__n682 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n564)
                              : (IData)(vlSelfRef.__PVT__n674));
    vlSelfRef.__PVT__n263 = ((IData)(vlSelfRef.__PVT__n280)
                              ? (IData)(vlSelfRef.__PVT__n262)
                              : (IData)(vlSelfRef.__PVT__pc));
    vlSelfRef.__PVT__n661 = ((IData)(vlSelfRef.__PVT__n669)
                              ? (IData)(vlSelfRef.__PVT__busa)
                              : (IData)(vlSelfRef.__PVT__busa_r));
    vlSelfRef.__PVT__n582 = VL_EXTEND_II(9,8, (IData)(vlSelfRef.__PVT__busa));
    vlSelfRef.__PVT__n295 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__pc)
                              : (IData)(vlSelfRef.__PVT__n263));
    vlSelfRef.__PVT__n677 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__busa_r)
                              : (IData)(vlSelfRef.__PVT__n661));
    vlSelfRef.__PVT__n583 = (0x000001ffU & ((IData)(vlSelfRef.__PVT__n581) 
                                            + (IData)(vlSelfRef.__PVT__n582)));
    vlSelfRef.__PVT__n311 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n139)
                              : (IData)(vlSelfRef.__PVT__n295));
    vlSelfRef.__PVT__n685 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n558)
                              : (IData)(vlSelfRef.__PVT__n677));
    vlSelfRef.__PVT__n606 = ((4U == (IData)(vlSelfRef.__PVT__n603))
                              ? (IData)(vlSelfRef.__PVT__bal)
                              : ((2U == (IData)(vlSelfRef.__PVT__n603))
                                  ? (IData)(vlSelfRef.__PVT__n583)
                                  : ((1U == (IData)(vlSelfRef.__PVT__n603))
                                      ? (IData)(vlSelfRef.__PVT__n577)
                                      : (IData)(vlSelfRef.__PVT__bal))));
    vlSelfRef.__PVT__n326 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__pc)
                              : (IData)(vlSelfRef.__PVT__n311));
    vlSelfRef.__PVT__n645 = ((IData)(vlSelfRef.__PVT__n614)
                              ? (IData)(vlSelfRef.__PVT__n644)
                              : (IData)(vlSelfRef.__PVT__n606));
    vlSelfRef.__PVT__n654 = (1U & VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__n645), 8U));
    vlSelfRef.__PVT__n652 = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__n645), 0U, 8));
    vlSelfRef.__PVT__n653 = ((IData)(vlSelfRef.__PVT__ldbal)
                              ? (IData)(vlSelfRef.__PVT__DI)
                              : (IData)(vlSelfRef.__PVT__n652));
    vlSelfRef.__PVT__n659 = VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.__PVT__n654), (IData)(vlSelfRef.__PVT__n653));
    vlSelfRef.__PVT__n660 = ((IData)(vlSelfRef.__PVT__n668)
                              ? (IData)(vlSelfRef.__PVT__n659)
                              : (IData)(vlSelfRef.__PVT__bal));
    vlSelfRef.__PVT__n676 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__bal)
                              : (IData)(vlSelfRef.__PVT__n660));
    vlSelfRef.__PVT__n684 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n562)
                              : (IData)(vlSelfRef.__PVT__n676));
}

VL_ATTR_COLD void Vnes_core_top_T65_real___ctor_var_reset(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__Mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3451489282050235777ull);
    vlSelf->__PVT__BCD_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1840092394395858984ull);
    vlSelf->__PVT__Res_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7474779327702348508ull);
    vlSelf->__PVT__Pwr_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12352927808193371421ull);
    vlSelf->__PVT__Enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4075918165872234850ull);
    vlSelf->__PVT__Clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8738651723265547004ull);
    vlSelf->__PVT__Rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16844109710709840485ull);
    vlSelf->__PVT__Abort_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6375641798739655434ull);
    vlSelf->__PVT__IRQ_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894841137382162950ull);
    vlSelf->__PVT__NMI_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12731285831377999975ull);
    vlSelf->__PVT__SO_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14524020404714141418ull);
    vlSelf->__PVT__R_W_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18418200568291600428ull);
    vlSelf->__PVT__Sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4927075628604480426ull);
    vlSelf->__PVT__EF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17563729739998498787ull);
    vlSelf->__PVT__MF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16237207636007921465ull);
    vlSelf->__PVT__XF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 310819220670887007ull);
    vlSelf->__PVT__ML_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16867439917817622174ull);
    vlSelf->__PVT__VP_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12255554031437895159ull);
    vlSelf->__PVT__VDA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8134588332222200398ull);
    vlSelf->__PVT__VPA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6409440087452953710ull);
    vlSelf->__PVT__A = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3969090544990846983ull);
    vlSelf->__PVT__DI = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2947528501619892130ull);
    vlSelf->__PVT__DO = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9933144125723145476ull);
    vlSelf->__PVT__Regs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13930978120216685590ull);
    vlSelf->__PVT__DEBUG__05bI__05d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3981047293581437659ull);
    vlSelf->__PVT__DEBUG__05bA__05d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7860391298958055674ull);
    vlSelf->__PVT__DEBUG__05bX__05d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16973133570289902681ull);
    vlSelf->__PVT__DEBUG__05bY__05d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5835846933829368323ull);
    vlSelf->__PVT__DEBUG__05bS__05d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183626439793518521ull);
    vlSelf->__PVT__DEBUG__05bP__05d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9249511819528759773ull);
    vlSelf->__PVT__NMI_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15524052401369902652ull);
    vlSelf->__PVT__Instrnew = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368119167523690590ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__n13 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 220118779437368228ull);
    vlSelf->__PVT__n14 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3436958650676988947ull);
    vlSelf->__PVT__n15 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7363899687783178470ull);
    vlSelf->__PVT__n16 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15442023816079404587ull);
    vlSelf->__PVT__n17 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18171413895944165640ull);
    vlSelf->__PVT__n18 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13716560183049200235ull);
    vlSelf->__PVT__abc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11297775770902552315ull);
    vlSelf->__PVT__x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9409450202036847209ull);
    vlSelf->__PVT__y = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11123243248953317070ull);
    vlSelf->__PVT__p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14074675935524643836ull);
    vlSelf->__PVT__ad = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18290523468037346343ull);
    vlSelf->__PVT__dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11488171005156075516ull);
    vlSelf->__PVT__pwithb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4910830453652715744ull);
    vlSelf->__PVT__bah = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11034074152413848869ull);
    vlSelf->__PVT__bal = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2045898031935137119ull);
    vlSelf->__PVT__pbr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9470400127832413410ull);
    vlSelf->__PVT__dbr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4074308482846119752ull);
    vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4211327832146562899ull);
    vlSelf->__PVT__s = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16562859848569467201ull);
    vlSelf->__PVT__ef_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6286207012261884297ull);
    vlSelf->__PVT__mf_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5178612571565989564ull);
    vlSelf->__PVT__xf_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4405448068952717390ull);
    vlSelf->__PVT__ir = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11112750820830887406ull);
    vlSelf->__PVT__mcycle = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4059750844790256659ull);
    vlSelf->__PVT__do_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16436963561305897938ull);
    vlSelf->__PVT__mode_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10887915390178692256ull);
    vlSelf->__PVT__bcd_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18304925408239225325ull);
    vlSelf->__PVT__alu_op_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14254998747858568747ull);
    vlSelf->__PVT__write_data_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17001930666233716702ull);
    vlSelf->__PVT__set_addr_to_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8345674390843898708ull);
    vlSelf->__PVT__pcadder = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12986779498719278581ull);
    vlSelf->__PVT__rstcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8336786788033668190ull);
    vlSelf->__PVT__irqcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10881722011918051992ull);
    vlSelf->__PVT__nmicycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 856818592512332287ull);
    vlSelf->__PVT__so_n_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11879807381363787025ull);
    vlSelf->__PVT__irq_n_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 557290017957127183ull);
    vlSelf->__PVT__nmi_n_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16995160756273340387ull);
    vlSelf->__PVT__nmiact = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310080680680612257ull);
    vlSelf->__PVT__brk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8328627440479646183ull);
    vlSelf->__PVT__busa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4300930599387030219ull);
    vlSelf->__PVT__busa_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14328626756930214236ull);
    vlSelf->__PVT__busb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13593267391165168133ull);
    vlSelf->__PVT__busb_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16935782258245902827ull);
    vlSelf->__PVT__alu_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4098580327116403270ull);
    vlSelf->__PVT__p_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17024092055271566064ull);
    vlSelf->__PVT__lcycle = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6385624723359825007ull);
    vlSelf->__PVT__alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8715831498092569784ull);
    vlSelf->__PVT__set_busa_to = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4298212409534212085ull);
    vlSelf->__PVT__set_addr_to = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2738263583146256882ull);
    vlSelf->__PVT__write_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11298066925140600626ull);
    vlSelf->__PVT__jump = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8906078629849262824ull);
    vlSelf->__PVT__baadd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 160029703623700038ull);
    vlSelf->__PVT__baquirk = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 337924244056617461ull);
    vlSelf->__PVT__brkatna = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15194865141866627014ull);
    vlSelf->__PVT__adadd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1267468276581375631ull);
    vlSelf->__PVT__addy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12604305183292485849ull);
    vlSelf->__PVT__pcadd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5473319236313318427ull);
    vlSelf->__PVT__inc_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8850676535773297258ull);
    vlSelf->__PVT__dec_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11886111624265752384ull);
    vlSelf->__PVT__lda = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6928860859285814203ull);
    vlSelf->__PVT__ldp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9403227387135433097ull);
    vlSelf->__PVT__ldx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 632355614387701387ull);
    vlSelf->__PVT__ldy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13016542873349960465ull);
    vlSelf->__PVT__lds = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15465784201882695522ull);
    vlSelf->__PVT__lddi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18236071000916268003ull);
    vlSelf->__PVT__ldalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2659586551533648990ull);
    vlSelf->__PVT__ldad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13477657584843210066ull);
    vlSelf->__PVT__ldbal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534568647637055014ull);
    vlSelf->__PVT__ldbah = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16413323077296304830ull);
    vlSelf->__PVT__savep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14847834471489823075ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__res_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17960757811305728863ull);
    vlSelf->__PVT__res_n_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8056458751251792887ull);
    vlSelf->__PVT__rdy_mod = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15371578268582859478ull);
    vlSelf->__PVT__really_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14520658901180803711ull);
    vlSelf->__PVT__wrn_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2878142787515945866ull);
    vlSelf->__PVT__nmi_entered = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8612077917417001788ull);
    vlSelf->__PVT__reg_wired_or_0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3039827391797791358ull);
    vlSelf->__PVT__reg_wired_or_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14530214127839931259ull);
    vlSelf->__PVT__reg_wired_or_2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1934122114084476032ull);
    vlSelf->__PVT__ss_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2897970746396981260ull);
    vlSelf->__PVT__ss_1_back = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10702569422765490454ull);
    vlSelf->__PVT__ss_2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 67856373377341097ull);
    vlSelf->__PVT__ss_2_back = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17507672171588919304ull);
    vlSelf->__PVT__ss_3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 323661199453092968ull);
    vlSelf->__PVT__ss_3_back = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15808535841047130165ull);
    vlSelf->__PVT__n31 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10089252335259971200ull);
    vlSelf->__PVT__n32 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12312286166494890191ull);
    vlSelf->__PVT__n33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2439349945062727714ull);
    vlSelf->__PVT__n34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6987005836290281537ull);
    vlSelf->__PVT__n37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9016402585045896392ull);
    vlSelf->__PVT__n38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4261798888524557682ull);
    vlSelf->__PVT__n41 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16631523599566366944ull);
    vlSelf->__PVT__n43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13997927285509168737ull);
    vlSelf->__PVT__n44 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10480040558615014323ull);
    vlSelf->__PVT__n46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10529634003241370361ull);
    vlSelf->__PVT__n47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18370004793621385137ull);
    vlSelf->__PVT__n48 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12318086788976751596ull);
    vlSelf->__PVT__n50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15994506071484670595ull);
    vlSelf->__PVT__n51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 611252176796084473ull);
    vlSelf->__PVT__n52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6732272671524693553ull);
    vlSelf->__PVT__n56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6884314597591381518ull);
    vlSelf->__PVT__n58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10317540168867789676ull);
    vlSelf->__PVT__n59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6916403861674662633ull);
    vlSelf->__PVT__n60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8805691265166015545ull);
    vlSelf->__PVT__n61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17256906010850957450ull);
    vlSelf->__PVT__n65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5145068098076288487ull);
    vlSelf->__PVT__n66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1767386232164275096ull);
    vlSelf->__PVT__n69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408949383026436360ull);
    vlSelf->__PVT__n70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5740682378794517175ull);
    vlSelf->__PVT__n71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9186497561602309ull);
    vlSelf->__PVT__n73 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3332387331853401065ull);
    vlSelf->__PVT__n74 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1823376673392127363ull);
    vlSelf->__PVT__n75 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5449083588952707185ull);
    vlSelf->__PVT__n76 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 616119417363251298ull);
    vlSelf->__PVT__n77 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6959719519165930997ull);
    vlSelf->__PVT__n78 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16656018221730614948ull);
    vlSelf->__PVT__n79 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15463638565256845369ull);
    vlSelf->__PVT__n80 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2001763368459959688ull);
    vlSelf->__PVT__n81 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10337523843417541382ull);
    vlSelf->__PVT__n82 = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16267852142588837072ull);
    vlSelf->__PVT__n83 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10824232004639925131ull);
    vlSelf->__PVT__n84 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14275125633434369336ull);
    vlSelf->__PVT__n115 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9437356039712898672ull);
    vlSelf->__PVT__n126 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 590378955527341564ull);
    vlSelf->__PVT__n129 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 606580740492902077ull);
    vlSelf->__PVT__n137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17208825556507863287ull);
    vlSelf->__PVT__n138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15309731446742663186ull);
    vlSelf->__PVT__n139 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7302374724190595530ull);
    vlSelf->__PVT__n140 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 302352137595677690ull);
    vlSelf->__PVT__n141 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4451019181509701516ull);
    vlSelf->__PVT__n142 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10336447791727115495ull);
    vlSelf->__PVT__n143 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7024302112391429789ull);
    vlSelf->__PVT__n144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 545451230136995184ull);
    vlSelf->__PVT__n145 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2505575846738103415ull);
    vlSelf->__PVT__n147 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12960635935132776923ull);
    vlSelf->__PVT__n148 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9227525821533889236ull);
    vlSelf->__PVT__n150 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9141771958886151383ull);
    vlSelf->__PVT__n152 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17032241775424572993ull);
    vlSelf->__PVT__n153 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1310900013897258246ull);
    vlSelf->__PVT__n154 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1158780632596832072ull);
    vlSelf->__PVT__n155 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17048443560390227705ull);
    vlSelf->__PVT__n157 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15833045445912938998ull);
    vlSelf->__PVT__n158 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7343657417044766649ull);
    vlSelf->__PVT__n160 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526242370755752849ull);
    vlSelf->__PVT__n162 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10950036150215819045ull);
    vlSelf->__PVT__n164 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10910667003421271382ull);
    vlSelf->__PVT__n165 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1245250006870386682ull);
    vlSelf->__PVT__n167 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11700310095265029488ull);
    vlSelf->__PVT__n169 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13113890712563816987ull);
    vlSelf->__PVT__n170 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12819616315798999498ull);
    vlSelf->__PVT__n171 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15545018627981288436ull);
    vlSelf->__PVT__n172 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4933173439050068755ull);
    vlSelf->__PVT__n173 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1200063325451051305ull);
    vlSelf->__PVT__n175 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9740356566843154465ull);
    vlSelf->__PVT__n177 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17201698337821253177ull);
    vlSelf->__PVT__n178 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9756558351808842121ull);
    vlSelf->__PVT__n179 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1328237194993340272ull);
    vlSelf->__PVT__n181 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15202544908494654431ull);
    vlSelf->__PVT__n182 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 841916868727250765ull);
    vlSelf->__PVT__n183 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15966302100939677339ull);
    vlSelf->__PVT__n184 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1668225071144106089ull);
    vlSelf->__PVT__n186 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17405768617637164946ull);
    vlSelf->__PVT__n187 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3694964002723391615ull);
    vlSelf->__PVT__n188 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11702849773003855752ull);
    vlSelf->__PVT__n190 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12046223955916750053ull);
    vlSelf->__PVT__n191 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1607365652487510969ull);
    vlSelf->__PVT__n192 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1623038389724773421ull);
    vlSelf->__PVT__n193 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17344909198980469987ull);
    vlSelf->__PVT__n195 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5564544168306584112ull);
    vlSelf->__PVT__n196 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7640123055635021348ull);
    vlSelf->__PVT__n197 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6338514522913082239ull);
    vlSelf->__PVT__n198 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18095183144029735089ull);
    vlSelf->__PVT__n200 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6410741356378380576ull);
    vlSelf->__PVT__n202 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14195970064351054564ull);
    vlSelf->__PVT__n203 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10883824385015297374ull);
    vlSelf->__PVT__n204 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11152669437978315465ull);
    vlSelf->__PVT__n205 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2137075866280993533ull);
    vlSelf->__PVT__n206 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835124957003926074ull);
    vlSelf->__PVT__n208 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4507385705971069780ull);
    vlSelf->__PVT__n209 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17519526940281803784ull);
    vlSelf->__PVT__n210 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150783382931714846ull);
    vlSelf->__PVT__n212 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15240477063235729327ull);
    vlSelf->__PVT__n213 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16521093222621657843ull);
    vlSelf->__PVT__n215 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907339010564247344ull);
    vlSelf->__PVT__n217 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3160590491829818378ull);
    vlSelf->__PVT__n218 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12247427732524495539ull);
    vlSelf->__PVT__n219 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16649267092164154840ull);
    vlSelf->__PVT__n220 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16881198238228444146ull);
    vlSelf->__PVT__n221 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7865604666531306422ull);
    vlSelf->__PVT__n222 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8134449719494132773ull);
    vlSelf->__PVT__n224 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3520695507436559115ull);
    vlSelf->__PVT__n225 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6904084855769589756ull);
    vlSelf->__PVT__n227 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7993778536073572595ull);
    vlSelf->__PVT__n229 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761467208096737123ull);
    vlSelf->__PVT__n230 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12222257344751527031ull);
    vlSelf->__PVT__n232 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1560741979014702093ull);
    vlSelf->__PVT__n233 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10991892481027037394ull);
    vlSelf->__PVT__n234 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11260737533989958989ull);
    vlSelf->__PVT__n235 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2016284971702266463ull);
    vlSelf->__PVT__n236 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11447435473714464171ull);
    vlSelf->__PVT__n238 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4615453801982663888ull);
    vlSelf->__PVT__n239 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9017293161622383989ull);
    vlSelf->__PVT__n241 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16650153691969333987ull);
    vlSelf->__PVT__n242 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15119686168656934670ull);
    vlSelf->__PVT__n243 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9589313029646988498ull);
    vlSelf->__PVT__n244 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 573719457949783694ull);
    vlSelf->__PVT__n245 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4975558817589483987ull);
    vlSelf->__PVT__n247 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14675554372564600187ull);
    vlSelf->__PVT__n248 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5659960800867332495ull);
    vlSelf->__PVT__n249 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16528476197585360129ull);
    vlSelf->__PVT__n250 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16989266334240154225ull);
    vlSelf->__PVT__n251 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13677120654904404991ull);
    vlSelf->__PVT__n252 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8242517815505719449ull);
    vlSelf->__PVT__n253 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4930372136170145311ull);
    vlSelf->__PVT__n254 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14361522638182295475ull);
    vlSelf->__PVT__n255 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12715600844142724661ull);
    vlSelf->__PVT__n256 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16214444463203087562ull);
    vlSelf->__PVT__n259 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11869535304108451583ull);
    vlSelf->__PVT__n261 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14721627653789120692ull);
    vlSelf->__PVT__n262 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7372257967387939143ull);
    vlSelf->__PVT__n263 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16574549478809870793ull);
    vlSelf->__PVT__n264 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3425961600435842731ull);
    vlSelf->__PVT__n266 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4515655280739826648ull);
    vlSelf->__PVT__n268 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16130417682717562099ull);
    vlSelf->__PVT__n270 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5527758709693365677ull);
    vlSelf->__PVT__n271 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16529362797390537333ull);
    vlSelf->__PVT__n272 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7513769225693270953ull);
    vlSelf->__PVT__n273 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11915608585332963124ull);
    vlSelf->__PVT__n274 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6385235446322976487ull);
    vlSelf->__PVT__n275 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5083626913601040223ull);
    vlSelf->__PVT__n276 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16085231001298229303ull);
    vlSelf->__PVT__n277 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14783622468576295672ull);
    vlSelf->__PVT__n278 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5539169906288666925ull);
    vlSelf->__PVT__n279 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8922559254621600154ull);
    vlSelf->__PVT__n280 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2419683310173590337ull);
    vlSelf->__PVT__n281 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4603295210139051390ull);
    vlSelf->__PVT__n282 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14034445712151408810ull);
    vlSelf->__PVT__n283 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18436285071791083583ull);
    vlSelf->__PVT__n284 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5287697193416974660ull);
    vlSelf->__PVT__n285 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9689536553056674079ull);
    vlSelf->__PVT__n286 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 673942981359344355ull);
    vlSelf->__PVT__n287 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3828473339101983170ull);
    vlSelf->__PVT__n288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8230312698741715335ull);
    vlSelf->__PVT__n289 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17661463200754014820ull);
    vlSelf->__PVT__n290 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18122253337408794740ull);
    vlSelf->__PVT__n291 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18391098390371751155ull);
    vlSelf->__PVT__n292 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9375504818674434263ull);
    vlSelf->__PVT__n293 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7729583024634745873ull);
    vlSelf->__PVT__n294 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11228426643695150374ull);
    vlSelf->__PVT__n295 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7916280964359436112ull);
    vlSelf->__PVT__n296 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8185126017322382283ull);
    vlSelf->__PVT__n297 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17616276519334675390ull);
    vlSelf->__PVT__n298 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571371805264725653ull);
    vlSelf->__PVT__n299 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10784294847602834261ull);
    vlSelf->__PVT__n300 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9862343492002509667ull);
    vlSelf->__PVT__n301 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6466301753397978174ull);
    vlSelf->__PVT__n302 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 385586118190727452ull);
    vlSelf->__PVT__n303 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2597398912598347087ull);
    vlSelf->__PVT__n304 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9031120468148688361ull);
    vlSelf->__PVT__n305 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5635078729544286159ull);
    vlSelf->__PVT__n306 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9424589995959834160ull);
    vlSelf->__PVT__n307 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3343874360752673986ull);
    vlSelf->__PVT__n308 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15375802700098934454ull);
    vlSelf->__PVT__n309 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4393669846533857588ull);
    vlSelf->__PVT__n310 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17293341097741674916ull);
    vlSelf->__PVT__n311 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17021314463462012975ull);
    vlSelf->__PVT__n312 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4124414762894484548ull);
    vlSelf->__PVT__n313 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6010856482388202096ull);
    vlSelf->__PVT__n314 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5967688838698781871ull);
    vlSelf->__PVT__n315 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 351935502500928666ull);
    vlSelf->__PVT__n316 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12383863841847041662ull);
    vlSelf->__PVT__n317 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11585631664738232766ull);
    vlSelf->__PVT__n318 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13448501843809004398ull);
    vlSelf->__PVT__n319 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13844675407841544279ull);
    vlSelf->__PVT__n320 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5612928688737205871ull);
    vlSelf->__PVT__n321 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17980441265158701315ull);
    vlSelf->__PVT__n322 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15719046161795088916ull);
    vlSelf->__PVT__n323 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9638330526587724098ull);
    vlSelf->__PVT__n324 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7056193702329489690ull);
    vlSelf->__PVT__n325 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 975478067122263096ull);
    vlSelf->__PVT__n326 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3722225428601396803ull);
    vlSelf->__PVT__n328 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6224970678475803619ull);
    vlSelf->__PVT__n329 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6181803034786394136ull);
    vlSelf->__PVT__n330 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17628524521901093516ull);
    vlSelf->__PVT__n331 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10014108279431851569ull);
    vlSelf->__PVT__n332 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3599292545068372941ull);
    vlSelf->__PVT__n333 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 642592014185909190ull);
    vlSelf->__PVT__n334 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2183236334442864420ull);
    vlSelf->__PVT__n335 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8511716781427438619ull);
    vlSelf->__PVT__n336 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4001454731905063217ull);
    vlSelf->__PVT__n337 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1275097329532084717ull);
    vlSelf->__PVT__n338 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15904835230373894531ull);
    vlSelf->__PVT__n339 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13309340027853870122ull);
    vlSelf->__PVT__n356 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1232483963117453242ull);
    vlSelf->__PVT__n357 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 855216220271838795ull);
    vlSelf->__PVT__n358 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4154709509336038128ull);
    vlSelf->__PVT__n359 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12077215082428473149ull);
    vlSelf->__PVT__n360 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9101235064899370206ull);
    vlSelf->__PVT__n361 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2011540227340067947ull);
    vlSelf->__PVT__n362 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16305693891106561717ull);
    vlSelf->__PVT__n364 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9837497350892082995ull);
    vlSelf->__PVT__n365 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6777039849362960057ull);
    vlSelf->__PVT__n366 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2960033676495135520ull);
    vlSelf->__PVT__n367 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17230615799838413115ull);
    vlSelf->__PVT__n372 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9063785952314619954ull);
    vlSelf->__PVT__n373 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9836007360890608284ull);
    vlSelf->__PVT__n374 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16500072044950344189ull);
    vlSelf->__PVT__n375 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16456904401260922024ull);
    vlSelf->__PVT__n376 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13211585773887528591ull);
    vlSelf->__PVT__n377 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3776511905846060151ull);
    vlSelf->__PVT__n378 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3399244163000459095ull);
    vlSelf->__PVT__n381 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8762995738598353881ull);
    vlSelf->__PVT__n382 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10985021695167528876ull);
    vlSelf->__PVT__n383 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10941854051478105091ull);
    vlSelf->__PVT__n384 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18070881034547363219ull);
    vlSelf->__PVT__n385 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1280235551821963362ull);
    vlSelf->__PVT__n386 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1237067908132526599ull);
    vlSelf->__PVT__n387 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15173549932319634281ull);
    vlSelf->__PVT__n388 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 372096546911168740ull);
    vlSelf->__PVT__n389 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2582425203399623629ull);
    vlSelf->__PVT__n390 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10676272595599322313ull);
    vlSelf->__PVT__n392 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16647346211116149476ull);
    vlSelf->__PVT__n394 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14777106276587898218ull);
    vlSelf->__PVT__n396 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1516297211436195701ull);
    vlSelf->__PVT__n397 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1808713804822131707ull);
    vlSelf->__PVT__n398 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1431446061976506763ull);
    vlSelf->__PVT__n399 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3626932202284298375ull);
    vlSelf->__PVT__n400 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17559114756125427544ull);
    vlSelf->__PVT__n402 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 770783632375865178ull);
    vlSelf->__PVT__n403 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7854328612779970214ull);
    vlSelf->__PVT__n406 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2504150880378378482ull);
    vlSelf->__PVT__n409 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10330108003930378587ull);
    vlSelf->__PVT__n412 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2149390730416710051ull);
    vlSelf->__PVT__n415 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7627742332360552242ull);
    vlSelf->__PVT__n418 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11436159419963160507ull);
    vlSelf->__PVT__n421 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12976430074760433975ull);
    vlSelf->__PVT__n424 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14437241640754915295ull);
    vlSelf->__PVT__n425 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8777490439811068494ull);
    vlSelf->__PVT__n426 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8779804798786732946ull);
    vlSelf->__PVT__n427 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16368210272723136709ull);
    vlSelf->__PVT__n428 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 872016872740778675ull);
    vlSelf->__PVT__n429 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5777232587993491638ull);
    vlSelf->__PVT__n430 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15488853586985693031ull);
    vlSelf->__PVT__n431 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11441504285608363001ull);
    vlSelf->__PVT__n432 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8425044648825177453ull);
    vlSelf->__PVT__n433 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2765293447881243618ull);
    vlSelf->__PVT__n434 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2302645507847656035ull);
    vlSelf->__PVT__n435 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3074866916423590111ull);
    vlSelf->__PVT__n436 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10158411896827569692ull);
    vlSelf->__PVT__n437 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17746817370763897541ull);
    vlSelf->__PVT__n438 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4968517157023667303ull);
    vlSelf->__PVT__n439 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15070836133186749860ull);
    vlSelf->__PVT__n440 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7651333250247573119ull);
    vlSelf->__PVT__n443 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301155517846048049ull);
    vlSelf->__PVT__n444 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3336939344570866694ull);
    vlSelf->__PVT__n449 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11587924207392645652ull);
    vlSelf->__PVT__n451 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10906168905620698412ull);
    vlSelf->__PVT__n452 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1492440086876319468ull);
    vlSelf->__PVT__n453 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10146438652965282531ull);
    vlSelf->__PVT__n454 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12366980471615229605ull);
    vlSelf->__PVT__n456 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6373959392571640439ull);
    vlSelf->__PVT__n457 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5575727215462712263ull);
    vlSelf->__PVT__n458 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18362720088228437700ull);
    vlSelf->__PVT__n461 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12055917013071179387ull);
    vlSelf->__PVT__n463 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8576809436254448531ull);
    vlSelf->__PVT__n464 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2917058235310620912ull);
    vlSelf->__PVT__n465 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 669021510208475794ull);
    vlSelf->__PVT__n466 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5574237225461105884ull);
    vlSelf->__PVT__n468 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 215066229200376324ull);
    vlSelf->__PVT__n470 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5581072081107818105ull);
    vlSelf->__PVT__n472 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10753648711404330362ull);
    vlSelf->__PVT__n474 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5563753971600363256ull);
    vlSelf->__PVT__n475 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15666072947763194926ull);
    vlSelf->__PVT__n478 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1593673327241219058ull);
    vlSelf->__PVT__n480 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13539855815478390665ull);
    vlSelf->__PVT__n482 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3717301042429938549ull);
    vlSelf->__PVT__n483 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2690209874730666731ull);
    vlSelf->__PVT__n484 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9773754855134643694ull);
    vlSelf->__PVT__n485 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5178112608424322333ull);
    vlSelf->__PVT__n486 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10083328323676970707ull);
    vlSelf->__PVT__n487 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17166873304080977676ull);
    vlSelf->__PVT__n489 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3292075067524584305ull);
    vlSelf->__PVT__n491 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14659794657501031244ull);
    vlSelf->__PVT__n492 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9728568173715311520ull);
    vlSelf->__PVT__n493 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1384143076168791655ull);
    vlSelf->__PVT__n495 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8471486553467767783ull);
    vlSelf->__PVT__n497 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128665543618321354ull);
    vlSelf->__PVT__n499 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1757149278372396478ull);
    vlSelf->__PVT__n500 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2192377387254118617ull);
    vlSelf->__PVT__n501 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7826117819665008330ull);
    vlSelf->__PVT__n502 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12815229594186516436ull);
    vlSelf->__PVT__n504 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10678458965671117181ull);
    vlSelf->__PVT__n505 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13068277040777888049ull);
    vlSelf->__PVT__n506 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8160622097415190894ull);
    vlSelf->__PVT__n507 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9016739565259977640ull);
    vlSelf->__PVT__n509 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13646960370394585340ull);
    vlSelf->__PVT__n510 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5292903535417671518ull);
    vlSelf->__PVT__n513 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10339900600675016830ull);
    vlSelf->__PVT__n515 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1889756849467101856ull);
    vlSelf->__PVT__n516 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13574403651657356991ull);
    vlSelf->__PVT__n518 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16676118616494077334ull);
    vlSelf->__PVT__n520 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15142044343772393413ull);
    vlSelf->__PVT__n521 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1684412044584444203ull);
    vlSelf->__PVT__n523 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5633251213406889766ull);
    vlSelf->__PVT__n525 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1581713737888936455ull);
    vlSelf->__PVT__n526 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17051896369338209536ull);
    vlSelf->__PVT__n528 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14915125740822842616ull);
    vlSelf->__PVT__n530 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12613724221655820901ull);
    vlSelf->__PVT__n531 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7037869079980681139ull);
    vlSelf->__PVT__n533 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10952004821244705459ull);
    vlSelf->__PVT__n534 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3157922219895325244ull);
    vlSelf->__PVT__n536 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18353109941226519692ull);
    vlSelf->__PVT__n537 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2940812600513088120ull);
    vlSelf->__PVT__n538 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7929924375034543190ull);
    vlSelf->__PVT__n539 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17780555173391045941ull);
    vlSelf->__PVT__n540 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6699310714984645560ull);
    vlSelf->__PVT__n542 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12949177737514418283ull);
    vlSelf->__PVT__n544 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8247816837142773771ull);
    vlSelf->__PVT__n546 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11673418738974421240ull);
    vlSelf->__PVT__n557 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11416317205136983024ull);
    vlSelf->__PVT__n558 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18398897118965594194ull);
    vlSelf->__PVT__n559 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 747945994254967716ull);
    vlSelf->__PVT__n560 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13395929067656335671ull);
    vlSelf->__PVT__n561 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10082299250401505975ull);
    vlSelf->__PVT__n562 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 373449802049762560ull);
    vlSelf->__PVT__n563 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11734209667245196917ull);
    vlSelf->__PVT__n564 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16218460948234538506ull);
    vlSelf->__PVT__n565 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7774554922031610935ull);
    vlSelf->__PVT__n567 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539201511874079819ull);
    vlSelf->__PVT__n569 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5398499403780343013ull);
    vlSelf->__PVT__n570 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4461257427307178774ull);
    vlSelf->__PVT__n572 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1674663373938088581ull);
    vlSelf->__PVT__n573 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11862362547288994905ull);
    vlSelf->__PVT__n575 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13093308529869352610ull);
    vlSelf->__PVT__n577 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3438545875358546604ull);
    vlSelf->__PVT__n579 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14001073563444972599ull);
    vlSelf->__PVT__n580 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13245643376104670049ull);
    vlSelf->__PVT__n581 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17080071232240275131ull);
    vlSelf->__PVT__n582 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13742869874562503639ull);
    vlSelf->__PVT__n583 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13028533756722305682ull);
    vlSelf->__PVT__n585 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16538031717822882341ull);
    vlSelf->__PVT__n586 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9452047509308632016ull);
    vlSelf->__PVT__n588 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9509932800044449305ull);
    vlSelf->__PVT__n590 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17830677499819945705ull);
    vlSelf->__PVT__n592 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10775208544723667250ull);
    vlSelf->__PVT__n593 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2179095269370627827ull);
    vlSelf->__PVT__n595 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9113489144312593950ull);
    vlSelf->__PVT__n597 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16807965947871102885ull);
    vlSelf->__PVT__n598 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10811146371932767135ull);
    vlSelf->__PVT__n599 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3785486682264574106ull);
    vlSelf->__PVT__n600 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12853181936432356828ull);
    vlSelf->__PVT__n602 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15607615364113246278ull);
    vlSelf->__PVT__n603 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15648343779692642696ull);
    vlSelf->__PVT__n604 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15354972096115958891ull);
    vlSelf->__PVT__n605 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14951164537008960699ull);
    vlSelf->__PVT__n606 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8725485970480334855ull);
    vlSelf->__PVT__n607 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8766214386059732958ull);
    vlSelf->__PVT__n608 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2900257009974490781ull);
    vlSelf->__PVT__n609 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15350181507745590087ull);
    vlSelf->__PVT__n610 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4268937049339294880ull);
    vlSelf->__PVT__n611 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6992855223602186067ull);
    vlSelf->__PVT__n612 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2566489233348693629ull);
    vlSelf->__PVT__n614 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16298514028425240357ull);
    vlSelf->__PVT__n617 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2561698644978383710ull);
    vlSelf->__PVT__n618 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2602427060557831828ull);
    vlSelf->__PVT__n619 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2309055376981061889ull);
    vlSelf->__PVT__n620 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 721989975654171683ull);
    vlSelf->__PVT__n623 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1980305995552420284ull);
    vlSelf->__PVT__n626 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 642473532135963277ull);
    vlSelf->__PVT__n628 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 829171471860613803ull);
    vlSelf->__PVT__n630 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10281028549598892676ull);
    vlSelf->__PVT__n631 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10321756965178307643ull);
    vlSelf->__PVT__n633 = 63U;
    ;
    vlSelf->__PVT__n635 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1524860724542705402ull);
    vlSelf->__PVT__n637 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12231608990743836787ull);
    vlSelf->__PVT__n639 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13449196595062698636ull);
    vlSelf->__PVT__n640 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2030883761661829382ull);
    vlSelf->__PVT__n641 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8548501376481084420ull);
    vlSelf->__PVT__n643 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1479674043123381940ull);
    vlSelf->__PVT__n644 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7892050549376803073ull);
    vlSelf->__PVT__n645 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14101189156327000892ull);
    vlSelf->__PVT__n647 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1773449905294176279ull);
    vlSelf->__PVT__n649 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1515611870332471042ull);
    vlSelf->__PVT__n650 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14247491003002697175ull);
    vlSelf->__PVT__n651 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9052702101068135349ull);
    vlSelf->__PVT__n652 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15465078607321593443ull);
    vlSelf->__PVT__n653 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2762510841553009002ull);
    vlSelf->__PVT__n654 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13762630791330946110ull);
    vlSelf->__PVT__n655 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7431711116236485230ull);
    vlSelf->__PVT__n656 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1540132648863901356ull);
    vlSelf->__PVT__n657 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5259106234272206916ull);
    vlSelf->__PVT__n658 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17374930632887123556ull);
    vlSelf->__PVT__n659 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11378111056948776258ull);
    vlSelf->__PVT__n660 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18103081684585711661ull);
    vlSelf->__PVT__n661 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2717324160133675944ull);
    vlSelf->__PVT__n662 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15167248657904906194ull);
    vlSelf->__PVT__n663 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15303005019888596714ull);
    vlSelf->__PVT__n664 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18026923194151474404ull);
    vlSelf->__PVT__n665 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030103618213131971ull);
    vlSelf->__PVT__n666 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566189636441887833ull);
    vlSelf->__PVT__n667 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11332924375529442052ull);
    vlSelf->__PVT__n668 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17077100683470459405ull);
    vlSelf->__PVT__n669 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2824505656340150311ull);
    vlSelf->__PVT__n670 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12978436138892754285ull);
    vlSelf->__PVT__n671 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6647516463798130493ull);
    vlSelf->__PVT__n672 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2555250572700775765ull);
    vlSelf->__PVT__n673 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17688364829155433682ull);
    vlSelf->__PVT__n674 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11357445154061003698ull);
    vlSelf->__PVT__n675 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3142398118448328162ull);
    vlSelf->__PVT__n676 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6203384667705803119ull);
    vlSelf->__PVT__n677 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6683454291007227050ull);
    vlSelf->__PVT__n678 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2257088300753698690ull);
    vlSelf->__PVT__n679 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4981006475016620495ull);
    vlSelf->__PVT__n680 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17916961739585354166ull);
    vlSelf->__PVT__n681 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17623590056008370754ull);
    vlSelf->__PVT__n682 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5589222488552253164ull);
    vlSelf->__PVT__n683 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9115171336819086561ull);
    vlSelf->__PVT__n684 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 435162002197141138ull);
    vlSelf->__PVT__n685 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12550986400812181682ull);
    vlSelf->__PVT__n686 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2421172518196984792ull);
    vlSelf->__PVT__n687 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17659527883217443573ull);
    vlSelf->__PVT__n688 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11328608208122949973ull);
    vlSelf->__PVT__n698 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10686464997388703442ull);
    vlSelf->__PVT__n699 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2006455662766704385ull);
    vlSelf->__PVT__n700 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17841452955156994285ull);
    vlSelf->__PVT__n701 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8741963324190793445ull);
    vlSelf->__PVT__n702 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5908138322125916600ull);
    vlSelf->__PVT__n703 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15255392764869441991ull);
    vlSelf->__PVT__n704 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17247075592928898080ull);
    vlSelf->__PVT__n706 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 380220117136667689ull);
    vlSelf->__PVT__n707 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 590224789172907373ull);
    vlSelf->__PVT__n709 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4084880234092650001ull);
    vlSelf->__PVT__n710 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5134426923548469545ull);
    vlSelf->__PVT__n712 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18139588079647499333ull);
    vlSelf->__PVT__n713 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8705998349525317127ull);
    vlSelf->__PVT__n715 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14130263157628087352ull);
    vlSelf->__PVT__n716 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5030773526662042576ull);
    vlSelf->__PVT__n718 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15827920385248339962ull);
    vlSelf->__PVT__n720 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7529434482031602370ull);
    vlSelf->__PVT__n721 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3378328210007623013ull);
    vlSelf->__PVT__n722 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12725582652751178813ull);
    vlSelf->__PVT__n724 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14782130849758232459ull);
    vlSelf->__PVT__n725 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12412702733757694255ull);
    vlSelf->__PVT__n727 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12554484083762352251ull);
    vlSelf->__PVT__n728 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8403377811738198858ull);
    vlSelf->__PVT__n730 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2019658755523986004ull);
    vlSelf->__PVT__n731 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4661165008437260189ull);
    vlSelf->__PVT__n733 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7505997028503359730ull);
    vlSelf->__PVT__n734 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4444055389054996055ull);
    vlSelf->__PVT__n735 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11015494989603669765ull);
    vlSelf->__PVT__n736 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1581905259481448648ull);
    vlSelf->__PVT__n738 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17151656687436743048ull);
    vlSelf->__PVT__n739 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7297102523051094372ull);
    vlSelf->__PVT__n740 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4424879476168700791ull);
    vlSelf->__PVT__n741 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1028837737564201601ull);
    vlSelf->__PVT__n743 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4538335698664589782ull);
    vlSelf->__PVT__n746 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15956980854596025864ull);
    vlSelf->__PVT__n747 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11116152963195423287ull);
    vlSelf->__PVT__n749 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2226668004265495619ull);
    vlSelf->__PVT__n750 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14874651077666816506ull);
    vlSelf->__PVT__n752 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8644784336997621877ull);
    vlSelf->__PVT__n754 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7032735113392178316ull);
    vlSelf->__PVT__n756 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 381903938459545274ull);
    vlSelf->__PVT__n757 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15766706372720815382ull);
    vlSelf->__PVT__n759 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4603298789290023768ull);
    vlSelf->__PVT__n761 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3951617561057590547ull);
    vlSelf->__PVT__n762 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 555575822453066317ull);
    vlSelf->__PVT__n763 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15747530459834357815ull);
    vlSelf->__PVT__n765 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17003532120756855298ull);
    vlSelf->__PVT__n766 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1522181236955400099ull);
    vlSelf->__PVT__n767 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3408622956449174175ull);
    vlSelf->__PVT__n768 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6946446045058321100ull);
    vlSelf->__PVT__n769 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16064841497211325962ull);
    vlSelf->__PVT__n771 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14973819061256910096ull);
    vlSelf->__PVT__n772 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5530016168973138761ull);
    vlSelf->__PVT__n774 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6030953296476140128ull);
    vlSelf->__PVT__n776 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 240427763528858181ull);
    vlSelf->__PVT__n777 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126869483022639193ull);
    vlSelf->__PVT__n778 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10932333513549304012ull);
    vlSelf->__PVT__n780 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8063050957321709235ull);
    vlSelf->__PVT__n781 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15399768253451396749ull);
    vlSelf->__PVT__n783 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16462922117494178485ull);
    vlSelf->__PVT__n784 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8371669335673190129ull);
    vlSelf->__PVT__n786 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16150042198500644518ull);
    vlSelf->__PVT__n787 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13088100559052267530ull);
    vlSelf->__PVT__n789 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3839459822624102178ull);
    vlSelf->__PVT__n790 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6341956276173103939ull);
    vlSelf->__PVT__n792 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17894167668179014103ull);
    vlSelf->__PVT__n794 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15376330799923150473ull);
    vlSelf->__PVT__n795 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8181394853798072671ull);
    vlSelf->__PVT__n797 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8348231882144826030ull);
    vlSelf->__PVT__n798 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17685273162726864409ull);
    vlSelf->__PVT__n800 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17365679474388790841ull);
    vlSelf->__PVT__n801 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3824151115931993099ull);
    vlSelf->__PVT__n802 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4859934942656740667ull);
    vlSelf->__PVT__n803 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3832843774957512097ull);
    vlSelf->__PVT__n805 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9003936267334736845ull);
    vlSelf->__PVT__n806 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13909151982587396739ull);
    vlSelf->__PVT__n807 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13110919805478417683ull);
    vlSelf->__PVT__n808 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8251715140619213889ull);
    vlSelf->__PVT__n809 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7453482963510319438ull);
    vlSelf->__PVT__n811 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14688208246810009872ull);
    vlSelf->__PVT__n812 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1146679888353168118ull);
    vlSelf->__PVT__n813 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8230224868757257186ull);
    vlSelf->__PVT__n815 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10118980947226670237ull);
    vlSelf->__PVT__n816 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7478003742041733408ull);
    vlSelf->__PVT__n817 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2546777258256070660ull);
    vlSelf->__PVT__n819 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8603231070960857650ull);
    vlSelf->__PVT__n822 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4440053833396531322ull);
    vlSelf->__PVT__n823 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17955571423320416541ull);
    vlSelf->__PVT__n825 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8584055158074564562ull);
    vlSelf->__PVT__n828 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13726822522942947570ull);
    vlSelf->__PVT__n829 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17517817927277748798ull);
    vlSelf->__PVT__n830 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980092201851683151ull);
    vlSelf->__PVT__n831 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17181860024742923343ull);
    vlSelf->__PVT__n836 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11838890813447711633ull);
    vlSelf->__PVT__n837 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16744106528700256719ull);
    vlSelf->__PVT__n838 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3162679975720586250ull);
    vlSelf->__PVT__n839 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2135588808021316844ull);
    vlSelf->__PVT__n840 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6648622408184044981ull);
    vlSelf->__PVT__n841 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13732167388588053120ull);
    vlSelf->__PVT__n842 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8800940904802452455ull);
    vlSelf->__PVT__n843 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13706156620055079525ull);
    vlSelf->__PVT__n845 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8048719778086916519ull);
    vlSelf->__PVT__n846 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1318180718026065468ull);
    vlSelf->__PVT__n847 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9972179284115047023ull);
    vlSelf->__PVT__n848 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9173947107006057391ull);
    vlSelf->__PVT__n849 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11394488925655953205ull);
    vlSelf->__PVT__n850 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8027229506224974789ull);
    vlSelf->__PVT__n853 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1342701496557495534ull);
    vlSelf->__PVT__n855 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9198467885537454912ull);
    vlSelf->__PVT__n859 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12428782762379279986ull);
    vlSelf->__PVT__n862 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8381059795542273936ull);
    vlSelf->__PVT__n864 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17340833333278642798ull);
    vlSelf->__PVT__n866 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6749855648549043933ull);
    vlSelf->__PVT__n867 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5951623471440021213ull);
    vlSelf->__PVT__n869 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12808623820229554596ull);
    vlSelf->__PVT__n871 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6464802958538052943ull);
    vlSelf->__PVT__n872 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12434127628024365824ull);
    vlSelf->__PVT__n873 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11635895450915437171ull);
    vlSelf->__PVT__n874 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16541111166167981558ull);
    vlSelf->__PVT__n875 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15474121803945987008ull);
    vlSelf->__PVT__n876 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1932593445489029253ull);
    vlSelf->__PVT__n877 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4153135264138957003ull);
    vlSelf->__PVT__n878 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12807133830227850483ull);
    vlSelf->__PVT__n879 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12008901653118908579ull);
    vlSelf->__PVT__n880 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498112843977936698ull);
    vlSelf->__PVT__n881 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 838361643034104461ull);
    vlSelf->__PVT__n883 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5745891717262527993ull);
    vlSelf->__PVT__n885 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11802345529967327046ull);
    vlSelf->__PVT__n886 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6871119046181537401ull);
    vlSelf->__PVT__n887 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16973438022344594476ull);
    vlSelf->__PVT__n888 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15830892583917900677ull);
    vlSelf->__PVT__n890 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 66964603432300633ull);
    vlSelf->__PVT__n892 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1990424109460311641ull);
    vlSelf->__PVT__n893 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6895639824713033899ull);
    vlSelf->__PVT__n894 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6097407647604023051ull);
    vlSelf->__PVT__n895 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10151965470087813670ull);
    vlSelf->__PVT__n896 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15057181185340375971ull);
    vlSelf->__PVT__n897 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14258949008231385971ull);
    vlSelf->__PVT__n898 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4466203500610817883ull);
    vlSelf->__PVT__n899 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16182408514259388851ull);
    vlSelf->__PVT__n900 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9273585936770801446ull);
    vlSelf->__PVT__n901 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15707307492321164253ull);
    vlSelf->__PVT__n902 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17652589592741782994ull);
    vlSelf->__PVT__n909 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8283138584270690482ull);
    vlSelf->__PVT__n910 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14363480554018186021ull);
    vlSelf->__PVT__n911 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15483160440012000390ull);
    vlSelf->__PVT__n912 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 15105892697166214885ull);
    vlSelf->__PVT__n913 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8103804547921027300ull);
    vlSelf->__PVT__n914 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5771871763550071350ull);
    vlSelf->__PVT__n915 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16127363055438750194ull);
    vlSelf->__PVT__n916 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15060373693216476220ull);
    vlSelf->__PVT__n917 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15856166642215478974ull);
    vlSelf->__PVT__n918 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2061465968032959033ull);
    vlSelf->__PVT__n919 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5432981076023634880ull);
    vlSelf->__PVT__n920 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9778222557648759291ull);
    vlSelf->__PVT__n921 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8058617866501711022ull);
    vlSelf->__PVT__n922 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9859679388807580356ull);
    vlSelf->__PVT__n923 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6782152879971645184ull);
    vlSelf->__PVT__n924 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 701437244764450014ull);
    vlSelf->__PVT__n925 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6863609711130476174ull);
    vlSelf->__PVT__n926 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15096643842956180751ull);
    vlSelf->__PVT__n927 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803272159379202732ull);
    vlSelf->__PVT__n928 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14917683472066093584ull);
    vlSelf->__PVT__n929 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8836967836858893762ull);
    vlSelf->__PVT__n930 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16782884021898644975ull);
    vlSelf->__PVT__n931 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16573408397590745255ull);
    vlSelf->__PVT__n932 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6359698455706683943ull);
    vlSelf->__PVT__n933 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12521870922072842374ull);
    vlSelf->__PVT__n934 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1158671828767286619ull);
    vlSelf->__PVT__n935 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5466401966976649893ull);
    vlSelf->__PVT__n936 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6262194915975520331ull);
    vlSelf->__PVT__n937 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 181479280768337125ull);
    vlSelf->__PVT__n938 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13635929998639575312ull);
    vlSelf->__PVT__n939 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3361895537909708446ull);
    vlSelf->__PVT__n940 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10447506080964226546ull);
    vlSelf->__PVT__n941 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15844400851749277297ull);
    vlSelf->__PVT__n942 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17645462374054933470ull);
    vlSelf->__PVT__n943 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9554209592233977770ull);
    vlSelf->__PVT__n944 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 850628717189099293ull);
    vlSelf->__PVT__n945 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7368246332008334571ull);
    vlSelf->__PVT__n946 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17723737623897028415ull);
    vlSelf->__PVT__n947 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5231475703492942865ull);
    vlSelf->__PVT__n948 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10304483537283312011ull);
    vlSelf->__PVT__n949 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4223767902076018377ull);
    vlSelf->__PVT__n950 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8989973817964466689ull);
    vlSelf->__PVT__n951 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15212470803176279994ull);
    vlSelf->__Vdly__n913 = 0;
    vlSelf->__Vdly__n914 = 0;
    vlSelf->__Vdly__n915 = 0;
    vlSelf->__Vdly__n916 = 0;
    vlSelf->__Vdly__n917 = 0;
    vlSelf->__Vdly__n918 = 0;
    vlSelf->__Vdly__n919 = 0;
    vlSelf->__Vdly__n920 = 0;
    vlSelf->__Vdly__n921 = 0;
    vlSelf->__Vdly__n922 = 0;
    vlSelf->__Vdly__n923 = 0;
    vlSelf->__Vdly__n924 = 0;
    vlSelf->__Vdly__n925 = 0;
    vlSelf->__Vdly__n926 = 0;
    vlSelf->__Vdly__n927 = 0;
    vlSelf->__Vdly__n928 = 0;
    vlSelf->__Vdly__n929 = 0;
    vlSelf->__Vdly__n930 = 0;
    vlSelf->__Vdly__n931 = 0;
    vlSelf->__Vdly__n932 = 0;
    vlSelf->__Vdly__n933 = 0;
    vlSelf->__Vdly__n934 = 0;
    vlSelf->__Vdly__n935 = 0;
    vlSelf->__Vdly__n936 = 0;
    vlSelf->__Vdly__n937 = 0;
    vlSelf->__Vdly__n938 = 0;
    vlSelf->__Vdly__n939 = 0;
    vlSelf->__Vdly__n940 = 0;
    vlSelf->__Vdly__n941 = 0;
    vlSelf->__Vdly__n942 = 0;
    vlSelf->__Vdly__n943 = 0;
    vlSelf->__Vdly__n944 = 0;
    vlSelf->__Vdly__n949 = 0;
    vlSelf->__Vdly__n950 = 0;
    vlSelf->__Vdly__n951 = 0;
    vlSelf->__Vdly__n946 = 0;
    vlSelf->__Vdly__n948 = 0;
}
