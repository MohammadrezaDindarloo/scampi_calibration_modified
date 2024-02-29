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
 * Symbolic function: IK_residual_func_cost1_wrt_pb_Nl11
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPbNl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 783

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (282)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = _tmp6 + _tmp8;
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp2;
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp0 * _tmp7;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_b(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp19 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp0 * _tmp11;
  const Scalar _tmp23 = _tmp5 * _tmp7;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = -_tmp29 + p_b(1, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = Scalar(1.0) / (fh1);
  const Scalar _tmp33 =
      Scalar(1.0) *
      std::sinh(Scalar(0.71007031138673404) * _tmp32 *
                (-_tmp31 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp32 * fv1))) /
      _tmp31;
  const Scalar _tmp34 = _tmp17 - p_b(0, 0);
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(2));
  const Scalar _tmp36 = _tmp29 - p_b(1, 0);
  const Scalar _tmp37 = std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 = _tmp35 + _tmp37;
  const Scalar _tmp39 = std::pow(_tmp38, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp40 = _tmp35 * _tmp39;
  const Scalar _tmp41 = _tmp40 * fh1;
  const Scalar _tmp42 = -_tmp4;
  const Scalar _tmp43 = _tmp10 + _tmp14;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_d(0, 0);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp25 - _tmp26;
  const Scalar _tmp49 = _tmp20 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_d(1, 0);
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp54 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp56 = _tmp54 + _tmp55;
  const Scalar _tmp57 = _tmp53 + _tmp56;
  const Scalar _tmp58 = _tmp4 + _tmp43;
  const Scalar _tmp59 = _tmp58 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 - p_c(0, 0);
  const Scalar _tmp61 = _tmp20 + _tmp27;
  const Scalar _tmp62 = _tmp61 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_c(1, 0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp60 * _tmp64;
  const Scalar _tmp66 = -_tmp53;
  const Scalar _tmp67 = _tmp56 + _tmp66;
  const Scalar _tmp68 = _tmp65 * _tmp67;
  const Scalar _tmp69 = _tmp63 * _tmp64;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp52 * _tmp65 - _tmp69);
  const Scalar _tmp71 = _tmp70 * (-_tmp57 * _tmp65 + _tmp68);
  const Scalar _tmp72 = _tmp70 * (-_tmp52 * _tmp68 + _tmp57 * _tmp69);
  const Scalar _tmp73 = _tmp52 * _tmp67 + _tmp52 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) * _tmp49;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp61 + _tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp44;
  const Scalar _tmp78 = _tmp76 * (-_tmp58 + _tmp77);
  const Scalar _tmp79 = _tmp52 * _tmp71 - _tmp67 - _tmp73 * _tmp78;
  const Scalar _tmp80 = _tmp54 - _tmp55;
  const Scalar _tmp81 = _tmp66 + _tmp80;
  const Scalar _tmp82 = _tmp15 + _tmp42;
  const Scalar _tmp83 = _tmp82 + position_vector(0, 0);
  const Scalar _tmp84 = _tmp83 - p_a(0, 0);
  const Scalar _tmp85 = _tmp21 + _tmp48;
  const Scalar _tmp86 = _tmp85 + position_vector(1, 0);
  const Scalar _tmp87 = _tmp86 - p_a(1, 0);
  const Scalar _tmp88 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp87, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp84 * _tmp88;
  const Scalar _tmp90 = _tmp87 * _tmp88;
  const Scalar _tmp91 = _tmp52 * _tmp89 - _tmp90;
  const Scalar _tmp92 = _tmp67 * _tmp89;
  const Scalar _tmp93 = -_tmp52 * _tmp92 - _tmp72 * _tmp91 + _tmp81 * _tmp90;
  const Scalar _tmp94 = -_tmp71 * _tmp91 - _tmp78 * _tmp93 - _tmp81 * _tmp89 + _tmp92;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp47 * _tmp96;
  const Scalar _tmp99 = _tmp98 * (_tmp44 * _tmp51 * _tmp97 - _tmp46 * _tmp49 * _tmp97);
  const Scalar _tmp100 = _tmp70 * (-_tmp58 * _tmp69 + _tmp61 * _tmp65 + _tmp65 * _tmp99);
  const Scalar _tmp101 = -_tmp100 * _tmp91 - _tmp82 * _tmp90 + _tmp85 * _tmp89 + _tmp89 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp95;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp94;
  const Scalar _tmp105 = _tmp104 * (_tmp100 * _tmp52 - _tmp102 * _tmp79 - _tmp99);
  const Scalar _tmp106 = _tmp105 + _tmp79;
  const Scalar _tmp107 = _tmp89 * _tmp95;
  const Scalar _tmp108 = _tmp91 * _tmp95;
  const Scalar _tmp109 = -_tmp106 * _tmp108 - _tmp52;
  const Scalar _tmp110 = _tmp65 * _tmp70;
  const Scalar _tmp111 = _tmp106 * _tmp107 + _tmp109 * _tmp110 + Scalar(1.0);
  const Scalar _tmp112 = _tmp111 * _tmp98;
  const Scalar _tmp113 = Scalar(1.0) * _tmp103;
  const Scalar _tmp114 = _tmp110 * _tmp91;
  const Scalar _tmp115 = _tmp98 * (-_tmp113 * _tmp114 + _tmp113 * _tmp89);
  const Scalar _tmp116 = _tmp28 * _tmp39;
  const Scalar _tmp117 = _tmp34 * _tmp36;
  const Scalar _tmp118 = _tmp117 * _tmp39;
  const Scalar _tmp119 = std::pow(_tmp38, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp120 = _tmp119 * _tmp28;
  const Scalar _tmp121 = -_tmp116 * _tmp35 + _tmp118 * _tmp16 + _tmp120;
  const Scalar _tmp122 = _tmp121 * fh1;
  const Scalar _tmp123 = _tmp119 * fh1;
  const Scalar _tmp124 = _tmp123 * _tmp98;
  const Scalar _tmp125 = _tmp111 * _tmp124;
  const Scalar _tmp126 = _tmp118 * fh1;
  const Scalar _tmp127 = Scalar(1.0) * _tmp72;
  const Scalar _tmp128 = _tmp127 * _tmp78 - Scalar(1.0) * _tmp71;
  const Scalar _tmp129 = _tmp104 * (-Scalar(1.0) * _tmp100 - _tmp102 * _tmp128);
  const Scalar _tmp130 = _tmp128 + _tmp129;
  const Scalar _tmp131 = -_tmp108 * _tmp130 + Scalar(1.0);
  const Scalar _tmp132 = _tmp107 * _tmp130 + _tmp110 * _tmp131;
  const Scalar _tmp133 = _tmp132 * _tmp98;
  const Scalar _tmp134 = -_tmp112 * _tmp41 - _tmp115 * _tmp122 + _tmp125 - _tmp126 * _tmp133;
  const Scalar _tmp135 = _tmp53 + _tmp80;
  const Scalar _tmp136 = _tmp123 * _tmp135;
  const Scalar _tmp137 = _tmp136 * _tmp34 + _tmp16 * fv1 + Scalar(40.024799999999999) * _tmp9;
  const Scalar _tmp138 = _tmp75 + _tmp85;
  const Scalar _tmp139 = _tmp138 * _tmp78;
  const Scalar _tmp140 = Scalar(1.0) / (-_tmp139 + _tmp77 - _tmp82);
  const Scalar _tmp141 = Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp138 * _tmp76;
  const Scalar _tmp143 = _tmp141 * _tmp142;
  const Scalar _tmp144 = -Scalar(1.0) * _tmp141 + Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp138 * _tmp140;
  const Scalar _tmp146 = _tmp93 * _tmp95;
  const Scalar _tmp147 = _tmp105 * _tmp145 - _tmp106 * _tmp146 + _tmp73;
  const Scalar _tmp148 = Scalar(1.0) * _tmp76;
  const Scalar _tmp149 = _tmp105 * _tmp141 - _tmp147 * _tmp148;
  const Scalar _tmp150 = Scalar(1.0) * _tmp123;
  const Scalar _tmp151 = _tmp149 * _tmp150;
  const Scalar _tmp152 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp153 = _tmp74 * _tmp78 + _tmp77;
  const Scalar _tmp154 = _tmp140 * _tmp153;
  const Scalar _tmp155 = 0;
  const Scalar _tmp156 = -_tmp138 * _tmp154 - _tmp146 * _tmp155 + _tmp75;
  const Scalar _tmp157 = -_tmp127 + _tmp129 * _tmp145 - _tmp130 * _tmp146;
  const Scalar _tmp158 = _tmp129 * _tmp141 - _tmp148 * _tmp157;
  const Scalar _tmp159 = _tmp150 * _tmp158;
  const Scalar _tmp160 = -_tmp136 * _tmp36 - Scalar(40.024799999999999) * _tmp24 - _tmp28 * fv1;
  const Scalar _tmp161 = _tmp141 * _tmp78;
  const Scalar _tmp162 = _tmp76 * (_tmp139 * _tmp141 + Scalar(1.0));
  const Scalar _tmp163 = Scalar(1.0) * _tmp161 - Scalar(1.0) * _tmp162;
  const Scalar _tmp164 = _tmp119 * _tmp16;
  const Scalar _tmp165 = -_tmp120 * _tmp34 + _tmp164 * _tmp36;
  const Scalar _tmp166 = _tmp104 * _tmp141;
  const Scalar _tmp167 = -_tmp113 * _tmp93 + _tmp138 * _tmp166;
  const Scalar _tmp168 = -Scalar(1.0) * _tmp148 * _tmp167 + Scalar(1.0) * _tmp166;
  const Scalar _tmp169 = _tmp168 * fh1;
  const Scalar _tmp170 =
      _tmp137 * _tmp144 + _tmp151 * _tmp34 +
      Scalar(1.0) * _tmp152 * (-_tmp141 * _tmp153 - _tmp148 * _tmp156 + Scalar(1.0)) +
      _tmp159 * _tmp36 + _tmp160 * _tmp163 + _tmp165 * _tmp169;
  const Scalar _tmp171 = _tmp124 * _tmp132;
  const Scalar _tmp172 = _tmp155 * _tmp95;
  const Scalar _tmp173 = _tmp165 * fh1;
  const Scalar _tmp174 = -_tmp115 * _tmp173 - _tmp125 * _tmp34 -
                         _tmp152 * _tmp98 * (-_tmp114 * _tmp172 + _tmp172 * _tmp89) -
                         _tmp171 * _tmp36;
  const Scalar _tmp175 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp176 = std::asinh(_tmp170 * _tmp175);
  const Scalar _tmp177 = Scalar(1.0) * _tmp176;
  const Scalar _tmp178 = Scalar(1.4083112389913199) * _tmp176;
  const Scalar _tmp179 =
      -_tmp174 * _tmp178 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp180 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp181 = _tmp179 * _tmp180;
  const Scalar _tmp182 = Scalar(1.4083112389913199) * _tmp180 * p_d(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp177) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp181);
  const Scalar _tmp183 = std::pow(_tmp174, Scalar(-2));
  const Scalar _tmp184 = Scalar(0.71007031138673404) * _tmp183;
  const Scalar _tmp185 = _tmp134 * _tmp184;
  const Scalar _tmp186 = _tmp170 * _tmp183;
  const Scalar _tmp187 = _tmp135 * fh1;
  const Scalar _tmp188 = _tmp118 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp158;
  const Scalar _tmp190 = Scalar(1.0) * _tmp149;
  const Scalar _tmp191 = -_tmp136 + _tmp187 * _tmp40;
  const Scalar _tmp192 =
      -_tmp134 * _tmp186 + _tmp175 * (_tmp121 * _tmp169 + _tmp126 * _tmp189 + _tmp144 * _tmp191 -
                                      _tmp151 - _tmp163 * _tmp188 + _tmp190 * _tmp41);
  const Scalar _tmp193 =
      std::pow(Scalar(std::pow(_tmp170, Scalar(2)) * _tmp183 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp194 = Scalar(1.0) * _tmp193 * std::sinh(_tmp177);
  const Scalar _tmp195 = std::sinh(_tmp181);
  const Scalar _tmp196 = Scalar(1.4083112389913199) * _tmp174;
  const Scalar _tmp197 = _tmp193 * _tmp196;
  const Scalar _tmp198 = _tmp113 * fh1;
  const Scalar _tmp199 = _tmp165 * _tmp198;
  const Scalar _tmp200 = _tmp70 * _tmp91;
  const Scalar _tmp201 = _tmp123 * _tmp70;
  const Scalar _tmp202 = _tmp109 * _tmp201;
  const Scalar _tmp203 = _tmp131 * _tmp201;
  const Scalar _tmp204 = _tmp152 * _tmp172;
  const Scalar _tmp205 =
      -_tmp199 * _tmp200 - _tmp200 * _tmp204 + _tmp202 * _tmp34 + _tmp203 * _tmp36;
  const Scalar _tmp206 = _tmp137 * _tmp141;
  const Scalar _tmp207 = _tmp167 * _tmp76;
  const Scalar _tmp208 = _tmp207 * fh1;
  const Scalar _tmp209 = _tmp123 * _tmp76;
  const Scalar _tmp210 = _tmp157 * _tmp209;
  const Scalar _tmp211 = _tmp147 * _tmp209;
  const Scalar _tmp212 = -_tmp142 * _tmp206 + _tmp152 * _tmp156 * _tmp76 + _tmp160 * _tmp162 +
                         _tmp165 * _tmp208 + _tmp210 * _tmp36 + _tmp211 * _tmp34;
  const Scalar _tmp213 = Scalar(1.0) / (_tmp205);
  const Scalar _tmp214 = std::asinh(_tmp212 * _tmp213);
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp214;
  const Scalar _tmp216 =
      -_tmp205 * _tmp215 - std::sqrt(Scalar(std::pow(Scalar(-_tmp59 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp217 = Scalar(0.71007031138673404) * _tmp213;
  const Scalar _tmp218 = _tmp216 * _tmp217;
  const Scalar _tmp219 = std::sinh(_tmp218);
  const Scalar _tmp220 = _tmp121 * _tmp198;
  const Scalar _tmp221 = _tmp109 * _tmp70;
  const Scalar _tmp222 = _tmp131 * _tmp70;
  const Scalar _tmp223 = _tmp126 * _tmp222 - _tmp200 * _tmp220 - _tmp202 + _tmp221 * _tmp41;
  const Scalar _tmp224 = Scalar(1.4083112389913199) * _tmp205;
  const Scalar _tmp225 = std::pow(_tmp205, Scalar(-2));
  const Scalar _tmp226 =
      std::pow(Scalar(std::pow(_tmp212, Scalar(2)) * _tmp225 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp227 = _tmp212 * _tmp225;
  const Scalar _tmp228 = _tmp157 * _tmp76;
  const Scalar _tmp229 = _tmp141 * _tmp191;
  const Scalar _tmp230 = _tmp147 * _tmp76;
  const Scalar _tmp231 =
      _tmp226 * (_tmp213 * (_tmp121 * _tmp208 + _tmp126 * _tmp228 - _tmp142 * _tmp229 -
                            _tmp162 * _tmp188 - _tmp211 + _tmp230 * _tmp41) -
                 _tmp223 * _tmp227);
  const Scalar _tmp232 = Scalar(0.71007031138673404) * _tmp225;
  const Scalar _tmp233 = _tmp223 * _tmp232;
  const Scalar _tmp234 = Scalar(1.0) * _tmp214;
  const Scalar _tmp235 = Scalar(1.0) * std::sinh(_tmp234);
  const Scalar _tmp236 = Scalar(1.4083112389913199) * _tmp217 * p_c(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp218) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp234);
  const Scalar _tmp237 = _tmp123 * _tmp140;
  const Scalar _tmp238 = _tmp129 * _tmp237;
  const Scalar _tmp239 = _tmp105 * _tmp237;
  const Scalar _tmp240 = _tmp152 * _tmp154 - _tmp160 * _tmp161 - _tmp166 * _tmp173 + _tmp206 -
                         _tmp238 * _tmp36 - _tmp239 * _tmp34;
  const Scalar _tmp241 = _tmp123 * _tmp95;
  const Scalar _tmp242 = _tmp130 * _tmp241;
  const Scalar _tmp243 = _tmp106 * _tmp241;
  const Scalar _tmp244 = _tmp199 + _tmp204 + _tmp242 * _tmp36 + _tmp243 * _tmp34;
  const Scalar _tmp245 = std::pow(_tmp244, Scalar(-2));
  const Scalar _tmp246 =
      std::pow(Scalar(std::pow(_tmp240, Scalar(2)) * _tmp245 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp247 = _tmp130 * _tmp95;
  const Scalar _tmp248 = _tmp106 * _tmp95;
  const Scalar _tmp249 = _tmp126 * _tmp247 + _tmp220 - _tmp243 + _tmp248 * _tmp41;
  const Scalar _tmp250 = _tmp240 * _tmp245;
  const Scalar _tmp251 = _tmp129 * _tmp140;
  const Scalar _tmp252 = _tmp105 * _tmp140;
  const Scalar _tmp253 = Scalar(1.0) / (_tmp244);
  const Scalar _tmp254 =
      _tmp246 *
      (-_tmp249 * _tmp250 + _tmp253 * (-_tmp122 * _tmp166 - _tmp126 * _tmp251 + _tmp161 * _tmp188 +
                                       _tmp229 + _tmp239 - _tmp252 * _tmp41));
  const Scalar _tmp255 = std::asinh(_tmp240 * _tmp253);
  const Scalar _tmp256 = Scalar(1.0) * _tmp255;
  const Scalar _tmp257 = Scalar(1.0) * std::sinh(_tmp256);
  const Scalar _tmp258 = Scalar(1.4083112389913199) * _tmp255;
  const Scalar _tmp259 =
      -_tmp244 * _tmp258 - std::sqrt(Scalar(std::pow(Scalar(-_tmp83 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp86 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp260 = Scalar(0.71007031138673404) * _tmp253;
  const Scalar _tmp261 = _tmp259 * _tmp260;
  const Scalar _tmp262 = std::sinh(_tmp261);
  const Scalar _tmp263 = Scalar(1.4083112389913199) * _tmp244;
  const Scalar _tmp264 = Scalar(0.71007031138673404) * _tmp245;
  const Scalar _tmp265 = _tmp259 * _tmp264;
  const Scalar _tmp266 = _tmp264 * p_a(2, 0);
  const Scalar _tmp267 = Scalar(1.4083112389913199) * _tmp260 * p_a(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp256) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp261);
  const Scalar _tmp268 = _tmp37 * _tmp39;
  const Scalar _tmp269 = _tmp268 * fh1;
  const Scalar _tmp270 = -_tmp116 * _tmp117 + _tmp16 * _tmp268 - _tmp164;
  const Scalar _tmp271 = _tmp270 * fh1;
  const Scalar _tmp272 = -_tmp112 * _tmp126 - _tmp115 * _tmp271 - _tmp133 * _tmp269 + _tmp171;
  const Scalar _tmp273 = _tmp184 * _tmp272;
  const Scalar _tmp274 = _tmp136 - _tmp187 * _tmp268;
  const Scalar _tmp275 = _tmp175 * (_tmp126 * _tmp190 + _tmp144 * _tmp188 - _tmp159 +
                                    _tmp163 * _tmp274 + _tmp168 * _tmp271 + _tmp189 * _tmp269) -
                         _tmp186 * _tmp272;
  const Scalar _tmp276 = _tmp198 * _tmp270;
  const Scalar _tmp277 = _tmp126 * _tmp221 - _tmp200 * _tmp276 - _tmp203 + _tmp222 * _tmp269;
  const Scalar _tmp278 = _tmp232 * _tmp277;
  const Scalar _tmp279 =
      _tmp226 * (_tmp213 * (_tmp126 * _tmp230 - _tmp143 * _tmp188 + _tmp162 * _tmp274 +
                            _tmp207 * _tmp271 - _tmp210 + _tmp228 * _tmp269) -
                 _tmp227 * _tmp277);
  const Scalar _tmp280 = _tmp126 * _tmp248 - _tmp242 + _tmp247 * _tmp269 + _tmp276;
  const Scalar _tmp281 =
      _tmp246 *
      (-_tmp250 * _tmp280 + _tmp253 * (-_tmp126 * _tmp252 + _tmp141 * _tmp188 - _tmp161 * _tmp274 -
                                       _tmp166 * _tmp271 + _tmp238 - _tmp251 * _tmp269));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp18 * _tmp33;
  _res(1, 0) =
      -_tmp134 * _tmp182 -
      _tmp196 *
          (-_tmp185 * p_d(2, 0) + _tmp192 * _tmp194 -
           _tmp195 * (-_tmp179 * _tmp185 + _tmp180 * (-_tmp134 * _tmp178 - _tmp192 * _tmp197)));
  _res(2, 0) =
      -_tmp223 * _tmp236 -
      _tmp224 *
          (-_tmp219 * (-_tmp216 * _tmp233 + _tmp217 * (-_tmp215 * _tmp223 - _tmp224 * _tmp231)) +
           _tmp231 * _tmp235 - _tmp233 * p_c(2, 0));
  _res(3, 0) =
      -_tmp249 * _tmp267 -
      _tmp263 *
          (-_tmp249 * _tmp266 + _tmp254 * _tmp257 -
           _tmp262 * (-_tmp249 * _tmp265 + _tmp260 * (-_tmp249 * _tmp258 - _tmp254 * _tmp263)));
  _res(0, 1) = -_tmp30 * _tmp33;
  _res(1, 1) =
      -_tmp182 * _tmp272 -
      _tmp196 *
          (_tmp194 * _tmp275 -
           _tmp195 * (-_tmp179 * _tmp273 + _tmp180 * (-_tmp178 * _tmp272 - _tmp197 * _tmp275)) -
           _tmp273 * p_d(2, 0));
  _res(2, 1) =
      -_tmp224 *
          (-_tmp219 * (-_tmp216 * _tmp278 + _tmp217 * (-_tmp215 * _tmp277 - _tmp224 * _tmp279)) +
           _tmp235 * _tmp279 - _tmp278 * p_c(2, 0)) -
      _tmp236 * _tmp277;
  _res(3, 1) =
      -_tmp263 *
          (_tmp257 * _tmp281 -
           _tmp262 * (_tmp260 * (-_tmp258 * _tmp280 - _tmp263 * _tmp281) - _tmp265 * _tmp280) -
           _tmp266 * _tmp280) -
      _tmp267 * _tmp280;
  _res(0, 2) = Scalar(-1.0);
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
