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
 * Symbolic function: IK_residual_func_cost1_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 482

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (157)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = Scalar(0.71007031138673404) * _tmp0;
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp4 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 = -_tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp2;
  const Scalar _tmp14 = _tmp13 * _tmp7;
  const Scalar _tmp15 = _tmp4 * _tmp9;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp21 = _tmp13 * _tmp4;
  const Scalar _tmp22 = _tmp7 * _tmp9;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp27 = _tmp24 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = -_tmp20;
  const Scalar _tmp38 = _tmp27 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(0, 0);
  const Scalar _tmp40 = _tmp39 - p_b(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = -_tmp6;
  const Scalar _tmp43 = _tmp17 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 - p_b(1, 0);
  const Scalar _tmp46 = _tmp41 * _tmp45;
  const Scalar _tmp47 = _tmp24 - _tmp26;
  const Scalar _tmp48 = _tmp37 + _tmp47;
  const Scalar _tmp49 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp50 = _tmp49 - p_a(0, 0);
  const Scalar _tmp51 = _tmp12 - _tmp16;
  const Scalar _tmp52 = _tmp42 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - p_a(1, 0);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp50 * _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp55;
  const Scalar _tmp58 = _tmp46 * _tmp56 - _tmp57;
  const Scalar _tmp59 = _tmp33 - _tmp34;
  const Scalar _tmp60 = _tmp32 + _tmp59;
  const Scalar _tmp61 = _tmp20 + _tmp47;
  const Scalar _tmp62 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 - p_d(0, 0);
  const Scalar _tmp64 = _tmp51 + _tmp6;
  const Scalar _tmp65 = _tmp64 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_d(1, 0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp63 * _tmp67;
  const Scalar _tmp69 = -_tmp32;
  const Scalar _tmp70 = _tmp35 + _tmp69;
  const Scalar _tmp71 = _tmp68 * _tmp70;
  const Scalar _tmp72 = -_tmp60 * _tmp68 + _tmp71;
  const Scalar _tmp73 = _tmp66 * _tmp67;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp46 * _tmp68 - _tmp73);
  const Scalar _tmp75 = _tmp58 * _tmp74;
  const Scalar _tmp76 = _tmp59 + _tmp69;
  const Scalar _tmp77 = _tmp46 * _tmp70;
  const Scalar _tmp78 = -_tmp46 * _tmp71 + _tmp60 * _tmp73;
  const Scalar _tmp79 = -_tmp56 * _tmp77 + _tmp57 * _tmp76 - _tmp75 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) * _tmp43;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp64 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp38;
  const Scalar _tmp84 = -_tmp61 + _tmp83;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp56 * _tmp70 - _tmp56 * _tmp76 - _tmp72 * _tmp75 - _tmp79 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = Scalar(1.0) * _tmp74;
  const Scalar _tmp89 = Scalar(1.0) * _tmp82;
  const Scalar _tmp90 = -_tmp72 * _tmp88 + _tmp74 * _tmp78 * _tmp84 * _tmp89;
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp41 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (_tmp38 * _tmp45 * _tmp92 - _tmp40 * _tmp43 * _tmp92);
  const Scalar _tmp95 = -_tmp61 * _tmp73 + _tmp64 * _tmp68 + _tmp68 * _tmp94;
  const Scalar _tmp96 = -_tmp48 * _tmp57 + _tmp52 * _tmp56 + _tmp56 * _tmp94 - _tmp75 * _tmp95;
  const Scalar _tmp97 = _tmp87 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp86 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp88 * _tmp95 - _tmp90 * _tmp97);
  const Scalar _tmp101 = _tmp87 * (_tmp100 + _tmp90);
  const Scalar _tmp102 = -_tmp101 * _tmp58 + Scalar(1.0);
  const Scalar _tmp103 = _tmp68 * _tmp74;
  const Scalar _tmp104 = _tmp19 - p_c(1, 0);
  const Scalar _tmp105 = _tmp29 - p_c(0, 0);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp104 * _tmp106;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = _tmp46 * _tmp74;
  const Scalar _tmp110 = _tmp109 * _tmp78 + _tmp77;
  const Scalar _tmp111 = _tmp109 * _tmp72 - _tmp110 * _tmp85 - _tmp70;
  const Scalar _tmp112 = _tmp99 * (_tmp109 * _tmp95 - _tmp111 * _tmp97 - _tmp94);
  const Scalar _tmp113 = _tmp87 * (_tmp111 + _tmp112);
  const Scalar _tmp114 = -_tmp113 * _tmp58 - _tmp46;
  const Scalar _tmp115 = _tmp105 * _tmp106;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp98;
  const Scalar _tmp118 = _tmp58 * _tmp88 * _tmp98;
  const Scalar _tmp119 = fh1 * (_tmp107 * _tmp28 - _tmp115 * _tmp18);
  const Scalar _tmp120 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp121 = _tmp80 * _tmp85 + _tmp83;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = -_tmp108 * _tmp93 * (_tmp101 * _tmp56 + _tmp102 * _tmp103) -
                         _tmp116 * _tmp93 * (_tmp103 * _tmp114 + _tmp113 * _tmp56 + Scalar(1.0)) -
                         _tmp119 * _tmp93 * (_tmp117 * _tmp56 - _tmp118 * _tmp68) -
                         _tmp120 * _tmp93 * (_tmp122 * _tmp56 - _tmp122 * _tmp68 * _tmp75);
  const Scalar _tmp124 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp125 = Scalar(0.71007031138673404) * _tmp124;
  const Scalar _tmp126 = _tmp52 + _tmp81;
  const Scalar _tmp127 = _tmp126 * _tmp85;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 - _tmp48 + _tmp83);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp121 * _tmp128;
  const Scalar _tmp131 = -_tmp122 * _tmp79 - _tmp126 * _tmp130 + _tmp81;
  const Scalar _tmp132 = _tmp129 * _tmp99;
  const Scalar _tmp133 = -_tmp117 * _tmp79 + _tmp126 * _tmp132;
  const Scalar _tmp134 = _tmp126 * _tmp128;
  const Scalar _tmp135 = _tmp110 + _tmp112 * _tmp134 - _tmp113 * _tmp79;
  const Scalar _tmp136 = _tmp100 * _tmp134 - _tmp101 * _tmp79 - _tmp78 * _tmp88;
  const Scalar _tmp137 = _tmp36 * fh1;
  const Scalar _tmp138 = -_tmp107 * _tmp137 - Scalar(40.024799999999999) * _tmp11 - _tmp18 * fv1;
  const Scalar _tmp139 = _tmp127 * _tmp129 + Scalar(1.0);
  const Scalar _tmp140 = _tmp129 * _tmp85;
  const Scalar _tmp141 = _tmp115 * _tmp137 + Scalar(40.024799999999999) * _tmp23 + _tmp28 * fv1;
  const Scalar _tmp142 = _tmp126 * _tmp82;
  const Scalar _tmp143 = std::asinh(
      _tmp124 * (Scalar(1.0) * _tmp108 * (_tmp100 * _tmp129 - _tmp136 * _tmp89) +
                 Scalar(1.0) * _tmp116 * (_tmp112 * _tmp129 - _tmp135 * _tmp89) +
                 Scalar(1.0) * _tmp119 * (_tmp132 - _tmp133 * _tmp89) +
                 Scalar(1.0) * _tmp120 * (-_tmp121 * _tmp129 - _tmp131 * _tmp89 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp138 * (-_tmp139 * _tmp89 + _tmp140) +
                 Scalar(1.0) * _tmp141 * (_tmp129 * _tmp142 - _tmp129)));
  const Scalar _tmp144 = Scalar(1.4083112389913199) * _tmp123;
  const Scalar _tmp145 = _tmp129 * _tmp141;
  const Scalar _tmp146 = _tmp120 * _tmp122;
  const Scalar _tmp147 = _tmp102 * _tmp108 * _tmp74 + _tmp114 * _tmp116 * _tmp74 -
                         _tmp118 * _tmp119 - _tmp146 * _tmp75;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 =
      std::asinh(_tmp148 * (_tmp108 * _tmp136 * _tmp82 + _tmp116 * _tmp135 * _tmp82 +
                            _tmp119 * _tmp133 * _tmp82 + _tmp120 * _tmp131 * _tmp82 +
                            _tmp138 * _tmp139 * _tmp82 - _tmp142 * _tmp145));
  const Scalar _tmp150 = Scalar(1.4083112389913199) * _tmp147;
  const Scalar _tmp151 = Scalar(0.71007031138673404) * _tmp148;
  const Scalar _tmp152 = _tmp101 * _tmp108 + _tmp113 * _tmp116 + _tmp117 * _tmp119 + _tmp146;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (-_tmp100 * _tmp108 * _tmp128 - _tmp112 * _tmp116 * _tmp128 -
                            _tmp119 * _tmp132 + _tmp120 * _tmp130 - _tmp138 * _tmp140 + _tmp145));
  const Scalar _tmp155 = Scalar(0.71007031138673404) * _tmp153;
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp152;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp31 * (_tmp1 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp30) -
                 std::cosh(_tmp1 *
                           (-_tmp30 * _tmp31 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp19 + p_c(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp29 + p_c(0, 0)), Scalar(2))))))) +
      _tmp36 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp144 *
          (_tmp125 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp143) -
           std::cosh(_tmp125 *
                     (-_tmp143 * _tmp144 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp39 + p_b(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp44 + p_b(1, 0)), Scalar(2))))))) +
      _tmp70 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp150 *
          (_tmp151 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp149) -
           std::cosh(_tmp151 *
                     (-_tmp149 * _tmp150 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp62 + p_d(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp65 + p_d(1, 0)), Scalar(2))))))) +
      _tmp60 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp156 *
          (_tmp155 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(_tmp155 *
                     (-_tmp154 * _tmp156 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp49 + p_a(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp53 + p_a(1, 0)), Scalar(2))))))) +
      _tmp76 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
