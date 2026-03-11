// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnes_core_top.h for the primary calling header

#include "Vnes_core_top__pch.h"

VL_ATTR_COLD void Vnes_core_top_APUMixer___eval_initial__TOP__nes_core_top__nes_inst__apu__mixer(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___eval_initial__TOP__nes_core_top__nes_inst__apu__mixer\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pulse_lut[0U] = 0U;
    vlSelfRef.__PVT__pulse_lut[1U] = 0x0331U;
    vlSelfRef.__PVT__pulse_lut[2U] = 0x064fU;
    vlSelfRef.__PVT__pulse_lut[3U] = 0x0959U;
    vlSelfRef.__PVT__pulse_lut[4U] = 0x0c52U;
    vlSelfRef.__PVT__pulse_lut[5U] = 0x0f38U;
    vlSelfRef.__PVT__pulse_lut[6U] = 0x120eU;
    vlSelfRef.__PVT__pulse_lut[7U] = 0x14d3U;
    vlSelfRef.__PVT__pulse_lut[8U] = 0x1788U;
    vlSelfRef.__PVT__pulse_lut[9U] = 0x1a2eU;
    vlSelfRef.__PVT__pulse_lut[10U] = 0x1cc6U;
    vlSelfRef.__PVT__pulse_lut[11U] = 0x1f4eU;
    vlSelfRef.__PVT__pulse_lut[12U] = 0x21c9U;
    vlSelfRef.__PVT__pulse_lut[13U] = 0x2437U;
    vlSelfRef.__PVT__pulse_lut[14U] = 0x2697U;
    vlSelfRef.__PVT__pulse_lut[15U] = 0x28ebU;
    vlSelfRef.__PVT__pulse_lut[16U] = 0x2b32U;
    vlSelfRef.__PVT__pulse_lut[17U] = 0x2d6eU;
    vlSelfRef.__PVT__pulse_lut[18U] = 0x2f9eU;
    vlSelfRef.__PVT__pulse_lut[19U] = 0x31c3U;
    vlSelfRef.__PVT__pulse_lut[20U] = 0x33ddU;
    vlSelfRef.__PVT__pulse_lut[21U] = 0x35ecU;
    vlSelfRef.__PVT__pulse_lut[22U] = 0x37f2U;
    vlSelfRef.__PVT__pulse_lut[23U] = 0x39edU;
    vlSelfRef.__PVT__pulse_lut[24U] = 0x3bdfU;
    vlSelfRef.__PVT__pulse_lut[25U] = 0x3dc7U;
    vlSelfRef.__PVT__pulse_lut[26U] = 0x3fa6U;
    vlSelfRef.__PVT__pulse_lut[27U] = 0x417dU;
    vlSelfRef.__PVT__pulse_lut[28U] = 0x434bU;
    vlSelfRef.__PVT__pulse_lut[29U] = 0x4510U;
    vlSelfRef.__PVT__pulse_lut[30U] = 0x46cdU;
    vlSelfRef.__PVT__pulse_lut[31U] = 0U;
    vlSelfRef.__PVT__tri_lut[0U] = 0U;
    vlSelfRef.__PVT__tri_lut[1U] = 4U;
    vlSelfRef.__PVT__tri_lut[2U] = 8U;
    vlSelfRef.__PVT__tri_lut[3U] = 0x0cU;
    vlSelfRef.__PVT__tri_lut[4U] = 0x10U;
    vlSelfRef.__PVT__tri_lut[5U] = 0x14U;
    vlSelfRef.__PVT__tri_lut[6U] = 0x18U;
    vlSelfRef.__PVT__tri_lut[7U] = 0x1cU;
    vlSelfRef.__PVT__tri_lut[8U] = 0x20U;
    vlSelfRef.__PVT__tri_lut[9U] = 0x24U;
    vlSelfRef.__PVT__tri_lut[10U] = 0x28U;
    vlSelfRef.__PVT__tri_lut[11U] = 0x2cU;
    vlSelfRef.__PVT__tri_lut[12U] = 0x30U;
    vlSelfRef.__PVT__tri_lut[13U] = 0x34U;
    vlSelfRef.__PVT__tri_lut[14U] = 0x38U;
    vlSelfRef.__PVT__tri_lut[15U] = 0x3cU;
    vlSelfRef.__PVT__noise_lut[0U] = 0U;
    vlSelfRef.__PVT__noise_lut[1U] = 3U;
    vlSelfRef.__PVT__noise_lut[2U] = 5U;
    vlSelfRef.__PVT__noise_lut[3U] = 8U;
    vlSelfRef.__PVT__noise_lut[4U] = 0x0bU;
    vlSelfRef.__PVT__noise_lut[5U] = 0x0dU;
    vlSelfRef.__PVT__noise_lut[6U] = 0x10U;
    vlSelfRef.__PVT__noise_lut[7U] = 0x13U;
    vlSelfRef.__PVT__noise_lut[8U] = 0x15U;
    vlSelfRef.__PVT__noise_lut[9U] = 0x18U;
    vlSelfRef.__PVT__noise_lut[10U] = 0x1bU;
    vlSelfRef.__PVT__noise_lut[11U] = 0x1dU;
    vlSelfRef.__PVT__noise_lut[12U] = 0x20U;
    vlSelfRef.__PVT__noise_lut[13U] = 0x23U;
    vlSelfRef.__PVT__noise_lut[14U] = 0x25U;
    vlSelfRef.__PVT__noise_lut[15U] = 0x28U;
    vlSelfRef.__PVT__dmc_lut[0U] = 0U;
    vlSelfRef.__PVT__dmc_lut[1U] = 1U;
    vlSelfRef.__PVT__dmc_lut[2U] = 3U;
    vlSelfRef.__PVT__dmc_lut[3U] = 4U;
    vlSelfRef.__PVT__dmc_lut[4U] = 6U;
    vlSelfRef.__PVT__dmc_lut[5U] = 7U;
    vlSelfRef.__PVT__dmc_lut[6U] = 9U;
    vlSelfRef.__PVT__dmc_lut[7U] = 0x0aU;
    vlSelfRef.__PVT__dmc_lut[8U] = 0x0cU;
    vlSelfRef.__PVT__dmc_lut[9U] = 0x0dU;
    vlSelfRef.__PVT__dmc_lut[10U] = 0x0eU;
    vlSelfRef.__PVT__dmc_lut[11U] = 0x10U;
    vlSelfRef.__PVT__dmc_lut[12U] = 0x11U;
    vlSelfRef.__PVT__dmc_lut[13U] = 0x13U;
    vlSelfRef.__PVT__dmc_lut[14U] = 0x14U;
    vlSelfRef.__PVT__dmc_lut[15U] = 0x16U;
    vlSelfRef.__PVT__dmc_lut[16U] = 0x17U;
    vlSelfRef.__PVT__dmc_lut[17U] = 0x19U;
    vlSelfRef.__PVT__dmc_lut[18U] = 0x1aU;
    vlSelfRef.__PVT__dmc_lut[19U] = 0x1cU;
    vlSelfRef.__PVT__dmc_lut[20U] = 0x1dU;
    vlSelfRef.__PVT__dmc_lut[21U] = 0x1eU;
    vlSelfRef.__PVT__dmc_lut[22U] = 0x20U;
    vlSelfRef.__PVT__dmc_lut[23U] = 0x21U;
    vlSelfRef.__PVT__dmc_lut[24U] = 0x23U;
    vlSelfRef.__PVT__dmc_lut[25U] = 0x24U;
    vlSelfRef.__PVT__dmc_lut[26U] = 0x26U;
    vlSelfRef.__PVT__dmc_lut[27U] = 0x27U;
    vlSelfRef.__PVT__dmc_lut[28U] = 0x29U;
    vlSelfRef.__PVT__dmc_lut[29U] = 0x2aU;
    vlSelfRef.__PVT__dmc_lut[30U] = 0x2bU;
    vlSelfRef.__PVT__dmc_lut[31U] = 0x2dU;
    vlSelfRef.__PVT__dmc_lut[32U] = 0x2eU;
    vlSelfRef.__PVT__dmc_lut[33U] = 0x30U;
    vlSelfRef.__PVT__dmc_lut[34U] = 0x31U;
    vlSelfRef.__PVT__dmc_lut[35U] = 0x33U;
    vlSelfRef.__PVT__dmc_lut[36U] = 0x34U;
    vlSelfRef.__PVT__dmc_lut[37U] = 0x36U;
    vlSelfRef.__PVT__dmc_lut[38U] = 0x37U;
    vlSelfRef.__PVT__dmc_lut[39U] = 0x38U;
    vlSelfRef.__PVT__dmc_lut[40U] = 0x3aU;
    vlSelfRef.__PVT__dmc_lut[41U] = 0x3bU;
    vlSelfRef.__PVT__dmc_lut[42U] = 0x3dU;
    vlSelfRef.__PVT__dmc_lut[43U] = 0x3eU;
    vlSelfRef.__PVT__dmc_lut[44U] = 0x40U;
    vlSelfRef.__PVT__dmc_lut[45U] = 0x41U;
    vlSelfRef.__PVT__dmc_lut[46U] = 0x43U;
    vlSelfRef.__PVT__dmc_lut[47U] = 0x44U;
    vlSelfRef.__PVT__dmc_lut[48U] = 0x45U;
    vlSelfRef.__PVT__dmc_lut[49U] = 0x47U;
    vlSelfRef.__PVT__dmc_lut[50U] = 0x48U;
    vlSelfRef.__PVT__dmc_lut[51U] = 0x4aU;
    vlSelfRef.__PVT__dmc_lut[52U] = 0x4bU;
    vlSelfRef.__PVT__dmc_lut[53U] = 0x4dU;
    vlSelfRef.__PVT__dmc_lut[54U] = 0x4eU;
    vlSelfRef.__PVT__dmc_lut[55U] = 0x50U;
    vlSelfRef.__PVT__dmc_lut[56U] = 0x51U;
    vlSelfRef.__PVT__dmc_lut[57U] = 0x53U;
    vlSelfRef.__PVT__dmc_lut[58U] = 0x54U;
    vlSelfRef.__PVT__dmc_lut[59U] = 0x55U;
    vlSelfRef.__PVT__dmc_lut[60U] = 0x57U;
    vlSelfRef.__PVT__dmc_lut[61U] = 0x58U;
    vlSelfRef.__PVT__dmc_lut[62U] = 0x5aU;
    vlSelfRef.__PVT__dmc_lut[63U] = 0x5bU;
    vlSelfRef.__PVT__dmc_lut[64U] = 0x5dU;
    vlSelfRef.__PVT__dmc_lut[65U] = 0x5eU;
    vlSelfRef.__PVT__dmc_lut[66U] = 0x60U;
    vlSelfRef.__PVT__dmc_lut[67U] = 0x61U;
    vlSelfRef.__PVT__dmc_lut[68U] = 0x62U;
    vlSelfRef.__PVT__dmc_lut[69U] = 0x64U;
    vlSelfRef.__PVT__dmc_lut[70U] = 0x65U;
    vlSelfRef.__PVT__dmc_lut[71U] = 0x67U;
    vlSelfRef.__PVT__dmc_lut[72U] = 0x68U;
    vlSelfRef.__PVT__dmc_lut[73U] = 0x6aU;
    vlSelfRef.__PVT__dmc_lut[74U] = 0x6bU;
    vlSelfRef.__PVT__dmc_lut[75U] = 0x6dU;
    vlSelfRef.__PVT__dmc_lut[76U] = 0x6eU;
    vlSelfRef.__PVT__dmc_lut[77U] = 0x6fU;
    vlSelfRef.__PVT__dmc_lut[78U] = 0x71U;
    vlSelfRef.__PVT__dmc_lut[79U] = 0x72U;
    vlSelfRef.__PVT__dmc_lut[80U] = 0x74U;
    vlSelfRef.__PVT__dmc_lut[81U] = 0x75U;
    vlSelfRef.__PVT__dmc_lut[82U] = 0x77U;
    vlSelfRef.__PVT__dmc_lut[83U] = 0x78U;
    vlSelfRef.__PVT__dmc_lut[84U] = 0x7aU;
    vlSelfRef.__PVT__dmc_lut[85U] = 0x7bU;
    vlSelfRef.__PVT__dmc_lut[86U] = 0x7cU;
    vlSelfRef.__PVT__dmc_lut[87U] = 0x7eU;
    vlSelfRef.__PVT__dmc_lut[88U] = 0x7fU;
    vlSelfRef.__PVT__dmc_lut[89U] = 0x81U;
    vlSelfRef.__PVT__dmc_lut[90U] = 0x82U;
    vlSelfRef.__PVT__dmc_lut[91U] = 0x84U;
    vlSelfRef.__PVT__dmc_lut[92U] = 0x85U;
    vlSelfRef.__PVT__dmc_lut[93U] = 0x87U;
    vlSelfRef.__PVT__dmc_lut[94U] = 0x88U;
    vlSelfRef.__PVT__dmc_lut[95U] = 0x8aU;
    vlSelfRef.__PVT__dmc_lut[96U] = 0x8bU;
    vlSelfRef.__PVT__dmc_lut[97U] = 0x8cU;
    vlSelfRef.__PVT__dmc_lut[98U] = 0x8eU;
    vlSelfRef.__PVT__dmc_lut[99U] = 0x8fU;
    vlSelfRef.__PVT__dmc_lut[100U] = 0x91U;
    vlSelfRef.__PVT__dmc_lut[101U] = 0x92U;
    vlSelfRef.__PVT__dmc_lut[102U] = 0x94U;
    vlSelfRef.__PVT__dmc_lut[103U] = 0x95U;
    vlSelfRef.__PVT__dmc_lut[104U] = 0x97U;
    vlSelfRef.__PVT__dmc_lut[105U] = 0x98U;
    vlSelfRef.__PVT__dmc_lut[106U] = 0x99U;
    vlSelfRef.__PVT__dmc_lut[107U] = 0x9bU;
    vlSelfRef.__PVT__dmc_lut[108U] = 0x9cU;
    vlSelfRef.__PVT__dmc_lut[109U] = 0x9eU;
    vlSelfRef.__PVT__dmc_lut[110U] = 0x9fU;
    vlSelfRef.__PVT__dmc_lut[111U] = 0xa1U;
    vlSelfRef.__PVT__dmc_lut[112U] = 0xa2U;
    vlSelfRef.__PVT__dmc_lut[113U] = 0xa4U;
    vlSelfRef.__PVT__dmc_lut[114U] = 0xa5U;
    vlSelfRef.__PVT__dmc_lut[115U] = 0xa6U;
    vlSelfRef.__PVT__dmc_lut[116U] = 0xa8U;
    vlSelfRef.__PVT__dmc_lut[117U] = 0xa9U;
    vlSelfRef.__PVT__dmc_lut[118U] = 0xabU;
    vlSelfRef.__PVT__dmc_lut[119U] = 0xacU;
    vlSelfRef.__PVT__dmc_lut[120U] = 0xaeU;
    vlSelfRef.__PVT__dmc_lut[121U] = 0xafU;
    vlSelfRef.__PVT__dmc_lut[122U] = 0xb1U;
    vlSelfRef.__PVT__dmc_lut[123U] = 0xb2U;
    vlSelfRef.__PVT__dmc_lut[124U] = 0xb3U;
    vlSelfRef.__PVT__dmc_lut[125U] = 0xb5U;
    vlSelfRef.__PVT__dmc_lut[126U] = 0xb6U;
    vlSelfRef.__PVT__dmc_lut[127U] = 0xb8U;
    vlSelfRef.__PVT__mix_lut = {{
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
}

VL_ATTR_COLD void Vnes_core_top_APUMixer___stl_sequent__TOP__nes_core_top__nes_inst__apu__mixer__0(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___stl_sequent__TOP__nes_core_top__nes_inst__apu__mixer__0\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mix = (0x000001ffU & ((VL_EXTEND_II(9,6, vlSelfRef.__PVT__tri_lut
                                                         [vlSelfRef.__PVT__triangle]) 
                                            + VL_EXTEND_II(9,6, vlSelfRef.__PVT__noise_lut
                                                           [vlSelfRef.__PVT__noise])) 
                                           + VL_EXTEND_II(9,8, vlSelfRef.__PVT__dmc_lut
                                                          [vlSelfRef.__PVT__dmc])));
    vlSelfRef.__PVT__ch2 = vlSelfRef.__PVT__mix_lut
        [vlSelfRef.__PVT__mix];
}

VL_ATTR_COLD void Vnes_core_top_APUMixer___stl_sequent__TOP__nes_core_top__nes_inst__apu__mixer__1(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___stl_sequent__TOP__nes_core_top__nes_inst__apu__mixer__1\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__squares = (0x0000001fU & (VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__square1)) 
                                               + VL_EXTEND_II(5,4, (IData)(vlSelfRef.__PVT__square2))));
    vlSelfRef.__PVT__ch1 = vlSelfRef.__PVT__pulse_lut
        [vlSelfRef.__PVT__squares];
    vlSelfRef.__PVT__sample = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__ch1) 
                                              + (IData)(vlSelfRef.__PVT__ch2)));
}

VL_ATTR_COLD void Vnes_core_top_APUMixer___ctor_var_reset(Vnes_core_top_APUMixer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnes_core_top_APUMixer___ctor_var_reset\n"); );
    Vnes_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__square1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1602102521398444350ull);
    vlSelf->__PVT__square2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6488098525695003503ull);
    vlSelf->__PVT__triangle = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16224838720750133483ull);
    vlSelf->__PVT__noise = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1387613069618521645ull);
    vlSelf->__PVT__dmc = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18332963196532425674ull);
    vlSelf->__PVT__sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14877665802122487536ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__pulse_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9885999113309994513ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tri_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18223293973825997757ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__noise_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 942860798583068142ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__dmc_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 325641050543517787ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__mix_lut[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17221721914120315695ull);
    }
    vlSelf->__PVT__squares = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4497236486502429183ull);
    vlSelf->__PVT__ch1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3701717528361854871ull);
    vlSelf->__PVT__mix = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1521497344567302826ull);
    vlSelf->__PVT__ch2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8524575311302201759ull);
}
