// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_PPU___eval_initial__TOP__nes_core_top__nes_inst__ppu(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___eval_initial__TOP__nes_core_top__nes_inst__ppu\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__custom1 = 0U;
    VL_ASSIGNSEL_QI(64, 6, 0x3aU, vlSelfRef.__PVT__SS_PPU_BACK, 0U);
    VL_ASSIGNSEL_QI(64, 16, 0x30U, vlSelfRef.__PVT__SS_PPU_DECAY_BACK, 0U);
    vlSelfRef.__PVT__obj_patt = 0U;
    vlSelfRef.__PVT__bg_patt = 0U;
    vlSelfRef.__PVT__obj_size = 0U;
    vlSelfRef.__PVT__vbl_enable = 0U;
    vlSelfRef.__PVT__grayscale = 0U;
    vlSelfRef.__PVT__playfield_clip = 0U;
    vlSelfRef.__PVT__object_clip = 0U;
    vlSelfRef.__PVT__enable_playfield = 0U;
    vlSelfRef.__PVT__enable_objects = 0U;
    vlSelfRef.__PVT__emph_reg = 0U;
    vlSelfRef.__PVT__clear = 0U;
    vlSelfRef.sys_type__out__strong__out0 = 0U;
    vlSelfRef.sys_type__out__strong__en0 = 0U;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__0(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_in_vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_in_vblank;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__clear 
        = vlSelfRef.__PVT__clear;
    vlSelfRef.__PVT__vram_r_ppudata_d = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 3U));
    vlSelfRef.__PVT__vram_w_ppudata_d = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 3U));
    vlSelfRef.__PVT__hblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__hblank;
    vlSelfRef.__PVT__vsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__vsync;
    vlSelfRef.__PVT__hsync = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__hsync;
    vlSelfRef.__PVT__Savestate_OAMReadData = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMReadData;
    vlSelfRef.__PVT__rendering_regs = ((IData)(vlSelfRef.__PVT__enable_objects) 
                                       | (IData)(vlSelfRef.__PVT__enable_playfield));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__obj_size 
        = vlSelfRef.__PVT__obj_size1;
    VL_ASSIGNSEL_QQ(64, 48, 0U, vlSelfRef.__PVT__SS_PPU_DECAY_BACK, 
                    VL_CONCAT_QII(48,24,24, vlSelfRef.__PVT__decay_high, vlSelfRef.__PVT__decay_low));
    vlSelfRef.__PVT__vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__vblank;
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__sprite0_hit_bg);
    VL_ASSIGNSEL_QI(64, 9, 0x0000000eU, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(9,1,8, (IData)(vlSelfRef.__PVT__vram_read_delayed), (IData)(vlSelfRef.__PVT__vram_latch)));
    VL_ASSIGNSEL_QI(64, 8, 0x32U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__vram_a_byte);
    VL_ASSIGNSEL_QI(64, 8, 1U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__enable_playfield), (IData)(vlSelfRef.__PVT__object_clip)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__playfield_clip), (IData)(vlSelfRef.__PVT__grayscale))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__vbl_enable), (IData)(vlSelfRef.__PVT__obj_size)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__bg_patt), (IData)(vlSelfRef.__PVT__obj_patt)))));
    VL_ASSIGNSEL_QI(64, 5, 9U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__nmi_occured), 
                                  VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.__PVT__emph_reg), (IData)(vlSelfRef.__PVT__enable_objects))));
    VL_ASSIGNSEL_QI(64, 3, 0x22U, vlSelfRef.__PVT__SS_PPU_BACK, vlSelfRef.__PVT__re_sr);
    VL_ASSIGNSEL_QI(64, 11, 0x00000017U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__clear), 
                                  VL_CONCAT_III(10,8,2, (IData)(vlSelfRef.__PVT__latched_dout), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__refresh_low), (IData)(vlSelfRef.__PVT__refresh_high)))));
    VL_ASSIGNSEL_QI(64, 10, 0x00000025U, vlSelfRef.__PVT__SS_PPU_BACK, 
                    VL_CONCAT_III(10,5,5, (IData)(vlSelfRef.__PVT__write_2007_delayed), (IData)(vlSelfRef.__PVT__read_2007_delayed)));
    vlSelfRef.__PVT__nmi = ((IData)(vlSelfRef.__PVT__nmi_occured) 
                            & (IData)(vlSelfRef.__PVT__vbl_enable));
    vlSelfRef.__PVT__vram_w_ppudata = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 2U));
    vlSelfRef.__PVT__vram_r_ppudata = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 2U));
    vlSelfRef.__PVT__sprite_overflow = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__overflow;
    vlSelfRef.__PVT__obj0_on_line = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__sprite0;
    vlSelfRef.__PVT__dout = vlSelfRef.__PVT__latched_dout;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__obj_patt 
        = vlSelfRef.__PVT__obj_patt1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__obj_size 
        = vlSelfRef.__PVT__obj_size1;
    vlSelfRef.sys_type__out__strong = ((IData)(vlSelfRef.sys_type__out__strong__out0) 
                                       & (IData)(vlSelfRef.sys_type__out__strong__en0));
    vlSelfRef.sys_type__out__strong__en = vlSelfRef.sys_type__out__strong__en0;
    vlSelfRef.__Vcellinp__sprite_gen__counting = (1U 
                                                  & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__sprite_sr), 2U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__obj_patt 
        = vlSelfRef.__PVT__obj_patt1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__obj_size 
        = vlSelfRef.__PVT__obj_size1;
    vlSelfRef.__PVT__oam_bus_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_bus_ex;
    vlSelfRef.__PVT__rendering_enabled = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__re_sr), 1U));
    vlSelfRef.__PVT__is_pre_render_line = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_pre_render;
    vlSelfRef.__PVT__scanline = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__scanline;
    vlSelfRef.__PVT__cycle = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__cycle;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__enable 
        = vlSelfRef.__PVT__debug_dots;
    vlSelfRef.__PVT__auto_mask = (((3U == (IData)(vlSelfRef.__PVT__mask)) 
                                   & (~ (IData)(vlSelfRef.__PVT__object_clip))) 
                                  & (~ (IData)(vlSelfRef.__PVT__playfield_clip)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__extra_sprites 
        = vlSelfRef.__PVT__extra_sprites;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__pclk0 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__ce 
        = vlSelfRef.__PVT__ce;
    vlSelfRef.__Vcellinp__vram0__trigger_2007 = ((IData)(vlSelfRef.__PVT__vram_w_ppudata_d) 
                                                 | (IData)(vlSelfRef.__PVT__vram_r_ppudata_d));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_rendering 
        = vlSelfRef.__PVT__rendering_regs;
    vlSelfRef.__PVT__render_ena_out = vlSelfRef.__PVT__rendering_regs;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__Din 
        = vlSelfRef.__PVT__SS_PPU_DECAY_BACK;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__Din 
        = vlSelfRef.__PVT__SS_PPU_BACK;
    vlSelfRef.sys_type__out = vlSelfRef.sys_type__out__strong;
    vlSelfRef.sys_type__en = vlSelfRef.sys_type__out__strong__en;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__counting 
        = vlSelfRef.__Vcellinp__sprite_gen__counting;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__rendering_enabled 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__rendering 
        = vlSelfRef.__PVT__rendering_enabled;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__is_pre_render 
        = vlSelfRef.__PVT__is_pre_render_line;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__is_pre_render 
        = vlSelfRef.__PVT__is_pre_render_line;
    vlSelfRef.__PVT__clear_signal = vlSelfRef.__PVT__is_pre_render_line;
    vlSelfRef.__PVT__in_rendering_frame = ((0x00f0U 
                                            > (IData)(vlSelfRef.__PVT__scanline)) 
                                           | (IData)(vlSelfRef.__PVT__is_pre_render_line));
    vlSelfRef.__PVT__is_rendering = ((IData)(vlSelfRef.__PVT__rendering_enabled) 
                                     & ((0x00f0U > (IData)(vlSelfRef.__PVT__scanline)) 
                                        | (IData)(vlSelfRef.__PVT__is_pre_render_line)));
    vlSelfRef.__Vcellinp__bg_painter__latch_pattern2 
        = (0U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)));
    vlSelfRef.__Vcellinp__bg_painter__latch_pattern1 
        = (6U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)));
    vlSelfRef.__Vcellinp__bg_painter__latch_attrtable 
        = (4U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)));
    vlSelfRef.__Vcellinp__bg_painter__latch_nametable 
        = ((2U == (7U & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
           & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__cycle 
        = vlSelfRef.__PVT__cycle;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__cycle 
        = vlSelfRef.__PVT__cycle;
    vlSelfRef.__PVT__in_draw_range = (1U & ((~ ((0x010fU 
                                                 <= (IData)(vlSelfRef.__PVT__cycle)) 
                                                & (0x0148U 
                                                   >= (IData)(vlSelfRef.__PVT__cycle)))) 
                                            & (~ (IData)(vlSelfRef.__PVT__vblank))));
    vlSelfRef.__PVT__mask_right = ((0x00f8U < (IData)(vlSelfRef.__PVT__cycle)) 
                                   & (2U == (IData)(vlSelfRef.__PVT__mask)));
    vlSelfRef.__PVT__pal_mask = (1U & (((~ VL_REDOR_I((IData)(vlSelfRef.__PVT__scanline))) 
                                        | (3U > (IData)(vlSelfRef.__PVT__cycle))) 
                                       | (0x00feU < (IData)(vlSelfRef.__PVT__cycle))));
    vlSelfRef.__PVT__out_of_clip = (8U < (IData)(vlSelfRef.__PVT__cycle));
    vlSelfRef.__PVT__read_cycle = (1U & (~ VL_BITSEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U)));
    vlSelfRef.__PVT__in_visible_frame = ((((0x00f0U 
                                            > (IData)(vlSelfRef.__PVT__scanline)) 
                                           | (IData)(vlSelfRef.__PVT__is_pre_render_line)) 
                                          & (0U < (IData)(vlSelfRef.__PVT__cycle))) 
                                         & (0x0101U 
                                            > (IData)(vlSelfRef.__PVT__cycle)));
    vlSelfRef.__PVT__pattern_table_upper = ((3U == 
                                             (3U & 
                                              VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 2))) 
                                            | (0U == 
                                               (3U 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 2))));
    vlSelfRef.__PVT__is_rendering_d = (VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__re_sr), 2U) 
                                       & (((0x00f0U 
                                            > (IData)(vlSelfRef.__PVT__scanline)) 
                                           | ((IData)(vlSelfRef.__PVT__is_pre_render_line) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__cycle)))) 
                                          | ((0x00f1U 
                                              == (IData)(vlSelfRef.__PVT__scanline)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__cycle)))));
    vlSelfRef.__PVT__sprite_load_en = ((0x0101U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                       & (0x0141U > (IData)(vlSelfRef.__PVT__cycle)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__trigger_2007 
        = vlSelfRef.__Vcellinp__vram0__trigger_2007;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__clear_signal 
        = vlSelfRef.__PVT__clear_signal;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__in_range 
        = vlSelfRef.__PVT__in_rendering_frame;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__is_rendering 
        = vlSelfRef.__PVT__is_rendering;
    vlSelfRef.__Vcellinp__address_gen_ex__temp = ((IData)(vlSelfRef.__PVT__is_rendering)
                                                   ? vlSelfRef.__PVT__oam_bus_ex
                                                   : 0xffffffffU);
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_pattern2 
        = vlSelfRef.__Vcellinp__bg_painter__latch_pattern2;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_pattern1 
        = vlSelfRef.__Vcellinp__bg_painter__latch_pattern1;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_attrtable 
        = vlSelfRef.__Vcellinp__bg_painter__latch_attrtable;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__latch_nametable 
        = vlSelfRef.__Vcellinp__bg_painter__latch_nametable;
    vlSelfRef.__PVT__mask_left = ((~ (IData)(vlSelfRef.__PVT__out_of_clip)) 
                                  & ((VL_REDOR_I((IData)(vlSelfRef.__PVT__mask)) 
                                      & (~ VL_REDAND_II(2, (IData)(vlSelfRef.__PVT__mask)))) 
                                     | (IData)(vlSelfRef.__PVT__auto_mask)));
    vlSelfRef.__PVT__show_bg_on_pixel = (((IData)(vlSelfRef.__PVT__playfield_clip) 
                                          | (IData)(vlSelfRef.__PVT__out_of_clip)) 
                                         & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__eb_sr), 1U));
    vlSelfRef.__PVT__show_obj_on_pixel = (((IData)(vlSelfRef.__PVT__object_clip) 
                                           | (IData)(vlSelfRef.__PVT__out_of_clip)) 
                                          & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__eo_sr), 1U));
    vlSelfRef.__PVT__bgp_en = (((IData)(vlSelfRef.__PVT__in_visible_frame) 
                                | ((0x0141U <= (IData)(vlSelfRef.__PVT__cycle)) 
                                   & (0x0150U >= (IData)(vlSelfRef.__PVT__cycle)))) 
                               & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__enable 
        = vlSelfRef.__PVT__in_visible_frame;
    vlSelfRef.__PVT__ALE = (1U & (((IData)(vlSelfRef.__PVT__is_rendering_d) 
                                   & (~ (IData)(vlSelfRef.__PVT__read_cycle))) 
                                  | (VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__read_2007_delayed), 1U) 
                                     | VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__write_2007_delayed), 1U))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__enabled 
        = vlSelfRef.__PVT__sprite_load_en;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__enabled 
        = vlSelfRef.__PVT__sprite_load_en;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__temp 
        = vlSelfRef.__Vcellinp__address_gen_ex__temp;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__enable 
        = vlSelfRef.__PVT__bgp_en;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__1(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spriteset_load_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__load;
    vlSelfRef.__PVT__exiting_vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__exiting_vblank;
    vlSelfRef.__PVT__at_last_cycle_group = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__at_last_cycle_group;
    vlSelfRef.__PVT__evenframe = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__evenframe;
    vlSelfRef.__PVT__oam_bus = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_bus;
    vlSelfRef.__PVT__masked_sprites = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__masked_sprites;
    vlSelfRef.__PVT__SS_PPU = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__Dout;
    vlSelfRef.__PVT__SS_PPU_DECAY = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__Dout;
    vlSelfRef.__PVT__fine_x_scroll = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__fine_x_scroll;
    vlSelfRef.__PVT__vram = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__vram;
    vlSelfRef.__PVT__bg_name_table = vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__name_table;
    vlSelfRef.__PVT__sprite_vram_addr = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__vram_addr;
    vlSelfRef.__PVT__spriteset_load = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__load;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_ex 
        = vlSelfRef.__PVT__spriteset_load_ex;
    vlSelfRef.__PVT__special_dot = (((~ (IData)(vlSelfRef.__PVT__evenframe)) 
                                     & (0U == (IData)(vlSelfRef.__PVT__cycle))) 
                                    & (0U == (IData)(vlSelfRef.__PVT__scanline)));
    vlSelfRef.__Vcellinp__address_gen__temp = ((IData)(vlSelfRef.__PVT__is_rendering)
                                                ? (IData)(vlSelfRef.__PVT__oam_bus)
                                                : 0xffU);
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__masked_sprites 
        = vlSelfRef.__PVT__masked_sprites;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__fine_x_scroll 
        = vlSelfRef.__PVT__fine_x_scroll;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__vram_v 
        = vlSelfRef.__PVT__vram;
    vlSelfRef.__Vcellinp__palette_ram__raw_addr = (0x0000001fU 
                                                   & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 5));
    vlSelfRef.__PVT__is_pal_address = (0x3fU == (0x0000003fU 
                                                 & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 8U, 6)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load 
        = vlSelfRef.__PVT__spriteset_load;
    vlSelfRef.__PVT__vram_r = ((IData)(vlSelfRef.__PVT__vram_r_ppudata) 
                               | (((IData)(vlSelfRef.__PVT__is_rendering_d) 
                                   & (IData)(vlSelfRef.__PVT__read_cycle)) 
                                  & ((0U != (IData)(vlSelfRef.__PVT__cycle)) 
                                     | (IData)(vlSelfRef.__PVT__special_dot))));
    vlSelfRef.__PVT__nametable_read = (((((1U == (7U 
                                                  & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                          | (2U == 
                                             (7U & 
                                              VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))) 
                                         | ((IData)(vlSelfRef.__PVT__sprite_load_en) 
                                            & ((3U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))))) 
                                        | (0x0150U 
                                           < (IData)(vlSelfRef.__PVT__cycle))) 
                                       | (IData)(vlSelfRef.__PVT__special_dot));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__temp 
        = vlSelfRef.__Vcellinp__address_gen__temp;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__raw_addr 
        = vlSelfRef.__Vcellinp__palette_ram__raw_addr;
    vlSelfRef.__PVT__pal_writes_valid = ((IData)(vlSelfRef.__PVT__is_pal_address) 
                                         & (~ (IData)(vlSelfRef.__PVT__is_rendering)));
    vlSelfRef.__PVT__vram_w = (((~ (IData)(vlSelfRef.__PVT__vram_r)) 
                                & (IData)(vlSelfRef.__PVT__vram_w_ppudata)) 
                               & (~ (IData)(vlSelfRef.__PVT__is_pal_address)));
    vlSelfRef.__PVT__attribute_read = (((3U == (7U 
                                                & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3))) 
                                        | (4U == (7U 
                                                  & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__cycle), 0U, 3)))) 
                                       & (~ (IData)(vlSelfRef.__PVT__nametable_read)));
    vlSelfRef.__Vcellinp__palette_ram__write = ((IData)(vlSelfRef.__PVT__vram_w_ppudata) 
                                                & (IData)(vlSelfRef.__PVT__pal_writes_valid));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__write 
        = vlSelfRef.__Vcellinp__palette_ram__write;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__2(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__2\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__clk 
        = vlSelfRef.__PVT__clk;
    vlSelfRef.__Vcellinp__spriteeval__PAL = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__sys_type), 0U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__sys_type 
        = vlSelfRef.__PVT__sys_type;
    vlSelfRef.__PVT__mask_pal = (VL_REDOR_I((IData)(vlSelfRef.__PVT__sys_type)) 
                                 & (IData)(vlSelfRef.__PVT__pal_mask));
    vlSelfRef.__PVT__scanline_nopr = ((IData)(vlSelfRef.__PVT__is_pre_render_line)
                                       ? (VL_REDOR_I((IData)(vlSelfRef.__PVT__sys_type))
                                           ? 0x0137U
                                           : 0x0105U)
                                       : (IData)(vlSelfRef.__PVT__scanline));
    vlSelfRef.__PVT__is_obj0_pixel = vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__is_sprite0;
    vlSelfRef.__PVT__obj_pixel_noblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__bits;
    vlSelfRef.__PVT__use_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__use_ex;
    vlSelfRef.__PVT__bg_pixel_noblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__pixel;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__PAL 
        = vlSelfRef.__Vcellinp__spriteeval__PAL;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__scanline 
        = vlSelfRef.__PVT__scanline_nopr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__scanline 
        = vlSelfRef.__PVT__scanline_nopr;
    vlSelfRef.__Vcellinp__address_gen_ex__scanline 
        = (0x000000ffU & VL_SEL_IIII(9, (IData)(vlSelfRef.__PVT__scanline_nopr), 0U, 8));
    vlSelfRef.__PVT__obj_pixel = VL_CONCAT_III(5,3,2, 
                                               (7U 
                                                & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel_noblank), 2U, 3)), 
                                               (3U 
                                                & ((IData)(vlSelfRef.__PVT__show_obj_on_pixel)
                                                    ? 
                                                   VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel_noblank), 0U, 2)
                                                    : 0U)));
    if (vlSelfRef.__PVT__is_rendering_d) {
        vlSelfRef.__PVT__vram_r_ex = ((IData)(vlSelfRef.__PVT__sprite_load_en) 
                                      & ((IData)(vlSelfRef.__PVT__use_ex) 
                                         & (IData)(vlSelfRef.__PVT__extra_sprites)));
        vlSelfRef.__PVT__vram_a = ((IData)(vlSelfRef.__PVT__nametable_read)
                                    ? VL_CONCAT_III(14,2,12, 2U, 
                                                    (0x00000fffU 
                                                     & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 12)))
                                    : ((IData)(vlSelfRef.__PVT__attribute_read)
                                        ? VL_CONCAT_III(14,4,10, 
                                                        VL_CONCAT_III(4,2,2, 2U, 
                                                                      (3U 
                                                                       & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0x0aU, 2))), 
                                                        VL_CONCAT_III(10,4,6, 0x0fU, 
                                                                      VL_CONCAT_III(6,3,3, 
                                                                                (7U 
                                                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 7U, 3)), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 2U, 3)))))
                                        : ((IData)(vlSelfRef.__PVT__sprite_load_en)
                                            ? VL_EXTEND_II(14,13, (IData)(vlSelfRef.__PVT__sprite_vram_addr))
                                            : VL_CONCAT_III(14,2,12, 
                                                            VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__bg_patt1)), 
                                                            VL_CONCAT_III(12,8,4, (IData)(vlSelfRef.__PVT__bg_name_table), 
                                                                          VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__pattern_table_upper), 
                                                                                (7U 
                                                                                & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0x0cU, 3))))))));
    } else {
        vlSelfRef.__PVT__vram_a = (0x00003fffU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 14));
        vlSelfRef.__PVT__vram_r_ex = 0U;
    }
    vlSelfRef.__PVT__bg_pixel = VL_CONCAT_III(4,2,2, 
                                              (3U & 
                                               VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg_pixel_noblank), 2U, 2)), 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT__show_bg_on_pixel)
                                                 ? 
                                                VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg_pixel_noblank), 0U, 2)
                                                 : 0U)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__scanline 
        = vlSelfRef.__Vcellinp__address_gen_ex__scanline;
    vlSelfRef.__Vcellinp__pixel_muxer__obj_prio = (1U 
                                                   & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel), 4U));
    vlSelfRef.__Vcellinp__pixel_muxer__obj = (0x0000000fU 
                                              & VL_SEL_IIII(5, (IData)(vlSelfRef.__PVT__obj_pixel), 0U, 4));
    vlSelfRef.__Vcellinp__palette_ram__c_corrupt = 
        ((IData)(vlSelfRef.__PVT__attribute_read) ? 
         (VL_REDAND_II(2, (3U & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0x0cU, 2))) 
          & VL_REDAND_II(4, (0x0000000fU & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 8U, 4))))
          : VL_REDAND_II(6, (0x0000003fU & VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 8U, 6))));
    vlSelfRef.__PVT__vram_latch_value = (0x000000ffU 
                                         & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__bg 
        = vlSelfRef.__PVT__bg_pixel;
    vlSelfRef.__PVT__spr0_hit = ((((((((IData)(vlSelfRef.__PVT__is_rendering) 
                                       & (IData)(vlSelfRef.__PVT__in_visible_frame)) 
                                      & (0x0100U != (IData)(vlSelfRef.__PVT__cycle))) 
                                     & (~ (IData)(vlSelfRef.__PVT__is_pre_render_line))) 
                                    & (IData)(vlSelfRef.__PVT__obj0_on_line)) 
                                   & (IData)(vlSelfRef.__PVT__is_obj0_pixel)) 
                                  & (IData)(vlSelfRef.__PVT__show_obj_on_pixel)) 
                                 & (0U != (3U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__bg_pixel), 0U, 2))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__obj_prio 
        = vlSelfRef.__Vcellinp__pixel_muxer__obj_prio;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__obj 
        = vlSelfRef.__Vcellinp__pixel_muxer__obj;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__c_corrupt 
        = vlSelfRef.__Vcellinp__palette_ram__c_corrupt;
    vlSelfRef.__PVT__vram_addr = VL_CONCAT_III(14,6,8, 
                                               (0x0000003fU 
                                                & VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 8U, 6)), 
                                               ((IData)(vlSelfRef.__PVT__ALE)
                                                 ? (IData)(vlSelfRef.__PVT__vram_latch_value)
                                                 : (IData)(vlSelfRef.__PVT__vram_a_byte)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__custom2 
        = vlSelfRef.__PVT__spr0_hit;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__3(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__3\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vbe_sl = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__is_vbe_sl;
    vlSelfRef.__PVT__entering_vblank = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__entering_vblank;
    vlSelfRef.__PVT__end_of_line = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__end_of_line;
    vlSelfRef.__PVT__short_frame = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__short_frame;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_rst 
        = vlSelfRef.__PVT__SaveStateBus_rst;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_wren 
        = vlSelfRef.__PVT__SaveStateBus_wren;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Din 
        = vlSelfRef.__PVT__SaveStateBus_Din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Adr 
        = vlSelfRef.__PVT__SaveStateBus_Adr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMAddr 
        = vlSelfRef.__PVT__Savestate_OAMAddr;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMWriteData 
        = vlSelfRef.__PVT__Savestate_OAMWriteData;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMRdEn 
        = vlSelfRef.__PVT__Savestate_OAMRdEn;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__Savestate_OAMWrEn 
        = vlSelfRef.__PVT__Savestate_OAMWrEn;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__clear 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__reset 
        = vlSelfRef.__PVT__reset;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__ain 
        = vlSelfRef.__PVT__ain;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__read 
        = vlSelfRef.__PVT__read;
    vlSelfRef.__PVT__clear_nmi = ((IData)(vlSelfRef.__PVT__clear_signal) 
                                  | ((IData)(vlSelfRef.__PVT__read) 
                                     & (2U == (IData)(vlSelfRef.__PVT__ain))));
    vlSelfRef.__Vcellinp__debug_d__r2007 = ((IData)(vlSelfRef.__PVT__read) 
                                            & (7U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__r2004 = ((IData)(vlSelfRef.__PVT__read) 
                                            & (4U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__r2002 = ((IData)(vlSelfRef.__PVT__read) 
                                            & (2U == (IData)(vlSelfRef.__PVT__ain)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__write 
        = vlSelfRef.__PVT__write;
    vlSelfRef.__Vcellinp__spriteeval__oam_addr_write 
        = ((IData)(vlSelfRef.__PVT__write) & (3U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__spriteeval__oam_data_write 
        = ((IData)(vlSelfRef.__PVT__write) & (4U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2007 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (7U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2006 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (6U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2005 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (5U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2004 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (4U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2003 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (3U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2001 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (1U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__Vcellinp__debug_d__w2000 = ((IData)(vlSelfRef.__PVT__write) 
                                            & (0U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__PVT__write_2001 = ((IData)(vlSelfRef.__PVT__write) 
                                   & (1U == (IData)(vlSelfRef.__PVT__ain)));
    vlSelfRef.__PVT__spriteset_load_in_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__load_in;
    vlSelfRef.__PVT__sprite_vram_addr_ex = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__vram_addr;
    vlSelfRef.__PVT__pixel_is_obj = vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__is_obj;
    vlSelfRef.__PVT__pixel = vlSymsp->TOP__nes_core_top__nes_inst__ppu__pixel_muxer.__PVT__out;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__is_vbe 
        = vlSelfRef.__PVT__is_vbe_sl;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__end_of_line 
        = vlSelfRef.__PVT__end_of_line;
    vlSelfRef.__PVT__set_nmi = ((IData)(vlSelfRef.__PVT__entering_vblank) 
                                & (~ (IData)(vlSelfRef.__PVT__clear_nmi)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__r2007 
        = vlSelfRef.__Vcellinp__debug_d__r2007;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__r2004 
        = vlSelfRef.__Vcellinp__debug_d__r2004;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__r2002 
        = vlSelfRef.__Vcellinp__debug_d__r2002;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_addr_write 
        = vlSelfRef.__Vcellinp__spriteeval__oam_addr_write;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_data_write 
        = vlSelfRef.__Vcellinp__spriteeval__oam_data_write;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2007 
        = vlSelfRef.__Vcellinp__debug_d__w2007;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2006 
        = vlSelfRef.__Vcellinp__debug_d__w2006;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2005 
        = vlSelfRef.__Vcellinp__debug_d__w2005;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2004 
        = vlSelfRef.__Vcellinp__debug_d__w2004;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2003 
        = vlSelfRef.__Vcellinp__debug_d__w2003;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2001 
        = vlSelfRef.__Vcellinp__debug_d__w2001;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__w2000 
        = vlSelfRef.__Vcellinp__debug_d__w2000;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_in_ex 
        = vlSelfRef.__PVT__spriteset_load_in_ex;
    vlSelfRef.__PVT__vram_a_ex = VL_EXTEND_II(14,13, (IData)(vlSelfRef.__PVT__sprite_vram_addr_ex));
    vlSelfRef.__PVT__pram_addr = (0x0000001fU & (((IData)(vlSelfRef.__PVT__is_rendering) 
                                                  & (IData)(vlSelfRef.__PVT__in_visible_frame))
                                                  ? (IData)(vlSelfRef.__PVT__pixel)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__pal_writes_valid)
                                                   ? 
                                                  VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__vram), 0U, 5)
                                                   : 0U)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__addr 
        = vlSelfRef.__PVT__pram_addr;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__4(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__4\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__color2 = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU.__PVT__BUS_Dout;
    vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__iREG_SAVESTATE_PPU_DECAY.__PVT__BUS_Dout;
    vlSelfRef.__PVT__color1 = ((((IData)(vlSelfRef.__PVT__mask_right) 
                                 | (IData)(vlSelfRef.__PVT__mask_left)) 
                                | (IData)(vlSelfRef.__PVT__mask_pal))
                                ? 0x0eU : (IData)(vlSelfRef.__PVT__color2));
    vlSelfRef.__PVT__SaveStateBus_wired_or[0U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU____pinNumber6;
    vlSelfRef.__PVT__SaveStateBus_wired_or[1U] = vlSelfRef.__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6;
    vlSelfRef.__PVT__ppu_dbus = ((IData)(vlSelfRef.__PVT__write)
                                  ? (IData)(vlSelfRef.__PVT__din)
                                  : ((IData)(vlSelfRef.__PVT__read)
                                      ? ((2U == (IData)(vlSelfRef.__PVT__ain))
                                          ? VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__nmi_occured), 
                                                          VL_CONCAT_III(7,1,6, 
                                                                        (((IData)(vlSelfRef.__PVT__spr0_hit) 
                                                                          | (IData)(vlSelfRef.__PVT__sprite0_hit_bg)) 
                                                                         & (~ (IData)(vlSelfRef.__PVT__clear_signal))), 
                                                                        VL_CONCAT_III(6,1,5, 
                                                                                ((IData)(vlSelfRef.__PVT__sprite_overflow) 
                                                                                & (~ (IData)(vlSelfRef.__PVT__clear_signal))), 
                                                                                (0x0000001fU 
                                                                                & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__latched_dout), 0U, 5)))))
                                          : ((4U == (IData)(vlSelfRef.__PVT__ain))
                                              ? (IData)(vlSelfRef.__PVT__oam_bus)
                                              : ((7U 
                                                  == (IData)(vlSelfRef.__PVT__ain))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__is_pal_address)
                                                   ? 
                                                  VL_CONCAT_III(8,2,6, 
                                                                (3U 
                                                                 & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__latched_dout), 6U, 2)), 
                                                                ((IData)(vlSelfRef.__PVT__grayscale)
                                                                  ? 
                                                                 VL_CONCAT_III(6,2,4, 
                                                                               (3U 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__color1), 4U, 2)), 0U)
                                                                  : (IData)(vlSelfRef.__PVT__color1)))
                                                   : (IData)(vlSelfRef.__PVT__vram_latch))
                                                  : (IData)(vlSelfRef.__PVT__latched_dout))))
                                      : (IData)(vlSelfRef.__PVT__latched_dout)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__din 
        = vlSelfRef.__PVT__ppu_dbus;
    vlSelfRef.__Vcellinp__palette_ram__din = (0x0000003fU 
                                              & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 0U, 6));
    vlSelfRef.__PVT__emphasis = VL_CONCAT_III(3,1,2, 
                                              (1U & 
                                               ((IData)(vlSelfRef.__PVT__write_2001)
                                                 ? 
                                                VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 7U)
                                                 : 
                                                VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__emph_reg), 2U))), 
                                              VL_CONCAT_III(2,1,1, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__emph_reg), 1U)), 
                                                            (1U 
                                                             & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__emph_reg), 0U))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__oam_din 
        = vlSelfRef.__PVT__ppu_dbus;
    vlSelfRef.__PVT__grayscale_bit = (1U & ((IData)(vlSelfRef.__PVT__write_2001)
                                             ? VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__ppu_dbus), 0U)
                                             : (IData)(vlSelfRef.__PVT__grayscale)));
    vlSelfRef.__PVT__vram_dout = (0x000000ffU & ((IData)(vlSelfRef.__PVT__ALE)
                                                  ? 
                                                 VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8)
                                                  : (IData)(vlSelfRef.__PVT__ppu_dbus)));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__din 
        = vlSelfRef.__Vcellinp__palette_ram__din;
    vlSelfRef.__PVT__not_grayscale = (((IData)(vlSelfRef.__PVT__in_draw_range) 
                                       | ((IData)(vlSelfRef.__PVT__vram_r_ppudata) 
                                          & (IData)(vlSelfRef.__PVT__is_pal_address))) 
                                      & (~ (IData)(vlSelfRef.__PVT__grayscale_bit)));
    vlSelfRef.__PVT__color0 = ((IData)(vlSelfRef.__PVT__not_grayscale)
                                ? vlSelfRef.__PVT__color_pipe[0U]
                                : VL_CONCAT_III(6,2,4, 
                                                (3U 
                                                 & VL_SEL_IIII(6, vlSelfRef.__PVT__color_pipe[0U], 4U, 2)), 0U));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__color 
        = vlSelfRef.__PVT__color0;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__5(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__5\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__clock__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__clock.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__vram0__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__vram0.__PVT__SaveStateBus_Dout;
    vlSelfRef.__Vcellout__spriteeval__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__in_range = vlSymsp->TOP__nes_core_top__nes_inst__ppu__spriteeval.__PVT__in_range;
    vlSelfRef.__Vcellout__palette_ram__SaveStateBus_Dout 
        = vlSymsp->TOP__nes_core_top__nes_inst__ppu__palette_ram.__PVT__SaveStateBus_Dout;
    vlSelfRef.__PVT__color = vlSymsp->TOP__nes_core_top__nes_inst__ppu__debug_d.__PVT__new_color;
    vlSelfRef.__PVT__SaveStateBus_wired_or[2U] = vlSelfRef.__Vcellout__clock__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[3U] = vlSelfRef.__Vcellout__vram0__SaveStateBus_Dout;
    vlSelfRef.__PVT__SaveStateBus_wired_or[4U] = vlSelfRef.__Vcellout__spriteeval__SaveStateBus_Dout;
    vlSelfRef.__Vcellinp__address_gen__in_range = ((IData)(vlSelfRef.__PVT__in_range) 
                                                   & (IData)(vlSelfRef.__PVT__rendering_enabled));
    vlSelfRef.__PVT__SaveStateBus_wired_or[5U] = vlSelfRef.__Vcellout__palette_ram__SaveStateBus_Dout;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__in_range 
        = vlSelfRef.__Vcellinp__address_gen__in_range;
    vlSelfRef.__PVT__SaveStateBus_Dout = (((((vlSelfRef.__PVT__SaveStateBus_wired_or[0U] 
                                              | vlSelfRef.__PVT__SaveStateBus_wired_or[1U]) 
                                             | vlSelfRef.__PVT__SaveStateBus_wired_or[2U]) 
                                            | vlSelfRef.__PVT__SaveStateBus_wired_or[3U]) 
                                           | vlSelfRef.__PVT__SaveStateBus_wired_or[4U]) 
                                          | vlSelfRef.__PVT__SaveStateBus_wired_or[5U]);
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__6(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__6\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vram_din = (0x000000ffU & ((IData)(vlSelfRef.__PVT__vram_r)
                                                 ? (IData)(vlSelfRef.__PVT__vram_dbus_in)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__vram_w)
                                                  ? (IData)(vlSelfRef.__PVT__vram_dout)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__ALE)
                                                   ? 
                                                  VL_SEL_IIII(14, (IData)(vlSelfRef.__PVT__vram_a), 0U, 8)
                                                   : (IData)(vlSelfRef.__PVT__vram_dbus_in)))));
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__bg_painter.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen_ex.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__vram_data 
        = vlSelfRef.__PVT__vram_din;
}

VL_ATTR_COLD void Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__7(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___stl_sequent__TOP__nes_core_top__nes_inst__ppu__7\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__spriteset_load_in = vlSymsp->TOP__nes_core_top__nes_inst__ppu__address_gen.__PVT__load_in;
    vlSymsp->TOP__nes_core_top__nes_inst__ppu__sprite_gen.__PVT__load_in 
        = vlSelfRef.__PVT__spriteset_load_in;
}

VL_ATTR_COLD void Vnes_core_top_PPU___ctor_var_reset(Vnes_core_top_PPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnes_core_top_PPU___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14708086533280315920ull);
    vlSelf->__PVT__RWn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11024511545325452701ull);
    vlSelf->__PVT__rst_behavior = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1973769574514610532ull);
    vlSelf->__PVT__ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382539506755952630ull);
    vlSelf->__PVT__debug_dots = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12816960009943112552ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cold_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11761328688594269280ull);
    vlSelf->__PVT__sys_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12678443134343359385ull);
    vlSelf->__PVT__color = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 465961873555653160ull);
    vlSelf->__PVT__din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15192908731043726583ull);
    vlSelf->__PVT__dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11474705599699299244ull);
    vlSelf->__PVT__ain = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11345839893430635791ull);
    vlSelf->__PVT__read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916498648420597437ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4495189327971372216ull);
    vlSelf->__PVT__vram_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17135760946652050986ull);
    vlSelf->__PVT__vram_r_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10596616033857643297ull);
    vlSelf->__PVT__vram_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6175993794793491517ull);
    vlSelf->__PVT__vram_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9731300453014250549ull);
    vlSelf->__PVT__vram_a_ex = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2795515966318344570ull);
    vlSelf->__PVT__vram_dbus_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16704011420796725938ull);
    vlSelf->__PVT__vram_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14748334173660833065ull);
    vlSelf->__PVT__scanline = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 654532841143486145ull);
    vlSelf->__PVT__cycle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10189460714400946250ull);
    vlSelf->__PVT__emphasis = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15600364000377428379ull);
    vlSelf->__PVT__hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->__PVT__vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->__PVT__hblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030576639516052719ull);
    vlSelf->__PVT__vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047747227580282234ull);
    vlSelf->__PVT__short_frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10176122636361542992ull);
    vlSelf->__PVT__extra_sprites = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15565230423906717393ull);
    vlSelf->__PVT__mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13980441125567301684ull);
    vlSelf->__PVT__render_ena_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10869202720048872125ull);
    vlSelf->__PVT__evenframe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3861517047138621945ull);
    vlSelf->__PVT__SaveStateBus_Din = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6089058019589029848ull);
    vlSelf->__PVT__SaveStateBus_Adr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15351274560229975283ull);
    vlSelf->__PVT__SaveStateBus_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931916232523543831ull);
    vlSelf->__PVT__SaveStateBus_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16274411962209136077ull);
    vlSelf->__PVT__SaveStateBus_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900238504277054012ull);
    vlSelf->__PVT__SaveStateBus_Dout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6232786536372477320ull);
    vlSelf->__PVT__Savestate_OAMAddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12711775546231412907ull);
    vlSelf->__PVT__Savestate_OAMRdEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5665818448393404105ull);
    vlSelf->__PVT__Savestate_OAMWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12091760391566813420ull);
    vlSelf->__PVT__Savestate_OAMWriteData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12305695533774351145ull);
    vlSelf->__PVT__Savestate_OAMReadData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15269148196214267110ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__SaveStateBus_wired_or[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10529134642807903460ull);
    }
    vlSelf->__PVT__SS_PPU = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16257324045770809129ull);
    vlSelf->__PVT__SS_PPU_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14743082458805483599ull);
    vlSelf->__PVT__SS_PPU_DECAY = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13289497632317605531ull);
    vlSelf->__PVT__SS_PPU_DECAY_BACK = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16240592854812904708ull);
    vlSelf->__Vcellout__iREG_SAVESTATE_PPU____pinNumber6 = 0;
    vlSelf->__Vcellout__iREG_SAVESTATE_PPU_DECAY____pinNumber6 = 0;
    vlSelf->__PVT__obj_patt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15384320589541405647ull);
    vlSelf->__PVT__obj_patt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5595827489837953406ull);
    vlSelf->__PVT__bg_patt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7567910429971005069ull);
    vlSelf->__PVT__bg_patt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 116330156799691861ull);
    vlSelf->__PVT__obj_size = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1296829394038349534ull);
    vlSelf->__PVT__obj_size1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9642155144566439494ull);
    vlSelf->__PVT__vbl_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7926364240653552685ull);
    vlSelf->__PVT__clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    vlSelf->__PVT__grayscale = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1678178245049037955ull);
    vlSelf->__PVT__playfield_clip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11206260792472197202ull);
    vlSelf->__PVT__object_clip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2294431518913546627ull);
    vlSelf->__PVT__in_range = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3211589220843833547ull);
    vlSelf->__PVT__nmi_occured = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8304782025118780026ull);
    vlSelf->__PVT__vram_latch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16775341496879891056ull);
    vlSelf->__PVT__is_in_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15274333430635939803ull);
    vlSelf->__PVT__end_of_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11983790436732281692ull);
    vlSelf->__PVT__at_last_cycle_group = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6681506479206343491ull);
    vlSelf->__PVT__exiting_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5179505358527676533ull);
    vlSelf->__PVT__entering_vblank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18237415885931232063ull);
    vlSelf->__PVT__is_pre_render_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13141249736606376557ull);
    vlSelf->__PVT__enable_playfield = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 537570538638005562ull);
    vlSelf->__PVT__enable_objects = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 61875228095098952ull);
    vlSelf->__PVT__re_sr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2818078385756092495ull);
    vlSelf->__PVT__eo_sr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10482869935374753270ull);
    vlSelf->__PVT__eb_sr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18113067519541795617ull);
    vlSelf->__PVT__rendering_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2139148875927654860ull);
    vlSelf->__PVT__rendering_regs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13424246313740849200ull);
    vlSelf->__PVT__is_rendering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 384756990955494270ull);
    vlSelf->__PVT__is_rendering_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099920712171448604ull);
    vlSelf->__PVT__is_vbe_sl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15813599354792407993ull);
    vlSelf->__PVT__clear_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11346451819102565857ull);
    vlSelf->__PVT__vram_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14919300808283826322ull);
    vlSelf->__PVT__vram_a_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12755476123631414602ull);
    vlSelf->__Vcellout__clock__SaveStateBus_Dout = 0;
    vlSelf->__PVT__vram = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9703584266822826543ull);
    vlSelf->__PVT__fine_x_scroll = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 223026050135352908ull);
    vlSelf->__Vcellout__vram0__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__vram0__trigger_2007 = 0;
    vlSelf->__PVT__is_pal_address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729185515043259092ull);
    vlSelf->__PVT__bg_name_table = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10275149461794337961ull);
    vlSelf->__PVT__bg_pixel_noblank = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10553449911278448249ull);
    vlSelf->__PVT__in_visible_frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6121005514939809157ull);
    vlSelf->__PVT__out_of_clip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16917935122924459847ull);
    vlSelf->__PVT__bgp_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12749729079233042322ull);
    vlSelf->__Vcellinp__bg_painter__latch_pattern2 = 0;
    vlSelf->__Vcellinp__bg_painter__latch_pattern1 = 0;
    vlSelf->__Vcellinp__bg_painter__latch_attrtable = 0;
    vlSelf->__Vcellinp__bg_painter__latch_nametable = 0;
    vlSelf->__PVT__show_bg_on_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11810223011268547038ull);
    vlSelf->__PVT__bg_pixel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15707774373586830141ull);
    vlSelf->__PVT__oam_bus_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 27410904743937763ull);
    vlSelf->__PVT__masked_sprites = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116067895197533560ull);
    vlSelf->__PVT__scanline_nopr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8171422445767534508ull);
    vlSelf->__Vcellout__spriteeval__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__spriteeval__PAL = 0;
    vlSelf->__Vcellinp__spriteeval__oam_data_write = 0;
    vlSelf->__Vcellinp__spriteeval__oam_addr_write = 0;
    vlSelf->__PVT__oam_bus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 210884539504366625ull);
    vlSelf->__PVT__sprite_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12674841311641647868ull);
    vlSelf->__PVT__obj0_on_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2139026073594334749ull);
    vlSelf->__PVT__obj_pixel_noblank = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2561725723769415079ull);
    vlSelf->__PVT__sprite_vram_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11227808715654193321ull);
    vlSelf->__PVT__is_obj0_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16168917494663391570ull);
    vlSelf->__PVT__spriteset_load = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13169193733357494592ull);
    vlSelf->__PVT__spriteset_load_in = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 3606537218169178959ull);
    vlSelf->__PVT__emph_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15851526099811775542ull);
    vlSelf->__PVT__sprite_load_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566050589956015377ull);
    vlSelf->__Vcellinp__address_gen__temp = 0;
    vlSelf->__Vcellinp__address_gen__in_range = 0;
    vlSelf->__PVT__sprite_vram_addr_ex = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10005277398836251803ull);
    vlSelf->__PVT__spriteset_load_ex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15512674521092666501ull);
    vlSelf->__PVT__spriteset_load_in_ex = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 16745312682887523471ull);
    vlSelf->__PVT__use_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9413601841707177318ull);
    vlSelf->__Vcellinp__address_gen_ex__temp = 0;
    vlSelf->__Vcellinp__address_gen_ex__scanline = 0;
    vlSelf->__PVT__sprite_sr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 797023018576037000ull);
    vlSelf->__Vcellinp__sprite_gen__counting = 0;
    vlSelf->__PVT__show_obj_on_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3617272755511340921ull);
    vlSelf->__PVT__obj_pixel = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11451418972528571705ull);
    vlSelf->__PVT__sprite0_hit_bg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11206608487149161630ull);
    vlSelf->__PVT__spr0_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11059921930916084ull);
    vlSelf->__PVT__pixel = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10711155561333107431ull);
    vlSelf->__PVT__pixel_is_obj = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17665611430321972585ull);
    vlSelf->__Vcellinp__pixel_muxer__obj_prio = 0;
    vlSelf->__Vcellinp__pixel_muxer__obj = 0;
    vlSelf->__PVT__special_dot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426991174852148467ull);
    vlSelf->__PVT__nametable_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12230591527071306329ull);
    vlSelf->__PVT__attribute_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6834239242683793555ull);
    vlSelf->__PVT__pattern_table_upper = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2072721265683930062ull);
    vlSelf->__PVT__read_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7201947278129976747ull);
    vlSelf->__PVT__vram_r_ppudata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9397060967724035178ull);
    vlSelf->__PVT__vram_r_ppudata_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2460480629454841355ull);
    vlSelf->__PVT__vram_w_ppudata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8717664225487467546ull);
    vlSelf->__PVT__vram_w_ppudata_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4707932572252106824ull);
    vlSelf->__PVT__ALE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10298088967434188418ull);
    vlSelf->__PVT__vram_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4907679981556899917ull);
    vlSelf->__PVT__vram_read_delayed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 595874594039910233ull);
    vlSelf->__PVT__vram_latch_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4327550847762640264ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__color_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14078227977626430939ull);
    }
    vlSelf->__PVT__color2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18298416330185236853ull);
    vlSelf->__PVT__pal_writes_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6465860917524846734ull);
    vlSelf->__PVT__pram_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14884322753877400360ull);
    vlSelf->__PVT__in_rendering_frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17272948695955349824ull);
    vlSelf->__Vcellout__palette_ram__SaveStateBus_Dout = 0;
    vlSelf->__Vcellinp__palette_ram__raw_addr = 0;
    vlSelf->__Vcellinp__palette_ram__c_corrupt = 0;
    vlSelf->__Vcellinp__palette_ram__write = 0;
    vlSelf->__Vcellinp__palette_ram__din = 0;
    vlSelf->__PVT__write_2007_delayed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3913301029524770733ull);
    vlSelf->__PVT__read_2007_delayed = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8746083472018499791ull);
    vlSelf->__PVT__write_2001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10831029484990102673ull);
    vlSelf->__PVT__pal_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13354565558821327256ull);
    vlSelf->__PVT__auto_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11153772807906161097ull);
    vlSelf->__PVT__mask_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4926664722771803807ull);
    vlSelf->__PVT__mask_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2331580919868949329ull);
    vlSelf->__PVT__mask_pal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4711970030228238114ull);
    vlSelf->__PVT__in_draw_range = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14982690894191977810ull);
    vlSelf->__PVT__grayscale_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12044690201204659862ull);
    vlSelf->__PVT__not_grayscale = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10509825384242642947ull);
    vlSelf->__Vcellinp__debug_d__w2007 = 0;
    vlSelf->__Vcellinp__debug_d__r2007 = 0;
    vlSelf->__Vcellinp__debug_d__w2006 = 0;
    vlSelf->__Vcellinp__debug_d__w2005 = 0;
    vlSelf->__Vcellinp__debug_d__w2004 = 0;
    vlSelf->__Vcellinp__debug_d__r2004 = 0;
    vlSelf->__Vcellinp__debug_d__w2003 = 0;
    vlSelf->__Vcellinp__debug_d__r2002 = 0;
    vlSelf->__Vcellinp__debug_d__w2001 = 0;
    vlSelf->__Vcellinp__debug_d__w2000 = 0;
    vlSelf->__PVT__color0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 566624604334435971ull);
    vlSelf->__PVT__color1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14221768236228557550ull);
    vlSelf->__PVT__clear_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8251575221158935872ull);
    vlSelf->__PVT__set_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7307650591085907724ull);
    vlSelf->__PVT__ppu_dbus = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11129420575927094633ull);
    vlSelf->__PVT__latched_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1311606740861012745ull);
    vlSelf->__PVT__decay_high = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4607701311037827038ull);
    vlSelf->__PVT__decay_low = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3229469829241133799ull);
    vlSelf->__PVT__refresh_high = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17781259100130457669ull);
    vlSelf->__PVT__refresh_low = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12380618878239716105ull);
    vlSelf->sys_type__out = 0;
    vlSelf->sys_type__en = 0;
    vlSelf->sys_type__out__strong = 0;
    vlSelf->sys_type__out__strong__en = 0;
    vlSelf->sys_type__out__strong__out0 = 0U;
    ;
    vlSelf->sys_type__out__strong__en0 = 0U;
    ;
    vlSelf->__Vdly__sprite0_hit_bg = 0;
    vlSelf->__Vdly__sprite_sr = 0;
    vlSelf->__Vdly__vram_latch = 0;
    vlSelf->__Vdly__vram_read_delayed = 0;
    vlSelf->__Vdly__vram_a_byte = 0;
    vlSelf->__Vdly__obj_patt = 0;
    vlSelf->__Vdly__bg_patt = 0;
    vlSelf->__Vdly__obj_size = 0;
    vlSelf->__Vdly__vbl_enable = 0;
    vlSelf->__Vdly__grayscale = 0;
    vlSelf->__Vdly__playfield_clip = 0;
    vlSelf->__Vdly__object_clip = 0;
    vlSelf->__Vdly__enable_playfield = 0;
    vlSelf->__Vdly__enable_objects = 0;
    vlSelf->__Vdly__emph_reg = 0;
    vlSelf->__Vdly__nmi_occured = 0;
    vlSelf->__Vdly__re_sr = 0;
    vlSelf->__Vdly__obj_patt1 = 0;
    vlSelf->__Vdly__bg_patt1 = 0;
    vlSelf->__Vdly__obj_size1 = 0;
    vlSelf->__Vdly__eo_sr = 0;
    vlSelf->__Vdly__eb_sr = 0;
    vlSelf->__Vdly__clear = 0;
    vlSelf->__Vdly__decay_high = 0;
    vlSelf->__Vdly__refresh_high = 0;
    vlSelf->__Vdly__decay_low = 0;
    vlSelf->__Vdly__refresh_low = 0;
    vlSelf->__Vdly__read_2007_delayed = 0;
    vlSelf->__Vdly__write_2007_delayed = 0;
    vlSelf->__Vdly__latched_dout = 0;
    vlSelf->__VdlyVal__color_pipe__v0 = 0;
    vlSelf->__VdlySet__color_pipe__v0 = 0;
    vlSelf->__VdlyVal__color_pipe__v1 = 0;
    vlSelf->__VdlyVal__color_pipe__v2 = 0;
    vlSelf->__VdlyVal__color_pipe__v3 = 0;
}
