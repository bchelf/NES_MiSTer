// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top___024root___eval_triggers_vec__ico(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_triggers_vec__ico\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vnes_core_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*7:0*/, 256> Vnes_core_top__ConstPool__TABLE_hc1b97178_0;

void Vnes_core_top___024root___ico_sequent__TOP__0(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___ico_sequent__TOP__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ nes_core_top__DOT__cpumem_din;
    nes_core_top__DOT__cpumem_din = 0;
    CData/*7:0*/ nes_core_top__DOT__ppumem_din;
    nes_core_top__DOT__ppumem_din = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__prg_allow;
    nes_core_top__DOT__nes_inst__DOT__prg_allow = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__vram_a10;
    nes_core_top__DOT__nes_inst__DOT__vram_a10 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__chr_allow;
    nes_core_top__DOT__nes_inst__DOT__chr_allow = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__external_data_bus;
    nes_core_top__DOT__nes_inst__DOT__external_data_bus = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728 = 0;
    CData/*7:0*/ __VdfgRegularize_h4af1c392_0_7;
    __VdfgRegularize_h4af1c392_0_7 = 0;
    CData/*7:0*/ __Vtableidx163;
    __Vtableidx163 = 0;
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n540 
        = ((((IData)(vlSelfRef.reset) ? 0U : (0x000000ffU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913) 
                                                 >> 8U))) 
            << 8U) | ((IData)(vlSelfRef.reset) ? 0U
                       : (0x000000ffU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928) 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n542 
        = ((((IData)(vlSelfRef.reset) ? 0U : (0x000000ffU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914) 
                                                 >> 8U))) 
            << 8U) | ((IData)(vlSelfRef.reset) ? 0U
                       : (0x000000ffU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932) 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n544 
        = ((((IData)(vlSelfRef.reset) ? 0U : (0x000000ffU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915) 
                                                 >> 8U))) 
            << 8U) | ((IData)(vlSelfRef.reset) ? 0U
                       : (0x000000ffU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933) 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS 
        = ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag) 
                                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0 
        = (IData)((0ULL == (0x00000000000080ffULL & vlSelfRef.mapper_flags_in)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr = 0U;
    if ((0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
            = (0x00380000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
        nes_core_top__DOT__nes_inst__DOT__prg_allow = 0U;
        nes_core_top__DOT__nes_inst__DOT__prg_allow = 1U;
    } else {
        nes_core_top__DOT__nes_inst__DOT__prg_allow = 0U;
        if ((0x8000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
                = ((0U == (7U & (IData)((vlSelfRef.mapper_flags_in 
                                         >> 8U)))) ? 
                   (0x00003fffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))
                    : (0x00007fffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
            nes_core_top__DOT__nes_inst__DOT__prg_allow 
                = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_write)));
        } else if ((0x6000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
                = (0x01e00000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
            nes_core_top__DOT__nes_inst__DOT__prg_allow = 1U;
        }
    }
    vlSelfRef.dbg_reset_noSS = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS;
    nes_core_top__DOT__nes_inst__DOT__chr_allow = (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                                                       >> 0x0000000dU)) 
                                                   || ((1U 
                                                        & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.mapper_flags_in 
                                                                      >> 0x0000000fU)))));
    if ((0U != (0x000000ffU & (IData)(vlSelfRef.mapper_flags_in)))) {
        if ((0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
                = (0x00380000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
            nes_core_top__DOT__nes_inst__DOT__prg_allow = 1U;
        } else {
            nes_core_top__DOT__nes_inst__DOT__prg_allow = 0U;
        }
        nes_core_top__DOT__nes_inst__DOT__chr_allow = 0U;
    }
    nes_core_top__DOT__nes_inst__DOT__vram_a10 = (1U 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.mapper_flags_in 
                                                                 >> 0x0000000eU)))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                                                      >> 0x0000000aU)
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                                                      >> 0x0000000bU)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr 
        = ((0x00002000U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a))
            ? (0x00300000U | (((IData)(nes_core_top__DOT__nes_inst__DOT__vram_a10) 
                               << 0x0000000aU) | (0x000003ffU 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain))))
            : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0)
                ? (0x00200000U | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain))
                : (0x00200000U | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset)) 
                 & (~ (IData)(vlSelfRef.reset))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag));
    vlSelfRef.dbg_cpumem_addr = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr;
    nes_core_top__DOT__cpumem_din = 0U;
    if ((0x00008000U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)) {
        nes_core_top__DOT__cpumem_din = vlSelfRef.nes_core_top__DOT__prg_rom
            [(0x00007fffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)];
    } else if (((0x00380000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
                & (0x00380800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))) {
        nes_core_top__DOT__cpumem_din = vlSelfRef.nes_core_top__DOT__cpu_ram
            [(0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)];
    } else if (((0x001e0000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
                & (0x001e0800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))) {
        nes_core_top__DOT__cpumem_din = vlSelfRef.nes_core_top__DOT__cart_ram
            [(0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)];
    }
    vlSelfRef.dbg_cpumem_read = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int) 
                                 & ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs) 
                                        | (0x0200U 
                                           == (0x000007ffU 
                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr) 
                                                  >> 5U))))) 
                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cart_pre) 
                                       & (IData)(nes_core_top__DOT__nes_inst__DOT__prg_allow))));
    vlSelfRef.nes_core_top__DOT__cpumem_write = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_write) 
                                                 & (IData)(nes_core_top__DOT__nes_inst__DOT__prg_allow));
    vlSelfRef.nes_core_top__DOT__ppumem_write = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_write) 
                                                 & ((IData)(nes_core_top__DOT__nes_inst__DOT__chr_allow) 
                                                    | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__vram_ce)));
    vlSelfRef.dbg_ppumem_addr = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr;
    nes_core_top__DOT__ppumem_din = 0U;
    if (((0x00300000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
         & (0x00300800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))) {
        nes_core_top__DOT__ppumem_din = vlSelfRef.nes_core_top__DOT__ciram
            [(0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr)];
    } else if (((0x00200000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
                & (0x00204000U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))) {
        nes_core_top__DOT__ppumem_din = vlSelfRef.nes_core_top__DOT__chr_rom
            [(0x00001fffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr)];
    }
    nes_core_top__DOT__nes_inst__DOT__external_data_bus 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset)
            ? 0U : (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)) 
                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs))
                     ? ((0x000000e0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data)) 
                        | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy1_shift)))
                     : (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)) 
                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad2_cs))
                         ? ((0x000000e0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data)) 
                            | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy2_shift)))
                         : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs)
                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout)
                             : ((IData)(nes_core_top__DOT__nes_inst__DOT__prg_allow)
                                 ? (IData)(nes_core_top__DOT__cpumem_din)
                                 : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data))))));
    vlSelfRef.dbg_cpumem_write = vlSelfRef.nes_core_top__DOT__cpumem_write;
    vlSelfRef.dbg_ppumem_write = vlSelfRef.nes_core_top__DOT__ppumem_write;
    vlSelfRef.dbg_chr_to_ppu = nes_core_top__DOT__ppumem_din;
    vlSelfRef.dbg_ppumem_din = nes_core_top__DOT__ppumem_din;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din 
        = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__ppumem_read)
                           ? (IData)(nes_core_top__DOT__ppumem_din)
                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_write)
                               ? (IData)(vlSelfRef.nes_core_top__DOT__ppumem_dout)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE)
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a)
                                   : (IData)(nes_core_top__DOT__ppumem_din)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_data_bus 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs) 
            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable))
            ? ((0x000000e0U & (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus)) 
               | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy1_shift)))
            : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad2_cs) 
                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable))
                ? ((0x000000e0U & (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus)) 
                   | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy2_shift)))
                : (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus 
        = ((IData)(((0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774)) 
                    & (0x0015U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))))
            ? ((((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq) 
                   << 3U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_interrupt_buffer) 
                             << 2U)) | ((2U & ((IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus) 
                                               >> 4U)) 
                                        | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive))) 
                << 4U) | ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc) 
                            << 3U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc) 
                                      << 2U)) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc))))
            : (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus));
    __Vtableidx163 = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din;
    __VdfgRegularize_h4af1c392_0_7 = Vnes_core_top__ConstPool__TABLE_hc1b97178_0
        [__Vtableidx163];
    vlSelfRef.dbg_cpu_din = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
    if (vlSelfRef.reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
            = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
            = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
            = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
            = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923));
    } else {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946) {
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
                    = (0x000000ffU & 0xffU);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
                    = (0x000000ffU & 0xffU);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
                    = (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                       : ((0x0020U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                           : ((0x0010U 
                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                               : ((8U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108)
                                                        ? 
                                                       ((0x0080U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                         : 
                                                        ((0x0040U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                          : 
                                                         ((0x0020U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                           : 
                                                          ((0x0010U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                            ? 
                                                           ((2U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                              ? 
                                                             ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452)
                                                               ? 
                                                              ((0x0dU 
                                                                == 
                                                                (0x0000000fU 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 4U)))
                                                                ? 
                                                               ((5U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                     >> 4U)))
                                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                 : 
                                                                ((4U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                  : 
                                                                 ((0U 
                                                                   == 
                                                                   (0x0000000fU 
                                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                       >> 4U)))
                                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                   : 
                                                                  ((0U 
                                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                                                                    ? 2U
                                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))))
                                                                : 
                                                               ((5U 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                     >> 4U)))
                                                                 ? 
                                                                ((4U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                  : 
                                                                 ((0U 
                                                                   == 
                                                                   (0x0000000fU 
                                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                       >> 4U)))
                                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                   : 
                                                                  ((0U 
                                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                                                                    ? 3U
                                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165))))
                                                                 : 
                                                                ((4U 
                                                                  == 
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                      >> 4U)))
                                                                  ? 
                                                                 ((0U 
                                                                   == 
                                                                   (0x0000000fU 
                                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                       >> 4U)))
                                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                                   : 1U)
                                                                  : 
                                                                 ((0U 
                                                                   == 
                                                                   (0x0000000fU 
                                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                       >> 4U)))
                                                                   ? 5U
                                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))))
                                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165))
                                                              : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2257)
                                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2220))))))))
                                                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))
                                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165)))))))));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 
                    = (0x0000ffffU & (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)) 
                                       & ((0x0020U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((0x0010U 
                                              != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                             & ((8U 
                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                & ((4U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((2U 
                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                      & ((1U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                         & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                               & ((0x0080U 
                                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                  & ((0x0040U 
                                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                     & ((0x0020U 
                                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                        & ((0x0010U 
                                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                            ? 
                                                                           (2U 
                                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                                            : 
                                                                           ((8U 
                                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                            & ((4U 
                                                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                               & ((2U 
                                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2265)
                                                                                 : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2228)))))))))))))))))
                                       ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924) 
                                          - (IData)(1U))
                                       : (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)) 
                                           & ((0x0020U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((0x0010U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((8U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((4U 
                                                        != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & ((2U 
                                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                          & ((1U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                             & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                                   & ((0x0080U 
                                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                      & ((0x0040U 
                                                                          != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                         & ((0x0020U 
                                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2479)
                                                                             : 
                                                                            ((0x0010U 
                                                                              != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                             & ((8U 
                                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2333)
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2301))))))))))))))))
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924))
                                           : ((0x0000ff00U 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)) 
                                              | (0x000000ffU 
                                                 & ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                       : 
                                                      ((0x0020U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                        : 
                                                       ((0x0010U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                             ? 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                              ? 
                                                             ((0x8000U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                               : 
                                                              ((0x4000U 
                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)
                                                                : 
                                                               ((0x2000U 
                                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177))))
                                                              : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177))
                                                             : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177)))))))) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                                     : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)))))));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
                    = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                        ? ((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                         >> 5U))) ? 
                           ((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                          >> 5U))) ? 0x0eU
                             : ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                              >> 5U)))
                                 ? 0x0eU : ((3U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                               >> 5U)))
                                             ? 0x0eU
                                             : ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U)))
                                                 ? 0x0eU
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                                  ? 0x0eU
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                       >> 5U)))
                                                   ? 0x0eU
                                                   : 0x0dU))))))
                            : ((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                             >> 5U)))
                                ? ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 5U)))
                                    ? 0x0eU : ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 0x0eU
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 5U)))
                                                     ? 0x0eU
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                          >> 5U)))
                                                      ? 0x0eU
                                                      : 5U)))))
                                : ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 5U)))
                                    ? ((3U == (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                        ? 0x0eU : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 5U)))
                                                     ? 0x0eU
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                          >> 5U)))
                                                      ? 0x0eU
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                           >> 2U)))
                                                       ? 5U
                                                       : 4U)))))
                                    : ((3U == (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                        ? ((2U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                            ? 0x0eU
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 0x0eU
                                                : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 0x0bU)))
                                        : ((2U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                            ? ((1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 0x0eU
                                                : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 0x0aU))
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 0x0eU
                                                    : 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4056)
                                                     ? 0x0dU
                                                     : 9U))
                                                : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4056)
                                                     ? 0x0eU
                                                     : 8U)
                                                    : 0x0eU)))))))
                        : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4046)
                            : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                                ? ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017))
                                    ? ((4U == (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                        ? 5U : 4U) : 
                                   ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017))
                                     ? ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3996))
                                         ? 0x0dU : 
                                        ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3996))
                                          ? 0x0eU : 5U))
                                     : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017))
                                         ? ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974))
                                             ? 0x0cU
                                             : ((2U 
                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974))
                                                 ? 5U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974))
                                                  ? 6U
                                                  : 4U)))
                                         : ((5U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                               >> 5U)))
                                             ? 5U : 4U))))
                                : ((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 5U)))
                                    ? ((0xbbU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                        ? 1U : 5U) : 
                                   ((0x6bU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                     ? 0x0fU : ((0x8bU 
                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                 ? 0x12U
                                                 : 
                                                (((0x0bU 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                                                  | (0x2bU 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                                  ? 0x10U
                                                  : 
                                                 ((0xebU 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                   ? 7U
                                                   : 
                                                  (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                                     ? 
                                                    ((0x2000U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3771))
                                                      : 
                                                     ((0x1000U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3686)
                                                       : 
                                                      ((0x0800U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3501))
                                                        : 
                                                       ((0x0400U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3417)
                                                         : 
                                                        ((0x0200U 
                                                          != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                         & ((0x0100U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                             ? 
                                                            ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3218))
                                                             : 
                                                            ((0x0080U 
                                                              != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2956)))))))))
                                                     : 
                                                    ((0x0020U 
                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                     & ((0x0010U 
                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((8U 
                                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                           & ((4U 
                                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                              & ((2U 
                                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2749)))))))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4146)
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4178))))))))));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
                    = (1U & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                  ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                      ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3769)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3856))
                                      : ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3683)
                                          : ((0x0800U 
                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                              ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3499)
                                                  : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3546))
                                              : ((0x0400U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3414)
                                                  : 
                                                 ((0x0200U 
                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                  & ((0x0100U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3216)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3253))
                                                      : 
                                                     ((0x0080U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3130))
                                                       : 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2954)
                                                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2885)))))))))
                                  : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2885)
                                      : ((0x0010U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                         & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                            & ((4U 
                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                               & ((2U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2746)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                         & ((0x0080U 
                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                            & ((0x0040U 
                                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                               & ((0x0020U 
                                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                  & ((0x0010U 
                                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                      ? 
                                                                     ((2U 
                                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)) 
                                                                      & ((1U 
                                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)) 
                                                                         & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452) 
                                                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2380))))
                                                                      : 
                                                                     ((8U 
                                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                      & ((4U 
                                                                          != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                         & ((2U 
                                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2272)
                                                                             : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2236)))))))))))))))))) 
                             | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
                    = (3U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk)
                              ? 0U : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                       ? ((0x2000U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3743)
                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3836))
                                           : ((0x1000U 
                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3654)
                                               : ((0x0800U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3478)
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3533))
                                                   : 
                                                  ((0x0400U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3382)
                                                    : 
                                                   ((0x0200U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? 0U
                                                     : 
                                                    ((0x0100U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3194)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3241))
                                                      : 
                                                     ((0x0080U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                        ? 
                                                       ((0x00000020U 
                                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3063)
                                                         : 0U)
                                                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3116))
                                                       : 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2936)
                                                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875)))))))))
                                       : ((0x0020U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875)
                                           : ((0x0010U 
                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                               ? 0U
                                               : ((8U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2717)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108)
                                                        ? 
                                                       ((0x0080U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                         ? 0U
                                                         : 
                                                        ((0x0040U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                          ? 0U
                                                          : 
                                                         ((0x0020U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2476)
                                                           : 
                                                          ((0x0010U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                            ? 
                                                           ((2U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                                              ? 
                                                             ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452)
                                                               ? 1U
                                                               : 0U)
                                                              : 0U))
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2325)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2293)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2254)
                                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2216))))))))
                                                        : 0U))
                                                      : 0U)))))))));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
                    = (0x0000ffffU & ((0x0000ff00U 
                                       & (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                            ? ((0x00000100U 
                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder))
                                                ? (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl))
                                                    ? 
                                                   (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                                                     >> 8U) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                                                     >> 8U)))
                                                : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225) 
                                                   >> 8U))
                                            : ((2U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                                    ? 
                                                   (0x000000ffU 
                                                    & (((IData)(1U) 
                                                        + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923)) 
                                                       >> 8U))
                                                    : 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225) 
                                                    >> 8U)))) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder)
                                           : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923))
                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225)))))));
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
                    = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
                    = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
                    = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 
                    = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
                    = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
                    = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
                    = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923));
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
                    = (3U & 0U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
                    = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n188)
                                       ? 0U : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)));
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
                    = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
                    = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928));
            }
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
                = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285)) 
                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
                = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))
                    ? ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
                       & (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i)) 
                           & (((0x93U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                               & (3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))) 
                              | ((0x93U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                                 & (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))))) 
                          | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949)))
                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
                = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                          >> 0x00000020U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
                = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                          >> 0x00000028U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
                = (3U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                 >> 0x00000030U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
                = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                 >> 0x00000032U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
                = (0x0000000fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                          >> 0x00000037U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 
                = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
                = (0x0000000fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                          >> 0x00000033U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
                = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                 >> 0x0000003dU)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
                = (3U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                 >> 0x0000003bU)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
                = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
                                          >> 0x00000010U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
                = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer));
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531 
            = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483) 
                      & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)))
                      ? (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi))
                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530 
            = (1U & ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy)) 
                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483)) 
                      & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)))
                      ? (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq) 
                            | ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__DisableFrameInterrupt)) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt))))
                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939)));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in 
        = ((0x07fff800U & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__dummy_sprite)
                              ? 0U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_x)
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din)
                                       : (IData)(__VdfgRegularize_h4af1c392_0_7))) 
                            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__dummy_sprite)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_x)
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din)
                                                  : (IData)(__VdfgRegularize_h4af1c392_0_7))) 
                                               << 0x0000000bU))) 
           | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
               << 3U) | ((6U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
                                << 1U)) | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
                                                 >> 5U)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728 
        = ((0xeeU | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749 
        = (0x000000ffU & ((((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                            | (0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))) 
                           | (((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                               | (0x0080U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))) 
                              | ((0x0040U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                                 | ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                                    | ((0x0010U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                                       | (8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)))))))
                           ? ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                               ? 0U : ((0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741)
                                        : ((0x0100U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                            ? ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728) 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914))
                                            : ((0x0080U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728)
                                                : (
                                                   (0x0040U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI))
                                                    : 
                                                   ((0x0020U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)
                                                     : 
                                                    ((0x0010U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)
                                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915))))))))
                           : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)
                               : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)
                                   : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                       : 0U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645 
        = (0x000001ffU & ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                           ? (0x000001f8U | ((6U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631)) 
                                             | (1U 
                                                & ((3U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934)) 
                                                   | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631)))))
                           : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920)
                               : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                   ? ((0x000000ffU 
                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920)) 
                                      + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749))
                                   : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920) 
                                      + (1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603)))))));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 
                = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                    ? ((0x2000U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                       & ((0x1000U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((0x0800U 
                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                              ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3493)
                                                  : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3544))
                                              : ((0x0400U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3402)
                                                  : 
                                                 ((0x0200U 
                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                  & ((0x0100U 
                                                      != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                     & ((0x0080U 
                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2948)
                                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2881)))))))))
                                    : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2881)
                                        : ((0x0010U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((4U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2734)))))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                   : (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                        ? ((0x2000U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x1000U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((0x0800U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3484)
                                                     : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3539)))))
                                        : ((0x0020U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x0010U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((8U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((4U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2726)))))))
                                       ? (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107) 
                                           & ((0x2000U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((0x1000U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((0x0800U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3541))))))
                                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915))
                                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)))
                                       : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad)
                                           : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad)
                                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad) 
                                                  + 
                                                  (1U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 
                = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                    ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3763)
                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3854))
                                        : ((0x1000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3677)
                                            : ((0x0800U 
                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                               & ((0x0400U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3408)
                                                   : 
                                                  ((0x0200U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((0x0100U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3210)
                                                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3251))
                                                       : 
                                                      ((0x0080U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                           ? 
                                                          (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                            >> 5U) 
                                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3079))
                                                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3126)))))))))
                                    : ((0x0020U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                       & ((0x0010U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                             & ((4U 
                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                & ((2U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2740)))))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                   : ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                       ? 0xffU : ((4U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                                   ? 
                                                  ((0x00000100U 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920))
                                                    ? 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598))
                                                      ? 
                                                     (((IData)(1U) 
                                                       + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919)) 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout))
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919) 
                                                      + 
                                                      (1U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598)))))
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919))
                                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919)))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 
                = (0x000000ffU & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                    ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3757))
                                        : ((0x1000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3671)
                                            : ((0x0800U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3490))
                                                : (
                                                   (0x0400U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3399)
                                                    : 
                                                   ((0x0200U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((0x0100U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3204))
                                                        : 
                                                       ((0x0080U 
                                                         != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2945)))))))))
                                    : ((0x0020U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                       & ((0x0010U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                          & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                             & ((4U 
                                                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                & ((2U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2731)))))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                   : (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                        ? ((0x2000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3754))
                                            : ((0x1000U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3668)
                                                : (
                                                   (0x0800U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3487))
                                                    : 
                                                   ((0x0400U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3396)
                                                     : 
                                                    ((0x0200U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((4U 
                                                       != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289)) 
                                                      & ((2U 
                                                          != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289)) 
                                                         & (1U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289))))
                                                      : 
                                                     ((0x0100U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3201))
                                                       : 
                                                      ((0x0080U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017) 
                                                        & ((0x00000020U 
                                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3073)
                                                            : 
                                                           ((2U 
                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)) 
                                                            & (1U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392)))))
                                                        : 
                                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2942)))))))))
                                        : ((0x0020U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x0010U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((8U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((4U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2728)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                                              & ((0x0080U 
                                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                 & ((0x0040U 
                                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                    & ((0x0020U 
                                                                        != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                       & ((0x0010U 
                                                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                                          & ((8U 
                                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2336)
                                                                              : 
                                                                             ((4U 
                                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2307)
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2268)
                                                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2231)))))))))))))))))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
                = (0x000001ffU & ((0x00000100U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645)) 
                                  | (0x000000ffU & 
                                     (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                                        ? ((0x2000U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3760)
                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3851))
                                            : ((0x1000U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3674)
                                                : (
                                                   (0x0800U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   & ((0x0400U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3405)
                                                       : 
                                                      ((0x0200U 
                                                        != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & ((0x0100U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                           ? 
                                                          ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3207)
                                                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3248))
                                                           : 
                                                          ((0x0080U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                               ? 
                                                              (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                >> 5U) 
                                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3076))
                                                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3123)))))))))
                                        : ((0x0020U 
                                            != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                           & ((0x0010U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                              & ((8U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                 & ((4U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                    & ((2U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2737)))))))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645)))));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
                = (0x000001ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920));
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687 
            = (0x000000ffU & ((((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934)) 
                                | (2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278))
                               ? ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI))
                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944)));
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 8U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000010U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000018U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000029U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 
            = (0x000000ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000031U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
            = (0x000001ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000020U)));
    }
}

