// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: IK_residual_func_cost4_wrt_pc_Nl2
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPcNl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1194

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (390)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp24 = _tmp0 * _tmp6;
  const Scalar _tmp25 = _tmp5 * _tmp8;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = _tmp23 + _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = _tmp30 - p_c(1, 0);
  const Scalar _tmp32 = std::pow(_tmp31, Scalar(2));
  const Scalar _tmp33 = _tmp19 + _tmp32;
  const Scalar _tmp34 = std::sqrt(_tmp33);
  const Scalar _tmp35 = _tmp20 * _tmp34;
  const Scalar _tmp36 = -_tmp4;
  const Scalar _tmp37 = _tmp15 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp38 - p_d(0, 0);
  const Scalar _tmp40 = -_tmp23 + _tmp27;
  const Scalar _tmp41 = _tmp22 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 - p_d(1, 0);
  const Scalar _tmp44 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp43, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = _tmp39 * _tmp44;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp34);
  const Scalar _tmp47 = _tmp29 * _tmp46;
  const Scalar _tmp48 = _tmp16 * _tmp46;
  const Scalar _tmp49 = -_tmp18 * _tmp47 + _tmp31 * _tmp48;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp51 = _tmp34 * _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp11 - _tmp14;
  const Scalar _tmp54 = _tmp4 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_b(0, 0);
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(2));
  const Scalar _tmp58 = -_tmp22;
  const Scalar _tmp59 = _tmp28 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 - p_b(1, 0);
  const Scalar _tmp62 = _tmp57 + std::pow(_tmp61, Scalar(2));
  const Scalar _tmp63 = std::pow(_tmp62, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp56 * _tmp63;
  const Scalar _tmp66 = _tmp52 * _tmp65 - _tmp54 * _tmp64 + _tmp59 * _tmp65;
  const Scalar _tmp67 = _tmp43 * _tmp44;
  const Scalar _tmp68 = _tmp31 * _tmp50;
  const Scalar _tmp69 = _tmp45 * _tmp68 - _tmp67;
  const Scalar _tmp70 = -_tmp64 + _tmp65 * _tmp68;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp69 * _tmp71;
  const Scalar _tmp73 = -_tmp37 * _tmp67 + _tmp41 * _tmp45 + _tmp45 * _tmp52 - _tmp66 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp74;
  const Scalar _tmp76 = _tmp45 * _tmp75;
  const Scalar _tmp77 = _tmp65 * _tmp72;
  const Scalar _tmp78 = _tmp40 + _tmp58;
  const Scalar _tmp79 = _tmp36 + _tmp53;
  const Scalar _tmp80 = _tmp79 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp81 = _tmp78 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp82;
  const Scalar _tmp85 = fh1 * (-_tmp78 * _tmp83 + _tmp79 * _tmp84);
  const Scalar _tmp86 = _tmp85 * (-_tmp75 * _tmp77 + _tmp76);
  const Scalar _tmp87 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp88 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp89 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp90 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp91 = _tmp89 + _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp91;
  const Scalar _tmp93 = _tmp45 * _tmp92;
  const Scalar _tmp94 = -_tmp88;
  const Scalar _tmp95 = _tmp91 + _tmp94;
  const Scalar _tmp96 = _tmp89 - _tmp90;
  const Scalar _tmp97 = _tmp88 + _tmp96;
  const Scalar _tmp98 = _tmp65 * _tmp92;
  const Scalar _tmp99 = -_tmp65 * _tmp97 + _tmp98;
  const Scalar _tmp100 = _tmp50 * _tmp92;
  const Scalar _tmp101 = _tmp100 * _tmp31;
  const Scalar _tmp102 = -_tmp101 * _tmp65 + _tmp64 * _tmp97;
  const Scalar _tmp103 = -_tmp101 * _tmp45 - _tmp102 * _tmp72 + _tmp67 * _tmp95;
  const Scalar _tmp104 = Scalar(1.0) * _tmp29;
  const Scalar _tmp105 = -_tmp104;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105 + _tmp59);
  const Scalar _tmp107 = Scalar(1.0) * _tmp16;
  const Scalar _tmp108 = _tmp106 * (_tmp107 - _tmp54);
  const Scalar _tmp109 = -_tmp103 * _tmp108 - _tmp45 * _tmp95 - _tmp72 * _tmp99 + _tmp93;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp111 = _tmp104 * _tmp108 + _tmp107;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp45;
  const Scalar _tmp115 = _tmp65 * _tmp71;
  const Scalar _tmp116 = _tmp110 * _tmp69;
  const Scalar _tmp117 = _tmp112 * _tmp116;
  const Scalar _tmp118 = _tmp87 * (_tmp114 - _tmp115 * _tmp117);
  const Scalar _tmp119 = _tmp68 * _tmp71;
  const Scalar _tmp120 = _tmp101 + _tmp102 * _tmp119;
  const Scalar _tmp121 = -_tmp108 * _tmp120 + _tmp119 * _tmp99 - _tmp92;
  const Scalar _tmp122 = _tmp110 * _tmp73;
  const Scalar _tmp123 = _tmp119 * _tmp66 - _tmp121 * _tmp122 - _tmp52;
  const Scalar _tmp124 = _tmp109 * _tmp74;
  const Scalar _tmp125 = _tmp123 * _tmp124;
  const Scalar _tmp126 = _tmp121 + _tmp125;
  const Scalar _tmp127 = -_tmp116 * _tmp126 - _tmp68;
  const Scalar _tmp128 = _tmp110 * _tmp126;
  const Scalar _tmp129 = _tmp128 * _tmp45;
  const Scalar _tmp130 = _tmp83 * fh1;
  const Scalar _tmp131 = _tmp130 * (_tmp115 * _tmp127 + _tmp129 + Scalar(1.0));
  const Scalar _tmp132 = _tmp131 * _tmp46;
  const Scalar _tmp133 = Scalar(1.0) * _tmp71;
  const Scalar _tmp134 = _tmp102 * _tmp133;
  const Scalar _tmp135 = _tmp108 * _tmp134 - _tmp133 * _tmp99;
  const Scalar _tmp136 = -_tmp122 * _tmp135 - _tmp133 * _tmp66;
  const Scalar _tmp137 = _tmp136 * _tmp74;
  const Scalar _tmp138 = _tmp109 * _tmp137;
  const Scalar _tmp139 = _tmp135 + _tmp138;
  const Scalar _tmp140 = -_tmp116 * _tmp139 + Scalar(1.0);
  const Scalar _tmp141 = _tmp110 * _tmp139;
  const Scalar _tmp142 = _tmp141 * _tmp45;
  const Scalar _tmp143 = _tmp84 * fh1;
  const Scalar _tmp144 = _tmp143 * (_tmp115 * _tmp140 + _tmp142);
  const Scalar _tmp145 = _tmp144 * _tmp46;
  const Scalar _tmp146 = _tmp46 * _tmp86;
  const Scalar _tmp147 = _tmp35 * _tmp49;
  const Scalar _tmp148 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp149 = _tmp20 * _tmp31;
  const Scalar _tmp150 = _tmp148 * _tmp149;
  const Scalar _tmp151 = _tmp150 * _tmp65;
  const Scalar _tmp152 = _tmp151 * _tmp66;
  const Scalar _tmp153 = std::pow(_tmp33, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp154 = _tmp153 * _tmp29;
  const Scalar _tmp155 = _tmp153 * _tmp16;
  const Scalar _tmp156 = _tmp18 * _tmp31;
  const Scalar _tmp157 = _tmp51 * (-_tmp154 * _tmp19 + _tmp155 * _tmp156 + _tmp47);
  const Scalar _tmp158 = _tmp46 * _tmp49;
  const Scalar _tmp159 = _tmp147 * _tmp65 + _tmp157 * _tmp65 - _tmp158 * _tmp65;
  const Scalar _tmp160 = _tmp149 * _tmp71;
  const Scalar _tmp161 = _tmp160 * _tmp66;
  const Scalar _tmp162 = _tmp147 * _tmp45 + _tmp152 * _tmp69 + _tmp157 * _tmp45 - _tmp158 * _tmp45 -
                         _tmp159 * _tmp72 - _tmp161 * _tmp45;
  const Scalar _tmp163 = std::pow(_tmp73, Scalar(-2));
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = _tmp109 * _tmp136;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = _tmp160 * _tmp99;
  const Scalar _tmp168 = _tmp151 * _tmp99;
  const Scalar _tmp169 = _tmp102 * _tmp65;
  const Scalar _tmp170 = _tmp150 * _tmp169;
  const Scalar _tmp171 = _tmp149 * _tmp98;
  const Scalar _tmp172 = _tmp102 * _tmp160;
  const Scalar _tmp173 = -_tmp149 * _tmp93 + _tmp170 * _tmp69 + _tmp171 * _tmp72 - _tmp172 * _tmp45;
  const Scalar _tmp174 = -_tmp108 * _tmp173 - _tmp167 * _tmp45 + _tmp168 * _tmp69;
  const Scalar _tmp175 = std::pow(_tmp109, Scalar(-2));
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = _tmp135 * _tmp73;
  const Scalar _tmp178 = Scalar(1.0) * _tmp170;
  const Scalar _tmp179 = _tmp133 * _tmp171;
  const Scalar _tmp180 = -_tmp108 * _tmp178 - _tmp108 * _tmp179 + Scalar(1.0) * _tmp168;
  const Scalar _tmp181 = _tmp110 * _tmp135;
  const Scalar _tmp182 = _tmp124 * (-_tmp122 * _tmp180 - _tmp133 * _tmp159 + Scalar(1.0) * _tmp152 -
                                    _tmp162 * _tmp181 + _tmp176 * _tmp177);
  const Scalar _tmp183 = _tmp137 * _tmp174;
  const Scalar _tmp184 = -_tmp166 + _tmp180 + _tmp182 + _tmp183;
  const Scalar _tmp185 = _tmp110 * _tmp45;
  const Scalar _tmp186 = _tmp57 / _tmp62;
  const Scalar _tmp187 = _tmp150 * _tmp186;
  const Scalar _tmp188 = _tmp139 * _tmp176;
  const Scalar _tmp189 = -_tmp116 * _tmp184 - _tmp142 * _tmp149 + _tmp188 * _tmp69;
  const Scalar _tmp190 = _tmp143 * _tmp51;
  const Scalar _tmp191 = _tmp133 * _tmp69;
  const Scalar _tmp192 = _tmp164 * _tmp191;
  const Scalar _tmp193 = _tmp69 * _tmp75;
  const Scalar _tmp194 = Scalar(1.0) * _tmp45;
  const Scalar _tmp195 = _tmp160 * _tmp65;
  const Scalar _tmp196 = _tmp51 * _tmp85;
  const Scalar _tmp197 = _tmp110 * _tmp121;
  const Scalar _tmp198 = _tmp121 * _tmp73;
  const Scalar _tmp199 = _tmp32 / [&]() {
    const Scalar base = _tmp18;
    return base * base * base;
  }();
  const Scalar _tmp200 = _tmp148 * _tmp199;
  const Scalar _tmp201 = _tmp200 * _tmp65;
  const Scalar _tmp202 = _tmp149 * _tmp92 - _tmp169 * _tmp200 + _tmp172 - _tmp199 * _tmp71 * _tmp98;
  const Scalar _tmp203 = -_tmp108 * _tmp202 + _tmp167 - _tmp201 * _tmp99;
  const Scalar _tmp204 =
      _tmp124 * (_tmp119 * _tmp159 - _tmp122 * _tmp203 - _tmp147 - _tmp157 + _tmp158 + _tmp161 -
                 _tmp162 * _tmp197 + _tmp176 * _tmp198 - _tmp201 * _tmp66);
  const Scalar _tmp205 = _tmp109 * _tmp123;
  const Scalar _tmp206 = _tmp164 * _tmp205;
  const Scalar _tmp207 = _tmp123 * _tmp74;
  const Scalar _tmp208 = _tmp174 * _tmp207;
  const Scalar _tmp209 = _tmp203 + _tmp204 - _tmp206 + _tmp208;
  const Scalar _tmp210 = _tmp126 * _tmp69;
  const Scalar _tmp211 = -_tmp116 * _tmp209 - _tmp129 * _tmp149 - _tmp149 + _tmp176 * _tmp210;
  const Scalar _tmp212 = _tmp126 * _tmp45;
  const Scalar _tmp213 = _tmp127 * _tmp186;
  const Scalar _tmp214 = _tmp130 * _tmp51;
  const Scalar _tmp215 = _tmp118 * _tmp46;
  const Scalar _tmp216 = _tmp112 * _tmp77;
  const Scalar _tmp217 = _tmp112 * _tmp45;
  const Scalar _tmp218 = _tmp51 * _tmp87;
  const Scalar _tmp219 =
      -_tmp118 * _tmp35 - _tmp131 * _tmp35 + _tmp132 - _tmp144 * _tmp35 + _tmp145 + _tmp146 -
      _tmp190 * (_tmp115 * _tmp189 - _tmp140 * _tmp187 + _tmp184 * _tmp185 - _tmp188 * _tmp45) -
      _tmp196 * (-_tmp164 * _tmp194 + _tmp187 * _tmp193 + _tmp192 * _tmp65 - _tmp195 * _tmp76) -
      _tmp214 * (_tmp115 * _tmp211 - _tmp150 * _tmp213 - _tmp176 * _tmp212 + _tmp185 * _tmp209) +
      _tmp215 -
      _tmp218 * (-_tmp114 * _tmp195 + _tmp117 * _tmp187 + _tmp176 * _tmp216 - _tmp176 * _tmp217) -
      _tmp35 * _tmp86;
  const Scalar _tmp220 = -_tmp118 * _tmp51 - _tmp131 * _tmp51 - _tmp144 * _tmp51 - _tmp51 * _tmp86;
  const Scalar _tmp221 = std::pow(_tmp220, Scalar(-2));
  const Scalar _tmp222 = -_tmp30 + p_c(1, 0);
  const Scalar _tmp223 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp224 =
      std::sqrt(Scalar(std::pow(_tmp222, Scalar(2)) + std::pow(_tmp223, Scalar(2))));
  const Scalar _tmp225 = Scalar(1.0) / (_tmp220);
  const Scalar _tmp226 = fh1 * (_tmp94 + _tmp96);
  const Scalar _tmp227 = Scalar(40.024799999999999) * _tmp10 + _tmp226 * _tmp83 + _tmp79 * fv1;
  const Scalar _tmp228 = _tmp105 + _tmp41;
  const Scalar _tmp229 = _tmp108 * _tmp228;
  const Scalar _tmp230 = Scalar(1.0) / (_tmp107 - _tmp229 - _tmp37);
  const Scalar _tmp231 = Scalar(1.0) * _tmp230;
  const Scalar _tmp232 = _tmp228 * _tmp231;
  const Scalar _tmp233 = _tmp103 * _tmp110;
  const Scalar _tmp234 = _tmp111 * _tmp230;
  const Scalar _tmp235 = _tmp105 - _tmp112 * _tmp233 - _tmp228 * _tmp234;
  const Scalar _tmp236 = Scalar(1.0) * _tmp106;
  const Scalar _tmp237 = Scalar(1.0) * _tmp87;
  const Scalar _tmp238 = _tmp228 * _tmp230;
  const Scalar _tmp239 = -_tmp134 + _tmp138 * _tmp238 - _tmp139 * _tmp233;
  const Scalar _tmp240 = Scalar(1.0) * _tmp143;
  const Scalar _tmp241 = -_tmp226 * _tmp84 - Scalar(40.024799999999999) * _tmp26 - _tmp78 * fv1;
  const Scalar _tmp242 = _tmp108 * _tmp231;
  const Scalar _tmp243 = _tmp229 * _tmp231 + Scalar(1.0);
  const Scalar _tmp244 = _tmp120 + _tmp125 * _tmp238 - _tmp126 * _tmp233;
  const Scalar _tmp245 = Scalar(1.0) * _tmp130;
  const Scalar _tmp246 = -_tmp103 * _tmp75 + _tmp124 * _tmp232;
  const Scalar _tmp247 = _tmp124 * _tmp231;
  const Scalar _tmp248 = Scalar(1.0) * _tmp85;
  const Scalar _tmp249 = Scalar(1.0) * _tmp227 * (_tmp106 * _tmp232 - _tmp231) +
                         _tmp237 * (-_tmp111 * _tmp231 - _tmp235 * _tmp236 + Scalar(1.0)) +
                         _tmp240 * (_tmp138 * _tmp231 - _tmp236 * _tmp239) +
                         Scalar(1.0) * _tmp241 * (-_tmp236 * _tmp243 + _tmp242) +
                         _tmp245 * (_tmp125 * _tmp231 - _tmp236 * _tmp244) +
                         _tmp248 * (-_tmp236 * _tmp246 + _tmp247);
  const Scalar _tmp250 = std::asinh(_tmp225 * _tmp249);
  const Scalar _tmp251 = Scalar(1.4083112389913199) * _tmp250;
  const Scalar _tmp252 = -_tmp220 * _tmp251 - _tmp224;
  const Scalar _tmp253 = Scalar(0.71007031138673404) * _tmp221 * _tmp252;
  const Scalar _tmp254 = Scalar(1.4083112389913199) * _tmp220;
  const Scalar _tmp255 =
      std::pow(Scalar(_tmp221 * std::pow(_tmp249, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp256 = _tmp221 * _tmp249;
  const Scalar _tmp257 = _tmp231 * _tmp74;
  const Scalar _tmp258 = _tmp174 * _tmp257;
  const Scalar _tmp259 = _tmp109 * _tmp231;
  const Scalar _tmp260 = _tmp164 * _tmp259;
  const Scalar _tmp261 = _tmp109 * _tmp232;
  const Scalar _tmp262 = Scalar(1.0) * _tmp103;
  const Scalar _tmp263 =
      -_tmp164 * _tmp261 + _tmp164 * _tmp262 - _tmp173 * _tmp75 + _tmp228 * _tmp258;
  const Scalar _tmp264 = _tmp103 * _tmp176;
  const Scalar _tmp265 = _tmp139 * _tmp264 - _tmp141 * _tmp173 - _tmp166 * _tmp238 + _tmp178 +
                         _tmp179 + _tmp182 * _tmp238 + _tmp183 * _tmp238 - _tmp184 * _tmp233;
  const Scalar _tmp266 = _tmp112 * _tmp264 - _tmp113 * _tmp173;
  const Scalar _tmp267 = _tmp106 * _tmp237;
  const Scalar _tmp268 = _tmp126 * _tmp264 - _tmp128 * _tmp173 + _tmp202 + _tmp204 * _tmp238 -
                         _tmp206 * _tmp238 + _tmp208 * _tmp238 - _tmp209 * _tmp233;
  const Scalar _tmp269 = _tmp255 * (-_tmp219 * _tmp256 +
                                    _tmp225 * (_tmp240 * (-_tmp166 * _tmp231 + _tmp182 * _tmp231 +
                                                          _tmp183 * _tmp231 - _tmp236 * _tmp265) +
                                               _tmp245 * (_tmp204 * _tmp231 - _tmp206 * _tmp231 +
                                                          _tmp208 * _tmp231 - _tmp236 * _tmp268) +
                                               _tmp248 * (-_tmp236 * _tmp263 + _tmp258 - _tmp260) -
                                               _tmp266 * _tmp267));
  const Scalar _tmp270 = Scalar(1.0) / (_tmp224);
  const Scalar _tmp271 = Scalar(0.71007031138673404) * _tmp225;
  const Scalar _tmp272 = _tmp252 * _tmp271;
  const Scalar _tmp273 = std::cosh(_tmp272);
  const Scalar _tmp274 = Scalar(1.0) * _tmp250;
  const Scalar _tmp275 = Scalar(1.0) * std::cosh(_tmp274);
  const Scalar _tmp276 = -std::sinh(_tmp272) - std::sinh(_tmp274);
  const Scalar _tmp277 = _tmp112 * _tmp87;
  const Scalar _tmp278 = _tmp116 * _tmp277;
  const Scalar _tmp279 = _tmp130 * _tmp71;
  const Scalar _tmp280 = _tmp127 * _tmp130;
  const Scalar _tmp281 = _tmp113 * _tmp87;
  const Scalar _tmp282 = _tmp160 * _tmp45;
  const Scalar _tmp283 = _tmp75 * _tmp85;
  const Scalar _tmp284 = _tmp143 * _tmp71;
  const Scalar _tmp285 = _tmp176 * _tmp277;
  const Scalar _tmp286 = -_tmp140 * _tmp143 * _tmp151 + _tmp151 * _tmp278 - _tmp151 * _tmp280 +
                         _tmp151 * _tmp283 * _tmp69 + _tmp189 * _tmp284 + _tmp192 * _tmp85 +
                         _tmp211 * _tmp279 - _tmp281 * _tmp282 - _tmp282 * _tmp283 +
                         _tmp285 * _tmp72;
  const Scalar _tmp287 = _tmp106 * _tmp143;
  const Scalar _tmp288 = _tmp106 * _tmp87;
  const Scalar _tmp289 = _tmp106 * _tmp85;
  const Scalar _tmp290 = _tmp227 * _tmp231;
  const Scalar _tmp291 = _tmp106 * _tmp130;
  const Scalar _tmp292 = -_tmp106 * _tmp228 * _tmp290 + _tmp106 * _tmp241 * _tmp243 +
                         _tmp235 * _tmp288 + _tmp239 * _tmp287 + _tmp244 * _tmp291 +
                         _tmp246 * _tmp289;
  const Scalar _tmp293 =
      _tmp127 * _tmp279 + _tmp140 * _tmp284 - _tmp278 * _tmp71 - _tmp283 * _tmp72;
  const Scalar _tmp294 = std::pow(_tmp293, Scalar(-2));
  const Scalar _tmp295 = _tmp292 * _tmp294;
  const Scalar _tmp296 = Scalar(1.0) / (_tmp293);
  const Scalar _tmp297 = -_tmp286 * _tmp295 + _tmp296 * (_tmp263 * _tmp289 + _tmp265 * _tmp287 +
                                                         _tmp266 * _tmp288 + _tmp268 * _tmp291);
  const Scalar _tmp298 =
      std::pow(Scalar(std::pow(_tmp292, Scalar(2)) * _tmp294 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp299 = std::asinh(_tmp292 * _tmp296);
  const Scalar _tmp300 = Scalar(1.0) * _tmp299;
  const Scalar _tmp301 = Scalar(1.0) * _tmp298 * std::cosh(_tmp300);
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp299;
  const Scalar _tmp303 =
      -_tmp293 * _tmp302 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp60 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp296;
  const Scalar _tmp305 = _tmp303 * _tmp304;
  const Scalar _tmp306 = std::cosh(_tmp305);
  const Scalar _tmp307 = Scalar(1.4083112389913199) * _tmp293;
  const Scalar _tmp308 = _tmp298 * _tmp307;
  const Scalar _tmp309 = Scalar(0.71007031138673404) * _tmp294 * _tmp303;
  const Scalar _tmp310 = -Scalar(1.4083112389913199) * std::sinh(_tmp300) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp305);
  const Scalar _tmp311 = _tmp110 * _tmp130;
  const Scalar _tmp312 = _tmp126 * _tmp130;
  const Scalar _tmp313 = _tmp110 * _tmp143;
  const Scalar _tmp314 = -_tmp143 * _tmp188 - _tmp164 * _tmp248 - _tmp176 * _tmp312 +
                         _tmp184 * _tmp313 + _tmp209 * _tmp311 - _tmp285;
  const Scalar _tmp315 = _tmp128 * _tmp130 + _tmp141 * _tmp143 + _tmp281 + _tmp283;
  const Scalar _tmp316 = std::pow(_tmp315, Scalar(-2));
  const Scalar _tmp317 = _tmp143 * _tmp230;
  const Scalar _tmp318 = _tmp130 * _tmp230;
  const Scalar _tmp319 = -_tmp125 * _tmp318 - _tmp138 * _tmp317 + _tmp234 * _tmp87 -
                         _tmp241 * _tmp242 - _tmp247 * _tmp85 + _tmp290;
  const Scalar _tmp320 = _tmp316 * _tmp319;
  const Scalar _tmp321 = Scalar(1.0) / (_tmp315);
  const Scalar _tmp322 =
      -_tmp314 * _tmp320 +
      _tmp321 * (_tmp166 * _tmp317 - _tmp182 * _tmp317 - _tmp183 * _tmp317 - _tmp204 * _tmp318 +
                 _tmp206 * _tmp318 - _tmp208 * _tmp318 - _tmp258 * _tmp85 + _tmp260 * _tmp85);
  const Scalar _tmp323 =
      std::pow(Scalar(_tmp316 * std::pow(_tmp319, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp324 = std::asinh(_tmp319 * _tmp321);
  const Scalar _tmp325 = Scalar(1.0) * _tmp324;
  const Scalar _tmp326 = Scalar(1.0) * _tmp323 * std::cosh(_tmp325);
  const Scalar _tmp327 = Scalar(1.4083112389913199) * _tmp315;
  const Scalar _tmp328 =
      -_tmp324 * _tmp327 - std::sqrt(Scalar(std::pow(Scalar(-_tmp38 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp42 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp329 = Scalar(0.71007031138673404) * _tmp321;
  const Scalar _tmp330 = _tmp328 * _tmp329;
  const Scalar _tmp331 = std::cosh(_tmp330);
  const Scalar _tmp332 = Scalar(1.4083112389913199) * _tmp314;
  const Scalar _tmp333 = _tmp323 * _tmp327;
  const Scalar _tmp334 = Scalar(0.71007031138673404) * _tmp316 * _tmp328;
  const Scalar _tmp335 = -std::sinh(_tmp325) - std::sinh(_tmp330);
  const Scalar _tmp336 = _tmp50 * _tmp71;
  const Scalar _tmp337 = _tmp336 * _tmp99;
  const Scalar _tmp338 = _tmp148 * _tmp50;
  const Scalar _tmp339 = _tmp338 * _tmp65;
  const Scalar _tmp340 = _tmp339 * _tmp69;
  const Scalar _tmp341 = _tmp102 * _tmp336;
  const Scalar _tmp342 = _tmp100 * _tmp65;
  const Scalar _tmp343 = _tmp100 * _tmp45 - _tmp102 * _tmp340 + _tmp341 * _tmp45 - _tmp342 * _tmp72;
  const Scalar _tmp344 = -_tmp108 * _tmp343 + _tmp337 * _tmp45 - _tmp340 * _tmp99;
  const Scalar _tmp345 = _tmp175 * _tmp344;
  const Scalar _tmp346 = _tmp186 * _tmp338;
  const Scalar _tmp347 = _tmp336 * _tmp65;
  const Scalar _tmp348 = _tmp207 * _tmp344;
  const Scalar _tmp349 = _tmp158 * _tmp68;
  const Scalar _tmp350 = _tmp51 * (-_tmp154 * _tmp156 + _tmp155 * _tmp32 - _tmp48);
  const Scalar _tmp351 = -_tmp349 * _tmp65 + _tmp350 * _tmp65;
  const Scalar _tmp352 = _tmp336 * _tmp66;
  const Scalar _tmp353 =
      -_tmp340 * _tmp66 - _tmp349 * _tmp45 + _tmp350 * _tmp45 - _tmp351 * _tmp72 + _tmp352 * _tmp45;
  const Scalar _tmp354 = -_tmp100 + _tmp160 * _tmp98 + _tmp170 - _tmp341;
  const Scalar _tmp355 = -_tmp108 * _tmp354 + _tmp168 - _tmp337;
  const Scalar _tmp356 =
      _tmp124 * (_tmp119 * _tmp351 - _tmp122 * _tmp355 + _tmp152 - _tmp197 * _tmp353 +
                 _tmp198 * _tmp345 + _tmp349 - _tmp350 - _tmp352);
  const Scalar _tmp357 = _tmp163 * _tmp353;
  const Scalar _tmp358 = _tmp205 * _tmp357;
  const Scalar _tmp359 = _tmp348 + _tmp355 + _tmp356 - _tmp358;
  const Scalar _tmp360 = -_tmp116 * _tmp359 + _tmp129 * _tmp50 + _tmp210 * _tmp345 + _tmp50;
  const Scalar _tmp361 = _tmp137 * _tmp344;
  const Scalar _tmp362 = Scalar(1.0) * _tmp339;
  const Scalar _tmp363 = _tmp102 * _tmp362;
  const Scalar _tmp364 = _tmp133 * _tmp342;
  const Scalar _tmp365 = _tmp108 * _tmp363 + _tmp108 * _tmp364 - _tmp362 * _tmp99;
  const Scalar _tmp366 = _tmp124 * (-_tmp122 * _tmp365 - _tmp133 * _tmp351 + _tmp177 * _tmp345 -
                                    _tmp181 * _tmp353 - _tmp362 * _tmp66);
  const Scalar _tmp367 = _tmp165 * _tmp357;
  const Scalar _tmp368 = _tmp361 + _tmp365 + _tmp366 - _tmp367;
  const Scalar _tmp369 = _tmp139 * _tmp345;
  const Scalar _tmp370 = -_tmp116 * _tmp368 + _tmp142 * _tmp50 + _tmp369 * _tmp69;
  const Scalar _tmp371 = _tmp140 * _tmp338;
  const Scalar _tmp372 = _tmp191 * _tmp357;
  const Scalar _tmp373 =
      _tmp132 * _tmp68 + _tmp145 * _tmp68 + _tmp146 * _tmp68 -
      _tmp190 * (_tmp115 * _tmp370 + _tmp185 * _tmp368 + _tmp186 * _tmp371 - _tmp369 * _tmp45) -
      _tmp196 * (-_tmp193 * _tmp346 - _tmp194 * _tmp357 + _tmp347 * _tmp76 + _tmp372 * _tmp65) -
      _tmp214 * (_tmp115 * _tmp360 + _tmp185 * _tmp359 - _tmp212 * _tmp345 + _tmp213 * _tmp338) +
      _tmp215 * _tmp68 -
      _tmp218 * (_tmp114 * _tmp347 - _tmp117 * _tmp346 + _tmp216 * _tmp345 - _tmp217 * _tmp345);
  const Scalar _tmp374 = _tmp103 * _tmp369 - _tmp141 * _tmp343 - _tmp233 * _tmp368 +
                         _tmp238 * _tmp361 + _tmp238 * _tmp366 - _tmp238 * _tmp367 - _tmp363 -
                         _tmp364;
  const Scalar _tmp375 = _tmp103 * _tmp345;
  const Scalar _tmp376 = _tmp112 * _tmp375 - _tmp113 * _tmp343;
  const Scalar _tmp377 = _tmp126 * _tmp375 - _tmp128 * _tmp343 - _tmp233 * _tmp359 +
                         _tmp238 * _tmp348 + _tmp238 * _tmp356 - _tmp238 * _tmp358 + _tmp354;
  const Scalar _tmp378 = _tmp257 * _tmp344;
  const Scalar _tmp379 =
      _tmp228 * _tmp378 - _tmp261 * _tmp357 + _tmp262 * _tmp357 - _tmp343 * _tmp75;
  const Scalar _tmp380 = _tmp259 * _tmp357;
  const Scalar _tmp381 = _tmp255 * (_tmp225 * (_tmp240 * (_tmp231 * _tmp361 + _tmp231 * _tmp366 -
                                                          _tmp231 * _tmp367 - _tmp236 * _tmp374) +
                                               _tmp245 * (_tmp231 * _tmp348 + _tmp231 * _tmp356 -
                                                          _tmp231 * _tmp358 - _tmp236 * _tmp377) +
                                               _tmp248 * (-_tmp236 * _tmp379 + _tmp378 - _tmp380) -
                                               _tmp267 * _tmp376) -
                                    _tmp256 * _tmp373);
  const Scalar _tmp382 = Scalar(1.4083112389913199) * _tmp373;
  const Scalar _tmp383 = _tmp336 * _tmp45;
  const Scalar _tmp384 = _tmp277 * _tmp345;
  const Scalar _tmp385 = _tmp143 * _tmp371 * _tmp65 - _tmp278 * _tmp339 + _tmp279 * _tmp360 +
                         _tmp280 * _tmp339 + _tmp281 * _tmp383 - _tmp283 * _tmp340 +
                         _tmp283 * _tmp383 + _tmp284 * _tmp370 + _tmp372 * _tmp85 +
                         _tmp384 * _tmp72;
  const Scalar _tmp386 = -_tmp295 * _tmp385 + _tmp296 * (_tmp287 * _tmp374 + _tmp288 * _tmp376 +
                                                         _tmp289 * _tmp379 + _tmp291 * _tmp377);
  const Scalar _tmp387 = -_tmp143 * _tmp369 - _tmp248 * _tmp357 + _tmp311 * _tmp359 -
                         _tmp312 * _tmp345 + _tmp313 * _tmp368 - _tmp384;
  const Scalar _tmp388 = Scalar(1.4083112389913199) * _tmp387;
  const Scalar _tmp389 =
      -_tmp320 * _tmp387 +
      _tmp321 * (-_tmp317 * _tmp361 - _tmp317 * _tmp366 + _tmp317 * _tmp367 - _tmp318 * _tmp348 -
                 _tmp318 * _tmp356 + _tmp318 * _tmp358 - _tmp378 * _tmp85 + _tmp380 * _tmp85);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      Scalar(1.4083112389913199) * _tmp219 * _tmp276 +
      _tmp254 * (-_tmp269 * _tmp275 -
                 _tmp273 * (-_tmp219 * _tmp253 + _tmp271 * (-_tmp219 * _tmp251 - _tmp223 * _tmp270 -
                                                            _tmp254 * _tmp269)));
  _res(2, 0) =
      _tmp286 * _tmp310 +
      _tmp307 *
          (-_tmp297 * _tmp301 -
           _tmp306 * (-_tmp286 * _tmp309 + _tmp304 * (-_tmp286 * _tmp302 - _tmp297 * _tmp308)));
  _res(3, 0) =
      _tmp327 *
          (-_tmp322 * _tmp326 -
           _tmp331 * (-_tmp314 * _tmp334 + _tmp329 * (-_tmp322 * _tmp333 - _tmp324 * _tmp332))) +
      _tmp332 * _tmp335;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp254 *
          (-_tmp273 * (-_tmp253 * _tmp373 +
                       _tmp271 * (-_tmp222 * _tmp270 - _tmp250 * _tmp382 - _tmp254 * _tmp381)) -
           _tmp275 * _tmp381) +
      _tmp276 * _tmp382;
  _res(2, 1) =
      _tmp307 *
          (-_tmp301 * _tmp386 -
           _tmp306 * (_tmp304 * (-_tmp302 * _tmp385 - _tmp308 * _tmp386) - _tmp309 * _tmp385)) +
      _tmp310 * _tmp385;
  _res(3, 1) =
      _tmp327 *
          (-_tmp326 * _tmp389 -
           _tmp331 * (_tmp329 * (-_tmp324 * _tmp388 - _tmp333 * _tmp389) - _tmp334 * _tmp387)) +
      _tmp335 * _tmp388;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym