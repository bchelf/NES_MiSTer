// Simulation-only synthesized Verilog netlist of rtl/t65/T65.vhd
// Source provenance: local MiSTer NES core T65 VHDL (rtl/t65/*) synthesized with GHDL 6.0.0
// Generation command:
//   ghdl -a --std=08 -fsynopsys -fexplicit rtl/bus_savestates.vhd rtl/t65/T65_Pack.vhd rtl/t65/T65_MCode.vhd rtl/t65/T65_ALU.vhd rtl/t65/T65.vhd
//   ghdl --synth --std=08 -fsynopsys -fexplicit --out=verilog T65 > sim/third_party/t65/T65_synth.v

module t65_alu_Brtl
  (input  [1:0] mode,
   input  bcd_en,
   input  [4:0] op,
   input  [7:0] busa,
   input  [7:0] busb,
   input  [7:0] p_in,
   output [7:0] p_out,
   output [7:0] q);
  wire adc_z;
  wire adc_c;
  wire adc_v;
  wire adc_n;
  wire [7:0] adc_q;
  wire sbc_z;
  wire sbc_c;
  wire sbc_v;
  wire sbc_n;
  wire [7:0] sbc_q;
  wire [7:0] sbx_q;
  wire [3:0] n4199;
  wire n4200;
  wire [4:0] n4201;
  wire [6:0] n4202;
  wire [3:0] n4203;
  wire [4:0] n4205;
  wire [6:0] n4206;
  wire [6:0] n4207;
  wire [3:0] n4208;
  wire n4209;
  wire [4:0] n4210;
  wire [6:0] n4211;
  wire [3:0] n4212;
  wire [4:0] n4214;
  wire [6:0] n4215;
  wire [6:0] n4216;
  wire [3:0] n4217;
  wire n4219;
  wire [3:0] n4220;
  wire n4222;
  wire n4223;
  wire n4226;
  wire [4:0] n4227;
  wire n4229;
  wire n4230;
  wire n4231;
  wire n4232;
  wire [5:0] n4233;
  wire [5:0] n4235;
  wire [5:0] n4236;
  wire [5:0] n4237;
  wire n4238;
  wire [6:0] n4239;
  wire n4240;
  wire [6:0] n4241;
  wire n4242;
  wire n4243;
  wire [3:0] n4244;
  wire [4:0] n4245;
  wire [6:0] n4246;
  wire [3:0] n4247;
  wire [4:0] n4249;
  wire [6:0] n4250;
  wire [6:0] n4251;
  wire n4252;
  wire n4253;
  wire n4254;
  wire n4255;
  wire n4256;
  wire n4257;
  wire n4258;
  wire n4259;
  wire n4260;
  wire [4:0] n4261;
  wire n4263;
  wire n4264;
  wire n4265;
  wire n4266;
  wire [5:0] n4267;
  wire [5:0] n4269;
  wire [5:0] n4270;
  wire [5:0] n4271;
  wire n4272;
  wire [6:0] n4273;
  wire n4274;
  wire [6:0] n4275;
  wire n4276;
  wire n4277;
  wire [6:0] n4278;
  wire [3:0] n4279;
  wire [6:0] n4280;
  wire [3:0] n4281;
  wire [7:0] n4282;
  wire n4293;
  wire n4295;
  wire n4296;
  wire n4298;
  wire n4299;
  wire n4301;
  wire n4302;
  wire n4304;
  wire n4305;
  wire n4307;
  wire n4308;
  wire n4310;
  wire n4311;
  wire n4314;
  wire n4316;
  wire n4317;
  wire n4318;
  wire [3:0] n4319;
  wire [4:0] n4320;
  wire [6:0] n4321;
  wire [3:0] n4322;
  wire [4:0] n4324;
  wire [5:0] n4325;
  wire [6:0] n4326;
  wire [6:0] n4327;
  wire [3:0] n4328;
  wire [4:0] n4330;
  wire [5:0] n4331;
  wire [3:0] n4332;
  wire n4333;
  wire [4:0] n4334;
  wire [5:0] n4335;
  wire [5:0] n4336;
  wire [3:0] n4337;
  wire n4339;
  wire [3:0] n4340;
  wire n4342;
  wire n4343;
  wire n4346;
  wire n4347;
  wire n4348;
  wire n4349;
  wire n4350;
  wire n4351;
  wire n4352;
  wire n4353;
  wire n4354;
  wire n4355;
  wire n4356;
  wire [3:0] n4357;
  wire [3:0] n4358;
  wire [7:0] n4359;
  wire n4360;
  wire n4361;
  wire n4362;
  wire [4:0] n4363;
  wire [4:0] n4365;
  wire [4:0] n4366;
  wire [4:0] n4367;
  wire [3:0] n4368;
  wire [4:0] n4370;
  wire [5:0] n4371;
  wire [3:0] n4372;
  wire n4373;
  wire n4374;
  wire [6:0] n4375;
  wire n4376;
  wire [4:0] n4377;
  wire [5:0] n4378;
  wire [5:0] n4379;
  wire n4380;
  wire [4:0] n4381;
  wire [4:0] n4383;
  wire [4:0] n4384;
  wire [4:0] n4385;
  wire n4386;
  wire [4:0] n4387;
  wire [4:0] n4388;
  wire n4389;
  wire n4390;
  wire [5:0] n4391;
  wire [5:0] n4392;
  wire [3:0] n4393;
  wire [6:0] n4394;
  wire [3:0] n4395;
  wire [7:0] n4396;
  wire [7:0] n4403;
  wire n4405;
  wire [7:0] n4406;
  wire n4408;
  wire [7:0] n4409;
  wire n4411;
  wire n4413;
  wire n4415;
  wire n4417;
  wire n4419;
  wire [6:0] n4420;
  wire [7:0] n4422;
  wire n4423;
  wire n4425;
  wire [6:0] n4426;
  wire n4427;
  wire [7:0] n4428;
  wire n4429;
  wire n4431;
  wire [6:0] n4432;
  wire [7:0] n4434;
  wire n4435;
  wire n4437;
  wire n4438;
  wire [6:0] n4439;
  wire [7:0] n4440;
  wire n4441;
  wire n4443;
  wire n4444;
  wire [6:0] n4445;
  wire [6:0] n4446;
  wire [6:0] n4447;
  wire [7:0] n4448;
  wire n4449;
  wire n4450;
  wire n4451;
  wire n4452;
  wire n4453;
  wire [3:0] n4454;
  wire [3:0] n4455;
  wire [3:0] n4456;
  wire n4458;
  wire [3:0] n4459;
  wire [3:0] n4461;
  wire [3:0] n4462;
  wire [3:0] n4463;
  wire [3:0] n4464;
  wire [3:0] n4465;
  wire [3:0] n4466;
  wire n4468;
  wire [3:0] n4469;
  wire [3:0] n4471;
  wire n4474;
  wire [3:0] n4475;
  wire [3:0] n4476;
  wire n4477;
  wire n4478;
  wire [7:0] n4479;
  wire [7:0] n4480;
  wire n4482;
  wire n4483;
  wire n4485;
  wire [7:0] n4487;
  wire n4489;
  wire [7:0] n4491;
  wire n4493;
  wire [14:0] n4494;
  wire n4495;
  reg n4496;
  wire n4497;
  reg n4498;
  wire n4500;
  reg [7:0] n4502;
  reg [7:0] n4503;
  wire n4505;
  wire n4507;
  wire n4509;
  wire n4510;
  wire n4512;
  wire n4513;
  wire n4515;
  wire n4516;
  wire [7:0] n4517;
  wire n4519;
  wire n4522;
  wire n4524;
  wire n4525;
  wire n4526;
  wire n4528;
  wire n4531;
  wire n4533;
  wire n4534;
  wire n4536;
  wire n4539;
  wire [4:0] n4540;
  reg n4541;
  wire n4542;
  reg n4543;
  reg n4544;
  wire [3:0] n4545;
  wire n4547;
  wire [7:0] n4548;
  wire [7:0] n4550;
  assign p_out = n4550; //(module output)
  assign q = n4548; //(module output)
  /*# rtl/t65/T65_ALU.vhd:73:15 */
  assign adc_z = n4226; // (signal)
  /*# rtl/t65/T65_ALU.vhd:74:15 */
  assign adc_c = n4277; // (signal)
  /*# rtl/t65/T65_ALU.vhd:75:15 */
  assign adc_v = n4260; // (signal)
  /*# rtl/t65/T65_ALU.vhd:76:15 */
  assign adc_n = n4252; // (signal)
  /*# rtl/t65/T65_ALU.vhd:77:15 */
  assign adc_q = n4282; // (signal)
  /*# rtl/t65/T65_ALU.vhd:78:15 */
  assign sbc_z = n4346; // (signal)
  /*# rtl/t65/T65_ALU.vhd:79:15 */
  assign sbc_c = n4348; // (signal)
  /*# rtl/t65/T65_ALU.vhd:80:15 */
  assign sbc_v = n4355; // (signal)
  /*# rtl/t65/T65_ALU.vhd:81:15 */
  assign sbc_n = n4356; // (signal)
  /*# rtl/t65/T65_ALU.vhd:82:15 */
  assign sbc_q = n4396; // (signal)
  /*# rtl/t65/T65_ALU.vhd:83:15 */
  assign sbx_q = n4359; // (signal)
  /*# rtl/t65/T65_ALU.vhd:92:31 */
  assign n4199 = busa[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:92:50 */
  assign n4200 = p_in[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:92:44 */
  assign n4201 = {n4199, n4200};
  /*# rtl/t65/T65_ALU.vhd:92:11 */
  assign n4202 = {2'b0, n4201};  // uext
  /*# rtl/t65/T65_ALU.vhd:92:86 */
  assign n4203 = busb[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:92:99 */
  assign n4205 = {n4203, 1'b1};
  /*# rtl/t65/T65_ALU.vhd:92:66 */
  assign n4206 = {2'b0, n4205};  // uext
  /*# rtl/t65/T65_ALU.vhd:92:64 */
  assign n4207 = n4202 + n4206;
  /*# rtl/t65/T65_ALU.vhd:93:31 */
  assign n4208 = busa[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:93:48 */
  assign n4209 = n4207[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:93:44 */
  assign n4210 = {n4208, n4209};
  /*# rtl/t65/T65_ALU.vhd:93:11 */
  assign n4211 = {2'b0, n4210};  // uext
  /*# rtl/t65/T65_ALU.vhd:93:79 */
  assign n4212 = busb[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:93:92 */
  assign n4214 = {n4212, 1'b1};
  /*# rtl/t65/T65_ALU.vhd:93:59 */
  assign n4215 = {2'b0, n4214};  // uext
  /*# rtl/t65/T65_ALU.vhd:93:57 */
  assign n4216 = n4211 + n4215;
  /*# rtl/t65/T65_ALU.vhd:100:10 */
  assign n4217 = n4207[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:100:23 */
  assign n4219 = n4217 == 4'b0000;
  /*# rtl/t65/T65_ALU.vhd:100:33 */
  assign n4220 = n4216[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:100:46 */
  assign n4222 = n4220 == 4'b0000;
  /*# rtl/t65/T65_ALU.vhd:100:27 */
  assign n4223 = n4222 & n4219;
  /*# rtl/t65/T65_ALU.vhd:100:5 */
  assign n4226 = n4223 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:106:10 */
  assign n4227 = n4207[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:106:23 */
  assign n4229 = $unsigned(n4227) > $unsigned(5'b01001);
  /*# rtl/t65/T65_ALU.vhd:106:35 */
  assign n4230 = p_in[3]; // extract
  /*# rtl/t65/T65_ALU.vhd:106:27 */
  assign n4231 = n4230 & n4229;
  /*# rtl/t65/T65_ALU.vhd:106:50 */
  assign n4232 = bcd_en & n4231;
  /*# rtl/t65/T65_ALU.vhd:107:27 */
  assign n4233 = n4207[6:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:107:40 */
  assign n4235 = n4233 + 6'b000110;
  /*# rtl/t65/T65_ALU.vhd:88:14 */
  assign n4236 = n4207[6:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:106:5 */
  assign n4237 = n4232 ? n4235 : n4236;
  /*# rtl/t65/T65_ALU.vhd:88:14 */
  assign n4238 = n4207[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:88:14 */
  assign n4239 = {n4237, n4238};
  /*# rtl/t65/T65_ALU.vhd:110:12 */
  assign n4240 = n4239[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:88:14 */
  assign n4241 = {n4237, n4238};
  /*# rtl/t65/T65_ALU.vhd:110:21 */
  assign n4242 = n4241[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:110:16 */
  assign n4243 = n4240 | n4242;
  /*# rtl/t65/T65_ALU.vhd:111:31 */
  assign n4244 = busa[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:111:44 */
  assign n4245 = {n4244, n4243};
  /*# rtl/t65/T65_ALU.vhd:111:11 */
  assign n4246 = {2'b0, n4245};  // uext
  /*# rtl/t65/T65_ALU.vhd:111:75 */
  assign n4247 = busb[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:111:88 */
  assign n4249 = {n4247, 1'b1};
  /*# rtl/t65/T65_ALU.vhd:111:55 */
  assign n4250 = {2'b0, n4249};  // uext
  /*# rtl/t65/T65_ALU.vhd:111:53 */
  assign n4251 = n4246 + n4250;
  /*# rtl/t65/T65_ALU.vhd:113:16 */
  assign n4252 = n4251[4]; // extract
  /*# rtl/t65/T65_ALU.vhd:114:17 */
  assign n4253 = n4251[4]; // extract
  /*# rtl/t65/T65_ALU.vhd:114:29 */
  assign n4254 = busa[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:114:21 */
  assign n4255 = n4253 ^ n4254;
  /*# rtl/t65/T65_ALU.vhd:114:47 */
  assign n4256 = busa[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:114:59 */
  assign n4257 = busb[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:114:51 */
  assign n4258 = n4256 ^ n4257;
  /*# rtl/t65/T65_ALU.vhd:114:38 */
  assign n4259 = ~n4258;
  /*# rtl/t65/T65_ALU.vhd:114:34 */
  assign n4260 = n4255 & n4259;
  /*# rtl/t65/T65_ALU.vhd:120:10 */
  assign n4261 = n4251[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:120:23 */
  assign n4263 = $unsigned(n4261) > $unsigned(5'b01001);
  /*# rtl/t65/T65_ALU.vhd:120:35 */
  assign n4264 = p_in[3]; // extract
  /*# rtl/t65/T65_ALU.vhd:120:27 */
  assign n4265 = n4264 & n4263;
  /*# rtl/t65/T65_ALU.vhd:120:50 */
  assign n4266 = bcd_en & n4265;
  /*# rtl/t65/T65_ALU.vhd:121:27 */
  assign n4267 = n4251[6:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:121:40 */
  assign n4269 = n4267 + 6'b000110;
  /*# rtl/t65/T65_ALU.vhd:89:14 */
  assign n4270 = n4251[6:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:120:5 */
  assign n4271 = n4266 ? n4269 : n4270;
  /*# rtl/t65/T65_ALU.vhd:89:14 */
  assign n4272 = n4251[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:89:14 */
  assign n4273 = {n4271, n4272};
  /*# rtl/t65/T65_ALU.vhd:124:16 */
  assign n4274 = n4273[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:89:14 */
  assign n4275 = {n4271, n4272};
  /*# rtl/t65/T65_ALU.vhd:124:25 */
  assign n4276 = n4275[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:124:20 */
  assign n4277 = n4274 | n4276;
  /*# rtl/t65/T65_ALU.vhd:89:14 */
  assign n4278 = {n4271, n4272};
  /*# rtl/t65/T65_ALU.vhd:126:33 */
  assign n4279 = n4278[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:88:14 */
  assign n4280 = {n4237, n4238};
  /*# rtl/t65/T65_ALU.vhd:126:50 */
  assign n4281 = n4280[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:126:46 */
  assign n4282 = {n4279, n4281};
  /*# rtl/t65/T65_ALU.vhd:136:12 */
  assign n4293 = op == 5'b00001;
  /*# rtl/t65/T65_ALU.vhd:137:12 */
  assign n4295 = op == 5'b00011;
  /*# rtl/t65/T65_ALU.vhd:136:24 */
  assign n4296 = n4293 | n4295;
  /*# rtl/t65/T65_ALU.vhd:138:12 */
  assign n4298 = op == 5'b00101;
  /*# rtl/t65/T65_ALU.vhd:137:24 */
  assign n4299 = n4296 | n4298;
  /*# rtl/t65/T65_ALU.vhd:139:12 */
  assign n4301 = op == 5'b00111;
  /*# rtl/t65/T65_ALU.vhd:138:24 */
  assign n4302 = n4299 | n4301;
  /*# rtl/t65/T65_ALU.vhd:140:12 */
  assign n4304 = op == 5'b01001;
  /*# rtl/t65/T65_ALU.vhd:139:24 */
  assign n4305 = n4302 | n4304;
  /*# rtl/t65/T65_ALU.vhd:141:12 */
  assign n4307 = op == 5'b01011;
  /*# rtl/t65/T65_ALU.vhd:140:24 */
  assign n4308 = n4305 | n4307;
  /*# rtl/t65/T65_ALU.vhd:143:12 */
  assign n4310 = op == 5'b01110;
  /*# rtl/t65/T65_ALU.vhd:141:24 */
  assign n4311 = n4308 | n4310;
  /*# rtl/t65/T65_ALU.vhd:136:5 */
  assign n4314 = n4311 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:148:14 */
  assign n4316 = p_in[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:148:26 */
  assign n4317 = ~n4314;
  /*# rtl/t65/T65_ALU.vhd:148:23 */
  assign n4318 = n4316 | n4317;
  /*# rtl/t65/T65_ALU.vhd:149:31 */
  assign n4319 = busa[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:149:44 */
  assign n4320 = {n4319, n4318};
  /*# rtl/t65/T65_ALU.vhd:149:11 */
  assign n4321 = {2'b0, n4320};  // uext
  /*# rtl/t65/T65_ALU.vhd:149:75 */
  assign n4322 = busb[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:149:88 */
  assign n4324 = {n4322, 1'b1};
  /*# rtl/t65/T65_ALU.vhd:149:55 */
  assign n4325 = {1'b0, n4324};  // uext
  /*# rtl/t65/T65_ALU.vhd:149:53 */
  assign n4326 = {1'b0, n4325};  // uext
  /*# rtl/t65/T65_ALU.vhd:149:53 */
  assign n4327 = n4321 - n4326;
  /*# rtl/t65/T65_ALU.vhd:150:31 */
  assign n4328 = busa[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:150:44 */
  assign n4330 = {n4328, 1'b0};
  /*# rtl/t65/T65_ALU.vhd:150:11 */
  assign n4331 = {1'b0, n4330};  // uext
  /*# rtl/t65/T65_ALU.vhd:150:77 */
  assign n4332 = busb[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:150:94 */
  assign n4333 = n4327[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:150:90 */
  assign n4334 = {n4332, n4333};
  /*# rtl/t65/T65_ALU.vhd:150:57 */
  assign n4335 = {1'b0, n4334};  // uext
  /*# rtl/t65/T65_ALU.vhd:150:55 */
  assign n4336 = n4331 - n4335;
  /*# rtl/t65/T65_ALU.vhd:157:10 */
  assign n4337 = n4327[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:157:23 */
  assign n4339 = n4337 == 4'b0000;
  /*# rtl/t65/T65_ALU.vhd:157:33 */
  assign n4340 = n4336[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:157:46 */
  assign n4342 = n4340 == 4'b0000;
  /*# rtl/t65/T65_ALU.vhd:157:27 */
  assign n4343 = n4342 & n4339;
  /*# rtl/t65/T65_ALU.vhd:157:5 */
  assign n4346 = n4343 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:163:20 */
  assign n4347 = n4336[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:163:14 */
  assign n4348 = ~n4347;
  /*# rtl/t65/T65_ALU.vhd:164:17 */
  assign n4349 = n4336[4]; // extract
  /*# rtl/t65/T65_ALU.vhd:164:29 */
  assign n4350 = busa[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:164:21 */
  assign n4351 = n4349 ^ n4350;
  /*# rtl/t65/T65_ALU.vhd:164:43 */
  assign n4352 = busa[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:164:55 */
  assign n4353 = busb[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:164:47 */
  assign n4354 = n4352 ^ n4353;
  /*# rtl/t65/T65_ALU.vhd:164:34 */
  assign n4355 = n4351 & n4354;
  /*# rtl/t65/T65_ALU.vhd:165:16 */
  assign n4356 = n4336[4]; // extract
  /*# rtl/t65/T65_ALU.vhd:167:33 */
  assign n4357 = n4336[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:167:50 */
  assign n4358 = n4327[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:167:46 */
  assign n4359 = {n4357, n4358};
  /*# rtl/t65/T65_ALU.vhd:169:12 */
  assign n4360 = p_in[3]; // extract
  /*# rtl/t65/T65_ALU.vhd:169:27 */
  assign n4361 = bcd_en & n4360;
  /*# rtl/t65/T65_ALU.vhd:170:12 */
  assign n4362 = n4327[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:171:29 */
  assign n4363 = n4327[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:171:42 */
  assign n4365 = n4363 - 5'b00110;
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4366 = n4327[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:170:7 */
  assign n4367 = n4362 ? n4365 : n4366;
  /*# rtl/t65/T65_ALU.vhd:173:33 */
  assign n4368 = busa[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:173:46 */
  assign n4370 = {n4368, 1'b0};
  /*# rtl/t65/T65_ALU.vhd:173:13 */
  assign n4371 = {1'b0, n4370};  // uext
  /*# rtl/t65/T65_ALU.vhd:173:79 */
  assign n4372 = busb[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4373 = n4327[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4374 = n4327[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4375 = {n4374, n4367, n4373};
  /*# rtl/t65/T65_ALU.vhd:173:96 */
  assign n4376 = n4375[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:173:92 */
  assign n4377 = {n4372, n4376};
  /*# rtl/t65/T65_ALU.vhd:173:59 */
  assign n4378 = {1'b0, n4377};  // uext
  /*# rtl/t65/T65_ALU.vhd:173:57 */
  assign n4379 = n4371 - n4378;
  /*# rtl/t65/T65_ALU.vhd:174:12 */
  assign n4380 = n4379[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:175:29 */
  assign n4381 = n4379[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:175:42 */
  assign n4383 = n4381 - 5'b00110;
  /*# rtl/t65/T65_ALU.vhd:131:14 */
  assign n4384 = n4379[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:174:7 */
  assign n4385 = n4380 ? n4383 : n4384;
  /*# rtl/t65/T65_ALU.vhd:131:14 */
  assign n4386 = n4379[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4387 = n4327[5:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:169:5 */
  assign n4388 = n4361 ? n4367 : n4387;
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4389 = n4327[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4390 = n4327[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:169:5 */
  assign n4391 = {n4385, n4386};
  /*# rtl/t65/T65_ALU.vhd:169:5 */
  assign n4392 = n4361 ? n4391 : n4336;
  /*# rtl/t65/T65_ALU.vhd:179:33 */
  assign n4393 = n4392[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:130:14 */
  assign n4394 = {n4389, n4388, n4390};
  /*# rtl/t65/T65_ALU.vhd:179:50 */
  assign n4395 = n4394[4:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:179:46 */
  assign n4396 = {n4393, n4395};
  /*# rtl/t65/T65_ALU.vhd:196:21 */
  assign n4403 = busa | busb;
  /*# rtl/t65/T65_ALU.vhd:195:7 */
  assign n4405 = op == 5'b00000;
  /*# rtl/t65/T65_ALU.vhd:198:21 */
  assign n4406 = busa & busb;
  /*# rtl/t65/T65_ALU.vhd:197:7 */
  assign n4408 = op == 5'b00001;
  /*# rtl/t65/T65_ALU.vhd:200:21 */
  assign n4409 = busa ^ busb;
  /*# rtl/t65/T65_ALU.vhd:199:7 */
  assign n4411 = op == 5'b00010;
  /*# rtl/t65/T65_ALU.vhd:201:7 */
  assign n4413 = op == 5'b00011;
  /*# rtl/t65/T65_ALU.vhd:205:7 */
  assign n4415 = op == 5'b00110;
  /*# rtl/t65/T65_ALU.vhd:207:7 */
  assign n4417 = op == 5'b10001;
  /*# rtl/t65/T65_ALU.vhd:210:7 */
  assign n4419 = op == 5'b00111;
  /*# rtl/t65/T65_ALU.vhd:215:20 */
  assign n4420 = busa[6:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:215:33 */
  assign n4422 = {n4420, 1'b0};
  /*# rtl/t65/T65_ALU.vhd:216:30 */
  assign n4423 = busa[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:214:7 */
  assign n4425 = op == 5'b01000;
  /*# rtl/t65/T65_ALU.vhd:218:20 */
  assign n4426 = busa[6:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:218:39 */
  assign n4427 = p_in[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:218:33 */
  assign n4428 = {n4426, n4427};
  /*# rtl/t65/T65_ALU.vhd:219:30 */
  assign n4429 = busa[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:217:7 */
  assign n4431 = op == 5'b01001;
  /*# rtl/t65/T65_ALU.vhd:221:26 */
  assign n4432 = busa[7:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:221:20 */
  assign n4434 = {1'b0, n4432};
  /*# rtl/t65/T65_ALU.vhd:222:30 */
  assign n4435 = busa[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:220:7 */
  assign n4437 = op == 5'b01010;
  /*# rtl/t65/T65_ALU.vhd:224:20 */
  assign n4438 = p_in[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:224:35 */
  assign n4439 = busa[7:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:224:29 */
  assign n4440 = {n4438, n4439};
  /*# rtl/t65/T65_ALU.vhd:225:30 */
  assign n4441 = busa[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:223:7 */
  assign n4443 = op == 5'b01011;
  /*# rtl/t65/T65_ALU.vhd:227:20 */
  assign n4444 = p_in[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:227:36 */
  assign n4445 = busa[7:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:227:57 */
  assign n4446 = busb[7:1]; // extract
  /*# rtl/t65/T65_ALU.vhd:227:49 */
  assign n4447 = n4445 & n4446;
  /*# rtl/t65/T65_ALU.vhd:227:29 */
  assign n4448 = {n4444, n4447};
  /*# rtl/t65/T65_ALU.vhd:228:29 */
  assign n4449 = n4448[5]; // extract
  /*# rtl/t65/T65_ALU.vhd:228:40 */
  assign n4450 = n4448[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:228:33 */
  assign n4451 = n4449 ^ n4450;
  /*# rtl/t65/T65_ALU.vhd:230:16 */
  assign n4452 = p_in[3]; // extract
  /*# rtl/t65/T65_ALU.vhd:230:29 */
  assign n4453 = bcd_en & n4452;
  /*# rtl/t65/T65_ALU.vhd:231:19 */
  assign n4454 = busa[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:231:40 */
  assign n4455 = busb[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:231:32 */
  assign n4456 = n4454 & n4455;
  /*# rtl/t65/T65_ALU.vhd:231:54 */
  assign n4458 = $unsigned(n4456) > $unsigned(4'b0100);
  /*# rtl/t65/T65_ALU.vhd:232:62 */
  assign n4459 = n4448[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:232:76 */
  assign n4461 = n4459 + 4'b0110;
  /*# rtl/t65/T65_ALU.vhd:187:14 */
  assign n4462 = n4448[3:0]; // extract
  /*# rtl/t65/T65_ALU.vhd:231:11 */
  assign n4463 = n4458 ? n4461 : n4462;
  /*# rtl/t65/T65_ALU.vhd:234:19 */
  assign n4464 = busa[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:234:40 */
  assign n4465 = busb[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:234:32 */
  assign n4466 = n4464 & n4465;
  /*# rtl/t65/T65_ALU.vhd:234:54 */
  assign n4468 = $unsigned(n4466) > $unsigned(4'b0100);
  /*# rtl/t65/T65_ALU.vhd:235:62 */
  assign n4469 = n4448[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:235:76 */
  assign n4471 = n4469 + 4'b0110;
  /*# rtl/t65/T65_ALU.vhd:234:11 */
  assign n4474 = n4468 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:187:14 */
  assign n4475 = n4448[7:4]; // extract
  /*# rtl/t65/T65_ALU.vhd:234:11 */
  assign n4476 = n4468 ? n4471 : n4475;
  /*# rtl/t65/T65_ALU.vhd:241:31 */
  assign n4477 = n4448[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:230:9 */
  assign n4478 = n4453 ? n4474 : n4477;
  /*# rtl/t65/T65_ALU.vhd:230:9 */
  assign n4479 = {n4476, n4463};
  /*# rtl/t65/T65_ALU.vhd:230:9 */
  assign n4480 = n4453 ? n4479 : n4448;
  /*# rtl/t65/T65_ALU.vhd:226:7 */
  assign n4482 = op == 5'b01111;
  /*# rtl/t65/T65_ALU.vhd:244:30 */
  assign n4483 = busb[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:243:7 */
  assign n4485 = op == 5'b01100;
  /*# rtl/t65/T65_ALU.vhd:246:48 */
  assign n4487 = busa - 8'b00000001;
  /*# rtl/t65/T65_ALU.vhd:245:7 */
  assign n4489 = op == 5'b01101;
  /*# rtl/t65/T65_ALU.vhd:248:48 */
  assign n4491 = busa + 8'b00000001;
  /*# rtl/t65/T65_ALU.vhd:247:7 */
  assign n4493 = op == 5'b01110;
  /*# rtl/t65/T65_ALU.vhd:194:5 */
  assign n4494 = {n4493, n4489, n4485, n4482, n4443, n4437, n4431, n4425, n4419, n4417, n4415, n4413, n4411, n4408, n4405};
  /*# rtl/t65/T65_ALU.vhd:65:5 */
  assign n4495 = p_in[0]; // extract
  /*# rtl/t65/T65_ALU.vhd:194:5 */
  always @*
    case (n4494)
      15'b100000000000000: n4496 = n4495;
      15'b010000000000000: n4496 = n4495;
      15'b001000000000000: n4496 = n4495;
      15'b000100000000000: n4496 = n4478;
      15'b000010000000000: n4496 = n4441;
      15'b000001000000000: n4496 = n4435;
      15'b000000100000000: n4496 = n4429;
      15'b000000010000000: n4496 = n4423;
      15'b000000001000000: n4496 = sbc_c;
      15'b000000000100000: n4496 = sbc_c;
      15'b000000000010000: n4496 = sbc_c;
      15'b000000000001000: n4496 = adc_c;
      15'b000000000000100: n4496 = n4495;
      15'b000000000000010: n4496 = n4495;
      15'b000000000000001: n4496 = n4495;
      default: n4496 = n4495;
    endcase
  /*# rtl/t65/T65_ALU.vhd:65:5 */
  assign n4497 = p_in[6]; // extract
  /*# rtl/t65/T65_ALU.vhd:194:5 */
  always @*
    case (n4494)
      15'b100000000000000: n4498 = n4497;
      15'b010000000000000: n4498 = n4497;
      15'b001000000000000: n4498 = n4483;
      15'b000100000000000: n4498 = n4451;
      15'b000010000000000: n4498 = n4497;
      15'b000001000000000: n4498 = n4497;
      15'b000000100000000: n4498 = n4497;
      15'b000000010000000: n4498 = n4497;
      15'b000000001000000: n4498 = sbc_v;
      15'b000000000100000: n4498 = n4497;
      15'b000000000010000: n4498 = n4497;
      15'b000000000001000: n4498 = adc_v;
      15'b000000000000100: n4498 = n4497;
      15'b000000000000010: n4498 = n4497;
      15'b000000000000001: n4498 = n4497;
      default: n4498 = n4497;
    endcase
  /*# rtl/t65/T65_ALU.vhd:65:5 */
  assign n4500 = p_in[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:194:5 */
  always @*
    case (n4494)
      15'b100000000000000: n4502 = n4491;
      15'b010000000000000: n4502 = n4487;
      15'b001000000000000: n4502 = busa;
      15'b000100000000000: n4502 = n4448;
      15'b000010000000000: n4502 = n4440;
      15'b000001000000000: n4502 = n4434;
      15'b000000100000000: n4502 = n4428;
      15'b000000010000000: n4502 = n4422;
      15'b000000001000000: n4502 = sbc_q;
      15'b000000000100000: n4502 = sbx_q;
      15'b000000000010000: n4502 = busa;
      15'b000000000001000: n4502 = adc_q;
      15'b000000000000100: n4502 = n4409;
      15'b000000000000010: n4502 = n4406;
      15'b000000000000001: n4502 = n4403;
      default: n4502 = busa;
    endcase
  /*# rtl/t65/T65_ALU.vhd:194:5 */
  always @*
    case (n4494)
      15'b100000000000000: n4503 = busa;
      15'b010000000000000: n4503 = busa;
      15'b001000000000000: n4503 = busa;
      15'b000100000000000: n4503 = n4480;
      15'b000010000000000: n4503 = busa;
      15'b000001000000000: n4503 = busa;
      15'b000000100000000: n4503 = busa;
      15'b000000010000000: n4503 = busa;
      15'b000000001000000: n4503 = busa;
      15'b000000000100000: n4503 = busa;
      15'b000000000010000: n4503 = busa;
      15'b000000000001000: n4503 = busa;
      15'b000000000000100: n4503 = busa;
      15'b000000000000010: n4503 = busa;
      15'b000000000000001: n4503 = busa;
      default: n4503 = busa;
    endcase
  /*# rtl/t65/T65_ALU.vhd:255:7 */
  assign n4505 = op == 5'b00011;
  /*# rtl/t65/T65_ALU.vhd:258:7 */
  assign n4507 = op == 5'b00110;
  /*# rtl/t65/T65_ALU.vhd:258:22 */
  assign n4509 = op == 5'b00111;
  /*# rtl/t65/T65_ALU.vhd:258:22 */
  assign n4510 = n4507 | n4509;
  /*# rtl/t65/T65_ALU.vhd:258:33 */
  assign n4512 = op == 5'b10001;
  /*# rtl/t65/T65_ALU.vhd:258:33 */
  assign n4513 = n4510 | n4512;
  /*# rtl/t65/T65_ALU.vhd:261:7 */
  assign n4515 = op == 5'b00100;
  /*# rtl/t65/T65_ALU.vhd:263:30 */
  assign n4516 = busb[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:264:18 */
  assign n4517 = busa & busb;
  /*# rtl/t65/T65_ALU.vhd:264:28 */
  assign n4519 = n4517 == 8'b00000000;
  /*# rtl/t65/T65_ALU.vhd:264:9 */
  assign n4522 = n4519 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:262:7 */
  assign n4524 = op == 5'b01100;
  /*# rtl/t65/T65_ALU.vhd:270:29 */
  assign n4525 = n4502[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:271:29 */
  assign n4526 = n4502[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:272:16 */
  assign n4528 = n4502 == 8'b00000000;
  /*# rtl/t65/T65_ALU.vhd:272:9 */
  assign n4531 = n4528 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:269:7 */
  assign n4533 = op == 5'b10000;
  /*# rtl/t65/T65_ALU.vhd:278:29 */
  assign n4534 = n4502[7]; // extract
  /*# rtl/t65/T65_ALU.vhd:279:16 */
  assign n4536 = n4502 == 8'b00000000;
  /*# rtl/t65/T65_ALU.vhd:279:9 */
  assign n4539 = n4536 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_ALU.vhd:254:5 */
  assign n4540 = {n4533, n4524, n4515, n4513, n4505};
  /*# rtl/t65/T65_ALU.vhd:254:5 */
  always @*
    case (n4540)
      5'b10000: n4541 = n4526;
      5'b01000: n4541 = n4496;
      5'b00100: n4541 = n4496;
      5'b00010: n4541 = n4496;
      5'b00001: n4541 = n4496;
      default: n4541 = n4496;
    endcase
  /*# rtl/t65/T65_ALU.vhd:65:5 */
  assign n4542 = p_in[1]; // extract
  /*# rtl/t65/T65_ALU.vhd:254:5 */
  always @*
    case (n4540)
      5'b10000: n4543 = n4531;
      5'b01000: n4543 = n4522;
      5'b00100: n4543 = n4542;
      5'b00010: n4543 = sbc_z;
      5'b00001: n4543 = adc_z;
      default: n4543 = n4539;
    endcase
  /*# rtl/t65/T65_ALU.vhd:254:5 */
  always @*
    case (n4540)
      5'b10000: n4544 = n4525;
      5'b01000: n4544 = n4516;
      5'b00100: n4544 = n4500;
      5'b00010: n4544 = sbc_n;
      5'b00001: n4544 = adc_n;
      default: n4544 = n4534;
    endcase
  /*# rtl/t65/T65_ALU.vhd:65:5 */
  assign n4545 = p_in[5:2]; // extract
  /*# rtl/t65/T65_ALU.vhd:286:10 */
  assign n4547 = op == 5'b01111;
  /*# rtl/t65/T65_ALU.vhd:286:5 */
  assign n4548 = n4547 ? n4503 : n4502;
  /*# rtl/t65/T65_ALU.vhd:65:5 */
  assign n4550 = {n4544, n4498, n4545, n4543, n4541};
endmodule

module t65_mcode_Brtl
  (input  [1:0] mode,
   input  bcd_en,
   input  [7:0] ir,
   input  [2:0] mcycle,
   input  [7:0] p,
   input  rdy_mod,
   output [2:0] lcycle,
   output [4:0] alu_op,
   output [3:0] set_busa_to,
   output [1:0] set_addr_to,
   output [3:0] write_data,
   output [1:0] jump,
   output [1:0] baadd,
   output [1:0] baquirk,
   output brkatna,
   output adadd,
   output addy,
   output pcadd,
   output inc_s,
   output dec_s,
   output lda,
   output ldp,
   output ldx,
   output ldy,
   output lds,
   output lddi,
   output ldalu,
   output ldad,
   output ldbal,
   output ldbah,
   output savep,
   output write);
  wire branch;
  wire alumore;
  wire [2:0] n1992;
  wire n1993;
  wire n1994;
  wire n1996;
  wire n1997;
  wire n1999;
  wire n2000;
  wire n2001;
  wire n2003;
  wire n2004;
  wire n2006;
  wire n2007;
  wire n2008;
  wire n2010;
  wire n2011;
  wire n2013;
  wire n2014;
  wire n2015;
  wire n2017;
  wire n2018;
  wire [6:0] n2019;
  reg n2020;
  wire [2:0] n2023;
  wire [1:0] n2024;
  wire [2:0] n2025;
  wire n2027;
  wire n2028;
  wire [3:0] n2031;
  wire [3:0] n2033;
  wire n2035;
  wire [2:0] n2036;
  wire n2038;
  wire n2039;
  wire [3:0] n2042;
  wire [3:0] n2044;
  wire n2046;
  wire [2:0] n2047;
  wire n2049;
  wire [3:0] n2052;
  wire n2055;
  wire [2:0] n2056;
  wire n2058;
  wire [2:0] n2059;
  wire n2061;
  wire n2062;
  wire [2:0] n2063;
  wire n2065;
  wire n2066;
  wire n2067;
  wire [3:0] n2070;
  wire [3:0] n2072;
  wire n2074;
  wire [2:0] n2075;
  reg [3:0] n2079;
  reg [3:0] n2081;
  reg n2083;
  wire n2085;
  wire [1:0] n2086;
  wire n2087;
  wire n2089;
  wire n2090;
  wire n2092;
  wire n2093;
  wire n2096;
  wire n2098;
  wire n2100;
  wire n2102;
  wire [2:0] n2103;
  wire n2105;
  wire [3:0] n2108;
  wire n2111;
  wire [2:0] n2112;
  reg [3:0] n2114;
  reg n2119;
  reg n2123;
  reg n2125;
  reg n2127;
  wire n2129;
  wire [1:0] n2130;
  wire n2131;
  wire n2132;
  wire n2135;
  wire n2137;
  reg [3:0] n2140;
  reg n2142;
  wire n2144;
  wire [1:0] n2145;
  wire n2146;
  wire n2147;
  wire n2150;
  wire n2152;
  reg [3:0] n2155;
  reg n2157;
  wire n2159;
  wire [3:0] n2160;
  reg [3:0] n2162;
  reg [3:0] n2165;
  reg n2168;
  reg n2171;
  reg n2174;
  reg n2177;
  wire [1:0] n2179;
  wire n2181;
  wire n2182;
  wire n2183;
  wire n2185;
  wire n2186;
  wire n2187;
  wire n2188;
  wire n2189;
  wire n2191;
  wire [3:0] n2194;
  wire [3:0] n2195;
  wire [4:0] n2196;
  wire n2198;
  wire n2200;
  wire n2202;
  wire n2204;
  wire n2206;
  wire n2208;
  wire [5:0] n2209;
  reg [1:0] n2216;
  reg [3:0] n2220;
  reg [1:0] n2223;
  reg n2228;
  reg n2231;
  reg n2236;
  wire n2238;
  wire n2240;
  wire n2242;
  wire n2244;
  wire n2246;
  wire n2248;
  wire [4:0] n2249;
  reg [1:0] n2254;
  reg [3:0] n2257;
  reg [1:0] n2261;
  reg n2265;
  reg n2268;
  reg n2272;
  wire n2274;
  wire n2276;
  wire n2278;
  wire n2280;
  wire n2282;
  wire n2284;
  wire [4:0] n2285;
  reg [3:0] n2287;
  reg [1:0] n2293;
  reg [1:0] n2296;
  reg n2301;
  reg n2304;
  reg n2307;
  wire n2309;
  wire n2311;
  wire n2313;
  wire n2315;
  wire n2317;
  wire n2319;
  wire [4:0] n2320;
  reg [1:0] n2325;
  reg [1:0] n2329;
  reg n2333;
  reg n2336;
  wire n2338;
  wire n2340;
  wire n2341;
  wire n2342;
  wire [2:0] n2345;
  wire n2348;
  wire n2349;
  wire n2350;
  wire n2351;
  wire [3:0] n2352;
  wire n2354;
  wire n2356;
  wire n2358;
  wire [3:0] n2360;
  wire n2363;
  wire n2365;
  wire n2367;
  wire [3:0] n2369;
  wire n2372;
  wire n2374;
  wire [3:0] n2375;
  reg [3:0] n2378;
  reg n2380;
  wire [1:0] n2384;
  wire [3:0] n2385;
  wire n2387;
  wire n2389;
  wire n2391;
  wire [1:0] n2392;
  reg [1:0] n2394;
  reg [3:0] n2395;
  reg n2398;
  reg n2400;
  wire n2402;
  wire n2404;
  wire n2405;
  wire n2407;
  wire n2408;
  wire n2410;
  wire n2411;
  wire n2413;
  wire n2414;
  wire n2415;
  wire [2:0] n2418;
  wire [3:0] n2420;
  wire n2422;
  wire n2424;
  wire n2426;
  wire n2428;
  wire n2430;
  wire n2432;
  wire n2434;
  wire n2436;
  wire [3:0] n2437;
  reg n2439;
  reg n2442;
  reg n2443;
  reg n2444;
  wire n2446;
  wire n2447;
  wire n2448;
  wire n2449;
  wire n2452;
  wire n2454;
  wire n2456;
  wire n2457;
  wire n2458;
  wire n2459;
  wire [1:0] n2462;
  wire n2464;
  wire n2466;
  wire n2468;
  wire n2470;
  wire [3:0] n2471;
  reg [3:0] n2473;
  reg [1:0] n2476;
  reg n2479;
  reg n2481;
  reg n2483;
  wire n2485;
  wire n2487;
  wire n2488;
  wire n2490;
  wire n2491;
  wire n2493;
  wire n2494;
  wire n2496;
  wire n2498;
  wire [1:0] n2499;
  reg [1:0] n2502;
  wire n2504;
  wire n2506;
  wire n2507;
  wire n2509;
  wire n2510;
  wire n2512;
  wire n2514;
  wire [1:0] n2515;
  reg [3:0] n2517;
  wire n2519;
  wire n2521;
  wire n2523;
  wire [1:0] n2524;
  reg [3:0] n2526;
  wire n2528;
  wire n2530;
  wire n2532;
  wire n2534;
  wire n2536;
  wire [1:0] n2537;
  reg [3:0] n2539;
  wire n2541;
  wire n2543;
  wire n2544;
  wire n2551;
  wire n2553;
  wire n2554;
  wire n2556;
  wire n2557;
  wire n2559;
  wire n2560;
  wire n2567;
  wire n2569;
  wire n2570;
  wire n2572;
  wire n2574;
  wire [1:0] n2575;
  reg [3:0] n2577;
  wire n2579;
  wire n2581;
  wire n2582;
  wire n2584;
  wire n2586;
  wire n2588;
  wire [1:0] n2589;
  reg [3:0] n2591;
  wire n2593;
  wire n2595;
  wire n2597;
  wire [1:0] n2598;
  reg [1:0] n2601;
  wire n2603;
  wire [15:0] n2606;
  reg [2:0] n2612;
  reg [3:0] n2614;
  reg [1:0] n2616;
  reg [3:0] n2617;
  reg [1:0] n2619;
  reg n2621;
  reg n2623;
  reg n2626;
  reg n2628;
  reg n2631;
  reg n2633;
  reg n2635;
  reg n2637;
  reg n2639;
  reg n2641;
  wire n2643;
  wire n2645;
  wire n2646;
  wire n2648;
  wire n2649;
  wire n2651;
  wire n2652;
  wire n2654;
  wire n2655;
  wire [1:0] n2656;
  wire n2658;
  wire n2660;
  wire n2661;
  wire n2662;
  wire [2:0] n2665;
  wire [2:0] n2667;
  wire n2670;
  wire n2672;
  wire n2674;
  wire n2676;
  wire [2:0] n2677;
  wire n2679;
  wire n2682;
  wire n2684;
  wire n2686;
  wire n2687;
  wire n2688;
  wire [1:0] n2689;
  wire n2691;
  wire n2692;
  wire [1:0] n2695;
  wire n2698;
  wire n2701;
  wire n2703;
  wire n2705;
  wire n2707;
  wire [6:0] n2708;
  reg [3:0] n2710;
  reg [1:0] n2717;
  reg [1:0] n2720;
  reg [1:0] n2723;
  reg n2726;
  reg n2728;
  reg n2731;
  reg n2734;
  reg n2737;
  reg n2740;
  reg n2743;
  reg n2746;
  reg n2749;
  wire n2751;
  wire n2753;
  wire n2754;
  wire [2:0] n2755;
  wire n2757;
  wire n2759;
  wire n2761;
  reg [1:0] n2764;
  wire n2766;
  wire n2768;
  wire [2:0] n2769;
  wire n2771;
  wire n2773;
  wire n2774;
  wire n2776;
  wire n2777;
  wire n2779;
  wire n2780;
  wire n2782;
  wire n2784;
  wire [3:0] n2787;
  wire n2789;
  wire [3:0] n2790;
  reg [3:0] n2794;
  reg n2799;
  reg n2801;
  wire n2803;
  reg [1:0] n2806;
  wire [3:0] n2807;
  wire [1:0] n2809;
  wire n2810;
  wire n2811;
  wire n2813;
  wire n2815;
  wire n2817;
  wire [3:0] n2818;
  wire n2820;
  wire [3:0] n2821;
  wire n2823;
  wire n2824;
  wire [3:0] n2825;
  wire n2827;
  wire n2828;
  wire [2:0] n2831;
  wire [1:0] n2834;
  wire [2:0] n2836;
  wire [1:0] n2838;
  wire n2840;
  wire n2842;
  wire [1:0] n2843;
  reg [2:0] n2845;
  reg [1:0] n2847;
  reg n2848;
  wire n2850;
  wire n2852;
  wire n2853;
  wire [2:0] n2854;
  wire n2856;
  wire n2859;
  wire n2861;
  wire [2:0] n2862;
  wire n2864;
  wire n2867;
  wire n2869;
  wire n2871;
  wire [2:0] n2872;
  reg [1:0] n2875;
  reg [1:0] n2878;
  reg n2881;
  reg n2883;
  reg n2885;
  wire n2887;
  wire [1:0] n2888;
  wire n2890;
  wire n2891;
  wire n2892;
  wire n2894;
  wire n2895;
  wire n2896;
  wire n2897;
  wire n2898;
  wire n2900;
  wire n2901;
  wire n2902;
  wire n2904;
  wire n2906;
  wire n2908;
  wire n2911;
  wire n2913;
  wire n2915;
  wire n2917;
  wire n2918;
  wire n2919;
  wire [3:0] n2921;
  wire n2924;
  wire n2927;
  wire n2929;
  wire [3:0] n2930;
  reg [3:0] n2931;
  reg [1:0] n2936;
  reg [1:0] n2939;
  reg n2942;
  reg n2945;
  reg n2948;
  reg n2951;
  reg n2954;
  reg n2956;
  wire [1:0] n2957;
  wire n2959;
  wire n2961;
  wire n2963;
  wire [2:0] n2964;
  wire n2966;
  wire n2969;
  wire n2971;
  wire n2973;
  wire [2:0] n2974;
  reg [1:0] n2977;
  reg [1:0] n2980;
  reg n2983;
  reg n2985;
  wire [2:0] n2988;
  wire [3:0] n2989;
  wire [1:0] n2990;
  wire [1:0] n2991;
  wire n2992;
  wire n2994;
  wire n2996;
  wire n2997;
  wire n2999;
  wire n3000;
  wire n3002;
  wire n3004;
  wire n3006;
  wire n3007;
  wire n3009;
  wire n3010;
  wire [1:0] n3011;
  wire n3013;
  wire [4:0] n3014;
  wire n3016;
  wire n3017;
  wire n3018;
  wire n3019;
  wire n3021;
  wire n3023;
  wire [1:0] n3024;
  reg [1:0] n3028;
  reg n3031;
  wire n3033;
  wire n3035;
  wire [1:0] n3038;
  wire n3040;
  wire [1:0] n3043;
  wire n3045;
  wire n3047;
  wire [1:0] n3050;
  wire [1:0] n3053;
  wire [1:0] n3056;
  wire n3058;
  wire n3060;
  wire [3:0] n3061;
  reg [1:0] n3063;
  reg [1:0] n3067;
  reg [1:0] n3069;
  reg n3073;
  reg n3076;
  reg n3079;
  wire [2:0] n3082;
  wire [1:0] n3084;
  wire [1:0] n3085;
  wire [1:0] n3087;
  wire n3088;
  wire n3090;
  wire n3092;
  wire [2:0] n3093;
  wire n3095;
  wire n3098;
  wire n3100;
  wire n3102;
  wire [2:0] n3103;
  wire n3105;
  wire n3108;
  wire n3110;
  wire n3112;
  wire [3:0] n3113;
  reg [1:0] n3116;
  reg [1:0] n3120;
  reg n3123;
  reg n3126;
  reg n3128;
  reg n3130;
  wire [2:0] n3132;
  wire [1:0] n3133;
  wire [1:0] n3134;
  wire [1:0] n3136;
  wire n3138;
  wire n3139;
  wire n3140;
  wire n3142;
  wire n3144;
  wire n3146;
  wire [1:0] n3147;
  wire n3149;
  wire n3150;
  wire n3151;
  wire n3153;
  wire n3154;
  wire n3155;
  wire n3156;
  wire n3157;
  wire n3159;
  wire n3160;
  wire n3161;
  wire n3163;
  wire n3165;
  wire n3167;
  wire n3169;
  wire n3172;
  wire n3174;
  wire n3176;
  wire n3178;
  wire n3179;
  wire n3180;
  wire [3:0] n3182;
  wire n3185;
  wire n3187;
  wire [4:0] n3188;
  reg [3:0] n3189;
  reg [1:0] n3194;
  reg [1:0] n3198;
  reg n3201;
  reg n3204;
  reg n3207;
  reg n3210;
  reg n3213;
  reg n3216;
  reg n3218;
  wire [1:0] n3219;
  wire n3221;
  wire n3223;
  wire n3225;
  wire n3227;
  wire [2:0] n3228;
  wire n3230;
  wire n3233;
  wire n3235;
  wire n3237;
  wire [3:0] n3238;
  reg [1:0] n3241;
  reg [1:0] n3245;
  reg n3248;
  reg n3251;
  reg n3253;
  wire [2:0] n3256;
  wire [3:0] n3257;
  wire [1:0] n3258;
  wire [1:0] n3259;
  wire n3260;
  wire n3262;
  wire n3264;
  wire n3265;
  wire n3266;
  wire n3268;
  wire n3269;
  wire n3271;
  wire n3273;
  wire n3275;
  wire n3276;
  wire n3278;
  wire n3279;
  wire [2:0] n3282;
  wire n3284;
  wire n3286;
  wire n3288;
  wire [2:0] n3289;
  reg [1:0] n3293;
  reg n3296;
  reg n3299;
  wire n3301;
  wire [1:0] n3302;
  wire n3304;
  wire n3306;
  wire n3307;
  wire n3308;
  wire [2:0] n3311;
  wire [2:0] n3313;
  wire n3316;
  wire n3318;
  wire n3320;
  wire n3322;
  wire [2:0] n3323;
  wire n3325;
  wire [3:0] n3326;
  wire n3328;
  wire [1:0] n3331;
  wire n3332;
  wire n3333;
  wire n3335;
  wire n3336;
  wire n3339;
  wire [1:0] n3341;
  wire n3343;
  wire n3346;
  wire n3348;
  wire n3350;
  wire n3351;
  wire n3352;
  wire [1:0] n3353;
  wire n3355;
  wire n3356;
  wire [1:0] n3359;
  wire n3362;
  wire n3365;
  wire n3367;
  wire n3369;
  wire n3371;
  wire [6:0] n3372;
  reg [3:0] n3375;
  reg [1:0] n3382;
  reg [1:0] n3385;
  reg [1:0] n3390;
  reg [1:0] n3392;
  reg n3394;
  reg n3396;
  reg n3399;
  reg n3402;
  reg n3405;
  reg n3408;
  reg n3411;
  reg n3414;
  reg n3417;
  wire n3419;
  wire n3421;
  wire n3422;
  wire [1:0] n3423;
  wire n3425;
  wire n3426;
  wire n3427;
  wire n3429;
  wire n3430;
  wire n3431;
  wire n3432;
  wire n3433;
  wire n3435;
  wire n3436;
  wire n3437;
  wire n3439;
  wire n3441;
  wire n3443;
  wire n3445;
  wire n3448;
  wire n3450;
  wire n3452;
  wire n3453;
  wire n3454;
  wire n3457;
  wire n3459;
  wire n3461;
  wire n3462;
  wire n3463;
  wire [3:0] n3465;
  wire n3468;
  wire n3470;
  wire [4:0] n3471;
  reg [3:0] n3472;
  reg [1:0] n3478;
  reg [1:0] n3481;
  reg n3484;
  reg n3487;
  reg n3490;
  reg n3493;
  reg n3496;
  reg n3499;
  reg n3501;
  wire [1:0] n3502;
  wire n3504;
  wire n3505;
  wire n3506;
  wire n3508;
  wire n3510;
  wire n3512;
  wire [2:0] n3513;
  wire n3515;
  wire n3518;
  wire [2:0] n3519;
  wire n3521;
  wire n3524;
  wire n3526;
  wire n3528;
  wire [3:0] n3529;
  reg [1:0] n3533;
  reg [1:0] n3536;
  reg n3539;
  reg n3541;
  reg n3544;
  reg n3546;
  wire [2:0] n3549;
  wire [3:0] n3550;
  wire [1:0] n3551;
  wire [1:0] n3552;
  wire n3553;
  wire n3555;
  wire n3556;
  wire n3558;
  wire n3560;
  wire n3561;
  wire n3563;
  wire n3564;
  wire n3566;
  wire n3568;
  wire n3570;
  wire n3571;
  wire n3573;
  wire n3574;
  wire n3576;
  wire n3577;
  wire [1:0] n3578;
  wire n3580;
  wire n3582;
  wire n3583;
  wire n3584;
  wire [2:0] n3587;
  wire [2:0] n3589;
  wire n3592;
  wire n3594;
  wire n3596;
  wire [2:0] n3597;
  wire n3599;
  wire [3:0] n3600;
  wire n3602;
  wire [1:0] n3605;
  wire n3606;
  wire n3607;
  wire n3609;
  wire n3610;
  wire n3613;
  wire [1:0] n3615;
  wire n3617;
  wire n3620;
  wire n3622;
  wire n3624;
  wire n3625;
  wire n3626;
  wire [1:0] n3627;
  wire n3629;
  wire n3630;
  wire [1:0] n3633;
  wire n3636;
  wire n3639;
  wire n3641;
  wire n3643;
  wire n3645;
  wire [5:0] n3646;
  reg [3:0] n3649;
  reg [1:0] n3654;
  reg [1:0] n3658;
  reg [1:0] n3662;
  reg [1:0] n3664;
  reg n3666;
  reg n3668;
  reg n3671;
  reg n3674;
  reg n3677;
  reg n3680;
  reg n3683;
  reg n3686;
  wire n3688;
  wire n3690;
  wire n3691;
  wire [1:0] n3692;
  wire n3694;
  wire n3695;
  wire n3696;
  wire n3698;
  wire n3699;
  wire n3700;
  wire n3701;
  wire n3702;
  wire n3704;
  wire n3705;
  wire n3706;
  wire n3708;
  wire n3710;
  wire n3712;
  wire n3714;
  wire n3716;
  wire n3719;
  wire n3721;
  wire n3723;
  wire n3725;
  wire n3726;
  wire n3727;
  wire [3:0] n3729;
  wire n3732;
  wire n3734;
  wire [5:0] n3735;
  reg [3:0] n3737;
  reg [1:0] n3743;
  reg [1:0] n3747;
  reg [1:0] n3751;
  reg n3754;
  reg n3757;
  reg n3760;
  reg n3763;
  reg n3766;
  reg n3769;
  reg n3771;
  wire [1:0] n3772;
  wire n3774;
  wire n3776;
  wire n3777;
  wire n3778;
  wire n3779;
  wire [1:0] n3780;
  wire n3782;
  wire n3783;
  wire n3785;
  wire n3786;
  wire n3788;
  wire n3790;
  wire [1:0] n3791;
  wire n3793;
  wire [3:0] n3794;
  wire n3796;
  wire n3797;
  wire [3:0] n3800;
  wire n3802;
  wire [2:0] n3803;
  wire n3805;
  wire [1:0] n3806;
  wire n3808;
  wire n3810;
  wire n3811;
  wire n3813;
  wire [1:0] n3814;
  reg [1:0] n3818;
  wire [1:0] n3820;
  wire n3823;
  wire n3826;
  wire n3828;
  wire n3830;
  wire [4:0] n3831;
  reg [3:0] n3832;
  reg [1:0] n3836;
  reg [1:0] n3840;
  reg [1:0] n3844;
  reg [1:0] n3846;
  reg n3848;
  reg n3851;
  reg n3854;
  reg n3856;
  wire [2:0] n3859;
  wire [3:0] n3860;
  wire [1:0] n3861;
  wire [1:0] n3862;
  wire [1:0] n3863;
  wire [1:0] n3865;
  wire n3867;
  wire n3868;
  wire n3870;
  wire n3872;
  wire n3873;
  wire n3874;
  wire n3876;
  wire n3877;
  wire n3879;
  wire n3881;
  wire n3883;
  wire n3884;
  wire n3886;
  wire n3887;
  wire n3889;
  wire n3890;
  wire [13:0] n3891;
  reg [2:0] n3894;
  reg [3:0] n3896;
  reg [1:0] n3898;
  reg [3:0] n3900;
  reg [1:0] n3902;
  reg [1:0] n3905;
  reg [1:0] n3908;
  reg n3911;
  reg n3914;
  reg n3917;
  reg n3920;
  reg n3923;
  reg n3926;
  reg n3928;
  reg n3930;
  reg n3932;
  reg n3933;
  reg n3934;
  reg n3936;
  reg n3939;
  reg n3942;
  reg n3945;
  reg n3948;
  reg n3951;
  reg n3954;
  reg n3957;
  wire [1:0] n3962;
  wire [2:0] n3963;
  wire [2:0] n3964;
  wire n3966;
  wire n3968;
  wire n3969;
  wire n3971;
  wire n3973;
  wire [2:0] n3974;
  reg [4:0] n3979;
  wire n3981;
  wire n3983;
  wire n3984;
  wire n3986;
  wire n3987;
  wire [2:0] n3988;
  wire n3990;
  wire n3992;
  wire n3993;
  wire n3995;
  wire [1:0] n3996;
  reg [4:0] n4000;
  wire n4002;
  wire [2:0] n4003;
  wire n4005;
  reg [4:0] n4008;
  wire n4010;
  wire [2:0] n4011;
  wire n4013;
  reg [4:0] n4016;
  wire [2:0] n4017;
  reg [4:0] n4018;
  wire n4020;
  wire [2:0] n4021;
  wire [30:0] n4022;
  wire n4024;
  wire n4026;
  wire n4028;
  wire n4030;
  wire n4032;
  wire n4034;
  wire n4036;
  wire [6:0] n4037;
  reg [4:0] n4046;
  wire n4048;
  wire [2:0] n4049;
  wire [30:0] n4050;
  wire [2:0] n4051;
  wire n4053;
  wire n4055;
  wire n4056;
  wire [4:0] n4059;
  wire n4062;
  wire [2:0] n4063;
  wire n4065;
  wire n4067;
  wire n4068;
  wire [4:0] n4071;
  wire n4074;
  wire n4076;
  wire n4078;
  wire [2:0] n4079;
  wire n4081;
  wire [4:0] n4084;
  wire n4087;
  wire n4089;
  wire n4091;
  wire [6:0] n4092;
  reg [4:0] n4098;
  wire n4100;
  wire [2:0] n4101;
  wire [30:0] n4102;
  wire n4104;
  wire [4:0] n4107;
  wire n4109;
  wire n4111;
  wire n4113;
  wire n4115;
  wire n4117;
  wire n4118;
  wire n4120;
  wire [2:0] n4121;
  wire [30:0] n4122;
  wire n4124;
  wire n4126;
  wire n4128;
  wire n4130;
  wire n4132;
  wire n4134;
  wire n4136;
  wire [6:0] n4137;
  reg [4:0] n4146;
  wire [2:0] n4147;
  wire [30:0] n4148;
  wire n4150;
  wire n4152;
  wire n4154;
  wire n4156;
  wire n4158;
  wire n4160;
  wire [2:0] n4161;
  wire n4163;
  wire [4:0] n4166;
  wire n4169;
  wire [6:0] n4170;
  reg [4:0] n4178;
  wire [4:0] n4179;
  wire [4:0] n4181;
  wire [4:0] n4183;
  wire [4:0] n4185;
  wire [4:0] n4187;
  reg [4:0] n4188;
  wire [2:0] n4189;
  reg [4:0] n4190;
  assign lcycle = n3894; //(module output)
  assign alu_op = n4190; //(module output)
  assign set_busa_to = n3896; //(module output)
  assign set_addr_to = n3898; //(module output)
  assign write_data = n3900; //(module output)
  assign jump = n3902; //(module output)
  assign baadd = n3905; //(module output)
  assign baquirk = n3908; //(module output)
  assign brkatna = n3911; //(module output)
  assign adadd = n3914; //(module output)
  assign addy = n3917; //(module output)
  assign pcadd = n3920; //(module output)
  assign inc_s = n3923; //(module output)
  assign dec_s = n3926; //(module output)
  assign lda = n3928; //(module output)
  assign ldp = n3930; //(module output)
  assign ldx = n3932; //(module output)
  assign ldy = n3933; //(module output)
  assign lds = n3934; //(module output)
  assign lddi = n3936; //(module output)
  assign ldalu = n3939; //(module output)
  assign ldad = n3942; //(module output)
  assign ldbal = n3945; //(module output)
  assign ldbah = n3948; //(module output)
  assign savep = n3951; //(module output)
  assign write = n3954; //(module output)
  /*# rtl/t65/T65_MCode.vhd:97:10 */
  assign branch = n2020; // (signal)
  /*# rtl/t65/T65_MCode.vhd:98:10 */
  assign alumore = n3957; // (signal)
  /*# rtl/t65/T65_MCode.vhd:102:10 */
  assign n1992 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:103:20 */
  assign n1993 = p[7]; // extract
  /*# rtl/t65/T65_MCode.vhd:103:15 */
  assign n1994 = ~n1993;
  /*# rtl/t65/T65_MCode.vhd:103:29 */
  assign n1996 = n1992 == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:104:20 */
  assign n1997 = p[7]; // extract
  /*# rtl/t65/T65_MCode.vhd:104:29 */
  assign n1999 = n1992 == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:105:20 */
  assign n2000 = p[6]; // extract
  /*# rtl/t65/T65_MCode.vhd:105:15 */
  assign n2001 = ~n2000;
  /*# rtl/t65/T65_MCode.vhd:105:29 */
  assign n2003 = n1992 == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:106:20 */
  assign n2004 = p[6]; // extract
  /*# rtl/t65/T65_MCode.vhd:106:29 */
  assign n2006 = n1992 == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:107:20 */
  assign n2007 = p[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:107:15 */
  assign n2008 = ~n2007;
  /*# rtl/t65/T65_MCode.vhd:107:29 */
  assign n2010 = n1992 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:108:20 */
  assign n2011 = p[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:108:29 */
  assign n2013 = n1992 == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:109:20 */
  assign n2014 = p[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:109:15 */
  assign n2015 = ~n2014;
  /*# rtl/t65/T65_MCode.vhd:109:29 */
  assign n2017 = n1992 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:110:20 */
  assign n2018 = p[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:102:3 */
  assign n2019 = {n2017, n2013, n2010, n2006, n2003, n1999, n1996};
  /*# rtl/t65/T65_MCode.vhd:102:3 */
  always @*
    case (n2019)
      7'b1000000: n2020 = n2015;
      7'b0100000: n2020 = n2011;
      7'b0010000: n2020 = n2008;
      7'b0001000: n2020 = n2004;
      7'b0000100: n2020 = n2001;
      7'b0000010: n2020 = n1997;
      7'b0000001: n2020 = n1994;
      default: n2020 = n2018;
    endcase
  /*# rtl/t65/T65_MCode.vhd:141:12 */
  assign n2023 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:143:16 */
  assign n2024 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:146:18 */
  assign n2025 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:146:30 */
  assign n2027 = n2025 == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:147:26 */
  assign n2028 = ~rdy_mod;
  /*# rtl/t65/T65_MCode.vhd:147:15 */
  assign n2031 = n2028 ? 4'b1011 : 4'b0011;
  /*# rtl/t65/T65_MCode.vhd:146:13 */
  assign n2033 = n2027 ? n2031 : 4'b0011;
  /*# rtl/t65/T65_MCode.vhd:144:11 */
  assign n2035 = n2024 == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:157:18 */
  assign n2036 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:157:30 */
  assign n2038 = n2036 == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:158:26 */
  assign n2039 = ~rdy_mod;
  /*# rtl/t65/T65_MCode.vhd:158:15 */
  assign n2042 = n2039 ? 4'b1010 : 4'b0010;
  /*# rtl/t65/T65_MCode.vhd:157:13 */
  assign n2044 = n2038 ? n2042 : 4'b0010;
  /*# rtl/t65/T65_MCode.vhd:155:11 */
  assign n2046 = n2024 == 2'b10;
  /*# rtl/t65/T65_MCode.vhd:167:18 */
  assign n2047 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:167:30 */
  assign n2049 = n2047 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:167:13 */
  assign n2052 = n2049 ? 4'b1001 : 4'b0001;
  /*# rtl/t65/T65_MCode.vhd:167:13 */
  assign n2055 = n2049 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:173:18 */
  assign n2056 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:173:30 */
  assign n2058 = n2056 == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:173:42 */
  assign n2059 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:173:54 */
  assign n2061 = n2059 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:173:37 */
  assign n2062 = n2058 | n2061;
  /*# rtl/t65/T65_MCode.vhd:173:66 */
  assign n2063 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:173:78 */
  assign n2065 = n2063 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:173:61 */
  assign n2066 = n2062 | n2065;
  /*# rtl/t65/T65_MCode.vhd:174:26 */
  assign n2067 = ~rdy_mod;
  /*# rtl/t65/T65_MCode.vhd:174:15 */
  assign n2070 = n2067 ? 4'b1001 : 4'b1000;
  /*# rtl/t65/T65_MCode.vhd:173:13 */
  assign n2072 = n2066 ? n2070 : 4'b1000;
  /*# rtl/t65/T65_MCode.vhd:166:11 */
  assign n2074 = n2024 == 2'b11;
  /*# rtl/t65/T65_MCode.vhd:143:9 */
  assign n2075 = {n2074, n2046, n2035};
  /*# rtl/t65/T65_MCode.vhd:143:9 */
  always @*
    case (n2075)
      3'b100: n2079 = n2052;
      3'b010: n2079 = 4'b0010;
      3'b001: n2079 = 4'b0011;
      default: n2079 = 4'b0001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:143:9 */
  always @*
    case (n2075)
      3'b100: n2081 = n2072;
      3'b010: n2081 = n2044;
      3'b001: n2081 = n2033;
      default: n2081 = 4'b0001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:143:9 */
  always @*
    case (n2075)
      3'b100: n2083 = n2055;
      3'b010: n2083 = 1'b0;
      3'b001: n2083 = 1'b0;
      default: n2083 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:142:7 */
  assign n2085 = n2023 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:187:16 */
  assign n2086 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:189:18 */
  assign n2087 = ir[4]; // extract
  /*# rtl/t65/T65_MCode.vhd:189:22 */
  assign n2089 = n2087 != 1'b1;
  /*# rtl/t65/T65_MCode.vhd:189:34 */
  assign n2090 = ir[2]; // extract
  /*# rtl/t65/T65_MCode.vhd:189:38 */
  assign n2092 = n2090 != 1'b0;
  /*# rtl/t65/T65_MCode.vhd:189:29 */
  assign n2093 = n2089 | n2092;
  /*# rtl/t65/T65_MCode.vhd:189:13 */
  assign n2096 = n2093 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:188:11 */
  assign n2098 = n2086 == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:192:11 */
  assign n2100 = n2086 == 2'b01;
  /*# rtl/t65/T65_MCode.vhd:194:11 */
  assign n2102 = n2086 == 2'b10;
  /*# rtl/t65/T65_MCode.vhd:199:18 */
  assign n2103 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:199:30 */
  assign n2105 = n2103 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:199:13 */
  assign n2108 = n2105 ? 4'b0100 : 4'b0000;
  /*# rtl/t65/T65_MCode.vhd:199:13 */
  assign n2111 = n2105 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:187:9 */
  assign n2112 = {n2102, n2100, n2098};
  /*# rtl/t65/T65_MCode.vhd:187:9 */
  always @*
    case (n2112)
      3'b100: n2114 = 4'b0000;
      3'b010: n2114 = 4'b0000;
      3'b001: n2114 = 4'b0000;
      default: n2114 = n2108;
    endcase
  /*# rtl/t65/T65_MCode.vhd:187:9 */
  always @*
    case (n2112)
      3'b100: n2119 = 1'b0;
      3'b010: n2119 = 1'b1;
      3'b001: n2119 = 1'b0;
      default: n2119 = 1'b1;
    endcase
  /*# rtl/t65/T65_MCode.vhd:187:9 */
  always @*
    case (n2112)
      3'b100: n2123 = 1'b1;
      3'b010: n2123 = 1'b0;
      3'b001: n2123 = 1'b0;
      default: n2123 = 1'b1;
    endcase
  /*# rtl/t65/T65_MCode.vhd:187:9 */
  always @*
    case (n2112)
      3'b100: n2125 = 1'b0;
      3'b010: n2125 = 1'b0;
      3'b001: n2125 = n2096;
      default: n2125 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:187:9 */
  always @*
    case (n2112)
      3'b100: n2127 = 1'b0;
      3'b010: n2127 = 1'b0;
      3'b001: n2127 = 1'b0;
      default: n2127 = n2111;
    endcase
  /*# rtl/t65/T65_MCode.vhd:185:7 */
  assign n2129 = n2023 == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:205:16 */
  assign n2130 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:207:18 */
  assign n2131 = ir[4]; // extract
  /*# rtl/t65/T65_MCode.vhd:207:22 */
  assign n2132 = ~n2131;
  /*# rtl/t65/T65_MCode.vhd:207:13 */
  assign n2135 = n2132 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:206:11 */
  assign n2137 = n2130 == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:205:9 */
  always @*
    case (n2137)
      1'b1: n2140 = 4'b0011;
      default: n2140 = 4'b0001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:205:9 */
  always @*
    case (n2137)
      1'b1: n2142 = n2135;
      default: n2142 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:204:7 */
  assign n2144 = n2023 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:215:16 */
  assign n2145 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:217:16 */
  assign n2146 = ir[4]; // extract
  /*# rtl/t65/T65_MCode.vhd:217:20 */
  assign n2147 = ~n2146;
  /*# rtl/t65/T65_MCode.vhd:217:11 */
  assign n2150 = n2147 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:216:9 */
  assign n2152 = n2145 == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:215:9 */
  always @*
    case (n2152)
      1'b1: n2155 = 4'b0010;
      default: n2155 = 4'b0001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:215:9 */
  always @*
    case (n2152)
      1'b1: n2157 = n2150;
      default: n2157 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:214:7 */
  assign n2159 = n2023 == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  assign n2160 = {n2159, n2144, n2129, n2085};
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  always @*
    case (n2160)
      4'b1000: n2162 = n2155;
      4'b0100: n2162 = n2140;
      4'b0010: n2162 = n2114;
      4'b0001: n2162 = n2079;
      default: n2162 = 4'b0001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  always @*
    case (n2160)
      4'b1000: n2165 = 4'b0000;
      4'b0100: n2165 = 4'b0000;
      4'b0010: n2165 = 4'b0000;
      4'b0001: n2165 = n2081;
      default: n2165 = 4'b0000;
    endcase
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  always @*
    case (n2160)
      4'b1000: n2168 = 1'b0;
      4'b0100: n2168 = 1'b0;
      4'b0010: n2168 = n2119;
      4'b0001: n2168 = 1'b0;
      default: n2168 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  always @*
    case (n2160)
      4'b1000: n2171 = n2157;
      4'b0100: n2171 = 1'b0;
      4'b0010: n2171 = n2123;
      4'b0001: n2171 = 1'b0;
      default: n2171 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  always @*
    case (n2160)
      4'b1000: n2174 = 1'b0;
      4'b0100: n2174 = n2142;
      4'b0010: n2174 = n2125;
      4'b0001: n2174 = 1'b0;
      default: n2174 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:141:5 */
  always @*
    case (n2160)
      4'b1000: n2177 = 1'b0;
      4'b0100: n2177 = 1'b0;
      4'b0010: n2177 = n2127;
      4'b0001: n2177 = n2083;
      default: n2177 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:227:10 */
  assign n2179 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:227:23 */
  assign n2181 = n2179 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:227:37 */
  assign n2182 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:227:31 */
  assign n2183 = n2182 & n2181;
  /*# rtl/t65/T65_MCode.vhd:227:56 */
  assign n2185 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:227:67 */
  assign n2186 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:227:70 */
  assign n2187 = ~n2186;
  /*# rtl/t65/T65_MCode.vhd:227:62 */
  assign n2188 = n2185 | n2187;
  /*# rtl/t65/T65_MCode.vhd:227:47 */
  assign n2189 = n2188 & n2183;
  /*# rtl/t65/T65_MCode.vhd:228:12 */
  assign n2191 = ir == 8'b11101011;
  /*# rtl/t65/T65_MCode.vhd:228:7 */
  assign n2194 = n2191 ? 4'b0001 : 4'b0000;
  /*# rtl/t65/T65_MCode.vhd:227:5 */
  assign n2195 = n2189 ? n2194 : n2162;
  /*# rtl/t65/T65_MCode.vhd:235:12 */
  assign n2196 = ir[4:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:248:15 */
  assign n2198 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:252:15 */
  assign n2200 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:257:15 */
  assign n2202 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:262:15 */
  assign n2204 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:265:15 */
  assign n2206 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:268:15 */
  assign n2208 = mcycle == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  assign n2209 = {n2208, n2206, n2204, n2202, n2200, n2198};
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  always @*
    case (n2209)
      6'b100000: n2216 = 2'b00;
      6'b010000: n2216 = 2'b11;
      6'b001000: n2216 = 2'b11;
      6'b000100: n2216 = 2'b01;
      6'b000010: n2216 = 2'b01;
      6'b000001: n2216 = 2'b01;
      default: n2216 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  always @*
    case (n2209)
      6'b100000: n2220 = n2165;
      6'b010000: n2220 = n2165;
      6'b001000: n2220 = n2165;
      6'b000100: n2220 = 4'b0101;
      6'b000010: n2220 = 4'b0110;
      6'b000001: n2220 = 4'b0111;
      default: n2220 = n2165;
    endcase
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  always @*
    case (n2209)
      6'b100000: n2223 = 2'b10;
      6'b010000: n2223 = 2'b00;
      6'b001000: n2223 = 2'b00;
      6'b000100: n2223 = 2'b00;
      6'b000010: n2223 = 2'b00;
      6'b000001: n2223 = 2'b00;
      default: n2223 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  always @*
    case (n2209)
      6'b100000: n2228 = 1'b0;
      6'b010000: n2228 = 1'b0;
      6'b001000: n2228 = 1'b1;
      6'b000100: n2228 = 1'b1;
      6'b000010: n2228 = 1'b1;
      6'b000001: n2228 = 1'b0;
      default: n2228 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  always @*
    case (n2209)
      6'b100000: n2231 = 1'b0;
      6'b010000: n2231 = 1'b1;
      6'b001000: n2231 = 1'b0;
      6'b000100: n2231 = 1'b0;
      6'b000010: n2231 = 1'b0;
      6'b000001: n2231 = 1'b0;
      default: n2231 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:247:13 */
  always @*
    case (n2209)
      6'b100000: n2236 = 1'b0;
      6'b010000: n2236 = 1'b0;
      6'b001000: n2236 = 1'b0;
      6'b000100: n2236 = 1'b1;
      6'b000010: n2236 = 1'b1;
      6'b000001: n2236 = 1'b1;
      default: n2236 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:244:11 */
  assign n2238 = ir == 8'b00000000;
  /*# rtl/t65/T65_MCode.vhd:275:15 */
  assign n2240 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:279:15 */
  assign n2242 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:283:15 */
  assign n2244 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:288:15 */
  assign n2246 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:290:15 */
  assign n2248 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  assign n2249 = {n2248, n2246, n2244, n2242, n2240};
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  always @*
    case (n2249)
      5'b10000: n2254 = 2'b00;
      5'b01000: n2254 = 2'b00;
      5'b00100: n2254 = 2'b01;
      5'b00010: n2254 = 2'b01;
      5'b00001: n2254 = 2'b01;
      default: n2254 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  always @*
    case (n2249)
      5'b10000: n2257 = n2165;
      5'b01000: n2257 = n2165;
      5'b00100: n2257 = 4'b0110;
      5'b00010: n2257 = 4'b0111;
      5'b00001: n2257 = n2165;
      default: n2257 = n2165;
    endcase
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  always @*
    case (n2249)
      5'b10000: n2261 = 2'b10;
      5'b01000: n2261 = 2'b00;
      5'b00100: n2261 = 2'b00;
      5'b00010: n2261 = 2'b00;
      5'b00001: n2261 = 2'b01;
      default: n2261 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  always @*
    case (n2249)
      5'b10000: n2265 = 1'b0;
      5'b01000: n2265 = 1'b1;
      5'b00100: n2265 = 1'b1;
      5'b00010: n2265 = 1'b0;
      5'b00001: n2265 = 1'b0;
      default: n2265 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  always @*
    case (n2249)
      5'b10000: n2268 = 1'b0;
      5'b01000: n2268 = 1'b0;
      5'b00100: n2268 = 1'b0;
      5'b00010: n2268 = 1'b0;
      5'b00001: n2268 = 1'b1;
      default: n2268 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:274:13 */
  always @*
    case (n2249)
      5'b10000: n2272 = 1'b0;
      5'b01000: n2272 = 1'b0;
      5'b00100: n2272 = 1'b1;
      5'b00010: n2272 = 1'b1;
      5'b00001: n2272 = 1'b0;
      default: n2272 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:272:11 */
  assign n2274 = ir == 8'b00100000;
  /*# rtl/t65/T65_MCode.vhd:297:15 */
  assign n2276 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:299:15 */
  assign n2278 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:302:15 */
  assign n2280 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:306:15 */
  assign n2282 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:311:15 */
  assign n2284 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  assign n2285 = {n2284, n2282, n2280, n2278, n2276};
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  always @*
    case (n2285)
      5'b10000: n2287 = n2195;
      5'b01000: n2287 = n2195;
      5'b00100: n2287 = 4'b0000;
      5'b00010: n2287 = n2195;
      5'b00001: n2287 = n2195;
      default: n2287 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  always @*
    case (n2285)
      5'b10000: n2293 = 2'b00;
      5'b01000: n2293 = 2'b01;
      5'b00100: n2293 = 2'b01;
      5'b00010: n2293 = 2'b01;
      5'b00001: n2293 = 2'b01;
      default: n2293 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  always @*
    case (n2285)
      5'b10000: n2296 = 2'b10;
      5'b01000: n2296 = 2'b00;
      5'b00100: n2296 = 2'b00;
      5'b00010: n2296 = 2'b00;
      5'b00001: n2296 = 2'b00;
      default: n2296 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  always @*
    case (n2285)
      5'b10000: n2301 = 1'b0;
      5'b01000: n2301 = 1'b1;
      5'b00100: n2301 = 1'b1;
      5'b00010: n2301 = 1'b1;
      5'b00001: n2301 = 1'b0;
      default: n2301 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  always @*
    case (n2285)
      5'b10000: n2304 = 1'b0;
      5'b01000: n2304 = 1'b1;
      5'b00100: n2304 = 1'b0;
      5'b00010: n2304 = 1'b0;
      5'b00001: n2304 = 1'b0;
      default: n2304 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:296:15 */
  always @*
    case (n2285)
      5'b10000: n2307 = 1'b0;
      5'b01000: n2307 = 1'b1;
      5'b00100: n2307 = 1'b0;
      5'b00010: n2307 = 1'b0;
      5'b00001: n2307 = 1'b0;
      default: n2307 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:294:13 */
  assign n2309 = ir == 8'b01000000;
  /*# rtl/t65/T65_MCode.vhd:318:15 */
  assign n2311 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:320:15 */
  assign n2313 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:323:15 */
  assign n2315 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:327:15 */
  assign n2317 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:329:15 */
  assign n2319 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:317:13 */
  assign n2320 = {n2319, n2317, n2315, n2313, n2311};
  /*# rtl/t65/T65_MCode.vhd:317:13 */
  always @*
    case (n2320)
      5'b10000: n2325 = 2'b00;
      5'b01000: n2325 = 2'b00;
      5'b00100: n2325 = 2'b01;
      5'b00010: n2325 = 2'b01;
      5'b00001: n2325 = 2'b01;
      default: n2325 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:317:13 */
  always @*
    case (n2320)
      5'b10000: n2329 = 2'b01;
      5'b01000: n2329 = 2'b10;
      5'b00100: n2329 = 2'b00;
      5'b00010: n2329 = 2'b00;
      5'b00001: n2329 = 2'b00;
      default: n2329 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:317:13 */
  always @*
    case (n2320)
      5'b10000: n2333 = 1'b0;
      5'b01000: n2333 = 1'b0;
      5'b00100: n2333 = 1'b1;
      5'b00010: n2333 = 1'b1;
      5'b00001: n2333 = 1'b0;
      default: n2333 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:317:13 */
  always @*
    case (n2320)
      5'b10000: n2336 = 1'b0;
      5'b01000: n2336 = 1'b0;
      5'b00100: n2336 = 1'b1;
      5'b00010: n2336 = 1'b0;
      5'b00001: n2336 = 1'b0;
      default: n2336 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:315:11 */
  assign n2338 = ir == 8'b01100000;
  /*# rtl/t65/T65_MCode.vhd:335:23 */
  assign n2340 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:335:36 */
  assign n2341 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:335:30 */
  assign n2342 = n2341 & n2340;
  /*# rtl/t65/T65_MCode.vhd:335:15 */
  assign n2345 = n2342 ? 3'b001 : 3'b010;
  /*# rtl/t65/T65_MCode.vhd:340:24 */
  assign n2348 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:340:36 */
  assign n2349 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:340:39 */
  assign n2350 = ~n2349;
  /*# rtl/t65/T65_MCode.vhd:340:31 */
  assign n2351 = n2348 | n2350;
  /*# rtl/t65/T65_MCode.vhd:342:26 */
  assign n2352 = ir[7:4]; // extract
  /*# rtl/t65/T65_MCode.vhd:343:19 */
  assign n2354 = n2352 == 4'b0000;
  /*# rtl/t65/T65_MCode.vhd:345:19 */
  assign n2356 = n2352 == 4'b0100;
  /*# rtl/t65/T65_MCode.vhd:348:29 */
  assign n2358 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:348:21 */
  assign n2360 = n2358 ? 4'b0011 : n2165;
  /*# rtl/t65/T65_MCode.vhd:348:21 */
  assign n2363 = n2358 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:347:19 */
  assign n2365 = n2352 == 4'b0101;
  /*# rtl/t65/T65_MCode.vhd:354:29 */
  assign n2367 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:354:21 */
  assign n2369 = n2367 ? 4'b0010 : n2165;
  /*# rtl/t65/T65_MCode.vhd:354:21 */
  assign n2372 = n2367 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:353:19 */
  assign n2374 = n2352 == 4'b1101;
  /*# rtl/t65/T65_MCode.vhd:342:19 */
  assign n2375 = {n2374, n2365, n2356, n2354};
  /*# rtl/t65/T65_MCode.vhd:342:19 */
  always @*
    case (n2375)
      4'b1000: n2378 = n2369;
      4'b0100: n2378 = n2360;
      4'b0010: n2378 = 4'b0001;
      4'b0001: n2378 = 4'b0101;
      default: n2378 = n2165;
    endcase
  /*# rtl/t65/T65_MCode.vhd:342:19 */
  always @*
    case (n2375)
      4'b1000: n2380 = n2372;
      4'b0100: n2380 = n2363;
      4'b0010: n2380 = 1'b1;
      4'b0001: n2380 = 1'b1;
      default: n2380 = 1'b1;
    endcase
  /*# rtl/t65/T65_MCode.vhd:340:17 */
  assign n2384 = n2351 ? 2'b01 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:340:17 */
  assign n2385 = n2351 ? n2378 : n2165;
  /*# rtl/t65/T65_MCode.vhd:340:17 */
  assign n2387 = n2351 ? n2380 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:339:15 */
  assign n2389 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:363:15 */
  assign n2391 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:338:15 */
  assign n2392 = {n2391, n2389};
  /*# rtl/t65/T65_MCode.vhd:338:15 */
  always @*
    case (n2392)
      2'b10: n2394 = 2'b00;
      2'b01: n2394 = n2384;
      default: n2394 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:338:15 */
  always @*
    case (n2392)
      2'b10: n2395 = n2165;
      2'b01: n2395 = n2385;
      default: n2395 = n2165;
    endcase
  /*# rtl/t65/T65_MCode.vhd:338:15 */
  always @*
    case (n2392)
      2'b10: n2398 = 1'b1;
      2'b01: n2398 = 1'b0;
      default: n2398 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:338:15 */
  always @*
    case (n2392)
      2'b10: n2400 = 1'b0;
      2'b01: n2400 = n2387;
      default: n2400 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:333:13 */
  assign n2402 = ir == 8'b00001000;
  /*# rtl/t65/T65_MCode.vhd:333:24 */
  assign n2404 = ir == 8'b01001000;
  /*# rtl/t65/T65_MCode.vhd:333:24 */
  assign n2405 = n2402 | n2404;
  /*# rtl/t65/T65_MCode.vhd:333:32 */
  assign n2407 = ir == 8'b01011010;
  /*# rtl/t65/T65_MCode.vhd:333:32 */
  assign n2408 = n2405 | n2407;
  /*# rtl/t65/T65_MCode.vhd:333:40 */
  assign n2410 = ir == 8'b11011010;
  /*# rtl/t65/T65_MCode.vhd:333:40 */
  assign n2411 = n2408 | n2410;
  /*# rtl/t65/T65_MCode.vhd:369:21 */
  assign n2413 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:369:34 */
  assign n2414 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:369:28 */
  assign n2415 = n2414 & n2413;
  /*# rtl/t65/T65_MCode.vhd:369:13 */
  assign n2418 = n2415 ? 3'b001 : 3'b011;
  /*# rtl/t65/T65_MCode.vhd:372:20 */
  assign n2420 = ir[7:4]; // extract
  /*# rtl/t65/T65_MCode.vhd:373:15 */
  assign n2422 = n2420 == 4'b0010;
  /*# rtl/t65/T65_MCode.vhd:375:15 */
  assign n2424 = n2420 == 4'b0110;
  /*# rtl/t65/T65_MCode.vhd:378:25 */
  assign n2426 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:378:17 */
  assign n2428 = n2426 ? 1'b1 : n2174;
  /*# rtl/t65/T65_MCode.vhd:377:15 */
  assign n2430 = n2420 == 4'b0111;
  /*# rtl/t65/T65_MCode.vhd:382:25 */
  assign n2432 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:382:17 */
  assign n2434 = n2432 ? 1'b1 : n2171;
  /*# rtl/t65/T65_MCode.vhd:381:15 */
  assign n2436 = n2420 == 4'b1111;
  /*# rtl/t65/T65_MCode.vhd:372:13 */
  assign n2437 = {n2436, n2430, n2424, n2422};
  /*# rtl/t65/T65_MCode.vhd:372:13 */
  always @*
    case (n2437)
      4'b1000: n2439 = n2168;
      4'b0100: n2439 = n2168;
      4'b0010: n2439 = 1'b1;
      4'b0001: n2439 = n2168;
      default: n2439 = n2168;
    endcase
  /*# rtl/t65/T65_MCode.vhd:372:13 */
  always @*
    case (n2437)
      4'b1000: n2442 = 1'b0;
      4'b0100: n2442 = 1'b0;
      4'b0010: n2442 = 1'b0;
      4'b0001: n2442 = 1'b1;
      default: n2442 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:372:13 */
  always @*
    case (n2437)
      4'b1000: n2443 = n2434;
      4'b0100: n2443 = n2171;
      4'b0010: n2443 = n2171;
      4'b0001: n2443 = n2171;
      default: n2443 = n2171;
    endcase
  /*# rtl/t65/T65_MCode.vhd:372:13 */
  always @*
    case (n2437)
      4'b1000: n2444 = n2174;
      4'b0100: n2444 = n2428;
      4'b0010: n2444 = n2174;
      4'b0001: n2444 = n2174;
      default: n2444 = n2174;
    endcase
  /*# rtl/t65/T65_MCode.vhd:389:25 */
  assign n2446 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:389:38 */
  assign n2447 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:389:42 */
  assign n2448 = ~n2447;
  /*# rtl/t65/T65_MCode.vhd:389:33 */
  assign n2449 = n2446 | n2448;
  /*# rtl/t65/T65_MCode.vhd:389:17 */
  assign n2452 = n2449 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:388:15 */
  assign n2454 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:393:25 */
  assign n2456 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:393:38 */
  assign n2457 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:393:42 */
  assign n2458 = ~n2457;
  /*# rtl/t65/T65_MCode.vhd:393:33 */
  assign n2459 = n2456 | n2458;
  /*# rtl/t65/T65_MCode.vhd:393:17 */
  assign n2462 = n2459 ? 2'b01 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:393:17 */
  assign n2464 = n2459 ? 1'b0 : n2442;
  /*# rtl/t65/T65_MCode.vhd:392:15 */
  assign n2466 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:397:15 */
  assign n2468 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:401:15 */
  assign n2470 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:387:13 */
  assign n2471 = {n2470, n2468, n2466, n2454};
  /*# rtl/t65/T65_MCode.vhd:387:13 */
  always @*
    case (n2471)
      4'b1000: n2473 = 4'b0000;
      4'b0100: n2473 = n2195;
      4'b0010: n2473 = n2195;
      4'b0001: n2473 = n2195;
      default: n2473 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:387:13 */
  always @*
    case (n2471)
      4'b1000: n2476 = 2'b00;
      4'b0100: n2476 = 2'b01;
      4'b0010: n2476 = n2462;
      4'b0001: n2476 = 2'b00;
      default: n2476 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:387:13 */
  always @*
    case (n2471)
      4'b1000: n2479 = 1'b0;
      4'b0100: n2479 = 1'b1;
      4'b0010: n2479 = 1'b0;
      4'b0001: n2479 = 1'b0;
      default: n2479 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:387:13 */
  always @*
    case (n2471)
      4'b1000: n2481 = n2442;
      4'b0100: n2481 = 1'b0;
      4'b0010: n2481 = n2464;
      4'b0001: n2481 = n2442;
      default: n2481 = n2442;
    endcase
  /*# rtl/t65/T65_MCode.vhd:387:13 */
  always @*
    case (n2471)
      4'b1000: n2483 = 1'b0;
      4'b0100: n2483 = 1'b0;
      4'b0010: n2483 = 1'b0;
      4'b0001: n2483 = n2452;
      default: n2483 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:367:11 */
  assign n2485 = ir == 8'b00101000;
  /*# rtl/t65/T65_MCode.vhd:367:23 */
  assign n2487 = ir == 8'b01101000;
  /*# rtl/t65/T65_MCode.vhd:367:23 */
  assign n2488 = n2485 | n2487;
  /*# rtl/t65/T65_MCode.vhd:367:31 */
  assign n2490 = ir == 8'b01111010;
  /*# rtl/t65/T65_MCode.vhd:367:31 */
  assign n2491 = n2488 | n2490;
  /*# rtl/t65/T65_MCode.vhd:367:39 */
  assign n2493 = ir == 8'b11111010;
  /*# rtl/t65/T65_MCode.vhd:367:39 */
  assign n2494 = n2491 | n2493;
  /*# rtl/t65/T65_MCode.vhd:408:15 */
  assign n2496 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:409:15 */
  assign n2498 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:407:13 */
  assign n2499 = {n2498, n2496};
  /*# rtl/t65/T65_MCode.vhd:407:13 */
  always @*
    case (n2499)
      2'b10: n2502 = 2'b01;
      2'b01: n2502 = 2'b00;
      default: n2502 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:405:11 */
  assign n2504 = ir == 8'b10100000;
  /*# rtl/t65/T65_MCode.vhd:405:22 */
  assign n2506 = ir == 8'b11000000;
  /*# rtl/t65/T65_MCode.vhd:405:22 */
  assign n2507 = n2504 | n2506;
  /*# rtl/t65/T65_MCode.vhd:405:30 */
  assign n2509 = ir == 8'b11100000;
  /*# rtl/t65/T65_MCode.vhd:405:30 */
  assign n2510 = n2507 | n2509;
  /*# rtl/t65/T65_MCode.vhd:416:15 */
  assign n2512 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:417:15 */
  assign n2514 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:415:13 */
  assign n2515 = {n2514, n2512};
  /*# rtl/t65/T65_MCode.vhd:415:13 */
  always @*
    case (n2515)
      2'b10: n2517 = 4'b0011;
      2'b01: n2517 = n2195;
      default: n2517 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:413:11 */
  assign n2519 = ir == 8'b10001000;
  /*# rtl/t65/T65_MCode.vhd:424:15 */
  assign n2521 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:425:15 */
  assign n2523 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:423:13 */
  assign n2524 = {n2523, n2521};
  /*# rtl/t65/T65_MCode.vhd:423:13 */
  always @*
    case (n2524)
      2'b10: n2526 = 4'b0010;
      2'b01: n2526 = n2195;
      default: n2526 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:421:11 */
  assign n2528 = ir == 8'b11001010;
  /*# rtl/t65/T65_MCode.vhd:430:21 */
  assign n2530 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:430:13 */
  assign n2532 = n2530 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:436:15 */
  assign n2534 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:437:15 */
  assign n2536 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:435:13 */
  assign n2537 = {n2536, n2534};
  /*# rtl/t65/T65_MCode.vhd:435:13 */
  always @*
    case (n2537)
      2'b10: n2539 = 4'b0100;
      2'b01: n2539 = n2195;
      default: n2539 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:429:11 */
  assign n2541 = ir == 8'b00011010;
  /*# rtl/t65/T65_MCode.vhd:429:22 */
  assign n2543 = ir == 8'b00111010;
  /*# rtl/t65/T65_MCode.vhd:429:22 */
  assign n2544 = n2541 | n2543;
  /*# rtl/t65/T65_MCode.vhd:441:11 */
  assign n2551 = ir == 8'b00001010;
  /*# rtl/t65/T65_MCode.vhd:441:22 */
  assign n2553 = ir == 8'b00101010;
  /*# rtl/t65/T65_MCode.vhd:441:22 */
  assign n2554 = n2551 | n2553;
  /*# rtl/t65/T65_MCode.vhd:441:30 */
  assign n2556 = ir == 8'b01001010;
  /*# rtl/t65/T65_MCode.vhd:441:30 */
  assign n2557 = n2554 | n2556;
  /*# rtl/t65/T65_MCode.vhd:441:38 */
  assign n2559 = ir == 8'b01101010;
  /*# rtl/t65/T65_MCode.vhd:441:38 */
  assign n2560 = n2557 | n2559;
  /*# rtl/t65/T65_MCode.vhd:449:11 */
  assign n2567 = ir == 8'b10001010;
  /*# rtl/t65/T65_MCode.vhd:449:22 */
  assign n2569 = ir == 8'b10011000;
  /*# rtl/t65/T65_MCode.vhd:449:22 */
  assign n2570 = n2567 | n2569;
  /*# rtl/t65/T65_MCode.vhd:458:15 */
  assign n2572 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:459:15 */
  assign n2574 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:457:13 */
  assign n2575 = {n2574, n2572};
  /*# rtl/t65/T65_MCode.vhd:457:13 */
  always @*
    case (n2575)
      2'b10: n2577 = 4'b0001;
      2'b01: n2577 = n2195;
      default: n2577 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:456:11 */
  assign n2579 = ir == 8'b10101010;
  /*# rtl/t65/T65_MCode.vhd:456:22 */
  assign n2581 = ir == 8'b10101000;
  /*# rtl/t65/T65_MCode.vhd:456:22 */
  assign n2582 = n2579 | n2581;
  /*# rtl/t65/T65_MCode.vhd:463:11 */
  assign n2584 = ir == 8'b10011010;
  /*# rtl/t65/T65_MCode.vhd:468:15 */
  assign n2586 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:469:15 */
  assign n2588 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:467:13 */
  assign n2589 = {n2588, n2586};
  /*# rtl/t65/T65_MCode.vhd:467:13 */
  always @*
    case (n2589)
      2'b10: n2591 = 4'b0100;
      2'b01: n2591 = n2195;
      default: n2591 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:465:11 */
  assign n2593 = ir == 8'b10111010;
  /*# rtl/t65/T65_MCode.vhd:475:15 */
  assign n2595 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:476:15 */
  assign n2597 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:474:13 */
  assign n2598 = {n2597, n2595};
  /*# rtl/t65/T65_MCode.vhd:474:13 */
  always @*
    case (n2598)
      2'b10: n2601 = 2'b01;
      2'b01: n2601 = 2'b00;
      default: n2601 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:473:11 */
  assign n2603 = ir == 8'b10000000;
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  assign n2606 = {n2603, n2593, n2584, n2582, n2570, n2560, n2544, n2528, n2519, n2510, n2494, n2411, n2338, n2309, n2274, n2238};
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2612 = 3'b001;
      16'b0100000000000000: n2612 = 3'b001;
      16'b0010000000000000: n2612 = 3'b001;
      16'b0001000000000000: n2612 = 3'b001;
      16'b0000100000000000: n2612 = 3'b001;
      16'b0000010000000000: n2612 = 3'b001;
      16'b0000001000000000: n2612 = 3'b001;
      16'b0000000100000000: n2612 = 3'b001;
      16'b0000000010000000: n2612 = 3'b001;
      16'b0000000001000000: n2612 = 3'b001;
      16'b0000000000100000: n2612 = n2418;
      16'b0000000000010000: n2612 = n2345;
      16'b0000000000001000: n2612 = 3'b101;
      16'b0000000000000100: n2612 = 3'b101;
      16'b0000000000000010: n2612 = 3'b101;
      16'b0000000000000001: n2612 = 3'b110;
      default: n2612 = 3'b001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2614 = n2195;
      16'b0100000000000000: n2614 = n2591;
      16'b0010000000000000: n2614 = n2195;
      16'b0001000000000000: n2614 = n2577;
      16'b0000100000000000: n2614 = n2195;
      16'b0000010000000000: n2614 = 4'b0001;
      16'b0000001000000000: n2614 = n2539;
      16'b0000000100000000: n2614 = n2526;
      16'b0000000010000000: n2614 = n2517;
      16'b0000000001000000: n2614 = n2195;
      16'b0000000000100000: n2614 = n2473;
      16'b0000000000010000: n2614 = n2195;
      16'b0000000000001000: n2614 = n2195;
      16'b0000000000000100: n2614 = n2287;
      16'b0000000000000010: n2614 = n2195;
      16'b0000000000000001: n2614 = n2195;
      default: n2614 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2616 = 2'b00;
      16'b0100000000000000: n2616 = 2'b00;
      16'b0010000000000000: n2616 = 2'b00;
      16'b0001000000000000: n2616 = 2'b00;
      16'b0000100000000000: n2616 = 2'b00;
      16'b0000010000000000: n2616 = 2'b00;
      16'b0000001000000000: n2616 = 2'b00;
      16'b0000000100000000: n2616 = 2'b00;
      16'b0000000010000000: n2616 = 2'b00;
      16'b0000000001000000: n2616 = 2'b00;
      16'b0000000000100000: n2616 = n2476;
      16'b0000000000010000: n2616 = n2394;
      16'b0000000000001000: n2616 = n2325;
      16'b0000000000000100: n2616 = n2293;
      16'b0000000000000010: n2616 = n2254;
      16'b0000000000000001: n2616 = n2216;
      default: n2616 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2617 = n2165;
      16'b0100000000000000: n2617 = n2165;
      16'b0010000000000000: n2617 = n2165;
      16'b0001000000000000: n2617 = n2165;
      16'b0000100000000000: n2617 = n2165;
      16'b0000010000000000: n2617 = n2165;
      16'b0000001000000000: n2617 = n2165;
      16'b0000000100000000: n2617 = n2165;
      16'b0000000010000000: n2617 = n2165;
      16'b0000000001000000: n2617 = n2165;
      16'b0000000000100000: n2617 = n2165;
      16'b0000000000010000: n2617 = n2395;
      16'b0000000000001000: n2617 = n2165;
      16'b0000000000000100: n2617 = n2165;
      16'b0000000000000010: n2617 = n2257;
      16'b0000000000000001: n2617 = n2220;
      default: n2617 = n2165;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2619 = n2601;
      16'b0100000000000000: n2619 = 2'b00;
      16'b0010000000000000: n2619 = 2'b00;
      16'b0001000000000000: n2619 = 2'b00;
      16'b0000100000000000: n2619 = 2'b00;
      16'b0000010000000000: n2619 = 2'b00;
      16'b0000001000000000: n2619 = 2'b00;
      16'b0000000100000000: n2619 = 2'b00;
      16'b0000000010000000: n2619 = 2'b00;
      16'b0000000001000000: n2619 = n2502;
      16'b0000000000100000: n2619 = 2'b00;
      16'b0000000000010000: n2619 = 2'b00;
      16'b0000000000001000: n2619 = n2329;
      16'b0000000000000100: n2619 = n2296;
      16'b0000000000000010: n2619 = n2261;
      16'b0000000000000001: n2619 = n2223;
      default: n2619 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2621 = 1'b0;
      16'b0100000000000000: n2621 = 1'b0;
      16'b0010000000000000: n2621 = 1'b0;
      16'b0001000000000000: n2621 = 1'b0;
      16'b0000100000000000: n2621 = 1'b0;
      16'b0000010000000000: n2621 = 1'b0;
      16'b0000001000000000: n2621 = 1'b0;
      16'b0000000100000000: n2621 = 1'b0;
      16'b0000000010000000: n2621 = 1'b0;
      16'b0000000001000000: n2621 = 1'b0;
      16'b0000000000100000: n2621 = n2479;
      16'b0000000000010000: n2621 = 1'b0;
      16'b0000000000001000: n2621 = n2333;
      16'b0000000000000100: n2621 = n2301;
      16'b0000000000000010: n2621 = 1'b0;
      16'b0000000000000001: n2621 = 1'b0;
      default: n2621 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2623 = 1'b0;
      16'b0100000000000000: n2623 = 1'b0;
      16'b0010000000000000: n2623 = 1'b0;
      16'b0001000000000000: n2623 = 1'b0;
      16'b0000100000000000: n2623 = 1'b0;
      16'b0000010000000000: n2623 = 1'b0;
      16'b0000001000000000: n2623 = 1'b0;
      16'b0000000100000000: n2623 = 1'b0;
      16'b0000000010000000: n2623 = 1'b0;
      16'b0000000001000000: n2623 = 1'b0;
      16'b0000000000100000: n2623 = 1'b0;
      16'b0000000000010000: n2623 = n2398;
      16'b0000000000001000: n2623 = 1'b0;
      16'b0000000000000100: n2623 = 1'b0;
      16'b0000000000000010: n2623 = n2265;
      16'b0000000000000001: n2623 = n2228;
      default: n2623 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2626 = n2168;
      16'b0100000000000000: n2626 = n2168;
      16'b0010000000000000: n2626 = n2168;
      16'b0001000000000000: n2626 = n2168;
      16'b0000100000000000: n2626 = 1'b1;
      16'b0000010000000000: n2626 = 1'b1;
      16'b0000001000000000: n2626 = n2532;
      16'b0000000100000000: n2626 = n2168;
      16'b0000000010000000: n2626 = n2168;
      16'b0000000001000000: n2626 = n2168;
      16'b0000000000100000: n2626 = n2439;
      16'b0000000000010000: n2626 = n2168;
      16'b0000000000001000: n2626 = n2168;
      16'b0000000000000100: n2626 = n2168;
      16'b0000000000000010: n2626 = n2168;
      16'b0000000000000001: n2626 = n2168;
      default: n2626 = n2168;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2628 = 1'b0;
      16'b0100000000000000: n2628 = 1'b0;
      16'b0010000000000000: n2628 = 1'b0;
      16'b0001000000000000: n2628 = 1'b0;
      16'b0000100000000000: n2628 = 1'b0;
      16'b0000010000000000: n2628 = 1'b0;
      16'b0000001000000000: n2628 = 1'b0;
      16'b0000000100000000: n2628 = 1'b0;
      16'b0000000010000000: n2628 = 1'b0;
      16'b0000000001000000: n2628 = 1'b0;
      16'b0000000000100000: n2628 = n2481;
      16'b0000000000010000: n2628 = 1'b0;
      16'b0000000000001000: n2628 = 1'b0;
      16'b0000000000000100: n2628 = n2304;
      16'b0000000000000010: n2628 = 1'b0;
      16'b0000000000000001: n2628 = 1'b0;
      default: n2628 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2631 = n2171;
      16'b0100000000000000: n2631 = 1'b1;
      16'b0010000000000000: n2631 = n2171;
      16'b0001000000000000: n2631 = n2171;
      16'b0000100000000000: n2631 = n2171;
      16'b0000010000000000: n2631 = n2171;
      16'b0000001000000000: n2631 = n2171;
      16'b0000000100000000: n2631 = 1'b1;
      16'b0000000010000000: n2631 = n2171;
      16'b0000000001000000: n2631 = n2171;
      16'b0000000000100000: n2631 = n2443;
      16'b0000000000010000: n2631 = n2171;
      16'b0000000000001000: n2631 = n2171;
      16'b0000000000000100: n2631 = n2171;
      16'b0000000000000010: n2631 = n2171;
      16'b0000000000000001: n2631 = n2171;
      default: n2631 = n2171;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2633 = n2174;
      16'b0100000000000000: n2633 = n2174;
      16'b0010000000000000: n2633 = n2174;
      16'b0001000000000000: n2633 = n2174;
      16'b0000100000000000: n2633 = n2174;
      16'b0000010000000000: n2633 = n2174;
      16'b0000001000000000: n2633 = n2174;
      16'b0000000100000000: n2633 = n2174;
      16'b0000000010000000: n2633 = 1'b1;
      16'b0000000001000000: n2633 = n2174;
      16'b0000000000100000: n2633 = n2444;
      16'b0000000000010000: n2633 = n2174;
      16'b0000000000001000: n2633 = n2174;
      16'b0000000000000100: n2633 = n2174;
      16'b0000000000000010: n2633 = n2174;
      16'b0000000000000001: n2633 = n2174;
      default: n2633 = n2174;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2635 = n2177;
      16'b0100000000000000: n2635 = n2177;
      16'b0010000000000000: n2635 = 1'b1;
      16'b0001000000000000: n2635 = n2177;
      16'b0000100000000000: n2635 = n2177;
      16'b0000010000000000: n2635 = n2177;
      16'b0000001000000000: n2635 = n2177;
      16'b0000000100000000: n2635 = n2177;
      16'b0000000010000000: n2635 = n2177;
      16'b0000000001000000: n2635 = n2177;
      16'b0000000000100000: n2635 = n2177;
      16'b0000000000010000: n2635 = n2177;
      16'b0000000000001000: n2635 = n2177;
      16'b0000000000000100: n2635 = n2177;
      16'b0000000000000010: n2635 = n2177;
      16'b0000000000000001: n2635 = n2177;
      default: n2635 = n2177;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2637 = 1'b0;
      16'b0100000000000000: n2637 = 1'b0;
      16'b0010000000000000: n2637 = 1'b0;
      16'b0001000000000000: n2637 = 1'b0;
      16'b0000100000000000: n2637 = 1'b0;
      16'b0000010000000000: n2637 = 1'b0;
      16'b0000001000000000: n2637 = 1'b0;
      16'b0000000100000000: n2637 = 1'b0;
      16'b0000000010000000: n2637 = 1'b0;
      16'b0000000001000000: n2637 = 1'b0;
      16'b0000000000100000: n2637 = 1'b0;
      16'b0000000000010000: n2637 = 1'b0;
      16'b0000000000001000: n2637 = n2336;
      16'b0000000000000100: n2637 = n2307;
      16'b0000000000000010: n2637 = n2268;
      16'b0000000000000001: n2637 = n2231;
      default: n2637 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2639 = 1'b0;
      16'b0100000000000000: n2639 = 1'b0;
      16'b0010000000000000: n2639 = 1'b0;
      16'b0001000000000000: n2639 = 1'b0;
      16'b0000100000000000: n2639 = 1'b0;
      16'b0000010000000000: n2639 = 1'b0;
      16'b0000001000000000: n2639 = 1'b0;
      16'b0000000100000000: n2639 = 1'b0;
      16'b0000000010000000: n2639 = 1'b0;
      16'b0000000001000000: n2639 = 1'b0;
      16'b0000000000100000: n2639 = n2483;
      16'b0000000000010000: n2639 = 1'b0;
      16'b0000000000001000: n2639 = 1'b0;
      16'b0000000000000100: n2639 = 1'b0;
      16'b0000000000000010: n2639 = 1'b0;
      16'b0000000000000001: n2639 = 1'b0;
      default: n2639 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:243:9 */
  always @*
    case (n2606)
      16'b1000000000000000: n2641 = 1'b0;
      16'b0100000000000000: n2641 = 1'b0;
      16'b0010000000000000: n2641 = 1'b0;
      16'b0001000000000000: n2641 = 1'b0;
      16'b0000100000000000: n2641 = 1'b0;
      16'b0000010000000000: n2641 = 1'b0;
      16'b0000001000000000: n2641 = 1'b0;
      16'b0000000100000000: n2641 = 1'b0;
      16'b0000000010000000: n2641 = 1'b0;
      16'b0000000001000000: n2641 = 1'b0;
      16'b0000000000100000: n2641 = 1'b0;
      16'b0000000000010000: n2641 = n2400;
      16'b0000000000001000: n2641 = 1'b0;
      16'b0000000000000100: n2641 = 1'b0;
      16'b0000000000000010: n2641 = n2272;
      16'b0000000000000001: n2641 = n2236;
      default: n2641 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:241:7 */
  assign n2643 = n2196 == 5'b00000;
  /*# rtl/t65/T65_MCode.vhd:241:20 */
  assign n2645 = n2196 == 5'b01000;
  /*# rtl/t65/T65_MCode.vhd:241:20 */
  assign n2646 = n2643 | n2645;
  /*# rtl/t65/T65_MCode.vhd:241:30 */
  assign n2648 = n2196 == 5'b01010;
  /*# rtl/t65/T65_MCode.vhd:241:30 */
  assign n2649 = n2646 | n2648;
  /*# rtl/t65/T65_MCode.vhd:241:40 */
  assign n2651 = n2196 == 5'b11000;
  /*# rtl/t65/T65_MCode.vhd:241:40 */
  assign n2652 = n2649 | n2651;
  /*# rtl/t65/T65_MCode.vhd:241:50 */
  assign n2654 = n2196 == 5'b11010;
  /*# rtl/t65/T65_MCode.vhd:241:50 */
  assign n2655 = n2652 | n2654;
  /*# rtl/t65/T65_MCode.vhd:492:14 */
  assign n2656 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:492:27 */
  assign n2658 = n2656 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:494:18 */
  assign n2660 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:494:30 */
  assign n2661 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:494:24 */
  assign n2662 = n2661 & n2660;
  /*# rtl/t65/T65_MCode.vhd:494:11 */
  assign n2665 = n2662 ? 3'b111 : 3'b101;
  /*# rtl/t65/T65_MCode.vhd:492:9 */
  assign n2667 = n2658 ? n2665 : 3'b101;
  /*# rtl/t65/T65_MCode.vhd:492:9 */
  assign n2670 = n2658 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:499:11 */
  assign n2672 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:503:11 */
  assign n2674 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:506:11 */
  assign n2676 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:512:18 */
  assign n2677 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:512:31 */
  assign n2679 = n2677 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:512:13 */
  assign n2682 = n2679 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:510:11 */
  assign n2684 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:517:20 */
  assign n2686 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:517:32 */
  assign n2687 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:517:26 */
  assign n2688 = n2687 & n2686;
  /*# rtl/t65/T65_MCode.vhd:517:46 */
  assign n2689 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:517:58 */
  assign n2691 = n2689 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:517:40 */
  assign n2692 = n2691 & n2688;
  /*# rtl/t65/T65_MCode.vhd:517:13 */
  assign n2695 = n2692 ? 2'b11 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:517:13 */
  assign n2698 = n2692 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:517:13 */
  assign n2701 = n2692 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:516:11 */
  assign n2703 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:522:11 */
  assign n2705 = mcycle == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:527:11 */
  assign n2707 = mcycle == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  assign n2708 = {n2707, n2705, n2703, n2684, n2676, n2674, n2672};
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2710 = 4'b0001;
      7'b0100000: n2710 = n2195;
      7'b0010000: n2710 = n2195;
      7'b0001000: n2710 = n2195;
      7'b0000100: n2710 = n2195;
      7'b0000010: n2710 = n2195;
      7'b0000001: n2710 = n2195;
      default: n2710 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2717 = 2'b00;
      7'b0100000: n2717 = 2'b11;
      7'b0010000: n2717 = n2695;
      7'b0001000: n2717 = 2'b11;
      7'b0000100: n2717 = 2'b10;
      7'b0000010: n2717 = 2'b10;
      7'b0000001: n2717 = 2'b10;
      default: n2717 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2720 = 2'b00;
      7'b0100000: n2720 = 2'b00;
      7'b0010000: n2720 = 2'b00;
      7'b0001000: n2720 = 2'b00;
      7'b0000100: n2720 = 2'b00;
      7'b0000010: n2720 = 2'b00;
      7'b0000001: n2720 = 2'b01;
      default: n2720 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2723 = 2'b00;
      7'b0100000: n2723 = 2'b00;
      7'b0010000: n2723 = 2'b00;
      7'b0001000: n2723 = 2'b00;
      7'b0000100: n2723 = 2'b01;
      7'b0000010: n2723 = 2'b00;
      7'b0000001: n2723 = 2'b00;
      default: n2723 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2726 = 1'b0;
      7'b0100000: n2726 = 1'b0;
      7'b0010000: n2726 = 1'b0;
      7'b0001000: n2726 = 1'b0;
      7'b0000100: n2726 = 1'b0;
      7'b0000010: n2726 = 1'b1;
      7'b0000001: n2726 = 1'b0;
      default: n2726 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2728 = 1'b0;
      7'b0100000: n2728 = 1'b0;
      7'b0010000: n2728 = n2698;
      7'b0001000: n2728 = 1'b0;
      7'b0000100: n2728 = 1'b0;
      7'b0000010: n2728 = 1'b0;
      7'b0000001: n2728 = 1'b0;
      default: n2728 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2731 = 1'b0;
      7'b0100000: n2731 = 1'b1;
      7'b0010000: n2731 = 1'b0;
      7'b0001000: n2731 = 1'b0;
      7'b0000100: n2731 = 1'b0;
      7'b0000010: n2731 = 1'b0;
      7'b0000001: n2731 = 1'b0;
      default: n2731 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2734 = 1'b0;
      7'b0100000: n2734 = 1'b0;
      7'b0010000: n2734 = 1'b0;
      7'b0001000: n2734 = 1'b0;
      7'b0000100: n2734 = 1'b0;
      7'b0000010: n2734 = 1'b0;
      7'b0000001: n2734 = 1'b1;
      default: n2734 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2737 = 1'b0;
      7'b0100000: n2737 = 1'b0;
      7'b0010000: n2737 = 1'b0;
      7'b0001000: n2737 = 1'b0;
      7'b0000100: n2737 = 1'b1;
      7'b0000010: n2737 = 1'b0;
      7'b0000001: n2737 = 1'b0;
      default: n2737 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2740 = 1'b0;
      7'b0100000: n2740 = 1'b0;
      7'b0010000: n2740 = 1'b0;
      7'b0001000: n2740 = 1'b1;
      7'b0000100: n2740 = 1'b0;
      7'b0000010: n2740 = 1'b0;
      7'b0000001: n2740 = 1'b0;
      default: n2740 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2743 = 1'b0;
      7'b0100000: n2743 = 1'b1;
      7'b0010000: n2743 = 1'b0;
      7'b0001000: n2743 = 1'b0;
      7'b0000100: n2743 = 1'b0;
      7'b0000010: n2743 = 1'b0;
      7'b0000001: n2743 = 1'b0;
      default: n2743 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2746 = 1'b0;
      7'b0100000: n2746 = 1'b1;
      7'b0010000: n2746 = n2701;
      7'b0001000: n2746 = n2682;
      7'b0000100: n2746 = 1'b0;
      7'b0000010: n2746 = 1'b0;
      7'b0000001: n2746 = 1'b0;
      default: n2746 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:498:9 */
  always @*
    case (n2708)
      7'b1000000: n2749 = 1'b1;
      7'b0100000: n2749 = 1'b0;
      7'b0010000: n2749 = 1'b0;
      7'b0001000: n2749 = 1'b0;
      7'b0000100: n2749 = 1'b0;
      7'b0000010: n2749 = 1'b0;
      7'b0000001: n2749 = 1'b0;
      default: n2749 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:489:7 */
  assign n2751 = n2196 == 5'b00001;
  /*# rtl/t65/T65_MCode.vhd:489:20 */
  assign n2753 = n2196 == 5'b00011;
  /*# rtl/t65/T65_MCode.vhd:489:20 */
  assign n2754 = n2751 | n2753;
  /*# rtl/t65/T65_MCode.vhd:536:14 */
  assign n2755 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:536:26 */
  assign n2757 = n2755 != 3'b100;
  /*# rtl/t65/T65_MCode.vhd:536:9 */
  assign n2759 = n2757 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:540:11 */
  assign n2761 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:539:9 */
  always @*
    case (n2761)
      1'b1: n2764 = 2'b01;
      default: n2764 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:534:7 */
  assign n2766 = n2196 == 5'b01001;
  /*# rtl/t65/T65_MCode.vhd:547:16 */
  assign n2768 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:549:18 */
  assign n2769 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:550:13 */
  assign n2771 = n2769 == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:550:23 */
  assign n2773 = n2769 == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:550:23 */
  assign n2774 = n2771 | n2773;
  /*# rtl/t65/T65_MCode.vhd:550:29 */
  assign n2776 = n2769 == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:550:29 */
  assign n2777 = n2774 | n2776;
  /*# rtl/t65/T65_MCode.vhd:550:35 */
  assign n2779 = n2769 == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:550:35 */
  assign n2780 = n2777 | n2779;
  /*# rtl/t65/T65_MCode.vhd:553:13 */
  assign n2782 = n2769 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:556:13 */
  assign n2784 = n2769 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:560:15 */
  assign n2787 = bcd_en ? 4'b0111 : 4'b0000;
  /*# rtl/t65/T65_MCode.vhd:559:13 */
  assign n2789 = n2769 == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:549:11 */
  assign n2790 = {n2789, n2784, n2782, n2780};
  /*# rtl/t65/T65_MCode.vhd:549:11 */
  always @*
    case (n2790)
      4'b1000: n2794 = n2787;
      4'b0100: n2794 = 4'b1001;
      4'b0010: n2794 = 4'b1000;
      4'b0001: n2794 = 4'b0110;
      default: n2794 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:549:11 */
  always @*
    case (n2790)
      4'b1000: n2799 = 1'b1;
      4'b0100: n2799 = n2168;
      4'b0010: n2799 = 1'b1;
      4'b0001: n2799 = 1'b1;
      default: n2799 = 1'b1;
    endcase
  /*# rtl/t65/T65_MCode.vhd:549:11 */
  always @*
    case (n2790)
      4'b1000: n2801 = n2171;
      4'b0100: n2801 = 1'b1;
      4'b0010: n2801 = n2171;
      4'b0001: n2801 = n2171;
      default: n2801 = n2171;
    endcase
  /*# rtl/t65/T65_MCode.vhd:570:13 */
  assign n2803 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:569:11 */
  always @*
    case (n2803)
      1'b1: n2806 = 2'b01;
      default: n2806 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:547:9 */
  assign n2807 = n2768 ? n2794 : n2195;
  /*# rtl/t65/T65_MCode.vhd:547:9 */
  assign n2809 = n2768 ? n2806 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:547:9 */
  assign n2810 = n2768 ? n2799 : n2168;
  /*# rtl/t65/T65_MCode.vhd:547:9 */
  assign n2811 = n2768 ? n2801 : n2171;
  /*# rtl/t65/T65_MCode.vhd:546:7 */
  assign n2813 = n2196 == 5'b01011;
  /*# rtl/t65/T65_MCode.vhd:581:11 */
  assign n2815 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:583:19 */
  assign n2817 = ir == 8'b10100010;
  /*# rtl/t65/T65_MCode.vhd:587:21 */
  assign n2818 = ir[7:4]; // extract
  /*# rtl/t65/T65_MCode.vhd:587:33 */
  assign n2820 = n2818 == 4'b1000;
  /*# rtl/t65/T65_MCode.vhd:587:46 */
  assign n2821 = ir[7:4]; // extract
  /*# rtl/t65/T65_MCode.vhd:587:58 */
  assign n2823 = n2821 == 4'b1100;
  /*# rtl/t65/T65_MCode.vhd:587:41 */
  assign n2824 = n2820 | n2823;
  /*# rtl/t65/T65_MCode.vhd:587:71 */
  assign n2825 = ir[7:4]; // extract
  /*# rtl/t65/T65_MCode.vhd:587:83 */
  assign n2827 = n2825 == 4'b1110;
  /*# rtl/t65/T65_MCode.vhd:587:66 */
  assign n2828 = n2824 | n2827;
  /*# rtl/t65/T65_MCode.vhd:587:13 */
  assign n2831 = n2828 ? 3'b001 : 3'b000;
  /*# rtl/t65/T65_MCode.vhd:587:13 */
  assign n2834 = n2828 ? 2'b01 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:583:13 */
  assign n2836 = n2817 ? 3'b001 : n2831;
  /*# rtl/t65/T65_MCode.vhd:583:13 */
  assign n2838 = n2817 ? 2'b01 : n2834;
  /*# rtl/t65/T65_MCode.vhd:583:13 */
  assign n2840 = n2817 ? 1'b1 : n2171;
  /*# rtl/t65/T65_MCode.vhd:582:11 */
  assign n2842 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:580:9 */
  assign n2843 = {n2842, n2815};
  /*# rtl/t65/T65_MCode.vhd:580:9 */
  always @*
    case (n2843)
      2'b10: n2845 = n2836;
      2'b01: n2845 = 3'b001;
      default: n2845 = 3'b001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:580:9 */
  always @*
    case (n2843)
      2'b10: n2847 = n2838;
      2'b01: n2847 = 2'b00;
      default: n2847 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:580:9 */
  always @*
    case (n2843)
      2'b10: n2848 = n2840;
      2'b01: n2848 = n2171;
      default: n2848 = n2171;
    endcase
  /*# rtl/t65/T65_MCode.vhd:578:7 */
  assign n2850 = n2196 == 5'b00010;
  /*# rtl/t65/T65_MCode.vhd:578:20 */
  assign n2852 = n2196 == 5'b10010;
  /*# rtl/t65/T65_MCode.vhd:578:20 */
  assign n2853 = n2850 | n2852;
  /*# rtl/t65/T65_MCode.vhd:603:18 */
  assign n2854 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:603:31 */
  assign n2856 = n2854 == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:603:13 */
  assign n2859 = n2856 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:602:11 */
  assign n2861 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:609:18 */
  assign n2862 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:609:31 */
  assign n2864 = n2862 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:609:13 */
  assign n2867 = n2864 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:606:11 */
  assign n2869 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:613:11 */
  assign n2871 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:601:9 */
  assign n2872 = {n2871, n2869, n2861};
  /*# rtl/t65/T65_MCode.vhd:601:9 */
  always @*
    case (n2872)
      3'b100: n2875 = 2'b00;
      3'b010: n2875 = 2'b10;
      3'b001: n2875 = 2'b00;
      default: n2875 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:601:9 */
  always @*
    case (n2872)
      3'b100: n2878 = 2'b00;
      3'b010: n2878 = 2'b01;
      3'b001: n2878 = 2'b00;
      default: n2878 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:601:9 */
  always @*
    case (n2872)
      3'b100: n2881 = 1'b0;
      3'b010: n2881 = 1'b1;
      3'b001: n2881 = 1'b0;
      default: n2881 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:601:9 */
  always @*
    case (n2872)
      3'b100: n2883 = 1'b0;
      3'b010: n2883 = 1'b0;
      3'b001: n2883 = n2859;
      default: n2883 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:601:9 */
  always @*
    case (n2872)
      3'b100: n2885 = 1'b0;
      3'b010: n2885 = n2867;
      3'b001: n2885 = 1'b0;
      default: n2885 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:598:7 */
  assign n2887 = n2196 == 5'b00100;
  /*# rtl/t65/T65_MCode.vhd:622:14 */
  assign n2888 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:622:27 */
  assign n2890 = n2888 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:622:41 */
  assign n2891 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:622:35 */
  assign n2892 = n2891 & n2890;
  /*# rtl/t65/T65_MCode.vhd:622:60 */
  assign n2894 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:622:71 */
  assign n2895 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:622:74 */
  assign n2896 = ~n2895;
  /*# rtl/t65/T65_MCode.vhd:622:66 */
  assign n2897 = n2894 | n2896;
  /*# rtl/t65/T65_MCode.vhd:622:51 */
  assign n2898 = n2897 & n2892;
  /*# rtl/t65/T65_MCode.vhd:625:18 */
  assign n2900 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:625:30 */
  assign n2901 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:625:24 */
  assign n2902 = n2901 & n2900;
  /*# rtl/t65/T65_MCode.vhd:625:11 */
  assign n2904 = n2902 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:629:13 */
  assign n2906 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:635:22 */
  assign n2908 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:635:15 */
  assign n2911 = n2908 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:633:13 */
  assign n2913 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:639:13 */
  assign n2915 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:645:22 */
  assign n2917 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:645:34 */
  assign n2918 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:645:28 */
  assign n2919 = n2918 & n2917;
  /*# rtl/t65/T65_MCode.vhd:645:15 */
  assign n2921 = n2919 ? 4'b0001 : n2195;
  /*# rtl/t65/T65_MCode.vhd:645:15 */
  assign n2924 = n2919 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:645:15 */
  assign n2927 = n2919 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:644:13 */
  assign n2929 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  assign n2930 = {n2929, n2915, n2913, n2906};
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2931 = n2921;
      4'b0100: n2931 = n2195;
      4'b0010: n2931 = n2195;
      4'b0001: n2931 = n2195;
      default: n2931 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2936 = 2'b00;
      4'b0100: n2936 = 2'b10;
      4'b0010: n2936 = 2'b10;
      4'b0001: n2936 = 2'b10;
      default: n2936 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2939 = 2'b00;
      4'b0100: n2939 = 2'b00;
      4'b0010: n2939 = 2'b00;
      4'b0001: n2939 = 2'b01;
      default: n2939 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2942 = n2924;
      4'b0100: n2942 = 1'b0;
      4'b0010: n2942 = 1'b1;
      4'b0001: n2942 = 1'b0;
      default: n2942 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2945 = 1'b0;
      4'b0100: n2945 = 1'b1;
      4'b0010: n2945 = 1'b0;
      4'b0001: n2945 = 1'b0;
      default: n2945 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2948 = 1'b0;
      4'b0100: n2948 = 1'b0;
      4'b0010: n2948 = 1'b0;
      4'b0001: n2948 = 1'b1;
      default: n2948 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2951 = 1'b0;
      4'b0100: n2951 = 1'b1;
      4'b0010: n2951 = 1'b0;
      4'b0001: n2951 = 1'b0;
      default: n2951 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2954 = 1'b0;
      4'b0100: n2954 = 1'b1;
      4'b0010: n2954 = n2911;
      4'b0001: n2954 = 1'b0;
      default: n2954 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:628:11 */
  always @*
    case (n2930)
      4'b1000: n2956 = n2927;
      4'b0100: n2956 = 1'b0;
      4'b0010: n2956 = 1'b0;
      4'b0001: n2956 = 1'b0;
      default: n2956 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:654:16 */
  assign n2957 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:654:29 */
  assign n2959 = n2957 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:654:11 */
  assign n2961 = n2959 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:658:13 */
  assign n2963 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:662:20 */
  assign n2964 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:662:33 */
  assign n2966 = n2964 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:662:15 */
  assign n2969 = n2966 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:659:13 */
  assign n2971 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:666:13 */
  assign n2973 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:657:11 */
  assign n2974 = {n2973, n2971, n2963};
  /*# rtl/t65/T65_MCode.vhd:657:11 */
  always @*
    case (n2974)
      3'b100: n2977 = 2'b00;
      3'b010: n2977 = 2'b10;
      3'b001: n2977 = 2'b00;
      default: n2977 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:657:11 */
  always @*
    case (n2974)
      3'b100: n2980 = 2'b00;
      3'b010: n2980 = 2'b01;
      3'b001: n2980 = 2'b00;
      default: n2980 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:657:11 */
  always @*
    case (n2974)
      3'b100: n2983 = 1'b0;
      3'b010: n2983 = 1'b1;
      3'b001: n2983 = 1'b0;
      default: n2983 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:657:11 */
  always @*
    case (n2974)
      3'b100: n2985 = 1'b0;
      3'b010: n2985 = n2969;
      3'b001: n2985 = 1'b0;
      default: n2985 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2988 = n2898 ? 3'b100 : 3'b010;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2989 = n2898 ? n2931 : n2195;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2990 = n2898 ? n2936 : n2977;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2991 = n2898 ? n2939 : n2980;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2992 = n2898 ? n2904 : n2961;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2994 = n2898 ? n2942 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2996 = n2898 ? n2945 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2997 = n2898 ? n2948 : n2983;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n2999 = n2898 ? n2951 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n3000 = n2898 ? n2954 : n2985;
  /*# rtl/t65/T65_MCode.vhd:622:9 */
  assign n3002 = n2898 ? n2956 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:620:7 */
  assign n3004 = n2196 == 5'b00101;
  /*# rtl/t65/T65_MCode.vhd:620:20 */
  assign n3006 = n2196 == 5'b00110;
  /*# rtl/t65/T65_MCode.vhd:620:20 */
  assign n3007 = n3004 | n3006;
  /*# rtl/t65/T65_MCode.vhd:620:30 */
  assign n3009 = n2196 == 5'b00111;
  /*# rtl/t65/T65_MCode.vhd:620:30 */
  assign n3010 = n3007 | n3009;
  /*# rtl/t65/T65_MCode.vhd:674:14 */
  assign n3011 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:674:27 */
  assign n3013 = n3011 == 2'b01;
  /*# rtl/t65/T65_MCode.vhd:674:40 */
  assign n3014 = ir[4:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:674:53 */
  assign n3016 = n3014 == 5'b01100;
  /*# rtl/t65/T65_MCode.vhd:674:34 */
  assign n3017 = n3016 & n3013;
  /*# rtl/t65/T65_MCode.vhd:675:16 */
  assign n3018 = ir[5]; // extract
  /*# rtl/t65/T65_MCode.vhd:675:20 */
  assign n3019 = ~n3018;
  /*# rtl/t65/T65_MCode.vhd:678:15 */
  assign n3021 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:681:15 */
  assign n3023 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:677:13 */
  assign n3024 = {n3023, n3021};
  /*# rtl/t65/T65_MCode.vhd:677:13 */
  always @*
    case (n3024)
      2'b10: n3028 = 2'b10;
      2'b01: n3028 = 2'b01;
      default: n3028 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:677:13 */
  always @*
    case (n3024)
      2'b10: n3031 = 1'b0;
      2'b01: n3031 = 1'b1;
      default: n3031 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:688:15 */
  assign n3033 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:694:25 */
  assign n3035 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:694:17 */
  assign n3038 = n3035 ? 2'b10 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:697:25 */
  assign n3040 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:697:17 */
  assign n3043 = n3040 ? 2'b11 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:692:15 */
  assign n3045 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:702:25 */
  assign n3047 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:702:17 */
  assign n3050 = n3047 ? 2'b11 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:702:17 */
  assign n3053 = n3047 ? 2'b00 : 2'b01;
  /*# rtl/t65/T65_MCode.vhd:702:17 */
  assign n3056 = n3047 ? 2'b01 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:700:15 */
  assign n3058 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:708:15 */
  assign n3060 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  assign n3061 = {n3060, n3058, n3045, n3033};
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  always @*
    case (n3061)
      4'b1000: n3063 = 2'b00;
      4'b0100: n3063 = n3050;
      4'b0010: n3063 = n3043;
      4'b0001: n3063 = 2'b00;
      default: n3063 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  always @*
    case (n3061)
      4'b1000: n3067 = 2'b10;
      4'b0100: n3067 = n3053;
      4'b0010: n3067 = n3038;
      4'b0001: n3067 = 2'b01;
      default: n3067 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  always @*
    case (n3061)
      4'b1000: n3069 = 2'b00;
      4'b0100: n3069 = n3056;
      4'b0010: n3069 = 2'b00;
      4'b0001: n3069 = 2'b00;
      default: n3069 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  always @*
    case (n3061)
      4'b1000: n3073 = 1'b0;
      4'b0100: n3073 = 1'b1;
      4'b0010: n3073 = 1'b0;
      4'b0001: n3073 = 1'b1;
      default: n3073 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  always @*
    case (n3061)
      4'b1000: n3076 = 1'b0;
      4'b0100: n3076 = 1'b0;
      4'b0010: n3076 = 1'b0;
      4'b0001: n3076 = 1'b1;
      default: n3076 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:687:13 */
  always @*
    case (n3061)
      4'b1000: n3079 = 1'b0;
      4'b0100: n3079 = 1'b0;
      4'b0010: n3079 = 1'b1;
      4'b0001: n3079 = 1'b0;
      default: n3079 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3082 = n3019 ? 3'b010 : 3'b100;
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3084 = n3019 ? 2'b00 : n3063;
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3085 = n3019 ? n3028 : n3067;
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3087 = n3019 ? 2'b00 : n3069;
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3088 = n3019 ? n3031 : n3073;
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3090 = n3019 ? 1'b0 : n3076;
  /*# rtl/t65/T65_MCode.vhd:675:11 */
  assign n3092 = n3019 ? 1'b0 : n3079;
  /*# rtl/t65/T65_MCode.vhd:717:20 */
  assign n3093 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:717:33 */
  assign n3095 = n3093 == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:717:15 */
  assign n3098 = n3095 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:716:13 */
  assign n3100 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:720:13 */
  assign n3102 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:726:20 */
  assign n3103 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:726:33 */
  assign n3105 = n3103 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:726:15 */
  assign n3108 = n3105 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:723:13 */
  assign n3110 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:730:13 */
  assign n3112 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  assign n3113 = {n3112, n3110, n3102, n3100};
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  always @*
    case (n3113)
      4'b1000: n3116 = 2'b00;
      4'b0100: n3116 = 2'b11;
      4'b0010: n3116 = 2'b00;
      4'b0001: n3116 = 2'b00;
      default: n3116 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  always @*
    case (n3113)
      4'b1000: n3120 = 2'b00;
      4'b0100: n3120 = 2'b01;
      4'b0010: n3120 = 2'b01;
      4'b0001: n3120 = 2'b00;
      default: n3120 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  always @*
    case (n3113)
      4'b1000: n3123 = 1'b0;
      4'b0100: n3123 = 1'b0;
      4'b0010: n3123 = 1'b1;
      4'b0001: n3123 = 1'b0;
      default: n3123 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  always @*
    case (n3113)
      4'b1000: n3126 = 1'b0;
      4'b0100: n3126 = 1'b1;
      4'b0010: n3126 = 1'b0;
      4'b0001: n3126 = 1'b0;
      default: n3126 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  always @*
    case (n3113)
      4'b1000: n3128 = 1'b0;
      4'b0100: n3128 = 1'b0;
      4'b0010: n3128 = 1'b0;
      4'b0001: n3128 = n3098;
      default: n3128 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:715:11 */
  always @*
    case (n3113)
      4'b1000: n3130 = 1'b0;
      4'b0100: n3130 = n3108;
      4'b0010: n3130 = 1'b0;
      4'b0001: n3130 = 1'b0;
      default: n3130 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3132 = n3017 ? n3082 : 3'b011;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3133 = n3017 ? n3084 : n3116;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3134 = n3017 ? n3085 : n3120;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3136 = n3017 ? n3087 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3138 = n3017 ? n3088 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3139 = n3017 ? n3090 : n3123;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3140 = n3017 ? n3092 : n3126;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3142 = n3017 ? 1'b0 : n3128;
  /*# rtl/t65/T65_MCode.vhd:674:9 */
  assign n3144 = n3017 ? 1'b0 : n3130;
  /*# rtl/t65/T65_MCode.vhd:672:7 */
  assign n3146 = n2196 == 5'b01100;
  /*# rtl/t65/T65_MCode.vhd:740:14 */
  assign n3147 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:740:27 */
  assign n3149 = n3147 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:740:41 */
  assign n3150 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:740:35 */
  assign n3151 = n3150 & n3149;
  /*# rtl/t65/T65_MCode.vhd:740:60 */
  assign n3153 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:740:71 */
  assign n3154 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:740:74 */
  assign n3155 = ~n3154;
  /*# rtl/t65/T65_MCode.vhd:740:66 */
  assign n3156 = n3153 | n3155;
  /*# rtl/t65/T65_MCode.vhd:740:51 */
  assign n3157 = n3156 & n3151;
  /*# rtl/t65/T65_MCode.vhd:743:18 */
  assign n3159 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:743:30 */
  assign n3160 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:743:24 */
  assign n3161 = n3160 & n3159;
  /*# rtl/t65/T65_MCode.vhd:743:11 */
  assign n3163 = n3161 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:747:13 */
  assign n3165 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:750:13 */
  assign n3167 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:756:22 */
  assign n3169 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:756:15 */
  assign n3172 = n3169 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:754:13 */
  assign n3174 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:760:13 */
  assign n3176 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:766:22 */
  assign n3178 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:766:34 */
  assign n3179 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:766:28 */
  assign n3180 = n3179 & n3178;
  /*# rtl/t65/T65_MCode.vhd:766:15 */
  assign n3182 = n3180 ? 4'b0001 : n2195;
  /*# rtl/t65/T65_MCode.vhd:766:15 */
  assign n3185 = n3180 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:765:13 */
  assign n3187 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  assign n3188 = {n3187, n3176, n3174, n3167, n3165};
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3189 = n3182;
      5'b01000: n3189 = n2195;
      5'b00100: n3189 = n2195;
      5'b00010: n3189 = n2195;
      5'b00001: n3189 = n2195;
      default: n3189 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3194 = 2'b00;
      5'b01000: n3194 = 2'b11;
      5'b00100: n3194 = 2'b11;
      5'b00010: n3194 = 2'b11;
      5'b00001: n3194 = 2'b00;
      default: n3194 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3198 = 2'b00;
      5'b01000: n3198 = 2'b00;
      5'b00100: n3198 = 2'b00;
      5'b00010: n3198 = 2'b01;
      5'b00001: n3198 = 2'b01;
      default: n3198 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3201 = 1'b0;
      5'b01000: n3201 = 1'b0;
      5'b00100: n3201 = 1'b1;
      5'b00010: n3201 = 1'b0;
      5'b00001: n3201 = 1'b0;
      default: n3201 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3204 = 1'b0;
      5'b01000: n3204 = 1'b1;
      5'b00100: n3204 = 1'b0;
      5'b00010: n3204 = 1'b0;
      5'b00001: n3204 = 1'b0;
      default: n3204 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3207 = 1'b0;
      5'b01000: n3207 = 1'b0;
      5'b00100: n3207 = 1'b0;
      5'b00010: n3207 = 1'b0;
      5'b00001: n3207 = 1'b1;
      default: n3207 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3210 = 1'b0;
      5'b01000: n3210 = 1'b0;
      5'b00100: n3210 = 1'b0;
      5'b00010: n3210 = 1'b1;
      5'b00001: n3210 = 1'b0;
      default: n3210 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3213 = 1'b0;
      5'b01000: n3213 = 1'b1;
      5'b00100: n3213 = 1'b0;
      5'b00010: n3213 = 1'b0;
      5'b00001: n3213 = 1'b0;
      default: n3213 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3216 = 1'b0;
      5'b01000: n3216 = 1'b1;
      5'b00100: n3216 = n3172;
      5'b00010: n3216 = 1'b0;
      5'b00001: n3216 = 1'b0;
      default: n3216 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:746:11 */
  always @*
    case (n3188)
      5'b10000: n3218 = n3185;
      5'b01000: n3218 = 1'b0;
      5'b00100: n3218 = 1'b0;
      5'b00010: n3218 = 1'b0;
      5'b00001: n3218 = 1'b0;
      default: n3218 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:774:16 */
  assign n3219 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:774:29 */
  assign n3221 = n3219 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:774:11 */
  assign n3223 = n3221 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:778:13 */
  assign n3225 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:779:13 */
  assign n3227 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:785:20 */
  assign n3228 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:785:33 */
  assign n3230 = n3228 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:785:15 */
  assign n3233 = n3230 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:782:13 */
  assign n3235 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:789:13 */
  assign n3237 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:777:11 */
  assign n3238 = {n3237, n3235, n3227, n3225};
  /*# rtl/t65/T65_MCode.vhd:777:11 */
  always @*
    case (n3238)
      4'b1000: n3241 = 2'b00;
      4'b0100: n3241 = 2'b11;
      4'b0010: n3241 = 2'b00;
      4'b0001: n3241 = 2'b00;
      default: n3241 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:777:11 */
  always @*
    case (n3238)
      4'b1000: n3245 = 2'b00;
      4'b0100: n3245 = 2'b01;
      4'b0010: n3245 = 2'b01;
      4'b0001: n3245 = 2'b00;
      default: n3245 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:777:11 */
  always @*
    case (n3238)
      4'b1000: n3248 = 1'b0;
      4'b0100: n3248 = 1'b0;
      4'b0010: n3248 = 1'b1;
      4'b0001: n3248 = 1'b0;
      default: n3248 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:777:11 */
  always @*
    case (n3238)
      4'b1000: n3251 = 1'b0;
      4'b0100: n3251 = 1'b1;
      4'b0010: n3251 = 1'b0;
      4'b0001: n3251 = 1'b0;
      default: n3251 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:777:11 */
  always @*
    case (n3238)
      4'b1000: n3253 = 1'b0;
      4'b0100: n3253 = n3233;
      4'b0010: n3253 = 1'b0;
      4'b0001: n3253 = 1'b0;
      default: n3253 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3256 = n3157 ? 3'b101 : 3'b011;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3257 = n3157 ? n3189 : n2195;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3258 = n3157 ? n3194 : n3241;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3259 = n3157 ? n3198 : n3245;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3260 = n3157 ? n3163 : n3223;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3262 = n3157 ? n3201 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3264 = n3157 ? n3204 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3265 = n3157 ? n3207 : n3248;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3266 = n3157 ? n3210 : n3251;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3268 = n3157 ? n3213 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3269 = n3157 ? n3216 : n3253;
  /*# rtl/t65/T65_MCode.vhd:740:9 */
  assign n3271 = n3157 ? n3218 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:738:7 */
  assign n3273 = n2196 == 5'b01101;
  /*# rtl/t65/T65_MCode.vhd:738:20 */
  assign n3275 = n2196 == 5'b01110;
  /*# rtl/t65/T65_MCode.vhd:738:20 */
  assign n3276 = n3273 | n3275;
  /*# rtl/t65/T65_MCode.vhd:738:30 */
  assign n3278 = n2196 == 5'b01111;
  /*# rtl/t65/T65_MCode.vhd:738:30 */
  assign n3279 = n3276 | n3278;
  /*# rtl/t65/T65_MCode.vhd:801:9 */
  assign n3282 = branch ? 3'b011 : 3'b001;
  /*# rtl/t65/T65_MCode.vhd:815:11 */
  assign n3284 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:826:11 */
  assign n3286 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:835:11 */
  assign n3288 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:810:9 */
  assign n3289 = {n3288, n3286, n3284};
  /*# rtl/t65/T65_MCode.vhd:810:9 */
  always @*
    case (n3289)
      3'b100: n3293 = 2'b00;
      3'b010: n3293 = 2'b11;
      3'b001: n3293 = 2'b01;
      default: n3293 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:810:9 */
  always @*
    case (n3289)
      3'b100: n3296 = 1'b0;
      3'b010: n3296 = 1'b1;
      3'b001: n3296 = 1'b0;
      default: n3296 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:810:9 */
  always @*
    case (n3289)
      3'b100: n3299 = 1'b0;
      3'b010: n3299 = 1'b0;
      3'b001: n3299 = 1'b1;
      default: n3299 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:795:7 */
  assign n3301 = n2196 == 5'b10000;
  /*# rtl/t65/T65_MCode.vhd:843:14 */
  assign n3302 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:843:27 */
  assign n3304 = n3302 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:845:18 */
  assign n3306 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:845:30 */
  assign n3307 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:845:24 */
  assign n3308 = n3307 & n3306;
  /*# rtl/t65/T65_MCode.vhd:845:11 */
  assign n3311 = n3308 ? 3'b111 : 3'b101;
  /*# rtl/t65/T65_MCode.vhd:843:9 */
  assign n3313 = n3304 ? n3311 : 3'b101;
  /*# rtl/t65/T65_MCode.vhd:843:9 */
  assign n3316 = n3304 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:850:11 */
  assign n3318 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:854:11 */
  assign n3320 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:858:11 */
  assign n3322 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:865:18 */
  assign n3323 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:865:31 */
  assign n3325 = n3323 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:867:20 */
  assign n3326 = ir[3:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:867:33 */
  assign n3328 = n3326 == 4'b0011;
  /*# rtl/t65/T65_MCode.vhd:867:15 */
  assign n3331 = n3328 ? 2'b10 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:870:21 */
  assign n3332 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:870:24 */
  assign n3333 = ~n3332;
  /*# rtl/t65/T65_MCode.vhd:870:34 */
  assign n3335 = ir == 8'b10110011;
  /*# rtl/t65/T65_MCode.vhd:870:29 */
  assign n3336 = n3333 | n3335;
  /*# rtl/t65/T65_MCode.vhd:870:13 */
  assign n3339 = n3336 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:865:13 */
  assign n3341 = n3325 ? n3331 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:865:13 */
  assign n3343 = n3325 ? 1'b0 : n3339;
  /*# rtl/t65/T65_MCode.vhd:865:13 */
  assign n3346 = n3325 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:863:11 */
  assign n3348 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:875:20 */
  assign n3350 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:875:32 */
  assign n3351 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:875:26 */
  assign n3352 = n3351 & n3350;
  /*# rtl/t65/T65_MCode.vhd:875:46 */
  assign n3353 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:875:58 */
  assign n3355 = n3353 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:875:40 */
  assign n3356 = n3355 & n3352;
  /*# rtl/t65/T65_MCode.vhd:875:13 */
  assign n3359 = n3356 ? 2'b11 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:875:13 */
  assign n3362 = n3356 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:875:13 */
  assign n3365 = n3356 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:874:11 */
  assign n3367 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:880:11 */
  assign n3369 = mcycle == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:885:11 */
  assign n3371 = mcycle == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  assign n3372 = {n3371, n3369, n3367, n3348, n3322, n3320, n3318};
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3375 = 4'b0001;
      7'b0100000: n3375 = n2195;
      7'b0010000: n3375 = n2195;
      7'b0001000: n3375 = n2195;
      7'b0000100: n3375 = 4'b0011;
      7'b0000010: n3375 = n2195;
      7'b0000001: n3375 = n2195;
      default: n3375 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3382 = 2'b00;
      7'b0100000: n3382 = 2'b11;
      7'b0010000: n3382 = n3359;
      7'b0001000: n3382 = 2'b11;
      7'b0000100: n3382 = 2'b11;
      7'b0000010: n3382 = 2'b10;
      7'b0000001: n3382 = 2'b10;
      default: n3382 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3385 = 2'b00;
      7'b0100000: n3385 = 2'b00;
      7'b0010000: n3385 = 2'b00;
      7'b0001000: n3385 = 2'b00;
      7'b0000100: n3385 = 2'b00;
      7'b0000010: n3385 = 2'b00;
      7'b0000001: n3385 = 2'b01;
      default: n3385 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3390 = 2'b00;
      7'b0100000: n3390 = 2'b00;
      7'b0010000: n3390 = 2'b00;
      7'b0001000: n3390 = 2'b11;
      7'b0000100: n3390 = 2'b10;
      7'b0000010: n3390 = 2'b01;
      7'b0000001: n3390 = 2'b00;
      default: n3390 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3392 = 2'b00;
      7'b0100000: n3392 = 2'b00;
      7'b0010000: n3392 = 2'b00;
      7'b0001000: n3392 = n3341;
      7'b0000100: n3392 = 2'b00;
      7'b0000010: n3392 = 2'b00;
      7'b0000001: n3392 = 2'b00;
      default: n3392 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3394 = 1'b0;
      7'b0100000: n3394 = 1'b0;
      7'b0010000: n3394 = 1'b0;
      7'b0001000: n3394 = n3343;
      7'b0000100: n3394 = 1'b0;
      7'b0000010: n3394 = 1'b0;
      7'b0000001: n3394 = 1'b0;
      default: n3394 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3396 = 1'b0;
      7'b0100000: n3396 = 1'b0;
      7'b0010000: n3396 = n3362;
      7'b0001000: n3396 = 1'b0;
      7'b0000100: n3396 = 1'b0;
      7'b0000010: n3396 = 1'b0;
      7'b0000001: n3396 = 1'b0;
      default: n3396 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3399 = 1'b0;
      7'b0100000: n3399 = 1'b1;
      7'b0010000: n3399 = 1'b0;
      7'b0001000: n3399 = 1'b0;
      7'b0000100: n3399 = 1'b0;
      7'b0000010: n3399 = 1'b0;
      7'b0000001: n3399 = 1'b0;
      default: n3399 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3402 = 1'b0;
      7'b0100000: n3402 = 1'b0;
      7'b0010000: n3402 = 1'b0;
      7'b0001000: n3402 = 1'b0;
      7'b0000100: n3402 = 1'b0;
      7'b0000010: n3402 = 1'b0;
      7'b0000001: n3402 = 1'b1;
      default: n3402 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3405 = 1'b0;
      7'b0100000: n3405 = 1'b0;
      7'b0010000: n3405 = 1'b0;
      7'b0001000: n3405 = 1'b0;
      7'b0000100: n3405 = 1'b0;
      7'b0000010: n3405 = 1'b1;
      7'b0000001: n3405 = 1'b0;
      default: n3405 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3408 = 1'b0;
      7'b0100000: n3408 = 1'b0;
      7'b0010000: n3408 = 1'b0;
      7'b0001000: n3408 = 1'b0;
      7'b0000100: n3408 = 1'b1;
      7'b0000010: n3408 = 1'b0;
      7'b0000001: n3408 = 1'b0;
      default: n3408 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3411 = 1'b0;
      7'b0100000: n3411 = 1'b1;
      7'b0010000: n3411 = 1'b0;
      7'b0001000: n3411 = 1'b0;
      7'b0000100: n3411 = 1'b0;
      7'b0000010: n3411 = 1'b0;
      7'b0000001: n3411 = 1'b0;
      default: n3411 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3414 = 1'b0;
      7'b0100000: n3414 = 1'b1;
      7'b0010000: n3414 = n3365;
      7'b0001000: n3414 = n3346;
      7'b0000100: n3414 = 1'b0;
      7'b0000010: n3414 = 1'b0;
      7'b0000001: n3414 = 1'b0;
      default: n3414 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:849:9 */
  always @*
    case (n3372)
      7'b1000000: n3417 = 1'b1;
      7'b0100000: n3417 = 1'b0;
      7'b0010000: n3417 = 1'b0;
      7'b0001000: n3417 = 1'b0;
      7'b0000100: n3417 = 1'b0;
      7'b0000010: n3417 = 1'b0;
      7'b0000001: n3417 = 1'b0;
      default: n3417 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:841:7 */
  assign n3419 = n2196 == 5'b10001;
  /*# rtl/t65/T65_MCode.vhd:841:20 */
  assign n3421 = n2196 == 5'b10011;
  /*# rtl/t65/T65_MCode.vhd:841:20 */
  assign n3422 = n3419 | n3421;
  /*# rtl/t65/T65_MCode.vhd:897:14 */
  assign n3423 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:897:27 */
  assign n3425 = n3423 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:897:41 */
  assign n3426 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:897:35 */
  assign n3427 = n3426 & n3425;
  /*# rtl/t65/T65_MCode.vhd:897:60 */
  assign n3429 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:897:71 */
  assign n3430 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:897:74 */
  assign n3431 = ~n3430;
  /*# rtl/t65/T65_MCode.vhd:897:66 */
  assign n3432 = n3429 | n3431;
  /*# rtl/t65/T65_MCode.vhd:897:51 */
  assign n3433 = n3432 & n3427;
  /*# rtl/t65/T65_MCode.vhd:899:18 */
  assign n3435 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:899:30 */
  assign n3436 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:899:24 */
  assign n3437 = n3436 & n3435;
  /*# rtl/t65/T65_MCode.vhd:899:11 */
  assign n3439 = n3437 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:904:13 */
  assign n3441 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:908:13 */
  assign n3443 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:913:22 */
  assign n3445 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:913:15 */
  assign n3448 = n3445 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:911:13 */
  assign n3450 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:922:22 */
  assign n3452 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:922:34 */
  assign n3453 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:922:28 */
  assign n3454 = n3453 & n3452;
  /*# rtl/t65/T65_MCode.vhd:922:15 */
  assign n3457 = n3454 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:917:13 */
  assign n3459 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:926:22 */
  assign n3461 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:926:34 */
  assign n3462 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:926:28 */
  assign n3463 = n3462 & n3461;
  /*# rtl/t65/T65_MCode.vhd:926:15 */
  assign n3465 = n3463 ? 4'b0001 : n2195;
  /*# rtl/t65/T65_MCode.vhd:926:15 */
  assign n3468 = n3463 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:925:13 */
  assign n3470 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  assign n3471 = {n3470, n3459, n3450, n3443, n3441};
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3472 = n3465;
      5'b01000: n3472 = n2195;
      5'b00100: n3472 = n2195;
      5'b00010: n3472 = n2195;
      5'b00001: n3472 = n2195;
      default: n3472 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3478 = 2'b00;
      5'b01000: n3478 = 2'b10;
      5'b00100: n3478 = 2'b10;
      5'b00010: n3478 = 2'b10;
      5'b00001: n3478 = 2'b10;
      default: n3478 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3481 = 2'b00;
      5'b01000: n3481 = 2'b00;
      5'b00100: n3481 = 2'b00;
      5'b00010: n3481 = 2'b00;
      5'b00001: n3481 = 2'b01;
      default: n3481 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3484 = 1'b0;
      5'b01000: n3484 = 1'b0;
      5'b00100: n3484 = 1'b0;
      5'b00010: n3484 = 1'b1;
      5'b00001: n3484 = 1'b0;
      default: n3484 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3487 = 1'b0;
      5'b01000: n3487 = n3457;
      5'b00100: n3487 = 1'b1;
      5'b00010: n3487 = 1'b0;
      5'b00001: n3487 = 1'b0;
      default: n3487 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3490 = 1'b0;
      5'b01000: n3490 = 1'b1;
      5'b00100: n3490 = 1'b0;
      5'b00010: n3490 = 1'b0;
      5'b00001: n3490 = 1'b0;
      default: n3490 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3493 = 1'b0;
      5'b01000: n3493 = 1'b0;
      5'b00100: n3493 = 1'b0;
      5'b00010: n3493 = 1'b0;
      5'b00001: n3493 = 1'b1;
      default: n3493 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3496 = 1'b0;
      5'b01000: n3496 = 1'b1;
      5'b00100: n3496 = 1'b0;
      5'b00010: n3496 = 1'b0;
      5'b00001: n3496 = 1'b0;
      default: n3496 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3499 = 1'b0;
      5'b01000: n3499 = 1'b1;
      5'b00100: n3499 = n3448;
      5'b00010: n3499 = 1'b0;
      5'b00001: n3499 = 1'b0;
      default: n3499 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:903:11 */
  always @*
    case (n3471)
      5'b10000: n3501 = n3468;
      5'b01000: n3501 = 1'b0;
      5'b00100: n3501 = 1'b0;
      5'b00010: n3501 = 1'b0;
      5'b00001: n3501 = 1'b0;
      default: n3501 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:934:16 */
  assign n3502 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:934:29 */
  assign n3504 = n3502 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:934:43 */
  assign n3505 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:934:37 */
  assign n3506 = n3505 & n3504;
  /*# rtl/t65/T65_MCode.vhd:934:11 */
  assign n3508 = n3506 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:938:13 */
  assign n3510 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:939:13 */
  assign n3512 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:946:21 */
  assign n3513 = ir[3:1]; // extract
  /*# rtl/t65/T65_MCode.vhd:946:34 */
  assign n3515 = n3513 == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:946:15 */
  assign n3518 = n3515 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:949:20 */
  assign n3519 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:949:33 */
  assign n3521 = n3519 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:949:15 */
  assign n3524 = n3521 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:943:13 */
  assign n3526 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:953:13 */
  assign n3528 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  assign n3529 = {n3528, n3526, n3512, n3510};
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  always @*
    case (n3529)
      4'b1000: n3533 = 2'b00;
      4'b0100: n3533 = 2'b10;
      4'b0010: n3533 = 2'b10;
      4'b0001: n3533 = 2'b00;
      default: n3533 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  always @*
    case (n3529)
      4'b1000: n3536 = 2'b00;
      4'b0100: n3536 = 2'b00;
      4'b0010: n3536 = 2'b01;
      4'b0001: n3536 = 2'b00;
      default: n3536 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  always @*
    case (n3529)
      4'b1000: n3539 = 1'b0;
      4'b0100: n3539 = 1'b1;
      4'b0010: n3539 = 1'b0;
      4'b0001: n3539 = 1'b0;
      default: n3539 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  always @*
    case (n3529)
      4'b1000: n3541 = 1'b0;
      4'b0100: n3541 = n3518;
      4'b0010: n3541 = 1'b0;
      4'b0001: n3541 = 1'b0;
      default: n3541 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  always @*
    case (n3529)
      4'b1000: n3544 = 1'b0;
      4'b0100: n3544 = 1'b0;
      4'b0010: n3544 = 1'b1;
      4'b0001: n3544 = 1'b0;
      default: n3544 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:937:11 */
  always @*
    case (n3529)
      4'b1000: n3546 = 1'b0;
      4'b0100: n3546 = n3524;
      4'b0010: n3546 = 1'b0;
      4'b0001: n3546 = 1'b0;
      default: n3546 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3549 = n3433 ? 3'b101 : 3'b011;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3550 = n3433 ? n3472 : n2195;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3551 = n3433 ? n3478 : n3533;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3552 = n3433 ? n3481 : n3536;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3553 = n3433 ? n3484 : n3539;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3555 = n3433 ? 1'b0 : n3541;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3556 = n3433 ? n3439 : n3508;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3558 = n3433 ? n3487 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3560 = n3433 ? n3490 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3561 = n3433 ? n3493 : n3544;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3563 = n3433 ? n3496 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3564 = n3433 ? n3499 : n3546;
  /*# rtl/t65/T65_MCode.vhd:897:9 */
  assign n3566 = n3433 ? n3501 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:895:7 */
  assign n3568 = n2196 == 5'b10100;
  /*# rtl/t65/T65_MCode.vhd:895:20 */
  assign n3570 = n2196 == 5'b10101;
  /*# rtl/t65/T65_MCode.vhd:895:20 */
  assign n3571 = n3568 | n3570;
  /*# rtl/t65/T65_MCode.vhd:895:30 */
  assign n3573 = n2196 == 5'b10110;
  /*# rtl/t65/T65_MCode.vhd:895:30 */
  assign n3574 = n3571 | n3573;
  /*# rtl/t65/T65_MCode.vhd:895:40 */
  assign n3576 = n2196 == 5'b10111;
  /*# rtl/t65/T65_MCode.vhd:895:40 */
  assign n3577 = n3574 | n3576;
  /*# rtl/t65/T65_MCode.vhd:963:14 */
  assign n3578 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:963:27 */
  assign n3580 = n3578 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:965:18 */
  assign n3582 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:965:30 */
  assign n3583 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:965:24 */
  assign n3584 = n3583 & n3582;
  /*# rtl/t65/T65_MCode.vhd:965:11 */
  assign n3587 = n3584 ? 3'b110 : 3'b100;
  /*# rtl/t65/T65_MCode.vhd:963:9 */
  assign n3589 = n3580 ? n3587 : 3'b100;
  /*# rtl/t65/T65_MCode.vhd:963:9 */
  assign n3592 = n3580 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:970:11 */
  assign n3594 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:973:11 */
  assign n3596 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:981:18 */
  assign n3597 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:981:31 */
  assign n3599 = n3597 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:983:20 */
  assign n3600 = ir[3:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:983:33 */
  assign n3602 = n3600 == 4'b1011;
  /*# rtl/t65/T65_MCode.vhd:983:15 */
  assign n3605 = n3602 ? 2'b01 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:986:21 */
  assign n3606 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:986:24 */
  assign n3607 = ~n3606;
  /*# rtl/t65/T65_MCode.vhd:986:34 */
  assign n3609 = ir == 8'b10111011;
  /*# rtl/t65/T65_MCode.vhd:986:29 */
  assign n3610 = n3607 | n3609;
  /*# rtl/t65/T65_MCode.vhd:986:13 */
  assign n3613 = n3610 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:981:13 */
  assign n3615 = n3599 ? n3605 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:981:13 */
  assign n3617 = n3599 ? 1'b0 : n3613;
  /*# rtl/t65/T65_MCode.vhd:981:13 */
  assign n3620 = n3599 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:979:11 */
  assign n3622 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:991:20 */
  assign n3624 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:991:32 */
  assign n3625 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:991:26 */
  assign n3626 = n3625 & n3624;
  /*# rtl/t65/T65_MCode.vhd:991:46 */
  assign n3627 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:991:58 */
  assign n3629 = n3627 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:991:40 */
  assign n3630 = n3629 & n3626;
  /*# rtl/t65/T65_MCode.vhd:991:13 */
  assign n3633 = n3630 ? 2'b11 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:991:13 */
  assign n3636 = n3630 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:991:13 */
  assign n3639 = n3630 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:990:11 */
  assign n3641 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:996:11 */
  assign n3643 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:1001:11 */
  assign n3645 = mcycle == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  assign n3646 = {n3645, n3643, n3641, n3622, n3596, n3594};
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3649 = 4'b0001;
      6'b010000: n3649 = n2195;
      6'b001000: n3649 = n2195;
      6'b000100: n3649 = n2195;
      6'b000010: n3649 = 4'b0011;
      6'b000001: n3649 = n2195;
      default: n3649 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3654 = 2'b00;
      6'b010000: n3654 = 2'b11;
      6'b001000: n3654 = n3633;
      6'b000100: n3654 = 2'b11;
      6'b000010: n3654 = 2'b11;
      6'b000001: n3654 = 2'b00;
      default: n3654 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3658 = 2'b00;
      6'b010000: n3658 = 2'b00;
      6'b001000: n3658 = 2'b00;
      6'b000100: n3658 = 2'b00;
      6'b000010: n3658 = 2'b01;
      6'b000001: n3658 = 2'b01;
      default: n3658 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3662 = 2'b00;
      6'b010000: n3662 = 2'b00;
      6'b001000: n3662 = 2'b00;
      6'b000100: n3662 = 2'b11;
      6'b000010: n3662 = 2'b10;
      6'b000001: n3662 = 2'b00;
      default: n3662 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3664 = 2'b00;
      6'b010000: n3664 = 2'b00;
      6'b001000: n3664 = 2'b00;
      6'b000100: n3664 = n3615;
      6'b000010: n3664 = 2'b00;
      6'b000001: n3664 = 2'b00;
      default: n3664 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3666 = 1'b0;
      6'b010000: n3666 = 1'b0;
      6'b001000: n3666 = 1'b0;
      6'b000100: n3666 = n3617;
      6'b000010: n3666 = 1'b0;
      6'b000001: n3666 = 1'b0;
      default: n3666 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3668 = 1'b0;
      6'b010000: n3668 = 1'b0;
      6'b001000: n3668 = n3636;
      6'b000100: n3668 = 1'b0;
      6'b000010: n3668 = 1'b0;
      6'b000001: n3668 = 1'b0;
      default: n3668 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3671 = 1'b0;
      6'b010000: n3671 = 1'b1;
      6'b001000: n3671 = 1'b0;
      6'b000100: n3671 = 1'b0;
      6'b000010: n3671 = 1'b0;
      6'b000001: n3671 = 1'b0;
      default: n3671 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3674 = 1'b0;
      6'b010000: n3674 = 1'b0;
      6'b001000: n3674 = 1'b0;
      6'b000100: n3674 = 1'b0;
      6'b000010: n3674 = 1'b0;
      6'b000001: n3674 = 1'b1;
      default: n3674 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3677 = 1'b0;
      6'b010000: n3677 = 1'b0;
      6'b001000: n3677 = 1'b0;
      6'b000100: n3677 = 1'b0;
      6'b000010: n3677 = 1'b1;
      6'b000001: n3677 = 1'b0;
      default: n3677 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3680 = 1'b0;
      6'b010000: n3680 = 1'b1;
      6'b001000: n3680 = 1'b0;
      6'b000100: n3680 = 1'b0;
      6'b000010: n3680 = 1'b0;
      6'b000001: n3680 = 1'b0;
      default: n3680 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3683 = 1'b0;
      6'b010000: n3683 = 1'b1;
      6'b001000: n3683 = n3639;
      6'b000100: n3683 = n3620;
      6'b000010: n3683 = 1'b0;
      6'b000001: n3683 = 1'b0;
      default: n3683 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:969:9 */
  always @*
    case (n3646)
      6'b100000: n3686 = 1'b1;
      6'b010000: n3686 = 1'b0;
      6'b001000: n3686 = 1'b0;
      6'b000100: n3686 = 1'b0;
      6'b000010: n3686 = 1'b0;
      6'b000001: n3686 = 1'b0;
      default: n3686 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:960:7 */
  assign n3688 = n2196 == 5'b11001;
  /*# rtl/t65/T65_MCode.vhd:960:20 */
  assign n3690 = n2196 == 5'b11011;
  /*# rtl/t65/T65_MCode.vhd:960:20 */
  assign n3691 = n3688 | n3690;
  /*# rtl/t65/T65_MCode.vhd:1013:14 */
  assign n3692 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:1013:27 */
  assign n3694 = n3692 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:1013:41 */
  assign n3695 = ir[1]; // extract
  /*# rtl/t65/T65_MCode.vhd:1013:35 */
  assign n3696 = n3695 & n3694;
  /*# rtl/t65/T65_MCode.vhd:1013:60 */
  assign n3698 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1013:71 */
  assign n3699 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:1013:74 */
  assign n3700 = ~n3699;
  /*# rtl/t65/T65_MCode.vhd:1013:66 */
  assign n3701 = n3698 | n3700;
  /*# rtl/t65/T65_MCode.vhd:1013:51 */
  assign n3702 = n3701 & n3696;
  /*# rtl/t65/T65_MCode.vhd:1016:18 */
  assign n3704 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1016:30 */
  assign n3705 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:1016:24 */
  assign n3706 = n3705 & n3704;
  /*# rtl/t65/T65_MCode.vhd:1016:11 */
  assign n3708 = n3706 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:1020:13 */
  assign n3710 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:1023:13 */
  assign n3712 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:1029:13 */
  assign n3714 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:1034:22 */
  assign n3716 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1034:15 */
  assign n3719 = n3716 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1032:13 */
  assign n3721 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:1038:13 */
  assign n3723 = mcycle == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:1044:22 */
  assign n3725 = mode == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1044:34 */
  assign n3726 = ir[0]; // extract
  /*# rtl/t65/T65_MCode.vhd:1044:28 */
  assign n3727 = n3726 & n3725;
  /*# rtl/t65/T65_MCode.vhd:1044:15 */
  assign n3729 = n3727 ? 4'b0001 : n2195;
  /*# rtl/t65/T65_MCode.vhd:1044:15 */
  assign n3732 = n3727 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1043:13 */
  assign n3734 = mcycle == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  assign n3735 = {n3734, n3723, n3721, n3714, n3712, n3710};
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3737 = n3729;
      6'b010000: n3737 = n2195;
      6'b001000: n3737 = n2195;
      6'b000100: n3737 = n2195;
      6'b000010: n3737 = 4'b0010;
      6'b000001: n3737 = n2195;
      default: n3737 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3743 = 2'b00;
      6'b010000: n3743 = 2'b11;
      6'b001000: n3743 = 2'b11;
      6'b000100: n3743 = 2'b11;
      6'b000010: n3743 = 2'b11;
      6'b000001: n3743 = 2'b00;
      default: n3743 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3747 = 2'b00;
      6'b010000: n3747 = 2'b00;
      6'b001000: n3747 = 2'b00;
      6'b000100: n3747 = 2'b00;
      6'b000010: n3747 = 2'b01;
      6'b000001: n3747 = 2'b01;
      default: n3747 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3751 = 2'b00;
      6'b010000: n3751 = 2'b00;
      6'b001000: n3751 = 2'b00;
      6'b000100: n3751 = 2'b11;
      6'b000010: n3751 = 2'b10;
      6'b000001: n3751 = 2'b00;
      default: n3751 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3754 = 1'b0;
      6'b010000: n3754 = 1'b0;
      6'b001000: n3754 = 1'b1;
      6'b000100: n3754 = 1'b0;
      6'b000010: n3754 = 1'b0;
      6'b000001: n3754 = 1'b0;
      default: n3754 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3757 = 1'b0;
      6'b010000: n3757 = 1'b1;
      6'b001000: n3757 = 1'b0;
      6'b000100: n3757 = 1'b0;
      6'b000010: n3757 = 1'b0;
      6'b000001: n3757 = 1'b0;
      default: n3757 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3760 = 1'b0;
      6'b010000: n3760 = 1'b0;
      6'b001000: n3760 = 1'b0;
      6'b000100: n3760 = 1'b0;
      6'b000010: n3760 = 1'b0;
      6'b000001: n3760 = 1'b1;
      default: n3760 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3763 = 1'b0;
      6'b010000: n3763 = 1'b0;
      6'b001000: n3763 = 1'b0;
      6'b000100: n3763 = 1'b0;
      6'b000010: n3763 = 1'b1;
      6'b000001: n3763 = 1'b0;
      default: n3763 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3766 = 1'b0;
      6'b010000: n3766 = 1'b1;
      6'b001000: n3766 = 1'b0;
      6'b000100: n3766 = 1'b0;
      6'b000010: n3766 = 1'b0;
      6'b000001: n3766 = 1'b0;
      default: n3766 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3769 = 1'b0;
      6'b010000: n3769 = 1'b1;
      6'b001000: n3769 = n3719;
      6'b000100: n3769 = 1'b0;
      6'b000010: n3769 = 1'b0;
      6'b000001: n3769 = 1'b0;
      default: n3769 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1019:11 */
  always @*
    case (n3735)
      6'b100000: n3771 = n3732;
      6'b010000: n3771 = 1'b0;
      6'b001000: n3771 = 1'b0;
      6'b000100: n3771 = 1'b0;
      6'b000010: n3771 = 1'b0;
      6'b000001: n3771 = 1'b0;
      default: n3771 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1052:16 */
  assign n3772 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:1052:29 */
  assign n3774 = n3772 != 2'b10;
  /*# rtl/t65/T65_MCode.vhd:1053:20 */
  assign n3776 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1053:32 */
  assign n3777 = ir[4]; // extract
  /*# rtl/t65/T65_MCode.vhd:1053:35 */
  assign n3778 = ~n3777;
  /*# rtl/t65/T65_MCode.vhd:1053:27 */
  assign n3779 = n3776 | n3778;
  /*# rtl/t65/T65_MCode.vhd:1053:45 */
  assign n3780 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:1053:57 */
  assign n3782 = n3780 != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1053:40 */
  assign n3783 = n3779 | n3782;
  /*# rtl/t65/T65_MCode.vhd:1052:11 */
  assign n3785 = n3786 ? 1'b1 : n2168;
  /*# rtl/t65/T65_MCode.vhd:1052:11 */
  assign n3786 = n3783 & n3774;
  /*# rtl/t65/T65_MCode.vhd:1058:13 */
  assign n3788 = mcycle == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:1059:13 */
  assign n3790 = mcycle == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:1065:20 */
  assign n3791 = ir[7:6]; // extract
  /*# rtl/t65/T65_MCode.vhd:1065:32 */
  assign n3793 = n3791 == 2'b10;
  /*# rtl/t65/T65_MCode.vhd:1065:44 */
  assign n3794 = ir[4:1]; // extract
  /*# rtl/t65/T65_MCode.vhd:1065:56 */
  assign n3796 = n3794 == 4'b1111;
  /*# rtl/t65/T65_MCode.vhd:1065:38 */
  assign n3797 = n3796 & n3793;
  /*# rtl/t65/T65_MCode.vhd:1065:15 */
  assign n3800 = n3797 ? 4'b0011 : 4'b0010;
  /*# rtl/t65/T65_MCode.vhd:1062:13 */
  assign n3802 = mcycle == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:1075:20 */
  assign n3803 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1075:33 */
  assign n3805 = n3803 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:1077:24 */
  assign n3806 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:1078:17 */
  assign n3808 = n3806 == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1078:26 */
  assign n3810 = n3806 == 2'b10;
  /*# rtl/t65/T65_MCode.vhd:1078:26 */
  assign n3811 = n3808 | n3810;
  /*# rtl/t65/T65_MCode.vhd:1079:17 */
  assign n3813 = n3806 == 2'b11;
  /*# rtl/t65/T65_MCode.vhd:1077:17 */
  assign n3814 = {n3813, n3811};
  /*# rtl/t65/T65_MCode.vhd:1077:17 */
  always @*
    case (n3814)
      2'b10: n3818 = 2'b10;
      2'b01: n3818 = 2'b01;
      default: n3818 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1075:15 */
  assign n3820 = n3805 ? n3818 : 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1075:15 */
  assign n3823 = n3805 ? 1'b0 : 1'b1;
  /*# rtl/t65/T65_MCode.vhd:1075:15 */
  assign n3826 = n3805 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1073:13 */
  assign n3828 = mcycle == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:1086:13 */
  assign n3830 = mcycle == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  assign n3831 = {n3830, n3828, n3802, n3790, n3788};
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3832 = n2195;
      5'b01000: n3832 = n2195;
      5'b00100: n3832 = n3800;
      5'b00010: n3832 = n2195;
      5'b00001: n3832 = n2195;
      default: n3832 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3836 = 2'b00;
      5'b01000: n3836 = 2'b11;
      5'b00100: n3836 = 2'b11;
      5'b00010: n3836 = 2'b00;
      5'b00001: n3836 = 2'b00;
      default: n3836 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3840 = 2'b00;
      5'b01000: n3840 = 2'b00;
      5'b00100: n3840 = 2'b01;
      5'b00010: n3840 = 2'b01;
      5'b00001: n3840 = 2'b00;
      default: n3840 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3844 = 2'b00;
      5'b01000: n3844 = 2'b11;
      5'b00100: n3844 = 2'b10;
      5'b00010: n3844 = 2'b00;
      5'b00001: n3844 = 2'b00;
      default: n3844 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3846 = 2'b00;
      5'b01000: n3846 = n3820;
      5'b00100: n3846 = 2'b00;
      5'b00010: n3846 = 2'b00;
      5'b00001: n3846 = 2'b00;
      default: n3846 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3848 = 1'b0;
      5'b01000: n3848 = n3823;
      5'b00100: n3848 = 1'b0;
      5'b00010: n3848 = 1'b0;
      5'b00001: n3848 = 1'b0;
      default: n3848 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3851 = 1'b0;
      5'b01000: n3851 = 1'b0;
      5'b00100: n3851 = 1'b0;
      5'b00010: n3851 = 1'b1;
      5'b00001: n3851 = 1'b0;
      default: n3851 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3854 = 1'b0;
      5'b01000: n3854 = 1'b0;
      5'b00100: n3854 = 1'b1;
      5'b00010: n3854 = 1'b0;
      5'b00001: n3854 = 1'b0;
      default: n3854 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1057:11 */
  always @*
    case (n3831)
      5'b10000: n3856 = 1'b0;
      5'b01000: n3856 = n3826;
      5'b00100: n3856 = 1'b0;
      5'b00010: n3856 = 1'b0;
      5'b00001: n3856 = 1'b0;
      default: n3856 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3859 = n3702 ? 3'b110 : 3'b100;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3860 = n3702 ? n3737 : n3832;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3861 = n3702 ? n3743 : n3836;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3862 = n3702 ? n3747 : n3840;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3863 = n3702 ? n3751 : n3844;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3865 = n3702 ? 2'b00 : n3846;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3867 = n3702 ? 1'b0 : n3848;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3868 = n3702 ? n3708 : n3785;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3870 = n3702 ? n3754 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3872 = n3702 ? n3757 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3873 = n3702 ? n3760 : n3851;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3874 = n3702 ? n3763 : n3854;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3876 = n3702 ? n3766 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3877 = n3702 ? n3769 : n3856;
  /*# rtl/t65/T65_MCode.vhd:1013:9 */
  assign n3879 = n3702 ? n3771 : 1'b0;
  /*# rtl/t65/T65_MCode.vhd:1011:7 */
  assign n3881 = n2196 == 5'b11100;
  /*# rtl/t65/T65_MCode.vhd:1011:20 */
  assign n3883 = n2196 == 5'b11101;
  /*# rtl/t65/T65_MCode.vhd:1011:20 */
  assign n3884 = n3881 | n3883;
  /*# rtl/t65/T65_MCode.vhd:1011:30 */
  assign n3886 = n2196 == 5'b11110;
  /*# rtl/t65/T65_MCode.vhd:1011:30 */
  assign n3887 = n3884 | n3886;
  /*# rtl/t65/T65_MCode.vhd:1011:40 */
  assign n3889 = n2196 == 5'b11111;
  /*# rtl/t65/T65_MCode.vhd:1011:40 */
  assign n3890 = n3887 | n3889;
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  assign n3891 = {n3890, n3691, n3577, n3422, n3301, n3279, n3146, n3010, n2887, n2853, n2813, n2766, n2754, n2655};
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3894 = n3859;
      14'b01000000000000: n3894 = n3589;
      14'b00100000000000: n3894 = n3549;
      14'b00010000000000: n3894 = n3313;
      14'b00001000000000: n3894 = n3282;
      14'b00000100000000: n3894 = n3256;
      14'b00000010000000: n3894 = n3132;
      14'b00000001000000: n3894 = n2988;
      14'b00000000100000: n3894 = 3'b010;
      14'b00000000010000: n3894 = n2845;
      14'b00000000001000: n3894 = 3'b001;
      14'b00000000000100: n3894 = 3'b001;
      14'b00000000000010: n3894 = n2667;
      14'b00000000000001: n3894 = n2612;
      default: n3894 = 3'b001;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3896 = n3860;
      14'b01000000000000: n3896 = n3649;
      14'b00100000000000: n3896 = n3550;
      14'b00010000000000: n3896 = n3375;
      14'b00001000000000: n3896 = n2195;
      14'b00000100000000: n3896 = n3257;
      14'b00000010000000: n3896 = n2195;
      14'b00000001000000: n3896 = n2989;
      14'b00000000100000: n3896 = n2195;
      14'b00000000010000: n3896 = n2195;
      14'b00000000001000: n3896 = n2807;
      14'b00000000000100: n3896 = n2195;
      14'b00000000000010: n3896 = n2710;
      14'b00000000000001: n3896 = n2614;
      default: n3896 = n2195;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3898 = n3861;
      14'b01000000000000: n3898 = n3654;
      14'b00100000000000: n3898 = n3551;
      14'b00010000000000: n3898 = n3382;
      14'b00001000000000: n3898 = 2'b00;
      14'b00000100000000: n3898 = n3258;
      14'b00000010000000: n3898 = n3133;
      14'b00000001000000: n3898 = n2990;
      14'b00000000100000: n3898 = n2875;
      14'b00000000010000: n3898 = 2'b00;
      14'b00000000001000: n3898 = 2'b00;
      14'b00000000000100: n3898 = 2'b00;
      14'b00000000000010: n3898 = n2717;
      14'b00000000000001: n3898 = n2616;
      default: n3898 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3900 = n2165;
      14'b01000000000000: n3900 = n2165;
      14'b00100000000000: n3900 = n2165;
      14'b00010000000000: n3900 = n2165;
      14'b00001000000000: n3900 = n2165;
      14'b00000100000000: n3900 = n2165;
      14'b00000010000000: n3900 = n2165;
      14'b00000001000000: n3900 = n2165;
      14'b00000000100000: n3900 = n2165;
      14'b00000000010000: n3900 = n2165;
      14'b00000000001000: n3900 = n2165;
      14'b00000000000100: n3900 = n2165;
      14'b00000000000010: n3900 = n2165;
      14'b00000000000001: n3900 = n2617;
      default: n3900 = n2165;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3902 = n3862;
      14'b01000000000000: n3902 = n3658;
      14'b00100000000000: n3902 = n3552;
      14'b00010000000000: n3902 = n3385;
      14'b00001000000000: n3902 = n3293;
      14'b00000100000000: n3902 = n3259;
      14'b00000010000000: n3902 = n3134;
      14'b00000001000000: n3902 = n2991;
      14'b00000000100000: n3902 = n2878;
      14'b00000000010000: n3902 = n2847;
      14'b00000000001000: n3902 = n2809;
      14'b00000000000100: n3902 = n2764;
      14'b00000000000010: n3902 = n2720;
      14'b00000000000001: n3902 = n2619;
      default: n3902 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3905 = n3863;
      14'b01000000000000: n3905 = n3662;
      14'b00100000000000: n3905 = 2'b00;
      14'b00010000000000: n3905 = n3390;
      14'b00001000000000: n3905 = 2'b00;
      14'b00000100000000: n3905 = 2'b00;
      14'b00000010000000: n3905 = n3136;
      14'b00000001000000: n3905 = 2'b00;
      14'b00000000100000: n3905 = 2'b00;
      14'b00000000010000: n3905 = 2'b00;
      14'b00000000001000: n3905 = 2'b00;
      14'b00000000000100: n3905 = 2'b00;
      14'b00000000000010: n3905 = n2723;
      14'b00000000000001: n3905 = 2'b00;
      default: n3905 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3908 = n3865;
      14'b01000000000000: n3908 = n3664;
      14'b00100000000000: n3908 = 2'b00;
      14'b00010000000000: n3908 = n3392;
      14'b00001000000000: n3908 = 2'b00;
      14'b00000100000000: n3908 = 2'b00;
      14'b00000010000000: n3908 = 2'b00;
      14'b00000001000000: n3908 = 2'b00;
      14'b00000000100000: n3908 = 2'b00;
      14'b00000000010000: n3908 = 2'b00;
      14'b00000000001000: n3908 = 2'b00;
      14'b00000000000100: n3908 = 2'b00;
      14'b00000000000010: n3908 = 2'b00;
      14'b00000000000001: n3908 = 2'b00;
      default: n3908 = 2'b00;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3911 = n3867;
      14'b01000000000000: n3911 = n3666;
      14'b00100000000000: n3911 = 1'b0;
      14'b00010000000000: n3911 = n3394;
      14'b00001000000000: n3911 = 1'b0;
      14'b00000100000000: n3911 = 1'b0;
      14'b00000010000000: n3911 = 1'b0;
      14'b00000001000000: n3911 = 1'b0;
      14'b00000000100000: n3911 = 1'b0;
      14'b00000000010000: n3911 = 1'b0;
      14'b00000000001000: n3911 = 1'b0;
      14'b00000000000100: n3911 = 1'b0;
      14'b00000000000010: n3911 = 1'b0;
      14'b00000000000001: n3911 = 1'b0;
      default: n3911 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3914 = 1'b0;
      14'b01000000000000: n3914 = 1'b0;
      14'b00100000000000: n3914 = n3553;
      14'b00010000000000: n3914 = 1'b0;
      14'b00001000000000: n3914 = 1'b0;
      14'b00000100000000: n3914 = 1'b0;
      14'b00000010000000: n3914 = 1'b0;
      14'b00000001000000: n3914 = 1'b0;
      14'b00000000100000: n3914 = 1'b0;
      14'b00000000010000: n3914 = 1'b0;
      14'b00000000001000: n3914 = 1'b0;
      14'b00000000000100: n3914 = 1'b0;
      14'b00000000000010: n3914 = n2726;
      14'b00000000000001: n3914 = 1'b0;
      default: n3914 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3917 = 1'b0;
      14'b01000000000000: n3917 = 1'b0;
      14'b00100000000000: n3917 = n3555;
      14'b00010000000000: n3917 = 1'b0;
      14'b00001000000000: n3917 = 1'b0;
      14'b00000100000000: n3917 = 1'b0;
      14'b00000010000000: n3917 = 1'b0;
      14'b00000001000000: n3917 = 1'b0;
      14'b00000000100000: n3917 = 1'b0;
      14'b00000000010000: n3917 = 1'b0;
      14'b00000000001000: n3917 = 1'b0;
      14'b00000000000100: n3917 = 1'b0;
      14'b00000000000010: n3917 = 1'b0;
      14'b00000000000001: n3917 = 1'b0;
      default: n3917 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3920 = 1'b0;
      14'b01000000000000: n3920 = 1'b0;
      14'b00100000000000: n3920 = 1'b0;
      14'b00010000000000: n3920 = 1'b0;
      14'b00001000000000: n3920 = n3296;
      14'b00000100000000: n3920 = 1'b0;
      14'b00000010000000: n3920 = 1'b0;
      14'b00000001000000: n3920 = 1'b0;
      14'b00000000100000: n3920 = 1'b0;
      14'b00000000010000: n3920 = 1'b0;
      14'b00000000001000: n3920 = 1'b0;
      14'b00000000000100: n3920 = 1'b0;
      14'b00000000000010: n3920 = 1'b0;
      14'b00000000000001: n3920 = 1'b0;
      default: n3920 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3923 = 1'b0;
      14'b01000000000000: n3923 = 1'b0;
      14'b00100000000000: n3923 = 1'b0;
      14'b00010000000000: n3923 = 1'b0;
      14'b00001000000000: n3923 = 1'b0;
      14'b00000100000000: n3923 = 1'b0;
      14'b00000010000000: n3923 = 1'b0;
      14'b00000001000000: n3923 = 1'b0;
      14'b00000000100000: n3923 = 1'b0;
      14'b00000000010000: n3923 = 1'b0;
      14'b00000000001000: n3923 = 1'b0;
      14'b00000000000100: n3923 = 1'b0;
      14'b00000000000010: n3923 = 1'b0;
      14'b00000000000001: n3923 = n2621;
      default: n3923 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3926 = 1'b0;
      14'b01000000000000: n3926 = 1'b0;
      14'b00100000000000: n3926 = 1'b0;
      14'b00010000000000: n3926 = 1'b0;
      14'b00001000000000: n3926 = 1'b0;
      14'b00000100000000: n3926 = 1'b0;
      14'b00000010000000: n3926 = 1'b0;
      14'b00000001000000: n3926 = 1'b0;
      14'b00000000100000: n3926 = 1'b0;
      14'b00000000010000: n3926 = 1'b0;
      14'b00000000001000: n3926 = 1'b0;
      14'b00000000000100: n3926 = 1'b0;
      14'b00000000000010: n3926 = 1'b0;
      14'b00000000000001: n3926 = n2623;
      default: n3926 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3928 = n3868;
      14'b01000000000000: n3928 = n3592;
      14'b00100000000000: n3928 = n3556;
      14'b00010000000000: n3928 = n3316;
      14'b00001000000000: n3928 = n2168;
      14'b00000100000000: n3928 = n3260;
      14'b00000010000000: n3928 = n2168;
      14'b00000001000000: n3928 = n2992;
      14'b00000000100000: n3928 = n2168;
      14'b00000000010000: n3928 = n2168;
      14'b00000000001000: n3928 = n2810;
      14'b00000000000100: n3928 = n2759;
      14'b00000000000010: n3928 = n2670;
      14'b00000000000001: n3928 = n2626;
      default: n3928 = n2168;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3930 = 1'b0;
      14'b01000000000000: n3930 = 1'b0;
      14'b00100000000000: n3930 = 1'b0;
      14'b00010000000000: n3930 = 1'b0;
      14'b00001000000000: n3930 = 1'b0;
      14'b00000100000000: n3930 = 1'b0;
      14'b00000010000000: n3930 = 1'b0;
      14'b00000001000000: n3930 = 1'b0;
      14'b00000000100000: n3930 = 1'b0;
      14'b00000000010000: n3930 = 1'b0;
      14'b00000000001000: n3930 = 1'b0;
      14'b00000000000100: n3930 = 1'b0;
      14'b00000000000010: n3930 = 1'b0;
      14'b00000000000001: n3930 = n2628;
      default: n3930 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3932 = n2171;
      14'b01000000000000: n3932 = n2171;
      14'b00100000000000: n3932 = n2171;
      14'b00010000000000: n3932 = n2171;
      14'b00001000000000: n3932 = n2171;
      14'b00000100000000: n3932 = n2171;
      14'b00000010000000: n3932 = n2171;
      14'b00000001000000: n3932 = n2171;
      14'b00000000100000: n3932 = n2171;
      14'b00000000010000: n3932 = n2848;
      14'b00000000001000: n3932 = n2811;
      14'b00000000000100: n3932 = n2171;
      14'b00000000000010: n3932 = n2171;
      14'b00000000000001: n3932 = n2631;
      default: n3932 = n2171;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3933 = n2174;
      14'b01000000000000: n3933 = n2174;
      14'b00100000000000: n3933 = n2174;
      14'b00010000000000: n3933 = n2174;
      14'b00001000000000: n3933 = n2174;
      14'b00000100000000: n3933 = n2174;
      14'b00000010000000: n3933 = n2174;
      14'b00000001000000: n3933 = n2174;
      14'b00000000100000: n3933 = n2174;
      14'b00000000010000: n3933 = n2174;
      14'b00000000001000: n3933 = n2174;
      14'b00000000000100: n3933 = n2174;
      14'b00000000000010: n3933 = n2174;
      14'b00000000000001: n3933 = n2633;
      default: n3933 = n2174;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3934 = n2177;
      14'b01000000000000: n3934 = n2177;
      14'b00100000000000: n3934 = n2177;
      14'b00010000000000: n3934 = n2177;
      14'b00001000000000: n3934 = n2177;
      14'b00000100000000: n3934 = n2177;
      14'b00000010000000: n3934 = n2177;
      14'b00000001000000: n3934 = n2177;
      14'b00000000100000: n3934 = n2177;
      14'b00000000010000: n3934 = n2177;
      14'b00000000001000: n3934 = n2177;
      14'b00000000000100: n3934 = n2177;
      14'b00000000000010: n3934 = n2177;
      14'b00000000000001: n3934 = n2635;
      default: n3934 = n2177;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3936 = n3870;
      14'b01000000000000: n3936 = n3668;
      14'b00100000000000: n3936 = n3558;
      14'b00010000000000: n3936 = n3396;
      14'b00001000000000: n3936 = n3299;
      14'b00000100000000: n3936 = n3262;
      14'b00000010000000: n3936 = n3138;
      14'b00000001000000: n3936 = n2994;
      14'b00000000100000: n3936 = 1'b0;
      14'b00000000010000: n3936 = 1'b0;
      14'b00000000001000: n3936 = 1'b0;
      14'b00000000000100: n3936 = 1'b0;
      14'b00000000000010: n3936 = n2728;
      14'b00000000000001: n3936 = n2637;
      default: n3936 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3939 = n3872;
      14'b01000000000000: n3939 = n3671;
      14'b00100000000000: n3939 = n3560;
      14'b00010000000000: n3939 = n3399;
      14'b00001000000000: n3939 = 1'b0;
      14'b00000100000000: n3939 = n3264;
      14'b00000010000000: n3939 = 1'b0;
      14'b00000001000000: n3939 = n2996;
      14'b00000000100000: n3939 = 1'b0;
      14'b00000000010000: n3939 = 1'b0;
      14'b00000000001000: n3939 = 1'b0;
      14'b00000000000100: n3939 = 1'b0;
      14'b00000000000010: n3939 = n2731;
      14'b00000000000001: n3939 = 1'b0;
      default: n3939 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3942 = 1'b0;
      14'b01000000000000: n3942 = 1'b0;
      14'b00100000000000: n3942 = n3561;
      14'b00010000000000: n3942 = n3402;
      14'b00001000000000: n3942 = 1'b0;
      14'b00000100000000: n3942 = 1'b0;
      14'b00000010000000: n3942 = 1'b0;
      14'b00000001000000: n3942 = n2997;
      14'b00000000100000: n3942 = n2881;
      14'b00000000010000: n3942 = 1'b0;
      14'b00000000001000: n3942 = 1'b0;
      14'b00000000000100: n3942 = 1'b0;
      14'b00000000000010: n3942 = n2734;
      14'b00000000000001: n3942 = 1'b0;
      default: n3942 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3945 = n3873;
      14'b01000000000000: n3945 = n3674;
      14'b00100000000000: n3945 = 1'b0;
      14'b00010000000000: n3945 = n3405;
      14'b00001000000000: n3945 = 1'b0;
      14'b00000100000000: n3945 = n3265;
      14'b00000010000000: n3945 = n3139;
      14'b00000001000000: n3945 = 1'b0;
      14'b00000000100000: n3945 = 1'b0;
      14'b00000000010000: n3945 = 1'b0;
      14'b00000000001000: n3945 = 1'b0;
      14'b00000000000100: n3945 = 1'b0;
      14'b00000000000010: n3945 = n2737;
      14'b00000000000001: n3945 = 1'b0;
      default: n3945 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3948 = n3874;
      14'b01000000000000: n3948 = n3677;
      14'b00100000000000: n3948 = 1'b0;
      14'b00010000000000: n3948 = n3408;
      14'b00001000000000: n3948 = 1'b0;
      14'b00000100000000: n3948 = n3266;
      14'b00000010000000: n3948 = n3140;
      14'b00000001000000: n3948 = 1'b0;
      14'b00000000100000: n3948 = 1'b0;
      14'b00000000010000: n3948 = 1'b0;
      14'b00000000001000: n3948 = 1'b0;
      14'b00000000000100: n3948 = 1'b0;
      14'b00000000000010: n3948 = n2740;
      14'b00000000000001: n3948 = 1'b0;
      default: n3948 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3951 = n3876;
      14'b01000000000000: n3951 = n3680;
      14'b00100000000000: n3951 = n3563;
      14'b00010000000000: n3951 = n3411;
      14'b00001000000000: n3951 = 1'b0;
      14'b00000100000000: n3951 = n3268;
      14'b00000010000000: n3951 = n3142;
      14'b00000001000000: n3951 = n2999;
      14'b00000000100000: n3951 = n2883;
      14'b00000000010000: n3951 = 1'b0;
      14'b00000000001000: n3951 = 1'b0;
      14'b00000000000100: n3951 = 1'b0;
      14'b00000000000010: n3951 = n2743;
      14'b00000000000001: n3951 = n2639;
      default: n3951 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3954 = n3877;
      14'b01000000000000: n3954 = n3683;
      14'b00100000000000: n3954 = n3564;
      14'b00010000000000: n3954 = n3414;
      14'b00001000000000: n3954 = 1'b0;
      14'b00000100000000: n3954 = n3269;
      14'b00000010000000: n3954 = n3144;
      14'b00000001000000: n3954 = n3000;
      14'b00000000100000: n3954 = n2885;
      14'b00000000010000: n3954 = 1'b0;
      14'b00000000001000: n3954 = 1'b0;
      14'b00000000000100: n3954 = 1'b0;
      14'b00000000000010: n3954 = n2746;
      14'b00000000000001: n3954 = n2641;
      default: n3954 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:235:5 */
  always @*
    case (n3891)
      14'b10000000000000: n3957 = n3879;
      14'b01000000000000: n3957 = n3686;
      14'b00100000000000: n3957 = n3566;
      14'b00010000000000: n3957 = n3417;
      14'b00001000000000: n3957 = 1'b0;
      14'b00000100000000: n3957 = n3271;
      14'b00000010000000: n3957 = 1'b0;
      14'b00000001000000: n3957 = n3002;
      14'b00000000100000: n3957 = 1'b0;
      14'b00000000010000: n3957 = 1'b0;
      14'b00000000001000: n3957 = 1'b0;
      14'b00000000000100: n3957 = 1'b0;
      14'b00000000000010: n3957 = n2749;
      14'b00000000000001: n3957 = 1'b0;
      default: n3957 = 1'b0;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1098:12 */
  assign n3962 = ir[1:0]; // extract
  /*# rtl/t65/T65_MCode.vhd:1100:16 */
  assign n3963 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:1105:18 */
  assign n3964 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1106:13 */
  assign n3966 = n3964 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:1106:24 */
  assign n3968 = n3964 == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:1106:24 */
  assign n3969 = n3966 | n3968;
  /*# rtl/t65/T65_MCode.vhd:1108:13 */
  assign n3971 = n3964 == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:1110:13 */
  assign n3973 = n3964 == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:1105:11 */
  assign n3974 = {n3973, n3971, n3969};
  /*# rtl/t65/T65_MCode.vhd:1105:11 */
  always @*
    case (n3974)
      3'b100: n3979 = 5'b01100;
      3'b010: n3979 = 5'b00101;
      3'b001: n3979 = 5'b00110;
      default: n3979 = 5'b00100;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1104:9 */
  assign n3981 = n3963 == 3'b000;
  /*# rtl/t65/T65_MCode.vhd:1104:20 */
  assign n3983 = n3963 == 3'b001;
  /*# rtl/t65/T65_MCode.vhd:1104:20 */
  assign n3984 = n3981 | n3983;
  /*# rtl/t65/T65_MCode.vhd:1104:28 */
  assign n3986 = n3963 == 3'b011;
  /*# rtl/t65/T65_MCode.vhd:1104:28 */
  assign n3987 = n3984 | n3986;
  /*# rtl/t65/T65_MCode.vhd:1118:18 */
  assign n3988 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1119:13 */
  assign n3990 = n3988 == 3'b111;
  /*# rtl/t65/T65_MCode.vhd:1119:24 */
  assign n3992 = n3988 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:1119:24 */
  assign n3993 = n3990 | n3992;
  /*# rtl/t65/T65_MCode.vhd:1121:13 */
  assign n3995 = n3988 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:1118:11 */
  assign n3996 = {n3995, n3993};
  /*# rtl/t65/T65_MCode.vhd:1118:11 */
  always @*
    case (n3996)
      2'b10: n4000 = 5'b01101;
      2'b01: n4000 = 5'b01110;
      default: n4000 = 5'b00101;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1117:9 */
  assign n4002 = n3963 == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:1129:18 */
  assign n4003 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1130:13 */
  assign n4005 = n4003 == 3'b100;
  /*# rtl/t65/T65_MCode.vhd:1129:11 */
  always @*
    case (n4005)
      1'b1: n4008 = 5'b00101;
      default: n4008 = 5'b00100;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1128:9 */
  assign n4010 = n3963 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:1140:18 */
  assign n4011 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1141:13 */
  assign n4013 = n4011 == 3'b101;
  /*# rtl/t65/T65_MCode.vhd:1140:11 */
  always @*
    case (n4013)
      1'b1: n4016 = 5'b00101;
      default: n4016 = 5'b00100;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1100:9 */
  assign n4017 = {n4010, n4002, n3987};
  /*# rtl/t65/T65_MCode.vhd:1100:9 */
  always @*
    case (n4017)
      3'b100: n4018 = n4008;
      3'b010: n4018 = n4000;
      3'b001: n4018 = n3979;
      default: n4018 = n4016;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1099:7 */
  assign n4020 = n3962 == 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1149:36 */
  assign n4021 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1149:14 */
  assign n4022 = {28'b0, n4021};  // uext
  /*# rtl/t65/T65_MCode.vhd:1150:11 */
  assign n4024 = n4022 == 31'b0000000000000000000000000000000;
  /*# rtl/t65/T65_MCode.vhd:1152:11 */
  assign n4026 = n4022 == 31'b0000000000000000000000000000001;
  /*# rtl/t65/T65_MCode.vhd:1154:11 */
  assign n4028 = n4022 == 31'b0000000000000000000000000000010;
  /*# rtl/t65/T65_MCode.vhd:1156:11 */
  assign n4030 = n4022 == 31'b0000000000000000000000000000011;
  /*# rtl/t65/T65_MCode.vhd:1158:11 */
  assign n4032 = n4022 == 31'b0000000000000000000000000000100;
  /*# rtl/t65/T65_MCode.vhd:1160:11 */
  assign n4034 = n4022 == 31'b0000000000000000000000000000101;
  /*# rtl/t65/T65_MCode.vhd:1162:11 */
  assign n4036 = n4022 == 31'b0000000000000000000000000000110;
  /*# rtl/t65/T65_MCode.vhd:1149:9 */
  assign n4037 = {n4036, n4034, n4032, n4030, n4028, n4026, n4024};
  /*# rtl/t65/T65_MCode.vhd:1149:9 */
  always @*
    case (n4037)
      7'b1000000: n4046 = 5'b00110;
      7'b0100000: n4046 = 5'b00101;
      7'b0010000: n4046 = 5'b00100;
      7'b0001000: n4046 = 5'b00011;
      7'b0000100: n4046 = 5'b00010;
      7'b0000010: n4046 = 5'b00001;
      7'b0000001: n4046 = 5'b00000;
      default: n4046 = 5'b00111;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1148:7 */
  assign n4048 = n3962 == 2'b01;
  /*# rtl/t65/T65_MCode.vhd:1169:36 */
  assign n4049 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1169:14 */
  assign n4050 = {28'b0, n4049};  // uext
  /*# rtl/t65/T65_MCode.vhd:1172:18 */
  assign n4051 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:1172:31 */
  assign n4053 = n4051 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:1172:47 */
  assign n4055 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1172:39 */
  assign n4056 = n4055 & n4053;
  /*# rtl/t65/T65_MCode.vhd:1172:13 */
  assign n4059 = n4056 ? 5'b01110 : 5'b01000;
  /*# rtl/t65/T65_MCode.vhd:1170:11 */
  assign n4062 = n4050 == 31'b0000000000000000000000000000000;
  /*# rtl/t65/T65_MCode.vhd:1177:18 */
  assign n4063 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:1177:31 */
  assign n4065 = n4063 == 3'b110;
  /*# rtl/t65/T65_MCode.vhd:1177:47 */
  assign n4067 = mode != 2'b00;
  /*# rtl/t65/T65_MCode.vhd:1177:39 */
  assign n4068 = n4067 & n4065;
  /*# rtl/t65/T65_MCode.vhd:1177:13 */
  assign n4071 = n4068 ? 5'b01101 : 5'b01001;
  /*# rtl/t65/T65_MCode.vhd:1175:11 */
  assign n4074 = n4050 == 31'b0000000000000000000000000000001;
  /*# rtl/t65/T65_MCode.vhd:1180:11 */
  assign n4076 = n4050 == 31'b0000000000000000000000000000010;
  /*# rtl/t65/T65_MCode.vhd:1182:11 */
  assign n4078 = n4050 == 31'b0000000000000000000000000000011;
  /*# rtl/t65/T65_MCode.vhd:1186:18 */
  assign n4079 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:1186:31 */
  assign n4081 = n4079 == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:1186:13 */
  assign n4084 = n4081 ? 5'b00101 : 5'b00100;
  /*# rtl/t65/T65_MCode.vhd:1184:11 */
  assign n4087 = n4050 == 31'b0000000000000000000000000000100;
  /*# rtl/t65/T65_MCode.vhd:1191:11 */
  assign n4089 = n4050 == 31'b0000000000000000000000000000101;
  /*# rtl/t65/T65_MCode.vhd:1193:11 */
  assign n4091 = n4050 == 31'b0000000000000000000000000000110;
  /*# rtl/t65/T65_MCode.vhd:1169:9 */
  assign n4092 = {n4091, n4089, n4087, n4078, n4076, n4074, n4062};
  /*# rtl/t65/T65_MCode.vhd:1169:9 */
  always @*
    case (n4092)
      7'b1000000: n4098 = 5'b01101;
      7'b0100000: n4098 = 5'b00101;
      7'b0010000: n4098 = n4084;
      7'b0001000: n4098 = 5'b01011;
      7'b0000100: n4098 = 5'b01010;
      7'b0000010: n4098 = n4071;
      7'b0000001: n4098 = n4059;
      default: n4098 = 5'b01110;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1168:7 */
  assign n4100 = n3962 == 2'b10;
  /*# rtl/t65/T65_MCode.vhd:1200:36 */
  assign n4101 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1200:14 */
  assign n4102 = {28'b0, n4101};  // uext
  /*# rtl/t65/T65_MCode.vhd:1203:18 */
  assign n4104 = ir == 8'b10111011;
  /*# rtl/t65/T65_MCode.vhd:1203:13 */
  assign n4107 = n4104 ? 5'b00001 : 5'b00101;
  /*# rtl/t65/T65_MCode.vhd:1202:11 */
  assign n4109 = n4102 == 31'b0000000000000000000000000000101;
  /*# rtl/t65/T65_MCode.vhd:1217:18 */
  assign n4111 = ir == 8'b01101011;
  /*# rtl/t65/T65_MCode.vhd:1219:21 */
  assign n4113 = ir == 8'b10001011;
  /*# rtl/t65/T65_MCode.vhd:1221:21 */
  assign n4115 = ir == 8'b00001011;
  /*# rtl/t65/T65_MCode.vhd:1221:33 */
  assign n4117 = ir == 8'b00101011;
  /*# rtl/t65/T65_MCode.vhd:1221:28 */
  assign n4118 = n4115 | n4117;
  /*# rtl/t65/T65_MCode.vhd:1223:21 */
  assign n4120 = ir == 8'b11101011;
  /*# rtl/t65/T65_MCode.vhd:1226:42 */
  assign n4121 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1226:20 */
  assign n4122 = {28'b0, n4121};  // uext
  /*# rtl/t65/T65_MCode.vhd:1227:17 */
  assign n4124 = n4122 == 31'b0000000000000000000000000000000;
  /*# rtl/t65/T65_MCode.vhd:1229:17 */
  assign n4126 = n4122 == 31'b0000000000000000000000000000001;
  /*# rtl/t65/T65_MCode.vhd:1231:17 */
  assign n4128 = n4122 == 31'b0000000000000000000000000000010;
  /*# rtl/t65/T65_MCode.vhd:1233:17 */
  assign n4130 = n4122 == 31'b0000000000000000000000000000011;
  /*# rtl/t65/T65_MCode.vhd:1235:17 */
  assign n4132 = n4122 == 31'b0000000000000000000000000000100;
  /*# rtl/t65/T65_MCode.vhd:1237:17 */
  assign n4134 = n4122 == 31'b0000000000000000000000000000101;
  /*# rtl/t65/T65_MCode.vhd:1239:17 */
  assign n4136 = n4122 == 31'b0000000000000000000000000000110;
  /*# rtl/t65/T65_MCode.vhd:1226:15 */
  assign n4137 = {n4136, n4134, n4132, n4130, n4128, n4126, n4124};
  /*# rtl/t65/T65_MCode.vhd:1226:15 */
  always @*
    case (n4137)
      7'b1000000: n4146 = 5'b00110;
      7'b0100000: n4146 = 5'b00101;
      7'b0010000: n4146 = 5'b00100;
      7'b0001000: n4146 = 5'b00011;
      7'b0000100: n4146 = 5'b00010;
      7'b0000010: n4146 = 5'b00001;
      7'b0000001: n4146 = 5'b00000;
      default: n4146 = 5'b00111;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1245:42 */
  assign n4147 = ir[7:5]; // extract
  /*# rtl/t65/T65_MCode.vhd:1245:20 */
  assign n4148 = {28'b0, n4147};  // uext
  /*# rtl/t65/T65_MCode.vhd:1246:17 */
  assign n4150 = n4148 == 31'b0000000000000000000000000000000;
  /*# rtl/t65/T65_MCode.vhd:1248:17 */
  assign n4152 = n4148 == 31'b0000000000000000000000000000001;
  /*# rtl/t65/T65_MCode.vhd:1250:17 */
  assign n4154 = n4148 == 31'b0000000000000000000000000000010;
  /*# rtl/t65/T65_MCode.vhd:1252:17 */
  assign n4156 = n4148 == 31'b0000000000000000000000000000011;
  /*# rtl/t65/T65_MCode.vhd:1254:17 */
  assign n4158 = n4148 == 31'b0000000000000000000000000000100;
  /*# rtl/t65/T65_MCode.vhd:1256:17 */
  assign n4160 = n4148 == 31'b0000000000000000000000000000101;
  /*# rtl/t65/T65_MCode.vhd:1260:24 */
  assign n4161 = ir[4:2]; // extract
  /*# rtl/t65/T65_MCode.vhd:1260:36 */
  assign n4163 = n4161 == 3'b010;
  /*# rtl/t65/T65_MCode.vhd:1260:19 */
  assign n4166 = n4163 ? 5'b10001 : 5'b01101;
  /*# rtl/t65/T65_MCode.vhd:1258:17 */
  assign n4169 = n4148 == 31'b0000000000000000000000000000110;
  /*# rtl/t65/T65_MCode.vhd:1245:15 */
  assign n4170 = {n4169, n4160, n4158, n4156, n4154, n4152, n4150};
  /*# rtl/t65/T65_MCode.vhd:1245:15 */
  always @*
    case (n4170)
      7'b1000000: n4178 = n4166;
      7'b0100000: n4178 = 5'b00101;
      7'b0010000: n4178 = 5'b01100;
      7'b0001000: n4178 = 5'b01011;
      7'b0000100: n4178 = 5'b01010;
      7'b0000010: n4178 = 5'b01001;
      7'b0000001: n4178 = 5'b01000;
      default: n4178 = 5'b01110;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1225:13 */
  assign n4179 = alumore ? n4146 : n4178;
  /*# rtl/t65/T65_MCode.vhd:1223:13 */
  assign n4181 = n4120 ? 5'b00111 : n4179;
  /*# rtl/t65/T65_MCode.vhd:1221:13 */
  assign n4183 = n4118 ? 5'b10000 : n4181;
  /*# rtl/t65/T65_MCode.vhd:1219:13 */
  assign n4185 = n4113 ? 5'b10010 : n4183;
  /*# rtl/t65/T65_MCode.vhd:1217:13 */
  assign n4187 = n4111 ? 5'b01111 : n4185;
  /*# rtl/t65/T65_MCode.vhd:1200:9 */
  always @*
    case (n4109)
      1'b1: n4188 = n4107;
      default: n4188 = n4187;
    endcase
  /*# rtl/t65/T65_MCode.vhd:1098:5 */
  assign n4189 = {n4100, n4048, n4020};
  /*# rtl/t65/T65_MCode.vhd:1098:5 */
  always @*
    case (n4189)
      3'b100: n4190 = n4098;
      3'b010: n4190 = n4046;
      3'b001: n4190 = n4018;
      default: n4190 = n4188;
    endcase
endmodule

module ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814
  (input  clk,
   input  [63:0] bus_din,
   input  [9:0] bus_adr,
   input  bus_wren,
   input  bus_rst,
   output [63:0] bus_dout,
   input  [63:0] din,
   output [63:0] dout);
  reg [63:0] dout_buffer;
  wire [9:0] adri;
  wire n1636;
  wire n1637;
  wire n1638;
  wire n1639;
  wire n1640;
  wire n1641;
  wire n1642;
  wire n1643;
  wire n1644;
  wire n1645;
  wire n1646;
  wire n1647;
  wire n1648;
  wire n1649;
  wire n1650;
  wire n1651;
  wire n1652;
  wire n1653;
  wire n1654;
  wire n1655;
  wire n1656;
  wire n1657;
  wire n1658;
  wire n1659;
  wire n1660;
  wire n1661;
  wire n1662;
  wire n1663;
  wire n1664;
  wire n1665;
  wire n1666;
  wire n1667;
  wire n1668;
  wire n1669;
  wire n1670;
  wire n1671;
  wire n1672;
  wire n1673;
  wire n1674;
  wire n1675;
  wire n1676;
  wire n1677;
  wire n1678;
  wire n1679;
  wire n1680;
  wire n1681;
  wire n1682;
  wire n1683;
  wire n1684;
  wire n1685;
  wire n1686;
  wire n1687;
  wire n1688;
  wire n1689;
  wire n1690;
  wire n1691;
  wire n1692;
  wire n1693;
  wire n1694;
  wire n1695;
  wire n1696;
  wire n1697;
  wire n1698;
  wire n1699;
  wire n1700;
  wire n1701;
  wire [63:0] n1702;
  wire [63:0] n1703;
  wire [63:0] n1705;
  wire n1708;
  wire n1709;
  wire n1710;
  wire n1712;
  wire n1713;
  wire n1714;
  wire n1716;
  wire n1717;
  wire n1718;
  wire n1720;
  wire n1721;
  wire n1722;
  wire n1724;
  wire n1725;
  wire n1726;
  wire n1728;
  wire n1729;
  wire n1730;
  wire n1732;
  wire n1733;
  wire n1734;
  wire n1736;
  wire n1737;
  wire n1738;
  wire n1740;
  wire n1741;
  wire n1742;
  wire n1744;
  wire n1745;
  wire n1746;
  wire n1748;
  wire n1749;
  wire n1750;
  wire n1752;
  wire n1753;
  wire n1754;
  wire n1756;
  wire n1757;
  wire n1758;
  wire n1760;
  wire n1761;
  wire n1762;
  wire n1764;
  wire n1765;
  wire n1766;
  wire n1768;
  wire n1769;
  wire n1770;
  wire n1772;
  wire n1773;
  wire n1774;
  wire n1776;
  wire n1777;
  wire n1778;
  wire n1780;
  wire n1781;
  wire n1782;
  wire n1784;
  wire n1785;
  wire n1786;
  wire n1788;
  wire n1789;
  wire n1790;
  wire n1792;
  wire n1793;
  wire n1794;
  wire n1796;
  wire n1797;
  wire n1798;
  wire n1800;
  wire n1801;
  wire n1802;
  wire n1804;
  wire n1805;
  wire n1806;
  wire n1808;
  wire n1809;
  wire n1810;
  wire n1812;
  wire n1813;
  wire n1814;
  wire n1816;
  wire n1817;
  wire n1818;
  wire n1820;
  wire n1821;
  wire n1822;
  wire n1824;
  wire n1825;
  wire n1826;
  wire n1828;
  wire n1829;
  wire n1830;
  wire n1832;
  wire n1833;
  wire n1834;
  wire n1836;
  wire n1837;
  wire n1838;
  wire n1840;
  wire n1841;
  wire n1842;
  wire n1844;
  wire n1845;
  wire n1846;
  wire n1848;
  wire n1849;
  wire n1850;
  wire n1852;
  wire n1853;
  wire n1854;
  wire n1856;
  wire n1857;
  wire n1858;
  wire n1860;
  wire n1861;
  wire n1862;
  wire n1864;
  wire n1865;
  wire n1866;
  wire n1868;
  wire n1869;
  wire n1870;
  wire n1872;
  wire n1873;
  wire n1874;
  wire n1876;
  wire n1877;
  wire n1878;
  wire n1880;
  wire n1881;
  wire n1882;
  wire n1884;
  wire n1885;
  wire n1886;
  wire n1888;
  wire n1889;
  wire n1890;
  wire n1892;
  wire n1893;
  wire n1894;
  wire n1896;
  wire n1897;
  wire n1898;
  wire n1900;
  wire n1901;
  wire n1902;
  wire n1904;
  wire n1905;
  wire n1906;
  wire n1908;
  wire n1909;
  wire n1910;
  wire n1912;
  wire n1913;
  wire n1914;
  wire n1916;
  wire n1917;
  wire n1918;
  wire n1920;
  wire n1921;
  wire n1922;
  wire n1924;
  wire n1925;
  wire n1926;
  wire n1928;
  wire n1929;
  wire n1930;
  wire n1932;
  wire n1933;
  wire n1934;
  wire n1936;
  wire n1937;
  wire n1938;
  wire n1940;
  wire n1941;
  wire n1942;
  wire n1944;
  wire n1945;
  wire n1946;
  wire n1948;
  wire n1949;
  wire n1950;
  wire n1952;
  wire n1953;
  wire n1954;
  wire n1956;
  wire n1957;
  wire n1958;
  wire n1960;
  wire n1961;
  wire n1962;
  wire [63:0] n1964;
  reg [63:0] n1965;
  assign bus_dout = n1964; //(module output)
  assign dout = dout_buffer; //(module output)
  /*# rtl/bus_savestates.vhd:48:11 */
  always @*
    dout_buffer = n1965; // (isignal)
  initial
    dout_buffer = 64'b0000000000000000000000000000000000000000000000000000000000000000;
  /*# rtl/bus_savestates.vhd:50:11 */
  assign adri = 10'b0000000010; // (signal)
  /*# rtl/bus_savestates.vhd:66:25 */
  assign n1636 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:66:32 */
  assign n1637 = bus_wren & n1636;
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1638 = bus_din[0]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1639 = bus_din[1]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1640 = bus_din[2]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1641 = bus_din[3]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1642 = bus_din[4]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1643 = bus_din[5]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1644 = bus_din[6]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1645 = bus_din[7]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1646 = bus_din[8]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1647 = bus_din[9]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1648 = bus_din[10]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1649 = bus_din[11]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1650 = bus_din[12]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1651 = bus_din[13]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1652 = bus_din[14]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1653 = bus_din[15]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1654 = bus_din[16]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1655 = bus_din[17]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1656 = bus_din[18]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1657 = bus_din[19]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1658 = bus_din[20]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1659 = bus_din[21]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1660 = bus_din[22]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1661 = bus_din[23]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1662 = bus_din[24]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1663 = bus_din[25]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1664 = bus_din[26]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1665 = bus_din[27]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1666 = bus_din[28]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1667 = bus_din[29]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1668 = bus_din[30]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1669 = bus_din[31]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1670 = bus_din[32]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1671 = bus_din[33]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1672 = bus_din[34]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1673 = bus_din[35]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1674 = bus_din[36]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1675 = bus_din[37]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1676 = bus_din[38]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1677 = bus_din[39]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1678 = bus_din[40]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1679 = bus_din[41]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1680 = bus_din[42]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1681 = bus_din[43]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1682 = bus_din[44]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1683 = bus_din[45]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1684 = bus_din[46]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1685 = bus_din[47]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1686 = bus_din[48]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1687 = bus_din[49]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1688 = bus_din[50]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1689 = bus_din[51]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1690 = bus_din[52]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1691 = bus_din[53]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1692 = bus_din[54]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1693 = bus_din[55]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1694 = bus_din[56]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1695 = bus_din[57]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1696 = bus_din[58]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1697 = bus_din[59]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1698 = bus_din[60]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1699 = bus_din[61]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1700 = bus_din[62]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1701 = bus_din[63]; // extract
  /*# rtl/bus_savestates.vhd:66:13 */
  assign n1702 = {n1701, n1700, n1699, n1698, n1697, n1696, n1695, n1694, n1693, n1692, n1691, n1690, n1689, n1688, n1687, n1686, n1685, n1684, n1683, n1682, n1681, n1680, n1679, n1678, n1677, n1676, n1675, n1674, n1673, n1672, n1671, n1670, n1669, n1668, n1667, n1666, n1665, n1664, n1663, n1662, n1661, n1660, n1659, n1658, n1657, n1656, n1655, n1654, n1653, n1652, n1651, n1650, n1649, n1648, n1647, n1646, n1645, n1644, n1643, n1642, n1641, n1640, n1639, n1638};
  /*# rtl/bus_savestates.vhd:66:13 */
  assign n1703 = n1637 ? n1702 : dout_buffer;
  /*# rtl/bus_savestates.vhd:60:10 */
  assign n1705 = bus_rst ? 64'b0000000000000000000000000000000000000000000000000000000000000000 : n1703;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1708 = din[0]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1709 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1710 = n1709 ? n1708 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1712 = din[1]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1713 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1714 = n1713 ? n1712 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1716 = din[2]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1717 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1718 = n1717 ? n1716 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1720 = din[3]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1721 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1722 = n1721 ? n1720 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1724 = din[4]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1725 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1726 = n1725 ? n1724 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1728 = din[5]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1729 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1730 = n1729 ? n1728 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1732 = din[6]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1733 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1734 = n1733 ? n1732 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1736 = din[7]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1737 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1738 = n1737 ? n1736 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1740 = din[8]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1741 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1742 = n1741 ? n1740 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1744 = din[9]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1745 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1746 = n1745 ? n1744 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1748 = din[10]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1749 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1750 = n1749 ? n1748 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1752 = din[11]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1753 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1754 = n1753 ? n1752 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1756 = din[12]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1757 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1758 = n1757 ? n1756 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1760 = din[13]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1761 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1762 = n1761 ? n1760 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1764 = din[14]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1765 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1766 = n1765 ? n1764 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1768 = din[15]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1769 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1770 = n1769 ? n1768 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1772 = din[16]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1773 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1774 = n1773 ? n1772 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1776 = din[17]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1777 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1778 = n1777 ? n1776 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1780 = din[18]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1781 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1782 = n1781 ? n1780 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1784 = din[19]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1785 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1786 = n1785 ? n1784 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1788 = din[20]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1789 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1790 = n1789 ? n1788 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1792 = din[21]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1793 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1794 = n1793 ? n1792 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1796 = din[22]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1797 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1798 = n1797 ? n1796 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1800 = din[23]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1801 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1802 = n1801 ? n1800 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1804 = din[24]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1805 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1806 = n1805 ? n1804 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1808 = din[25]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1809 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1810 = n1809 ? n1808 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1812 = din[26]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1813 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1814 = n1813 ? n1812 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1816 = din[27]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1817 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1818 = n1817 ? n1816 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1820 = din[28]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1821 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1822 = n1821 ? n1820 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1824 = din[29]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1825 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1826 = n1825 ? n1824 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1828 = din[30]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1829 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1830 = n1829 ? n1828 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1832 = din[31]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1833 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1834 = n1833 ? n1832 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1836 = din[32]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1837 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1838 = n1837 ? n1836 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1840 = din[33]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1841 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1842 = n1841 ? n1840 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1844 = din[34]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1845 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1846 = n1845 ? n1844 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1848 = din[35]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1849 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1850 = n1849 ? n1848 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1852 = din[36]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1853 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1854 = n1853 ? n1852 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1856 = din[37]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1857 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1858 = n1857 ? n1856 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1860 = din[38]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1861 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1862 = n1861 ? n1860 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1864 = din[39]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1865 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1866 = n1865 ? n1864 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1868 = din[40]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1869 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1870 = n1869 ? n1868 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1872 = din[41]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1873 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1874 = n1873 ? n1872 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1876 = din[42]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1877 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1878 = n1877 ? n1876 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1880 = din[43]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1881 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1882 = n1881 ? n1880 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1884 = din[44]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1885 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1886 = n1885 ? n1884 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1888 = din[45]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1889 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1890 = n1889 ? n1888 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1892 = din[46]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1893 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1894 = n1893 ? n1892 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1896 = din[47]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1897 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1898 = n1897 ? n1896 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1900 = din[48]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1901 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1902 = n1901 ? n1900 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1904 = din[49]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1905 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1906 = n1905 ? n1904 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1908 = din[50]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1909 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1910 = n1909 ? n1908 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1912 = din[51]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1913 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1914 = n1913 ? n1912 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1916 = din[52]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1917 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1918 = n1917 ? n1916 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1920 = din[53]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1921 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1922 = n1921 ? n1920 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1924 = din[54]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1925 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1926 = n1925 ? n1924 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1928 = din[55]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1929 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1930 = n1929 ? n1928 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1932 = din[56]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1933 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1934 = n1933 ? n1932 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1936 = din[57]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1937 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1938 = n1937 ? n1936 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1940 = din[58]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1941 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1942 = n1941 ? n1940 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1944 = din[59]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1945 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1946 = n1945 ? n1944 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1948 = din[60]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1949 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1950 = n1949 ? n1948 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1952 = din[61]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1953 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1954 = n1953 ? n1952 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1956 = din[62]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1957 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1958 = n1957 ? n1956 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1960 = din[63]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1961 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1962 = n1961 ? n1960 : 1'b0;
  /*# rtl/bus_savestates.vhd:40:7 */
  assign n1964 = {n1962, n1958, n1954, n1950, n1946, n1942, n1938, n1934, n1930, n1926, n1922, n1918, n1914, n1910, n1906, n1902, n1898, n1894, n1890, n1886, n1882, n1878, n1874, n1870, n1866, n1862, n1858, n1854, n1850, n1846, n1842, n1838, n1834, n1830, n1826, n1822, n1818, n1814, n1810, n1806, n1802, n1798, n1794, n1790, n1786, n1782, n1778, n1774, n1770, n1766, n1762, n1758, n1754, n1750, n1746, n1742, n1738, n1734, n1730, n1726, n1722, n1718, n1714, n1710};
  /*# rtl/bus_savestates.vhd:58:7 */
  always @(posedge clk)
    n1965 <= n1705;
  initial
    n1965 = 64'b0000000000000000000000000000000000000000000000000000000000000000;
endmodule

module ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e
  (input  clk,
   input  [63:0] bus_din,
   input  [9:0] bus_adr,
   input  bus_wren,
   input  bus_rst,
   output [63:0] bus_dout,
   input  [63:0] din,
   output [63:0] dout);
  reg [63:0] dout_buffer;
  wire [9:0] adri;
  wire n1298;
  wire n1299;
  wire n1300;
  wire n1301;
  wire n1302;
  wire n1303;
  wire n1304;
  wire n1305;
  wire n1306;
  wire n1307;
  wire n1308;
  wire n1309;
  wire n1310;
  wire n1311;
  wire n1312;
  wire n1313;
  wire n1314;
  wire n1315;
  wire n1316;
  wire n1317;
  wire n1318;
  wire n1319;
  wire n1320;
  wire n1321;
  wire n1322;
  wire n1323;
  wire n1324;
  wire n1325;
  wire n1326;
  wire n1327;
  wire n1328;
  wire n1329;
  wire n1330;
  wire n1331;
  wire n1332;
  wire n1333;
  wire n1334;
  wire n1335;
  wire n1336;
  wire n1337;
  wire n1338;
  wire n1339;
  wire n1340;
  wire n1341;
  wire n1342;
  wire n1343;
  wire n1344;
  wire n1345;
  wire n1346;
  wire n1347;
  wire n1348;
  wire n1349;
  wire n1350;
  wire n1351;
  wire n1352;
  wire n1353;
  wire n1354;
  wire n1355;
  wire n1356;
  wire n1357;
  wire n1358;
  wire n1359;
  wire n1360;
  wire n1361;
  wire n1362;
  wire n1363;
  wire [63:0] n1364;
  wire [63:0] n1365;
  wire [63:0] n1367;
  wire n1370;
  wire n1371;
  wire n1372;
  wire n1374;
  wire n1375;
  wire n1376;
  wire n1378;
  wire n1379;
  wire n1380;
  wire n1382;
  wire n1383;
  wire n1384;
  wire n1386;
  wire n1387;
  wire n1388;
  wire n1390;
  wire n1391;
  wire n1392;
  wire n1394;
  wire n1395;
  wire n1396;
  wire n1398;
  wire n1399;
  wire n1400;
  wire n1402;
  wire n1403;
  wire n1404;
  wire n1406;
  wire n1407;
  wire n1408;
  wire n1410;
  wire n1411;
  wire n1412;
  wire n1414;
  wire n1415;
  wire n1416;
  wire n1418;
  wire n1419;
  wire n1420;
  wire n1422;
  wire n1423;
  wire n1424;
  wire n1426;
  wire n1427;
  wire n1428;
  wire n1430;
  wire n1431;
  wire n1432;
  wire n1434;
  wire n1435;
  wire n1436;
  wire n1438;
  wire n1439;
  wire n1440;
  wire n1442;
  wire n1443;
  wire n1444;
  wire n1446;
  wire n1447;
  wire n1448;
  wire n1450;
  wire n1451;
  wire n1452;
  wire n1454;
  wire n1455;
  wire n1456;
  wire n1458;
  wire n1459;
  wire n1460;
  wire n1462;
  wire n1463;
  wire n1464;
  wire n1466;
  wire n1467;
  wire n1468;
  wire n1470;
  wire n1471;
  wire n1472;
  wire n1474;
  wire n1475;
  wire n1476;
  wire n1478;
  wire n1479;
  wire n1480;
  wire n1482;
  wire n1483;
  wire n1484;
  wire n1486;
  wire n1487;
  wire n1488;
  wire n1490;
  wire n1491;
  wire n1492;
  wire n1494;
  wire n1495;
  wire n1496;
  wire n1498;
  wire n1499;
  wire n1500;
  wire n1502;
  wire n1503;
  wire n1504;
  wire n1506;
  wire n1507;
  wire n1508;
  wire n1510;
  wire n1511;
  wire n1512;
  wire n1514;
  wire n1515;
  wire n1516;
  wire n1518;
  wire n1519;
  wire n1520;
  wire n1522;
  wire n1523;
  wire n1524;
  wire n1526;
  wire n1527;
  wire n1528;
  wire n1530;
  wire n1531;
  wire n1532;
  wire n1534;
  wire n1535;
  wire n1536;
  wire n1538;
  wire n1539;
  wire n1540;
  wire n1542;
  wire n1543;
  wire n1544;
  wire n1546;
  wire n1547;
  wire n1548;
  wire n1550;
  wire n1551;
  wire n1552;
  wire n1554;
  wire n1555;
  wire n1556;
  wire n1558;
  wire n1559;
  wire n1560;
  wire n1562;
  wire n1563;
  wire n1564;
  wire n1566;
  wire n1567;
  wire n1568;
  wire n1570;
  wire n1571;
  wire n1572;
  wire n1574;
  wire n1575;
  wire n1576;
  wire n1578;
  wire n1579;
  wire n1580;
  wire n1582;
  wire n1583;
  wire n1584;
  wire n1586;
  wire n1587;
  wire n1588;
  wire n1590;
  wire n1591;
  wire n1592;
  wire n1594;
  wire n1595;
  wire n1596;
  wire n1598;
  wire n1599;
  wire n1600;
  wire n1602;
  wire n1603;
  wire n1604;
  wire n1606;
  wire n1607;
  wire n1608;
  wire n1610;
  wire n1611;
  wire n1612;
  wire n1614;
  wire n1615;
  wire n1616;
  wire n1618;
  wire n1619;
  wire n1620;
  wire n1622;
  wire n1623;
  wire n1624;
  wire [63:0] n1626;
  reg [63:0] n1627;
  assign bus_dout = n1626; //(module output)
  assign dout = dout_buffer; //(module output)
  /*# rtl/bus_savestates.vhd:48:11 */
  always @*
    dout_buffer = n1627; // (isignal)
  initial
    dout_buffer = 64'b0000000000000000000000010010000000000000000000000000000000000001;
  /*# rtl/bus_savestates.vhd:50:11 */
  assign adri = 10'b0000000001; // (signal)
  /*# rtl/bus_savestates.vhd:66:25 */
  assign n1298 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:66:32 */
  assign n1299 = bus_wren & n1298;
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1300 = bus_din[0]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1301 = bus_din[1]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1302 = bus_din[2]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1303 = bus_din[3]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1304 = bus_din[4]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1305 = bus_din[5]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1306 = bus_din[6]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1307 = bus_din[7]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1308 = bus_din[8]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1309 = bus_din[9]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1310 = bus_din[10]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1311 = bus_din[11]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1312 = bus_din[12]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1313 = bus_din[13]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1314 = bus_din[14]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1315 = bus_din[15]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1316 = bus_din[16]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1317 = bus_din[17]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1318 = bus_din[18]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1319 = bus_din[19]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1320 = bus_din[20]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1321 = bus_din[21]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1322 = bus_din[22]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1323 = bus_din[23]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1324 = bus_din[24]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1325 = bus_din[25]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1326 = bus_din[26]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1327 = bus_din[27]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1328 = bus_din[28]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1329 = bus_din[29]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1330 = bus_din[30]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1331 = bus_din[31]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1332 = bus_din[32]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1333 = bus_din[33]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1334 = bus_din[34]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1335 = bus_din[35]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1336 = bus_din[36]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1337 = bus_din[37]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1338 = bus_din[38]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1339 = bus_din[39]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1340 = bus_din[40]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1341 = bus_din[41]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1342 = bus_din[42]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1343 = bus_din[43]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1344 = bus_din[44]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1345 = bus_din[45]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1346 = bus_din[46]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1347 = bus_din[47]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1348 = bus_din[48]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1349 = bus_din[49]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1350 = bus_din[50]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1351 = bus_din[51]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1352 = bus_din[52]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1353 = bus_din[53]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1354 = bus_din[54]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1355 = bus_din[55]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1356 = bus_din[56]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1357 = bus_din[57]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1358 = bus_din[58]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1359 = bus_din[59]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1360 = bus_din[60]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1361 = bus_din[61]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1362 = bus_din[62]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1363 = bus_din[63]; // extract
  /*# rtl/bus_savestates.vhd:66:13 */
  assign n1364 = {n1363, n1362, n1361, n1360, n1359, n1358, n1357, n1356, n1355, n1354, n1353, n1352, n1351, n1350, n1349, n1348, n1347, n1346, n1345, n1344, n1343, n1342, n1341, n1340, n1339, n1338, n1337, n1336, n1335, n1334, n1333, n1332, n1331, n1330, n1329, n1328, n1327, n1326, n1325, n1324, n1323, n1322, n1321, n1320, n1319, n1318, n1317, n1316, n1315, n1314, n1313, n1312, n1311, n1310, n1309, n1308, n1307, n1306, n1305, n1304, n1303, n1302, n1301, n1300};
  /*# rtl/bus_savestates.vhd:66:13 */
  assign n1365 = n1299 ? n1364 : dout_buffer;
  /*# rtl/bus_savestates.vhd:60:10 */
  assign n1367 = bus_rst ? 64'b0000000000000000000000010010000000000000000000000000000000000001 : n1365;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1370 = din[0]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1371 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1372 = n1371 ? n1370 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1374 = din[1]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1375 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1376 = n1375 ? n1374 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1378 = din[2]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1379 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1380 = n1379 ? n1378 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1382 = din[3]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1383 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1384 = n1383 ? n1382 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1386 = din[4]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1387 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1388 = n1387 ? n1386 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1390 = din[5]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1391 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1392 = n1391 ? n1390 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1394 = din[6]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1395 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1396 = n1395 ? n1394 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1398 = din[7]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1399 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1400 = n1399 ? n1398 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1402 = din[8]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1403 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1404 = n1403 ? n1402 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1406 = din[9]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1407 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1408 = n1407 ? n1406 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1410 = din[10]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1411 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1412 = n1411 ? n1410 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1414 = din[11]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1415 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1416 = n1415 ? n1414 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1418 = din[12]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1419 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1420 = n1419 ? n1418 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1422 = din[13]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1423 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1424 = n1423 ? n1422 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1426 = din[14]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1427 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1428 = n1427 ? n1426 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1430 = din[15]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1431 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1432 = n1431 ? n1430 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1434 = din[16]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1435 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1436 = n1435 ? n1434 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1438 = din[17]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1439 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1440 = n1439 ? n1438 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1442 = din[18]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1443 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1444 = n1443 ? n1442 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1446 = din[19]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1447 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1448 = n1447 ? n1446 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1450 = din[20]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1451 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1452 = n1451 ? n1450 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1454 = din[21]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1455 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1456 = n1455 ? n1454 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1458 = din[22]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1459 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1460 = n1459 ? n1458 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1462 = din[23]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1463 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1464 = n1463 ? n1462 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1466 = din[24]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1467 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1468 = n1467 ? n1466 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1470 = din[25]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1471 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1472 = n1471 ? n1470 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1474 = din[26]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1475 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1476 = n1475 ? n1474 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1478 = din[27]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1479 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1480 = n1479 ? n1478 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1482 = din[28]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1483 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1484 = n1483 ? n1482 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1486 = din[29]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1487 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1488 = n1487 ? n1486 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1490 = din[30]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1491 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1492 = n1491 ? n1490 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1494 = din[31]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1495 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1496 = n1495 ? n1494 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1498 = din[32]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1499 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1500 = n1499 ? n1498 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1502 = din[33]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1503 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1504 = n1503 ? n1502 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1506 = din[34]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1507 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1508 = n1507 ? n1506 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1510 = din[35]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1511 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1512 = n1511 ? n1510 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1514 = din[36]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1515 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1516 = n1515 ? n1514 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1518 = din[37]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1519 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1520 = n1519 ? n1518 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1522 = din[38]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1523 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1524 = n1523 ? n1522 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1526 = din[39]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1527 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1528 = n1527 ? n1526 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1530 = din[40]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1531 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1532 = n1531 ? n1530 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1534 = din[41]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1535 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1536 = n1535 ? n1534 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1538 = din[42]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1539 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1540 = n1539 ? n1538 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1542 = din[43]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1543 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1544 = n1543 ? n1542 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1546 = din[44]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1547 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1548 = n1547 ? n1546 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1550 = din[45]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1551 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1552 = n1551 ? n1550 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1554 = din[46]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1555 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1556 = n1555 ? n1554 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1558 = din[47]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1559 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1560 = n1559 ? n1558 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1562 = din[48]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1563 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1564 = n1563 ? n1562 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1566 = din[49]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1567 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1568 = n1567 ? n1566 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1570 = din[50]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1571 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1572 = n1571 ? n1570 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1574 = din[51]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1575 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1576 = n1575 ? n1574 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1578 = din[52]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1579 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1580 = n1579 ? n1578 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1582 = din[53]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1583 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1584 = n1583 ? n1582 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1586 = din[54]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1587 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1588 = n1587 ? n1586 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1590 = din[55]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1591 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1592 = n1591 ? n1590 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1594 = din[56]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1595 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1596 = n1595 ? n1594 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1598 = din[57]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1599 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1600 = n1599 ? n1598 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1602 = din[58]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1603 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1604 = n1603 ? n1602 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1606 = din[59]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1607 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1608 = n1607 ? n1606 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1610 = din[60]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1611 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1612 = n1611 ? n1610 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1614 = din[61]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1615 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1616 = n1615 ? n1614 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1618 = din[62]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1619 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1620 = n1619 ? n1618 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1622 = din[63]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1623 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1624 = n1623 ? n1622 : 1'b0;
  /*# rtl/bus_savestates.vhd:40:7 */
  assign n1626 = {n1624, n1620, n1616, n1612, n1608, n1604, n1600, n1596, n1592, n1588, n1584, n1580, n1576, n1572, n1568, n1564, n1560, n1556, n1552, n1548, n1544, n1540, n1536, n1532, n1528, n1524, n1520, n1516, n1512, n1508, n1504, n1500, n1496, n1492, n1488, n1484, n1480, n1476, n1472, n1468, n1464, n1460, n1456, n1452, n1448, n1444, n1440, n1436, n1432, n1428, n1424, n1420, n1416, n1412, n1408, n1404, n1400, n1396, n1392, n1388, n1384, n1380, n1376, n1372};
  /*# rtl/bus_savestates.vhd:58:7 */
  always @(posedge clk)
    n1627 <= n1367;
  initial
    n1627 = 64'b0000000000000000000000010010000000000000000000000000000000000001;
endmodule

module ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6
  (input  clk,
   input  [63:0] bus_din,
   input  [9:0] bus_adr,
   input  bus_wren,
   input  bus_rst,
   output [63:0] bus_dout,
   input  [63:0] din,
   output [63:0] dout);
  reg [63:0] dout_buffer;
  wire [9:0] adri;
  wire n960;
  wire n961;
  wire n962;
  wire n963;
  wire n964;
  wire n965;
  wire n966;
  wire n967;
  wire n968;
  wire n969;
  wire n970;
  wire n971;
  wire n972;
  wire n973;
  wire n974;
  wire n975;
  wire n976;
  wire n977;
  wire n978;
  wire n979;
  wire n980;
  wire n981;
  wire n982;
  wire n983;
  wire n984;
  wire n985;
  wire n986;
  wire n987;
  wire n988;
  wire n989;
  wire n990;
  wire n991;
  wire n992;
  wire n993;
  wire n994;
  wire n995;
  wire n996;
  wire n997;
  wire n998;
  wire n999;
  wire n1000;
  wire n1001;
  wire n1002;
  wire n1003;
  wire n1004;
  wire n1005;
  wire n1006;
  wire n1007;
  wire n1008;
  wire n1009;
  wire n1010;
  wire n1011;
  wire n1012;
  wire n1013;
  wire n1014;
  wire n1015;
  wire n1016;
  wire n1017;
  wire n1018;
  wire n1019;
  wire n1020;
  wire n1021;
  wire n1022;
  wire n1023;
  wire n1024;
  wire n1025;
  wire [63:0] n1026;
  wire [63:0] n1027;
  wire [63:0] n1029;
  wire n1032;
  wire n1033;
  wire n1034;
  wire n1036;
  wire n1037;
  wire n1038;
  wire n1040;
  wire n1041;
  wire n1042;
  wire n1044;
  wire n1045;
  wire n1046;
  wire n1048;
  wire n1049;
  wire n1050;
  wire n1052;
  wire n1053;
  wire n1054;
  wire n1056;
  wire n1057;
  wire n1058;
  wire n1060;
  wire n1061;
  wire n1062;
  wire n1064;
  wire n1065;
  wire n1066;
  wire n1068;
  wire n1069;
  wire n1070;
  wire n1072;
  wire n1073;
  wire n1074;
  wire n1076;
  wire n1077;
  wire n1078;
  wire n1080;
  wire n1081;
  wire n1082;
  wire n1084;
  wire n1085;
  wire n1086;
  wire n1088;
  wire n1089;
  wire n1090;
  wire n1092;
  wire n1093;
  wire n1094;
  wire n1096;
  wire n1097;
  wire n1098;
  wire n1100;
  wire n1101;
  wire n1102;
  wire n1104;
  wire n1105;
  wire n1106;
  wire n1108;
  wire n1109;
  wire n1110;
  wire n1112;
  wire n1113;
  wire n1114;
  wire n1116;
  wire n1117;
  wire n1118;
  wire n1120;
  wire n1121;
  wire n1122;
  wire n1124;
  wire n1125;
  wire n1126;
  wire n1128;
  wire n1129;
  wire n1130;
  wire n1132;
  wire n1133;
  wire n1134;
  wire n1136;
  wire n1137;
  wire n1138;
  wire n1140;
  wire n1141;
  wire n1142;
  wire n1144;
  wire n1145;
  wire n1146;
  wire n1148;
  wire n1149;
  wire n1150;
  wire n1152;
  wire n1153;
  wire n1154;
  wire n1156;
  wire n1157;
  wire n1158;
  wire n1160;
  wire n1161;
  wire n1162;
  wire n1164;
  wire n1165;
  wire n1166;
  wire n1168;
  wire n1169;
  wire n1170;
  wire n1172;
  wire n1173;
  wire n1174;
  wire n1176;
  wire n1177;
  wire n1178;
  wire n1180;
  wire n1181;
  wire n1182;
  wire n1184;
  wire n1185;
  wire n1186;
  wire n1188;
  wire n1189;
  wire n1190;
  wire n1192;
  wire n1193;
  wire n1194;
  wire n1196;
  wire n1197;
  wire n1198;
  wire n1200;
  wire n1201;
  wire n1202;
  wire n1204;
  wire n1205;
  wire n1206;
  wire n1208;
  wire n1209;
  wire n1210;
  wire n1212;
  wire n1213;
  wire n1214;
  wire n1216;
  wire n1217;
  wire n1218;
  wire n1220;
  wire n1221;
  wire n1222;
  wire n1224;
  wire n1225;
  wire n1226;
  wire n1228;
  wire n1229;
  wire n1230;
  wire n1232;
  wire n1233;
  wire n1234;
  wire n1236;
  wire n1237;
  wire n1238;
  wire n1240;
  wire n1241;
  wire n1242;
  wire n1244;
  wire n1245;
  wire n1246;
  wire n1248;
  wire n1249;
  wire n1250;
  wire n1252;
  wire n1253;
  wire n1254;
  wire n1256;
  wire n1257;
  wire n1258;
  wire n1260;
  wire n1261;
  wire n1262;
  wire n1264;
  wire n1265;
  wire n1266;
  wire n1268;
  wire n1269;
  wire n1270;
  wire n1272;
  wire n1273;
  wire n1274;
  wire n1276;
  wire n1277;
  wire n1278;
  wire n1280;
  wire n1281;
  wire n1282;
  wire n1284;
  wire n1285;
  wire n1286;
  wire [63:0] n1288;
  reg [63:0] n1289;
  assign bus_dout = n1288; //(module output)
  assign dout = dout_buffer; //(module output)
  /*# rtl/bus_savestates.vhd:48:11 */
  always @*
    dout_buffer = n1289; // (isignal)
  initial
    dout_buffer = 64'b1110000001100100000000000000000000000000000000000000000000000000;
  /*# rtl/bus_savestates.vhd:50:11 */
  assign adri = 10'b0000000000; // (signal)
  /*# rtl/bus_savestates.vhd:66:25 */
  assign n960 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:66:32 */
  assign n961 = bus_wren & n960;
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n962 = bus_din[0]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n963 = bus_din[1]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n964 = bus_din[2]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n965 = bus_din[3]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n966 = bus_din[4]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n967 = bus_din[5]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n968 = bus_din[6]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n969 = bus_din[7]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n970 = bus_din[8]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n971 = bus_din[9]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n972 = bus_din[10]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n973 = bus_din[11]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n974 = bus_din[12]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n975 = bus_din[13]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n976 = bus_din[14]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n977 = bus_din[15]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n978 = bus_din[16]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n979 = bus_din[17]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n980 = bus_din[18]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n981 = bus_din[19]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n982 = bus_din[20]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n983 = bus_din[21]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n984 = bus_din[22]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n985 = bus_din[23]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n986 = bus_din[24]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n987 = bus_din[25]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n988 = bus_din[26]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n989 = bus_din[27]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n990 = bus_din[28]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n991 = bus_din[29]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n992 = bus_din[30]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n993 = bus_din[31]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n994 = bus_din[32]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n995 = bus_din[33]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n996 = bus_din[34]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n997 = bus_din[35]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n998 = bus_din[36]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n999 = bus_din[37]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1000 = bus_din[38]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1001 = bus_din[39]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1002 = bus_din[40]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1003 = bus_din[41]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1004 = bus_din[42]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1005 = bus_din[43]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1006 = bus_din[44]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1007 = bus_din[45]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1008 = bus_din[46]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1009 = bus_din[47]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1010 = bus_din[48]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1011 = bus_din[49]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1012 = bus_din[50]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1013 = bus_din[51]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1014 = bus_din[52]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1015 = bus_din[53]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1016 = bus_din[54]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1017 = bus_din[55]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1018 = bus_din[56]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1019 = bus_din[57]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1020 = bus_din[58]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1021 = bus_din[59]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1022 = bus_din[60]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1023 = bus_din[61]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1024 = bus_din[62]; // extract
  /*# rtl/bus_savestates.vhd:68:44 */
  assign n1025 = bus_din[63]; // extract
  /*# rtl/bus_savestates.vhd:66:13 */
  assign n1026 = {n1025, n1024, n1023, n1022, n1021, n1020, n1019, n1018, n1017, n1016, n1015, n1014, n1013, n1012, n1011, n1010, n1009, n1008, n1007, n1006, n1005, n1004, n1003, n1002, n1001, n1000, n999, n998, n997, n996, n995, n994, n993, n992, n991, n990, n989, n988, n987, n986, n985, n984, n983, n982, n981, n980, n979, n978, n977, n976, n975, n974, n973, n972, n971, n970, n969, n968, n967, n966, n965, n964, n963, n962};
  /*# rtl/bus_savestates.vhd:66:13 */
  assign n1027 = n961 ? n1026 : dout_buffer;
  /*# rtl/bus_savestates.vhd:60:10 */
  assign n1029 = bus_rst ? 64'b1110000001100100000000000000000000000000000000000000000000000000 : n1027;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1032 = din[0]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1033 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1034 = n1033 ? n1032 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1036 = din[1]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1037 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1038 = n1037 ? n1036 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1040 = din[2]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1041 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1042 = n1041 ? n1040 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1044 = din[3]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1045 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1046 = n1045 ? n1044 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1048 = din[4]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1049 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1050 = n1049 ? n1048 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1052 = din[5]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1053 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1054 = n1053 ? n1052 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1056 = din[6]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1057 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1058 = n1057 ? n1056 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1060 = din[7]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1061 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1062 = n1061 ? n1060 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1064 = din[8]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1065 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1066 = n1065 ? n1064 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1068 = din[9]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1069 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1070 = n1069 ? n1068 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1072 = din[10]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1073 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1074 = n1073 ? n1072 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1076 = din[11]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1077 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1078 = n1077 ? n1076 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1080 = din[12]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1081 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1082 = n1081 ? n1080 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1084 = din[13]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1085 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1086 = n1085 ? n1084 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1088 = din[14]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1089 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1090 = n1089 ? n1088 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1092 = din[15]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1093 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1094 = n1093 ? n1092 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1096 = din[16]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1097 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1098 = n1097 ? n1096 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1100 = din[17]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1101 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1102 = n1101 ? n1100 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1104 = din[18]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1105 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1106 = n1105 ? n1104 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1108 = din[19]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1109 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1110 = n1109 ? n1108 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1112 = din[20]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1113 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1114 = n1113 ? n1112 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1116 = din[21]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1117 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1118 = n1117 ? n1116 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1120 = din[22]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1121 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1122 = n1121 ? n1120 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1124 = din[23]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1125 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1126 = n1125 ? n1124 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1128 = din[24]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1129 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1130 = n1129 ? n1128 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1132 = din[25]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1133 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1134 = n1133 ? n1132 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1136 = din[26]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1137 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1138 = n1137 ? n1136 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1140 = din[27]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1141 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1142 = n1141 ? n1140 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1144 = din[28]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1145 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1146 = n1145 ? n1144 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1148 = din[29]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1149 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1150 = n1149 ? n1148 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1152 = din[30]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1153 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1154 = n1153 ? n1152 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1156 = din[31]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1157 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1158 = n1157 ? n1156 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1160 = din[32]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1161 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1162 = n1161 ? n1160 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1164 = din[33]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1165 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1166 = n1165 ? n1164 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1168 = din[34]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1169 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1170 = n1169 ? n1168 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1172 = din[35]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1173 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1174 = n1173 ? n1172 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1176 = din[36]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1177 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1178 = n1177 ? n1176 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1180 = din[37]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1181 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1182 = n1181 ? n1180 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1184 = din[38]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1185 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1186 = n1185 ? n1184 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1188 = din[39]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1189 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1190 = n1189 ? n1188 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1192 = din[40]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1193 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1194 = n1193 ? n1192 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1196 = din[41]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1197 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1198 = n1197 ? n1196 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1200 = din[42]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1201 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1202 = n1201 ? n1200 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1204 = din[43]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1205 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1206 = n1205 ? n1204 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1208 = din[44]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1209 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1210 = n1209 ? n1208 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1212 = din[45]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1213 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1214 = n1213 ? n1212 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1216 = din[46]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1217 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1218 = n1217 ? n1216 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1220 = din[47]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1221 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1222 = n1221 ? n1220 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1224 = din[48]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1225 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1226 = n1225 ? n1224 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1228 = din[49]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1229 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1230 = n1229 ? n1228 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1232 = din[50]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1233 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1234 = n1233 ? n1232 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1236 = din[51]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1237 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1238 = n1237 ? n1236 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1240 = din[52]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1241 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1242 = n1241 ? n1240 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1244 = din[53]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1245 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1246 = n1245 ? n1244 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1248 = din[54]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1249 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1250 = n1249 ? n1248 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1252 = din[55]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1253 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1254 = n1253 ? n1252 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1256 = din[56]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1257 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1258 = n1257 ? n1256 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1260 = din[57]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1261 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1262 = n1261 ? n1260 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1264 = din[58]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1265 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1266 = n1265 ? n1264 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1268 = din[59]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1269 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1270 = n1269 ? n1268 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1272 = din[60]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1273 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1274 = n1273 ? n1272 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1276 = din[61]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1277 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1278 = n1277 ? n1276 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1280 = din[62]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1281 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1282 = n1281 ? n1280 : 1'b0;
  /*# rtl/bus_savestates.vhd:80:25 */
  assign n1284 = din[63]; // extract
  /*# rtl/bus_savestates.vhd:80:42 */
  assign n1285 = bus_adr == adri;
  /*# rtl/bus_savestates.vhd:80:29 */
  assign n1286 = n1285 ? n1284 : 1'b0;
  /*# rtl/bus_savestates.vhd:40:7 */
  assign n1288 = {n1286, n1282, n1278, n1274, n1270, n1266, n1262, n1258, n1254, n1250, n1246, n1242, n1238, n1234, n1230, n1226, n1222, n1218, n1214, n1210, n1206, n1202, n1198, n1194, n1190, n1186, n1182, n1178, n1174, n1170, n1166, n1162, n1158, n1154, n1150, n1146, n1142, n1138, n1134, n1130, n1126, n1122, n1118, n1114, n1110, n1106, n1102, n1098, n1094, n1090, n1086, n1082, n1078, n1074, n1070, n1066, n1062, n1058, n1054, n1050, n1046, n1042, n1038, n1034};
  /*# rtl/bus_savestates.vhd:58:7 */
  always @(posedge clk)
    n1289 <= n1029;
  initial
    n1289 = 64'b1110000001100100000000000000000000000000000000000000000000000000;
endmodule

module T65_real
  (input  [1:0] Mode,
   input  BCD_en,
   input  Res_n,
   input  Pwr_n,
   input  Enable,
   input  Clk,
   input  Rdy,
   input  Abort_n,
   input  IRQ_n,
   input  NMI_n,
   input  SO_n,
   output R_W_n,
   output Sync,
   output EF,
   output MF,
   output XF,
   output ML_n,
   output VP_n,
   output VDA,
   output VPA,
   output [23:0] A,
   input  [7:0] DI,
   output [7:0] DO,
   output [63:0] Regs,
   output [7:0] \DEBUG[I] ,
   output [7:0] \DEBUG[A] ,
   output [7:0] \DEBUG[X] ,
   output [7:0] \DEBUG[Y] ,
   output [7:0] \DEBUG[S] ,
   output [7:0] \DEBUG[P] ,
   output NMI_ack,
   output Instrnew,
   input  [63:0] SaveStateBus_Din,
   input  [9:0] SaveStateBus_Adr,
   input  SaveStateBus_wren,
   input  SaveStateBus_rst,
   input  SaveStateBus_load,
   output [63:0] SaveStateBus_Dout);
  wire [7:0] n13;
  wire [7:0] n14;
  wire [7:0] n15;
  wire [7:0] n16;
  wire [7:0] n17;
  wire [7:0] n18;
  wire [15:0] abc;
  wire [15:0] x;
  wire [15:0] y;
  reg [7:0] p;
  reg [7:0] ad;
  reg [7:0] dl;
  wire [7:0] pwithb;
  wire [7:0] bah;
  wire [8:0] bal;
  wire [7:0] pbr;
  wire [7:0] dbr;
  wire [15:0] pc;
  wire [15:0] s;
  wire ef_i;
  wire mf_i;
  wire xf_i;
  wire [7:0] ir;
  wire [2:0] mcycle;
  wire [7:0] do_r;
  wire [1:0] mode_r;
  wire bcd_en_r;
  wire [4:0] alu_op_r;
  wire [3:0] write_data_r;
  wire [1:0] set_addr_to_r;
  wire [8:0] pcadder;
  wire rstcycle;
  wire irqcycle;
  wire nmicycle;
  wire so_n_o;
  wire irq_n_o;
  wire nmi_n_o;
  wire nmiact;
  wire brk;
  wire [7:0] busa;
  wire [7:0] busa_r;
  wire [7:0] busb;
  wire [7:0] busb_r;
  wire [7:0] alu_q;
  wire [7:0] p_out;
  wire [2:0] lcycle;
  wire [4:0] alu_op;
  wire [3:0] set_busa_to;
  wire [1:0] set_addr_to;
  wire [3:0] write_data;
  wire [1:0] jump;
  wire [1:0] baadd;
  wire [1:0] baquirk;
  wire brkatna;
  wire adadd;
  wire addy;
  wire pcadd;
  wire inc_s;
  wire dec_s;
  wire lda;
  wire ldp;
  wire ldx;
  wire ldy;
  wire lds;
  wire lddi;
  wire ldalu;
  wire ldad;
  wire ldbal;
  wire ldbah;
  wire savep;
  wire write;
  wire res_n_i;
  wire res_n_d;
  wire rdy_mod;
  wire really_rdy;
  wire wrn_i;
  wire nmi_entered;
  wire [63:0] reg_wired_or_0;
  wire [63:0] reg_wired_or_1;
  wire [63:0] reg_wired_or_2;
  wire [63:0] ss_1;
  wire [63:0] ss_1_back;
  wire [63:0] ss_2;
  wire [63:0] ss_2_back;
  wire [63:0] ss_3;
  wire [63:0] ss_3_back;
  wire [63:0] n31;
  wire [63:0] n32;
  wire n33;
  wire n34;
  wire n37;
  wire n38;
  wire [1:0] n41;
  wire n43;
  wire [1:0] n44;
  wire n46;
  wire n47;
  wire [1:0] n48;
  wire n50;
  wire n51;
  wire n52;
  wire n56;
  wire n58;
  wire n59;
  wire n60;
  wire n61;
  wire n65;
  wire n66;
  wire n69;
  wire n70;
  wire n71;
  wire [7:0] n73;
  wire [7:0] n74;
  wire [7:0] n75;
  wire [7:0] n76;
  wire [31:0] n77;
  wire [39:0] n78;
  wire [7:0] n79;
  wire [47:0] n80;
  wire [7:0] n81;
  wire [55:0] n82;
  wire [7:0] n83;
  wire [63:0] n84;
  wire n115;
  wire [7:0] n126;
  wire [3:0] n129;
  wire n137;
  wire n138;
  wire [15:0] n139;
  wire [7:0] n140;
  wire [7:0] n141;
  wire [7:0] n142;
  wire [1:0] n143;
  wire n144;
  wire [3:0] n145;
  wire [4:0] n147;
  wire [3:0] n148;
  wire [1:0] n150;
  wire n152;
  wire n153;
  wire n154;
  wire n155;
  wire [7:0] n157;
  wire n158;
  wire n160;
  wire n162;
  wire n164;
  wire n165;
  wire n167;
  wire n169;
  wire n170;
  wire n171;
  wire n172;
  wire n173;
  wire n175;
  wire n177;
  wire n178;
  wire n179;
  wire n181;
  wire n182;
  wire n183;
  wire n184;
  wire [15:0] n186;
  wire [15:0] n187;
  wire n188;
  wire [7:0] n190;
  wire [7:0] n191;
  wire [7:0] n192;
  wire n193;
  wire n195;
  wire [7:0] n196;
  wire [1:0] n197;
  wire n198;
  wire [1:0] n200;
  wire [15:0] n202;
  wire [7:0] n203;
  wire [15:0] n204;
  wire [15:0] n205;
  wire n206;
  wire n208;
  wire n209;
  wire n210;
  wire [15:0] n212;
  wire [15:0] n213;
  wire n215;
  wire n217;
  wire n218;
  wire n219;
  wire n220;
  wire n221;
  wire n222;
  wire [15:0] n224;
  wire [15:0] n225;
  wire [15:0] n227;
  wire n229;
  wire [15:0] n230;
  wire n232;
  wire n233;
  wire n234;
  wire n235;
  wire [7:0] n236;
  wire [7:0] n238;
  wire [7:0] n239;
  wire [7:0] n241;
  wire [7:0] n242;
  wire [7:0] n243;
  wire [7:0] n244;
  wire [7:0] n245;
  wire n247;
  wire [2:0] n248;
  wire [7:0] n249;
  wire [7:0] n250;
  wire [7:0] n251;
  reg [7:0] n252;
  wire [7:0] n253;
  wire [7:0] n254;
  wire [7:0] n255;
  reg [7:0] n256;
  wire [7:0] n259;
  wire [7:0] n261;
  wire [15:0] n262;
  wire [15:0] n263;
  wire [15:0] n264;
  wire n266;
  wire n268;
  wire n270;
  wire n271;
  wire n272;
  wire n273;
  wire [4:0] n274;
  wire [3:0] n275;
  wire [1:0] n276;
  wire n277;
  wire n278;
  wire n279;
  wire n280;
  wire n281;
  wire n282;
  wire n283;
  wire n284;
  wire n285;
  wire n286;
  wire n287;
  wire n288;
  wire n289;
  wire n290;
  wire n291;
  wire n292;
  wire [7:0] n293;
  wire [7:0] n294;
  wire [15:0] n295;
  wire [15:0] n296;
  wire [15:0] n297;
  wire n298;
  wire n299;
  wire n300;
  wire [7:0] n301;
  wire [1:0] n302;
  wire n303;
  wire [4:0] n304;
  wire [3:0] n305;
  wire [1:0] n306;
  wire n307;
  wire n308;
  wire [7:0] n309;
  wire [7:0] n310;
  wire [15:0] n311;
  wire [15:0] n312;
  wire n313;
  wire n314;
  wire n315;
  wire [7:0] n316;
  wire [1:0] n317;
  wire n318;
  wire [4:0] n319;
  wire [3:0] n320;
  wire [1:0] n321;
  wire n322;
  wire n323;
  wire [7:0] n324;
  wire [7:0] n325;
  wire [15:0] n326;
  wire [15:0] n328;
  wire n329;
  wire n330;
  wire n331;
  wire [7:0] n332;
  wire [1:0] n333;
  wire n334;
  wire [4:0] n335;
  wire [3:0] n336;
  wire [1:0] n337;
  wire n338;
  wire n339;
  wire [7:0] n356;
  wire [8:0] n357;
  wire n358;
  wire [8:0] n359;
  wire [8:0] n360;
  wire [8:0] n361;
  wire [7:0] n362;
  wire [8:0] n364;
  wire [7:0] n365;
  wire [7:0] n366;
  wire [7:0] n367;
  wire n372;
  wire [7:0] n373;
  wire [7:0] n374;
  wire [7:0] n375;
  wire [7:0] n376;
  wire n377;
  wire n378;
  wire n381;
  wire [7:0] n382;
  wire [7:0] n383;
  wire [7:0] n384;
  wire [7:0] n385;
  wire [7:0] n386;
  wire [7:0] n387;
  wire n388;
  wire n389;
  wire [7:0] n390;
  wire n392;
  wire n394;
  wire n396;
  wire n397;
  wire [7:0] n398;
  wire [7:0] n399;
  wire [4:0] n400;
  wire n402;
  wire [2:0] n403;
  wire n406;
  wire n409;
  wire n412;
  wire n415;
  wire n418;
  wire n421;
  wire n424;
  wire [6:0] n425;
  wire n426;
  reg n427;
  wire n428;
  reg n429;
  wire n430;
  reg n431;
  wire n432;
  reg n433;
  wire [1:0] n434;
  wire n435;
  wire n436;
  wire [1:0] n437;
  wire [1:0] n438;
  wire n439;
  wire n440;
  wire n443;
  wire n444;
  wire n449;
  wire n451;
  wire n452;
  wire n453;
  wire n454;
  wire n456;
  wire n457;
  wire n458;
  wire n461;
  wire n463;
  wire [1:0] n464;
  wire [1:0] n465;
  wire [1:0] n466;
  wire [7:0] n468;
  wire n470;
  wire n472;
  wire n474;
  wire [7:0] n475;
  wire [4:0] n478;
  wire n480;
  wire n482;
  wire n483;
  wire n484;
  wire n485;
  wire n486;
  wire [4:0] n487;
  wire n489;
  wire n491;
  wire n492;
  wire n493;
  wire n495;
  wire n497;
  wire n499;
  wire n500;
  wire n501;
  wire n502;
  wire [7:0] n504;
  wire [7:0] n505;
  wire [7:0] n506;
  wire [7:0] n507;
  wire n509;
  wire n510;
  wire [7:0] n513;
  wire [7:0] n515;
  wire [7:0] n516;
  wire [7:0] n518;
  wire [7:0] n520;
  wire [7:0] n521;
  wire [7:0] n523;
  wire [7:0] n525;
  wire [7:0] n526;
  wire [7:0] n528;
  wire n530;
  wire n531;
  wire n533;
  wire n534;
  wire n536;
  wire n537;
  wire n538;
  wire [5:0] n539;
  wire [15:0] n540;
  wire [15:0] n542;
  wire [15:0] n544;
  wire [7:0] n546;
  wire n557;
  wire [7:0] n558;
  wire [7:0] n559;
  wire [7:0] n560;
  wire [7:0] n561;
  wire [8:0] n562;
  wire [7:0] n563;
  wire [7:0] n564;
  wire n565;
  wire n567;
  wire n569;
  wire n570;
  wire [7:0] n572;
  wire [7:0] n573;
  wire [7:0] n575;
  wire [8:0] n577;
  wire n579;
  wire [7:0] n580;
  wire [8:0] n581;
  wire [8:0] n582;
  wire [8:0] n583;
  wire n585;
  wire n586;
  wire [7:0] n588;
  wire n590;
  wire [7:0] n592;
  wire [7:0] n593;
  wire n595;
  wire n597;
  wire [2:0] n598;
  reg [7:0] n599;
  wire [7:0] n600;
  wire n602;
  wire [2:0] n603;
  reg [7:0] n604;
  reg [7:0] n605;
  reg [8:0] n606;
  wire [7:0] n607;
  wire [7:0] n608;
  wire [7:0] n609;
  wire [7:0] n610;
  wire [7:0] n611;
  wire [7:0] n612;
  wire n614;
  wire n617;
  wire n618;
  wire n619;
  wire n620;
  wire n623;
  wire n626;
  wire [2:0] n628;
  wire n630;
  wire [2:0] n631;
  localparam [8:0] n632 = 9'b111111111;
  wire [5:0] n633;
  wire n635;
  wire n637;
  wire n639;
  wire n640;
  wire [1:0] n641;
  wire [7:0] n643;
  wire [8:0] n644;
  wire [8:0] n645;
  wire n647;
  wire [7:0] n649;
  wire [7:0] n650;
  wire [7:0] n651;
  wire [7:0] n652;
  wire [7:0] n653;
  wire n654;
  wire [7:0] n655;
  wire [7:0] n656;
  wire [7:0] n657;
  wire [7:0] n658;
  wire [8:0] n659;
  wire [8:0] n660;
  wire [7:0] n661;
  wire [7:0] n662;
  wire n663;
  wire n664;
  wire n665;
  wire n666;
  wire n667;
  wire n668;
  wire n669;
  wire n670;
  wire n671;
  wire n672;
  wire [7:0] n673;
  wire [7:0] n674;
  wire [7:0] n675;
  wire [8:0] n676;
  wire [7:0] n677;
  wire [7:0] n678;
  wire [7:0] n679;
  wire n680;
  wire [7:0] n681;
  wire [7:0] n682;
  wire [7:0] n683;
  wire [8:0] n684;
  wire [7:0] n685;
  wire [7:0] n686;
  wire [7:0] n687;
  wire n688;
  wire n698;
  wire n699;
  wire n700;
  wire n701;
  wire n702;
  wire n703;
  wire n704;
  wire n706;
  wire [7:0] n707;
  wire n709;
  wire [7:0] n710;
  wire n712;
  wire [7:0] n713;
  wire n715;
  wire [7:0] n716;
  wire n718;
  wire n720;
  wire [7:0] n721;
  wire [7:0] n722;
  wire n724;
  wire [7:0] n725;
  wire [7:0] n727;
  wire [7:0] n728;
  wire n730;
  wire [7:0] n731;
  wire [7:0] n733;
  wire [7:0] n734;
  wire [7:0] n735;
  wire [7:0] n736;
  wire n738;
  wire [7:0] n739;
  wire [7:0] n740;
  wire [7:0] n741;
  wire n743;
  wire n746;
  wire [10:0] n747;
  reg [7:0] n749;
  wire [7:0] n750;
  wire [23:0] n752;
  wire n754;
  wire [15:0] n756;
  wire [23:0] n757;
  wire n759;
  wire [15:0] n761;
  wire [7:0] n762;
  wire [23:0] n763;
  wire n765;
  wire [7:0] n766;
  wire [15:0] n767;
  wire [7:0] n768;
  wire [23:0] n769;
  wire n771;
  wire [3:0] n772;
  reg [23:0] n774;
  wire [7:0] n776;
  wire n777;
  wire [7:0] n778;
  wire n780;
  wire [7:0] n781;
  wire n783;
  wire [7:0] n784;
  wire n786;
  wire [7:0] n787;
  wire n789;
  wire [7:0] n790;
  wire n792;
  wire n794;
  wire [7:0] n795;
  wire n797;
  wire [7:0] n798;
  wire n800;
  wire [7:0] n801;
  wire [7:0] n802;
  wire [7:0] n803;
  wire n805;
  wire [7:0] n806;
  wire [7:0] n807;
  wire [7:0] n808;
  wire [7:0] n809;
  wire n811;
  wire [7:0] n812;
  wire [7:0] n813;
  wire n815;
  wire [7:0] n816;
  wire [7:0] n817;
  wire n819;
  wire n822;
  wire [12:0] n823;
  reg [7:0] n825;
  wire n828;
  wire n829;
  wire n830;
  wire n831;
  wire n836;
  wire [2:0] n837;
  wire n838;
  wire n839;
  wire n840;
  wire n841;
  wire n842;
  wire n843;
  wire n845;
  wire n846;
  wire n847;
  wire n848;
  wire n849;
  wire n850;
  wire n853;
  wire n855;
  wire n859;
  wire n862;
  wire n864;
  wire [2:0] n866;
  wire [2:0] n867;
  wire [2:0] n869;
  wire n871;
  wire n872;
  wire n873;
  wire n874;
  wire [2:0] n875;
  wire n876;
  wire n877;
  wire n878;
  wire n879;
  wire n880;
  wire [4:0] n881;
  wire n883;
  wire n885;
  wire n886;
  wire n887;
  wire n888;
  wire n890;
  wire n892;
  wire n893;
  wire n894;
  wire n895;
  wire n896;
  wire n897;
  wire [2:0] n898;
  wire n899;
  wire n900;
  wire n901;
  wire n902;
  wire [63:0] n909;
  wire [63:0] n910;
  wire [63:0] n911;
  wire [47:0] n912;
  reg [15:0] n913;
  reg [15:0] n914;
  reg [15:0] n915;
  reg [7:0] n916;
  reg [7:0] n917;
  reg [7:0] n918;
  reg [7:0] n919;
  reg [8:0] n920;
  reg [7:0] n921;
  reg [7:0] n922;
  reg [15:0] n923;
  reg [15:0] n924;
  reg n925;
  reg n926;
  reg n927;
  reg [7:0] n928;
  reg [2:0] n929;
  reg [1:0] n930;
  reg n931;
  reg [4:0] n932;
  reg [3:0] n933;
  reg [1:0] n934;
  reg n935;
  reg n936;
  reg n937;
  reg n938;
  reg n939;
  reg n940;
  reg n941;
  reg [7:0] n942;
  reg [7:0] n943;
  reg [7:0] n944;
  wire n945;
  reg n946;
  wire n947;
  reg n948;
  reg n949;
  reg n950;
  reg n951;
  assign R_W_n = wrn_i; //(module output)
  assign Sync = n38; //(module output)
  assign EF = ef_i; //(module output)
  assign MF = mf_i; //(module output)
  assign XF = xf_i; //(module output)
  assign ML_n = n52; //(module output)
  assign VP_n = n61; //(module output)
  assign VDA = n66; //(module output)
  assign VPA = n71; //(module output)
  assign A = n774; //(module output)
  assign DO = do_r; //(module output)
  assign Regs = n84; //(module output)
  assign \DEBUG[I]  = n13; //(module output)
  assign \DEBUG[A]  = n14; //(module output)
  assign \DEBUG[X]  = n15; //(module output)
  assign \DEBUG[Y]  = n16; //(module output)
  assign \DEBUG[S]  = n17; //(module output)
  assign \DEBUG[P]  = n18; //(module output)
  assign NMI_ack = nmiact; //(module output)
  assign Instrnew = n831; //(module output)
  assign SaveStateBus_Dout = n32; //(module output)
  /*# rtl/t65/T65.vhd:136:8 */
  assign n13 = n912[7:0]; // extract
  /*# rtl/t65/T65.vhd:136:8 */
  assign n14 = n912[15:8]; // extract
  /*# rtl/t65/T65.vhd:136:8 */
  assign n15 = n912[23:16]; // extract
  /*# rtl/t65/T65.vhd:136:8 */
  assign n16 = n912[31:24]; // extract
  /*# rtl/t65/T65.vhd:136:8 */
  assign n17 = n912[39:32]; // extract
  /*# rtl/t65/T65.vhd:136:8 */
  assign n18 = n912[47:40]; // extract
  /*# rtl/t65/T65.vhd:180:10 */
  assign abc = n913; // (signal)
  /*# rtl/t65/T65.vhd:180:15 */
  assign x = n914; // (signal)
  /*# rtl/t65/T65.vhd:180:18 */
  assign y = n915; // (signal)
  /*# rtl/t65/T65.vhd:181:10 */
  always @*
    p = n916; // (isignal)
  initial
    p = 8'b00000000;
  /*# rtl/t65/T65.vhd:181:13 */
  always @*
    ad = n917; // (isignal)
  initial
    ad = 8'b00000000;
  /*# rtl/t65/T65.vhd:181:17 */
  always @*
    dl = n918; // (isignal)
  initial
    dl = 8'b00000000;
  /*# rtl/t65/T65.vhd:182:10 */
  assign pwithb = n778; // (signal)
  /*# rtl/t65/T65.vhd:183:10 */
  assign bah = n919; // (signal)
  /*# rtl/t65/T65.vhd:184:10 */
  assign bal = n920; // (signal)
  /*# rtl/t65/T65.vhd:185:10 */
  assign pbr = n921; // (signal)
  /*# rtl/t65/T65.vhd:186:10 */
  assign dbr = n922; // (signal)
  /*# rtl/t65/T65.vhd:187:10 */
  assign pc = n923; // (signal)
  /*# rtl/t65/T65.vhd:188:10 */
  assign s = n924; // (signal)
  /*# rtl/t65/T65.vhd:189:10 */
  assign ef_i = n925; // (signal)
  /*# rtl/t65/T65.vhd:190:10 */
  assign mf_i = n926; // (signal)
  /*# rtl/t65/T65.vhd:191:10 */
  assign xf_i = n927; // (signal)
  /*# rtl/t65/T65.vhd:193:10 */
  assign ir = n928; // (signal)
  /*# rtl/t65/T65.vhd:194:10 */
  assign mcycle = n929; // (signal)
  /*# rtl/t65/T65.vhd:196:10 */
  assign do_r = n825; // (signal)
  /*# rtl/t65/T65.vhd:198:10 */
  assign mode_r = n930; // (signal)
  /*# rtl/t65/T65.vhd:199:10 */
  assign bcd_en_r = n931; // (signal)
  /*# rtl/t65/T65.vhd:200:10 */
  assign alu_op_r = n932; // (signal)
  /*# rtl/t65/T65.vhd:201:10 */
  assign write_data_r = n933; // (signal)
  /*# rtl/t65/T65.vhd:202:10 */
  assign set_addr_to_r = n934; // (signal)
  /*# rtl/t65/T65.vhd:203:10 */
  assign pcadder = n361; // (signal)
  /*# rtl/t65/T65.vhd:205:10 */
  assign rstcycle = n935; // (signal)
  /*# rtl/t65/T65.vhd:206:10 */
  assign irqcycle = n936; // (signal)
  /*# rtl/t65/T65.vhd:207:10 */
  assign nmicycle = n937; // (signal)
  /*# rtl/t65/T65.vhd:209:10 */
  assign so_n_o = n938; // (signal)
  /*# rtl/t65/T65.vhd:210:10 */
  assign irq_n_o = n939; // (signal)
  /*# rtl/t65/T65.vhd:211:10 */
  assign nmi_n_o = n940; // (signal)
  /*# rtl/t65/T65.vhd:212:10 */
  assign nmiact = n941; // (signal)
  /*# rtl/t65/T65.vhd:214:10 */
  assign brk = n704; // (signal)
  /*# rtl/t65/T65.vhd:217:10 */
  assign busa = n749; // (signal)
  /*# rtl/t65/T65.vhd:218:10 */
  assign busa_r = n942; // (signal)
  /*# rtl/t65/T65.vhd:219:10 */
  assign busb = n943; // (signal)
  /*# rtl/t65/T65.vhd:220:10 */
  assign busb_r = n944; // (signal)
  /*# rtl/t65/T65.vhd:252:10 */
  assign res_n_i = n946; // (signal)
  /*# rtl/t65/T65.vhd:253:10 */
  assign res_n_d = n948; // (signal)
  /*# rtl/t65/T65.vhd:255:10 */
  assign rdy_mod = n949; // (signal)
  /*# rtl/t65/T65.vhd:256:10 */
  assign really_rdy = n34; // (signal)
  /*# rtl/t65/T65.vhd:257:10 */
  assign wrn_i = n950; // (signal)
  /*# rtl/t65/T65.vhd:259:10 */
  assign nmi_entered = n951; // (signal)
  /*# rtl/t65/T65.vhd:267:16 */
  assign ss_1_back = n909; // (signal)
  /*# rtl/t65/T65.vhd:269:16 */
  assign ss_2_back = n910; // (signal)
  /*# rtl/t65/T65.vhd:271:16 */
  assign ss_3_back = n911; // (signal)
  /*# rtl/t65/T65.vhd:275:3 */
  ereg_savestatev_Barch_0_3b2d7860d419a2b3f606def2876bd0546a4c34f6 ireg_savestate_t80_1 (
    .clk(Clk),
    .bus_din(SaveStateBus_Din),
    .bus_adr(SaveStateBus_Adr),
    .bus_wren(SaveStateBus_wren),
    .bus_rst(SaveStateBus_rst),
    .din(ss_1_back),
    .bus_dout(reg_wired_or_0),
    .dout(ss_1));
  /*# rtl/t65/T65.vhd:276:3 */
  ereg_savestatev_Barch_1_7876e57a072db7a67dd670b2ded8b40f739ebe8e ireg_savestate_t80_2 (
    .clk(Clk),
    .bus_din(SaveStateBus_Din),
    .bus_adr(SaveStateBus_Adr),
    .bus_wren(SaveStateBus_wren),
    .bus_rst(SaveStateBus_rst),
    .din(ss_2_back),
    .bus_dout(reg_wired_or_1),
    .dout(ss_2));
  /*# rtl/t65/T65.vhd:277:3 */
  ereg_savestatev_Barch_2_cf0b42666ef5e37edea0ab8e173e42c196d03814 ireg_savestate_t80_3 (
    .clk(Clk),
    .bus_din(SaveStateBus_Din),
    .bus_adr(SaveStateBus_Adr),
    .bus_wren(SaveStateBus_wren),
    .bus_rst(SaveStateBus_rst),
    .din(ss_3_back),
    .bus_dout(reg_wired_or_2),
    .dout(ss_3));
  /*# rtl/t65/T65.vhd:278:39 */
  assign n31 = reg_wired_or_0 | reg_wired_or_1;
  /*# rtl/t65/T65.vhd:278:57 */
  assign n32 = n31 | reg_wired_or_2;
  /*# rtl/t65/T65.vhd:284:24 */
  assign n33 = ~wrn_i;
  /*# rtl/t65/T65.vhd:284:21 */
  assign n34 = Rdy | n33;
  /*# rtl/t65/T65.vhd:285:27 */
  assign n37 = mcycle == 3'b000;
  /*# rtl/t65/T65.vhd:285:15 */
  assign n38 = n37 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:290:22 */
  assign n41 = ir[7:6]; // extract
  /*# rtl/t65/T65.vhd:290:35 */
  assign n43 = n41 != 2'b10;
  /*# rtl/t65/T65.vhd:290:49 */
  assign n44 = ir[2:1]; // extract
  /*# rtl/t65/T65.vhd:290:62 */
  assign n46 = n44 == 2'b11;
  /*# rtl/t65/T65.vhd:290:43 */
  assign n47 = n46 & n43;
  /*# rtl/t65/T65.vhd:290:79 */
  assign n48 = mcycle[2:1]; // extract
  /*# rtl/t65/T65.vhd:290:92 */
  assign n50 = n48 != 2'b00;
  /*# rtl/t65/T65.vhd:290:69 */
  assign n51 = n50 & n47;
  /*# rtl/t65/T65.vhd:290:15 */
  assign n52 = n51 ? 1'b0 : 1'b1;
  /*# rtl/t65/T65.vhd:291:47 */
  assign n56 = mcycle == 3'b101;
  /*# rtl/t65/T65.vhd:291:65 */
  assign n58 = mcycle == 3'b110;
  /*# rtl/t65/T65.vhd:291:55 */
  assign n59 = n56 | n58;
  /*# rtl/t65/T65.vhd:291:35 */
  assign n60 = n59 & irqcycle;
  /*# rtl/t65/T65.vhd:291:15 */
  assign n61 = n60 ? 1'b0 : 1'b1;
  /*# rtl/t65/T65.vhd:292:33 */
  assign n65 = set_addr_to_r != 2'b00;
  /*# rtl/t65/T65.vhd:292:14 */
  assign n66 = n65 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:293:23 */
  assign n69 = jump[1]; // extract
  /*# rtl/t65/T65.vhd:293:27 */
  assign n70 = ~n69;
  /*# rtl/t65/T65.vhd:293:14 */
  assign n71 = n70 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:297:17 */
  assign n73 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:298:15 */
  assign n74 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:299:15 */
  assign n75 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:300:32 */
  assign n76 = s[7:0]; // extract
  /*# rtl/t65/T65.vhd:303:32 */
  assign n77 = {pc, s};
  /*# rtl/t65/T65.vhd:303:53 */
  assign n78 = {n77, p};
  /*# rtl/t65/T65.vhd:303:60 */
  assign n79 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:303:57 */
  assign n80 = {n78, n79};
  /*# rtl/t65/T65.vhd:303:76 */
  assign n81 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:303:73 */
  assign n82 = {n80, n81};
  /*# rtl/t65/T65.vhd:303:94 */
  assign n83 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:303:89 */
  assign n84 = {n82, n83};
  /*# rtl/t65/T65.vhd:305:3 */
  t65_mcode_Brtl mcode (
    .mode(mode_r),
    .bcd_en(bcd_en_r),
    .ir(ir),
    .mcycle(mcycle),
    .p(p),
    .rdy_mod(rdy_mod),
    .lcycle(lcycle),
    .alu_op(alu_op),
    .set_busa_to(set_busa_to),
    .set_addr_to(set_addr_to),
    .write_data(write_data),
    .jump(jump),
    .baadd(baadd),
    .baquirk(baquirk),
    .brkatna(brkatna),
    .adadd(adadd),
    .addy(addy),
    .pcadd(pcadd),
    .inc_s(inc_s),
    .dec_s(dec_s),
    .lda(lda),
    .ldp(ldp),
    .ldx(ldx),
    .ldy(ldy),
    .lds(lds),
    .lddi(lddi),
    .ldalu(ldalu),
    .ldad(ldad),
    .ldbal(ldbal),
    .ldbah(ldbah),
    .savep(savep),
    .write(write));
  /*# rtl/t65/T65.vhd:343:3 */
  t65_alu_Brtl alu (
    .mode(mode_r),
    .bcd_en(bcd_en_r),
    .op(alu_op_r),
    .busa(busa_r),
    .busb(busb),
    .p_in(p),
    .p_out(p_out),
    .q(alu_q));
  /*# rtl/t65/T65.vhd:359:14 */
  assign n115 = ~Res_n;
  /*# rtl/t65/T65.vhd:371:48 */
  assign n126 = s[7:0]; // extract
  /*# rtl/t65/T65.vhd:376:47 */
  assign n129 = alu_op_r[3:0];  // trunc
  /*# rtl/t65/T65.vhd:388:16 */
  assign n137 = ~Pwr_n;
  /*# rtl/t65/T65.vhd:390:21 */
  assign n138 = ~res_n_i;
  /*# rtl/t65/T65.vhd:391:40 */
  assign n139 = ss_1[15:0]; // extract
  /*# rtl/t65/T65.vhd:392:31 */
  assign n140 = ss_1[23:16]; // extract
  /*# rtl/t65/T65.vhd:393:31 */
  assign n141 = ss_1[39:32]; // extract
  /*# rtl/t65/T65.vhd:394:31 */
  assign n142 = ss_1[47:40]; // extract
  /*# rtl/t65/T65.vhd:395:31 */
  assign n143 = ss_1[49:48]; // extract
  /*# rtl/t65/T65.vhd:396:31 */
  assign n144 = ss_1[50]; // extract
  /*# rtl/t65/T65.vhd:397:64 */
  assign n145 = ss_1[54:51]; // extract
  /*# rtl/t65/T65.vhd:397:36 */
  assign n147 = {1'b0, n145};  // uext
  /*# rtl/t65/T65.vhd:398:68 */
  assign n148 = ss_1[58:55]; // extract
  /*# rtl/t65/T65.vhd:399:69 */
  assign n150 = ss_1[60:59]; // extract
  /*# rtl/t65/T65.vhd:400:31 */
  assign n152 = ss_1[61]; // extract
  /*# rtl/t65/T65.vhd:401:31 */
  assign n153 = ss_1[62]; // extract
  /*# rtl/t65/T65.vhd:402:31 */
  assign n154 = ss_1[63]; // extract
  /*# rtl/t65/T65.vhd:403:31 */
  assign n155 = ss_2[0]; // extract
  /*# rtl/t65/T65.vhd:407:40 */
  assign n157 = ss_1[31:24]; // extract
  /*# rtl/t65/T65.vhd:408:24 */
  assign n158 = ss_2[1]; // extract
  /*# rtl/t65/T65.vhd:412:20 */
  assign n160 = mcycle == 3'b000;
  /*# rtl/t65/T65.vhd:414:24 */
  assign n162 = mcycle == 3'b011;
  /*# rtl/t65/T65.vhd:414:39 */
  assign n164 = ir != 8'b10010011;
  /*# rtl/t65/T65.vhd:414:32 */
  assign n165 = n164 & n162;
  /*# rtl/t65/T65.vhd:414:60 */
  assign n167 = mcycle == 3'b100;
  /*# rtl/t65/T65.vhd:414:75 */
  assign n169 = ir == 8'b10010011;
  /*# rtl/t65/T65.vhd:414:68 */
  assign n170 = n169 & n167;
  /*# rtl/t65/T65.vhd:414:49 */
  assign n171 = n165 | n170;
  /*# rtl/t65/T65.vhd:414:93 */
  assign n172 = ~Rdy;
  /*# rtl/t65/T65.vhd:414:85 */
  assign n173 = n172 & n171;
  /*# rtl/t65/T65.vhd:414:9 */
  assign n175 = n173 ? 1'b1 : rdy_mod;
  /*# rtl/t65/T65.vhd:412:9 */
  assign n177 = n160 ? 1'b0 : n175;
  /*# rtl/t65/T65.vhd:419:20 */
  assign n178 = ~write;
  /*# rtl/t65/T65.vhd:419:30 */
  assign n179 = n178 | rstcycle;
  /*# rtl/t65/T65.vhd:427:22 */
  assign n181 = mcycle == 3'b000;
  /*# rtl/t65/T65.vhd:431:25 */
  assign n182 = ~irqcycle;
  /*# rtl/t65/T65.vhd:431:44 */
  assign n183 = ~nmicycle;
  /*# rtl/t65/T65.vhd:431:31 */
  assign n184 = n183 & n182;
  /*# rtl/t65/T65.vhd:432:24 */
  assign n186 = pc + 16'b0000000000000001;
  /*# rtl/t65/T65.vhd:427:11 */
  assign n187 = n193 ? n186 : pc;
  /*# rtl/t65/T65.vhd:435:31 */
  assign n188 = irqcycle | nmicycle;
  /*# rtl/t65/T65.vhd:435:13 */
  assign n190 = n188 ? 8'b00000000 : DI;
  /*# rtl/t65/T65.vhd:188:10 */
  assign n191 = s[7:0]; // extract
  /*# rtl/t65/T65.vhd:427:11 */
  assign n192 = n195 ? alu_q : n191;
  /*# rtl/t65/T65.vhd:427:11 */
  assign n193 = n184 & n181;
  /*# rtl/t65/T65.vhd:427:11 */
  assign n195 = lds & n181;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n196 = n285 ? n190 : ir;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n197 = n286 ? Mode : mode_r;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n198 = n287 ? BCD_en : bcd_en_r;
  /*# rtl/t65/T65.vhd:448:11 */
  assign n200 = brk ? 2'b00 : set_addr_to;
  /*# rtl/t65/T65.vhd:455:20 */
  assign n202 = s + 16'b0000000000000001;
  /*# rtl/t65/T65.vhd:188:10 */
  assign n203 = s[15:8]; // extract
  /*# rtl/t65/T65.vhd:188:10 */
  assign n204 = {n203, n192};
  /*# rtl/t65/T65.vhd:454:11 */
  assign n205 = inc_s ? n202 : n204;
  /*# rtl/t65/T65.vhd:457:40 */
  assign n206 = ~rstcycle;
  /*# rtl/t65/T65.vhd:457:53 */
  assign n208 = Mode == 2'b00;
  /*# rtl/t65/T65.vhd:457:46 */
  assign n209 = n206 | n208;
  /*# rtl/t65/T65.vhd:457:26 */
  assign n210 = n209 & dec_s;
  /*# rtl/t65/T65.vhd:458:20 */
  assign n212 = s - 16'b0000000000000001;
  /*# rtl/t65/T65.vhd:457:11 */
  assign n213 = n210 ? n212 : n205;
  /*# rtl/t65/T65.vhd:461:17 */
  assign n215 = ir == 8'b00000000;
  /*# rtl/t65/T65.vhd:461:41 */
  assign n217 = mcycle == 3'b001;
  /*# rtl/t65/T65.vhd:461:30 */
  assign n218 = n217 & n215;
  /*# rtl/t65/T65.vhd:461:62 */
  assign n219 = ~irqcycle;
  /*# rtl/t65/T65.vhd:461:49 */
  assign n220 = n219 & n218;
  /*# rtl/t65/T65.vhd:461:81 */
  assign n221 = ~nmicycle;
  /*# rtl/t65/T65.vhd:461:68 */
  assign n222 = n221 & n220;
  /*# rtl/t65/T65.vhd:462:22 */
  assign n224 = pc + 16'b0000000000000001;
  /*# rtl/t65/T65.vhd:461:11 */
  assign n225 = n222 ? n224 : n187;
  /*# rtl/t65/T65.vhd:469:24 */
  assign n227 = pc + 16'b0000000000000001;
  /*# rtl/t65/T65.vhd:468:13 */
  assign n229 = jump == 2'b01;
  /*# rtl/t65/T65.vhd:471:33 */
  assign n230 = {DI, dl};
  /*# rtl/t65/T65.vhd:470:13 */
  assign n232 = jump == 2'b10;
  /*# rtl/t65/T65.vhd:473:25 */
  assign n233 = pcadder[8]; // extract
  /*# rtl/t65/T65.vhd:474:22 */
  assign n234 = dl[7]; // extract
  /*# rtl/t65/T65.vhd:474:26 */
  assign n235 = ~n234;
  /*# rtl/t65/T65.vhd:475:40 */
  assign n236 = pc[15:8]; // extract
  /*# rtl/t65/T65.vhd:475:54 */
  assign n238 = n236 + 8'b00000001;
  /*# rtl/t65/T65.vhd:477:40 */
  assign n239 = pc[15:8]; // extract
  /*# rtl/t65/T65.vhd:477:54 */
  assign n241 = n239 - 8'b00000001;
  /*# rtl/t65/T65.vhd:474:17 */
  assign n242 = n235 ? n238 : n241;
  /*# rtl/t65/T65.vhd:187:10 */
  assign n243 = n225[15:8]; // extract
  /*# rtl/t65/T65.vhd:473:15 */
  assign n244 = n233 ? n242 : n243;
  /*# rtl/t65/T65.vhd:480:40 */
  assign n245 = pcadder[7:0]; // extract
  /*# rtl/t65/T65.vhd:472:13 */
  assign n247 = jump == 2'b11;
  /*# rtl/t65/T65.vhd:467:11 */
  assign n248 = {n247, n232, n229};
  /*# rtl/t65/T65.vhd:469:24 */
  assign n249 = n227[7:0]; // extract
  /*# rtl/t65/T65.vhd:471:33 */
  assign n250 = n230[7:0]; // extract
  /*# rtl/t65/T65.vhd:187:10 */
  assign n251 = n225[7:0]; // extract
  /*# rtl/t65/T65.vhd:467:11 */
  always @*
    case (n248)
      3'b100: n252 = n245;
      3'b010: n252 = n250;
      3'b001: n252 = n249;
      default: n252 = n251;
    endcase
  /*# rtl/t65/T65.vhd:469:24 */
  assign n253 = n227[15:8]; // extract
  /*# rtl/t65/T65.vhd:471:33 */
  assign n254 = n230[15:8]; // extract
  /*# rtl/t65/T65.vhd:187:10 */
  assign n255 = n225[15:8]; // extract
  /*# rtl/t65/T65.vhd:467:11 */
  always @*
    case (n248)
      3'b100: n256 = n244;
      3'b010: n256 = n254;
      3'b001: n256 = n253;
      default: n256 = n255;
    endcase
  /*# rtl/t65/T65.vhd:410:7 */
  assign n259 = n278 ? 8'b11111111 : pbr;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n261 = n279 ? 8'b11111111 : dbr;
  /*# rtl/t65/T65.vhd:418:9 */
  assign n262 = {n256, n252};
  /*# rtl/t65/T65.vhd:410:7 */
  assign n263 = n280 ? n262 : pc;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n264 = n281 ? n213 : s;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n266 = n282 ? 1'b0 : ef_i;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n268 = n283 ? 1'b0 : mf_i;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n270 = n284 ? 1'b0 : xf_i;
  /*# rtl/t65/T65.vhd:418:9 */
  assign n271 = n181 & really_rdy;
  /*# rtl/t65/T65.vhd:418:9 */
  assign n272 = n181 & really_rdy;
  /*# rtl/t65/T65.vhd:418:9 */
  assign n273 = n181 & really_rdy;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n274 = n288 ? alu_op : alu_op_r;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n275 = n289 ? write_data : write_data_r;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n276 = n290 ? n200 : set_addr_to_r;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n277 = n292 ? n179 : wrn_i;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n278 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n279 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n280 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n281 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n282 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n283 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n284 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n285 = n271 & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n286 = n272 & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n287 = n273 & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n288 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n289 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n290 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n291 = Enable ? n177 : rdy_mod;
  /*# rtl/t65/T65.vhd:410:7 */
  assign n292 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n293 = SaveStateBus_load ? pbr : n259;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n294 = SaveStateBus_load ? dbr : n261;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n295 = SaveStateBus_load ? pc : n263;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n296 = {8'b00000000, n157};
  /*# rtl/t65/T65.vhd:405:7 */
  assign n297 = SaveStateBus_load ? n296 : n264;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n298 = SaveStateBus_load ? ef_i : n266;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n299 = SaveStateBus_load ? mf_i : n268;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n300 = SaveStateBus_load ? xf_i : n270;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n301 = SaveStateBus_load ? ir : n196;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n302 = SaveStateBus_load ? mode_r : n197;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n303 = SaveStateBus_load ? bcd_en_r : n198;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n304 = SaveStateBus_load ? alu_op_r : n274;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n305 = SaveStateBus_load ? write_data_r : n275;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n306 = SaveStateBus_load ? set_addr_to_r : n276;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n307 = SaveStateBus_load ? n158 : n291;
  /*# rtl/t65/T65.vhd:405:7 */
  assign n308 = SaveStateBus_load ? wrn_i : n277;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n309 = n138 ? n141 : n293;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n310 = n138 ? n142 : n294;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n311 = n138 ? n139 : n295;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n312 = n138 ? s : n297;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n313 = n138 ? n153 : n298;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n314 = n138 ? n154 : n299;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n315 = n138 ? n155 : n300;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n316 = n138 ? n140 : n301;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n317 = n138 ? n143 : n302;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n318 = n138 ? n144 : n303;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n319 = n138 ? n147 : n304;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n320 = n138 ? n148 : n305;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n321 = n138 ? n150 : n306;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n322 = n138 ? rdy_mod : n307;
  /*# rtl/t65/T65.vhd:390:7 */
  assign n323 = n138 ? n152 : n308;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n324 = n137 ? pbr : n309;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n325 = n137 ? dbr : n310;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n326 = n137 ? pc : n311;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n328 = n137 ? 16'b0000000000000000 : n312;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n329 = n137 ? ef_i : n313;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n330 = n137 ? mf_i : n314;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n331 = n137 ? xf_i : n315;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n332 = n137 ? ir : n316;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n333 = n137 ? mode_r : n317;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n334 = n137 ? bcd_en_r : n318;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n335 = n137 ? alu_op_r : n319;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n336 = n137 ? write_data_r : n320;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n337 = n137 ? set_addr_to_r : n321;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n338 = n137 ? rdy_mod : n322;
  /*# rtl/t65/T65.vhd:388:7 */
  assign n339 = n137 ? wrn_i : n323;
  /*# rtl/t65/T65.vhd:488:23 */
  assign n356 = pc[7:0]; // extract
  /*# rtl/t65/T65.vhd:488:14 */
  assign n357 = {1'b0, n356};  // uext
  /*# rtl/t65/T65.vhd:488:59 */
  assign n358 = dl[7]; // extract
  /*# rtl/t65/T65.vhd:488:63 */
  assign n359 = {n358, dl};
  /*# rtl/t65/T65.vhd:488:39 */
  assign n360 = n357 + n359;
  /*# rtl/t65/T65.vhd:488:72 */
  assign n361 = pcadd ? n360 : n364;
  /*# rtl/t65/T65.vhd:489:23 */
  assign n362 = pc[7:0]; // extract
  /*# rtl/t65/T65.vhd:489:19 */
  assign n364 = {1'b0, n362};
  /*# rtl/t65/T65.vhd:492:33 */
  assign n365 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:493:31 */
  assign n366 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:494:31 */
  assign n367 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:503:17 */
  assign n372 = ~Pwr_n;
  /*# rtl/t65/T65.vhd:509:18 */
  assign n373 = ss_2[9:2]; // extract
  /*# rtl/t65/T65.vhd:510:32 */
  assign n374 = ss_2[17:10]; // extract
  /*# rtl/t65/T65.vhd:511:32 */
  assign n375 = ss_2[25:18]; // extract
  /*# rtl/t65/T65.vhd:512:32 */
  assign n376 = ss_2[33:26]; // extract
  /*# rtl/t65/T65.vhd:513:32 */
  assign n377 = ss_2[34]; // extract
  /*# rtl/t65/T65.vhd:514:32 */
  assign n378 = ss_2[35]; // extract
  /*# rtl/t65/T65.vhd:520:21 */
  assign n381 = mcycle == 3'b000;
  /*# rtl/t65/T65.vhd:180:10 */
  assign n382 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:517:7 */
  assign n383 = n495 ? alu_q : n382;
  /*# rtl/t65/T65.vhd:180:15 */
  assign n384 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:517:7 */
  assign n385 = n497 ? alu_q : n384;
  /*# rtl/t65/T65.vhd:180:18 */
  assign n386 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:517:7 */
  assign n387 = n499 ? alu_q : n386;
  /*# rtl/t65/T65.vhd:530:21 */
  assign n388 = lda | ldx;
  /*# rtl/t65/T65.vhd:530:28 */
  assign n389 = n388 | ldy;
  /*# rtl/t65/T65.vhd:520:11 */
  assign n390 = n397 ? p_out : p;
  /*# rtl/t65/T65.vhd:520:11 */
  assign n392 = lda & n381;
  /*# rtl/t65/T65.vhd:520:11 */
  assign n394 = ldx & n381;
  /*# rtl/t65/T65.vhd:520:11 */
  assign n396 = ldy & n381;
  /*# rtl/t65/T65.vhd:520:11 */
  assign n397 = n389 & n381;
  /*# rtl/t65/T65.vhd:534:11 */
  assign n398 = savep ? p_out : n390;
  /*# rtl/t65/T65.vhd:537:11 */
  assign n399 = ldp ? alu_q : n398;
  /*# rtl/t65/T65.vhd:540:16 */
  assign n400 = ir[4:0]; // extract
  /*# rtl/t65/T65.vhd:540:29 */
  assign n402 = n400 == 5'b11000;
  /*# rtl/t65/T65.vhd:541:20 */
  assign n403 = ir[7:5]; // extract
  /*# rtl/t65/T65.vhd:542:13 */
  assign n406 = n403 == 3'b000;
  /*# rtl/t65/T65.vhd:544:13 */
  assign n409 = n403 == 3'b001;
  /*# rtl/t65/T65.vhd:546:13 */
  assign n412 = n403 == 3'b010;
  /*# rtl/t65/T65.vhd:548:13 */
  assign n415 = n403 == 3'b011;
  /*# rtl/t65/T65.vhd:550:13 */
  assign n418 = n403 == 3'b101;
  /*# rtl/t65/T65.vhd:552:13 */
  assign n421 = n403 == 3'b110;
  /*# rtl/t65/T65.vhd:554:13 */
  assign n424 = n403 == 3'b111;
  /*# rtl/t65/T65.vhd:541:13 */
  assign n425 = {n424, n421, n418, n415, n412, n409, n406};
  /*# rtl/t65/T65.vhd:500:14 */
  assign n426 = n399[0]; // extract
  /*# rtl/t65/T65.vhd:541:13 */
  always @*
    case (n425)
      7'b1000000: n427 = n426;
      7'b0100000: n427 = n426;
      7'b0010000: n427 = n426;
      7'b0001000: n427 = n426;
      7'b0000100: n427 = n426;
      7'b0000010: n427 = 1'b1;
      7'b0000001: n427 = 1'b0;
      default: n427 = n426;
    endcase
  /*# rtl/t65/T65.vhd:500:14 */
  assign n428 = n399[2]; // extract
  /*# rtl/t65/T65.vhd:541:13 */
  always @*
    case (n425)
      7'b1000000: n429 = n428;
      7'b0100000: n429 = n428;
      7'b0010000: n429 = n428;
      7'b0001000: n429 = 1'b1;
      7'b0000100: n429 = 1'b0;
      7'b0000010: n429 = n428;
      7'b0000001: n429 = n428;
      default: n429 = n428;
    endcase
  /*# rtl/t65/T65.vhd:500:14 */
  assign n430 = n399[3]; // extract
  /*# rtl/t65/T65.vhd:541:13 */
  always @*
    case (n425)
      7'b1000000: n431 = 1'b1;
      7'b0100000: n431 = 1'b0;
      7'b0010000: n431 = n430;
      7'b0001000: n431 = n430;
      7'b0000100: n431 = n430;
      7'b0000010: n431 = n430;
      7'b0000001: n431 = n430;
      default: n431 = n430;
    endcase
  /*# rtl/t65/T65.vhd:500:14 */
  assign n432 = n399[6]; // extract
  /*# rtl/t65/T65.vhd:541:13 */
  always @*
    case (n425)
      7'b1000000: n433 = n432;
      7'b0100000: n433 = n432;
      7'b0010000: n433 = 1'b0;
      7'b0001000: n433 = n432;
      7'b0000100: n433 = n432;
      7'b0000010: n433 = n432;
      7'b0000001: n433 = n432;
      default: n433 = n432;
    endcase
  /*# rtl/t65/T65.vhd:540:11 */
  assign n434 = {n431, n429};
  /*# rtl/t65/T65.vhd:500:14 */
  assign n435 = n399[0]; // extract
  /*# rtl/t65/T65.vhd:540:11 */
  assign n436 = n402 ? n427 : n435;
  /*# rtl/t65/T65.vhd:500:14 */
  assign n437 = n399[3:2]; // extract
  /*# rtl/t65/T65.vhd:540:11 */
  assign n438 = n402 ? n434 : n437;
  /*# rtl/t65/T65.vhd:500:14 */
  assign n439 = n399[6]; // extract
  /*# rtl/t65/T65.vhd:540:11 */
  assign n440 = n402 ? n433 : n439;
  /*# rtl/t65/T65.vhd:500:14 */
  assign n443 = n399[1]; // extract
  /*# rtl/t65/T65.vhd:500:14 */
  assign n444 = n399[7]; // extract
  /*# rtl/t65/T65.vhd:560:17 */
  assign n449 = ir == 8'b00000000;
  /*# rtl/t65/T65.vhd:560:41 */
  assign n451 = mcycle == 3'b100;
  /*# rtl/t65/T65.vhd:560:30 */
  assign n452 = n451 & n449;
  /*# rtl/t65/T65.vhd:560:62 */
  assign n453 = ~rstcycle;
  /*# rtl/t65/T65.vhd:560:49 */
  assign n454 = n453 & n452;
  /*# rtl/t65/T65.vhd:500:14 */
  assign n456 = n438[0]; // extract
  /*# rtl/t65/T65.vhd:560:11 */
  assign n457 = n454 ? 1'b1 : n456;
  /*# rtl/t65/T65.vhd:500:14 */
  assign n458 = n438[1]; // extract
  /*# rtl/t65/T65.vhd:566:21 */
  assign n461 = Mode != 2'b00;
  /*# rtl/t65/T65.vhd:566:13 */
  assign n463 = n461 ? 1'b0 : n458;
  /*# rtl/t65/T65.vhd:564:11 */
  assign n464 = {n463, 1'b1};
  /*# rtl/t65/T65.vhd:500:14 */
  assign n465 = {n458, n457};
  /*# rtl/t65/T65.vhd:564:11 */
  assign n466 = rstcycle ? n464 : n465;
  /*# rtl/t65/T65.vhd:500:14 */
  assign n468 = {n444, n440, 1'b1, 1'b1, n466, n443, n436};
  /*# rtl/t65/T65.vhd:519:9 */
  assign n470 = n392 & really_rdy;
  /*# rtl/t65/T65.vhd:519:9 */
  assign n472 = n394 & really_rdy;
  /*# rtl/t65/T65.vhd:519:9 */
  assign n474 = n396 & really_rdy;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n475 = n500 ? n468 : p;
  /*# rtl/t65/T65.vhd:577:14 */
  assign n478 = ir[4:0]; // extract
  /*# rtl/t65/T65.vhd:577:26 */
  assign n480 = n478 != 5'b10000;
  /*# rtl/t65/T65.vhd:577:43 */
  assign n482 = jump != 2'b01;
  /*# rtl/t65/T65.vhd:577:36 */
  assign n483 = n480 | n482;
  /*# rtl/t65/T65.vhd:577:64 */
  assign n484 = ~really_rdy;
  /*# rtl/t65/T65.vhd:577:50 */
  assign n485 = n483 | n484;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n486 = n501 ? IRQ_n : irq_n_o;
  /*# rtl/t65/T65.vhd:581:14 */
  assign n487 = ir[4:0]; // extract
  /*# rtl/t65/T65.vhd:581:26 */
  assign n489 = n487 != 5'b10000;
  /*# rtl/t65/T65.vhd:581:43 */
  assign n491 = jump != 2'b01;
  /*# rtl/t65/T65.vhd:581:36 */
  assign n492 = n489 | n491;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n493 = n502 ? NMI_n : nmi_n_o;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n495 = n470 & Enable;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n497 = n472 & Enable;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n499 = n474 & Enable;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n500 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n501 = n485 & Enable;
  /*# rtl/t65/T65.vhd:517:7 */
  assign n502 = n492 & Enable;
  /*# rtl/t65/T65.vhd:508:7 */
  assign n504 = SaveStateBus_load ? n374 : n383;
  /*# rtl/t65/T65.vhd:508:7 */
  assign n505 = SaveStateBus_load ? n375 : n385;
  /*# rtl/t65/T65.vhd:508:7 */
  assign n506 = SaveStateBus_load ? n376 : n387;
  /*# rtl/t65/T65.vhd:508:7 */
  assign n507 = SaveStateBus_load ? n373 : n475;
  /*# rtl/t65/T65.vhd:508:7 */
  assign n509 = SaveStateBus_load ? n377 : n486;
  /*# rtl/t65/T65.vhd:508:7 */
  assign n510 = SaveStateBus_load ? n378 : n493;
  /*# rtl/t65/T65.vhd:503:7 */
  assign n513 = n372 ? 8'b00000000 : n504;
  /*# rtl/t65/T65.vhd:180:10 */
  assign n515 = abc[15:8]; // extract
  /*# rtl/t65/T65.vhd:503:7 */
  assign n516 = n372 ? 8'b00000000 : n515;
  /*# rtl/t65/T65.vhd:503:7 */
  assign n518 = n372 ? 8'b00000000 : n505;
  /*# rtl/t65/T65.vhd:180:15 */
  assign n520 = x[15:8]; // extract
  /*# rtl/t65/T65.vhd:503:7 */
  assign n521 = n372 ? 8'b00000000 : n520;
  /*# rtl/t65/T65.vhd:503:7 */
  assign n523 = n372 ? 8'b00000000 : n506;
  /*# rtl/t65/T65.vhd:180:18 */
  assign n525 = y[15:8]; // extract
  /*# rtl/t65/T65.vhd:503:7 */
  assign n526 = n372 ? 8'b00000000 : n525;
  /*# rtl/t65/T65.vhd:503:7 */
  assign n528 = n372 ? 8'b00000000 : n507;
  /*# rtl/t65/T65.vhd:503:7 */
  assign n530 = n372 ? irq_n_o : n509;
  /*# rtl/t65/T65.vhd:503:7 */
  assign n531 = n372 ? nmi_n_o : n510;
  /*# rtl/t65/T65.vhd:588:42 */
  assign n533 = ~SO_n;
  /*# rtl/t65/T65.vhd:588:33 */
  assign n534 = n533 & so_n_o;
  /*# rtl/t65/T65.vhd:181:10 */
  assign n536 = n528[6]; // extract
  /*# rtl/t65/T65.vhd:588:17 */
  assign n537 = n534 ? 1'b1 : n536;
  /*# rtl/t65/T65.vhd:181:10 */
  assign n538 = n528[7]; // extract
  /*# rtl/t65/T65.vhd:181:10 */
  assign n539 = n528[5:0]; // extract
  /*# rtl/t65/T65.vhd:502:5 */
  assign n540 = {n516, n513};
  /*# rtl/t65/T65.vhd:502:5 */
  assign n542 = {n521, n518};
  /*# rtl/t65/T65.vhd:502:5 */
  assign n544 = {n526, n523};
  /*# rtl/t65/T65.vhd:502:5 */
  assign n546 = {n538, n537, n539};
  /*# rtl/t65/T65.vhd:614:18 */
  assign n557 = ~res_n_i;
  /*# rtl/t65/T65.vhd:615:23 */
  assign n558 = ss_3[7:0]; // extract
  /*# rtl/t65/T65.vhd:616:23 */
  assign n559 = ss_3[15:8]; // extract
  /*# rtl/t65/T65.vhd:617:23 */
  assign n560 = ss_3[23:16]; // extract
  /*# rtl/t65/T65.vhd:618:23 */
  assign n561 = ss_3[31:24]; // extract
  /*# rtl/t65/T65.vhd:619:23 */
  assign n562 = ss_3[40:32]; // extract
  /*# rtl/t65/T65.vhd:620:23 */
  assign n563 = ss_3[48:41]; // extract
  /*# rtl/t65/T65.vhd:621:23 */
  assign n564 = ss_3[56:49]; // extract
  /*# rtl/t65/T65.vhd:623:28 */
  assign n565 = ss_3[57]; // extract
  /*# rtl/t65/T65.vhd:631:28 */
  assign n567 = set_addr_to_r == 2'b00;
  /*# rtl/t65/T65.vhd:631:63 */
  assign n569 = set_addr_to_r == 2'b10;
  /*# rtl/t65/T65.vhd:631:46 */
  assign n570 = n567 | n569;
  /*# rtl/t65/T65.vhd:632:65 */
  assign n572 = DI + 8'b00000001;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n573 = n671 ? n572 : busb_r;
  /*# rtl/t65/T65.vhd:638:49 */
  assign n575 = ad + 8'b00000001;
  /*# rtl/t65/T65.vhd:639:51 */
  assign n577 = bal + 9'b000000001;
  /*# rtl/t65/T65.vhd:636:11 */
  assign n579 = baadd == 2'b01;
  /*# rtl/t65/T65.vhd:642:56 */
  assign n580 = bal[7:0]; // extract
  /*# rtl/t65/T65.vhd:642:37 */
  assign n581 = {1'b0, n580};  // uext
  /*# rtl/t65/T65.vhd:642:75 */
  assign n582 = {1'b0, busa};  // uext
  /*# rtl/t65/T65.vhd:642:73 */
  assign n583 = n581 + n582;
  /*# rtl/t65/T65.vhd:640:11 */
  assign n585 = baadd == 2'b10;
  /*# rtl/t65/T65.vhd:645:19 */
  assign n586 = bal[8]; // extract
  /*# rtl/t65/T65.vhd:648:66 */
  assign n588 = bah + 8'b00000001;
  /*# rtl/t65/T65.vhd:648:15 */
  assign n590 = baquirk == 2'b00;
  /*# rtl/t65/T65.vhd:649:66 */
  assign n592 = bah + 8'b00000001;
  /*# rtl/t65/T65.vhd:649:71 */
  assign n593 = n592 & do_r;
  /*# rtl/t65/T65.vhd:649:15 */
  assign n595 = baquirk == 2'b01;
  /*# rtl/t65/T65.vhd:650:15 */
  assign n597 = baquirk == 2'b10;
  /*# rtl/t65/T65.vhd:647:15 */
  assign n598 = {n597, n595, n590};
  /*# rtl/t65/T65.vhd:647:15 */
  always @*
    case (n598)
      3'b100: n599 = do_r;
      3'b010: n599 = n593;
      3'b001: n599 = n588;
      default: n599 = bah;
    endcase
  /*# rtl/t65/T65.vhd:645:13 */
  assign n600 = n586 ? n599 : bah;
  /*# rtl/t65/T65.vhd:643:11 */
  assign n602 = baadd == 2'b11;
  /*# rtl/t65/T65.vhd:635:11 */
  assign n603 = {n602, n585, n579};
  /*# rtl/t65/T65.vhd:635:11 */
  always @*
    case (n603)
      3'b100: n604 = ad;
      3'b010: n604 = ad;
      3'b001: n604 = n575;
      default: n604 = ad;
    endcase
  /*# rtl/t65/T65.vhd:635:11 */
  always @*
    case (n603)
      3'b100: n605 = n600;
      3'b010: n605 = bah;
      3'b001: n605 = bah;
      default: n605 = bah;
    endcase
  /*# rtl/t65/T65.vhd:635:11 */
  always @*
    case (n603)
      3'b100: n606 = bal;
      3'b010: n606 = n583;
      3'b001: n606 = n577;
      default: n606 = bal;
    endcase
  /*# rtl/t65/T65.vhd:660:63 */
  assign n607 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:660:51 */
  assign n608 = ad + n607;
  /*# rtl/t65/T65.vhd:662:63 */
  assign n609 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:662:51 */
  assign n610 = ad + n609;
  /*# rtl/t65/T65.vhd:659:13 */
  assign n611 = addy ? n608 : n610;
  /*# rtl/t65/T65.vhd:658:11 */
  assign n612 = adadd ? n611 : n604;
  /*# rtl/t65/T65.vhd:666:17 */
  assign n614 = ir == 8'b00000000;
  /*# rtl/t65/T65.vhd:671:61 */
  assign n617 = mcycle == 3'b100;
  /*# rtl/t65/T65.vhd:671:51 */
  assign n618 = n617 & nmiact;
  /*# rtl/t65/T65.vhd:671:34 */
  assign n619 = nmicycle | n618;
  /*# rtl/t65/T65.vhd:671:69 */
  assign n620 = n619 | nmi_entered;
  /*# rtl/t65/T65.vhd:673:24 */
  assign n623 = mcycle == 3'b100;
  /*# rtl/t65/T65.vhd:673:15 */
  assign n626 = n623 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:671:13 */
  assign n628 = n620 ? 3'b010 : 3'b110;
  /*# rtl/t65/T65.vhd:671:13 */
  assign n630 = n620 ? n626 : 1'b0;
  /*# rtl/t65/T65.vhd:669:13 */
  assign n631 = rstcycle ? 3'b100 : n628;
  /*# rtl/t65/T65.vhd:184:10 */
  assign n633 = n632[8:3]; // extract
  /*# rtl/t65/T65.vhd:669:13 */
  assign n635 = rstcycle ? 1'b0 : n630;
  /*# rtl/t65/T65.vhd:679:30 */
  assign n637 = set_addr_to_r == 2'b11;
  /*# rtl/t65/T65.vhd:184:10 */
  assign n639 = n631[0]; // extract
  /*# rtl/t65/T65.vhd:679:13 */
  assign n640 = n637 ? 1'b1 : n639;
  /*# rtl/t65/T65.vhd:184:10 */
  assign n641 = n631[2:1]; // extract
  /*# rtl/t65/T65.vhd:666:11 */
  assign n643 = n614 ? 8'b11111111 : n605;
  /*# rtl/t65/T65.vhd:666:11 */
  assign n644 = {n633, n641, n640};
  /*# rtl/t65/T65.vhd:666:11 */
  assign n645 = n614 ? n644 : n606;
  /*# rtl/t65/T65.vhd:666:11 */
  assign n647 = n614 ? n635 : 1'b0;
  /*# rtl/t65/T65.vhd:684:11 */
  assign n649 = lddi ? DI : dl;
  /*# rtl/t65/T65.vhd:687:11 */
  assign n650 = ldalu ? alu_q : n649;
  /*# rtl/t65/T65.vhd:690:11 */
  assign n651 = ldad ? DI : n612;
  /*# rtl/t65/T65.vhd:184:10 */
  assign n652 = n645[7:0]; // extract
  /*# rtl/t65/T65.vhd:693:11 */
  assign n653 = ldbal ? DI : n652;
  /*# rtl/t65/T65.vhd:184:10 */
  assign n654 = n645[8]; // extract
  /*# rtl/t65/T65.vhd:696:11 */
  assign n655 = ldbah ? DI : n643;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n656 = n665 ? n651 : ad;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n657 = n666 ? n650 : dl;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n658 = n667 ? n655 : bah;
  /*# rtl/t65/T65.vhd:625:9 */
  assign n659 = {n654, n653};
  /*# rtl/t65/T65.vhd:624:7 */
  assign n660 = n668 ? n659 : bal;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n661 = n669 ? busa : busa_r;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n662 = n670 ? DI : busb;
  /*# rtl/t65/T65.vhd:625:9 */
  assign n663 = n570 & really_rdy;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n664 = n672 ? n647 : nmi_entered;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n665 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n666 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n667 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n668 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n669 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n670 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n671 = n663 & Enable;
  /*# rtl/t65/T65.vhd:624:7 */
  assign n672 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n673 = SaveStateBus_load ? ad : n656;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n674 = SaveStateBus_load ? dl : n657;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n675 = SaveStateBus_load ? bah : n658;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n676 = SaveStateBus_load ? bal : n660;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n677 = SaveStateBus_load ? busa_r : n661;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n678 = SaveStateBus_load ? busb : n662;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n679 = SaveStateBus_load ? busb_r : n573;
  /*# rtl/t65/T65.vhd:622:7 */
  assign n680 = SaveStateBus_load ? n565 : n664;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n681 = n557 ? n561 : n673;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n682 = n557 ? n564 : n674;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n683 = n557 ? n563 : n675;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n684 = n557 ? n562 : n676;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n685 = n557 ? n558 : n677;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n686 = n557 ? n559 : n678;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n687 = n557 ? n560 : n679;
  /*# rtl/t65/T65.vhd:614:7 */
  assign n688 = n557 ? nmi_entered : n680;
  /*# rtl/t65/T65.vhd:704:34 */
  assign n698 = bal[8]; // extract
  /*# rtl/t65/T65.vhd:704:27 */
  assign n699 = ~n698;
  /*# rtl/t65/T65.vhd:704:23 */
  assign n700 = brkatna & n699;
  /*# rtl/t65/T65.vhd:704:64 */
  assign n701 = pcadder[8]; // extract
  /*# rtl/t65/T65.vhd:704:53 */
  assign n702 = ~n701;
  /*# rtl/t65/T65.vhd:704:49 */
  assign n703 = pcadd & n702;
  /*# rtl/t65/T65.vhd:704:39 */
  assign n704 = n700 | n703;
  /*# rtl/t65/T65.vhd:708:45 */
  assign n706 = set_busa_to == 4'b0000;
  /*# rtl/t65/T65.vhd:709:10 */
  assign n707 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:709:45 */
  assign n709 = set_busa_to == 4'b0001;
  /*# rtl/t65/T65.vhd:710:8 */
  assign n710 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:710:45 */
  assign n712 = set_busa_to == 4'b0010;
  /*# rtl/t65/T65.vhd:711:8 */
  assign n713 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:711:45 */
  assign n715 = set_busa_to == 4'b0011;
  /*# rtl/t65/T65.vhd:712:25 */
  assign n716 = s[7:0]; // extract
  /*# rtl/t65/T65.vhd:712:45 */
  assign n718 = set_busa_to == 4'b0100;
  /*# rtl/t65/T65.vhd:713:45 */
  assign n720 = set_busa_to == 4'b0101;
  /*# rtl/t65/T65.vhd:714:10 */
  assign n721 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:714:23 */
  assign n722 = n721 & DI;
  /*# rtl/t65/T65.vhd:714:45 */
  assign n724 = set_busa_to == 4'b0110;
  /*# rtl/t65/T65.vhd:715:11 */
  assign n725 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:715:24 */
  assign n727 = n725 | 8'b11101110;
  /*# rtl/t65/T65.vhd:715:34 */
  assign n728 = n727 & DI;
  /*# rtl/t65/T65.vhd:715:45 */
  assign n730 = set_busa_to == 4'b0111;
  /*# rtl/t65/T65.vhd:716:11 */
  assign n731 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:716:24 */
  assign n733 = n731 | 8'b11101110;
  /*# rtl/t65/T65.vhd:716:34 */
  assign n734 = n733 & DI;
  /*# rtl/t65/T65.vhd:716:46 */
  assign n735 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:716:41 */
  assign n736 = n734 & n735;
  /*# rtl/t65/T65.vhd:716:62 */
  assign n738 = set_busa_to == 4'b1000;
  /*# rtl/t65/T65.vhd:717:10 */
  assign n739 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:717:28 */
  assign n740 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:717:23 */
  assign n741 = n739 & n740;
  /*# rtl/t65/T65.vhd:717:45 */
  assign n743 = set_busa_to == 4'b1001;
  /*# rtl/t65/T65.vhd:718:45 */
  assign n746 = set_busa_to == 4'b1010;
  /*# rtl/t65/T65.vhd:706:3 */
  assign n747 = {n746, n743, n738, n730, n724, n720, n718, n715, n712, n709, n706};
  /*# rtl/t65/T65.vhd:706:3 */
  always @*
    case (n747)
      11'b10000000000: n749 = 8'bX;
      11'b01000000000: n749 = n741;
      11'b00100000000: n749 = n736;
      11'b00010000000: n749 = n728;
      11'b00001000000: n749 = n722;
      11'b00000100000: n749 = p;
      11'b00000010000: n749 = n716;
      11'b00000001000: n749 = n713;
      11'b00000000100: n749 = n710;
      11'b00000000010: n749 = n707;
      11'b00000000001: n749 = DI;
      default: n749 = 8'bX;
    endcase
  /*# rtl/t65/T65.vhd:722:46 */
  assign n750 = s[7:0]; // extract
  /*# rtl/t65/T65.vhd:722:26 */
  assign n752 = {16'b0000000000000001, n750};
  /*# rtl/t65/T65.vhd:722:87 */
  assign n754 = set_addr_to_r == 2'b01;
  /*# rtl/t65/T65.vhd:723:11 */
  assign n756 = {dbr, 8'b00000000};
  /*# rtl/t65/T65.vhd:723:24 */
  assign n757 = {n756, ad};
  /*# rtl/t65/T65.vhd:723:87 */
  assign n759 = set_addr_to_r == 2'b10;
  /*# rtl/t65/T65.vhd:724:18 */
  assign n761 = {8'b00000000, bah};
  /*# rtl/t65/T65.vhd:724:29 */
  assign n762 = bal[7:0]; // extract
  /*# rtl/t65/T65.vhd:724:24 */
  assign n763 = {n761, n762};
  /*# rtl/t65/T65.vhd:724:87 */
  assign n765 = set_addr_to_r == 2'b11;
  /*# rtl/t65/T65.vhd:725:32 */
  assign n766 = pc[15:8]; // extract
  /*# rtl/t65/T65.vhd:725:11 */
  assign n767 = {pbr, n766};
  /*# rtl/t65/T65.vhd:725:73 */
  assign n768 = pcadder[7:0]; // extract
  /*# rtl/t65/T65.vhd:725:47 */
  assign n769 = {n767, n768};
  /*# rtl/t65/T65.vhd:725:87 */
  assign n771 = set_addr_to_r == 2'b00;
  /*# rtl/t65/T65.vhd:720:3 */
  assign n772 = {n771, n765, n759, n754};
  /*# rtl/t65/T65.vhd:720:3 */
  always @*
    case (n772)
      4'b1000: n774 = n769;
      4'b0100: n774 = n763;
      4'b0010: n774 = n757;
      4'b0001: n774 = n752;
      default: n774 = 24'bX;
    endcase
  /*# rtl/t65/T65.vhd:728:14 */
  assign n776 = p & 8'b11101111;
  /*# rtl/t65/T65.vhd:728:44 */
  assign n777 = irqcycle | nmicycle;
  /*# rtl/t65/T65.vhd:728:25 */
  assign n778 = n777 ? n776 : p;
  /*# rtl/t65/T65.vhd:734:43 */
  assign n780 = write_data_r == 4'b0000;
  /*# rtl/t65/T65.vhd:735:10 */
  assign n781 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:735:43 */
  assign n783 = write_data_r == 4'b0001;
  /*# rtl/t65/T65.vhd:736:8 */
  assign n784 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:736:43 */
  assign n786 = write_data_r == 4'b0010;
  /*# rtl/t65/T65.vhd:737:8 */
  assign n787 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:737:43 */
  assign n789 = write_data_r == 4'b0011;
  /*# rtl/t65/T65.vhd:738:25 */
  assign n790 = s[7:0]; // extract
  /*# rtl/t65/T65.vhd:738:43 */
  assign n792 = write_data_r == 4'b0100;
  /*# rtl/t65/T65.vhd:739:43 */
  assign n794 = write_data_r == 4'b0101;
  /*# rtl/t65/T65.vhd:740:26 */
  assign n795 = pc[7:0]; // extract
  /*# rtl/t65/T65.vhd:740:43 */
  assign n797 = write_data_r == 4'b0110;
  /*# rtl/t65/T65.vhd:741:26 */
  assign n798 = pc[15:8]; // extract
  /*# rtl/t65/T65.vhd:741:43 */
  assign n800 = write_data_r == 4'b0111;
  /*# rtl/t65/T65.vhd:742:10 */
  assign n801 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:742:28 */
  assign n802 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:742:23 */
  assign n803 = n801 & n802;
  /*# rtl/t65/T65.vhd:742:43 */
  assign n805 = write_data_r == 4'b1000;
  /*# rtl/t65/T65.vhd:743:10 */
  assign n806 = abc[7:0]; // extract
  /*# rtl/t65/T65.vhd:743:28 */
  assign n807 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:743:23 */
  assign n808 = n806 & n807;
  /*# rtl/t65/T65.vhd:743:41 */
  assign n809 = n808 & busb_r;
  /*# rtl/t65/T65.vhd:743:64 */
  assign n811 = write_data_r == 4'b1001;
  /*# rtl/t65/T65.vhd:744:8 */
  assign n812 = x[7:0]; // extract
  /*# rtl/t65/T65.vhd:744:21 */
  assign n813 = n812 & busb_r;
  /*# rtl/t65/T65.vhd:744:44 */
  assign n815 = write_data_r == 4'b1010;
  /*# rtl/t65/T65.vhd:745:8 */
  assign n816 = y[7:0]; // extract
  /*# rtl/t65/T65.vhd:745:21 */
  assign n817 = n816 & busb_r;
  /*# rtl/t65/T65.vhd:745:44 */
  assign n819 = write_data_r == 4'b1011;
  /*# rtl/t65/T65.vhd:746:43 */
  assign n822 = write_data_r == 4'b1100;
  /*# rtl/t65/T65.vhd:732:3 */
  assign n823 = {n822, n819, n815, n811, n805, n800, n797, n794, n792, n789, n786, n783, n780};
  /*# rtl/t65/T65.vhd:732:3 */
  always @*
    case (n823)
      13'b1000000000000: n825 = 8'bX;
      13'b0100000000000: n825 = n817;
      13'b0010000000000: n825 = n813;
      13'b0001000000000: n825 = n809;
      13'b0000100000000: n825 = n803;
      13'b0000010000000: n825 = n798;
      13'b0000001000000: n825 = n795;
      13'b0000000100000: n825 = pwithb;
      13'b0000000010000: n825 = n790;
      13'b0000000001000: n825 = n787;
      13'b0000000000100: n825 = n784;
      13'b0000000000010: n825 = n781;
      13'b0000000000001: n825 = dl;
      default: n825 = 8'bX;
    endcase
  /*# rtl/t65/T65.vhd:762:32 */
  assign n828 = mcycle == lcycle;
  /*# rtl/t65/T65.vhd:762:51 */
  assign n829 = ~brk;
  /*# rtl/t65/T65.vhd:762:41 */
  assign n830 = n829 & n828;
  /*# rtl/t65/T65.vhd:762:19 */
  assign n831 = n830 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:767:18 */
  assign n836 = ~res_n_i;
  /*# rtl/t65/T65.vhd:768:25 */
  assign n837 = ss_2[39:37]; // extract
  /*# rtl/t65/T65.vhd:769:25 */
  assign n838 = ss_2[40]; // extract
  /*# rtl/t65/T65.vhd:770:25 */
  assign n839 = ss_2[41]; // extract
  /*# rtl/t65/T65.vhd:771:25 */
  assign n840 = ss_2[42]; // extract
  /*# rtl/t65/T65.vhd:772:25 */
  assign n841 = ss_2[43]; // extract
  /*# rtl/t65/T65.vhd:775:21 */
  assign n842 = mcycle == lcycle;
  /*# rtl/t65/T65.vhd:775:30 */
  assign n843 = n842 | brk;
  /*# rtl/t65/T65.vhd:780:35 */
  assign n845 = ir != 8'b00000000;
  /*# rtl/t65/T65.vhd:780:29 */
  assign n846 = n845 & nmiact;
  /*# rtl/t65/T65.vhd:783:27 */
  assign n847 = ~irq_n_o;
  /*# rtl/t65/T65.vhd:783:38 */
  assign n848 = p[2]; // extract
  /*# rtl/t65/T65.vhd:783:47 */
  assign n849 = ~n848;
  /*# rtl/t65/T65.vhd:783:33 */
  assign n850 = n849 & n847;
  /*# rtl/t65/T65.vhd:783:13 */
  assign n853 = n850 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:780:13 */
  assign n855 = n846 ? 1'b0 : n853;
  /*# rtl/t65/T65.vhd:780:13 */
  assign n859 = n846 ? 1'b1 : 1'b0;
  /*# rtl/t65/T65.vhd:774:9 */
  assign n862 = n879 ? 1'b0 : nmiact;
  /*# rtl/t65/T65.vhd:786:23 */
  assign n864 = mcycle != 3'b111;
  /*# rtl/t65/T65.vhd:787:57 */
  assign n866 = mcycle + 3'b001;
  /*# rtl/t65/T65.vhd:786:11 */
  assign n867 = n864 ? n866 : mcycle;
  /*# rtl/t65/T65.vhd:775:11 */
  assign n869 = n843 ? 3'b000 : n867;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n871 = n894 ? 1'b0 : rstcycle;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n872 = n895 ? n855 : irqcycle;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n873 = n896 ? n859 : nmicycle;
  /*# rtl/t65/T65.vhd:775:11 */
  assign n874 = n846 & n843;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n875 = n893 ? n869 : mcycle;
  /*# rtl/t65/T65.vhd:774:9 */
  assign n876 = n843 & really_rdy;
  /*# rtl/t65/T65.vhd:774:9 */
  assign n877 = n843 & really_rdy;
  /*# rtl/t65/T65.vhd:774:9 */
  assign n878 = n843 & really_rdy;
  /*# rtl/t65/T65.vhd:774:9 */
  assign n879 = n874 & really_rdy;
  /*# rtl/t65/T65.vhd:791:37 */
  assign n880 = ~NMI_n;
  /*# rtl/t65/T65.vhd:791:50 */
  assign n881 = ir[4:0]; // extract
  /*# rtl/t65/T65.vhd:791:62 */
  assign n883 = n881 != 5'b10000;
  /*# rtl/t65/T65.vhd:791:79 */
  assign n885 = jump != 2'b01;
  /*# rtl/t65/T65.vhd:791:72 */
  assign n886 = n883 | n885;
  /*# rtl/t65/T65.vhd:791:43 */
  assign n887 = n886 & n880;
  /*# rtl/t65/T65.vhd:791:26 */
  assign n888 = n887 & nmi_n_o;
  /*# rtl/t65/T65.vhd:791:9 */
  assign n890 = n888 ? 1'b1 : n862;
  /*# rtl/t65/T65.vhd:795:9 */
  assign n892 = nmi_entered ? 1'b0 : n890;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n893 = really_rdy & Enable;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n894 = n876 & Enable;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n895 = n877 & Enable;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n896 = n878 & Enable;
  /*# rtl/t65/T65.vhd:773:7 */
  assign n897 = Enable ? n892 : nmiact;
  /*# rtl/t65/T65.vhd:767:7 */
  assign n898 = n836 ? n837 : n875;
  /*# rtl/t65/T65.vhd:767:7 */
  assign n899 = n836 ? n838 : n871;
  /*# rtl/t65/T65.vhd:767:7 */
  assign n900 = n836 ? n839 : n872;
  /*# rtl/t65/T65.vhd:767:7 */
  assign n901 = n836 ? n840 : n873;
  /*# rtl/t65/T65.vhd:767:7 */
  assign n902 = n836 ? n841 : n897;
  /*# rtl/t65/T65.vhd:267:16 */
  assign n909 = {mf_i, ef_i, wrn_i, set_addr_to_r, write_data_r, n129, bcd_en_r, mode_r, dbr, pbr, n126, ir, pc};
  /*# rtl/t65/T65.vhd:269:16 */
  assign n910 = {20'b00000000000000000000, nmiact, nmicycle, irqcycle, rstcycle, mcycle, so_n_o, nmi_n_o, irq_n_o, n367, n366, n365, p, rdy_mod, xf_i};
  /*# rtl/t65/T65.vhd:271:16 */
  assign n911 = {6'b000000, nmi_entered, dl, bah, bal, ad, busb_r, busb, busa_r};
  /*# rtl/t65/T65.vhd:164:5 */
  assign n912 = {p, n76, n75, n74, n73, ir};
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n913 <= n540;
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n914 <= n542;
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n915 <= n544;
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n916 <= n546;
  initial
    n916 = 8'b00000000;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n917 <= n681;
  initial
    n917 = 8'b00000000;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n918 <= n682;
  initial
    n918 = 8'b00000000;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n919 <= n683;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n920 <= n684;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n921 <= n324;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n922 <= n325;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n923 <= n326;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n924 <= n328;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n925 <= n329;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n926 <= n330;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n927 <= n331;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n928 <= n332;
  /*# rtl/t65/T65.vhd:766:5 */
  always @(posedge Clk)
    n929 <= n898;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n930 <= n333;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n931 <= n334;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n932 <= n335;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n933 <= n336;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n934 <= n337;
  /*# rtl/t65/T65.vhd:766:5 */
  always @(posedge Clk)
    n935 <= n899;
  /*# rtl/t65/T65.vhd:766:5 */
  always @(posedge Clk)
    n936 <= n900;
  /*# rtl/t65/T65.vhd:766:5 */
  always @(posedge Clk)
    n937 <= n901;
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n938 <= SO_n;
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n939 <= n530;
  /*# rtl/t65/T65.vhd:502:5 */
  always @(posedge Clk)
    n940 <= n531;
  /*# rtl/t65/T65.vhd:766:5 */
  always @(posedge Clk)
    n941 <= n902;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n942 <= n685;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n943 <= n686;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n944 <= n687;
  /*# rtl/t65/T65.vhd:362:5 */
  assign n945 = Enable ? res_n_d : res_n_i;
  /*# rtl/t65/T65.vhd:362:5 */
  always @(posedge Clk or posedge n115)
    if (n115)
      n946 <= 1'b0;
    else
      n946 <= n945;
  /*# rtl/t65/T65.vhd:362:5 */
  assign n947 = Enable ? 1'b1 : res_n_d;
  /*# rtl/t65/T65.vhd:362:5 */
  always @(posedge Clk or posedge n115)
    if (n115)
      n948 <= 1'b0;
    else
      n948 <= n947;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n949 <= n338;
  /*# rtl/t65/T65.vhd:387:5 */
  always @(posedge Clk)
    n950 <= n339;
  /*# rtl/t65/T65.vhd:613:5 */
  always @(posedge Clk)
    n951 <= n688;
endmodule

