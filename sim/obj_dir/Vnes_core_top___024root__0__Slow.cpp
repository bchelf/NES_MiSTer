// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top___024root___eval_static(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_static\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_sys = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_pause_ce = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_delay = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7404253554228135254ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13938659368808643094ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4372067755190958ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8462956833932369586ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1500613856609192997ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3015303151874235327ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14065151726873444781ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9313149644858060344ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17310593380689120187ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17349659763948327145ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3237004740419466822ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2356848683091549031ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14820044200883128918ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7042659795815696192ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790011047505500456ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9955972047337141539ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4526402536885077695ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15937582045761377126ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14221969830780184599ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6353032975632477345ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2853003052910803437ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3863110212765471356ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4724404408477485360ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16915751662605972940ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17246055192234494229ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18323953106663764397ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12213112648992716807ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 859953144931739059ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9900085502955211010ull);
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next = 0U;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1598008663628729496ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6534982429541672153ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14288139209654470745ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1483953095034027248ull);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n__0 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n;
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_static__TOP(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_static__TOP\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_sys = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_pause_ce = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_delay = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__is_even_frame = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7404253554228135254ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13938659368808643094ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4372067755190958ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8462956833932369586ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__LenSq__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1500613856609192997ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3015303151874235327ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14065151726873444781ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__EnvSq__DOT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9313149644858060344ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17310593380689120187ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17349659763948327145ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3237004740419466822ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2356848683091549031ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__LenSq__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14820044200883128918ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7042659795815696192ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790011047505500456ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__EnvSq__DOT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9955972047337141539ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4526402536885077695ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15937582045761377126ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14221969830780184599ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6353032975632477345ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LenTri__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2853003052910803437ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_int = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3863110212765471356ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4724404408477485360ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__len_counter_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16915751662605972940ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__lc_on_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17246055192234494229ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__LenNoi__DOT__lenunit__DOT__clear_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18323953106663764397ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12213112648992716807ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_reload = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 859953144931739059ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__EnvNoi__DOT__envunit__DOT__env_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9900085502955211010ull);
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next = 0U;
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1598008663628729496ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_tile = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6534982429541672153ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__last_attr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14288139209654470745ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_eval__DOT__eval_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1483953095034027248ull);
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_initial__TOP(Vnes_core_top___024root* vlSelf);

