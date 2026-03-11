// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_OAMEVAL_H_
#define VERILATED_VNES_CORE_TOP_OAMEVAL_H_  // guard

#include "verilated.h"
class Vnes_core_top_eReg_SavestateV__Az11_Dz12;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_OAMEval final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az11_Dz12* __PVT__iREG_SAVESTATE;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__ce;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__clear_signal;
        CData/*0:0*/ __PVT__end_of_line;
        CData/*0:0*/ __PVT__rendering_enabled;
        CData/*0:0*/ __PVT__obj_size;
        CData/*7:0*/ __PVT__oam_bus;
        CData/*0:0*/ __PVT__oam_addr_write;
        CData/*0:0*/ __PVT__oam_data_write;
        CData/*7:0*/ __PVT__oam_din;
        CData/*0:0*/ __PVT__overflow;
        CData/*0:0*/ __PVT__sprite0;
        CData/*0:0*/ __PVT__is_vbe;
        CData/*0:0*/ __PVT__PAL;
        CData/*0:0*/ __PVT__in_range;
        CData/*0:0*/ __PVT__masked_sprites;
        CData/*0:0*/ __PVT__is_pre_render;
        CData/*0:0*/ __PVT__SaveStateBus_wren;
        CData/*0:0*/ __PVT__SaveStateBus_rst;
        CData/*7:0*/ __PVT__Savestate_OAMAddr;
        CData/*0:0*/ __PVT__Savestate_OAMRdEn;
        CData/*0:0*/ __PVT__Savestate_OAMWrEn;
        CData/*7:0*/ __PVT__Savestate_OAMWriteData;
        CData/*7:0*/ __PVT__Savestate_OAMReadData;
        CData/*7:0*/ __PVT__oam_dbus;
        CData/*7:0*/ __PVT__oam_addr;
        CData/*2:0*/ __PVT__oam_secondary_row;
        CData/*7:0*/ __PVT__oam_data;
        CData/*0:0*/ __PVT__oam_secondary_ovr;
        CData/*5:0*/ __PVT__oam_addr_ex;
        CData/*3:0*/ __PVT__oam_secondary_row_ex;
        CData/*2:0*/ __PVT__spr_counter;
        CData/*0:0*/ __PVT__old_rendering;
        CData/*0:0*/ __PVT__old_using_secondary;
        CData/*0:0*/ __PVT__visible;
        CData/*0:0*/ __PVT__rendering;
        CData/*0:0*/ __PVT__evaluating;
        CData/*0:0*/ __PVT__secondary_write;
        CData/*7:0*/ __PVT__oam_read_addr;
        CData/*0:0*/ __PVT__is_attr_byte;
        CData/*0:0*/ __PVT__using_secondary;
        CData/*4:0*/ __PVT__oam_row_cur;
        CData/*4:0*/ __PVT__oam_row_last;
        CData/*0:0*/ __PVT__corrupting_write;
        CData/*0:0*/ __PVT__clear_secondary_addr;
        CData/*4:0*/ __PVT__oam_secondary_addr;
        CData/*0:0*/ __PVT__sprite0_curr;
        CData/*2:0*/ __PVT__repeat_count;
        CData/*0:0*/ __PVT__n_ovr;
        CData/*0:0*/ __PVT__ex_ovr;
        CData/*1:0*/ __PVT__oam_secondary_column;
        CData/*0:0*/ __PVT__oam_wr_enabled;
        CData/*1:0*/ __PVT__oam_eval__DOT__eval_count;
        CData/*0:0*/ __PVT__oam_eval__DOT__sec_ovr;
        CData/*7:0*/ __Vdly__Savestate_OAMReadData;
        CData/*7:0*/ __Vdly__oam_data;
        CData/*0:0*/ __Vdly__oam_secondary_ovr;
        CData/*4:0*/ __Vdly__oam_secondary_addr;
        CData/*2:0*/ __Vdly__oam_secondary_row;
        CData/*3:0*/ __Vdly__oam_secondary_row_ex;
        CData/*0:0*/ __Vdly__n_ovr;
        CData/*2:0*/ __Vdly__spr_counter;
        CData/*2:0*/ __Vdly__repeat_count;
    };
    struct {
        CData/*0:0*/ __Vdly__sprite0;
        CData/*0:0*/ __Vdly__sprite0_curr;
        CData/*0:0*/ __Vdly__overflow;
        CData/*1:0*/ __Vdly__oam_secondary_column;
        CData/*0:0*/ __Vdly__ex_ovr;
        CData/*5:0*/ __Vdly__oam_addr_ex;
        CData/*7:0*/ __Vdly__oam_addr;
        CData/*0:0*/ __Vdly__old_rendering;
        CData/*0:0*/ __Vdly__old_using_secondary;
        CData/*1:0*/ __Vdly__oam_eval__DOT__eval_count;
        CData/*7:0*/ __VdlyVal__oam__v0;
        CData/*7:0*/ __VdlyDim0__oam__v0;
        CData/*0:0*/ __VdlySet__oam__v0;
        CData/*0:0*/ __VdlySet__oam_temp__v0;
        CData/*7:0*/ __VdlyVal__oam__v1;
        CData/*7:0*/ __VdlyDim0__oam__v1;
        CData/*0:0*/ __VdlySet__oam__v1;
        CData/*7:0*/ __VdlyVal__oam__v2;
        CData/*7:0*/ __VdlyDim0__oam__v2;
        CData/*7:0*/ __VdlyVal__oam__v3;
        CData/*7:0*/ __VdlyDim0__oam__v3;
        CData/*7:0*/ __VdlyVal__oam__v4;
        CData/*7:0*/ __VdlyDim0__oam__v4;
        CData/*7:0*/ __VdlyVal__oam__v5;
        CData/*7:0*/ __VdlyDim0__oam__v5;
        CData/*7:0*/ __VdlyVal__oam__v6;
        CData/*7:0*/ __VdlyDim0__oam__v6;
        CData/*7:0*/ __VdlyVal__oam__v7;
        CData/*7:0*/ __VdlyDim0__oam__v7;
        CData/*7:0*/ __VdlyVal__oam__v8;
        CData/*7:0*/ __VdlyDim0__oam__v8;
        CData/*7:0*/ __VdlyVal__oam_temp__v64;
        CData/*5:0*/ __VdlyDim0__oam_temp__v64;
        CData/*5:0*/ __VdlyDim0__oam_temp__v65;
        CData/*0:0*/ __VdlySet__oam_temp__v65;
        CData/*5:0*/ __VdlyDim0__oam_temp__v66;
        CData/*7:0*/ __VdlyVal__oam_temp__v67;
        CData/*5:0*/ __VdlyDim0__oam_temp__v67;
        CData/*0:0*/ __VdlySet__oam_temp__v67;
        CData/*7:0*/ __VdlyVal__oam_temp__v68;
        CData/*5:0*/ __VdlyDim0__oam_temp__v68;
        CData/*7:0*/ __VdlyVal__oam_temp__v69;
        CData/*5:0*/ __VdlyDim0__oam_temp__v69;
        CData/*7:0*/ __VdlyVal__oam_temp__v70;
        CData/*5:0*/ __VdlyDim0__oam_temp__v70;
        CData/*7:0*/ __VdlyVal__oam_temp__v71;
        CData/*5:0*/ __VdlyDim0__oam_temp__v71;
        CData/*0:0*/ __VdlySet__oam_temp__v71;
        CData/*7:0*/ __VdlyVal__oam__v9;
        CData/*7:0*/ __VdlyDim0__oam__v9;
        CData/*0:0*/ __VdlySet__oam__v9;
        SData/*8:0*/ __PVT__scanline;
        SData/*8:0*/ __PVT__cycle;
        SData/*9:0*/ __PVT__SaveStateBus_Adr;
        SData/*8:0*/ __PVT__oam_eval__DOT__last_y;
        SData/*8:0*/ __PVT__oam_eval__DOT__last_tile;
        SData/*8:0*/ __PVT__oam_eval__DOT__last_attr;
        SData/*8:0*/ __Vdly__oam_eval__DOT__last_y;
        SData/*8:0*/ __Vdly__oam_eval__DOT__last_tile;
        SData/*8:0*/ __Vdly__oam_eval__DOT__last_attr;
        IData/*31:0*/ __PVT__oam_bus_ex;
        IData/*31:0*/ __PVT__oam_state;
        IData/*31:0*/ __Vdly__oam_state;
        IData/*31:0*/ __Vdly__oam_bus_ex;
    };
    struct {
        QData/*63:0*/ __PVT__SaveStateBus_Din;
        QData/*63:0*/ __PVT__SaveStateBus_Dout;
        QData/*63:0*/ __PVT__SS_OAMEVAL;
        QData/*63:0*/ __PVT__SS_OAMEVAL_BACK;
        VlUnpacked<CData/*7:0*/, 64> __PVT__oam_temp;
        VlUnpacked<CData/*7:0*/, 256> __PVT__oam;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_OAMEval();
    ~Vnes_core_top_OAMEval();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_OAMEval);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
