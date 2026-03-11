// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_NOISECHAN_H_
#define VERILATED_VNES_CORE_TOP_NOISECHAN_H_  // guard

#include "verilated.h"
class Vnes_core_top_EnvelopeUnit;
class Vnes_core_top_LenCounterUnit;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_NoiseChan final {
  public:
    // CELLS
    Vnes_core_top_LenCounterUnit* __PVT__LenNoi;
    Vnes_core_top_EnvelopeUnit* __PVT__EnvNoi;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__ce;
    CData/*0:0*/ __PVT__aclk1;
    CData/*0:0*/ __PVT__aclk1_d;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__cold_reset;
    CData/*1:0*/ __PVT__Addr;
    CData/*7:0*/ __PVT__DIN;
    CData/*0:0*/ __PVT__PAL;
    CData/*0:0*/ __PVT__write;
    CData/*7:0*/ __PVT__lc_load;
    CData/*0:0*/ __PVT__LenCtr_Clock;
    CData/*0:0*/ __PVT__Env_Clock;
    CData/*0:0*/ __PVT__Enabled;
    CData/*3:0*/ __PVT__Sample;
    CData/*0:0*/ __PVT__IsNonZero;
    CData/*0:0*/ __PVT__ShortMode;
    CData/*3:0*/ __PVT__Period;
    CData/*3:0*/ __PVT__Envelope;
    CData/*0:0*/ __PVT__subunit_write;
    CData/*0:0*/ __PVT__lc;
    CData/*0:0*/ __Vcellinp__LenNoi__addr;
    CData/*0:0*/ __Vcellinp__LenNoi__halt_in;
    CData/*0:0*/ __Vcellinp__EnvNoi__addr;
    CData/*5:0*/ __Vcellinp__EnvNoi__din;
    CData/*0:0*/ __PVT__noise_clock;
    CData/*0:0*/ __Vdly__noise_clock;
    CData/*0:0*/ __Vdly__ShortMode;
    CData/*3:0*/ __Vdly__Period;
    SData/*14:0*/ __PVT__Shift;
    SData/*10:0*/ __PVT__noise_timer;
    SData/*10:0*/ __Vdly__noise_timer;
    SData/*14:0*/ __Vdly__Shift;
    VlUnpacked<SData/*10:0*/, 16> __PVT__noise_pal_lut;
    VlUnpacked<SData/*10:0*/, 16> __PVT__noise_ntsc_lut;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_NoiseChan();
    ~Vnes_core_top_NoiseChan();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_NoiseChan);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