VL_ATTR_COLD void Vnes_core_top___024root___eval_initial(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_initial\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnes_core_top___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_initial__TOP(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_initial__TOP\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[0U] = 9U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[1U] = 0xfdU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[2U] = 0x13U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[3U] = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[4U] = 0x27U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[5U] = 3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[6U] = 0x4fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[7U] = 5U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[8U] = 0x9fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[9U] = 7U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[10U] = 0x3bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[11U] = 9U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[12U] = 0x0dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[13U] = 0x0bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[14U] = 0x19U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[15U] = 0x0dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[16U] = 0x0bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[17U] = 0x0fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[18U] = 0x17U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[19U] = 0x11U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[20U] = 0x2fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[21U] = 0x13U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[22U] = 0x5fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[23U] = 0x15U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[24U] = 0xbfU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[25U] = 0x17U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[26U] = 0x47U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[27U] = 0x19U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[28U] = 0x0fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[29U] = 0x1bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[30U] = 0x1fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut[31U] = 0x1dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[0U] = 0x0200U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[1U] = 0x0280U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[2U] = 0x02a8U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[3U] = 0x06eaU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[4U] = 0x04e4U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[5U] = 0x0674U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[6U] = 0x0630U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[7U] = 0x0730U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[8U] = 0x04acU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[9U] = 0x0304U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[10U] = 0x0722U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[11U] = 0x0230U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[12U] = 0x0213U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[13U] = 0x0782U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[14U] = 6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Noi__DOT__noise_ntsc_lut[15U] = 0x0014U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[0U] = 0x019dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[1U] = 0x00a2U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[2U] = 0x0185U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[3U] = 0x01b6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[4U] = 0x00efU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[5U] = 0x01f8U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[6U] = 0x017cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[7U] = 0x0117U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[8U] = 0x0120U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[9U] = 0x0076U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[10U] = 0x011eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[11U] = 0x013eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[12U] = 0x0162U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[13U] = 0x0123U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[14U] = 0x00e3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__ntsc_pitch_lut[15U] = 0x00d5U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[0U] = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[1U] = 0x0331U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[2U] = 0x064fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[3U] = 0x0959U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[4U] = 0x0c52U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[5U] = 0x0f38U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[6U] = 0x120eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[7U] = 0x14d3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[8U] = 0x1788U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[9U] = 0x1a2eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[10U] = 0x1cc6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[11U] = 0x1f4eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[12U] = 0x21c9U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[13U] = 0x2437U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[14U] = 0x2697U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[15U] = 0x28ebU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[16U] = 0x2b32U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[17U] = 0x2d6eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[18U] = 0x2f9eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[19U] = 0x31c3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[20U] = 0x33ddU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[21U] = 0x35ecU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[22U] = 0x37f2U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[23U] = 0x39edU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[24U] = 0x3bdfU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[25U] = 0x3dc7U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[26U] = 0x3fa6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[27U] = 0x417dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[28U] = 0x434bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[29U] = 0x4510U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[30U] = 0x46cdU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__pulse_lut[31U] = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[0U] = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[1U] = 4U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[2U] = 8U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[3U] = 0x0cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[4U] = 0x10U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[5U] = 0x14U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[6U] = 0x18U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[7U] = 0x1cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[8U] = 0x20U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[9U] = 0x24U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[10U] = 0x28U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[11U] = 0x2cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[12U] = 0x30U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[13U] = 0x34U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[14U] = 0x38U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__tri_lut[15U] = 0x3cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[0U] = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[1U] = 3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[2U] = 5U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[3U] = 8U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[4U] = 0x0bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[5U] = 0x0dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[6U] = 0x10U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[7U] = 0x13U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[8U] = 0x15U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[9U] = 0x18U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[10U] = 0x1bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[11U] = 0x1dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[12U] = 0x20U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[13U] = 0x23U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[14U] = 0x25U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__noise_lut[15U] = 0x28U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[0U] = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[1U] = 1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[2U] = 3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[3U] = 4U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[4U] = 6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[5U] = 7U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[6U] = 9U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[7U] = 0x0aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[8U] = 0x0cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[9U] = 0x0dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[10U] = 0x0eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[11U] = 0x10U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[12U] = 0x11U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[13U] = 0x13U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[14U] = 0x14U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[15U] = 0x16U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[16U] = 0x17U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[17U] = 0x19U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[18U] = 0x1aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[19U] = 0x1cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[20U] = 0x1dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[21U] = 0x1eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[22U] = 0x20U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[23U] = 0x21U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[24U] = 0x23U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[25U] = 0x24U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[26U] = 0x26U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[27U] = 0x27U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[28U] = 0x29U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[29U] = 0x2aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[30U] = 0x2bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[31U] = 0x2dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[32U] = 0x2eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[33U] = 0x30U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[34U] = 0x31U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[35U] = 0x33U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[36U] = 0x34U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[37U] = 0x36U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[38U] = 0x37U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[39U] = 0x38U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[40U] = 0x3aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[41U] = 0x3bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[42U] = 0x3dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[43U] = 0x3eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[44U] = 0x40U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[45U] = 0x41U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[46U] = 0x43U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[47U] = 0x44U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[48U] = 0x45U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[49U] = 0x47U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[50U] = 0x48U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[51U] = 0x4aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[52U] = 0x4bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[53U] = 0x4dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[54U] = 0x4eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[55U] = 0x50U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[56U] = 0x51U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[57U] = 0x53U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[58U] = 0x54U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[59U] = 0x55U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[60U] = 0x57U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[61U] = 0x58U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[62U] = 0x5aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[63U] = 0x5bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[64U] = 0x5dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[65U] = 0x5eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[66U] = 0x60U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[67U] = 0x61U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[68U] = 0x62U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[69U] = 0x64U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[70U] = 0x65U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[71U] = 0x67U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[72U] = 0x68U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[73U] = 0x6aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[74U] = 0x6bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[75U] = 0x6dU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[76U] = 0x6eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[77U] = 0x6fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[78U] = 0x71U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[79U] = 0x72U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[80U] = 0x74U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[81U] = 0x75U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[82U] = 0x77U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[83U] = 0x78U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[84U] = 0x7aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[85U] = 0x7bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[86U] = 0x7cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[87U] = 0x7eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[88U] = 0x7fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[89U] = 0x81U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[90U] = 0x82U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[91U] = 0x84U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[92U] = 0x85U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[93U] = 0x87U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[94U] = 0x88U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[95U] = 0x8aU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[96U] = 0x8bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[97U] = 0x8cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[98U] = 0x8eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[99U] = 0x8fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[100U] = 0x91U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[101U] = 0x92U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[102U] = 0x94U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[103U] = 0x95U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[104U] = 0x97U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[105U] = 0x98U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[106U] = 0x99U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[107U] = 0x9bU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[108U] = 0x9cU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[109U] = 0x9eU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[110U] = 0x9fU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[111U] = 0xa1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[112U] = 0xa2U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[113U] = 0xa4U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[114U] = 0xa5U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[115U] = 0xa6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[116U] = 0xa8U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[117U] = 0xa9U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[118U] = 0xabU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[119U] = 0xacU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[120U] = 0xaeU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[121U] = 0xafU;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[122U] = 0xb1U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[123U] = 0xb2U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[124U] = 0xb3U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[125U] = 0xb5U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[126U] = 0xb6U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__dmc_lut[127U] = 0xb8U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__mixer__DOT__mix_lut 
        = {{
        0U, 0x0128U, 0x024fU, 0x0374U, 0x0497U, 0x05b8U, 0x06d7U, 0x07f5U,
        0x0911U, 0x0a2bU, 0x0b44U, 0x0c5bU, 0x0d71U, 0x0e84U, 0x0f96U, 0x10a7U,
        0x11b6U, 0x12c3U, 0x13cfU, 0x14daU, 0x15e2U, 0x16eaU, 0x17efU, 0x18f4U,
        0x19f6U, 0x1af8U, 0x1bf7U, 0x1cf6U, 0x1df3U, 0x1eeeU, 0x1fe9U, 0x20e1U,
        0x21d9U, 0x22cfU, 0x23c3U, 0x24b7U, 0x25a9U, 0x2699U, 0x2788U, 0x2876U,
        0x2963U, 0x2a4fU, 0x2b39U, 0x2c22U, 0x2d09U, 0x2df0U, 0x2ed5U, 0x2fb9U,
        0x309bU, 0x317dU, 0x325dU, 0x333cU, 0x341aU, 0x34f7U, 0x35d3U, 0x36adU,
        0x3787U, 0x385fU, 0x3936U, 0x3a0cU, 0x3ae1U, 0x3bb5U, 0x3c87U, 0x3d59U,
        0x3e29U, 0x3ef9U, 0x3fc7U, 0x4095U, 0x4161U, 0x422cU, 0x42f7U, 0x43c0U,
        0x4488U, 0x4550U, 0x4616U, 0x46dbU, 0x47a0U, 0x4863U, 0x4925U, 0x49e7U,
        0x4aa7U, 0x4b67U, 0x4c25U, 0x4ce3U, 0x4da0U, 0x4e5cU, 0x4f17U, 0x4fd1U,
        0x508aU, 0x5142U, 0x51f9U, 0x52b0U, 0x5365U, 0x541aU, 0x54ceU, 0x5581U,
        0x5633U, 0x56e5U, 0x5795U, 0x5845U, 0x58f4U, 0x59a2U, 0x5a4fU, 0x5afcU,
        0x5ba7U, 0x5c52U, 0x5cfcU, 0x5da5U, 0x5e4eU, 0x5ef6U, 0x5f9dU, 0x6043U,
        0x60e8U, 0x618dU, 0x6231U, 0x62d4U, 0x6377U, 0x6418U, 0x64b9U, 0x655aU,
        0x65f9U, 0x6698U, 0x6736U, 0x67d4U, 0x6871U, 0x690dU, 0x69a8U, 0x6a43U,
        0x6addU, 0x6b76U, 0x6c0fU, 0x6ca7U, 0x6d3eU, 0x6dd5U, 0x6e6bU, 0x6f00U,
        0x6f95U, 0x7029U, 0x70bdU, 0x7150U, 0x71e2U, 0x7273U, 0x7304U, 0x7395U,
        0x7424U, 0x74b4U, 0x7542U, 0x75d0U, 0x765dU, 0x76eaU, 0x7776U, 0x7802U,
        0x788dU, 0x7917U, 0x79a1U, 0x7a2aU, 0x7ab3U, 0x7b3bU, 0x7bc3U, 0x7c4aU,
        0x7cd0U, 0x7d56U, 0x7ddbU, 0x7e60U, 0x7ee4U, 0x7f68U, 0x7febU, 0x806eU,
        0x80f0U, 0x8172U, 0x81f3U, 0x8274U, 0x82f4U, 0x8373U, 0x83f2U, 0x8471U,
        0x84efU, 0x856cU, 0x85e9U, 0x8666U, 0x86e2U, 0x875eU, 0x87d9U, 0x8853U,
        0x88cdU, 0x8947U, 0x89c0U, 0x8a39U, 0x8ab1U, 0x8b29U, 0x8ba0U, 0x8c17U,
        0x8c8eU, 0x8d03U, 0x8d79U, 0x8deeU, 0x8e63U, 0x8ed7U, 0x8f4aU, 0x8fbeU,
        0x9030U, 0x90a3U, 0x9115U, 0x9186U, 0x91f7U, 0x9268U, 0x92d8U, 0x9348U,
        0x93b8U, 0x9427U, 0x9495U, 0x9503U, 0x9571U, 0x95dfU, 0x964cU, 0x96b8U,
        0x9724U, 0x9790U, 0x97fbU, 0x9866U, 0x98d1U, 0x993bU, 0x99a5U, 0x9a0eU,
        0x9a77U, 0x9ae0U, 0x9b48U, 0x9bb0U, 0x9c18U, 0x9c7fU, 0x9ce6U, 0x9d4cU,
        0x9db2U, 0x9e18U, 0x9e7dU, 0x9ee2U, 0x9f47U, 0x9fabU, 0xa00fU, 0xa073U,
        0xa0d6U, 0xa139U, 0xa19bU, 0xa1fdU, 0xa25fU, 0xa2c1U, 0xa322U, 0xa383U,
        0xa3e3U, 0xa443U, 0xa4a3U, 0xa502U, 0xa562U, 0xa5c0U, 0xa61fU, 0xa67dU,
        0xa6dbU, 0xa738U, 0xa796U, 0xa7f2U, 0xa84fU, 0xa8abU, 0xa907U, 0xa963U,
        0xa9beU, 0xaa19U, 0xaa74U, 0xaaceU, 0xab28U, 0xab82U, 0xabdbU, 0xac35U,
        0xac8eU, 0xace6U, 0xad3eU, 0xad96U, 0xadeeU, 0xae46U, 0xae9dU, 0xaef4U,
        0xaf4aU, 0xafa0U, 0xaff6U, 0xb04cU, 0xb0a2U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }};
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr 
        = (0x00008000U | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[0U] = 0x0008000900080000ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[1U] = 0x203a040100100201ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[2U] = 0x2c00003404080200ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__SS_PAL[3U] = 0x080214032c240d01ULL;
    vlSelfRef.hud_active = 0U;
    vlSelfRef.hud_pixel = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n916 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n917 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n918 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer = 0xe064000000000000ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__n1289 = 0xe064000000000000ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer = 0x0000012000000001ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__n1627 = 0x0000012000000001ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer = 0ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__n1965 = 0ULL;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_patt = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_patt = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__obj_size = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__grayscale = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clear = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_3 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_4 = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_name_table = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__current_attribute_table = 0U;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__bg0 = 0U;
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_final(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_final\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnes_core_top___024root___eval_phase__stl(Vnes_core_top___024root* vlSelf);

VL_ATTR_COLD void Vnes_core_top___024root___eval_settle(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_settle\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vnes_core_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verilator/nes_core_top.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vnes_core_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_triggers_vec__stl(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_triggers_vec__stl\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vnes_core_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnes_core_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vnes_core_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vnes_core_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h5f8c61fe_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vnes_core_top__ConstPool__TABLE_h652152d6_0;
extern const VlUnpacked<SData/*12:0*/, 16> Vnes_core_top__ConstPool__TABLE_h057380b2_0;
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
extern const VlUnpacked<CData/*0:0*/, 1024> Vnes_core_top__ConstPool__TABLE_h614017f6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vnes_core_top__ConstPool__TABLE_h29c19512_0;
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
extern const VlUnpacked<SData/*10:0*/, 16> Vnes_core_top__ConstPool__TABLE_ha2026167_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h61a609e0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h251c97ba_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h1b1bc34a_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vnes_core_top__ConstPool__TABLE_h0e665c85_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vnes_core_top__ConstPool__TABLE_hc1b97178_0;

VL_ATTR_COLD void Vnes_core_top___024root___stl_sequent__TOP__0(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.dbg_cpu_pc = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923;
    vlSelfRef.dbg_cpu_ce = (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu));
    vlSelfRef.dbg_cpu_rnw = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950;
    vlSelfRef.dbg_dma_spr_state = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state;
    vlSelfRef.dbg_odd_or_even = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even;
    vlSelfRef.dbg_vbl_en = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable;
    vlSelfRef.dbg_nmi_occ = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_ce 
        = (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce 
        = (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__new_sprite_dma_addr 
        = (0x000001ffU & ((IData)(1U) + (0x000000ffU 
                                         & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hsync_period 
        = ((0x0116U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x012eU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__hblank_period 
        = ((0x010dU <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x0146U >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    vlSelfRef.dbg_en_bg = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield;
    vlSelfRef.dbg_en_obj = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtrZero 
        = (1U & (~ (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__LinCtr))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__end_of_line 
        = (IData)(((0x0150U == (0x01f8U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                   & ((0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                      == ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__skip_next)
                           ? 3U : 4U))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__entering_vblank 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x00f1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT____Vcellinp__vram0__trigger_2007 
        = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed) 
                  | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed)) 
                 >> 3U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_ppu_cycle 
        = ((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_tick_count)) 
           & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_tick)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__end_of_line 
        = (IData)(((0x0150U == (0x01f8U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused))) 
                   & ((0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused)) 
                      == ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__clockgen_pause__DOT__skip_next)
                           ? 3U : 4U))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n947 
        = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_wr_enabled 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_ovr)) 
                 & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__render_ena 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_objects) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__enable_playfield));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active) {
        vlSelfRef.scanline = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_paused;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause 
            = (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu_pause));
    } else {
        vlSelfRef.scanline = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause 
            = (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_ppu));
    }
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n945 
        = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n948)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_row_last 
        = (0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__old_using_secondary)
                           ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_secondary_addr)
                           : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__oam_addr) 
                              >> 3U)));
    vlSelfRef.cycle = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__freeze_clocks) 
                        & (6U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__faux_pixel_cnt)))
                        ? 0x0154U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__corepause_active)
                                      ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cycle_paused)
                                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS 
        = ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag) 
                                       | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__phi2 
        = ((4U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           & (0x0cU > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)) 
           & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nmi_occured) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vbl_enable));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line)
            ? 0x0105U : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__TriSample 
        = (0x0000000fU & (((1U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__applied_period)) 
                           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__allow_us))
                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos) 
                              ^ (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__SeqPos) 
                                                   >> 4U))))))
                           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Tri__DOT__sample_latch)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846 
        = ((0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941));
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
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__ShiftedPeriod 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__Period) 
           >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ1__DOT__SweepShift));
    nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__ShiftedPeriod 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__Period) 
           >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Squ2__DOT__SweepShift));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__n1627;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3814 
        = (((3U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
            << 1U) | ((0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                      | (2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937) 
           | (((4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941)) 
              | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce 
        = ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0 
        = (IData)((0ULL == (0x00000000000080ffULL & vlSelfRef.mapper_flags_in)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4258 
        = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                  ^ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943)) 
                 >> 7U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__n1965;
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__dout_buffer 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_1__DOT__n1289;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4468 
        = (4U < (0x0000000fU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                 & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943)) 
                                >> 4U)));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__hold_reset) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2452 
        = (1U & ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                     >> 1U)) | (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930))));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__y_f 
        = (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__temp_y) 
                          ^ (- (IData)((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__flip_y)))));
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
    __VdfgRegularize_h4af1c392_0_12 = ((2U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_2) 
                                               >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x)) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__bg_painter__DOT__playfield_pipe_1) 
                                                >> (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_x))));
    __VdfgRegularize_h4af1c392_0_4 = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__playfield_clip) 
                                       | (8U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eb_sr) 
                                         >> 1U));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__show_obj_on_pixel 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__object_clip) 
            | (8U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__eo_sr) 
              >> 1U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cart_pre 
        = ((6U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)) 
           & (0x0aU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    __Vtableidx159 = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n823 
        = Vnes_core_top__ConstPool__TABLE_h057380b2_0
        [__Vtableidx159];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n188 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437 
        = ((((0x0fU == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                       >> 4U))) << 3U) 
            | ((7U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 4U))) << 2U)) 
           | (((6U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                      >> 4U))) << 1U) 
              | (2U == (0x0000000fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
                                       >> 4U)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n741 
        = (0x000000ffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913) 
                          & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n914)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3017 
        = (IData)((0x4cU == (0xdfU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2142 
        = (IData)((0U == (0x13U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
            >> 2U) & ((0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
                      | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
                          & (0U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
                         | ((0x00f1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
                            & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2342 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
            >> 1U) & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4406 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2924 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928) 
           & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930)));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__clock__DOT__is_even_frame)) 
           & ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
              & (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu))));
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4447 
        = (0x0000007fU & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943)) 
                          >> 1U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en 
        = ((0x0101U <= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
           & (0x0141U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9 
        = ((3U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
           | (4U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
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
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499 
        = (((1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 1U) | (0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2112 
        = (((2U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
            << 2U) | (((1U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                       << 1U) | (0U == (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame 
        = ((0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__scanline_ppu)) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ad 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n917;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__dl 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n918;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__have_buffer)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Dmc__DOT__enable_3));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n916;
    __Vtableidx161 = (((0x18U == (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                       << 6U) | (((0x0cU == (0x0000001fU 
                                             & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))) 
                                  << 5U) | (0x0000001fU 
                                            & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3891 
        = Vnes_core_top__ConstPool__TABLE_h6979805f_0
        [__Vtableidx161];
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392 
        = (((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 1U) | (1U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)));
    vlSelfRef.dbg_reset_noSS = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset_noSS;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__clockgen_pause__ce 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__skip_pause_ce)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_ce_pause));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_ce 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__phi2_old)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__phi2));
    vlSelfRef.dbg_dma_put_ce = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__put_ce;
    vlSelfRef.dbg_nmi = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__evaluating 
        = ((0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr)) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
              >> 1U));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_pre_render_line) 
            | (0x00f0U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__scanline_nopr))) 
           & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
              >> 1U));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n631 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)
            ? 4U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620)
                     ? 2U : 6U));
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__get_ce) {
        vlSelfRef.dbg_dma_get_ce = 1U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer;
        nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode;
    } else {
        vlSelfRef.dbg_dma_get_ce = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__Enabled 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__enabled_buffer_1;
        nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode_2;
    }
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset)) 
                 & (~ (IData)(vlSelfRef.reset))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__reset 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_reset) 
           | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__bootvector_flag));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_4 
        = ((IData)(__VdfgRegularize_h4af1c392_0_4) ? (IData)(__VdfgRegularize_h4af1c392_0_12)
            : 0U);
    __Vtableidx34 = nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2437;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2442 
        = Vnes_core_top__ConstPool__TABLE_h8f069df0_0
        [__Vtableidx34];
    vlSelfRef.dbg_render_d = nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__ALE 
        = (1U & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle) 
                  & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d)) 
                 | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                     | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed)) 
                    >> 1U)));
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
    vlSelfRef.nes_core_top__DOT__ppumem_read = (1U 
                                                & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__read_2007_delayed) 
                                                    >> 2U) 
                                                   | ((IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering_d) 
                                                      & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                                                         & ((0U 
                                                             != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                                                            | (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot))))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_y 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_attr 
        = ((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read 
        = ((1U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
           | ((2U == (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
              | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en) 
                  & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9)) 
                 | ((0x0150U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
                    | (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__special_dot)))));
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
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2872 
        = (((2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 2U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2499));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__is_rendering 
        = (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__re_sr) 
            >> 1U) & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_visible_frame 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__in_rendering_frame) 
           & ((0U < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
              & (0x0101U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
    nes_core_top__DOT__nes_inst__DOT__pause_cpu = (1U 
                                                   & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
                                                      | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state) 
                                                         | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__dmc_state) 
           & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)) 
              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_request)));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n3289 
        = (((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
            << 2U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__mcode__DOT__n2392));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__using_secondary 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteeval__DOT__rendering) 
           & (((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle)) 
               & (0x00ffU >= (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))) 
              | (0x00ffU < (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu_cycle))));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d 
        = ((~ (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode)) 
           & (0x0a1fU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)));
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
    vlSelfRef.dbg_ppumem_read = vlSelfRef.nes_core_top__DOT__ppumem_read;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__chr_write 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__ppumem_read)) 
           & ((0x3fU != (0x0000003fU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v) 
                                        >> 8U))) & 
              ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__write_2007_delayed) 
               >> 2U)));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__spriteset_load 
        = (((((5U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
              & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)) 
             << 3U) | (((7U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
                        & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)) 
                       << 2U)) | ((((3U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__count)) 
                                    & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__sprite_load_en)) 
                                   << 1U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__address_gen__DOT__load_attr)));
    nes_core_top__DOT__nes_inst__DOT__ppu__DOT__attribute_read 
        = ((~ (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__nametable_read)) 
           & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT____VdfgRegularize_ha7f8d65a_0_9));
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
    vlSelfRef.dbg_pause_cpu = nes_core_top__DOT__nes_inst__DOT__pause_cpu;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                 | (~ (IData)(nes_core_top__DOT__nes_inst__DOT__pause_cpu))));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack) 
           | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__spr_state) 
              >> 1U));
    vlSelfRef.dbg_cpu_dout = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout;
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__set_irq 
        = ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__FrameSeqMode)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d));
    __VdfgRegularize_h4af1c392_0_20 = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frm_d) 
                                       | ((0x7185U 
                                           == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__frame)) 
                                          | ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__w4017_2) 
                                             & (IData)(nes_core_top__DOT__nes_inst__DOT__apu__DOT__frame_counter__DOT__seq_mode))));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy 
        = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)) 
                 | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__rdy_i)));
    vlSelfRef.dbg_dma_active = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable;
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4251 
        = (0x0000007fU & (((0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n942) 
                                           >> 3U)) 
                           | (IData)((0U != (0x30U 
                                             & (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__alu__DOT__n4237))))) 
                          + (1U | (0x0000001eU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n943) 
                                                  >> 3U)))));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy) 
           & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
    vlSelfRef.nes_core_top__DOT__cpumem_dout = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)
                                                 ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_lastval)
                                                 : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__lc_load 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu__DOT__len_counter_lut
        [(0x0000001fU & ((IData)(vlSelfRef.nes_core_top__DOT__cpumem_dout) 
                         >> 3U))];
    if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int 
            = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)));
        vlSelfRef.dbg_mr_int = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even));
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
        vlSelfRef.dbg_mr_int = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mr_int;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int 
            = (1U & (~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)));
    }
    vlSelfRef.dbg_mw_int = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_write 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__mw_int) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cart_pre));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr 
        = (0x0000ffffU & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma_aout_enable)
                           ? ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_ack)
                               ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__apu_dma_addr)
                               : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__odd_or_even)
                                   ? 0x2004U : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__dma__DOT__sprite_dma_addr)))
                           : vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n774));
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
    if ((0U != (0x000000ffU & (IData)(vlSelfRef.mapper_flags_in)))) {
        nes_core_top__DOT__nes_inst__DOT__chr_allow = 0U;
    }
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n285 
        = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278));
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
    if ((0U != (0x000000ffU & (IData)(vlSelfRef.mapper_flags_in)))) {
        if ((0x2000U > (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr))) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__prg_linaddr 
                = (0x00380000U | (0x000007ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__addr)));
            nes_core_top__DOT__nes_inst__DOT__prg_allow = 1U;
        } else {
            nes_core_top__DOT__nes_inst__DOT__prg_allow = 0U;
        }
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2 
        = ((0U == (3U & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr)))
            ? (0x0000000fU & (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr))
            : (IData)(nes_core_top__DOT__nes_inst__DOT__ppu__DOT__pram_addr));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__color2 
        = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__palette
        [((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__corrupting)
           ? ((0x00000010U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2)) 
              | ((0x0000000cU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram0__DOT__vram_v)) 
                 | (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2))))
           : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__palette_ram__DOT__addr2))];
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n843) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__really_rdy));
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n438 
        = (3U & ((0x18U == (0x0000001fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)))
                  ? (((IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n431) 
                      << 1U) | (IData)(nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n429))
                  : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n399) 
                     >> 2U)));
    vlSelfRef.dbg_cpu_din = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus;
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950)
            ? (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__internal_data_bus)
            : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu_dout));
    if (vlSelfRef.reset) {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n324 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n921));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n325 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n922));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n333 
            = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n930));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n334 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n931));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n336 
            = (0x0000000fU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n933));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n328 = 0U;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n335 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n932;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n339 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n950));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n337 
            = (3U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n531 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n530 
            = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n332 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n326 
            = (0x0000ffffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n923));
    } else {
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n946) {
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
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n338 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n949;
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
    vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894 
        = ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1) 
           & (0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu)));
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
    nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n728 
        = ((0xeeU | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n913)) 
           & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI));
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
    __Vtableidx163 = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__ppu__DOT__vram_din;
    __VdfgRegularize_h4af1c392_0_7 = Vnes_core_top__ConstPool__TABLE_hc1b97178_0
        [__Vtableidx163];
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
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 
                = ((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n928)) 
                   & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)) 
                      & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n620) 
                         & (4U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 
                = (7U & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n843)
                          ? 0U : ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929) 
                                  + (7U != (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929)))));
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
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 
                = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951;
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 
                = (7U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n929));
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
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n902 
            = (1U & ((0x0cU == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__div_cpu))
                      ? ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951)) 
                         & (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__nmi) 
                             & ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n483) 
                                & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n940))) 
                            | ((~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846) 
                                   & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT____VdfgRegularize_heb0a8950_0_1))) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941))))
                      : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n941)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n687 
            = (0x000000ffU & ((((0U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934)) 
                                | (2U == (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n934))) 
                               & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n278))
                               ? ((IData)(1U) + (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__DI))
                               : (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n944)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n899 
            = (1U & ((~ (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894)) 
                     & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n935)));
        if (vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n894) {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 
                = (1U & (~ ((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n846) 
                            | (((IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__p) 
                                >> 2U) | (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n939)))));
        } else {
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n937));
            vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 
                = (1U & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n936));
        }
    } else {
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n688 
            = vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n951;
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n898 
            = (7U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x00000025U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n902 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x0000002bU)));
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
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n899 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x00000028U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n901 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x0000002aU)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n900 
            = (1U & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_2__DOT__dout_buffer 
                             >> 0x00000029U)));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n685 
            = (0x000000ffU & (IData)(vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer));
        vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__n684 
            = (0x000001ffU & (IData)((vlSelfRef.nes_core_top__DOT__nes_inst__DOT__cpu__DOT__cpu_impl__DOT__ireg_savestate_t80_3__DOT__dout_buffer 
                                      >> 0x00000020U)));
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
}

