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
 * Symbolic function: IK_residual_func_cost1_wrt_pa_Nl13
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPaNl13(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1218

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (396)
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
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp0 * _tmp4;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp21 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp0 * _tmp8;
  const Scalar _tmp25 = _tmp1 * _tmp4;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp28 + Scalar(0.20999999999999999);
  const Scalar _tmp30 = _tmp27 - _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = _tmp32 - p_a(1, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp21 + _tmp34;
  const Scalar _tmp36 = std::sqrt(_tmp35);
  const Scalar _tmp37 = _tmp20 * _tmp36;
  const Scalar _tmp38 = Scalar(1.0) * _tmp31;
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = _tmp27 + _tmp29;
  const Scalar _tmp41 = _tmp23 + _tmp40;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp39 + _tmp41);
  const Scalar _tmp43 = _tmp16 + _tmp6;
  const Scalar _tmp44 = Scalar(1.0) * _tmp17;
  const Scalar _tmp45 = _tmp42 * (-_tmp43 + _tmp44);
  const Scalar _tmp46 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp47 = -_tmp46;
  const Scalar _tmp48 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp49 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp47 + _tmp50;
  const Scalar _tmp52 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_d(0, 0);
  const Scalar _tmp54 = std::pow(_tmp53, Scalar(2));
  const Scalar _tmp55 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_d(1, 0);
  const Scalar _tmp57 = _tmp54 + std::pow(_tmp56, Scalar(2));
  const Scalar _tmp58 = std::pow(_tmp57, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp20 * _tmp33;
  const Scalar _tmp61 = _tmp48 - _tmp49;
  const Scalar _tmp62 = _tmp47 + _tmp61;
  const Scalar _tmp63 = _tmp53 * _tmp58;
  const Scalar _tmp64 = _tmp62 * _tmp63;
  const Scalar _tmp65 = _tmp51 * _tmp59 - _tmp60 * _tmp64;
  const Scalar _tmp66 = _tmp60 * _tmp63;
  const Scalar _tmp67 = -_tmp59 + _tmp66;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = Scalar(1.0) * _tmp68;
  const Scalar _tmp70 = _tmp65 * _tmp69;
  const Scalar _tmp71 = -_tmp51 * _tmp63 + _tmp64;
  const Scalar _tmp72 = _tmp45 * _tmp70 - _tmp69 * _tmp71;
  const Scalar _tmp73 = _tmp46 + _tmp61;
  const Scalar _tmp74 = _tmp12 + _tmp15;
  const Scalar _tmp75 = _tmp7 + _tmp74;
  const Scalar _tmp76 = _tmp75 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_b(0, 0);
  const Scalar _tmp78 = _tmp22 + _tmp30;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_b(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp77 * _tmp81;
  const Scalar _tmp84 = _tmp60 * _tmp83 - _tmp82;
  const Scalar _tmp85 = _tmp68 * _tmp84;
  const Scalar _tmp86 = _tmp62 * _tmp83;
  const Scalar _tmp87 = -_tmp60 * _tmp86 - _tmp65 * _tmp85 + _tmp73 * _tmp82;
  const Scalar _tmp88 = -_tmp45 * _tmp87 - _tmp71 * _tmp85 - _tmp73 * _tmp83 + _tmp86;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = Scalar(1.0) / (_tmp36);
  const Scalar _tmp91 = _tmp31 * _tmp90;
  const Scalar _tmp92 = _tmp17 * _tmp90;
  const Scalar _tmp93 = -_tmp19 * _tmp91 + _tmp33 * _tmp92;
  const Scalar _tmp94 = _tmp37 * _tmp93;
  const Scalar _tmp95 = _tmp41 * _tmp63 - _tmp43 * _tmp59 + _tmp63 * _tmp94;
  const Scalar _tmp96 = -_tmp75 * _tmp82 + _tmp78 * _tmp83 + _tmp83 * _tmp94 - _tmp85 * _tmp95;
  const Scalar _tmp97 = _tmp89 * _tmp96;
  const Scalar _tmp98 = -_tmp69 * _tmp95 - _tmp72 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp100 = _tmp88 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = _tmp101 + _tmp72;
  const Scalar _tmp103 = _tmp102 * _tmp89;
  const Scalar _tmp104 = _tmp103 * _tmp83;
  const Scalar _tmp105 = -_tmp103 * _tmp84 + Scalar(1.0);
  const Scalar _tmp106 = _tmp63 * _tmp68;
  const Scalar _tmp107 = _tmp6 + _tmp74;
  const Scalar _tmp108 = _tmp107 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp109 = _tmp22 + _tmp40;
  const Scalar _tmp110 = _tmp109 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp108, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp110 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = _tmp113 * (_tmp104 + _tmp105 * _tmp106);
  const Scalar _tmp115 = _tmp68 * _tmp95;
  const Scalar _tmp116 = _tmp60 * _tmp68;
  const Scalar _tmp117 = _tmp116 * _tmp65 + _tmp60 * _tmp62;
  const Scalar _tmp118 = _tmp116 * _tmp71 - _tmp117 * _tmp45 - _tmp62;
  const Scalar _tmp119 = _tmp115 * _tmp60 - _tmp118 * _tmp97 - _tmp94;
  const Scalar _tmp120 = _tmp100 * _tmp119;
  const Scalar _tmp121 = _tmp118 + _tmp120;
  const Scalar _tmp122 = _tmp84 * _tmp89;
  const Scalar _tmp123 = -_tmp121 * _tmp122 - _tmp60;
  const Scalar _tmp124 = _tmp121 * _tmp89;
  const Scalar _tmp125 = _tmp124 * _tmp83;
  const Scalar _tmp126 = _tmp108 * _tmp111;
  const Scalar _tmp127 = _tmp126 * fh1;
  const Scalar _tmp128 = _tmp127 * (_tmp106 * _tmp123 + _tmp125 + Scalar(1.0));
  const Scalar _tmp129 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp130 = _tmp38 * _tmp45 + _tmp44;
  const Scalar _tmp131 = 0;
  const Scalar _tmp132 = _tmp122 * _tmp131;
  const Scalar _tmp133 = _tmp131 * _tmp89;
  const Scalar _tmp134 = _tmp133 * _tmp83;
  const Scalar _tmp135 = _tmp129 * (-_tmp106 * _tmp132 + _tmp134);
  const Scalar _tmp136 = Scalar(1.0) * _tmp99;
  const Scalar _tmp137 = _tmp63 * _tmp85;
  const Scalar _tmp138 = _tmp136 * _tmp83;
  const Scalar _tmp139 = fh1 * (_tmp107 * _tmp112 - _tmp109 * _tmp126);
  const Scalar _tmp140 = _tmp139 * (-_tmp136 * _tmp137 + _tmp138);
  const Scalar _tmp141 = -_tmp114 * _tmp37 - _tmp128 * _tmp37 - _tmp135 * _tmp37 - _tmp140 * _tmp37;
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = _tmp39 + _tmp78;
  const Scalar _tmp144 = _tmp143 * _tmp45;
  const Scalar _tmp145 = Scalar(1.0) / (-_tmp144 + _tmp44 - _tmp75);
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp100 * _tmp146;
  const Scalar _tmp148 = _tmp143 * _tmp146;
  const Scalar _tmp149 = _tmp100 * _tmp148 - _tmp136 * _tmp87;
  const Scalar _tmp150 = Scalar(1.0) * _tmp42;
  const Scalar _tmp151 = Scalar(1.0) * _tmp139;
  const Scalar _tmp152 = _tmp143 * _tmp145;
  const Scalar _tmp153 = _tmp101 * _tmp152 - _tmp103 * _tmp87 - _tmp70;
  const Scalar _tmp154 = Scalar(1.0) * _tmp113;
  const Scalar _tmp155 = fh1 * (_tmp46 + _tmp50);
  const Scalar _tmp156 = -_tmp109 * fv1 - _tmp112 * _tmp155 - Scalar(40.024799999999999) * _tmp26;
  const Scalar _tmp157 = _tmp146 * _tmp45;
  const Scalar _tmp158 = _tmp144 * _tmp146 + Scalar(1.0);
  const Scalar _tmp159 = _tmp107 * fv1 + Scalar(40.024799999999999) * _tmp11 + _tmp126 * _tmp155;
  const Scalar _tmp160 = _tmp87 * _tmp89;
  const Scalar _tmp161 = _tmp117 + _tmp120 * _tmp152 - _tmp121 * _tmp160;
  const Scalar _tmp162 = Scalar(1.0) * _tmp127;
  const Scalar _tmp163 = _tmp130 * _tmp145;
  const Scalar _tmp164 = -_tmp131 * _tmp160 - _tmp143 * _tmp163 + _tmp39;
  const Scalar _tmp165 = Scalar(1.0) * _tmp129;
  const Scalar _tmp166 = _tmp151 * (_tmp147 - _tmp149 * _tmp150) +
                         _tmp154 * (_tmp101 * _tmp146 - _tmp150 * _tmp153) +
                         Scalar(1.0) * _tmp156 * (-_tmp150 * _tmp158 + _tmp157) +
                         Scalar(1.0) * _tmp159 * (-_tmp146 + _tmp148 * _tmp42) +
                         _tmp162 * (_tmp120 * _tmp146 - _tmp150 * _tmp161) +
                         _tmp165 * (-_tmp130 * _tmp146 - _tmp150 * _tmp164 + Scalar(1.0));
  const Scalar _tmp167 = std::asinh(_tmp142 * _tmp166);
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp141;
  const Scalar _tmp169 = -_tmp32 + p_a(1, 0);
  const Scalar _tmp170 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp171 =
      std::sqrt(Scalar(std::pow(_tmp169, Scalar(2)) + std::pow(_tmp170, Scalar(2))));
  const Scalar _tmp172 = -_tmp167 * _tmp168 - _tmp171;
  const Scalar _tmp173 = Scalar(0.71007031138673404) * _tmp142;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = std::sinh(_tmp174);
  const Scalar _tmp176 = Scalar(1.0) / (_tmp21);
  const Scalar _tmp177 = _tmp176 * _tmp33;
  const Scalar _tmp178 = _tmp177 * _tmp68;
  const Scalar _tmp179 = _tmp178 * _tmp65;
  const Scalar _tmp180 = std::pow(_tmp67, Scalar(-2));
  const Scalar _tmp181 = _tmp180 * _tmp63;
  const Scalar _tmp182 = _tmp181 * _tmp65;
  const Scalar _tmp183 = _tmp177 * _tmp182;
  const Scalar _tmp184 = _tmp177 * _tmp64;
  const Scalar _tmp185 = -_tmp177 * _tmp86 - _tmp179 * _tmp83 + _tmp183 * _tmp84 + _tmp184 * _tmp85;
  const Scalar _tmp186 = _tmp181 * _tmp71;
  const Scalar _tmp187 = _tmp177 * _tmp186;
  const Scalar _tmp188 = _tmp178 * _tmp71;
  const Scalar _tmp189 = -_tmp185 * _tmp45 + _tmp187 * _tmp84 - _tmp188 * _tmp83;
  const Scalar _tmp190 = _tmp102 * _tmp189;
  const Scalar _tmp191 = std::pow(_tmp88, Scalar(-2));
  const Scalar _tmp192 = _tmp191 * _tmp83;
  const Scalar _tmp193 = _tmp115 * _tmp177;
  const Scalar _tmp194 = _tmp90 * _tmp93;
  const Scalar _tmp195 = _tmp194 * _tmp83;
  const Scalar _tmp196 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp197 = _tmp196 * _tmp31;
  const Scalar _tmp198 = _tmp17 * _tmp196;
  const Scalar _tmp199 = _tmp19 * _tmp33;
  const Scalar _tmp200 = _tmp37 * (-_tmp197 * _tmp21 + _tmp198 * _tmp199 + _tmp91);
  const Scalar _tmp201 = _tmp176 * _tmp36;
  const Scalar _tmp202 = _tmp201 * _tmp93;
  const Scalar _tmp203 = -_tmp194 * _tmp63 + _tmp200 * _tmp63 + _tmp202 * _tmp63;
  const Scalar _tmp204 = _tmp181 * _tmp95;
  const Scalar _tmp205 = _tmp177 * _tmp204;
  const Scalar _tmp206 = -_tmp193 * _tmp83 - _tmp195 + _tmp200 * _tmp83 + _tmp202 * _tmp83 -
                         _tmp203 * _tmp85 + _tmp205 * _tmp84;
  const Scalar _tmp207 = std::pow(_tmp96, Scalar(-2));
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = _tmp208 * _tmp88;
  const Scalar _tmp210 = _tmp209 * _tmp98;
  const Scalar _tmp211 = _tmp184 * _tmp69;
  const Scalar _tmp212 = Scalar(1.0) * _tmp183;
  const Scalar _tmp213 = Scalar(1.0) * _tmp187 - _tmp211 * _tmp45 - _tmp212 * _tmp45;
  const Scalar _tmp214 = _tmp206 * _tmp89;
  const Scalar _tmp215 = _tmp189 * _tmp191;
  const Scalar _tmp216 = _tmp72 * _tmp96;
  const Scalar _tmp217 = _tmp100 * (-_tmp203 * _tmp69 + Scalar(1.0) * _tmp205 - _tmp213 * _tmp97 -
                                    _tmp214 * _tmp72 + _tmp215 * _tmp216);
  const Scalar _tmp218 = _tmp98 * _tmp99;
  const Scalar _tmp219 = _tmp189 * _tmp218;
  const Scalar _tmp220 = -_tmp210 + _tmp213 + _tmp217 + _tmp219;
  const Scalar _tmp221 = _tmp191 * _tmp84;
  const Scalar _tmp222 = -_tmp104 * _tmp177 - _tmp122 * _tmp220 + _tmp190 * _tmp221;
  const Scalar _tmp223 = _tmp83 * _tmp89;
  const Scalar _tmp224 = _tmp54 / _tmp57;
  const Scalar _tmp225 = _tmp105 * _tmp224;
  const Scalar _tmp226 = _tmp177 * _tmp180;
  const Scalar _tmp227 = _tmp113 * _tmp37;
  const Scalar _tmp228 = _tmp140 * _tmp90;
  const Scalar _tmp229 = _tmp128 * _tmp90;
  const Scalar _tmp230 = _tmp135 * _tmp90;
  const Scalar _tmp231 = _tmp106 * _tmp177;
  const Scalar _tmp232 = _tmp224 * _tmp226;
  const Scalar _tmp233 = _tmp136 * _tmp84;
  const Scalar _tmp234 = Scalar(1.0) * _tmp83;
  const Scalar _tmp235 = Scalar(1.0) * _tmp137;
  const Scalar _tmp236 = _tmp139 * _tmp37;
  const Scalar _tmp237 = _tmp114 * _tmp90;
  const Scalar _tmp238 = _tmp215 * _tmp83;
  const Scalar _tmp239 = _tmp119 * _tmp209;
  const Scalar _tmp240 = _tmp34 / [&]() {
    const Scalar base = _tmp19;
    return base * base * base;
  }();
  const Scalar _tmp241 = _tmp177 * _tmp62 + _tmp179 - _tmp182 * _tmp240 - _tmp240 * _tmp64 * _tmp68;
  const Scalar _tmp242 = -_tmp186 * _tmp240 + _tmp188 - _tmp241 * _tmp45;
  const Scalar _tmp243 = _tmp118 * _tmp96;
  const Scalar _tmp244 =
      _tmp100 * (_tmp116 * _tmp203 - _tmp118 * _tmp214 + _tmp193 + _tmp194 - _tmp200 - _tmp202 -
                 _tmp204 * _tmp240 + _tmp215 * _tmp243 - _tmp242 * _tmp97);
  const Scalar _tmp245 = _tmp119 * _tmp99;
  const Scalar _tmp246 = _tmp189 * _tmp245;
  const Scalar _tmp247 = -_tmp239 + _tmp242 + _tmp244 + _tmp246;
  const Scalar _tmp248 = _tmp121 * _tmp189;
  const Scalar _tmp249 = -_tmp122 * _tmp247 - _tmp125 * _tmp177 - _tmp177 + _tmp221 * _tmp248;
  const Scalar _tmp250 = _tmp127 * _tmp37;
  const Scalar _tmp251 = _tmp129 * _tmp37;
  const Scalar _tmp252 =
      -_tmp114 * _tmp201 - _tmp128 * _tmp201 - _tmp135 * _tmp201 - _tmp140 * _tmp201 -
      _tmp227 * (_tmp106 * _tmp222 - _tmp190 * _tmp192 + _tmp220 * _tmp223 - _tmp225 * _tmp226) +
      _tmp228 + _tmp229 + _tmp230 -
      _tmp236 * (-_tmp138 * _tmp231 - _tmp208 * _tmp234 + _tmp208 * _tmp235 + _tmp232 * _tmp233) +
      _tmp237 -
      _tmp250 * (_tmp106 * _tmp249 - _tmp121 * _tmp238 - _tmp123 * _tmp232 + _tmp223 * _tmp247) -
      _tmp251 *
          (_tmp131 * _tmp137 * _tmp215 - _tmp131 * _tmp238 + _tmp132 * _tmp232 - _tmp134 * _tmp231);
  const Scalar _tmp253 = Scalar(1.4083112389913199) * _tmp167;
  const Scalar _tmp254 = Scalar(1.0) / (_tmp171);
  const Scalar _tmp255 = std::pow(_tmp141, Scalar(-2));
  const Scalar _tmp256 =
      std::pow(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp255 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp257 = _tmp166 * _tmp255;
  const Scalar _tmp258 = _tmp191 * _tmp87;
  const Scalar _tmp259 = -_tmp124 * _tmp185 - _tmp152 * _tmp239 + _tmp152 * _tmp244 +
                         _tmp152 * _tmp246 - _tmp160 * _tmp247 + _tmp241 + _tmp248 * _tmp258;
  const Scalar _tmp260 = -_tmp103 * _tmp185 - _tmp152 * _tmp210 + _tmp152 * _tmp217 +
                         _tmp152 * _tmp219 - _tmp160 * _tmp220 + _tmp190 * _tmp258 + _tmp211 +
                         _tmp212;
  const Scalar _tmp261 = _tmp131 * _tmp258;
  const Scalar _tmp262 = -_tmp133 * _tmp185 + _tmp189 * _tmp261;
  const Scalar _tmp263 = _tmp165 * _tmp42;
  const Scalar _tmp264 = _tmp146 * _tmp209;
  const Scalar _tmp265 = _tmp146 * _tmp99;
  const Scalar _tmp266 = _tmp189 * _tmp265;
  const Scalar _tmp267 = Scalar(1.0) * _tmp87;
  const Scalar _tmp268 =
      -_tmp136 * _tmp185 + _tmp143 * _tmp266 - _tmp148 * _tmp209 + _tmp208 * _tmp267;
  const Scalar _tmp269 = _tmp256 * (_tmp142 * (_tmp151 * (-_tmp150 * _tmp268 - _tmp264 + _tmp266) +
                                               _tmp154 * (-_tmp146 * _tmp210 + _tmp146 * _tmp217 +
                                                          _tmp146 * _tmp219 - _tmp150 * _tmp260) +
                                               _tmp162 * (-_tmp146 * _tmp239 + _tmp146 * _tmp244 +
                                                          _tmp146 * _tmp246 - _tmp150 * _tmp259) -
                                               _tmp262 * _tmp263) -
                                    _tmp252 * _tmp257);
  const Scalar _tmp270 = Scalar(0.71007031138673404) * _tmp255;
  const Scalar _tmp271 = _tmp172 * _tmp270;
  const Scalar _tmp272 = Scalar(1.0) * _tmp167;
  const Scalar _tmp273 = Scalar(1.0) * std::sinh(_tmp272);
  const Scalar _tmp274 = _tmp270 * p_a(2, 0);
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp173 * p_a(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp174) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp272);
  const Scalar _tmp276 = _tmp127 * _tmp68;
  const Scalar _tmp277 = _tmp136 * _tmp139;
  const Scalar _tmp278 = _tmp129 * _tmp131;
  const Scalar _tmp279 = _tmp122 * _tmp278;
  const Scalar _tmp280 = _tmp113 * _tmp68;
  const Scalar _tmp281 =
      _tmp105 * _tmp280 + _tmp123 * _tmp276 - _tmp277 * _tmp85 - _tmp279 * _tmp68;
  const Scalar _tmp282 = Scalar(1.0) / (_tmp281);
  const Scalar _tmp283 = _tmp113 * _tmp42;
  const Scalar _tmp284 = _tmp127 * _tmp42;
  const Scalar _tmp285 = _tmp146 * _tmp159;
  const Scalar _tmp286 = _tmp129 * _tmp42;
  const Scalar _tmp287 = _tmp139 * _tmp42;
  const Scalar _tmp288 = -_tmp143 * _tmp285 * _tmp42 + _tmp149 * _tmp287 + _tmp153 * _tmp283 +
                         _tmp156 * _tmp158 * _tmp42 + _tmp161 * _tmp284 + _tmp164 * _tmp286;
  const Scalar _tmp289 = std::asinh(_tmp282 * _tmp288);
  const Scalar _tmp290 = Scalar(1.4083112389913199) * _tmp281;
  const Scalar _tmp291 =
      -_tmp289 * _tmp290 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp292 = Scalar(0.71007031138673404) * _tmp282;
  const Scalar _tmp293 = _tmp291 * _tmp292;
  const Scalar _tmp294 = std::sinh(_tmp293);
  const Scalar _tmp295 = _tmp215 * _tmp278;
  const Scalar _tmp296 = _tmp177 * _tmp181;
  const Scalar _tmp297 = _tmp151 * _tmp208;
  const Scalar _tmp298 = _tmp105 * _tmp113;
  const Scalar _tmp299 = _tmp129 * _tmp133;
  const Scalar _tmp300 = _tmp299 * _tmp83;
  const Scalar _tmp301 = -_tmp123 * _tmp127 * _tmp296 - _tmp138 * _tmp139 * _tmp178 -
                         _tmp178 * _tmp300 + _tmp222 * _tmp280 + _tmp249 * _tmp276 +
                         _tmp277 * _tmp296 * _tmp84 + _tmp279 * _tmp296 + _tmp295 * _tmp85 -
                         _tmp296 * _tmp298 + _tmp297 * _tmp85;
  const Scalar _tmp302 = std::pow(_tmp281, Scalar(-2));
  const Scalar _tmp303 = Scalar(0.71007031138673404) * _tmp302;
  const Scalar _tmp304 = _tmp291 * _tmp303;
  const Scalar _tmp305 = Scalar(1.4083112389913199) * _tmp301;
  const Scalar _tmp306 = _tmp288 * _tmp302;
  const Scalar _tmp307 =
      _tmp282 * (_tmp259 * _tmp284 + _tmp260 * _tmp283 + _tmp262 * _tmp286 + _tmp268 * _tmp287) -
      _tmp301 * _tmp306;
  const Scalar _tmp308 =
      std::pow(Scalar(std::pow(_tmp288, Scalar(2)) * _tmp302 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp309 = _tmp290 * _tmp308;
  const Scalar _tmp310 = _tmp303 * p_d(2, 0);
  const Scalar _tmp311 = Scalar(1.0) * _tmp289;
  const Scalar _tmp312 = Scalar(1.0) * _tmp308 * std::sinh(_tmp311);
  const Scalar _tmp313 = _tmp292 * p_d(2, 0) - std::cosh(_tmp293) + std::cosh(_tmp311);
  const Scalar _tmp314 = _tmp127 * _tmp89;
  const Scalar _tmp315 = _tmp113 * _tmp89;
  const Scalar _tmp316 = _tmp113 * _tmp191;
  const Scalar _tmp317 = -_tmp121 * _tmp127 * _tmp215 - _tmp190 * _tmp316 + _tmp220 * _tmp315 +
                         _tmp247 * _tmp314 - _tmp295 - _tmp297;
  const Scalar _tmp318 = _tmp103 * _tmp113 + _tmp124 * _tmp127 + _tmp277 + _tmp299;
  const Scalar _tmp319 = std::pow(_tmp318, Scalar(-2));
  const Scalar _tmp320 = Scalar(0.71007031138673404) * _tmp319;
  const Scalar _tmp321 = _tmp320 * p_b(2, 0);
  const Scalar _tmp322 = _tmp113 * _tmp145;
  const Scalar _tmp323 = _tmp127 * _tmp145;
  const Scalar _tmp324 = -_tmp101 * _tmp322 - _tmp120 * _tmp323 + _tmp129 * _tmp163 -
                         _tmp139 * _tmp147 - _tmp156 * _tmp157 + _tmp285;
  const Scalar _tmp325 = Scalar(1.0) / (_tmp318);
  const Scalar _tmp326 = std::asinh(_tmp324 * _tmp325);
  const Scalar _tmp327 = Scalar(1.4083112389913199) * _tmp326;
  const Scalar _tmp328 =
      -_tmp318 * _tmp327 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp329 = Scalar(0.71007031138673404) * _tmp325;
  const Scalar _tmp330 = _tmp328 * _tmp329;
  const Scalar _tmp331 = std::sinh(_tmp330);
  const Scalar _tmp332 = _tmp320 * _tmp328;
  const Scalar _tmp333 = _tmp319 * _tmp324;
  const Scalar _tmp334 =
      -_tmp317 * _tmp333 +
      _tmp325 * (_tmp139 * _tmp264 - _tmp139 * _tmp266 + _tmp210 * _tmp322 - _tmp217 * _tmp322 -
                 _tmp219 * _tmp322 + _tmp239 * _tmp323 - _tmp244 * _tmp323 - _tmp246 * _tmp323);
  const Scalar _tmp335 =
      std::pow(Scalar(_tmp319 * std::pow(_tmp324, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp336 = Scalar(1.4083112389913199) * _tmp318;
  const Scalar _tmp337 = _tmp335 * _tmp336;
  const Scalar _tmp338 = Scalar(1.0) * _tmp326;
  const Scalar _tmp339 = Scalar(1.0) * _tmp335 * std::sinh(_tmp338);
  const Scalar _tmp340 = Scalar(1.4083112389913199) * _tmp329 * p_b(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp330) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp338);
  const Scalar _tmp341 = _tmp37 * (-_tmp197 * _tmp199 + _tmp198 * _tmp34 - _tmp92);
  const Scalar _tmp342 = _tmp180 * _tmp20;
  const Scalar _tmp343 = _tmp342 * _tmp63;
  const Scalar _tmp344 = _tmp343 * _tmp84;
  const Scalar _tmp345 = _tmp20 * _tmp68;
  const Scalar _tmp346 = _tmp345 * _tmp95;
  const Scalar _tmp347 = -_tmp194 * _tmp66 + _tmp341 * _tmp63;
  const Scalar _tmp348 =
      -_tmp195 * _tmp60 + _tmp341 * _tmp83 - _tmp344 * _tmp95 + _tmp346 * _tmp83 - _tmp347 * _tmp85;
  const Scalar _tmp349 = _tmp207 * _tmp348;
  const Scalar _tmp350 = _tmp138 * _tmp345;
  const Scalar _tmp351 = _tmp224 * _tmp342;
  const Scalar _tmp352 = _tmp345 * _tmp71;
  const Scalar _tmp353 = _tmp345 * _tmp65;
  const Scalar _tmp354 = _tmp20 * _tmp62;
  const Scalar _tmp355 = _tmp354 * _tmp63;
  const Scalar _tmp356 = -_tmp344 * _tmp65 + _tmp353 * _tmp83 + _tmp354 * _tmp83 - _tmp355 * _tmp85;
  const Scalar _tmp357 = -_tmp344 * _tmp71 + _tmp352 * _tmp83 - _tmp356 * _tmp45;
  const Scalar _tmp358 = _tmp102 * _tmp357;
  const Scalar _tmp359 = _tmp349 * _tmp88;
  const Scalar _tmp360 = _tmp359 * _tmp98;
  const Scalar _tmp361 = _tmp191 * _tmp357;
  const Scalar _tmp362 = _tmp348 * _tmp89;
  const Scalar _tmp363 = Scalar(1.0) * _tmp343;
  const Scalar _tmp364 = _tmp363 * _tmp65;
  const Scalar _tmp365 = _tmp355 * _tmp69;
  const Scalar _tmp366 = -_tmp363 * _tmp71 + _tmp364 * _tmp45 + _tmp365 * _tmp45;
  const Scalar _tmp367 = _tmp100 * (_tmp216 * _tmp361 - _tmp347 * _tmp69 - _tmp362 * _tmp72 -
                                    _tmp363 * _tmp95 - _tmp366 * _tmp97);
  const Scalar _tmp368 = _tmp218 * _tmp357;
  const Scalar _tmp369 = -_tmp360 + _tmp366 + _tmp367 + _tmp368;
  const Scalar _tmp370 = _tmp104 * _tmp20 - _tmp122 * _tmp369 + _tmp221 * _tmp358;
  const Scalar _tmp371 = _tmp245 * _tmp357;
  const Scalar _tmp372 = _tmp119 * _tmp359;
  const Scalar _tmp373 = _tmp178 * _tmp64 + _tmp183 - _tmp353 - _tmp354;
  const Scalar _tmp374 = _tmp187 - _tmp352 - _tmp373 * _tmp45;
  const Scalar _tmp375 =
      _tmp100 * (_tmp116 * _tmp347 - _tmp118 * _tmp362 + _tmp194 * _tmp60 + _tmp205 +
                 _tmp243 * _tmp361 - _tmp341 - _tmp346 - _tmp374 * _tmp97);
  const Scalar _tmp376 = _tmp371 - _tmp372 + _tmp374 + _tmp375;
  const Scalar _tmp377 = _tmp123 * _tmp342;
  const Scalar _tmp378 = _tmp121 * _tmp357;
  const Scalar _tmp379 = -_tmp122 * _tmp376 + _tmp125 * _tmp20 + _tmp20 + _tmp221 * _tmp378;
  const Scalar _tmp380 = _tmp131 * _tmp361;
  const Scalar _tmp381 =
      -_tmp227 * (_tmp106 * _tmp370 - _tmp192 * _tmp358 + _tmp223 * _tmp369 + _tmp225 * _tmp342) +
      _tmp228 * _tmp60 + _tmp229 * _tmp60 + _tmp230 * _tmp60 -
      _tmp236 * (-_tmp233 * _tmp351 - _tmp234 * _tmp349 + _tmp235 * _tmp349 + _tmp350 * _tmp63) +
      _tmp237 * _tmp60 -
      _tmp250 * (_tmp106 * _tmp379 - _tmp192 * _tmp378 + _tmp223 * _tmp376 + _tmp224 * _tmp377) -
      _tmp251 *
          (-_tmp132 * _tmp351 + _tmp134 * _tmp345 * _tmp63 + _tmp137 * _tmp380 - _tmp380 * _tmp83);
  const Scalar _tmp382 = -_tmp124 * _tmp356 + _tmp152 * _tmp371 - _tmp152 * _tmp372 +
                         _tmp152 * _tmp375 - _tmp160 * _tmp376 + _tmp258 * _tmp378 + _tmp373;
  const Scalar _tmp383 = -_tmp103 * _tmp356 - _tmp152 * _tmp360 + _tmp152 * _tmp367 +
                         _tmp152 * _tmp368 - _tmp160 * _tmp369 + _tmp258 * _tmp358 - _tmp364 -
                         _tmp365;
  const Scalar _tmp384 = _tmp265 * _tmp357;
  const Scalar _tmp385 =
      -_tmp136 * _tmp356 + _tmp143 * _tmp384 - _tmp148 * _tmp359 + _tmp267 * _tmp349;
  const Scalar _tmp386 = _tmp146 * _tmp359;
  const Scalar _tmp387 = -_tmp133 * _tmp356 + _tmp261 * _tmp357;
  const Scalar _tmp388 = _tmp256 * (_tmp142 * (_tmp151 * (-_tmp150 * _tmp385 + _tmp384 - _tmp386) +
                                               _tmp154 * (-_tmp146 * _tmp360 + _tmp146 * _tmp367 +
                                                          _tmp146 * _tmp368 - _tmp150 * _tmp383) +
                                               _tmp162 * (_tmp146 * _tmp371 - _tmp146 * _tmp372 +
                                                          _tmp146 * _tmp375 - _tmp150 * _tmp382) -
                                               _tmp263 * _tmp387) -
                                    _tmp257 * _tmp381);
  const Scalar _tmp389 = _tmp278 * _tmp361;
  const Scalar _tmp390 = _tmp151 * _tmp349;
  const Scalar _tmp391 = _tmp127 * _tmp377 * _tmp63 + _tmp139 * _tmp350 + _tmp276 * _tmp379 -
                         _tmp277 * _tmp344 - _tmp279 * _tmp343 + _tmp280 * _tmp370 +
                         _tmp298 * _tmp343 + _tmp300 * _tmp345 + _tmp389 * _tmp85 +
                         _tmp390 * _tmp85;
  const Scalar _tmp392 = Scalar(1.4083112389913199) * _tmp391;
  const Scalar _tmp393 =
      _tmp282 * (_tmp283 * _tmp383 + _tmp284 * _tmp382 + _tmp286 * _tmp387 + _tmp287 * _tmp385) -
      _tmp306 * _tmp391;
  const Scalar _tmp394 = -_tmp127 * _tmp191 * _tmp378 + _tmp314 * _tmp376 + _tmp315 * _tmp369 -
                         _tmp316 * _tmp358 - _tmp389 - _tmp390;
  const Scalar _tmp395 =
      _tmp325 * (-_tmp139 * _tmp384 + _tmp139 * _tmp386 + _tmp322 * _tmp360 - _tmp322 * _tmp367 -
                 _tmp322 * _tmp368 - _tmp323 * _tmp371 + _tmp323 * _tmp372 - _tmp323 * _tmp375) -
      _tmp333 * _tmp394;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp168 *
          (-_tmp175 * (_tmp173 * (-_tmp168 * _tmp269 - _tmp170 * _tmp254 - _tmp252 * _tmp253) -
                       _tmp252 * _tmp271) -
           _tmp252 * _tmp274 + _tmp269 * _tmp273) -
      _tmp252 * _tmp275;
  _res(2, 0) =
      -_tmp290 *
          (-_tmp294 * (_tmp292 * (-_tmp289 * _tmp305 - _tmp307 * _tmp309) - _tmp301 * _tmp304) -
           _tmp301 * _tmp310 + _tmp307 * _tmp312) -
      _tmp305 * _tmp313;
  _res(3, 0) =
      -_tmp317 * _tmp340 -
      _tmp336 *
          (-_tmp317 * _tmp321 -
           _tmp331 * (-_tmp317 * _tmp332 + _tmp329 * (-_tmp317 * _tmp327 - _tmp334 * _tmp337)) +
           _tmp334 * _tmp339);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp168 *
          (-_tmp175 * (_tmp173 * (-_tmp168 * _tmp388 - _tmp169 * _tmp254 - _tmp253 * _tmp381) -
                       _tmp271 * _tmp381) +
           _tmp273 * _tmp388 - _tmp274 * _tmp381) -
      _tmp275 * _tmp381;
  _res(2, 1) =
      -_tmp290 *
          (-_tmp294 * (_tmp292 * (-_tmp289 * _tmp392 - _tmp309 * _tmp393) - _tmp304 * _tmp391) -
           _tmp310 * _tmp391 + _tmp312 * _tmp393) -
      _tmp313 * _tmp392;
  _res(3, 1) =
      -_tmp336 *
          (-_tmp321 * _tmp394 -
           _tmp331 * (_tmp329 * (-_tmp327 * _tmp394 - _tmp337 * _tmp395) - _tmp332 * _tmp394) +
           _tmp339 * _tmp395) -
      _tmp340 * _tmp394;
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
