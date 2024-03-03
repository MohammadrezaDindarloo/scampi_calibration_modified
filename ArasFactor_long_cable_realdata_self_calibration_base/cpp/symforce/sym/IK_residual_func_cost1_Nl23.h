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
 * Symbolic function: IK_residual_func_cost1_Nl23
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 484

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (163)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(0.71007031138673404) * _tmp0;
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = 2 * _tmp3 * _tmp4;
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = 2 * _tmp6;
  const Scalar _tmp12 = _tmp11 * _tmp3;
  const Scalar _tmp13 = _tmp4 * _tmp7;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp17 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp10 + _tmp19;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp23 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp11 * _tmp4;
  const Scalar _tmp26 = _tmp3 * _tmp7;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp16 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = _tmp19 + _tmp9;
  const Scalar _tmp39 = Scalar(1.0) * _tmp38;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 = _tmp15 - _tmp18;
  const Scalar _tmp42 = _tmp10 + _tmp41;
  const Scalar _tmp43 = _tmp40 + _tmp42;
  const Scalar _tmp44 = _tmp41 + _tmp9;
  const Scalar _tmp45 = Scalar(1.0) / (_tmp40 + _tmp44);
  const Scalar _tmp46 = -_tmp22;
  const Scalar _tmp47 = _tmp24 + _tmp28;
  const Scalar _tmp48 = _tmp46 + _tmp47;
  const Scalar _tmp49 = _tmp22 + _tmp47;
  const Scalar _tmp50 = Scalar(1.0) * _tmp49;
  const Scalar _tmp51 = _tmp45 * (-_tmp48 + _tmp50);
  const Scalar _tmp52 = _tmp43 * _tmp51;
  const Scalar _tmp53 = _tmp29 + _tmp46;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp50 - _tmp52 - _tmp53);
  const Scalar _tmp55 = _tmp39 * _tmp51 + _tmp50;
  const Scalar _tmp56 = _tmp54 * _tmp55;
  const Scalar _tmp57 = 0;
  const Scalar _tmp58 = -_tmp33;
  const Scalar _tmp59 = _tmp34 + _tmp35;
  const Scalar _tmp60 = _tmp58 + _tmp59;
  const Scalar _tmp61 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 - p_b(0, 0);
  const Scalar _tmp63 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_b(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp68 = _tmp67 - p_c(0, 0);
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 - p_c(1, 0);
  const Scalar _tmp72 = _tmp69 * _tmp71;
  const Scalar _tmp73 = _tmp33 + _tmp59;
  const Scalar _tmp74 = _tmp62 * _tmp65;
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp60 * _tmp66 - _tmp72 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (-_tmp66 + _tmp72 * _tmp74);
  const Scalar _tmp78 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp79 = _tmp78 - p_a(1, 0);
  const Scalar _tmp80 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp81 = _tmp80 - p_a(0, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp79 * _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp82;
  const Scalar _tmp85 = _tmp72 * _tmp84 - _tmp83;
  const Scalar _tmp86 = _tmp77 * _tmp85;
  const Scalar _tmp87 = _tmp72 * _tmp73;
  const Scalar _tmp88 = _tmp36 + _tmp58;
  const Scalar _tmp89 = -_tmp76 * _tmp86 + _tmp83 * _tmp88 - _tmp84 * _tmp87;
  const Scalar _tmp90 = -_tmp60 * _tmp74 + _tmp75;
  const Scalar _tmp91 = -_tmp51 * _tmp89 + _tmp73 * _tmp84 - _tmp84 * _tmp88 - _tmp86 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp89 * _tmp92;
  const Scalar _tmp94 = _tmp40 - _tmp43 * _tmp56 - _tmp57 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) * _tmp45;
  const Scalar _tmp96 = Scalar(1.0) * _tmp54;
  const Scalar _tmp97 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp98 = _tmp43 * _tmp96;
  const Scalar _tmp99 = _tmp31 - p_d(0, 0);
  const Scalar _tmp100 = _tmp21 - p_d(1, 0);
  const Scalar _tmp101 =
      std::pow(Scalar(std::pow(_tmp100, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = _tmp37 * fh1;
  const Scalar _tmp104 = _tmp102 * _tmp103 + Scalar(40.024799999999999) * _tmp27 + _tmp30 * fv1;
  const Scalar _tmp105 = _tmp72 * _tmp77;
  const Scalar _tmp106 = _tmp105 * _tmp76 + _tmp87;
  const Scalar _tmp107 = _tmp105 * _tmp90 - _tmp106 * _tmp51 - _tmp73;
  const Scalar _tmp108 =
      std::sqrt(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))));
  const Scalar _tmp109 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp110 = _tmp108 * _tmp69;
  const Scalar _tmp111 = _tmp110 * (-_tmp109 * _tmp38 * _tmp68 + _tmp109 * _tmp49 * _tmp71);
  const Scalar _tmp112 = _tmp111 * _tmp74 + _tmp44 * _tmp74 - _tmp48 * _tmp66;
  const Scalar _tmp113 = _tmp111 * _tmp84 - _tmp112 * _tmp86 + _tmp42 * _tmp84 - _tmp53 * _tmp83;
  const Scalar _tmp114 = _tmp113 * _tmp92;
  const Scalar _tmp115 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp116 = _tmp115 * _tmp91;
  const Scalar _tmp117 = _tmp116 * (_tmp105 * _tmp112 - _tmp107 * _tmp114 - _tmp111);
  const Scalar _tmp118 = _tmp107 + _tmp117;
  const Scalar _tmp119 = _tmp43 * _tmp54;
  const Scalar _tmp120 = _tmp106 + _tmp117 * _tmp119 - _tmp118 * _tmp93;
  const Scalar _tmp121 = _tmp102 * fh1;
  const Scalar _tmp122 = Scalar(1.0) * _tmp77;
  const Scalar _tmp123 = _tmp122 * _tmp76;
  const Scalar _tmp124 = -_tmp122 * _tmp90 + _tmp123 * _tmp51;
  const Scalar _tmp125 = _tmp116 * (-_tmp112 * _tmp122 - _tmp114 * _tmp124);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = _tmp119 * _tmp125 - _tmp123 - _tmp126 * _tmp93;
  const Scalar _tmp128 = _tmp100 * _tmp101;
  const Scalar _tmp129 = _tmp128 * fh1;
  const Scalar _tmp130 = -_tmp103 * _tmp128 - Scalar(40.024799999999999) * _tmp14 - _tmp20 * fv1;
  const Scalar _tmp131 = _tmp52 * _tmp96 + Scalar(1.0);
  const Scalar _tmp132 = _tmp51 * _tmp96;
  const Scalar _tmp133 = Scalar(1.0) * _tmp115;
  const Scalar _tmp134 = _tmp116 * _tmp98 - _tmp133 * _tmp89;
  const Scalar _tmp135 = _tmp116 * _tmp96;
  const Scalar _tmp136 = fh1 * (-_tmp102 * _tmp20 + _tmp128 * _tmp30);
  const Scalar _tmp137 = _tmp57 * _tmp92;
  const Scalar _tmp138 = _tmp74 * _tmp86;
  const Scalar _tmp139 = _tmp85 * _tmp92;
  const Scalar _tmp140 = -_tmp126 * _tmp139 + Scalar(1.0);
  const Scalar _tmp141 = _tmp74 * _tmp77;
  const Scalar _tmp142 = _tmp84 * _tmp92;
  const Scalar _tmp143 = -_tmp118 * _tmp139 - _tmp72;
  const Scalar _tmp144 =
      -_tmp110 * _tmp121 * (_tmp118 * _tmp142 + _tmp141 * _tmp143 + Scalar(1.0)) -
      _tmp110 * _tmp129 * (_tmp126 * _tmp142 + _tmp140 * _tmp141) -
      _tmp110 * _tmp136 * (-_tmp133 * _tmp138 + _tmp133 * _tmp84) -
      _tmp110 * _tmp97 * (-_tmp137 * _tmp138 + _tmp137 * _tmp84);
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = std::asinh(
      _tmp145 * (Scalar(1.0) * _tmp104 * (_tmp45 * _tmp98 - _tmp96) +
                 Scalar(1.0) * _tmp121 * (_tmp117 * _tmp96 - _tmp120 * _tmp95) +
                 Scalar(1.0) * _tmp129 * (_tmp125 * _tmp96 - _tmp127 * _tmp95) +
                 Scalar(1.0) * _tmp130 * (-_tmp131 * _tmp95 + _tmp132) +
                 Scalar(1.0) * _tmp136 * (-_tmp134 * _tmp95 + _tmp135) +
                 Scalar(1.0) * _tmp97 * (-_tmp55 * _tmp96 - _tmp94 * _tmp95 + Scalar(1.0))));
  const Scalar _tmp147 = Scalar(1.4083112389913199) * _tmp144;
  const Scalar _tmp148 = Scalar(0.71007031138673404) * _tmp145;
  const Scalar _tmp149 = _tmp104 * _tmp96;
  const Scalar _tmp150 = _tmp137 * _tmp97;
  const Scalar _tmp151 = _tmp133 * _tmp136;
  const Scalar _tmp152 =
      _tmp121 * _tmp143 * _tmp77 + _tmp129 * _tmp140 * _tmp77 - _tmp150 * _tmp86 - _tmp151 * _tmp86;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (_tmp120 * _tmp121 * _tmp45 + _tmp127 * _tmp129 * _tmp45 +
                            _tmp130 * _tmp131 * _tmp45 + _tmp134 * _tmp136 * _tmp45 -
                            _tmp149 * _tmp43 * _tmp45 + _tmp45 * _tmp94 * _tmp97));
  const Scalar _tmp155 = Scalar(0.71007031138673404) * _tmp153;
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp152;
  const Scalar _tmp157 = _tmp92 * fh1;
  const Scalar _tmp158 =
      _tmp102 * _tmp118 * _tmp157 + _tmp126 * _tmp128 * _tmp157 + _tmp150 + _tmp151;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = Scalar(0.71007031138673404) * _tmp159;
  const Scalar _tmp161 =
      std::asinh(_tmp159 * (-_tmp117 * _tmp121 * _tmp54 - _tmp125 * _tmp129 * _tmp54 -
                            _tmp130 * _tmp132 - _tmp135 * _tmp136 + _tmp149 + _tmp56 * _tmp97));
  const Scalar _tmp162 = Scalar(1.4083112389913199) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 * (_tmp2 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp1) -
                 std::cosh(_tmp2 *
                           (-_tmp1 * _tmp32 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_d(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp31 + p_d(0, 0)), Scalar(2))))))) +
      _tmp37 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp147 *
          (_tmp148 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp146) -
           std::cosh(_tmp148 *
                     (-_tmp146 * _tmp147 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp67 + p_c(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp70 + p_c(1, 0)), Scalar(2))))))) +
      _tmp73 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp156 *
          (_tmp155 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(_tmp155 *
                     (-_tmp154 * _tmp156 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_b(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp63 + p_b(1, 0)), Scalar(2))))))) +
      _tmp60 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp162 *
          (_tmp160 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp161) -
           std::cosh(_tmp160 *
                     (-_tmp161 * _tmp162 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp78 + p_a(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp80 + p_a(0, 0)), Scalar(2))))))) +
      _tmp88 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
