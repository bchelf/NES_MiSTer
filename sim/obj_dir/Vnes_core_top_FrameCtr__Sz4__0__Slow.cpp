// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___eval_initial__TOP__nes_core_top__nes_inst__apu__frame_counter(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___eval_initial__TOP__nes_core_top__nes_inst__apu__frame_counter\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QQ(64, 41, 0x17U, vlSelfRef.__PVT__SS_FCT_BACK, 0ULL);
}

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__0(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frame_int_disabled = vlSelfRef.__PVT__DisableFrameInterrupt;
    vlSelfRef.__PVT__irq = ((IData)(vlSelfRef.__PVT__FrameInterrupt) 
                            & (~ (IData)(vlSelfRef.__PVT__DisableFrameInterrupt)));
    VL_ASSIGNSEL_QI(64, 18, 0U, vlSelfRef.__PVT__SS_FCT_BACK, 
                    VL_CONCAT_III(18,1,17, (IData)(vlSelfRef.__PVT__w4017_1), 
                                  VL_CONCAT_III(17,1,16, (IData)(vlSelfRef.__PVT__frame_interrupt_buffer), 
                                                VL_CONCAT_III(16,1,15, (IData)(vlSelfRef.__PVT__FrameInterrupt), (IData)(vlSelfRef.__PVT__frame)))));
    VL_ASSIGNSEL_QI(64, 5, 0x00000012U, vlSelfRef.__PVT__SS_FCT_BACK, 
                    VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__frame_reset_2), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__FrameSeqMode_2), (IData)(vlSelfRef.__PVT__FrameSeqMode)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__DisableFrameInterrupt), (IData)(vlSelfRef.__PVT__w4017_2)))));
    vlSelfRef.__PVT__irq_flag = vlSelfRef.__PVT__frame_interrupt_buffer;
    vlSelfRef.__PVT__seq_mode = ((IData)(vlSelfRef.__PVT__aclk1)
                                  ? (IData)(vlSelfRef.__PVT__FrameSeqMode)
                                  : (IData)(vlSelfRef.__PVT__FrameSeqMode_2));
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__Din 
        = vlSelfRef.__PVT__SS_FCT_BACK;
}

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__1(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_FCT = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__Dout;
}

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__2(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__PVT__frm_a = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x1fa4U : 0x1061U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_c = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x5815U : 0x2cd3U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_b = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x4430U : 0x3603U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_e = (((IData)(vlSelfRef.__PVT__PAL)
                                ? 0x04faU : 0x7185U) 
                              == (IData)(vlSelfRef.__PVT__frame));
    vlSelfRef.__PVT__frm_d = ((((IData)(vlSelfRef.__PVT__PAL)
                                 ? 0x0be8U : 0x0a1fU) 
                               == (IData)(vlSelfRef.__PVT__frame)) 
                              & (~ (IData)(vlSelfRef.__PVT__seq_mode)));
    vlSelfRef.__PVT__set_irq = ((IData)(vlSelfRef.__PVT__frm_d) 
                                & (~ (IData)(vlSelfRef.__PVT__FrameSeqMode)));
    vlSelfRef.__PVT__frame_reset = (((IData)(vlSelfRef.__PVT__frm_d) 
                                     | (IData)(vlSelfRef.__PVT__frm_e)) 
                                    | (IData)(vlSelfRef.__PVT__w4017_2));
    vlSelfRef.__PVT__frame_half = ((((IData)(vlSelfRef.__PVT__frm_b) 
                                     | (IData)(vlSelfRef.__PVT__frm_d)) 
                                    | (IData)(vlSelfRef.__PVT__frm_e)) 
                                   | ((IData)(vlSelfRef.__PVT__w4017_2) 
                                      & (IData)(vlSelfRef.__PVT__seq_mode)));
    vlSelfRef.__PVT__frame_quarter = ((((((IData)(vlSelfRef.__PVT__frm_a) 
                                          | (IData)(vlSelfRef.__PVT__frm_b)) 
                                         | (IData)(vlSelfRef.__PVT__frm_c)) 
                                        | (IData)(vlSelfRef.__PVT__frm_d)) 
                                       | (IData)(vlSelfRef.__PVT__frm_e)) 
                                      | ((IData)(vlSelfRef.__PVT__w4017_2) 
                                         & (IData)(vlSelfRef.__PVT__seq_mode)));
}

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__3(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__4(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___stl_sequent__TOP__nes_core_top__nes_inst__apu__frame_counter__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__apu__frame_counter__iREG_SAVESTATE_APU_FCT.__PVT__BUS_Dout;
}

VL_ATTR_COLD void Vnes_core_top_FrameCtr__Sz4___ctor_var_reset(Vnes_core_top_FrameCtr__Sz4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_FrameCtr__Sz4___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__aclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874142104224401774ull);
    vlSelf->__PVT__aclk2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4490051587444836606ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916498648420597437ull);
    vlSelf->__PVT__write_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17143924626070853396ull);
    vlSelf->__PVT__din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15192908731043726583ull);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__PAL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15568346935915704965ull);
    vlSelf->__PVT__MMC5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981470898745018067ull);
    vlSelf->__PVT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145092342636110857ull);
    vlSelf->__PVT__irq_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15094107695278012219ull);
    vlSelf->__PVT__frame_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656671421825424733ull);
    vlSelf->__PVT__frame_quarter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18445729400997105964ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__SS_FCT = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16826608888222583038ull);
    vlSelf->__PVT__SS_FCT_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3818112907953497689ull);
    vlSelf->__PVT__frame_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3417139695705413224ull);
    vlSelf->__PVT__frame_interrupt_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10563118380637100331ull);
    vlSelf->__PVT__frame_int_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3816060176903509678ull);
    vlSelf->__PVT__FrameInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9877588250673222637ull);
    vlSelf->__PVT__set_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802670337473889329ull);
    vlSelf->__PVT__FrameSeqMode_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5999850082782531627ull);
    vlSelf->__PVT__frame_reset_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15836314337768434427ull);
    vlSelf->__PVT__w4017_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5820882651535412575ull);
    vlSelf->__PVT__w4017_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4229989456592207077ull);
    vlSelf->__PVT__frame = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4793244500811731426ull);
    vlSelf->__PVT__DisableFrameInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17889389932490292354ull);
    vlSelf->__PVT__FrameSeqMode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13006843829699095137ull);
    vlSelf->__PVT__seq_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7201663043431291208ull);
    vlSelf->__PVT__frm_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5161155192008862135ull);
    vlSelf->__PVT__frm_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522166224596958100ull);
    vlSelf->__PVT__frm_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8100527716299645465ull);
    vlSelf->__PVT__frm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2024003477680209181ull);
    vlSelf->__PVT__frm_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14697719086096537493ull);
    vlSelf->__Vdly__FrameInterrupt = 0;
    vlSelf->__Vdly__frame_interrupt_buffer = 0;
    vlSelf->__Vdly__frame = 0;
    vlSelf->__Vdly__w4017_2 = 0;
    vlSelf->__Vdly__w4017_1 = 0;
    vlSelf->__Vdly__FrameSeqMode_2 = 0;
    vlSelf->__Vdly__frame_reset_2 = 0;
    vlSelf->__Vdly__FrameSeqMode = 0;
    vlSelf->__Vdly__DisableFrameInterrupt = 0;
}