void Vnes_core_top___024root___eval_ico(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_ico\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vnes_core_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vnes_core_top___024root___eval_phase__ico(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_phase__ico\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vnes_core_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnes_core_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vnes_core_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vnes_core_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vnes_core_top___024root___eval_triggers_vec__act(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_triggers_vec__act\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n__0 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n;
}

bool Vnes_core_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<SData/*12:0*/, 16> Vnes_core_top__ConstPool__TABLE_h057380b2_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h5f8c61fe_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h652152d6_0;
extern const VlUnpacked<SData/*15:0*/, 512> Vnes_core_top__ConstPool__TABLE_h3e208df7_0;
extern const VlUnpacked<SData/*13:0*/, 128> Vnes_core_top__ConstPool__TABLE_h6979805f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vnes_core_top__ConstPool__TABLE_h8f069df0_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vnes_core_top__ConstPool__TABLE_hb5922465_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h9c1c7bf8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h95c950e0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h95de9241_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h3de6c573_0;
extern const VlUnpacked<CData/*4:0*/, 128> Vnes_core_top__ConstPool__TABLE_h3adfef7e_0;
extern const VlUnpacked<CData/*4:0*/, 4096> Vnes_core_top__ConstPool__TABLE_h00507437_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h2fb0f9d7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h9dd9b614_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h16b4aba9_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_hd07d9d86_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h4282ade7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vnes_core_top__ConstPool__TABLE_hd2f01c33_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_haeb47009_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vnes_core_top__ConstPool__TABLE_hf3423262_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vnes_core_top__ConstPool__TABLE_hfe47b41c_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h987317c3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h4f814333_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h3f921444_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vnes_core_top__ConstPool__TABLE_h2016b879_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vnes_core_top__ConstPool__TABLE_h73ee0c49_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vnes_core_top__ConstPool__TABLE_h584b6bcc_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h44f78f5a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h46b97fdf_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vnes_core_top__ConstPool__TABLE_h7c68f577_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h059b45c9_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vnes_core_top__ConstPool__TABLE_hd937a5c3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_hae49fd98_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vnes_core_top__ConstPool__TABLE_h265de487_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vnes_core_top__ConstPool__TABLE_h6d82561b_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h893f5bb7_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vnes_core_top__ConstPool__TABLE_h614017f6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_h29c19512_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_hcd92346b_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h58af22be_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h471cd63f_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_h90d83d1e_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnes_core_top__ConstPool__TABLE_he9024dd8_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_h1c24d45d_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_ha648580e_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vnes_core_top__ConstPool__TABLE_hd4f9570f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h9110f853_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h6ef9777c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h09f1e500_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h102087e8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h09179351_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_ha0b9cfbb_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_hcd02c17d_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_hc4970fc4_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_hf87ff63e_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_h7836095f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h3a84249d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_habef6ca1_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vnes_core_top__ConstPool__TABLE_h9fddebfe_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_ha9e6c01a_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_h2a7bf804_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_h4506dbf6_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_h1686eb2e_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vnes_core_top__ConstPool__TABLE_hd4ea2203_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vnes_core_top__ConstPool__TABLE_h0277fe08_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h89a70f01_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_ha7ebb35f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h2426bd34_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h1e2ce85a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_hc1c4ab8a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_h32271c6e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_h13b98afd_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h5f03753d_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h4a795377_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h9d9f26aa_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_hd3c9b9f0_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vnes_core_top__ConstPool__TABLE_h28c0ea9b_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vnes_core_top__ConstPool__TABLE_h15eaa627_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vnes_core_top__ConstPool__TABLE_hd8287b7b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_hf9e73902_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vnes_core_top__ConstPool__TABLE_he71f98da_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_hca71edbe_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h7ad1dfcc_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vnes_core_top__ConstPool__TABLE_h292b2ddd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_he5cc4201_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_hac51f4ce_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_h1074f1af_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_h2fd4c84b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_he3441826_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_h3cd0c607_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vnes_core_top__ConstPool__TABLE_h49206862_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vnes_core_top__ConstPool__TABLE_h06e9f4f9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_he02755a6_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vnes_core_top__ConstPool__TABLE_h760263c1_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vnes_core_top__ConstPool__TABLE_h729efcd6_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h4cd8e16c_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vnes_core_top__ConstPool__TABLE_ha633a4d8_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vnes_core_top__ConstPool__TABLE_hd7e3da36_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnes_core_top__ConstPool__TABLE_h6475423d_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnes_core_top__ConstPool__TABLE_hee8ec7ef_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnes_core_top__ConstPool__TABLE_h5961e4e5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h2e21da25_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h61a609e0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h251c97ba_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h1b1bc34a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h0e665c85_0;
extern const VlUnpacked<SData/*10:0*/, 16> Vnes_core_top__ConstPool__TABLE_ha2026167_0;

void Vnes_core_top___024root___nba_sequent__TOP__0(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___nba_sequent__TOP__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ nes_core_top__DOT__cpumem_din;
    nes_core_top__DOT__cpumem_din = 0;
    CData/*7:0*/ nes_core_top__DOT__ppumem_din;
    nes_core_top__DOT__ppumem_din = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__pause_cpu;
    nes_core_top__DOT__nes_inst__DOT__pause_cpu = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__prg_allow;
    nes_core_top__DOT__nes_inst__DOT__prg_allow = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__vram_a10;
    nes_core_top__DOT__nes_inst__DOT__vram_a10 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__chr_allow;
    nes_core_top__DOT__nes_inst__DOT__chr_allow = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__external_data_bus;
    nes_core_top__DOT__nes_inst__DOT__external_data_bus = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p_out;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p_out = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n429;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n429 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n431;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n431 = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728 = 0;
    SData/*12:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823 = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2019;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2019 = 0;
    CData/*2:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2142;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2142 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195 = 0;
    CData/*5:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2223;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2223 = 0;
    CData/*4:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2261;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2261 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2287;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2287 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2296;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2296 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2304;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2304 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2329;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2329 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2439;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2439 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2442;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2442 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2443;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2443 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2444;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2444 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2473;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2473 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2481;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2481 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2483;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2483 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2539;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2539 = 0;
    CData/*2:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698 = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2710;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2710 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2720;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2720 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2723;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2723 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2743;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2743 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2790;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2790 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2799;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2799 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2801;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2801 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2828;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2828 = 0;
    CData/*2:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2904;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2904 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2939;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2939 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2951;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2951 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2992;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2992 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3067;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3067 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3069;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3069 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3120;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3120 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3128;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3128 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3198;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3198 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3213;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3213 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3245;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3245 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3257;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3257 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3375;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3375 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3385;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3385 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3390;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3390 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3392;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3392 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3394;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3394 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3411;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3411 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3481;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3481 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3496;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3496 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3536;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3536 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3649;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3649 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3658;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3658 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3662;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3662 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3664;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3664 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3666;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3666 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3680;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3680 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3747;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3747 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3751;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3751 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3766;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3766 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3814;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3814 = 0;
    CData/*4:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3840;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3840 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3844;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3844 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3846;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3846 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3848;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3848 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3920;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3920 = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207 = 0;
    CData/*5:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4237;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4237 = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4258;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4258 = 0;
    CData/*5:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4271;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4271 = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327 = 0;
    CData/*5:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361 = 0;
    CData/*5:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379 = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4406;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4406 = 0;
    CData/*6:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447 = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4468;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4468 = 0;
    SData/*14:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494 = 0;
    CData/*7:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502 = 0;
    CData/*4:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4540;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4540 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4541;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4541 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4543;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4543 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4544;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4544 = 0;
    SData/*10:0*/ nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ShiftedPeriod;
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ShiftedPeriod = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__DutyEnabled;
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__DutyEnabled = 0;
    SData/*10:0*/ nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ShiftedPeriod;
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ShiftedPeriod = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__DutyEnabled;
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__DutyEnabled = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode;
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d = 0;
    CData/*4:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__attribute_read;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__attribute_read = 0;
    CData/*4:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr = 0;
    CData/*1:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_7;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_7 = 0;
    CData/*0:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9 = 0;
    CData/*3:0*/ nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__y_f;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__y_f = 0;
    CData/*0:0*/ __VdfgRegularize_h4af1c392_0_1;
    __VdfgRegularize_h4af1c392_0_1 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_2;
    __VdfgRegularize_h4af1c392_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h4af1c392_0_4;
    __VdfgRegularize_h4af1c392_0_4 = 0;
    CData/*7:0*/ __VdfgRegularize_h4af1c392_0_7;
    __VdfgRegularize_h4af1c392_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h4af1c392_0_9;
    __VdfgRegularize_h4af1c392_0_9 = 0;
    CData/*3:0*/ __VdfgRegularize_h4af1c392_0_11;
    __VdfgRegularize_h4af1c392_0_11 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_12;
    __VdfgRegularize_h4af1c392_0_12 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_13;
    __VdfgRegularize_h4af1c392_0_13 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_14;
    __VdfgRegularize_h4af1c392_0_14 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_15;
    __VdfgRegularize_h4af1c392_0_15 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_16;
    __VdfgRegularize_h4af1c392_0_16 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_17;
    __VdfgRegularize_h4af1c392_0_17 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_18;
    __VdfgRegularize_h4af1c392_0_18 = 0;
    CData/*1:0*/ __VdfgRegularize_h4af1c392_0_19;
    __VdfgRegularize_h4af1c392_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h4af1c392_0_20;
    __VdfgRegularize_h4af1c392_0_20 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    SData/*9:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*5:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*5:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*5:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*4:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*4:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*4:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*4:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*4:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*4:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*4:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*4:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*4:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*4:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*4:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*4:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*4:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*4:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*4:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*3:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*5:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*5:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*7:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*5:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*3:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*4:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    SData/*10:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    SData/*8:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*6:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*6:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*6:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*7:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*6:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*6:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*6:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*6:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*6:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    SData/*8:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*6:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*4:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*4:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*3:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*3:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*4:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*3:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*3:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*3:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*4:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*4:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*7:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*5:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*3:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    CData/*3:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*3:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    CData/*3:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*3:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    CData/*3:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    CData/*3:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    CData/*4:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    CData/*4:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    CData/*4:0*/ __Vtableidx77;
    __Vtableidx77 = 0;
    CData/*4:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    CData/*4:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    CData/*4:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    CData/*4:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    CData/*4:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    CData/*4:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    CData/*5:0*/ __Vtableidx84;
    __Vtableidx84 = 0;
    CData/*5:0*/ __Vtableidx85;
    __Vtableidx85 = 0;
    CData/*3:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    CData/*3:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    CData/*3:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    CData/*3:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    CData/*4:0*/ __Vtableidx90;
    __Vtableidx90 = 0;
    SData/*10:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    SData/*8:0*/ __Vtableidx92;
    __Vtableidx92 = 0;
    CData/*6:0*/ __Vtableidx93;
    __Vtableidx93 = 0;
    CData/*6:0*/ __Vtableidx94;
    __Vtableidx94 = 0;
    SData/*8:0*/ __Vtableidx95;
    __Vtableidx95 = 0;
    CData/*7:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    CData/*7:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    CData/*6:0*/ __Vtableidx98;
    __Vtableidx98 = 0;
    CData/*6:0*/ __Vtableidx99;
    __Vtableidx99 = 0;
    CData/*6:0*/ __Vtableidx100;
    __Vtableidx100 = 0;
    CData/*6:0*/ __Vtableidx101;
    __Vtableidx101 = 0;
    CData/*6:0*/ __Vtableidx102;
    __Vtableidx102 = 0;
    SData/*8:0*/ __Vtableidx103;
    __Vtableidx103 = 0;
    CData/*6:0*/ __Vtableidx104;
    __Vtableidx104 = 0;
    CData/*4:0*/ __Vtableidx105;
    __Vtableidx105 = 0;
    CData/*4:0*/ __Vtableidx106;
    __Vtableidx106 = 0;
    CData/*4:0*/ __Vtableidx107;
    __Vtableidx107 = 0;
    CData/*5:0*/ __Vtableidx108;
    __Vtableidx108 = 0;
    CData/*4:0*/ __Vtableidx109;
    __Vtableidx109 = 0;
    CData/*4:0*/ __Vtableidx110;
    __Vtableidx110 = 0;
    CData/*4:0*/ __Vtableidx111;
    __Vtableidx111 = 0;
    CData/*5:0*/ __Vtableidx112;
    __Vtableidx112 = 0;
    CData/*5:0*/ __Vtableidx113;
    __Vtableidx113 = 0;
    CData/*3:0*/ __Vtableidx114;
    __Vtableidx114 = 0;
    CData/*3:0*/ __Vtableidx115;
    __Vtableidx115 = 0;
    CData/*3:0*/ __Vtableidx116;
    __Vtableidx116 = 0;
    CData/*4:0*/ __Vtableidx117;
    __Vtableidx117 = 0;
    CData/*3:0*/ __Vtableidx118;
    __Vtableidx118 = 0;
    CData/*4:0*/ __Vtableidx119;
    __Vtableidx119 = 0;
    SData/*9:0*/ __Vtableidx120;
    __Vtableidx120 = 0;
    CData/*7:0*/ __Vtableidx121;
    __Vtableidx121 = 0;
    CData/*5:0*/ __Vtableidx122;
    __Vtableidx122 = 0;
    CData/*5:0*/ __Vtableidx123;
    __Vtableidx123 = 0;
    CData/*7:0*/ __Vtableidx124;
    __Vtableidx124 = 0;
    CData/*6:0*/ __Vtableidx125;
    __Vtableidx125 = 0;
    CData/*6:0*/ __Vtableidx126;
    __Vtableidx126 = 0;
    CData/*5:0*/ __Vtableidx127;
    __Vtableidx127 = 0;
    CData/*5:0*/ __Vtableidx128;
    __Vtableidx128 = 0;
    CData/*5:0*/ __Vtableidx129;
    __Vtableidx129 = 0;
    CData/*5:0*/ __Vtableidx130;
    __Vtableidx130 = 0;
    CData/*7:0*/ __Vtableidx131;
    __Vtableidx131 = 0;
    CData/*5:0*/ __Vtableidx132;
    __Vtableidx132 = 0;
    CData/*5:0*/ __Vtableidx133;
    __Vtableidx133 = 0;
    CData/*5:0*/ __Vtableidx134;
    __Vtableidx134 = 0;
    CData/*5:0*/ __Vtableidx135;
    __Vtableidx135 = 0;
    CData/*5:0*/ __Vtableidx136;
    __Vtableidx136 = 0;
    CData/*5:0*/ __Vtableidx137;
    __Vtableidx137 = 0;
    CData/*5:0*/ __Vtableidx138;
    __Vtableidx138 = 0;
    CData/*5:0*/ __Vtableidx139;
    __Vtableidx139 = 0;
    CData/*5:0*/ __Vtableidx140;
    __Vtableidx140 = 0;
    CData/*6:0*/ __Vtableidx141;
    __Vtableidx141 = 0;
    CData/*6:0*/ __Vtableidx142;
    __Vtableidx142 = 0;
    CData/*4:0*/ __Vtableidx143;
    __Vtableidx143 = 0;
    CData/*4:0*/ __Vtableidx144;
    __Vtableidx144 = 0;
    CData/*4:0*/ __Vtableidx145;
    __Vtableidx145 = 0;
    CData/*6:0*/ __Vtableidx146;
    __Vtableidx146 = 0;
    CData/*5:0*/ __Vtableidx147;
    __Vtableidx147 = 0;
    CData/*4:0*/ __Vtableidx148;
    __Vtableidx148 = 0;
    CData/*4:0*/ __Vtableidx149;
    __Vtableidx149 = 0;
    CData/*5:0*/ __Vtableidx150;
    __Vtableidx150 = 0;
    CData/*6:0*/ __Vtableidx151;
    __Vtableidx151 = 0;
    CData/*6:0*/ __Vtableidx152;
    __Vtableidx152 = 0;
    SData/*11:0*/ __Vtableidx153;
    __Vtableidx153 = 0;
    CData/*6:0*/ __Vtableidx154;
    __Vtableidx154 = 0;
    SData/*9:0*/ __Vtableidx155;
    __Vtableidx155 = 0;
    SData/*9:0*/ __Vtableidx156;
    __Vtableidx156 = 0;
    CData/*4:0*/ __Vtableidx157;
    __Vtableidx157 = 0;
    CData/*4:0*/ __Vtableidx158;
    __Vtableidx158 = 0;
    CData/*3:0*/ __Vtableidx159;
    __Vtableidx159 = 0;
    SData/*8:0*/ __Vtableidx160;
    __Vtableidx160 = 0;
    CData/*6:0*/ __Vtableidx161;
    __Vtableidx161 = 0;
    CData/*3:0*/ __Vtableidx162;
    __Vtableidx162 = 0;
    CData/*7:0*/ __Vtableidx163;
    __Vtableidx163 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_57;
    __VdfgRegularize_hebeb780c_0_57 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_58;
    __VdfgRegularize_hebeb780c_0_58 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_105;
    __VdfgRegularize_hebeb780c_0_105 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_106;
    __VdfgRegularize_hebeb780c_0_106 = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__joy1_shift;
    __Vdly__nes_core_top__DOT__joy1_shift = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__joy2_shift;
    __Vdly__nes_core_top__DOT__joy2_shift = 0;
    CData/*4:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu = 0;
    CData/*1:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_tick;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_tick = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__freeze_clocks;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__freeze_clocks = 0;
    CData/*4:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu_pause;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu_pause = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__odd_or_even;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__odd_or_even = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__cycle_paused;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__cycle_paused = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state = 0;
    CData/*1:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider = 0;
    SData/*11:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider = 0;
    SData/*11:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count = 0;
    CData/*6:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr = 0;
    SData/*10:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1 = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int = 0;
    SData/*10:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count = 0;
    SData/*15:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr = 0;
    SData/*15:0*/ __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr;
    __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr = 0;
    SData/*11:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence = 0;
    SData/*14:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr = 0;
    IData/*23:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high = 0;
    IData/*23:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low = 0;
    CData/*4:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed = 0;
    CData/*4:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_cycle;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_cycle = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame = 0;
    SData/*14:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v = 0;
    SData/*14:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch = 0;
    CData/*1:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr = 0;
    CData/*4:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr = 0;
    CData/*3:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count = 0;
    CData/*0:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr = 0;
    CData/*5:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex = 0;
    CData/*7:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr = 0;
    CData/*1:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile = 0;
    SData/*8:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr = 0;
    CData/*2:0*/ __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__cpu_ram__v0;
    __VdlyVal__nes_core_top__DOT__cpu_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__nes_core_top__DOT__cpu_ram__v0;
    __VdlyDim0__nes_core_top__DOT__cpu_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__cpu_ram__v0;
    __VdlySet__nes_core_top__DOT__cpu_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__cart_ram__v0;
    __VdlyVal__nes_core_top__DOT__cart_ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__nes_core_top__DOT__cart_ram__v0;
    __VdlyDim0__nes_core_top__DOT__cart_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__cart_ram__v0;
    __VdlySet__nes_core_top__DOT__cart_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__ciram__v0;
    __VdlyVal__nes_core_top__DOT__ciram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__nes_core_top__DOT__ciram__v0;
    __VdlyDim0__nes_core_top__DOT__ciram__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__ciram__v0;
    __VdlySet__nes_core_top__DOT__ciram__v0 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__chr_rom__v0;
    __VdlyVal__nes_core_top__DOT__chr_rom__v0 = 0;
    SData/*12:0*/ __VdlyDim0__nes_core_top__DOT__chr_rom__v0;
    __VdlyDim0__nes_core_top__DOT__chr_rom__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__chr_rom__v0;
    __VdlySet__nes_core_top__DOT__chr_rom__v0 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v1;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v1 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v2;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v2 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v3;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v0;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v1;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v1 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v66;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v66 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 = 0;
    CData/*5:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 = 0;
    CData/*7:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 = 0;
    CData/*7:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v1;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v1 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v2;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v2 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v3;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v3 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v4;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v4 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v5;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v5 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v6;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v6 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v7;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v7 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v8;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v8 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v9;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v9 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v10;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v10 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v11;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v11 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v12;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v12 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v13;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v13 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v14;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v14 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v15;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v15 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v16;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v16 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v17;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v17 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v18;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v18 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v19;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v19 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v20;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v20 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v21;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v21 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v22;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v22 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v23;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v23 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v24;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v24 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v25;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v25 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v26;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v26 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v27;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v27 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v28;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v28 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v29;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v29 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v30;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v30 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v31;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v31 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 = 0;
    CData/*4:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 = 0;
    CData/*5:0*/ __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33;
    __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 = 0;
    CData/*4:0*/ __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33;
    __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 = 0;
    CData/*0:0*/ __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __Vdly__nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__cycle_paused 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused;
    __VdlySet__nes_core_top__DOT__ciram__v0 = 0U;
    __VdlySet__nes_core_top__DOT__chr_rom__v0 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0 = 0U;
    __VdlySet__nes_core_top__DOT__cpu_ram__v0 = 0U;
    __VdlySet__nes_core_top__DOT__cart_ram__v0 = 0U;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 = 0U;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr;
    __Vdly__nes_core_top__DOT__joy1_shift = vlSelfRef.nes_core_top__DOT__joy1_shift;
    __Vdly__nes_core_top__DOT__joy2_shift = vlSelfRef.nes_core_top__DOT__joy2_shift;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__odd_or_even 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_cycle 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__freeze_clocks 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu_pause 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_tick 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr;
    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v0 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v1 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 = 0U;
    __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 = 0U;
    if (vlSelfRef.nes_core_top__DOT__ppumem_write) {
        if (((0x00300000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
             & (0x00300800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))) {
            __VdlyVal__nes_core_top__DOT__ciram__v0 
                = vlSelfRef.nes_core_top__DOT__ppumem_dout;
            __VdlyDim0__nes_core_top__DOT__ciram__v0 
                = (0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr);
            __VdlySet__nes_core_top__DOT__ciram__v0 = 1U;
        }
        if ((1U & (~ ((0x00300000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
                      & (0x00300800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))))) {
            if (((0x00200000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
                 & (0x00204000U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))) {
                __VdlyVal__nes_core_top__DOT__chr_rom__v0 
                    = vlSelfRef.nes_core_top__DOT__ppumem_dout;
                __VdlyDim0__nes_core_top__DOT__chr_rom__v0 
                    = (0x00001fffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr);
                __VdlySet__nes_core_top__DOT__chr_rom__v0 = 1U;
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__cpumem_write) {
        if (((0x00380000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
             & (0x00380800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))) {
            __VdlyVal__nes_core_top__DOT__cpu_ram__v0 
                = vlSelfRef.nes_core_top__DOT__cpumem_dout;
            __VdlyDim0__nes_core_top__DOT__cpu_ram__v0 
                = (0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr);
            __VdlySet__nes_core_top__DOT__cpu_ram__v0 = 1U;
        }
        if ((1U & (~ ((0x00380000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
                      & (0x00380800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))))) {
            if (((0x001e0000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
                 & (0x001e0800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))) {
                __VdlyVal__nes_core_top__DOT__cart_ram__v0 
                    = vlSelfRef.nes_core_top__DOT__cpumem_dout;
                __VdlyDim0__nes_core_top__DOT__cart_ram__v0 
                    = (0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr);
                __VdlySet__nes_core_top__DOT__cart_ram__v0 = 1U;
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer 
            = ((0x000007feU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer) 
                               << 1U)) | (1U & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer) 
                                                  >> 0x0aU) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer) 
                                                  >> 8U)) 
                                                | (~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer))))));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_clock) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift 
                = ((0x00007ffeU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift) 
                                   << 1U)) | (1U & 
                                              ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift) 
                                                 >> 0x0eU) 
                                                ^ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__ShortMode)
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift) 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift) 
                                                    >> 0x0dU))) 
                                               | (~ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift))))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_clock = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut
                [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Period];
        }
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc = 1U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load;
        }
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk) 
         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__lc_on_1))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        if ((1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled) 
                      >> 1U)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc = 1U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load;
        }
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk) 
         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__lc_on_1))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        if ((1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled) 
                      >> 3U)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc = 1U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load;
        }
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk) 
         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__lc_on_1))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__ClkE) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__line_reload) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod_1;
        } else if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrZero)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr 
                = (0x0000007fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr) 
                                  - (IData)(1U)));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_reload) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_vol;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count = 0x0fU;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_reload = 0U;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div 
                = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div) 
                                  - (IData)(1U)));
            if ((1U & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div))))) {
                if (((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count)) 
                     | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_loop))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count 
                        = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count) 
                                          - (IData)(1U)));
                }
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_vol;
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_reload) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_vol;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count = 0x0fU;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_reload = 0U;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div 
                = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div) 
                                  - (IData)(1U)));
            if ((1U & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div))))) {
                if (((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count)) 
                     | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_loop))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count 
                        = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count) 
                                          - (IData)(1U)));
                }
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_vol;
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_reload) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_vol;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count = 0x0fU;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_reload = 0U;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div 
                = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div) 
                                  - (IData)(1U)));
            if ((1U & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div))))) {
                if (((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count)) 
                     | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_loop))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count 
                        = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count) 
                                          - (IData)(1U)));
                }
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_vol;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrl)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__line_reload = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_reload = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_disabled 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 4U));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        if ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_clock = 1U;
        }
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt) 
                                     | (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt)) 
                     & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__subunit_write) {
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 5U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_loop 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 5U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_vol 
                = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_reload = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_disabled 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 4U));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt) 
                                     | (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt)) 
                     & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__subunit_write) {
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 5U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_loop 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 5U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_vol 
                = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_reload = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_disabled 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 4U));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt) 
                                     | (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt)) 
                     & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int)))));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__subunit_write) {
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 5U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_loop 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 5U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_vol 
                = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__n1627 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n902;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__n1965 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__n1289 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_old 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__phi2;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n544;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n542;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n540;
    if ((0x0cU != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int)
                ? (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout)
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_data_bus));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high = 0x00312856U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high = 0U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low = 0x00312856U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low = 0U;
    }
    if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color2;
        __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0 = 1U;
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[0U];
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v2 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[1U];
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v3 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[2U];
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)
                ? (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)))
                : 0U);
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed 
            = ((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed) 
                               << 1U)) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
                                          & (7U == 
                                             (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed 
            = ((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                               << 1U)) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read) 
                                          & (7U == 
                                             (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__active)) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__x_coord 
                = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__x_coord) 
                                  - (IData)(1U)));
        }
        if ((2U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2 
                                  >> 3U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__x_coord 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1 
                                  >> 3U));
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix2), 1U);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__active)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                         >> 2U))))) {
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix1 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix1), 1U);
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix2 
                    = VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix2), 1U);
            }
        }
        if ((4U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2 
                                  >> 0x0bU));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix2 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1 
                                  >> 0x0bU));
        }
        if ((8U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2 
                                  >> 0x13U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix1 
                = (0x000000ffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1 
                                  >> 0x13U));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bgp_en) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2 
                = (0x00007fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2) 
                                  >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1 
                = (0x00008000U | (0x00007fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1) 
                                                 >> 1U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3 
                = ((0x0100U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3)) 
                   | (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3) 
                                     >> 1U)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4 
                = ((0x0100U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4)) 
                   | (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4) 
                                     >> 1U)));
            if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2 
                    = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2)) 
                       | ((((((2U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                   >> 1U))) 
                             << 6U) | (((2U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                 >> 3U))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                          >> 5U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                         >> 5U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                           >> 7U))))) 
                          << 8U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1 
                    = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1)) 
                       | ((((((2U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                                   >> 1U))) 
                             << 6U) | (((2U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                                 >> 3U))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                                          >> 5U))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                                         >> 5U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0) 
                                                           >> 7U))))) 
                          << 8U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3 
                    = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3)) 
                       | (0x00000100U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_attribute_table) 
                                         << 8U)));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4 
                    = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4)) 
                       | (0x00000100U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_attribute_table) 
                                         << 7U)));
            }
            if ((6U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din;
            }
            if ((4U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_attribute_table 
                    = (3U & ((IData)((0U == (0x0042U 
                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v))))
                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din)
                              : ((IData)((2U == (0x0042U 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v))))
                                  ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                     >> 2U) : ((IData)(
                                                       (0x0040U 
                                                        == 
                                                        (0x0042U 
                                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v))))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                   >> 4U)
                                                : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din) 
                                                   >> 6U)))));
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr 
                = (0x0000000eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                                  << 1U));
        }
        if (((0x0153U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__render_ena;
        }
        if ((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr = 0U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_attr) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_x 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
                         >> 6U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_y 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
                         >> 7U));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a_byte 
                = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a));
        }
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3);
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__upper_color 
                = (3U & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2 
                         >> 1U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__aprio 
                = (1U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2);
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_read_delayed) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_latch 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_y) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_y 
                = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr) 
                                  - (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__dummy_sprite 
                = (1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_range) 
                            & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                               >> 1U))));
        }
        if (((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_tile 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus;
        if ((0U < vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high)) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high 
                = (0x00ffffffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high 
                                  - (IData)(1U)));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout 
                = (0x1fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout));
        }
        if ((0U < vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low)) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low 
                = (0x00ffffffU & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low 
                                  - (IData)(1U)));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout 
                = (0xe0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout));
        }
        if (((2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                >> 1U))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_name_table 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2 = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1 = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3 = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4 = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_name_table = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0 = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_attribute_table = 0U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite0_hit_bg = 0U;
        } else if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spr0_hit) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite0_hit_bg = 1U;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_read_delayed 
            = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                     >> 2U));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SeqPos 
                = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SeqPos) 
                         - (IData)(1U)));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr 
                = (0x00000fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr) 
                                  - (IData)(1U)));
        }
        if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SeqPos 
                = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SeqPos) 
                         - (IData)(1U)));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr 
                = (0x00000fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr) 
                                  - (IData)(1U)));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Dmc__write) {
        if ((0U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume 
                    = (0x0000007fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr 
            = ((0x000001feU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr) 
                               << 1U)) | (1U & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr) 
                                                  >> 8U) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr) 
                                                  >> 4U)) 
                                                | (~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr))))));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_clock) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift 
                = (0x0000007fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift) 
                                  >> 1U));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_clock = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut
                [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__frequency];
            if ((7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence 
                    = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer)));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_buffer;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence)))) {
                if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift))) {
                    if ((1U & (~ (0x0000003fU == (0x0000003fU 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next) 
                                                     >> 1U)))))) {
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume 
                            = ((0x81U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume)) 
                               | (0x0000007eU & (((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next) 
                                                   >> 1U)) 
                                                 << 1U)));
                    }
                } else if ((0U != (0x0000003fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next) 
                                                  >> 1U)))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume 
                        = ((0x81U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume)) 
                           | (0x0000007eU & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next) 
                                               >> 1U) 
                                              - (IData)(1U)) 
                                             << 1U)));
                }
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer = 1U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read) {
        if ((2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high = 1U;
        } else if ((4U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high = 1U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low = 1U;
        } else if ((7U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((0x3fU == (0x0000003fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                          >> 8U)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low = 1U;
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high = 1U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low = 1U;
            }
        }
    } else if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high = 1U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low = 1U;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n917 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n918 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333;
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr = 0U;
        if ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[0U];
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr 
            = ((6U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                      << 1U)) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__render_ena));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ1__write) {
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((2U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    if ((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SeqPos = 0U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ2__write) {
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((2U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    if ((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SeqPos = 0U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_reset_2)
                ? 0x7fffU : ((0x00007ffeU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame) 
                                             << 1U)) 
                             | (1U & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame) 
                                        >> 0x0eU) ^ 
                                       ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame) 
                                        >> 0x0dU)) 
                                      | (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)))))));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next = 0U;
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0 
            = (0x0000003fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U]));
        __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0 = 1U;
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v1 
            = (0x0000003fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U]));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v2 
            = (0x0000003fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U]));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v3 
            = (0x0000003fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U]));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v4 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 8U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v5 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 8U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v6 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 8U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v7 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 8U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v8 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 0x10U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v9 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 0x10U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v10 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 0x10U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v11 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 0x10U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v12 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 0x18U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v13 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 0x18U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v14 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 0x18U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v15 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 0x18U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v16 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 0x20U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v17 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 0x20U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v18 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 0x20U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v19 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 0x20U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v20 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 0x28U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v21 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 0x28U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v22 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 0x28U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v23 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 0x28U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v24 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 0x30U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v25 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 0x30U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v26 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 0x30U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v27 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 0x30U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v28 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] 
                                      >> 0x38U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v29 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] 
                                      >> 0x38U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v30 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] 
                                      >> 0x38U)));
        __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v31 
            = (0x0000003fU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] 
                                      >> 0x38U)));
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_reload = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_reload = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_reload = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame = 0x7fffU;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SeqPos = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SeqPos = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr = 0U;
        if ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[0U];
        }
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed) 
              >> 2U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pal_writes_valid))) {
            __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 
                = (0x0000003fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus));
            __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2;
            __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32 = 1U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__corrupting) {
            __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette
                [((0x00000010U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2)) 
                  | ((0x0000000cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                     | (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2))))];
            __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 
                = ((0x00000010U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2)) 
                   | (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)));
            __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr = 0U;
        __Vdly__nes_core_top__DOT__joy1_shift = 0U;
        __Vdly__nes_core_top__DOT__joy2_shift = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__sample_latch = 0x0fU;
    } else {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joy_out))) {
            __Vdly__nes_core_top__DOT__joy1_shift = vlSelfRef.joy1_buttons;
        } else if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__last_joyclk0)) 
                          & (IData)(vlSelfRef.nes_core_top__DOT__joypad_clock)))) {
            __Vdly__nes_core_top__DOT__joy1_shift = 
                (0x0000007fU & ((IData)(vlSelfRef.nes_core_top__DOT__joy1_shift) 
                                >> 1U));
        }
        if ((2U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joy_out))) {
            __Vdly__nes_core_top__DOT__joy2_shift = vlSelfRef.joy2_buttons;
        } else if (((~ (IData)(vlSelfRef.nes_core_top__DOT__last_joyclk1)) 
                    & ((IData)(vlSelfRef.nes_core_top__DOT__joypad_clock) 
                       >> 1U))) {
            __Vdly__nes_core_top__DOT__joy2_shift = 
                (0x0000007fU & ((IData)(vlSelfRef.nes_core_top__DOT__joy2_shift) 
                                >> 1U));
        }
    }
    if ((1U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__applied_period))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__sample_latch 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__TriSample;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326;
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__set_irq) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_interrupt_buffer = 1U;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag = 1U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__odd_or_even = 1U;
    } else if ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__odd_or_even 
            = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks)) 
               | (3U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))))) {
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_ppu_cycle)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu 
                = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_ce) 
                    | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce) 
                       & (0x0cU < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))))
                    ? 1U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))));
        }
        __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce)
                ? 1U : (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_ce) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_tick = 0U;
        } else if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_tick 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick)));
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_sys 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_sys)));
    if ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__freeze_clocks = 0U;
    }
    if ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt 
            = (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt) 
                              - (IData)(1U)));
    }
    if ((((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line) 
            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next)) 
           & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active))) 
          | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__end_of_line) 
              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active))) 
         & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt)))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__freeze_clocks = 1U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt = 7U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_lastval = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__cycle_paused = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_pre_render = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame = 0U;
    } else {
        if ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))) {
            if (((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state)) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request)) 
                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state = 1U;
            }
            if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state = 0U;
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__dma__sprite_trigger) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr 
                    = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout) 
                       << 8U);
                __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = 1U;
            }
            if ((((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state)) 
                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = 3U;
            }
            if (((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
                   >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce)) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = 1U;
            }
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
                  >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr 
                    = ((0xff00U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr)) 
                       | (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__new_sprite_dma_addr)));
            }
            if (((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
                   >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce)) 
                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__new_sprite_dma_addr) 
                    >> 8U))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = 0U;
            }
            if ((2U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_lastval 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus;
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__clockgen_pause__ce) {
            if ((0x0152U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next 
                    = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_pre_render) 
                        & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame))) 
                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__render_ena));
            }
            __Vdly__nes_core_top__DOT__nes_inst__DOT__cycle_paused 
                = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__end_of_line)
                    ? 0U : (0x000001ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused))));
        }
        if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__clockgen_pause__ce) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__end_of_line))) {
            if ((0x0104U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused = 0x000001ffU;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_pre_render = 1U;
            } else {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused)));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_pre_render = 0U;
            }
            if ((0x00ffU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame 
                    = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame)));
            }
        }
    }
    if ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__last_sys_type))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu = 1U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu = 1U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_sys = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_tick_count = 0U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_pause_ce = 0U;
    }
    if (__VdlySet__nes_core_top__DOT__ciram__v0) {
        vlSelfRef.nes_core_top__DOT__ciram[__VdlyDim0__nes_core_top__DOT__ciram__v0] 
            = __VdlyVal__nes_core_top__DOT__ciram__v0;
    }
    if (__VdlySet__nes_core_top__DOT__chr_rom__v0) {
        vlSelfRef.nes_core_top__DOT__chr_rom[__VdlyDim0__nes_core_top__DOT__chr_rom__v0] 
            = __VdlyVal__nes_core_top__DOT__chr_rom__v0;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[0U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v0;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[1U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v1;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[2U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v2;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[3U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe__v3;
    }
    if (__VdlySet__nes_core_top__DOT__cpu_ram__v0) {
        vlSelfRef.nes_core_top__DOT__cpu_ram[__VdlyDim0__nes_core_top__DOT__cpu_ram__v0] 
            = __VdlyVal__nes_core_top__DOT__cpu_ram__v0;
    }
    if (__VdlySet__nes_core_top__DOT__cart_ram__v0) {
        vlSelfRef.nes_core_top__DOT__cart_ram[__VdlyDim0__nes_core_top__DOT__cart_ram__v0] 
            = __VdlyVal__nes_core_top__DOT__cart_ram__v0;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int;
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[0U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v0;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[1U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v1;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[2U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v2;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[3U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v3;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[4U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v4;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[5U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v5;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[6U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v6;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[7U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v7;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[8U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v8;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[9U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v9;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[10U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v10;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[11U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v11;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[12U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v12;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[13U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v13;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[14U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v14;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[15U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v15;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[16U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v16;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[17U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v17;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[18U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v18;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[19U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v19;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[20U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v20;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[21U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v21;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[22U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v22;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[23U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v23;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[24U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v24;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[25U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v25;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[26U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v26;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[27U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v27;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[28U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v28;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[29U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v29;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[30U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v30;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[31U] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v31;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v32;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette__v33;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count;
    vlSelfRef.nes_core_top__DOT__joy1_shift = __Vdly__nes_core_top__DOT__joy1_shift;
    vlSelfRef.nes_core_top__DOT__joy2_shift = __Vdly__nes_core_top__DOT__joy2_shift;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr;
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        if ((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_clock = 1U;
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low;
    if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset)))) {
        if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eb_sr 
                = ((6U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eb_sr) 
                          << 1U)) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eo_sr 
                = ((6U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eo_sr) 
                          << 1U)) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__old_rendering 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
                         >> 1U));
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state;
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ1__write) {
        if ((0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Duty 
                = (3U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 6U));
        }
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepNegate 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                             >> 3U));
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ2__write) {
        if ((0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Duty 
                = (3U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 6U));
        }
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepNegate 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                             >> 3U));
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode_2 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode;
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_interrupt_buffer = 0U;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_3 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_2;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_old = 0U;
        vlSelfRef.hblank = 0U;
        vlSelfRef.hsync = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Duty = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Duty = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepNegate = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepNegate = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer_1 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode_2 = 0U;
        vlSelfRef.vsync = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_interrupt_buffer = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip = 0U;
        vlSelfRef.vblank = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj0_on_line = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_3 = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        vlSelfRef.hblank = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hblank_period;
        vlSelfRef.hsync = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hsync_period;
        if (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear_nmi)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__entering_vblank))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured = 1U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear_nmi) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured = 0U;
        }
        if (((0x00f4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hsync_period))) {
            vlSelfRef.vsync = 1U;
        }
        if (((0x00f7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hsync_period))) {
            vlSelfRef.vsync = 0U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) {
            if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                             >> 7U));
            }
            if ((0U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((1U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale 
                        = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus));
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip 
                        = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                 >> 1U));
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip 
                        = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                 >> 2U));
                }
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip = 0U;
            }
        }
        if (((0x00f1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hblank_period))) {
            vlSelfRef.vblank = 1U;
        }
        if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hblank_period))) {
            vlSelfRef.vblank = 0U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering) {
            if ((0x0040U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                if ((0x0100U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                    if ((0x0140U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj0_on_line 
                            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__sprite0_curr;
                    }
                }
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_hscroll) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x7bffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x00000400U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x7fe0U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_vscroll) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x07ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x00007800U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x000003e0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)));
        }
        if ((((7U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
              & (((0x00ffU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                  | ((0x0140U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                     & (0x014fU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering))) 
             | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__vram0__trigger_2007) 
                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x7fe0U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x0000001fU & (((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x7bffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x00000400U & (((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                        >> 0x0aU) ^ 
                                       (0x0000001fU 
                                        == (0x0000001fU 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)))) 
                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask) 
                                         >> 0x0aU)) 
                                     << 0x0000000aU)));
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_hscroll) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x7fe0U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x0000001fU & (((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x7bffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x00000400U & (((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                            >> 0x0aU) 
                                           ^ (0x0000001fU 
                                              == (0x0000001fU 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)))) 
                                          & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask) 
                                             >> 0x0aU)) 
                                         << 0x0000000aU)));
            }
        }
        if ((((0x00ffU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
              | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__vram0__trigger_2007)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x0fffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x00007000U & ((((IData)(1U) 
                                       + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                          >> 0x0cU)) 
                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask) 
                                         >> 0x0cU)) 
                                     << 0x0000000cU)));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x000003e0U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = ((0x77ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                   | (0x00000800U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
            if ((7U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                              >> 0x0cU)))) {
                if ((0x1dU == (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                              >> 5U)))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                        = (0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v));
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                        = ((0x77ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                           | (0x00000800U & (((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                  >> 0x0bU)) 
                                              << 0x0000000bU) 
                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
                } else {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                        = ((0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                           | (0x000003e0U & ((((IData)(1U) 
                                               + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                  >> 5U)) 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask) 
                                                 >> 5U)) 
                                             << 5U)));
                }
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_vscroll) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x0fffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x00007000U & ((((IData)(1U) 
                                           + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                              >> 0x0cU)) 
                                          & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask) 
                                             >> 0x0cU)) 
                                         << 0x0000000cU)));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x000003e0U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x77ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x00000800U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
                if ((7U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                  >> 0x0cU)))) {
                    if ((0x1dU == (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                  >> 5U)))) {
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                            = (0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t));
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                            = ((0x77ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                               | (0x00000800U & (((~ 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                    >> 0x0bU)) 
                                                  << 0x0000000bU) 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask))));
                    } else {
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                            = ((0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                               | (0x000003e0U & ((((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                    >> 5U)) 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask) 
                                                     >> 5U)) 
                                                 << 5U)));
                    }
                }
            }
        }
        if ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering)) 
              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__vram0__trigger_2007)) 
             & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear)))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
                = (0x00007fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                  + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_incr)
                                      ? 0x0020U : 1U)));
        }
        if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
             & (0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                = ((0x73ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                   | (0x00000c00U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                     << 0x0000000aU)));
        } else if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
                    & (5U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x7c1fU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x000003e0U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                         << 2U)));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x0fffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x00007000U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                         << 0x0000000cU)));
            } else {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                    = ((0x7fe0U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                         >> 3U)));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x 
                    = (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus));
            }
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch 
                = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch)));
        } else if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
                    & (6U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch 
                = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch)));
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
                = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch)
                    ? ((0x7f00U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus))
                    : ((0x00ffU & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)) 
                       | (0x00003f00U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                         << 8U))));
        } else if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read) 
                    & (2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch = 0U;
        }
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift 
            = ((2U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                      << 1U)) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
                                  & (6U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) 
                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch)));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t = 0U;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch = 0U;
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift;
    if (vlSelfRef.reset) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active = 0U;
    } else if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu = 1U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu = 1U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_sys = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_tick_count = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active = 1U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu_pause 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu)));
        if ((0xffU > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_delay))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_delay 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_delay)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks)) 
                   | (3U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause))))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu_pause 
                = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause)
                    ? 1U : (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause))));
            if (((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause) 
                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused) 
                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused) 
                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu))) 
                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame) 
                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame)))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_pause_ce = 1U;
            }
        }
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_delay = 0U;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__freeze_clocks;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu_pause;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__corepause_active;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_tick;
    if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset)))) {
        if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt1 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt1 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v0 = 1U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data = 0xffU;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_overflow = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr = 0U;
        __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v1 = 1U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_rendering) 
             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering))) {
            if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_using_secondary) 
                 != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__using_secondary))) {
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                      << 3U)];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 
                    = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                       << 3U);
                __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0 = 1U;
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp
                    [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur;
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(1U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1 
                    = (1U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(2U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2 
                    = (2U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(3U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3 
                    = (3U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(4U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4 
                    = (4U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(5U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5 
                    = (5U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(6U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6 
                    = (6U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                    [(7U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last) 
                            << 3U))];
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7 
                    = (7U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur) 
                             << 3U));
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count = 0U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering) {
            if ((0x0040U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                if ((1U & (~ (7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter))))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex 
                        = (0x0000003fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex)));
                    if ((((0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
                          >= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                          [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                            << 2U)]) & ((0x000000ffU 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
                                        < (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                           [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                             << 2U)] 
                                           + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1)
                                               ? 0x00000010U
                                               : 8U))))) {
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter)));
                    }
                }
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data = 0xffU;
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr = 0U;
                if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_wr_enabled) {
                        __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65 
                            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr;
                        __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65 = 1U;
                        __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v66 
                            = (0x00000020U | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr));
                    }
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)) 
                                 >> 5U));
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)));
                }
            } else if ((0x0100U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__evaluating) {
                    if (((7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter)) 
                         & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr)))) {
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr 
                            = (1U & (((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex)) 
                                     >> 6U));
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex 
                            = (0x0000003fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex)));
                        if ((((0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
                              >= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                              [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                << 2U)]) & ((0x000000ffU 
                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
                                            < (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                               [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                                 << 2U)] 
                                               + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1)
                                                   ? 0x00000010U
                                                   : 8U))))) {
                            if ((8U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex))) {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex 
                                    = (0x0000000fU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex)));
                                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                      << 2U)];
                                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex) 
                                             << 2U)));
                                __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67 = 1U;
                                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [(1U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                            << 2U))];
                                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + (1U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex) 
                                                   << 2U))));
                                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [(2U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                            << 2U))];
                                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + (2U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex) 
                                                   << 2U))));
                                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [(3U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex) 
                                            << 2U))];
                                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70 
                                    = (0x0000003fU 
                                       & ((IData)(0x20U) 
                                          + (3U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex) 
                                                   << 2U))));
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                        if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_wr_enabled) 
                             & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr)))) {
                            __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 
                                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_dbus;
                            __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 
                                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr;
                            __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71 = 1U;
                        } else {
                            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data 
                                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp
                                [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr];
                        }
                        if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count))) {
                            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_range) 
                                  & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line))) 
                                 & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr)))) {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count = 1U;
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                    = (1U & (((IData)(1U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)) 
                                             >> 8U));
                                if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr) {
                                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_overflow = 1U;
                                } else {
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr 
                                        = (1U & (((IData)(1U) 
                                                  + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)) 
                                                 >> 5U));
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr 
                                        = (0x0000001fU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)));
                                }
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                            } else if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)))) {
                                if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr) 
                                     & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr)))) {
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                        = (1U & (((IData)(1U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr) 
                                                      >> 2U))) 
                                                 >> 6U));
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                        = ((0x000000fcU 
                                            & (((IData)(1U) 
                                                + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr) 
                                                   >> 2U)) 
                                               << 2U)) 
                                           | (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr))));
                                } else {
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                        = (1U & (((IData)(4U) 
                                                  + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)) 
                                                 >> 8U));
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                        = (0xfcU & 
                                           ((IData)(4U) 
                                            + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count))) {
                            if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_range) 
                                 & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr)))) {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                    = (1U & (((IData)(1U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)) 
                                             >> 8U));
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                            } else if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr) 
                                        & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr)))) {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                    = (1U & (((IData)(5U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)) 
                                             >> 8U));
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                    = (0x000000ffU 
                                       & ((IData)(5U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                            } else {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                    = (1U & (((IData)(1U) 
                                              + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)) 
                                             >> 8U));
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                    = (0xfcU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                            }
                            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr) {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr = 1U;
                            } else {
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [(0x000000fcU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr))];
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [(1U | (0x000000fcU 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)))];
                                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr 
                                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                    [(2U | (0x000000fcU 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)))];
                                if (((((0U != (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr) 
                                                >> 2U))) 
                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y) 
                                          == vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                          [(0x000000fcU 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr))])) 
                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile) 
                                         == vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                         [(1U | (0x000000fcU 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)))])) 
                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr) 
                                        == vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                        [(2U | (0x000000fcU 
                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)))]))) {
                                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count 
                                        = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count)));
                                }
                            }
                        } else {
                            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
                                = (1U & (((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)) 
                                         >> 8U));
                            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                                = (0x000000ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                        }
                    } else {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data 
                            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)
                                ? vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp
                               [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr]
                                : (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                                   [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr] 
                                   & ((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr)))
                                       ? 0xe3U : 0xffU)));
                    }
                    if (((((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y) 
                             == vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[32U]) 
                            & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile) 
                               == vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[33U])) 
                           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr) 
                              == vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[34U])) 
                          & (0x00ffU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                         & (7U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count)))) {
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count)));
                    }
                }
                if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr = 1U;
                }
            } else if ((0x0140U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp
                    [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr];
                if ((((3U > (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                      | (7U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) 
                     & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr)))) {
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)) 
                                 >> 5U));
                    __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)));
                }
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[0U];
            }
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam
                [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr];
        }
        if (((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count)) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count)));
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_overflow = 1U;
            } else {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)) 
                             >> 5U));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)));
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_overflow = 0U;
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_data_write) {
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                    = (0x000000fcU & (((IData)(1U) 
                                       + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr) 
                                          >> 2U)) << 2U));
            } else {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr)));
                __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 
                    = ((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr)))
                        ? (0xe3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus))
                        : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus));
                __VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr;
                __VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8 = 1U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus;
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_addr_write) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus;
        }
        if ((((0x003fU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
              | ((0x00ffU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                 | (0x0153U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) 
             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr = 0U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset)))) {
        if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size;
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr;
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v0) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[0U] = 0xffU;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v1) {
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__Vilp1] = 0xffU;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v64;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v0;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v1;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v2;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v3;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v4;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v5;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v6;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v7;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v65] = 0xffU;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v66] = 0xffU;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v67;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v68;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v69;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v70;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp__v71;
    }
    if (__VdlySet__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__VdlyDim0__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8] 
            = __VdlyVal__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam__v8;
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Noi__write) 
         & (2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__ShortMode 
            = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                     >> 7U));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Period 
            = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
    }
    vlSelfRef.nes_core_top__DOT__last_joyclk0 = ((1U 
                                                  & (~ (IData)(vlSelfRef.reset))) 
                                                 && (1U 
                                                     & (IData)(vlSelfRef.nes_core_top__DOT__joypad_clock)));
    vlSelfRef.nes_core_top__DOT__last_joyclk1 = ((1U 
                                                  & (~ (IData)(vlSelfRef.reset))) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__joypad_clock) 
                                                        >> 1U)));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joy_out 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joy_latch;
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs) 
         & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)))) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joy_out 
                = (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joy_latch 
            = (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__lc_on_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__lc_on_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__lc_on_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_reset_2 = 0U;
    }
    if ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)) 
          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_ce)) 
         & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d) 
            | ((0x7185U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
               | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_2))))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_reset_2 = 1U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk) {
        if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepPeriod;
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepEnable) 
                  & (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepShift))) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ValidFreq))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period 
                    = (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__NewSweepPeriod));
            }
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider 
                = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepReset) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepPeriod;
        }
        if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepPeriod;
            if ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepEnable) 
                  & (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepShift))) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ValidFreq))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period 
                    = (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__NewSweepPeriod));
            }
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider 
                = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepReset) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepPeriod;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepReset = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepReset = 0U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ2__write) {
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period 
                        = ((0x0700U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period)) 
                           | (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
                } else if ((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period 
                        = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period)) 
                           | (0x00000700U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                                             << 8U)));
                }
            }
            if ((1U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepReset = 1U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepPeriod 
                    = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                             >> 4U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepEnable 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                             >> 7U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepShift 
                    = (7U & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ1__write) {
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period 
                        = ((0x0700U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period)) 
                           | (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
                } else if ((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period 
                        = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period)) 
                           | (0x00000700U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                                             << 8U)));
                }
            }
            if ((1U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepReset = 1U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepPeriod 
                    = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                             >> 4U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepEnable 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                             >> 7U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepShift 
                    = (7U & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
            }
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__n1627;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__n1965;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__n1289;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__aprio)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__aprio)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__aprio)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__aprio)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__aprio)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__aprio)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix1) 
            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix2) 
                                << 0x0000000bU) | (
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__x_coord) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__upper_color) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__aprio)))));
    __Vtableidx159 = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823 
        = Vnes_core_top__ConstPool__TABLE_h057380b2_0
        [__Vtableidx159];
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__y_f 
        = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_y) 
                          ^ (- (IData)((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_y)))));
    vlSelfRef.dbg_nmi_occ = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n188 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741 
        = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913) 
                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)));
    __Vtableidx157 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SeqPos) 
                       << 2U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Duty));
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__DutyEnabled 
        = Vnes_core_top__ConstPool__TABLE_h5f8c61fe_0
        [__Vtableidx157];
    __Vtableidx158 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SeqPos) 
                       << 2U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Duty));
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__DutyEnabled 
        = Vnes_core_top__ConstPool__TABLE_h5f8c61fe_0
        [__Vtableidx158];
    if ((IData)(((0x0015U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write)))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer 
            = (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n917;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n918;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4540 
        = ((((0x10U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
             << 4U) | (((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                        << 3U) | ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                  << 2U))) | ((((6U 
                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                | ((7U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                   | (0x11U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)))) 
                                               << 1U) 
                                              | (3U 
                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494 
        = (((((((0x0eU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                << 3U) | ((0x0dU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                          << 2U)) | (((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                      << 1U) | (0x0fU 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)))) 
             << 0x0000000bU) | (((((0x0bU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                   << 3U) | ((0x0aU 
                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                             << 2U)) 
                                 | (((9U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                     << 1U) | (8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)))) 
                                << 7U)) | ((((((7U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                               << 3U) 
                                              | ((0x11U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                 << 2U)) 
                                             | (((6U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                 << 1U) 
                                                | (3U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)))) 
                                            << 3U) 
                                           | (((2U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                               << 2U) 
                                              | (((1U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                  << 1U) 
                                                 | (0U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932))))));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Tri__write) {
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((2U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__line_reload = 1U;
                }
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__ShortMode = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Period = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_loop = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_vol = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_loop = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_vol = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_loop = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_vol = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_reset_2 = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) {
            if ((0U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((1U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield 
                        = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                 >> 3U));
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects 
                        = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                 >> 4U));
                }
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects = 0U;
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Dmc__write) {
        if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__frequency 
                = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
        }
    }
    if ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))) {
        if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr))) {
            if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc) 
                 & (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos)));
            }
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__applied_period 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr 
                = (0x000007ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr) 
                                  - (IData)(1U)));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_buffer 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_data_bus;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_2 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_1;
        if ((1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled) 
                      >> 2U)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Dmc__write) {
        if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                          >> 7U)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq = 0U;
            }
        } else if ((1U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((2U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((3U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    if ((5U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq = 0U;
                        if ((1U & (((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                                    >> 4U) & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive))))) {
                            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
                                = ((0x8000U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr)) 
                                   | (0x00004000U | 
                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_address) 
                                       << 6U)));
                            __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
                                = (0x00007fffU | (IData)(__VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr));
                            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining 
                                = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_length) 
                                   << 4U);
                        }
                        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive 
                            = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                                     >> 4U));
                    }
                }
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive;
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
                = ((0x8000U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr)) 
                   | (0x00007fffU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr))));
            __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
                = (0x00007fffU | (IData)(__VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr));
            if ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining))) {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining 
                    = (0x00000fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining) 
                                      - (IData)(1U)));
            } else {
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
                    = ((0x8000U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr)) 
                       | (0x00004000U | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_address) 
                                         << 6U)));
                __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
                    = (0x00007fffU | (IData)(__VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr));
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining 
                    = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_length) 
                       << 4U);
                __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive 
                    = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__loop;
                if (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__loop)) 
                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__irq_enable))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq = 1U;
                }
            }
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Dmc__write) {
        if ((0U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((1U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                if ((2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_address 
                        = vlSelfRef.nes_core_top__DOT__cpumem_dout;
                }
                if ((2U != (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                    if ((3U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_length 
                            = vlSelfRef.nes_core_top__DOT__cpumem_dout;
                    }
                }
            }
        }
        if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__loop 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 6U));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__irq_enable 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 7U));
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Tri__write) {
        if ((0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod 
                = (0x0000007fU & (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrl 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 7U));
        }
        if ((0U != (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            if ((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period 
                    = ((0x0700U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period)) 
                       | (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout));
            } else if ((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period 
                    = ((0x00ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period)) 
                       | (0x00000700U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                                         << 8U)));
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n916 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__line_reload = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__frequency = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset = 1U;
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n916 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278)
                ? (0x00000030U | ((((8U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                                           >> 4U)) 
                                    | (4U & (((0x18U 
                                               == (0x0000001fU 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n433)
                                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                                                  >> 6U)) 
                                             << 2U))) 
                                   << 4U) | ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)
                                                ? (1U 
                                                   | (2U 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n438)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n438)) 
                                                   | (1U 
                                                      & (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)) 
                                                          & ((4U 
                                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
                                                             & (0U 
                                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))) 
                                                         | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n438))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399)) 
                                                | (1U 
                                                   & ((0x18U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n427)
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399)))))))
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p));
    }
    if ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset = 0U;
    }
    vlSelfRef.dbg_cpu_pc = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923;
    if ((IData)((((0x0015U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                  & (0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774))) 
                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt = 0U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__set_irq) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt = 1U;
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__DisableFrameInterrupt) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt = 0U;
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__frame_counter__write_ce) 
         & (3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode 
            = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                     >> 7U));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__DisableFrameInterrupt 
            = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                     >> 6U));
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_2 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_1;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next 
            = (0x000000ffU & ((1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt) 
                                     | (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int)))))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int) 
                                  - (IData)(1U))));
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt)) 
                     & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int)))));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_1 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_1 = 0U;
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__frame_counter__write_ce) 
         & (3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_1 = 1U;
    }
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4258 
        = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                  ^ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943)) 
                 >> 7U));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4468 
        = (4U < (0x0000000fU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943)) 
                                >> 4U)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4406 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447 
        = (0x0000007fU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943)) 
                          >> 1U));
    vlSelfRef.dbg_vbl_en = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__new_sprite_dma_addr 
        = (0x000001ffU & ((IData)(1U) + (0x000000ffU 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr))));
    vlSelfRef.dbg_dma_spr_state = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_3));
    __VdfgRegularize_h4af1c392_0_12 = ((2U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2) 
                                               >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x)) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1) 
                                                >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__last_sys_type = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_ppu_cycle 
        = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_tick_count)) 
           & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n899;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n916;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__odd_or_even;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed;
    __VdfgRegularize_hebeb780c_0_106 = (((0x4000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494)) 
                                         | (0x2000U 
                                            == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))) 
                                        | (((0x1000U 
                                             == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494)) 
                                            | (0x0800U 
                                               == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))) 
                                           | ((0x0400U 
                                               == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494)) 
                                              | ((0x0200U 
                                                  == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494)) 
                                                 | ((0x0100U 
                                                     == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494)) 
                                                    | (0x0080U 
                                                       == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494)))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__div_cpu;
    vlSelfRef.dbg_nmi = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi;
    nes_core_top__DOT__nes_inst__DOT__pause_cpu = (1U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
                                                      | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state) 
                                                         | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__cycle_paused;
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_buffer = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer = 0U;
        if (vlSelfRef.reset) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode = 0U;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__sprite0_curr = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_2 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_incr = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_cycle = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) {
            if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                             >> 3U));
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                             >> 4U));
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt = 0U;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt = 0U;
            }
        }
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering) {
            if ((0x0040U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                if ((0x0100U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__evaluating) {
                        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                            if ((0x0041U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
                                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__sprite0_curr 
                                    = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_range) 
                                       & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)));
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
             & (0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_incr 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                         >> 2U));
        }
        if ((0x0152U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next 
                = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
                    & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame))) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__render_ena));
        }
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_cycle 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line)
                ? 0U : (0x000001ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu_cycle;
    vlSelfRef.dbg_cpu_regs = (((QData)((IData)((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                    << 0x00000018U) 
                                                                   | (0x00ff0000U 
                                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915) 
                                                                         << 0x00000010U))) 
                                                                  | ((0x0000ff00U 
                                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914) 
                                                                         << 8U)) 
                                                                     | (0x000000ffU 
                                                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)))))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448 
        = ((0x00000080U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                           << 7U)) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
              >> 3U));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207 
        = (0x0000007fU & (((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                           << 1U)) 
                           | (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p))) 
                          + (1U | (0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                  << 1U)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327 
        = (0x0000007fU & (((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                           << 1U)) 
                           | (1U & ((~ ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                        | ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                           | ((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                              | ((7U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                 | ((9U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                    | ((0x0bU 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932)) 
                                                       | (0x0eU 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932))))))))) 
                                    | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)))) 
                          - (1U | (0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                  << 1U)))));
    vlSelfRef.dbg_odd_or_even = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even;
    vlSelfRef.dbg_en_bg = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield;
    vlSelfRef.dbg_en_obj = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__render_ena 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__vram0__trigger_2007 
        = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed) 
                  | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed)) 
                 >> 3U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrZero 
        = (1U & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__TriSample 
        = (0x0000000fU & (((1U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__applied_period)) 
                           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__allow_us))
                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos) 
                              ^ (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos) 
                                                   >> 4U))))))
                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__sample_latch)));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__subunit_write) {
        if ((1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc = 1U;
            __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load;
        }
    }
    if (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk) 
         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1))) {
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int 
            = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt)
                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int)
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc = 0U;
        }
    }
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__subunit_write) {
        if ((1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt 
                = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 7U));
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.dbg_cpu_ce = (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_ce 
        = (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__phi2 
        = ((4U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           & (0x0cU > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cart_pre 
        = ((6U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           & (0x0aU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.dbg_pause_cpu = nes_core_top__DOT__nes_inst__DOT__pause_cpu;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hsync_period 
        = ((0x0116U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x012eU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hblank_period 
        = ((0x010dU <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x0146U >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    vlSelfRef.cycle = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks) 
                        & (6U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt)))
                        ? 0x0154U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active)
                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused)
                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    __VdfgRegularize_h4af1c392_0_4 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip) 
                                       | (8U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eb_sr) 
                                         >> 1U));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip) 
            | (8U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eo_sr) 
              >> 1U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en 
        = ((0x0101U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x0141U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9 
        = ((3U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
           | (4U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_rendering = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_using_secondary = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_rendering 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_using_secondary 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__using_secondary;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last 
        = (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_using_secondary)
                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)
                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr) 
                              >> 3U)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4237 
        = (0x0000003fU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931) 
                           & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                               >> 3U) & (9U < (0x0000001fU 
                                               & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207) 
                                                  >> 1U)))))
                           ? ((IData)(6U) + ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207) 
                                             >> 1U))
                           : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207) 
                              >> 1U)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379 
        = (0x0000003fU & ((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                          >> 3U)) - 
                          ((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                           >> 3U)) 
                           | (1U & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327) 
                                    >> 6U)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336 
        = (0x0000003fU & ((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                          >> 3U)) - 
                          ((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                           >> 3U)) 
                           | (1U & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327) 
                                    >> 5U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974 
        = (((1U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                          >> 5U))) << 2U) | (((5U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                              << 1U) 
                                             | ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U))) 
                                                | (7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                       >> 5U))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3996 
        = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                          >> 5U))) << 1U) | ((7U == 
                                              (7U & 
                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U))) 
                                             | (6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017 
        = (((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                          >> 2U))) << 2U) | (((2U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 2U))) 
                                              << 1U) 
                                             | ((0U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 2U))) 
                                                | ((1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 2U))) 
                                                   | (3U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                          >> 2U)))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4056 
        = (IData)(((0x18U == (0x1cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                   & (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846 
        = ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941));
    __Vtableidx32 = ((((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                       << 4U) | (((0x0dU == (0x0000000fU 
                                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 4U))) 
                                  << 3U) | ((5U == 
                                             (0x0000000fU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                 >> 4U))) 
                                            << 2U))) 
                     | (((4U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 4U))) 
                         << 1U) | (0U == (0x0000000fU 
                                          & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                             >> 4U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2380 
        = Vnes_core_top__ConstPool__TABLE_h652152d6_0
        [__Vtableidx32];
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3814 
        = (((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
            << 1U) | ((0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                      | (2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))));
    __VdfgRegularize_h4af1c392_0_11 = ((((3U == (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U))) 
                                         << 3U) | (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                        >> 5U))) 
                                                   << 2U)) 
                                       | (((1U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U))) 
                                           << 1U) | 
                                          (0U == (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2828 
        = ((8U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                  >> 4U))) | ((0x0cU 
                                               == (0x0000000fU 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 4U))) 
                                              | (0x0eU 
                                                 == 
                                                 (0x0000000fU 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 4U)))));
    __VdfgRegularize_hebeb780c_0_105 = ((2U == (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                        | ((3U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U))) 
                                           | ((0U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452 
        = (1U & ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                     >> 1U)) | (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437 
        = ((((0x0fU == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                       >> 4U))) << 3U) 
            | ((7U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 4U))) << 2U)) 
           | (((6U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 4U))) << 1U) 
              | (2U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                       >> 4U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017 
        = (IData)((0x4cU == (0xdfU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2142 
        = (IData)((0U == (0x13U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
            >> 1U) & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
           & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075 
        = (((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
            << 2U) | (((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                       << 1U) | (0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160 
        = ((((7U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                           >> 5U))) << 3U) | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                              << 2U)) 
           | (((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                             >> 5U))) << 1U) | (4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189 
        = (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
            | (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))) 
           & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
               >> 1U) & (2U != (3U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 6U)))));
    __Vtableidx160 = (((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                       << 8U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606 
        = Vnes_core_top__ConstPool__TABLE_h3e208df7_0
        [__Vtableidx160];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112 
        = (((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
            << 2U) | (((1U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                       << 1U) | (0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))));
    __Vtableidx161 = (((0x18U == (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                       << 6U) | (((0x0cU == (0x0000001fU 
                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                                  << 5U) | (0x0000001fU 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891 
        = Vnes_core_top__ConstPool__TABLE_h6979805f_0
        [__Vtableidx161];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225 
        = (0x0000ffffU & (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937)) 
                           & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936)) 
                              & ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
                                 & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923))
                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                              + ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937)) 
                                 & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936)) 
                                    & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937) 
           | (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941)) 
              | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499 
        = (((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 1U) | (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392 
        = (((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 1U) | (1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout 
        = (0x000000ffU & ((((0x1000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823)) 
                            | (0x0800U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))) 
                           | (((0x0400U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823)) 
                               | (0x0200U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))) 
                              | ((0x0100U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823)) 
                                 | ((0x0080U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823)) 
                                    | ((0x0040U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823)) 
                                       | (0x0020U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823)))))))
                           ? ((0x1000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                               ? 0U : ((0x0800U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                        ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915) 
                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944))
                                        : ((0x0400U 
                                            == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914) 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944))
                                            : ((0x0200U 
                                                == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944))
                                                : (
                                                   (0x0100U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741)
                                                    : 
                                                   ((0x0080U 
                                                     == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                                     ? 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923) 
                                                     >> 8U)
                                                     : 
                                                    ((0x0040U 
                                                      == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923)
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n188)
                                                       ? 
                                                      (0xefU 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p))
                                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)))))))))
                           : ((0x0010U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)
                               : ((8U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915)
                                   : ((4U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)
                                       : ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)
                                           : ((1U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823))
                                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl)
                                               : 0U)))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1;
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_2 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepReset = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepPeriod = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepEnable = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepShift = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepReset = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepPeriod = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepEnable = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepShift = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next = 0U;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_ce 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_old)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__phi2));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__DisableFrameInterrupt = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_1 = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
            = (0x8000U & (IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr));
        __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
            = (0x00007fffU | (IData)(__VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)) 
           & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
        = (((IData)(__Vdly__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr) 
            & (IData)(__VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr)) 
           | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr) 
              & (~ (IData)(__VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr))));
    __VdlyMask__nes_core_top__DOT__nes_inst__DOT__apu_dma_addr = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state) 
           & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)) 
              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__end_of_line 
        = (IData)(((0x0150U == (0x01f8U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused))) 
                   & ((0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused)) 
                      == ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next)
                           ? 3U : 4U))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_paused;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS 
        = ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag) 
                                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset)));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4 
        = ((IData)(__VdfgRegularize_h4af1c392_0_4) ? (IData)(__VdfgRegularize_h4af1c392_0_12)
            : 0U);
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_y 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_attr 
        = ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251 
        = (0x0000007fU & (((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                           >> 3U)) 
                           | (IData)((0U != (0x30U 
                                             & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4237))))) 
                          + (1U | (0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                  >> 3U)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425 
        = (((7U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                          >> 5U))) << 6U) | (((6U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                              << 5U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U))) 
                                                 << 4U) 
                                                | (IData)(__VdfgRegularize_h4af1c392_0_11))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2019 
        = (((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                          >> 5U))) << 6U) | (((5U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                              << 5U) 
                                             | (((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U))) 
                                                 << 4U) 
                                                | (IData)(__VdfgRegularize_h4af1c392_0_11))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2790 
        = ((((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                           >> 5U))) << 3U) | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 5U))) 
                                              << 2U)) 
           | (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                             >> 5U))) << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_105)));
    __Vtableidx34 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2442 
        = Vnes_core_top__ConstPool__TABLE_h8f069df0_0
        [__Vtableidx34];
    if ((2U != (3U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                      >> 6U)))) {
        if (nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342) {
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667 = 7U;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698 = 1U;
        } else {
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667 = 5U;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698 = 0U;
        }
    } else {
        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667 = 5U;
        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698 = 0U;
    }
    __Vtableidx5 = ((((4U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075))
                       ? (((7U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                         >> 2U))) | 
                           ((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                          >> 2U))) 
                            | (4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                            >> 2U)))))
                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949)
                               ? 8U : 9U) : 8U) : (
                                                   (2U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075))
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                         >> 2U)))
                                                     ? 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949)
                                                      ? 2U
                                                      : 0x0aU)
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075))
                                                     ? 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                          >> 2U)))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949)
                                                       ? 3U
                                                       : 0x0bU)
                                                      : 3U)
                                                     : 1U))) 
                     << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165 
        = Vnes_core_top__ConstPool__TABLE_hb5922465_0
        [__Vtableidx5];
    vlSelfRef.__VdfgRegularize_hebeb780c_0_108 = ((
                                                   (0x0080U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                   | (0x0040U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) 
                                                  | (((0x0020U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                      | (0x0010U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) 
                                                     | ((8U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                        | ((4U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                           | ((2U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                              | (1U 
                                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_109 = ((
                                                   (0x8000U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                   | (0x4000U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) 
                                                  | (((0x2000U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                      | (0x1000U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) 
                                                     | ((0x0800U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                        | ((0x0400U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                           | ((0x0200U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                              | (0x0100U 
                                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)))))));
    __Vtableidx9 = (((IData)(((4U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075)) 
                              & (0x18U == (0x1cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))))) 
                     << 5U) | (((IData)(((0x18U == 
                                          (0x1cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                                         & (((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                                             & (2U 
                                                != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))) 
                                            & (1U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))))) 
                                << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177 
        = Vnes_core_top__ConstPool__TABLE_h9c1c7bf8_0
        [__Vtableidx9];
    __Vtableidx8 = ((((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                      & ((2U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                         & ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                            & (IData)((0x10U != (0x14U 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))))))) 
                     << 5U) | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2142) 
                                << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174 
        = Vnes_core_top__ConstPool__TABLE_h95c950e0_0
        [__Vtableidx8];
    __Vtableidx7 = ((((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                      | ((2U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                         & (1U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)))) 
                     << 5U) | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2142) 
                                << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171 
        = Vnes_core_top__ConstPool__TABLE_h95de9241_0
        [__Vtableidx7];
    __Vtableidx6 = ((((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                      & ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)) 
                         | (1U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112)))) 
                     << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2160));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168 
        = Vnes_core_top__ConstPool__TABLE_h3de6c573_0
        [__Vtableidx6];
    vlSelfRef.__VdfgRegularize_hebeb780c_0_107 = ((
                                                   (0x2000U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                   | (0x1000U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) 
                                                  | (((0x0800U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                      | (0x0400U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) 
                                                     | ((0x0200U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                        | ((0x0100U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                           | ((0x0080U 
                                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                                              | (0x0040U 
                                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)
            ? 4U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620)
                     ? 2U : 6U));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872 
        = (((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 2U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289 
        = (((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 2U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392));
    vlSelfRef.dbg_cpu_dout = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339;
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ShiftedPeriod 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period) 
           >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepShift));
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ShiftedPeriod 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period) 
           >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepShift));
    vlSelfRef.dbg_dma_put_ce = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack) 
           | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
              >> 1U));
    vlSelfRef.dbg_reset_noSS = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load 
        = (((((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)) 
             << 3U) | (((7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)) 
                       << 2U)) | ((((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)) 
                                   << 1U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_attr)));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size = 0U;
    } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu))) {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) {
            if ((0U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size 
                    = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                             >> 5U));
            }
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size = 0U;
            }
        }
    }
    if (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu)) 
         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear = 0U;
    }
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4271 
        = (0x0000003fU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931) 
                           & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                               >> 3U) & (9U < (0x0000001fU 
                                               & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251) 
                                                  >> 1U)))))
                           ? ((IData)(6U) + ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251) 
                                             >> 1U))
                           : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251) 
                              >> 1U)));
    __Vtableidx151 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2019;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4046 
        = Vnes_core_top__ConstPool__TABLE_h3adfef7e_0
        [__Vtableidx151];
    __Vtableidx152 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2019;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4146 
        = Vnes_core_top__ConstPool__TABLE_h3adfef7e_0
        [__Vtableidx152];
    __Vtableidx153 = ((((2U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 2U))) ? 0x11U
                         : 0x0dU) << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2019));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4178 
        = Vnes_core_top__ConstPool__TABLE_h00507437_0
        [__Vtableidx153];
    __Vtableidx36 = ((((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                       | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174)) 
                      << 5U) | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174) 
                                 << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2444 
        = Vnes_core_top__ConstPool__TABLE_h2fb0f9d7_0
        [__Vtableidx36];
    __Vtableidx56 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2790));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2801 
        = Vnes_core_top__ConstPool__TABLE_h9dd9b614_0
        [__Vtableidx56];
    __Vtableidx35 = ((((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                       | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171)) 
                      << 5U) | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171) 
                                 << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2443 
        = Vnes_core_top__ConstPool__TABLE_h16b4aba9_0
        [__Vtableidx35];
    __Vtableidx33 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2439 
        = Vnes_core_top__ConstPool__TABLE_hd07d9d86_0
        [__Vtableidx33];
    __Vtableidx55 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2790));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2799 
        = Vnes_core_top__ConstPool__TABLE_h4282ade7_0
        [__Vtableidx55];
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670 
        = (IData)(((0x80U != (0xc0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                   | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2904 
        = ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
           | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
            ? ((0xebU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                ? 1U : 0U) : ((7U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                            >> 5U)))
                               ? ((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                   ? 1U : ((5U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                            ? 1U : 
                                           ((4U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                               >> 5U)))
                                             ? 1U : 
                                            ((0U == 
                                              (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                              ? 2U : 1U))))
                               : ((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                >> 5U)))
                                   ? ((5U == (7U & 
                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                               >> 5U)))
                                       ? 1U : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 5U)))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                                    ? 3U
                                                    : 1U)))
                                   : ((5U == (7U & 
                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                               >> 5U)))
                                       ? ((4U == (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U)))
                                           ? 1U : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112))
                                                      ? 0U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                           >> 2U)))
                                                       ? 4U
                                                       : 0U)))))
                                       : ((4U == (7U 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                     >> 5U)))
                                           ? ((4U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075))
                                               ? ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                       >> 2U)))
                                                   ? 9U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2075))
                                                    ? 3U
                                                    : 1U)))
                                           : 1U)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2539 
        = ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
            ? 4U : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195));
    __VdfgRegularize_hebeb780c_0_57 = ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                        ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                        : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                            : ((1U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                                : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924)
                                                    ? 1U
                                                    : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2881 
        = ((4U != (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872)) 
           & (2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2885 
        = (IData)((((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872)) 
                    & (0x80U == (0xe0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))) 
                   & (4U != (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872))));
    if ((4U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875 = 0U;
        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878 = 0U;
    } else if ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875 = 2U;
        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878 = 1U;
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875 = 0U;
        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878 = 0U;
    }
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471 
        = (((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 3U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3920 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107) 
           & ((0x2000U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
              & ((0x1000U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                 & ((0x0800U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                    & ((0x0400U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                       & ((0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                          & ((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289)) 
                             & (2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289)))))))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930 
        = (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 3U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce 
        = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer;
        nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode;
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer_1;
        nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode_2;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__NewSweepPeriod 
        = (0x00000fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period) 
                          + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepNegate)
                              ? (0x000007ffU & (~ (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ShiftedPeriod)))
                              : (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ShiftedPeriod))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__NewSweepPeriod 
        = (0x00000fffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period) 
                          + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepNegate)
                              ? (0x000007ffU & ((IData)(1U) 
                                                + (~ (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ShiftedPeriod))))
                              : (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ShiftedPeriod))));
    vlSelfRef.dbg_dma_active = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502 
        = (0x000000ffU & ((IData)(__VdfgRegularize_hebeb780c_0_106)
                           ? ((0x4000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                               ? ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942))
                               : ((0x2000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                   ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                      - (IData)(1U))
                                   : ((0x1000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                                       : ((0x0800U 
                                           == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                           ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448)
                                           : ((0x0400U 
                                               == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                               ? ((0x00000080U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                      << 7U)) 
                                                  | (0x0000007fU 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                        >> 1U)))
                                               : ((0x0200U 
                                                   == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                   ? 
                                                  VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942), 1U)
                                                   : 
                                                  ((0x0100U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                    ? 
                                                   ((0x000000feU 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)))
                                                    : 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942), 1U))))))))
                           : ((0x0040U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                               ? ((0x000000f0U & (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361)
                                                    ? 
                                                   ((0x0000003eU 
                                                     & (((0x00000020U 
                                                          & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379))
                                                          ? 
                                                         (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379) 
                                                           >> 1U) 
                                                          - (IData)(6U))
                                                          : 
                                                         ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4379)))
                                                    : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336)) 
                                                  << 3U)) 
                                  | (0x0000000fU & 
                                     ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361)
                                       ? ((0x00000020U 
                                           & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327))
                                           ? (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327) 
                                               >> 1U) 
                                              - (IData)(6U))
                                           : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327) 
                                              >> 1U))
                                       : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327) 
                                          >> 1U))))
                               : ((0x0020U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                   ? ((0x000000f0U 
                                       & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336) 
                                          << 3U)) | 
                                      (0x0000000fU 
                                       & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327) 
                                          >> 1U))) : 
                                  ((0x0010U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                                    : ((8U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                        ? ((0x000000f0U 
                                            & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4271) 
                                               << 4U)) 
                                           | (0x0000000fU 
                                              & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4237)))
                                        : ((4U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                               ^ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943))
                                            : ((2U 
                                                == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4406)
                                                : (
                                                   (1U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                    | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943))
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942))))))))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2992 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2904)
            : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670));
    __VdfgRegularize_hebeb780c_0_58 = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                        ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                        : (IData)(__VdfgRegularize_hebeb780c_0_57));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3257 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
            ? ((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                ? (IData)(__VdfgRegularize_hebeb780c_0_58)
                : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195))
            : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195));
    __Vtableidx39 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2479 
        = Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx39];
    __Vtableidx73 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3123 
        = Vnes_core_top__ConstPool__TABLE_hd2f01c33_0
        [__Vtableidx73];
    __Vtableidx88 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3248 
        = Vnes_core_top__ConstPool__TABLE_hd2f01c33_0
        [__Vtableidx88];
    __Vtableidx116 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3539 
        = Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx116];
    __Vtableidx118 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3544 
        = Vnes_core_top__ConstPool__TABLE_hd2f01c33_0
        [__Vtableidx118];
    __Vtableidx117 = (((3U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 1U))) << 4U) 
                      | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3541 
        = Vnes_core_top__ConstPool__TABLE_haeb47009_0
        [__Vtableidx117];
    __Vtableidx74 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3126 
        = Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx74];
    __Vtableidx89 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3251 
        = Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx89];
    __Vtableidx76 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                    >> 5U))) << 4U) 
                     | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3130 
        = Vnes_core_top__ConstPool__TABLE_haeb47009_0
        [__Vtableidx76];
    __Vtableidx90 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                    >> 5U))) << 4U) 
                     | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3253 
        = Vnes_core_top__ConstPool__TABLE_haeb47009_0
        [__Vtableidx90];
    __Vtableidx119 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) << 4U) 
                      | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3546 
        = Vnes_core_top__ConstPool__TABLE_haeb47009_0
        [__Vtableidx119];
    __Vtableidx71 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3116 
        = Vnes_core_top__ConstPool__TABLE_hf3423262_0
        [__Vtableidx71];
    __Vtableidx86 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3241 
        = Vnes_core_top__ConstPool__TABLE_hf3423262_0
        [__Vtableidx86];
    __Vtableidx114 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3533 
        = Vnes_core_top__ConstPool__TABLE_hfe47b41c_0
        [__Vtableidx114];
    __Vtableidx38 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452)
                        ? 1U : 0U) << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2476 
        = Vnes_core_top__ConstPool__TABLE_h987317c3_0
        [__Vtableidx38];
    __Vtableidx41 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2483 
        = Vnes_core_top__ConstPool__TABLE_h4f814333_0
        [__Vtableidx41];
    __Vtableidx75 = (((1U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                    >> 5U))) << 4U) 
                     | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3128 
        = Vnes_core_top__ConstPool__TABLE_h4f814333_0
        [__Vtableidx75];
    __Vtableidx40 = ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452)) 
                       & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2442)) 
                      << 5U) | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2442) 
                                 << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2481 
        = Vnes_core_top__ConstPool__TABLE_h3f921444_0
        [__Vtableidx40];
    __Vtableidx37 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2473 
        = Vnes_core_top__ConstPool__TABLE_h2016b879_0
        [__Vtableidx37];
    __Vtableidx72 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3120 
        = Vnes_core_top__ConstPool__TABLE_h73ee0c49_0
        [__Vtableidx72];
    __Vtableidx87 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3245 
        = Vnes_core_top__ConstPool__TABLE_h73ee0c49_0
        [__Vtableidx87];
    __Vtableidx115 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3536 
        = Vnes_core_top__ConstPool__TABLE_h584b6bcc_0
        [__Vtableidx115];
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831 
        = (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2471));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder 
        = (0x000001ffU & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3920)
                           ? ((0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923)) 
                              + ((0x00000100U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl) 
                                                 << 1U)) 
                                 | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl)))
                           : (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923))));
    __Vtableidx69 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3076 
        = Vnes_core_top__ConstPool__TABLE_h8f069df0_0
        [__Vtableidx69];
    __Vtableidx61 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2948 
        = Vnes_core_top__ConstPool__TABLE_h8f069df0_0
        [__Vtableidx61];
    __Vtableidx70 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3079 
        = Vnes_core_top__ConstPool__TABLE_hd2f01c33_0
        [__Vtableidx70];
    __Vtableidx64 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2956 
        = Vnes_core_top__ConstPool__TABLE_h44f78f5a_0
        [__Vtableidx64];
    __Vtableidx63 = (((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2954 
        = Vnes_core_top__ConstPool__TABLE_h46b97fdf_0
        [__Vtableidx63];
    __Vtableidx57 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2936 
        = Vnes_core_top__ConstPool__TABLE_h7c68f577_0
        [__Vtableidx57];
    __Vtableidx60 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2945 
        = Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx60];
    __Vtableidx65 = ((((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                        ? 3U : 0U) << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3063 
        = Vnes_core_top__ConstPool__TABLE_h059b45c9_0
        [__Vtableidx65];
    __Vtableidx68 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3073 
        = Vnes_core_top__ConstPool__TABLE_hd937a5c3_0
        [__Vtableidx68];
    __Vtableidx59 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
                      << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2942 
        = Vnes_core_top__ConstPool__TABLE_hae49fd98_0
        [__Vtableidx59];
    __Vtableidx62 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2951 
        = Vnes_core_top__ConstPool__TABLE_h2fa5ba49_0
        [__Vtableidx62];
    __Vtableidx58 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2939 
        = Vnes_core_top__ConstPool__TABLE_h265de487_0
        [__Vtableidx58];
    __Vtableidx66 = ((((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                        ? 2U : 0U) << 6U) | ((((0U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                                                ? 0U
                                                : 1U) 
                                              << 4U) 
                                             | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3067 
        = Vnes_core_top__ConstPool__TABLE_h6d82561b_0
        [__Vtableidx66];
    __Vtableidx67 = ((((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))
                        ? 1U : 0U) << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3069 
        = Vnes_core_top__ConstPool__TABLE_h893f5bb7_0
        [__Vtableidx67];
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249 
        = (((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 4U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2930));
    vlSelfRef.dbg_cpu_rnw = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                 | (~ (IData)(nes_core_top__DOT__nes_inst__DOT__pause_cpu))));
    vlSelfRef.dbg_dma_get_ce = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ValidFreq 
        = ((0U != (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period) 
                                  >> 3U))) & ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__NewSweepPeriod) 
                                                  >> 0x0000000bU)) 
                                              | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepNegate)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ValidFreq 
        = ((0U != (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period) 
                                  >> 3U))) & ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__NewSweepPeriod) 
                                                  >> 0x0000000bU)) 
                                              | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepNegate)));
    vlSelfRef.nes_core_top__DOT__cpumem_dout = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)
                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_lastval)
                                                 : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut
        [(0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 3U))];
    __Vtableidx156 = ((((4U & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251) 
                               >> 2U)) | ((2U & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336) 
                                                 >> 3U)) 
                                          | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                   >> 7U)))) 
                       << 7U) | ((0x00000040U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                 >> 1U)) 
                                 | ((0x00000020U & 
                                     ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502) 
                                      >> 2U)) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4540))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4544 
        = Vnes_core_top__ConstPool__TABLE_h614017f6_0
        [__Vtableidx156];
    __Vtableidx155 = ((((IData)(((0U == (0x1eU & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207))) 
                                 & (0U == (0x0000000fU 
                                           & ((((0x0000001eU 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4207) 
                                                      >> 5U))) 
                                               + (1U 
                                                  | (0x0000001eU 
                                                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                        >> 3U)))) 
                                              >> 1U))))) 
                        << 9U) | (((IData)(((0U == 
                                             (0x1eU 
                                              & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336))) 
                                            & (0U == 
                                               (0x1eU 
                                                & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4327))))) 
                                   << 8U) | (0x00000080U 
                                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                << 6U)))) 
                      | (((0U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4406)) 
                          << 6U) | (((0U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502)) 
                                     << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4540))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4543 
        = Vnes_core_top__ConstPool__TABLE_h614017f6_0
        [__Vtableidx155];
    __Vtableidx154 = ((0x00000040U & ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502) 
                                      >> 1U)) | ((0x00000020U 
                                                  & (((IData)(__VdfgRegularize_hebeb780c_0_106)
                                                       ? 
                                                      ((0x4000U 
                                                        == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)
                                                        : 
                                                       ((0x2000U 
                                                         == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)
                                                         : 
                                                        ((0x1000U 
                                                          == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)
                                                          : 
                                                         ((0x0800U 
                                                           == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                           ? 
                                                          ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361)
                                                            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4468)
                                                            : 
                                                           ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447) 
                                                            >> 6U))
                                                           : 
                                                          ((0x0400U 
                                                            == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                                                            : 
                                                           ((0x0200U 
                                                             == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                                                             : 
                                                            ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                             >> 7U)))))))
                                                       : 
                                                      ((0x0040U 
                                                        == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                        ? 
                                                       (~ 
                                                        ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336) 
                                                         >> 5U))
                                                        : 
                                                       ((0x0020U 
                                                         == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                         ? 
                                                        (~ 
                                                         ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336) 
                                                          >> 5U))
                                                         : 
                                                        ((0x0010U 
                                                          == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                          ? 
                                                         (~ 
                                                          ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336) 
                                                           >> 5U))
                                                          : 
                                                         ((8U 
                                                           == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                           ? (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30U 
                                                                       & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4271))))
                                                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)))))) 
                                                     << 5U)) 
                                                 | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4540)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4541 
        = Vnes_core_top__ConstPool__TABLE_h29c19512_0
        [__Vtableidx154];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q 
        = ((0x0fU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932))
            ? ((IData)(__VdfgRegularize_hebeb780c_0_106)
                ? ((0x4000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                    : ((0x2000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                        : ((0x1000U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)
                            : ((0x0800U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                ? ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4361)
                                    ? ((0x000000f0U 
                                        & (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4468)
                                             ? ((IData)(6U) 
                                                + ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448) 
                                                   >> 4U))
                                             : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448) 
                                                >> 4U)) 
                                           << 4U)) 
                                       | (0x0000000fU 
                                          & ((4U < 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943))))
                                              ? ((IData)(6U) 
                                                 + (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447))
                                              : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447))))
                                    : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4448))
                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942)))))
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942))
            : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4502));
    __Vtableidx148 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3851 
        = Vnes_core_top__ConstPool__TABLE_hcd92346b_0
        [__Vtableidx148];
    __Vtableidx149 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3854 
        = Vnes_core_top__ConstPool__TABLE_h58af22be_0
        [__Vtableidx149];
    __Vtableidx150 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) << 5U) 
                      | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3856 
        = Vnes_core_top__ConstPool__TABLE_h471cd63f_0
        [__Vtableidx150];
    __Vtableidx143 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3836 
        = Vnes_core_top__ConstPool__TABLE_h90d83d1e_0
        [__Vtableidx143];
    __Vtableidx146 = ((((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 5U))) ? ((2U 
                                                   == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3814))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3814))
                                                    ? 1U
                                                    : 0U))
                         : 0U) << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3846 
        = Vnes_core_top__ConstPool__TABLE_he9024dd8_0
        [__Vtableidx146];
    __Vtableidx144 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3840 
        = Vnes_core_top__ConstPool__TABLE_h1c24d45d_0
        [__Vtableidx144];
    __Vtableidx145 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3844 
        = Vnes_core_top__ConstPool__TABLE_ha648580e_0
        [__Vtableidx145];
    __Vtableidx147 = (((4U != (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) << 5U) 
                      | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3831));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3848 
        = Vnes_core_top__ConstPool__TABLE_h471cd63f_0
        [__Vtableidx147];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
            ? ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                ? 0U : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                         ? 0U : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                                  ? 0U : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921) 
                                           << 0x00000010U) 
                                          | ((0x0000ff00U 
                                              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923)) 
                                             | (0x000000ffU 
                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder)))))))
            : ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                ? ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                    ? 0U : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                             ? 0U : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919) 
                                      << 8U) | (0x000000ffU 
                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920)))))
                : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                    ? ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                        ? 0U : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922) 
                                 << 0x00000010U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad)))
                    : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))
                        ? (0x00000100U | (0x000000ffU 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)))
                        : 0U))));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int 
            = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr 
            = (0x0000ffffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack)
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)
                                   ? 0x2004U : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr))));
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int 
            = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr 
            = (0x0000ffffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774);
    }
    __Vtableidx17 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165) 
                      << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2257 
        = Vnes_core_top__ConstPool__TABLE_hd4f9570f_0
        [__Vtableidx17];
    __Vtableidx19 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2265 
        = Vnes_core_top__ConstPool__TABLE_h9110f853_0
        [__Vtableidx19];
    __Vtableidx25 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2301 
        = Vnes_core_top__ConstPool__TABLE_h6ef9777c_0
        [__Vtableidx25];
    __Vtableidx30 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2333 
        = Vnes_core_top__ConstPool__TABLE_h09f1e500_0
        [__Vtableidx30];
    __Vtableidx81 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3207 
        = Vnes_core_top__ConstPool__TABLE_h102087e8_0
        [__Vtableidx81];
    __Vtableidx107 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3484 
        = Vnes_core_top__ConstPool__TABLE_hcd92346b_0
        [__Vtableidx107];
    __Vtableidx110 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3493 
        = Vnes_core_top__ConstPool__TABLE_h102087e8_0
        [__Vtableidx110];
    __Vtableidx82 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3210 
        = Vnes_core_top__ConstPool__TABLE_hcd92346b_0
        [__Vtableidx82];
    __Vtableidx85 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
                      << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3218 
        = Vnes_core_top__ConstPool__TABLE_h09179351_0
        [__Vtableidx85];
    __Vtableidx113 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
                       << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3501 
        = Vnes_core_top__ConstPool__TABLE_h09179351_0
        [__Vtableidx113];
    __Vtableidx21 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2272 
        = Vnes_core_top__ConstPool__TABLE_h09f1e500_0
        [__Vtableidx21];
    __Vtableidx84 = (((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                      << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3216 
        = Vnes_core_top__ConstPool__TABLE_ha0b9cfbb_0
        [__Vtableidx84];
    __Vtableidx112 = (((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                       << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3499 
        = Vnes_core_top__ConstPool__TABLE_ha0b9cfbb_0
        [__Vtableidx112];
    __Vtableidx16 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2254 
        = Vnes_core_top__ConstPool__TABLE_hcd02c17d_0
        [__Vtableidx16];
    __Vtableidx23 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2293 
        = Vnes_core_top__ConstPool__TABLE_hc4970fc4_0
        [__Vtableidx23];
    __Vtableidx28 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2325 
        = Vnes_core_top__ConstPool__TABLE_hcd02c17d_0
        [__Vtableidx28];
    __Vtableidx77 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3194 
        = Vnes_core_top__ConstPool__TABLE_hf87ff63e_0
        [__Vtableidx77];
    __Vtableidx105 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3478 
        = Vnes_core_top__ConstPool__TABLE_h7836095f_0
        [__Vtableidx105];
    __Vtableidx20 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2268 
        = Vnes_core_top__ConstPool__TABLE_h102087e8_0
        [__Vtableidx20];
    __Vtableidx27 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2307 
        = Vnes_core_top__ConstPool__TABLE_h3a84249d_0
        [__Vtableidx27];
    __Vtableidx31 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2336 
        = Vnes_core_top__ConstPool__TABLE_h58af22be_0
        [__Vtableidx31];
    __Vtableidx79 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3201 
        = Vnes_core_top__ConstPool__TABLE_h58af22be_0
        [__Vtableidx79];
    __Vtableidx80 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3204 
        = Vnes_core_top__ConstPool__TABLE_h3a84249d_0
        [__Vtableidx80];
    __Vtableidx109 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3490 
        = Vnes_core_top__ConstPool__TABLE_h3a84249d_0
        [__Vtableidx109];
    __Vtableidx108 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
                       << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3487 
        = Vnes_core_top__ConstPool__TABLE_habef6ca1_0
        [__Vtableidx108];
    __Vtableidx26 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2304 
        = Vnes_core_top__ConstPool__TABLE_h3a84249d_0
        [__Vtableidx26];
    __Vtableidx83 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3213 
        = Vnes_core_top__ConstPool__TABLE_h3a84249d_0
        [__Vtableidx83];
    __Vtableidx111 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3496 
        = Vnes_core_top__ConstPool__TABLE_h3a84249d_0
        [__Vtableidx111];
    __Vtableidx22 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195) 
                      << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2287 
        = Vnes_core_top__ConstPool__TABLE_h9fddebfe_0
        [__Vtableidx22];
    __Vtableidx18 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2261 
        = Vnes_core_top__ConstPool__TABLE_ha9e6c01a_0
        [__Vtableidx18];
    __Vtableidx24 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2296 
        = Vnes_core_top__ConstPool__TABLE_h2a7bf804_0
        [__Vtableidx24];
    __Vtableidx29 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2329 
        = Vnes_core_top__ConstPool__TABLE_h4506dbf6_0
        [__Vtableidx29];
    __Vtableidx78 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3198 
        = Vnes_core_top__ConstPool__TABLE_h1686eb2e_0
        [__Vtableidx78];
    __Vtableidx106 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3481 
        = Vnes_core_top__ConstPool__TABLE_hd4ea2203_0
        [__Vtableidx106];
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209 
        = (((6U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 5U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2249));
    vlSelfRef.dbg_mr_int = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                 | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i)));
    vlSelfRef.dbg_mw_int = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_write 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cart_pre));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d 
        = ((~ (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode)) 
           & (0x0a1fU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)));
    vlSelfRef.sample = (0x0000ffffU & ((IData)(0xffffU) 
                                       - (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut
                                          [(0x0000001fU 
                                            & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc) 
                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ValidFreq) 
                                                    & (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__DutyEnabled)))
                                                 ? 
                                                ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_disabled)
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_vol)
                                                  : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count))
                                                 : 0U) 
                                               + (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc) 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ValidFreq) 
                                                      & (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__DutyEnabled)))
                                                   ? 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_disabled)
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_vol)
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count))
                                                   : 0U)))] 
                                          + vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__mix_lut
                                          [(0x000001ffU 
                                            & (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut
                                               [vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__TriSample] 
                                               + (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut
                                                  [
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc)) 
                                                       | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift) 
                                                          >> 0x0000000eU)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_disabled)
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_vol)
                                                     : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count)))] 
                                                  + vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut
                                                  [
                                                  (0x0000007fU 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next))])))])));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_1 = 0U;
        if (vlSelfRef.reset) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt = 0U;
        }
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line = 0U;
        __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame = 0U;
    } else if (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu)) 
                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line))) {
        if ((0x0104U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu = 0x000001ffU;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line = 1U;
        } else {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line = 0U;
        }
        if ((0x00ffU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu))) {
            __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame 
                = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame)));
        }
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line 
        = (IData)(((0x0150U == (0x01f8U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                   & ((0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                      == ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next)
                           ? 3U : 4U))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__div_ppu;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu 
        = __Vdly__nes_core_top__DOT__nes_inst__DOT__scanline_ppu;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p_out 
        = ((((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4544) 
             << 7U) | (0x00000040U & (((IData)(__VdfgRegularize_hebeb780c_0_106)
                                        ? ((0x4000U 
                                            == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                            ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                               >> 6U)
                                            : ((0x2000U 
                                                == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                   >> 6U)
                                                : (
                                                   (0x1000U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                    >> 6U)
                                                    : 
                                                   ((0x0800U 
                                                     == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                     ? 
                                                    (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447) 
                                                      >> 5U) 
                                                     ^ 
                                                     ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447) 
                                                      >> 6U))
                                                     : 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                     >> 6U)))))
                                        : ((0x0040U 
                                            == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                            ? ((((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4336) 
                                                 >> 4U) 
                                                ^ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                   >> 7U)) 
                                               & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4258))
                                            : ((0x0020U 
                                                == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                   >> 6U)
                                                : (
                                                   (0x0010U 
                                                    == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                    >> 6U)
                                                    : 
                                                   ((8U 
                                                     == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4494))
                                                     ? 
                                                    ((~ (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4258)) 
                                                     & (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251) 
                                                         >> 4U) 
                                                        ^ 
                                                        ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                                         >> 7U)))
                                                     : 
                                                    ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                     >> 6U)))))) 
                                      << 6U))) | ((0x0000003cU 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)) 
                                                  | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4543) 
                                                      << 1U) 
                                                     | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4541))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
           & (0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774)));
    __Vtableidx11 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165) 
                      << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2220 
        = Vnes_core_top__ConstPool__TABLE_h0277fe08_0
        [__Vtableidx11];
    __Vtableidx13 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2228 
        = Vnes_core_top__ConstPool__TABLE_h89a70f01_0
        [__Vtableidx13];
    __Vtableidx128 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3674 
        = Vnes_core_top__ConstPool__TABLE_ha7ebb35f_0
        [__Vtableidx128];
    __Vtableidx138 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3760 
        = Vnes_core_top__ConstPool__TABLE_ha7ebb35f_0
        [__Vtableidx138];
    __Vtableidx129 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3677 
        = Vnes_core_top__ConstPool__TABLE_h2426bd34_0
        [__Vtableidx129];
    __Vtableidx139 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3763 
        = Vnes_core_top__ConstPool__TABLE_h2426bd34_0
        [__Vtableidx139];
    __Vtableidx132 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3686 
        = Vnes_core_top__ConstPool__TABLE_h1e2ce85a_0
        [__Vtableidx132];
    __Vtableidx142 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924) 
                       << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3771 
        = Vnes_core_top__ConstPool__TABLE_hc1c4ab8a_0
        [__Vtableidx142];
    __Vtableidx15 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2236 
        = Vnes_core_top__ConstPool__TABLE_h32271c6e_0
        [__Vtableidx15];
    __Vtableidx141 = (((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                       << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3769 
        = Vnes_core_top__ConstPool__TABLE_h13b98afd_0
        [__Vtableidx141];
    __Vtableidx131 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) << 7U) 
                      | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698) 
                          << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3683 
        = Vnes_core_top__ConstPool__TABLE_h5f03753d_0
        [__Vtableidx131];
    __Vtableidx10 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2216 
        = Vnes_core_top__ConstPool__TABLE_h4a795377_0
        [__Vtableidx10];
    __Vtableidx133 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3743 
        = Vnes_core_top__ConstPool__TABLE_h9d9f26aa_0
        [__Vtableidx133];
    __Vtableidx14 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2231 
        = Vnes_core_top__ConstPool__TABLE_hd3c9b9f0_0
        [__Vtableidx14];
    __Vtableidx121 = ((((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698)
                         ? 3U : 0U) << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3654 
        = Vnes_core_top__ConstPool__TABLE_h28c0ea9b_0
        [__Vtableidx121];
    __Vtableidx124 = ((((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 5U))) ? ((0x0bU 
                                                   == 
                                                   (0x0000000fU 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                                   ? 1U
                                                   : 0U)
                         : 0U) << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3664 
        = Vnes_core_top__ConstPool__TABLE_h15eaa627_0
        [__Vtableidx124];
    __Vtableidx127 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3671 
        = Vnes_core_top__ConstPool__TABLE_hd3c9b9f0_0
        [__Vtableidx127];
    __Vtableidx136 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3754 
        = Vnes_core_top__ConstPool__TABLE_hd8287b7b_0
        [__Vtableidx136];
    __Vtableidx137 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3757 
        = Vnes_core_top__ConstPool__TABLE_hd3c9b9f0_0
        [__Vtableidx137];
    __Vtableidx126 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698) 
                       << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3668 
        = Vnes_core_top__ConstPool__TABLE_hf9e73902_0
        [__Vtableidx126];
    __Vtableidx130 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3680 
        = Vnes_core_top__ConstPool__TABLE_hd3c9b9f0_0
        [__Vtableidx130];
    __Vtableidx140 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3766 
        = Vnes_core_top__ConstPool__TABLE_hd3c9b9f0_0
        [__Vtableidx140];
    __Vtableidx120 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195) 
                       << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3649 
        = Vnes_core_top__ConstPool__TABLE_he71f98da_0
        [__Vtableidx120];
    __Vtableidx12 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2223 
        = Vnes_core_top__ConstPool__TABLE_hca71edbe_0
        [__Vtableidx12];
    __Vtableidx122 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3658 
        = Vnes_core_top__ConstPool__TABLE_h7ad1dfcc_0
        [__Vtableidx122];
    __Vtableidx134 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3747 
        = Vnes_core_top__ConstPool__TABLE_h7ad1dfcc_0
        [__Vtableidx134];
    __Vtableidx123 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3662 
        = Vnes_core_top__ConstPool__TABLE_h292b2ddd_0
        [__Vtableidx123];
    __Vtableidx135 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3751 
        = Vnes_core_top__ConstPool__TABLE_h292b2ddd_0
        [__Vtableidx135];
    __Vtableidx125 = ((((4U != (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 5U))) & ((~ 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                    >> 1U)) 
                                                  | (0xbbU 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))) 
                       << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3666 
        = Vnes_core_top__ConstPool__TABLE_he5cc4201_0
        [__Vtableidx125];
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708 
        = (((7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 6U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2209));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy) 
           & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__set_irq 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d));
    __VdfgRegularize_h4af1c392_0_20 = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d) 
                                       | ((0x7185U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
                                          | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_2) 
                                             & (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce 
        = (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause 
            = (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause));
        vlSelfRef.scanline = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused;
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause 
            = (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu));
        vlSelfRef.scanline = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_wr_enabled 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr)) 
                 & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__entering_vblank 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x00f1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)
            ? 0x0105U : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
            >> 2U) & ((0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
                      | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
                          & (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                         | ((0x00f1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
                            & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))))));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame)) 
           & ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
              & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame 
        = ((0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line));
    vlSelfRef.dbg_cpu_addr = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Dmc__write 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write) 
           & ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr) 
                            >> 2U))) | (0x15U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__frame_counter__write_ce 
        = (IData)((((0x0014U == (0x001cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write)) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_ce)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__dma__sprite_trigger 
        = (IData)((((0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774)) 
                    & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950))) 
                   & (0x0014U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ1__write 
        = (IData)(((0U == (0x001cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ2__write 
        = (IData)(((4U == (0x001cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Tri__write 
        = (IData)(((8U == (0x001cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Noi__write 
        = (IData)(((0x000cU == (0x001cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__write)));
    __VdfgRegularize_h4af1c392_0_1 = ((0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) 
                                      | (3U == (3U 
                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrl = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_address = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_length = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__loop = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__irq_enable = 0U;
    }
    if ((0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
            = (0x00380000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
    } else if ((0x8000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
            = ((0U == (7U & (IData)((vlSelfRef.mapper_flags_in 
                                     >> 8U)))) ? (0x00003fffU 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))
                : (0x00007fffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
    } else if ((0x6000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
            = (0x01e00000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs 
        = (IData)(((0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774)) 
                   & (0x0016U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad2_cs 
        = (IData)(((0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774)) 
                   & (0x0017U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
    nes_core_top__DOT__nes_inst__DOT__prg_allow = 0U;
    if ((0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        nes_core_top__DOT__nes_inst__DOT__prg_allow = 1U;
    } else if ((0x8000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        nes_core_top__DOT__nes_inst__DOT__prg_allow 
            = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_write)));
    } else if ((0x6000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
        nes_core_top__DOT__nes_inst__DOT__prg_allow = 1U;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs 
        = ((0x2000U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)) 
           & (0x4000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
    __Vtableidx50 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2737 
        = Vnes_core_top__ConstPool__TABLE_hac51f4ce_0
        [__Vtableidx50];
    __Vtableidx100 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3405 
        = Vnes_core_top__ConstPool__TABLE_h1074f1af_0
        [__Vtableidx100];
    __Vtableidx46 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2726 
        = Vnes_core_top__ConstPool__TABLE_h1074f1af_0
        [__Vtableidx46];
    __Vtableidx49 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2734 
        = Vnes_core_top__ConstPool__TABLE_h2fd4c84b_0
        [__Vtableidx49];
    __Vtableidx99 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3402 
        = Vnes_core_top__ConstPool__TABLE_h2fd4c84b_0
        [__Vtableidx99];
    __Vtableidx51 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2740 
        = Vnes_core_top__ConstPool__TABLE_he3441826_0
        [__Vtableidx51];
    __Vtableidx101 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3408 
        = Vnes_core_top__ConstPool__TABLE_hac51f4ce_0
        [__Vtableidx101];
    __Vtableidx54 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2749 
        = Vnes_core_top__ConstPool__TABLE_h3cd0c607_0
        [__Vtableidx54];
    __Vtableidx104 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3417 
        = Vnes_core_top__ConstPool__TABLE_h3cd0c607_0
        [__Vtableidx104];
    __Vtableidx53 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                    >> 5U))) << 8U) 
                     | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698) 
                         << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2746 
        = Vnes_core_top__ConstPool__TABLE_h49206862_0
        [__Vtableidx53];
    __Vtableidx103 = (((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) << 8U) 
                      | (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698) 
                          << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3414 
        = Vnes_core_top__ConstPool__TABLE_h49206862_0
        [__Vtableidx103];
    __Vtableidx43 = ((((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698)
                        ? 3U : 0U) << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2717 
        = Vnes_core_top__ConstPool__TABLE_h06e9f4f9_0
        [__Vtableidx43];
    __Vtableidx48 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2731 
        = Vnes_core_top__ConstPool__TABLE_he02755a6_0
        [__Vtableidx48];
    __Vtableidx92 = ((((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698)
                        ? 3U : 0U) << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3382 
        = Vnes_core_top__ConstPool__TABLE_h760263c1_0
        [__Vtableidx92];
    __Vtableidx95 = ((((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) ? ((3U 
                                                  == 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                                                  ? 2U
                                                  : 0U)
                        : 0U) << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3392 
        = Vnes_core_top__ConstPool__TABLE_h729efcd6_0
        [__Vtableidx95];
    __Vtableidx98 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3399 
        = Vnes_core_top__ConstPool__TABLE_he02755a6_0
        [__Vtableidx98];
    __Vtableidx47 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698) 
                      << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2728 
        = Vnes_core_top__ConstPool__TABLE_h4cd8e16c_0
        [__Vtableidx47];
    __Vtableidx97 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2698) 
                      << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3396 
        = Vnes_core_top__ConstPool__TABLE_h4cd8e16c_0
        [__Vtableidx97];
    __Vtableidx52 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2743 
        = Vnes_core_top__ConstPool__TABLE_he02755a6_0
        [__Vtableidx52];
    __Vtableidx102 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3411 
        = Vnes_core_top__ConstPool__TABLE_he02755a6_0
        [__Vtableidx102];
    __Vtableidx42 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195) 
                      << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2710 
        = Vnes_core_top__ConstPool__TABLE_ha633a4d8_0
        [__Vtableidx42];
    __Vtableidx91 = (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195) 
                      << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3375 
        = Vnes_core_top__ConstPool__TABLE_hd7e3da36_0
        [__Vtableidx91];
    __Vtableidx44 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2720 
        = Vnes_core_top__ConstPool__TABLE_h6475423d_0
        [__Vtableidx44];
    __Vtableidx93 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3385 
        = Vnes_core_top__ConstPool__TABLE_h6475423d_0
        [__Vtableidx93];
    __Vtableidx45 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2723 
        = Vnes_core_top__ConstPool__TABLE_hee8ec7ef_0
        [__Vtableidx45];
    __Vtableidx94 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3390 
        = Vnes_core_top__ConstPool__TABLE_h5961e4e5_0
        [__Vtableidx94];
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_107) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
        if ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2904;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 = 0U;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = ((6U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                        ? ((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                            : (IData)(__VdfgRegularize_hebeb780c_0_58))
                        : ((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                            : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                : ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                    : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                        ? ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                            : 2U) : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195))))));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3747;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3751;
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = (((IData)(((0x10U != (0x13U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                                 | (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)))) 
                        & (2U != (3U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                        >> 6U)))) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3846;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                        ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                        : ((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                            ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                            : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                ? ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                    : ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                                        ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                        : ((IData)(
                                                   (0x9eU 
                                                    == 
                                                    (0xdeU 
                                                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))))
                                            ? 3U : 2U)))
                                : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195))));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3840;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3844;
            }
        } else if ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3664;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3649;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3658;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3662;
        } else if ((0x0800U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2904;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3481;
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                        & (2U != (3U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                        >> 6U)))) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3536;
            }
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 = 0U;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3257;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
        } else if ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3392;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3375;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3385;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3390;
        } else {
            if ((0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289))
                        ? 0U : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289))
                                 ? 3U : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289))
                                          ? 1U : 0U)));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
            } else if ((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2992;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3257;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                        ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3198)
                        : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3245));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
            } else if ((0x0080U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017) {
                    if ((0x00000020U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) {
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3067;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3069;
                    } else {
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                            = ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                ? 2U : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392))
                                         ? 1U : 0U));
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
                    }
                } else {
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3120;
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
                }
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2992;
                if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) {
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                        = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                            ? (IData)(__VdfgRegularize_hebeb780c_0_57)
                            : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195));
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2939;
                } else {
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878;
                }
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
            }
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 = 0U;
        }
    } else {
        if ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2878;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
        } else if ((0x0010U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
            if ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                    = ((0xa2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                       | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = ((0xa2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                        ? 1U : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2828)
                                 ? 1U : 0U));
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
            }
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
        } else if ((8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
            if ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))) {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2801;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2799;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = ((5U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) ? ((6U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                                  ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                       >> 5U)))
                                                   ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                                   : 
                                                  ((IData)(__VdfgRegularize_hebeb780c_0_105)
                                                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                                    : 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931)
                                                     ? 7U
                                                     : 0U))))
                        : ((6U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                         >> 5U))) ? 
                           ((4U == (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                          >> 5U))) ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                             : ((IData)(__VdfgRegularize_hebeb780c_0_105)
                                 ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                 : 9U)) : ((4U == (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                      >> 5U)))
                                            ? ((IData)(__VdfgRegularize_hebeb780c_0_105)
                                                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                                : 8U)
                                            : ((IData)(__VdfgRegularize_hebeb780c_0_105)
                                                ? 6U
                                                : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)))));
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                    = ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                        ? 1U : 0U);
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
            }
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
        } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                = (IData)(((0x80U != (0xe0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                           | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168)));
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                = ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929))
                    ? 1U : 0U);
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
        } else if ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2670;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2710;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2720;
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 
                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2723;
        } else {
            if ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))) {
                if (vlSelfRef.__VdfgRegularize_hebeb780c_0_109) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
                    if ((0x8000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                            = ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
                                ? 1U : 0U);
                    } else {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                            = ((0x4000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                               | ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                   ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171)
                                   : ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                       ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171)
                                       : ((0x0800U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                           ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171)
                                           : ((0x0400U 
                                               == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                               ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171)
                                               : ((0x0200U 
                                                   != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                  | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171)))))));
                        if ((0x4000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2539;
                        } else if ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                        } else if ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
                                    ? 1U : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195));
                        } else {
                            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                                = ((0x0800U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                   | ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                      | ((0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                          ? ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)) 
                                             | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168))
                                          : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168))));
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = ((0x0800U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)
                                    : ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                        ? 1U : ((0x0200U 
                                                 == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                 ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2539)
                                                 : 
                                                ((2U 
                                                  == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
                                                  ? 2U
                                                  : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195)))));
                        }
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
                    }
                } else if (vlSelfRef.__VdfgRegularize_hebeb780c_0_108) {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                        = ((0x0080U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                           | ((0x0040U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                               ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174)
                               : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                   ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2444)
                                   : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174))));
                    if ((0x0080U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                            = ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
                                ? 3U : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195));
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
                    } else if ((0x0040U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                            = ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
                                ? 1U : 0U);
                    } else if ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2443;
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2439;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2473;
                        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
                    } else {
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                            = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                        if ((0x0010U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
                        } else if ((8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2329;
                        } else if ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))) {
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2287;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2296;
                        } else {
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                                = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 
                                = ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2261)
                                    : (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2223));
                        }
                    }
                } else {
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                        = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
                }
            } else {
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2174;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2171;
                vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2168;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896 
                    = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2195;
                nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902 = 0U;
            }
            nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905 = 0U;
        }
        nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908 = 0U;
    }
    __Vtableidx96 = ((((4U != (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                     >> 5U))) & ((~ 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 1U)) 
                                                 | (0xb3U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))) 
                      << 7U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2708));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3394 
        = Vnes_core_top__ConstPool__TABLE_h2e21da25_0
        [__Vtableidx96];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk 
        = (((0x3603U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
            | (IData)(__VdfgRegularize_h4af1c392_0_20)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__ClkE 
        = (((0x1061U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
            | ((0x3603U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
               | ((0x2cd3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
                  | (IData)(__VdfgRegularize_h4af1c392_0_20)))) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__clockgen_pause__ce 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_pause_ce)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__evaluating 
        = ((0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
              >> 1U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
            | (0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr))) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
              >> 1U));
    vlSelfRef.dbg_render_d = nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE 
        = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle) 
                  & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d)) 
                 | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                     | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed)) 
                    >> 1U)));
    vlSelfRef.nes_core_top__DOT__ppumem_read = (1U 
                                                & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                                                    >> 2U) 
                                                   | ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d) 
                                                      & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                                                         & ((0U 
                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                                                            | (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot))))));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read 
        = ((1U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
           | ((2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
              | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en) 
                  & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9)) 
                 | ((0x0150U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                    | (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
            >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame) 
           & ((0U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
              & (0x0101U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
    vlSelfRef.dbg_dma_sprite_trigger = vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__dma__sprite_trigger;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__subunit_write 
        = ((IData)(__VdfgRegularize_h4af1c392_0_1) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ1__write));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__subunit_write 
        = ((IData)(__VdfgRegularize_h4af1c392_0_1) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ2__write));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__subunit_write 
        = ((IData)(__VdfgRegularize_h4af1c392_0_1) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Tri__write));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__subunit_write 
        = ((IData)(__VdfgRegularize_h4af1c392_0_1) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Noi__write));
    if ((0U != (0x000000ffU & (IData)(vlSelfRef.mapper_flags_in)))) {
        if ((0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
                = (0x00380000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
        }
    }
    vlSelfRef.dbg_cpumem_addr = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr;
    nes_core_top__DOT__cpumem_din = 0U;
    if ((0x00008000U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)) {
        nes_core_top__DOT__cpumem_din = vlSelfRef.nes_core_top__DOT__prg_rom
            [(0x00007fffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)];
    } else if (((0x00380000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
                & (0x00380800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))) {
        nes_core_top__DOT__cpumem_din = vlSelfRef.nes_core_top__DOT__cpu_ram
            [(0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)];
    } else if (((0x001e0000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr) 
                & (0x001e0800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr))) {
        nes_core_top__DOT__cpumem_din = vlSelfRef.nes_core_top__DOT__cart_ram
            [(0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr)];
    }
    if ((0U != (0x000000ffU & (IData)(vlSelfRef.mapper_flags_in)))) {
        nes_core_top__DOT__nes_inst__DOT__prg_allow 
            = (0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr));
    }
    nes_core_top__DOT__nes_inst__DOT__external_data_bus 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset)
            ? 0U : (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)) 
                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs))
                     ? ((0x000000e0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data)) 
                        | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy1_shift)))
                     : (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)) 
                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad2_cs))
                         ? ((0x000000e0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data)) 
                            | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy2_shift)))
                         : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs)
                             ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout)
                             : ((IData)(nes_core_top__DOT__nes_inst__DOT__prg_allow)
                                 ? (IData)(nes_core_top__DOT__cpumem_din)
                                 : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__open_bus_data))))));
    vlSelfRef.nes_core_top__DOT__joypad_clock = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad2_cs) 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)));
    vlSelfRef.nes_core_top__DOT__cpumem_write = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_write) 
                                                 & (IData)(nes_core_top__DOT__nes_inst__DOT__prg_allow));
    vlSelfRef.dbg_cpumem_read = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int) 
                                 & ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs) 
                                        | (0x0200U 
                                           == (0x000007ffU 
                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr) 
                                                  >> 5U))))) 
                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cart_pre) 
                                       & (IData)(nes_core_top__DOT__nes_inst__DOT__prg_allow))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int) 
              & (1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cs) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int) 
              & (1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399 
        = (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)) 
            & ((0x0020U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
               & ((0x0010U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                  & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                     & ((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                        & ((2U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                           & ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                    & ((0x0080U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                       & ((0x0040U 
                                           != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                          & ((0x0020U 
                                              == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                              ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2481)
                                              : ((0x0010U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                 & ((8U 
                                                     != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                    & ((4U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                       & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2304))))))))))))))))
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
            : (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
                 ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                     ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                        & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3766))
                     : ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                         ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3680)
                         : ((0x0800U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                             ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3496))
                             : ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                 ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3411)
                                 : ((0x0200U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                    & ((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                        ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                           & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3213))
                                        : ((0x0080U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                            ? ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)) 
                                               & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3128))
                                            : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189) 
                                               & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2951)))))))))
                 : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                     ? (IData)((((1U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872)) 
                                 & (0x20U == (0xe0U 
                                              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))) 
                                & ((4U != (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872)) 
                                   & (2U != (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872)))))
                     : ((0x0010U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                        & ((8U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                           & ((4U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                              & ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                  ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2743)
                                  : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)) 
                                        & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108) 
                                           & ((0x0080U 
                                               != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                              & ((0x0040U 
                                                  != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                 & ((0x0020U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606)) 
                                                    & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2483)))))))))))))
                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p_out)
                : ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928) 
                     | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932) 
                        | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933))) 
                    & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))
                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p_out)
                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk 
        = (((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920) 
                >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107) 
                           & ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                               ? ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)) 
                                  & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3848))
                               : ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                   ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3666)
                                   : ((0x0800U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                      & ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891)) 
                                         & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3394))))))) 
           | ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder) 
                  >> 8U)) & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3920)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n540 
        = ((((IData)(vlSelfRef.reset) ? 0U : (0x000000ffU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913) 
                                                 >> 8U))) 
            << 8U) | ((IData)(vlSelfRef.reset) ? 0U
                       : (0x000000ffU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928) 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n542 
        = ((((IData)(vlSelfRef.reset) ? 0U : (0x000000ffU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914) 
                                                 >> 8U))) 
            << 8U) | ((IData)(vlSelfRef.reset) ? 0U
                       : (0x000000ffU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932) 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n544 
        = ((((IData)(vlSelfRef.reset) ? 0U : (0x000000ffU 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915) 
                                                 >> 8U))) 
            << 8U) | ((IData)(vlSelfRef.reset) ? 0U
                       : (0x000000ffU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933) 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285))
                                          ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q)
                                          : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__using_secondary 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering) 
           & (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
               & (0x00ffU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
              | (0x00ffU < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
    vlSelfRef.dbg_ppumem_read = vlSelfRef.nes_core_top__DOT__ppumem_read;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_write 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__ppumem_read)) 
           & ((0x3fU != (0x0000003fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                        >> 8U))) & 
              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed) 
               >> 2U)));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__attribute_read 
        = ((~ (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read)) 
           & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering)
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data)
            : 0xffU);
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_hscroll 
        = (1U & (((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering)) 
                 | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                    >> 1U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_vscroll 
        = (1U & (((0x0117U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                  & ((0x012fU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                     & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering)))) 
                 | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                    >> 1U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pal_writes_valid 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering)) 
           & (0x3f00U == (0x3f00U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bgp_en 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame) 
            | ((0x0141U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
               & (0x0150U >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
              >> 1U));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_7 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame));
    __VdfgRegularize_h4af1c392_0_9 = ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr) 
                                          >> 2U)) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame));
    vlSelfRef.dbg_cpumem_write = vlSelfRef.nes_core_top__DOT__cpumem_write;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear_nmi 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
           | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read) 
              & (2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_data_write 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
           & (4U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_addr_write 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
           & (3U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598 
        = (((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908)) 
            << 2U) | (((1U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908)) 
                       << 1U) | (0U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3908))));
    __Vtableidx1 = ((0x00000080U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                                    << 7U)) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n427 
        = Vnes_core_top__ConstPool__TABLE_h61a609e0_0
        [__Vtableidx1];
    __Vtableidx4 = ((0x00000080U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                                    << 1U)) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n433 
        = Vnes_core_top__ConstPool__TABLE_h251c97ba_0
        [__Vtableidx4];
    __Vtableidx2 = ((0x00000080U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                                    << 5U)) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n429 
        = Vnes_core_top__ConstPool__TABLE_h1b1bc34a_0
        [__Vtableidx2];
    __Vtableidx3 = ((0x00000080U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                                    << 4U)) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n425));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n431 
        = Vnes_core_top__ConstPool__TABLE_h0e665c85_0
        [__Vtableidx3];
    __Vtableidx162 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3896;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747 
        = Vnes_core_top__ConstPool__TABLE_ha2026167_0
        [__Vtableidx162];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248 
        = (((3U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902)) 
            << 2U) | (((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902)) 
                       << 1U) | (1U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483 
        = ((0x10U != (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
           | (1U != (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3902)));
    if (vlSelfRef.reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939));
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531 
            = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483) 
                      & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)))
                      ? (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi))
                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530 
            = (1U & ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy)) 
                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483)) 
                      & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)))
                      ? (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq) 
                            | ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__DisableFrameInterrupt)) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt))))
                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939)));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603 
        = (((3U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905)) 
            << 2U) | (((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905)) 
                       << 1U) | (1U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3905))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n843 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)
              ? ((0x2000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                  ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                      ? 6U : 4U) : ((0x1000U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                     ? ((2U != (3U 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                   >> 6U)))
                                         ? ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342)
                                             ? 6U : 4U)
                                         : 4U) : ((0x0800U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                    ? 5U
                                                    : 3U)
                                                   : 
                                                  ((0x0400U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667)
                                                    : 
                                                   ((0x0200U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                     ? 
                                                    ((1U 
                                                      & ((6U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                              >> 5U)))
                                                          ? 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                               >> 5U)))
                                                           ? 
                                                          ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                           >> 1U)
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                >> 5U)))
                                                            ? 
                                                           ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                            >> 1U)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                 >> 5U)))
                                                             ? 
                                                            ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                             >> 1U)
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                  >> 5U)))
                                                              ? 
                                                             ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                              >> 1U)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 5U)))
                                                               ? 
                                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                               >> 1U)
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)
                                                                : 
                                                               (~ 
                                                                ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                 >> 1U))))))))
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                               >> 5U)))
                                                           ? 
                                                          ((4U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                >> 5U)))
                                                            ? 
                                                           ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                            >> 1U)
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                 >> 5U)))
                                                             ? 
                                                            ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                             >> 1U)
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                  >> 5U)))
                                                              ? 
                                                             ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                              >> 1U)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 5U)))
                                                               ? 
                                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                               >> 1U)
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)
                                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p))))))
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                >> 5U)))
                                                            ? 
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                 >> 5U)))
                                                             ? 
                                                            ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                             >> 1U)
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                  >> 5U)))
                                                              ? 
                                                             ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                              >> 1U)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 5U)))
                                                               ? 
                                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                               >> 1U)
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)
                                                                : 
                                                               (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p))))))
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                 >> 5U)))
                                                             ? 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                  >> 5U)))
                                                              ? 
                                                             ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                              >> 1U)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 5U)))
                                                               ? 
                                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                               >> 1U)
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 6U))))
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                  >> 5U)))
                                                              ? 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 5U)))
                                                               ? 
                                                              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                               >> 1U)
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)
                                                                : 
                                                               (~ 
                                                                ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                 >> 6U))))
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                   >> 5U)))
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 7U))
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                                                    >> 5U)))
                                                                ? 
                                                               (~ 
                                                                ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                 >> 7U))
                                                                : 
                                                               ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                                                >> 1U)))))))))
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((0x0100U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                       ? 5U
                                                       : 3U)
                                                      : 
                                                     ((0x0080U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                       ? 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017)
                                                        ? 
                                                       ((0x00000020U 
                                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                                         ? 4U
                                                         : 2U)
                                                        : 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189)
                                                        ? 4U
                                                        : 2U))))))))
              : ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                  ? 2U : ((0x0010U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                           ? ((2U == (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499))
                               ? ((0xa2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                                   ? 1U : ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2828)
                                            ? 1U : 0U))
                               : 1U) : ((8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                         ? 1U : ((4U 
                                                  == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                   ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2667)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_109)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_108)
                                                      ? 
                                                     ((0x0080U 
                                                       == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                       ? 1U
                                                       : 
                                                      ((0x0040U 
                                                        == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                        ? 1U
                                                        : 
                                                       ((0x0020U 
                                                         == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                         ? 
                                                        ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342)
                                                          ? 1U
                                                          : 3U)
                                                         : 
                                                        ((0x0010U 
                                                          == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                          ? 
                                                         ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342)
                                                           ? 1U
                                                           : 2U)
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                           ? 5U
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                            ? 5U
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606))
                                                             ? 5U
                                                             : 6U)))))))
                                                      : 1U))
                                                    : 1U))))))) 
            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a 
        = (0x00003fffU & ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d)
                           ? ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read)
                               ? (0x00002000U | (0x00000fffU 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)))
                               : ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__attribute_read)
                                   ? (0x000023c0U | 
                                      ((0x00000c00U 
                                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                                       | ((0x00000038U 
                                           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                              >> 4U)) 
                                          | (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                   >> 2U)))))
                                   : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)
                                       ? ((0x00001000U 
                                           & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1)
                                                ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_tile)
                                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt1)) 
                                              << 0x0000000cU)) 
                                          | ((0x00000fe0U 
                                              & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_tile) 
                                                 << 4U)) 
                                             | ((0x00000010U 
                                                 & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1)
                                                      ? 
                                                     ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__y_f) 
                                                      >> 3U)
                                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_tile)) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count) 
                                                       << 2U)) 
                                                   | (7U 
                                                      & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__y_f))))))
                                       : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt1) 
                                           << 0x0000000cU) 
                                          | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_name_table) 
                                              << 4U) 
                                             | ((((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                                                  | (0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)))) 
                                                 << 3U) 
                                                | (7U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                      >> 0x0000000cU))))))))
                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask 
        = ((0x7bffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask)) 
           | (0x00000400U & (((IData)((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                                        >> 1U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_hscroll)))
                               ? ((0x00000020U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t) 
                                                  >> 5U)) 
                                  | (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t)))
                               : 0x3fU) << 5U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask 
        = ((0x7fe0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask)) 
           | ((IData)((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                        >> 1U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_hscroll)))
               ? (0x0000001fU & ((0x00000020U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t) 
                                                 >> 5U)) 
                                 | (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t))))
               : 0x0000001fU));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask 
        = ((0x07ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask)) 
           | (0x00007800U & (((IData)((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                                        >> 1U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_vscroll)))
                               ? ((0x000001e0U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t) 
                                                  >> 6U)) 
                                  | (0x0000001fU & 
                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t) 
                                      >> 5U))) : 0x01ffU) 
                             << 6U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask 
        = ((0x7c1fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask)) 
           | (((IData)((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift) 
                         >> 1U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_vscroll)))
                ? (0x0000001fU & ((0x000001e0U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t) 
                                                  >> 6U)) 
                                  | (0x0000001fU & 
                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t) 
                                      >> 5U)))) : 0x0000001fU) 
              << 5U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__active 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__x_coord)) 
           | (IData)(__VdfgRegularize_h4af1c392_0_9));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_data_bus 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad1_cs) 
            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable))
            ? ((0x000000e0U & (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus)) 
               | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy1_shift)))
            : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__joypad2_cs) 
                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable))
                ? ((0x000000e0U & (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus)) 
                   | (1U & (IData)(vlSelfRef.nes_core_top__DOT__joy2_shift)))
                : (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus 
        = ((IData)(((0x00004000U == (0x0000ffe0U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774)) 
                    & (0x0015U == (0x001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))))
            ? ((((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq) 
                   << 3U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_interrupt_buffer) 
                             << 2U)) | ((2U & ((IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus) 
                                               >> 4U)) 
                                        | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive))) 
                << 4U) | ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc) 
                            << 3U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc) 
                                      << 2U)) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc))))
            : (IData)(nes_core_top__DOT__nes_inst__DOT__external_data_bus));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n438 
        = (3U & ((0x18U == (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                  ? (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n431) 
                      << 1U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n429))
                  : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                     >> 2U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n843) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__vram_ce 
        = (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                 >> 0x0000000dU));
    nes_core_top__DOT__nes_inst__DOT__chr_allow = (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                                                       >> 0x0000000dU)) 
                                                   || ((1U 
                                                        & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.mapper_flags_in 
                                                                      >> 0x0000000fU)))));
    if ((0U != (0x000000ffU & (IData)(vlSelfRef.mapper_flags_in)))) {
        nes_core_top__DOT__nes_inst__DOT__chr_allow = 0U;
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain 
        = ((0x00003f00U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a)) 
           | (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE)
                              ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a)
                              : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a_byte))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__corrupting 
        = ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
               >> 1U)) & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__old_rendering) 
                          & (((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__attribute_read)
                               ? (IData)(((0x3000U 
                                           == (0x3000U 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v))) 
                                          & (0x0f00U 
                                             == (0x0f00U 
                                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a)))))
                               : (0x0000003fU == (0x0000003fU 
                                                  & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                                     >> 8U)))) 
                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame))));
    __VdfgRegularize_h4af1c392_0_19 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix1)));
    __VdfgRegularize_h4af1c392_0_18 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix1)));
    __VdfgRegularize_h4af1c392_0_17 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix1)));
    __VdfgRegularize_h4af1c392_0_16 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix1)));
    __VdfgRegularize_h4af1c392_0_15 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix1)));
    __VdfgRegularize_h4af1c392_0_14 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix1)));
    __VdfgRegularize_h4af1c392_0_13 = ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__active) 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix2)) 
                                        << 1U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__active) 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix1)));
    vlSelfRef.dbg_cpu_din = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1) 
           & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.nes_core_top__DOT__ppumem_write = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_write) 
                                                 & ((IData)(nes_core_top__DOT__nes_inst__DOT__chr_allow) 
                                                    | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__vram_ce)));
    nes_core_top__DOT__nes_inst__DOT__vram_a10 = (1U 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.mapper_flags_in 
                                                                 >> 0x0000000eU)))
                                                      ? 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                                                      >> 0x0000000aU)
                                                      : 
                                                     ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a) 
                                                      >> 0x0000000bU)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr 
        = ((0x00002000U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a))
            ? (0x00300000U | (((IData)(nes_core_top__DOT__nes_inst__DOT__vram_a10) 
                               << 0x0000000aU) | (0x000003ffU 
                                                  & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain))))
            : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0)
                ? (0x00200000U | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain))
                : (0x00200000U | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spr0_hit 
        = ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_7) 
           & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)) 
              & ((0x0100U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                 & ((0U != (IData)(__VdfgRegularize_h4af1c392_0_13)) 
                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj0_on_line) 
                       & ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel) 
                          & (0U != (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4))))))));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank 
        = ((0U != (IData)(__VdfgRegularize_h4af1c392_0_13))
            ? (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__aprio) 
                << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__upper_color) 
                           << 2U) | (IData)(__VdfgRegularize_h4af1c392_0_13)))
            : ((0U == (IData)(__VdfgRegularize_h4af1c392_0_14))
                ? ((0U == (IData)(__VdfgRegularize_h4af1c392_0_15))
                    ? ((0U == (IData)(__VdfgRegularize_h4af1c392_0_16))
                        ? ((0U == (IData)(__VdfgRegularize_h4af1c392_0_17))
                            ? ((0U == (IData)(__VdfgRegularize_h4af1c392_0_18))
                                ? ((0U == (IData)(__VdfgRegularize_h4af1c392_0_19))
                                    ? ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__aprio) 
                                         << 4U) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__upper_color) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__active) 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix2)) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__active) 
                                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix1))))
                                    : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__aprio) 
                                        << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__upper_color) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h4af1c392_0_19))))
                                : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__aprio) 
                                    << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__upper_color) 
                                               << 2U) 
                                              | (IData)(__VdfgRegularize_h4af1c392_0_18))))
                            : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__aprio) 
                                << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__upper_color) 
                                           << 2U) | (IData)(__VdfgRegularize_h4af1c392_0_17))))
                        : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__aprio) 
                            << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__upper_color) 
                                       << 2U) | (IData)(__VdfgRegularize_h4af1c392_0_16))))
                    : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__aprio) 
                        << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__upper_color) 
                                   << 2U) | (IData)(__VdfgRegularize_h4af1c392_0_15))))
                : (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__aprio) 
                    << 4U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__upper_color) 
                               << 2U) | (IData)(__VdfgRegularize_h4af1c392_0_14)))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728 
        = ((0xeeU | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI));
    vlSelfRef.dbg_ppumem_write = vlSelfRef.nes_core_top__DOT__ppumem_write;
    vlSelfRef.dbg_ppumem_addr = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr;
    nes_core_top__DOT__ppumem_din = 0U;
    if (((0x00300000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
         & (0x00300800U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))) {
        nes_core_top__DOT__ppumem_din = vlSelfRef.nes_core_top__DOT__ciram
            [(0x000007ffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr)];
    } else if (((0x00200000U <= vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr) 
                & (0x00204000U > vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr))) {
        nes_core_top__DOT__ppumem_din = vlSelfRef.nes_core_top__DOT__chr_rom
            [(0x00001fffU & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_linaddr)];
    }
    __VdfgRegularize_h4af1c392_0_2 = ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel)
                                       ? (3U & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank))
                                       : 0U);
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749 
        = (0x000000ffU & ((((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                            | (0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))) 
                           | (((0x0100U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                               | (0x0080U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))) 
                              | ((0x0040U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                                 | ((0x0020U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                                    | ((0x0010U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)) 
                                       | (8U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747)))))))
                           ? ((0x0400U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                               ? 0U : ((0x0200U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741)
                                        : ((0x0100U 
                                            == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                            ? ((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728) 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914))
                                            : ((0x0080U 
                                                == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                ? (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728)
                                                : (
                                                   (0x0040U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                    ? 
                                                   ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913) 
                                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI))
                                                    : 
                                                   ((0x0020U 
                                                     == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                     ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p)
                                                     : 
                                                    ((0x0010U 
                                                      == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924)
                                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915))))))))
                           : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)
                               : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)
                                   : ((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747))
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI)
                                       : 0U)))));
    vlSelfRef.dbg_chr_to_ppu = nes_core_top__DOT__ppumem_din;
    vlSelfRef.dbg_ppumem_din = nes_core_top__DOT__ppumem_din;
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr 
        = (0x0000001fU & ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_7)
                           ? ((0U != ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4) 
                                      | (IData)(__VdfgRegularize_h4af1c392_0_2)))
                               ? (((~ (((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank) 
                                        >> 4U) & ((IData)(__VdfgRegularize_h4af1c392_0_4) 
                                                  & (0U 
                                                     != (IData)(__VdfgRegularize_h4af1c392_0_12))))) 
                                   & ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel) 
                                      & (0U != (3U 
                                                & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank)))))
                                   ? (0x00000010U | 
                                      ((0x0000000cU 
                                        & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_pixel_noblank)) 
                                       | (IData)(__VdfgRegularize_h4af1c392_0_2)))
                                   : ((8U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4) 
                                              >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x)) 
                                             << 3U)) 
                                      | ((4U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3) 
                                                 >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x)) 
                                                << 2U)) 
                                         | (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4))))
                               : 0U) : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pal_writes_valid)
                                         ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)
                                         : 0U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645 
        = (0x000001ffU & ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))
                           ? (0x000001f8U | ((6U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631)) 
                                             | (1U 
                                                & ((3U 
                                                    == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934)) 
                                                   | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631)))))
                           : ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920)
                               : ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603))
                                   ? ((0x000000ffU 
                                       & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920)) 
                                      + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749))
                                   : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920) 
                                      + (1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603)))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2 
        = ((0U == (3U & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr)))
            ? (0x0000000fU & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr))
            : (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color2 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette
        [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__corrupting)
           ? ((0x00000010U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2)) 
              | ((0x0000000cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                 | (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2))))
           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2))];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write)
            ? (IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout)
            : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read)
                ? ((2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))
                    ? (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured) 
                        << 7U) | ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)) 
                                    & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spr0_hit) 
                                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite0_hit_bg))) 
                                   << 6U) | ((((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)) 
                                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_overflow)) 
                                              << 5U) 
                                             | (0x0000001fU 
                                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout)))))
                    : ((4U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))
                        ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data)
                        : ((7U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)))
                            ? ((0x3fU == (0x0000003fU 
                                          & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                             >> 8U)))
                                ? ((0x000000c0U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout)) 
                                   | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale)
                                       ? (0x00000030U 
                                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color2))
                                       : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color2)))
                                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_latch))
                            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout))))
                : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_addr_write)
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur 
        = (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__using_secondary)
                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)
                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_addr_write)
                               ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus) 
                                  >> 3U) : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr) 
                                            >> 3U))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_dbus 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_data_write)
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data));
    vlSelfRef.color = ((1U & ((~ (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write) 
                                   & (1U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))))
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus)
                                   : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale))) 
                              & ((~ (((0x010fU <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                                      & (0x0148U >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                                     | (IData)(vlSelfRef.vblank))) 
                                 | (IData)((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                                             >> 2U) 
                                            & (0x3f00U 
                                               == (0x3f00U 
                                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v))))))))
                        ? vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[0U]
                        : (0x00000030U & vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[0U]));
    vlSelfRef.nes_core_top__DOT__ppumem_dout = (0x000000ffU 
                                                & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE)
                                                    ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a)
                                                    : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_range 
        = (((0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
            >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_dbus)) 
           & ((0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
              < ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_dbus) 
                 + ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1)
                     ? 0x00000010U : 8U))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din 
        = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__ppumem_read)
                           ? (IData)(nes_core_top__DOT__ppumem_din)
                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_write)
                               ? (IData)(vlSelfRef.nes_core_top__DOT__ppumem_dout)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE)
                                   ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a)
                                   : (IData)(nes_core_top__DOT__ppumem_din)))));
    __Vtableidx163 = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din;
    __VdfgRegularize_h4af1c392_0_7 = Vnes_core_top__ConstPool__TABLE_hc1b97178_0
        [__Vtableidx163];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in 
        = ((0x07fff800U & ((((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__dummy_sprite)
                              ? 0U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_x)
                                       ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din)
                                       : (IData)(__VdfgRegularize_h4af1c392_0_7))) 
                            << 0x00000013U) | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__dummy_sprite)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_x)
                                                  ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din)
                                                  : (IData)(__VdfgRegularize_h4af1c392_0_7))) 
                                               << 0x0000000bU))) 
           | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
               << 3U) | ((6U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
                                << 1U)) | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp) 
                                                 >> 5U)))));
}
