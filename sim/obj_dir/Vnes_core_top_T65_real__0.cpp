// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_T65_real___ico_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___ico_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0\n"); );
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

void Vnes_core_top_T65_real___ico_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___ico_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1\n"); );
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
    vlSelfRef.__PVT__n680 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n565)
                              : (IData)(vlSelfRef.__PVT__n664));
    vlSelfRef.__PVT__n504 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n374)
                              : (IData)(vlSelfRef.__PVT__n383));
    vlSelfRef.__PVT__n505 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n375)
                              : (IData)(vlSelfRef.__PVT__n385));
    vlSelfRef.__PVT__n506 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n376)
                              : (IData)(vlSelfRef.__PVT__n387));
    vlSelfRef.__PVT__n297 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n296)
                              : (IData)(vlSelfRef.__PVT__n264));
    vlSelfRef.__PVT__n293 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__pbr)
                              : (IData)(vlSelfRef.__PVT__n259));
    vlSelfRef.__PVT__n294 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__dbr)
                              : (IData)(vlSelfRef.__PVT__n261));
    vlSelfRef.__PVT__n298 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__ef_i)
                              : (IData)(vlSelfRef.__PVT__n266));
    vlSelfRef.__PVT__n299 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__mf_i)
                              : (IData)(vlSelfRef.__PVT__n268));
    vlSelfRef.__PVT__n300 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__xf_i)
                              : (IData)(vlSelfRef.__PVT__n270));
    vlSelfRef.__PVT__n302 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__mode_r)
                              : (IData)(vlSelfRef.__PVT__n197));
    vlSelfRef.__PVT__n303 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__bcd_en_r)
                              : (IData)(vlSelfRef.__PVT__n198));
    vlSelfRef.__PVT__n304 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__alu_op_r)
                              : (IData)(vlSelfRef.__PVT__n274));
    vlSelfRef.__PVT__n305 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__write_data_r)
                              : (IData)(vlSelfRef.__PVT__n275));
    vlSelfRef.__PVT__n306 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__set_addr_to_r)
                              : (IData)(vlSelfRef.__PVT__n276));
    vlSelfRef.__PVT__n307 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n158)
                              : (IData)(vlSelfRef.__PVT__n291));
    vlSelfRef.__PVT__n308 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__wrn_i)
                              : (IData)(vlSelfRef.__PVT__n277));
    vlSelfRef.__PVT__n507 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n373)
                              : (IData)(vlSelfRef.__PVT__n475));
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
    vlSelfRef.__PVT__n486 = ((IData)(vlSelfRef.__PVT__n501)
                              ? (IData)(vlSelfRef.__PVT__IRQ_n)
                              : (IData)(vlSelfRef.__PVT__irq_n_o));
    vlSelfRef.__PVT__n115 = (1U & (~ (IData)(vlSelfRef.__PVT__Res_n)));
    vlSelfRef.__PVT__n531 = ((IData)(vlSelfRef.__PVT__n372)
                              ? (IData)(vlSelfRef.__PVT__nmi_n_o)
                              : (IData)(vlSelfRef.__PVT__n510));
    vlSelfRef.__PVT__n688 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__nmi_entered)
                              : (IData)(vlSelfRef.__PVT__n680));
    vlSelfRef.__PVT__n513 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n504));
    vlSelfRef.__PVT__n518 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n505));
    vlSelfRef.__PVT__n523 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n506));
    vlSelfRef.__PVT__n312 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__s)
                              : (IData)(vlSelfRef.__PVT__n297));
    vlSelfRef.__PVT__n309 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n141)
                              : (IData)(vlSelfRef.__PVT__n293));
    vlSelfRef.__PVT__n310 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n142)
                              : (IData)(vlSelfRef.__PVT__n294));
    vlSelfRef.__PVT__n313 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n153)
                              : (IData)(vlSelfRef.__PVT__n298));
    vlSelfRef.__PVT__n314 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n154)
                              : (IData)(vlSelfRef.__PVT__n299));
    vlSelfRef.__PVT__n315 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n155)
                              : (IData)(vlSelfRef.__PVT__n300));
    vlSelfRef.__PVT__n317 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n143)
                              : (IData)(vlSelfRef.__PVT__n302));
    vlSelfRef.__PVT__n318 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n144)
                              : (IData)(vlSelfRef.__PVT__n303));
    vlSelfRef.__PVT__n319 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n147)
                              : (IData)(vlSelfRef.__PVT__n304));
    vlSelfRef.__PVT__n320 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n148)
                              : (IData)(vlSelfRef.__PVT__n305));
    vlSelfRef.__PVT__n321 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n150)
                              : (IData)(vlSelfRef.__PVT__n306));
    vlSelfRef.__PVT__n322 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__rdy_mod)
                              : (IData)(vlSelfRef.__PVT__n307));
    vlSelfRef.__PVT__n323 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n152)
                              : (IData)(vlSelfRef.__PVT__n308));
    vlSelfRef.__PVT__n528 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n507));
    vlSelfRef.__PVT__n509 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n377)
                              : (IData)(vlSelfRef.__PVT__n486));
    vlSelfRef.__PVT__n540 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n516), (IData)(vlSelfRef.__PVT__n513));
    vlSelfRef.__PVT__n542 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n521), (IData)(vlSelfRef.__PVT__n518));
    vlSelfRef.__PVT__n544 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n526), (IData)(vlSelfRef.__PVT__n523));
    vlSelfRef.__PVT__n328 = ((IData)(vlSelfRef.__PVT__n137)
                              ? 0U : (IData)(vlSelfRef.__PVT__n312));
    vlSelfRef.__PVT__n324 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__pbr)
                              : (IData)(vlSelfRef.__PVT__n309));
    vlSelfRef.__PVT__n325 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__dbr)
                              : (IData)(vlSelfRef.__PVT__n310));
    vlSelfRef.__PVT__n329 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__ef_i)
                              : (IData)(vlSelfRef.__PVT__n313));
    vlSelfRef.__PVT__n330 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__mf_i)
                              : (IData)(vlSelfRef.__PVT__n314));
    vlSelfRef.__PVT__n331 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__xf_i)
                              : (IData)(vlSelfRef.__PVT__n315));
    vlSelfRef.__PVT__n333 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__mode_r)
                              : (IData)(vlSelfRef.__PVT__n317));
    vlSelfRef.__PVT__n334 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__bcd_en_r)
                              : (IData)(vlSelfRef.__PVT__n318));
    vlSelfRef.__PVT__n335 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__alu_op_r)
                              : (IData)(vlSelfRef.__PVT__n319));
    vlSelfRef.__PVT__n336 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__write_data_r)
                              : (IData)(vlSelfRef.__PVT__n320));
    vlSelfRef.__PVT__n337 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__set_addr_to_r)
                              : (IData)(vlSelfRef.__PVT__n321));
    vlSelfRef.__PVT__n338 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__rdy_mod)
                              : (IData)(vlSelfRef.__PVT__n322));
    vlSelfRef.__PVT__n339 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__wrn_i)
                              : (IData)(vlSelfRef.__PVT__n323));
    vlSelfRef.__PVT__n538 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 7U));
    vlSelfRef.__PVT__n539 = (0x0000003fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 0U, 6));
    vlSelfRef.__PVT__n536 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 6U));
    vlSelfRef.__PVT__n530 = ((IData)(vlSelfRef.__PVT__n372)
                              ? (IData)(vlSelfRef.__PVT__irq_n_o)
                              : (IData)(vlSelfRef.__PVT__n509));
    vlSelfRef.__PVT__n537 = ((IData)(vlSelfRef.__PVT__n534) 
                             | (IData)(vlSelfRef.__PVT__n536));
    vlSelfRef.__PVT__n546 = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__n538), 
                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__n537), (IData)(vlSelfRef.__PVT__n539)));
}

