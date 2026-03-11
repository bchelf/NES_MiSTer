// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___eval_initial__TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1(Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___eval_initial__TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dout_buffer = 0xe064000000000000ULL;
    vlSelfRef.__PVT__adri = 0U;
    vlSelfRef.__PVT__n1289 = 0xe064000000000000ULL;
}

VL_ATTR_COLD void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1__0(Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dout_buffer = vlSelfRef.__PVT__n1289;
    vlSelfRef.__PVT__n1032 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0U));
    vlSelfRef.__PVT__n1036 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 1U));
    vlSelfRef.__PVT__n1040 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 2U));
    vlSelfRef.__PVT__n1044 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 3U));
    vlSelfRef.__PVT__n1048 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 4U));
    vlSelfRef.__PVT__n1052 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 5U));
    vlSelfRef.__PVT__n1056 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 6U));
    vlSelfRef.__PVT__n1060 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 7U));
    vlSelfRef.__PVT__n1064 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 8U));
    vlSelfRef.__PVT__n1068 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 9U));
    vlSelfRef.__PVT__n1072 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x0aU));
    vlSelfRef.__PVT__n1076 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x0bU));
    vlSelfRef.__PVT__n1080 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x0cU));
    vlSelfRef.__PVT__n1084 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x0dU));
    vlSelfRef.__PVT__n1088 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x0eU));
    vlSelfRef.__PVT__n1092 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x0fU));
    vlSelfRef.__PVT__n1096 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x10U));
    vlSelfRef.__PVT__n1100 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x11U));
    vlSelfRef.__PVT__n1104 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x12U));
    vlSelfRef.__PVT__n1108 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x13U));
    vlSelfRef.__PVT__n1112 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x14U));
    vlSelfRef.__PVT__n1116 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x15U));
    vlSelfRef.__PVT__n1120 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x16U));
    vlSelfRef.__PVT__n1124 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x17U));
    vlSelfRef.__PVT__n1128 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x18U));
    vlSelfRef.__PVT__n1132 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x19U));
    vlSelfRef.__PVT__n1136 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x1aU));
    vlSelfRef.__PVT__n1140 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x1bU));
    vlSelfRef.__PVT__n1144 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x1cU));
    vlSelfRef.__PVT__n1148 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x1dU));
    vlSelfRef.__PVT__n1152 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x1eU));
    vlSelfRef.__PVT__n1156 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x1fU));
    vlSelfRef.__PVT__n1160 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x20U));
    vlSelfRef.__PVT__n1164 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x21U));
    vlSelfRef.__PVT__n1168 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x22U));
    vlSelfRef.__PVT__n1172 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x23U));
    vlSelfRef.__PVT__n1176 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x24U));
    vlSelfRef.__PVT__n1180 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x25U));
    vlSelfRef.__PVT__n1184 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x26U));
    vlSelfRef.__PVT__n1188 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x27U));
    vlSelfRef.__PVT__n1192 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x28U));
    vlSelfRef.__PVT__n1196 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x29U));
    vlSelfRef.__PVT__n1200 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x2aU));
    vlSelfRef.__PVT__n1204 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x2bU));
    vlSelfRef.__PVT__n1208 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x2cU));
    vlSelfRef.__PVT__n1212 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x2dU));
    vlSelfRef.__PVT__n1216 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x2eU));
    vlSelfRef.__PVT__n1220 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x2fU));
    vlSelfRef.__PVT__n1224 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x30U));
    vlSelfRef.__PVT__n1228 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x31U));
    vlSelfRef.__PVT__n1232 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x32U));
    vlSelfRef.__PVT__n1236 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x33U));
    vlSelfRef.__PVT__n1240 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x34U));
    vlSelfRef.__PVT__n1244 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x35U));
    vlSelfRef.__PVT__n1248 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x36U));
    vlSelfRef.__PVT__n1252 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x37U));
    vlSelfRef.__PVT__n1256 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x38U));
    vlSelfRef.__PVT__n1260 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x39U));
    vlSelfRef.__PVT__n1264 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x3aU));
    vlSelfRef.__PVT__n1268 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x3bU));
    vlSelfRef.__PVT__n1272 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x3cU));
    vlSelfRef.__PVT__n1276 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x3dU));
    vlSelfRef.__PVT__n1280 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x3eU));
    vlSelfRef.__PVT__n1284 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__din, 0x3fU));
    vlSelfRef.__PVT__dout = vlSelfRef.__PVT__dout_buffer;
}

