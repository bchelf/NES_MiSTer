// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_DmcChan__Sz2_SBz3___eval_initial__TOP__nes_core_top__nes_inst__apu__Dmc(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___eval_initial__TOP__nes_core_top__nes_inst__apu__Dmc\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pal_pitch_lut[0U] = 0x01d7U;
    vlSelfRef.__PVT__pal_pitch_lut[1U] = 0x0067U;
    vlSelfRef.__PVT__pal_pitch_lut[2U] = 0x00d9U;
    vlSelfRef.__PVT__pal_pitch_lut[3U] = 0x0143U;
    vlSelfRef.__PVT__pal_pitch_lut[4U] = 0x01e1U;
    vlSelfRef.__PVT__pal_pitch_lut[5U] = 0x007bU;
    vlSelfRef.__PVT__pal_pitch_lut[6U] = 0x005cU;
    vlSelfRef.__PVT__pal_pitch_lut[7U] = 0x0132U;
    vlSelfRef.__PVT__pal_pitch_lut[8U] = 0x004aU;
    vlSelfRef.__PVT__pal_pitch_lut[9U] = 0x01a3U;
    vlSelfRef.__PVT__pal_pitch_lut[10U] = 0x01cfU;
    vlSelfRef.__PVT__pal_pitch_lut[11U] = 0x01cdU;
    vlSelfRef.__PVT__pal_pitch_lut[12U] = 0x002aU;
    vlSelfRef.__PVT__pal_pitch_lut[13U] = 0x011cU;
    vlSelfRef.__PVT__pal_pitch_lut[14U] = 0x011bU;
    vlSelfRef.__PVT__pal_pitch_lut[15U] = 0x0157U;
    vlSelfRef.__PVT__ntsc_pitch_lut[0U] = 0x019dU;
    vlSelfRef.__PVT__ntsc_pitch_lut[1U] = 0x00a2U;
    vlSelfRef.__PVT__ntsc_pitch_lut[2U] = 0x0185U;
    vlSelfRef.__PVT__ntsc_pitch_lut[3U] = 0x01b6U;
    vlSelfRef.__PVT__ntsc_pitch_lut[4U] = 0x00efU;
    vlSelfRef.__PVT__ntsc_pitch_lut[5U] = 0x01f8U;
    vlSelfRef.__PVT__ntsc_pitch_lut[6U] = 0x017cU;
    vlSelfRef.__PVT__ntsc_pitch_lut[7U] = 0x0117U;
    vlSelfRef.__PVT__ntsc_pitch_lut[8U] = 0x0120U;
    vlSelfRef.__PVT__ntsc_pitch_lut[9U] = 0x0076U;
    vlSelfRef.__PVT__ntsc_pitch_lut[10U] = 0x011eU;
    vlSelfRef.__PVT__ntsc_pitch_lut[11U] = 0x013eU;
    vlSelfRef.__PVT__ntsc_pitch_lut[12U] = 0x0162U;
    vlSelfRef.__PVT__ntsc_pitch_lut[13U] = 0x0123U;
    vlSelfRef.__PVT__ntsc_pitch_lut[14U] = 0x00e3U;
    vlSelfRef.__PVT__ntsc_pitch_lut[15U] = 0x00d5U;
    VL_ASSIGNBIT_IO(0x0fU, vlSelfRef.__PVT__dma_address);
    VL_ASSIGNSEL_QI(64, 11, 0x35U, vlSelfRef.__PVT__SS_DMC1_BACK, 0U);
    VL_ASSIGNSEL_QI(64, 16, 0x30U, vlSelfRef.__PVT__SS_DMC2_BACK, 0U);
}

VL_ATTR_COLD void Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__0(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(64, 25, 0U, vlSelfRef.__PVT__SS_DMC2_BACK, 
                    VL_CONCAT_III(25,1,24, (IData)(vlSelfRef.__PVT__loop), 
                                  VL_CONCAT_III(24,9,15, (IData)(vlSelfRef.__PVT__dmc_lsfr), 
                                                (0x00007fffU 
                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__dma_address), 0U, 15)))));
    VL_ASSIGNSEL_QI(64, 21, 0x00000019U, vlSelfRef.__PVT__SS_DMC2_BACK, 
                    VL_CONCAT_III(21,8,13, (IData)(vlSelfRef.__PVT__sample_length), 
                                  VL_CONCAT_III(13,8,5, (IData)(vlSelfRef.__PVT__sample_address), 
                                                VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__irq_enable), (IData)(vlSelfRef.__PVT__frequency)))));
    VL_ASSIGNSEL_QI(64, 2, 0x0000002eU, vlSelfRef.__PVT__SS_DMC2_BACK, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__dmc_silence), (IData)(vlSelfRef.__PVT__dmc_clock)));
    VL_ASSIGNSEL_QI(64, 25, 0U, vlSelfRef.__PVT__SS_DMC1_BACK, 
                    VL_CONCAT_III(25,8,17, (IData)(vlSelfRef.__PVT__sample_shift), 
                                  VL_CONCAT_III(17,8,9, (IData)(vlSelfRef.__PVT__dmc_volume_next), 
                                                VL_CONCAT_III(9,8,1, (IData)(vlSelfRef.__PVT__dmc_volume), (IData)(vlSelfRef.__PVT__irq)))));
    VL_ASSIGNSEL_QI(64, 24, 0x00000019U, vlSelfRef.__PVT__SS_DMC1_BACK, 
                    VL_CONCAT_III(24,1,23, (IData)(vlSelfRef.__PVT__have_buffer), 
                                  VL_CONCAT_III(23,8,15, (IData)(vlSelfRef.__PVT__sample_buffer), 
                                                VL_CONCAT_III(15,3,12, (IData)(vlSelfRef.__PVT__dmc_bits), (IData)(vlSelfRef.__PVT__bytes_remaining)))));
    VL_ASSIGNSEL_QI(64, 4, 0x00000031U, vlSelfRef.__PVT__SS_DMC1_BACK, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__enable_3), (IData)(vlSelfRef.__PVT__enable_2)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__enable_1), (IData)(vlSelfRef.__PVT__enable))));
    vlSelfRef.__PVT__Sample = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__dmc_volume_next), 0U, 7));
    vlSelfRef.__PVT__dma_req = ((~ (IData)(vlSelfRef.__PVT__have_buffer)) 
                                & (IData)(vlSelfRef.__PVT__enable_3));
    vlSelfRef.__PVT__SS_DMC1 = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__Dout;
    vlSelfRef.__PVT__SS_DMC2 = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__Din 
        = vlSelfRef.__PVT__SS_DMC2_BACK;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__Din 
        = vlSelfRef.__PVT__SS_DMC1_BACK;
}

