// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_CODES___eval_static__TOP__nes_core_top__nes_inst__codes(Vnes_core_top_CODES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_CODES___eval_static__TOP__nes_core_top__nes_inst__codes\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__index = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__x = 0U;
    vlSelfRef.__PVT__unnamedblk2__DOT__x = 0U;
}

VL_ATTR_COLD void Vnes_core_top_CODES___stl_sequent__TOP__nes_core_top__nes_inst__codes__0(Vnes_core_top_CODES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_CODES___stl_sequent__TOP__nes_core_top__nes_inst__codes__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available = VL_REDOR_I((IData)(vlSelfRef.__PVT__index));
    vlSelfRef.__PVT__code_addr = (0x0000ffffU & VL_SEL_IWII(129, vlSelfRef.__PVT__code, 0x40U, 16));
    vlSelfRef.__PVT__code_compare = (0x000000ffU & 
                                     VL_SEL_IWII(129, vlSelfRef.__PVT__code, 0x20U, 8));
    vlSelfRef.__PVT__code_data = (0x000000ffU & VL_SEL_IWII(129, vlSelfRef.__PVT__code, 0U, 8));
    vlSelfRef.__PVT__code_comp_f = (1U & VL_BITSEL_IWII(129, vlSelfRef.__PVT__code, 0x60U));
    vlSelfRef.__PVT__code_trimmed = VL_CONCAT_QII(33,1,32, (IData)(vlSelfRef.__PVT__code_comp_f), 
                                                  VL_CONCAT_III(32,16,16, (IData)(vlSelfRef.__PVT__code_addr), 
                                                                VL_CONCAT_III(16,8,8, (IData)(vlSelfRef.__PVT__code_compare), (IData)(vlSelfRef.__PVT__code_data))));
}

