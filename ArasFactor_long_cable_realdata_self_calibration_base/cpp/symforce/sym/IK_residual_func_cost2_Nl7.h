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
 * Symbolic function: IK_residual_func_cost2_Nl7
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 499

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (161)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp1 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = 2 * _tmp4;
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp2 * _tmp5;
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp2 * _tmp8;
  const Scalar _tmp22 = _tmp1 * _tmp5;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = std::pow(Scalar(-_tmp18 + p_b(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp28 + p_b(0, 0)), Scalar(2));
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp35 = _tmp33 - _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = -_tmp32;
  const Scalar _tmp38 = _tmp35 + _tmp37;
  const Scalar _tmp39 = -_tmp7;
  const Scalar _tmp40 = _tmp16 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = -_tmp20;
  const Scalar _tmp43 = _tmp26 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = std::pow(Scalar(-_tmp41 + p_a(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp44 + p_a(0, 0)), Scalar(2));
  const Scalar _tmp46 = _tmp24 + _tmp25;
  const Scalar _tmp47 = _tmp42 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_d(0, 0);
  const Scalar _tmp50 = _tmp12 + _tmp15;
  const Scalar _tmp51 = _tmp39 + _tmp50;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 - p_d(1, 0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp44 - p_a(0, 0);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = _tmp41 - p_a(1, 0);
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = _tmp49 * _tmp54;
  const Scalar _tmp61 = Scalar(1.0) / (-_tmp55 + _tmp59 * _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp43;
  const Scalar _tmp63 = -_tmp47 + _tmp62;
  const Scalar _tmp64 = _tmp33 + _tmp34;
  const Scalar _tmp65 = _tmp37 + _tmp64;
  const Scalar _tmp66 = _tmp38 * _tmp60;
  const Scalar _tmp67 = _tmp55 * _tmp65 - _tmp59 * _tmp66;
  const Scalar _tmp68 = Scalar(1.0) * _tmp40;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp51 + _tmp69);
  const Scalar _tmp71 = Scalar(1.0) * _tmp70;
  const Scalar _tmp72 = -_tmp60 * _tmp65 + _tmp66;
  const Scalar _tmp73 = Scalar(1.0) * _tmp61;
  const Scalar _tmp74 = _tmp61 * _tmp63 * _tmp67 * _tmp71 - _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp20 + _tmp46;
  const Scalar _tmp76 = _tmp75 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_c(0, 0);
  const Scalar _tmp78 = _tmp50 + _tmp7;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_c(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp77 * _tmp81;
  const Scalar _tmp83 = _tmp32 + _tmp64;
  const Scalar _tmp84 = _tmp80 * _tmp81;
  const Scalar _tmp85 = _tmp38 * _tmp59;
  const Scalar _tmp86 = _tmp59 * _tmp82 - _tmp84;
  const Scalar _tmp87 = _tmp61 * _tmp86;
  const Scalar _tmp88 = -_tmp67 * _tmp87 - _tmp82 * _tmp85 + _tmp83 * _tmp84;
  const Scalar _tmp89 = _tmp63 * _tmp70;
  const Scalar _tmp90 = _tmp38 * _tmp82 - _tmp72 * _tmp87 - _tmp82 * _tmp83 - _tmp88 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp58, Scalar(2))));
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp57 * _tmp92;
  const Scalar _tmp95 = _tmp94 * (-_tmp40 * _tmp56 * _tmp93 + _tmp43 * _tmp58 * _tmp93);
  const Scalar _tmp96 = -_tmp47 * _tmp55 + _tmp51 * _tmp60 + _tmp60 * _tmp95;
  const Scalar _tmp97 = -_tmp75 * _tmp84 + _tmp78 * _tmp82 + _tmp82 * _tmp95 - _tmp87 * _tmp96;
  const Scalar _tmp98 = _tmp91 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp90 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (-_tmp73 * _tmp96 - _tmp74 * _tmp98);
  const Scalar _tmp102 = _tmp101 + _tmp74;
  const Scalar _tmp103 = _tmp86 * _tmp91;
  const Scalar _tmp104 = -_tmp102 * _tmp103 + Scalar(1.0);
  const Scalar _tmp105 = _tmp60 * _tmp61;
  const Scalar _tmp106 = _tmp82 * _tmp91;
  const Scalar _tmp107 = _tmp28 - p_b(0, 0);
  const Scalar _tmp108 = _tmp18 - p_b(1, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = _tmp73 * _tmp86 * _tmp99;
  const Scalar _tmp113 = Scalar(1.0) * _tmp99;
  const Scalar _tmp114 = _tmp107 * _tmp109;
  const Scalar _tmp115 = fh1 * (_tmp110 * _tmp27 - _tmp114 * _tmp17);
  const Scalar _tmp116 = _tmp59 * _tmp61;
  const Scalar _tmp117 = _tmp116 * _tmp67 + _tmp85;
  const Scalar _tmp118 = _tmp116 * _tmp72 - _tmp117 * _tmp89 - _tmp38;
  const Scalar _tmp119 = _tmp100 * (_tmp116 * _tmp96 - _tmp118 * _tmp98 - _tmp95);
  const Scalar _tmp120 = _tmp118 + _tmp119;
  const Scalar _tmp121 = -_tmp103 * _tmp120 - _tmp59;
  const Scalar _tmp122 = _tmp114 * fh1;
  const Scalar _tmp123 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp124 = _tmp62 + _tmp68 * _tmp89;
  const Scalar _tmp125 = 0;
  const Scalar _tmp126 = _tmp125 * _tmp91;
  const Scalar _tmp127 = -_tmp111 * _tmp94 * (_tmp102 * _tmp106 + _tmp104 * _tmp105) -
                         _tmp115 * _tmp94 * (-_tmp112 * _tmp60 + _tmp113 * _tmp82) -
                         _tmp122 * _tmp94 * (_tmp105 * _tmp121 + _tmp106 * _tmp120 + Scalar(1.0)) -
                         _tmp123 * _tmp94 * (-_tmp126 * _tmp60 * _tmp87 + _tmp126 * _tmp82);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp69 + _tmp78;
  const Scalar _tmp130 = _tmp129 * _tmp89;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 + _tmp62 - _tmp75);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp131;
  const Scalar _tmp134 = _tmp88 * _tmp91;
  const Scalar _tmp135 = _tmp101 * _tmp133 - _tmp102 * _tmp134 - _tmp67 * _tmp73;
  const Scalar _tmp136 = _tmp129 * _tmp70;
  const Scalar _tmp137 = _tmp36 * fh1;
  const Scalar _tmp138 = _tmp114 * _tmp137 + Scalar(40.024799999999999) * _tmp23 + _tmp27 * fv1;
  const Scalar _tmp139 = _tmp100 * _tmp132;
  const Scalar _tmp140 = -_tmp113 * _tmp88 + _tmp129 * _tmp139;
  const Scalar _tmp141 = _tmp124 * _tmp131;
  const Scalar _tmp142 = -_tmp125 * _tmp134 - _tmp129 * _tmp141 + _tmp69;
  const Scalar _tmp143 = -Scalar(40.024799999999999) * _tmp11 - _tmp110 * _tmp137 - _tmp17 * fv1;
  const Scalar _tmp144 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp145 = _tmp117 + _tmp119 * _tmp133 - _tmp120 * _tmp134;
  const Scalar _tmp146 = std::asinh(
      _tmp128 * (Scalar(1.0) * _tmp111 * (_tmp101 * _tmp132 - _tmp135 * _tmp71) +
                 Scalar(1.0) * _tmp115 * (_tmp139 - _tmp140 * _tmp71) +
                 Scalar(1.0) * _tmp122 * (_tmp119 * _tmp132 - _tmp145 * _tmp71) +
                 Scalar(1.0) * _tmp123 * (-_tmp124 * _tmp132 - _tmp142 * _tmp71 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp138 * (_tmp132 * _tmp136 - _tmp132) +
                 Scalar(1.0) * _tmp143 * (_tmp132 * _tmp89 - _tmp144 * _tmp71)));
  const Scalar _tmp147 = Scalar(1.4083112389913199) * _tmp127;
  const Scalar _tmp148 = _tmp123 * _tmp126;
  const Scalar _tmp149 = _tmp104 * _tmp111 * _tmp61 - _tmp112 * _tmp115 +
                         _tmp121 * _tmp122 * _tmp61 - _tmp148 * _tmp87;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = _tmp143 * _tmp70;
  const Scalar _tmp152 = _tmp132 * _tmp138;
  const Scalar _tmp153 =
      std::asinh(_tmp150 * (_tmp111 * _tmp135 * _tmp70 + _tmp115 * _tmp140 * _tmp70 +
                            _tmp122 * _tmp145 * _tmp70 + _tmp123 * _tmp142 * _tmp70 -
                            _tmp136 * _tmp152 + _tmp144 * _tmp151));
  const Scalar _tmp154 = Scalar(1.4083112389913199) * _tmp149;
  const Scalar _tmp155 = std::pow(Scalar(-_tmp48 + p_d(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp52 + p_d(1, 0)), Scalar(2));
  const Scalar _tmp156 =
      _tmp102 * _tmp111 * _tmp91 + _tmp113 * _tmp115 + _tmp120 * _tmp122 * _tmp91 + _tmp148;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp157 * (-_tmp101 * _tmp111 * _tmp131 - _tmp115 * _tmp139 -
                                               _tmp119 * _tmp122 * _tmp131 + _tmp123 * _tmp141 -
                                               _tmp132 * _tmp151 * _tmp63 + _tmp152));
  const Scalar _tmp159 = Scalar(1.4083112389913199) * _tmp156;
  const Scalar _tmp160 = std::pow(Scalar(-_tmp76 + p_c(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp79 + p_c(1, 0)), Scalar(2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 *
          (-std::sinh(Scalar(1.0) * _tmp30) - std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                                                        (-std::sqrt(_tmp29) - _tmp30 * _tmp31))) -
      std::sqrt(Scalar(_tmp29 +
                       std::pow(Scalar(-_tmp36 + p_b(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(1, 0) =
      _tmp147 * (-std::sinh(Scalar(1.0) * _tmp146) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp128 *
                           (-_tmp146 * _tmp147 - std::sqrt(_tmp45)))) -
      std::sqrt(Scalar(_tmp45 +
                       std::pow(Scalar(-_tmp38 + p_a(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(2, 0) =
      _tmp154 * (-std::sinh(Scalar(1.0) * _tmp153) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp150 *
                           (-_tmp153 * _tmp154 - std::sqrt(_tmp155)))) -
      std::sqrt(Scalar(_tmp155 +
                       std::pow(Scalar(-_tmp65 + p_d(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(3, 0) =
      _tmp159 * (-std::sinh(Scalar(1.0) * _tmp158) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp157 *
                           (-_tmp158 * _tmp159 - std::sqrt(_tmp160)))) -
      std::sqrt(Scalar(_tmp160 +
                       std::pow(Scalar(-_tmp83 + p_c(2, 0) - position_vector(2, 0)), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
