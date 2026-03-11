// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_INPUT_NORMALIZE_H_
#define VERILATED_VNES_CORE_TOP_INPUT_NORMALIZE_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_input_normalize final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__p1_raw;
    CData/*7:0*/ __PVT__p2_raw;
    CData/*7:0*/ __PVT__p1_norm;
    CData/*7:0*/ __PVT__p2_norm;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_input_normalize();
    ~Vnes_core_top_input_normalize();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_input_normalize);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
