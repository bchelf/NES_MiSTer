// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_PaletteRam___ico_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__0(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___ico_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

void Vnes_core_top_PaletteRam___ico_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__1(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___ico_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

void Vnes_core_top_PaletteRam___ico_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__2(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___ico_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL0____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL1____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL2____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL3____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL0____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL1____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL2____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[3U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL3____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_Dout = (((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]);
}

void Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__0(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__palette__v0 = 0U;
    vlSelfRef.__VdlySet__palette__v32 = 0U;
    vlSelfRef.__VdlySet__palette__v33 = 0U;
    vlSelfRef.__Vdly__old_rendering = vlSelfRef.__PVT__old_rendering;
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__VdlyVal__palette__v0 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0U, 6));
        vlSelfRef.__VdlySet__palette__v0 = 1U;
        vlSelfRef.__VdlyVal__palette__v1 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0U, 6));
        vlSelfRef.__VdlyVal__palette__v2 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0U, 6));
        vlSelfRef.__VdlyVal__palette__v3 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0U, 6));
        vlSelfRef.__VdlyVal__palette__v4 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 8U, 6));
        vlSelfRef.__VdlyVal__palette__v5 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 8U, 6));
        vlSelfRef.__VdlyVal__palette__v6 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 8U, 6));
        vlSelfRef.__VdlyVal__palette__v7 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 8U, 6));
        vlSelfRef.__VdlyVal__palette__v8 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0x10U, 6));
        vlSelfRef.__VdlyVal__palette__v9 = (0x0000003fU 
                                            & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0x10U, 6));
        vlSelfRef.__VdlyVal__palette__v10 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0x10U, 6));
        vlSelfRef.__VdlyVal__palette__v11 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0x10U, 6));
        vlSelfRef.__VdlyVal__palette__v12 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0x18U, 6));
        vlSelfRef.__VdlyVal__palette__v13 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0x18U, 6));
        vlSelfRef.__VdlyVal__palette__v14 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0x18U, 6));
        vlSelfRef.__VdlyVal__palette__v15 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0x18U, 6));
        vlSelfRef.__VdlyVal__palette__v16 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0x20U, 6));
        vlSelfRef.__VdlyVal__palette__v17 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0x20U, 6));
        vlSelfRef.__VdlyVal__palette__v18 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0x20U, 6));
        vlSelfRef.__VdlyVal__palette__v19 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0x20U, 6));
        vlSelfRef.__VdlyVal__palette__v20 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0x28U, 6));
        vlSelfRef.__VdlyVal__palette__v21 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0x28U, 6));
        vlSelfRef.__VdlyVal__palette__v22 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0x28U, 6));
        vlSelfRef.__VdlyVal__palette__v23 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0x28U, 6));
        vlSelfRef.__VdlyVal__palette__v24 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0x30U, 6));
        vlSelfRef.__VdlyVal__palette__v25 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0x30U, 6));
        vlSelfRef.__VdlyVal__palette__v26 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0x30U, 6));
        vlSelfRef.__VdlyVal__palette__v27 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0x30U, 6));
        vlSelfRef.__VdlyVal__palette__v28 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[0U], 0x38U, 6));
        vlSelfRef.__VdlyVal__palette__v29 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[1U], 0x38U, 6));
        vlSelfRef.__VdlyVal__palette__v30 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[2U], 0x38U, 6));
        vlSelfRef.__VdlyVal__palette__v31 = (0x0000003fU 
                                             & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_PAL[3U], 0x38U, 6));
    } else if (vlSelfRef.__PVT__ce) {
        if (vlSelfRef.__PVT__write) {
            vlSelfRef.__VdlyVal__palette__v32 = vlSelfRef.__PVT__din;
            vlSelfRef.__VdlyDim0__palette__v32 = vlSelfRef.__PVT__addr2;
            vlSelfRef.__VdlySet__palette__v32 = 1U;
        }
        vlSelfRef.__Vdly__old_rendering = vlSelfRef.__PVT__rendering;
        if (vlSelfRef.__PVT__corrupting) {
            vlSelfRef.__VdlyVal__palette__v33 = vlSelfRef.__PVT__palette
                [VL_CONCAT_III(5,1,4, (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__addr2), 4U)), 
                               VL_CONCAT_III(4,2,2, 
                                             (3U & 
                                              VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raw_addr), 2U, 2)), 
                                             (3U & 
                                              VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__addr2), 0U, 2))))];
            vlSelfRef.__VdlyDim0__palette__v33 = VL_CONCAT_III(5,1,4, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__addr2), 4U)), 
                                                               (0x0000000fU 
                                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raw_addr), 0U, 4)));
            vlSelfRef.__VdlySet__palette__v33 = 1U;
        }
    }
    vlSelfRef.__PVT__old_rendering = vlSelfRef.__Vdly__old_rendering;
    if (vlSelfRef.__VdlySet__palette__v0) {
        vlSelfRef.__PVT__palette[0U] = vlSelfRef.__VdlyVal__palette__v0;
        vlSelfRef.__PVT__palette[1U] = vlSelfRef.__VdlyVal__palette__v1;
        vlSelfRef.__PVT__palette[2U] = vlSelfRef.__VdlyVal__palette__v2;
        vlSelfRef.__PVT__palette[3U] = vlSelfRef.__VdlyVal__palette__v3;
        vlSelfRef.__PVT__palette[4U] = vlSelfRef.__VdlyVal__palette__v4;
        vlSelfRef.__PVT__palette[5U] = vlSelfRef.__VdlyVal__palette__v5;
        vlSelfRef.__PVT__palette[6U] = vlSelfRef.__VdlyVal__palette__v6;
        vlSelfRef.__PVT__palette[7U] = vlSelfRef.__VdlyVal__palette__v7;
        vlSelfRef.__PVT__palette[8U] = vlSelfRef.__VdlyVal__palette__v8;
        vlSelfRef.__PVT__palette[9U] = vlSelfRef.__VdlyVal__palette__v9;
        vlSelfRef.__PVT__palette[10U] = vlSelfRef.__VdlyVal__palette__v10;
        vlSelfRef.__PVT__palette[11U] = vlSelfRef.__VdlyVal__palette__v11;
        vlSelfRef.__PVT__palette[12U] = vlSelfRef.__VdlyVal__palette__v12;
        vlSelfRef.__PVT__palette[13U] = vlSelfRef.__VdlyVal__palette__v13;
        vlSelfRef.__PVT__palette[14U] = vlSelfRef.__VdlyVal__palette__v14;
        vlSelfRef.__PVT__palette[15U] = vlSelfRef.__VdlyVal__palette__v15;
        vlSelfRef.__PVT__palette[16U] = vlSelfRef.__VdlyVal__palette__v16;
        vlSelfRef.__PVT__palette[17U] = vlSelfRef.__VdlyVal__palette__v17;
        vlSelfRef.__PVT__palette[18U] = vlSelfRef.__VdlyVal__palette__v18;
        vlSelfRef.__PVT__palette[19U] = vlSelfRef.__VdlyVal__palette__v19;
        vlSelfRef.__PVT__palette[20U] = vlSelfRef.__VdlyVal__palette__v20;
        vlSelfRef.__PVT__palette[21U] = vlSelfRef.__VdlyVal__palette__v21;
        vlSelfRef.__PVT__palette[22U] = vlSelfRef.__VdlyVal__palette__v22;
        vlSelfRef.__PVT__palette[23U] = vlSelfRef.__VdlyVal__palette__v23;
        vlSelfRef.__PVT__palette[24U] = vlSelfRef.__VdlyVal__palette__v24;
        vlSelfRef.__PVT__palette[25U] = vlSelfRef.__VdlyVal__palette__v25;
        vlSelfRef.__PVT__palette[26U] = vlSelfRef.__VdlyVal__palette__v26;
        vlSelfRef.__PVT__palette[27U] = vlSelfRef.__VdlyVal__palette__v27;
        vlSelfRef.__PVT__palette[28U] = vlSelfRef.__VdlyVal__palette__v28;
        vlSelfRef.__PVT__palette[29U] = vlSelfRef.__VdlyVal__palette__v29;
        vlSelfRef.__PVT__palette[30U] = vlSelfRef.__VdlyVal__palette__v30;
        vlSelfRef.__PVT__palette[31U] = vlSelfRef.__VdlyVal__palette__v31;
    }
    if (vlSelfRef.__VdlySet__palette__v32) {
        vlSelfRef.__PVT__palette[vlSelfRef.__VdlyDim0__palette__v32] 
            = vlSelfRef.__VdlyVal__palette__v32;
    }
    if (vlSelfRef.__VdlySet__palette__v33) {
        vlSelfRef.__PVT__palette[vlSelfRef.__VdlyDim0__palette__v33] 
            = vlSelfRef.__VdlyVal__palette__v33;
    }
    VL_ASSIGNSEL_QI(64, 6, 0U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[0U]);
    VL_ASSIGNSEL_QI(64, 6, 0U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[1U]);
    VL_ASSIGNSEL_QI(64, 6, 0U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[2U]);
    VL_ASSIGNSEL_QI(64, 6, 0U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[3U]);
    VL_ASSIGNSEL_QI(64, 6, 8U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[4U]);
    VL_ASSIGNSEL_QI(64, 6, 8U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[5U]);
    VL_ASSIGNSEL_QI(64, 6, 8U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[6U]);
    VL_ASSIGNSEL_QI(64, 6, 8U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[7U]);
    VL_ASSIGNSEL_QI(64, 6, 0x10U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[8U]);
    VL_ASSIGNSEL_QI(64, 6, 0x10U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[9U]);
    VL_ASSIGNSEL_QI(64, 6, 0x10U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[10U]);
    VL_ASSIGNSEL_QI(64, 6, 0x10U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[11U]);
    VL_ASSIGNSEL_QI(64, 6, 0x18U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[12U]);
    VL_ASSIGNSEL_QI(64, 6, 0x18U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[13U]);
    VL_ASSIGNSEL_QI(64, 6, 0x18U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[14U]);
    VL_ASSIGNSEL_QI(64, 6, 0x18U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[15U]);
    VL_ASSIGNSEL_QI(64, 6, 0x20U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[16U]);
    VL_ASSIGNSEL_QI(64, 6, 0x20U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[17U]);
    VL_ASSIGNSEL_QI(64, 6, 0x20U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[18U]);
    VL_ASSIGNSEL_QI(64, 6, 0x20U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[19U]);
    VL_ASSIGNSEL_QI(64, 6, 0x28U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[20U]);
    VL_ASSIGNSEL_QI(64, 6, 0x28U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[21U]);
    VL_ASSIGNSEL_QI(64, 6, 0x28U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[22U]);
    VL_ASSIGNSEL_QI(64, 6, 0x28U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[23U]);
    VL_ASSIGNSEL_QI(64, 6, 0x30U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[24U]);
    VL_ASSIGNSEL_QI(64, 6, 0x30U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[25U]);
    VL_ASSIGNSEL_QI(64, 6, 0x30U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[26U]);
    VL_ASSIGNSEL_QI(64, 6, 0x30U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[27U]);
    VL_ASSIGNSEL_QI(64, 6, 0x38U, vlSelfRef.__PVT__SS_PAL_BACK[0U], vlSelfRef.__PVT__palette[28U]);
    VL_ASSIGNSEL_QI(64, 6, 0x38U, vlSelfRef.__PVT__SS_PAL_BACK[1U], vlSelfRef.__PVT__palette[29U]);
    VL_ASSIGNSEL_QI(64, 6, 0x38U, vlSelfRef.__PVT__SS_PAL_BACK[2U], vlSelfRef.__PVT__palette[30U]);
    VL_ASSIGNSEL_QI(64, 6, 0x38U, vlSelfRef.__PVT__SS_PAL_BACK[3U], vlSelfRef.__PVT__palette[31U]);
    vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL0____pinNumber7 
        = vlSelfRef.__PVT__SS_PAL_BACK[0U];
    vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL1____pinNumber7 
        = vlSelfRef.__PVT__SS_PAL_BACK[1U];
    vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL2____pinNumber7 
        = vlSelfRef.__PVT__SS_PAL_BACK[2U];
    vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL3____pinNumber7 
        = vlSelfRef.__PVT__SS_PAL_BACK[3U];
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__Din 
        = vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL0____pinNumber7;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__Din 
        = vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL1____pinNumber7;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__Din 
        = vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL2____pinNumber7;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__Din 
        = vlSelfRef.__Vcellinp__iREG_SAVESTATE_PAL3____pinNumber7;
}

void Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__1(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL0____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL1____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL2____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL3____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL0____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL1____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL2____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[3U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL3____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_Dout = (((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]);
}

void Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__2(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL0____pinNumber8 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL0.__PVT__Dout;
    vlSelfRef.__PVT__SS_PAL[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL0____pinNumber8;
}

void Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__3(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL1____pinNumber8 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL1.__PVT__Dout;
    vlSelfRef.__PVT__SS_PAL[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL1____pinNumber8;
}

void Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__4(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL2____pinNumber8 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL2.__PVT__Dout;
    vlSelfRef.__PVT__SS_PAL[2U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL2____pinNumber8;
}

void Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__5(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_sequent__TOP__nes_core_top__nes_inst__ppu__palette_ram__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL3____pinNumber8 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram__iREG_SAVESTATE_PAL3.__PVT__Dout;
    vlSelfRef.__PVT__SS_PAL[3U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PAL3____pinNumber8;
}

void Vnes_core_top_PaletteRam___nba_comb__TOP__nes_core_top__nes_inst__ppu__palette_ram__0(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_comb__TOP__nes_core_top__nes_inst__ppu__palette_ram__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__addr2 = ((0U == (3U & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__addr), 0U, 2)))
                               ? VL_EXTEND_II(5,4, 
                                              (0x0000000fU 
                                               & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__addr), 0U, 4)))
                               : (IData)(vlSelfRef.__PVT__addr));
}

void Vnes_core_top_PaletteRam___nba_comb__TOP__nes_core_top__nes_inst__ppu__palette_ram__1(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_comb__TOP__nes_core_top__nes_inst__ppu__palette_ram__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__corrupting = ((((IData)(vlSelfRef.__PVT__old_rendering) 
                                     & (~ (IData)(vlSelfRef.__PVT__rendering))) 
                                    & (IData)(vlSelfRef.__PVT__c_corrupt)) 
                                   & (IData)(vlSelfRef.__PVT__in_range));
}

void Vnes_core_top_PaletteRam___nba_comb__TOP__nes_core_top__nes_inst__ppu__palette_ram__2(Vnes_core_top_PaletteRam* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_PaletteRam___nba_comb__TOP__nes_core_top__nes_inst__ppu__palette_ram__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__addr3 = ((IData)(vlSelfRef.__PVT__corrupting)
                               ? VL_CONCAT_III(5,1,4, 
                                               (1U 
                                                & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__addr2), 4U)), 
                                               VL_CONCAT_III(4,2,2, 
                                                             (3U 
                                                              & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__raw_addr), 2U, 2)), 
                                                             (3U 
                                                              & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__addr2), 0U, 2))))
                               : (IData)(vlSelfRef.__PVT__addr2));
    vlSelfRef.__PVT__dout = vlSelfRef.__PVT__palette
        [vlSelfRef.__PVT__addr3];
}
