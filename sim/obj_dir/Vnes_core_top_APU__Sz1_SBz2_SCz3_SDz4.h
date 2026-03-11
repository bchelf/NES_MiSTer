// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_APU__SZ1_SBZ2_SCZ3_SDZ4_H_
#define VERILATED_VNES_CORE_TOP_APU__SZ1_SBZ2_SCZ3_SDZ4_H_  // guard

#include "verilated.h"
class Vnes_core_top_APUMixer;
class Vnes_core_top_DmcChan__Sz2_SBz3;
class Vnes_core_top_FrameCtr__Sz4;
class Vnes_core_top_NoiseChan;
class Vnes_core_top_SquareChan;
class Vnes_core_top_TriangleChan;
class Vnes_core_top_eReg_SavestateV__Az1;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4 final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az1* __PVT__iREG_SAVESTATE_APU_TOP;
    Vnes_core_top_SquareChan* __PVT__Squ1;
    Vnes_core_top_SquareChan* __PVT__Squ2;
    Vnes_core_top_TriangleChan* __PVT__Tri;
    Vnes_core_top_NoiseChan* __PVT__Noi;
    Vnes_core_top_DmcChan__Sz2_SBz3* __PVT__Dmc;
    Vnes_core_top_APUMixer* __PVT__mixer;
    Vnes_core_top_FrameCtr__Sz4* __PVT__frame_counter;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__MMC5;
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__PHI2;
        CData/*0:0*/ __PVT__ce;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__cold_reset;
        CData/*0:0*/ __PVT__allow_us;
        CData/*0:0*/ __PVT__PAL;
        CData/*4:0*/ __PVT__ADDR;
        CData/*7:0*/ __PVT__DIN;
        CData/*0:0*/ __PVT__RW;
        CData/*0:0*/ __PVT__CS;
        CData/*4:0*/ __PVT__audio_channels;
        CData/*7:0*/ __PVT__DmaData;
        CData/*0:0*/ __PVT__get_or_put;
        CData/*0:0*/ __PVT__DmaAck;
        CData/*7:0*/ __PVT__DOUT;
        CData/*0:0*/ __PVT__DmaReq;
        CData/*0:0*/ __PVT__IRQ;
        CData/*0:0*/ __PVT__get_ce;
        CData/*0:0*/ __PVT__put_ce;
        CData/*0:0*/ __PVT__SaveStateBus_wren;
        CData/*0:0*/ __PVT__SaveStateBus_rst;
        CData/*0:0*/ __PVT__SaveStateBus_load;
        CData/*7:0*/ __PVT__lc_load;
        CData/*0:0*/ __PVT__read;
        CData/*0:0*/ __PVT__write;
        CData/*0:0*/ __PVT__write_ce;
        CData/*0:0*/ __PVT__phi2_old;
        CData/*0:0*/ __PVT__phi2_ce;
        CData/*0:0*/ __PVT__aclk1;
        CData/*0:0*/ __PVT__aclk2;
        CData/*0:0*/ __PVT__aclk1_delayed;
        CData/*0:0*/ __PVT__phi1;
        CData/*4:0*/ __PVT__Enabled;
        CData/*3:0*/ __PVT__Sq1Sample;
        CData/*3:0*/ __PVT__Sq2Sample;
        CData/*3:0*/ __PVT__TriSample;
        CData/*3:0*/ __PVT__NoiSample;
        CData/*6:0*/ __PVT__DmcSample;
        CData/*0:0*/ __PVT__DmcIrq;
        CData/*0:0*/ __PVT__IsDmcActive;
        CData/*0:0*/ __PVT__irq_flag;
        CData/*0:0*/ __PVT__frame_irq;
        CData/*0:0*/ __PVT__ApuMW0;
        CData/*0:0*/ __PVT__ApuMW1;
        CData/*0:0*/ __PVT__ApuMW2;
        CData/*0:0*/ __PVT__ApuMW3;
        CData/*0:0*/ __PVT__ApuMW4;
        CData/*0:0*/ __PVT__ApuMW5;
        CData/*0:0*/ __PVT__Sq1NonZero;
        CData/*0:0*/ __PVT__Sq2NonZero;
        CData/*0:0*/ __PVT__TriNonZero;
        CData/*0:0*/ __PVT__NoiNonZero;
        CData/*0:0*/ __PVT__ClkE;
        CData/*0:0*/ __PVT__ClkL;
        CData/*4:0*/ __PVT__enabled_buffer;
        CData/*4:0*/ __PVT__enabled_buffer_1;
        CData/*0:0*/ __PVT__frame_quarter;
        CData/*0:0*/ __PVT__frame_half;
        CData/*0:0*/ __Vcellinp__Squ1__Enabled;
        CData/*0:0*/ __Vcellinp__Squ1__write;
        CData/*1:0*/ __Vcellinp__Squ1__Addr;
        CData/*0:0*/ __Vcellinp__Squ2__Enabled;
    };
    struct {
        CData/*0:0*/ __Vcellinp__Squ2__write;
        CData/*1:0*/ __Vcellinp__Squ2__Addr;
        CData/*0:0*/ __Vcellinp__Tri__Enabled;
        CData/*0:0*/ __Vcellinp__Tri__write;
        CData/*1:0*/ __Vcellinp__Tri__Addr;
        CData/*0:0*/ __Vcellinp__Noi__Enabled;
        CData/*0:0*/ __Vcellinp__Noi__write;
        CData/*1:0*/ __Vcellinp__Noi__Addr;
        CData/*0:0*/ __Vcellinp__Dmc__write;
        CData/*2:0*/ __Vcellinp__Dmc__ain;
        CData/*1:0*/ __Vcellinp__frame_counter__addr;
        CData/*0:0*/ __Vcellinp__frame_counter__write_ce;
        CData/*0:0*/ __Vcellinp__frame_counter__read;
        CData/*0:0*/ __Vcellinp__frame_counter__write;
        CData/*0:0*/ __Vdly__phi2_old;
        CData/*4:0*/ __Vdly__enabled_buffer_1;
        CData/*4:0*/ __Vdly__enabled_buffer;
        SData/*15:0*/ __PVT__Sample;
        SData/*15:0*/ __PVT__DmaAddr;
        SData/*9:0*/ __PVT__SaveStateBus_Adr;
        QData/*63:0*/ __PVT__SaveStateBus_Din;
        QData/*63:0*/ __PVT__SaveStateBus_Dout;
        QData/*63:0*/ __PVT__SS_APU;
        QData/*63:0*/ __PVT__SS_APU_BACK;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_APU_TOP____pinNumber6;
        QData/*63:0*/ __Vcellout__Dmc__SaveStateBus_Dout;
        QData/*63:0*/ __Vcellout__frame_counter__SaveStateBus_Dout;
        VlUnpacked<QData/*63:0*/, 3> __PVT__SaveStateBus_wired_or;
        VlUnpacked<CData/*7:0*/, 32> __PVT__len_counter_lut;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4();
    ~Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_APU__Sz1_SBz2_SCz3_SDz4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
