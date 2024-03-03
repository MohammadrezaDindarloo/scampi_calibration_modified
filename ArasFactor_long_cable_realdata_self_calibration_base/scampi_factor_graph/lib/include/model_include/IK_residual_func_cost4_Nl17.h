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
 * Symbolic function: IK_residual_func_cost4_Nl17
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4Nl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 477

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (156)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp3 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp1 * _tmp9;
  const Scalar _tmp11 = -_tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp1 * _tmp7;
  const Scalar _tmp14 = _tmp3 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp22 = _tmp6 * _tmp9;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp31 = -_tmp20;
  const Scalar _tmp32 = _tmp26 + _tmp31;
  const Scalar _tmp33 = Scalar(1.0) * _tmp32;
  const Scalar _tmp34 = _tmp24 - _tmp25;
  const Scalar _tmp35 = _tmp20 + _tmp34;
  const Scalar _tmp36 = _tmp12 - _tmp15;
  const Scalar _tmp37 = _tmp36 + _tmp5;
  const Scalar _tmp38 = Scalar(1.0) * _tmp37;
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = -_tmp5;
  const Scalar _tmp41 = _tmp16 + _tmp40;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp39 + _tmp41);
  const Scalar _tmp43 = _tmp42 * (_tmp33 - _tmp35);
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp47 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp48 = _tmp46 + _tmp47;
  const Scalar _tmp49 = _tmp45 + _tmp48;
  const Scalar _tmp50 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 - p_b(1, 0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_d(0, 0);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = _tmp37 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_d(1, 0);
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp46 - _tmp47;
  const Scalar _tmp63 = _tmp44 + _tmp62;
  const Scalar _tmp64 = _tmp51 * _tmp54;
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) / (-_tmp55 + _tmp61 * _tmp64);
  const Scalar _tmp67 = _tmp66 * (_tmp49 * _tmp55 - _tmp61 * _tmp65);
  const Scalar _tmp68 = Scalar(1.0) * _tmp67;
  const Scalar _tmp69 = -_tmp49 * _tmp64 + _tmp65;
  const Scalar _tmp70 = Scalar(1.0) * _tmp66;
  const Scalar _tmp71 = _tmp43 * _tmp68 - _tmp69 * _tmp70;
  const Scalar _tmp72 = _tmp45 + _tmp62;
  const Scalar _tmp73 = _tmp31 + _tmp34;
  const Scalar _tmp74 = _tmp73 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 - p_a(0, 0);
  const Scalar _tmp76 = _tmp36 + _tmp40;
  const Scalar _tmp77 = _tmp76 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 - p_a(1, 0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp75 * _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp79;
  const Scalar _tmp82 = _tmp61 * _tmp80 - _tmp81;
  const Scalar _tmp83 = _tmp63 * _tmp80;
  const Scalar _tmp84 = -_tmp61 * _tmp83 - _tmp67 * _tmp82 + _tmp72 * _tmp81;
  const Scalar _tmp85 = _tmp66 * _tmp82;
  const Scalar _tmp86 = -_tmp43 * _tmp84 - _tmp69 * _tmp85 - _tmp72 * _tmp80 + _tmp83;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp58 * _tmp88;
  const Scalar _tmp91 = _tmp90 * (_tmp32 * _tmp60 * _tmp89 - _tmp37 * _tmp57 * _tmp89);
  const Scalar _tmp92 = -_tmp35 * _tmp55 + _tmp41 * _tmp64 + _tmp64 * _tmp91;
  const Scalar _tmp93 = -_tmp73 * _tmp81 + _tmp76 * _tmp80 + _tmp80 * _tmp91 - _tmp85 * _tmp92;
  const Scalar _tmp94 = _tmp87 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp96 = _tmp86 * _tmp95;
  const Scalar _tmp97 = _tmp96 * (-_tmp70 * _tmp92 - _tmp71 * _tmp94);
  const Scalar _tmp98 = _tmp71 + _tmp97;
  const Scalar _tmp99 = _tmp82 * _tmp87;
  const Scalar _tmp100 = -_tmp98 * _tmp99 + Scalar(1.0);
  const Scalar _tmp101 = _tmp64 * _tmp66;
  const Scalar _tmp102 = _tmp80 * _tmp87;
  const Scalar _tmp103 = _tmp18 - p_c(1, 0);
  const Scalar _tmp104 = _tmp28 - p_c(0, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp106 * fh1;
  const Scalar _tmp108 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp109 = _tmp33 + _tmp38 * _tmp43;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = _tmp110 * _tmp99;
  const Scalar _tmp112 = _tmp110 * _tmp87;
  const Scalar _tmp113 = _tmp61 * _tmp66;
  const Scalar _tmp114 = _tmp61 * _tmp63 + _tmp61 * _tmp67;
  const Scalar _tmp115 = _tmp113 * _tmp69 - _tmp114 * _tmp43 - _tmp63;
  const Scalar _tmp116 = _tmp96 * (_tmp113 * _tmp92 - _tmp115 * _tmp94 - _tmp91);
  const Scalar _tmp117 = _tmp115 + _tmp116;
  const Scalar _tmp118 = -_tmp117 * _tmp99 - _tmp61;
  const Scalar _tmp119 = _tmp104 * _tmp105;
  const Scalar _tmp120 = _tmp119 * fh1;
  const Scalar _tmp121 = Scalar(1.0) * _tmp95;
  const Scalar _tmp122 = fh1 * (_tmp106 * _tmp27 - _tmp119 * _tmp17);
  const Scalar _tmp123 = -_tmp107 * _tmp90 * (_tmp100 * _tmp101 + _tmp102 * _tmp98) -
                         _tmp108 * _tmp90 * (-_tmp101 * _tmp111 + _tmp112 * _tmp80) -
                         _tmp120 * _tmp90 * (_tmp101 * _tmp118 + _tmp102 * _tmp117 + Scalar(1.0)) -
                         _tmp122 * _tmp90 * (-_tmp121 * _tmp64 * _tmp85 + _tmp121 * _tmp80);
  const Scalar _tmp124 = Scalar(1.0) / (_tmp123);
  const Scalar _tmp125 = _tmp39 + _tmp76;
  const Scalar _tmp126 = _tmp125 * _tmp43;
  const Scalar _tmp127 = Scalar(1.0) / (-_tmp126 + _tmp33 - _tmp73);
  const Scalar _tmp128 = Scalar(1.0) * _tmp127;
  const Scalar _tmp129 = _tmp84 * _tmp87;
  const Scalar _tmp130 = _tmp125 * _tmp127;
  const Scalar _tmp131 = -_tmp129 * _tmp98 + _tmp130 * _tmp97 - _tmp68;
  const Scalar _tmp132 = Scalar(1.0) * _tmp42;
  const Scalar _tmp133 = _tmp128 * _tmp96;
  const Scalar _tmp134 = -_tmp121 * _tmp84 + _tmp125 * _tmp133;
  const Scalar _tmp135 = _tmp109 * _tmp127;
  const Scalar _tmp136 = -_tmp110 * _tmp129 - _tmp125 * _tmp135 + _tmp39;
  const Scalar _tmp137 = _tmp114 + _tmp116 * _tmp130 - _tmp117 * _tmp129;
  const Scalar _tmp138 = fh1 * (_tmp44 + _tmp48);
  const Scalar _tmp139 = -_tmp106 * _tmp138 - Scalar(40.024799999999999) * _tmp11 - _tmp17 * fv1;
  const Scalar _tmp140 = _tmp126 * _tmp128 + Scalar(1.0);
  const Scalar _tmp141 = _tmp128 * _tmp43;
  const Scalar _tmp142 = _tmp119 * _tmp138 + Scalar(40.024799999999999) * _tmp23 + _tmp27 * fv1;
  const Scalar _tmp143 = _tmp125 * _tmp42;
  const Scalar _tmp144 = std::asinh(
      _tmp124 * (Scalar(1.0) * _tmp107 * (_tmp128 * _tmp97 - _tmp131 * _tmp132) +
                 Scalar(1.0) * _tmp108 * (-_tmp109 * _tmp128 - _tmp132 * _tmp136 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp120 * (_tmp116 * _tmp128 - _tmp132 * _tmp137) +
                 Scalar(1.0) * _tmp122 * (-_tmp132 * _tmp134 + _tmp133) +
                 Scalar(1.0) * _tmp139 * (-_tmp132 * _tmp140 + _tmp141) +
                 Scalar(1.0) * _tmp142 * (_tmp128 * _tmp143 - _tmp128)));
  const Scalar _tmp145 = Scalar(1.4083112389913199) * _tmp123;
  const Scalar _tmp146 = _tmp128 * _tmp142;
  const Scalar _tmp147 = _tmp121 * _tmp122;
  const Scalar _tmp148 = _tmp100 * _tmp107 * _tmp66 - _tmp108 * _tmp111 * _tmp66 +
                         _tmp118 * _tmp120 * _tmp66 - _tmp147 * _tmp85;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 =
      std::asinh(_tmp149 * (_tmp107 * _tmp131 * _tmp42 + _tmp108 * _tmp136 * _tmp42 +
                            _tmp120 * _tmp137 * _tmp42 + _tmp122 * _tmp134 * _tmp42 +
                            _tmp139 * _tmp140 * _tmp42 - _tmp143 * _tmp146));
  const Scalar _tmp151 = Scalar(1.4083112389913199) * _tmp148;
  const Scalar _tmp152 =
      _tmp107 * _tmp87 * _tmp98 + _tmp108 * _tmp112 + _tmp117 * _tmp120 * _tmp87 + _tmp147;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp153 * (-_tmp107 * _tmp127 * _tmp97 + _tmp108 * _tmp135 -
                                               _tmp116 * _tmp120 * _tmp127 - _tmp122 * _tmp133 -
                                               _tmp139 * _tmp141 + _tmp146));
  const Scalar _tmp155 = Scalar(1.4083112389913199) * _tmp152;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp30 * (-std::sinh(Scalar(1.0) * _tmp29) -
                std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                          (-_tmp29 * _tmp30 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_c(0, 0)), Scalar(2))))))) -
      encoder(0, 0);
  _res(1, 0) =
      _tmp145 * (-std::sinh(Scalar(1.0) * _tmp144) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp124 *
                           (-_tmp144 * _tmp145 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp56 + p_d(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp59 + p_d(1, 0)), Scalar(2))))))) -
      encoder(1, 0);
  _res(2, 0) =
      _tmp151 * (-std::sinh(Scalar(1.0) * _tmp150) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp149 *
                           (-_tmp150 * _tmp151 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp52 + p_b(1, 0)), Scalar(2))))))) -
      encoder(2, 0);
  _res(3, 0) =
      _tmp155 * (-std::sinh(Scalar(1.0) * _tmp154) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp153 *
                           (-_tmp154 * _tmp155 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp74 + p_a(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp77 + p_a(1, 0)), Scalar(2))))))) -
      encoder(3, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
