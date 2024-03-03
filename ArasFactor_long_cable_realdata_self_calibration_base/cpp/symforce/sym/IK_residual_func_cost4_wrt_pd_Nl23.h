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
 * Symbolic function: IK_residual_func_cost4_wrt_pd_Nl23
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPdNl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 754

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (270)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = _tmp11 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_d(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp22 = _tmp2 * _tmp4;
  const Scalar _tmp23 = _tmp0 * _tmp5;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = -_tmp28 + p_d(1, 0);
  const Scalar _tmp30 =
      std::sqrt(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))));
  const Scalar _tmp31 = Scalar(1.0) / (fh1);
  const Scalar _tmp32 =
      Scalar(1.0) *
      std::cosh(Scalar(0.71007031138673404) * _tmp31 *
                (-_tmp30 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp31 * fv1))) /
      _tmp30;
  const Scalar _tmp33 = _tmp21 + _tmp25;
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = Scalar(1.0) * _tmp34;
  const Scalar _tmp36 = -_tmp35;
  const Scalar _tmp37 = -_tmp20;
  const Scalar _tmp38 = _tmp26 + _tmp37;
  const Scalar _tmp39 = _tmp36 + _tmp38;
  const Scalar _tmp40 = _tmp33 + _tmp37;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp36 + _tmp40);
  const Scalar _tmp42 = -_tmp7;
  const Scalar _tmp43 = _tmp10 + _tmp14;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp43 + _tmp7;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = -_tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp41 * _tmp47;
  const Scalar _tmp49 = _tmp39 * _tmp48;
  const Scalar _tmp50 = _tmp15 + _tmp42;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp46 - _tmp49 - _tmp50);
  const Scalar _tmp52 = _tmp35 * _tmp48 + _tmp46;
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = 0;
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp56 = -_tmp55;
  const Scalar _tmp57 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp58 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp59 = _tmp57 - _tmp58;
  const Scalar _tmp60 = _tmp56 + _tmp59;
  const Scalar _tmp61 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 - p_a(0, 0);
  const Scalar _tmp63 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_a(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp62 * _tmp65;
  const Scalar _tmp67 = _tmp57 + _tmp58;
  const Scalar _tmp68 = _tmp55 + _tmp67;
  const Scalar _tmp69 = _tmp55 + _tmp59;
  const Scalar _tmp70 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 - p_b(0, 0);
  const Scalar _tmp72 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp73 = _tmp72 - p_b(1, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_c(0, 0);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp79 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_c(1, 0);
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = _tmp71 * _tmp74;
  const Scalar _tmp83 = _tmp68 * _tmp82;
  const Scalar _tmp84 = _tmp69 * _tmp75 - _tmp81 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (-_tmp75 + _tmp81 * _tmp82);
  const Scalar _tmp86 = _tmp64 * _tmp65;
  const Scalar _tmp87 = _tmp66 * _tmp81 - _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp68 * _tmp81;
  const Scalar _tmp90 = _tmp60 * _tmp86 - _tmp66 * _tmp89 - _tmp84 * _tmp88;
  const Scalar _tmp91 = -_tmp69 * _tmp82 + _tmp83;
  const Scalar _tmp92 = -_tmp48 * _tmp90 - _tmp60 * _tmp66 + _tmp66 * _tmp68 - _tmp88 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = _tmp36 - _tmp39 * _tmp53 - _tmp54 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp41;
  const Scalar _tmp97 = Scalar(1.0) * _tmp51;
  const Scalar _tmp98 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp99 = _tmp17 - p_d(0, 0);
  const Scalar _tmp100 = _tmp56 + _tmp67;
  const Scalar _tmp101 = std::pow(_tmp99, Scalar(2));
  const Scalar _tmp102 = _tmp28 - p_d(1, 0);
  const Scalar _tmp103 = std::pow(_tmp102, Scalar(2));
  const Scalar _tmp104 = _tmp101 + _tmp103;
  const Scalar _tmp105 = std::pow(_tmp104, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = _tmp100 * _tmp106;
  const Scalar _tmp108 = _tmp107 * _tmp99 + Scalar(40.024799999999999) * _tmp13 + _tmp16 * fv1;
  const Scalar _tmp109 = _tmp39 * _tmp41;
  const Scalar _tmp110 = _tmp109 * _tmp97;
  const Scalar _tmp111 = Scalar(1.0) * _tmp110 - Scalar(1.0) * _tmp97;
  const Scalar _tmp112 = _tmp81 * _tmp85;
  const Scalar _tmp113 = _tmp112 * _tmp84 + _tmp89;
  const Scalar _tmp114 = _tmp112 * _tmp91 - _tmp113 * _tmp48 - _tmp68;
  const Scalar _tmp115 =
      std::sqrt(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp80, Scalar(2))));
  const Scalar _tmp116 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp117 = _tmp115 * _tmp78;
  const Scalar _tmp118 = _tmp117 * (-_tmp116 * _tmp34 * _tmp77 + _tmp116 * _tmp45 * _tmp80);
  const Scalar _tmp119 = _tmp118 * _tmp82 + _tmp40 * _tmp82 - _tmp44 * _tmp75;
  const Scalar _tmp120 = _tmp118 * _tmp66 - _tmp119 * _tmp88 + _tmp38 * _tmp66 - _tmp50 * _tmp86;
  const Scalar _tmp121 = _tmp120 * _tmp93;
  const Scalar _tmp122 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp123 = _tmp122 * _tmp92;
  const Scalar _tmp124 = _tmp123 * (_tmp112 * _tmp119 - _tmp114 * _tmp121 - _tmp118);
  const Scalar _tmp125 = _tmp114 + _tmp124;
  const Scalar _tmp126 = _tmp39 * _tmp51;
  const Scalar _tmp127 = _tmp113 + _tmp124 * _tmp126 - _tmp125 * _tmp94;
  const Scalar _tmp128 = _tmp124 * _tmp97 - _tmp127 * _tmp96;
  const Scalar _tmp129 = Scalar(1.0) * _tmp106;
  const Scalar _tmp130 = _tmp128 * _tmp129;
  const Scalar _tmp131 = Scalar(1.0) * _tmp85;
  const Scalar _tmp132 = -_tmp131 * _tmp91 + _tmp47 * _tmp84 * _tmp85 * _tmp96;
  const Scalar _tmp133 = _tmp123 * (-_tmp119 * _tmp131 - _tmp121 * _tmp132);
  const Scalar _tmp134 = _tmp93 * (_tmp132 + _tmp133);
  const Scalar _tmp135 = _tmp126 * _tmp133 - _tmp131 * _tmp84 - _tmp134 * _tmp90;
  const Scalar _tmp136 = _tmp133 * _tmp97 - _tmp135 * _tmp96;
  const Scalar _tmp137 = _tmp129 * _tmp136;
  const Scalar _tmp138 = -_tmp102 * _tmp107 - Scalar(40.024799999999999) * _tmp24 - _tmp27 * fv1;
  const Scalar _tmp139 = _tmp49 * _tmp97 + Scalar(1.0);
  const Scalar _tmp140 = _tmp48 * _tmp97;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 * _tmp96 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = Scalar(1.0) * _tmp122;
  const Scalar _tmp143 = _tmp123 * _tmp97;
  const Scalar _tmp144 = -_tmp142 * _tmp90 + _tmp143 * _tmp39;
  const Scalar _tmp145 = Scalar(1.0) * _tmp143 - Scalar(1.0) * _tmp144 * _tmp96;
  const Scalar _tmp146 = _tmp105 * _tmp16;
  const Scalar _tmp147 = _tmp105 * _tmp27;
  const Scalar _tmp148 = fh1 * (_tmp102 * _tmp146 - _tmp147 * _tmp99);
  const Scalar _tmp149 = _tmp102 * _tmp137 + _tmp108 * _tmp111 + _tmp130 * _tmp99 +
                         _tmp138 * _tmp141 + _tmp145 * _tmp148 +
                         Scalar(1.0) * _tmp98 * (-_tmp52 * _tmp97 - _tmp95 * _tmp96 + Scalar(1.0));
  const Scalar _tmp150 = _tmp54 * _tmp93;
  const Scalar _tmp151 = _tmp82 * _tmp88;
  const Scalar _tmp152 = -_tmp134 * _tmp87 + Scalar(1.0);
  const Scalar _tmp153 = _tmp82 * _tmp85;
  const Scalar _tmp154 = _tmp134 * _tmp66 + _tmp152 * _tmp153;
  const Scalar _tmp155 = _tmp106 * _tmp117;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = _tmp117 * (-_tmp142 * _tmp151 + _tmp142 * _tmp66);
  const Scalar _tmp158 = _tmp125 * _tmp93;
  const Scalar _tmp159 = -_tmp158 * _tmp87 - _tmp81;
  const Scalar _tmp160 = _tmp153 * _tmp159 + _tmp158 * _tmp66 + Scalar(1.0);
  const Scalar _tmp161 = _tmp155 * _tmp160;
  const Scalar _tmp162 = -_tmp102 * _tmp156 -
                         _tmp117 * _tmp98 * (-_tmp150 * _tmp151 + _tmp150 * _tmp66) -
                         _tmp148 * _tmp157 - _tmp161 * _tmp99;
  const Scalar _tmp163 = std::pow(_tmp162, Scalar(-2));
  const Scalar _tmp164 =
      std::pow(Scalar(std::pow(_tmp149, Scalar(2)) * _tmp163 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp165 = Scalar(1.0) / (_tmp162);
  const Scalar _tmp166 = _tmp100 * fh1;
  const Scalar _tmp167 = std::pow(_tmp104, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp168 = _tmp101 * _tmp167;
  const Scalar _tmp169 = -_tmp107 + _tmp166 * _tmp168;
  const Scalar _tmp170 = _tmp168 * fh1;
  const Scalar _tmp171 = Scalar(1.0) * _tmp128;
  const Scalar _tmp172 = Scalar(1.0) * _tmp136;
  const Scalar _tmp173 = _tmp102 * _tmp99;
  const Scalar _tmp174 = _tmp167 * _tmp173;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = _tmp166 * _tmp174;
  const Scalar _tmp177 = _tmp167 * _tmp27;
  const Scalar _tmp178 = fh1 * (-_tmp101 * _tmp177 + _tmp147 + _tmp16 * _tmp174);
  const Scalar _tmp179 = _tmp117 * _tmp154;
  const Scalar _tmp180 = _tmp117 * _tmp160;
  const Scalar _tmp181 = -_tmp157 * _tmp178 + _tmp161 - _tmp170 * _tmp180 - _tmp175 * _tmp179;
  const Scalar _tmp182 = _tmp149 * _tmp163;
  const Scalar _tmp183 =
      _tmp164 * (_tmp165 * (_tmp111 * _tmp169 - _tmp130 - _tmp141 * _tmp176 + _tmp145 * _tmp178 +
                            _tmp170 * _tmp171 + _tmp172 * _tmp175) -
                 _tmp181 * _tmp182);
  const Scalar _tmp184 = std::asinh(_tmp149 * _tmp165);
  const Scalar _tmp185 = Scalar(1.0) * _tmp184;
  const Scalar _tmp186 = Scalar(1.0) * std::cosh(_tmp185);
  const Scalar _tmp187 = Scalar(1.4083112389913199) * _tmp184;
  const Scalar _tmp188 =
      -_tmp162 * _tmp187 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.71007031138673404) * _tmp165;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = std::cosh(_tmp190);
  const Scalar _tmp192 = Scalar(1.4083112389913199) * _tmp162;
  const Scalar _tmp193 = Scalar(0.71007031138673404) * _tmp163 * _tmp188;
  const Scalar _tmp194 = -Scalar(1.4083112389913199) * std::sinh(_tmp185) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp190);
  const Scalar _tmp195 = _tmp159 * _tmp85;
  const Scalar _tmp196 = _tmp142 * _tmp178;
  const Scalar _tmp197 = _tmp152 * _tmp85;
  const Scalar _tmp198 = _tmp106 * _tmp85;
  const Scalar _tmp199 = _tmp159 * _tmp198;
  const Scalar _tmp200 = _tmp170 * _tmp195 + _tmp175 * _tmp197 - _tmp196 * _tmp88 - _tmp199;
  const Scalar _tmp201 = _tmp152 * _tmp198;
  const Scalar _tmp202 = _tmp150 * _tmp98;
  const Scalar _tmp203 = _tmp142 * _tmp148;
  const Scalar _tmp204 = _tmp102 * _tmp201 + _tmp199 * _tmp99 - _tmp202 * _tmp88 - _tmp203 * _tmp88;
  const Scalar _tmp205 = std::pow(_tmp204, Scalar(-2));
  const Scalar _tmp206 = _tmp139 * _tmp41;
  const Scalar _tmp207 = _tmp106 * _tmp41;
  const Scalar _tmp208 = _tmp135 * _tmp207;
  const Scalar _tmp209 = _tmp144 * _tmp41;
  const Scalar _tmp210 = _tmp127 * _tmp207;
  const Scalar _tmp211 = _tmp108 * _tmp97;
  const Scalar _tmp212 = _tmp102 * _tmp208 - _tmp109 * _tmp211 + _tmp138 * _tmp206 +
                         _tmp148 * _tmp209 + _tmp210 * _tmp99 + _tmp41 * _tmp95 * _tmp98;
  const Scalar _tmp213 = Scalar(1.0) / (_tmp204);
  const Scalar _tmp214 = std::asinh(_tmp212 * _tmp213);
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp204;
  const Scalar _tmp216 =
      -_tmp214 * _tmp215 - std::sqrt(Scalar(std::pow(Scalar(-_tmp70 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp72 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp217 = Scalar(0.71007031138673404) * _tmp205 * _tmp216;
  const Scalar _tmp218 = Scalar(1.4083112389913199) * _tmp200;
  const Scalar _tmp219 = _tmp169 * _tmp97;
  const Scalar _tmp220 = _tmp127 * _tmp41;
  const Scalar _tmp221 = _tmp135 * _tmp41;
  const Scalar _tmp222 = _tmp205 * _tmp212;
  const Scalar _tmp223 =
      std::pow(Scalar(_tmp205 * std::pow(_tmp212, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp224 =
      _tmp223 *
      (-_tmp200 * _tmp222 + _tmp213 * (-_tmp109 * _tmp219 + _tmp170 * _tmp220 + _tmp175 * _tmp221 -
                                       _tmp176 * _tmp206 + _tmp178 * _tmp209 - _tmp210));
  const Scalar _tmp225 = Scalar(0.71007031138673404) * _tmp213;
  const Scalar _tmp226 = _tmp216 * _tmp225;
  const Scalar _tmp227 = std::cosh(_tmp226);
  const Scalar _tmp228 = Scalar(1.0) * _tmp214;
  const Scalar _tmp229 = Scalar(1.0) * std::cosh(_tmp228);
  const Scalar _tmp230 = -std::sinh(_tmp226) - std::sinh(_tmp228);
  const Scalar _tmp231 = _tmp106 * _tmp158;
  const Scalar _tmp232 = _tmp134 * _tmp175 + _tmp158 * _tmp170 + _tmp196 - _tmp231;
  const Scalar _tmp233 = _tmp106 * _tmp134;
  const Scalar _tmp234 = _tmp102 * _tmp233 + _tmp202 + _tmp203 + _tmp231 * _tmp99;
  const Scalar _tmp235 = std::pow(_tmp234, Scalar(-2));
  const Scalar _tmp236 = _tmp106 * _tmp51;
  const Scalar _tmp237 = _tmp124 * _tmp236;
  const Scalar _tmp238 = _tmp133 * _tmp236;
  const Scalar _tmp239 = -_tmp102 * _tmp238 - _tmp138 * _tmp140 - _tmp143 * _tmp148 + _tmp211 -
                         _tmp237 * _tmp99 + _tmp53 * _tmp98;
  const Scalar _tmp240 = Scalar(1.0) / (_tmp234);
  const Scalar _tmp241 = std::asinh(_tmp239 * _tmp240);
  const Scalar _tmp242 = Scalar(1.4083112389913199) * _tmp234;
  const Scalar _tmp243 =
      -_tmp241 * _tmp242 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp244 = Scalar(0.71007031138673404) * _tmp235 * _tmp243;
  const Scalar _tmp245 = _tmp235 * _tmp239;
  const Scalar _tmp246 = _tmp124 * _tmp51;
  const Scalar _tmp247 = _tmp133 * _tmp51;
  const Scalar _tmp248 =
      std::pow(Scalar(_tmp235 * std::pow(_tmp239, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp249 =
      _tmp248 *
      (-_tmp232 * _tmp245 + _tmp240 * (_tmp140 * _tmp176 - _tmp143 * _tmp178 - _tmp170 * _tmp246 -
                                       _tmp175 * _tmp247 + _tmp219 + _tmp237));
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp232;
  const Scalar _tmp251 = Scalar(0.71007031138673404) * _tmp240;
  const Scalar _tmp252 = _tmp243 * _tmp251;
  const Scalar _tmp253 = std::cosh(_tmp252);
  const Scalar _tmp254 = Scalar(1.0) * _tmp241;
  const Scalar _tmp255 = Scalar(1.0) * std::cosh(_tmp254);
  const Scalar _tmp256 = -std::sinh(_tmp252) - std::sinh(_tmp254);
  const Scalar _tmp257 = _tmp103 * _tmp167;
  const Scalar _tmp258 = fh1 * (-_tmp146 + _tmp16 * _tmp257 - _tmp173 * _tmp177);
  const Scalar _tmp259 = _tmp257 * fh1;
  const Scalar _tmp260 = _tmp156 - _tmp157 * _tmp258 - _tmp175 * _tmp180 - _tmp179 * _tmp259;
  const Scalar _tmp261 = _tmp107 - _tmp166 * _tmp257;
  const Scalar _tmp262 =
      _tmp164 * (_tmp165 * (_tmp111 * _tmp176 - _tmp137 + _tmp141 * _tmp261 + _tmp145 * _tmp258 +
                            _tmp171 * _tmp175 + _tmp172 * _tmp259) -
                 _tmp182 * _tmp260);
  const Scalar _tmp263 = _tmp142 * _tmp258;
  const Scalar _tmp264 = _tmp175 * _tmp195 + _tmp197 * _tmp259 - _tmp201 - _tmp263 * _tmp88;
  const Scalar _tmp265 = Scalar(1.4083112389913199) * _tmp264;
  const Scalar _tmp266 =
      _tmp223 * (_tmp213 * (-_tmp110 * _tmp176 + _tmp175 * _tmp220 + _tmp206 * _tmp261 - _tmp208 +
                            _tmp209 * _tmp258 + _tmp221 * _tmp259) -
                 _tmp222 * _tmp264);
  const Scalar _tmp267 = _tmp134 * _tmp259 + _tmp158 * _tmp175 - _tmp233 + _tmp263;
  const Scalar _tmp268 = Scalar(1.4083112389913199) * _tmp267;
  const Scalar _tmp269 =
      _tmp248 * (_tmp240 * (-_tmp140 * _tmp261 - _tmp143 * _tmp258 - _tmp175 * _tmp246 +
                            _tmp176 * _tmp97 + _tmp238 - _tmp247 * _tmp259) -
                 _tmp245 * _tmp267);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = _tmp18 * _tmp32;
  _res(1, 0) =
      _tmp181 * _tmp194 +
      _tmp192 *
          (-_tmp183 * _tmp186 -
           _tmp191 * (-_tmp181 * _tmp193 + _tmp189 * (-_tmp181 * _tmp187 - _tmp183 * _tmp192)));
  _res(2, 0) =
      _tmp215 *
          (-_tmp224 * _tmp229 -
           _tmp227 * (-_tmp200 * _tmp217 + _tmp225 * (-_tmp214 * _tmp218 - _tmp215 * _tmp224))) +
      _tmp218 * _tmp230;
  _res(3, 0) =
      _tmp242 *
          (-_tmp249 * _tmp255 -
           _tmp253 * (-_tmp232 * _tmp244 + _tmp251 * (-_tmp241 * _tmp250 - _tmp242 * _tmp249))) +
      _tmp250 * _tmp256;
  _res(0, 1) = _tmp29 * _tmp32;
  _res(1, 1) =
      _tmp192 *
          (-_tmp186 * _tmp262 -
           _tmp191 * (_tmp189 * (-_tmp187 * _tmp260 - _tmp192 * _tmp262) - _tmp193 * _tmp260)) +
      _tmp194 * _tmp260;
  _res(2, 1) =
      _tmp215 *
          (-_tmp227 * (-_tmp217 * _tmp264 + _tmp225 * (-_tmp214 * _tmp265 - _tmp215 * _tmp266)) -
           _tmp229 * _tmp266) +
      _tmp230 * _tmp265;
  _res(3, 1) =
      _tmp242 *
          (-_tmp253 * (-_tmp244 * _tmp267 + _tmp251 * (-_tmp241 * _tmp268 - _tmp242 * _tmp269)) -
           _tmp255 * _tmp269) +
      _tmp256 * _tmp268;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
