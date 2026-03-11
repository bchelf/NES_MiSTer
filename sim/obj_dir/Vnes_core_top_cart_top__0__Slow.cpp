// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_cart_top___eval_initial__TOP__nes_core_top__nes_inst__multi_mapper(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___eval_initial__TOP__nes_core_top__nes_inst__multi_mapper\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = 0ULL;
    vlSelfRef.__PVT__Savestate_MAPRAMReadData = 0U;
    vlSelfRef.__PVT___unused_ok = 0U;
}

VL_ATTR_COLD void Vnes_core_top_cart_top___stl_sequent__TOP__nes_core_top__nes_inst__multi_mapper__0(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___stl_sequent__TOP__nes_core_top__nes_inst__multi_mapper__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mirroring_vertical = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__flags, 0x0eU));
    vlSelfRef.__PVT__chr_is_ram = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__flags, 0x0fU));
    vlSelfRef.__PVT__mapper_num = (0x000000ffU & VL_SEL_IQII(64, vlSelfRef.__PVT__flags, 0U, 8));
    vlSelfRef.__PVT__prg_16k = (0U == (7U & VL_SEL_IQII(64, vlSelfRef.__PVT__flags, 8U, 3)));
    vlSelfRef.__PVT__mapper0 = (0U == (IData)(vlSelfRef.__PVT__mapper_num));
}

VL_ATTR_COLD void Vnes_core_top_cart_top___stl_sequent__TOP__nes_core_top__nes_inst__multi_mapper__1(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___stl_sequent__TOP__nes_core_top__nes_inst__multi_mapper__1\n"); );
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

VL_ATTR_COLD void Vnes_core_top_cart_top___stl_sequent__TOP__nes_core_top__nes_inst__multi_mapper__2(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___stl_sequent__TOP__nes_core_top__nes_inst__multi_mapper__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chr_ain = ((IData)(vlSelfRef.__PVT__chr_ex)
                                 ? (IData)(vlSelfRef.__PVT__chr_ain_ex)
                                 : (IData)(vlSelfRef.__PVT__chr_ain_orig));
    vlSelfRef.__PVT__chr_rom_byte = vlSelfRef.__PVT__chr_rom
        [(0x00001fffU & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__chr_ain), 0U, 13))];
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

VL_ATTR_COLD void Vnes_core_top_cart_top___ctor_var_reset(Vnes_core_top_cart_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_cart_top___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__cpu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668535522681808478ull);
    vlSelf->__PVT__paused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5573556597431404773ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__flags = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7921719909686688401ull);
    vlSelf->__PVT__prg_ain = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10958784662372374350ull);
    vlSelf->__PVT__prg_aout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11597014243603202155ull);
    vlSelf->__PVT__prg_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851513205751821558ull);
    vlSelf->__PVT__prg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2252266799405555228ull);
    vlSelf->__PVT__prg_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4430254572038706230ull);
    vlSelf->__PVT__prg_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15623580566783705339ull);
    vlSelf->__PVT__prg_from_ram = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2290419219254540950ull);
    vlSelf->__PVT__prg_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729877762311282252ull);
    vlSelf->__PVT__prg_bus_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 999133541473202864ull);
    vlSelf->__PVT__prg_conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376108461598133527ull);
    vlSelf->__PVT__has_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3278806972379493713ull);
    vlSelf->__PVT__prg_conflict_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4745699886316196742ull);
    vlSelf->__PVT__has_flashsaves = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11423871626191891505ull);
    vlSelf->__PVT__prg_mask = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17880926985789218452ull);
    vlSelf->__PVT__chr_mask = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6258872983445368596ull);
    vlSelf->__PVT__chr_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10858074079588974204ull);
    vlSelf->__PVT__chr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14589331528117138436ull);
    vlSelf->__PVT__chr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10916681796329076040ull);
    vlSelf->__PVT__chr_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12513276900816070692ull);
    vlSelf->__PVT__chr_ain_orig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9922870838703601628ull);
    vlSelf->__PVT__chr_ain_ex = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13325090961434315838ull);
    vlSelf->__PVT__chr_aout = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5084480785350933988ull);
    vlSelf->__PVT__chr_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16931427975003136523ull);
    vlSelf->__PVT__has_chr_dout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4240921810140541979ull);
    vlSelf->__PVT__chr_allow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14221669999169248403ull);
    vlSelf->__PVT__vram_a10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10198815525948894885ull);
    vlSelf->__PVT__vram_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17131660032944699880ull);
    vlSelf->__PVT__mapper_addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6870630895223450072ull);
    vlSelf->__PVT__mapper_data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16705570406842601633ull);
    vlSelf->__PVT__mapper_data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17410956635754611601ull);
    vlSelf->__PVT__mapper_prg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1093738395807910907ull);
    vlSelf->__PVT__mapper_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 330828713100500398ull);
    vlSelf->__PVT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145092342636110857ull);
    vlSelf->__PVT__audio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5517347287908032381ull);
    vlSelf->__PVT__audio = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15808669430542691865ull);
    vlSelf->__PVT__diskside = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14453812024835779944ull);
    vlSelf->__PVT__fds_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14082033140487425350ull);
    vlSelf->__PVT__fds_eject = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8855700390889327706ull);
    vlSelf->__PVT__fds_auto_eject = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6830451990629182503ull);
    vlSelf->__PVT__max_diskside = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6148179546198233061ull);
    vlSelf->__PVT__fds_fast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3155636354892996366ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = 0U;
    ;
    vlSelf->__PVT__Savestate_MAPRAMactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3785319032713785414ull);
    vlSelf->__PVT__Savestate_MAPRAMAddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5648909781909128907ull);
    vlSelf->__PVT__Savestate_MAPRAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11343271571960599525ull);
    vlSelf->__PVT__Savestate_MAPRAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13031227993117237279ull);
    vlSelf->__PVT__Savestate_MAPRAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15729642974767438807ull);
    vlSelf->__PVT__Savestate_MAPRAMReadData = 0U;
    ;
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->__PVT__prg_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9258659434245489437ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__chr_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15277888043624747219ull);
    }
    vlSelf->__PVT__chr_ain = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5171144221538785404ull);
    vlSelf->__PVT__mirroring_vertical = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9895854333454314415ull);
    vlSelf->__PVT__chr_is_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13858363114570328535ull);
    vlSelf->__PVT__mapper_num = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11198790919869205861ull);
    vlSelf->__PVT__prg_16k = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5633642990847776242ull);
    vlSelf->__PVT__mapper0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6343497123860650121ull);
    vlSelf->__PVT__prg_offs = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9545903767702169992ull);
    vlSelf->__PVT__prg_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11108985392136356962ull);
    vlSelf->__PVT__prg_rom_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2412136986859226193ull);
    vlSelf->__PVT__chr_rom_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7521859784969751920ull);
    vlSelf->__PVT__dbg_prg_rom_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11497778429327510300ull);
    vlSelf->__PVT__dbg_chr_rom_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1582297748361162177ull);
    vlSelf->__PVT__dbg_mapper0_prg_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15972432874779595318ull);
    vlSelf->__PVT__dbg_mapper0_chr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14719136972135419011ull);
    vlSelf->__PVT__dbg_chr_is_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3492521315163198256ull);
    vlSelf->__PVT___unused_ok = 0U;
    ;
}
