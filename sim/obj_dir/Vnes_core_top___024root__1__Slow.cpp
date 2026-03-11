// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top___024root___stl_comb__TOP__0(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___stl_comb__TOP__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ nes_core_top__DOT__hud_controller_inst__DOT__active_buttons;
    nes_core_top__DOT__hud_controller_inst__DOT__active_buttons = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_h;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_h = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__gap;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__gap = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__total_w;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__total_w = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x_i;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x_i = 0;
    IData/*31:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y_i;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y_i = 0;
    CData/*0:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__lit_px;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__lit_px = 0;
    CData/*0:0*/ nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__draw_px;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__draw_px = 0;
    // Body
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count 
        = ((2U == (IData)(vlSelfRef.hud_mode)) ? 2U
            : ((1U == (IData)(vlSelfRef.hud_mode)) ? 1U
                : 0U));
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul 
        = (((IData)(vlSelfRef.hud_scale) & (1U == nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count))
            ? 2U : 1U);
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w 
        = VL_MULS_III(32, (IData)(0x00000040U), nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul);
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_h 
        = VL_MULS_III(32, (IData)(0x00000020U), nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul);
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__gap 
        = VL_MULS_III(32, (IData)(8U), nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul);
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__total_w 
        = ((2U == nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count)
            ? (VL_MULS_III(32, (IData)(2U), nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w) 
               + nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__gap)
            : nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w);
    if ((0U == (IData)(vlSelfRef.hud_position))) {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((1U == (IData)(vlSelfRef.hud_position))) {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0 
            = (((IData)(0x00000100U) - nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__total_w) 
               - (IData)(8U));
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0 = 0x00000014U;
    } else if ((2U == (IData)(vlSelfRef.hud_position))) {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0 = 8U;
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0 
            = (((IData)(0x000000f0U) - nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_h) 
               - (IData)(8U));
    } else {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0 
            = (((IData)(0x00000100U) - nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__total_w) 
               - (IData)(8U));
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0 
            = (((IData)(0x000000f0U) - nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_h) 
               - (IData)(8U));
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0)) {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0 = 0U;
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0)) {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0 = 0U;
    }
    vlSelfRef.hud_active = 0U;
    vlSelfRef.hud_pixel = 0U;
    vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__local_x = 0U;
    vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__local_y = 0U;
    nes_core_top__DOT__hud_controller_inst__DOT__active_buttons = 0U;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__draw_px = 0U;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__lit_px = 0U;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x_i 
        = vlSelfRef.cycle;
    nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y_i 
        = vlSelfRef.scanline;
    if ((((((0U != nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count) 
            & VL_GTES_III(32, nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x_i, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0)) 
           & VL_LTS_III(32, nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x_i, 
                        (vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0 
                         + nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__total_w))) 
          & VL_GTES_III(32, nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y_i, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0)) 
         & VL_LTS_III(32, nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y_i, 
                      (vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0 
                       + nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_h)))) {
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__rel_x 
            = (nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x_i 
               - vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__x0);
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__rel_y 
            = (nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y_i 
               - vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__y0);
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_sel = 0U;
        if (((2U == nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__count) 
             & VL_GTES_III(32, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__rel_x, 
                           (nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w 
                            + nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__gap)))) {
            vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_sel = 1U;
        }
        vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_x 
            = (vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__rel_x 
               - ((1U == vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_sel)
                   ? (nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w 
                      + nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__gap)
                   : 0U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_x) 
             & VL_LTS_III(32, vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_x, nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__sprite_w))) {
            nes_core_top__DOT__hud_controller_inst__DOT__active_buttons 
                = ((0U == vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_sel)
                    ? (IData)(vlSelfRef.nes_core_top__DOT__p1_frame)
                    : (IData)(vlSelfRef.nes_core_top__DOT__p2_frame));
            if ((2U == nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__scale_mul)) {
                vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__local_x 
                    = (0x0000007fU & vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_x);
                vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__local_y 
                    = (0x0000003fU & vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__rel_y);
            } else {
                vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__local_x 
                    = (0x0000007eU & (vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__ctrl_x 
                                      << 1U));
                vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__local_y 
                    = (0x0000003eU & (vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__rel_y 
                                      << 1U));
            }
            nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__lit_px 
                = (((((((((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_a) 
                          & (IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons)) 
                         | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_b) 
                            & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                               >> 1U))) | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_select) 
                                           & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                                              >> 2U))) 
                       | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_start) 
                          & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                             >> 3U))) | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_up) 
                                         & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                                            >> 4U))) 
                     | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_down) 
                        & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                           >> 5U))) | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_left) 
                                       & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                                          >> 6U))) 
                   | ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__mask_right) 
                      & ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__active_buttons) 
                         >> 7U)));
            nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__draw_px 
                = ((IData)(vlSelfRef.nes_core_top__DOT__hud_controller_inst__DOT__base_px) 
                   | (IData)(nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__lit_px));
            if (nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__draw_px) {
                vlSelfRef.hud_active = 1U;
                vlSelfRef.hud_pixel = ((IData)(nes_core_top__DOT__hud_controller_inst__DOT__unnamedblk1__DOT__lit_px)
                                        ? 0x00ff4040U
                                        : 0x00d0d0d0U);
            }
        }
    }
}

