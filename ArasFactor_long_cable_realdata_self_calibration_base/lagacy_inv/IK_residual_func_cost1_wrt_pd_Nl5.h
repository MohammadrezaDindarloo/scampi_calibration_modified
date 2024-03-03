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
 * Symbolic function: IK_residual_func_cost1_wrt_pd_Nl5
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPdNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1219

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (400)
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
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp0 * _tmp11;
  const Scalar _tmp13 = _tmp1 * _tmp4;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = -_tmp18 + p_d(1, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp21 = _tmp1 * _tmp11;
  const Scalar _tmp22 = _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp27 = _tmp24 - _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = -_tmp29 + p_d(0, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = -_tmp20;
  const Scalar _tmp33 = _tmp27 + _tmp32;
  const Scalar _tmp34 = _tmp33 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp35 = -_tmp10 + _tmp15;
  const Scalar _tmp36 = _tmp35 + _tmp7;
  const Scalar _tmp37 = _tmp36 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp38 = std::pow(Scalar(std::pow(_tmp34, Scalar(2)) + std::pow(_tmp37, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp34 * _tmp38;
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp41 = -_tmp40;
  const Scalar _tmp42 = -Scalar(0.010999999999999999) * _tmp25 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp44 = _tmp42 - _tmp43;
  const Scalar _tmp45 = fh1 * (_tmp41 + _tmp44);
  const Scalar _tmp46 = Scalar(40.024799999999999) * _tmp23 + _tmp33 * fv1 + _tmp39 * _tmp45;
  const Scalar _tmp47 = Scalar(1.0) * _tmp28;
  const Scalar _tmp48 = _tmp24 + _tmp26;
  const Scalar _tmp49 = _tmp32 + _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp17;
  const Scalar _tmp51 = -_tmp50;
  const Scalar _tmp52 = _tmp35 + _tmp6;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp16 + _tmp6;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp51 + _tmp54);
  const Scalar _tmp56 = _tmp20 + _tmp48;
  const Scalar _tmp57 = _tmp55 * (_tmp47 - _tmp56);
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp47 - _tmp49 - _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = _tmp53 * _tmp60;
  const Scalar _tmp62 = _tmp37 * _tmp38;
  const Scalar _tmp63 = -Scalar(40.024799999999999) * _tmp14 - _tmp36 * fv1 - _tmp45 * _tmp62;
  const Scalar _tmp64 = _tmp58 * _tmp60 + Scalar(1.0);
  const Scalar _tmp65 = Scalar(1.0) * _tmp55;
  const Scalar _tmp66 = _tmp57 * _tmp60;
  const Scalar _tmp67 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp68 = _tmp47 + _tmp50 * _tmp57;
  const Scalar _tmp69 = 0;
  const Scalar _tmp70 = _tmp40 + _tmp44;
  const Scalar _tmp71 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp72 = _tmp71 - p_b(0, 0);
  const Scalar _tmp73 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp74 = _tmp73 - p_b(1, 0);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp72 * _tmp75;
  const Scalar _tmp77 = _tmp42 + _tmp43;
  const Scalar _tmp78 = _tmp41 + _tmp77;
  const Scalar _tmp79 = _tmp74 * _tmp75;
  const Scalar _tmp80 = _tmp29 - p_d(0, 0);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp18 - p_d(1, 0);
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp70 * _tmp83;
  const Scalar _tmp85 = _tmp76 * _tmp83 - _tmp79;
  const Scalar _tmp86 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp87 = _tmp86 - p_c(0, 0);
  const Scalar _tmp88 = std::pow(_tmp87, Scalar(2));
  const Scalar _tmp89 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp90 = _tmp89 - p_c(1, 0);
  const Scalar _tmp91 = _tmp88 + std::pow(_tmp90, Scalar(2));
  const Scalar _tmp92 = std::pow(_tmp91, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp93 = _tmp87 * _tmp92;
  const Scalar _tmp94 = _tmp83 * _tmp93;
  const Scalar _tmp95 = _tmp90 * _tmp92;
  const Scalar _tmp96 = _tmp94 - _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp70 * _tmp93;
  const Scalar _tmp99 = _tmp40 + _tmp77;
  const Scalar _tmp100 = -_tmp83 * _tmp98 + _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp97;
  const Scalar _tmp102 = -_tmp101 * _tmp85 - _tmp76 * _tmp84 + _tmp78 * _tmp79;
  const Scalar _tmp103 = -_tmp93 * _tmp99 + _tmp98;
  const Scalar _tmp104 = _tmp103 * _tmp97;
  const Scalar _tmp105 = -_tmp102 * _tmp57 - _tmp104 * _tmp85 + _tmp70 * _tmp76 - _tmp76 * _tmp78;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp102 * _tmp106;
  const Scalar _tmp108 = _tmp59 * _tmp68;
  const Scalar _tmp109 = -_tmp107 * _tmp69 - _tmp108 * _tmp53 + _tmp51;
  const Scalar _tmp110 = std::pow(_tmp80, Scalar(2));
  const Scalar _tmp111 = std::pow(_tmp82, Scalar(2));
  const Scalar _tmp112 = _tmp110 + _tmp111;
  const Scalar _tmp113 = std::sqrt(_tmp112);
  const Scalar _tmp114 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp115 = _tmp114 * _tmp28;
  const Scalar _tmp116 = _tmp114 * _tmp17;
  const Scalar _tmp117 = _tmp115 * _tmp82 - _tmp116 * _tmp80;
  const Scalar _tmp118 = _tmp113 * _tmp81;
  const Scalar _tmp119 = _tmp117 * _tmp118;
  const Scalar _tmp120 = _tmp119 * _tmp93 + _tmp54 * _tmp93 - _tmp56 * _tmp95;
  const Scalar _tmp121 = _tmp120 * _tmp97;
  const Scalar _tmp122 = _tmp101 * _tmp83 + _tmp84;
  const Scalar _tmp123 = _tmp104 * _tmp83 - _tmp122 * _tmp57 - _tmp70;
  const Scalar _tmp124 = _tmp119 * _tmp76 - _tmp121 * _tmp85 - _tmp49 * _tmp79 + _tmp52 * _tmp76;
  const Scalar _tmp125 = _tmp106 * _tmp124;
  const Scalar _tmp126 = -_tmp119 + _tmp121 * _tmp83 - _tmp123 * _tmp125;
  const Scalar _tmp127 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp128 = _tmp105 * _tmp127;
  const Scalar _tmp129 = _tmp126 * _tmp128;
  const Scalar _tmp130 = _tmp53 * _tmp59;
  const Scalar _tmp131 = _tmp123 + _tmp129;
  const Scalar _tmp132 = _tmp106 * _tmp131;
  const Scalar _tmp133 = -_tmp102 * _tmp132 + _tmp122 + _tmp129 * _tmp130;
  const Scalar _tmp134 = _tmp39 * fh1;
  const Scalar _tmp135 = Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) * _tmp127;
  const Scalar _tmp137 = -_tmp102 * _tmp136 + _tmp128 * _tmp61;
  const Scalar _tmp138 = _tmp128 * _tmp60;
  const Scalar _tmp139 = fh1 * (_tmp33 * _tmp62 - _tmp36 * _tmp39);
  const Scalar _tmp140 = Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = Scalar(1.0) * _tmp101;
  const Scalar _tmp142 = -Scalar(1.0) * _tmp104 + _tmp141 * _tmp57;
  const Scalar _tmp143 = _tmp106 * _tmp142;
  const Scalar _tmp144 = -Scalar(1.0) * _tmp121 - _tmp124 * _tmp143;
  const Scalar _tmp145 = _tmp128 * _tmp144;
  const Scalar _tmp146 = _tmp142 + _tmp145;
  const Scalar _tmp147 = _tmp106 * _tmp146;
  const Scalar _tmp148 = -_tmp102 * _tmp147 + _tmp130 * _tmp145 - _tmp141;
  const Scalar _tmp149 = _tmp62 * fh1;
  const Scalar _tmp150 = Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = _tmp135 * (_tmp129 * _tmp60 - _tmp133 * _tmp65) +
                         _tmp140 * (-_tmp137 * _tmp65 + _tmp138) +
                         _tmp150 * (_tmp145 * _tmp60 - _tmp148 * _tmp65) +
                         Scalar(1.0) * _tmp46 * (_tmp55 * _tmp61 - _tmp60) +
                         Scalar(1.0) * _tmp63 * (-_tmp64 * _tmp65 + _tmp66) +
                         Scalar(1.0) * _tmp67 * (-_tmp109 * _tmp65 - _tmp60 * _tmp68 + Scalar(1.0));
  const Scalar _tmp152 = _tmp106 * _tmp85;
  const Scalar _tmp153 = -_tmp131 * _tmp152 - _tmp83;
  const Scalar _tmp154 = _tmp93 * _tmp97;
  const Scalar _tmp155 = _tmp132 * _tmp76;
  const Scalar _tmp156 = _tmp134 * (_tmp153 * _tmp154 + _tmp155 + Scalar(1.0));
  const Scalar _tmp157 = _tmp85 * _tmp97;
  const Scalar _tmp158 = _tmp157 * _tmp93;
  const Scalar _tmp159 = _tmp136 * _tmp76;
  const Scalar _tmp160 = _tmp139 * (-_tmp136 * _tmp158 + _tmp159);
  const Scalar _tmp161 = _tmp147 * _tmp76;
  const Scalar _tmp162 = -_tmp146 * _tmp152 + Scalar(1.0);
  const Scalar _tmp163 = _tmp149 * (_tmp154 * _tmp162 + _tmp161);
  const Scalar _tmp164 = _tmp106 * _tmp69;
  const Scalar _tmp165 = _tmp164 * _tmp76;
  const Scalar _tmp166 = _tmp152 * _tmp69;
  const Scalar _tmp167 = _tmp67 * (-_tmp154 * _tmp166 + _tmp165);
  const Scalar _tmp168 =
      -_tmp118 * _tmp156 - _tmp118 * _tmp160 - _tmp118 * _tmp163 - _tmp118 * _tmp167;
  const Scalar _tmp169 = Scalar(1.0) / (_tmp168);
  const Scalar _tmp170 = std::asinh(_tmp151 * _tmp169);
  const Scalar _tmp171 = Scalar(1.4083112389913199) * _tmp168;
  const Scalar _tmp172 = -_tmp170 * _tmp171 - _tmp31;
  const Scalar _tmp173 = Scalar(0.71007031138673404) * _tmp169;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = std::sinh(_tmp174);
  const Scalar _tmp176 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp177 = _tmp176 * _tmp82;
  const Scalar _tmp178 = std::pow(_tmp96, Scalar(-2));
  const Scalar _tmp179 = _tmp178 * _tmp93;
  const Scalar _tmp180 = _tmp103 * _tmp179;
  const Scalar _tmp181 = _tmp177 * _tmp180;
  const Scalar _tmp182 = _tmp104 * _tmp177;
  const Scalar _tmp183 = _tmp100 * _tmp85;
  const Scalar _tmp184 = _tmp177 * _tmp179;
  const Scalar _tmp185 = _tmp177 * _tmp70;
  const Scalar _tmp186 = _tmp101 * _tmp177;
  const Scalar _tmp187 = _tmp177 * _tmp98;
  const Scalar _tmp188 =
      _tmp157 * _tmp187 + _tmp183 * _tmp184 - _tmp185 * _tmp76 - _tmp186 * _tmp76;
  const Scalar _tmp189 = _tmp181 * _tmp85 - _tmp182 * _tmp76 - _tmp188 * _tmp57;
  const Scalar _tmp190 = std::pow(_tmp105, Scalar(-2));
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = _tmp191 * _tmp76;
  const Scalar _tmp193 = _tmp131 * _tmp85;
  const Scalar _tmp194 = _tmp114 * _tmp117;
  const Scalar _tmp195 = _tmp113 * _tmp176;
  const Scalar _tmp196 = _tmp117 * _tmp195;
  const Scalar _tmp197 = std::pow(_tmp112, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp198 = _tmp17 * _tmp197;
  const Scalar _tmp199 = _tmp197 * _tmp28;
  const Scalar _tmp200 = _tmp80 * _tmp82;
  const Scalar _tmp201 = _tmp118 * (-_tmp110 * _tmp198 + _tmp116 + _tmp199 * _tmp200);
  const Scalar _tmp202 = -_tmp194 * _tmp93 + _tmp196 * _tmp93 + _tmp201 * _tmp93;
  const Scalar _tmp203 = _tmp83 * _tmp97;
  const Scalar _tmp204 = _tmp194 * _tmp76;
  const Scalar _tmp205 = _tmp120 * _tmp179;
  const Scalar _tmp206 = _tmp177 * _tmp205;
  const Scalar _tmp207 = _tmp121 * _tmp177;
  const Scalar _tmp208 = -_tmp157 * _tmp202 + _tmp196 * _tmp76 + _tmp201 * _tmp76 - _tmp204 +
                         _tmp206 * _tmp85 - _tmp207 * _tmp76;
  const Scalar _tmp209 = _tmp106 * _tmp123;
  const Scalar _tmp210 = _tmp124 * _tmp191;
  const Scalar _tmp211 = _tmp111 / [&]() {
    const Scalar base = _tmp80;
    return base * base * base;
  }();
  const Scalar _tmp212 = _tmp100 * _tmp179;
  const Scalar _tmp213 = _tmp97 * _tmp98;
  const Scalar _tmp214 = _tmp185 + _tmp186 - _tmp211 * _tmp212 - _tmp211 * _tmp213;
  const Scalar _tmp215 = -_tmp180 * _tmp211 + _tmp182 - _tmp214 * _tmp57;
  const Scalar _tmp216 =
      _tmp128 * (_tmp123 * _tmp210 - _tmp125 * _tmp215 + _tmp194 - _tmp196 - _tmp201 +
                 _tmp202 * _tmp203 - _tmp205 * _tmp211 + _tmp207 - _tmp208 * _tmp209);
  const Scalar _tmp217 = _tmp127 * _tmp189;
  const Scalar _tmp218 = _tmp126 * _tmp217;
  const Scalar _tmp219 = _tmp105 * _tmp126;
  const Scalar _tmp220 = std::pow(_tmp124, Scalar(-2));
  const Scalar _tmp221 = _tmp208 * _tmp220;
  const Scalar _tmp222 = _tmp219 * _tmp221;
  const Scalar _tmp223 = _tmp215 + _tmp216 + _tmp218 - _tmp222;
  const Scalar _tmp224 = -_tmp152 * _tmp223 - _tmp155 * _tmp177 - _tmp177 + _tmp191 * _tmp193;
  const Scalar _tmp225 = _tmp106 * _tmp76;
  const Scalar _tmp226 = _tmp88 / _tmp91;
  const Scalar _tmp227 = _tmp153 * _tmp226;
  const Scalar _tmp228 = _tmp177 * _tmp178;
  const Scalar _tmp229 = _tmp118 * _tmp134;
  const Scalar _tmp230 = _tmp114 * _tmp163;
  const Scalar _tmp231 = _tmp154 * _tmp177;
  const Scalar _tmp232 = _tmp158 * _tmp69;
  const Scalar _tmp233 = _tmp226 * _tmp228;
  const Scalar _tmp234 = _tmp118 * _tmp67;
  const Scalar _tmp235 = _tmp136 * _tmp85;
  const Scalar _tmp236 = Scalar(1.0) * _tmp97;
  const Scalar _tmp237 = _tmp236 * _tmp85;
  const Scalar _tmp238 = _tmp221 * _tmp237;
  const Scalar _tmp239 = Scalar(1.0) * _tmp76;
  const Scalar _tmp240 = _tmp118 * _tmp139;
  const Scalar _tmp241 = _tmp144 * _tmp217;
  const Scalar _tmp242 = _tmp105 * _tmp144;
  const Scalar _tmp243 = _tmp221 * _tmp242;
  const Scalar _tmp244 = _tmp177 * _tmp212;
  const Scalar _tmp245 = Scalar(1.0) * _tmp244;
  const Scalar _tmp246 = _tmp187 * _tmp236;
  const Scalar _tmp247 = Scalar(1.0) * _tmp181 - _tmp245 * _tmp57 - _tmp246 * _tmp57;
  const Scalar _tmp248 = _tmp128 * (-_tmp125 * _tmp247 + _tmp142 * _tmp210 - _tmp143 * _tmp208 -
                                    _tmp202 * _tmp236 + Scalar(1.0) * _tmp206);
  const Scalar _tmp249 = _tmp241 - _tmp243 + _tmp247 + _tmp248;
  const Scalar _tmp250 = _tmp146 * _tmp85;
  const Scalar _tmp251 = -_tmp152 * _tmp249 - _tmp161 * _tmp177 + _tmp191 * _tmp250;
  const Scalar _tmp252 = _tmp118 * _tmp149;
  const Scalar _tmp253 = _tmp114 * _tmp160;
  const Scalar _tmp254 = _tmp114 * _tmp167;
  const Scalar _tmp255 = _tmp114 * _tmp156;
  const Scalar _tmp256 =
      -_tmp156 * _tmp195 - _tmp160 * _tmp195 - _tmp163 * _tmp195 - _tmp167 * _tmp195 -
      _tmp229 * (-_tmp131 * _tmp192 + _tmp154 * _tmp224 + _tmp223 * _tmp225 - _tmp227 * _tmp228) +
      _tmp230 -
      _tmp234 * (-_tmp165 * _tmp231 + _tmp166 * _tmp233 + _tmp191 * _tmp232 - _tmp192 * _tmp69) -
      _tmp240 * (-_tmp159 * _tmp231 - _tmp221 * _tmp239 + _tmp233 * _tmp235 + _tmp238 * _tmp93) -
      _tmp252 * (-_tmp146 * _tmp192 + _tmp154 * _tmp251 - _tmp162 * _tmp233 + _tmp225 * _tmp249) +
      _tmp253 + _tmp254 + _tmp255;
  const Scalar _tmp257 = std::pow(_tmp168, Scalar(-2));
  const Scalar _tmp258 = Scalar(0.71007031138673404) * _tmp257;
  const Scalar _tmp259 = _tmp256 * _tmp258;
  const Scalar _tmp260 = Scalar(1.0) / (_tmp31);
  const Scalar _tmp261 = _tmp102 * _tmp191;
  const Scalar _tmp262 = -_tmp107 * _tmp249 + _tmp130 * _tmp241 - _tmp130 * _tmp243 +
                         _tmp130 * _tmp248 + _tmp146 * _tmp261 - _tmp147 * _tmp188 + _tmp245 +
                         _tmp246;
  const Scalar _tmp263 = -_tmp107 * _tmp223 + _tmp130 * _tmp216 + _tmp130 * _tmp218 -
                         _tmp130 * _tmp222 + _tmp131 * _tmp261 - _tmp132 * _tmp188 + _tmp214;
  const Scalar _tmp264 = _tmp102 * _tmp69;
  const Scalar _tmp265 = -_tmp164 * _tmp188 + _tmp191 * _tmp264;
  const Scalar _tmp266 = _tmp65 * _tmp67;
  const Scalar _tmp267 = _tmp105 * _tmp60;
  const Scalar _tmp268 = _tmp221 * _tmp267;
  const Scalar _tmp269 = Scalar(1.0) * _tmp102;
  const Scalar _tmp270 = _tmp105 * _tmp61;
  const Scalar _tmp271 = _tmp217 * _tmp60;
  const Scalar _tmp272 =
      -_tmp136 * _tmp188 + _tmp221 * _tmp269 - _tmp221 * _tmp270 + _tmp271 * _tmp53;
  const Scalar _tmp273 = _tmp151 * _tmp257;
  const Scalar _tmp274 =
      _tmp169 *
          (_tmp135 * (_tmp216 * _tmp60 + _tmp218 * _tmp60 - _tmp222 * _tmp60 - _tmp263 * _tmp65) +
           _tmp140 * (-_tmp268 + _tmp271 - _tmp272 * _tmp65) +
           _tmp150 * (_tmp241 * _tmp60 - _tmp243 * _tmp60 + _tmp248 * _tmp60 - _tmp262 * _tmp65) -
           _tmp265 * _tmp266) -
      _tmp256 * _tmp273;
  const Scalar _tmp275 =
      std::pow(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp257 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp276 = _tmp171 * _tmp275;
  const Scalar _tmp277 = Scalar(1.4083112389913199) * _tmp256;
  const Scalar _tmp278 = Scalar(1.0) * _tmp170;
  const Scalar _tmp279 = Scalar(1.0) * _tmp275 * std::sinh(_tmp278);
  const Scalar _tmp280 = _tmp173 * p_d(2, 0) - std::cosh(_tmp174) + std::cosh(_tmp278);
  const Scalar _tmp281 = _tmp136 * _tmp139;
  const Scalar _tmp282 = _tmp76 * _tmp97;
  const Scalar _tmp283 = _tmp281 * _tmp282;
  const Scalar _tmp284 = _tmp149 * _tmp97;
  const Scalar _tmp285 = _tmp67 * _tmp69;
  const Scalar _tmp286 = _tmp152 * _tmp285;
  const Scalar _tmp287 = _tmp164 * _tmp67;
  const Scalar _tmp288 = _tmp282 * _tmp287;
  const Scalar _tmp289 = _tmp191 * _tmp285;
  const Scalar _tmp290 = _tmp134 * _tmp153;
  const Scalar _tmp291 = _tmp134 * _tmp97;
  const Scalar _tmp292 = _tmp139 * _tmp238 - _tmp149 * _tmp162 * _tmp184 + _tmp157 * _tmp289 -
                         _tmp177 * _tmp283 - _tmp177 * _tmp288 + _tmp184 * _tmp281 * _tmp85 +
                         _tmp184 * _tmp286 - _tmp184 * _tmp290 + _tmp224 * _tmp291 +
                         _tmp251 * _tmp284;
  const Scalar _tmp293 =
      _tmp153 * _tmp291 - _tmp157 * _tmp281 + _tmp162 * _tmp284 - _tmp286 * _tmp97;
  const Scalar _tmp294 = Scalar(1.0) / (_tmp293);
  const Scalar _tmp295 = Scalar(0.71007031138673404) * _tmp294;
  const Scalar _tmp296 = _tmp55 * _tmp67;
  const Scalar _tmp297 = _tmp55 * fh1;
  const Scalar _tmp298 = _tmp297 * _tmp39;
  const Scalar _tmp299 = _tmp46 * _tmp60;
  const Scalar _tmp300 = _tmp297 * _tmp62;
  const Scalar _tmp301 = _tmp139 * _tmp55;
  const Scalar _tmp302 = _tmp109 * _tmp296 + _tmp133 * _tmp298 + _tmp137 * _tmp301 +
                         _tmp148 * _tmp300 - _tmp299 * _tmp53 * _tmp55 + _tmp55 * _tmp63 * _tmp64;
  const Scalar _tmp303 = std::asinh(_tmp294 * _tmp302);
  const Scalar _tmp304 = Scalar(1.4083112389913199) * _tmp293;
  const Scalar _tmp305 =
      -_tmp303 * _tmp304 - std::sqrt(Scalar(std::pow(Scalar(-_tmp86 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp89 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp306 = _tmp295 * _tmp305;
  const Scalar _tmp307 = Scalar(1.0) * _tmp303;
  const Scalar _tmp308 = Scalar(1.4083112389913199) * _tmp295 * p_c(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp306) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp307);
  const Scalar _tmp309 = std::pow(_tmp293, Scalar(-2));
  const Scalar _tmp310 = Scalar(0.71007031138673404) * _tmp309;
  const Scalar _tmp311 = _tmp310 * p_c(2, 0);
  const Scalar _tmp312 =
      std::pow(Scalar(std::pow(_tmp302, Scalar(2)) * _tmp309 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp313 = _tmp302 * _tmp309;
  const Scalar _tmp314 =
      _tmp312 * (-_tmp292 * _tmp313 + _tmp294 * (_tmp262 * _tmp300 + _tmp263 * _tmp298 +
                                                 _tmp265 * _tmp296 + _tmp272 * _tmp301));
  const Scalar _tmp315 = Scalar(1.0) * std::sinh(_tmp307);
  const Scalar _tmp316 = Scalar(1.4083112389913199) * _tmp303;
  const Scalar _tmp317 = _tmp305 * _tmp310;
  const Scalar _tmp318 = std::sinh(_tmp306);
  const Scalar _tmp319 = _tmp106 * _tmp134;
  const Scalar _tmp320 = _tmp146 * _tmp149;
  const Scalar _tmp321 = _tmp106 * _tmp149;
  const Scalar _tmp322 = _tmp131 * _tmp134;
  const Scalar _tmp323 = -_tmp140 * _tmp221 - _tmp191 * _tmp320 - _tmp191 * _tmp322 +
                         _tmp223 * _tmp319 + _tmp249 * _tmp321 - _tmp289;
  const Scalar _tmp324 = _tmp132 * _tmp134 + _tmp147 * _tmp149 + _tmp281 + _tmp287;
  const Scalar _tmp325 = Scalar(1.0) / (_tmp324);
  const Scalar _tmp326 = _tmp134 * _tmp59;
  const Scalar _tmp327 = _tmp149 * _tmp59;
  const Scalar _tmp328 = _tmp108 * _tmp67 - _tmp129 * _tmp326 - _tmp138 * _tmp139 -
                         _tmp145 * _tmp327 + _tmp299 - _tmp63 * _tmp66;
  const Scalar _tmp329 = std::asinh(_tmp325 * _tmp328);
  const Scalar _tmp330 = Scalar(1.0) * _tmp329;
  const Scalar _tmp331 = Scalar(0.71007031138673404) * _tmp325;
  const Scalar _tmp332 = Scalar(1.4083112389913199) * _tmp329;
  const Scalar _tmp333 =
      -_tmp324 * _tmp332 - std::sqrt(Scalar(std::pow(Scalar(-_tmp71 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp73 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp334 = _tmp331 * _tmp333;
  const Scalar _tmp335 = Scalar(1.4083112389913199) * _tmp331 * p_b(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp330) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp334);
  const Scalar _tmp336 = std::pow(_tmp324, Scalar(-2));
  const Scalar _tmp337 = Scalar(0.71007031138673404) * _tmp336;
  const Scalar _tmp338 = _tmp323 * _tmp337;
  const Scalar _tmp339 = Scalar(1.4083112389913199) * _tmp324;
  const Scalar _tmp340 =
      std::pow(Scalar(std::pow(_tmp328, Scalar(2)) * _tmp336 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp341 = _tmp328 * _tmp336;
  const Scalar _tmp342 =
      _tmp340 *
      (-_tmp323 * _tmp341 +
       _tmp325 * (_tmp139 * _tmp268 - _tmp139 * _tmp271 - _tmp216 * _tmp326 - _tmp218 * _tmp326 +
                  _tmp222 * _tmp326 - _tmp241 * _tmp327 + _tmp243 * _tmp327 - _tmp248 * _tmp327));
  const Scalar _tmp343 = std::sinh(_tmp334);
  const Scalar _tmp344 = Scalar(1.0) * std::sinh(_tmp330);
  const Scalar _tmp345 = _tmp178 * _tmp81;
  const Scalar _tmp346 = _tmp345 * _tmp93;
  const Scalar _tmp347 = _tmp346 * _tmp85;
  const Scalar _tmp348 = _tmp121 * _tmp81;
  const Scalar _tmp349 = _tmp118 * (_tmp111 * _tmp199 - _tmp115 - _tmp198 * _tmp200);
  const Scalar _tmp350 = -_tmp194 * _tmp94 + _tmp349 * _tmp93;
  const Scalar _tmp351 = -_tmp120 * _tmp347 - _tmp157 * _tmp350 - _tmp204 * _tmp83 +
                         _tmp348 * _tmp76 + _tmp349 * _tmp76;
  const Scalar _tmp352 = _tmp220 * _tmp351;
  const Scalar _tmp353 = _tmp242 * _tmp352;
  const Scalar _tmp354 = _tmp70 * _tmp81;
  const Scalar _tmp355 = _tmp354 * _tmp93;
  const Scalar _tmp356 = _tmp101 * _tmp81;
  const Scalar _tmp357 =
      -_tmp157 * _tmp355 - _tmp183 * _tmp346 + _tmp354 * _tmp76 + _tmp356 * _tmp76;
  const Scalar _tmp358 = _tmp104 * _tmp81;
  const Scalar _tmp359 = -_tmp103 * _tmp347 - _tmp357 * _tmp57 + _tmp358 * _tmp76;
  const Scalar _tmp360 = _tmp127 * _tmp359;
  const Scalar _tmp361 = _tmp144 * _tmp360;
  const Scalar _tmp362 = Scalar(1.0) * _tmp346;
  const Scalar _tmp363 = _tmp236 * _tmp355;
  const Scalar _tmp364 = _tmp100 * _tmp362;
  const Scalar _tmp365 = -_tmp103 * _tmp362 + _tmp363 * _tmp57 + _tmp364 * _tmp57;
  const Scalar _tmp366 = _tmp190 * _tmp359;
  const Scalar _tmp367 = _tmp124 * _tmp366;
  const Scalar _tmp368 = _tmp128 * (-_tmp120 * _tmp362 - _tmp125 * _tmp365 + _tmp142 * _tmp367 -
                                    _tmp143 * _tmp351 - _tmp236 * _tmp350);
  const Scalar _tmp369 = _tmp102 * _tmp366;
  const Scalar _tmp370 = -_tmp353 + _tmp361 + _tmp365 + _tmp368;
  const Scalar _tmp371 = -_tmp107 * _tmp370 - _tmp130 * _tmp353 + _tmp130 * _tmp361 +
                         _tmp130 * _tmp368 + _tmp146 * _tmp369 - _tmp147 * _tmp357 - _tmp363 -
                         _tmp364;
  const Scalar _tmp372 = _tmp267 * _tmp352;
  const Scalar _tmp373 = _tmp360 * _tmp60;
  const Scalar _tmp374 =
      -_tmp136 * _tmp357 + _tmp269 * _tmp352 - _tmp270 * _tmp352 + _tmp360 * _tmp61;
  const Scalar _tmp375 = _tmp126 * _tmp360;
  const Scalar _tmp376 = _tmp219 * _tmp352;
  const Scalar _tmp377 = _tmp177 * _tmp213 + _tmp244 - _tmp354 - _tmp356;
  const Scalar _tmp378 = _tmp181 - _tmp358 - _tmp377 * _tmp57;
  const Scalar _tmp379 =
      _tmp128 * (_tmp123 * _tmp367 - _tmp125 * _tmp378 + _tmp194 * _tmp83 + _tmp203 * _tmp350 +
                 _tmp206 - _tmp209 * _tmp351 - _tmp348 - _tmp349);
  const Scalar _tmp380 = _tmp375 - _tmp376 + _tmp378 + _tmp379;
  const Scalar _tmp381 = -_tmp107 * _tmp380 + _tmp130 * _tmp375 - _tmp130 * _tmp376 +
                         _tmp130 * _tmp379 + _tmp131 * _tmp369 - _tmp132 * _tmp357 + _tmp377;
  const Scalar _tmp382 = -_tmp164 * _tmp357 + _tmp264 * _tmp366;
  const Scalar _tmp383 = _tmp366 * _tmp76;
  const Scalar _tmp384 = -_tmp152 * _tmp380 + _tmp155 * _tmp81 + _tmp193 * _tmp366 + _tmp81;
  const Scalar _tmp385 = _tmp154 * _tmp81;
  const Scalar _tmp386 = _tmp226 * _tmp345;
  const Scalar _tmp387 = _tmp237 * _tmp352;
  const Scalar _tmp388 = -_tmp152 * _tmp370 + _tmp161 * _tmp81 + _tmp250 * _tmp366;
  const Scalar _tmp389 = _tmp162 * _tmp345;
  const Scalar _tmp390 =
      -_tmp229 * (-_tmp131 * _tmp383 + _tmp154 * _tmp384 + _tmp225 * _tmp380 + _tmp227 * _tmp345) +
      _tmp230 * _tmp83 -
      _tmp234 * (_tmp165 * _tmp385 - _tmp166 * _tmp386 + _tmp232 * _tmp366 - _tmp383 * _tmp69) -
      _tmp240 * (_tmp159 * _tmp385 - _tmp235 * _tmp386 - _tmp239 * _tmp352 + _tmp387 * _tmp93) -
      _tmp252 * (-_tmp146 * _tmp383 + _tmp154 * _tmp388 + _tmp225 * _tmp370 + _tmp226 * _tmp389) +
      _tmp253 * _tmp83 + _tmp254 * _tmp83 + _tmp255 * _tmp83;
  const Scalar _tmp391 =
      _tmp169 *
          (_tmp135 * (_tmp375 * _tmp60 - _tmp376 * _tmp60 + _tmp379 * _tmp60 - _tmp381 * _tmp65) +
           _tmp140 * (-_tmp372 + _tmp373 - _tmp374 * _tmp65) +
           _tmp150 * (-_tmp353 * _tmp60 + _tmp361 * _tmp60 + _tmp368 * _tmp60 - _tmp371 * _tmp65) -
           _tmp266 * _tmp382) -
      _tmp273 * _tmp390;
  const Scalar _tmp392 = Scalar(1.4083112389913199) * _tmp390;
  const Scalar _tmp393 = _tmp258 * _tmp390;
  const Scalar _tmp394 = _tmp285 * _tmp366;
  const Scalar _tmp395 = _tmp139 * _tmp387 + _tmp149 * _tmp389 * _tmp93 + _tmp157 * _tmp394 -
                         _tmp281 * _tmp347 + _tmp283 * _tmp81 + _tmp284 * _tmp388 -
                         _tmp286 * _tmp346 + _tmp288 * _tmp81 + _tmp290 * _tmp346 +
                         _tmp291 * _tmp384;
  const Scalar _tmp396 =
      _tmp312 *
      (_tmp294 * (_tmp296 * _tmp382 + _tmp298 * _tmp381 + _tmp300 * _tmp371 + _tmp301 * _tmp374) -
       _tmp313 * _tmp395);
  const Scalar _tmp397 = -_tmp140 * _tmp352 + _tmp319 * _tmp380 - _tmp320 * _tmp366 +
                         _tmp321 * _tmp370 - _tmp322 * _tmp366 - _tmp394;
  const Scalar _tmp398 =
      _tmp340 *
      (_tmp325 * (_tmp139 * _tmp372 - _tmp139 * _tmp373 - _tmp326 * _tmp375 + _tmp326 * _tmp376 -
                  _tmp326 * _tmp379 + _tmp327 * _tmp353 - _tmp327 * _tmp361 - _tmp327 * _tmp368) -
       _tmp341 * _tmp397);
  const Scalar _tmp399 = _tmp337 * _tmp397;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp171 *
          (-_tmp175 * (-_tmp172 * _tmp259 +
                       _tmp173 * (-_tmp170 * _tmp277 - _tmp260 * _tmp30 - _tmp274 * _tmp276)) -
           _tmp259 * p_d(2, 0) + _tmp274 * _tmp279) -
      _tmp277 * _tmp280;
  _res(2, 0) =
      -_tmp292 * _tmp308 -
      _tmp304 *
          (-_tmp292 * _tmp311 + _tmp314 * _tmp315 -
           _tmp318 * (-_tmp292 * _tmp317 + _tmp295 * (-_tmp292 * _tmp316 - _tmp304 * _tmp314)));
  _res(3, 0) =
      -_tmp323 * _tmp335 -
      _tmp339 *
          (-_tmp338 * p_b(2, 0) + _tmp342 * _tmp344 -
           _tmp343 * (_tmp331 * (-_tmp323 * _tmp332 - _tmp339 * _tmp342) - _tmp333 * _tmp338));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp171 *
          (-_tmp175 * (-_tmp172 * _tmp393 +
                       _tmp173 * (-_tmp170 * _tmp392 - _tmp19 * _tmp260 - _tmp276 * _tmp391)) +
           _tmp279 * _tmp391 - _tmp393 * p_d(2, 0)) -
      _tmp280 * _tmp392;
  _res(2, 1) =
      -_tmp304 *
          (-_tmp311 * _tmp395 + _tmp315 * _tmp396 -
           _tmp318 * (_tmp295 * (-_tmp304 * _tmp396 - _tmp316 * _tmp395) - _tmp317 * _tmp395)) -
      _tmp308 * _tmp395;
  _res(3, 1) =
      -_tmp335 * _tmp397 -
      _tmp339 *
          (-_tmp343 * (_tmp331 * (-_tmp332 * _tmp397 - _tmp339 * _tmp398) - _tmp333 * _tmp399) +
           _tmp344 * _tmp398 - _tmp399 * p_b(2, 0));
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
