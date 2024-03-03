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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl17
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 579

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (193)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp3;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp10 - _tmp12;
  const Scalar _tmp14 = Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp14;
  const Scalar _tmp16 = 2 * _tmp5 * _tmp8;
  const Scalar _tmp17 = _tmp11 * _tmp3;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp24 = _tmp5 * _tmp9;
  const Scalar _tmp25 = _tmp11 * _tmp8;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = -_tmp18;
  const Scalar _tmp34 = _tmp15 + _tmp33;
  const Scalar _tmp35 = _tmp34 + _tmp7;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = -_tmp23;
  const Scalar _tmp38 = _tmp29 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(0, 0);
  const Scalar _tmp40 = _tmp39 - p_d(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp36 - p_d(1, 0);
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = _tmp27 - _tmp28;
  const Scalar _tmp45 = _tmp37 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 - p_a(0, 0);
  const Scalar _tmp48 = -_tmp7;
  const Scalar _tmp49 = _tmp34 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_a(1, 0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp47 * _tmp52;
  const Scalar _tmp54 = _tmp51 * _tmp52;
  const Scalar _tmp55 = _tmp43 * _tmp53 - _tmp54;
  const Scalar _tmp56 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp59 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp60 = _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp57 + _tmp60;
  const Scalar _tmp62 = _tmp58 + _tmp59;
  const Scalar _tmp63 = _tmp57 + _tmp62;
  const Scalar _tmp64 = _tmp23 + _tmp44;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_b(0, 0);
  const Scalar _tmp67 = _tmp19 + _tmp48;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_b(1, 0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp69 * _tmp70;
  const Scalar _tmp72 = _tmp56 + _tmp60;
  const Scalar _tmp73 = _tmp66 * _tmp70;
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = -_tmp43 * _tmp74 + _tmp63 * _tmp71;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp43 * _tmp73 - _tmp71);
  const Scalar _tmp77 = _tmp55 * _tmp76;
  const Scalar _tmp78 = _tmp53 * _tmp72;
  const Scalar _tmp79 = -_tmp43 * _tmp78 + _tmp54 * _tmp61 - _tmp75 * _tmp77;
  const Scalar _tmp80 = Scalar(1.0) * _tmp35;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp67 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp38;
  const Scalar _tmp84 = -_tmp64 + _tmp83;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = -_tmp63 * _tmp73 + _tmp74;
  const Scalar _tmp87 = -_tmp53 * _tmp61 - _tmp77 * _tmp86 + _tmp78 - _tmp79 * _tmp85;
  const Scalar _tmp88 = Scalar(1.0) / (_tmp87);
  const Scalar _tmp89 = Scalar(1.0) * _tmp82;
  const Scalar _tmp90 = Scalar(1.0) * _tmp76;
  const Scalar _tmp91 = _tmp75 * _tmp76 * _tmp84 * _tmp89 - _tmp86 * _tmp90;
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp41 * _tmp92;
  const Scalar _tmp95 = _tmp94 * (-_tmp35 * _tmp40 * _tmp93 + _tmp38 * _tmp42 * _tmp93);
  const Scalar _tmp96 = -_tmp64 * _tmp71 + _tmp67 * _tmp73 + _tmp73 * _tmp95;
  const Scalar _tmp97 = -_tmp45 * _tmp54 + _tmp49 * _tmp53 + _tmp53 * _tmp95 - _tmp77 * _tmp96;
  const Scalar _tmp98 = _tmp88 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp87 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (-_tmp90 * _tmp96 - _tmp91 * _tmp98);
  const Scalar _tmp102 = _tmp88 * (_tmp101 + _tmp91);
  const Scalar _tmp103 = -_tmp102 * _tmp55 + Scalar(1.0);
  const Scalar _tmp104 = _tmp73 * _tmp76;
  const Scalar _tmp105 = _tmp21 - p_c(1, 0);
  const Scalar _tmp106 = _tmp31 - p_c(0, 0);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp111 = _tmp80 * _tmp85 + _tmp83;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp112 * _tmp88;
  const Scalar _tmp114 = _tmp73 * _tmp77;
  const Scalar _tmp115 = _tmp94 * (-_tmp113 * _tmp114 + _tmp113 * _tmp53);
  const Scalar _tmp116 = _tmp43 * _tmp76;
  const Scalar _tmp117 = _tmp116 * _tmp75 + _tmp43 * _tmp72;
  const Scalar _tmp118 = _tmp116 * _tmp86 - _tmp117 * _tmp85 - _tmp72;
  const Scalar _tmp119 = _tmp100 * (_tmp116 * _tmp96 - _tmp118 * _tmp98 - _tmp95);
  const Scalar _tmp120 = _tmp118 + _tmp119;
  const Scalar _tmp121 = _tmp120 * _tmp88;
  const Scalar _tmp122 = -_tmp121 * _tmp55 - _tmp43;
  const Scalar _tmp123 = _tmp106 * _tmp107;
  const Scalar _tmp124 = _tmp123 * fh1;
  const Scalar _tmp125 = Scalar(1.0) * _tmp99;
  const Scalar _tmp126 = fh1 * (_tmp108 * _tmp30 - _tmp123 * _tmp20);
  const Scalar _tmp127 = -_tmp109 * _tmp94 * (_tmp102 * _tmp53 + _tmp103 * _tmp104) -
                         _tmp110 * _tmp115 -
                         _tmp124 * _tmp94 * (_tmp104 * _tmp122 + _tmp121 * _tmp53 + Scalar(1.0)) -
                         _tmp126 * _tmp94 * (-_tmp114 * _tmp125 + _tmp125 * _tmp53);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp49 + _tmp81;
  const Scalar _tmp130 = _tmp129 * _tmp85;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 - _tmp45 + _tmp83);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp131;
  const Scalar _tmp134 = _tmp101 * _tmp133 - _tmp102 * _tmp79 - _tmp75 * _tmp90;
  const Scalar _tmp135 = _tmp100 * _tmp132;
  const Scalar _tmp136 = -_tmp125 * _tmp79 + _tmp129 * _tmp135;
  const Scalar _tmp137 = _tmp79 * _tmp88;
  const Scalar _tmp138 = _tmp111 * _tmp131;
  const Scalar _tmp139 = _tmp82 * (-_tmp112 * _tmp137 - _tmp129 * _tmp138 + _tmp81);
  const Scalar _tmp140 = -Scalar(1.0) * _tmp111 * _tmp132 - Scalar(1.0) * _tmp139 + Scalar(1.0);
  const Scalar _tmp141 = _tmp117 + _tmp119 * _tmp133 - _tmp120 * _tmp137;
  const Scalar _tmp142 = fh1 * (_tmp56 + _tmp62);
  const Scalar _tmp143 = -_tmp108 * _tmp142 - Scalar(40.024799999999999) * _tmp13 - _tmp20 * fv1;
  const Scalar _tmp144 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp145 = _tmp132 * _tmp85;
  const Scalar _tmp146 = -Scalar(1.0) * _tmp144 * _tmp89 + Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp123 * _tmp142 + Scalar(40.024799999999999) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp148 = _tmp129 * _tmp82;
  const Scalar _tmp149 = Scalar(1.0) * _tmp132 * _tmp148 - Scalar(1.0) * _tmp132;
  const Scalar _tmp150 =
      Scalar(1.0) * _tmp109 * (_tmp101 * _tmp132 - _tmp134 * _tmp89) + _tmp110 * _tmp140 +
      Scalar(1.0) * _tmp124 * (_tmp119 * _tmp132 - _tmp141 * _tmp89) +
      Scalar(1.0) * _tmp126 * (_tmp135 - _tmp136 * _tmp89) + _tmp143 * _tmp146 + _tmp147 * _tmp149;
  const Scalar _tmp151 = std::asinh(_tmp128 * _tmp150);
  const Scalar _tmp152 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp153 =
      -_tmp151 * _tmp152 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp39 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp154 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp155 = _tmp115 * _tmp154;
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp115;
  const Scalar _tmp157 = _tmp14 + _tmp33 + _tmp48;
  const Scalar _tmp158 =
      (_tmp128 * (-_tmp140 + _tmp146 * _tmp157 + _tmp149 * _tmp30) - _tmp150 * _tmp155) /
      std::sqrt(Scalar(std::pow(_tmp150, Scalar(2)) * _tmp154 + 1));
  const Scalar _tmp159 = Scalar(0.71007031138673404) * _tmp128;
  const Scalar _tmp160 = _tmp153 * _tmp159;
  const Scalar _tmp161 = Scalar(1.0) * _tmp151;
  const Scalar _tmp162 = _tmp144 * _tmp82;
  const Scalar _tmp163 = _tmp132 * _tmp147;
  const Scalar _tmp164 = _tmp109 * _tmp134 * _tmp82 + _tmp110 * _tmp139 +
                         _tmp124 * _tmp141 * _tmp82 + _tmp126 * _tmp136 * _tmp82 +
                         _tmp143 * _tmp162 - _tmp148 * _tmp163;
  const Scalar _tmp165 = _tmp110 * _tmp113;
  const Scalar _tmp166 = _tmp125 * _tmp126;
  const Scalar _tmp167 =
      _tmp103 * _tmp109 * _tmp76 + _tmp122 * _tmp124 * _tmp76 - _tmp165 * _tmp77 - _tmp166 * _tmp77;
  const Scalar _tmp168 = Scalar(1.0) / (_tmp167);
  const Scalar _tmp169 = std::asinh(_tmp164 * _tmp168);
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp167;
  const Scalar _tmp171 =
      -_tmp169 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.71007031138673404) * _tmp168;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = std::pow(_tmp167, Scalar(-2));
  const Scalar _tmp175 = _tmp113 * _tmp174 * _tmp77;
  const Scalar _tmp176 = _tmp132 * _tmp30;
  const Scalar _tmp177 =
      (-_tmp164 * _tmp175 + _tmp168 * (-_tmp139 - _tmp148 * _tmp176 + _tmp157 * _tmp162)) /
      std::sqrt(Scalar(std::pow(_tmp164, Scalar(2)) * _tmp174 + 1));
  const Scalar _tmp178 = Scalar(1.4083112389913199) * _tmp113;
  const Scalar _tmp179 = _tmp178 * _tmp77;
  const Scalar _tmp180 = Scalar(1.0) * _tmp169;
  const Scalar _tmp181 = _tmp102 * _tmp109 + _tmp121 * _tmp124 + _tmp165 + _tmp166;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = -_tmp101 * _tmp109 * _tmp131 + _tmp110 * _tmp138 -
                         _tmp119 * _tmp124 * _tmp131 - _tmp126 * _tmp135 - _tmp143 * _tmp145 +
                         _tmp163;
  const Scalar _tmp184 = std::asinh(_tmp182 * _tmp183);
  const Scalar _tmp185 = Scalar(1.4083112389913199) * _tmp181;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 - std::sqrt(Scalar(std::pow(Scalar(-_tmp46 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.71007031138673404) * _tmp182;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp190 = _tmp113 * _tmp189;
  const Scalar _tmp191 = (_tmp182 * (-_tmp138 - _tmp145 * _tmp157 + _tmp176) + _tmp183 * _tmp190) /
                         std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = Scalar(1.0) * _tmp184;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                         (-_tmp1 * _tmp32 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_c(0, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-Scalar(1.0) * _tmp158 * std::cosh(_tmp161) -
                          (-Scalar(0.71007031138673404) * _tmp153 * _tmp155 +
                           _tmp159 * (-_tmp151 * _tmp156 - _tmp152 * _tmp158)) *
                              std::cosh(_tmp160)) +
               _tmp156 * (-std::sinh(_tmp160) - std::sinh(_tmp161));
  _res(2, 0) = _tmp170 * (-Scalar(1.0) * _tmp177 * std::cosh(_tmp180) -
                          (-Scalar(0.71007031138673404) * _tmp171 * _tmp175 +
                           _tmp172 * (-_tmp169 * _tmp179 - _tmp170 * _tmp177)) *
                              std::cosh(_tmp173)) +
               _tmp179 * (-std::sinh(_tmp173) - std::sinh(_tmp180));
  _res(3, 0) = -_tmp178 * (-std::sinh(_tmp188) - std::sinh(_tmp192)) +
               _tmp185 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp192) -
                          (Scalar(0.71007031138673404) * _tmp186 * _tmp190 +
                           _tmp187 * (_tmp178 * _tmp184 - _tmp185 * _tmp191)) *
                              std::cosh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
