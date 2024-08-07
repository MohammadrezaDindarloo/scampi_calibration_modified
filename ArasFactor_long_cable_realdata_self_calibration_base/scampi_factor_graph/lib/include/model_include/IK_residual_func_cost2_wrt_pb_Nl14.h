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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl14
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1213

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (394)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp2 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = _tmp0 * _tmp6;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_b(0, 0);
  const Scalar _tmp19 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp20 = _tmp5 * _tmp8;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = -_tmp27 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp32 = _tmp19 - _tmp20;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp32;
  const Scalar _tmp34 = _tmp31 + _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = -_tmp36 + p_b(1, 0);
  const Scalar _tmp38 = std::pow(_tmp18, Scalar(2)) + std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 =
      std::pow(Scalar(std::pow(_tmp28, Scalar(2)) + _tmp38), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = std::sqrt(_tmp38);
  const Scalar _tmp41 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp42 = Scalar(1.0) * _tmp16;
  const Scalar _tmp43 = Scalar(1.0) * _tmp35;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = -_tmp31 + _tmp33;
  const Scalar _tmp46 = _tmp30 + _tmp45;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp44 + _tmp46);
  const Scalar _tmp48 = -_tmp4;
  const Scalar _tmp49 = _tmp15 + _tmp48;
  const Scalar _tmp50 = _tmp42 - _tmp49;
  const Scalar _tmp51 = _tmp47 * _tmp50;
  const Scalar _tmp52 = _tmp42 + _tmp43 * _tmp51;
  const Scalar _tmp53 = _tmp11 + _tmp14;
  const Scalar _tmp54 = _tmp48 + _tmp53;
  const Scalar _tmp55 = _tmp29 + _tmp45;
  const Scalar _tmp56 = _tmp44 + _tmp55;
  const Scalar _tmp57 = _tmp51 * _tmp56;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp42 - _tmp54 - _tmp57);
  const Scalar _tmp59 = Scalar(1.0) * _tmp58;
  const Scalar _tmp60 = _tmp52 * _tmp58;
  const Scalar _tmp61 = 0;
  const Scalar _tmp62 = _tmp24 - _tmp25;
  const Scalar _tmp63 = _tmp21 + _tmp62;
  const Scalar _tmp64 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_d(0, 0);
  const Scalar _tmp66 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp67 = _tmp66 - p_d(1, 0);
  const Scalar _tmp68 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp67, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp27 * _tmp69;
  const Scalar _tmp71 = _tmp67 * _tmp68;
  const Scalar _tmp72 = _tmp17 - p_b(0, 0);
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _tmp36 - p_b(1, 0);
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_a(0, 0);
  const Scalar _tmp78 = std::pow(_tmp77, Scalar(2));
  const Scalar _tmp79 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_a(1, 0);
  const Scalar _tmp81 = _tmp78 + std::pow(_tmp80, Scalar(2));
  const Scalar _tmp82 = std::pow(_tmp81, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp77 * _tmp82;
  const Scalar _tmp84 = _tmp27 * _tmp83;
  const Scalar _tmp85 = _tmp22 + _tmp62;
  const Scalar _tmp86 = _tmp80 * _tmp82;
  const Scalar _tmp87 = -_tmp75 * _tmp84 + _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp69 * _tmp75 - _tmp71;
  const Scalar _tmp89 = _tmp75 * _tmp83 - _tmp86;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp88 * _tmp90;
  const Scalar _tmp92 = _tmp63 * _tmp71 - _tmp70 * _tmp75 - _tmp87 * _tmp91;
  const Scalar _tmp93 = -_tmp83 * _tmp85 + _tmp84;
  const Scalar _tmp94 = -_tmp51 * _tmp92 - _tmp63 * _tmp69 + _tmp70 - _tmp91 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp92 * _tmp95;
  const Scalar _tmp97 = _tmp44 - _tmp56 * _tmp60 - _tmp61 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) * _tmp47;
  const Scalar _tmp99 = Scalar(1.0) * _tmp90;
  const Scalar _tmp100 = _tmp87 * _tmp90;
  const Scalar _tmp101 = _tmp50 * _tmp98;
  const Scalar _tmp102 = _tmp100 * _tmp101 - _tmp93 * _tmp99;
  const Scalar _tmp103 = std::pow(_tmp72, Scalar(2));
  const Scalar _tmp104 = std::pow(_tmp74, Scalar(2));
  const Scalar _tmp105 = _tmp103 + _tmp104;
  const Scalar _tmp106 = std::sqrt(_tmp105);
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = _tmp107 * _tmp16;
  const Scalar _tmp109 = _tmp107 * _tmp35;
  const Scalar _tmp110 = _tmp108 * _tmp74 - _tmp109 * _tmp72;
  const Scalar _tmp111 = _tmp106 * _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp73;
  const Scalar _tmp113 = _tmp112 * _tmp83 + _tmp46 * _tmp83 - _tmp49 * _tmp86;
  const Scalar _tmp114 = _tmp112 * _tmp69 - _tmp113 * _tmp91 - _tmp54 * _tmp71 + _tmp55 * _tmp69;
  const Scalar _tmp115 = _tmp114 * _tmp95;
  const Scalar _tmp116 = -_tmp102 * _tmp115 - _tmp113 * _tmp99;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp114);
  const Scalar _tmp118 = _tmp117 * _tmp94;
  const Scalar _tmp119 = _tmp116 * _tmp118;
  const Scalar _tmp120 = _tmp56 * _tmp58;
  const Scalar _tmp121 = _tmp102 + _tmp119;
  const Scalar _tmp122 = _tmp119 * _tmp120 - _tmp121 * _tmp96 - _tmp87 * _tmp99;
  const Scalar _tmp123 = _tmp4 + _tmp53;
  const Scalar _tmp124 = _tmp123 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp125 = _tmp29 + _tmp34;
  const Scalar _tmp126 = _tmp125 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp127 =
      std::pow(Scalar(std::pow(_tmp124, Scalar(2)) + std::pow(_tmp126, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp128 = _tmp126 * _tmp127;
  const Scalar _tmp129 = _tmp128 * fh1;
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp124 * _tmp127;
  const Scalar _tmp132 = fh1 * (_tmp21 + _tmp26);
  const Scalar _tmp133 = Scalar(40.024799999999999) * _tmp10 + _tmp123 * fv1 + _tmp131 * _tmp132;
  const Scalar _tmp134 = _tmp47 * _tmp56;
  const Scalar _tmp135 = -_tmp125 * fv1 - _tmp128 * _tmp132 - Scalar(40.024799999999999) * _tmp32;
  const Scalar _tmp136 = _tmp57 * _tmp59 + Scalar(1.0);
  const Scalar _tmp137 = _tmp51 * _tmp59;
  const Scalar _tmp138 = _tmp118 * _tmp59;
  const Scalar _tmp139 = Scalar(1.0) * _tmp117;
  const Scalar _tmp140 = _tmp138 * _tmp56 - _tmp139 * _tmp92;
  const Scalar _tmp141 = fh1 * (_tmp123 * _tmp128 - _tmp125 * _tmp131);
  const Scalar _tmp142 = Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = _tmp75 * _tmp90;
  const Scalar _tmp144 = _tmp100 * _tmp75 + _tmp27 * _tmp75;
  const Scalar _tmp145 = _tmp143 * _tmp93 - _tmp144 * _tmp51 - _tmp27;
  const Scalar _tmp146 = _tmp145 * _tmp95;
  const Scalar _tmp147 = -_tmp112 + _tmp113 * _tmp143 - _tmp114 * _tmp146;
  const Scalar _tmp148 = _tmp117 * _tmp147;
  const Scalar _tmp149 = _tmp148 * _tmp94;
  const Scalar _tmp150 = _tmp145 + _tmp149;
  const Scalar _tmp151 = _tmp120 * _tmp149 + _tmp144 - _tmp150 * _tmp96;
  const Scalar _tmp152 = _tmp131 * fh1;
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = _tmp130 * (_tmp119 * _tmp59 - _tmp122 * _tmp98) +
                         Scalar(1.0) * _tmp133 * (_tmp134 * _tmp59 - _tmp59) +
                         Scalar(1.0) * _tmp135 * (-_tmp136 * _tmp98 + _tmp137) +
                         _tmp142 * (_tmp138 - _tmp140 * _tmp98) +
                         _tmp153 * (_tmp149 * _tmp59 - _tmp151 * _tmp98) +
                         Scalar(1.0) * _tmp41 * (-_tmp52 * _tmp59 - _tmp97 * _tmp98 + Scalar(1.0));
  const Scalar _tmp155 = _tmp106 * _tmp73;
  const Scalar _tmp156 = _tmp88 * _tmp95;
  const Scalar _tmp157 = -_tmp121 * _tmp156 + Scalar(1.0);
  const Scalar _tmp158 = _tmp83 * _tmp90;
  const Scalar _tmp159 = _tmp69 * _tmp95;
  const Scalar _tmp160 = _tmp121 * _tmp159;
  const Scalar _tmp161 = _tmp128 * (_tmp157 * _tmp158 + _tmp160);
  const Scalar _tmp162 = _tmp161 * fh1;
  const Scalar _tmp163 = _tmp61 * _tmp95;
  const Scalar _tmp164 = _tmp163 * _tmp69;
  const Scalar _tmp165 = _tmp156 * _tmp61;
  const Scalar _tmp166 = _tmp41 * (-_tmp158 * _tmp165 + _tmp164);
  const Scalar _tmp167 = -_tmp150 * _tmp156 - _tmp75;
  const Scalar _tmp168 = _tmp150 * _tmp159;
  const Scalar _tmp169 = _tmp131 * (_tmp158 * _tmp167 + _tmp168 + Scalar(1.0));
  const Scalar _tmp170 = _tmp169 * fh1;
  const Scalar _tmp171 = _tmp139 * _tmp69;
  const Scalar _tmp172 = _tmp83 * _tmp91;
  const Scalar _tmp173 = _tmp141 * (-_tmp139 * _tmp172 + _tmp171);
  const Scalar _tmp174 =
      -_tmp155 * _tmp162 - _tmp155 * _tmp166 - _tmp155 * _tmp170 - _tmp155 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp176 = std::asinh(_tmp154 * _tmp175);
  const Scalar _tmp177 = Scalar(1.4083112389913199) * _tmp174;
  const Scalar _tmp178 = -_tmp176 * _tmp177 - _tmp40;
  const Scalar _tmp179 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp180 = _tmp178 * _tmp179;
  const Scalar _tmp181 = Scalar(1.0) * _tmp176;
  const Scalar _tmp182 = -std::sinh(_tmp180) - std::sinh(_tmp181);
  const Scalar _tmp183 = _tmp78 / _tmp81;
  const Scalar _tmp184 = _tmp157 * _tmp183;
  const Scalar _tmp185 = std::pow(_tmp89, Scalar(-2));
  const Scalar _tmp186 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp187 = _tmp186 * _tmp74;
  const Scalar _tmp188 = _tmp185 * _tmp187;
  const Scalar _tmp189 = _tmp187 * _tmp90;
  const Scalar _tmp190 = _tmp189 * _tmp93;
  const Scalar _tmp191 = _tmp83 * _tmp93;
  const Scalar _tmp192 = _tmp188 * _tmp191;
  const Scalar _tmp193 = _tmp187 * _tmp84;
  const Scalar _tmp194 = _tmp83 * _tmp87;
  const Scalar _tmp195 = _tmp188 * _tmp194;
  const Scalar _tmp196 = _tmp100 * _tmp187;
  const Scalar _tmp197 = -_tmp187 * _tmp70 + _tmp193 * _tmp91 + _tmp195 * _tmp88 - _tmp196 * _tmp69;
  const Scalar _tmp198 = -_tmp190 * _tmp69 + _tmp192 * _tmp88 - _tmp197 * _tmp51;
  const Scalar _tmp199 = std::pow(_tmp94, Scalar(-2));
  const Scalar _tmp200 = _tmp198 * _tmp199;
  const Scalar _tmp201 = _tmp114 * _tmp200;
  const Scalar _tmp202 = _tmp113 * _tmp83;
  const Scalar _tmp203 = _tmp188 * _tmp202;
  const Scalar _tmp204 = _tmp189 * _tmp84;
  const Scalar _tmp205 = -_tmp101 * _tmp195 - _tmp101 * _tmp204 + Scalar(1.0) * _tmp192;
  const Scalar _tmp206 = std::pow(_tmp105, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp207 = _tmp206 * _tmp35;
  const Scalar _tmp208 = _tmp16 * _tmp206;
  const Scalar _tmp209 = _tmp72 * _tmp74;
  const Scalar _tmp210 = _tmp155 * (-_tmp103 * _tmp207 + _tmp109 + _tmp208 * _tmp209);
  const Scalar _tmp211 = _tmp111 * _tmp186;
  const Scalar _tmp212 = _tmp107 * _tmp110;
  const Scalar _tmp213 = _tmp212 * _tmp83;
  const Scalar _tmp214 = _tmp210 * _tmp83 + _tmp211 * _tmp83 - _tmp213;
  const Scalar _tmp215 = _tmp113 * _tmp189;
  const Scalar _tmp216 = _tmp203 * _tmp88 + _tmp210 * _tmp69 + _tmp211 * _tmp69 - _tmp212 * _tmp69 -
                         _tmp214 * _tmp91 - _tmp215 * _tmp69;
  const Scalar _tmp217 = _tmp102 * _tmp95;
  const Scalar _tmp218 = _tmp118 * (_tmp102 * _tmp201 - _tmp115 * _tmp205 + Scalar(1.0) * _tmp203 -
                                    _tmp214 * _tmp99 - _tmp216 * _tmp217);
  const Scalar _tmp219 = std::pow(_tmp114, Scalar(-2));
  const Scalar _tmp220 = _tmp216 * _tmp219;
  const Scalar _tmp221 = _tmp220 * _tmp94;
  const Scalar _tmp222 = _tmp116 * _tmp221;
  const Scalar _tmp223 = _tmp116 * _tmp117;
  const Scalar _tmp224 = _tmp198 * _tmp223;
  const Scalar _tmp225 = _tmp205 + _tmp218 - _tmp222 + _tmp224;
  const Scalar _tmp226 = _tmp121 * _tmp200;
  const Scalar _tmp227 = _tmp199 * _tmp88;
  const Scalar _tmp228 = _tmp121 * _tmp198;
  const Scalar _tmp229 = -_tmp156 * _tmp225 - _tmp160 * _tmp187 + _tmp227 * _tmp228;
  const Scalar _tmp230 = _tmp129 * _tmp155;
  const Scalar _tmp231 = _tmp107 * _tmp166;
  const Scalar _tmp232 = _tmp150 * _tmp198;
  const Scalar _tmp233 = _tmp104 / [&]() {
    const Scalar base = _tmp72;
    return base * base * base;
  }();
  const Scalar _tmp234 = _tmp185 * _tmp233;
  const Scalar _tmp235 = _tmp187 * _tmp27 - _tmp194 * _tmp234 + _tmp196 - _tmp233 * _tmp84 * _tmp90;
  const Scalar _tmp236 = _tmp190 - _tmp191 * _tmp234 - _tmp235 * _tmp51;
  const Scalar _tmp237 =
      _tmp118 * (-_tmp115 * _tmp236 + _tmp143 * _tmp214 + _tmp145 * _tmp201 - _tmp146 * _tmp216 -
                 _tmp202 * _tmp234 - _tmp210 - _tmp211 + _tmp212 + _tmp215);
  const Scalar _tmp238 = _tmp148 * _tmp198;
  const Scalar _tmp239 = _tmp147 * _tmp221;
  const Scalar _tmp240 = _tmp236 + _tmp237 + _tmp238 - _tmp239;
  const Scalar _tmp241 = -_tmp156 * _tmp240 - _tmp168 * _tmp187 - _tmp187 + _tmp227 * _tmp232;
  const Scalar _tmp242 = _tmp183 * _tmp188;
  const Scalar _tmp243 = _tmp199 * _tmp232;
  const Scalar _tmp244 = _tmp152 * _tmp155;
  const Scalar _tmp245 = _tmp106 * _tmp186;
  const Scalar _tmp246 = _tmp107 * _tmp173;
  const Scalar _tmp247 = _tmp107 * fh1;
  const Scalar _tmp248 = _tmp161 * _tmp247;
  const Scalar _tmp249 = _tmp198 * _tmp61;
  const Scalar _tmp250 = _tmp199 * _tmp249;
  const Scalar _tmp251 = _tmp189 * _tmp83;
  const Scalar _tmp252 = _tmp155 * _tmp41;
  const Scalar _tmp253 = _tmp169 * _tmp247;
  const Scalar _tmp254 = _tmp139 * _tmp88;
  const Scalar _tmp255 = Scalar(1.0) * _tmp69;
  const Scalar _tmp256 = Scalar(1.0) * _tmp172;
  const Scalar _tmp257 = _tmp141 * _tmp155;
  const Scalar _tmp258 =
      -_tmp162 * _tmp245 - _tmp166 * _tmp245 - _tmp170 * _tmp245 - _tmp173 * _tmp245 -
      _tmp230 * (_tmp158 * _tmp229 + _tmp159 * _tmp225 - _tmp184 * _tmp188 - _tmp226 * _tmp69) +
      _tmp231 -
      _tmp244 * (_tmp158 * _tmp241 + _tmp159 * _tmp240 - _tmp167 * _tmp242 - _tmp243 * _tmp69) +
      _tmp246 + _tmp248 -
      _tmp252 * (-_tmp164 * _tmp251 + _tmp165 * _tmp242 + _tmp172 * _tmp250 - _tmp250 * _tmp69) +
      _tmp253 -
      _tmp257 * (-_tmp171 * _tmp251 - _tmp220 * _tmp255 + _tmp220 * _tmp256 + _tmp242 * _tmp254);
  const Scalar _tmp259 = Scalar(1.4083112389913199) * _tmp258;
  const Scalar _tmp260 = std::pow(_tmp174, Scalar(-2));
  const Scalar _tmp261 = Scalar(0.71007031138673404) * _tmp178 * _tmp260;
  const Scalar _tmp262 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp263 = _tmp199 * _tmp92;
  const Scalar _tmp264 = _tmp197 * _tmp95;
  const Scalar _tmp265 = _tmp120 * _tmp237 + _tmp120 * _tmp238 - _tmp120 * _tmp239 -
                         _tmp150 * _tmp264 + _tmp232 * _tmp263 + _tmp235 - _tmp240 * _tmp96;
  const Scalar _tmp266 = _tmp221 * _tmp59;
  const Scalar _tmp267 = _tmp117 * _tmp59;
  const Scalar _tmp268 = _tmp198 * _tmp267;
  const Scalar _tmp269 = Scalar(1.0) * _tmp92;
  const Scalar _tmp270 =
      -_tmp139 * _tmp197 + _tmp220 * _tmp269 - _tmp266 * _tmp56 + _tmp268 * _tmp56;
  const Scalar _tmp271 = _tmp249 * _tmp263 - _tmp264 * _tmp61;
  const Scalar _tmp272 = _tmp41 * _tmp98;
  const Scalar _tmp273 = _tmp120 * _tmp218 - _tmp120 * _tmp222 + _tmp120 * _tmp224 -
                         _tmp121 * _tmp264 + _tmp193 * _tmp99 + Scalar(1.0) * _tmp195 -
                         _tmp225 * _tmp96 + _tmp228 * _tmp263;
  const Scalar _tmp274 = _tmp154 * _tmp260;
  const Scalar _tmp275 =
      std::pow(Scalar(std::pow(_tmp154, Scalar(2)) * _tmp260 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp276 =
      _tmp275 *
      (_tmp175 *
           (_tmp130 * (_tmp218 * _tmp59 - _tmp222 * _tmp59 + _tmp224 * _tmp59 - _tmp273 * _tmp98) +
            _tmp142 * (-_tmp266 + _tmp268 - _tmp270 * _tmp98) +
            _tmp153 * (_tmp237 * _tmp59 + _tmp238 * _tmp59 - _tmp239 * _tmp59 - _tmp265 * _tmp98) -
            _tmp271 * _tmp272) -
       _tmp258 * _tmp274);
  const Scalar _tmp277 = std::cosh(_tmp180);
  const Scalar _tmp278 = Scalar(1.0) * std::cosh(_tmp181);
  const Scalar _tmp279 = _tmp165 * _tmp41;
  const Scalar _tmp280 = _tmp188 * _tmp83;
  const Scalar _tmp281 = _tmp163 * _tmp41;
  const Scalar _tmp282 = _tmp281 * _tmp69;
  const Scalar _tmp283 = _tmp152 * _tmp90;
  const Scalar _tmp284 = _tmp139 * _tmp141;
  const Scalar _tmp285 = _tmp129 * _tmp90;
  const Scalar _tmp286 = _tmp129 * _tmp157;
  const Scalar _tmp287 = _tmp152 * _tmp83;
  const Scalar _tmp288 = _tmp142 * _tmp220;
  const Scalar _tmp289 = _tmp250 * _tmp41;
  const Scalar _tmp290 = _tmp284 * _tmp69;
  const Scalar _tmp291 = -_tmp167 * _tmp188 * _tmp287 - _tmp189 * _tmp282 - _tmp189 * _tmp290 +
                         _tmp229 * _tmp285 + _tmp241 * _tmp283 + _tmp279 * _tmp280 +
                         _tmp280 * _tmp284 * _tmp88 - _tmp280 * _tmp286 + _tmp288 * _tmp91 +
                         _tmp289 * _tmp91;
  const Scalar _tmp292 = _tmp129 * _tmp47;
  const Scalar _tmp293 = _tmp152 * _tmp47;
  const Scalar _tmp294 = _tmp133 * _tmp59;
  const Scalar _tmp295 = _tmp41 * _tmp47;
  const Scalar _tmp296 = _tmp141 * _tmp47;
  const Scalar _tmp297 = _tmp122 * _tmp292 - _tmp134 * _tmp294 + _tmp135 * _tmp136 * _tmp47 +
                         _tmp140 * _tmp296 + _tmp151 * _tmp293 + _tmp295 * _tmp97;
  const Scalar _tmp298 =
      _tmp157 * _tmp285 + _tmp167 * _tmp283 - _tmp279 * _tmp90 - _tmp284 * _tmp91;
  const Scalar _tmp299 = Scalar(1.0) / (_tmp298);
  const Scalar _tmp300 = std::asinh(_tmp297 * _tmp299);
  const Scalar _tmp301 = Scalar(1.4083112389913199) * _tmp298;
  const Scalar _tmp302 =
      -_tmp300 * _tmp301 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp303 = Scalar(0.71007031138673404) * _tmp299;
  const Scalar _tmp304 = _tmp302 * _tmp303;
  const Scalar _tmp305 = Scalar(1.0) * _tmp300;
  const Scalar _tmp306 = -Scalar(1.4083112389913199) * std::sinh(_tmp304) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp305);
  const Scalar _tmp307 = Scalar(1.0) * std::cosh(_tmp305);
  const Scalar _tmp308 = std::pow(_tmp298, Scalar(-2));
  const Scalar _tmp309 =
      std::pow(Scalar(std::pow(_tmp297, Scalar(2)) * _tmp308 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp310 = _tmp297 * _tmp308;
  const Scalar _tmp311 =
      _tmp309 * (-_tmp291 * _tmp310 + _tmp299 * (_tmp265 * _tmp293 + _tmp270 * _tmp296 +
                                                 _tmp271 * _tmp295 + _tmp273 * _tmp292));
  const Scalar _tmp312 = std::cosh(_tmp304);
  const Scalar _tmp313 = Scalar(1.4083112389913199) * _tmp300;
  const Scalar _tmp314 = Scalar(0.71007031138673404) * _tmp302 * _tmp308;
  const Scalar _tmp315 = _tmp129 * _tmp95;
  const Scalar _tmp316 = _tmp152 * _tmp95;
  const Scalar _tmp317 = -_tmp129 * _tmp226 - _tmp152 * _tmp243 + _tmp225 * _tmp315 +
                         _tmp240 * _tmp316 - _tmp288 - _tmp289;
  const Scalar _tmp318 = _tmp121 * _tmp315 + _tmp150 * _tmp316 + _tmp281 + _tmp284;
  const Scalar _tmp319 = _tmp152 * _tmp58;
  const Scalar _tmp320 = _tmp129 * _tmp58;
  const Scalar _tmp321 = -_tmp119 * _tmp320 - _tmp135 * _tmp137 - _tmp138 * _tmp141 -
                         _tmp149 * _tmp319 + _tmp294 + _tmp41 * _tmp60;
  const Scalar _tmp322 = Scalar(1.0) / (_tmp318);
  const Scalar _tmp323 = std::asinh(_tmp321 * _tmp322);
  const Scalar _tmp324 = Scalar(1.4083112389913199) * _tmp323;
  const Scalar _tmp325 =
      -_tmp318 * _tmp324 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp66 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp326 = Scalar(0.71007031138673404) * _tmp322;
  const Scalar _tmp327 = _tmp325 * _tmp326;
  const Scalar _tmp328 = Scalar(1.0) * _tmp323;
  const Scalar _tmp329 = -Scalar(1.4083112389913199) * std::sinh(_tmp327) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp328);
  const Scalar _tmp330 = Scalar(1.0) * std::cosh(_tmp328);
  const Scalar _tmp331 = std::pow(_tmp318, Scalar(-2));
  const Scalar _tmp332 =
      std::pow(Scalar(std::pow(_tmp321, Scalar(2)) * _tmp331 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp333 = _tmp321 * _tmp331;
  const Scalar _tmp334 =
      _tmp332 *
      (-_tmp317 * _tmp333 +
       _tmp322 * (_tmp141 * _tmp266 - _tmp141 * _tmp268 - _tmp218 * _tmp320 + _tmp222 * _tmp320 -
                  _tmp224 * _tmp320 - _tmp237 * _tmp319 - _tmp238 * _tmp319 + _tmp239 * _tmp319));
  const Scalar _tmp335 = Scalar(0.71007031138673404) * _tmp325 * _tmp331;
  const Scalar _tmp336 = Scalar(1.4083112389913199) * _tmp318;
  const Scalar _tmp337 = std::cosh(_tmp327);
  const Scalar _tmp338 = _tmp212 * _tmp75;
  const Scalar _tmp339 = _tmp155 * (_tmp104 * _tmp208 - _tmp108 - _tmp207 * _tmp209);
  const Scalar _tmp340 = _tmp73 * _tmp90;
  const Scalar _tmp341 = _tmp113 * _tmp340;
  const Scalar _tmp342 = _tmp185 * _tmp73;
  const Scalar _tmp343 = _tmp342 * _tmp83;
  const Scalar _tmp344 = _tmp343 * _tmp88;
  const Scalar _tmp345 = -_tmp213 * _tmp75 + _tmp339 * _tmp83;
  const Scalar _tmp346 = -_tmp113 * _tmp344 - _tmp338 * _tmp69 + _tmp339 * _tmp69 +
                         _tmp341 * _tmp69 - _tmp345 * _tmp91;
  const Scalar _tmp347 = _tmp219 * _tmp346;
  const Scalar _tmp348 = _tmp347 * _tmp94;
  const Scalar _tmp349 = _tmp147 * _tmp348;
  const Scalar _tmp350 = _tmp340 * _tmp93;
  const Scalar _tmp351 = _tmp27 * _tmp73;
  const Scalar _tmp352 = _tmp340 * _tmp87;
  const Scalar _tmp353 = _tmp195 + _tmp204 - _tmp351 - _tmp352;
  const Scalar _tmp354 = _tmp192 - _tmp350 - _tmp353 * _tmp51;
  const Scalar _tmp355 = _tmp351 * _tmp83;
  const Scalar _tmp356 = -_tmp344 * _tmp87 + _tmp351 * _tmp69 + _tmp352 * _tmp69 - _tmp355 * _tmp91;
  const Scalar _tmp357 = -_tmp344 * _tmp93 + _tmp350 * _tmp69 - _tmp356 * _tmp51;
  const Scalar _tmp358 = _tmp199 * _tmp357;
  const Scalar _tmp359 = _tmp114 * _tmp358;
  const Scalar _tmp360 = _tmp118 * (-_tmp115 * _tmp354 + _tmp143 * _tmp345 + _tmp145 * _tmp359 -
                                    _tmp146 * _tmp346 + _tmp203 + _tmp338 - _tmp339 - _tmp341);
  const Scalar _tmp361 = _tmp148 * _tmp357;
  const Scalar _tmp362 = -_tmp349 + _tmp354 + _tmp360 + _tmp361;
  const Scalar _tmp363 = _tmp167 * _tmp342;
  const Scalar _tmp364 = _tmp358 * _tmp69;
  const Scalar _tmp365 = _tmp358 * _tmp88;
  const Scalar _tmp366 = _tmp150 * _tmp365 - _tmp156 * _tmp362 + _tmp168 * _tmp73 + _tmp73;
  const Scalar _tmp367 = _tmp183 * _tmp342;
  const Scalar _tmp368 = _tmp340 * _tmp83;
  const Scalar _tmp369 = _tmp358 * _tmp61;
  const Scalar _tmp370 = Scalar(1.0) * _tmp343;
  const Scalar _tmp371 =
      _tmp101 * _tmp158 * _tmp351 + _tmp101 * _tmp343 * _tmp87 - _tmp370 * _tmp93;
  const Scalar _tmp372 = _tmp118 * (_tmp102 * _tmp359 - _tmp113 * _tmp370 - _tmp115 * _tmp371 -
                                    _tmp217 * _tmp346 - _tmp345 * _tmp99);
  const Scalar _tmp373 = _tmp223 * _tmp357;
  const Scalar _tmp374 = _tmp116 * _tmp348;
  const Scalar _tmp375 = _tmp371 + _tmp372 + _tmp373 - _tmp374;
  const Scalar _tmp376 = _tmp121 * _tmp365 - _tmp156 * _tmp375 + _tmp160 * _tmp73;
  const Scalar _tmp377 =
      -_tmp230 * (-_tmp121 * _tmp364 + _tmp158 * _tmp376 + _tmp159 * _tmp375 + _tmp184 * _tmp342) +
      _tmp231 * _tmp75 -
      _tmp244 * (-_tmp150 * _tmp364 + _tmp158 * _tmp366 + _tmp159 * _tmp362 + _tmp183 * _tmp363) +
      _tmp246 * _tmp75 + _tmp248 * _tmp75 -
      _tmp252 * (_tmp164 * _tmp368 - _tmp165 * _tmp367 + _tmp172 * _tmp369 - _tmp369 * _tmp69) +
      _tmp253 * _tmp75 -
      _tmp257 * (_tmp171 * _tmp368 - _tmp254 * _tmp367 - _tmp255 * _tmp347 + _tmp256 * _tmp347);
  const Scalar _tmp378 = Scalar(1.4083112389913199) * _tmp377;
  const Scalar _tmp379 = _tmp348 * _tmp59;
  const Scalar _tmp380 = _tmp267 * _tmp357;
  const Scalar _tmp381 =
      -_tmp139 * _tmp356 + _tmp269 * _tmp347 - _tmp379 * _tmp56 + _tmp380 * _tmp56;
  const Scalar _tmp382 = _tmp356 * _tmp95;
  const Scalar _tmp383 = _tmp263 * _tmp357;
  const Scalar _tmp384 = -_tmp382 * _tmp61 + _tmp383 * _tmp61;
  const Scalar _tmp385 = -_tmp120 * _tmp349 + _tmp120 * _tmp360 + _tmp120 * _tmp361 -
                         _tmp150 * _tmp382 + _tmp150 * _tmp383 + _tmp353 - _tmp362 * _tmp96;
  const Scalar _tmp386 = _tmp120 * _tmp372 + _tmp120 * _tmp373 - _tmp120 * _tmp374 -
                         _tmp121 * _tmp382 + _tmp121 * _tmp383 - _tmp355 * _tmp99 -
                         _tmp370 * _tmp87 - _tmp375 * _tmp96;
  const Scalar _tmp387 =
      _tmp275 *
      (_tmp175 *
           (_tmp130 * (_tmp372 * _tmp59 + _tmp373 * _tmp59 - _tmp374 * _tmp59 - _tmp386 * _tmp98) +
            _tmp142 * (-_tmp379 + _tmp380 - _tmp381 * _tmp98) +
            _tmp153 * (-_tmp349 * _tmp59 + _tmp360 * _tmp59 + _tmp361 * _tmp59 - _tmp385 * _tmp98) -
            _tmp272 * _tmp384) -
       _tmp274 * _tmp377);
  const Scalar _tmp388 = _tmp142 * _tmp347;
  const Scalar _tmp389 = _tmp369 * _tmp41;
  const Scalar _tmp390 = -_tmp279 * _tmp343 + _tmp282 * _tmp340 + _tmp283 * _tmp366 -
                         _tmp284 * _tmp344 + _tmp285 * _tmp376 + _tmp286 * _tmp343 +
                         _tmp287 * _tmp363 + _tmp290 * _tmp340 + _tmp388 * _tmp91 +
                         _tmp389 * _tmp91;
  const Scalar _tmp391 =
      _tmp309 *
      (_tmp299 * (_tmp292 * _tmp386 + _tmp293 * _tmp385 + _tmp295 * _tmp384 + _tmp296 * _tmp381) -
       _tmp310 * _tmp390);
  const Scalar _tmp392 = -_tmp121 * _tmp129 * _tmp358 - _tmp150 * _tmp152 * _tmp358 +
                         _tmp315 * _tmp375 + _tmp316 * _tmp362 - _tmp388 - _tmp389;
  const Scalar _tmp393 =
      _tmp332 *
      (_tmp322 * (_tmp141 * _tmp379 - _tmp141 * _tmp380 + _tmp319 * _tmp349 - _tmp319 * _tmp360 -
                  _tmp319 * _tmp361 - _tmp320 * _tmp372 - _tmp320 * _tmp373 + _tmp320 * _tmp374) -
       _tmp333 * _tmp392);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp177 * (-_tmp276 * _tmp278 -
                 _tmp277 * (_tmp179 * (-_tmp176 * _tmp259 - _tmp177 * _tmp276 - _tmp18 * _tmp262) -
                            _tmp258 * _tmp261)) -
      _tmp18 * _tmp39 + _tmp182 * _tmp259;
  _res(2, 0) =
      _tmp291 * _tmp306 +
      _tmp301 *
          (-_tmp307 * _tmp311 -
           _tmp312 * (-_tmp291 * _tmp314 + _tmp303 * (-_tmp291 * _tmp313 - _tmp301 * _tmp311)));
  _res(3, 0) =
      _tmp317 * _tmp329 +
      _tmp336 *
          (-_tmp330 * _tmp334 -
           _tmp337 * (-_tmp317 * _tmp335 + _tmp326 * (-_tmp317 * _tmp324 - _tmp334 * _tmp336)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp177 * (-_tmp277 * (_tmp179 * (-_tmp176 * _tmp378 - _tmp177 * _tmp387 - _tmp262 * _tmp37) -
                             _tmp261 * _tmp377) -
                 _tmp278 * _tmp387) +
      _tmp182 * _tmp378 - _tmp37 * _tmp39;
  _res(2, 1) =
      _tmp301 *
          (-_tmp307 * _tmp391 -
           _tmp312 * (_tmp303 * (-_tmp301 * _tmp391 - _tmp313 * _tmp390) - _tmp314 * _tmp390)) +
      _tmp306 * _tmp390;
  _res(3, 1) =
      _tmp329 * _tmp392 + _tmp336 * (-_tmp330 * _tmp393 -
                                     _tmp337 * (_tmp326 * (-_tmp324 * _tmp392 - _tmp336 * _tmp393) -
                                                _tmp335 * _tmp392));
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp28 * _tmp39;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
