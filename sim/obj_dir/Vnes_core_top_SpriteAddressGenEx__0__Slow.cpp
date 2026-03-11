// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__load_tile = (1U == (IData)(vlSelfRef.__PVT__count));
    vlSelfRef.__PVT__load_attr = ((2U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_x = ((3U == (IData)(vlSelfRef.__PVT__count)) 
                               & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_pix1 = ((5U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__load_pix2 = ((7U == (IData)(vlSelfRef.__PVT__count)) 
                                  & (IData)(vlSelfRef.__PVT__enabled));
    vlSelfRef.__PVT__temp_x = (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 0x18U, 8));
    vlSelfRef.__PVT__tile = (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 8U, 8));
    vlSelfRef.__PVT__attr = (0x000000ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 0x10U, 8));
    vlSelfRef.__PVT__load = VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__load_pix1), (IData)(vlSelfRef.__PVT__load_pix2)), 
                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__load_x), (IData)(vlSelfRef.__PVT__load_attr)));
    vlSelfRef.__PVT__flip_x = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__attr), 6U));
    vlSelfRef.__PVT__flip_y = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__attr), 7U));
    vlSelfRef.__PVT__dummy_sprite = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__attr), 4U));
}

VL_ATTR_COLD void Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__1(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__use_ex = (1U & (((~ (IData)(vlSelfRef.__PVT__dummy_sprite)) 
                                      & (~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__count), 2U))) 
                                     & (~ (IData)(vlSelfRef.__PVT__masked_sprites))));
}

VL_ATTR_COLD void Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__2(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__temp_y = (0x000000ffU & ((IData)(vlSelfRef.__PVT__scanline) 
                                              - VL_SEL_IIII(32, vlSelfRef.__PVT__temp, 0U, 8)));
    if ((0U == (IData)(vlSelfRef.__PVT__count))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__temp_y;
    } else if ((1U == (IData)(vlSelfRef.__PVT__count))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__tile;
    } else if ((2U == (IData)(vlSelfRef.__PVT__count))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__attr;
    } else if ((((((3U == (IData)(vlSelfRef.__PVT__count)) 
                   || (4U == (IData)(vlSelfRef.__PVT__count))) 
                  || (5U == (IData)(vlSelfRef.__PVT__count))) 
                 || (6U == (IData)(vlSelfRef.__PVT__count))) 
                || (7U == (IData)(vlSelfRef.__PVT__count)))) {
        vlSelfRef.__PVT__load_temp = vlSelfRef.__PVT__temp_x;
    }
    vlSelfRef.__PVT__y_f = (0x0000000fU & (VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__temp_y), 0U, 4) 
                                           ^ VL_REPLICATE_IOI(1, (IData)(vlSelfRef.__PVT__flip_y), 4U)));
    vlSelfRef.__PVT__load_in = VL_CONCAT_III(27,8,19, (IData)(vlSelfRef.__PVT__pix1_latch), 
                                             VL_CONCAT_III(19,8,11, (IData)(vlSelfRef.__PVT__pix2_latch), 
                                                           VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__load_temp), 
                                                                         VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__load_temp), 0U, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__load_temp), 5U))))));
    vlSelfRef.__PVT__vram_addr = VL_CONCAT_III(13,1,12, 
                                               (1U 
                                                & ((IData)(vlSelfRef.__PVT__obj_size)
                                                    ? 
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__tile), 0U)
                                                    : (IData)(vlSelfRef.__PVT__obj_patt))), 
                                               VL_CONCAT_III(12,7,5, 
                                                             (0x0000007fU 
                                                              & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tile), 1U, 7)), 
                                                             VL_CONCAT_III(5,1,4, 
                                                                           (1U 
                                                                            & ((IData)(vlSelfRef.__PVT__obj_size)
                                                                                ? 
                                                                               VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__y_f), 3U)
                                                                                : 
                                                                               VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__tile), 0U))), 
                                                                           VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__count), 1U)), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__y_f), 0U, 3))))));
}

VL_ATTR_COLD void Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__3(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___stl_sequent__TOP__nes_core_top__nes_inst__ppu__address_gen_ex__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_f = ((1U & (((IData)(vlSelfRef.__PVT__dummy_sprite) 
                                       | (IData)(vlSelfRef.__PVT__masked_sprites)) 
                                      | (~ (IData)(vlSelfRef.__PVT__rendering))))
                                ? 0U : ((IData)(vlSelfRef.__PVT__flip_x)
                                         ? (IData)(vlSelfRef.__PVT__vram_data)
                                         : VL_CONCAT_III(8,4,4, 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 0U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 1U))), 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 2U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 3U)))), 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 4U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 5U))), 
                                                                       VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 6U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__vram_data), 7U)))))));
}

VL_ATTR_COLD void Vnes_core_top_SpriteAddressGenEx___ctor_var_reset(Vnes_core_top_SpriteAddressGenEx* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_SpriteAddressGenEx___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832690048632048236ull);
    vlSelf->__PVT__enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17480723119085835679ull);
    vlSelf->__PVT__obj_size = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1296829394038349534ull);
    vlSelf->__PVT__obj_patt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15384320589541405647ull);
    vlSelf->__PVT__scanline = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 654532841143486145ull);
    vlSelf->__PVT__temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7233838040978344170ull);
    vlSelf->__PVT__vram_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2088857008593821939ull);
    vlSelf->__PVT__vram_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9731300453014250549ull);
    vlSelf->__PVT__load = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1148748992964133306ull);
    vlSelf->__PVT__load_in = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 11318590255051626789ull);
    vlSelf->__PVT__use_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9413601841707177318ull);
    vlSelf->__PVT__masked_sprites = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116067895197533560ull);
    vlSelf->__PVT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10730142128712957955ull);
    vlSelf->__PVT__load_tile = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4099390192143877133ull);
    vlSelf->__PVT__load_attr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15382768984951280124ull);
    vlSelf->__PVT__load_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2847108424881617065ull);
    vlSelf->__PVT__load_pix1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15214675270412771948ull);
    vlSelf->__PVT__load_pix2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14972813661026109807ull);
    vlSelf->__PVT__pix1_latch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 343625085964633393ull);
    vlSelf->__PVT__pix2_latch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9358914868317727566ull);
    vlSelf->__PVT__temp_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4932767861542704422ull);
    vlSelf->__PVT__tile = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16753436394598441641ull);
    vlSelf->__PVT__attr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9504019429175240142ull);
    vlSelf->__PVT__temp_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16984487769805114644ull);
    vlSelf->__PVT__flip_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4954963457309720602ull);
    vlSelf->__PVT__flip_y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12970022881329998275ull);
    vlSelf->__PVT__dummy_sprite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14280300491716987654ull);
    vlSelf->__PVT__vram_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1360490998824427529ull);
    vlSelf->__PVT__y_f = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17147211672561898707ull);
    vlSelf->__PVT__load_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14958877080233442904ull);
    vlSelf->__Vdly__count = 0;
    vlSelf->__Vdly__pix1_latch = 0;
    vlSelf->__Vdly__pix2_latch = 0;
}
