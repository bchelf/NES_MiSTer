// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top___024root___nba_sequent__TOP__1(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___nba_sequent__TOP__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n947));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n945));
}

void Vnes_core_top___024root___nba_sequent__TOP__2(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___nba_sequent__TOP__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset)) 
                 & (~ (IData)(vlSelfRef.reset))));
}

void Vnes_core_top___024root___nba_comb__TOP__0(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___nba_comb__TOP__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n947 
        = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n945 
        = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946));
    if (vlSelfRef.reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
            = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
            = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
            = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
            = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923));
    } else if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
            = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))
                ? ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
                   & (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i)) 
                       & (((0x93U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                           & (3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))) 
                          | ((0x93U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                             & (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))))) 
                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949)))
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
                = (0x000000ffU & 0xffU);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
                = (0x000000ffU & 0xffU);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
                = (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                   : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                       : ((0x0010U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                           : ((8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                               : ((4U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108)
                                                       ? 
                                                      ((0x0080U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                        : 
                                                       ((0x0040U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                         : 
                                                        ((0x0020U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                          : 
                                                         ((0x0010U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                           ? 
                                                          ((2U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                             ? 
                                                            ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452)
                                                              ? 
                                                             ((0x0dU 
                                                               == 
                                                               (0x0000000fU 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 4U)))
                                                               ? 
                                                              ((5U 
                                                                == 
                                                                (0x0000000fU 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 4U)))
                                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                : 
                                                               ((4U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                     >> 4U)))
                                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                 : 
                                                                ((0U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                  : 
                                                                 ((0U 
                                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                                                                   ? 2U
                                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))))
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (0x0000000fU 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 4U)))
                                                                ? 
                                                               ((4U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                     >> 4U)))
                                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                 : 
                                                                ((0U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                  : 
                                                                 ((0U 
                                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                                                                   ? 3U
                                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165))))
                                                                : 
                                                               ((4U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                     >> 4U)))
                                                                 ? 
                                                                ((0U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                  : 1U)
                                                                 : 
                                                                ((0U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? 5U
                                                                  : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))))
                                                              : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165))
                                                             : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2257)
                                                              : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2220))))))))
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))
                                                     : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 
                = (0x0000ffffU & (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)) 
                                   & ((0x0020U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                      & ((0x0010U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                         & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                            & ((4U 
                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                               & ((2U 
                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                  & ((1U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                           & ((0x0080U 
                                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                              & ((0x0040U 
                                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                 & ((0x0020U 
                                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                    & ((0x0010U 
                                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                        ? 
                                                                       (2U 
                                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                                        : 
                                                                       ((8U 
                                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                        & ((4U 
                                                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                           & ((2U 
                                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2265)
                                                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2228)))))))))))))))))
                                   ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924) 
                                      - (IData)(1U))
                                   : (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)) 
                                       & ((0x0020U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((0x0010U 
                                              != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                             & ((8U 
                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                & ((4U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((2U 
                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                      & ((1U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                         & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                               & ((0x0080U 
                                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                  & ((0x0040U 
                                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                     & ((0x0020U 
                                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2479)
                                                                         : 
                                                                        ((0x0010U 
                                                                          != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                         & ((8U 
                                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2333)
                                                                             : 
                                                                            ((4U 
                                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2301))))))))))))))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924))
                                       : ((0x0000ff00U 
                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)) 
                                          | (0x000000ffU 
                                             & ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                   : 
                                                  ((0x0020U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                    : 
                                                   ((0x0010U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                         ? 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                          ? 
                                                         ((0x8000U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                           : 
                                                          ((0x4000U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                            : 
                                                           ((0x2000U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                            | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177))))
                                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177))
                                                         : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)))))))) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))
                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                                 : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
                = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                    ? ((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) ? ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                                  ? 0x0eU
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                       >> 5U)))
                                                   ? 0x0eU
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 5U)))
                                                     ? 0x0eU
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                          >> 5U)))
                                                      ? 0x0eU
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                           >> 5U)))
                                                       ? 0x0eU
                                                       : 0x0dU))))))
                        : ((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                         >> 5U))) ? 
                           ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                          >> 5U))) ? 0x0eU
                             : ((3U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                              >> 5U)))
                                 ? 0x0eU : ((2U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                               >> 5U)))
                                             ? 0x0eU
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U)))
                                                 ? 0x0eU
                                                 : 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                                  ? 0x0eU
                                                  : 5U)))))
                            : ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                             >> 5U)))
                                ? ((3U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 5U)))
                                    ? 0x0eU : ((2U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 0x0eU
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 5U)))
                                                     ? 0x0eU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                          >> 2U)))
                                                      ? 5U
                                                      : 4U)))))
                                : ((3U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 5U)))
                                    ? ((2U == (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                        ? 0x0eU : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 5U)))
                                                     ? 0x0eU
                                                     : 0x0bU)))
                                    : ((2U == (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                        ? ((1U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                            ? 0x0eU
                                            : ((0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 0x0eU
                                                : 0x0aU))
                                        : ((1U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 0x0eU
                                                : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4056)
                                                    ? 0x0dU
                                                    : 9U))
                                            : ((0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4056)
                                                    ? 0x0eU
                                                    : 8U)
                                                : 0x0eU)))))))
                    : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4046)
                        : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                            ? ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017))
                                ? ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 5U)))
                                    ? 5U : 4U) : ((2U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017))
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3996))
                                                    ? 0x0dU
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3996))
                                                     ? 0x0eU
                                                     : 5U))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017))
                                                    ? 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974))
                                                     ? 0x0cU
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974))
                                                       ? 6U
                                                       : 4U)))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 5U)))
                                                     ? 5U
                                                     : 4U))))
                            : ((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                             >> 5U)))
                                ? ((0xbbU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                    ? 1U : 5U) : ((0x6bU 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                   ? 0x0fU
                                                   : 
                                                  ((0x8bU 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                    ? 0x12U
                                                    : 
                                                   (((0x0bU 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                                                     | (0x2bU 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                                     ? 0x10U
                                                     : 
                                                    ((0xebU 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                      ? 7U
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                                        ? 
                                                       ((0x2000U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                         ? 
                                                        ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3771))
                                                         : 
                                                        ((0x1000U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3686)
                                                          : 
                                                         ((0x0800U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                           ? 
                                                          ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3501))
                                                           : 
                                                          ((0x0400U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3417)
                                                            : 
                                                           ((0x0200U 
                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                            & ((0x0100U 
                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3218))
                                                                : 
                                                               ((0x0080U 
                                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2956)))))))))
                                                        : 
                                                       ((0x0020U 
                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((0x0010U 
                                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                           & ((8U 
                                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                              & ((4U 
                                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                                 & ((2U 
                                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2749)))))))
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4146)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4178))))))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
                = (1U & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                              ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                  ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3769)
                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3856))
                                  : ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3683)
                                      : ((0x0800U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                          ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3499)
                                              : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3546))
                                          : ((0x0400U 
                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3414)
                                              : ((0x0200U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((0x0100U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3216)
                                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3253))
                                                     : 
                                                    ((0x0080U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)) 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3130))
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2954)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2885)))))))))
                              : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2885)
                                  : ((0x0010U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                     & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                        & ((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2746)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                        & ((0x0080U 
                                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                           & ((0x0040U 
                                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                              & ((0x0020U 
                                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                 & ((0x0010U 
                                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                     ? 
                                                                    ((2U 
                                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)) 
                                                                     & ((1U 
                                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)) 
                                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452) 
                                                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2380))))
                                                                     : 
                                                                    ((8U 
                                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                     & ((4U 
                                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                        & ((2U 
                                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2272)
                                                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2236)))))))))))))))))) 
                         | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
                = (3U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk)
                          ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                   ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                       ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3743)
                                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3836))
                                       : ((0x1000U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3654)
                                           : ((0x0800U 
                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                               ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3478)
                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3533))
                                               : ((0x0400U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3382)
                                                   : 
                                                  ((0x0200U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? 0U
                                                    : 
                                                   ((0x0100U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3194)
                                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3241))
                                                     : 
                                                    ((0x0080U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                       ? 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3063)
                                                        : 0U)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3116))
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2936)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875)))))))))
                                   : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875)
                                       : ((0x0010U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                           ? 0U : (
                                                   (8U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2717)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108)
                                                         ? 
                                                        ((0x0080U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                          ? 0U
                                                          : 
                                                         ((0x0040U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                           ? 0U
                                                           : 
                                                          ((0x0020U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2476)
                                                            : 
                                                           ((0x0010U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                             ? 
                                                            ((2U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                               ? 
                                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452)
                                                                ? 1U
                                                                : 0U)
                                                               : 0U))
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2325)
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2293)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2254)
                                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2216))))))))
                                                         : 0U))
                                                       : 0U)))))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
                = (0x0000ffffU & ((0x0000ff00U & ((
                                                   (4U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                                    ? 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder))
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl))
                                                      ? 
                                                     (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                                                       >> 8U) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                                                       >> 8U)))
                                                     : 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225) 
                                                     >> 8U))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                                      ? 
                                                     (0x000000ffU 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923)) 
                                                         >> 8U))
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225) 
                                                      >> 8U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder)
                                       : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl)
                                           : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923))
                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225)))))));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
                = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 
                = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
                = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
                = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
                = (3U & 0U);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n188)
                                   ? 0U : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
                = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928));
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285)) 
                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931)));
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                      >> 0x00000020U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                      >> 0x00000028U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
            = (0x0000000fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                      >> 0x00000037U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 
            = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
            = (0x0000000fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                      >> 0x00000033U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                             >> 0x0000003dU)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
            = (3U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                             >> 0x00000030U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                             >> 0x00000032U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
            = (3U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                             >> 0x0000003bU)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                      >> 0x00000010U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
            = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 
                = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                   & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620) 
                         & (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 
                = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n843)
                          ? 0U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929) 
                                  + (7U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 
                = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                    ? ((0x2000U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                       & ((0x1000U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((0x0800U 
                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                              ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3493)
                                                  : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3544))
                                              : ((0x0400U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3402)
                                                  : 
                                                 ((0x0200U 
                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                  & ((0x0100U 
                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                     & ((0x0080U 
                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2948)
                                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2881)))))))))
                                    : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2881)
                                        : ((0x0010U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((4U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2734)))))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                   : (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                        ? ((0x2000U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x1000U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((0x0800U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3484)
                                                     : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3539)))))
                                        : ((0x0020U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x0010U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((8U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((4U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2726)))))))
                                       ? (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107) 
                                           & ((0x2000U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((0x1000U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((0x0800U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3541))))))
                                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915))
                                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)))
                                       : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad)
                                           : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad)
                                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad) 
                                                  + 
                                                  (1U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 
                = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                    ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3763)
                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3854))
                                        : ((0x1000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3677)
                                            : ((0x0800U 
                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                               & ((0x0400U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3408)
                                                   : 
                                                  ((0x0200U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((0x0100U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3210)
                                                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3251))
                                                       : 
                                                      ((0x0080U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                           ? 
                                                          (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                            >> 5U) 
                                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3079))
                                                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3126)))))))))
                                    : ((0x0020U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                       & ((0x0010U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                             & ((4U 
                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                & ((2U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2740)))))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                   : ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                       ? 0xffU : ((4U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                                   ? 
                                                  ((0x00000100U 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920))
                                                    ? 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598))
                                                      ? 
                                                     (((IData)(1U) 
                                                       + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919)) 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout))
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919) 
                                                      + 
                                                      (1U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598)))))
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919))
                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919)))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 
                = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                    ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3757))
                                        : ((0x1000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3671)
                                            : ((0x0800U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3490))
                                                : (
                                                   (0x0400U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3399)
                                                    : 
                                                   ((0x0200U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((0x0100U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3204))
                                                        : 
                                                       ((0x0080U 
                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2945)))))))))
                                    : ((0x0020U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                       & ((0x0010U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                             & ((4U 
                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                & ((2U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2731)))))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                   : (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                        ? ((0x2000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3754))
                                            : ((0x1000U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3668)
                                                : (
                                                   (0x0800U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3487))
                                                    : 
                                                   ((0x0400U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3396)
                                                     : 
                                                    ((0x0200U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((4U 
                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289)) 
                                                      & ((2U 
                                                          != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289)) 
                                                         & (1U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289))))
                                                      : 
                                                     ((0x0100U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3201))
                                                       : 
                                                      ((0x0080U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017) 
                                                        & ((0x00000020U 
                                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3073)
                                                            : 
                                                           ((2U 
                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)) 
                                                            & (1U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)))))
                                                        : 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2942)))))))))
                                        : ((0x0020U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x0010U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((8U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((4U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2728)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                              & ((0x0080U 
                                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                 & ((0x0040U 
                                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                    & ((0x0020U 
                                                                        != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                       & ((0x0010U 
                                                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                          & ((8U 
                                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2336)
                                                                              : 
                                                                             ((4U 
                                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2307)
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2268)
                                                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2231)))))))))))))))))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
                = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645)) 
                                  | (0x000000ffU & 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                        ? ((0x2000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3760)
                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3851))
                                            : ((0x1000U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3674)
                                                : (
                                                   (0x0800U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((0x0400U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3405)
                                                       : 
                                                      ((0x0200U 
                                                        != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & ((0x0100U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                           ? 
                                                          ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3207)
                                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3248))
                                                           : 
                                                          ((0x0080U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                               ? 
                                                              (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                >> 5U) 
                                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3076))
                                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3123)))))))))
                                        : ((0x0020U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x0010U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((8U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((4U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2737)))))))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645)))));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 
                = (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
                = (0x000001ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920));
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n902 
            = (1U & ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))
                      ? ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951)) 
                         & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi) 
                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483) 
                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940))) 
                            | ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846) 
                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1))) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941))))
                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n899 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894)) 
                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 
                = (1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846) 
                            | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                >> 2U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939)))));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936));
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687 
            = (0x000000ffU & ((((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934)) 
                                | (2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278))
                               ? ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI))
                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944)));
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 
            = (7U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x00000025U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n902 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x0000002bU)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n899 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x00000028U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 8U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x0000002aU)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000010U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x00000029U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000018U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000029U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000031U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
            = (0x000001ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000020U)));
    }
}