VL_ATTR_COLD void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1__1(Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__ireg_savestate_t80_1__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n962 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0U));
    vlSelfRef.__PVT__n963 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 1U));
    vlSelfRef.__PVT__n964 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 2U));
    vlSelfRef.__PVT__n965 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 3U));
    vlSelfRef.__PVT__n966 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 4U));
    vlSelfRef.__PVT__n967 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 5U));
    vlSelfRef.__PVT__n968 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 6U));
    vlSelfRef.__PVT__n969 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 7U));
    vlSelfRef.__PVT__n970 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 8U));
    vlSelfRef.__PVT__n971 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 9U));
    vlSelfRef.__PVT__n972 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x0aU));
    vlSelfRef.__PVT__n973 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x0bU));
    vlSelfRef.__PVT__n974 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x0cU));
    vlSelfRef.__PVT__n975 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x0dU));
    vlSelfRef.__PVT__n976 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x0eU));
    vlSelfRef.__PVT__n977 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x0fU));
    vlSelfRef.__PVT__n978 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x10U));
    vlSelfRef.__PVT__n979 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x11U));
    vlSelfRef.__PVT__n980 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x12U));
    vlSelfRef.__PVT__n981 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x13U));
    vlSelfRef.__PVT__n982 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x14U));
    vlSelfRef.__PVT__n983 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x15U));
    vlSelfRef.__PVT__n984 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x16U));
    vlSelfRef.__PVT__n985 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x17U));
    vlSelfRef.__PVT__n986 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x18U));
    vlSelfRef.__PVT__n987 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x19U));
    vlSelfRef.__PVT__n988 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x1aU));
    vlSelfRef.__PVT__n989 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x1bU));
    vlSelfRef.__PVT__n990 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x1cU));
    vlSelfRef.__PVT__n991 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x1dU));
    vlSelfRef.__PVT__n992 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x1eU));
    vlSelfRef.__PVT__n993 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x1fU));
    vlSelfRef.__PVT__n994 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x20U));
    vlSelfRef.__PVT__n995 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x21U));
    vlSelfRef.__PVT__n996 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x22U));
    vlSelfRef.__PVT__n997 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x23U));
    vlSelfRef.__PVT__n998 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x24U));
    vlSelfRef.__PVT__n999 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x25U));
    vlSelfRef.__PVT__n1000 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x26U));
    vlSelfRef.__PVT__n1001 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x27U));
    vlSelfRef.__PVT__n1002 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x28U));
    vlSelfRef.__PVT__n1003 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x29U));
    vlSelfRef.__PVT__n1004 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x2aU));
    vlSelfRef.__PVT__n1005 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x2bU));
    vlSelfRef.__PVT__n1006 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x2cU));
    vlSelfRef.__PVT__n1007 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x2dU));
    vlSelfRef.__PVT__n1008 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x2eU));
    vlSelfRef.__PVT__n1009 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x2fU));
    vlSelfRef.__PVT__n1010 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x30U));
    vlSelfRef.__PVT__n1011 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x31U));
    vlSelfRef.__PVT__n1012 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x32U));
    vlSelfRef.__PVT__n1013 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x33U));
    vlSelfRef.__PVT__n1014 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x34U));
    vlSelfRef.__PVT__n1015 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x35U));
    vlSelfRef.__PVT__n1016 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x36U));
    vlSelfRef.__PVT__n1017 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x37U));
    vlSelfRef.__PVT__n1018 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x38U));
    vlSelfRef.__PVT__n1019 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x39U));
    vlSelfRef.__PVT__n1020 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x3aU));
    vlSelfRef.__PVT__n1021 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x3bU));
    vlSelfRef.__PVT__n1022 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x3cU));
    vlSelfRef.__PVT__n1023 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x3dU));
    vlSelfRef.__PVT__n1024 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x3eU));
    vlSelfRef.__PVT__n1025 = (1U & VL_BITSEL_IQII(64, vlSelfRef.__PVT__bus_din, 0x3fU));
    vlSelfRef.__PVT__n960 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                             == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1033 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1037 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1041 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1045 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1049 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1053 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1057 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1061 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1065 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1069 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1073 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1077 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1081 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1085 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1089 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1093 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1097 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1101 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1105 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1109 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1113 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1117 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1121 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1125 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1129 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1133 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1137 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1141 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1145 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1149 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1153 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1157 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1161 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1165 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1169 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1173 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1177 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1181 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1185 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1189 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1193 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1197 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1201 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1205 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1209 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1213 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1217 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1221 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1225 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1229 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1233 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1237 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1241 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1245 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1249 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1253 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1257 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1261 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1265 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1269 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1273 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1277 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1281 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1285 = ((IData)(vlSelfRef.__PVT__bus_adr) 
                              == (IData)(vlSelfRef.__PVT__adri));
    vlSelfRef.__PVT__n1026 = VL_CONCAT_QII(64,32,32, 
                                           VL_CONCAT_III(32,16,16, 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1025), (IData)(vlSelfRef.__PVT__n1024)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1023), (IData)(vlSelfRef.__PVT__n1022))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1021), (IData)(vlSelfRef.__PVT__n1020)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1019), (IData)(vlSelfRef.__PVT__n1018)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1017), (IData)(vlSelfRef.__PVT__n1016)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1015), (IData)(vlSelfRef.__PVT__n1014))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1013), (IData)(vlSelfRef.__PVT__n1012)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1011), (IData)(vlSelfRef.__PVT__n1010))))), 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1009), (IData)(vlSelfRef.__PVT__n1008)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1007), (IData)(vlSelfRef.__PVT__n1006))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1005), (IData)(vlSelfRef.__PVT__n1004)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1003), (IData)(vlSelfRef.__PVT__n1002)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1001), (IData)(vlSelfRef.__PVT__n1000)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n999), (IData)(vlSelfRef.__PVT__n998))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n997), (IData)(vlSelfRef.__PVT__n996)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n995), (IData)(vlSelfRef.__PVT__n994)))))), 
                                           VL_CONCAT_III(32,16,16, 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n993), (IData)(vlSelfRef.__PVT__n992)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n991), (IData)(vlSelfRef.__PVT__n990))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n989), (IData)(vlSelfRef.__PVT__n988)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n987), (IData)(vlSelfRef.__PVT__n986)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n985), (IData)(vlSelfRef.__PVT__n984)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n983), (IData)(vlSelfRef.__PVT__n982))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n981), (IData)(vlSelfRef.__PVT__n980)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n979), (IData)(vlSelfRef.__PVT__n978))))), 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n977), (IData)(vlSelfRef.__PVT__n976)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n975), (IData)(vlSelfRef.__PVT__n974))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n973), (IData)(vlSelfRef.__PVT__n972)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n971), (IData)(vlSelfRef.__PVT__n970)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n969), (IData)(vlSelfRef.__PVT__n968)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n967), (IData)(vlSelfRef.__PVT__n966))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n965), (IData)(vlSelfRef.__PVT__n964)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n963), (IData)(vlSelfRef.__PVT__n962)))))));
    vlSelfRef.__PVT__n961 = ((IData)(vlSelfRef.__PVT__bus_wren) 
                             & (IData)(vlSelfRef.__PVT__n960));
    vlSelfRef.__PVT__n1034 = ((IData)(vlSelfRef.__PVT__n1033) 
                              & (IData)(vlSelfRef.__PVT__n1032));
    vlSelfRef.__PVT__n1038 = ((IData)(vlSelfRef.__PVT__n1037) 
                              & (IData)(vlSelfRef.__PVT__n1036));
    vlSelfRef.__PVT__n1042 = ((IData)(vlSelfRef.__PVT__n1041) 
                              & (IData)(vlSelfRef.__PVT__n1040));
    vlSelfRef.__PVT__n1046 = ((IData)(vlSelfRef.__PVT__n1045) 
                              & (IData)(vlSelfRef.__PVT__n1044));
    vlSelfRef.__PVT__n1050 = ((IData)(vlSelfRef.__PVT__n1049) 
                              & (IData)(vlSelfRef.__PVT__n1048));
    vlSelfRef.__PVT__n1054 = ((IData)(vlSelfRef.__PVT__n1053) 
                              & (IData)(vlSelfRef.__PVT__n1052));
    vlSelfRef.__PVT__n1058 = ((IData)(vlSelfRef.__PVT__n1057) 
                              & (IData)(vlSelfRef.__PVT__n1056));
    vlSelfRef.__PVT__n1062 = ((IData)(vlSelfRef.__PVT__n1061) 
                              & (IData)(vlSelfRef.__PVT__n1060));
    vlSelfRef.__PVT__n1066 = ((IData)(vlSelfRef.__PVT__n1065) 
                              & (IData)(vlSelfRef.__PVT__n1064));
    vlSelfRef.__PVT__n1070 = ((IData)(vlSelfRef.__PVT__n1069) 
                              & (IData)(vlSelfRef.__PVT__n1068));
    vlSelfRef.__PVT__n1074 = ((IData)(vlSelfRef.__PVT__n1073) 
                              & (IData)(vlSelfRef.__PVT__n1072));
    vlSelfRef.__PVT__n1078 = ((IData)(vlSelfRef.__PVT__n1077) 
                              & (IData)(vlSelfRef.__PVT__n1076));
    vlSelfRef.__PVT__n1082 = ((IData)(vlSelfRef.__PVT__n1081) 
                              & (IData)(vlSelfRef.__PVT__n1080));
    vlSelfRef.__PVT__n1086 = ((IData)(vlSelfRef.__PVT__n1085) 
                              & (IData)(vlSelfRef.__PVT__n1084));
    vlSelfRef.__PVT__n1090 = ((IData)(vlSelfRef.__PVT__n1089) 
                              & (IData)(vlSelfRef.__PVT__n1088));
    vlSelfRef.__PVT__n1094 = ((IData)(vlSelfRef.__PVT__n1093) 
                              & (IData)(vlSelfRef.__PVT__n1092));
    vlSelfRef.__PVT__n1098 = ((IData)(vlSelfRef.__PVT__n1097) 
                              & (IData)(vlSelfRef.__PVT__n1096));
    vlSelfRef.__PVT__n1102 = ((IData)(vlSelfRef.__PVT__n1101) 
                              & (IData)(vlSelfRef.__PVT__n1100));
    vlSelfRef.__PVT__n1106 = ((IData)(vlSelfRef.__PVT__n1105) 
                              & (IData)(vlSelfRef.__PVT__n1104));
    vlSelfRef.__PVT__n1110 = ((IData)(vlSelfRef.__PVT__n1109) 
                              & (IData)(vlSelfRef.__PVT__n1108));
    vlSelfRef.__PVT__n1114 = ((IData)(vlSelfRef.__PVT__n1113) 
                              & (IData)(vlSelfRef.__PVT__n1112));
    vlSelfRef.__PVT__n1118 = ((IData)(vlSelfRef.__PVT__n1117) 
                              & (IData)(vlSelfRef.__PVT__n1116));
    vlSelfRef.__PVT__n1122 = ((IData)(vlSelfRef.__PVT__n1121) 
                              & (IData)(vlSelfRef.__PVT__n1120));
    vlSelfRef.__PVT__n1126 = ((IData)(vlSelfRef.__PVT__n1125) 
                              & (IData)(vlSelfRef.__PVT__n1124));
    vlSelfRef.__PVT__n1130 = ((IData)(vlSelfRef.__PVT__n1129) 
                              & (IData)(vlSelfRef.__PVT__n1128));
    vlSelfRef.__PVT__n1134 = ((IData)(vlSelfRef.__PVT__n1133) 
                              & (IData)(vlSelfRef.__PVT__n1132));
    vlSelfRef.__PVT__n1138 = ((IData)(vlSelfRef.__PVT__n1137) 
                              & (IData)(vlSelfRef.__PVT__n1136));
    vlSelfRef.__PVT__n1142 = ((IData)(vlSelfRef.__PVT__n1141) 
                              & (IData)(vlSelfRef.__PVT__n1140));
    vlSelfRef.__PVT__n1146 = ((IData)(vlSelfRef.__PVT__n1145) 
                              & (IData)(vlSelfRef.__PVT__n1144));
    vlSelfRef.__PVT__n1150 = ((IData)(vlSelfRef.__PVT__n1149) 
                              & (IData)(vlSelfRef.__PVT__n1148));
    vlSelfRef.__PVT__n1154 = ((IData)(vlSelfRef.__PVT__n1153) 
                              & (IData)(vlSelfRef.__PVT__n1152));
    vlSelfRef.__PVT__n1158 = ((IData)(vlSelfRef.__PVT__n1157) 
                              & (IData)(vlSelfRef.__PVT__n1156));
    vlSelfRef.__PVT__n1162 = ((IData)(vlSelfRef.__PVT__n1161) 
                              & (IData)(vlSelfRef.__PVT__n1160));
    vlSelfRef.__PVT__n1166 = ((IData)(vlSelfRef.__PVT__n1165) 
                              & (IData)(vlSelfRef.__PVT__n1164));
    vlSelfRef.__PVT__n1170 = ((IData)(vlSelfRef.__PVT__n1169) 
                              & (IData)(vlSelfRef.__PVT__n1168));
    vlSelfRef.__PVT__n1174 = ((IData)(vlSelfRef.__PVT__n1173) 
                              & (IData)(vlSelfRef.__PVT__n1172));
    vlSelfRef.__PVT__n1178 = ((IData)(vlSelfRef.__PVT__n1177) 
                              & (IData)(vlSelfRef.__PVT__n1176));
    vlSelfRef.__PVT__n1182 = ((IData)(vlSelfRef.__PVT__n1181) 
                              & (IData)(vlSelfRef.__PVT__n1180));
    vlSelfRef.__PVT__n1186 = ((IData)(vlSelfRef.__PVT__n1185) 
                              & (IData)(vlSelfRef.__PVT__n1184));
    vlSelfRef.__PVT__n1190 = ((IData)(vlSelfRef.__PVT__n1189) 
                              & (IData)(vlSelfRef.__PVT__n1188));
    vlSelfRef.__PVT__n1194 = ((IData)(vlSelfRef.__PVT__n1193) 
                              & (IData)(vlSelfRef.__PVT__n1192));
    vlSelfRef.__PVT__n1198 = ((IData)(vlSelfRef.__PVT__n1197) 
                              & (IData)(vlSelfRef.__PVT__n1196));
    vlSelfRef.__PVT__n1202 = ((IData)(vlSelfRef.__PVT__n1201) 
                              & (IData)(vlSelfRef.__PVT__n1200));
    vlSelfRef.__PVT__n1206 = ((IData)(vlSelfRef.__PVT__n1205) 
                              & (IData)(vlSelfRef.__PVT__n1204));
    vlSelfRef.__PVT__n1210 = ((IData)(vlSelfRef.__PVT__n1209) 
                              & (IData)(vlSelfRef.__PVT__n1208));
    vlSelfRef.__PVT__n1214 = ((IData)(vlSelfRef.__PVT__n1213) 
                              & (IData)(vlSelfRef.__PVT__n1212));
    vlSelfRef.__PVT__n1218 = ((IData)(vlSelfRef.__PVT__n1217) 
                              & (IData)(vlSelfRef.__PVT__n1216));
    vlSelfRef.__PVT__n1222 = ((IData)(vlSelfRef.__PVT__n1221) 
                              & (IData)(vlSelfRef.__PVT__n1220));
    vlSelfRef.__PVT__n1226 = ((IData)(vlSelfRef.__PVT__n1225) 
                              & (IData)(vlSelfRef.__PVT__n1224));
    vlSelfRef.__PVT__n1230 = ((IData)(vlSelfRef.__PVT__n1229) 
                              & (IData)(vlSelfRef.__PVT__n1228));
    vlSelfRef.__PVT__n1234 = ((IData)(vlSelfRef.__PVT__n1233) 
                              & (IData)(vlSelfRef.__PVT__n1232));
    vlSelfRef.__PVT__n1238 = ((IData)(vlSelfRef.__PVT__n1237) 
                              & (IData)(vlSelfRef.__PVT__n1236));
    vlSelfRef.__PVT__n1242 = ((IData)(vlSelfRef.__PVT__n1241) 
                              & (IData)(vlSelfRef.__PVT__n1240));
    vlSelfRef.__PVT__n1246 = ((IData)(vlSelfRef.__PVT__n1245) 
                              & (IData)(vlSelfRef.__PVT__n1244));
    vlSelfRef.__PVT__n1250 = ((IData)(vlSelfRef.__PVT__n1249) 
                              & (IData)(vlSelfRef.__PVT__n1248));
    vlSelfRef.__PVT__n1254 = ((IData)(vlSelfRef.__PVT__n1253) 
                              & (IData)(vlSelfRef.__PVT__n1252));
    vlSelfRef.__PVT__n1258 = ((IData)(vlSelfRef.__PVT__n1257) 
                              & (IData)(vlSelfRef.__PVT__n1256));
    vlSelfRef.__PVT__n1262 = ((IData)(vlSelfRef.__PVT__n1261) 
                              & (IData)(vlSelfRef.__PVT__n1260));
    vlSelfRef.__PVT__n1266 = ((IData)(vlSelfRef.__PVT__n1265) 
                              & (IData)(vlSelfRef.__PVT__n1264));
    vlSelfRef.__PVT__n1270 = ((IData)(vlSelfRef.__PVT__n1269) 
                              & (IData)(vlSelfRef.__PVT__n1268));
    vlSelfRef.__PVT__n1274 = ((IData)(vlSelfRef.__PVT__n1273) 
                              & (IData)(vlSelfRef.__PVT__n1272));
    vlSelfRef.__PVT__n1278 = ((IData)(vlSelfRef.__PVT__n1277) 
                              & (IData)(vlSelfRef.__PVT__n1276));
    vlSelfRef.__PVT__n1282 = ((IData)(vlSelfRef.__PVT__n1281) 
                              & (IData)(vlSelfRef.__PVT__n1280));
    vlSelfRef.__PVT__n1286 = ((IData)(vlSelfRef.__PVT__n1285) 
                              & (IData)(vlSelfRef.__PVT__n1284));
    vlSelfRef.__PVT__n1027 = ((IData)(vlSelfRef.__PVT__n961)
                               ? vlSelfRef.__PVT__n1026
                               : vlSelfRef.__PVT__dout_buffer);
    vlSelfRef.__PVT__n1288 = VL_CONCAT_QII(64,32,32, 
                                           VL_CONCAT_III(32,16,16, 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1286), (IData)(vlSelfRef.__PVT__n1282)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1278), (IData)(vlSelfRef.__PVT__n1274))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1270), (IData)(vlSelfRef.__PVT__n1266)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1262), (IData)(vlSelfRef.__PVT__n1258)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1254), (IData)(vlSelfRef.__PVT__n1250)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1246), (IData)(vlSelfRef.__PVT__n1242))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1238), (IData)(vlSelfRef.__PVT__n1234)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1230), (IData)(vlSelfRef.__PVT__n1226))))), 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1222), (IData)(vlSelfRef.__PVT__n1218)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1214), (IData)(vlSelfRef.__PVT__n1210))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1206), (IData)(vlSelfRef.__PVT__n1202)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1198), (IData)(vlSelfRef.__PVT__n1194)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1190), (IData)(vlSelfRef.__PVT__n1186)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1182), (IData)(vlSelfRef.__PVT__n1178))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1174), (IData)(vlSelfRef.__PVT__n1170)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1166), (IData)(vlSelfRef.__PVT__n1162)))))), 
                                           VL_CONCAT_III(32,16,16, 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1158), (IData)(vlSelfRef.__PVT__n1154)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1150), (IData)(vlSelfRef.__PVT__n1146))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1142), (IData)(vlSelfRef.__PVT__n1138)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1134), (IData)(vlSelfRef.__PVT__n1130)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1126), (IData)(vlSelfRef.__PVT__n1122)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1118), (IData)(vlSelfRef.__PVT__n1114))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1110), (IData)(vlSelfRef.__PVT__n1106)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1102), (IData)(vlSelfRef.__PVT__n1098))))), 
                                                         VL_CONCAT_III(16,8,8, 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1094), (IData)(vlSelfRef.__PVT__n1090)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1086), (IData)(vlSelfRef.__PVT__n1082))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1078), (IData)(vlSelfRef.__PVT__n1074)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1070), (IData)(vlSelfRef.__PVT__n1066)))), 
                                                                       VL_CONCAT_III(8,4,4, 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1062), (IData)(vlSelfRef.__PVT__n1058)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1054), (IData)(vlSelfRef.__PVT__n1050))), 
                                                                                VL_CONCAT_III(4,2,2, 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1046), (IData)(vlSelfRef.__PVT__n1042)), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n1038), (IData)(vlSelfRef.__PVT__n1034)))))));
    vlSelfRef.__PVT__n1029 = ((IData)(vlSelfRef.__PVT__bus_rst)
                               ? 0xe064000000000000ULL
                               : vlSelfRef.__PVT__n1027);
    vlSelfRef.__PVT__bus_dout = vlSelfRef.__PVT__n1288;
}

