// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_cart_top___ico_sequent__TOP__nes_core_top__nes_inst__multi_mapper__0(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___ico_sequent__TOP__nes_core_top__nes_inst__multi_mapper__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mirroring_vertical = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__flags, 0x0eU));
    vlSelfRef.__PVT__chr_is_ram = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__flags, 0x0fU));
    vlSelfRef.__PVT__mapper_num = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__flags, 0U, 8));
    vlSelfRef.__PVT__prg_16k = (0U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__flags, 8U, 3)));
    vlSelfRef.__PVT__mapper0 = (0U == (IData)(vlSelfRef.__PVT__mapper_num));
    vlSelfRef.__PVT__prg_idx = (0x00003fffU & ((IData)(vlSelfRef.__PVT__prg_16k)
                                                ? VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__prg_offs), 0U, 14)
                                                : VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__prg_offs), 1U, 14)));
    vlSelfRef.__PVT__prg_rom_byte = ((IData)(vlSelfRef.__PVT__prg_16k)
                                      ? vlSelfRef.__PVT__prg_rom
                                     [VL_EXTEND_II(15,14, 
                                                   (0x00003fffU 
                                                    & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__prg_offs), 0U, 14)))]
                                      : vlSelfRef.__PVT__prg_rom
                                     [vlSelfRef.__PVT__prg_offs]);
    vlSelfRef.__PVT__prg_aout = 0U;
    vlSelfRef.__PVT__prg_dout = 0xffU;
    vlSelfRef.__PVT__prg_allow = 0U;
    vlSelfRef.__PVT__prg_bus_write = 0U;
    vlSelfRef.__PVT__prg_conflict = 0U;
    vlSelfRef.__PVT__has_savestate = 0U;
    vlSelfRef.__PVT__prg_conflict_d0 = 0U;
    vlSelfRef.__PVT__has_flashsaves = 0U;
    vlSelfRef.__PVT__chr_aout = 0U;
    vlSelfRef.__PVT__chr_dout = 0U;
    vlSelfRef.__PVT__has_chr_dout = 0U;
    vlSelfRef.__PVT__chr_allow = 0U;
    vlSelfRef.__PVT__vram_a10 = (1U & ((IData)(vlSelfRef.__PVT__mirroring_vertical)
                                        ? VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0aU)
                                        : VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0bU)));
    vlSelfRef.__PVT__vram_ce = (1U & VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0dU));
    vlSelfRef.__PVT__mapper_addr = 0U;
    vlSelfRef.__PVT__mapper_data_out = 0U;
    vlSelfRef.__PVT__mapper_prg_write = 0U;
    vlSelfRef.__PVT__mapper_ovr = 0U;
    vlSelfRef.__PVT__irq = 0U;
    vlSelfRef.__PVT__audio = vlSelfRef.__PVT__audio_in;
    vlSelfRef.__PVT__diskside = 0U;
    vlSelfRef.__PVT__dbg_prg_rom_byte = vlSelfRef.__PVT__prg_rom_byte;
    vlSelfRef.__PVT__dbg_chr_rom_byte = vlSelfRef.__PVT__chr_rom_byte;
    vlSelfRef.__PVT__dbg_mapper0_prg_hit = 0U;
    vlSelfRef.__PVT__dbg_mapper0_chr_hit = 0U;
    vlSelfRef.__PVT__dbg_chr_is_ram = vlSelfRef.__PVT__chr_is_ram;
    if ((0x2000U > (IData)(vlSelfRef.__PVT__prg_ain))) {
        vlSelfRef.__PVT__prg_aout = VL_EXTEND_II(25,22, 
                                                 VL_CONCAT_III(22,11,11, 0x0700U, 
                                                               (0x000007ffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 11))));
        vlSelfRef.__PVT__prg_allow = 1U;
    } else if ((0x8000U <= (IData)(vlSelfRef.__PVT__prg_ain))) {
        vlSelfRef.__PVT__prg_aout = VL_EXTEND_II(25,21, 
                                                 ((IData)(vlSelfRef.__PVT__prg_16k)
                                                   ? 
                                                  VL_EXTEND_II(21,14, 
                                                               (0x00003fffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 14)))
                                                   : 
                                                  VL_EXTEND_II(21,15, 
                                                               (0x00007fffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 15)))));
        vlSelfRef.__PVT__prg_allow = (1U & (~ (IData)(vlSelfRef.__PVT__prg_write)));
        vlSelfRef.__PVT__dbg_mapper0_prg_hit = vlSelfRef.__PVT__mapper0;
    } else if ((0x6000U <= (IData)(vlSelfRef.__PVT__prg_ain))) {
        vlSelfRef.__PVT__prg_aout = VL_CONCAT_III(25,14,11, 0x3c00U, 
                                                  (0x000007ffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 11)));
        vlSelfRef.__PVT__prg_allow = 1U;
    }
    if ((1U & VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0dU))) {
        vlSelfRef.__PVT__chr_aout = VL_CONCAT_III(22,11,11, 0x0600U, 
                                                  VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__vram_a10), 
                                                                (0x000003ffU 
                                                                 & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0U, 10))));
        vlSelfRef.__PVT__chr_allow = 1U;
        vlSelfRef.__PVT__vram_ce = 1U;
    } else if (((IData)(vlSelfRef.__PVT__mapper0) & 
                (~ (IData)(vlSelfRef.__PVT__chr_is_ram)))) {
        vlSelfRef.__PVT__has_chr_dout = 1U;
        vlSelfRef.__PVT__chr_dout = vlSelfRef.__PVT__chr_rom_byte;
        vlSelfRef.__PVT__chr_allow = 0U;
        vlSelfRef.__PVT__vram_ce = 0U;
        vlSelfRef.__PVT__dbg_mapper0_chr_hit = 1U;
    } else {
        vlSelfRef.__PVT__chr_aout = VL_CONCAT_III(22,8,14, 0x80U, (IData)(vlSelfRef.__PVT__chr_ain));
        vlSelfRef.__PVT__chr_allow = vlSelfRef.__PVT__chr_is_ram;
        vlSelfRef.__PVT__vram_ce = 0U;
    }
    if ((0U != (IData)(vlSelfRef.__PVT__mapper_num))) {
        vlSelfRef.__PVT__prg_allow = (0x2000U > (IData)(vlSelfRef.__PVT__prg_ain));
        if ((0x2000U > (IData)(vlSelfRef.__PVT__prg_ain))) {
            vlSelfRef.__PVT__prg_aout = VL_EXTEND_II(25,22, 
                                                     VL_CONCAT_III(22,11,11, 0x0700U, 
                                                                   (0x000007ffU 
                                                                    & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 11))));
        }
        vlSelfRef.__PVT__chr_allow = 0U;
    }
}

void Vnes_core_top_cart_top___nba_comb__TOP__nes_core_top__nes_inst__multi_mapper__0(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___nba_comb__TOP__nes_core_top__nes_inst__multi_mapper__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__prg_offs = (0x00007fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 15));
    vlSelfRef.__PVT__prg_idx = (0x00003fffU & ((IData)(vlSelfRef.__PVT__prg_16k)
                                                ? VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__prg_offs), 0U, 14)
                                                : VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__prg_offs), 1U, 14)));
    vlSelfRef.__PVT__prg_rom_byte = ((IData)(vlSelfRef.__PVT__prg_16k)
                                      ? vlSelfRef.__PVT__prg_rom
                                     [VL_EXTEND_II(15,14, 
                                                   (0x00003fffU 
                                                    & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__prg_offs), 0U, 14)))]
                                      : vlSelfRef.__PVT__prg_rom
                                     [vlSelfRef.__PVT__prg_offs]);
}

void Vnes_core_top_cart_top___nba_comb__TOP__nes_core_top__nes_inst__multi_mapper__1(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___nba_comb__TOP__nes_core_top__nes_inst__multi_mapper__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_ain = ((IData)(vlSelfRef.__PVT__chr_ex)
                                 ? (IData)(vlSelfRef.__PVT__chr_ain_ex)
                                 : (IData)(vlSelfRef.__PVT__chr_ain_orig));
    vlSelfRef.__PVT__chr_rom_byte = vlSelfRef.__PVT__chr_rom
        [(0x00001fffU & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0U, 13))];
}

