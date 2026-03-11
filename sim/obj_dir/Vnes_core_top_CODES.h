// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_CODES_H_
#define VERILATED_VNES_CORE_TOP_CODES_H_  // guard

#include "verilated.h"


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_CODES final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__enable;
    CData/*0:0*/ __PVT__available;
    CData/*7:0*/ __PVT__data_in;
    CData/*0:0*/ __PVT__genie_ovr;
    CData/*7:0*/ __PVT__genie_data;
    CData/*7:0*/ __PVT__code_compare;
    CData/*7:0*/ __PVT__code_data;
    CData/*0:0*/ __PVT__code_comp_f;
    CData/*5:0*/ __PVT__index;
    CData/*0:0*/ __PVT__code_change;
    CData/*5:0*/ __Vdly__index;
    CData/*0:0*/ __Vdly__code_change;
    CData/*0:0*/ __VdlySet__codes__v0;
    CData/*0:0*/ __VdlySet__codes__v1;
    CData/*0:0*/ __VdlySet__codes__v2;
    CData/*0:0*/ __VdlySet__codes__v3;
    CData/*0:0*/ __VdlySet__codes__v4;
    CData/*0:0*/ __VdlySet__codes__v5;
    CData/*0:0*/ __VdlySet__codes__v6;
    CData/*0:0*/ __VdlySet__codes__v7;
    CData/*0:0*/ __VdlySet__codes__v8;
    CData/*0:0*/ __VdlySet__codes__v9;
    CData/*0:0*/ __VdlySet__codes__v10;
    CData/*0:0*/ __VdlySet__codes__v11;
    CData/*0:0*/ __VdlySet__codes__v12;
    CData/*0:0*/ __VdlySet__codes__v13;
    CData/*0:0*/ __VdlySet__codes__v14;
    CData/*0:0*/ __VdlySet__codes__v15;
    CData/*0:0*/ __VdlySet__codes__v16;
    CData/*0:0*/ __VdlySet__codes__v17;
    CData/*0:0*/ __VdlySet__codes__v18;
    CData/*0:0*/ __VdlySet__codes__v19;
    CData/*0:0*/ __VdlySet__codes__v20;
    CData/*0:0*/ __VdlySet__codes__v21;
    CData/*0:0*/ __VdlySet__codes__v22;
    CData/*0:0*/ __VdlySet__codes__v23;
    CData/*0:0*/ __VdlySet__codes__v24;
    CData/*0:0*/ __VdlySet__codes__v25;
    CData/*0:0*/ __VdlySet__codes__v26;
    CData/*0:0*/ __VdlySet__codes__v27;
    CData/*0:0*/ __VdlySet__codes__v28;
    CData/*0:0*/ __VdlySet__codes__v29;
    CData/*0:0*/ __VdlySet__codes__v30;
    CData/*0:0*/ __VdlySet__codes__v31;
    CData/*4:0*/ __VdlyDim0__codes__v32;
    CData/*0:0*/ __VdlySet__codes__v32;
    SData/*15:0*/ __PVT__addr_in;
    SData/*15:0*/ __PVT__code_addr;
    VlWide<5>/*128:0*/ __PVT__code;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__x;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__x;
    QData/*32:0*/ __PVT__code_trimmed;
    QData/*33:0*/ __VdlyVal__codes__v32;
    VlUnpacked<QData/*33:0*/, 32> __PVT__codes;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_CODES();
    ~Vnes_core_top_CODES();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_CODES);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
