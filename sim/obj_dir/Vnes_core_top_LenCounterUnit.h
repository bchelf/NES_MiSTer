// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_LENCOUNTERUNIT_H_
#define VERILATED_VNES_CORE_TOP_LENCOUNTERUNIT_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_LenCounterUnit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__cold_reset;
    CData/*0:0*/ __PVT__len_clk;
    CData/*0:0*/ __PVT__aclk1;
    CData/*0:0*/ __PVT__aclk1_d;
    CData/*7:0*/ __PVT__load_value;
    CData/*0:0*/ __PVT__halt_in;
    CData/*0:0*/ __PVT__addr;
    CData/*0:0*/ __PVT__is_triangle;
    CData/*0:0*/ __PVT__write;
    CData/*0:0*/ __PVT__enabled;
    CData/*0:0*/ __PVT__lc_on;
    CData/*7:0*/ __PVT__lenunit__DOT__len_counter_int;
    CData/*0:0*/ __PVT__lenunit__DOT__halt;
    CData/*0:0*/ __PVT__lenunit__DOT__halt_next;
    CData/*7:0*/ __PVT__lenunit__DOT__len_counter_next;
    CData/*0:0*/ __PVT__lenunit__DOT__lc_on_1;
    CData/*0:0*/ __PVT__lenunit__DOT__clear_next;
    CData/*0:0*/ __Vdly__lc_on;
    CData/*0:0*/ __Vdly__lenunit__DOT__lc_on_1;
    CData/*7:0*/ __Vdly__lenunit__DOT__len_counter_next;
    CData/*0:0*/ __Vdly__lenunit__DOT__clear_next;
    CData/*7:0*/ __Vdly__lenunit__DOT__len_counter_int;
    CData/*0:0*/ __Vdly__lenunit__DOT__halt;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_LenCounterUnit();
    ~Vnes_core_top_LenCounterUnit();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_LenCounterUnit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
