// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___eval_static__TOP__nes_core_top__nes_inst__ppu__clock(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___eval_static__TOP__nes_core_top__nes_inst__ppu__clock\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_even_frame = 0U;
    vlSelfRef.__PVT__skip_next = 0U;
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___eval_initial__TOP__nes_core_top__nes_inst__ppu__clock(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___eval_initial__TOP__nes_core_top__nes_inst__ppu__clock\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QQ(64, 34, 0x1eU, vlSelfRef.__PVT__genblk1__DOT__SS_CLKGEN_BACK, 0ULL);
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__0(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__hsync_period = ((0x0116U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                     & (0x012eU >= (IData)(vlSelfRef.__PVT__cycle)));
    vlSelfRef.__PVT__hblank_period = ((0x010dU <= (IData)(vlSelfRef.__PVT__cycle)) 
                                      & (0x0146U >= (IData)(vlSelfRef.__PVT__cycle)));
    vlSelfRef.__PVT__exiting_vblank = ((0U == (IData)(vlSelfRef.__PVT__cycle)) 
                                       & (IData)(vlSelfRef.__PVT__is_pre_render));
    vlSelfRef.__PVT__at_last_cycle_group = (0x2aU == 
                                            (0x0000003fU 
                                             & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 3U, 6)));
    VL_ASSIGNSEL_QI(64, 23, 0U, vlSelfRef.__PVT__genblk1__DOT__SS_CLKGEN_BACK, 
                    VL_CONCAT_III(23,9,14, (IData)(vlSelfRef.__PVT__scanline), 
                                  VL_CONCAT_III(14,4,10, (IData)(vlSelfRef.__PVT__rendering_sr), 
                                                VL_CONCAT_III(10,1,9, (IData)(vlSelfRef.__PVT__is_in_vblank), (IData)(vlSelfRef.__PVT__cycle)))));
    VL_ASSIGNSEL_QI(64, 7, 0x00000017U, vlSelfRef.__PVT__genblk1__DOT__SS_CLKGEN_BACK, 
                    VL_CONCAT_III(7,3,4, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__hsync), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__vsync), (IData)(vlSelfRef.__PVT__hblank))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__vblank), (IData)(vlSelfRef.__PVT__skip_next)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__is_even_frame), (IData)(vlSelfRef.__PVT__is_pre_render)))));
    vlSelfRef.__PVT__evenframe = vlSelfRef.__PVT__is_even_frame;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__Din 
        = vlSelfRef.__PVT__genblk1__DOT__SS_CLKGEN_BACK;
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__1(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SS_CLKGEN = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__Dout;
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__2(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    if (((0U == (IData)(vlSelfRef.__PVT__sys_type)) 
         || (3U == (IData)(vlSelfRef.__PVT__sys_type)))) {
        vlSelfRef.__PVT__vblank_start_sl = 0x00f1U;
        vlSelfRef.__PVT__vblank_end_sl = 0x0104U;
        vlSelfRef.__PVT__vsync_start_sl = 0x00f4U;
        vlSelfRef.__PVT__skip_en = 1U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__sys_type))) {
        vlSelfRef.__PVT__vblank_start_sl = 0x00f1U;
        vlSelfRef.__PVT__vblank_end_sl = 0x0136U;
        vlSelfRef.__PVT__vsync_start_sl = 0x010dU;
        vlSelfRef.__PVT__skip_en = 0U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__sys_type))) {
        vlSelfRef.__PVT__vblank_start_sl = 0x0123U;
        vlSelfRef.__PVT__vblank_end_sl = 0x0136U;
        vlSelfRef.__PVT__vsync_start_sl = 0x010dU;
        vlSelfRef.__PVT__skip_en = 0U;
    }
    vlSelfRef.__PVT__is_vbe_sl = ((IData)(vlSelfRef.__PVT__scanline) 
                                  == (IData)(vlSelfRef.__PVT__vblank_end_sl));
    vlSelfRef.__PVT__entering_vblank = ((0U == (IData)(vlSelfRef.__PVT__cycle)) 
                                        & ((IData)(vlSelfRef.__PVT__scanline) 
                                           == (IData)(vlSelfRef.__PVT__vblank_start_sl)));
    vlSelfRef.__PVT__skip_pixel = ((IData)(vlSelfRef.__PVT__skip_next) 
                                   & (IData)(vlSelfRef.__PVT__skip_en));
    vlSelfRef.__PVT__new_is_in_vblank = ((IData)(vlSelfRef.__PVT__entering_vblank) 
                                         | ((~ (IData)(vlSelfRef.__PVT__exiting_vblank)) 
                                            & (IData)(vlSelfRef.__PVT__is_in_vblank)));
    vlSelfRef.__PVT__end_of_line = ((IData)(vlSelfRef.__PVT__at_last_cycle_group) 
                                    & (VL_EXTEND_II(32,4, 
                                                    (0x0000000fU 
                                                     & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 4))) 
                                       == ((IData)(vlSelfRef.__PVT__skip_pixel)
                                            ? 3U : 4U)));
    vlSelfRef.__PVT__short_frame = ((IData)(vlSelfRef.__PVT__end_of_line) 
                                    & (IData)(vlSelfRef.__PVT__skip_pixel));
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__3(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__4(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___stl_sequent__TOP__nes_core_top__nes_inst__ppu__clock__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__genblk1__DOT__SS_CLKGEN_OUT = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock__genblk1__DOT__iREG_SAVESTATE.__PVT__BUS_Dout;
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSelfRef.__PVT__genblk1__DOT__SS_CLKGEN_OUT;
}

VL_ATTR_COLD void Vnes_core_top_ClockGen__U1___ctor_var_reset(Vnes_core_top_ClockGen__U1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_ClockGen__U1___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__sys_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12678443134343359385ull);
    vlSelf->__PVT__is_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 384756990955494270ull);
    vlSelf->__PVT__scanline = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 654532841143486145ull);
    vlSelf->__PVT__cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->__PVT__is_in_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15274333430635939803ull);
    vlSelf->__PVT__end_of_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11983790436732281692ull);
    vlSelf->__PVT__at_last_cycle_group = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6681506479206343491ull);
    vlSelf->__PVT__exiting_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5179505358527676533ull);
    vlSelf->__PVT__entering_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18237415885931232063ull);
    vlSelf->__PVT__is_pre_render = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5133444082975203607ull);
    vlSelf->__PVT__short_frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10176122636361542992ull);
    vlSelf->__PVT__is_vbe_sl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15813599354792407993ull);
    vlSelf->__PVT__evenframe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3861517047138621945ull);
    vlSelf->__PVT__hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->__PVT__vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->__PVT__hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->__PVT__vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__vblank_start_sl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3761048824901254088ull);
    vlSelf->__PVT__vblank_end_sl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12852574991537495314ull);
    vlSelf->__PVT__vsync_start_sl = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3162918993685018843ull);
    vlSelf->__PVT__skip_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1579778926680146134ull);
    vlSelf->__PVT__rendering_sr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11309524077616062695ull);
    vlSelf->__PVT__skip_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952471997317625230ull);
    vlSelf->__PVT__new_is_in_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8029808076239776704ull);
    vlSelf->__PVT__SS_CLKGEN = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1809714234701852788ull);
    vlSelf->__PVT__hsync_period = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16647175666207218571ull);
    vlSelf->__PVT__hblank_period = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4022666896800453217ull);
    vlSelf->__PVT__genblk1__DOT__SS_CLKGEN_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3420332929264676536ull);
    vlSelf->__PVT__genblk1__DOT__SS_CLKGEN_OUT = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14388916570977111403ull);
    vlSelf->__Vdly__skip_next = 0;
    vlSelf->__Vdly__cycle = 0;
    vlSelf->__Vdly__is_in_vblank = 0;
    vlSelf->__Vdly__rendering_sr = 0;
    vlSelf->__Vdly__vblank = 0;
    vlSelf->__Vdly__hblank = 0;
    vlSelf->__Vdly__vsync = 0;
    vlSelf->__Vdly__hsync = 0;
    vlSelf->__Vdly__scanline = 0;
    vlSelf->__Vdly__is_pre_render = 0;
    vlSelf->__Vdly__is_even_frame = 0;
}