VL_ATTR_COLD void Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__1(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__clk 
        = vlSelfRef.__PVT__clk;
}

VL_ATTR_COLD void Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__2(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

VL_ATTR_COLD void Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__3(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___stl_sequent__TOP__nes_core_top__nes_inst__apu__Dmc__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC1.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__apu__Dmc__iREG_SAVESTATE_APU_DMC2.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_Dout = (vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]);
}

VL_ATTR_COLD void Vnes_core_top_DmcChan__Sz2_SBz3___ctor_var_reset(Vnes_core_top_DmcChan__Sz2_SBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_DmcChan__Sz2_SBz3___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__MMC5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981470898745018067ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__aclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874142104224401774ull);
    vlSelf->__PVT__aclk1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17132189197396772515ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__ain = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11345839893430635791ull);
    vlSelf->__PVT__DIN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8165808950731919723ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__dma_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11884925740518628956ull);
    vlSelf->__PVT__dma_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11658633766720764531ull);
    vlSelf->__PVT__PAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15568346935915704965ull);
    vlSelf->__PVT__dma_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10109381045420366363ull);
    vlSelf->__PVT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145092342636110857ull);
    vlSelf->__PVT__Sample = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4658883583127319325ull);
    vlSelf->__PVT__dma_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1890691738561409054ull);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__SaveStateBus_wired_or[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10529134642807903460ull);
    }
    vlSelf->__PVT__SS_DMC1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10006018553969191237ull);
    vlSelf->__PVT__SS_DMC1_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 89188967140833165ull);
    vlSelf->__PVT__SS_DMC2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14168967598791612714ull);
    vlSelf->__PVT__SS_DMC2_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18021089760279866099ull);
    vlSelf->__Vcellout__iREG_SAVESTATE_APU_DMC1____pinNumber6 = 0;
    vlSelf->__Vcellout__iREG_SAVESTATE_APU_DMC2____pinNumber6 = 0;
    vlSelf->__PVT__irq_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 352786420347785883ull);
    vlSelf->__PVT__loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10132044792275962830ull);
    vlSelf->__PVT__frequency = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14873829961797343096ull);
    vlSelf->__PVT__sample_address = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17829619837854639257ull);
    vlSelf->__PVT__sample_length = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13356472961759467569ull);
    vlSelf->__PVT__bytes_remaining = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17646065191477497081ull);
    vlSelf->__PVT__sample_buffer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11788627377199724212ull);
    vlSelf->__PVT__dmc_lsfr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10092957289872116502ull);
    vlSelf->__PVT__dmc_volume = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15391925665739762419ull);
    vlSelf->__PVT__dmc_volume_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8762086376585368390ull);
    vlSelf->__PVT__dmc_silence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2831625062656218422ull);
    vlSelf->__PVT__have_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10045812051830791431ull);
    vlSelf->__PVT__sample_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3311661285769974582ull);
    vlSelf->__PVT__dmc_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18267885987883622581ull);
    vlSelf->__PVT__enable_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 684938744568501283ull);
    vlSelf->__PVT__enable_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14537984722648721687ull);
    vlSelf->__PVT__enable_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6921979317754337766ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__pal_pitch_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8562090392232519994ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ntsc_pitch_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16595721735132776832ull);
    }
    vlSelf->__PVT__dmc_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13235017754958648678ull);
    vlSelf->__Vdly__irq_enable = 0;
    vlSelf->__Vdly__loop = 0;
    vlSelf->__Vdly__frequency = 0;
    vlSelf->__Vdly__irq = 0;
    vlSelf->__Vdly__dmc_volume = 0;
    vlSelf->__Vdly__sample_address = 0;
    vlSelf->__Vdly__sample_length = 0;
    vlSelf->__Vdly__enable = 0;
    vlSelf->__Vdly__dma_address = 0;
    vlSelf->__VdlyMask__dma_address = 0;
    vlSelf->__Vdly__bytes_remaining = 0;
    vlSelf->__Vdly__enable_1 = 0;
    vlSelf->__Vdly__enable_2 = 0;
    vlSelf->__Vdly__dmc_lsfr = 0;
    vlSelf->__Vdly__dmc_clock = 0;
    vlSelf->__Vdly__sample_shift = 0;
    vlSelf->__Vdly__dmc_bits = 0;
    vlSelf->__Vdly__dmc_silence = 0;
    vlSelf->__Vdly__have_buffer = 0;
    vlSelf->__Vdly__sample_buffer = 0;
    vlSelf->__Vdly__enable_3 = 0;
    vlSelf->__Vdly__dmc_volume_next = 0;
}
