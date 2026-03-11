// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_t65_alu_Brtl___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu__0(Vnes_core_top_t65_alu_Brtl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_t65_alu_Brtl___stl_sequent__TOP__nes_core_top__nes_inst__cpu__cpu_impl__alu__0\n"); );
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

VL_ATTR_COLD void Vnes_core_top_t65_alu_Brtl___ctor_var_reset(Vnes_core_top_t65_alu_Brtl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnes_core_top_t65_alu_Brtl___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2288075164703132177ull);
    vlSelf->__PVT__bcd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13247951929229659533ull);
    vlSelf->__PVT__op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3630531923276091163ull);
    vlSelf->__PVT__busa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4300930599387030219ull);
    vlSelf->__PVT__busb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13593267391165168133ull);
    vlSelf->__PVT__p_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10656887590136870035ull);
    vlSelf->__PVT__p_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17024092055271566064ull);
    vlSelf->__PVT__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8861071527689086543ull);
    vlSelf->__PVT__adc_z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981172173550729800ull);
    vlSelf->__PVT__adc_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5736061804811624123ull);
    vlSelf->__PVT__adc_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13712716602802636732ull);
    vlSelf->__PVT__adc_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16680505058635264090ull);
    vlSelf->__PVT__adc_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3749283092487809127ull);
    vlSelf->__PVT__sbc_z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2931281526724052842ull);
    vlSelf->__PVT__sbc_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1595054275386225691ull);
    vlSelf->__PVT__sbc_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7666483925132934063ull);
    vlSelf->__PVT__sbc_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3633792602706012423ull);
    vlSelf->__PVT__sbc_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13634396848381780697ull);
    vlSelf->__PVT__sbx_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7637533367489257908ull);
    vlSelf->__PVT__n4199 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12104835384850309548ull);
    vlSelf->__PVT__n4200 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11014921338192020266ull);
    vlSelf->__PVT__n4201 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1289589700534282188ull);
    vlSelf->__PVT__n4202 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9590037702322599254ull);
    vlSelf->__PVT__n4203 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13032111896376245354ull);
    vlSelf->__PVT__n4205 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1896488655011684039ull);
    vlSelf->__PVT__n4206 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10617901091063340396ull);
    vlSelf->__PVT__n4207 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12757183219309543513ull);
    vlSelf->__PVT__n4208 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1606502138400995363ull);
    vlSelf->__PVT__n4209 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10327914574452652161ull);
    vlSelf->__PVT__n4210 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13551186482539596133ull);
    vlSelf->__PVT__n4211 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6858411420734616788ull);
    vlSelf->__PVT__n4212 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15579823856786467950ull);
    vlSelf->__PVT__n4214 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14154940220916965387ull);
    vlSelf->__PVT__n4215 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8331694348481235724ull);
    vlSelf->__PVT__n4216 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1314007574249460056ull);
    vlSelf->__PVT__n4217 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12718609768984825751ull);
    vlSelf->__PVT__n4219 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4711595825309717177ull);
    vlSelf->__PVT__n4220 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17970519051318384294ull);
    vlSelf->__PVT__n4222 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12412641108772127342ull);
    vlSelf->__PVT__n4223 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17680532534707659780ull);
    vlSelf->__PVT__n4226 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11812800719278772421ull);
    vlSelf->__PVT__n4227 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5989554846843059266ull);
    vlSelf->__PVT__n4229 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1436061913284197855ull);
    vlSelf->__PVT__n4230 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4743229880639834352ull);
    vlSelf->__PVT__n4231 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4307673414213748901ull);
    vlSelf->__PVT__n4232 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18311569308363687585ull);
    vlSelf->__PVT__n4233 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1770053605345623175ull);
    vlSelf->__PVT__n4235 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9081174437690711586ull);
    vlSelf->__PVT__n4236 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17802586873742433725ull);
    vlSelf->__PVT__n4237 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7656290801821252502ull);
    vlSelf->__PVT__n4238 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9795572930067421802ull);
    vlSelf->__PVT__n4239 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10554457365437228829ull);
    vlSelf->__PVT__n4240 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6763364545972589517ull);
    vlSelf->__PVT__n4241 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3199198781857060386ull);
    vlSelf->__PVT__n4242 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17203094676007130918ull);
    vlSelf->__PVT__n4243 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7477763038349169757ull);
    vlSelf->__PVT__n4244 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 784987976544297260ull);
    vlSelf->__PVT__n4245 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14788883870694337056ull);
    vlSelf->__PVT__n4246 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 930557926359724726ull);
    vlSelf->__PVT__n4247 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9231005928148051680ull);
    vlSelf->__PVT__n4249 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17516861897773763118ull);
    vlSelf->__PVT__n4250 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3830235555513094279ull);
    vlSelf->__PVT__n4251 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12551647991564734556ull);
    vlSelf->__PVT__n4252 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7429326515444728017ull);
    vlSelf->__PVT__n4253 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729774517233254095ull);
    vlSelf->__PVT__n4254 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3321253120891776995ull);
    vlSelf->__PVT__n4255 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17325149015041642399ull);
    vlSelf->__PVT__n4256 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16889592548615534546ull);
    vlSelf->__PVT__n4257 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7164260910957834832ull);
    vlSelf->__PVT__n4258 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11331714606069523222ull);
    vlSelf->__PVT__n4259 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1606382968411621264ull);
    vlSelf->__PVT__n4260 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9820021709976848351ull);
    vlSelf->__PVT__n4261 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5377173530417268731ull);
    vlSelf->__PVT__n4263 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3952289894547796510ull);
    vlSelf->__PVT__n4264 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17830483195154453488ull);
    vlSelf->__PVT__n4265 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8105151557496614527ull);
    vlSelf->__PVT__n4266 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3662303377937132635ull);
    vlSelf->__PVT__n4267 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3997078162943647105ull);
    vlSelf->__PVT__n4269 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17011646887650287570ull);
    vlSelf->__PVT__n4270 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14615366962644462819ull);
    vlSelf->__PVT__n4271 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2209990782403095802ull);
    vlSelf->__PVT__n4272 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7477882208338627085ull);
    vlSelf->__PVT__n4273 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10495846752028636581ull);
    vlSelf->__PVT__n4274 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6052998572469189225ull);
    vlSelf->__PVT__n4275 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14774411008520780238ull);
    vlSelf->__PVT__n4276 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3948641640039205661ull);
    vlSelf->__PVT__n4277 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17952537534189212593ull);
    vlSelf->__PVT__n4278 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8227205896531384116ull);
    vlSelf->__PVT__n4279 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4663040132415821965ull);
    vlSelf->__PVT__n4280 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8146937662207643403ull);
    vlSelf->__PVT__n4281 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11164902205897706347ull);
    vlSelf->__PVT__n4282 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9171190027467141148ull);
    vlSelf->__PVT__n4293 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9147674416686383390ull);
    vlSelf->__PVT__n4295 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6718405771829607084ull);
    vlSelf->__PVT__n4296 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2275557592270062433ull);
    vlSelf->__PVT__n4298 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7432804264206334588ull);
    vlSelf->__PVT__n4299 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18308090860667002467ull);
    vlSelf->__PVT__n4301 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9950261887918715910ull);
    vlSelf->__PVT__n4302 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18250709889707254033ull);
    vlSelf->__PVT__n4304 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18396279839522647170ull);
    vlSelf->__PVT__n4305 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11703504777717723129ull);
    vlSelf->__PVT__n4307 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 218514719183857159ull);
    vlSelf->__PVT__n4308 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15101093028777862568ull);
    vlSelf->__PVT__n4310 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7898108902891323198ull);
    vlSelf->__PVT__n4311 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6783079139904594774ull);
    vlSelf->__PVT__n4314 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4368868334591884364ull);
    vlSelf->__PVT__n4316 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16379052050311206423ull);
    vlSelf->__PVT__n4317 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4078881817981165161ull);
    vlSelf->__PVT__n4318 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18082777712131301174ull);
    vlSelf->__PVT__n4319 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11040635833156982327ull);
    vlSelf->__PVT__n4320 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7414115913560622905ull);
    vlSelf->__PVT__n4321 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6424788744117392983ull);
    vlSelf->__PVT__n4322 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12463011421485618322ull);
    vlSelf->__PVT__n4324 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 323003171133706241ull);
    vlSelf->__PVT__n4325 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12173024904874911252ull);
    vlSelf->__PVT__n4326 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2026728832953666430ull);
    vlSelf->__PVT__n4327 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10748141269005479648ull);
    vlSelf->__PVT__n4328 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3050981198213136405ull);
    vlSelf->__PVT__n4330 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13403902068024284017ull);
    vlSelf->__PVT__n4331 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8961053888464869973ull);
    vlSelf->__PVT__n4332 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5396888124349340842ull);
    vlSelf->__PVT__n4333 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17246909858090350215ull);
    vlSelf->__PVT__n4334 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7100613786169288381ull);
    vlSelf->__PVT__n4335 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9005842156860723012ull);
    vlSelf->__PVT__n4336 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11145124285106841712ull);
    vlSelf->__PVT__n4337 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16316962989205852120ull);
    vlSelf->__PVT__n4339 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8730913479794094454ull);
    vlSelf->__PVT__n4340 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4494401121323466485ull);
    vlSelf->__PVT__n4342 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10100212548365489878ull);
    vlSelf->__PVT__n4343 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16138435225733810202ull);
    vlSelf->__PVT__n4346 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13724224420420935964ull);
    vlSelf->__PVT__n4347 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3577928348499819050ull);
    vlSelf->__PVT__n4348 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8166346477874820804ull);
    vlSelf->__PVT__n4349 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10305628606120944872ull);
    vlSelf->__PVT__n4350 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16320441436902549352ull);
    vlSelf->__PVT__n4351 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6595109799244825098ull);
    vlSelf->__PVT__n4352 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2152261619685247943ull);
    vlSelf->__PVT__n4353 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13906230631589988470ull);
    vlSelf->__PVT__n4354 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14665115066959913209ull);
    vlSelf->__PVT__n4355 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10222266887400204509ull);
    vlSelf->__PVT__n4356 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10557041672406907356ull);
    vlSelf->__PVT__n4357 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12696323800652849960ull);
    vlSelf->__PVT__n4358 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11382084918782851018ull);
    vlSelf->__PVT__n4359 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14400049462472987194ull);
    vlSelf->__PVT__n4360 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 409962507540539675ull);
    vlSelf->__PVT__n4361 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17867379411806786660ull);
    vlSelf->__PVT__n4362 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2438599881787362988ull);
    vlSelf->__PVT__n4363 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16442495775937298473ull);
    vlSelf->__PVT__n4365 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6281607671853376486ull);
    vlSelf->__PVT__n4366 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12322975565321695272ull);
    vlSelf->__PVT__n4367 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2597643927663804301ull);
    vlSelf->__PVT__n4368 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10898091929452240243ull);
    vlSelf->__PVT__n4370 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7849553209997423792ull);
    vlSelf->__PVT__n4371 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16150001211785783458ull);
    vlSelf->__PVT__n4372 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4974865026134770175ull);
    vlSelf->__PVT__n4373 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10242756452070220788ull);
    vlSelf->__PVT__n4374 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 96460380149135774ull);
    vlSelf->__PVT__n4375 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8817872816200824857ull);
    vlSelf->__PVT__n4376 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17118320817989309243ull);
    vlSelf->__PVT__n4377 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16128993648545980036ull);
    vlSelf->__PVT__n4378 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16887878083915864875ull);
    vlSelf->__PVT__n4379 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6741582011994697753ull);
    vlSelf->__PVT__n4380 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4873589228571245211ull);
    vlSelf->__PVT__n4381 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5208364013577811932ull);
    vlSelf->__PVT__n4383 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2904797962264336804ull);
    vlSelf->__PVT__n4384 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16406978578982170878ull);
    vlSelf->__PVT__n4385 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8835521101733286028ull);
    vlSelf->__PVT__n4386 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10974803229979409592ull);
    vlSelf->__PVT__n4387 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13992767773669349880ull);
    vlSelf->__PVT__n4388 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9549919594109964316ull);
    vlSelf->__PVT__n4389 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17266947021174292020ull);
    vlSelf->__PVT__n4390 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1706406480557052827ull);
    vlSelf->__PVT__n4391 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3845688608803129734ull);
    vlSelf->__PVT__n4392 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9438491747165414071ull);
    vlSelf->__PVT__n4393 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17738939748953755289ull);
    vlSelf->__PVT__n4394 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1431477803490422412ull);
    vlSelf->__PVT__n4395 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7469700480858537464ull);
    vlSelf->__PVT__n4396 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7807620481965200312ull);
    vlSelf->__PVT__n4403 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10150219882183343247ull);
    vlSelf->__PVT__n4405 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14303081545132021998ull);
    vlSelf->__PVT__n4406 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9860233365572640298ull);
    vlSelf->__PVT__n4408 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11888870739819459572ull);
    vlSelf->__PVT__n4409 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1742574667898209758ull);
    vlSelf->__PVT__n4411 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857725318031823930ull);
    vlSelf->__PVT__n4413 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16693776739664237350ull);
    vlSelf->__PVT__n4415 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15268893103794753194ull);
    vlSelf->__PVT__n4417 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5703723448115083724ull);
    vlSelf->__PVT__n4419 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4278839812245652137ull);
    vlSelf->__PVT__n4420 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1518703865918618706ull);
    vlSelf->__PVT__n4422 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11958433995953042356ull);
    vlSelf->__PVT__n4423 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2233102358295278634ull);
    vlSelf->__PVT__n4425 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5411228883963564511ull);
    vlSelf->__PVT__n4426 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16815831078698996697ull);
    vlSelf->__PVT__n4427 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6669535006777673163ull);
    vlSelf->__PVT__n4428 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11937426432713292798ull);
    vlSelf->__PVT__n4429 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16525844562088288540ull);
    vlSelf->__PVT__n4431 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 490803246150547022ull);
    vlSelf->__PVT__n4432 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17948220150416680652ull);
    vlSelf->__PVT__n4434 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16523336514547477328ull);
    vlSelf->__PVT__n4435 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12080488334987858444ull);
    vlSelf->__PVT__n4437 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16233349997936742030ull);
    vlSelf->__PVT__n4438 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11790501818377060562ull);
    vlSelf->__PVT__n4439 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17491656120750744699ull);
    vlSelf->__PVT__n4440 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16624768713127508641ull);
    vlSelf->__PVT__n4441 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6899437075469776444ull);
    vlSelf->__PVT__n4443 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9376639204822551641ull);
    vlSelf->__PVT__n4444 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18098051640874135518ull);
    vlSelf->__PVT__n4445 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16783812759004050360ull);
    vlSelf->__PVT__n4446 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13219646994888599103ull);
    vlSelf->__PVT__n4447 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6177505115914250557ull);
    vlSelf->__PVT__n4448 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16048406703387482687ull);
    vlSelf->__PVT__n4449 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9355631641582535630ull);
    vlSelf->__PVT__n4450 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7296420091571186483ull);
    vlSelf->__PVT__n4451 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2853571912011633176ull);
    vlSelf->__PVT__n4452 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9000145753391137330ull);
    vlSelf->__PVT__n4453 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4557297573831592206ull);
    vlSelf->__PVT__n4454 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6696579702077711417ull);
    vlSelf->__PVT__n4455 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1752016245086010600ull);
    vlSelf->__PVT__n4456 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15755912139235980012ull);
    vlSelf->__PVT__n4458 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784549513482788826ull);
    vlSelf->__PVT__n4459 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13341701333923176438ull);
    vlSelf->__PVT__n4461 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5498188220370389481ull);
    vlSelf->__PVT__n4462 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7637470348616492060ull);
    vlSelf->__PVT__n4463 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7972245133623065629ull);
    vlSelf->__PVT__n4464 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 400787656374125680ull);
    vlSelf->__PVT__n4465 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2540069784620233571ull);
    vlSelf->__PVT__n4466 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5558034328310373651ull);
    vlSelf->__PVT__n4468 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1874070584120706344ull);
    vlSelf->__PVT__n4469 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1438514117694587629ull);
    vlSelf->__PVT__n4471 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 302833905490729377ull);
    vlSelf->__PVT__n4474 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12202372867210867704ull);
    vlSelf->__PVT__n4475 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2056076795289626074ull);
    vlSelf->__PVT__n4476 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11222908770347132128ull);
    vlSelf->__PVT__n4477 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13362190898593351923ull);
    vlSelf->__PVT__n4478 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215894826672106693ull);
    vlSelf->__PVT__n4479 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3974779262042066362ull);
    vlSelf->__PVT__n4480 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8592864064587633276ull);
    vlSelf->__PVT__n4482 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12871428321079930283ull);
    vlSelf->__PVT__n4483 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12435871854653826453ull);
    vlSelf->__PVT__n4485 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11435097869147632631ull);
    vlSelf->__PVT__n4487 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3428083925472636762ull);
    vlSelf->__PVT__n4489 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17321335065623318727ull);
    vlSelf->__PVT__n4491 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16397020634870655396ull);
    vlSelf->__PVT__n4493 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14972136999001170984ull);
    vlSelf->__PVT__n4494 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4825840927080018666ull);
    vlSelf->__PVT__n4495 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3836513757636737619ull);
    vlSelf->__PVT__n4496 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12557926193688395054ull);
    vlSelf->__PVT__n4497 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12895846194795012074ull);
    vlSelf->__PVT__n4498 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15035128323041247543ull);
    vlSelf->__PVT__n4500 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4228163349164194962ull);
    vlSelf->__PVT__n4502 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4806996175417802894ull);
    vlSelf->__PVT__n4503 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 364147995858225986ull);
    vlSelf->__PVT__n4505 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17386008433698335950ull);
    vlSelf->__PVT__n4507 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3092126022937618636ull);
    vlSelf->__PVT__n4509 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370690279429768853ull);
    vlSelf->__PVT__n4510 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4514501611266267933ull);
    vlSelf->__PVT__n4512 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8793065867758438198ull);
    vlSelf->__PVT__n4513 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12960519562870030331ull);
    vlSelf->__PVT__n4515 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11186269109831234546ull);
    vlSelf->__PVT__n4516 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1039973037910137888ull);
    vlSelf->__PVT__n4517 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9761385473961794719ull);
    vlSelf->__PVT__n4519 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12939511999630276522ull);
    vlSelf->__PVT__n4522 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2172362109628049611ull);
    vlSelf->__PVT__n4524 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6450926366120252004ull);
    vlSelf->__PVT__n4525 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5335896603133544552ull);
    vlSelf->__PVT__n4526 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4346569433690246433ull);
    vlSelf->__PVT__n4528 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5604875556504367612ull);
    vlSelf->__PVT__n4531 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17114003434216792069ull);
    vlSelf->__PVT__n4533 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430039690027274270ull);
    vlSelf->__PVT__n4534 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6737264628222265103ull);
    vlSelf->__PVT__n4536 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5312380992352917930ull);
    vlSelf->__PVT__n4539 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5022394475742215759ull);
    vlSelf->__PVT__n4540 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15670754016853545889ull);
    vlSelf->__PVT__n4541 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 241974486834148465ull);
    vlSelf->__PVT__n4542 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11117261083294815306ull);
    vlSelf->__PVT__n4543 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7553095319179286253ull);
    vlSelf->__PVT__n4544 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12141513448554156713ull);
    vlSelf->__PVT__n4545 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7698665268994697317ull);
    vlSelf->__PVT__n4547 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15984521238620174523ull);
    vlSelf->__PVT__n4548 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11541673059060760287ull);
    vlSelf->__PVT__n4550 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16191146036510429216ull);
}
