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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl8
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl8(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 624

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (218)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp2;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 = -_tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp14 = _tmp2 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = _tmp0 * _tmp7;
  const Scalar _tmp22 = _tmp6 * _tmp9;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = Scalar(1.0) / (fh1);
  const Scalar _tmp30 = _tmp29 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp28 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.71007031138673404) * _tmp29;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp31;
  const Scalar _tmp39 = _tmp28 - p_b(0, 0);
  const Scalar _tmp40 = _tmp18 - p_b(1, 0);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp40 * _tmp41;
  const Scalar _tmp43 = _tmp39 * _tmp41;
  const Scalar _tmp44 = -_tmp17 * _tmp43 + _tmp27 * _tmp42;
  const Scalar _tmp45 = _tmp24 + _tmp25;
  const Scalar _tmp46 = _tmp20 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_c(0, 0);
  const Scalar _tmp49 = _tmp16 + _tmp4;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_c(1, 0);
  const Scalar _tmp52 =
      std::sqrt(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp55 * (_tmp46 * _tmp51 * _tmp53 - _tmp48 * _tmp49 * _tmp53);
  const Scalar _tmp57 = -_tmp20;
  const Scalar _tmp58 = _tmp45 + _tmp57;
  const Scalar _tmp59 = _tmp58 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 - p_d(0, 0);
  const Scalar _tmp61 = _tmp12 - _tmp15;
  const Scalar _tmp62 = _tmp4 + _tmp61;
  const Scalar _tmp63 = _tmp62 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_d(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp60 * _tmp65;
  const Scalar _tmp67 = _tmp64 * _tmp65;
  const Scalar _tmp68 = _tmp26 + _tmp57;
  const Scalar _tmp69 = _tmp68 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 - p_a(0, 0);
  const Scalar _tmp71 = _tmp5 + _tmp61;
  const Scalar _tmp72 = _tmp71 + position_vector(1, 0);
  const Scalar _tmp73 = _tmp72 - p_a(1, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp70 * _tmp74;
  const Scalar _tmp76 = _tmp73 * _tmp74;
  const Scalar _tmp77 = _tmp56 * _tmp75 - _tmp68 * _tmp76 + _tmp71 * _tmp75;
  const Scalar _tmp78 = _tmp51 * _tmp54;
  const Scalar _tmp79 = _tmp66 * _tmp78 - _tmp67;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp75 * _tmp78 - _tmp76);
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp56 * _tmp66 - _tmp58 * _tmp67 + _tmp62 * _tmp66 - _tmp77 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp75 * _tmp81;
  const Scalar _tmp86 = _tmp44 * _tmp55 * (_tmp66 * _tmp84 - _tmp84 * _tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp49;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp71 + _tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp46;
  const Scalar _tmp91 = -_tmp68 + _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp94 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp95 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp96 = _tmp94 + _tmp95;
  const Scalar _tmp97 = _tmp93 + _tmp96;
  const Scalar _tmp98 = _tmp78 * _tmp97;
  const Scalar _tmp99 = -_tmp93;
  const Scalar _tmp100 = _tmp94 - _tmp95;
  const Scalar _tmp101 = _tmp100 + _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp76 - _tmp75 * _tmp98;
  const Scalar _tmp103 = Scalar(1.0) * _tmp80;
  const Scalar _tmp104 = _tmp102 * _tmp103;
  const Scalar _tmp105 = -_tmp101 * _tmp75 + _tmp75 * _tmp97;
  const Scalar _tmp106 = -_tmp103 * _tmp105 + _tmp104 * _tmp92;
  const Scalar _tmp107 = _tmp66 * _tmp97;
  const Scalar _tmp108 = _tmp100 + _tmp93;
  const Scalar _tmp109 = -_tmp102 * _tmp81 - _tmp107 * _tmp78 + _tmp108 * _tmp67;
  const Scalar _tmp110 = -_tmp105 * _tmp81 + _tmp107 - _tmp108 * _tmp66 - _tmp109 * _tmp92;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = _tmp111 * _tmp82;
  const Scalar _tmp113 = _tmp110 * _tmp83;
  const Scalar _tmp114 = _tmp113 * (-_tmp103 * _tmp77 - _tmp106 * _tmp112);
  const Scalar _tmp115 = _tmp106 + _tmp114;
  const Scalar _tmp116 = _tmp111 * _tmp79;
  const Scalar _tmp117 = _tmp80 * (-_tmp115 * _tmp116 + Scalar(1.0));
  const Scalar _tmp118 = _tmp111 * _tmp115;
  const Scalar _tmp119 = _tmp42 * _tmp55 * (_tmp117 * _tmp75 + _tmp118 * _tmp66);
  const Scalar _tmp120 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp121 = _tmp87 * _tmp92 + _tmp90;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = _tmp111 * _tmp122;
  const Scalar _tmp124 = _tmp78 * _tmp80;
  const Scalar _tmp125 = _tmp102 * _tmp124 + _tmp98;
  const Scalar _tmp126 = _tmp105 * _tmp124 - _tmp125 * _tmp92 - _tmp97;
  const Scalar _tmp127 = _tmp113 * (-_tmp112 * _tmp126 + _tmp124 * _tmp77 - _tmp56);
  const Scalar _tmp128 = _tmp126 + _tmp127;
  const Scalar _tmp129 = _tmp80 * (-_tmp116 * _tmp128 - _tmp78);
  const Scalar _tmp130 = _tmp111 * _tmp128;
  const Scalar _tmp131 = _tmp43 * _tmp55 * (_tmp129 * _tmp75 + _tmp130 * _tmp66 + Scalar(1.0));
  const Scalar _tmp132 = -_tmp119 * fh1 - _tmp120 * _tmp55 * (_tmp123 * _tmp66 - _tmp123 * _tmp85) -
                         _tmp131 * fh1 - _tmp86 * fh1;
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp109 * _tmp111;
  const Scalar _tmp135 = _tmp62 + _tmp88;
  const Scalar _tmp136 = _tmp135 * _tmp92;
  const Scalar _tmp137 = Scalar(1.0) / (-_tmp136 - _tmp58 + _tmp90);
  const Scalar _tmp138 = _tmp121 * _tmp137;
  const Scalar _tmp139 = -_tmp122 * _tmp134 - _tmp135 * _tmp138 + _tmp88;
  const Scalar _tmp140 = Scalar(1.0) * _tmp89;
  const Scalar _tmp141 = Scalar(1.0) * _tmp137;
  const Scalar _tmp142 = _tmp135 * _tmp137;
  const Scalar _tmp143 = -_tmp104 + _tmp114 * _tmp142 - _tmp115 * _tmp134;
  const Scalar _tmp144 = Scalar(1.0) * _tmp42 * (_tmp114 * _tmp141 - _tmp140 * _tmp143);
  const Scalar _tmp145 = _tmp113 * _tmp141;
  const Scalar _tmp146 = -_tmp109 * _tmp84 + _tmp135 * _tmp145;
  const Scalar _tmp147 = Scalar(1.0) * _tmp44 * (-_tmp140 * _tmp146 + _tmp145);
  const Scalar _tmp148 = _tmp96 + _tmp99;
  const Scalar _tmp149 = _tmp148 * fh1;
  const Scalar _tmp150 = _tmp149 * _tmp43 + Scalar(40.024799999999999) * _tmp23 + _tmp27 * fv1;
  const Scalar _tmp151 = _tmp135 * _tmp89;
  const Scalar _tmp152 = Scalar(1.0) * _tmp141 * _tmp151 - Scalar(1.0) * _tmp141;
  const Scalar _tmp153 = _tmp125 + _tmp127 * _tmp142 - _tmp128 * _tmp134;
  const Scalar _tmp154 = Scalar(1.0) * _tmp43 * (_tmp127 * _tmp141 - _tmp140 * _tmp153);
  const Scalar _tmp155 = -Scalar(40.024799999999999) * _tmp11 - _tmp149 * _tmp42 - _tmp17 * fv1;
  const Scalar _tmp156 = _tmp136 * _tmp141 + Scalar(1.0);
  const Scalar _tmp157 = _tmp141 * _tmp92;
  const Scalar _tmp158 = -Scalar(1.0) * _tmp140 * _tmp156 + Scalar(1.0) * _tmp157;
  const Scalar _tmp159 =
      Scalar(1.0) * _tmp120 * (-_tmp121 * _tmp141 - _tmp139 * _tmp140 + Scalar(1.0)) +
      _tmp144 * fh1 + _tmp147 * fh1 + _tmp150 * _tmp152 + _tmp154 * fh1 + _tmp155 * _tmp158;
  const Scalar _tmp160 = std::asinh(_tmp133 * _tmp159);
  const Scalar _tmp161 = Scalar(1.0) * _tmp160;
  const Scalar _tmp162 = _tmp148 * _tmp42;
  const Scalar _tmp163 = _tmp148 * _tmp43;
  const Scalar _tmp164 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp165 = -_tmp119 - _tmp131 - _tmp86;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 =
      (_tmp133 * (_tmp144 + _tmp147 + _tmp152 * _tmp163 + _tmp154 - _tmp158 * _tmp162) -
       _tmp159 * _tmp166) /
      std::sqrt(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp164 + 1));
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp132;
  const Scalar _tmp169 = Scalar(1.4083112389913199) * _tmp165;
  const Scalar _tmp170 = Scalar(0.71007031138673404) * _tmp133;
  const Scalar _tmp171 =
      -_tmp160 * _tmp168 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = _tmp146 * _tmp44 * _tmp89;
  const Scalar _tmp174 = _tmp141 * _tmp150;
  const Scalar _tmp175 = _tmp155 * _tmp89;
  const Scalar _tmp176 = _tmp42 * _tmp89;
  const Scalar _tmp177 = _tmp143 * _tmp176;
  const Scalar _tmp178 = _tmp43 * _tmp89;
  const Scalar _tmp179 = _tmp153 * _tmp178;
  const Scalar _tmp180 = _tmp120 * _tmp139 * _tmp89 - _tmp151 * _tmp174 + _tmp156 * _tmp175 +
                         _tmp173 * fh1 + _tmp177 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = _tmp129 * _tmp43;
  const Scalar _tmp182 = _tmp117 * _tmp42;
  const Scalar _tmp183 = _tmp44 * _tmp84;
  const Scalar _tmp184 = _tmp183 * fh1;
  const Scalar _tmp185 = _tmp120 * _tmp123;
  const Scalar _tmp186 = _tmp181 * fh1 + _tmp182 * fh1 - _tmp184 * _tmp81 - _tmp185 * _tmp81;
  const Scalar _tmp187 = Scalar(1.0) / (_tmp186);
  const Scalar _tmp188 = std::asinh(_tmp180 * _tmp187);
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp186;
  const Scalar _tmp190 =
      -_tmp188 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp72 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp191 = Scalar(0.71007031138673404) * _tmp187;
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = Scalar(1.0) * _tmp188;
  const Scalar _tmp194 = _tmp181 + _tmp182 - _tmp183 * _tmp81;
  const Scalar _tmp195 = Scalar(1.4083112389913199) * _tmp194;
  const Scalar _tmp196 = std::pow(_tmp186, Scalar(-2));
  const Scalar _tmp197 = _tmp194 * _tmp196;
  const Scalar _tmp198 =
      (-_tmp180 * _tmp197 + _tmp187 * (-_tmp135 * _tmp141 * _tmp148 * _tmp178 -
                                       _tmp148 * _tmp156 * _tmp176 + _tmp173 + _tmp177 + _tmp179)) /
      std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp196 + 1));
  const Scalar _tmp199 = _tmp118 * _tmp42;
  const Scalar _tmp200 = _tmp130 * _tmp43;
  const Scalar _tmp201 = _tmp183 + _tmp199 + _tmp200;
  const Scalar _tmp202 = _tmp184 + _tmp185 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp203 = _tmp114 * _tmp137 * _tmp42;
  const Scalar _tmp204 = _tmp127 * _tmp137 * _tmp43;
  const Scalar _tmp205 = _tmp145 * _tmp44;
  const Scalar _tmp206 = _tmp120 * _tmp138 - _tmp141 * _tmp175 * _tmp91 + _tmp174 - _tmp203 * fh1 -
                         _tmp204 * fh1 - _tmp205 * fh1;
  const Scalar _tmp207 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp208 = std::asinh(_tmp206 * _tmp207);
  const Scalar _tmp209 = Scalar(1.4083112389913199) * _tmp208;
  const Scalar _tmp210 =
      -_tmp202 * _tmp209 - std::sqrt(Scalar(std::pow(Scalar(-_tmp59 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp211 = Scalar(0.71007031138673404) * _tmp207;
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = Scalar(1.0) * _tmp208;
  const Scalar _tmp214 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp215 = _tmp201 * _tmp214;
  const Scalar _tmp216 = (-_tmp206 * _tmp215 + _tmp207 * (_tmp141 * _tmp163 + _tmp157 * _tmp162 -
                                                          _tmp203 - _tmp204 - _tmp205)) /
                         std::sqrt(Scalar(std::pow(_tmp206, Scalar(2)) * _tmp214 + 1));
  const Scalar _tmp217 = Scalar(1.4083112389913199) * _tmp202;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(1.4083112389913199) * fh1 *
                   (Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::cosh(_tmp38) -
                    (-Scalar(0.71007031138673404) * _tmp33 * _tmp36 +
                     _tmp34 * (Scalar(1.4083112389913199) * _tmp30 * _tmp37 - _tmp32)) *
                        std::cosh(_tmp35)) -
               Scalar(1.4083112389913199) * std::sinh(_tmp35) -
               Scalar(1.4083112389913199) * std::sinh(_tmp38);
  _res(1, 0) = _tmp168 * (-Scalar(1.0) * _tmp167 * std::cosh(_tmp161) -
                          (-Scalar(0.71007031138673404) * _tmp166 * _tmp171 +
                           _tmp170 * (-_tmp160 * _tmp169 - _tmp167 * _tmp168)) *
                              std::cosh(_tmp172)) +
               _tmp169 * (-std::sinh(_tmp161) - std::sinh(_tmp172));
  _res(2, 0) = _tmp189 * (-Scalar(1.0) * _tmp198 * std::cosh(_tmp193) -
                          (-Scalar(0.71007031138673404) * _tmp190 * _tmp197 +
                           _tmp191 * (-_tmp188 * _tmp195 - _tmp189 * _tmp198)) *
                              std::cosh(_tmp192)) +
               _tmp195 * (-std::sinh(_tmp192) - std::sinh(_tmp193));
  _res(3, 0) = Scalar(1.4083112389913199) * _tmp201 * (-std::sinh(_tmp212) - std::sinh(_tmp213)) +
               _tmp217 * (-Scalar(1.0) * _tmp216 * std::cosh(_tmp213) -
                          (-Scalar(0.71007031138673404) * _tmp210 * _tmp215 +
                           _tmp211 * (-_tmp201 * _tmp209 - _tmp216 * _tmp217)) *
                              std::cosh(_tmp212));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