VL_ATTR_COLD void Vnes_core_top_CODES___stl_sequent__TOP__nes_core_top__nes_inst__codes__1(Vnes_core_top_CODES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_CODES___stl_sequent__TOP__nes_core_top__nes_inst__codes__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__genie_ovr = 0U;
    vlSelfRef.__PVT__genie_data = 0U;
    if (vlSelfRef.__PVT__enable) {
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[0U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[0U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[0U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[0U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[0U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 1U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[1U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[1U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[1U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[1U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[1U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 2U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[2U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[2U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[2U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[2U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[2U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 3U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[3U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[3U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[3U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[3U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[3U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 4U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[4U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[4U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[4U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[4U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[4U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 5U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[5U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[5U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[5U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[5U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[5U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 6U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[6U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[6U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[6U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[6U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[6U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 7U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[7U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[7U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[7U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[7U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[7U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 8U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[8U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[8U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[8U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[8U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[8U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 9U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[9U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[9U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[9U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[9U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[9U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000000aU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[10U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[10U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[10U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[10U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[10U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000000bU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[11U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[11U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[11U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[11U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[11U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000000cU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[12U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[12U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[12U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[12U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[12U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000000dU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[13U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[13U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[13U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[13U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[13U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000000eU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[14U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[14U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[14U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[14U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[14U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000000fU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[15U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[15U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[15U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[15U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[15U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000010U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[16U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[16U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[16U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[16U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[16U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000011U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[17U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[17U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[17U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[17U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[17U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000012U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[18U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[18U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[18U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[18U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[18U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000013U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[19U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[19U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[19U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[19U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[19U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000014U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[20U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[20U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[20U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[20U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[20U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000015U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[21U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[21U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[21U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[21U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[21U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000016U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[22U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[22U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[22U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[22U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[22U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000017U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[23U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[23U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[23U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[23U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[23U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000018U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[24U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[24U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[24U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[24U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[24U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000019U;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[25U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[25U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[25U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[25U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[25U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000001aU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[26U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[26U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[26U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[26U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[26U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000001bU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[27U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[27U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[27U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[27U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[27U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000001cU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[28U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[28U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[28U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[28U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[28U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000001dU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[29U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[29U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[29U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[29U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[29U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000001eU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[30U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[30U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[30U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[30U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[30U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x0000001fU;
        if ((VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[31U], 0x21U) 
             & ((0x0000ffffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[31U], 0x10U, 16)) 
                == (IData)(vlSelfRef.__PVT__addr_in)))) {
            if ((1U & ((~ VL_BITSEL_IQII(34, vlSelfRef.__PVT__codes[31U], 0x20U)) 
                       | ((0x000000ffU & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[31U], 8U, 8)) 
                          == (IData)(vlSelfRef.__PVT__data_in))))) {
                vlSelfRef.__PVT__genie_ovr = 1U;
                vlSelfRef.__PVT__genie_data = (0x000000ffU 
                                               & VL_SEL_IQII(34, vlSelfRef.__PVT__codes[31U], 0U, 8));
            }
        }
        vlSelfRef.__PVT__unnamedblk2__DOT__x = 0x00000020U;
    }
}

VL_ATTR_COLD void Vnes_core_top_CODES___ctor_var_reset(Vnes_core_top_CODES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_CODES___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->__PVT__available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13945751377602149821ull);
    vlSelf->__PVT__addr_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18362058689266171664ull);
    vlSelf->__PVT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10574596302020702150ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__code, __VscopeHash, 16108666064662480658ull);
    vlSelf->__PVT__genie_ovr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398155173552563403ull);
    vlSelf->__PVT__genie_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14658343563678416978ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__codes[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16217132299010642189ull);
    }
    vlSelf->__PVT__code_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5969646688441482589ull);
    vlSelf->__PVT__code_compare = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 977128550781488317ull);
    vlSelf->__PVT__code_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17371324392673905487ull);
    vlSelf->__PVT__code_comp_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17589201277239373315ull);
    vlSelf->__PVT__code_trimmed = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17419489899306116192ull);
    vlSelf->__PVT__code_change = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4353693516341057399ull);
    vlSelf->__Vdly__index = 0;
    vlSelf->__Vdly__code_change = 0;
    vlSelf->__VdlySet__codes__v0 = 0;
    vlSelf->__VdlySet__codes__v1 = 0;
    vlSelf->__VdlySet__codes__v2 = 0;
    vlSelf->__VdlySet__codes__v3 = 0;
    vlSelf->__VdlySet__codes__v4 = 0;
    vlSelf->__VdlySet__codes__v5 = 0;
    vlSelf->__VdlySet__codes__v6 = 0;
    vlSelf->__VdlySet__codes__v7 = 0;
    vlSelf->__VdlySet__codes__v8 = 0;
    vlSelf->__VdlySet__codes__v9 = 0;
    vlSelf->__VdlySet__codes__v10 = 0;
    vlSelf->__VdlySet__codes__v11 = 0;
    vlSelf->__VdlySet__codes__v12 = 0;
    vlSelf->__VdlySet__codes__v13 = 0;
    vlSelf->__VdlySet__codes__v14 = 0;
    vlSelf->__VdlySet__codes__v15 = 0;
    vlSelf->__VdlySet__codes__v16 = 0;
    vlSelf->__VdlySet__codes__v17 = 0;
    vlSelf->__VdlySet__codes__v18 = 0;
    vlSelf->__VdlySet__codes__v19 = 0;
    vlSelf->__VdlySet__codes__v20 = 0;
    vlSelf->__VdlySet__codes__v21 = 0;
    vlSelf->__VdlySet__codes__v22 = 0;
    vlSelf->__VdlySet__codes__v23 = 0;
    vlSelf->__VdlySet__codes__v24 = 0;
    vlSelf->__VdlySet__codes__v25 = 0;
    vlSelf->__VdlySet__codes__v26 = 0;
    vlSelf->__VdlySet__codes__v27 = 0;
    vlSelf->__VdlySet__codes__v28 = 0;
    vlSelf->__VdlySet__codes__v29 = 0;
    vlSelf->__VdlySet__codes__v30 = 0;
    vlSelf->__VdlySet__codes__v31 = 0;
    vlSelf->__VdlyVal__codes__v32 = 0;
    vlSelf->__VdlyDim0__codes__v32 = 0;
    vlSelf->__VdlySet__codes__v32 = 0;
}
