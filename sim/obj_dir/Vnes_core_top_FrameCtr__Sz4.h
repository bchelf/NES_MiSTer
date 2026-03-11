// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_FRAMECTR__SZ4_H_
#define VERILATED_VNES_CORE_TOP_FRAMECTR__SZ4_H_  // guard

#include "verilated.h"
class Vnes_core_top_eReg_SavestateV__Az4_Dz8;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_FrameCtr__Sz4 final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az4_Dz8* __PVT__iREG_SAVESTATE_APU_FCT;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__aclk1;
    CData/*0:0*/ __PVT__aclk2;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__cold_reset;
    CData/*0:0*/ __PVT__write;
    CData/*0:0*/ __PVT__read;
    CData/*0:0*/ __PVT__write_ce;
    CData/*7:0*/ __PVT__din;
    CData/*1:0*/ __PVT__addr;
    CData/*0:0*/ __PVT__PAL;
    CData/*0:0*/ __PVT__MMC5;
    CData/*0:0*/ __PVT__irq;
    CData/*0:0*/ __PVT__irq_flag;
    CData/*0:0*/ __PVT__frame_half;
    CData/*0:0*/ __PVT__frame_quarter;
    CData/*0:0*/ __PVT__SaveStateBus_wren;
    CData/*0:0*/ __PVT__SaveStateBus_rst;
    CData/*0:0*/ __PVT__SaveStateBus_load;
    CData/*0:0*/ __PVT__frame_reset;
    CData/*0:0*/ __PVT__frame_interrupt_buffer;
    CData/*0:0*/ __PVT__frame_int_disabled;
    CData/*0:0*/ __PVT__FrameInterrupt;
    CData/*0:0*/ __PVT__set_irq;
    CData/*0:0*/ __PVT__FrameSeqMode_2;
    CData/*0:0*/ __PVT__frame_reset_2;
    CData/*0:0*/ __PVT__w4017_1;
    CData/*0:0*/ __PVT__w4017_2;
    CData/*0:0*/ __PVT__DisableFrameInterrupt;
    CData/*0:0*/ __PVT__FrameSeqMode;
    CData/*0:0*/ __PVT__seq_mode;
    CData/*0:0*/ __PVT__frm_a;
    CData/*0:0*/ __PVT__frm_b;
    CData/*0:0*/ __PVT__frm_c;
    CData/*0:0*/ __PVT__frm_d;
    CData/*0:0*/ __PVT__frm_e;
    CData/*0:0*/ __Vdly__FrameInterrupt;
    CData/*0:0*/ __Vdly__frame_interrupt_buffer;
    CData/*0:0*/ __Vdly__w4017_2;
    CData/*0:0*/ __Vdly__w4017_1;
    CData/*0:0*/ __Vdly__FrameSeqMode_2;
    CData/*0:0*/ __Vdly__frame_reset_2;
    CData/*0:0*/ __Vdly__FrameSeqMode;
    CData/*0:0*/ __Vdly__DisableFrameInterrupt;
    SData/*9:0*/ __PVT__SaveStateBus_Adr;
    SData/*14:0*/ __PVT__frame;
    SData/*14:0*/ __Vdly__frame;
    QData/*63:0*/ __PVT__SaveStateBus_Din;
    QData/*63:0*/ __PVT__SaveStateBus_Dout;
    QData/*63:0*/ __PVT__SS_FCT;
    QData/*63:0*/ __PVT__SS_FCT_BACK;

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_FrameCtr__Sz4();
    ~Vnes_core_top_FrameCtr__Sz4();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_FrameCtr__Sz4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
