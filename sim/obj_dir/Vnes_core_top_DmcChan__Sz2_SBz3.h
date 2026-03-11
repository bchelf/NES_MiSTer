// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnes_core_top.h for the primary calling header

#ifndef VERILATED_VNES_CORE_TOP_DMCCHAN__SZ2_SBZ3_H_
#define VERILATED_VNES_CORE_TOP_DMCCHAN__SZ2_SBZ3_H_  // guard

#include "verilated.h"
class Vnes_core_top_eReg_SavestateV__Az2;
class Vnes_core_top_eReg_SavestateV__Az3;


class Vnes_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnes_core_top_DmcChan__Sz2_SBz3 final {
  public:
    // CELLS
    Vnes_core_top_eReg_SavestateV__Az2* __PVT__iREG_SAVESTATE_APU_DMC1;
    Vnes_core_top_eReg_SavestateV__Az3* __PVT__iREG_SAVESTATE_APU_DMC2;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__MMC5;
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__aclk1;
        CData/*0:0*/ __PVT__aclk1_d;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__cold_reset;
        CData/*2:0*/ __PVT__ain;
        CData/*7:0*/ __PVT__DIN;
        CData/*0:0*/ __PVT__write;
        CData/*0:0*/ __PVT__dma_ack;
        CData/*7:0*/ __PVT__dma_data;
        CData/*0:0*/ __PVT__PAL;
        CData/*0:0*/ __PVT__irq;
        CData/*6:0*/ __PVT__Sample;
        CData/*0:0*/ __PVT__dma_req;
        CData/*0:0*/ __PVT__enable;
        CData/*0:0*/ __PVT__SaveStateBus_wren;
        CData/*0:0*/ __PVT__SaveStateBus_rst;
        CData/*0:0*/ __PVT__SaveStateBus_load;
        CData/*0:0*/ __PVT__irq_enable;
        CData/*0:0*/ __PVT__loop;
        CData/*3:0*/ __PVT__frequency;
        CData/*7:0*/ __PVT__sample_address;
        CData/*7:0*/ __PVT__sample_length;
        CData/*7:0*/ __PVT__sample_buffer;
        CData/*7:0*/ __PVT__dmc_volume;
        CData/*7:0*/ __PVT__dmc_volume_next;
        CData/*0:0*/ __PVT__dmc_silence;
        CData/*0:0*/ __PVT__have_buffer;
        CData/*7:0*/ __PVT__sample_shift;
        CData/*2:0*/ __PVT__dmc_bits;
        CData/*0:0*/ __PVT__enable_1;
        CData/*0:0*/ __PVT__enable_2;
        CData/*0:0*/ __PVT__enable_3;
        CData/*0:0*/ __PVT__dmc_clock;
        CData/*0:0*/ __Vdly__irq_enable;
        CData/*0:0*/ __Vdly__loop;
        CData/*3:0*/ __Vdly__frequency;
        CData/*0:0*/ __Vdly__irq;
        CData/*7:0*/ __Vdly__dmc_volume;
        CData/*7:0*/ __Vdly__sample_address;
        CData/*7:0*/ __Vdly__sample_length;
        CData/*0:0*/ __Vdly__enable;
        CData/*0:0*/ __Vdly__enable_1;
        CData/*0:0*/ __Vdly__enable_2;
        CData/*0:0*/ __Vdly__dmc_clock;
        CData/*7:0*/ __Vdly__sample_shift;
        CData/*2:0*/ __Vdly__dmc_bits;
        CData/*0:0*/ __Vdly__dmc_silence;
        CData/*0:0*/ __Vdly__have_buffer;
        CData/*7:0*/ __Vdly__sample_buffer;
        CData/*0:0*/ __Vdly__enable_3;
        CData/*7:0*/ __Vdly__dmc_volume_next;
        SData/*15:0*/ __PVT__dma_address;
        SData/*9:0*/ __PVT__SaveStateBus_Adr;
        SData/*11:0*/ __PVT__bytes_remaining;
        SData/*8:0*/ __PVT__dmc_lsfr;
        SData/*15:0*/ __Vdly__dma_address;
        SData/*15:0*/ __VdlyMask__dma_address;
        SData/*11:0*/ __Vdly__bytes_remaining;
        SData/*8:0*/ __Vdly__dmc_lsfr;
        QData/*63:0*/ __PVT__SaveStateBus_Din;
        QData/*63:0*/ __PVT__SaveStateBus_Dout;
        QData/*63:0*/ __PVT__SS_DMC1;
    };
    struct {
        QData/*63:0*/ __PVT__SS_DMC1_BACK;
        QData/*63:0*/ __PVT__SS_DMC2;
        QData/*63:0*/ __PVT__SS_DMC2_BACK;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6;
        QData/*63:0*/ __Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6;
        VlUnpacked<QData/*63:0*/, 2> __PVT__SaveStateBus_wired_or;
        VlUnpacked<SData/*8:0*/, 16> __PVT__pal_pitch_lut;
        VlUnpacked<SData/*8:0*/, 16> __PVT__ntsc_pitch_lut;
    };

    // INTERNAL VARIABLES
    Vnes_core_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnes_core_top_DmcChan__Sz2_SBz3();
    ~Vnes_core_top_DmcChan__Sz2_SBz3();
    void ctor(Vnes_core_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnes_core_top_DmcChan__Sz2_SBz3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
