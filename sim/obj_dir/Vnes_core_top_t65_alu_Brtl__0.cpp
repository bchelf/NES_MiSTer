// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

void Vnes_core_top_t65_alu_Brtl___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu__0(Vnes_core_top_t65_alu_Brtl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_t65_alu_Brtl___nba_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__n4455 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 0U, 4));
    vlSelfRef.__PVT__n4483 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 6U));
    vlSelfRef.__PVT__n4516 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 7U));
    vlSelfRef.__PVT__n4353 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 7U));
    vlSelfRef.__PVT__n4257 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 7U));
    vlSelfRef.__PVT__n4212 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 4U, 4));
    vlSelfRef.__PVT__n4465 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 4U, 4));
    vlSelfRef.__PVT__n4446 = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 1U, 7));
    vlSelfRef.__PVT__n4332 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 4U, 4));
    vlSelfRef.__PVT__n4372 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 4U, 4));
    vlSelfRef.__PVT__n4247 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 4U, 4));
    vlSelfRef.__PVT__n4322 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 0U, 4));
    vlSelfRef.__PVT__n4203 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busb), 0U, 4));
    vlSelfRef.__PVT__n4545 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 2U, 4));
    vlSelfRef.__PVT__n4497 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 6U));
    vlSelfRef.__PVT__n4500 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 7U));
    vlSelfRef.__PVT__n4542 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 1U));
    vlSelfRef.__PVT__n4495 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 0U));
    vlSelfRef.__PVT__n4452 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 3U));
    vlSelfRef.__PVT__n4427 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 0U));
    vlSelfRef.__PVT__n4438 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 0U));
    vlSelfRef.__PVT__n4264 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 3U));
    vlSelfRef.__PVT__n4360 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 3U));
    vlSelfRef.__PVT__n4444 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 0U));
    vlSelfRef.__PVT__n4230 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 3U));
    vlSelfRef.__PVT__n4316 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 0U));
    vlSelfRef.__PVT__n4200 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__p_in), 0U));
    vlSelfRef.__PVT__n4454 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U, 4));
    vlSelfRef.__PVT__n4423 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 7U));
    vlSelfRef.__PVT__n4429 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 7U));
    vlSelfRef.__PVT__n4435 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U));
    vlSelfRef.__PVT__n4441 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U));
    vlSelfRef.__PVT__n4517 = ((IData)(vlSelfRef.__PVT__busa) 
                              & (IData)(vlSelfRef.__PVT__busb));
    vlSelfRef.__PVT__n4254 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 7U));
    vlSelfRef.__PVT__n4350 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 7U));
    vlSelfRef.__PVT__n4352 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 7U));
    vlSelfRef.__PVT__n4256 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 7U));
    vlSelfRef.__PVT__n4208 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 4U, 4));
    vlSelfRef.__PVT__n4464 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 4U, 4));
    vlSelfRef.__PVT__n4487 = (0x000000ffU & ((IData)(vlSelfRef.__PVT__busa) 
                                             - (IData)(1U)));
    vlSelfRef.__PVT__n4491 = (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__busa)));
    vlSelfRef.__PVT__n4403 = ((IData)(vlSelfRef.__PVT__busa) 
                              | (IData)(vlSelfRef.__PVT__busb));
    vlSelfRef.__PVT__n4406 = ((IData)(vlSelfRef.__PVT__busa) 
                              & (IData)(vlSelfRef.__PVT__busb));
    vlSelfRef.__PVT__n4409 = ((IData)(vlSelfRef.__PVT__busa) 
                              ^ (IData)(vlSelfRef.__PVT__busb));
    vlSelfRef.__PVT__n4420 = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U, 7));
    vlSelfRef.__PVT__n4432 = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 1U, 7));
    vlSelfRef.__PVT__n4426 = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U, 7));
    vlSelfRef.__PVT__n4439 = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 1U, 7));
    vlSelfRef.__PVT__n4445 = (0x0000007fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 1U, 7));
    vlSelfRef.__PVT__n4328 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 4U, 4));
    vlSelfRef.__PVT__n4368 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 4U, 4));
    vlSelfRef.__PVT__n4244 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 4U, 4));
    vlSelfRef.__PVT__n4319 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U, 4));
    vlSelfRef.__PVT__n4199 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__busa), 0U, 4));
    vlSelfRef.__PVT__n4547 = (0x0fU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4505 = (3U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4515 = (4U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4524 = (0x0cU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4533 = (0x10U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4512 = (0x11U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4507 = (6U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4509 = (7U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4405 = (0U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4408 = (1U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4411 = (2U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4413 = (3U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4415 = (6U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4417 = (0x11U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4419 = (7U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4425 = (8U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4431 = (9U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4437 = (0x0aU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4443 = (0x0bU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4482 = (0x0fU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4485 = (0x0cU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4489 = (0x0dU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4493 = (0x0eU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4310 = (0x0eU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4307 = (0x0bU == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4304 = (9U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4301 = (7U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4298 = (5U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4293 = (1U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4295 = (3U == (IData)(vlSelfRef.__PVT__op));
    vlSelfRef.__PVT__n4214 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4212), 1U);
    vlSelfRef.__PVT__n4249 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4247), 1U);
    vlSelfRef.__PVT__n4324 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4322), 1U);
    vlSelfRef.__PVT__n4205 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4203), 1U);
    vlSelfRef.__PVT__n4453 = ((IData)(vlSelfRef.__PVT__bcd_en) 
                              & (IData)(vlSelfRef.__PVT__n4452));
    vlSelfRef.__PVT__n4361 = ((IData)(vlSelfRef.__PVT__bcd_en) 
                              & (IData)(vlSelfRef.__PVT__n4360));
    vlSelfRef.__PVT__n4456 = ((IData)(vlSelfRef.__PVT__n4454) 
                              & (IData)(vlSelfRef.__PVT__n4455));
    vlSelfRef.__PVT__n4519 = (0U == (IData)(vlSelfRef.__PVT__n4517));
    vlSelfRef.__PVT__n4354 = ((IData)(vlSelfRef.__PVT__n4352) 
                              ^ (IData)(vlSelfRef.__PVT__n4353));
    vlSelfRef.__PVT__n4258 = ((IData)(vlSelfRef.__PVT__n4256) 
                              ^ (IData)(vlSelfRef.__PVT__n4257));
    vlSelfRef.__PVT__n4466 = ((IData)(vlSelfRef.__PVT__n4464) 
                              & (IData)(vlSelfRef.__PVT__n4465));
    vlSelfRef.__PVT__n4422 = VL_CONCAT_III(8,7,1, (IData)(vlSelfRef.__PVT__n4420), 0U);
    vlSelfRef.__PVT__n4434 = VL_EXTEND_II(8,7, (IData)(vlSelfRef.__PVT__n4432));
    vlSelfRef.__PVT__n4428 = VL_CONCAT_III(8,7,1, (IData)(vlSelfRef.__PVT__n4426), (IData)(vlSelfRef.__PVT__n4427));
    vlSelfRef.__PVT__n4440 = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__n4438), (IData)(vlSelfRef.__PVT__n4439));
    vlSelfRef.__PVT__n4447 = ((IData)(vlSelfRef.__PVT__n4445) 
                              & (IData)(vlSelfRef.__PVT__n4446));
    vlSelfRef.__PVT__n4330 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4328), 0U);
    vlSelfRef.__PVT__n4370 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4368), 0U);
    vlSelfRef.__PVT__n4201 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4199), (IData)(vlSelfRef.__PVT__n4200));
    vlSelfRef.__PVT__n4510 = ((IData)(vlSelfRef.__PVT__n4507) 
                              | (IData)(vlSelfRef.__PVT__n4509));
    vlSelfRef.__PVT__n4494 = VL_CONCAT_III(15,8,7, 
                                           VL_CONCAT_III(8,4,4, 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4493), (IData)(vlSelfRef.__PVT__n4489)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4485), (IData)(vlSelfRef.__PVT__n4482))), 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4443), (IData)(vlSelfRef.__PVT__n4437)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4431), (IData)(vlSelfRef.__PVT__n4425)))), 
                                           VL_CONCAT_III(7,4,3, 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4419), (IData)(vlSelfRef.__PVT__n4417)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4415), (IData)(vlSelfRef.__PVT__n4413))), 
                                                         VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n4411), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4408), (IData)(vlSelfRef.__PVT__n4405)))));
    vlSelfRef.__PVT__n4296 = ((IData)(vlSelfRef.__PVT__n4293) 
                              | (IData)(vlSelfRef.__PVT__n4295));
    vlSelfRef.__PVT__n4215 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4214));
    vlSelfRef.__PVT__n4250 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4249));
    vlSelfRef.__PVT__n4325 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__n4324));
    vlSelfRef.__PVT__n4206 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4205));
    vlSelfRef.__PVT__n4458 = (4U < (IData)(vlSelfRef.__PVT__n4456));
    vlSelfRef.__PVT__n4522 = vlSelfRef.__PVT__n4519;
    vlSelfRef.__PVT__n4259 = (1U & (~ (IData)(vlSelfRef.__PVT__n4258)));
    vlSelfRef.__PVT__n4468 = (4U < (IData)(vlSelfRef.__PVT__n4466));
    vlSelfRef.__PVT__n4448 = VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__n4444), (IData)(vlSelfRef.__PVT__n4447));
    vlSelfRef.__PVT__n4331 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__n4330));
    vlSelfRef.__PVT__n4371 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__n4370));
    vlSelfRef.__PVT__n4202 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4201));
    vlSelfRef.__PVT__n4513 = ((IData)(vlSelfRef.__PVT__n4510) 
                              | (IData)(vlSelfRef.__PVT__n4512));
    vlSelfRef.__PVT__n4299 = ((IData)(vlSelfRef.__PVT__n4296) 
                              | (IData)(vlSelfRef.__PVT__n4298));
    vlSelfRef.__PVT__n4326 = VL_EXTEND_II(7,6, (IData)(vlSelfRef.__PVT__n4325));
    vlSelfRef.__PVT__n4474 = vlSelfRef.__PVT__n4468;
    vlSelfRef.__PVT__n4462 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 0U, 4));
    vlSelfRef.__PVT__n4475 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 4U, 4));
    vlSelfRef.__PVT__n4459 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 0U, 4));
    vlSelfRef.__PVT__n4469 = (0x0000000fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 4U, 4));
    vlSelfRef.__PVT__n4449 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 5U));
    vlSelfRef.__PVT__n4450 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 6U));
    vlSelfRef.__PVT__n4477 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n4448), 6U));
    vlSelfRef.__PVT__n4207 = (0x0000007fU & ((IData)(vlSelfRef.__PVT__n4202) 
                                             + (IData)(vlSelfRef.__PVT__n4206)));
    vlSelfRef.__PVT__n4540 = VL_CONCAT_III(5,3,2, VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__n4533), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4524), (IData)(vlSelfRef.__PVT__n4515))), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4513), (IData)(vlSelfRef.__PVT__n4505)));
    vlSelfRef.__PVT__n4302 = ((IData)(vlSelfRef.__PVT__n4299) 
                              | (IData)(vlSelfRef.__PVT__n4301));
    vlSelfRef.__PVT__n4461 = (0x0000000fU & ((IData)(6U) 
                                             + (IData)(vlSelfRef.__PVT__n4459)));
    vlSelfRef.__PVT__n4471 = (0x0000000fU & ((IData)(6U) 
                                             + (IData)(vlSelfRef.__PVT__n4469)));
    vlSelfRef.__PVT__n4451 = ((IData)(vlSelfRef.__PVT__n4449) 
                              ^ (IData)(vlSelfRef.__PVT__n4450));
    vlSelfRef.__PVT__n4478 = ((IData)(vlSelfRef.__PVT__n4453)
                               ? (IData)(vlSelfRef.__PVT__n4474)
                               : (IData)(vlSelfRef.__PVT__n4477));
    vlSelfRef.__PVT__n4217 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4207), 1U, 4));
    vlSelfRef.__PVT__n4209 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4207), 5U));
    vlSelfRef.__PVT__n4238 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4207), 0U));
    vlSelfRef.__PVT__n4236 = (0x0000003fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4207), 1U, 6));
    vlSelfRef.__PVT__n4233 = (0x0000003fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4207), 1U, 6));
    vlSelfRef.__PVT__n4227 = (0x0000001fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4207), 1U, 5));
    vlSelfRef.__PVT__n4305 = ((IData)(vlSelfRef.__PVT__n4302) 
                              | (IData)(vlSelfRef.__PVT__n4304));
    vlSelfRef.__PVT__n4463 = ((IData)(vlSelfRef.__PVT__n4458)
                               ? (IData)(vlSelfRef.__PVT__n4461)
                               : (IData)(vlSelfRef.__PVT__n4462));
    vlSelfRef.__PVT__n4476 = ((IData)(vlSelfRef.__PVT__n4468)
                               ? (IData)(vlSelfRef.__PVT__n4471)
                               : (IData)(vlSelfRef.__PVT__n4475));
    vlSelfRef.__PVT__n4219 = (0U == (IData)(vlSelfRef.__PVT__n4217));
    vlSelfRef.__PVT__n4210 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4208), (IData)(vlSelfRef.__PVT__n4209));
    vlSelfRef.__PVT__n4235 = (0x0000003fU & ((IData)(6U) 
                                             + (IData)(vlSelfRef.__PVT__n4233)));
    vlSelfRef.__PVT__n4229 = (9U < (IData)(vlSelfRef.__PVT__n4227));
    vlSelfRef.__PVT__n4308 = ((IData)(vlSelfRef.__PVT__n4305) 
                              | (IData)(vlSelfRef.__PVT__n4307));
    vlSelfRef.__PVT__n4479 = VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__n4476), (IData)(vlSelfRef.__PVT__n4463));
    vlSelfRef.__PVT__n4211 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4210));
    vlSelfRef.__PVT__n4231 = ((IData)(vlSelfRef.__PVT__n4230) 
                              & (IData)(vlSelfRef.__PVT__n4229));
    vlSelfRef.__PVT__n4311 = ((IData)(vlSelfRef.__PVT__n4308) 
                              | (IData)(vlSelfRef.__PVT__n4310));
    vlSelfRef.__PVT__n4480 = ((IData)(vlSelfRef.__PVT__n4453)
                               ? (IData)(vlSelfRef.__PVT__n4479)
                               : (IData)(vlSelfRef.__PVT__n4448));
    vlSelfRef.__PVT__n4216 = (0x0000007fU & ((IData)(vlSelfRef.__PVT__n4211) 
                                             + (IData)(vlSelfRef.__PVT__n4215)));
    vlSelfRef.__PVT__n4232 = ((IData)(vlSelfRef.__PVT__bcd_en) 
                              & (IData)(vlSelfRef.__PVT__n4231));
    vlSelfRef.__PVT__n4314 = vlSelfRef.__PVT__n4311;
    vlSelfRef.__PVT__n4503 = (((((((((0x4000U == (IData)(vlSelfRef.__PVT__n4494)) 
                                     | (0x2000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                    | (0x1000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                   | (0x0800U == (IData)(vlSelfRef.__PVT__n4494))) 
                                  | (0x0400U == (IData)(vlSelfRef.__PVT__n4494))) 
                                 | (0x0200U == (IData)(vlSelfRef.__PVT__n4494))) 
                                | (0x0100U == (IData)(vlSelfRef.__PVT__n4494))) 
                               | (0x0080U == (IData)(vlSelfRef.__PVT__n4494)))
                               ? ((0x4000U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__busa)
                                   : ((0x2000U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__busa)
                                       : ((0x1000U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__busa)
                                           : ((0x0800U 
                                               == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__n4480)
                                               : (IData)(vlSelfRef.__PVT__busa)))))
                               : (IData)(vlSelfRef.__PVT__busa));
    vlSelfRef.__PVT__n4220 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4216), 1U, 4));
    vlSelfRef.__PVT__n4237 = ((IData)(vlSelfRef.__PVT__n4232)
                               ? (IData)(vlSelfRef.__PVT__n4235)
                               : (IData)(vlSelfRef.__PVT__n4236));
    vlSelfRef.__PVT__n4317 = (1U & (~ (IData)(vlSelfRef.__PVT__n4314)));
    vlSelfRef.__PVT__n4222 = (0U == (IData)(vlSelfRef.__PVT__n4220));
    vlSelfRef.__PVT__n4280 = VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__n4237), (IData)(vlSelfRef.__PVT__n4238));
    vlSelfRef.__PVT__n4239 = VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__n4237), (IData)(vlSelfRef.__PVT__n4238));
    vlSelfRef.__PVT__n4241 = VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__n4237), (IData)(vlSelfRef.__PVT__n4238));
    vlSelfRef.__PVT__n4318 = ((IData)(vlSelfRef.__PVT__n4316) 
                              | (IData)(vlSelfRef.__PVT__n4317));
    vlSelfRef.__PVT__n4223 = ((IData)(vlSelfRef.__PVT__n4222) 
                              & (IData)(vlSelfRef.__PVT__n4219));
    vlSelfRef.__PVT__n4281 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4280), 1U, 4));
    vlSelfRef.__PVT__n4240 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4239), 6U));
    vlSelfRef.__PVT__n4242 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4241), 5U));
    vlSelfRef.__PVT__n4320 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4319), (IData)(vlSelfRef.__PVT__n4318));
    vlSelfRef.__PVT__n4226 = vlSelfRef.__PVT__n4223;
    vlSelfRef.__PVT__n4243 = ((IData)(vlSelfRef.__PVT__n4240) 
                              | (IData)(vlSelfRef.__PVT__n4242));
    vlSelfRef.__PVT__n4321 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4320));
    vlSelfRef.__PVT__adc_z = vlSelfRef.__PVT__n4226;
    vlSelfRef.__PVT__n4245 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4244), (IData)(vlSelfRef.__PVT__n4243));
    vlSelfRef.__PVT__n4327 = (0x0000007fU & ((IData)(vlSelfRef.__PVT__n4321) 
                                             - (IData)(vlSelfRef.__PVT__n4326)));
    vlSelfRef.__PVT__n4246 = VL_EXTEND_II(7,5, (IData)(vlSelfRef.__PVT__n4245));
    vlSelfRef.__PVT__n4337 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 1U, 4));
    vlSelfRef.__PVT__n4358 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 1U, 4));
    vlSelfRef.__PVT__n4389 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 6U));
    vlSelfRef.__PVT__n4390 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 0U));
    vlSelfRef.__PVT__n4387 = (0x0000001fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 1U, 5));
    vlSelfRef.__PVT__n4333 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 5U));
    vlSelfRef.__PVT__n4373 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 0U));
    vlSelfRef.__PVT__n4374 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 6U));
    vlSelfRef.__PVT__n4362 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 5U));
    vlSelfRef.__PVT__n4366 = (0x0000001fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 1U, 5));
    vlSelfRef.__PVT__n4363 = (0x0000001fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4327), 1U, 5));
    vlSelfRef.__PVT__n4251 = (0x0000007fU & ((IData)(vlSelfRef.__PVT__n4246) 
                                             + (IData)(vlSelfRef.__PVT__n4250)));
    vlSelfRef.__PVT__n4339 = (0U == (IData)(vlSelfRef.__PVT__n4337));
    vlSelfRef.__PVT__n4334 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4332), (IData)(vlSelfRef.__PVT__n4333));
    vlSelfRef.__PVT__n4365 = (0x0000001fU & ((IData)(vlSelfRef.__PVT__n4363) 
                                             - (IData)(6U)));
    vlSelfRef.__PVT__n4252 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4251), 4U));
    vlSelfRef.__PVT__n4253 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4251), 4U));
    vlSelfRef.__PVT__n4272 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4251), 0U));
    vlSelfRef.__PVT__n4270 = (0x0000003fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4251), 1U, 6));
    vlSelfRef.__PVT__n4267 = (0x0000003fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4251), 1U, 6));
    vlSelfRef.__PVT__n4261 = (0x0000001fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4251), 1U, 5));
    vlSelfRef.__PVT__n4335 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__n4334));
    vlSelfRef.__PVT__n4367 = ((IData)(vlSelfRef.__PVT__n4362)
                               ? (IData)(vlSelfRef.__PVT__n4365)
                               : (IData)(vlSelfRef.__PVT__n4366));
    vlSelfRef.__PVT__adc_n = vlSelfRef.__PVT__n4252;
    vlSelfRef.__PVT__n4255 = ((IData)(vlSelfRef.__PVT__n4253) 
                              ^ (IData)(vlSelfRef.__PVT__n4254));
    vlSelfRef.__PVT__n4269 = (0x0000003fU & ((IData)(6U) 
                                             + (IData)(vlSelfRef.__PVT__n4267)));
    vlSelfRef.__PVT__n4263 = (9U < (IData)(vlSelfRef.__PVT__n4261));
    vlSelfRef.__PVT__n4336 = (0x0000003fU & ((IData)(vlSelfRef.__PVT__n4331) 
                                             - (IData)(vlSelfRef.__PVT__n4335)));
    vlSelfRef.__PVT__n4388 = ((IData)(vlSelfRef.__PVT__n4361)
                               ? (IData)(vlSelfRef.__PVT__n4367)
                               : (IData)(vlSelfRef.__PVT__n4387));
    vlSelfRef.__PVT__n4375 = VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__n4374), 
                                           VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__n4367), (IData)(vlSelfRef.__PVT__n4373)));
    vlSelfRef.__PVT__n4260 = ((IData)(vlSelfRef.__PVT__n4255) 
                              & (IData)(vlSelfRef.__PVT__n4259));
    vlSelfRef.__PVT__n4265 = ((IData)(vlSelfRef.__PVT__n4264) 
                              & (IData)(vlSelfRef.__PVT__n4263));
    vlSelfRef.__PVT__n4356 = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__n4336), 4U));
    vlSelfRef.__PVT__n4349 = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__n4336), 4U));
    vlSelfRef.__PVT__n4340 = (0x0000000fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__n4336), 1U, 4));
    vlSelfRef.__PVT__n4347 = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__n4336), 5U));
    vlSelfRef.__PVT__n4357 = (0x0000000fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__n4336), 1U, 4));
    vlSelfRef.__PVT__n4394 = VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__n4389), 
                                           VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__n4388), (IData)(vlSelfRef.__PVT__n4390)));
    vlSelfRef.__PVT__n4376 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4375), 6U));
    vlSelfRef.__PVT__adc_v = vlSelfRef.__PVT__n4260;
    vlSelfRef.__PVT__n4266 = ((IData)(vlSelfRef.__PVT__bcd_en) 
                              & (IData)(vlSelfRef.__PVT__n4265));
    vlSelfRef.__PVT__sbc_n = vlSelfRef.__PVT__n4356;
    vlSelfRef.__PVT__n4351 = ((IData)(vlSelfRef.__PVT__n4349) 
                              ^ (IData)(vlSelfRef.__PVT__n4350));
    vlSelfRef.__PVT__n4342 = (0U == (IData)(vlSelfRef.__PVT__n4340));
    vlSelfRef.__PVT__n4348 = (1U & (~ (IData)(vlSelfRef.__PVT__n4347)));
    vlSelfRef.__PVT__n4359 = VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__n4357), (IData)(vlSelfRef.__PVT__n4358));
    vlSelfRef.__PVT__n4395 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4394), 1U, 4));
    vlSelfRef.__PVT__n4377 = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__n4372), (IData)(vlSelfRef.__PVT__n4376));
    vlSelfRef.__PVT__n4271 = ((IData)(vlSelfRef.__PVT__n4266)
                               ? (IData)(vlSelfRef.__PVT__n4269)
                               : (IData)(vlSelfRef.__PVT__n4270));
    vlSelfRef.__PVT__n4355 = ((IData)(vlSelfRef.__PVT__n4351) 
                              & (IData)(vlSelfRef.__PVT__n4354));
    vlSelfRef.__PVT__n4343 = ((IData)(vlSelfRef.__PVT__n4342) 
                              & (IData)(vlSelfRef.__PVT__n4339));
    vlSelfRef.__PVT__sbc_c = vlSelfRef.__PVT__n4348;
    vlSelfRef.__PVT__sbx_q = vlSelfRef.__PVT__n4359;
    vlSelfRef.__PVT__n4378 = VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__n4377));
    vlSelfRef.__PVT__n4273 = VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__n4271), (IData)(vlSelfRef.__PVT__n4272));
    vlSelfRef.__PVT__n4275 = VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__n4271), (IData)(vlSelfRef.__PVT__n4272));
    vlSelfRef.__PVT__n4278 = VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__n4271), (IData)(vlSelfRef.__PVT__n4272));
    vlSelfRef.__PVT__sbc_v = vlSelfRef.__PVT__n4355;
    vlSelfRef.__PVT__n4346 = vlSelfRef.__PVT__n4343;
    vlSelfRef.__PVT__n4379 = (0x0000003fU & ((IData)(vlSelfRef.__PVT__n4371) 
                                             - (IData)(vlSelfRef.__PVT__n4378)));
    vlSelfRef.__PVT__n4274 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4273), 6U));
    vlSelfRef.__PVT__n4276 = (1U & VL_BITSEL_IIII(7, (IData)(vlSelfRef.__PVT__n4275), 5U));
    vlSelfRef.__PVT__n4279 = (0x0000000fU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__n4278), 1U, 4));
    vlSelfRef.__PVT__n4498 = (((((((((0x4000U == (IData)(vlSelfRef.__PVT__n4494)) 
                                     | (0x2000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                    | (0x1000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                   | (0x0800U == (IData)(vlSelfRef.__PVT__n4494))) 
                                  | (0x0400U == (IData)(vlSelfRef.__PVT__n4494))) 
                                 | (0x0200U == (IData)(vlSelfRef.__PVT__n4494))) 
                                | (0x0100U == (IData)(vlSelfRef.__PVT__n4494))) 
                               | (0x0080U == (IData)(vlSelfRef.__PVT__n4494)))
                               ? ((0x4000U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__n4497)
                                   : ((0x2000U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__n4497)
                                       : ((0x1000U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__n4483)
                                           : ((0x0800U 
                                               == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__n4451)
                                               : (IData)(vlSelfRef.__PVT__n4497)))))
                               : ((0x0040U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__sbc_v)
                                   : ((0x0020U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__n4497)
                                       : ((0x0010U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__n4497)
                                           : ((8U == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__adc_v)
                                               : (IData)(vlSelfRef.__PVT__n4497))))));
    vlSelfRef.__PVT__sbc_z = vlSelfRef.__PVT__n4346;
    vlSelfRef.__PVT__n4386 = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__n4379), 0U));
    vlSelfRef.__PVT__n4380 = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.__PVT__n4379), 5U));
    vlSelfRef.__PVT__n4384 = (0x0000001fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__n4379), 1U, 5));
    vlSelfRef.__PVT__n4381 = (0x0000001fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__n4379), 1U, 5));
    vlSelfRef.__PVT__n4277 = ((IData)(vlSelfRef.__PVT__n4274) 
                              | (IData)(vlSelfRef.__PVT__n4276));
    vlSelfRef.__PVT__n4282 = VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__n4279), (IData)(vlSelfRef.__PVT__n4281));
    vlSelfRef.__PVT__n4383 = (0x0000001fU & ((IData)(vlSelfRef.__PVT__n4381) 
                                             - (IData)(6U)));
    vlSelfRef.__PVT__adc_c = vlSelfRef.__PVT__n4277;
    vlSelfRef.__PVT__adc_q = vlSelfRef.__PVT__n4282;
    vlSelfRef.__PVT__n4385 = ((IData)(vlSelfRef.__PVT__n4380)
                               ? (IData)(vlSelfRef.__PVT__n4383)
                               : (IData)(vlSelfRef.__PVT__n4384));
    vlSelfRef.__PVT__n4496 = (((((((((0x4000U == (IData)(vlSelfRef.__PVT__n4494)) 
                                     | (0x2000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                    | (0x1000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                   | (0x0800U == (IData)(vlSelfRef.__PVT__n4494))) 
                                  | (0x0400U == (IData)(vlSelfRef.__PVT__n4494))) 
                                 | (0x0200U == (IData)(vlSelfRef.__PVT__n4494))) 
                                | (0x0100U == (IData)(vlSelfRef.__PVT__n4494))) 
                               | (0x0080U == (IData)(vlSelfRef.__PVT__n4494)))
                               ? ((0x4000U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__n4495)
                                   : ((0x2000U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__n4495)
                                       : ((0x1000U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__n4495)
                                           : ((0x0800U 
                                               == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__n4478)
                                               : ((0x0400U 
                                                   == (IData)(vlSelfRef.__PVT__n4494))
                                                   ? (IData)(vlSelfRef.__PVT__n4441)
                                                   : 
                                                  ((0x0200U 
                                                    == (IData)(vlSelfRef.__PVT__n4494))
                                                    ? (IData)(vlSelfRef.__PVT__n4435)
                                                    : 
                                                   ((0x0100U 
                                                     == (IData)(vlSelfRef.__PVT__n4494))
                                                     ? (IData)(vlSelfRef.__PVT__n4429)
                                                     : (IData)(vlSelfRef.__PVT__n4423))))))))
                               : ((0x0040U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__sbc_c)
                                   : ((0x0020U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__sbc_c)
                                       : ((0x0010U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__sbc_c)
                                           : ((8U == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__adc_c)
                                               : (IData)(vlSelfRef.__PVT__n4495))))));
    vlSelfRef.__PVT__n4391 = VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__n4385), (IData)(vlSelfRef.__PVT__n4386));
    vlSelfRef.__PVT__n4392 = ((IData)(vlSelfRef.__PVT__n4361)
                               ? (IData)(vlSelfRef.__PVT__n4391)
                               : (IData)(vlSelfRef.__PVT__n4336));
    vlSelfRef.__PVT__n4393 = (0x0000000fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__n4392), 1U, 4));
    vlSelfRef.__PVT__n4396 = VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__n4393), (IData)(vlSelfRef.__PVT__n4395));
    vlSelfRef.__PVT__sbc_q = vlSelfRef.__PVT__n4396;
    vlSelfRef.__PVT__n4502 = (((((((((0x4000U == (IData)(vlSelfRef.__PVT__n4494)) 
                                     | (0x2000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                    | (0x1000U == (IData)(vlSelfRef.__PVT__n4494))) 
                                   | (0x0800U == (IData)(vlSelfRef.__PVT__n4494))) 
                                  | (0x0400U == (IData)(vlSelfRef.__PVT__n4494))) 
                                 | (0x0200U == (IData)(vlSelfRef.__PVT__n4494))) 
                                | (0x0100U == (IData)(vlSelfRef.__PVT__n4494))) 
                               | (0x0080U == (IData)(vlSelfRef.__PVT__n4494)))
                               ? ((0x4000U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__n4491)
                                   : ((0x2000U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__n4487)
                                       : ((0x1000U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__busa)
                                           : ((0x0800U 
                                               == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__n4448)
                                               : ((0x0400U 
                                                   == (IData)(vlSelfRef.__PVT__n4494))
                                                   ? (IData)(vlSelfRef.__PVT__n4440)
                                                   : 
                                                  ((0x0200U 
                                                    == (IData)(vlSelfRef.__PVT__n4494))
                                                    ? (IData)(vlSelfRef.__PVT__n4434)
                                                    : 
                                                   ((0x0100U 
                                                     == (IData)(vlSelfRef.__PVT__n4494))
                                                     ? (IData)(vlSelfRef.__PVT__n4428)
                                                     : (IData)(vlSelfRef.__PVT__n4422))))))))
                               : ((0x0040U == (IData)(vlSelfRef.__PVT__n4494))
                                   ? (IData)(vlSelfRef.__PVT__sbc_q)
                                   : ((0x0020U == (IData)(vlSelfRef.__PVT__n4494))
                                       ? (IData)(vlSelfRef.__PVT__sbx_q)
                                       : ((0x0010U 
                                           == (IData)(vlSelfRef.__PVT__n4494))
                                           ? (IData)(vlSelfRef.__PVT__busa)
                                           : ((8U == (IData)(vlSelfRef.__PVT__n4494))
                                               ? (IData)(vlSelfRef.__PVT__adc_q)
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__n4494))
                                                   ? (IData)(vlSelfRef.__PVT__n4409)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__n4494))
                                                    ? (IData)(vlSelfRef.__PVT__n4406)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__n4494))
                                                     ? (IData)(vlSelfRef.__PVT__n4403)
                                                     : (IData)(vlSelfRef.__PVT__busa)))))))));
    vlSelfRef.__PVT__n4548 = ((IData)(vlSelfRef.__PVT__n4547)
                               ? (IData)(vlSelfRef.__PVT__n4503)
                               : (IData)(vlSelfRef.__PVT__n4502));
    vlSelfRef.__PVT__n4526 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n4502), 7U));
    vlSelfRef.__PVT__n4525 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n4502), 7U));
    vlSelfRef.__PVT__n4534 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__n4502), 7U));
    vlSelfRef.__PVT__n4528 = (0U == (IData)(vlSelfRef.__PVT__n4502));
    vlSelfRef.__PVT__n4536 = (0U == (IData)(vlSelfRef.__PVT__n4502));
    vlSelfRef.__PVT__q = vlSelfRef.__PVT__n4548;
    vlSelfRef.__PVT__n4541 = ((0x10U == (IData)(vlSelfRef.__PVT__n4540))
                               ? (IData)(vlSelfRef.__PVT__n4526)
                               : (IData)(vlSelfRef.__PVT__n4496));
    vlSelfRef.__PVT__n4544 = ((0x10U == (IData)(vlSelfRef.__PVT__n4540))
                               ? (IData)(vlSelfRef.__PVT__n4525)
                               : ((8U == (IData)(vlSelfRef.__PVT__n4540))
                                   ? (IData)(vlSelfRef.__PVT__n4516)
                                   : ((4U == (IData)(vlSelfRef.__PVT__n4540))
                                       ? (IData)(vlSelfRef.__PVT__n4500)
                                       : ((2U == (IData)(vlSelfRef.__PVT__n4540))
                                           ? (IData)(vlSelfRef.__PVT__sbc_n)
                                           : ((1U == (IData)(vlSelfRef.__PVT__n4540))
                                               ? (IData)(vlSelfRef.__PVT__adc_n)
                                               : (IData)(vlSelfRef.__PVT__n4534))))));
    vlSelfRef.__PVT__n4531 = vlSelfRef.__PVT__n4528;
    vlSelfRef.__PVT__n4539 = vlSelfRef.__PVT__n4536;
    vlSelfRef.__PVT__n4543 = ((0x10U == (IData)(vlSelfRef.__PVT__n4540))
                               ? (IData)(vlSelfRef.__PVT__n4531)
                               : ((8U == (IData)(vlSelfRef.__PVT__n4540))
                                   ? (IData)(vlSelfRef.__PVT__n4522)
                                   : ((4U == (IData)(vlSelfRef.__PVT__n4540))
                                       ? (IData)(vlSelfRef.__PVT__n4542)
                                       : ((2U == (IData)(vlSelfRef.__PVT__n4540))
                                           ? (IData)(vlSelfRef.__PVT__sbc_z)
                                           : ((1U == (IData)(vlSelfRef.__PVT__n4540))
                                               ? (IData)(vlSelfRef.__PVT__adc_z)
                                               : (IData)(vlSelfRef.__PVT__n4539))))));
    vlSelfRef.__PVT__n4550 = VL_CONCAT_III(8,2,6, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4544), (IData)(vlSelfRef.__PVT__n4498)), 
                                           VL_CONCAT_III(6,4,2, (IData)(vlSelfRef.__PVT__n4545), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__n4543), (IData)(vlSelfRef.__PVT__n4541))));
    vlSelfRef.__PVT__p_out = vlSelfRef.__PVT__n4550;
}
