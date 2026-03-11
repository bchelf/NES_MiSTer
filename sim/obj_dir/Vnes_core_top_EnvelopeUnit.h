// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_ENVELOPEUNIT_H_
#define VERILATED_VNES_CORE_TOP_ENVELOPEUNIT_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_EnvelopeUnit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__env_clk;
    CData/*5:0*/ __PVT__din;
    CData/*0:0*/ __PVT__addr;
    CData/*0:0*/ __PVT__write;
    CData/*3:0*/ __PVT__envelope;
    CData/*3:0*/ __PVT__env_count;
    CData/*3:0*/ __PVT__env_vol;
    CData/*0:0*/ __PVT__env_disabled;
    CData/*3:0*/ __PVT__envunit__DOT__env_div;
    CData/*0:0*/ __PVT__envunit__DOT__env_reload;
    CData/*0:0*/ __PVT__envunit__DOT__env_loop;
    CData/*0:0*/ __PVT__envunit__DOT__env_reset;
    CData/*3:0*/ __Vdly__envunit__DOT__env_div;
    CData/*3:0*/ __Vdly__env_count;
    CData/*0:0*/ __Vdly__envunit__DOT__env_reload;
    CData/*0:0*/ __Vdly__envunit__DOT__env_loop;
    CData/*0:0*/ __Vdly__env_disabled;
    CData/*3:0*/ __Vdly__env_vol;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_EnvelopeUnit();
    ~Vnes_core_top_EnvelopeUnit();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_EnvelopeUnit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
