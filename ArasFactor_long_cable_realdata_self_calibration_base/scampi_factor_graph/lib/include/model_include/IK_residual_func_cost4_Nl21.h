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
 * Symbolic function: IK_residual_func_cost4_Nl21
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4Nl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 475

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (157)
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
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
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
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp32 = _tmp12 + _tmp15;
  const Scalar _tmp33 = _tmp32 + _tmp5;
  const Scalar _tmp34 = _tmp20 + _tmp27;
  const Scalar _tmp35 = _tmp34 + position_vector(0, 0);
  const Scalar _tmp36 = _tmp35 - p_c(0, 0);
  const Scalar _tmp37 = _tmp33 + position_vector(1, 0);
  const Scalar _tmp38 = _tmp37 - p_c(1, 0);
  const Scalar _tmp39 = std::pow(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp38, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp36 * _tmp39;
  const Scalar _tmp41 = _tmp38 * _tmp39;
  const Scalar _tmp42 = _tmp25 - _tmp26;
  const Scalar _tmp43 = _tmp20 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 - p_b(0, 0);
  const Scalar _tmp46 = -_tmp5;
  const Scalar _tmp47 = _tmp32 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_b(1, 0);
  const Scalar _tmp50 =
      std::sqrt(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp51 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp53 = _tmp50 * _tmp52;
  const Scalar _tmp54 = _tmp53 * (_tmp43 * _tmp49 * _tmp51 - _tmp45 * _tmp47 * _tmp51);
  const Scalar _tmp55 = _tmp33 * _tmp40 - _tmp34 * _tmp41 + _tmp40 * _tmp54;
  const Scalar _tmp56 = _tmp49 * _tmp52;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp40 * _tmp56 - _tmp41);
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp60 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp62 = _tmp60 + _tmp61;
  const Scalar _tmp63 = _tmp59 + _tmp62;
  const Scalar _tmp64 = _tmp60 - _tmp61;
  const Scalar _tmp65 = _tmp59 + _tmp64;
  const Scalar _tmp66 = _tmp40 * _tmp65;
  const Scalar _tmp67 = _tmp57 * (-_tmp40 * _tmp63 + _tmp66);
  const Scalar _tmp68 = Scalar(1.0) * _tmp47;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp33 + _tmp69);
  const Scalar _tmp71 = Scalar(1.0) * _tmp43;
  const Scalar _tmp72 = _tmp70 * (-_tmp34 + _tmp71);
  const Scalar _tmp73 = _tmp41 * _tmp63 - _tmp56 * _tmp66;
  const Scalar _tmp74 = _tmp58 * _tmp73;
  const Scalar _tmp75 = -Scalar(1.0) * _tmp67 + _tmp72 * _tmp74;
  const Scalar _tmp76 = -_tmp59;
  const Scalar _tmp77 = _tmp64 + _tmp76;
  const Scalar _tmp78 = _tmp21 + _tmp42;
  const Scalar _tmp79 = _tmp78 + position_vector(0, 0);
  const Scalar _tmp80 = _tmp79 - p_a(0, 0);
  const Scalar _tmp81 = _tmp16 + _tmp46;
  const Scalar _tmp82 = _tmp81 + position_vector(1, 0);
  const Scalar _tmp83 = _tmp82 - p_a(1, 0);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp80 * _tmp84;
  const Scalar _tmp86 = _tmp83 * _tmp84;
  const Scalar _tmp87 = _tmp56 * _tmp85 - _tmp86;
  const Scalar _tmp88 = _tmp57 * _tmp87;
  const Scalar _tmp89 = _tmp65 * _tmp85;
  const Scalar _tmp90 = -_tmp56 * _tmp89 - _tmp73 * _tmp88 + _tmp77 * _tmp86;
  const Scalar _tmp91 = -_tmp67 * _tmp87 - _tmp72 * _tmp90 - _tmp77 * _tmp85 + _tmp89;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp54 * _tmp85 - _tmp55 * _tmp88 - _tmp78 * _tmp86 + _tmp81 * _tmp85;
  const Scalar _tmp94 = _tmp92 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp96 = _tmp91 * _tmp95;
  const Scalar _tmp97 = _tmp96 * (-_tmp55 * _tmp58 - _tmp75 * _tmp94);
  const Scalar _tmp98 = _tmp75 + _tmp97;
  const Scalar _tmp99 = _tmp87 * _tmp92;
  const Scalar _tmp100 = -_tmp98 * _tmp99 + Scalar(1.0);
  const Scalar _tmp101 = _tmp40 * _tmp57;
  const Scalar _tmp102 = _tmp85 * _tmp92;
  const Scalar _tmp103 = _tmp29 - p_d(0, 0);
  const Scalar _tmp104 = _tmp18 - p_d(1, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = _tmp106 * fh1;
  const Scalar _tmp108 = Scalar(1.0) * _tmp95;
  const Scalar _tmp109 = _tmp40 * _tmp88;
  const Scalar _tmp110 = _tmp103 * _tmp105;
  const Scalar _tmp111 = fh1 * (_tmp106 * _tmp28 - _tmp110 * _tmp17);
  const Scalar _tmp112 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp113 = _tmp68 * _tmp72 + _tmp71;
  const Scalar _tmp114 = 0;
  const Scalar _tmp115 = _tmp56 * _tmp57;
  const Scalar _tmp116 = _tmp115 * _tmp73 + _tmp56 * _tmp65;
  const Scalar _tmp117 = -_tmp116 * _tmp72 + _tmp56 * _tmp67 - _tmp65;
  const Scalar _tmp118 = _tmp96 * (_tmp115 * _tmp55 - _tmp117 * _tmp94 - _tmp54);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = -_tmp119 * _tmp99 - _tmp56;
  const Scalar _tmp121 = _tmp110 * fh1;
  const Scalar _tmp122 = -_tmp107 * _tmp53 * (_tmp100 * _tmp101 + _tmp102 * _tmp98) -
                         _tmp111 * _tmp53 * (-_tmp108 * _tmp109 + _tmp108 * _tmp85) -
                         _tmp112 * _tmp53 * (-_tmp109 * _tmp114 + _tmp114 * _tmp85) -
                         _tmp121 * _tmp53 * (_tmp101 * _tmp120 + _tmp102 * _tmp119 + Scalar(1.0));
  const Scalar _tmp123 = Scalar(1.0) / (_tmp122);
  const Scalar _tmp124 = _tmp69 + _tmp81;
  const Scalar _tmp125 = _tmp124 * _tmp72;
  const Scalar _tmp126 = Scalar(1.0) / (-_tmp125 + _tmp71 - _tmp78);
  const Scalar _tmp127 = Scalar(1.0) * _tmp126;
  const Scalar _tmp128 = _tmp124 * _tmp70;
  const Scalar _tmp129 = fh1 * (_tmp62 + _tmp76);
  const Scalar _tmp130 = _tmp110 * _tmp129 + Scalar(40.024799999999999) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp131 = _tmp113 * _tmp126;
  const Scalar _tmp132 = -_tmp114 * _tmp90 - _tmp124 * _tmp131 + _tmp69;
  const Scalar _tmp133 = Scalar(1.0) * _tmp70;
  const Scalar _tmp134 = _tmp127 * _tmp96;
  const Scalar _tmp135 = -_tmp108 * _tmp90 + _tmp124 * _tmp134;
  const Scalar _tmp136 = _tmp124 * _tmp126;
  const Scalar _tmp137 = _tmp90 * _tmp92;
  const Scalar _tmp138 = _tmp116 + _tmp118 * _tmp136 - _tmp119 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * fh1;
  const Scalar _tmp140 = _tmp136 * _tmp97 - _tmp137 * _tmp98 - _tmp74;
  const Scalar _tmp141 = -_tmp106 * _tmp129 - Scalar(40.024799999999999) * _tmp11 - _tmp17 * fv1;
  const Scalar _tmp142 = _tmp127 * _tmp72;
  const Scalar _tmp143 = _tmp125 * _tmp127 + Scalar(1.0);
  const Scalar _tmp144 = std::asinh(
      _tmp123 * (_tmp106 * _tmp139 * (_tmp127 * _tmp97 - _tmp133 * _tmp140) +
                 _tmp110 * _tmp139 * (_tmp118 * _tmp127 - _tmp133 * _tmp138) +
                 Scalar(1.0) * _tmp111 * (-_tmp133 * _tmp135 + _tmp134) +
                 Scalar(1.0) * _tmp112 * (-_tmp113 * _tmp127 - _tmp132 * _tmp133 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp130 * (_tmp127 * _tmp128 - _tmp127) +
                 Scalar(1.0) * _tmp141 * (-_tmp133 * _tmp143 + _tmp142)));
  const Scalar _tmp145 = Scalar(1.4083112389913199) * _tmp122;
  const Scalar _tmp146 = _tmp112 * _tmp114;
  const Scalar _tmp147 = _tmp108 * _tmp111;
  const Scalar _tmp148 =
      _tmp100 * _tmp107 * _tmp57 + _tmp120 * _tmp121 * _tmp57 - _tmp146 * _tmp88 - _tmp147 * _tmp88;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = _tmp127 * _tmp130;
  const Scalar _tmp151 =
      std::asinh(_tmp149 * (_tmp107 * _tmp140 * _tmp70 + _tmp111 * _tmp135 * _tmp70 +
                            _tmp112 * _tmp132 * _tmp70 + _tmp121 * _tmp138 * _tmp70 -
                            _tmp128 * _tmp150 + _tmp141 * _tmp143 * _tmp70));
  const Scalar _tmp152 = Scalar(1.4083112389913199) * _tmp148;
  const Scalar _tmp153 = _tmp107 * _tmp92 * _tmp98 + _tmp119 * _tmp121 * _tmp92 + _tmp146 + _tmp147;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 =
      std::asinh(_tmp154 * (-_tmp107 * _tmp126 * _tmp97 - _tmp111 * _tmp134 + _tmp112 * _tmp131 -
                            _tmp118 * _tmp121 * _tmp126 - _tmp141 * _tmp142 + _tmp150));
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp153;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 * (-std::sinh(Scalar(1.0) * _tmp30) -
                std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                          (-_tmp30 * _tmp31 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp29 + p_d(0, 0)), Scalar(2))))))) -
      encoder(0, 0);
  _res(1, 0) =
      _tmp145 * (-std::sinh(Scalar(1.0) * _tmp144) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp123 *
                           (-_tmp144 * _tmp145 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp44 + p_b(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp48 + p_b(1, 0)), Scalar(2))))))) -
      encoder(1, 0);
  _res(2, 0) =
      _tmp152 * (-std::sinh(Scalar(1.0) * _tmp151) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp149 *
                           (-_tmp151 * _tmp152 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp35 + p_c(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp37 + p_c(1, 0)), Scalar(2))))))) -
      encoder(2, 0);
  _res(3, 0) =
      _tmp156 * (-std::sinh(Scalar(1.0) * _tmp155) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp154 *
                           (-_tmp155 * _tmp156 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp79 + p_a(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp82 + p_a(1, 0)), Scalar(2))))))) -
      encoder(3, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