VL_ATTR_COLD void Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___ctor_var_reset(Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__bus_din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15075780171004304599ull);
    vlSelf->__PVT__bus_adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17858839340929839705ull);
    vlSelf->__PVT__bus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8301193885676436070ull);
    vlSelf->__PVT__bus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10005081065426649523ull);
    vlSelf->__PVT__bus_dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8732052627649832713ull);
    vlSelf->__PVT__din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15192908731043726583ull);
    vlSelf->__PVT__dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11474705599699299244ull);
    vlSelf->__PVT__dout_buffer = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5472497710154410006ull);
    vlSelf->__PVT__adri = 0U;
    ;
    vlSelf->__PVT__n960 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11861640975537587072ull);
    vlSelf->__PVT__n961 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5948717458868137534ull);
    vlSelf->__PVT__n962 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 288966257924218255ull);
    vlSelf->__PVT__n963 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179663441448424641ull);
    vlSelf->__PVT__n964 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1603808299773407084ull);
    vlSelf->__PVT__n965 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7922075584596435065ull);
    vlSelf->__PVT__n966 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13434424626108739425ull);
    vlSelf->__PVT__n967 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2492189967066644164ull);
    vlSelf->__PVT__n968 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3011239059916892785ull);
    vlSelf->__PVT__n969 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15798231932682564144ull);
    vlSelf->__PVT__n970 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5947227468866467222ull);
    vlSelf->__PVT__n971 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16970918959067526118ull);
    vlSelf->__PVT__n972 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18427667220055717856ull);
    vlSelf->__PVT__n973 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498540761165229278ull);
    vlSelf->__PVT__n974 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4778936070018263116ull);
    vlSelf->__PVT__n975 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8150451178008876253ull);
    vlSelf->__PVT__n976 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7520011119437623797ull);
    vlSelf->__PVT__n977 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4924515916917796144ull);
    vlSelf->__PVT__n978 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5383240490922226540ull);
    vlSelf->__PVT__n979 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5005972748076683423ull);
    vlSelf->__PVT__n980 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17941928012645183009ull);
    vlSelf->__PVT__n981 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12366072870970099582ull);
    vlSelf->__PVT__n982 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1230990415048181355ull);
    vlSelf->__PVT__n983 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7664711970598591124ull);
    vlSelf->__PVT__n984 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7455236346290684029ull);
    vlSelf->__PVT__n985 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 245457883984883250ull);
    vlSelf->__PVT__n986 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10600949175873559414ull);
    vlSelf->__PVT__n987 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17768390215546339486ull);
    vlSelf->__PVT__n988 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13258128166024094803ull);
    vlSelf->__PVT__n989 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6256040016778763188ull);
    vlSelf->__PVT__n990 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5089939049715230319ull);
    vlSelf->__PVT__n991 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17455967488217692945ull);
    vlSelf->__PVT__n992 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1864003788624161374ull);
    vlSelf->__PVT__n993 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10036713401603976409ull);
    vlSelf->__PVT__n994 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16259210386815793935ull);
    vlSelf->__PVT__n995 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18060271909121682922ull);
    vlSelf->__PVT__n996 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17766900225544707638ull);
    vlSelf->__PVT__n997 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4067227497766596771ull);
    vlSelf->__PVT__n998 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5868289020072411720ull);
    vlSelf->__PVT__n999 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10941296853862802622ull);
    vlSelf->__PVT__n1000 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2317852395072232166ull);
    vlSelf->__PVT__n1001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16655848388378417261ull);
    vlSelf->__PVT__n1002 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18250548200336763670ull);
    vlSelf->__PVT__n1003 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761402427057239759ull);
    vlSelf->__PVT__n1004 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11227492941325939888ull);
    vlSelf->__PVT__n1005 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7118744860922673937ull);
    vlSelf->__PVT__n1006 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9592127088324832964ull);
    vlSelf->__PVT__n1007 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17224374891800854142ull);
    vlSelf->__PVT__n1008 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13561046350403369253ull);
    vlSelf->__PVT__n1009 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5319303963323315690ull);
    vlSelf->__PVT__n1010 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18018378155030895495ull);
    vlSelf->__PVT__n1011 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17363151084743911747ull);
    vlSelf->__PVT__n1012 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 845206922148729686ull);
    vlSelf->__PVT__n1013 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2439906734106950703ull);
    vlSelf->__PVT__n1014 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4913288961509273172ull);
    vlSelf->__PVT__n1015 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11288756954133677887ull);
    vlSelf->__PVT__n1016 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16012066063781247788ull);
    vlSelf->__PVT__n1017 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11903317983377950934ull);
    vlSelf->__PVT__n1018 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14376700210780071456ull);
    vlSelf->__PVT__n1019 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15971400022738378711ull);
    vlSelf->__PVT__n1020 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7429220942203367101ull);
    vlSelf->__PVT__n1021 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17634222628832701669ull);
    vlSelf->__PVT__n1022 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7364308674887147629ull);
    vlSelf->__PVT__n1023 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6384169892173153773ull);
    vlSelf->__PVT__n1024 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18038976126795660541ull);
    vlSelf->__PVT__n1025 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7224479856562228034ull);
    vlSelf->__PVT__n1026 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9697862083964446480ull);
    vlSelf->__PVT__n1027 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16073330076588883075ull);
    vlSelf->__PVT__n1029 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17012802818259996439ull);
    vlSelf->__PVT__n1032 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12213794064658675646ull);
    vlSelf->__PVT__n1033 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3972051677578520568ull);
    vlSelf->__PVT__n1034 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12148881797342322953ull);
    vlSelf->__PVT__n1036 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6506224231207824726ull);
    vlSelf->__PVT__n1037 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8979606458610120972ull);
    vlSelf->__PVT__n1038 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8225216611040983008ull);
    vlSelf->__PVT__n1040 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15547492926011187218ull);
    vlSelf->__PVT__n1041 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17142192737969279171ull);
    vlSelf->__PVT__n1042 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 624248575374202670ull);
    vlSelf->__PVT__n1044 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563721317045317731ull);
    vlSelf->__PVT__n1045 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13218527551667880090ull);
    vlSelf->__PVT__n1046 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10680233056949500909ull);
    vlSelf->__PVT__n1048 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12173476501637813035ull);
    vlSelf->__PVT__n1049 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13768176313595904026ull);
    vlSelf->__PVT__n1050 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4525072836745234288ull);
    vlSelf->__PVT__n1052 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1331551271739612656ull);
    vlSelf->__PVT__n1053 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15669547265045694099ull);
    vlSelf->__PVT__n1054 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11560799184642486029ull);
    vlSelf->__PVT__n1056 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6348294439500623622ull);
    vlSelf->__PVT__n1057 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2239546359097222273ull);
    vlSelf->__PVT__n1058 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15464806179404741262ull);
    vlSelf->__PVT__n1060 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2212117399432636438ull);
    vlSelf->__PVT__n1061 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161175444225093159ull);
    vlSelf->__PVT__n1062 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3052427363821727968ull);
    vlSelf->__PVT__n1064 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6116124394194916596ull);
    vlSelf->__PVT__n1065 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2007376313791516446ull);
    vlSelf->__PVT__n1066 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16345372307097727409ull);
    vlSelf->__PVT__n1068 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4875648966577033206ull);
    vlSelf->__PVT__n1069 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 766900886173700432ull);
    vlSelf->__PVT__n1070 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13465975077881460906ull);
    vlSelf->__PVT__n1072 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996690521887890322ull);
    vlSelf->__PVT__n1073 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8591390333846109025ull);
    vlSelf->__PVT__n1074 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7837000486276968717ull);
    vlSelf->__PVT__n1076 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643478921271338564ull);
    vlSelf->__PVT__n1077 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 534730840868007118ull);
    vlSelf->__PVT__n1078 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711560960631847238ull);
    vlSelf->__PVT__n1080 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10348935734440621577ull);
    vlSelf->__PVT__n1081 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 79021780494880153ull);
    vlSelf->__PVT__n1082 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10284023467124238785ull);
    vlSelf->__PVT__n1084 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8540306450111908915ull);
    vlSelf->__PVT__n1085 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4431558369708484525ull);
    vlSelf->__PVT__n1086 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6026258181666717538ull);
    vlSelf->__PVT__n1088 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9424055311196009839ull);
    vlSelf->__PVT__n1089 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11018755123154378150ull);
    vlSelf->__PVT__n1090 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184847728495337641ull);
    vlSelf->__PVT__n1092 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15124320470166445676ull);
    vlSelf->__PVT__n1093 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17053120381280919625ull);
    vlSelf->__PVT__n1094 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8811377994200836785ull);
    vlSelf->__PVT__n1096 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16008069331250606393ull);
    vlSelf->__PVT__n1097 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216131492163788561ull);
    vlSelf->__PVT__n1098 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10810831304121954398ull);
    vlSelf->__PVT__n1100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8604979818186805664ull);
    vlSelf->__PVT__n1101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7624841035472952299ull);
    vlSelf->__PVT__n1102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9219540847431171162ull);
    vlSelf->__PVT__n1104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3451180687753302257ull);
    vlSelf->__PVT__n1105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7954819193539862917ull);
    vlSelf->__PVT__n1106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3846071113136558716ull);
    vlSelf->__PVT__n1108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7914153152497107202ull);
    vlSelf->__PVT__n1109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6934014369783145226ull);
    vlSelf->__PVT__n1110 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16137654966641975233ull);
    vlSelf->__PVT__n1112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16072742699325593021ull);
    vlSelf->__PVT__n1113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6152195562549402491ull);
    vlSelf->__PVT__n1114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7746895374507604523ull);
    vlSelf->__PVT__n1116 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7681983107191385500ull);
    vlSelf->__PVT__n1117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6701844324477385596ull);
    vlSelf->__PVT__n1118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8630644235591865215ull);
    vlSelf->__PVT__n1120 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1526822886987205233ull);
    vlSelf->__PVT__n1121 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12736209582603956133ull);
    vlSelf->__PVT__n1122 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14330909394562270298ull);
    vlSelf->__PVT__n1124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14600097226402267181ull);
    vlSelf->__PVT__n1125 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 876662262340257215ull);
    vlSelf->__PVT__n1126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12531468496962972303ull);
    vlSelf->__PVT__n1128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16599550536323325948ull);
    vlSelf->__PVT__n1129 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5229198851553852364ull);
    vlSelf->__PVT__n1130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14432839448412763918ull);
    vlSelf->__PVT__n1132 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 54177414063687681ull);
    vlSelf->__PVT__n1133 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17520782705059197977ull);
    vlSelf->__PVT__n1134 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 668738443307966278ull);
    vlSelf->__PVT__n1136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 937926275147891534ull);
    vlSelf->__PVT__n1137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17850760863126349871ull);
    vlSelf->__PVT__n1138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1877399016819005909ull);
    vlSelf->__PVT__n1140 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10805821959810156416ull);
    vlSelf->__PVT__n1141 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3664517303553836426ull);
    vlSelf->__PVT__n1142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10039985296178277898ull);
    vlSelf->__PVT__n1144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7525937027733110634ull);
    vlSelf->__PVT__n1145 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9999319255135289461ull);
    vlSelf->__PVT__n1146 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2761961877042612408ull);
    vlSelf->__PVT__n1148 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6051407842560606328ull);
    vlSelf->__PVT__n1149 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1942659762157213418ull);
    vlSelf->__PVT__n1150 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17770343251554227338ull);
    vlSelf->__PVT__n1152 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9552847090747652542ull);
    vlSelf->__PVT__n1153 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2191871830630315385ull);
    vlSelf->__PVT__n1154 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567339823254704090ull);
    vlSelf->__PVT__n1156 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12635421862615260492ull);
    vlSelf->__PVT__n1157 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8526673782211843013ull);
    vlSelf->__PVT__n1158 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13249982891859437442ull);
    vlSelf->__PVT__n1160 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18041414795643273764ull);
    vlSelf->__PVT__n1161 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17386187725356035391ull);
    vlSelf->__PVT__n1162 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 534143463604798960ull);
    vlSelf->__PVT__n1164 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1919035744281768008ull);
    vlSelf->__PVT__n1165 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 938896961567791056ull);
    vlSelf->__PVT__n1166 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13351912945709880535ull);
    vlSelf->__PVT__n1168 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419994985070570408ull);
    vlSelf->__PVT__n1169 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13311246904667075306ull);
    vlSelf->__PVT__n1170 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4434967724975867030ull);
    vlSelf->__PVT__n1172 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4704155556815767962ull);
    vlSelf->__PVT__n1173 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9427464666463377013ull);
    vlSelf->__PVT__n1174 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5318716586060045516ull);
    vlSelf->__PVT__n1176 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9386798625420522930ull);
    vlSelf->__PVT__n1177 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17912995562353755744ull);
    vlSelf->__PVT__n1178 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5841719481268694419ull);
    vlSelf->__PVT__n1180 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5147462075540089121ull);
    vlSelf->__PVT__n1181 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6742161887498328146ull);
    vlSelf->__PVT__n1182 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9215544114900629039ull);
    vlSelf->__PVT__n1184 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17185711919483306307ull);
    vlSelf->__PVT__n1185 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16530484849196088320ull);
    vlSelf->__PVT__n1186 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776095001627049883ull);
    vlSelf->__PVT__n1188 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13262046733181907252ull);
    vlSelf->__PVT__n1189 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1987747770248784318ull);
    vlSelf->__PVT__n1190 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8983374069594889905ull);
    vlSelf->__PVT__n1192 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3674816602616558736ull);
    vlSelf->__PVT__n1193 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11851646722380496656ull);
    vlSelf->__PVT__n1194 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742898641977058751ull);
    vlSelf->__PVT__n1196 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15713066446559720204ull);
    vlSelf->__PVT__n1197 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2868313897941775516ull);
    vlSelf->__PVT__n1198 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4463013709900041643ull);
    vlSelf->__PVT__n1200 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15536760011161477057ull);
    vlSelf->__PVT__n1201 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17131459823119841040ull);
    vlSelf->__PVT__n1202 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13022711742716530321ull);
    vlSelf->__PVT__n1204 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5127017238891012455ull);
    vlSelf->__PVT__n1205 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15332018925520518591ull);
    vlSelf->__PVT__n1206 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16926718737478834792ull);
    vlSelf->__PVT__n1208 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12162743586788308410ull);
    vlSelf->__PVT__n1209 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13757443398746382971ull);
    vlSelf->__PVT__n1210 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4514339921895776513ull);
    vlSelf->__PVT__n1212 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7578036952268892031ull);
    vlSelf->__PVT__n1213 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3469288871865520340ull);
    vlSelf->__PVT__n1214 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17807284865171833426ull);
    vlSelf->__PVT__n1216 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6337561524651061117ull);
    vlSelf->__PVT__n1217 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13859373452596919567ull);
    vlSelf->__PVT__n1218 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15454073264555283960ull);
    vlSelf->__PVT__n1220 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5775413321278392793ull);
    vlSelf->__PVT__n1221 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13407661124754444586ull);
    vlSelf->__PVT__n1222 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9298913044351099493ull);
    vlSelf->__PVT__n1224 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6105391479345428463ull);
    vlSelf->__PVT__n1225 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1996643398942027109ull);
    vlSelf->__PVT__n1226 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16334639392248254690ull);
    vlSelf->__PVT__n1228 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5084586655588600298ull);
    vlSelf->__PVT__n1229 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2880392260026213921ull);
    vlSelf->__PVT__n1230 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11749932757728976989ull);
    vlSelf->__PVT__n1232 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6985957607038450403ull);
    vlSelf->__PVT__n1233 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5897467660313062857ull);
    vlSelf->__PVT__n1234 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7826267571427496149ull);
    vlSelf->__PVT__n1236 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10889964601800723595ull);
    vlSelf->__PVT__n1237 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6781216521397330441ull);
    vlSelf->__PVT__n1238 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8375916333355528648ull);
    vlSelf->__PVT__n1240 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2311116212753331658ull);
    vlSelf->__PVT__n1241 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4784498440155617448ull);
    vlSelf->__PVT__n1242 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 675750359752213782ull);
    vlSelf->__PVT__n1244 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8645918164334822484ull);
    vlSelf->__PVT__n1245 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1504613508078581314ull);
    vlSelf->__PVT__n1246 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3433413419192976831ull);
    vlSelf->__PVT__n1248 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15233114917780626876ull);
    vlSelf->__PVT__n1249 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14577887847493632027ull);
    vlSelf->__PVT__n1250 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3126770073130093342ull);
    vlSelf->__PVT__n1252 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778879093892083060ull);
    vlSelf->__PVT__n1253 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12252261321294371970ull);
    vlSelf->__PVT__n1254 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11163771374569040348ull);
    vlSelf->__PVT__n1256 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430491286790200089ull);
    vlSelf->__PVT__n1257 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 31968035155052563ull);
    vlSelf->__PVT__n1258 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14369964028461271740ull);
    vlSelf->__PVT__n1260 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13679703355263266106ull);
    vlSelf->__PVT__n1261 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12020091275988773644ull);
    vlSelf->__PVT__n1262 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7911343195585345938ull);
    vlSelf->__PVT__n1264 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14888363928774355891ull);
    vlSelf->__PVT__n1265 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10779615848370821426ull);
    vlSelf->__PVT__n1266 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12374315660329220611ull);
    vlSelf->__PVT__n1268 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 93232047962687194ull);
    vlSelf->__PVT__n1269 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4816541157610293391ull);
    vlSelf->__PVT__n1270 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17849715448474138911ull);
    vlSelf->__PVT__n1272 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 342444116435772283ull);
    vlSelf->__PVT__n1273 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10547445803065275587ull);
    vlSelf->__PVT__n1274 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6438697722661878210ull);
    vlSelf->__PVT__n1276 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13635389059711680714ull);
    vlSelf->__PVT__n1277 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15564188970826127821ull);
    vlSelf->__PVT__n1278 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17158888782784458214ull);
    vlSelf->__PVT__n1280 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11970891104503343201ull);
    vlSelf->__PVT__n1281 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862143024100033952ull);
    vlSelf->__PVT__n1282 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16038973143864048416ull);
    vlSelf->__PVT__n1284 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16987634272264510931ull);
    vlSelf->__PVT__n1285 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619806083540763766ull);
    vlSelf->__PVT__n1286 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13093188310943064640ull);
    vlSelf->__PVT__n1288 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7450530744808635515ull);
    vlSelf->__PVT__n1289 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9923912972210915925ull);
    vlSelf->__Vdly__n1289 = 0;
}
