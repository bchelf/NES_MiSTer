// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_APUMIXER_H_
#define VERILATED_VNES_CORE_TOP_APUMIXER_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_APUMixer final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__square1;
    CData/*3:0*/ __PVT__square2;
    CData/*3:0*/ __PVT__triangle;
    CData/*3:0*/ __PVT__noise;
    CData/*6:0*/ __PVT__dmc;
    CData/*4:0*/ __PVT__squares;
    SData/*15:0*/ __PVT__sample;
    SData/*15:0*/ __PVT__ch1;
    SData/*8:0*/ __PVT__mix;
    SData/*15:0*/ __PVT__ch2;
    VlUnpacked<SData/*15:0*/, 32> __PVT__pulse_lut;
    VlUnpacked<CData/*5:0*/, 16> __PVT__tri_lut;
    VlUnpacked<CData/*5:0*/, 16> __PVT__noise_lut;
    VlUnpacked<CData/*7:0*/, 128> __PVT__dmc_lut;
    VlUnpacked<SData/*15:0*/, 512> __PVT__mix_lut;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_APUMixer();
    ~Vnes_core_top_APUMixer();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_APUMixer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
