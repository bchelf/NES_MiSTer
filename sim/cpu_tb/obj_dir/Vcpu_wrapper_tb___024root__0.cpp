// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_wrapper_tb.h for the primary calling header

#include "Vcpu_wrapper_tb__pch.h"

void Vcpu_wrapper_tb___024root___eval_triggers_vec__ico(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_triggers_vec__ico\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vcpu_wrapper_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_wrapper_tb__ConstPool__TABLE_h32401d32_0;

void Vcpu_wrapper_tb___024root___ico_sequent__TOP__0(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___ico_sequent__TOP__0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    // Body
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i 
        = (1U & (~ ((IData)(vlSelfRef.pwr_n) & (IData)(vlSelfRef.res_n))));
    __Vtableidx1 = ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards) 
                      << 0x0000000aU) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO) 
                                          << 9U) | 
                                         ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge) 
                                          << 8U))) 
                    | ((0x00000080U & ((~ (IData)(vlSelfRef.irq_n)) 
                                       << 7U)) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc 
        = Vcpu_wrapper_tb__ConstPool__TABLE_h32401d32_0
        [__Vtableidx1];
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (1U 
                                                & (((~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I)) 
                                                    & (~ (IData)(vlSelfRef.irq_n))) 
                                                   | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX 
        = ((IData)(vlSelfRef.rdy) ? (IData)(vlSelfRef.di_data)
            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
            ? 0U : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid)
                     ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD)
                     : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
    if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        __VdfgRegularize_hebeb780c_0_18 = 0U;
        __VdfgRegularize_hebeb780c_0_16 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
    } else {
        __VdfgRegularize_hebeb780c_0_18 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        __VdfgRegularize_hebeb780c_0_16 = 0U;
    }
    __VdfgRegularize_hebeb780c_0_17 = ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                        ? 0U : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((1U 
                                                 & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                 ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                 : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = ((2U 
                                                 & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                 ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                                 : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1));
    if ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            } else if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            } else if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_6;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        } else if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
                    } else {
                        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
                        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    }
                } else {
                    vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_8;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
            } else {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_14;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_17));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)
                        : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                            : (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))));
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_2;
        } else {
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4));
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & 0U);
            } else if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                } else {
                    vlSelfRef.do_data = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php)
                                          ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P)
                                          : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile));
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & 0U);
            } else {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_15;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                        ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))
                        : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
            } else {
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.do_data = vlSelfRef.__VdfgRegularize_hebeb780c_0_11;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_9;
                } else {
                    vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_14;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_17));
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_2;
        } else {
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)
                            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_15;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD)
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
        }
    } else if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_6;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            } else {
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only)
                            ? 0U : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            }
        } else if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            } else {
                vlSelfRef.do_data = ((1U & ((~ (IData)(vlSelfRef.irq_n)) 
                                            | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)))
                                      ? (0x00000020U 
                                         | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N) 
                                             << 7U) 
                                            | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V) 
                                                << 6U) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))))
                                      : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res)
                        ? 0xfffcU : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)
                                      ? 0xfffaU : 0xfffeU));
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_8;
        } else {
            vlSelfRef.do_data = vlSelfRef.__VdfgRegularize_hebeb780c_0_11;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & 0U);
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_9;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        }
    } else {
        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_10;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                            << 8U) | (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)));
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_5;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_5;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = __VdfgRegularize_hebeb780c_0_16;
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                        = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                        = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_10;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            }
        } else {
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        }
    }
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic 
        = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right)
            ? ((0x00000100U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                               << 8U)) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI) 
                                           << 7U) | 
                                          (0x0000007fU 
                                           & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                                              >> 1U))))
            : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI)
                    : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                       ^ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI)))
                : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                    ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                       & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI))
                    : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                       | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI)))));
    vlSelfRef.addr = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI 
        = (0x000000ffU & ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                           ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                               ? 0U : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic))
                           : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                               ? (~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI))
                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l 
        = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic)) 
                          + ((0x0000000fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI)) 
                             + ((~ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right) 
                                    | (3U == (3U & 
                                              ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op) 
                                               >> 2U))))) 
                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI)))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC 
        = (1U & (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l) 
                  >> 4U) | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                            & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l) 
                                            >> 1U))))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h 
        = (0x0000001fU & (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic) 
                           >> 4U) + ((0x0000000fU & 
                                      ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI) 
                                       >> 4U)) + (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp 
        = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h) 
            << 4U) | (0x0000000fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l)));
}

