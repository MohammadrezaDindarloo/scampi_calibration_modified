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
 * Symbolic function: IK_residual_func_cost1_wrt_pa_Nl18
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPaNl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1215

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (395)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp2 * _tmp7;
  const Scalar _tmp14 = _tmp0 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp21 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp22 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp22 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp26 = _tmp6 * _tmp9;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = _tmp32 - p_a(1, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp21 + _tmp34;
  const Scalar _tmp36 = std::sqrt(_tmp35);
  const Scalar _tmp37 = _tmp20 * _tmp36;
  const Scalar _tmp38 = _tmp12 + _tmp15;
  const Scalar _tmp39 = _tmp38 + _tmp4;
  const Scalar _tmp40 = _tmp39 + position_vector(0, 0);
  const Scalar _tmp41 = _tmp40 - p_c(0, 0);
  const Scalar _tmp42 = _tmp28 + _tmp29;
  const Scalar _tmp43 = _tmp23 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 - p_c(1, 0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp49 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp50 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp51 = _tmp49 - _tmp50;
  const Scalar _tmp52 = _tmp48 + _tmp51;
  const Scalar _tmp53 = _tmp16 + _tmp4;
  const Scalar _tmp54 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 - p_b(0, 0);
  const Scalar _tmp56 = std::pow(_tmp55, Scalar(2));
  const Scalar _tmp57 = _tmp24 + _tmp42;
  const Scalar _tmp58 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 - p_b(1, 0);
  const Scalar _tmp60 = _tmp56 + std::pow(_tmp59, Scalar(2));
  const Scalar _tmp61 = std::pow(_tmp60, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp55 * _tmp61;
  const Scalar _tmp63 = -_tmp48;
  const Scalar _tmp64 = _tmp51 + _tmp63;
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = -_tmp52 * _tmp62 + _tmp65;
  const Scalar _tmp67 = _tmp59 * _tmp61;
  const Scalar _tmp68 = _tmp20 * _tmp33;
  const Scalar _tmp69 = _tmp62 * _tmp68;
  const Scalar _tmp70 = -_tmp67 + _tmp69;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp45 * _tmp46;
  const Scalar _tmp73 = _tmp47 * _tmp68 - _tmp72;
  const Scalar _tmp74 = _tmp71 * _tmp73;
  const Scalar _tmp75 = _tmp47 * _tmp64;
  const Scalar _tmp76 = _tmp49 + _tmp50;
  const Scalar _tmp77 = _tmp48 + _tmp76;
  const Scalar _tmp78 = _tmp20 * _tmp64;
  const Scalar _tmp79 = _tmp33 * _tmp78;
  const Scalar _tmp80 = _tmp52 * _tmp67 - _tmp62 * _tmp79;
  const Scalar _tmp81 = -_tmp47 * _tmp79 + _tmp72 * _tmp77 - _tmp74 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) * _tmp31;
  const Scalar _tmp83 = -_tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp57 + _tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp17;
  const Scalar _tmp86 = -_tmp53 + _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = -_tmp47 * _tmp77 - _tmp66 * _tmp74 + _tmp75 - _tmp81 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp84;
  const Scalar _tmp91 = _tmp86 * _tmp90;
  const Scalar _tmp92 = _tmp80 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) * _tmp71;
  const Scalar _tmp94 = -_tmp66 * _tmp93 + _tmp71 * _tmp92;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp36);
  const Scalar _tmp96 = _tmp31 * _tmp95;
  const Scalar _tmp97 = _tmp17 * _tmp95;
  const Scalar _tmp98 = -_tmp19 * _tmp96 + _tmp33 * _tmp97;
  const Scalar _tmp99 = _tmp37 * _tmp98;
  const Scalar _tmp100 = -_tmp53 * _tmp67 + _tmp57 * _tmp62 + _tmp62 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp74 - _tmp39 * _tmp72 + _tmp43 * _tmp47 + _tmp47 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp89;
  const Scalar _tmp103 = -_tmp100 * _tmp93 - _tmp102 * _tmp94;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp105 = _tmp104 * _tmp88;
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp106 + _tmp94;
  const Scalar _tmp108 = _tmp107 * _tmp89;
  const Scalar _tmp109 = _tmp108 * _tmp47;
  const Scalar _tmp110 = _tmp73 * _tmp89;
  const Scalar _tmp111 = -_tmp107 * _tmp110 + Scalar(1.0);
  const Scalar _tmp112 = _tmp62 * _tmp71;
  const Scalar _tmp113 = _tmp38 + _tmp5;
  const Scalar _tmp114 = _tmp113 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp115 = _tmp23 + _tmp30;
  const Scalar _tmp116 = _tmp115 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp117 =
      std::pow(Scalar(std::pow(_tmp114, Scalar(2)) + std::pow(_tmp116, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp118 = _tmp116 * _tmp117;
  const Scalar _tmp119 = _tmp118 * fh1;
  const Scalar _tmp120 = _tmp119 * (_tmp109 + _tmp111 * _tmp112);
  const Scalar _tmp121 = Scalar(1.0) * _tmp104;
  const Scalar _tmp122 = _tmp62 * _tmp74;
  const Scalar _tmp123 = _tmp114 * _tmp117;
  const Scalar _tmp124 = fh1 * (_tmp113 * _tmp118 - _tmp115 * _tmp123);
  const Scalar _tmp125 = _tmp124 * (-_tmp121 * _tmp122 + _tmp121 * _tmp47);
  const Scalar _tmp126 = _tmp68 * _tmp71;
  const Scalar _tmp127 = _tmp126 * _tmp80 + _tmp79;
  const Scalar _tmp128 = _tmp126 * _tmp66 - _tmp127 * _tmp87 - _tmp64;
  const Scalar _tmp129 = _tmp100 * _tmp126 - _tmp102 * _tmp128 - _tmp99;
  const Scalar _tmp130 = _tmp105 * _tmp129;
  const Scalar _tmp131 = _tmp128 + _tmp130;
  const Scalar _tmp132 = _tmp131 * _tmp89;
  const Scalar _tmp133 = -_tmp132 * _tmp73 - _tmp68;
  const Scalar _tmp134 = _tmp132 * _tmp47;
  const Scalar _tmp135 = _tmp123 * fh1;
  const Scalar _tmp136 = _tmp135 * (_tmp112 * _tmp133 + _tmp134 + Scalar(1.0));
  const Scalar _tmp137 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp138 = _tmp82 * _tmp87 + _tmp85;
  const Scalar _tmp139 = 0;
  const Scalar _tmp140 = _tmp139 * _tmp89;
  const Scalar _tmp141 = _tmp140 * _tmp47;
  const Scalar _tmp142 = _tmp137 * (-_tmp122 * _tmp140 + _tmp141);
  const Scalar _tmp143 = -_tmp120 * _tmp37 - _tmp125 * _tmp37 - _tmp136 * _tmp37 - _tmp142 * _tmp37;
  const Scalar _tmp144 = Scalar(1.0) / (_tmp143);
  const Scalar _tmp145 = Scalar(0.71007031138673404) * _tmp144;
  const Scalar _tmp146 = -_tmp32 + p_a(1, 0);
  const Scalar _tmp147 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp148 =
      std::sqrt(Scalar(std::pow(_tmp146, Scalar(2)) + std::pow(_tmp147, Scalar(2))));
  const Scalar _tmp149 = _tmp43 + _tmp83;
  const Scalar _tmp150 = _tmp149 * _tmp87;
  const Scalar _tmp151 = Scalar(1.0) / (-_tmp150 - _tmp39 + _tmp85);
  const Scalar _tmp152 = Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = _tmp81 * _tmp89;
  const Scalar _tmp154 = _tmp149 * _tmp151;
  const Scalar _tmp155 = _tmp127 + _tmp130 * _tmp154 - _tmp131 * _tmp153;
  const Scalar _tmp156 = Scalar(1.0) * _tmp135;
  const Scalar _tmp157 = _tmp149 * _tmp84;
  const Scalar _tmp158 = fh1 * (_tmp63 + _tmp76);
  const Scalar _tmp159 = Scalar(40.024799999999999) * _tmp11 + _tmp113 * fv1 + _tmp123 * _tmp158;
  const Scalar _tmp160 = _tmp138 * _tmp151;
  const Scalar _tmp161 = -_tmp139 * _tmp153 - _tmp149 * _tmp160 + _tmp83;
  const Scalar _tmp162 = _tmp105 * _tmp152;
  const Scalar _tmp163 = -_tmp121 * _tmp81 + _tmp149 * _tmp162;
  const Scalar _tmp164 = Scalar(1.0) * _tmp124;
  const Scalar _tmp165 = -_tmp115 * fv1 - _tmp118 * _tmp158 - Scalar(40.024799999999999) * _tmp27;
  const Scalar _tmp166 = _tmp150 * _tmp152 + Scalar(1.0);
  const Scalar _tmp167 = _tmp152 * _tmp87;
  const Scalar _tmp168 = _tmp106 * _tmp154 - _tmp107 * _tmp153 - _tmp80 * _tmp93;
  const Scalar _tmp169 = Scalar(1.0) * _tmp119;
  const Scalar _tmp170 =
      Scalar(1.0) * _tmp137 * (-_tmp138 * _tmp152 - _tmp161 * _tmp90 + Scalar(1.0)) +
      _tmp156 * (_tmp130 * _tmp152 - _tmp155 * _tmp90) +
      Scalar(1.0) * _tmp159 * (_tmp152 * _tmp157 - _tmp152) +
      _tmp164 * (_tmp162 - _tmp163 * _tmp90) +
      Scalar(1.0) * _tmp165 * (-_tmp166 * _tmp90 + _tmp167) +
      _tmp169 * (_tmp106 * _tmp152 - _tmp168 * _tmp90);
  const Scalar _tmp171 = std::asinh(_tmp144 * _tmp170);
  const Scalar _tmp172 = Scalar(1.4083112389913199) * _tmp143;
  const Scalar _tmp173 = -_tmp148 - _tmp171 * _tmp172;
  const Scalar _tmp174 = _tmp145 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp171;
  const Scalar _tmp176 = _tmp145 * p_a(2, 0) - std::cosh(_tmp174) + std::cosh(_tmp175);
  const Scalar _tmp177 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp178 = Scalar(1.0) / (_tmp21);
  const Scalar _tmp179 = _tmp178 * _tmp33;
  const Scalar _tmp180 = _tmp177 * _tmp179;
  const Scalar _tmp181 = _tmp100 * _tmp62;
  const Scalar _tmp182 = _tmp180 * _tmp181;
  const Scalar _tmp183 = _tmp95 * _tmp98;
  const Scalar _tmp184 = _tmp183 * _tmp47;
  const Scalar _tmp185 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp186 = _tmp185 * _tmp31;
  const Scalar _tmp187 = _tmp17 * _tmp185;
  const Scalar _tmp188 = _tmp19 * _tmp33;
  const Scalar _tmp189 = _tmp37 * (-_tmp186 * _tmp21 + _tmp187 * _tmp188 + _tmp96);
  const Scalar _tmp190 = _tmp178 * _tmp36;
  const Scalar _tmp191 = _tmp190 * _tmp98;
  const Scalar _tmp192 = -_tmp183 * _tmp62 + _tmp189 * _tmp62 + _tmp191 * _tmp62;
  const Scalar _tmp193 = _tmp179 * _tmp71;
  const Scalar _tmp194 = _tmp100 * _tmp193;
  const Scalar _tmp195 = _tmp182 * _tmp73 - _tmp184 + _tmp189 * _tmp47 + _tmp191 * _tmp47 -
                         _tmp192 * _tmp74 - _tmp194 * _tmp47;
  const Scalar _tmp196 = std::pow(_tmp101, Scalar(-2));
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = _tmp129 * _tmp88;
  const Scalar _tmp199 = _tmp197 * _tmp198;
  const Scalar _tmp200 = _tmp34 / [&]() {
    const Scalar base = _tmp19;
    return base * base * base;
  }();
  const Scalar _tmp201 = _tmp177 * _tmp200;
  const Scalar _tmp202 = _tmp62 * _tmp66;
  const Scalar _tmp203 = _tmp180 * _tmp202;
  const Scalar _tmp204 = _tmp193 * _tmp80;
  const Scalar _tmp205 = _tmp62 * _tmp80;
  const Scalar _tmp206 = _tmp180 * _tmp205;
  const Scalar _tmp207 = _tmp179 * _tmp65;
  const Scalar _tmp208 = -_tmp179 * _tmp75 - _tmp204 * _tmp47 + _tmp206 * _tmp73 + _tmp207 * _tmp74;
  const Scalar _tmp209 = _tmp193 * _tmp66;
  const Scalar _tmp210 = _tmp203 * _tmp73 - _tmp208 * _tmp87 - _tmp209 * _tmp47;
  const Scalar _tmp211 = std::pow(_tmp88, Scalar(-2));
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = _tmp101 * _tmp128;
  const Scalar _tmp214 = _tmp179 * _tmp64 - _tmp200 * _tmp65 * _tmp71 - _tmp201 * _tmp205 + _tmp204;
  const Scalar _tmp215 = -_tmp201 * _tmp202 + _tmp209 - _tmp214 * _tmp87;
  const Scalar _tmp216 = _tmp195 * _tmp89;
  const Scalar _tmp217 =
      _tmp105 * (-_tmp102 * _tmp215 + _tmp126 * _tmp192 - _tmp128 * _tmp216 - _tmp181 * _tmp201 +
                 _tmp183 - _tmp189 - _tmp191 + _tmp194 + _tmp212 * _tmp213);
  const Scalar _tmp218 = _tmp104 * _tmp129;
  const Scalar _tmp219 = _tmp210 * _tmp218;
  const Scalar _tmp220 = -_tmp199 + _tmp215 + _tmp217 + _tmp219;
  const Scalar _tmp221 = _tmp47 * _tmp89;
  const Scalar _tmp222 = _tmp212 * _tmp47;
  const Scalar _tmp223 = _tmp56 / _tmp60;
  const Scalar _tmp224 = _tmp180 * _tmp223;
  const Scalar _tmp225 = _tmp212 * _tmp73;
  const Scalar _tmp226 = -_tmp110 * _tmp220 + _tmp131 * _tmp225 - _tmp134 * _tmp179 - _tmp179;
  const Scalar _tmp227 = _tmp135 * _tmp37;
  const Scalar _tmp228 = _tmp125 * _tmp95;
  const Scalar _tmp229 = _tmp140 * _tmp73;
  const Scalar _tmp230 = _tmp137 * _tmp37;
  const Scalar _tmp231 = _tmp120 * _tmp95;
  const Scalar _tmp232 = _tmp121 * _tmp73;
  const Scalar _tmp233 = Scalar(1.0) * _tmp47;
  const Scalar _tmp234 = _tmp104 * _tmp47 * _tmp93;
  const Scalar _tmp235 = _tmp179 * _tmp234;
  const Scalar _tmp236 = Scalar(1.0) * _tmp122;
  const Scalar _tmp237 = _tmp124 * _tmp37;
  const Scalar _tmp238 = _tmp103 * _tmp104;
  const Scalar _tmp239 = _tmp210 * _tmp238;
  const Scalar _tmp240 = _tmp101 * _tmp94;
  const Scalar _tmp241 = _tmp180 * _tmp62;
  const Scalar _tmp242 = _tmp193 * _tmp65;
  const Scalar _tmp243 = Scalar(1.0) * _tmp203 - _tmp241 * _tmp92 - _tmp242 * _tmp91;
  const Scalar _tmp244 = _tmp105 * (-_tmp102 * _tmp243 + Scalar(1.0) * _tmp182 - _tmp192 * _tmp93 +
                                    _tmp212 * _tmp240 - _tmp216 * _tmp94);
  const Scalar _tmp245 = _tmp103 * _tmp88;
  const Scalar _tmp246 = _tmp197 * _tmp245;
  const Scalar _tmp247 = _tmp239 + _tmp243 + _tmp244 - _tmp246;
  const Scalar _tmp248 = _tmp111 * _tmp223;
  const Scalar _tmp249 = _tmp107 * _tmp225 - _tmp109 * _tmp179 - _tmp110 * _tmp247;
  const Scalar _tmp250 = _tmp119 * _tmp37;
  const Scalar _tmp251 = _tmp142 * _tmp95;
  const Scalar _tmp252 = _tmp136 * _tmp95;
  const Scalar _tmp253 =
      -_tmp120 * _tmp190 - _tmp125 * _tmp190 - _tmp136 * _tmp190 - _tmp142 * _tmp190 -
      _tmp227 * (_tmp112 * _tmp226 - _tmp131 * _tmp222 - _tmp133 * _tmp224 + _tmp220 * _tmp221) +
      _tmp228 -
      _tmp230 * (-_tmp112 * _tmp141 * _tmp179 + _tmp122 * _tmp139 * _tmp212 - _tmp139 * _tmp222 +
                 _tmp224 * _tmp229) +
      _tmp231 -
      _tmp237 * (-_tmp197 * _tmp233 + _tmp197 * _tmp236 + _tmp224 * _tmp232 - _tmp235 * _tmp62) -
      _tmp250 * (-_tmp107 * _tmp222 + _tmp112 * _tmp249 - _tmp180 * _tmp248 + _tmp221 * _tmp247) +
      _tmp251 + _tmp252;
  const Scalar _tmp254 = Scalar(1.4083112389913199) * _tmp253;
  const Scalar _tmp255 = _tmp107 * _tmp81;
  const Scalar _tmp256 = -_tmp108 * _tmp208 - _tmp153 * _tmp247 + _tmp154 * _tmp239 +
                         _tmp154 * _tmp244 - _tmp154 * _tmp246 + Scalar(1.0) * _tmp206 +
                         _tmp207 * _tmp93 + _tmp212 * _tmp255;
  const Scalar _tmp257 = _tmp212 * _tmp81;
  const Scalar _tmp258 = _tmp139 * _tmp257 - _tmp140 * _tmp208;
  const Scalar _tmp259 = _tmp137 * _tmp90;
  const Scalar _tmp260 = _tmp131 * _tmp257 - _tmp132 * _tmp208 - _tmp153 * _tmp220 -
                         _tmp154 * _tmp199 + _tmp154 * _tmp217 + _tmp154 * _tmp219 + _tmp214;
  const Scalar _tmp261 = Scalar(1.0) * _tmp81;
  const Scalar _tmp262 = _tmp104 * _tmp152;
  const Scalar _tmp263 = _tmp210 * _tmp262;
  const Scalar _tmp264 = _tmp152 * _tmp88;
  const Scalar _tmp265 = _tmp197 * _tmp264;
  const Scalar _tmp266 =
      -_tmp121 * _tmp208 + _tmp149 * _tmp263 - _tmp149 * _tmp265 + _tmp197 * _tmp261;
  const Scalar _tmp267 = std::pow(_tmp143, Scalar(-2));
  const Scalar _tmp268 = _tmp170 * _tmp267;
  const Scalar _tmp269 = _tmp144 * (_tmp156 * (-_tmp152 * _tmp199 + _tmp152 * _tmp217 +
                                               _tmp152 * _tmp219 - _tmp260 * _tmp90) +
                                    _tmp164 * (_tmp263 - _tmp265 - _tmp266 * _tmp90) +
                                    _tmp169 * (_tmp152 * _tmp239 + _tmp152 * _tmp244 -
                                               _tmp152 * _tmp246 - _tmp256 * _tmp90) -
                                    _tmp258 * _tmp259) -
                         _tmp253 * _tmp268;
  const Scalar _tmp270 =
      std::pow(Scalar(std::pow(_tmp170, Scalar(2)) * _tmp267 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp271 = Scalar(1.0) * _tmp270 * std::sinh(_tmp175);
  const Scalar _tmp272 = Scalar(0.71007031138673404) * _tmp267;
  const Scalar _tmp273 = _tmp272 * p_a(2, 0);
  const Scalar _tmp274 = _tmp173 * _tmp272;
  const Scalar _tmp275 = _tmp172 * _tmp270;
  const Scalar _tmp276 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp277 = std::sinh(_tmp174);
  const Scalar _tmp278 = _tmp135 * _tmp71;
  const Scalar _tmp279 = _tmp119 * _tmp71;
  const Scalar _tmp280 = _tmp121 * _tmp124;
  const Scalar _tmp281 = _tmp137 * _tmp140;
  const Scalar _tmp282 =
      _tmp111 * _tmp279 + _tmp133 * _tmp278 - _tmp280 * _tmp74 - _tmp281 * _tmp74;
  const Scalar _tmp283 = Scalar(1.0) / (_tmp282);
  const Scalar _tmp284 = _tmp137 * _tmp84;
  const Scalar _tmp285 = _tmp135 * _tmp84;
  const Scalar _tmp286 = _tmp124 * _tmp84;
  const Scalar _tmp287 = _tmp119 * _tmp84;
  const Scalar _tmp288 = _tmp152 * _tmp159;
  const Scalar _tmp289 = _tmp155 * _tmp285 - _tmp157 * _tmp288 + _tmp161 * _tmp284 +
                         _tmp163 * _tmp286 + _tmp165 * _tmp166 * _tmp84 + _tmp168 * _tmp287;
  const Scalar _tmp290 = std::asinh(_tmp283 * _tmp289);
  const Scalar _tmp291 = Scalar(1.4083112389913199) * _tmp282;
  const Scalar _tmp292 =
      -_tmp290 * _tmp291 - std::sqrt(Scalar(std::pow(Scalar(-_tmp54 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp58 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp293 = Scalar(0.71007031138673404) * _tmp283;
  const Scalar _tmp294 = _tmp292 * _tmp293;
  const Scalar _tmp295 = Scalar(1.0) * _tmp290;
  const Scalar _tmp296 = _tmp293 * p_b(2, 0) - std::cosh(_tmp294) + std::cosh(_tmp295);
  const Scalar _tmp297 = _tmp281 * _tmp47;
  const Scalar _tmp298 = _tmp111 * _tmp119;
  const Scalar _tmp299 = _tmp281 * _tmp73;
  const Scalar _tmp300 = _tmp135 * _tmp62;
  const Scalar _tmp301 = _tmp164 * _tmp197;
  const Scalar _tmp302 = _tmp280 * _tmp73;
  const Scalar _tmp303 = _tmp137 * _tmp139;
  const Scalar _tmp304 = _tmp212 * _tmp303;
  const Scalar _tmp305 = -_tmp124 * _tmp235 - _tmp133 * _tmp180 * _tmp300 - _tmp193 * _tmp297 +
                         _tmp226 * _tmp278 - _tmp241 * _tmp298 + _tmp241 * _tmp299 +
                         _tmp241 * _tmp302 + _tmp249 * _tmp279 + _tmp301 * _tmp74 +
                         _tmp304 * _tmp74;
  const Scalar _tmp306 = Scalar(1.4083112389913199) * _tmp305;
  const Scalar _tmp307 = std::sinh(_tmp294);
  const Scalar _tmp308 = std::pow(_tmp282, Scalar(-2));
  const Scalar _tmp309 = _tmp289 * _tmp308;
  const Scalar _tmp310 =
      std::pow(Scalar(std::pow(_tmp289, Scalar(2)) * _tmp308 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp311 =
      _tmp310 *
      (_tmp283 * (_tmp256 * _tmp287 + _tmp258 * _tmp284 + _tmp260 * _tmp285 + _tmp266 * _tmp286) -
       _tmp305 * _tmp309);
  const Scalar _tmp312 = Scalar(0.71007031138673404) * _tmp308;
  const Scalar _tmp313 = _tmp305 * _tmp312;
  const Scalar _tmp314 = Scalar(1.0) * std::sinh(_tmp295);
  const Scalar _tmp315 = _tmp135 * _tmp89;
  const Scalar _tmp316 = _tmp119 * _tmp89;
  const Scalar _tmp317 = -_tmp107 * _tmp119 * _tmp212 - _tmp131 * _tmp135 * _tmp212 +
                         _tmp220 * _tmp315 + _tmp247 * _tmp316 - _tmp301 - _tmp304;
  const Scalar _tmp318 = _tmp108 * _tmp119 + _tmp132 * _tmp135 + _tmp280 + _tmp281;
  const Scalar _tmp319 = std::pow(_tmp318, Scalar(-2));
  const Scalar _tmp320 = Scalar(0.71007031138673404) * _tmp319;
  const Scalar _tmp321 = _tmp320 * p_c(2, 0);
  const Scalar _tmp322 = Scalar(1.4083112389913199) * _tmp318;
  const Scalar _tmp323 = _tmp135 * _tmp151;
  const Scalar _tmp324 = _tmp119 * _tmp151;
  const Scalar _tmp325 = -_tmp106 * _tmp324 - _tmp124 * _tmp162 - _tmp130 * _tmp323 +
                         _tmp137 * _tmp160 - _tmp165 * _tmp167 + _tmp288;
  const Scalar _tmp326 =
      std::pow(Scalar(_tmp319 * std::pow(_tmp325, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp327 = _tmp319 * _tmp325;
  const Scalar _tmp328 = Scalar(1.0) / (_tmp318);
  const Scalar _tmp329 =
      _tmp326 *
      (-_tmp317 * _tmp327 +
       _tmp328 * (-_tmp124 * _tmp263 + _tmp124 * _tmp265 + _tmp199 * _tmp323 - _tmp217 * _tmp323 -
                  _tmp219 * _tmp323 - _tmp239 * _tmp324 - _tmp244 * _tmp324 + _tmp246 * _tmp324));
  const Scalar _tmp330 = std::asinh(_tmp325 * _tmp328);
  const Scalar _tmp331 = Scalar(1.4083112389913199) * _tmp317;
  const Scalar _tmp332 = Scalar(0.71007031138673404) * _tmp328;
  const Scalar _tmp333 =
      -_tmp322 * _tmp330 - std::sqrt(Scalar(std::pow(Scalar(-_tmp40 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp334 = _tmp320 * _tmp333;
  const Scalar _tmp335 = _tmp332 * _tmp333;
  const Scalar _tmp336 = std::sinh(_tmp335);
  const Scalar _tmp337 = Scalar(1.0) * _tmp330;
  const Scalar _tmp338 = Scalar(1.0) * std::sinh(_tmp337);
  const Scalar _tmp339 = _tmp332 * p_c(2, 0) - std::cosh(_tmp335) + std::cosh(_tmp337);
  const Scalar _tmp340 = _tmp177 * _tmp20;
  const Scalar _tmp341 = _tmp223 * _tmp340;
  const Scalar _tmp342 = _tmp20 * _tmp71;
  const Scalar _tmp343 = _tmp100 * _tmp342;
  const Scalar _tmp344 = _tmp37 * (-_tmp186 * _tmp188 + _tmp187 * _tmp34 - _tmp97);
  const Scalar _tmp345 = -_tmp183 * _tmp69 + _tmp344 * _tmp62;
  const Scalar _tmp346 = _tmp340 * _tmp62;
  const Scalar _tmp347 = _tmp100 * _tmp346;
  const Scalar _tmp348 =
      -_tmp184 * _tmp68 + _tmp343 * _tmp47 + _tmp344 * _tmp47 - _tmp345 * _tmp74 - _tmp347 * _tmp73;
  const Scalar _tmp349 = _tmp196 * _tmp348;
  const Scalar _tmp350 = _tmp20 * _tmp234;
  const Scalar _tmp351 = _tmp133 * _tmp340;
  const Scalar _tmp352 = _tmp342 * _tmp66;
  const Scalar _tmp353 = _tmp346 * _tmp66;
  const Scalar _tmp354 = _tmp62 * _tmp78;
  const Scalar _tmp355 = _tmp342 * _tmp80;
  const Scalar _tmp356 = _tmp346 * _tmp80;
  const Scalar _tmp357 = -_tmp354 * _tmp74 + _tmp355 * _tmp47 - _tmp356 * _tmp73 + _tmp47 * _tmp78;
  const Scalar _tmp358 = _tmp352 * _tmp47 - _tmp353 * _tmp73 - _tmp357 * _tmp87;
  const Scalar _tmp359 = _tmp211 * _tmp358;
  const Scalar _tmp360 = _tmp131 * _tmp359;
  const Scalar _tmp361 = _tmp198 * _tmp349;
  const Scalar _tmp362 = _tmp218 * _tmp358;
  const Scalar _tmp363 = _tmp348 * _tmp89;
  const Scalar _tmp364 = _tmp206 + _tmp242 - _tmp355 - _tmp78;
  const Scalar _tmp365 = _tmp203 - _tmp352 - _tmp364 * _tmp87;
  const Scalar _tmp366 =
      _tmp105 * (-_tmp102 * _tmp365 + _tmp126 * _tmp345 - _tmp128 * _tmp363 + _tmp182 +
                 _tmp183 * _tmp68 + _tmp213 * _tmp359 - _tmp343 - _tmp344);
  const Scalar _tmp367 = -_tmp361 + _tmp362 + _tmp365 + _tmp366;
  const Scalar _tmp368 = -_tmp110 * _tmp367 + _tmp134 * _tmp20 + _tmp20 + _tmp360 * _tmp73;
  const Scalar _tmp369 = _tmp139 * _tmp359;
  const Scalar _tmp370 = _tmp238 * _tmp358;
  const Scalar _tmp371 = _tmp112 * _tmp78 * _tmp91 + _tmp346 * _tmp92 - Scalar(1.0) * _tmp353;
  const Scalar _tmp372 = _tmp105 * (-_tmp102 * _tmp371 + _tmp240 * _tmp359 - _tmp345 * _tmp93 -
                                    Scalar(1.0) * _tmp347 - _tmp363 * _tmp94);
  const Scalar _tmp373 = _tmp245 * _tmp349;
  const Scalar _tmp374 = _tmp370 + _tmp371 + _tmp372 - _tmp373;
  const Scalar _tmp375 = _tmp107 * _tmp359;
  const Scalar _tmp376 = _tmp109 * _tmp20 - _tmp110 * _tmp374 + _tmp375 * _tmp73;
  const Scalar _tmp377 =
      -_tmp227 * (_tmp112 * _tmp368 + _tmp221 * _tmp367 + _tmp223 * _tmp351 - _tmp360 * _tmp47) +
      _tmp228 * _tmp68 -
      _tmp230 *
          (_tmp122 * _tmp369 + _tmp141 * _tmp342 * _tmp62 - _tmp229 * _tmp341 - _tmp369 * _tmp47) +
      _tmp231 * _tmp68 -
      _tmp237 * (-_tmp232 * _tmp341 - _tmp233 * _tmp349 + _tmp236 * _tmp349 + _tmp350 * _tmp62) -
      _tmp250 * (_tmp112 * _tmp376 + _tmp221 * _tmp374 + _tmp248 * _tmp340 - _tmp375 * _tmp47) +
      _tmp251 * _tmp68 + _tmp252 * _tmp68;
  const Scalar _tmp378 = Scalar(1.4083112389913199) * _tmp377;
  const Scalar _tmp379 = -_tmp132 * _tmp357 - _tmp153 * _tmp367 - _tmp154 * _tmp361 +
                         _tmp154 * _tmp362 + _tmp154 * _tmp366 + _tmp360 * _tmp81 + _tmp364;
  const Scalar _tmp380 = _tmp264 * _tmp349;
  const Scalar _tmp381 = _tmp262 * _tmp358;
  const Scalar _tmp382 =
      -_tmp121 * _tmp357 - _tmp149 * _tmp380 + _tmp149 * _tmp381 + _tmp261 * _tmp349;
  const Scalar _tmp383 = -_tmp140 * _tmp357 + _tmp369 * _tmp81;
  const Scalar _tmp384 = -_tmp108 * _tmp357 - _tmp153 * _tmp374 + _tmp154 * _tmp370 +
                         _tmp154 * _tmp372 - _tmp154 * _tmp373 + _tmp255 * _tmp359 -
                         _tmp354 * _tmp93 - Scalar(1.0) * _tmp356;
  const Scalar _tmp385 = _tmp144 * (_tmp156 * (-_tmp152 * _tmp361 + _tmp152 * _tmp362 +
                                               _tmp152 * _tmp366 - _tmp379 * _tmp90) +
                                    _tmp164 * (-_tmp380 + _tmp381 - _tmp382 * _tmp90) +
                                    _tmp169 * (_tmp152 * _tmp370 + _tmp152 * _tmp372 -
                                               _tmp152 * _tmp373 - _tmp384 * _tmp90) -
                                    _tmp259 * _tmp383) -
                         _tmp268 * _tmp377;
  const Scalar _tmp386 = _tmp303 * _tmp359;
  const Scalar _tmp387 = _tmp164 * _tmp349;
  const Scalar _tmp388 = _tmp124 * _tmp350 + _tmp278 * _tmp368 + _tmp279 * _tmp376 +
                         _tmp297 * _tmp342 + _tmp298 * _tmp346 - _tmp299 * _tmp346 +
                         _tmp300 * _tmp351 - _tmp302 * _tmp346 + _tmp386 * _tmp74 +
                         _tmp387 * _tmp74;
  const Scalar _tmp389 = _tmp312 * _tmp388;
  const Scalar _tmp390 =
      _tmp310 *
      (_tmp283 * (_tmp284 * _tmp383 + _tmp285 * _tmp379 + _tmp286 * _tmp382 + _tmp287 * _tmp384) -
       _tmp309 * _tmp388);
  const Scalar _tmp391 = Scalar(1.4083112389913199) * _tmp388;
  const Scalar _tmp392 = -_tmp119 * _tmp375 - _tmp135 * _tmp360 + _tmp315 * _tmp367 +
                         _tmp316 * _tmp374 - _tmp386 - _tmp387;
  const Scalar _tmp393 = Scalar(1.4083112389913199) * _tmp392;
  const Scalar _tmp394 =
      _tmp326 *
      (-_tmp327 * _tmp392 +
       _tmp328 * (_tmp124 * _tmp380 - _tmp124 * _tmp381 + _tmp323 * _tmp361 - _tmp323 * _tmp362 -
                  _tmp323 * _tmp366 - _tmp324 * _tmp370 - _tmp324 * _tmp372 + _tmp324 * _tmp373));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp172 *
          (-_tmp253 * _tmp273 + _tmp269 * _tmp271 -
           _tmp277 * (_tmp145 * (-_tmp147 * _tmp276 - _tmp171 * _tmp254 - _tmp269 * _tmp275) -
                      _tmp253 * _tmp274)) -
      _tmp176 * _tmp254;
  _res(2, 0) =
      -_tmp291 *
          (-_tmp307 * (-_tmp292 * _tmp313 + _tmp293 * (-_tmp290 * _tmp306 - _tmp291 * _tmp311)) +
           _tmp311 * _tmp314 - _tmp313 * p_b(2, 0)) -
      _tmp296 * _tmp306;
  _res(3, 0) =
      -_tmp322 *
          (-_tmp317 * _tmp321 + _tmp329 * _tmp338 -
           _tmp336 * (-_tmp317 * _tmp334 + _tmp332 * (-_tmp322 * _tmp329 - _tmp330 * _tmp331))) -
      _tmp331 * _tmp339;
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp172 *
          (_tmp271 * _tmp385 - _tmp273 * _tmp377 -
           _tmp277 * (_tmp145 * (-_tmp146 * _tmp276 - _tmp171 * _tmp378 - _tmp275 * _tmp385) -
                      _tmp274 * _tmp377)) -
      _tmp176 * _tmp378;
  _res(2, 1) =
      -_tmp291 *
          (-_tmp307 * (-_tmp292 * _tmp389 + _tmp293 * (-_tmp290 * _tmp391 - _tmp291 * _tmp390)) +
           _tmp314 * _tmp390 - _tmp389 * p_b(2, 0)) -
      _tmp296 * _tmp391;
  _res(3, 1) =
      -_tmp322 *
          (-_tmp321 * _tmp392 -
           _tmp336 * (_tmp332 * (-_tmp322 * _tmp394 - _tmp330 * _tmp393) - _tmp334 * _tmp392) +
           _tmp338 * _tmp394) -
      _tmp339 * _tmp393;
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
