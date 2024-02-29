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
 * Symbolic function: IK_residual_func_cost1_Nl7
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 486

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(0.71007031138673404) * _tmp0;
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = _tmp12 * _tmp5;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 * _tmp5;
  const Scalar _tmp16 = _tmp12 * _tmp3;
  const Scalar _tmp17 = _tmp15 - _tmp16;
  const Scalar _tmp18 = -Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp8;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp24 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp25 = _tmp12 * _tmp9;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = -_tmp23;
  const Scalar _tmp39 = _tmp27 + _tmp28;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 - p_d(0, 0);
  const Scalar _tmp43 = -_tmp14 + _tmp18;
  const Scalar _tmp44 = _tmp43 + _tmp7;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 = _tmp45 - p_d(1, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp29 + _tmp38;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_a(0, 0);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp51);
  const Scalar _tmp53 = _tmp43 + _tmp8;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_a(1, 0);
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = _tmp42 * _tmp47;
  const Scalar _tmp58 = Scalar(1.0) / (-_tmp48 + _tmp56 * _tmp57);
  const Scalar _tmp59 = Scalar(1.0) * _tmp49;
  const Scalar _tmp60 = -_tmp40 + _tmp59;
  const Scalar _tmp61 = -_tmp33;
  const Scalar _tmp62 = _tmp34 + _tmp35;
  const Scalar _tmp63 = _tmp61 + _tmp62;
  const Scalar _tmp64 = _tmp36 + _tmp61;
  const Scalar _tmp65 = _tmp56 * _tmp64;
  const Scalar _tmp66 = _tmp48 * _tmp63 - _tmp57 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) * _tmp53;
  const Scalar _tmp68 = -_tmp67;
  const Scalar _tmp69 = Scalar(1.0) / (_tmp44 + _tmp68);
  const Scalar _tmp70 = Scalar(1.0) * _tmp69;
  const Scalar _tmp71 = _tmp58 * (-_tmp57 * _tmp63 + _tmp57 * _tmp64);
  const Scalar _tmp72 = _tmp58 * _tmp60 * _tmp66 * _tmp70 - Scalar(1.0) * _tmp71;
  const Scalar _tmp73 = _tmp23 + _tmp39;
  const Scalar _tmp74 = _tmp73 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 - p_c(0, 0);
  const Scalar _tmp76 = _tmp19 + _tmp7;
  const Scalar _tmp77 = _tmp76 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 - p_c(1, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp75 * _tmp79;
  const Scalar _tmp81 = _tmp64 * _tmp80;
  const Scalar _tmp82 = _tmp33 + _tmp62;
  const Scalar _tmp83 = _tmp78 * _tmp79;
  const Scalar _tmp84 = _tmp56 * _tmp80 - _tmp83;
  const Scalar _tmp85 = _tmp58 * _tmp84;
  const Scalar _tmp86 = -_tmp56 * _tmp81 - _tmp66 * _tmp85 + _tmp82 * _tmp83;
  const Scalar _tmp87 = _tmp60 * _tmp69;
  const Scalar _tmp88 = -_tmp71 * _tmp84 - _tmp80 * _tmp82 + _tmp81 - _tmp86 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp52 * _tmp90;
  const Scalar _tmp93 = _tmp92 * (_tmp49 * _tmp55 * _tmp91 - _tmp51 * _tmp53 * _tmp91);
  const Scalar _tmp94 = -_tmp40 * _tmp48 + _tmp44 * _tmp57 + _tmp57 * _tmp93;
  const Scalar _tmp95 = -_tmp73 * _tmp83 + _tmp76 * _tmp80 + _tmp80 * _tmp93 - _tmp85 * _tmp94;
  const Scalar _tmp96 = _tmp89 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) * _tmp58;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp99 = _tmp88 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp72 * _tmp96 - _tmp94 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp72;
  const Scalar _tmp102 = _tmp84 * _tmp89;
  const Scalar _tmp103 = -_tmp101 * _tmp102 + Scalar(1.0);
  const Scalar _tmp104 = _tmp57 * _tmp58;
  const Scalar _tmp105 = _tmp80 * _tmp89;
  const Scalar _tmp106 = _tmp31 - p_b(0, 0);
  const Scalar _tmp107 = _tmp21 - p_b(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = Scalar(1.0) * _tmp98;
  const Scalar _tmp112 = _tmp57 * _tmp85;
  const Scalar _tmp113 = _tmp106 * _tmp108;
  const Scalar _tmp114 = fh1 * (_tmp109 * _tmp30 - _tmp113 * _tmp20);
  const Scalar _tmp115 = _tmp56 * _tmp58;
  const Scalar _tmp116 = _tmp115 * _tmp66 + _tmp65;
  const Scalar _tmp117 = -_tmp116 * _tmp87 + _tmp56 * _tmp71 - _tmp64;
  const Scalar _tmp118 = _tmp99 * (_tmp115 * _tmp94 - _tmp117 * _tmp96 - _tmp93);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = -_tmp102 * _tmp119 - _tmp56;
  const Scalar _tmp121 = _tmp113 * fh1;
  const Scalar _tmp122 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp123 = _tmp59 + _tmp67 * _tmp87;
  const Scalar _tmp124 = 0;
  const Scalar _tmp125 = _tmp124 * _tmp89;
  const Scalar _tmp126 = -_tmp110 * _tmp92 * (_tmp101 * _tmp105 + _tmp103 * _tmp104) -
                         _tmp114 * _tmp92 * (-_tmp111 * _tmp112 + _tmp111 * _tmp80) -
                         _tmp121 * _tmp92 * (_tmp104 * _tmp120 + _tmp105 * _tmp119 + Scalar(1.0)) -
                         _tmp122 * _tmp92 * (-_tmp112 * _tmp125 + _tmp125 * _tmp80);
  const Scalar _tmp127 = Scalar(1.0) / (_tmp126);
  const Scalar _tmp128 = _tmp68 + _tmp76;
  const Scalar _tmp129 = _tmp128 * _tmp87;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 + _tmp59 - _tmp73);
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp128 * _tmp130;
  const Scalar _tmp133 = _tmp86 * _tmp89;
  const Scalar _tmp134 = _tmp100 * _tmp132 - _tmp101 * _tmp133 - _tmp66 * _tmp97;
  const Scalar _tmp135 = _tmp128 * _tmp131;
  const Scalar _tmp136 = _tmp37 * fh1;
  const Scalar _tmp137 = _tmp113 * _tmp136 + Scalar(40.024799999999999) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp138 = _tmp131 * _tmp99;
  const Scalar _tmp139 = -_tmp111 * _tmp86 + _tmp135 * _tmp99;
  const Scalar _tmp140 = _tmp123 * _tmp130;
  const Scalar _tmp141 = -_tmp124 * _tmp133 - _tmp128 * _tmp140 + _tmp68;
  const Scalar _tmp142 = -_tmp109 * _tmp136 - Scalar(40.024799999999999) * _tmp17 - _tmp20 * fv1;
  const Scalar _tmp143 = _tmp129 * _tmp131 + Scalar(1.0);
  const Scalar _tmp144 = _tmp131 * _tmp87;
  const Scalar _tmp145 = _tmp116 + _tmp118 * _tmp132 - _tmp119 * _tmp133;
  const Scalar _tmp146 = std::asinh(
      _tmp127 * (Scalar(1.0) * _tmp110 * (_tmp100 * _tmp131 - _tmp134 * _tmp70) +
                 Scalar(1.0) * _tmp114 * (_tmp138 - _tmp139 * _tmp70) +
                 Scalar(1.0) * _tmp121 * (_tmp118 * _tmp131 - _tmp145 * _tmp70) +
                 Scalar(1.0) * _tmp122 * (-_tmp123 * _tmp131 - _tmp141 * _tmp70 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp137 * (-_tmp131 + _tmp135 * _tmp69) +
                 Scalar(1.0) * _tmp142 * (-_tmp143 * _tmp70 + _tmp144)));
  const Scalar _tmp147 = Scalar(0.71007031138673404) * _tmp127;
  const Scalar _tmp148 = Scalar(1.4083112389913199) * _tmp126;
  const Scalar _tmp149 = _tmp122 * _tmp125;
  const Scalar _tmp150 = _tmp111 * _tmp114;
  const Scalar _tmp151 =
      _tmp103 * _tmp110 * _tmp58 + _tmp120 * _tmp121 * _tmp58 - _tmp149 * _tmp85 - _tmp150 * _tmp85;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = _tmp131 * _tmp137;
  const Scalar _tmp154 =
      std::asinh(_tmp152 * (_tmp110 * _tmp134 * _tmp69 + _tmp114 * _tmp139 * _tmp69 +
                            _tmp121 * _tmp145 * _tmp69 + _tmp122 * _tmp141 * _tmp69 -
                            _tmp128 * _tmp153 * _tmp69 + _tmp142 * _tmp143 * _tmp69));
  const Scalar _tmp155 = Scalar(1.4083112389913199) * _tmp151;
  const Scalar _tmp156 = Scalar(0.71007031138673404) * _tmp152;
  const Scalar _tmp157 =
      _tmp101 * _tmp110 * _tmp89 + _tmp119 * _tmp121 * _tmp89 + _tmp149 + _tmp150;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 = std::asinh(_tmp158 * (-_tmp100 * _tmp110 * _tmp130 - _tmp114 * _tmp138 -
                                               _tmp118 * _tmp121 * _tmp130 + _tmp122 * _tmp140 -
                                               _tmp142 * _tmp144 + _tmp153));
  const Scalar _tmp160 = Scalar(1.4083112389913199) * _tmp157;
  const Scalar _tmp161 = Scalar(0.71007031138673404) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 * (_tmp2 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp1) -
                 std::cosh(_tmp2 *
                           (-_tmp1 * _tmp32 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_b(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp31 + p_b(0, 0)), Scalar(2))))))) +
      _tmp37 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp148 *
          (_tmp147 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp146) -
           std::cosh(_tmp147 *
                     (-_tmp146 * _tmp148 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_a(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp54 + p_a(1, 0)), Scalar(2))))))) +
      _tmp64 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp155 *
          (_tmp156 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(_tmp156 *
                     (-_tmp154 * _tmp155 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_d(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp45 + p_d(1, 0)), Scalar(2))))))) +
      _tmp63 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp160 *
          (_tmp161 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp159) -
           std::cosh(_tmp161 *
                     (-_tmp159 * _tmp160 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp74 + p_c(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp77 + p_c(1, 0)), Scalar(2))))))) +
      _tmp82 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