void Vnes_core_top_cart_top___nba_comb__TOP__nes_core_top__nes_inst__multi_mapper__2(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___nba_comb__TOP__nes_core_top__nes_inst__multi_mapper__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__prg_aout = 0U;
    vlSelfRef.__PVT__prg_dout = 0xffU;
    vlSelfRef.__PVT__prg_allow = 0U;
    vlSelfRef.__PVT__prg_bus_write = 0U;
    vlSelfRef.__PVT__prg_conflict = 0U;
    vlSelfRef.__PVT__has_savestate = 0U;
    vlSelfRef.__PVT__prg_conflict_d0 = 0U;
    vlSelfRef.__PVT__has_flashsaves = 0U;
    vlSelfRef.__PVT__chr_aout = 0U;
    vlSelfRef.__PVT__chr_dout = 0U;
    vlSelfRef.__PVT__has_chr_dout = 0U;
    vlSelfRef.__PVT__chr_allow = 0U;
    vlSelfRef.__PVT__vram_a10 = (1U & ((IData)(vlSelfRef.__PVT__mirroring_vertical)
                                        ? VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0aU)
                                        : VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0bU)));
    vlSelfRef.__PVT__vram_ce = (1U & VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0dU));
    vlSelfRef.__PVT__mapper_addr = 0U;
    vlSelfRef.__PVT__mapper_data_out = 0U;
    vlSelfRef.__PVT__mapper_prg_write = 0U;
    vlSelfRef.__PVT__mapper_ovr = 0U;
    vlSelfRef.__PVT__irq = 0U;
    vlSelfRef.__PVT__audio = vlSelfRef.__PVT__audio_in;
    vlSelfRef.__PVT__diskside = 0U;
    vlSelfRef.__PVT__dbg_prg_rom_byte = vlSelfRef.__PVT__prg_rom_byte;
    vlSelfRef.__PVT__dbg_chr_rom_byte = vlSelfRef.__PVT__chr_rom_byte;
    vlSelfRef.__PVT__dbg_mapper0_prg_hit = 0U;
    vlSelfRef.__PVT__dbg_mapper0_chr_hit = 0U;
    vlSelfRef.__PVT__dbg_chr_is_ram = vlSelfRef.__PVT__chr_is_ram;
    if ((0x2000U > (IData)(vlSelfRef.__PVT__prg_ain))) {
        vlSelfRef.__PVT__prg_aout = VL_EXTEND_II(25,22, 
                                                 VL_CONCAT_III(22,11,11, 0x0700U, 
                                                               (0x000007ffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 11))));
        vlSelfRef.__PVT__prg_allow = 1U;
    } else if ((0x8000U <= (IData)(vlSelfRef.__PVT__prg_ain))) {
        vlSelfRef.__PVT__prg_aout = VL_EXTEND_II(25,21, 
                                                 ((IData)(vlSelfRef.__PVT__prg_16k)
                                                   ? 
                                                  VL_EXTEND_II(21,14, 
                                                               (0x00003fffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 14)))
                                                   : 
                                                  VL_EXTEND_II(21,15, 
                                                               (0x00007fffU 
                                                                & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 15)))));
        vlSelfRef.__PVT__prg_allow = (1U & (~ (IData)(vlSelfRef.__PVT__prg_write)));
        vlSelfRef.__PVT__dbg_mapper0_prg_hit = vlSelfRef.__PVT__mapper0;
    } else if ((0x6000U <= (IData)(vlSelfRef.__PVT__prg_ain))) {
        vlSelfRef.__PVT__prg_aout = VL_CONCAT_III(25,14,11, 0x3c00U, 
                                                  (0x000007ffU 
                                                   & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 11)));
        vlSelfRef.__PVT__prg_allow = 1U;
    }
    if ((1U & VL_BITSEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0x0dU))) {
        vlSelfRef.__PVT__chr_aout = VL_CONCAT_III(22,11,11, 0x0600U, 
                                                  VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__vram_a10), 
                                                                (0x000003ffU 
                                                                 & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0U, 10))));
        vlSelfRef.__PVT__chr_allow = 1U;
        vlSelfRef.__PVT__vram_ce = 1U;
    } else if (((IData)(vlSelfRef.__PVT__mapper0) & 
                (~ (IData)(vlSelfRef.__PVT__chr_is_ram)))) {
        vlSelfRef.__PVT__has_chr_dout = 1U;
        vlSelfRef.__PVT__chr_dout = vlSelfRef.__PVT__chr_rom_byte;
        vlSelfRef.__PVT__chr_allow = 0U;
        vlSelfRef.__PVT__vram_ce = 0U;
        vlSelfRef.__PVT__dbg_mapper0_chr_hit = 1U;
    } else {
        vlSelfRef.__PVT__chr_aout = VL_CONCAT_III(22,8,14, 0x80U, (IData)(vlSelfRef.__PVT__chr_ain));
        vlSelfRef.__PVT__chr_allow = vlSelfRef.__PVT__chr_is_ram;
        vlSelfRef.__PVT__vram_ce = 0U;
    }
    if ((0U != (IData)(vlSelfRef.__PVT__mapper_num))) {
        vlSelfRef.__PVT__prg_allow = (0x2000U > (IData)(vlSelfRef.__PVT__prg_ain));
        if ((0x2000U > (IData)(vlSelfRef.__PVT__prg_ain))) {
            vlSelfRef.__PVT__prg_aout = VL_EXTEND_II(25,22, 
                                                     VL_CONCAT_III(22,11,11, 0x0700U, 
                                                                   (0x000007ffU 
                                                                    & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__prg_ain), 0U, 11))));
        }
        vlSelfRef.__PVT__chr_allow = 0U;
    }
}
