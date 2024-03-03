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
 * Symbolic function: IK_residual_func_cost1_wrt_pa_Nl5
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPaNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 777

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (272)
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
  const Scalar _tmp19 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (fh1);
  const Scalar _tmp21 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp21 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp25 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp26 = _tmp6 * _tmp9;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp33 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp32, Scalar(2))));
  const Scalar _tmp34 =
      Scalar(1.0) *
      std::sinh(Scalar(0.71007031138673404) * _tmp20 *
                (-_tmp33 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp20 * fv1))) /
      _tmp33;
  const Scalar _tmp35 = _tmp18 - p_a(0, 0);
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 = _tmp31 - p_a(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp36 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp41 = _tmp35 * _tmp37;
  const Scalar _tmp42 = _tmp40 * _tmp41;
  const Scalar _tmp43 = _tmp42 * fh1;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp45 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp46 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp47 = _tmp45 - _tmp46;
  const Scalar _tmp48 = _tmp44 + _tmp47;
  const Scalar _tmp49 = _tmp16 + _tmp4;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = _tmp24 + _tmp28;
  const Scalar _tmp53 = _tmp23 + _tmp52;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_b(1, 0);
  const Scalar _tmp56 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp55, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp51 * _tmp56;
  const Scalar _tmp58 = -_tmp44;
  const Scalar _tmp59 = _tmp45 + _tmp46;
  const Scalar _tmp60 = _tmp58 + _tmp59;
  const Scalar _tmp61 = _tmp55 * _tmp56;
  const Scalar _tmp62 = _tmp12 + _tmp15;
  const Scalar _tmp63 = _tmp5 + _tmp62;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_d(0, 0);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp22 + _tmp29;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_d(1, 0);
  const Scalar _tmp70 = _tmp66 * _tmp69;
  const Scalar _tmp71 = _tmp48 * _tmp70;
  const Scalar _tmp72 = _tmp57 * _tmp70 - _tmp61;
  const Scalar _tmp73 = _tmp4 + _tmp62;
  const Scalar _tmp74 = _tmp73 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 - p_c(0, 0);
  const Scalar _tmp76 = _tmp22 + _tmp52;
  const Scalar _tmp77 = _tmp76 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 - p_c(1, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp75 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp79;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp70 * _tmp80 - _tmp81);
  const Scalar _tmp83 = _tmp48 * _tmp80;
  const Scalar _tmp84 = _tmp44 + _tmp59;
  const Scalar _tmp85 = _tmp82 * (-_tmp70 * _tmp83 + _tmp81 * _tmp84);
  const Scalar _tmp86 = -_tmp57 * _tmp71 + _tmp60 * _tmp61 - _tmp72 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) * _tmp67;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp76 + _tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp63;
  const Scalar _tmp91 = _tmp89 * (-_tmp73 + _tmp90);
  const Scalar _tmp92 = -_tmp80 * _tmp84 + _tmp83;
  const Scalar _tmp93 = _tmp72 * _tmp82;
  const Scalar _tmp94 = _tmp48 * _tmp57 - _tmp57 * _tmp60 - _tmp86 * _tmp91 - _tmp92 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = Scalar(1.0) * _tmp82;
  const Scalar _tmp97 = Scalar(1.0) * _tmp85;
  const Scalar _tmp98 = _tmp91 * _tmp97 - _tmp92 * _tmp96;
  const Scalar _tmp99 =
      std::sqrt(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp69, Scalar(2))));
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 = _tmp66 * _tmp99;
  const Scalar _tmp102 = _tmp101 * (_tmp100 * _tmp63 * _tmp69 - _tmp100 * _tmp65 * _tmp67);
  const Scalar _tmp103 = _tmp102 * _tmp80 - _tmp73 * _tmp81 + _tmp76 * _tmp80;
  const Scalar _tmp104 = _tmp102 * _tmp57 - _tmp103 * _tmp93 - _tmp49 * _tmp61 + _tmp53 * _tmp57;
  const Scalar _tmp105 = _tmp104 * _tmp95;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp107 = _tmp106 * _tmp94;
  const Scalar _tmp108 = _tmp107 * (-_tmp103 * _tmp96 - _tmp105 * _tmp98);
  const Scalar _tmp109 = _tmp95 * (_tmp108 + _tmp98);
  const Scalar _tmp110 = _tmp82 * (-_tmp109 * _tmp72 + Scalar(1.0));
  const Scalar _tmp111 = _tmp109 * _tmp57 + _tmp110 * _tmp80;
  const Scalar _tmp112 = _tmp101 * _tmp111;
  const Scalar _tmp113 = _tmp36 * _tmp40;
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = _tmp70 * _tmp82;
  const Scalar _tmp116 = _tmp70 * _tmp85 + _tmp71;
  const Scalar _tmp117 = _tmp115 * _tmp92 - _tmp116 * _tmp91 - _tmp48;
  const Scalar _tmp118 = _tmp107 * (-_tmp102 + _tmp103 * _tmp115 - _tmp105 * _tmp117);
  const Scalar _tmp119 = _tmp95 * (_tmp117 + _tmp118);
  const Scalar _tmp120 = _tmp82 * (-_tmp119 * _tmp72 - _tmp70);
  const Scalar _tmp121 = _tmp119 * _tmp57 + _tmp120 * _tmp80 + Scalar(1.0);
  const Scalar _tmp122 = _tmp101 * _tmp121;
  const Scalar _tmp123 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp124 = _tmp123 * fh1;
  const Scalar _tmp125 = _tmp101 * _tmp124;
  const Scalar _tmp126 = _tmp121 * _tmp125;
  const Scalar _tmp127 = Scalar(1.0) * _tmp106;
  const Scalar _tmp128 = _tmp80 * _tmp93;
  const Scalar _tmp129 = _tmp101 * (-_tmp127 * _tmp128 + _tmp127 * _tmp57);
  const Scalar _tmp130 = _tmp123 * _tmp30;
  const Scalar _tmp131 = _tmp17 * _tmp40;
  const Scalar _tmp132 = -_tmp113 * _tmp30 + _tmp130 + _tmp131 * _tmp41;
  const Scalar _tmp133 = _tmp132 * fh1;
  const Scalar _tmp134 = -_tmp112 * _tmp43 - _tmp114 * _tmp122 + _tmp126 - _tmp129 * _tmp133;
  const Scalar _tmp135 = _tmp123 * _tmp17;
  const Scalar _tmp136 = -_tmp130 * _tmp35 + _tmp135 * _tmp37;
  const Scalar _tmp137 = _tmp136 * fh1;
  const Scalar _tmp138 = _tmp111 * _tmp125;
  const Scalar _tmp139 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp140 = _tmp87 * _tmp91 + _tmp90;
  const Scalar _tmp141 = 0;
  const Scalar _tmp142 = -_tmp101 * _tmp139 * (-_tmp128 * _tmp141 + _tmp141 * _tmp57) -
                         _tmp126 * _tmp35 - _tmp129 * _tmp137 - _tmp138 * _tmp37;
  const Scalar _tmp143 = std::pow(_tmp142, Scalar(-2));
  const Scalar _tmp144 = Scalar(0.71007031138673404) * _tmp143;
  const Scalar _tmp145 = _tmp134 * _tmp144;
  const Scalar _tmp146 = fh1 * (_tmp47 + _tmp58);
  const Scalar _tmp147 = _tmp123 * _tmp146;
  const Scalar _tmp148 = Scalar(40.024799999999999) * _tmp11 + _tmp147 * _tmp35 + _tmp17 * fv1;
  const Scalar _tmp149 = _tmp53 + _tmp88;
  const Scalar _tmp150 = _tmp149 * _tmp91;
  const Scalar _tmp151 = Scalar(1.0) / (-_tmp150 - _tmp49 + _tmp90);
  const Scalar _tmp152 = Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = _tmp149 * _tmp89;
  const Scalar _tmp154 = _tmp152 * _tmp153;
  const Scalar _tmp155 = -Scalar(1.0) * _tmp152 + Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = -_tmp147 * _tmp37 - Scalar(40.024799999999999) * _tmp27 - _tmp30 * fv1;
  const Scalar _tmp157 = _tmp89 * (_tmp150 * _tmp152 + Scalar(1.0));
  const Scalar _tmp158 = _tmp152 * _tmp91;
  const Scalar _tmp159 = -Scalar(1.0) * _tmp157 + Scalar(1.0) * _tmp158;
  const Scalar _tmp160 = _tmp140 * _tmp151;
  const Scalar _tmp161 = -_tmp141 * _tmp86 - _tmp149 * _tmp160 + _tmp88;
  const Scalar _tmp162 = Scalar(1.0) * _tmp89;
  const Scalar _tmp163 = _tmp149 * _tmp151;
  const Scalar _tmp164 = _tmp116 + _tmp118 * _tmp163 - _tmp119 * _tmp86;
  const Scalar _tmp165 = _tmp118 * _tmp152 - _tmp162 * _tmp164;
  const Scalar _tmp166 = Scalar(1.0) * _tmp124;
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = _tmp107 * _tmp152;
  const Scalar _tmp169 = -_tmp127 * _tmp86 + _tmp149 * _tmp168;
  const Scalar _tmp170 = -Scalar(1.0) * _tmp162 * _tmp169 + Scalar(1.0) * _tmp168;
  const Scalar _tmp171 = _tmp108 * _tmp163 - _tmp109 * _tmp86 - _tmp97;
  const Scalar _tmp172 = _tmp108 * _tmp152 - _tmp162 * _tmp171;
  const Scalar _tmp173 = _tmp166 * _tmp172;
  const Scalar _tmp174 =
      _tmp137 * _tmp170 +
      Scalar(1.0) * _tmp139 * (-_tmp140 * _tmp152 - _tmp161 * _tmp162 + Scalar(1.0)) +
      _tmp148 * _tmp155 + _tmp156 * _tmp159 + _tmp167 * _tmp35 + _tmp173 * _tmp37;
  const Scalar _tmp175 =
      std::pow(Scalar(_tmp143 * std::pow(_tmp174, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp176 = Scalar(1.0) * fh1;
  const Scalar _tmp177 = _tmp165 * _tmp176;
  const Scalar _tmp178 = _tmp146 * _tmp42;
  const Scalar _tmp179 = _tmp170 * fh1;
  const Scalar _tmp180 = _tmp113 * _tmp146 - _tmp147;
  const Scalar _tmp181 = _tmp172 * _tmp176;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp183 = _tmp143 * _tmp174;
  const Scalar _tmp184 =
      _tmp175 *
      (-_tmp134 * _tmp183 + _tmp182 * (_tmp113 * _tmp177 + _tmp132 * _tmp179 + _tmp155 * _tmp180 -
                                       _tmp159 * _tmp178 - _tmp167 + _tmp181 * _tmp42));
  const Scalar _tmp185 = std::asinh(_tmp174 * _tmp182);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * std::sinh(_tmp186);
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp142;
  const Scalar _tmp189 =
      -_tmp185 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp182;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = std::sinh(_tmp191);
  const Scalar _tmp193 = Scalar(1.4083112389913199) * _tmp185;
  const Scalar _tmp194 = Scalar(1.4083112389913199) * _tmp190 * p_d(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp186) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp191);
  const Scalar _tmp195 = _tmp89 * fh1;
  const Scalar _tmp196 = _tmp123 * _tmp195;
  const Scalar _tmp197 = _tmp164 * _tmp196;
  const Scalar _tmp198 = _tmp148 * _tmp152;
  const Scalar _tmp199 = _tmp171 * _tmp196;
  const Scalar _tmp200 = _tmp169 * _tmp195;
  const Scalar _tmp201 = _tmp136 * _tmp200 + _tmp139 * _tmp161 * _tmp89 - _tmp153 * _tmp198 +
                         _tmp156 * _tmp157 + _tmp197 * _tmp35 + _tmp199 * _tmp37;
  const Scalar _tmp202 = _tmp127 * _tmp137;
  const Scalar _tmp203 = _tmp120 * _tmp124;
  const Scalar _tmp204 = _tmp110 * _tmp124;
  const Scalar _tmp205 = _tmp139 * _tmp141;
  const Scalar _tmp206 = -_tmp202 * _tmp93 + _tmp203 * _tmp35 + _tmp204 * _tmp37 - _tmp205 * _tmp93;
  const Scalar _tmp207 = std::pow(_tmp206, Scalar(-2));
  const Scalar _tmp208 =
      std::pow(Scalar(std::pow(_tmp201, Scalar(2)) * _tmp207 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp209 = _tmp127 * fh1;
  const Scalar _tmp210 = _tmp132 * _tmp209;
  const Scalar _tmp211 = _tmp110 * _tmp43 + _tmp114 * _tmp120 - _tmp203 - _tmp210 * _tmp93;
  const Scalar _tmp212 = _tmp201 * _tmp207;
  const Scalar _tmp213 = Scalar(1.0) / (_tmp206);
  const Scalar _tmp214 = _tmp152 * _tmp180;
  const Scalar _tmp215 = _tmp164 * _tmp195;
  const Scalar _tmp216 = _tmp171 * _tmp195;
  const Scalar _tmp217 =
      _tmp208 *
      (-_tmp211 * _tmp212 + _tmp213 * (_tmp113 * _tmp215 + _tmp132 * _tmp200 - _tmp153 * _tmp214 -
                                       _tmp157 * _tmp178 - _tmp197 + _tmp216 * _tmp42));
  const Scalar _tmp218 = std::asinh(_tmp201 * _tmp213);
  const Scalar _tmp219 = Scalar(1.0) * _tmp218;
  const Scalar _tmp220 = Scalar(1.0) * std::sinh(_tmp219);
  const Scalar _tmp221 = Scalar(1.4083112389913199) * _tmp206;
  const Scalar _tmp222 = Scalar(1.4083112389913199) * _tmp218;
  const Scalar _tmp223 = Scalar(0.71007031138673404) * _tmp213;
  const Scalar _tmp224 =
      -_tmp218 * _tmp221 - std::sqrt(Scalar(std::pow(Scalar(-_tmp74 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp77 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp225 = Scalar(0.71007031138673404) * _tmp207;
  const Scalar _tmp226 = _tmp211 * _tmp225;
  const Scalar _tmp227 = _tmp223 * _tmp224;
  const Scalar _tmp228 = std::sinh(_tmp227);
  const Scalar _tmp229 = Scalar(1.4083112389913199) * _tmp223 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp219) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp227);
  const Scalar _tmp230 = _tmp119 * _tmp124;
  const Scalar _tmp231 = _tmp109 * _tmp124;
  const Scalar _tmp232 = _tmp202 + _tmp205 + _tmp230 * _tmp35 + _tmp231 * _tmp37;
  const Scalar _tmp233 = std::pow(_tmp232, Scalar(-2));
  const Scalar _tmp234 = _tmp124 * _tmp151;
  const Scalar _tmp235 = _tmp118 * _tmp234;
  const Scalar _tmp236 = _tmp108 * _tmp234;
  const Scalar _tmp237 = -_tmp137 * _tmp168 + _tmp139 * _tmp160 - _tmp156 * _tmp158 + _tmp198 -
                         _tmp235 * _tmp35 - _tmp236 * _tmp37;
  const Scalar _tmp238 =
      std::pow(Scalar(_tmp233 * std::pow(_tmp237, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp239 = _tmp109 * _tmp43 + _tmp114 * _tmp119 + _tmp210 - _tmp230;
  const Scalar _tmp240 = _tmp233 * _tmp237;
  const Scalar _tmp241 = Scalar(1.0) / (_tmp232);
  const Scalar _tmp242 = _tmp118 * _tmp151;
  const Scalar _tmp243 = _tmp108 * _tmp151;
  const Scalar _tmp244 =
      _tmp238 *
      (-_tmp239 * _tmp240 + _tmp241 * (-_tmp114 * _tmp242 - _tmp133 * _tmp168 + _tmp158 * _tmp178 +
                                       _tmp214 + _tmp235 - _tmp243 * _tmp43));
  const Scalar _tmp245 = std::asinh(_tmp237 * _tmp241);
  const Scalar _tmp246 = Scalar(1.0) * _tmp245;
  const Scalar _tmp247 = Scalar(1.0) * std::sinh(_tmp246);
  const Scalar _tmp248 = Scalar(1.4083112389913199) * _tmp245;
  const Scalar _tmp249 =
      -_tmp232 * _tmp248 - std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp250 = Scalar(0.71007031138673404) * _tmp241;
  const Scalar _tmp251 = _tmp249 * _tmp250;
  const Scalar _tmp252 = std::sinh(_tmp251);
  const Scalar _tmp253 = Scalar(1.4083112389913199) * _tmp232;
  const Scalar _tmp254 = Scalar(0.71007031138673404) * _tmp233;
  const Scalar _tmp255 = _tmp239 * _tmp254;
  const Scalar _tmp256 = Scalar(1.4083112389913199) * _tmp250 * p_b(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp246) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp251);
  const Scalar _tmp257 = _tmp38 * _tmp40;
  const Scalar _tmp258 = _tmp257 * fh1;
  const Scalar _tmp259 = _tmp131 * _tmp38 - _tmp135 - _tmp30 * _tmp42;
  const Scalar _tmp260 = _tmp259 * fh1;
  const Scalar _tmp261 = -_tmp112 * _tmp258 - _tmp122 * _tmp43 - _tmp129 * _tmp260 + _tmp138;
  const Scalar _tmp262 = _tmp144 * _tmp261;
  const Scalar _tmp263 = -_tmp146 * _tmp257 + _tmp147;
  const Scalar _tmp264 =
      _tmp175 * (_tmp182 * (_tmp155 * _tmp178 + _tmp159 * _tmp263 - _tmp173 + _tmp177 * _tmp42 +
                            _tmp179 * _tmp259 + _tmp181 * _tmp257) -
                 _tmp183 * _tmp261);
  const Scalar _tmp265 = _tmp209 * _tmp259;
  const Scalar _tmp266 = _tmp110 * _tmp258 + _tmp120 * _tmp43 - _tmp204 - _tmp265 * _tmp93;
  const Scalar _tmp267 = _tmp225 * _tmp266;
  const Scalar _tmp268 =
      _tmp208 *
      (-_tmp212 * _tmp266 + _tmp213 * (-_tmp154 * _tmp178 + _tmp157 * _tmp263 - _tmp199 +
                                       _tmp200 * _tmp259 + _tmp215 * _tmp42 + _tmp216 * _tmp257));
  const Scalar _tmp269 = _tmp109 * _tmp258 + _tmp119 * _tmp43 - _tmp231 + _tmp265;
  const Scalar _tmp270 =
      _tmp238 *
      (-_tmp240 * _tmp269 + _tmp241 * (_tmp152 * _tmp178 - _tmp158 * _tmp263 - _tmp168 * _tmp260 +
                                       _tmp236 - _tmp242 * _tmp43 - _tmp243 * _tmp258));
  const Scalar _tmp271 = _tmp254 * _tmp269;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp19 * _tmp34;
  _res(1, 0) =
      -_tmp134 * _tmp194 -
      _tmp188 *
          (-_tmp145 * p_d(2, 0) + _tmp184 * _tmp187 -
           _tmp192 * (-_tmp145 * _tmp189 + _tmp190 * (-_tmp134 * _tmp193 - _tmp184 * _tmp188)));
  _res(2, 0) =
      -_tmp211 * _tmp229 -
      _tmp221 *
          (_tmp217 * _tmp220 - _tmp226 * p_c(2, 0) -
           _tmp228 * (_tmp223 * (-_tmp211 * _tmp222 - _tmp217 * _tmp221) - _tmp224 * _tmp226));
  _res(3, 0) =
      -_tmp239 * _tmp256 -
      _tmp253 *
          (_tmp244 * _tmp247 -
           _tmp252 * (-_tmp249 * _tmp255 + _tmp250 * (-_tmp239 * _tmp248 - _tmp244 * _tmp253)) -
           _tmp255 * p_b(2, 0));
  _res(0, 1) = -_tmp32 * _tmp34;
  _res(1, 1) =
      -_tmp188 *
          (_tmp187 * _tmp264 -
           _tmp192 * (-_tmp189 * _tmp262 + _tmp190 * (-_tmp188 * _tmp264 - _tmp193 * _tmp261)) -
           _tmp262 * p_d(2, 0)) -
      _tmp194 * _tmp261;
  _res(2, 1) =
      -_tmp221 *
          (_tmp220 * _tmp268 -
           _tmp228 * (_tmp223 * (-_tmp221 * _tmp268 - _tmp222 * _tmp266) - _tmp224 * _tmp267) -
           _tmp267 * p_c(2, 0)) -
      _tmp229 * _tmp266;
  _res(3, 1) =
      -_tmp253 *
          (_tmp247 * _tmp270 -
           _tmp252 * (-_tmp249 * _tmp271 + _tmp250 * (-_tmp248 * _tmp269 - _tmp253 * _tmp270)) -
           _tmp271 * p_b(2, 0)) -
      _tmp256 * _tmp269;
  _res(0, 2) = Scalar(-1.0);
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