void Vcpu_wrapper_tb___024root___eval_ico(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_ico\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vcpu_wrapper_tb___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_wrapper_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_wrapper_tb___024root___eval_phase__ico(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_phase__ico\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcpu_wrapper_tb___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_wrapper_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcpu_wrapper_tb___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vcpu_wrapper_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcpu_wrapper_tb___024root___eval_triggers_vec__act(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_triggers_vec__act\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_wrapper_tb__DOT__dut__DOT__reset_i__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.enable) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enable__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__enable__0 = vlSelfRef.enable;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_wrapper_tb__DOT__dut__DOT__reset_i__0 
        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i;
}

bool Vcpu_wrapper_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcpu_wrapper_tb___024root___nba_sequent__TOP__0(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___nba_sequent__TOP__0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__cpu_wrapper_tb__DOT__mem__v0;
    __VdlyVal__cpu_wrapper_tb__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__cpu_wrapper_tb__DOT__mem__v0;
    __VdlyDim0__cpu_wrapper_tb__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_wrapper_tb__DOT__mem__v0;
    __VdlySet__cpu_wrapper_tb__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0;
    __VdlyVal__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 = 0;
    CData/*1:0*/ __VdlyDim0__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0;
    __VdlyDim0__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0;
    __VdlySet__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 = 0;
    // Body
    __VdlySet__cpu_wrapper_tb__DOT__mem__v0 = 0U;
    __VdlySet__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rw_n)))) {
        __VdlyVal__cpu_wrapper_tb__DOT__mem__v0 = vlSelfRef.do_data;
        __VdlyDim0__cpu_wrapper_tb__DOT__mem__v0 = vlSelfRef.addr;
        __VdlySet__cpu_wrapper_tb__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge) 
         & (0x0bU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge = 0U;
    } else if ((1U & ((~ (IData)(vlSelfRef.nmi_n)) 
                      & (~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_1))))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge = 1U;
    }
    if (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_register) 
         & (IData)(vlSelfRef.rdy))) {
        __VdlyVal__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 
            = ((0x1aU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX)
                : ((0x000000f0U & ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                                     >> 4U) + ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd)
                                                ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd)
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO)
                                                     ? 6U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO)
                                                     ? 0U
                                                     : 0x0aU))
                                                : 0U)) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                                                 + 
                                                 ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd)
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd)
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC)
                                                     ? 6U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC)
                                                     ? 0U
                                                     : 0x0aU))
                                                   : 0U)))));
        __VdlyDim0__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 
            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel;
        __VdlySet__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0 = 1U;
    }
    vlSelfRef.cpu_wrapper_tb__DOT__di_reg = ((IData)(vlSelfRef.rw_n)
                                              ? vlSelfRef.cpu_wrapper_tb__DOT__mem
                                             [vlSelfRef.addr]
                                              : (IData)(vlSelfRef.do_data));
    if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res = 1U;
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid = 0U;
    } else {
        if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res = 0U;
        }
        if (vlSelfRef.rdy) {
            if (((0x1eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                 | (0x21U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid = 1U;
            } else if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid = 0U;
            }
        }
    }
    if (((((((0x21U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
             & (0x22U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
            & (IData)(vlSelfRef.rdy)) & (0x1eU != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
          & (0x1fU != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
         & (0x20U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL 
            = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH 
            = (0x000000ffU & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i) 
                              >> 8U));
    }
    if ((1U & (~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i)))) {
        if (vlSelfRef.rdy) {
            if (((0x1eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                 | (0x21U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
            }
        }
    }
    if ((0x0bU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I = 1U;
    } else if ((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 2U));
    } else if ((0x24U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sei) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I = 1U;
        }
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cli) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I = 0U;
        }
    } else if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I 
                = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                         >> 2U));
        }
    }
    if ((0x2eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z 
            = (1U & (~ (0U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N 
            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN;
    } else if ((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 1U));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 7U));
    } else if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z 
                = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                         >> 1U));
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N 
                = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                         >> 7U));
        } else {
            if (((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg) 
                   & (1U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel))) 
                  | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare)) 
                 | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z 
                    = (1U & (~ (0U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))));
            }
            if ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg) 
                  & (1U != (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel))) 
                 | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN;
            }
        }
    } else if (((0x0dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 7U));
    }
    if ((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 6U));
    } else if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V 
                = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7) 
                   ^ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7) 
                      ^ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN) 
                         ^ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO))));
        }
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clv) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V = 0U;
        }
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V 
                = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                         >> 6U));
        }
    } else if (((0x0dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 6U));
    }
    if (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift) 
         & (0x2eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C 
            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO;
    } else if ((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C 
            = (1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
    } else if (((~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back)) 
                & (0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
        if ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc) 
              | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift)) 
             | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare))) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO;
        } else if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C 
                = (1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
        } else {
            if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sec) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C = 1U;
            }
            if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clc) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C = 0U;
            }
        }
    }
    if (__VdlySet__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[__VdlyDim0__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0] 
            = __VdlyVal__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS__v0;
    }
    if (__VdlySet__cpu_wrapper_tb__DOT__mem__v0) {
        vlSelfRef.cpu_wrapper_tb__DOT__mem[__VdlyDim0__cpu_wrapper_tb__DOT__mem__v0] 
            = __VdlyVal__cpu_wrapper_tb__DOT__mem__v0;
    }
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_1 
        = (1U & (~ (IData)(vlSelfRef.nmi_n)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd 
        = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc) 
           & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D));
    if ((((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
          | (8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
         & (IData)(vlSelfRef.rdy))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd 
            = ((0x61U == (0xe3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
               && (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D));
    }
    if ((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 3U));
    } else if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sed) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D = 1U;
        }
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cld) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D = 0U;
        }
        if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D 
                = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                         >> 3U));
        }
    }
    if (((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
         & (IData)(vlSelfRef.rdy))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__brk 
            = (0U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php 
            = (8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift_right 
            = (0x42U == (0xc3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__inc 
            = ((0xe6U == (0xe7U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
               || (0xc8U == (0xdfU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__rotate 
            = ((0x2aU == (0xafU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
               || (0x26U == (0xa7U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__op 
            = ((0x00000080U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                ? ((0x00000040U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                    ? ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                        ? ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                            ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                ? 3U : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                         ? 7U : 3U))
                            : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                    ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                        ? 3U : 7U) : 
                                   ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                     ? 3U : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                              ? 7U : 3U)))
                                : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                    ? 3U : 7U))) : 
                       ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                         ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                             ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                     ? 3U : 7U) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                    ? 7U
                                                    : 3U))
                             : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? 3U : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                          ? 7U : 3U)))
                         : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                             ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                     ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                         ? 3U : 7U)
                                     : 7U) : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                   ? 3U
                                                   : 7U)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                   ? 7U
                                                   : 3U)))
                             : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                     ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                         ? 3U : 7U)
                                     : 7U) : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                               ? 3U
                                               : 7U)))))
                    : ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                        ? 3U : ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? 3U : ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                          ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                              ? 3U : 
                                             ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                               ? 3U
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                   ? 3U
                                                   : 7U)))
                                          : 3U)))) : 
               ((0x00000040U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                 ? ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                     ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                         ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                             ? 3U : 0x0fU) : 3U) : 
                    ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                      ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                          ? 3U : 0x0fU) : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                            ? (0x0000000cU 
                                               | (3U 
                                                  & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR) 
                                                     >> 5U)))
                                            : 3U)))
                 : ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                     ? ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                         ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                             ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? 3U : 0x0bU) : ((1U 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                   ? 
                                                  (0x0000000cU 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR) 
                                                         >> 5U)))
                                                   : 3U))
                         : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                             ? ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                 ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                     ? 3U : 0x0bU) : 
                                ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                  ? (0x0000000cU | 
                                     (3U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR) 
                                            >> 5U)))
                                  : 0x0dU)) : ((2U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                    ? 3U
                                                    : 0x0bU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                    ? 
                                                   (0x0000000cU 
                                                    | (3U 
                                                       & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR) 
                                                          >> 5U)))
                                                    : 3U))))
                     : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                         ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                             ? 3U : 0x0bU) : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                               ? (0x0000000cU 
                                                  | (3U 
                                                     & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR) 
                                                        >> 5U)))
                                               : 3U)))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only 
            = (0xa0U == (0xe0U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__dst_reg 
            = ((((0xe8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)) 
                 || (0xcaU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                || (0xa2U == (0xe3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))))
                ? 2U : (((8U == (0xbfU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                         || (0x9aU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                         ? 1U : ((((0x88U == (0xbfU 
                                              & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                                   || (0xa4U == (0xe7U 
                                                 & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                                  || (0xa0U == (0xf7U 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))))
                                  ? 3U : 0U)));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__src_reg 
            = ((0xbaU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                ? 1U : (((((0x86U == (0xe7U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                           || (0x8aU == (0xebU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                          || (0xe0U == (0xf3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                         || (0xcaU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                         ? 2U : (((((0x84U == (0xe7U 
                                               & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                                    || (0x98U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                                   || (0xc0U == (0xf3U 
                                                 & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                                  || (0x88U == (0xbfU 
                                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))))
                                  ? 3U : 0U)));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__index_y 
            = (((0x11U == (0x1fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                || (0x96U == (0xd7U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
               || (9U == (0x0fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sei 
            = (0x78U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cli 
            = (0x58U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clv 
            = (0xb8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins 
            = (0x24U == (0xf7U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg 
            = (((((((((0x0aU == (0x9fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                      || (1U == (0x83U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                     || (0x88U == (0xedU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                    || (0xa0U == (0xf1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                   || (0xbaU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                  || (0xb4U == (0xf5U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                 || (0xcaU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                || (0xa1U == (0xa3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
               || (8U == (0x1fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sec 
            = (0x38U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clc 
            = (0x18U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift 
            = ((6U == (0x87U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
               || (0x0aU == (0x8fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare 
            = (((0xc0U == (0xdbU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                || (0xccU == (0xdfU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
               || (0xc1U == (0xe3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sed 
            = (0xf8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cld 
            = (0xd8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp 
            = (0x28U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR));
    }
    if (vlSelfRef.rdy) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_code 
            = (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR) 
                     >> 5U));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC 
            = (0x0000ffffU & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp) 
                              + (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc)));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD 
            = vlSelfRef.di_data;
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC 
            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC;
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI) 
                     >> 7U));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                     >> 7U));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp) 
                     >> 7U));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD 
            = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp));
    }
    if ((((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
          | (8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
         & (IData)(vlSelfRef.rdy))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc 
            = (0x61U == (0x63U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)));
    }
    vlSelfRef.mem2 = vlSelfRef.cpu_wrapper_tb__DOT__mem[2U];
    vlSelfRef.mem3 = vlSelfRef.cpu_wrapper_tb__DOT__mem[3U];
    vlSelfRef.mem4 = vlSelfRef.cpu_wrapper_tb__DOT__mem[4U];
    vlSelfRef.di_data = vlSelfRef.cpu_wrapper_tb__DOT__di_reg;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (1U 
                                                & (((~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I)) 
                                                    & (~ (IData)(vlSelfRef.irq_n))) 
                                                   | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P 
        = (0x00000030U | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N) 
                           << 7U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V) 
                                      << 6U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
}

void Vcpu_wrapper_tb___024root___nba_sequent__TOP__1(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___nba_sequent__TOP__1\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state;
    if (vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i) {
        vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state = 8U;
    } else if (vlSelfRef.rdy) {
        if (((((((((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                   | (0x2fU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                  | (0x30U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                 | (0x31U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                | (0U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
               | (1U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
              | (2U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
             | (3U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
            if ((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                if (((((((((0U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)) 
                           | (0x20U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                          | (0x2cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                         | (0x40U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                        | (0x4cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                       | (0x60U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                      | (0x6cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                     | (8U == (0xbfU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))))) {
                    vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                        = ((0U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                            ? 8U : ((0x20U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                     ? 0x1aU : ((0x2cU 
                                                 == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                 ? 0U
                                                 : 
                                                ((0x40U 
                                                  == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                  ? 0x25U
                                                  : 
                                                 ((0x4cU 
                                                   == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                   ? 0x16U
                                                   : 
                                                  ((0x60U 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x6cU 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))
                                                     ? 0x18U
                                                     : 0x21U)))))));
                } else if (((((((((0x28U == (0xbfU 
                                             & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                                  | (0x18U == (0x9fU 
                                               & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                                 | (0x80U == (0x9dU 
                                              & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                                | (0x8cU == (0x9fU 
                                             & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                               | (0x88U == (0x8fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                              | (1U == (0x1fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                             | (4U == (0x1cU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                            | (9U == (0x1fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))))) {
                    vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                        = ((0x28U == (0xbfU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                            ? 0x1eU : ((0x18U == (0x9fU 
                                                  & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                        ? 0x24U : (
                                                   (0x80U 
                                                    == 
                                                    (0x9dU 
                                                     & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                    ? 0x0dU
                                                    : 
                                                   ((0x8cU 
                                                     == 
                                                     (0x9fU 
                                                      & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                     ? 0U
                                                     : 
                                                    ((0x88U 
                                                      == 
                                                      (0x8fU 
                                                       & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                      ? 0x24U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                       ? 0x0eU
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1cU 
                                                         & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                        ? 0x2fU
                                                        : 0x0dU)))))));
                } else if (((((((((0x0dU == (0x1fU 
                                             & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
                                  | (0x0eU == (0x1fU 
                                               & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                                 | (0x10U == (0x1fU 
                                              & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                                | (0x11U == (0x1fU 
                                             & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                               | (0x14U == (0x1cU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                              | (0x19U == (0x1fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                             | (0x1cU == (0x1cU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))) 
                            | (0x0aU == (0x0fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))))) {
                    vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                        = ((0x0dU == (0x1fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                            ? 0U : ((0x0eU == (0x1fU 
                                               & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                     ? 0U : ((0x10U 
                                              == (0x1fU 
                                                  & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                              ? 5U : 
                                             ((0x11U 
                                               == (0x1fU 
                                                   & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                               ? 0x12U
                                               : ((0x14U 
                                                   == 
                                                   (0x1cU 
                                                    & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                   ? 0x30U
                                                   : 
                                                  ((0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                    ? 2U
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1cU 
                                                      & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR)))
                                                     ? 2U
                                                     : 0x24U)))))));
                }
            } else {
                vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                    = ((0x2fU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                        ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back)
                            ? 0x23U : 0x0dU) : ((0x30U 
                                                 == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                 ? 0x31U
                                                 : 
                                                ((0x31U 
                                                  == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back)
                                                   ? 0x23U
                                                   : 0x0dU)
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back)
                                                     ? 0x23U
                                                     : 0x0dU)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? 3U
                                                     : 
                                                    ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO) 
                                                       | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store)) 
                                                      | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back))
                                                      ? 4U
                                                      : 0x0dU)))))));
            }
        } else if (((((((((4U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                          | (0x0eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                         | (0x0fU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                        | (0x10U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                       | (0x11U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                      | (0x12U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                     | (0x13U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                    | (0x14U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                = ((4U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                    ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back)
                        ? 0x23U : 0x0dU) : ((0x0eU 
                                             == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                             ? 0x0fU
                                             : ((0x0fU 
                                                 == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                 ? 0x10U
                                                 : 
                                                ((0x10U 
                                                  == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                  ? 0x11U
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                   ? 0x0dU
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 0x13U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? 0x14U
                                                     : 
                                                    (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO) 
                                                      | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store))
                                                      ? 0x15U
                                                      : 0x0dU))))))));
        } else if (((((((((0x15U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                          | (0x23U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                         | (0x2eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                        | (0x0dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                       | (0x24U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                      | (0x21U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                     | (0x22U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                    | (0x1eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                = ((0x15U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                    ? 0x0dU : ((0x23U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                ? 0x2eU : ((0x2eU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? 0x0dU
                                            : ((0x0dU 
                                                == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? 0x0cU
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 0x0cU
                                                    : 
                                                   ((0x21U 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? 0x22U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                      ? 0x0cU
                                                      : 0x1fU)))))));
        } else if (((((((((0x1fU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                          | (0x20U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                         | (0x1aU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                        | (0x1bU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                       | (0x1cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                      | (0x1dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                     | (0x25U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                    | (0x26U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                = ((0x1fU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                    ? 0x20U : ((0x20U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                ? 0x0cU : ((0x1aU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? 0x1bU
                                            : ((0x1bU 
                                                == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? 0x1cU
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 0x1dU
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? 0x0dU
                                                     : 
                                                    ((0x25U 
                                                      == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                      ? 0x26U
                                                      : 0x27U)))))));
        } else if (((((((((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                          | (0x28U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                         | (0x29U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                        | (0x2aU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                       | (0x2bU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                      | (0x2cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                     | (0x2dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                    | (5U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                = ((0x27U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                    ? 0x28U : ((0x28U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                ? 0x29U : ((0x29U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? 0x0cU
                                            : ((0x2aU 
                                                == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? 0x2bU
                                                : (
                                                   (0x2bU 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 0x2cU
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? 0x2dU
                                                     : 
                                                    ((0x2dU 
                                                      == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                      ? 0x0dU
                                                      : 
                                                     ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_true)
                                                       ? 6U
                                                       : 0x0cU))))))));
        } else if (((((((((6U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
                          | (7U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                         | (0x16U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                        | (0x17U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                       | (0x18U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                      | (0x19U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                     | (8U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) 
                    | (9U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
                = ((6U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                    ? (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO) 
                        ^ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards))
                        ? 7U : 0x0cU) : ((7U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                          ? 0x0cU : 
                                         ((0x16U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                           ? 0x17U : 
                                          ((0x17U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                            ? 0x0cU
                                            : ((0x18U 
                                                == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                ? 0x19U
                                                : (
                                                   (0x19U 
                                                    == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                    ? 0x16U
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? 9U
                                                     : 0x0aU)))))));
        } else if ((0x0aU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state = 0x0bU;
        } else if ((0x0bU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state = 0x16U;
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu_wrapper_tb__ConstPool__TABLE_hdc38b0ff_0;

void Vcpu_wrapper_tb___024root___nba_sequent__TOP__2(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___nba_sequent__TOP__2\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N) 
                      << 6U) | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V) 
                                << 5U)) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_code))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_true 
        = Vcpu_wrapper_tb__ConstPool__TABLE_hdc38b0ff_0
        [__Vtableidx7];
    if (vlSelfRef.rdy) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards 
            = (1U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                     >> 7U));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO 
            = (1U & (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp) 
                      >> 8U) | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                                & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h) 
                                                >> 1U))))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX 
            = vlSelfRef.di_data;
    } else {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX 
            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD;
    }
    if (((0x0cU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
         & (IData)(vlSelfRef.rdy))) {
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store 
            = ((0x84U == (0xe5U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
               || (0x81U == (0xe3U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back 
            = ((6U == (0x87U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))) 
               || (0xc6U == (0xc7U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR))));
    }
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
            ? 0U : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid)
                     ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD)
                     : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
}

void Vcpu_wrapper_tb___024root___nba_sequent__TOP__3(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___nba_sequent__TOP__3\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state 
        = vlSelfRef.__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state;
}

extern const VlUnpacked<CData/*0:0*/, 256> Vcpu_wrapper_tb__ConstPool__TABLE_h67de06b7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu_wrapper_tb__ConstPool__TABLE_h30aa0085_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vcpu_wrapper_tb__ConstPool__TABLE_hc7a084b0_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vcpu_wrapper_tb__ConstPool__TABLE_hf67012e5_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu_wrapper_tb__ConstPool__TABLE_hd7a914d5_0;

void Vcpu_wrapper_tb___024root___nba_comb__TOP__0(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___nba_comb__TOP__0\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*10:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*12:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp) 
                     << 7U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg) 
                                << 6U) | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_register 
        = Vcpu_wrapper_tb__ConstPool__TABLE_h67de06b7_0
        [__Vtableidx3];
    __Vtableidx2 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store) 
                     << 6U) | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__we_i = Vcpu_wrapper_tb__ConstPool__TABLE_h30aa0085_0
        [__Vtableidx2];
    __Vtableidx1 = ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards) 
                      << 0x0000000aU) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO) 
                                          << 9U) | 
                                         ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge) 
                                          << 8U))) 
                    | ((0x00000080U & ((~ (IData)(vlSelfRef.irq_n)) 
                                       << 7U)) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc 
        = Vcpu_wrapper_tb__ConstPool__TABLE_h32401d32_0
        [__Vtableidx1];
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD 
        = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd) 
           & (0x0dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right 
        = (((0x0dU == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
            | ((0x24U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)) 
               | (0x23U == (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))) 
           & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift_right));
    __Vtableidx6 = ((((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only) 
                        << 3U) | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare) 
                                  << 2U)) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__inc))) 
                     << 9U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift) 
                                << 8U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C) 
                                           << 7U) | 
                                          (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__rotate) 
                                            << 6U) 
                                           | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI 
        = Vcpu_wrapper_tb__ConstPool__TABLE_hc7a084b0_0
        [__Vtableidx6];
    if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = 
            (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        __VdfgRegularize_hebeb780c_0_18 = 0U;
        __VdfgRegularize_hebeb780c_0_16 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = 
            (0x000000ffU & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC) 
                            >> 8U));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = 
            (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
        __VdfgRegularize_hebeb780c_0_18 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        __VdfgRegularize_hebeb780c_0_16 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
    }
    __Vtableidx5 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards) 
                     << 0x0000000aU) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__op) 
                                         << 6U) | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op 
        = Vcpu_wrapper_tb__ConstPool__TABLE_hf67012e5_0
        [__Vtableidx5];
    __Vtableidx4 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__dst_reg) 
                     << 9U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__index_y) 
                                << 8U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__src_reg) 
                                           << 6U) | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel 
        = Vcpu_wrapper_tb__ConstPool__TABLE_hd7a914d5_0
        [__Vtableidx4];
    vlSelfRef.rw_n = (1U & (~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__we_i)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile 
        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS
        [vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel];
    if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = 
            (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = 
            (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
    }
    if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        __VdfgRegularize_hebeb780c_0_17 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
    } else {
        __VdfgRegularize_hebeb780c_0_17 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = 0U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_6;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
            }
        } else if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                            = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
                    } else {
                        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
                        vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    }
                } else {
                    vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_8;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_17));
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)
                        : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                            : (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_14;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_2;
        } else {
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & 0U);
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile))
                            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                }
            } else if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & 0U);
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
                } else {
                    vlSelfRef.do_data = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php)
                                          ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P)
                                          : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                }
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_15;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                        ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD))
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC))
                        : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_17));
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.do_data = vlSelfRef.__VdfgRegularize_hebeb780c_0_11;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_9;
                } else {
                    vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_14;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_2;
        } else {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)
                            : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD)
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_15;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_6;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only)
                            ? 0U : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile));
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)
                            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            }
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        } else if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
            if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else {
                vlSelfRef.do_data = ((1U & ((~ (IData)(vlSelfRef.irq_n)) 
                                            | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)))
                                      ? (0x00000020U 
                                         | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N) 
                                             << 7U) 
                                            | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V) 
                                                << 6U) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))))
                                      : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res)
                        ? 0xfffcU : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)
                                      ? 0xfffaU : 0xfffeU));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_8;
        } else {
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & 0U);
            vlSelfRef.do_data = vlSelfRef.__VdfgRegularize_hebeb780c_0_11;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_9;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
        }
    } else {
        if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                            << 8U) | (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_10;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_5;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_5;
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH;
                }
            } else {
                if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                        = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                } else {
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                        = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_10;
                }
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = __VdfgRegularize_hebeb780c_0_16;
            }
        } else {
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
        }
        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
    }
    vlSelfRef.addr = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic 
        = ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right)
            ? ((0x00000100U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                               << 8U)) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI) 
                                           << 7U) | 
                                          (0x0000007fU 
                                           & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                                              >> 1U))))
            : ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                ? ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                    ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI)
                    : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                       ^ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI)))
                : ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                    ? ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                       & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI))
                    : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI) 
                       | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI)))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI 
        = (0x000000ffU & ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                           ? ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                               ? 0U : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic))
                           : ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op))
                               ? (~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI))
                               : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l 
        = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic)) 
                          + ((0x0000000fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI)) 
                             + ((~ ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right) 
                                    | (3U == (3U & 
                                              ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op) 
                                               >> 2U))))) 
                                & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI)))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC 
        = (1U & (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l) 
                  >> 4U) | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD) 
                            & (5U <= (7U & ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l) 
                                            >> 1U))))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h 
        = (0x0000001fU & (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic) 
                           >> 4U) + ((0x0000000fU & 
                                      ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI) 
                                       >> 4U)) + (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp 
        = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h) 
            << 4U) | (0x0000000fU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l)));
}

void Vcpu_wrapper_tb___024root___eval_nba(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_nba\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_wrapper_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_wrapper_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_wrapper_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_wrapper_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcpu_wrapper_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vcpu_wrapper_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_wrapper_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_wrapper_tb___024root___eval_phase__act(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_phase__act\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_wrapper_tb___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_wrapper_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcpu_wrapper_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcpu_wrapper_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcpu_wrapper_tb___024root___eval_phase__nba(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_phase__nba\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_wrapper_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcpu_wrapper_tb___024root___eval_nba(vlSelf);
        Vcpu_wrapper_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcpu_wrapper_tb___024root___eval(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcpu_wrapper_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("cpu_wrapper_tb.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcpu_wrapper_tb___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_wrapper_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("cpu_wrapper_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcpu_wrapper_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("cpu_wrapper_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcpu_wrapper_tb___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcpu_wrapper_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcpu_wrapper_tb___024root___eval_debug_assertions(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_debug_assertions\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.res_n & 0xfeU)))) {
        Verilated::overWidthError("res_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.pwr_n & 0xfeU)))) {
        Verilated::overWidthError("pwr_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");
    }
    if (VL_UNLIKELY(((vlSelfRef.rdy & 0xfeU)))) {
        Verilated::overWidthError("rdy");
    }
    if (VL_UNLIKELY(((vlSelfRef.irq_n & 0xfeU)))) {
        Verilated::overWidthError("irq_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.nmi_n & 0xfeU)))) {
        Verilated::overWidthError("nmi_n");
    }
}
#endif  // VL_DEBUG