void Vnes_core_top___024root___nba_sequent__TOP__0(Vnes_core_top___024root* vlSelf);

void Vnes_core_top___024root___eval_nba(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_nba\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vnes_core_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n) 
               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n947));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n) 
               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n945));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset)) 
                     & (~ (IData)(vlSelfRef.reset))));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vnes_core_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vnes_core_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vnes_core_top___024root___eval_triggers_vec__act(Vnes_core_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vnes_core_top___024root___eval_phase__act(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_phase__act\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnes_core_top___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnes_core_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vnes_core_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vnes_core_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vnes_core_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vnes_core_top___024root___eval_phase__nba(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_phase__nba\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vnes_core_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vnes_core_top___024root___eval_nba(vlSelf);
        Vnes_core_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vnes_core_top___024root___eval_phase__ico(Vnes_core_top___024root* vlSelf);

void Vnes_core_top___024root___eval(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vnes_core_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("verilator/nes_core_top.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vnes_core_top___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnes_core_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verilator/nes_core_top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnes_core_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("verilator/nes_core_top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vnes_core_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vnes_core_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vnes_core_top___024root___eval_debug_assertions(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_debug_assertions\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.hud_mode & 0xfcU)))) {
        Verilated::overWidthError("hud_mode");
    }
    if (VL_UNLIKELY(((vlSelfRef.hud_position & 0xfcU)))) {
        Verilated::overWidthError("hud_position");
    }
    if (VL_UNLIKELY(((vlSelfRef.hud_scale & 0xfeU)))) {
        Verilated::overWidthError("hud_scale");
    }
    if (VL_UNLIKELY(((vlSelfRef.prg_mask_in & 0xffe00000U)))) {
        Verilated::overWidthError("prg_mask_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.chr_mask_in & 0xfff00000U)))) {
        Verilated::overWidthError("chr_mask_in");
    }
}
#endif  // VL_DEBUG
