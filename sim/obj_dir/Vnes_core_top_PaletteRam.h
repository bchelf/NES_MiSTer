// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_PALETTERAM_H_
#define VERILATED_VNES_CORE_TOP_PALETTERAM_H_  // guard

#include "verilated.h"
class Vnes_core_top_eReg_SavestateV__Az13_Dz14;
class Vnes_core_top_eReg_SavestateV__Az15_Dz16;
class Vnes_core_top_eReg_SavestateV__Az17_Dz18;
class Vnes_core_top_eReg_SavestateV__Az19_Dz20;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_PaletteRam final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az13_Dz14* __PVT__iREG_SAVESTATE_PAL0;
    Vnes_core_top_eReg_SavestateV__Az15_Dz16* __PVT__iREG_SAVESTATE_PAL1;
    Vnes_core_top_eReg_SavestateV__Az17_Dz18* __PVT__iREG_SAVESTATE_PAL2;
    Vnes_core_top_eReg_SavestateV__Az19_Dz20* __PVT__iREG_SAVESTATE_PAL3;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__ce;
        CData/*4:0*/ __PVT__addr;
        CData/*5:0*/ __PVT__din;
        CData/*5:0*/ __PVT__dout;
        CData/*0:0*/ __PVT__write;
        CData/*1:0*/ __PVT__extra_bits;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__rendering;
        CData/*0:0*/ __PVT__c_corrupt;
        CData/*4:0*/ __PVT__raw_addr;
        CData/*0:0*/ __PVT__in_range;
        CData/*0:0*/ __PVT__SaveStateBus_wren;
        CData/*0:0*/ __PVT__SaveStateBus_rst;
        CData/*0:0*/ __PVT__corrupting;
        CData/*4:0*/ __PVT__addr2;
        CData/*4:0*/ __PVT__addr3;
        CData/*0:0*/ __PVT__old_rendering;
        CData/*0:0*/ __Vdly__old_rendering;
        CData/*5:0*/ __VdlyVal__palette__v0;
        CData/*0:0*/ __VdlySet__palette__v0;
        CData/*5:0*/ __VdlyVal__palette__v1;
        CData/*5:0*/ __VdlyVal__palette__v2;
        CData/*5:0*/ __VdlyVal__palette__v3;
        CData/*5:0*/ __VdlyVal__palette__v4;
        CData/*5:0*/ __VdlyVal__palette__v5;
        CData/*5:0*/ __VdlyVal__palette__v6;
        CData/*5:0*/ __VdlyVal__palette__v7;
        CData/*5:0*/ __VdlyVal__palette__v8;
        CData/*5:0*/ __VdlyVal__palette__v9;
        CData/*5:0*/ __VdlyVal__palette__v10;
        CData/*5:0*/ __VdlyVal__palette__v11;
        CData/*5:0*/ __VdlyVal__palette__v12;
        CData/*5:0*/ __VdlyVal__palette__v13;
        CData/*5:0*/ __VdlyVal__palette__v14;
        CData/*5:0*/ __VdlyVal__palette__v15;
        CData/*5:0*/ __VdlyVal__palette__v16;
        CData/*5:0*/ __VdlyVal__palette__v17;
        CData/*5:0*/ __VdlyVal__palette__v18;
        CData/*5:0*/ __VdlyVal__palette__v19;
        CData/*5:0*/ __VdlyVal__palette__v20;
        CData/*5:0*/ __VdlyVal__palette__v21;
        CData/*5:0*/ __VdlyVal__palette__v22;
        CData/*5:0*/ __VdlyVal__palette__v23;
        CData/*5:0*/ __VdlyVal__palette__v24;
        CData/*5:0*/ __VdlyVal__palette__v25;
        CData/*5:0*/ __VdlyVal__palette__v26;
        CData/*5:0*/ __VdlyVal__palette__v27;
        CData/*5:0*/ __VdlyVal__palette__v28;
        CData/*5:0*/ __VdlyVal__palette__v29;
        CData/*5:0*/ __VdlyVal__palette__v30;
        CData/*5:0*/ __VdlyVal__palette__v31;
        CData/*5:0*/ __VdlyVal__palette__v32;
        CData/*4:0*/ __VdlyDim0__palette__v32;
        CData/*0:0*/ __VdlySet__palette__v32;
        CData/*5:0*/ __VdlyVal__palette__v33;
        CData/*4:0*/ __VdlyDim0__palette__v33;
        CData/*0:0*/ __VdlySet__palette__v33;
        SData/*9:0*/ __PVT__SaveStateBus_Adr;
        QData/*63:0*/ __PVT__SaveStateBus_Din;
        QData/*63:0*/ __PVT__SaveStateBus_Dout;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL0____pinNumber8;
        QData/*63:0*/ __Vcellinp__iREG_SAVESTATE_PAL0____pinNumber7;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL0____pinNumber6;
    };
    struct {
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL1____pinNumber8;
        QData/*63:0*/ __Vcellinp__iREG_SAVESTATE_PAL1____pinNumber7;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL1____pinNumber6;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL2____pinNumber8;
        QData/*63:0*/ __Vcellinp__iREG_SAVESTATE_PAL2____pinNumber7;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL2____pinNumber6;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL3____pinNumber8;
        QData/*63:0*/ __Vcellinp__iREG_SAVESTATE_PAL3____pinNumber7;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_PAL3____pinNumber6;
        VlUnpacked<QData/*63:0*/, 4> __PVT__SaveStateBus_wired_or;
        VlUnpacked<QData/*63:0*/, 4> __PVT__SS_PAL;
        VlUnpacked<QData/*63:0*/, 4> __PVT__SS_PAL_BACK;
        VlUnpacked<CData/*5:0*/, 32> __PVT__palette;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_PaletteRam();
    ~Vnes_core_top_PaletteRam();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_PaletteRam);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
