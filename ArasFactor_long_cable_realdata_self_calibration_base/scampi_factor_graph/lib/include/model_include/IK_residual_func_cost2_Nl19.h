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
 * Symbolic function: IK_residual_func_cost2_Nl19
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 496

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
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
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp23 = _tmp6 * _tmp9;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = std::pow(Scalar(-_tmp18 + p_d(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp29 + p_d(0, 0)), Scalar(2));
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp2;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = -_tmp33;
  const Scalar _tmp39 = _tmp36 + _tmp38;
  const Scalar _tmp40 = -_tmp5;
  const Scalar _tmp41 = _tmp16 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp25 - _tmp26;
  const Scalar _tmp44 = _tmp21 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = std::pow(Scalar(-_tmp42 + p_a(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp45 + p_a(0, 0)), Scalar(2));
  const Scalar _tmp47 = _tmp45 - p_a(0, 0);
  const Scalar _tmp48 = _tmp42 - p_a(1, 0);
  const Scalar _tmp49 =
      std::sqrt(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp52 * (-_tmp41 * _tmp47 * _tmp50 + _tmp44 * _tmp48 * _tmp50);
  const Scalar _tmp54 = _tmp12 + _tmp15;
  const Scalar _tmp55 = _tmp5 + _tmp54;
  const Scalar _tmp56 = _tmp20 + _tmp27;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 - p_c(0, 0);
  const Scalar _tmp59 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_c(1, 0);
  const Scalar _tmp61 = std::pow(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp60, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp58 * _tmp61;
  const Scalar _tmp63 = _tmp60 * _tmp61;
  const Scalar _tmp64 = _tmp53 * _tmp62 + _tmp55 * _tmp62 - _tmp56 * _tmp63;
  const Scalar _tmp65 = _tmp48 * _tmp51;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp62 * _tmp65 - _tmp63);
  const Scalar _tmp67 = _tmp65 * _tmp66;
  const Scalar _tmp68 = _tmp39 * _tmp65;
  const Scalar _tmp69 = _tmp34 + _tmp35;
  const Scalar _tmp70 = _tmp33 + _tmp69;
  const Scalar _tmp71 = -_tmp62 * _tmp68 + _tmp63 * _tmp70;
  const Scalar _tmp72 = _tmp67 * _tmp71 + _tmp68;
  const Scalar _tmp73 = Scalar(1.0) * _tmp41;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp55 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp44;
  const Scalar _tmp77 = -_tmp56 + _tmp76;
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp39 * _tmp62 - _tmp62 * _tmp70;
  const Scalar _tmp80 = -_tmp39 + _tmp67 * _tmp79 - _tmp72 * _tmp78;
  const Scalar _tmp81 = _tmp38 + _tmp69;
  const Scalar _tmp82 = _tmp20 + _tmp43;
  const Scalar _tmp83 = _tmp82 + position_vector(0, 0);
  const Scalar _tmp84 = _tmp83 - p_b(0, 0);
  const Scalar _tmp85 = _tmp40 + _tmp54;
  const Scalar _tmp86 = _tmp85 + position_vector(1, 0);
  const Scalar _tmp87 = _tmp86 - p_b(1, 0);
  const Scalar _tmp88 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp87, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp84 * _tmp88;
  const Scalar _tmp90 = _tmp87 * _tmp88;
  const Scalar _tmp91 = _tmp65 * _tmp89 - _tmp90;
  const Scalar _tmp92 = _tmp66 * _tmp91;
  const Scalar _tmp93 = _tmp39 * _tmp89;
  const Scalar _tmp94 = -_tmp65 * _tmp93 - _tmp71 * _tmp92 + _tmp81 * _tmp90;
  const Scalar _tmp95 = -_tmp78 * _tmp94 - _tmp79 * _tmp92 - _tmp81 * _tmp89 + _tmp93;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp53 * _tmp89 - _tmp64 * _tmp92 - _tmp82 * _tmp90 + _tmp85 * _tmp89;
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (-_tmp53 + _tmp64 * _tmp67 - _tmp80 * _tmp98);
  const Scalar _tmp102 = _tmp101 + _tmp80;
  const Scalar _tmp103 = _tmp89 * _tmp96;
  const Scalar _tmp104 = _tmp91 * _tmp96;
  const Scalar _tmp105 = -_tmp102 * _tmp104 - _tmp65;
  const Scalar _tmp106 = _tmp62 * _tmp66;
  const Scalar _tmp107 = _tmp29 - p_d(0, 0);
  const Scalar _tmp108 = _tmp18 - p_d(1, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp113 = _tmp73 * _tmp78 + _tmp76;
  const Scalar _tmp114 = 0;
  const Scalar _tmp115 = _tmp114 * _tmp96;
  const Scalar _tmp116 = _tmp62 * _tmp92;
  const Scalar _tmp117 = Scalar(1.0) * _tmp99;
  const Scalar _tmp118 = _tmp108 * _tmp109;
  const Scalar _tmp119 = fh1 * (-_tmp110 * _tmp17 + _tmp118 * _tmp28);
  const Scalar _tmp120 = Scalar(1.0) * _tmp66;
  const Scalar _tmp121 = Scalar(1.0) * _tmp75;
  const Scalar _tmp122 = -_tmp120 * _tmp79 + _tmp121 * _tmp66 * _tmp71 * _tmp77;
  const Scalar _tmp123 = _tmp100 * (-_tmp120 * _tmp64 - _tmp122 * _tmp98);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = -_tmp104 * _tmp124 + Scalar(1.0);
  const Scalar _tmp126 = _tmp118 * fh1;
  const Scalar _tmp127 = -_tmp111 * _tmp52 * (_tmp102 * _tmp103 + _tmp105 * _tmp106 + Scalar(1.0)) -
                         _tmp112 * _tmp52 * (-_tmp115 * _tmp116 + _tmp115 * _tmp89) -
                         _tmp119 * _tmp52 * (-_tmp116 * _tmp117 + _tmp117 * _tmp89) -
                         _tmp126 * _tmp52 * (_tmp103 * _tmp124 + _tmp106 * _tmp125);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp37 * fh1;
  const Scalar _tmp130 = -Scalar(40.024799999999999) * _tmp11 - _tmp118 * _tmp129 - _tmp17 * fv1;
  const Scalar _tmp131 = _tmp74 + _tmp85;
  const Scalar _tmp132 = _tmp131 * _tmp78;
  const Scalar _tmp133 = Scalar(1.0) / (-_tmp132 + _tmp76 - _tmp82);
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp132 * _tmp134 + Scalar(1.0);
  const Scalar _tmp136 = _tmp134 * _tmp78;
  const Scalar _tmp137 = _tmp100 * _tmp134;
  const Scalar _tmp138 = -_tmp117 * _tmp94 + _tmp131 * _tmp137;
  const Scalar _tmp139 = _tmp131 * _tmp133;
  const Scalar _tmp140 = _tmp94 * _tmp96;
  const Scalar _tmp141 = -_tmp120 * _tmp71 + _tmp123 * _tmp139 - _tmp124 * _tmp140;
  const Scalar _tmp142 = _tmp101 * _tmp139 - _tmp102 * _tmp140 + _tmp72;
  const Scalar _tmp143 = _tmp131 * _tmp75;
  const Scalar _tmp144 = _tmp110 * _tmp129 + Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp145 = _tmp113 * _tmp133;
  const Scalar _tmp146 = -_tmp114 * _tmp140 - _tmp131 * _tmp145 + _tmp74;
  const Scalar _tmp147 = std::asinh(
      _tmp128 * (Scalar(1.0) * _tmp111 * (_tmp101 * _tmp134 - _tmp121 * _tmp142) +
                 Scalar(1.0) * _tmp112 * (-_tmp113 * _tmp134 - _tmp121 * _tmp146 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp119 * (-_tmp121 * _tmp138 + _tmp137) +
                 Scalar(1.0) * _tmp126 * (-_tmp121 * _tmp141 + _tmp123 * _tmp134) +
                 Scalar(1.0) * _tmp130 * (-_tmp121 * _tmp135 + _tmp136) +
                 Scalar(1.0) * _tmp144 * (_tmp134 * _tmp143 - _tmp134)));
  const Scalar _tmp148 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp149 = std::pow(Scalar(-_tmp57 + p_c(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp59 + p_c(1, 0)), Scalar(2));
  const Scalar _tmp150 = _tmp117 * _tmp119;
  const Scalar _tmp151 = _tmp112 * _tmp115;
  const Scalar _tmp152 =
      _tmp105 * _tmp111 * _tmp66 + _tmp125 * _tmp126 * _tmp66 - _tmp150 * _tmp92 - _tmp151 * _tmp92;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = _tmp134 * _tmp144;
  const Scalar _tmp155 =
      std::asinh(_tmp153 * (_tmp111 * _tmp142 * _tmp75 + _tmp112 * _tmp146 * _tmp75 +
                            _tmp119 * _tmp138 * _tmp75 + _tmp126 * _tmp141 * _tmp75 +
                            _tmp130 * _tmp135 * _tmp75 - _tmp143 * _tmp154));
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp152;
  const Scalar _tmp157 =
      _tmp102 * _tmp111 * _tmp96 + _tmp124 * _tmp126 * _tmp96 + _tmp150 + _tmp151;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 =
      std::asinh(_tmp158 * (-_tmp101 * _tmp111 * _tmp133 + _tmp112 * _tmp145 - _tmp119 * _tmp137 -
                            _tmp123 * _tmp126 * _tmp133 - _tmp130 * _tmp136 + _tmp154));
  const Scalar _tmp160 = Scalar(1.4083112389913199) * _tmp157;
  const Scalar _tmp161 = std::pow(Scalar(-_tmp83 + p_b(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp86 + p_b(1, 0)), Scalar(2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 *
          (-std::sinh(Scalar(1.0) * _tmp31) - std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                                                        (-std::sqrt(_tmp30) - _tmp31 * _tmp32))) -
      std::sqrt(Scalar(_tmp30 +
                       std::pow(Scalar(-_tmp37 + p_d(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(1, 0) =
      _tmp148 * (-std::sinh(Scalar(1.0) * _tmp147) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp128 *
                           (-_tmp147 * _tmp148 - std::sqrt(_tmp46)))) -
      std::sqrt(Scalar(_tmp46 +
                       std::pow(Scalar(-_tmp39 + p_a(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(2, 0) =
      _tmp156 * (-std::sinh(Scalar(1.0) * _tmp155) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp153 *
                           (-std::sqrt(_tmp149) - _tmp155 * _tmp156))) -
      std::sqrt(Scalar(_tmp149 +
                       std::pow(Scalar(-_tmp70 + p_c(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(3, 0) =
      _tmp160 * (-std::sinh(Scalar(1.0) * _tmp159) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp158 *
                           (-_tmp159 * _tmp160 - std::sqrt(_tmp161)))) -
      std::sqrt(Scalar(_tmp161 +
                       std::pow(Scalar(-_tmp81 + p_b(2, 0) - position_vector(2, 0)), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
