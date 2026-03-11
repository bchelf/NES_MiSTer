// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__0(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__multi_mapper__chr_mask = 
        (0x000003ffU & VL_SEL_IIII(20, vlSelfRef.__PVT__chr_mask, 0U, 10));
    vlSelfRef.__Vcellinp__multi_mapper__prg_mask = 
        (0x000003ffU & VL_SEL_IIII(21, vlSelfRef.__PVT__prg_mask, 0U, 10));
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__flags 
        = vlSelfRef.__PVT__mapper_flags;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__cold_reset 
        = vlSelfRef.__PVT__cold_reset;
    vlSelfRef.__Vcellinp__cpu__pwr_n = (1U & (~ (IData)(vlSelfRef.__PVT__cold_reset)));
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__reset 
        = vlSelfRef.__PVT__reset_nes;
    vlSelfRef.__PVT__reset_noSS = (((IData)(vlSelfRef.__PVT__reset_nes) 
                                    | (IData)(vlSelfRef.__PVT__hold_reset)) 
                                   | (IData)(vlSelfRef.__PVT__bootvector_flag));
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__reset_in 
        = vlSelfRef.__PVT__reset_nes;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_mask 
        = vlSelfRef.__Vcellinp__multi_mapper__chr_mask;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_mask 
        = vlSelfRef.__Vcellinp__multi_mapper__prg_mask;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__pwr_n 
        = vlSelfRef.__Vcellinp__cpu__pwr_n;
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSelfRef.__Vcellinp__multi_mapper__ce = ((IData)(vlSelfRef.__PVT__cart_ce) 
                                              & (~ (IData)(vlSelfRef.__PVT__reset_noSS)));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__ce 
        = vlSelfRef.__Vcellinp__multi_mapper__ce;
}

void Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__1(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_a10 = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__vram_a10;
    vlSelfRef.__PVT__mapper_has_savestate = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_savestate;
    vlSelfRef.__PVT__bram_addr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_addr;
    vlSelfRef.__PVT__bram_dout = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_data_out;
    vlSelfRef.__PVT__bram_override = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_ovr;
    vlSelfRef.__PVT__diskside = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__diskside;
    vlSelfRef.__PVT__chr_allow = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_allow;
    vlSelfRef.__PVT__vram_ce = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__vram_ce;
    vlSelfRef.__PVT__sample_ext = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__audio;
    vlSelfRef.__PVT__prg_conflict_d0 = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_conflict_d0;
    vlSelfRef.__PVT__bram_write = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_prg_write;
    vlSelfRef.__PVT__has_flashsaves = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_flashsaves;
    vlSelfRef.__PVT__mapper_irq = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__irq;
    vlSelfRef.__PVT__prg_conflict = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_conflict;
    vlSelfRef.__PVT__chr_from_ppu_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_dout;
    vlSelfRef.__PVT__has_chr_from_ppu_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_chr_dout;
    vlSelfRef.__PVT__chr_linaddr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_aout;
    vlSelfRef.__PVT__prg_bus_write = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_bus_write;
    vlSelfRef.__PVT__prg_dout_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_dout;
    vlSelfRef.__PVT__prg_allow = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_allow;
    vlSelfRef.__PVT__prg_linaddr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_aout;
    vlSelfRef.__PVT__reset_delay = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__reset_delay;
    vlSelfRef.__PVT__state_loaded = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__load_done;
    vlSelfRef.__PVT__savestate_busy = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__savestate_busy;
    vlSelfRef.__PVT__SAVE_out_Din = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_Din;
    vlSelfRef.__PVT__SAVE_out_Adr = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_Adr;
    vlSelfRef.__PVT__SAVE_out_rnw = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_rnw;
    vlSelfRef.__PVT__SAVE_out_ena = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_ena;
    vlSelfRef.__PVT__SAVE_out_be = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__bus_out_be;
    vlSelfRef.__PVT__saving_savestate = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__saving_savestate;
    vlSelfRef.__PVT__sleep_savestates = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__sleep_savestate;
    vlSelfRef.__PVT__Savestate_RAMAddr = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMAddr;
    vlSelfRef.__PVT__Savestate_RAMWriteData = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMWriteData;
    vlSelfRef.__PVT__Savestate_RAMRdEn = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMRdEn;
    vlSelfRef.__PVT__Savestate_RAMWrEn = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMWrEn;
    vlSelfRef.__PVT__Savestate_RAMType = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMType;
    vlSelfRef.__PVT__SaveStateBus_rst = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_rst;
    vlSelfRef.__PVT__SaveStateBus_wren = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_wren;
    vlSelfRef.__PVT__loading_savestate = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__loading_savestate;
    vlSelfRef.__PVT__reset_ss = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__reset_ss;
    vlSelfRef.__PVT__SaveStateBus_Din = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Din;
    vlSelfRef.__PVT__SaveStateBus_Adr = vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Adr;
    vlSelfRef.__PVT__ppumem_write = ((IData)(vlSelfRef.__PVT__chr_write) 
                                     & ((IData)(vlSelfRef.__PVT__chr_allow) 
                                        | (IData)(vlSelfRef.__PVT__vram_ce)));
    if ((0U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = 0U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_ext;
    } else if ((2U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_inverted;
    } else if ((3U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_ext;
    }
    vlSelfRef.__PVT__mapper_has_flashsaves = vlSelfRef.__PVT__has_flashsaves;
    vlSelfRef.__Vcellinp__cpu__IRQ_n = (1U & (~ ((IData)(vlSelfRef.__PVT__apu_irq) 
                                                 | (IData)(vlSelfRef.__PVT__mapper_irq))));
    vlSelfRef.__PVT__ppumem_addr = vlSelfRef.__PVT__chr_linaddr;
    vlSelfRef.__PVT__cpumem_write = ((IData)(vlSelfRef.__PVT__prg_write) 
                                     & (IData)(vlSelfRef.__PVT__prg_allow));
    vlSelfRef.__PVT__cpumem_read = (((IData)(vlSelfRef.__PVT__prg_read) 
                                     & (IData)(vlSelfRef.__PVT__prg_allow)) 
                                    | ((IData)(vlSelfRef.__PVT__prg_write) 
                                       & (IData)(vlSelfRef.__PVT__prg_conflict)));
    vlSelfRef.__PVT__save_written = ((IData)(vlSelfRef.__PVT__has_flashsaves)
                                      ? (((~ VL_BITSEL_IIII(25, vlSelfRef.__PVT__prg_linaddr, 0x18U)) 
                                          & (IData)(vlSelfRef.__PVT__prg_write)) 
                                         & (IData)(vlSelfRef.__PVT__prg_allow))
                                      : ((0x14U == 
                                          (0x000000ffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__mapper_flags, 0U, 8)))
                                          ? (((0x0fU 
                                               == (0x0000000fU 
                                                   & VL_SEL_IIII(25, vlSelfRef.__PVT__prg_linaddr, 0x12U, 4))) 
                                              & (IData)(vlSelfRef.__PVT__prg_write)) 
                                             & (IData)(vlSelfRef.__PVT__prg_allow))
                                          : (((3U == 
                                               (7U 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_addr), 0x0dU, 3))) 
                                              & (IData)(vlSelfRef.__PVT__prg_write)) 
                                             | (IData)(vlSelfRef.__PVT__bram_write))));
    vlSelfRef.__PVT__cpumem_addr = vlSelfRef.__PVT__prg_linaddr;
    vlSymsp->TOP__nes_core_top__nes_inst__statemanager.__PVT__request_busy 
        = vlSelfRef.__PVT__savestate_busy;
    vlSelfRef.__PVT__sleep_savestate = ((IData)(vlSelfRef.__PVT__sleep_rewind) 
                                        | (IData)(vlSelfRef.__PVT__sleep_savestates));
    vlSelfRef.__PVT__Savestate_SDRAMAddr = vlSelfRef.__PVT__Savestate_RAMAddr;
    vlSelfRef.__PVT__Savestate_MAPRAMAddr = (0x00001fffU 
                                             & VL_SEL_IIII(25, vlSelfRef.__PVT__Savestate_RAMAddr, 0U, 13));
    vlSelfRef.__PVT__Savestate_OAMAddr = (0x000000ffU 
                                          & VL_SEL_IIII(25, vlSelfRef.__PVT__Savestate_RAMAddr, 0U, 8));
    vlSelfRef.__PVT__Savestate_SDRAMWriteData = vlSelfRef.__PVT__Savestate_RAMWriteData;
    vlSelfRef.__PVT__Savestate_MAPRAMWriteData = vlSelfRef.__PVT__Savestate_RAMWriteData;
    vlSelfRef.__PVT__Savestate_OAMWriteData = vlSelfRef.__PVT__Savestate_RAMWriteData;
    vlSelfRef.__PVT__Savestate_SDRAMRdEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMRdEn) 
                                            & (1U < (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_SDRAMWrEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMWrEn) 
                                            & (1U < (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_MAPRAMRdEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMRdEn) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_MAPRAMWrEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMWrEn) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_RAMReadData = ((0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType))
                                               ? (IData)(vlSelfRef.__PVT__Savestate_OAMReadData)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__Savestate_RAMType))
                                                   ? (IData)(vlSelfRef.__PVT__Savestate_MAPRAMReadData)
                                                   : (IData)(vlSelfRef.__PVT__Savestate_SDRAMReadData)));
    vlSelfRef.__PVT__Savestate_OAMRdEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMRdEn) 
                                          & (0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSelfRef.__PVT__Savestate_OAMWrEn = ((IData)(vlSelfRef.__PVT__Savestate_RAMWrEn) 
                                          & (0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType)));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSelfRef.__PVT__SaveStateExt_rst = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSelfRef.__PVT__SaveStateExt_wren = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSelfRef.__PVT__SaveStateExt_load = vlSelfRef.__PVT__loading_savestate;
    vlSelfRef.__PVT__Savestate_MAPRAMactive = ((IData)(vlSelfRef.__PVT__loading_savestate) 
                                               | (IData)(vlSelfRef.__PVT__saving_savestate));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__loading_savestate;
    vlSelfRef.__PVT__cpu_reset = ((IData)(vlSelfRef.__PVT__reset_ss) 
                                  | (IData)(vlSelfRef.__PVT__hold_reset));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSelfRef.__PVT__SaveStateExt_Din = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSelfRef.__PVT__SaveStateExt_Adr = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSelfRef.__PVT__sample = vlSelfRef.__PVT__sample_a;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__IRQ_n 
        = vlSelfRef.__Vcellinp__cpu__IRQ_n;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMAddr 
        = vlSelfRef.__PVT__Savestate_MAPRAMAddr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMAddr 
        = vlSelfRef.__PVT__Savestate_OAMAddr;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMWriteData 
        = vlSelfRef.__PVT__Savestate_MAPRAMWriteData;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMWriteData 
        = vlSelfRef.__PVT__Savestate_OAMWriteData;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMRdEn 
        = vlSelfRef.__PVT__Savestate_MAPRAMRdEn;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMWrEn 
        = vlSelfRef.__PVT__Savestate_MAPRAMWrEn;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMReadData 
        = vlSelfRef.__PVT__Savestate_RAMReadData;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMRdEn 
        = vlSelfRef.__PVT__Savestate_OAMRdEn;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMWrEn 
        = vlSelfRef.__PVT__Savestate_OAMWrEn;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__Savestate_MAPRAMactive 
        = vlSelfRef.__PVT__Savestate_MAPRAMactive;
    vlSelfRef.__Vcellinp__cpu__res_n = (1U & ((~ (IData)(vlSelfRef.__PVT__cpu_reset)) 
                                              & (~ (IData)(vlSelfRef.__PVT__cold_reset))));
    vlSelfRef.__PVT__reset = ((IData)(vlSelfRef.__PVT__cpu_reset) 
                              | (IData)(vlSelfRef.__PVT__bootvector_flag));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__res_n 
        = vlSelfRef.__Vcellinp__cpu__res_n;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__reset 
        = vlSelfRef.__PVT__reset;
}

void Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__2(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_to_ppu = ((IData)(vlSelfRef.__PVT__has_chr_from_ppu_mapper)
                                    ? (IData)(vlSelfRef.__PVT__chr_from_ppu_mapper)
                                    : (IData)(vlSelfRef.__PVT__ppumem_din));
    vlSelfRef.__PVT__prg_din = (((IData)(vlSelfRef.__PVT__dbus) 
                                 & ((IData)(vlSelfRef.__PVT__prg_conflict)
                                     ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                     : 0xffU)) | ((IData)(vlSelfRef.__PVT__prg_conflict_d0)
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__cpumem_din))
                                                   : 0U));
    vlSelfRef.__Vcellinp__codes__data_in = ((IData)(vlSelfRef.__PVT__prg_allow)
                                             ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                             : (IData)(vlSelfRef.__PVT__prg_dout_mapper));
    vlSelfRef.__PVT__external_data_bus = (0x000000ffU 
                                          & ((IData)(vlSelfRef.__PVT__reset)
                                              ? VL_SEL_IQII(64, vlSelfRef.__PVT__SS_TOP, 9U, 8)
                                              : (((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                                  & (~ (IData)(vlSelfRef.__PVT__dma_aout_enable)))
                                                  ? 
                                                 VL_CONCAT_III(8,3,5, 
                                                               (7U 
                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__open_bus_data), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad1_data))
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                                   & (~ (IData)(vlSelfRef.__PVT__dma_aout_enable)))
                                                   ? 
                                                  VL_CONCAT_III(8,3,5, 
                                                                (7U 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__open_bus_data), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad2_data))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__ppu_cs)
                                                    ? (IData)(vlSelfRef.__PVT__ppu_dout)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__prg_allow)
                                                     ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__prg_bus_write)
                                                      ? (IData)(vlSelfRef.__PVT__prg_dout_mapper)
                                                      : (IData)(vlSelfRef.__PVT__open_bus_data))))))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_dbus_in 
        = vlSelfRef.__PVT__chr_to_ppu;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_din 
        = vlSelfRef.__PVT__prg_din;
    vlSelfRef.__PVT__cpumem_dout = vlSelfRef.__PVT__prg_din;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__data_in 
        = vlSelfRef.__Vcellinp__codes__data_in;
    VL_ASSIGNSEL_QI(64, 8, 9U, vlSelfRef.__PVT__SS_TOP_BACK, vlSelfRef.__PVT__external_data_bus);
    vlSelfRef.__PVT__from_data_bus = vlSelfRef.__PVT__external_data_bus;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__Din 
        = vlSelfRef.__PVT__SS_TOP_BACK;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_from_ram 
        = vlSelfRef.__PVT__from_data_bus;
    vlSelfRef.__PVT__dma_data_bus = (((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                      & (IData)(vlSelfRef.__PVT__dma_aout_enable))
                                      ? VL_CONCAT_III(8,3,5, 
                                                      (7U 
                                                       & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad1_data))
                                      : (((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                          & (IData)(vlSelfRef.__PVT__dma_aout_enable))
                                          ? VL_CONCAT_III(8,3,5, 
                                                          (7U 
                                                           & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad2_data))
                                          : (IData)(vlSelfRef.__PVT__from_data_bus)));
    vlSelfRef.__PVT__apu_reg_value = VL_CONCAT_III(8,2,6, 
                                                   (3U 
                                                    & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__apu_dout), 6U, 2)), 
                                                   VL_CONCAT_III(6,1,5, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__apu_dout), 0U, 5))));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaData 
        = vlSelfRef.__PVT__dma_data_bus;
    vlSelfRef.__PVT__internal_data_bus = ((IData)(vlSelfRef.__PVT__apu_reg_cs)
                                           ? (IData)(vlSelfRef.__PVT__apu_reg_value)
                                           : (IData)(vlSelfRef.__PVT__from_data_bus));
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dma_data_to_ram 
        = vlSelfRef.__PVT__internal_data_bus;
    vlSelfRef.__Vcellinp__cpu__DI = ((IData)(vlSelfRef.__PVT__cpu_rnw)
                                      ? (IData)(vlSelfRef.__PVT__internal_data_bus)
                                      : (IData)(vlSelfRef.__PVT__cpu_dout));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__DI 
        = vlSelfRef.__Vcellinp__cpu__DI;
}

void Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__3(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__genie_ovr = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__genie_ovr;
    vlSelfRef.__PVT__genie_data = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__genie_data;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_TOP____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[4U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_TOP____pinNumber6;
}

void Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__4(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___ico_sequent__TOP__nes_core_top__nes_inst__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__ppu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__cpu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__apu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__ppu__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__cpu__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__apu__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_Dout = (((((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                              | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                             | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[4U]) 
                                          | vlSelfRef.__PVT__SaveStateExt_Dout);
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Dout 
        = vlSelfRef.__PVT__SaveStateBus_Dout;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__0(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gg_avail = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__available;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__1(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__joy_latch = vlSelfRef.__PVT__joy_latch;
    vlSelfRef.__Vdly__last_sys_type = vlSelfRef.__PVT__last_sys_type;
    vlSelfRef.__Vdly__corepause_delay = vlSelfRef.__PVT__corepause_delay;
    vlSelfRef.__Vdly__cpu_tick_count = vlSelfRef.__PVT__cpu_tick_count;
    vlSelfRef.__Vdly__div_sys = vlSelfRef.__PVT__div_sys;
    vlSelfRef.__Vdly__div_ppu_pause = vlSelfRef.__PVT__div_ppu_pause;
    vlSelfRef.__Vdly__faux_pixel_cnt = vlSelfRef.__PVT__faux_pixel_cnt;
    vlSelfRef.__Vdly__div_ppu = vlSelfRef.__PVT__div_ppu;
    vlSelfRef.__Vdly__freeze_clocks = vlSelfRef.__PVT__freeze_clocks;
    vlSelfRef.__Vdly__corepause_active = vlSelfRef.__PVT__corepause_active;
    vlSelfRef.__Vdly__ppu_tick = vlSelfRef.__PVT__ppu_tick;
    vlSelfRef.__Vdly__hold_reset = vlSelfRef.__PVT__hold_reset;
    vlSelfRef.__Vdly__div_cpu = vlSelfRef.__PVT__div_cpu;
    vlSelfRef.__Vdly__odd_or_even = vlSelfRef.__PVT__odd_or_even;
    vlSelfRef.__Vdly__joy_out = vlSelfRef.__PVT__joy_out;
    vlSelfRef.__Vdly__open_bus_data = vlSelfRef.__PVT__open_bus_data;
    vlSelfRef.__Vdly__skip_pause_ce = vlSelfRef.__PVT__skip_pause_ce;
    vlSelfRef.__Vdly__corepause_active_delay = vlSelfRef.__PVT__corepause_active_delay;
    vlSelfRef.__Vdly__bootvector_flag = vlSelfRef.__PVT__bootvector_flag;
    if (vlSelfRef.__PVT__put_ce) {
        vlSelfRef.__Vdly__joy_out = vlSelfRef.__PVT__joy_latch;
    }
    if (((IData)(vlSelfRef.__PVT__joypad1_cs) & (~ (IData)(vlSelfRef.__PVT__cpu_rnw)))) {
        vlSelfRef.__Vdly__joy_latch = (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__cpu_dout), 0U, 3));
        if (vlSelfRef.__PVT__put_ce) {
            vlSelfRef.__Vdly__joy_out = (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__cpu_dout), 0U, 3));
        }
    }
    if (vlSelfRef.__PVT__loading_savestate) {
        vlSelfRef.__Vdly__open_bus_data = (0x000000ffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__SS_TOP, 1U, 8));
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__cpu_ce)))) {
        vlSelfRef.__Vdly__open_bus_data = ((IData)(vlSelfRef.__PVT__mw_int)
                                            ? (IData)(vlSelfRef.__PVT__dbus)
                                            : (IData)(vlSelfRef.__PVT__dma_data_bus));
    }
    if (vlSelfRef.__PVT__reset_nes) {
        vlSelfRef.__Vdly__hold_reset = 1U;
    }
    if (vlSelfRef.__PVT__cpu_ce) {
        vlSelfRef.__Vdly__hold_reset = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__freeze_clocks)) 
               | (3U != (IData)(vlSelfRef.__PVT__div_ppu))))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__skip_ppu_cycle)))) {
            vlSelfRef.__Vdly__div_cpu = (0x0000001fU 
                                         & (((IData)(vlSelfRef.__PVT__cpu_ce) 
                                             | ((IData)(vlSelfRef.__PVT__ppu_ce) 
                                                & (0x0cU 
                                                   < (IData)(vlSelfRef.__PVT__div_cpu))))
                                             ? 1U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__div_cpu))));
        }
        vlSelfRef.__Vdly__div_ppu = (7U & ((IData)(vlSelfRef.__PVT__ppu_ce)
                                            ? 1U : 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__div_ppu))));
        if (vlSelfRef.__PVT__cpu_ce) {
            vlSelfRef.__Vdly__ppu_tick = 0U;
        } else if (vlSelfRef.__PVT__ppu_ce) {
            vlSelfRef.__Vdly__ppu_tick = (3U & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__ppu_tick)));
        }
    }
    if (((IData)(vlSelfRef.__PVT__cpu_ce) & (1U == (IData)(vlSelfRef.__PVT__sys_type)))) {
        vlSelfRef.__Vdly__cpu_tick_count = (7U & ((1U 
                                                   & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__cpu_tick_count), 2U))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__cpu_tick_count))));
    }
    vlSelfRef.__Vdly__div_sys = (3U & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__div_sys)));
    if ((3U == (IData)(vlSelfRef.__PVT__faux_pixel_cnt))) {
        vlSelfRef.__Vdly__freeze_clocks = 0U;
    }
    if (VL_REDOR_I((IData)(vlSelfRef.__PVT__faux_pixel_cnt))) {
        vlSelfRef.__Vdly__faux_pixel_cnt = (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__faux_pixel_cnt) 
                                               - (IData)(1U)));
    }
    if ((((((IData)(vlSelfRef.__PVT__skip_pixel) & 
            (~ (IData)(vlSelfRef.__PVT__corepause_active))) 
           | ((IData)(vlSelfRef.__PVT__skip_pixel_pause) 
              & (IData)(vlSelfRef.__PVT__corepause_active))) 
          & (0U == (IData)(vlSelfRef.__PVT__faux_pixel_cnt))) 
         & (~ (IData)(vlSelfRef.__PVT__dejitter_timing)))) {
        vlSelfRef.__Vdly__freeze_clocks = 1U;
        vlSelfRef.__Vdly__faux_pixel_cnt = 7U;
    }
    if (((IData)(vlSelfRef.__PVT__reset_nes) | (IData)(vlSelfRef.__PVT__hold_reset))) {
        vlSelfRef.__Vdly__bootvector_flag = 1U;
        vlSelfRef.__Vdly__odd_or_even = 1U;
    } else if (vlSelfRef.__PVT__loading_savestate) {
        vlSelfRef.__Vdly__odd_or_even = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__SS_TOP, 0U));
    } else if (vlSelfRef.__PVT__cpu_ce) {
        vlSelfRef.__Vdly__odd_or_even = (1U & (~ (IData)(vlSelfRef.__PVT__odd_or_even)));
        vlSelfRef.__Vdly__bootvector_flag = 0U;
    }
    vlSelfRef.__Vdly__last_sys_type = vlSelfRef.__PVT__sys_type;
    if (((IData)(vlSelfRef.__PVT__last_sys_type) != (IData)(vlSelfRef.__PVT__sys_type))) {
        vlSelfRef.__Vdly__div_cpu = 1U;
        vlSelfRef.__Vdly__div_ppu = 1U;
        vlSelfRef.__Vdly__div_sys = 0U;
        vlSelfRef.__Vdly__cpu_tick_count = 0U;
    }
    if (vlSelfRef.__PVT__ppu_ce_pause) {
        vlSelfRef.__Vdly__skip_pause_ce = 0U;
    }
    if (vlSelfRef.__PVT__reset_nes) {
        vlSelfRef.__Vdly__corepause_active = 0U;
        vlSelfRef.__Vdly__corepause_active_delay = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__corepause_active) 
             | (((((((((IData)(vlSelfRef.__PVT__pausecore) 
                       & (1U == (IData)(vlSelfRef.__PVT__div_cpu))) 
                      & (1U == (IData)(vlSelfRef.__PVT__div_ppu))) 
                     & (0U == (IData)(vlSelfRef.__PVT__div_sys))) 
                    & (0U == (IData)(vlSelfRef.__PVT__cpu_tick_count))) 
                   & (~ (IData)(vlSelfRef.__PVT__freeze_clocks))) 
                  & (IData)(vlSelfRef.__PVT__is_in_vblank_paused)) 
                 & (~ (IData)(vlSelfRef.__PVT__pause_cpu))) 
                & (IData)(vlSelfRef.__PVT__cpu_Instrnew)))) {
            vlSelfRef.__Vdly__div_cpu = 1U;
            vlSelfRef.__Vdly__div_ppu = 1U;
            vlSelfRef.__Vdly__div_sys = 0U;
            vlSelfRef.__Vdly__cpu_tick_count = 0U;
            vlSelfRef.__Vdly__corepause_active = 1U;
            vlSelfRef.__Vdly__div_ppu_pause = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__div_ppu)));
        }
        if (vlSelfRef.__PVT__corepause_active) {
            if ((0xffU > (IData)(vlSelfRef.__PVT__corepause_delay))) {
                vlSelfRef.__Vdly__corepause_delay = 
                    (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__corepause_delay)));
            } else {
                vlSelfRef.__Vdly__corepause_active_delay = 1U;
            }
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__freeze_clocks)) 
                       | (3U != (IData)(vlSelfRef.__PVT__div_ppu_pause))))) {
                vlSelfRef.__Vdly__div_ppu_pause = (7U 
                                                   & ((IData)(vlSelfRef.__PVT__ppu_ce_pause)
                                                       ? 1U
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__div_ppu_pause))));
                if ((((((~ (IData)(vlSelfRef.__PVT__pausecore)) 
                        & (IData)(vlSelfRef.__PVT__ppu_ce_pause)) 
                       & ((IData)(vlSelfRef.__PVT__cycle_paused) 
                          == (IData)(vlSelfRef.__PVT__ppu_cycle))) 
                      & ((IData)(vlSelfRef.__PVT__scanline_paused) 
                         == (IData)(vlSelfRef.__PVT__scanline_ppu))) 
                     & ((IData)(vlSelfRef.__PVT__evenframe) 
                        == (IData)(vlSelfRef.__PVT__evenframe_paused)))) {
                    vlSelfRef.__Vdly__corepause_active = 0U;
                    vlSelfRef.__Vdly__corepause_active_delay = 0U;
                    vlSelfRef.__Vdly__skip_pause_ce = 1U;
                }
            }
        } else {
            vlSelfRef.__Vdly__corepause_delay = 0U;
        }
    }
    vlSelfRef.__PVT__joy_latch = vlSelfRef.__Vdly__joy_latch;
    vlSelfRef.__PVT__joy_out = vlSelfRef.__Vdly__joy_out;
    vlSelfRef.__PVT__open_bus_data = vlSelfRef.__Vdly__open_bus_data;
    vlSelfRef.__PVT__last_sys_type = vlSelfRef.__Vdly__last_sys_type;
    vlSelfRef.__PVT__corepause_delay = vlSelfRef.__Vdly__corepause_delay;
    vlSelfRef.__PVT__cpu_tick_count = vlSelfRef.__Vdly__cpu_tick_count;
    vlSelfRef.__PVT__div_sys = vlSelfRef.__Vdly__div_sys;
    vlSelfRef.__PVT__skip_pause_ce = vlSelfRef.__Vdly__skip_pause_ce;
    vlSelfRef.__PVT__corepause_active_delay = vlSelfRef.__Vdly__corepause_active_delay;
    vlSelfRef.__PVT__div_ppu_pause = vlSelfRef.__Vdly__div_ppu_pause;
    vlSelfRef.__PVT__faux_pixel_cnt = vlSelfRef.__Vdly__faux_pixel_cnt;
    vlSelfRef.__PVT__div_ppu = vlSelfRef.__Vdly__div_ppu;
    vlSelfRef.__PVT__freeze_clocks = vlSelfRef.__Vdly__freeze_clocks;
    vlSelfRef.__PVT__corepause_active = vlSelfRef.__Vdly__corepause_active;
    vlSelfRef.__PVT__ppu_tick = vlSelfRef.__Vdly__ppu_tick;
    vlSelfRef.__PVT__bootvector_flag = vlSelfRef.__Vdly__bootvector_flag;
    vlSelfRef.__PVT__hold_reset = vlSelfRef.__Vdly__hold_reset;
    vlSelfRef.__PVT__div_cpu = vlSelfRef.__Vdly__div_cpu;
    vlSelfRef.__PVT__odd_or_even = vlSelfRef.__Vdly__odd_or_even;
    vlSelfRef.__PVT__joypad_out = vlSelfRef.__PVT__joy_out;
    VL_ASSIGNSEL_QI(64, 8, 1U, vlSelfRef.__PVT__SS_TOP_BACK, vlSelfRef.__PVT__open_bus_data);
    vlSelfRef.__PVT__nes_div = vlSelfRef.__PVT__div_sys;
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__paused 
        = vlSelfRef.__PVT__corepause_active_delay;
    vlSelfRef.__PVT__ppu_ce = (4U == (IData)(vlSelfRef.__PVT__div_ppu));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__paused 
        = vlSelfRef.__PVT__freeze_clocks;
    vlSelfRef.__PVT__use_fake_h = ((IData)(vlSelfRef.__PVT__freeze_clocks) 
                                   & (6U > (IData)(vlSelfRef.__PVT__faux_pixel_cnt)));
    vlSelfRef.__PVT__corepaused = vlSelfRef.__PVT__corepause_active;
    vlSelfRef.__PVT__skip_ppu_cycle = ((4U == (IData)(vlSelfRef.__PVT__cpu_tick_count)) 
                                       & (0U == (IData)(vlSelfRef.__PVT__ppu_tick)));
    vlSelfRef.__PVT__ppu_read = (1U == (IData)(vlSelfRef.__PVT__ppu_tick));
    vlSelfRef.__PVT__ppu_write = (1U == (IData)(vlSelfRef.__PVT__ppu_tick));
    vlSelfRef.__PVT__reset_noSS = (((IData)(vlSelfRef.__PVT__reset_nes) 
                                    | (IData)(vlSelfRef.__PVT__hold_reset)) 
                                   | (IData)(vlSelfRef.__PVT__bootvector_flag));
    vlSelfRef.__PVT__cpu_reset = ((IData)(vlSelfRef.__PVT__reset_ss) 
                                  | (IData)(vlSelfRef.__PVT__hold_reset));
    vlSelfRef.__PVT__cart_ce = (0x0aU == (IData)(vlSelfRef.__PVT__div_cpu));
    vlSelfRef.__PVT__phi2 = ((4U < (IData)(vlSelfRef.__PVT__div_cpu)) 
                             & (0x0cU > (IData)(vlSelfRef.__PVT__div_cpu)));
    vlSelfRef.__PVT__cpu_ce = (0x0cU == (IData)(vlSelfRef.__PVT__div_cpu));
    vlSelfRef.__PVT__cart_pre = ((6U <= (IData)(vlSelfRef.__PVT__div_cpu)) 
                                 & (0x0aU >= (IData)(vlSelfRef.__PVT__div_cpu)));
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__PVT__SS_TOP_BACK, vlSelfRef.__PVT__odd_or_even);
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__get_or_put 
        = vlSelfRef.__PVT__odd_or_even;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__put_cycle 
        = vlSelfRef.__PVT__odd_or_even;
    vlSelfRef.__PVT__ppu_ce_pause = ((IData)(vlSelfRef.__PVT__corepause_active)
                                      ? (4U == (IData)(vlSelfRef.__PVT__div_ppu_pause))
                                      : (IData)(vlSelfRef.__PVT__ppu_ce));
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSelfRef.__Vcellinp__cpu__res_n = (1U & ((~ (IData)(vlSelfRef.__PVT__cpu_reset)) 
                                              & (~ (IData)(vlSelfRef.__PVT__cold_reset))));
    vlSelfRef.__PVT__reset = ((IData)(vlSelfRef.__PVT__cpu_reset) 
                              | (IData)(vlSelfRef.__PVT__bootvector_flag));
    vlSelfRef.__Vcellinp__multi_mapper__ce = ((IData)(vlSelfRef.__PVT__cart_ce) 
                                              & (~ (IData)(vlSelfRef.__PVT__reset_noSS)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__PHI2 
        = vlSelfRef.__PVT__phi2;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__cpu_ce 
        = vlSelfRef.__PVT__cpu_ce;
    vlSelfRef.__PVT__apu_ce = vlSelfRef.__PVT__cpu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__enable 
        = vlSelfRef.__PVT__cpu_ce;
    vlSelfRef.__PVT__refresh = ((IData)(vlSelfRef.__PVT__corepause_active_delay) 
                                & (IData)(vlSelfRef.__PVT__ppu_ce_pause));
    vlSelfRef.__Vcellinp__clockgen_pause__ce = ((IData)(vlSelfRef.__PVT__ppu_ce_pause) 
                                                & (~ (IData)(vlSelfRef.__PVT__skip_pause_ce)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__ce 
        = vlSelfRef.__Vcellinp__multi_mapper__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__ce 
        = vlSelfRef.__PVT__apu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__ce 
        = vlSelfRef.__Vcellinp__clockgen_pause__ce;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__2(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__put_ce = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__put_ce;
    vlSelfRef.__PVT__get_ce = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__get_ce;
    vlSelfRef.__PVT__dma_read = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__read;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__3(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nmi = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__nmi;
    vlSelfRef.__PVT__render_ena = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__render_ena_out;
    vlSelfRef.__PVT__ppu_dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__dout;
    vlSelfRef.__Vcellinp__cpu__NMI_n = (1U & (~ (IData)(vlSelfRef.__PVT__nmi)));
    vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__is_rendering 
        = vlSelfRef.__PVT__render_ena;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__NMI_n 
        = vlSelfRef.__Vcellinp__cpu__NMI_n;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__4(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Savestate_OAMReadData = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__Savestate_OAMReadData;
    vlSelfRef.__PVT__Savestate_RAMReadData = ((0U == (IData)(vlSelfRef.__PVT__Savestate_RAMType))
                                               ? (IData)(vlSelfRef.__PVT__Savestate_OAMReadData)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__Savestate_RAMType))
                                                   ? (IData)(vlSelfRef.__PVT__Savestate_MAPRAMReadData)
                                                   : (IData)(vlSelfRef.__PVT__Savestate_SDRAMReadData)));
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__Save_RAMReadData 
        = vlSelfRef.__PVT__Savestate_RAMReadData;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__5(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apu_dma_addr = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaAddr;
    vlSelfRef.__PVT__apu_dma_request = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaReq;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dmc_dma_addr 
        = vlSelfRef.__PVT__apu_dma_addr;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__6(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dma_data_to_ram = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__data_to_ram;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__7(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__hblank;
    vlSelfRef.__PVT__vsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vsync;
    vlSelfRef.__PVT__hsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__hsync;
    vlSelfRef.__PVT__vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vblank;
    vlSelfRef.__PVT__ppu_cycle = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__cycle;
    vlSelfRef.__PVT__scanline_ppu = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__scanline;
    vlSelfRef.__PVT__skip_pixel = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__short_frame;
    vlSelfRef.__PVT__evenframe = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__evenframe;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__8(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_TOP = vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__Dout;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__9(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cpu_rnw = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__R_W_n;
    vlSelfRef.__PVT__cpu_dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__DO;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__cpu_read 
        = vlSelfRef.__PVT__cpu_rnw;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__RW 
        = vlSelfRef.__PVT__cpu_rnw;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__data_from_cpu 
        = vlSelfRef.__PVT__cpu_dout;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__10(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__cpu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__cpu_Instrnew = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__Instrnew;
    vlSelfRef.__PVT__cpu_addr = vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__A;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__cpu__SaveStateBus_Dout;
    vlSelfRef.__PVT__apu_cs = (0x0200U == (0x000007ffU 
                                           & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__cpu_addr), 5U, 11)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__CS 
        = vlSelfRef.__PVT__apu_cs;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__11(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__skip_pixel_pause = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__short_frame;
    vlSelfRef.__PVT__is_in_vblank_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__is_in_vblank;
    vlSelfRef.__PVT__evenframe_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__evenframe;
    vlSelfRef.__PVT__scanline_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__scanline;
    vlSelfRef.__PVT__cycle_paused = vlSymsp->TOP__nes_core_top__nes_inst__clockgen_pause.__PVT__cycle;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__12(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__ce 
        = vlSelfRef.__PVT__ppu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__reset 
        = vlSelfRef.__PVT__reset_noSS;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__ce 
        = vlSelfRef.__PVT__cpu_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__put_ce 
        = vlSelfRef.__PVT__put_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__get_ce 
        = vlSelfRef.__PVT__get_ce;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__res_n 
        = vlSelfRef.__Vcellinp__cpu__res_n;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__0(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apu_irq = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__IRQ;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__1(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__apu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__apu__SaveStateBus_Dout;
}

void Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__13(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_sequent__TOP__nes_core_top__nes_inst__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dmc_trigger 
        = vlSelfRef.__PVT__apu_dma_request;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__2(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_read = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_r;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_read 
        = vlSelfRef.__PVT__chr_read;
    vlSelfRef.__PVT__ppumem_read = vlSelfRef.__PVT__chr_read;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__3(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__ppu__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__ppu__SaveStateBus_Dout;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__4(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__scanline = ((IData)(vlSelfRef.__PVT__corepause_active)
                                  ? (IData)(vlSelfRef.__PVT__scanline_paused)
                                  : (IData)(vlSelfRef.__PVT__scanline_ppu));
    vlSelfRef.__PVT__cycle = ((IData)(vlSelfRef.__PVT__use_fake_h)
                               ? 0x0154U : ((IData)(vlSelfRef.__PVT__corepause_active)
                                             ? (IData)(vlSelfRef.__PVT__cycle_paused)
                                             : (IData)(vlSelfRef.__PVT__ppu_cycle)));
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__5(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apu_dout = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DOUT;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__6(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pause_cpu = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__pause_cpu;
    vlSelfRef.__Vcellinp__cpu__rdy = (1U & (~ (IData)(vlSelfRef.__PVT__pause_cpu)));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__rdy 
        = vlSelfRef.__Vcellinp__cpu__rdy;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__7(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apu_dma_ack = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dmc_ack;
    vlSelfRef.__PVT__dma_aout = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__aout;
    vlSelfRef.__PVT__dma_aout_enable = vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__aout_enable;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaAck 
        = vlSelfRef.__PVT__apu_dma_ack;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__8(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__8\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_write = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_w;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_write 
        = vlSelfRef.__PVT__chr_write;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__9(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__9\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sample_apu = vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__Sample;
    vlSelfRef.__PVT__sample_inverted = (0x0000ffffU 
                                        & ((IData)(0xffffU) 
                                           - (IData)(vlSelfRef.__PVT__sample_apu)));
    vlSelfRef.__PVT__audio_mappers = ((1U == (IData)(vlSelfRef.__PVT__audio_en))
                                       ? 0U : (IData)(vlSelfRef.__PVT__sample_inverted));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__audio_in 
        = vlSelfRef.__PVT__audio_mappers;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__10(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__10\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mr_int = ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                                ? (IData)(vlSelfRef.__PVT__dma_read)
                                : (IData)(vlSelfRef.__PVT__cpu_rnw));
    vlSelfRef.__PVT__mw_int = (1U & ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                                      ? (~ (IData)(vlSelfRef.__PVT__dma_read))
                                      : (~ (IData)(vlSelfRef.__PVT__cpu_rnw))));
    vlSelfRef.__PVT__dbus = ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                              ? (IData)(vlSelfRef.__PVT__dma_data_to_ram)
                              : (IData)(vlSelfRef.__PVT__cpu_dout));
    vlSelfRef.__PVT__addr = ((IData)(vlSelfRef.__PVT__dma_aout_enable)
                              ? (IData)(vlSelfRef.__PVT__dma_aout)
                              : (IData)(vlSelfRef.__PVT__cpu_addr));
    vlSelfRef.__PVT__mr_ppu = ((IData)(vlSelfRef.__PVT__mr_int) 
                               & (IData)(vlSelfRef.__PVT__ppu_read));
    vlSelfRef.__Vcellinp__ppu__RWn = ((IData)(vlSelfRef.__PVT__mr_int) 
                                      & (~ (IData)(vlSelfRef.__PVT__mw_int)));
    vlSelfRef.__PVT__mw_ppu = ((IData)(vlSelfRef.__PVT__mw_int) 
                               & (IData)(vlSelfRef.__PVT__ppu_write));
    vlSelfRef.__PVT__prg_write = ((IData)(vlSelfRef.__PVT__mw_int) 
                                  & (IData)(vlSelfRef.__PVT__cart_pre));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DIN 
        = vlSelfRef.__PVT__dbus;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__din 
        = vlSelfRef.__PVT__dbus;
    vlSelfRef.__Vcellinp__ppu__cs = ((1U == (7U & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0x0dU, 3))) 
                                     & (IData)(vlSelfRef.__PVT__phi2));
    vlSelfRef.__Vcellinp__dma__sprite_trigger = (((IData)(vlSelfRef.__PVT__apu_cs) 
                                                  & (0x14U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5)))) 
                                                 & (~ (IData)(vlSelfRef.__PVT__cpu_rnw)));
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__addr_in 
        = vlSelfRef.__PVT__addr;
    vlSelfRef.__Vcellinp__apu__ADDR = (0x0000001fU 
                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5));
    vlSelfRef.__PVT__apu_reg_cs = ((IData)(vlSelfRef.__PVT__apu_cs) 
                                   & (0x15U == (0x0000001fU 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5))));
    vlSelfRef.__Vcellinp__ppu__ain = (7U & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 3));
    vlSelfRef.__PVT__joypad1_cs = ((IData)(vlSelfRef.__PVT__apu_cs) 
                                   & (0x16U == (0x0000001fU 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5))));
    vlSelfRef.__PVT__joypad2_cs = ((IData)(vlSelfRef.__PVT__apu_cs) 
                                   & (0x17U == (0x0000001fU 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 0U, 5))));
    vlSelfRef.__PVT__ppu_cs = ((0x2000U <= (IData)(vlSelfRef.__PVT__addr)) 
                               & (0x4000U > (IData)(vlSelfRef.__PVT__addr)));
    vlSelfRef.__PVT__prg_addr = vlSelfRef.__PVT__addr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__RWn 
        = vlSelfRef.__Vcellinp__ppu__RWn;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_write 
        = vlSelfRef.__PVT__prg_write;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__cs 
        = vlSelfRef.__Vcellinp__ppu__cs;
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__sprite_trigger 
        = vlSelfRef.__Vcellinp__dma__sprite_trigger;
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__ADDR 
        = vlSelfRef.__Vcellinp__apu__ADDR;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__ain 
        = vlSelfRef.__Vcellinp__ppu__ain;
    vlSelfRef.__PVT__joypad_clock = VL_CONCAT_III(2,1,1, 
                                                  ((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                                   & (IData)(vlSelfRef.__PVT__cpu_rnw)), 
                                                  ((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                                   & (IData)(vlSelfRef.__PVT__cpu_rnw)));
    vlSelfRef.__PVT__prg_read = ((((IData)(vlSelfRef.__PVT__mr_int) 
                                   & (IData)(vlSelfRef.__PVT__cart_pre)) 
                                  & (0x0200U != (0x000007ffU 
                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__addr), 5U, 11)))) 
                                 & (~ (IData)(vlSelfRef.__PVT__ppu_cs)));
    vlSelfRef.__Vcellinp__ppu__read = ((IData)(vlSelfRef.__PVT__ppu_cs) 
                                       & (IData)(vlSelfRef.__PVT__mr_ppu));
    vlSelfRef.__Vcellinp__ppu__write = ((IData)(vlSelfRef.__PVT__ppu_cs) 
                                        & (IData)(vlSelfRef.__PVT__mw_ppu));
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_ain 
        = vlSelfRef.__PVT__prg_addr;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_read 
        = vlSelfRef.__PVT__prg_read;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__read 
        = vlSelfRef.__Vcellinp__ppu__read;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__write 
        = vlSelfRef.__Vcellinp__ppu__write;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__11(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__11\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_addr_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_a_ex;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_ain_ex 
        = vlSelfRef.__PVT__chr_addr_ex;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__12(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__12\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_read_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_r_ex;
    vlSelfRef.__PVT__chr_addr = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_addr;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_ex 
        = vlSelfRef.__PVT__chr_read_ex;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_ain_orig 
        = vlSelfRef.__PVT__chr_addr;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__13(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__13\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_a10 = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__vram_a10;
    vlSelfRef.__PVT__mapper_has_savestate = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_savestate;
    vlSelfRef.__PVT__bram_addr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_addr;
    vlSelfRef.__PVT__bram_dout = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_data_out;
    vlSelfRef.__PVT__bram_override = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_ovr;
    vlSelfRef.__PVT__diskside = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__diskside;
    vlSelfRef.__PVT__chr_allow = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_allow;
    vlSelfRef.__PVT__vram_ce = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__vram_ce;
    vlSelfRef.__PVT__sample_ext = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__audio;
    vlSelfRef.__PVT__prg_conflict_d0 = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_conflict_d0;
    vlSelfRef.__PVT__bram_write = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__mapper_prg_write;
    vlSelfRef.__PVT__has_flashsaves = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_flashsaves;
    vlSelfRef.__PVT__mapper_irq = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__irq;
    vlSelfRef.__PVT__prg_conflict = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_conflict;
    vlSelfRef.__PVT__chr_from_ppu_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_dout;
    vlSelfRef.__PVT__has_chr_from_ppu_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__has_chr_dout;
    vlSelfRef.__PVT__chr_linaddr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_aout;
    vlSelfRef.__PVT__prg_bus_write = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_bus_write;
    vlSelfRef.__PVT__prg_dout_mapper = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_dout;
    vlSelfRef.__PVT__prg_allow = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_allow;
    vlSelfRef.__PVT__prg_linaddr = vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_aout;
    vlSelfRef.__PVT__ppumem_write = ((IData)(vlSelfRef.__PVT__chr_write) 
                                     & ((IData)(vlSelfRef.__PVT__chr_allow) 
                                        | (IData)(vlSelfRef.__PVT__vram_ce)));
    if ((0U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = 0U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_ext;
    } else if ((2U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_inverted;
    } else if ((3U == (IData)(vlSelfRef.__PVT__audio_en))) {
        vlSelfRef.__PVT__sample_a = vlSelfRef.__PVT__sample_ext;
    }
    vlSelfRef.__PVT__mapper_has_flashsaves = vlSelfRef.__PVT__has_flashsaves;
    vlSelfRef.__PVT__ppumem_addr = vlSelfRef.__PVT__chr_linaddr;
    vlSelfRef.__PVT__cpumem_write = ((IData)(vlSelfRef.__PVT__prg_write) 
                                     & (IData)(vlSelfRef.__PVT__prg_allow));
    vlSelfRef.__PVT__cpumem_read = (((IData)(vlSelfRef.__PVT__prg_read) 
                                     & (IData)(vlSelfRef.__PVT__prg_allow)) 
                                    | ((IData)(vlSelfRef.__PVT__prg_write) 
                                       & (IData)(vlSelfRef.__PVT__prg_conflict)));
    vlSelfRef.__PVT__save_written = ((IData)(vlSelfRef.__PVT__has_flashsaves)
                                      ? (((~ VL_BITSEL_IIII(25, vlSelfRef.__PVT__prg_linaddr, 0x18U)) 
                                          & (IData)(vlSelfRef.__PVT__prg_write)) 
                                         & (IData)(vlSelfRef.__PVT__prg_allow))
                                      : ((0x14U == 
                                          (0x000000ffU 
                                           & VL_SEL_IQII(64, vlSelfRef.__PVT__mapper_flags, 0U, 8)))
                                          ? (((0x0fU 
                                               == (0x0000000fU 
                                                   & VL_SEL_IIII(25, vlSelfRef.__PVT__prg_linaddr, 0x12U, 4))) 
                                              & (IData)(vlSelfRef.__PVT__prg_write)) 
                                             & (IData)(vlSelfRef.__PVT__prg_allow))
                                          : (((3U == 
                                               (7U 
                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_addr), 0x0dU, 3))) 
                                              & (IData)(vlSelfRef.__PVT__prg_write)) 
                                             | (IData)(vlSelfRef.__PVT__bram_write))));
    vlSelfRef.__PVT__cpumem_addr = vlSelfRef.__PVT__prg_linaddr;
    vlSelfRef.__PVT__sample = vlSelfRef.__PVT__sample_a;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__14(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__14\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__cpu__IRQ_n = (1U & (~ ((IData)(vlSelfRef.__PVT__apu_irq) 
                                                 | (IData)(vlSelfRef.__PVT__mapper_irq))));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__IRQ_n 
        = vlSelfRef.__Vcellinp__cpu__IRQ_n;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__15(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__15\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_to_ppu = ((IData)(vlSelfRef.__PVT__has_chr_from_ppu_mapper)
                                    ? (IData)(vlSelfRef.__PVT__chr_from_ppu_mapper)
                                    : (IData)(vlSelfRef.__PVT__ppumem_din));
    vlSelfRef.__PVT__prg_din = (((IData)(vlSelfRef.__PVT__dbus) 
                                 & ((IData)(vlSelfRef.__PVT__prg_conflict)
                                     ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                     : 0xffU)) | ((IData)(vlSelfRef.__PVT__prg_conflict_d0)
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__cpumem_din))
                                                   : 0U));
    vlSelfRef.__Vcellinp__codes__data_in = ((IData)(vlSelfRef.__PVT__prg_allow)
                                             ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                             : (IData)(vlSelfRef.__PVT__prg_dout_mapper));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_dbus_in 
        = vlSelfRef.__PVT__chr_to_ppu;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_din 
        = vlSelfRef.__PVT__prg_din;
    vlSelfRef.__PVT__cpumem_dout = vlSelfRef.__PVT__prg_din;
    vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__data_in 
        = vlSelfRef.__Vcellinp__codes__data_in;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__16(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__16\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__emphasis = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__emphasis;
    vlSelfRef.__PVT__chr_from_ppu = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__vram_dout;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__chr_din 
        = vlSelfRef.__PVT__chr_from_ppu;
    vlSelfRef.__PVT__ppumem_dout = vlSelfRef.__PVT__chr_from_ppu;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__17(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__17\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__color = vlSymsp->TOP__nes_core_top__nes_inst__ppu.__PVT__color;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__18(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__18\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__external_data_bus = (0x000000ffU 
                                          & ((IData)(vlSelfRef.__PVT__reset)
                                              ? VL_SEL_IQII(64, vlSelfRef.__PVT__SS_TOP, 9U, 8)
                                              : (((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                                  & (~ (IData)(vlSelfRef.__PVT__dma_aout_enable)))
                                                  ? 
                                                 VL_CONCAT_III(8,3,5, 
                                                               (7U 
                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__open_bus_data), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad1_data))
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                                   & (~ (IData)(vlSelfRef.__PVT__dma_aout_enable)))
                                                   ? 
                                                  VL_CONCAT_III(8,3,5, 
                                                                (7U 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__open_bus_data), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad2_data))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__ppu_cs)
                                                    ? (IData)(vlSelfRef.__PVT__ppu_dout)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__prg_allow)
                                                     ? (IData)(vlSelfRef.__PVT__cpumem_din)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__prg_bus_write)
                                                      ? (IData)(vlSelfRef.__PVT__prg_dout_mapper)
                                                      : (IData)(vlSelfRef.__PVT__open_bus_data))))))));
    VL_ASSIGNSEL_QI(64, 8, 9U, vlSelfRef.__PVT__SS_TOP_BACK, vlSelfRef.__PVT__external_data_bus);
    vlSelfRef.__PVT__from_data_bus = vlSelfRef.__PVT__external_data_bus;
    vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__Din 
        = vlSelfRef.__PVT__SS_TOP_BACK;
    vlSymsp->TOP__nes_core_top__nes_inst__multi_mapper.__PVT__prg_from_ram 
        = vlSelfRef.__PVT__from_data_bus;
    vlSelfRef.__PVT__dma_data_bus = (((IData)(vlSelfRef.__PVT__joypad1_cs) 
                                      & (IData)(vlSelfRef.__PVT__dma_aout_enable))
                                      ? VL_CONCAT_III(8,3,5, 
                                                      (7U 
                                                       & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad1_data))
                                      : (((IData)(vlSelfRef.__PVT__joypad2_cs) 
                                          & (IData)(vlSelfRef.__PVT__dma_aout_enable))
                                          ? VL_CONCAT_III(8,3,5, 
                                                          (7U 
                                                           & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U, 3)), (IData)(vlSelfRef.__PVT__joypad2_data))
                                          : (IData)(vlSelfRef.__PVT__from_data_bus)));
    vlSymsp->TOP__nes_core_top__nes_inst__apu.__PVT__DmaData 
        = vlSelfRef.__PVT__dma_data_bus;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__19(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__19\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_TOP____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__iREG_SAVESTATE_TOP.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[4U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_TOP____pinNumber6;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__20(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__20\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__genie_ovr = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__genie_ovr;
    vlSelfRef.__PVT__genie_data = vlSymsp->TOP__nes_core_top__nes_inst__codes.__PVT__genie_data;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__21(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__21\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apu_reg_value = VL_CONCAT_III(8,2,6, 
                                                   (3U 
                                                    & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__apu_dout), 6U, 2)), 
                                                   VL_CONCAT_III(6,1,5, 
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__from_data_bus), 5U)), 
                                                                 (0x0000001fU 
                                                                  & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__apu_dout), 0U, 5))));
    vlSelfRef.__PVT__internal_data_bus = ((IData)(vlSelfRef.__PVT__apu_reg_cs)
                                           ? (IData)(vlSelfRef.__PVT__apu_reg_value)
                                           : (IData)(vlSelfRef.__PVT__from_data_bus));
    vlSymsp->TOP__nes_core_top__nes_inst__dma.__PVT__dma_data_to_ram 
        = vlSelfRef.__PVT__internal_data_bus;
    vlSelfRef.__Vcellinp__cpu__DI = ((IData)(vlSelfRef.__PVT__cpu_rnw)
                                      ? (IData)(vlSelfRef.__PVT__internal_data_bus)
                                      : (IData)(vlSelfRef.__PVT__cpu_dout));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu.__PVT__DI 
        = vlSelfRef.__Vcellinp__cpu__DI;
}

void Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__22(Vnes_core_top_NES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnes_core_top_NES___nba_comb__TOP__nes_core_top__nes_inst__22\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = (((((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                              | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                             | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[4U]) 
                                          | vlSelfRef.__PVT__SaveStateExt_Dout);
    vlSymsp->TOP__nes_core_top__nes_inst__savestates.__PVT__BUS_Dout 
        = vlSelfRef.__PVT__SaveStateBus_Dout;
}
