// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_SQUARECHAN_H_
#define VERILATED_VNES_CORE_TOP_SQUARECHAN_H_  // guard

#include "verilated.h"
class Vnes_core_top_EnvelopeUnit;
class Vnes_core_top_LenCounterUnit;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_SquareChan final {
  public:
    // CELLS
    Vnes_core_top_LenCounterUnit* __PVT__LenSq;
    Vnes_core_top_EnvelopeUnit* __PVT__EnvSq;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__MMC5;
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__aclk1;
    CData/*0:0*/ __PVT__aclk1_d;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__cold_reset;
    CData/*0:0*/ __PVT__allow_us;
    CData/*0:0*/ __PVT__sq2;
    CData/*1:0*/ __PVT__Addr;
    CData/*7:0*/ __PVT__DIN;
    CData/*0:0*/ __PVT__write;
    CData/*7:0*/ __PVT__lc_load;
    CData/*0:0*/ __PVT__LenCtr_Clock;
    CData/*0:0*/ __PVT__Env_Clock;
    CData/*0:0*/ __PVT__get_or_put;
    CData/*0:0*/ __PVT__Enabled;
    CData/*3:0*/ __PVT__Sample;
    CData/*0:0*/ __PVT__IsNonZero;
    CData/*1:0*/ __PVT__Duty;
    CData/*0:0*/ __PVT__SweepEnable;
    CData/*0:0*/ __PVT__SweepNegate;
    CData/*0:0*/ __PVT__SweepReset;
    CData/*2:0*/ __PVT__SweepPeriod;
    CData/*2:0*/ __PVT__SweepDivider;
    CData/*2:0*/ __PVT__SweepShift;
    CData/*2:0*/ __PVT__SeqPos;
    CData/*0:0*/ __PVT__ValidFreq;
    CData/*0:0*/ __PVT__subunit_write;
    CData/*3:0*/ __PVT__Envelope;
    CData/*0:0*/ __PVT__lc;
    CData/*0:0*/ __PVT__DutyEnabledUsed;
    CData/*0:0*/ __PVT__DutyEnabled;
    CData/*0:0*/ __Vcellinp__LenSq__addr;
    CData/*0:0*/ __Vcellinp__LenSq__halt_in;
    CData/*0:0*/ __Vcellinp__LenSq__len_clk;
    CData/*0:0*/ __Vcellinp__EnvSq__addr;
    CData/*5:0*/ __Vcellinp__EnvSq__din;
    CData/*2:0*/ __Vdly__SeqPos;
    CData/*2:0*/ __Vdly__SweepDivider;
    CData/*0:0*/ __Vdly__SweepReset;
    CData/*1:0*/ __Vdly__Duty;
    CData/*0:0*/ __Vdly__SweepEnable;
    CData/*2:0*/ __Vdly__SweepPeriod;
    CData/*0:0*/ __Vdly__SweepNegate;
    CData/*2:0*/ __Vdly__SweepShift;
    SData/*10:0*/ __PVT__Period;
    SData/*11:0*/ __PVT__TimerCtr;
    SData/*10:0*/ __PVT__ShiftedPeriod;
    SData/*10:0*/ __PVT__PeriodRhs;
    SData/*11:0*/ __PVT__NewSweepPeriod;
    SData/*11:0*/ __Vdly__TimerCtr;
    SData/*10:0*/ __Vdly__Period;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_SquareChan();
    ~Vnes_core_top_SquareChan();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_SquareChan);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
