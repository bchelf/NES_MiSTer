// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_wrapper_tb.h for the primary calling header

#ifndef VERILATED_VCPU_WRAPPER_TB___024ROOT_H_
#define VERILATED_VCPU_WRAPPER_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu_wrapper_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_wrapper_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(res_n,0,0);
        VL_IN8(pwr_n,0,0);
        VL_IN8(enable,0,0);
        VL_IN8(clk,0,0);
        VL_IN8(rdy,0,0);
        VL_IN8(irq_n,0,0);
        VL_IN8(nmi_n,0,0);
        VL_OUT8(do_data,7,0);
        VL_OUT8(di_data,7,0);
        VL_OUT8(rw_n,0,0);
        VL_OUT8(mem2,7,0);
        VL_OUT8(mem3,7,0);
        VL_OUT8(mem4,7,0);
        CData/*1:0*/ cpu_wrapper_tb__DOT__mode;
        CData/*0:0*/ cpu_wrapper_tb__DOT__bcd_en;
        CData/*0:0*/ cpu_wrapper_tb__DOT__ss_wren;
        CData/*0:0*/ cpu_wrapper_tb__DOT__ss_rst;
        CData/*0:0*/ cpu_wrapper_tb__DOT__ss_load;
        CData/*7:0*/ cpu_wrapper_tb__DOT__di_reg;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__we_i;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__reset_i;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABL;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ABH;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ADD;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIHOLD_valid;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__DIMUX;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IRHOLD_valid;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__C;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__Z;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__I;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__D;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__V;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__N;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AN;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__HC;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AI;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__BI;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__IR;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CI;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__CO;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_edge;
        CData/*1:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regsel;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__regfile;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__P;
        CData/*5:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_inc;
        CData/*1:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__src_reg;
        CData/*1:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__dst_reg;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__index_y;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_reg;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__inc;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_back;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__load_only;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__store;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_sbc;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__compare;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__rotate;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__backwards;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_true;
        CData/*2:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cond_code;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__shift_right;
    };
    struct {
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_shift_right;
        CData/*3:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__op;
        CData/*3:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__alu_op;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adc_bcd;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__adj_bcd;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__bit_ins;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__plp;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__php;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clc;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sec;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cld;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sed;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__cli;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__sei;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__clv;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__brk;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__res;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__write_register;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__NMI_1;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BCD;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__AI7;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__BI7;
        CData/*7:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_BI;
        CData/*4:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_l;
        CData/*4:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_h;
        CData/*0:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_HC;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_11;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_12;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_13;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_14;
        CData/*7:0*/ __VdfgRegularize_hebeb780c_0_15;
        CData/*3:0*/ __VdfgRegularize_hebeb780c_0_19;
        CData/*5:0*/ __Vdly__cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__state;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enable__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_wrapper_tb__DOT__dut__DOT__reset_i__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(addr,15,0);
        SData/*9:0*/ cpu_wrapper_tb__DOT__ss_adr;
        SData/*15:0*/ cpu_wrapper_tb__DOT__dut__DOT__ab_i;
        SData/*15:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC;
        SData/*15:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__PC_temp;
        SData/*8:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp_logic;
        SData/*8:0*/ cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__ALU__DOT__temp;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_0;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_1;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_2;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_4;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_5;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_6;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_8;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_9;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_10;
        IData/*31:0*/ cpu_wrapper_tb__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ cpu_wrapper_tb__DOT__ss_din;
        VlUnpacked<CData/*7:0*/, 65536> cpu_wrapper_tb__DOT__mem;
        VlUnpacked<CData/*7:0*/, 4> cpu_wrapper_tb__DOT__dut__DOT__cpu_impl__DOT__AXYS;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vcpu_wrapper_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcpu_wrapper_tb___024root(Vcpu_wrapper_tb__Syms* symsp, const char* namep);
    ~Vcpu_wrapper_tb___024root();
    VL_UNCOPYABLE(Vcpu_wrapper_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
