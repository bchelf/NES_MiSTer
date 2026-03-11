// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_TRIANGLECHAN_H_
#define VERILATED_VNES_CORE_TOP_TRIANGLECHAN_H_  // guard

#include "verilated.h"
class Vnes_core_top_LenCounterUnit;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_TriangleChan final {
  public:
    // CELLS
    Vnes_core_top_LenCounterUnit* __PVT__LenTri;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__phi1;
    CData/*0:0*/ __PVT__aclk1;
    CData/*0:0*/ __PVT__aclk1_d;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__cold_reset;
    CData/*0:0*/ __PVT__allow_us;
    CData/*1:0*/ __PVT__Addr;
    CData/*7:0*/ __PVT__DIN;
    CData/*0:0*/ __PVT__write;
    CData/*7:0*/ __PVT__lc_load;
    CData/*0:0*/ __PVT__LenCtr_Clock;
    CData/*0:0*/ __PVT__LinCtr_Clock;
    CData/*0:0*/ __PVT__Enabled;
    CData/*3:0*/ __PVT__Sample;
    CData/*0:0*/ __PVT__IsNonZero;
    CData/*4:0*/ __PVT__SeqPos;
    CData/*6:0*/ __PVT__LinCtrPeriod;
    CData/*6:0*/ __PVT__LinCtrPeriod_1;
    CData/*6:0*/ __PVT__LinCtr;
    CData/*0:0*/ __PVT__LinCtrl;
    CData/*0:0*/ __PVT__line_reload;
    CData/*0:0*/ __PVT__LinCtrZero;
    CData/*0:0*/ __PVT__lc;
    CData/*0:0*/ __PVT__subunit_write;
    CData/*3:0*/ __PVT__sample_latch;
    CData/*0:0*/ __Vcellinp__LenTri__addr;
    CData/*0:0*/ __Vcellinp__LenTri__halt_in;
    CData/*4:0*/ __Vdly__SeqPos;
    CData/*6:0*/ __Vdly__LinCtrPeriod_1;
    CData/*6:0*/ __Vdly__LinCtr;
    CData/*0:0*/ __Vdly__line_reload;
    CData/*0:0*/ __Vdly__LinCtrl;
    CData/*6:0*/ __Vdly__LinCtrPeriod;
    CData/*3:0*/ __Vdly__sample_latch;
    SData/*10:0*/ __PVT__Period;
    SData/*10:0*/ __PVT__applied_period;
    SData/*10:0*/ __PVT__TimerCtr;
    SData/*10:0*/ __Vdly__TimerCtr;
    SData/*10:0*/ __Vdly__applied_period;
    SData/*10:0*/ __Vdly__Period;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_TriangleChan();
    ~Vnes_core_top_TriangleChan();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_TriangleChan);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