VL_ATTR_COLD void Vnes_core_top___024root___stl_sequent__TOP__0(Vnes_core_top___024root* vlSelf);
VL_ATTR_COLD void Vnes_core_top___024root___stl_sequent__TOP__1(Vnes_core_top___024root* vlSelf);

VL_ATTR_COLD void Vnes_core_top___024root___eval_stl(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_stl\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vnes_core_top___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vnes_core_top___024root___stl_sequent__TOP__1(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vnes_core_top___024root___stl_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_triggers_vec__stl(Vnes_core_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnes_core_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

VL_ATTR_COLD bool Vnes_core_top___024root___eval_phase__stl(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_phase__stl\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnes_core_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnes_core_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vnes_core_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vnes_core_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vnes_core_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vnes_core_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vnes_core_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vnes_core_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] nes_core_top.hud_controller_inst.local_x)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] nes_core_top.hud_controller_inst.local_y)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge nes_core_top.nes_inst.__Vcellinp__cpu__res_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnes_core_top___024root___ctor_var_reset(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->joy1_buttons = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8194419947211337393ull);
    vlSelf->joy2_buttons = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 354344828584982116ull);
    vlSelf->hud_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7734235649417673634ull);
    vlSelf->hud_position = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2236806011414328919ull);
    vlSelf->hud_scale = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10686910262396484424ull);
    vlSelf->mapper_flags_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14314204036101715669ull);
    vlSelf->prg_mask_in = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 8537506947523944703ull);
    vlSelf->chr_mask_in = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6396535610031155116ull);
    vlSelf->color = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 465961873555653160ull);
    vlSelf->cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->scanline = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 654532841143486145ull);
    vlSelf->hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14877665802122487536ull);
    vlSelf->hud_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17862221856657587656ull);
    vlSelf->hud_pixel = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15427161734038475003ull);
    vlSelf->dbg_cpu_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5799407711276468096ull);
    vlSelf->dbg_mr_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13244814874910450744ull);
    vlSelf->dbg_mw_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3368059569312720153ull);
    vlSelf->dbg_cpu_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3998891376769879205ull);
    vlSelf->dbg_cpu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17099113803595599864ull);
    vlSelf->dbg_cpu_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13788619681378170624ull);
    vlSelf->dbg_cpu_regs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6278616643218805886ull);
    vlSelf->dbg_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440533632083781006ull);
    vlSelf->dbg_pause_cpu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8175058116448611456ull);
    vlSelf->dbg_dma_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4319834060495665376ull);
    vlSelf->dbg_dma_sprite_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8779818595317840788ull);
    vlSelf->dbg_cpu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10922176111196675467ull);
    vlSelf->dbg_reset_noSS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15675652301583447143ull);
    vlSelf->dbg_cpu_rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613484424153786ull);
    vlSelf->dbg_dma_spr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1395458678760166406ull);
    vlSelf->dbg_dma_get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3212116088188960829ull);
    vlSelf->dbg_dma_put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5163963362259016302ull);
    vlSelf->dbg_odd_or_even = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9914571296055599555ull);
    vlSelf->dbg_en_bg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17051108008528152963ull);
    vlSelf->dbg_en_obj = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16635920954833946153ull);
    vlSelf->dbg_vbl_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137809405547789221ull);
    vlSelf->dbg_nmi_occ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13535831848030408782ull);
    vlSelf->dbg_render_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9586124440387739647ull);
    vlSelf->dbg_cpumem_addr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6332221917756965821ull);
    vlSelf->dbg_cpumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15612308933624323068ull);
    vlSelf->dbg_cpumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1864707573172073665ull);
    vlSelf->dbg_ppumem_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1131768710484304579ull);
    vlSelf->dbg_ppumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10933022542194134988ull);
    vlSelf->dbg_ppumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 390034132101396150ull);
    vlSelf->dbg_chr_to_ppu = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15106838644325053706ull);
    vlSelf->dbg_ppumem_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12934696378487082892ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->nes_core_top__DOT__prg_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8345635108200692898ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->nes_core_top__DOT__chr_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2357221502408982494ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->nes_core_top__DOT__cpu_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13191690810193610546ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->nes_core_top__DOT__ciram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1761912279622951285ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->nes_core_top__DOT__cart_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1715038863136294430ull);
    }
    vlSelf->nes_core_top__DOT__joy1_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13736843289208728913ull);
    vlSelf->nes_core_top__DOT__joy2_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7732936341726514331ull);
    vlSelf->nes_core_top__DOT__last_joyclk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3524604450638532973ull);
    vlSelf->nes_core_top__DOT__last_joyclk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14584009044725981131ull);
    vlSelf->nes_core_top__DOT__joypad_clock = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17071330868250511246ull);
    vlSelf->nes_core_top__DOT__p1_frame = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2567468278284619905ull);
    vlSelf->nes_core_top__DOT__p2_frame = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3718190734618619383ull);
    vlSelf->nes_core_top__DOT__vblank_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11326555934752435767ull);
    vlSelf->nes_core_top__DOT__frame_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13038082385883966345ull);
    vlSelf->nes_core_top__DOT__cpumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12418959050304991656ull);
    vlSelf->nes_core_top__DOT__cpumem_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10219112023615386903ull);
    vlSelf->nes_core_top__DOT__ppumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17933491722187600938ull);
    vlSelf->nes_core_top__DOT__ppumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11186793022137068387ull);
    vlSelf->nes_core_top__DOT__ppumem_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1581262607056660879ull);
    vlSelf->nes_core_top__DOT__apu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727789098853759829ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 880330416226255342ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__phi2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6472477789317097770ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17023104945119902820ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__last_sys_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11208857208669166916ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu_tick_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13120654690688789003ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__skip_ppu_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13490296274310748046ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__bootvector_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12460077394954741490ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9335348294845013000ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10112704591638950465ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__reset_noSS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17922366386564304040ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9447005165903108528ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__render_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15362977629854080437ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cycle_paused = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2519444409699114626ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__scanline_paused = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13535081100284085776ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT____Vcellinp__clockgen_pause__ce = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 523098965366608371ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__internal_data_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13402723430611834368ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma_aout_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15753248826466164219ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu_dma_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15284524937359146548ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu_dma_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16907880901397293090ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu_dma_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 214246866994361963ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9072298902735671071ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma_data_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16003867063816820812ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__mw_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17486679756096836556ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14629909384225678800ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7935788828551759307ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__joypad1_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823290436770890463ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__joypad2_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1897144960943692053ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__joy_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12584685271417834547ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__joy_latch = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11862568814454890033ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12870546883173375524ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__chr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304139139347090413ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu_cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 639788644813969270ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__scanline_ppu = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6541220808890870380ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT____Vcellinp__ppu__read = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__prg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17946862079008731304ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__vram_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9572808546036612918ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__prg_linaddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3503710180752021872ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__chr_linaddr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13785052534703682517ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__open_bus_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15810488618830238710ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__end_of_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7357871901505189404ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_pre_render = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8496377768027581718ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8131620635373868165ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 271456957108400005ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8063667451413199191ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4878384016280403515ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__pcadder = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4322553647706382146ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__brk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11385463627008744938ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16395750593088867205ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7641142308567146381ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n188 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 333558670029787015ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n225 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13807436032444347316ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n248 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5356296947278432648ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18127563396764340087ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14749441301356904257ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13460340929543827760ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 601294770307929771ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13896386550774992246ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 370416924381135782ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2808148321728553389ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8606328453333808657ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13432370661405990314ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12648420485205505530ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7496768191962947975ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5370481067461248521ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5501312232316951297ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8280718368163304948ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15260271628593704509ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n427 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1358528871395980410ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n433 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14420482608420872538ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n438 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14081068067437270163ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1973025214134350052ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12041832620262259033ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3543897405086481033ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n540 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10010707522703303099ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n542 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13799627238849250169ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n544 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5432523188529387601ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n598 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15357982887574679585ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n603 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17704315240741584680ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14081149487082563572ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12935128943588057188ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n645 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9319537829271968903ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n681 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17257978575553815330ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n682 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12106326282311045833ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n683 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11111893888979168597ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16693000630470815931ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15909050454270294219ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n686 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16039881619125964599ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12237157447166730449ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9096042300537906774ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5510409826550409841ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n747 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11222347732897660591ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n749 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5286745263454798668ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4428819833317465243ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n825 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15625529680833453790ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n843 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4031376608034932217ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14786430112567922052ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5124800992748378471ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12411230424478490345ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n899 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17998928338952076182ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4917290614168209815ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4133340437967811047ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n902 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3255934753678347862ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14185010193219351551ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3329910007615282335ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n915 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 659040566825690415ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n916 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13954132347292695873ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n917 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4113860183815589295ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n918 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11958676387646593984ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n919 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8155952215687410626ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n920 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5096849032468496441ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10684546946942215758ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5532894653699525883ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1730170481740310233ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n924 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9574986685571395140ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11578932659202993631ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4423334392328721653ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11651009072136298108ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4284928588130223457ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17580020368597294536ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15453733244095477574ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15584564408951176411ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11781840236991892164ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14344172982724655696ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9996866494477524891ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10432912115708687213ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13200874706875960789ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571084760530498364ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11415900964361591830ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7613176792402260336ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15204820680507526892ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n945 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8049222413633287475ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13209364720861648294ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n947 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560800778757335270ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 691631943613025042ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4602892810629105235ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 763708356546207053ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15407728258296537687ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1 = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 151879270328694916ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__n1289 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8001746262727581868ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10928800463124001806ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__n1627 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7156894297026156210ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10292606389209675473ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__n1965 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3392127364216902388ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13186535266765775893ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2165 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12716729099668588991ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2177 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14237815014201519373ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2189 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3364208603172490832ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2216 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10556369221661146972ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2220 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6336801894914354253ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2228 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18243936379636701101ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2231 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973309105114262271ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2236 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6272870349563988640ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2254 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 324068207266247967ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2257 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9537137951015243589ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2265 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15386684713157137698ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2268 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2769896615209846786ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2272 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1002419012952304445ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2293 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4037827623813167542ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2301 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4612580566309732523ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2307 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10717126879686809705ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2325 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9151629134411206568ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2333 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2315129907754794693ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2336 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2895064809373265086ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2380 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6113352128841215196ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17491306566735607627ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11256250987989482948ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2476 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1251666023035737900ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2479 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5570754358995080047ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2606 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1863972195197642052ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2717 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 120960127137779869ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2726 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17247368462305204280ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2728 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5287739412353421010ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2731 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1387046490435809296ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2734 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4650171150737866206ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2737 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1119944713138821579ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2740 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14591967511490428872ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2746 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5503056866958434584ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2749 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12381540707809696838ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2875 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13574796971626782559ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2881 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474863683173640980ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2885 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2471294132218879346ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2936 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11732036820861184627ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2942 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9831766180700550363ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2945 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6301539743101550767ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2948 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12512561958604168617ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2954 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466424437246958085ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2956 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12731021406862050225ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12993554515768041094ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3063 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11293990022198824922ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3073 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9143052199420769963ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3076 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 331080876687259902ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3079 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1966979453963069622ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3116 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10218516844655064411ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3123 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4619593235730740386ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13789403687697407402ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370529941225842702ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3194 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2870111735534881461ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3201 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4855144759040293686ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3204 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7678928211620396021ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3207 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10959691072417373783ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3210 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 762810857806885067ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3216 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 610138575805066105ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3218 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16776293782486550163ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3241 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1226317211626446689ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3248 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16528644052441056957ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3251 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5447027479522493723ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3253 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6576936820164407405ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9963366905547775382ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3382 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18403393115597055840ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3396 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14128969577080879195ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3399 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16949060733336747514ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3402 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11774500602660288635ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3405 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16740146544437255608ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3408 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18227650771823142581ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3414 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11077359057519114241ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3417 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15719118062301242076ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3478 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3840311554616495440ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3484 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18240918106968697748ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3487 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2100201756775701222ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3490 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5067582157776511626ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3493 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 887532295323848478ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3499 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15930558014834938453ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3501 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2995985845082468375ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3533 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18376856348556124500ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3539 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17228118432454650737ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3541 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1950125342983503573ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3544 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5213250003285557223ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3546 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12696430661142734050ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3654 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5732267793996154387ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3668 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14091001536000932118ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3671 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16868491643725331739ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3674 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7617179113269758305ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3677 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14801052514720940618ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3683 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12017929467584392080ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3686 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9138265027802704707ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3743 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4808138751557873099ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3754 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570633598855590320ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3757 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3193333431302105012ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3760 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3615525109337609752ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3763 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 524639879460601695ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3769 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14454929425972860177ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3771 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1091703183504384095ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3836 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1334078021190635507ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3851 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1673509578416236433ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3854 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11958105754245831461ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3856 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8590281202570450593ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3731803269264132659ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3928 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3671144691126082417ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3932 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5592125420858972566ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3933 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2750703767784060105ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3974 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8226557749331633154ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3996 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4728654956558697053ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4017 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18008847510934238708ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4046 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9633014737603525738ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4056 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6832253489971844642ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4146 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5931322260418029756ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n4178 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17163062727360067463ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6176774742104530816ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10439151368376374616ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_lastval = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11336350575581996454ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15121592094196697894ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__dma__DOT__new_sprite_dma_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2216557563924236130ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__allow_us = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11229363397028178861ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9461632984347302515ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10510827975794906452ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8469017990708583706ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_old = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7907176265414153464ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11414769091973541192ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13451582779552236544ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__TriSample = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6164417009127079646ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__DmcIrq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5825153398100175385ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__IsDmcActive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14729098469354839788ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__ClkE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14301243819668028117ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14653319479659024381ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer_1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10765339598422383938ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ1__write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Squ2__write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Tri__write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Noi__write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__Dmc__write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT____Vcellinp__frame_counter__write_ce = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Duty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4006305705633406934ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11430387539183422601ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepNegate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8917608929954555858ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6513390431479955834ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepPeriod = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7341148337539715859ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepDivider = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5031185721368373039ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepShift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5740527573255599798ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5044979147345581477ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__TimerCtr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5243823901101892470ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SeqPos = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12363886538914068802ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__NewSweepPeriod = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5019242383215783004ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ValidFreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17134733441950414053ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216465277295500709ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16318988606222733017ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT____Vcellinp__LenSq__len_clk = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13144395601941679530ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_vol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3510416462370271046ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__env_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16988314485133095068ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Duty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15283260652745031103ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11144333854346648055ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepNegate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12513149719979741197ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepReset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5846729847217813795ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepPeriod = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6329277353225018691ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepDivider = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16186035805127032922ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepShift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5090400962506955037ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16377211239995093562ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__TimerCtr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16376268746952851043ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SeqPos = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12130515603925718095ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__NewSweepPeriod = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2715173431502382480ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ValidFreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10509247116902672122ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11812125748765426374ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10976742768788687892ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4643996224977854656ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_vol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6726332432339188834ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__env_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 350655891202477934ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__Period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1035388822632390866ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__applied_period = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8529034361347914162ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__TimerCtr = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4830225412032362255ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14100567455195631346ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4456822867402808220ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrPeriod_1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16983356745681897870ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13095451968920540520ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3842545433563511368ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__line_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8233261872007009469ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10805534842874592675ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6855116342617060721ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 110521593183603820ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__sample_latch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16209347632055429265ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__ShortMode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18315296159794875824ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Shift = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16111333023112739138ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__Period = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9182975456211603504ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__subunit_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7894997192663266783ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__lc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16828848567683813697ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6832894422542868129ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_timer = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14561147587960125590ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 350261860616611945ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4213604103986296174ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_vol = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3031172231721354044ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__env_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17553388307636223252ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__irq_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4838318619552611084ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5538412984903024979ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__frequency = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8942308493501788842ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_address = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10259726039938356779ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_length = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2629097613083295189ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__bytes_remaining = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4147048487441730288ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_buffer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4309392279199628399ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_lsfr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7344759489507426835ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 602976323868397307ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_volume_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7180636225985224622ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_silence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4011794388796397240ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4202285889034590571ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__sample_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 98594737417287661ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15527493799123000750ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4966186598796258243ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3708541749013158100ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6176214260101453290ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13440185396112491736ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__dmc_clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9494323907056711886ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14742460241325349679ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11160580854365262397ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6818069782946775583ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5719790370635371058ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__mix_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17860545019694624863ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_interrupt_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 904910571937594424ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11051934792068162330ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__set_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8180721145363665214ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14133652430447215917ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame_reset_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7789521672311712335ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2165009848122696169ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7519069047595835198ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10663850319200165761ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__DisableFrameInterrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4303198516958806043ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9215301733928214803ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15155260286941690032ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15658383859879698393ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17728481054183180341ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15876192140043137429ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1879912472341122514ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 400703824250677851ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9240744118696947478ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8563662983616770819ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5451292005826244741ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526248624068207216ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9105221919001035579ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5771794001785995407ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_range = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2583911934695687596ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2768577122930140198ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_latch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12008423533598280169ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3689835591594970594ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__entering_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8972907469495808987ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381654147580498374ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7570008059300370614ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18394278536144971417ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16328106025104207906ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eo_sr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3468949552145589831ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eb_sr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12336748174400126378ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6025919339618326424ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6966215645490034233ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_a_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11780125875731700977ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__vram0__trigger_2007 = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5496772153650040594ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bgp_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7227386540137938285ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1717514640773940239ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_data_write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__spriteeval__oam_addr_write = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9429094817064656599ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj0_on_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15009504988977963468ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8277553283754822906ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load_in = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 582996511305151168ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5107567551510513865ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__address_gen__temp = 0;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_sr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16425711936881046753ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite0_hit_bg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7855095869292497607ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spr0_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 27331696072481990ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13117980245638313325ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5910638944969462981ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_read_delayed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7465522000242291917ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14889357902824581655ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5795438525927831036ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pal_writes_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1597093382918153342ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9896978206267734925ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4730276874173691552ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9166219485155632544ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6770295724074336989ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ppu_dbus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15076943699073183505ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__latched_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12408065063783336541ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_high = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4651256733838508927ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__decay_low = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5247976687351222654ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_high = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10321590687824712716ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__refresh_low = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1600150075997179169ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hsync_period = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15696361371500012834ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hblank_period = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12712986287034258119ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2432820392703203923ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2934779084435624688ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 300889898042069755ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6892770225279026070ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__ppu_address_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366389361458137720ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__write_shift = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16455022082937271323ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_hscroll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3427049449430844670ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__copy_vscroll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 539176305519249359ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_t_mask = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10876524086379885969ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6173628440516751557ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11031934580895210249ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7310543172432322202ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9150075317051891705ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_name_table = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11344156943572883785ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_attribute_table = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3380347840691012386ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11309483730088790646ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_dbus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14710179382979587665ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_temp[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 792908615028077375ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9260163208050755491ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2698995658744891421ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9253349188834569728ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 590190309783953703ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3703866159903259307ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_row_ex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16773090092086794718ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__spr_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11579450549179675179ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12171273685547562324ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_using_secondary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7248320018488925299ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16237272678006395961ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__evaluating = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17033828016962488831ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_read_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8361661671005419228ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__using_secondary = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1594186282119687741ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_cur = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10712651284475635982ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5678168092037052890ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4204121920328869657ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__sprite0_curr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5796606770179019239ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__repeat_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12536774650379976051ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__n_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1840324956262394204ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__ex_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6489954638827595478ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_wr_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7002389371264514238ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 678787502052834446ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_tile = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17109833529649624923ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_y = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17528249686716691721ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2560644774485519603ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8019631192755387295ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13364978440265693305ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_attr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9151948040865620983ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__dummy_sprite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13428135850974871694ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out7 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 1427604088172811004ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out6 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 3053736203417835522ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out5 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 7201697602121368546ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out4 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 7374879953273221815ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out3 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 11179864025473886573ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 15327825424177463055ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__load_out1 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 12520647836174051321ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12584226245077002970ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2499552101491329103ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14762954675000570823ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13722070722975588644ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 152976812602858006ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite7__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4347604618293118826ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7617393016315049170ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16654754612037804410ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17983910381828924066ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3994181989088965318ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5516774465715930604ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite6__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4875291591149265858ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7787719761461418985ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2971718281518692628ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10310085457301477884ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2350342586876431286ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7184526713299639450ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite5__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9547417253005672223ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13157454404535528139ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3523425554816027779ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6797374457603982790ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9706134332228791454ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14538151814765442726ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite4__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5250705527503434191ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9926269438244361695ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3185481706863341677ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15264861989805466524ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5869454789888104109ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11656802378701527779ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite3__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9314741768395279773ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16377531935167382141ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11381239744335803138ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1297624756444100866ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8225514855395745014ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13154426052636104016ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite2__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16216174875538150506ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10662487262915041175ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13295490751569481829ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9761739601922464446ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10292329684636377881ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2132214750670626742ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite1__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15549609894459799163ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__upper_color = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6740501087657699848ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__x_coord = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15554990845090722367ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14059820417552256894ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__pix2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16723186872948772324ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__aprio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7099542246007688307ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_gen__DOT__sprite0__DOT__active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16397684289413788770ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6966298124197676110ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15595443044453438171ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__corrupting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440406954744517795ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3022666323894394515ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__old_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6741019711059129567ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17482183789572505719ull);
    }
    vlSelf->nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10167788207468442218ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0 = 0;
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__base_px = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7225852612583985638ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5806898698801076936ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9803539763005115212ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8881830040736843142ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5688332303355677308ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15792699538084049658ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_down = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2928350083302714537ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17290311830909910992ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__mask_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6467017180179820023ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__local_x = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8435587702549184714ull);
    vlSelf->nes_core_top__DOT__hud_controller_inst__DOT__local_y = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14591167290811008668ull);
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__0__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__1__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__2__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__2__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__2__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__2__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__2__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__3__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__4__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__5__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__5__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__5__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__5__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__5__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__6__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__7__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__8__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__8__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__8__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__8__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__8__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__9__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__10__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__11__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__11__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__11__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__11__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__11__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__12__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__13__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__14__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__14__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__14__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__14__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__14__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__15__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__16__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__17__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__17__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__17__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__17__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__17__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__18__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__19__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__20__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__20__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__20__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__20__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__20__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__21__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__22__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__23__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__23__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__23__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__23__outer = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__body_outline_raw_at__23__inner = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__24__dy = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__Vfuncout = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__px = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__py = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__x0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__y0 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__rr = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__x1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__y1 = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__nx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__ny = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__dx = 0;
    vlSelf->__Vfunc_nes_core_top__DOT__hud_controller_inst__DOT__assets__DOT__in_round_rect__25__dy = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_107 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_108 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_109 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__nes_core_top__DOT__hud_controller_inst__DOT__local_x__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__nes_core_top__DOT__hud_controller_inst__DOT__local_y__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__nes_core_top__DOT__hud_controller_inst__DOT__local_x__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__nes_core_top__DOT__hud_controller_inst__DOT__local_y__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
