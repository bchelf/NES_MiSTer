// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_T65___eval_initial__TOP__nes_core_top__nes_inst__cpu(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___eval_initial__TOP__nes_core_top__nes_inst__cpu\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SO_n = 1U;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Abort_n = 1U;
}

VL_ATTR_COLD void Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__0(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__BCD_en 
        = vlSelfRef.__PVT__BCD_en;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Mode 
        = vlSelfRef.__PVT__mode;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Enable 
        = vlSelfRef.__PVT__enable;
    vlSelfRef.__PVT__rw_n_i = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__R_W_n;
    vlSelfRef.__PVT__do_i = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__DO;
    vlSelfRef.__PVT__R_W_n = vlSelfRef.__PVT__rw_n_i;
    vlSelfRef.__PVT__DO = vlSelfRef.__PVT__do_i;
}

VL_ATTR_COLD void Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__1(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__NMI_n 
        = vlSelfRef.__PVT__NMI_n;
    vlSelfRef.__PVT__a24_i = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__A;
    vlSelfRef.__PVT__Instrnew = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Instrnew;
    vlSelfRef.__PVT__A = (0x0000ffffU & VL_SEL_IIII(24, vlSelfRef.__PVT__a24_i, 0U, 16));
}

VL_ATTR_COLD void Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__2(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Pwr_n 
        = vlSelfRef.__PVT__pwr_n;
}

VL_ATTR_COLD void Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__3(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_load 
        = vlSelfRef.__PVT__SaveStateBus_load;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSelfRef.__PVT__rdy_i = (1U & ((IData)(vlSelfRef.__PVT__rdy) 
                                    | (~ (IData)(vlSelfRef.__PVT__rw_n_i))));
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Res_n 
        = vlSelfRef.__PVT__res_n;
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__Rdy 
        = vlSelfRef.__PVT__rdy_i;
}

VL_ATTR_COLD void Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__4(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__IRQ_n 
        = vlSelfRef.__PVT__IRQ_n;
    vlSelfRef.__PVT__SaveStateBus_Dout = vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__SaveStateBus_Dout;
}

VL_ATTR_COLD void Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__5(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___stl_sequent__TOP__nes_core_top__nes_inst__cpu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__cpu__cpu_impl.__PVT__DI 
        = vlSelfRef.__PVT__DI;
}

VL_ATTR_COLD void Vnes_core_top_T65___ctor_var_reset(Vnes_core_top_T65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_T65___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2288075164703132177ull);
    vlSelf->__PVT__BCD_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1840092394395858984ull);
    vlSelf->__PVT__res_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971415812964045113ull);
    vlSelf->__PVT__pwr_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3367568878475374847ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4255036911935195030ull);
    vlSelf->__PVT__IRQ_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894841137382162950ull);
    vlSelf->__PVT__NMI_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12731285831377999975ull);
    vlSelf->__PVT__R_W_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18418200568291600428ull);
    vlSelf->__PVT__A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3969090544990846983ull);
    vlSelf->__PVT__DI = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2947528501619892130ull);
    vlSelf->__PVT__DO = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9933144125723145476ull);
    vlSelf->__PVT__Instrnew = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368119167523690590ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__a24_i = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12876304316308501077ull);
    vlSelf->__PVT__rw_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12014293022471394321ull);
    vlSelf->__PVT__rw_n_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4167911199066299119ull);
    vlSelf->__PVT__rdy_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4388597720408453166ull);
    vlSelf->__PVT__do_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3245958735839655538ull);
    vlSelf->__Vdly__rw_n_prev = 0;
}