VL_ATTR_COLD void Vnes_core_top___024root___eval_stl(Vnes_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnes_core_top___024root___eval_stl\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vnes_core_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge nes_core_top.nes_inst.__Vcellinp__cpu__res_n)\n");
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
    vlSelf->nes_core_top__DOT__cpumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12418959050304991656ull);
    vlSelf->nes_core_top__DOT__cpumem_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10219112023615386903ull);
    vlSelf->nes_core_top__DOT__ppumem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17933491722187600938ull);
    vlSelf->nes_core_top__DOT__ppumem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11186793022137068387ull);
    vlSelf->nes_core_top__DOT__ppumem_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1581262607056660879ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4726345749433352653ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cpu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2700949655241885610ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__ppu_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 880330416226255342ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__cart_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5927441403928346913ull);
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
    vlSelf->nes_core_top__DOT__nes_inst__DOT__mr_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9338929079367153089ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__mw_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17486679756096836556ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__get_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14629909384225678800ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__put_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7935788828551759307ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT____Vcellinp__dma__sprite_trigger = 0;
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
    vlSelf->nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT__chr_ain = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10167788207468442218ull);
    vlSelf->nes_core_top__DOT__nes_inst__DOT__multi_mapper__DOT____VdfgExtracted_hca5e3773__0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_107 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_108 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_109 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__nes_core_top__DOT__nes_inst__DOT____Vcellinp__cpu__res_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
