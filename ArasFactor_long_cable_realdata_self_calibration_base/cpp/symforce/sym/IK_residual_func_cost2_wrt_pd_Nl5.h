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
 * Symbolic function: IK_residual_func_cost2_wrt_pd_Nl5
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPdNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1206

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (395)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp8 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp3;
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = _tmp0 * _tmp4;
  const Scalar _tmp13 = _tmp11 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp14 - _tmp9;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_d(0, 0);
  const Scalar _tmp19 = _tmp0 * _tmp10;
  const Scalar _tmp20 = _tmp1 * _tmp4;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = -_tmp26 + p_d(2, 0) - position_vector(2, 0);
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = _tmp19 - _tmp20;
  const Scalar _tmp31 = -Scalar(0.010999999999999999) * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp7 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp33 = _tmp31 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 = -_tmp35 + p_d(1, 0);
  const Scalar _tmp37 = std::pow(_tmp18, Scalar(2)) + std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 =
      std::pow(Scalar(std::pow(_tmp27, Scalar(2)) + _tmp37), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = std::sqrt(_tmp37);
  const Scalar _tmp40 = -_tmp6;
  const Scalar _tmp41 = _tmp15 + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp43 = _tmp31 - _tmp32;
  const Scalar _tmp44 = _tmp29 + _tmp43;
  const Scalar _tmp45 = _tmp44 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = -_tmp21;
  const Scalar _tmp49 = fh1 * (_tmp25 + _tmp48);
  const Scalar _tmp50 = Scalar(40.024799999999999) * _tmp13 + _tmp41 * fv1 + _tmp47 * _tmp49;
  const Scalar _tmp51 = Scalar(1.0) * _tmp16;
  const Scalar _tmp52 = _tmp14 + _tmp9;
  const Scalar _tmp53 = _tmp40 + _tmp52;
  const Scalar _tmp54 = Scalar(1.0) * _tmp34;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 = _tmp28 + _tmp43;
  const Scalar _tmp57 = _tmp55 + _tmp56;
  const Scalar _tmp58 = _tmp28 + _tmp33;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp55 + _tmp58);
  const Scalar _tmp60 = _tmp52 + _tmp6;
  const Scalar _tmp61 = _tmp59 * (_tmp51 - _tmp60);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp51 - _tmp53 - _tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp57 * _tmp59;
  const Scalar _tmp66 = _tmp45 * _tmp46;
  const Scalar _tmp67 = -Scalar(40.024799999999999) * _tmp30 - _tmp44 * fv1 - _tmp49 * _tmp66;
  const Scalar _tmp68 = _tmp59 * (_tmp62 * _tmp64 + Scalar(1.0));
  const Scalar _tmp69 = _tmp61 * _tmp64;
  const Scalar _tmp70 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp71 = _tmp51 + _tmp54 * _tmp61;
  const Scalar _tmp72 = 0;
  const Scalar _tmp73 = _tmp23 + _tmp24;
  const Scalar _tmp74 = _tmp48 + _tmp73;
  const Scalar _tmp75 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp76 = _tmp75 - p_b(0, 0);
  const Scalar _tmp77 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 - p_b(1, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp17 - p_d(0, 0);
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = _tmp35 - p_d(1, 0);
  const Scalar _tmp84 = _tmp82 * _tmp83;
  const Scalar _tmp85 = _tmp76 * _tmp79;
  const Scalar _tmp86 = _tmp26 * _tmp85;
  const Scalar _tmp87 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp88 = _tmp87 - p_c(0, 0);
  const Scalar _tmp89 = std::pow(_tmp88, Scalar(2));
  const Scalar _tmp90 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp91 = _tmp90 - p_c(1, 0);
  const Scalar _tmp92 = _tmp89 + std::pow(_tmp91, Scalar(2));
  const Scalar _tmp93 = std::pow(_tmp92, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp94 = _tmp88 * _tmp93;
  const Scalar _tmp95 = _tmp26 * _tmp94;
  const Scalar _tmp96 = _tmp21 + _tmp73;
  const Scalar _tmp97 = _tmp91 * _tmp93;
  const Scalar _tmp98 = -_tmp84 * _tmp95 + _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp84 * _tmp85;
  const Scalar _tmp100 = -_tmp80 + _tmp99;
  const Scalar _tmp101 = _tmp84 * _tmp94;
  const Scalar _tmp102 = _tmp101 - _tmp97;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = _tmp100 * _tmp103;
  const Scalar _tmp105 = -_tmp104 * _tmp98 + _tmp74 * _tmp80 - _tmp84 * _tmp86;
  const Scalar _tmp106 = -_tmp94 * _tmp96 + _tmp95;
  const Scalar _tmp107 = -_tmp104 * _tmp106 - _tmp105 * _tmp61 - _tmp74 * _tmp85 + _tmp86;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp105 * _tmp108;
  const Scalar _tmp110 = _tmp63 * _tmp71;
  const Scalar _tmp111 = -_tmp109 * _tmp72 - _tmp110 * _tmp57 + _tmp55;
  const Scalar _tmp112 = Scalar(1.0) * _tmp59;
  const Scalar _tmp113 = std::pow(_tmp81, Scalar(2));
  const Scalar _tmp114 = std::pow(_tmp83, Scalar(2));
  const Scalar _tmp115 = _tmp113 + _tmp114;
  const Scalar _tmp116 = std::sqrt(_tmp115);
  const Scalar _tmp117 = Scalar(1.0) / (_tmp116);
  const Scalar _tmp118 = _tmp117 * _tmp16;
  const Scalar _tmp119 = _tmp117 * _tmp34;
  const Scalar _tmp120 = _tmp118 * _tmp83 - _tmp119 * _tmp81;
  const Scalar _tmp121 = _tmp116 * _tmp120;
  const Scalar _tmp122 = _tmp121 * _tmp82;
  const Scalar _tmp123 = _tmp122 * _tmp94 + _tmp58 * _tmp94 - _tmp60 * _tmp97;
  const Scalar _tmp124 = _tmp103 * _tmp123;
  const Scalar _tmp125 = _tmp103 * _tmp106;
  const Scalar _tmp126 = _tmp103 * _tmp98;
  const Scalar _tmp127 = _tmp126 * _tmp84 + _tmp26 * _tmp84;
  const Scalar _tmp128 = _tmp125 * _tmp84 - _tmp127 * _tmp61 - _tmp26;
  const Scalar _tmp129 = -_tmp104 * _tmp123 + _tmp122 * _tmp85 - _tmp53 * _tmp80 + _tmp56 * _tmp85;
  const Scalar _tmp130 = _tmp108 * _tmp129;
  const Scalar _tmp131 = -_tmp122 + _tmp124 * _tmp84 - _tmp128 * _tmp130;
  const Scalar _tmp132 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp133 = _tmp107 * _tmp132;
  const Scalar _tmp134 = _tmp131 * _tmp133;
  const Scalar _tmp135 = _tmp57 * _tmp63;
  const Scalar _tmp136 = _tmp128 + _tmp134;
  const Scalar _tmp137 = _tmp108 * _tmp136;
  const Scalar _tmp138 = -_tmp105 * _tmp137 + _tmp127 + _tmp134 * _tmp135;
  const Scalar _tmp139 = _tmp47 * fh1;
  const Scalar _tmp140 = Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp133 * _tmp64;
  const Scalar _tmp142 = Scalar(1.0) * _tmp132;
  const Scalar _tmp143 = -_tmp105 * _tmp142 + _tmp141 * _tmp57;
  const Scalar _tmp144 = fh1 * (_tmp41 * _tmp66 - _tmp44 * _tmp47);
  const Scalar _tmp145 = Scalar(1.0) * _tmp144;
  const Scalar _tmp146 = Scalar(1.0) * _tmp103;
  const Scalar _tmp147 = _tmp146 * _tmp98;
  const Scalar _tmp148 = -_tmp106 * _tmp146 + _tmp147 * _tmp61;
  const Scalar _tmp149 = -_tmp123 * _tmp146 - _tmp130 * _tmp148;
  const Scalar _tmp150 = _tmp132 * _tmp149;
  const Scalar _tmp151 = _tmp107 * _tmp150;
  const Scalar _tmp152 = _tmp148 + _tmp151;
  const Scalar _tmp153 = -_tmp109 * _tmp152 + _tmp135 * _tmp151 - _tmp147;
  const Scalar _tmp154 = _tmp66 * fh1;
  const Scalar _tmp155 = Scalar(1.0) * _tmp154;
  const Scalar _tmp156 =
      _tmp140 * (-_tmp112 * _tmp138 + _tmp134 * _tmp64) + _tmp145 * (-_tmp112 * _tmp143 + _tmp141) +
      _tmp155 * (-_tmp112 * _tmp153 + _tmp151 * _tmp64) +
      Scalar(1.0) * _tmp50 * (_tmp64 * _tmp65 - _tmp64) +
      Scalar(1.0) * _tmp67 * (-Scalar(1.0) * _tmp68 + _tmp69) +
      Scalar(1.0) * _tmp70 * (-_tmp111 * _tmp112 - _tmp64 * _tmp71 + Scalar(1.0));
  const Scalar _tmp157 = _tmp116 * _tmp82;
  const Scalar _tmp158 = -_tmp100 * _tmp137 - _tmp84;
  const Scalar _tmp159 = _tmp103 * _tmp94;
  const Scalar _tmp160 = _tmp137 * _tmp85;
  const Scalar _tmp161 = _tmp139 * (_tmp158 * _tmp159 + _tmp160 + Scalar(1.0));
  const Scalar _tmp162 = _tmp104 * _tmp94;
  const Scalar _tmp163 = _tmp142 * _tmp85;
  const Scalar _tmp164 = _tmp144 * (-_tmp142 * _tmp162 + _tmp163);
  const Scalar _tmp165 = _tmp108 * _tmp152;
  const Scalar _tmp166 = _tmp165 * _tmp85;
  const Scalar _tmp167 = _tmp100 * _tmp108;
  const Scalar _tmp168 = -_tmp152 * _tmp167 + Scalar(1.0);
  const Scalar _tmp169 = _tmp154 * (_tmp159 * _tmp168 + _tmp166);
  const Scalar _tmp170 = _tmp108 * _tmp72;
  const Scalar _tmp171 = _tmp170 * _tmp85;
  const Scalar _tmp172 = _tmp167 * _tmp72;
  const Scalar _tmp173 = _tmp70 * (-_tmp159 * _tmp172 + _tmp171);
  const Scalar _tmp174 =
      -_tmp157 * _tmp161 - _tmp157 * _tmp164 - _tmp157 * _tmp169 - _tmp157 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp176 = std::asinh(_tmp156 * _tmp175);
  const Scalar _tmp177 = Scalar(1.4083112389913199) * _tmp174;
  const Scalar _tmp178 = -_tmp176 * _tmp177 - _tmp39;
  const Scalar _tmp179 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp180 = _tmp178 * _tmp179;
  const Scalar _tmp181 = Scalar(1.0) * _tmp176;
  const Scalar _tmp182 = -std::sinh(_tmp180) - std::sinh(_tmp181);
  const Scalar _tmp183 = std::pow(_tmp102, Scalar(-2));
  const Scalar _tmp184 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp185 = _tmp184 * _tmp83;
  const Scalar _tmp186 = _tmp183 * _tmp185;
  const Scalar _tmp187 = _tmp186 * _tmp94;
  const Scalar _tmp188 = _tmp106 * _tmp187;
  const Scalar _tmp189 = _tmp125 * _tmp185;
  const Scalar _tmp190 = _tmp94 * _tmp98;
  const Scalar _tmp191 = _tmp186 * _tmp190;
  const Scalar _tmp192 = _tmp126 * _tmp185;
  const Scalar _tmp193 = _tmp185 * _tmp95;
  const Scalar _tmp194 =
      _tmp100 * _tmp191 + _tmp104 * _tmp193 - _tmp185 * _tmp86 - _tmp192 * _tmp85;
  const Scalar _tmp195 = _tmp100 * _tmp188 - _tmp189 * _tmp85 - _tmp194 * _tmp61;
  const Scalar _tmp196 = std::pow(_tmp107, Scalar(-2));
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = _tmp197 * _tmp85;
  const Scalar _tmp199 = _tmp100 * _tmp197;
  const Scalar _tmp200 = _tmp117 * _tmp120;
  const Scalar _tmp201 = _tmp121 * _tmp184;
  const Scalar _tmp202 = std::pow(_tmp115, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp203 = _tmp202 * _tmp34;
  const Scalar _tmp204 = _tmp16 * _tmp202;
  const Scalar _tmp205 = _tmp81 * _tmp83;
  const Scalar _tmp206 = _tmp157 * (-_tmp113 * _tmp203 + _tmp119 + _tmp204 * _tmp205);
  const Scalar _tmp207 = -_tmp200 * _tmp94 + _tmp201 * _tmp94 + _tmp206 * _tmp94;
  const Scalar _tmp208 = _tmp103 * _tmp84;
  const Scalar _tmp209 = _tmp123 * _tmp187;
  const Scalar _tmp210 = _tmp124 * _tmp185;
  const Scalar _tmp211 = _tmp100 * _tmp209 - _tmp104 * _tmp207 - _tmp200 * _tmp85 +
                         _tmp201 * _tmp85 + _tmp206 * _tmp85 - _tmp210 * _tmp85;
  const Scalar _tmp212 = _tmp108 * _tmp128;
  const Scalar _tmp213 = _tmp128 * _tmp129;
  const Scalar _tmp214 = _tmp114 / [&]() {
    const Scalar base = _tmp81;
    return base * base * base;
  }();
  const Scalar _tmp215 = _tmp183 * _tmp214;
  const Scalar _tmp216 = _tmp215 * _tmp94;
  const Scalar _tmp217 = _tmp103 * _tmp95;
  const Scalar _tmp218 = _tmp185 * _tmp26 - _tmp190 * _tmp215 + _tmp192 - _tmp214 * _tmp217;
  const Scalar _tmp219 = -_tmp106 * _tmp216 + _tmp189 - _tmp218 * _tmp61;
  const Scalar _tmp220 =
      _tmp133 * (-_tmp123 * _tmp216 - _tmp130 * _tmp219 + _tmp197 * _tmp213 + _tmp200 - _tmp201 -
                 _tmp206 + _tmp207 * _tmp208 + _tmp210 - _tmp211 * _tmp212);
  const Scalar _tmp221 = _tmp131 * _tmp132;
  const Scalar _tmp222 = _tmp195 * _tmp221;
  const Scalar _tmp223 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp224 = _tmp211 * _tmp223;
  const Scalar _tmp225 = _tmp107 * _tmp131;
  const Scalar _tmp226 = _tmp224 * _tmp225;
  const Scalar _tmp227 = _tmp219 + _tmp220 + _tmp222 - _tmp226;
  const Scalar _tmp228 = _tmp136 * _tmp199 - _tmp160 * _tmp185 - _tmp167 * _tmp227 - _tmp185;
  const Scalar _tmp229 = _tmp108 * _tmp85;
  const Scalar _tmp230 = _tmp89 / _tmp92;
  const Scalar _tmp231 = _tmp158 * _tmp230;
  const Scalar _tmp232 = _tmp139 * _tmp157;
  const Scalar _tmp233 = _tmp117 * _tmp169;
  const Scalar _tmp234 = _tmp159 * _tmp185;
  const Scalar _tmp235 = _tmp162 * _tmp72;
  const Scalar _tmp236 = _tmp186 * _tmp230;
  const Scalar _tmp237 = _tmp157 * _tmp70;
  const Scalar _tmp238 = _tmp100 * _tmp142;
  const Scalar _tmp239 = Scalar(1.0) * _tmp162;
  const Scalar _tmp240 = Scalar(1.0) * _tmp85;
  const Scalar _tmp241 = _tmp144 * _tmp157;
  const Scalar _tmp242 = _tmp150 * _tmp195;
  const Scalar _tmp243 = _tmp107 * _tmp149;
  const Scalar _tmp244 = _tmp224 * _tmp243;
  const Scalar _tmp245 = Scalar(1.0) * _tmp191;
  const Scalar _tmp246 = _tmp146 * _tmp193;
  const Scalar _tmp247 = Scalar(1.0) * _tmp188 - _tmp245 * _tmp61 - _tmp246 * _tmp61;
  const Scalar _tmp248 = _tmp129 * _tmp148;
  const Scalar _tmp249 = _tmp108 * _tmp148;
  const Scalar _tmp250 = _tmp133 * (-_tmp130 * _tmp247 - _tmp146 * _tmp207 + _tmp197 * _tmp248 +
                                    Scalar(1.0) * _tmp209 - _tmp211 * _tmp249);
  const Scalar _tmp251 = _tmp242 - _tmp244 + _tmp247 + _tmp250;
  const Scalar _tmp252 = _tmp152 * _tmp199 - _tmp166 * _tmp185 - _tmp167 * _tmp251;
  const Scalar _tmp253 = _tmp154 * _tmp157;
  const Scalar _tmp254 = _tmp117 * _tmp164;
  const Scalar _tmp255 = _tmp116 * _tmp184;
  const Scalar _tmp256 = _tmp117 * _tmp173;
  const Scalar _tmp257 = _tmp117 * _tmp161;
  const Scalar _tmp258 =
      -_tmp161 * _tmp255 - _tmp164 * _tmp255 - _tmp169 * _tmp255 - _tmp173 * _tmp255 -
      _tmp232 * (-_tmp136 * _tmp198 + _tmp159 * _tmp228 - _tmp186 * _tmp231 + _tmp227 * _tmp229) +
      _tmp233 -
      _tmp237 * (-_tmp171 * _tmp234 + _tmp172 * _tmp236 + _tmp197 * _tmp235 - _tmp198 * _tmp72) -
      _tmp241 * (-_tmp163 * _tmp234 + _tmp224 * _tmp239 - _tmp224 * _tmp240 + _tmp236 * _tmp238) -
      _tmp253 * (-_tmp152 * _tmp198 + _tmp159 * _tmp252 - _tmp168 * _tmp236 + _tmp229 * _tmp251) +
      _tmp254 + _tmp256 + _tmp257;
  const Scalar _tmp259 = Scalar(1.4083112389913199) * _tmp258;
  const Scalar _tmp260 = std::cosh(_tmp180);
  const Scalar _tmp261 = std::pow(_tmp174, Scalar(-2));
  const Scalar _tmp262 = Scalar(0.71007031138673404) * _tmp178 * _tmp261;
  const Scalar _tmp263 = Scalar(1.0) / (_tmp39);
  const Scalar _tmp264 = _tmp105 * _tmp197;
  const Scalar _tmp265 = _tmp108 * _tmp194;
  const Scalar _tmp266 = -_tmp109 * _tmp251 + _tmp135 * _tmp242 - _tmp135 * _tmp244 +
                         _tmp135 * _tmp250 + _tmp152 * _tmp264 - _tmp152 * _tmp265 + _tmp245 +
                         _tmp246;
  const Scalar _tmp267 = -_tmp109 * _tmp227 + _tmp135 * _tmp220 + _tmp135 * _tmp222 -
                         _tmp135 * _tmp226 + _tmp136 * _tmp264 - _tmp137 * _tmp194 + _tmp218;
  const Scalar _tmp268 = _tmp264 * _tmp72 - _tmp265 * _tmp72;
  const Scalar _tmp269 = _tmp112 * _tmp70;
  const Scalar _tmp270 = _tmp107 * _tmp64;
  const Scalar _tmp271 = _tmp224 * _tmp270;
  const Scalar _tmp272 = Scalar(1.0) * _tmp105;
  const Scalar _tmp273 = _tmp132 * _tmp64;
  const Scalar _tmp274 = _tmp195 * _tmp273;
  const Scalar _tmp275 =
      -_tmp142 * _tmp194 + _tmp224 * _tmp272 - _tmp271 * _tmp57 + _tmp274 * _tmp57;
  const Scalar _tmp276 = _tmp156 * _tmp261;
  const Scalar _tmp277 =
      _tmp175 *
          (_tmp140 * (-_tmp112 * _tmp267 + _tmp220 * _tmp64 + _tmp222 * _tmp64 - _tmp226 * _tmp64) +
           _tmp145 * (-_tmp112 * _tmp275 - _tmp271 + _tmp274) +
           _tmp155 * (-_tmp112 * _tmp266 + _tmp242 * _tmp64 - _tmp244 * _tmp64 + _tmp250 * _tmp64) -
           _tmp268 * _tmp269) -
      _tmp258 * _tmp276;
  const Scalar _tmp278 =
      std::pow(Scalar(std::pow(_tmp156, Scalar(2)) * _tmp261 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp279 = _tmp177 * _tmp278;
  const Scalar _tmp280 = Scalar(1.0) * _tmp278 * std::cosh(_tmp181);
  const Scalar _tmp281 = _tmp59 * _tmp70;
  const Scalar _tmp282 = _tmp139 * _tmp59;
  const Scalar _tmp283 = _tmp50 * _tmp64;
  const Scalar _tmp284 = _tmp154 * _tmp59;
  const Scalar _tmp285 = _tmp144 * _tmp59;
  const Scalar _tmp286 = _tmp111 * _tmp281 + _tmp138 * _tmp282 + _tmp143 * _tmp285 +
                         _tmp153 * _tmp284 - _tmp283 * _tmp65 + _tmp67 * _tmp68;
  const Scalar _tmp287 = _tmp142 * _tmp144;
  const Scalar _tmp288 = _tmp103 * _tmp139;
  const Scalar _tmp289 = _tmp103 * _tmp154;
  const Scalar _tmp290 = _tmp70 * _tmp72;
  const Scalar _tmp291 = _tmp167 * _tmp290;
  const Scalar _tmp292 =
      -_tmp103 * _tmp291 - _tmp104 * _tmp287 + _tmp158 * _tmp288 + _tmp168 * _tmp289;
  const Scalar _tmp293 = Scalar(1.0) / (_tmp292);
  const Scalar _tmp294 = std::asinh(_tmp286 * _tmp293);
  const Scalar _tmp295 = Scalar(1.0) * _tmp294;
  const Scalar _tmp296 = Scalar(1.0) * std::cosh(_tmp295);
  const Scalar _tmp297 = std::pow(_tmp292, Scalar(-2));
  const Scalar _tmp298 =
      std::pow(Scalar(std::pow(_tmp286, Scalar(2)) * _tmp297 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp299 = _tmp103 * _tmp185;
  const Scalar _tmp300 = _tmp144 * _tmp163;
  const Scalar _tmp301 = _tmp145 * _tmp224;
  const Scalar _tmp302 = _tmp170 * _tmp70;
  const Scalar _tmp303 = _tmp302 * _tmp85;
  const Scalar _tmp304 = _tmp197 * _tmp290;
  const Scalar _tmp305 = _tmp139 * _tmp158;
  const Scalar _tmp306 = _tmp100 * _tmp187 * _tmp287 + _tmp104 * _tmp301 + _tmp104 * _tmp304 -
                         _tmp154 * _tmp168 * _tmp187 + _tmp187 * _tmp291 - _tmp187 * _tmp305 +
                         _tmp228 * _tmp288 + _tmp252 * _tmp289 - _tmp299 * _tmp300 -
                         _tmp299 * _tmp303;
  const Scalar _tmp307 = _tmp286 * _tmp297;
  const Scalar _tmp308 =
      _tmp298 *
      (_tmp293 * (_tmp266 * _tmp284 + _tmp267 * _tmp282 + _tmp268 * _tmp281 + _tmp275 * _tmp285) -
       _tmp306 * _tmp307);
  const Scalar _tmp309 = Scalar(1.4083112389913199) * _tmp294;
  const Scalar _tmp310 = Scalar(1.4083112389913199) * _tmp292;
  const Scalar _tmp311 = Scalar(0.71007031138673404) * _tmp293;
  const Scalar _tmp312 =
      -_tmp292 * _tmp309 - std::sqrt(Scalar(std::pow(Scalar(-_tmp87 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp90 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp313 = Scalar(0.71007031138673404) * _tmp297 * _tmp312;
  const Scalar _tmp314 = _tmp311 * _tmp312;
  const Scalar _tmp315 = std::cosh(_tmp314);
  const Scalar _tmp316 = -Scalar(1.4083112389913199) * std::sinh(_tmp295) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp314);
  const Scalar _tmp317 = _tmp108 * _tmp139;
  const Scalar _tmp318 = _tmp152 * _tmp154;
  const Scalar _tmp319 = _tmp108 * _tmp154;
  const Scalar _tmp320 = _tmp136 * _tmp139;
  const Scalar _tmp321 = -_tmp197 * _tmp318 - _tmp197 * _tmp320 + _tmp227 * _tmp317 +
                         _tmp251 * _tmp319 - _tmp301 - _tmp304;
  const Scalar _tmp322 = _tmp137 * _tmp139 + _tmp154 * _tmp165 + _tmp287 + _tmp302;
  const Scalar _tmp323 = Scalar(1.0) / (_tmp322);
  const Scalar _tmp324 = _tmp139 * _tmp63;
  const Scalar _tmp325 = _tmp154 * _tmp63;
  const Scalar _tmp326 = _tmp110 * _tmp70 - _tmp134 * _tmp324 - _tmp141 * _tmp144 -
                         _tmp151 * _tmp325 + _tmp283 - _tmp67 * _tmp69;
  const Scalar _tmp327 = std::asinh(_tmp323 * _tmp326);
  const Scalar _tmp328 = Scalar(1.0) * _tmp327;
  const Scalar _tmp329 = Scalar(1.4083112389913199) * _tmp327;
  const Scalar _tmp330 =
      -_tmp322 * _tmp329 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp77 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp331 = Scalar(0.71007031138673404) * _tmp323;
  const Scalar _tmp332 = _tmp330 * _tmp331;
  const Scalar _tmp333 = -Scalar(1.4083112389913199) * std::sinh(_tmp328) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp332);
  const Scalar _tmp334 = std::pow(_tmp322, Scalar(-2));
  const Scalar _tmp335 = Scalar(0.71007031138673404) * _tmp330 * _tmp334;
  const Scalar _tmp336 = Scalar(1.4083112389913199) * _tmp322;
  const Scalar _tmp337 =
      std::pow(Scalar(std::pow(_tmp326, Scalar(2)) * _tmp334 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp338 = _tmp326 * _tmp334;
  const Scalar _tmp339 =
      _tmp337 *
      (-_tmp321 * _tmp338 +
       _tmp323 * (_tmp144 * _tmp271 - _tmp144 * _tmp274 - _tmp220 * _tmp324 - _tmp222 * _tmp324 +
                  _tmp226 * _tmp324 - _tmp242 * _tmp325 + _tmp244 * _tmp325 - _tmp250 * _tmp325));
  const Scalar _tmp340 = std::cosh(_tmp332);
  const Scalar _tmp341 = Scalar(1.0) * std::cosh(_tmp328);
  const Scalar _tmp342 = _tmp183 * _tmp82;
  const Scalar _tmp343 = _tmp342 * _tmp94;
  const Scalar _tmp344 = _tmp100 * _tmp343;
  const Scalar _tmp345 = _tmp103 * _tmp82;
  const Scalar _tmp346 = _tmp123 * _tmp345;
  const Scalar _tmp347 = _tmp157 * (_tmp114 * _tmp204 - _tmp118 - _tmp203 * _tmp205);
  const Scalar _tmp348 = -_tmp101 * _tmp200 + _tmp347 * _tmp94;
  const Scalar _tmp349 = -_tmp104 * _tmp348 - _tmp123 * _tmp344 - _tmp200 * _tmp99 +
                         _tmp346 * _tmp85 + _tmp347 * _tmp85;
  const Scalar _tmp350 = _tmp223 * _tmp349;
  const Scalar _tmp351 = _tmp225 * _tmp350;
  const Scalar _tmp352 = _tmp26 * _tmp82;
  const Scalar _tmp353 = _tmp352 * _tmp94;
  const Scalar _tmp354 = _tmp345 * _tmp98;
  const Scalar _tmp355 =
      -_tmp104 * _tmp353 - _tmp344 * _tmp98 + _tmp352 * _tmp85 + _tmp354 * _tmp85;
  const Scalar _tmp356 = _tmp106 * _tmp345;
  const Scalar _tmp357 = -_tmp106 * _tmp344 - _tmp355 * _tmp61 + _tmp356 * _tmp85;
  const Scalar _tmp358 = _tmp221 * _tmp357;
  const Scalar _tmp359 = _tmp196 * _tmp357;
  const Scalar _tmp360 = _tmp185 * _tmp217 + _tmp191 - _tmp352 - _tmp354;
  const Scalar _tmp361 = _tmp188 - _tmp356 - _tmp360 * _tmp61;
  const Scalar _tmp362 =
      _tmp133 * (-_tmp130 * _tmp361 + _tmp200 * _tmp84 + _tmp208 * _tmp348 + _tmp209 -
                 _tmp212 * _tmp349 + _tmp213 * _tmp359 - _tmp346 - _tmp347);
  const Scalar _tmp363 = -_tmp351 + _tmp358 + _tmp361 + _tmp362;
  const Scalar _tmp364 = _tmp359 * _tmp85;
  const Scalar _tmp365 = _tmp100 * _tmp359;
  const Scalar _tmp366 = _tmp136 * _tmp365 + _tmp160 * _tmp82 - _tmp167 * _tmp363 + _tmp82;
  const Scalar _tmp367 = _tmp345 * _tmp94;
  const Scalar _tmp368 = _tmp230 * _tmp342;
  const Scalar _tmp369 = _tmp150 * _tmp357;
  const Scalar _tmp370 = Scalar(1.0) * _tmp343;
  const Scalar _tmp371 = _tmp146 * _tmp353;
  const Scalar _tmp372 = _tmp370 * _tmp98;
  const Scalar _tmp373 = -_tmp106 * _tmp370 + _tmp371 * _tmp61 + _tmp372 * _tmp61;
  const Scalar _tmp374 = _tmp133 * (-_tmp123 * _tmp370 - _tmp130 * _tmp373 - _tmp146 * _tmp348 +
                                    _tmp248 * _tmp359 - _tmp249 * _tmp349);
  const Scalar _tmp375 = _tmp243 * _tmp350;
  const Scalar _tmp376 = _tmp369 + _tmp373 + _tmp374 - _tmp375;
  const Scalar _tmp377 = _tmp152 * _tmp365 + _tmp166 * _tmp82 - _tmp167 * _tmp376;
  const Scalar _tmp378 = _tmp168 * _tmp342;
  const Scalar _tmp379 =
      -_tmp232 * (-_tmp136 * _tmp364 + _tmp159 * _tmp366 + _tmp229 * _tmp363 + _tmp231 * _tmp342) +
      _tmp233 * _tmp84 -
      _tmp237 * (_tmp171 * _tmp367 - _tmp172 * _tmp368 + _tmp235 * _tmp359 - _tmp364 * _tmp72) -
      _tmp241 * (_tmp163 * _tmp367 - _tmp238 * _tmp368 + _tmp239 * _tmp350 - _tmp240 * _tmp350) -
      _tmp253 * (-_tmp152 * _tmp364 + _tmp159 * _tmp377 + _tmp229 * _tmp376 + _tmp230 * _tmp378) +
      _tmp254 * _tmp84 + _tmp256 * _tmp84 + _tmp257 * _tmp84;
  const Scalar _tmp380 = Scalar(1.4083112389913199) * _tmp379;
  const Scalar _tmp381 = _tmp105 * _tmp359;
  const Scalar _tmp382 = -_tmp109 * _tmp376 + _tmp135 * _tmp369 + _tmp135 * _tmp374 -
                         _tmp135 * _tmp375 + _tmp152 * _tmp381 - _tmp165 * _tmp355 - _tmp371 -
                         _tmp372;
  const Scalar _tmp383 = _tmp270 * _tmp350;
  const Scalar _tmp384 = _tmp273 * _tmp357;
  const Scalar _tmp385 =
      -_tmp142 * _tmp355 + _tmp272 * _tmp350 - _tmp383 * _tmp57 + _tmp384 * _tmp57;
  const Scalar _tmp386 = -_tmp109 * _tmp363 - _tmp135 * _tmp351 + _tmp135 * _tmp358 +
                         _tmp135 * _tmp362 + _tmp136 * _tmp381 - _tmp137 * _tmp355 + _tmp360;
  const Scalar _tmp387 = -_tmp170 * _tmp355 + _tmp381 * _tmp72;
  const Scalar _tmp388 =
      _tmp175 *
          (_tmp140 * (-_tmp112 * _tmp386 - _tmp351 * _tmp64 + _tmp358 * _tmp64 + _tmp362 * _tmp64) +
           _tmp145 * (-_tmp112 * _tmp385 - _tmp383 + _tmp384) +
           _tmp155 * (-_tmp112 * _tmp382 + _tmp369 * _tmp64 + _tmp374 * _tmp64 - _tmp375 * _tmp64) -
           _tmp269 * _tmp387) -
      _tmp276 * _tmp379;
  const Scalar _tmp389 = _tmp145 * _tmp350;
  const Scalar _tmp390 = _tmp290 * _tmp359;
  const Scalar _tmp391 = _tmp104 * _tmp389 + _tmp104 * _tmp390 + _tmp154 * _tmp378 * _tmp94 -
                         _tmp287 * _tmp344 + _tmp288 * _tmp366 + _tmp289 * _tmp377 -
                         _tmp291 * _tmp343 + _tmp300 * _tmp345 + _tmp303 * _tmp345 +
                         _tmp305 * _tmp343;
  const Scalar _tmp392 =
      _tmp298 *
      (_tmp293 * (_tmp281 * _tmp387 + _tmp282 * _tmp386 + _tmp284 * _tmp382 + _tmp285 * _tmp385) -
       _tmp307 * _tmp391);
  const Scalar _tmp393 = _tmp317 * _tmp363 - _tmp318 * _tmp359 + _tmp319 * _tmp376 -
                         _tmp320 * _tmp359 - _tmp389 - _tmp390;
  const Scalar _tmp394 =
      _tmp337 *
      (_tmp323 * (_tmp144 * _tmp383 - _tmp144 * _tmp384 + _tmp324 * _tmp351 - _tmp324 * _tmp358 -
                  _tmp324 * _tmp362 - _tmp325 * _tmp369 - _tmp325 * _tmp374 + _tmp325 * _tmp375) -
       _tmp338 * _tmp393);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp177 * (-_tmp260 * (_tmp179 * (-_tmp176 * _tmp259 - _tmp18 * _tmp263 - _tmp277 * _tmp279) -
                             _tmp258 * _tmp262) -
                 _tmp277 * _tmp280) -
      _tmp18 * _tmp38 + _tmp182 * _tmp259;
  _res(2, 0) =
      _tmp306 * _tmp316 +
      _tmp310 *
          (-_tmp296 * _tmp308 -
           _tmp315 * (-_tmp306 * _tmp313 + _tmp311 * (-_tmp306 * _tmp309 - _tmp308 * _tmp310)));
  _res(3, 0) =
      _tmp321 * _tmp333 +
      _tmp336 *
          (-_tmp339 * _tmp341 -
           _tmp340 * (-_tmp321 * _tmp335 + _tmp331 * (-_tmp321 * _tmp329 - _tmp336 * _tmp339)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp177 * (-_tmp260 * (_tmp179 * (-_tmp176 * _tmp380 - _tmp263 * _tmp36 - _tmp279 * _tmp388) -
                             _tmp262 * _tmp379) -
                 _tmp280 * _tmp388) +
      _tmp182 * _tmp380 - _tmp36 * _tmp38;
  _res(2, 1) =
      _tmp310 *
          (-_tmp296 * _tmp392 -
           _tmp315 * (_tmp311 * (-_tmp309 * _tmp391 - _tmp310 * _tmp392) - _tmp313 * _tmp391)) +
      _tmp316 * _tmp391;
  _res(3, 1) =
      _tmp333 * _tmp393 +
      _tmp336 *
          (-_tmp340 * (_tmp331 * (-_tmp329 * _tmp393 - _tmp336 * _tmp394) - _tmp335 * _tmp393) -
           _tmp341 * _tmp394);
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp27 * _tmp38;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
