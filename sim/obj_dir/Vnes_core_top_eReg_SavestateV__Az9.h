// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_EREG_SAVESTATEV__AZ9_H_
#define VERILATED_VNES_CORE_TOP_EREG_SAVESTATEV__AZ9_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_eReg_SavestateV__Az9 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__BUS_wren;
    CData/*0:0*/ __PVT__BUS_rst;
    SData/*9:0*/ __PVT__BUS_Adr;
    QData/*63:0*/ __PVT__BUS_Din;
    QData/*63:0*/ __PVT__BUS_Dout;
    QData/*63:0*/ __PVT__Din;
    QData/*63:0*/ __PVT__Dout;
    QData/*63:0*/ __PVT__dout_r;
    QData/*63:0*/ __Vdly__dout_r;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_eReg_SavestateV__Az9();
    ~Vnes_core_top_eReg_SavestateV__Az9();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_eReg_SavestateV__Az9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
