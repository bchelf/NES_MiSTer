// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_savestates___stl_sequent__TOP__nes_core_top__nes_inst__savestates__0(Vnes_core_top_savestates* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_savestates___stl_sequent__TOP__nes_core_top__nes_inst__savestates__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reset_ss = vlSelfRef.__PVT__reset_in;
    vlSelfRef.__PVT__reset_delay = vlSelfRef.__PVT__reset_in;
    vlSelfRef.__PVT__load_done = 0U;
    vlSelfRef.__PVT__savestate_busy = 0U;
    vlSelfRef.__PVT__BUS_Din = 0ULL;
    vlSelfRef.__PVT__BUS_Adr = 0U;
    vlSelfRef.__PVT__BUS_wren = 0U;
    vlSelfRef.__PVT__BUS_rst = 0U;
    vlSelfRef.__PVT__loading_savestate = 0U;
    vlSelfRef.__PVT__saving_savestate = 0U;
    vlSelfRef.__PVT__sleep_savestate = 0U;
    vlSelfRef.__PVT__Save_RAMAddr = 0U;
    vlSelfRef.__PVT__Save_RAMRdEn = 0U;
    vlSelfRef.__PVT__Save_RAMWrEn = 0U;
    vlSelfRef.__PVT__Save_RAMWriteData = 0U;
    vlSelfRef.__PVT__Save_RAMType = 0U;
    vlSelfRef.__PVT__bus_out_Din = 0ULL;
    vlSelfRef.__PVT__bus_out_Adr = 0U;
    vlSelfRef.__PVT__bus_out_rnw = 0U;
    vlSelfRef.__PVT__bus_out_ena = 0U;
    vlSelfRef.__PVT__bus_out_be = 0U;
}

VL_ATTR_COLD void Vnes_core_top_savestates___ctor_var_reset(Vnes_core_top_savestates* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_savestates___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13674424877890067050ull);
    vlSelf->__PVT__reset_ss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13191081210891679665ull);
    vlSelf->__PVT__reset_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912911662922244719ull);
    vlSelf->__PVT__load_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1289418113211296468ull);
    vlSelf->__PVT__increaseSSHeaderCount = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6878619865022596285ull);
    vlSelf->__PVT__save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6940317727511027048ull);
    vlSelf->__PVT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1148748992964133306ull);
    vlSelf->__PVT__savestate_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 470533832370033810ull);
    vlSelf->__PVT__savestate_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2874717711479428778ull);
    vlSelf->__PVT__paused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5573556597431404773ull);
    vlSelf->__PVT__BUS_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13598017407245669262ull);
    vlSelf->__PVT__BUS_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16603433034645341190ull);
    vlSelf->__PVT__BUS_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11394164693920454426ull);
    vlSelf->__PVT__BUS_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3275790117773076912ull);
    vlSelf->__PVT__BUS_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3786246471585276152ull);
    vlSelf->__PVT__loading_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15569634275978827255ull);
    vlSelf->__PVT__saving_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1947625003157339840ull);
    vlSelf->__PVT__sleep_savestate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3460690964128772266ull);
    vlSelf->__PVT__Save_RAMAddr = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11512507931635602847ull);
    vlSelf->__PVT__Save_RAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2286596556601672904ull);
    vlSelf->__PVT__Save_RAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17141923428011233626ull);
    vlSelf->__PVT__Save_RAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6491919061863232707ull);
    vlSelf->__PVT__Save_RAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16814968764605980152ull);
    vlSelf->__PVT__Save_RAMType = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13427793214661137397ull);
    vlSelf->__PVT__bus_out_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1916314340810877374ull);
    vlSelf->__PVT__bus_out_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17878762387342844690ull);
    vlSelf->__PVT__bus_out_Adr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13656835724386674761ull);
    vlSelf->__PVT__bus_out_rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7825875875905763830ull);
    vlSelf->__PVT__bus_out_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9538217879412141780ull);
    vlSelf->__PVT__bus_out_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13811233088292215853ull);
    vlSelf->__PVT__bus_out_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9770478761528928436ull);
}
