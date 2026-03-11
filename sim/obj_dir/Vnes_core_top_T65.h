// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_T65_H_
#define VERILATED_VNES_CORE_TOP_T65_H_  // guard

#include "verilated.h"
class Vnes_core_top_T65_real;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_T65 final {
  public:
    // CELLS
    Vnes_core_top_T65_real* __PVT__cpu_impl;

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__mode;
    CData/*0:0*/ __PVT__BCD_en;
    CData/*0:0*/ __PVT__res_n;
    CData/*0:0*/ __PVT__pwr_n;
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__enable;
    CData/*0:0*/ __PVT__rdy;
    CData/*0:0*/ __PVT__IRQ_n;
    CData/*0:0*/ __PVT__NMI_n;
    CData/*0:0*/ __PVT__R_W_n;
    CData/*7:0*/ __PVT__DI;
    CData/*7:0*/ __PVT__DO;
    CData/*0:0*/ __PVT__Instrnew;
    CData/*0:0*/ __PVT__SaveStateBus_wren;
    CData/*0:0*/ __PVT__SaveStateBus_rst;
    CData/*0:0*/ __PVT__SaveStateBus_load;
    CData/*0:0*/ __PVT__rw_n_i;
    CData/*0:0*/ __PVT__rw_n_prev;
    CData/*0:0*/ __PVT__rdy_i;
    CData/*7:0*/ __PVT__do_i;
    CData/*0:0*/ __Vdly__rw_n_prev;
    SData/*15:0*/ __PVT__A;
    SData/*9:0*/ __PVT__SaveStateBus_Adr;
    IData/*23:0*/ __PVT__a24_i;
    QData/*63:0*/ __PVT__SaveStateBus_Din;
    QData/*63:0*/ __PVT__SaveStateBus_Dout;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_T65();
    ~Vnes_core_top_T65();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_T65);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