void Vnes_core_top_T65_real___ico_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___ico_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2\n"); );
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
    vlSelfRef.__PVT__reg_wired_or_0 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_dout;
    vlSelfRef.__PVT__reg_wired_or_1 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_dout;
    vlSelfRef.__PVT__reg_wired_or_2 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_dout;
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
    vlSelfRef.__PVT__n31 = (vlSelfRef.__PVT__reg_wired_or_0 
                            | vlSelfRef.__PVT__reg_wired_or_1);
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
    vlSelfRef.__PVT__n32 = (vlSelfRef.__PVT__n31 | vlSelfRef.__PVT__reg_wired_or_2);
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
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSelfRef.__PVT__n32;
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

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n880 = (1U & (~ (IData)(vlSelfRef.__PVT__NMI_n)));
}

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__n948 = vlSelfRef.__PVT__n948;
    vlSelfRef.__Vdly__n946 = vlSelfRef.__PVT__n946;
    vlSelfRef.__Vdly__n948 = ((~ (IData)(vlSelfRef.__PVT__n115)) 
                              & (IData)(vlSelfRef.__PVT__n947));
    vlSelfRef.__Vdly__n946 = ((~ (IData)(vlSelfRef.__PVT__n115)) 
                              & (IData)(vlSelfRef.__PVT__n945));
    vlSelfRef.__PVT__n948 = vlSelfRef.__Vdly__n948;
    vlSelfRef.__PVT__n946 = vlSelfRef.__Vdly__n946;
    vlSelfRef.__PVT__res_n_d = vlSelfRef.__PVT__n948;
    vlSelfRef.__PVT__res_n_i = vlSelfRef.__PVT__n946;
    vlSelfRef.__PVT__n836 = (1U & (~ (IData)(vlSelfRef.__PVT__res_n_i)));
    vlSelfRef.__PVT__n557 = (1U & (~ (IData)(vlSelfRef.__PVT__res_n_i)));
    vlSelfRef.__PVT__n138 = (1U & (~ (IData)(vlSelfRef.__PVT__res_n_i)));
}

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ss_3 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__dout;
    vlSelfRef.__PVT__n558 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0U, 8));
    vlSelfRef.__PVT__n559 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 8U, 8));
    vlSelfRef.__PVT__n560 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x10U, 8));
    vlSelfRef.__PVT__n561 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x18U, 8));
    vlSelfRef.__PVT__n562 = (0x000001ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x20U, 9));
    vlSelfRef.__PVT__n563 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x29U, 8));
    vlSelfRef.__PVT__n564 = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x31U, 8));
    vlSelfRef.__PVT__n565 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__ss_3, 0x39U));
}

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__3(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ss_1 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__dout;
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
    vlSelfRef.__PVT__n147 = VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__n145));
    vlSelfRef.__PVT__n296 = VL_EXTEND_II(16,8, (IData)(vlSelfRef.__PVT__n157));
}

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__4(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ss_2 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__dout;
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
}

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__5(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__n951 = vlSelfRef.__PVT__n951;
    vlSelfRef.__Vdly__n938 = vlSelfRef.__PVT__n938;
    vlSelfRef.__Vdly__n925 = vlSelfRef.__PVT__n925;
    vlSelfRef.__Vdly__n926 = vlSelfRef.__PVT__n926;
    vlSelfRef.__Vdly__n927 = vlSelfRef.__PVT__n927;
    vlSelfRef.__Vdly__n940 = vlSelfRef.__PVT__n940;
    vlSelfRef.__Vdly__n939 = vlSelfRef.__PVT__n939;
    vlSelfRef.__Vdly__n941 = vlSelfRef.__PVT__n941;
    vlSelfRef.__Vdly__n935 = vlSelfRef.__PVT__n935;
    vlSelfRef.__Vdly__n949 = vlSelfRef.__PVT__n949;
    vlSelfRef.__Vdly__n936 = vlSelfRef.__PVT__n936;
    vlSelfRef.__Vdly__n937 = vlSelfRef.__PVT__n937;
    vlSelfRef.__Vdly__n915 = vlSelfRef.__PVT__n915;
    vlSelfRef.__Vdly__n944 = vlSelfRef.__PVT__n944;
    vlSelfRef.__Vdly__n913 = vlSelfRef.__PVT__n913;
    vlSelfRef.__Vdly__n914 = vlSelfRef.__PVT__n914;
    vlSelfRef.__Vdly__n950 = vlSelfRef.__PVT__n950;
    vlSelfRef.__Vdly__n933 = vlSelfRef.__PVT__n933;
    vlSelfRef.__Vdly__n917 = vlSelfRef.__PVT__n917;
    vlSelfRef.__Vdly__n919 = vlSelfRef.__PVT__n919;
    vlSelfRef.__Vdly__n922 = vlSelfRef.__PVT__n922;
    vlSelfRef.__Vdly__n921 = vlSelfRef.__PVT__n921;
    vlSelfRef.__Vdly__n920 = vlSelfRef.__PVT__n920;
    vlSelfRef.__Vdly__n924 = vlSelfRef.__PVT__n924;
    vlSelfRef.__Vdly__n918 = vlSelfRef.__PVT__n918;
    vlSelfRef.__Vdly__n923 = vlSelfRef.__PVT__n923;
    vlSelfRef.__Vdly__n930 = vlSelfRef.__PVT__n930;
    vlSelfRef.__Vdly__n934 = vlSelfRef.__PVT__n934;
    vlSelfRef.__Vdly__n931 = vlSelfRef.__PVT__n931;
    vlSelfRef.__Vdly__n929 = vlSelfRef.__PVT__n929;
    vlSelfRef.__Vdly__n943 = vlSelfRef.__PVT__n943;
    vlSelfRef.__Vdly__n916 = vlSelfRef.__PVT__n916;
    vlSelfRef.__Vdly__n942 = vlSelfRef.__PVT__n942;
    vlSelfRef.__Vdly__n928 = vlSelfRef.__PVT__n928;
    vlSelfRef.__Vdly__n932 = vlSelfRef.__PVT__n932;
    vlSelfRef.__Vdly__n951 = vlSelfRef.__PVT__n688;
    vlSelfRef.__Vdly__n938 = vlSelfRef.__PVT__SO_n;
    vlSelfRef.__Vdly__n925 = vlSelfRef.__PVT__n329;
    vlSelfRef.__Vdly__n926 = vlSelfRef.__PVT__n330;
    vlSelfRef.__Vdly__n927 = vlSelfRef.__PVT__n331;
    vlSelfRef.__Vdly__n940 = vlSelfRef.__PVT__n531;
    vlSelfRef.__Vdly__n939 = vlSelfRef.__PVT__n530;
    vlSelfRef.__Vdly__n941 = vlSelfRef.__PVT__n902;
    vlSelfRef.__Vdly__n935 = vlSelfRef.__PVT__n899;
    vlSelfRef.__Vdly__n949 = vlSelfRef.__PVT__n338;
    vlSelfRef.__Vdly__n936 = vlSelfRef.__PVT__n900;
    vlSelfRef.__Vdly__n937 = vlSelfRef.__PVT__n901;
    vlSelfRef.__Vdly__n915 = vlSelfRef.__PVT__n544;
    vlSelfRef.__Vdly__n944 = vlSelfRef.__PVT__n687;
    vlSelfRef.__Vdly__n913 = vlSelfRef.__PVT__n540;
    vlSelfRef.__Vdly__n914 = vlSelfRef.__PVT__n542;
    vlSelfRef.__Vdly__n950 = vlSelfRef.__PVT__n339;
    vlSelfRef.__Vdly__n933 = vlSelfRef.__PVT__n336;
    vlSelfRef.__Vdly__n917 = vlSelfRef.__PVT__n681;
    vlSelfRef.__Vdly__n919 = vlSelfRef.__PVT__n683;
    vlSelfRef.__Vdly__n922 = vlSelfRef.__PVT__n325;
    vlSelfRef.__Vdly__n921 = vlSelfRef.__PVT__n324;
    vlSelfRef.__Vdly__n920 = vlSelfRef.__PVT__n684;
    vlSelfRef.__Vdly__n924 = vlSelfRef.__PVT__n328;
    vlSelfRef.__Vdly__n918 = vlSelfRef.__PVT__n682;
    vlSelfRef.__Vdly__n923 = vlSelfRef.__PVT__n326;
    vlSelfRef.__Vdly__n930 = vlSelfRef.__PVT__n333;
    vlSelfRef.__Vdly__n934 = vlSelfRef.__PVT__n337;
    vlSelfRef.__Vdly__n931 = vlSelfRef.__PVT__n334;
    vlSelfRef.__Vdly__n929 = vlSelfRef.__PVT__n898;
    vlSelfRef.__Vdly__n943 = vlSelfRef.__PVT__n686;
    vlSelfRef.__Vdly__n916 = vlSelfRef.__PVT__n546;
    vlSelfRef.__Vdly__n942 = vlSelfRef.__PVT__n685;
    vlSelfRef.__Vdly__n928 = vlSelfRef.__PVT__n332;
    vlSelfRef.__Vdly__n932 = vlSelfRef.__PVT__n335;
    vlSelfRef.__PVT__n951 = vlSelfRef.__Vdly__n951;
    vlSelfRef.__PVT__n938 = vlSelfRef.__Vdly__n938;
    vlSelfRef.__PVT__n925 = vlSelfRef.__Vdly__n925;
    vlSelfRef.__PVT__n926 = vlSelfRef.__Vdly__n926;
    vlSelfRef.__PVT__n927 = vlSelfRef.__Vdly__n927;
    vlSelfRef.__PVT__n940 = vlSelfRef.__Vdly__n940;
    vlSelfRef.__PVT__n939 = vlSelfRef.__Vdly__n939;
    vlSelfRef.__PVT__n941 = vlSelfRef.__Vdly__n941;
    vlSelfRef.__PVT__n935 = vlSelfRef.__Vdly__n935;
    vlSelfRef.__PVT__n949 = vlSelfRef.__Vdly__n949;
    vlSelfRef.__PVT__n936 = vlSelfRef.__Vdly__n936;
    vlSelfRef.__PVT__n937 = vlSelfRef.__Vdly__n937;
    vlSelfRef.__PVT__n915 = vlSelfRef.__Vdly__n915;
    vlSelfRef.__PVT__n944 = vlSelfRef.__Vdly__n944;
    vlSelfRef.__PVT__n913 = vlSelfRef.__Vdly__n913;
    vlSelfRef.__PVT__n914 = vlSelfRef.__Vdly__n914;
    vlSelfRef.__PVT__n950 = vlSelfRef.__Vdly__n950;
    vlSelfRef.__PVT__n933 = vlSelfRef.__Vdly__n933;
    vlSelfRef.__PVT__n917 = vlSelfRef.__Vdly__n917;
    vlSelfRef.__PVT__n919 = vlSelfRef.__Vdly__n919;
    vlSelfRef.__PVT__n922 = vlSelfRef.__Vdly__n922;
    vlSelfRef.__PVT__n921 = vlSelfRef.__Vdly__n921;
    vlSelfRef.__PVT__n920 = vlSelfRef.__Vdly__n920;
    vlSelfRef.__PVT__n924 = vlSelfRef.__Vdly__n924;
    vlSelfRef.__PVT__n918 = vlSelfRef.__Vdly__n918;
    vlSelfRef.__PVT__n923 = vlSelfRef.__Vdly__n923;
    vlSelfRef.__PVT__n930 = vlSelfRef.__Vdly__n930;
    vlSelfRef.__PVT__n934 = vlSelfRef.__Vdly__n934;
    vlSelfRef.__PVT__n931 = vlSelfRef.__Vdly__n931;
    vlSelfRef.__PVT__n929 = vlSelfRef.__Vdly__n929;
    vlSelfRef.__PVT__n943 = vlSelfRef.__Vdly__n943;
    vlSelfRef.__PVT__n916 = vlSelfRef.__Vdly__n916;
    vlSelfRef.__PVT__n942 = vlSelfRef.__Vdly__n942;
    vlSelfRef.__PVT__n928 = vlSelfRef.__Vdly__n928;
    vlSelfRef.__PVT__n932 = vlSelfRef.__Vdly__n932;
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
    vlSelfRef.__PVT__n209 = ((IData)(vlSelfRef.__PVT__n206) 
                             | (IData)(vlSelfRef.__PVT__n208));
    vlSelfRef.__PVT__n184 = ((IData)(vlSelfRef.__PVT__n183) 
                             & (IData)(vlSelfRef.__PVT__n182));
    vlSelfRef.__PVT__n526 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n525));
    vlSelfRef.__PVT__n608 = (0x000000ffU & ((IData)(vlSelfRef.__PVT__ad) 
                                            + (IData)(vlSelfRef.__PVT__n607)));
    vlSelfRef.__PVT__n817 = ((IData)(vlSelfRef.__PVT__n816) 
                             & (IData)(vlSelfRef.__PVT__busb_r));
    vlSelfRef.__PVT__n516 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n515));
    vlSelfRef.__PVT__n727 = (0xeeU | (IData)(vlSelfRef.__PVT__n725));
    vlSelfRef.__PVT__n733 = (0xeeU | (IData)(vlSelfRef.__PVT__n731));
    vlSelfRef.__PVT__n521 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n520));
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

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__6(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__reg_wired_or_2 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_3.__PVT__bus_dout;
    vlSelfRef.__PVT__reg_wired_or_1 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_2.__PVT__bus_dout;
    vlSelfRef.__PVT__reg_wired_or_0 = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1.__PVT__bus_dout;
    vlSelfRef.__PVT__n210 = ((IData)(vlSelfRef.__PVT__n209) 
                             & (IData)(vlSelfRef.__PVT__dec_s));
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
    vlSelfRef.__PVT__n31 = (vlSelfRef.__PVT__reg_wired_or_0 
                            | vlSelfRef.__PVT__reg_wired_or_1);
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
    vlSelfRef.__PVT__n32 = (vlSelfRef.__PVT__n31 | vlSelfRef.__PVT__reg_wired_or_2);
    vlSelfRef.__PVT__n204 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n203), (IData)(vlSelfRef.__PVT__n192));
    vlSelfRef.__PVT__n71 = vlSelfRef.__PVT__n70;
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
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSelfRef.__PVT__n32;
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

void Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__7(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n115 = (1U & (~ (IData)(vlSelfRef.__PVT__Res_n)));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n947 = ((IData)(vlSelfRef.__PVT__Enable) 
                             | (IData)(vlSelfRef.__PVT__res_n_d));
    vlSelfRef.__PVT__n945 = ((IData)(vlSelfRef.__PVT__Enable)
                              ? (IData)(vlSelfRef.__PVT__res_n_d)
                              : (IData)(vlSelfRef.__PVT__res_n_i));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n502 = ((IData)(vlSelfRef.__PVT__n492) 
                             & (IData)(vlSelfRef.__PVT__Enable));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n887 = ((IData)(vlSelfRef.__PVT__n886) 
                             & (IData)(vlSelfRef.__PVT__n880));
    vlSelfRef.__PVT__n888 = ((IData)(vlSelfRef.__PVT__n887) 
                             & (IData)(vlSelfRef.__PVT__nmi_n_o));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__3(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n493 = ((IData)(vlSelfRef.__PVT__n502)
                              ? (IData)(vlSelfRef.__PVT__NMI_n)
                              : (IData)(vlSelfRef.__PVT__nmi_n_o));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__4(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n172 = (1U & (~ (IData)(vlSelfRef.__PVT__Rdy)));
    vlSelfRef.__PVT__n34 = ((IData)(vlSelfRef.__PVT__Rdy) 
                            | (IData)(vlSelfRef.__PVT__n33));
    vlSelfRef.__PVT__n173 = ((IData)(vlSelfRef.__PVT__n172) 
                             & (IData)(vlSelfRef.__PVT__n171));
    vlSelfRef.__PVT__really_rdy = vlSelfRef.__PVT__n34;
    vlSelfRef.__PVT__n175 = ((IData)(vlSelfRef.__PVT__n173) 
                             | (IData)(vlSelfRef.__PVT__rdy_mod));
    vlSelfRef.__PVT__n663 = ((IData)(vlSelfRef.__PVT__n570) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n484 = (1U & (~ (IData)(vlSelfRef.__PVT__really_rdy)));
    vlSelfRef.__PVT__n271 = ((IData)(vlSelfRef.__PVT__n181) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n272 = ((IData)(vlSelfRef.__PVT__n181) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
    vlSelfRef.__PVT__n273 = ((IData)(vlSelfRef.__PVT__n181) 
                             & (IData)(vlSelfRef.__PVT__really_rdy));
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
    vlSelfRef.__PVT__n485 = ((IData)(vlSelfRef.__PVT__n483) 
                             | (IData)(vlSelfRef.__PVT__n484));
    vlSelfRef.__PVT__n862 = ((~ (IData)(vlSelfRef.__PVT__n879)) 
                             & (IData)(vlSelfRef.__PVT__nmiact));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__5(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__n500 = ((IData)(vlSelfRef.__PVT__really_rdy) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n671 = ((IData)(vlSelfRef.__PVT__n663) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n285 = ((IData)(vlSelfRef.__PVT__n271) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n286 = ((IData)(vlSelfRef.__PVT__n272) 
                             & (IData)(vlSelfRef.__PVT__Enable));
    vlSelfRef.__PVT__n287 = ((IData)(vlSelfRef.__PVT__n273) 
                             & (IData)(vlSelfRef.__PVT__Enable));
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
    vlSelfRef.__PVT__n291 = ((IData)(vlSelfRef.__PVT__Enable)
                              ? (IData)(vlSelfRef.__PVT__n177)
                              : (IData)(vlSelfRef.__PVT__rdy_mod));
    vlSelfRef.__PVT__n501 = ((IData)(vlSelfRef.__PVT__n485) 
                             & (IData)(vlSelfRef.__PVT__Enable));
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
    vlSelfRef.__PVT__n475 = ((IData)(vlSelfRef.__PVT__n500)
                              ? (IData)(vlSelfRef.__PVT__n468)
                              : (IData)(vlSelfRef.__PVT__p));
    vlSelfRef.__PVT__n197 = ((IData)(vlSelfRef.__PVT__n286)
                              ? (IData)(vlSelfRef.__PVT__Mode)
                              : (IData)(vlSelfRef.__PVT__mode_r));
    vlSelfRef.__PVT__n198 = ((IData)(vlSelfRef.__PVT__n287)
                              ? (IData)(vlSelfRef.__PVT__BCD_en)
                              : (IData)(vlSelfRef.__PVT__bcd_en_r));
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
    vlSelfRef.__PVT__n293 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__pbr)
                              : (IData)(vlSelfRef.__PVT__n259));
    vlSelfRef.__PVT__n294 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__dbr)
                              : (IData)(vlSelfRef.__PVT__n261));
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
    vlSelfRef.__PVT__n302 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__mode_r)
                              : (IData)(vlSelfRef.__PVT__n197));
    vlSelfRef.__PVT__n303 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__bcd_en_r)
                              : (IData)(vlSelfRef.__PVT__n198));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__6(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n510 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n378)
                              : (IData)(vlSelfRef.__PVT__n493));
    vlSelfRef.__PVT__n531 = ((IData)(vlSelfRef.__PVT__n372)
                              ? (IData)(vlSelfRef.__PVT__nmi_n_o)
                              : (IData)(vlSelfRef.__PVT__n510));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__7(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n890 = ((IData)(vlSelfRef.__PVT__n888) 
                             | (IData)(vlSelfRef.__PVT__n862));
    vlSelfRef.__PVT__n892 = ((~ (IData)(vlSelfRef.__PVT__nmi_entered)) 
                             & (IData)(vlSelfRef.__PVT__n890));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__8(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n307 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n158)
                              : (IData)(vlSelfRef.__PVT__n291));
    vlSelfRef.__PVT__n507 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n373)
                              : (IData)(vlSelfRef.__PVT__n475));
    vlSelfRef.__PVT__n504 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n374)
                              : (IData)(vlSelfRef.__PVT__n383));
    vlSelfRef.__PVT__n505 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n375)
                              : (IData)(vlSelfRef.__PVT__n385));
    vlSelfRef.__PVT__n506 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n376)
                              : (IData)(vlSelfRef.__PVT__n387));
    vlSelfRef.__PVT__n528 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n507));
    vlSelfRef.__PVT__n513 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n504));
    vlSelfRef.__PVT__n518 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n505));
    vlSelfRef.__PVT__n523 = ((IData)(vlSelfRef.__PVT__n372)
                              ? 0U : (IData)(vlSelfRef.__PVT__n506));
    vlSelfRef.__PVT__n538 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 7U));
    vlSelfRef.__PVT__n539 = (0x0000003fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 0U, 6));
    vlSelfRef.__PVT__n536 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n528), 6U));
    vlSelfRef.__PVT__n540 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n516), (IData)(vlSelfRef.__PVT__n513));
    vlSelfRef.__PVT__n542 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n521), (IData)(vlSelfRef.__PVT__n518));
    vlSelfRef.__PVT__n544 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n526), (IData)(vlSelfRef.__PVT__n523));
    vlSelfRef.__PVT__n537 = ((IData)(vlSelfRef.__PVT__n534) 
                             | (IData)(vlSelfRef.__PVT__n536));
    vlSelfRef.__PVT__n546 = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__n538), 
                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__n537), (IData)(vlSelfRef.__PVT__n539)));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__9(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n898 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n837)
                              : (IData)(vlSelfRef.__PVT__n875));
    vlSelfRef.__PVT__n899 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n838)
                              : (IData)(vlSelfRef.__PVT__n871));
    vlSelfRef.__PVT__n900 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n839)
                              : (IData)(vlSelfRef.__PVT__n872));
    vlSelfRef.__PVT__n901 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n840)
                              : (IData)(vlSelfRef.__PVT__n873));
    vlSelfRef.__PVT__n315 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n155)
                              : (IData)(vlSelfRef.__PVT__n300));
    vlSelfRef.__PVT__n322 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__rdy_mod)
                              : (IData)(vlSelfRef.__PVT__n307));
    vlSelfRef.__PVT__n331 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__xf_i)
                              : (IData)(vlSelfRef.__PVT__n315));
    vlSelfRef.__PVT__n338 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__rdy_mod)
                              : (IData)(vlSelfRef.__PVT__n322));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__10(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n680 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n565)
                              : (IData)(vlSelfRef.__PVT__n664));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__11(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n297 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n296)
                              : (IData)(vlSelfRef.__PVT__n264));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__12(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n309 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n141)
                              : (IData)(vlSelfRef.__PVT__n293));
    vlSelfRef.__PVT__n310 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n142)
                              : (IData)(vlSelfRef.__PVT__n294));
    vlSelfRef.__PVT__n313 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n153)
                              : (IData)(vlSelfRef.__PVT__n298));
    vlSelfRef.__PVT__n314 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n154)
                              : (IData)(vlSelfRef.__PVT__n299));
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
    vlSelfRef.__PVT__n317 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n143)
                              : (IData)(vlSelfRef.__PVT__n302));
    vlSelfRef.__PVT__n318 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n144)
                              : (IData)(vlSelfRef.__PVT__n303));
    vlSelfRef.__PVT__n312 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__s)
                              : (IData)(vlSelfRef.__PVT__n297));
    vlSelfRef.__PVT__n324 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__pbr)
                              : (IData)(vlSelfRef.__PVT__n309));
    vlSelfRef.__PVT__n325 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__dbr)
                              : (IData)(vlSelfRef.__PVT__n310));
    vlSelfRef.__PVT__n329 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__ef_i)
                              : (IData)(vlSelfRef.__PVT__n313));
    vlSelfRef.__PVT__n330 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__mf_i)
                              : (IData)(vlSelfRef.__PVT__n314));
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
    vlSelfRef.__PVT__n333 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__mode_r)
                              : (IData)(vlSelfRef.__PVT__n317));
    vlSelfRef.__PVT__n334 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__bcd_en_r)
                              : (IData)(vlSelfRef.__PVT__n318));
    vlSelfRef.__PVT__n328 = ((IData)(vlSelfRef.__PVT__n137)
                              ? 0U : (IData)(vlSelfRef.__PVT__n312));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__13(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n897 = ((IData)(vlSelfRef.__PVT__Enable)
                              ? (IData)(vlSelfRef.__PVT__n892)
                              : (IData)(vlSelfRef.__PVT__nmiact));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__14(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__14\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n688 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__nmi_entered)
                              : (IData)(vlSelfRef.__PVT__n680));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__15(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__15\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n902 = ((IData)(vlSelfRef.__PVT__n836)
                              ? (IData)(vlSelfRef.__PVT__n841)
                              : (IData)(vlSelfRef.__PVT__n897));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__16(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__16\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n486 = ((IData)(vlSelfRef.__PVT__n501)
                              ? (IData)(vlSelfRef.__PVT__IRQ_n)
                              : (IData)(vlSelfRef.__PVT__irq_n_o));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__17(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__17\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n509 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__n377)
                              : (IData)(vlSelfRef.__PVT__n486));
    vlSelfRef.__PVT__n530 = ((IData)(vlSelfRef.__PVT__n372)
                              ? (IData)(vlSelfRef.__PVT__irq_n_o)
                              : (IData)(vlSelfRef.__PVT__n509));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__18(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__18\n"); );
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
    vlSelfRef.__PVT__n674 = ((IData)(vlSelfRef.__PVT__SaveStateBus_load)
                              ? (IData)(vlSelfRef.__PVT__dl)
                              : (IData)(vlSelfRef.__PVT__n657));
    vlSelfRef.__PVT__n262 = VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__n256), (IData)(vlSelfRef.__PVT__n252));
    vlSelfRef.__PVT__busa = vlSelfRef.__PVT__n749;
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
    vlSelfRef.__PVT__n606 = ((4U == (IData)(vlSelfRef.__PVT__n603))
                              ? (IData)(vlSelfRef.__PVT__bal)
                              : ((2U == (IData)(vlSelfRef.__PVT__n603))
                                  ? (IData)(vlSelfRef.__PVT__n583)
                                  : ((1U == (IData)(vlSelfRef.__PVT__n603))
                                      ? (IData)(vlSelfRef.__PVT__n577)
                                      : (IData)(vlSelfRef.__PVT__bal))));
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
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__19(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__19\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n686 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n559)
                              : (IData)(vlSelfRef.__PVT__n678));
    vlSelfRef.__PVT__n687 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n560)
                              : (IData)(vlSelfRef.__PVT__n679));
    vlSelfRef.__PVT__n681 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n561)
                              : (IData)(vlSelfRef.__PVT__n673));
    vlSelfRef.__PVT__n683 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n563)
                              : (IData)(vlSelfRef.__PVT__n675));
    vlSelfRef.__PVT__n682 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n564)
                              : (IData)(vlSelfRef.__PVT__n674));
    vlSelfRef.__PVT__n685 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n558)
                              : (IData)(vlSelfRef.__PVT__n677));
    vlSelfRef.__PVT__n684 = ((IData)(vlSelfRef.__PVT__n557)
                              ? (IData)(vlSelfRef.__PVT__n562)
                              : (IData)(vlSelfRef.__PVT__n676));
}

void Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__20(Vnes_core_top_T65_real* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_T65_real___nba_comb__TOP__nes_core_top__nes_inst__cpu__cpu_impl__20\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n316 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n140)
                              : (IData)(vlSelfRef.__PVT__n301));
    vlSelfRef.__PVT__n311 = ((IData)(vlSelfRef.__PVT__n138)
                              ? (IData)(vlSelfRef.__PVT__n139)
                              : (IData)(vlSelfRef.__PVT__n295));
    vlSelfRef.__PVT__n332 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__ir)
                              : (IData)(vlSelfRef.__PVT__n316));
    vlSelfRef.__PVT__n326 = ((IData)(vlSelfRef.__PVT__n137)
                              ? (IData)(vlSelfRef.__PVT__pc)
                              : (IData)(vlSelfRef.__PVT__n311));
}
