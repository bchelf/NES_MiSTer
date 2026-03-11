// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_REGS_SAVESTATES_H_
#define VERILATED_VNES_CORE_TOP_REGS_SAVESTATES_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_regs_savestates final {
  public:

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_regs_savestates();
    ~Vnes_core_top_regs_savestates();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_regs_savestates);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
