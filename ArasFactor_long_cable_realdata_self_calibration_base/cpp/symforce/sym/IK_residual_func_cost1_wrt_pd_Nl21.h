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
 * Symbolic function: IK_residual_func_cost1_wrt_pd_Nl21
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPdNl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 778

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (278)
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
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp1 * _tmp7;
  const Scalar _tmp9 = _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp8 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_d(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp22 = _tmp0 * _tmp7;
  const Scalar _tmp23 = _tmp1 * _tmp4;
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
      std::sinh(Scalar(0.71007031138673404) * _tmp31 *
                (-_tmp30 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp31 * fv1))) /
      _tmp30;
  const Scalar _tmp33 = _tmp17 - p_d(0, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp28 - p_d(1, 0);
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 = _tmp34 + _tmp36;
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp39 = _tmp33 * _tmp35;
  const Scalar _tmp40 = _tmp38 * _tmp39;
  const Scalar _tmp41 = _tmp40 * fh1;
  const Scalar _tmp42 = -_tmp6;
  const Scalar _tmp43 = _tmp11 + _tmp14;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_b(0, 0);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = -_tmp20;
  const Scalar _tmp49 = _tmp21 + _tmp25;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_b(1, 0);
  const Scalar _tmp53 = _tmp47 * _tmp52;
  const Scalar _tmp54 = _tmp15 + _tmp42;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_a(0, 0);
  const Scalar _tmp57 = _tmp26 + _tmp48;
  const Scalar _tmp58 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 - p_a(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = _tmp53 * _tmp61 - _tmp62;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp65 = -_tmp64;
  const Scalar _tmp66 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp68 = _tmp66 - _tmp67;
  const Scalar _tmp69 = _tmp65 + _tmp68;
  const Scalar _tmp70 = _tmp66 + _tmp67;
  const Scalar _tmp71 = _tmp64 + _tmp70;
  const Scalar _tmp72 = _tmp43 + _tmp6;
  const Scalar _tmp73 = _tmp72 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 - p_c(0, 0);
  const Scalar _tmp75 = _tmp20 + _tmp49;
  const Scalar _tmp76 = _tmp75 + position_vector(1, 0);
  const Scalar _tmp77 = _tmp76 - p_c(1, 0);
  const Scalar _tmp78 = std::pow(Scalar(std::pow(_tmp74, Scalar(2)) + std::pow(_tmp77, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp79 = _tmp74 * _tmp78;
  const Scalar _tmp80 = _tmp65 + _tmp70;
  const Scalar _tmp81 = _tmp77 * _tmp78;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp53 * _tmp79 - _tmp81);
  const Scalar _tmp83 = _tmp82 * (-_tmp71 * _tmp79 + _tmp79 * _tmp80);
  const Scalar _tmp84 = _tmp53 * _tmp80;
  const Scalar _tmp85 = _tmp71 * _tmp81 - _tmp79 * _tmp84;
  const Scalar _tmp86 = _tmp63 * _tmp82;
  const Scalar _tmp87 = -_tmp61 * _tmp84 + _tmp62 * _tmp69 - _tmp85 * _tmp86;
  const Scalar _tmp88 = Scalar(1.0) * _tmp50;
  const Scalar _tmp89 = -_tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp75 + _tmp89);
  const Scalar _tmp91 = Scalar(1.0) * _tmp44;
  const Scalar _tmp92 = _tmp90 * (-_tmp72 + _tmp91);
  const Scalar _tmp93 = -_tmp61 * _tmp69 + _tmp61 * _tmp80 - _tmp63 * _tmp83 - _tmp87 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp52, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp47 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (_tmp44 * _tmp52 * _tmp96 - _tmp46 * _tmp50 * _tmp96);
  const Scalar _tmp99 = -_tmp72 * _tmp81 + _tmp75 * _tmp79 + _tmp79 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp82;
  const Scalar _tmp101 = _tmp100 * _tmp85;
  const Scalar _tmp102 = _tmp101 * _tmp92 - Scalar(1.0) * _tmp83;
  const Scalar _tmp103 = -_tmp54 * _tmp62 + _tmp57 * _tmp61 + _tmp61 * _tmp98 - _tmp86 * _tmp99;
  const Scalar _tmp104 = _tmp103 * _tmp94;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp106 = _tmp105 * _tmp93;
  const Scalar _tmp107 = _tmp106 * (-_tmp100 * _tmp99 - _tmp102 * _tmp104);
  const Scalar _tmp108 = _tmp94 * (_tmp102 + _tmp107);
  const Scalar _tmp109 = -_tmp108 * _tmp63 + Scalar(1.0);
  const Scalar _tmp110 = _tmp79 * _tmp82;
  const Scalar _tmp111 = _tmp108 * _tmp61 + _tmp109 * _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp97;
  const Scalar _tmp113 = _tmp53 * _tmp82;
  const Scalar _tmp114 = _tmp113 * _tmp85 + _tmp84;
  const Scalar _tmp115 = -_tmp114 * _tmp92 + _tmp53 * _tmp83 - _tmp80;
  const Scalar _tmp116 = _tmp106 * (-_tmp104 * _tmp115 + _tmp113 * _tmp99 - _tmp98);
  const Scalar _tmp117 = _tmp94 * (_tmp115 + _tmp116);
  const Scalar _tmp118 = -_tmp117 * _tmp63 - _tmp53;
  const Scalar _tmp119 = _tmp110 * _tmp118 + _tmp117 * _tmp61 + Scalar(1.0);
  const Scalar _tmp120 = std::pow(_tmp37, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp121 = _tmp120 * fh1;
  const Scalar _tmp122 = _tmp121 * _tmp97;
  const Scalar _tmp123 = _tmp119 * _tmp122;
  const Scalar _tmp124 = _tmp34 * _tmp38;
  const Scalar _tmp125 = _tmp124 * fh1;
  const Scalar _tmp126 = _tmp119 * _tmp97;
  const Scalar _tmp127 = Scalar(1.0) * _tmp105;
  const Scalar _tmp128 = _tmp79 * _tmp86;
  const Scalar _tmp129 = _tmp97 * (-_tmp127 * _tmp128 + _tmp127 * _tmp61);
  const Scalar _tmp130 = _tmp27 * _tmp38;
  const Scalar _tmp131 = _tmp120 * _tmp27;
  const Scalar _tmp132 = -_tmp130 * _tmp34 + _tmp131 + _tmp16 * _tmp40;
  const Scalar _tmp133 = _tmp132 * fh1;
  const Scalar _tmp134 = -_tmp112 * _tmp41 + _tmp123 - _tmp125 * _tmp126 - _tmp129 * _tmp133;
  const Scalar _tmp135 = _tmp111 * _tmp122;
  const Scalar _tmp136 = _tmp120 * _tmp16;
  const Scalar _tmp137 = -_tmp131 * _tmp33 + _tmp136 * _tmp35;
  const Scalar _tmp138 = _tmp137 * fh1;
  const Scalar _tmp139 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp140 = _tmp88 * _tmp92 + _tmp91;
  const Scalar _tmp141 = 0;
  const Scalar _tmp142 = -_tmp123 * _tmp33 - _tmp129 * _tmp138 - _tmp135 * _tmp35 -
                         _tmp139 * _tmp97 * (-_tmp128 * _tmp141 + _tmp141 * _tmp61);
  const Scalar _tmp143 = std::pow(_tmp142, Scalar(-2));
  const Scalar _tmp144 = _tmp64 + _tmp68;
  const Scalar _tmp145 = _tmp121 * _tmp144;
  const Scalar _tmp146 = Scalar(40.024799999999999) * _tmp10 + _tmp145 * _tmp33 + _tmp16 * fv1;
  const Scalar _tmp147 = _tmp57 + _tmp89;
  const Scalar _tmp148 = _tmp147 * _tmp92;
  const Scalar _tmp149 = Scalar(1.0) / (-_tmp148 - _tmp54 + _tmp91);
  const Scalar _tmp150 = Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = _tmp147 * _tmp90;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = -Scalar(1.0) * _tmp150 + Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = _tmp140 * _tmp149;
  const Scalar _tmp155 = _tmp90 * (-_tmp141 * _tmp87 - _tmp147 * _tmp154 + _tmp89);
  const Scalar _tmp156 = _tmp106 * _tmp150;
  const Scalar _tmp157 = -_tmp127 * _tmp87 + _tmp147 * _tmp156;
  const Scalar _tmp158 = Scalar(1.0) * _tmp90;
  const Scalar _tmp159 = Scalar(1.0) * _tmp156 - Scalar(1.0) * _tmp157 * _tmp158;
  const Scalar _tmp160 = _tmp159 * fh1;
  const Scalar _tmp161 = _tmp147 * _tmp149;
  const Scalar _tmp162 = _tmp114 + _tmp116 * _tmp161 - _tmp117 * _tmp87;
  const Scalar _tmp163 = _tmp116 * _tmp150 - _tmp158 * _tmp162;
  const Scalar _tmp164 = Scalar(1.0) * _tmp121;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = -_tmp101 + _tmp107 * _tmp161 - _tmp108 * _tmp87;
  const Scalar _tmp167 = _tmp107 * _tmp150 - _tmp158 * _tmp166;
  const Scalar _tmp168 = _tmp164 * _tmp167;
  const Scalar _tmp169 = -_tmp145 * _tmp35 - Scalar(40.024799999999999) * _tmp24 - _tmp27 * fv1;
  const Scalar _tmp170 = _tmp150 * _tmp92;
  const Scalar _tmp171 = _tmp90 * (_tmp148 * _tmp150 + Scalar(1.0));
  const Scalar _tmp172 = Scalar(1.0) * _tmp170 - Scalar(1.0) * _tmp171;
  const Scalar _tmp173 =
      _tmp137 * _tmp160 +
      Scalar(1.0) * _tmp139 * (-_tmp140 * _tmp150 - Scalar(1.0) * _tmp155 + Scalar(1.0)) +
      _tmp146 * _tmp153 + _tmp165 * _tmp33 + _tmp168 * _tmp35 + _tmp169 * _tmp172;
  const Scalar _tmp174 = _tmp143 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp176 = _tmp144 * fh1;
  const Scalar _tmp177 = _tmp176 * _tmp40;
  const Scalar _tmp178 = Scalar(1.0) * _tmp167;
  const Scalar _tmp179 = Scalar(1.0) * _tmp163;
  const Scalar _tmp180 = _tmp124 * _tmp176 - _tmp145;
  const Scalar _tmp181 =
      std::pow(Scalar(_tmp143 * std::pow(_tmp173, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp182 =
      _tmp181 *
      (-_tmp134 * _tmp174 + _tmp175 * (_tmp125 * _tmp179 + _tmp132 * _tmp160 + _tmp153 * _tmp180 -
                                       _tmp165 - _tmp172 * _tmp177 + _tmp178 * _tmp41));
  const Scalar _tmp183 = std::asinh(_tmp173 * _tmp175);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = Scalar(1.0) * std::sinh(_tmp184);
  const Scalar _tmp186 = Scalar(1.4083112389913199) * _tmp142;
  const Scalar _tmp187 = Scalar(1.4083112389913199) * _tmp134;
  const Scalar _tmp188 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp189 =
      -_tmp183 * _tmp186 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp143;
  const Scalar _tmp191 = _tmp134 * _tmp190;
  const Scalar _tmp192 = _tmp188 * _tmp189;
  const Scalar _tmp193 = std::sinh(_tmp192);
  const Scalar _tmp194 = _tmp188 * p_b(2, 0) + std::cosh(_tmp184) - std::cosh(_tmp192);
  const Scalar _tmp195 = _tmp127 * fh1;
  const Scalar _tmp196 = _tmp132 * _tmp195;
  const Scalar _tmp197 = _tmp82 * fh1;
  const Scalar _tmp198 = _tmp118 * _tmp197;
  const Scalar _tmp199 = _tmp109 * _tmp197;
  const Scalar _tmp200 = _tmp121 * _tmp82;
  const Scalar _tmp201 = _tmp118 * _tmp200;
  const Scalar _tmp202 = _tmp124 * _tmp198 - _tmp196 * _tmp86 + _tmp199 * _tmp40 - _tmp201;
  const Scalar _tmp203 = _tmp121 * _tmp90;
  const Scalar _tmp204 = _tmp166 * _tmp203;
  const Scalar _tmp205 = _tmp146 * _tmp150;
  const Scalar _tmp206 = _tmp162 * _tmp203;
  const Scalar _tmp207 = _tmp157 * _tmp90;
  const Scalar _tmp208 = _tmp207 * fh1;
  const Scalar _tmp209 = _tmp137 * _tmp208 + _tmp139 * _tmp155 - _tmp151 * _tmp205 +
                         _tmp169 * _tmp171 + _tmp204 * _tmp35 + _tmp206 * _tmp33;
  const Scalar _tmp210 = _tmp109 * _tmp200;
  const Scalar _tmp211 = _tmp139 * _tmp141;
  const Scalar _tmp212 = _tmp137 * _tmp195;
  const Scalar _tmp213 = _tmp201 * _tmp33 + _tmp210 * _tmp35 - _tmp211 * _tmp86 - _tmp212 * _tmp86;
  const Scalar _tmp214 = Scalar(1.0) / (_tmp213);
  const Scalar _tmp215 = std::asinh(_tmp209 * _tmp214);
  const Scalar _tmp216 = Scalar(1.0) * _tmp215;
  const Scalar _tmp217 = Scalar(1.4083112389913199) * _tmp215;
  const Scalar _tmp218 =
      -_tmp213 * _tmp217 - std::sqrt(Scalar(std::pow(Scalar(-_tmp73 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp76 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp219 = Scalar(0.71007031138673404) * _tmp214;
  const Scalar _tmp220 = _tmp218 * _tmp219;
  const Scalar _tmp221 = Scalar(1.4083112389913199) * _tmp219 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp216) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp220);
  const Scalar _tmp222 = std::pow(_tmp213, Scalar(-2));
  const Scalar _tmp223 = Scalar(0.71007031138673404) * _tmp222;
  const Scalar _tmp224 = _tmp223 * p_c(2, 0);
  const Scalar _tmp225 = std::sinh(_tmp220);
  const Scalar _tmp226 = _tmp218 * _tmp223;
  const Scalar _tmp227 = Scalar(1.4083112389913199) * _tmp213;
  const Scalar _tmp228 = _tmp209 * _tmp222;
  const Scalar _tmp229 = _tmp90 * fh1;
  const Scalar _tmp230 = _tmp166 * _tmp229;
  const Scalar _tmp231 = _tmp150 * _tmp180;
  const Scalar _tmp232 = _tmp162 * _tmp229;
  const Scalar _tmp233 =
      std::pow(Scalar(std::pow(_tmp209, Scalar(2)) * _tmp222 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp234 =
      _tmp233 *
      (-_tmp202 * _tmp228 + _tmp214 * (_tmp124 * _tmp232 + _tmp132 * _tmp208 - _tmp151 * _tmp231 -
                                       _tmp171 * _tmp177 - _tmp206 + _tmp230 * _tmp40));
  const Scalar _tmp235 = Scalar(1.0) * std::sinh(_tmp216);
  const Scalar _tmp236 = _tmp117 * _tmp121;
  const Scalar _tmp237 = _tmp108 * _tmp41 + _tmp117 * _tmp125 + _tmp196 - _tmp236;
  const Scalar _tmp238 = _tmp108 * _tmp121;
  const Scalar _tmp239 = _tmp211 + _tmp212 + _tmp236 * _tmp33 + _tmp238 * _tmp35;
  const Scalar _tmp240 = _tmp121 * _tmp149;
  const Scalar _tmp241 = _tmp116 * _tmp240;
  const Scalar _tmp242 = _tmp107 * _tmp240;
  const Scalar _tmp243 = -_tmp138 * _tmp156 + _tmp139 * _tmp154 - _tmp169 * _tmp170 + _tmp205 -
                         _tmp241 * _tmp33 - _tmp242 * _tmp35;
  const Scalar _tmp244 = Scalar(1.0) / (_tmp239);
  const Scalar _tmp245 = std::asinh(_tmp243 * _tmp244);
  const Scalar _tmp246 = Scalar(1.4083112389913199) * _tmp245;
  const Scalar _tmp247 =
      -_tmp239 * _tmp246 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp58 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp248 = Scalar(0.71007031138673404) * _tmp244;
  const Scalar _tmp249 = _tmp247 * _tmp248;
  const Scalar _tmp250 = Scalar(1.0) * _tmp245;
  const Scalar _tmp251 = Scalar(1.4083112389913199) * _tmp248 * p_a(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp249) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp250);
  const Scalar _tmp252 = std::pow(_tmp239, Scalar(-2));
  const Scalar _tmp253 = Scalar(0.71007031138673404) * _tmp252;
  const Scalar _tmp254 = _tmp247 * _tmp253;
  const Scalar _tmp255 = _tmp107 * _tmp149;
  const Scalar _tmp256 = _tmp116 * _tmp149;
  const Scalar _tmp257 = _tmp243 * _tmp252;
  const Scalar _tmp258 =
      -_tmp237 * _tmp257 + _tmp244 * (-_tmp125 * _tmp256 - _tmp133 * _tmp156 + _tmp170 * _tmp177 +
                                      _tmp231 + _tmp241 - _tmp255 * _tmp41);
  const Scalar _tmp259 =
      std::pow(Scalar(std::pow(_tmp243, Scalar(2)) * _tmp252 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp260 = Scalar(1.4083112389913199) * _tmp239;
  const Scalar _tmp261 = _tmp259 * _tmp260;
  const Scalar _tmp262 = std::sinh(_tmp249);
  const Scalar _tmp263 = Scalar(1.0) * _tmp259 * std::sinh(_tmp250);
  const Scalar _tmp264 = _tmp253 * p_a(2, 0);
  const Scalar _tmp265 = _tmp36 * _tmp38;
  const Scalar _tmp266 = _tmp265 * fh1;
  const Scalar _tmp267 = fh1 * (-_tmp130 * _tmp39 - _tmp136 + _tmp16 * _tmp265);
  const Scalar _tmp268 = -_tmp112 * _tmp266 - _tmp126 * _tmp41 - _tmp129 * _tmp267 + _tmp135;
  const Scalar _tmp269 = Scalar(1.4083112389913199) * _tmp268;
  const Scalar _tmp270 = _tmp145 - _tmp176 * _tmp265;
  const Scalar _tmp271 =
      _tmp181 *
      (-_tmp174 * _tmp268 + _tmp175 * (_tmp153 * _tmp177 + _tmp159 * _tmp267 - _tmp168 +
                                       _tmp172 * _tmp270 + _tmp178 * _tmp266 + _tmp179 * _tmp41));
  const Scalar _tmp272 = _tmp190 * _tmp268;
  const Scalar _tmp273 = _tmp127 * _tmp267;
  const Scalar _tmp274 = _tmp198 * _tmp40 + _tmp199 * _tmp265 - _tmp210 - _tmp273 * _tmp86;
  const Scalar _tmp275 =
      _tmp233 * (_tmp214 * (-_tmp152 * _tmp177 + _tmp171 * _tmp270 - _tmp204 + _tmp207 * _tmp267 +
                            _tmp230 * _tmp265 + _tmp232 * _tmp40) -
                 _tmp228 * _tmp274);
  const Scalar _tmp276 = _tmp108 * _tmp266 + _tmp117 * _tmp41 - _tmp238 + _tmp273;
  const Scalar _tmp277 = _tmp244 * (_tmp150 * _tmp177 - _tmp156 * _tmp267 - _tmp170 * _tmp270 +
                                    _tmp242 - _tmp255 * _tmp266 - _tmp256 * _tmp41) -
                         _tmp257 * _tmp276;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp18 * _tmp32;
  _res(1, 0) =
      -_tmp186 *
          (_tmp182 * _tmp185 - _tmp191 * p_b(2, 0) -
           _tmp193 * (_tmp188 * (-_tmp182 * _tmp186 - _tmp183 * _tmp187) - _tmp189 * _tmp191)) -
      _tmp187 * _tmp194;
  _res(2, 0) =
      -_tmp202 * _tmp221 -
      _tmp227 *
          (-_tmp202 * _tmp224 -
           _tmp225 * (-_tmp202 * _tmp226 + _tmp219 * (-_tmp202 * _tmp217 - _tmp227 * _tmp234)) +
           _tmp234 * _tmp235);
  _res(3, 0) =
      -_tmp237 * _tmp251 -
      _tmp260 *
          (-_tmp237 * _tmp264 + _tmp258 * _tmp263 -
           _tmp262 * (-_tmp237 * _tmp254 + _tmp248 * (-_tmp237 * _tmp246 - _tmp258 * _tmp261)));
  _res(0, 1) = -_tmp29 * _tmp32;
  _res(1, 1) =
      -_tmp186 *
          (_tmp185 * _tmp271 -
           _tmp193 * (_tmp188 * (-_tmp183 * _tmp269 - _tmp186 * _tmp271) - _tmp189 * _tmp272) -
           _tmp272 * p_b(2, 0)) -
      _tmp194 * _tmp269;
  _res(2, 1) =
      -_tmp221 * _tmp274 -
      _tmp227 *
          (-_tmp224 * _tmp274 -
           _tmp225 * (_tmp219 * (-_tmp217 * _tmp274 - _tmp227 * _tmp275) - _tmp226 * _tmp274) +
           _tmp235 * _tmp275);
  _res(3, 1) =
      -_tmp251 * _tmp276 -
      _tmp260 *
          (-_tmp262 * (_tmp248 * (-_tmp246 * _tmp276 - _tmp261 * _tmp277) - _tmp254 * _tmp276) +
           _tmp263 * _tmp277 - _tmp264 * _tmp276);
  _res(0, 2) = Scalar(-1.0);
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
