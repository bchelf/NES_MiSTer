// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_wrapper_tb.h for the primary calling header

#include "Vcpu_wrapper_tb__pch.h"

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_static__TOP(Vcpu_wrapper_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_wrapper_tb___024root____Vm_traceActivitySetAll(Vcpu_wrapper_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_static(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_static\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_wrapper_tb___024root___eval_static__TOP(vlSelf);
    Vcpu_wrapper_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__enable__0 = vlSelfRef.enable;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_wrapper_tb__DOT__dut__DOT__reset_i__0 
        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i;
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_static__TOP(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_static__TOP\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_1 = 0U;
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_initial__TOP(Vcpu_wrapper_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_initial(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_initial\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_wrapper_tb___024root___eval_initial__TOP(vlSelf);
    Vcpu_wrapper_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_initial__TOP(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_initial__TOP\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_wrapper_tb__DOT__mode = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__bcd_en = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__ss_din = 0ULL;
    vlSelfRef.cpu_wrapper_tb__DOT__ss_adr = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__ss_wren = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__ss_rst = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__ss_load = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__di_reg = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00010000U, vlSelfRef.cpu_wrapper_tb__DOT__i)) {
        vlSelfRef.cpu_wrapper_tb__DOT__mem[(0x0000ffffU 
                                            & vlSelfRef.cpu_wrapper_tb__DOT__i)] = 0xeaU;
        vlSelfRef.cpu_wrapper_tb__DOT__i = ((IData)(1U) 
                                            + vlSelfRef.cpu_wrapper_tb__DOT__i);
    }
    vlSelfRef.cpu_wrapper_tb__DOT__mem[65532U] = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[65533U] = 0x80U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[65534U] = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[65535U] = 0x90U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[65530U] = 0U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[65531U] = 0xa0U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32768U] = 0xa9U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32769U] = 0x12U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32770U] = 0x85U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32771U] = 2U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32772U] = 0x58U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32773U] = 0xeaU;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32774U] = 0xeaU;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32775U] = 0x4cU;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32776U] = 5U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[32777U] = 0x80U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[36864U] = 0xa9U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[36865U] = 0x34U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[36866U] = 0x85U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[36867U] = 3U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[36868U] = 0x40U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[40960U] = 0xa9U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[40961U] = 0x56U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[40962U] = 0x85U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[40963U] = 4U;
    vlSelfRef.cpu_wrapper_tb__DOT__mem[40964U] = 0x40U;
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_final(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_final\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_wrapper_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_wrapper_tb___024root___eval_phase__stl(Vcpu_wrapper_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_settle(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_settle\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcpu_wrapper_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("cpu_wrapper_tb.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcpu_wrapper_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_triggers_vec__stl(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_triggers_vec__stl\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vcpu_wrapper_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_wrapper_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_wrapper_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_wrapper_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 256> Vcpu_wrapper_tb__ConstPool__TABLE_h67de06b7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu_wrapper_tb__ConstPool__TABLE_h30aa0085_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu_wrapper_tb__ConstPool__TABLE_hdc38b0ff_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_wrapper_tb__ConstPool__TABLE_h32401d32_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vcpu_wrapper_tb__ConstPool__TABLE_hc7a084b0_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vcpu_wrapper_tb__ConstPool__TABLE_hf67012e5_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu_wrapper_tb__ConstPool__TABLE_hd7a914d5_0;

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___stl_sequent__TOP__0(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    // Body
    vlSelfRef.mem2 = vlSelfRef.cpu_wrapper_tb__DOT__mem[2U];
    vlSelfRef.mem3 = vlSelfRef.cpu_wrapper_tb__DOT__mem[3U];
    vlSelfRef.mem4 = vlSelfRef.cpu_wrapper_tb__DOT__mem[4U];
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__reset_i 
        = (1U & (~ ((IData)(vlSelfRef.pwr_n) & (IData)(vlSelfRef.res_n))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (1U 
                                                & (((~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I)) 
                                                    & (~ (IData)(vlSelfRef.irq_n))) 
                                                   | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C)));
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
    vlSelfRef.di_data = vlSelfRef.cpu_wrapper_tb__DOT__di_reg;
    vlSelfRef.rw_n = (1U & (~ (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__we_i)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P 
        = (0x00000030U | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N) 
                           << 7U) | (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V) 
                                      << 6U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile 
        = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS
        [vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel];
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX 
        = ((IData)(vlSelfRef.rdy) ? (IData)(vlSelfRef.di_data)
            : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = (0x000000ffU 
                                                 & ((1U 
                                                     & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))
                                                     ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC)
                                                     : 
                                                    ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC) 
                                                     >> 8U)));
    vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
            ? 0U : ((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid)
                     ? (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD)
                     : (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
    if ((1U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = 
            (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
        __VdfgRegularize_hebeb780c_0_18 = 0U;
        __VdfgRegularize_hebeb780c_0_16 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = 
            (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = 
            (0x00000100U | (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        __VdfgRegularize_hebeb780c_0_18 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        __VdfgRegularize_hebeb780c_0_16 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
    }
    if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        __VdfgRegularize_hebeb780c_0_17 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
    } else {
        __VdfgRegularize_hebeb780c_0_17 = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = 0U;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = vlSelfRef.__VdfgRegularize_hebeb780c_0_1;
    }
    if ((0x00000020U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((0x00000010U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
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
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = 0U;
            } else {
                vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_17));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_14;
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
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & 0U);
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
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_15;
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
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_12;
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
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_17));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_14;
            }
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_2;
        } else {
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX));
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
        }
    } else if ((8U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_18));
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_6;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
            } else {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
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
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                = (0x000000ffU & 0U);
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_13;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__ab_i 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_9;
            vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        }
    } else {
        vlSelfRef.do_data = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        if ((4U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state))) {
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI 
                    = (0x000000ffU & (IData)(__VdfgRegularize_hebeb780c_0_16));
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
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI 
                    = __VdfgRegularize_hebeb780c_0_16;
                vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp 
                    = vlSelfRef.cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
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

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___eval_stl(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_stl\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcpu_wrapper_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcpu_wrapper_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vcpu_wrapper_tb___024root___eval_phase__stl(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___eval_phase__stl\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_wrapper_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_wrapper_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcpu_wrapper_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcpu_wrapper_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcpu_wrapper_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_wrapper_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_wrapper_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcpu_wrapper_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_wrapper_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_wrapper_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge enable)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge cpu_wrapper_tb.dut.reset_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_wrapper_tb___024root____Vm_traceActivitySetAll(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vcpu_wrapper_tb___024root___ctor_var_reset(Vcpu_wrapper_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_wrapper_tb___024root___ctor_var_reset\n"); );
    Vcpu_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->res_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971415812964045113ull);
    vlSelf->pwr_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3367568878475374847ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4255036911935195030ull);
    vlSelf->irq_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10901006744231566505ull);
    vlSelf->nmi_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 809203393953361429ull);
    vlSelf->addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14934084843038794831ull);
    vlSelf->do_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13554433352574384221ull);
    vlSelf->di_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15291039616591544392ull);
    vlSelf->rw_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2230253119986679947ull);
    vlSelf->mem2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9049129590556537036ull);
    vlSelf->mem3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2001312177075431633ull);
    vlSelf->mem4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2160993391511082255ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->cpu_wrapper_tb__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12064717542979929953ull);
    }
    vlSelf->cpu_wrapper_tb__DOT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9804610509913051877ull);
    vlSelf->cpu_wrapper_tb__DOT__bcd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10970362444728448658ull);
    vlSelf->cpu_wrapper_tb__DOT__ss_din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15143821329810440353ull);
    vlSelf->cpu_wrapper_tb__DOT__ss_adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2319581383236589007ull);
    vlSelf->cpu_wrapper_tb__DOT__ss_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16020936572031216286ull);
    vlSelf->cpu_wrapper_tb__DOT__ss_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6077618360504422437ull);
    vlSelf->cpu_wrapper_tb__DOT__ss_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12537443520821466055ull);
    vlSelf->cpu_wrapper_tb__DOT__di_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1659903142308869477ull);
    vlSelf->cpu_wrapper_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9643402152390688414ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__ab_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5854421357215520585ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15722425100513480556ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__reset_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13631383294323912326ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 688195827229881779ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4998979583964687516ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15544527540677937897ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 533869170087548003ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9236255687421287395ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14505254564460171044ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15224729189876309134ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17728271059908992439ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18186728364627370524ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17803761628033910594ull);
    }
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5584030032008419729ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7530999979732689331ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17289003757275564930ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8803235267155693829ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3751782547970888939ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1035990432948861398ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12590812322961741553ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15447483597220915983ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11377404747905282985ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7630584054879299544ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6341630901383524955ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2413687828748180678ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5552449949335519714ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__src_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6201511487431381809ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__dst_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17030286216189374607ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__index_y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18366111905234047034ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534735902258214138ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10755663756366576760ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 332050247399746867ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8533776633257227341ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3244073194401371403ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6324272144446263381ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17847953096795850603ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7114768736663418667ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__rotate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7430642865785011514ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14614010218097344444ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 199313060586075877ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_code = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13917765067774372591ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10667084316143515493ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15012050039058712414ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17806413285405401379ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16659114714466959404ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16513176424566780319ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 685543349838884901ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17137789150733902046ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13502731365334437804ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12893191395938445973ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 271487670298105654ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12272022625504541838ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13012711856568121141ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12489692124091024053ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14021121859787501849ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sei = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12544712039327043800ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2081158066565343414ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__brk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12916983616491147739ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14020724852072992216ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_register = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6364082540391851118ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2843501201750011628ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5170166783281957791ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4332118141753135421ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10525932755057480312ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10410340732926002031ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4557815548816596712ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 731069978639605850ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1314512469361175454ull);
    vlSelf->cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15443290983741046569ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_11 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_14 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_15 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__enable__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu_wrapper_tb__DOT__dut__DOT__reset_i__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
