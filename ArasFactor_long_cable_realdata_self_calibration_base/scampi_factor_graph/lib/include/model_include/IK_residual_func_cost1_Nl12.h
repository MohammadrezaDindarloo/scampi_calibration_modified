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
 * Symbolic function: IK_residual_func_cost1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 480

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
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = 2 * _tmp3;
  const Scalar _tmp5 = _tmp2 * _tmp4;
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp11 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp10 +
                        Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999);
  const Scalar _tmp13 = _tmp4 * _tmp6;
  const Scalar _tmp14 = _tmp2 * _tmp7;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp9;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp23 = _tmp3 * _tmp7;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = _tmp29 - p_c(0, 0);
  const Scalar _tmp38 = _tmp19 - p_c(1, 0);
  const Scalar _tmp39 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp38, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp37 * _tmp39;
  const Scalar _tmp41 = _tmp36 * fh1;
  const Scalar _tmp42 = Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1 + _tmp40 * _tmp41;
  const Scalar _tmp43 = -_tmp21;
  const Scalar _tmp44 = _tmp27 + _tmp43;
  const Scalar _tmp45 = -_tmp9;
  const Scalar _tmp46 = -_tmp12 + _tmp16;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = Scalar(1.0) * _tmp47;
  const Scalar _tmp49 = -_tmp48;
  const Scalar _tmp50 = _tmp17 + _tmp45;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp46 + _tmp9;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp49 + _tmp52);
  const Scalar _tmp54 = _tmp25 - _tmp26;
  const Scalar _tmp55 = _tmp21 + _tmp54;
  const Scalar _tmp56 = _tmp43 + _tmp54;
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = _tmp53 * (-_tmp55 + _tmp57);
  const Scalar _tmp59 = _tmp51 * _tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (-_tmp44 + _tmp57 - _tmp59);
  const Scalar _tmp61 = Scalar(1.0) * _tmp60;
  const Scalar _tmp62 = _tmp51 * _tmp53;
  const Scalar _tmp63 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 - p_b(0, 0);
  const Scalar _tmp65 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_b(1, 0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp64 * _tmp67;
  const Scalar _tmp70 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 - p_a(0, 0);
  const Scalar _tmp72 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp73 = _tmp72 - p_a(1, 0);
  const Scalar _tmp74 =
      std::sqrt(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp73, Scalar(2))));
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp77 * (-_tmp47 * _tmp71 * _tmp75 + _tmp56 * _tmp73 * _tmp75);
  const Scalar _tmp79 = _tmp52 * _tmp69 - _tmp55 * _tmp68 + _tmp69 * _tmp78;
  const Scalar _tmp80 = _tmp73 * _tmp76;
  const Scalar _tmp81 = Scalar(1.0) / (-_tmp68 + _tmp69 * _tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp81;
  const Scalar _tmp83 = -_tmp32;
  const Scalar _tmp84 = _tmp35 + _tmp83;
  const Scalar _tmp85 = _tmp33 - _tmp34;
  const Scalar _tmp86 = _tmp83 + _tmp85;
  const Scalar _tmp87 = _tmp69 * _tmp86;
  const Scalar _tmp88 = _tmp68 * _tmp84 - _tmp80 * _tmp87;
  const Scalar _tmp89 = _tmp82 * _tmp88;
  const Scalar _tmp90 = -_tmp69 * _tmp84 + _tmp87;
  const Scalar _tmp91 = _tmp58 * _tmp89 - _tmp82 * _tmp90;
  const Scalar _tmp92 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp93 = _tmp92 - p_d(0, 0);
  const Scalar _tmp94 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp95 = _tmp94 - p_d(1, 0);
  const Scalar _tmp96 = std::pow(Scalar(std::pow(_tmp93, Scalar(2)) + std::pow(_tmp95, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp97 = _tmp93 * _tmp96;
  const Scalar _tmp98 = _tmp86 * _tmp97;
  const Scalar _tmp99 = _tmp95 * _tmp96;
  const Scalar _tmp100 = _tmp80 * _tmp97 - _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp81;
  const Scalar _tmp102 = _tmp32 + _tmp85;
  const Scalar _tmp103 = -_tmp101 * _tmp88 + _tmp102 * _tmp99 - _tmp80 * _tmp98;
  const Scalar _tmp104 = -_tmp101 * _tmp90 - _tmp102 * _tmp97 - _tmp103 * _tmp58 + _tmp98;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = -_tmp101 * _tmp79 - _tmp44 * _tmp99 + _tmp50 * _tmp97 + _tmp78 * _tmp97;
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp109 = _tmp104 * _tmp108;
  const Scalar _tmp110 = _tmp109 * (-_tmp107 * _tmp91 - _tmp79 * _tmp82);
  const Scalar _tmp111 = _tmp51 * _tmp60;
  const Scalar _tmp112 = _tmp105 * (_tmp110 + _tmp91);
  const Scalar _tmp113 = -_tmp103 * _tmp112 + _tmp110 * _tmp111 - _tmp89;
  const Scalar _tmp114 = Scalar(1.0) * _tmp53;
  const Scalar _tmp115 = _tmp38 * _tmp39;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = -_tmp115 * _tmp41 - Scalar(40.024799999999999) * _tmp15 - _tmp18 * fv1;
  const Scalar _tmp118 = _tmp58 * _tmp61;
  const Scalar _tmp119 = _tmp59 * _tmp61 + Scalar(1.0);
  const Scalar _tmp120 = _tmp109 * _tmp61;
  const Scalar _tmp121 = Scalar(1.0) * _tmp108;
  const Scalar _tmp122 = -_tmp103 * _tmp121 + _tmp120 * _tmp51;
  const Scalar _tmp123 = fh1 * (_tmp115 * _tmp28 - _tmp18 * _tmp40);
  const Scalar _tmp124 = _tmp80 * _tmp81;
  const Scalar _tmp125 = _tmp124 * _tmp88 + _tmp80 * _tmp86;
  const Scalar _tmp126 = _tmp124 * _tmp90 - _tmp125 * _tmp58 - _tmp86;
  const Scalar _tmp127 = _tmp109 * (-_tmp107 * _tmp126 + _tmp124 * _tmp79 - _tmp78);
  const Scalar _tmp128 = _tmp105 * (_tmp126 + _tmp127);
  const Scalar _tmp129 = -_tmp103 * _tmp128 + _tmp111 * _tmp127 + _tmp125;
  const Scalar _tmp130 = _tmp40 * fh1;
  const Scalar _tmp131 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp132 = _tmp48 * _tmp58 + _tmp57;
  const Scalar _tmp133 = 0;
  const Scalar _tmp134 = _tmp132 * _tmp60;
  const Scalar _tmp135 = -_tmp103 * _tmp133 - _tmp134 * _tmp51 + _tmp49;
  const Scalar _tmp136 = -_tmp100 * _tmp128 - _tmp80;
  const Scalar _tmp137 = _tmp69 * _tmp81;
  const Scalar _tmp138 = _tmp100 * _tmp108 * _tmp82;
  const Scalar _tmp139 = -_tmp100 * _tmp112 + Scalar(1.0);
  const Scalar _tmp140 = -_tmp116 * _tmp77 * (_tmp112 * _tmp97 + _tmp137 * _tmp139) -
                         _tmp123 * _tmp77 * (_tmp121 * _tmp97 - _tmp138 * _tmp69) -
                         _tmp130 * _tmp77 * (_tmp128 * _tmp97 + _tmp136 * _tmp137 + Scalar(1.0)) -
                         _tmp131 * _tmp77 * (-_tmp101 * _tmp133 * _tmp69 + _tmp133 * _tmp97);
  const Scalar _tmp141 = Scalar(1.0) / (_tmp140);
  const Scalar _tmp142 = std::asinh(
      _tmp141 * (Scalar(1.0) * _tmp116 * (_tmp110 * _tmp61 - _tmp113 * _tmp114) +
                 Scalar(1.0) * _tmp117 * (-_tmp114 * _tmp119 + _tmp118) +
                 Scalar(1.0) * _tmp123 * (-_tmp114 * _tmp122 + _tmp120) +
                 Scalar(1.0) * _tmp130 * (-_tmp114 * _tmp129 + _tmp127 * _tmp61) +
                 Scalar(1.0) * _tmp131 * (-_tmp114 * _tmp135 - _tmp132 * _tmp61 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp42 * (_tmp61 * _tmp62 - _tmp61)));
  const Scalar _tmp143 = Scalar(0.71007031138673404) * _tmp141;
  const Scalar _tmp144 = Scalar(1.4083112389913199) * _tmp140;
  const Scalar _tmp145 = _tmp42 * _tmp61;
  const Scalar _tmp146 = _tmp131 * _tmp133;
  const Scalar _tmp147 = -_tmp101 * _tmp146 + _tmp116 * _tmp139 * _tmp81 - _tmp123 * _tmp138 +
                         _tmp130 * _tmp136 * _tmp81;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 =
      std::asinh(_tmp148 * (_tmp113 * _tmp116 * _tmp53 + _tmp117 * _tmp119 * _tmp53 +
                            _tmp122 * _tmp123 * _tmp53 + _tmp129 * _tmp130 * _tmp53 +
                            _tmp131 * _tmp135 * _tmp53 - _tmp145 * _tmp62));
  const Scalar _tmp150 = Scalar(1.4083112389913199) * _tmp147;
  const Scalar _tmp151 = Scalar(0.71007031138673404) * _tmp148;
  const Scalar _tmp152 = _tmp112 * _tmp116 + _tmp121 * _tmp123 + _tmp128 * _tmp130 + _tmp146;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (-_tmp110 * _tmp116 * _tmp60 - _tmp117 * _tmp118 - _tmp120 * _tmp123 -
                            _tmp127 * _tmp130 * _tmp60 + _tmp131 * _tmp134 + _tmp145));
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
          (_tmp143 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp142) -
           std::cosh(_tmp143 *
                     (-_tmp142 * _tmp144 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp70 + p_a(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp72 + p_a(1, 0)), Scalar(2))))))) +
      _tmp86 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp150 *
          (_tmp151 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp149) -
           std::cosh(_tmp151 *
                     (-_tmp149 * _tmp150 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp63 + p_b(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp65 + p_b(1, 0)), Scalar(2))))))) +
      _tmp84 + position_vector(2, 0);
  _res(3, 0) =
      _tmp102 -
      _tmp156 * (_tmp155 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp154) -
                 std::cosh(_tmp155 *
                           (-_tmp154 * _tmp156 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp92 + p_d(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp94 + p_d(1, 0)), Scalar(2))))))) +
      position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
