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
 * Symbolic function: IK_residual_func_cost2_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 491

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (158)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp8 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp17 = _tmp1 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp3 - _tmp6;
  const Scalar _tmp20 = -Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp20 + _tmp22;
  const Scalar _tmp24 = _tmp18 + _tmp23;
  const Scalar _tmp25 = _tmp24 + position_vector(1, 0);
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp27 = _tmp11 + _tmp12;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp26 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = std::pow(Scalar(-_tmp25 + p_c(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp32 + p_c(0, 0)), Scalar(2));
  const Scalar _tmp34 = Scalar(1.0) / (fh1);
  const Scalar _tmp35 = std::asinh(_tmp34 * fv1);
  const Scalar _tmp36 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp37 = _tmp20 - _tmp22;
  const Scalar _tmp38 = _tmp18 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = -_tmp26;
  const Scalar _tmp41 = _tmp30 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = std::pow(Scalar(-_tmp39 + p_b(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp42 + p_b(0, 0)), Scalar(2));
  const Scalar _tmp44 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp45 = Scalar(1.0) * _tmp41;
  const Scalar _tmp46 = Scalar(1.0) * _tmp38;
  const Scalar _tmp47 = -_tmp46;
  const Scalar _tmp48 = -_tmp18;
  const Scalar _tmp49 = _tmp37 + _tmp48;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp47 + _tmp49);
  const Scalar _tmp51 = _tmp28 - _tmp29;
  const Scalar _tmp52 = _tmp40 + _tmp51;
  const Scalar _tmp53 = _tmp50 * (_tmp45 - _tmp52);
  const Scalar _tmp54 = _tmp45 + _tmp46 * _tmp53;
  const Scalar _tmp55 = _tmp26 + _tmp51;
  const Scalar _tmp56 = _tmp23 + _tmp48;
  const Scalar _tmp57 = _tmp47 + _tmp56;
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp45 - _tmp55 - _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = _tmp54 * _tmp59;
  const Scalar _tmp62 = _tmp10 - _tmp13;
  const Scalar _tmp63 = _tmp62 + _tmp7;
  const Scalar _tmp64 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_d(0, 0);
  const Scalar _tmp66 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp67 = _tmp66 - p_d(1, 0);
  const Scalar _tmp68 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp67, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp69 = _tmp67 * _tmp68;
  const Scalar _tmp70 = _tmp42 - p_b(0, 0);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp39 - p_b(1, 0);
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = -_tmp7;
  const Scalar _tmp75 = _tmp14 + _tmp74;
  const Scalar _tmp76 = _tmp65 * _tmp68;
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp79 = _tmp78 - p_a(0, 0);
  const Scalar _tmp80 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp81 = _tmp80 - p_a(1, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp79 * _tmp82;
  const Scalar _tmp84 = _tmp73 * _tmp75;
  const Scalar _tmp85 = _tmp62 + _tmp74;
  const Scalar _tmp86 = _tmp81 * _tmp82;
  const Scalar _tmp87 = -_tmp83 * _tmp84 + _tmp85 * _tmp86;
  const Scalar _tmp88 = -_tmp69 + _tmp73 * _tmp76;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp73 * _tmp83 - _tmp86);
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp63 * _tmp69 - _tmp73 * _tmp77 - _tmp87 * _tmp90;
  const Scalar _tmp92 = _tmp75 * _tmp83 - _tmp83 * _tmp85;
  const Scalar _tmp93 = -_tmp53 * _tmp91 - _tmp63 * _tmp76 + _tmp77 - _tmp90 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = 0;
  const Scalar _tmp96 = _tmp47 - _tmp57 * _tmp61 - _tmp91 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) * _tmp50;
  const Scalar _tmp98 = Scalar(1.0) * _tmp89;
  const Scalar _tmp99 = _tmp87 * _tmp98;
  const Scalar _tmp100 = _tmp53 * _tmp99 - _tmp92 * _tmp98;
  const Scalar _tmp101 =
      std::sqrt(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))));
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = _tmp101 * _tmp71;
  const Scalar _tmp104 = _tmp103 * (-_tmp102 * _tmp38 * _tmp70 + _tmp102 * _tmp41 * _tmp72);
  const Scalar _tmp105 = _tmp104 * _tmp83 + _tmp49 * _tmp83 - _tmp52 * _tmp86;
  const Scalar _tmp106 = _tmp104 * _tmp76 - _tmp105 * _tmp90 - _tmp55 * _tmp69 + _tmp56 * _tmp76;
  const Scalar _tmp107 = _tmp106 * _tmp94;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp109 = _tmp108 * _tmp93;
  const Scalar _tmp110 = _tmp109 * (-_tmp100 * _tmp107 - _tmp105 * _tmp98);
  const Scalar _tmp111 = _tmp57 * _tmp59;
  const Scalar _tmp112 = _tmp94 * (_tmp100 + _tmp110);
  const Scalar _tmp113 = _tmp110 * _tmp111 - _tmp112 * _tmp91 - _tmp99;
  const Scalar _tmp114 = _tmp25 - p_c(1, 0);
  const Scalar _tmp115 = _tmp32 - p_c(0, 0);
  const Scalar _tmp116 =
      std::pow(Scalar(std::pow(_tmp114, Scalar(2)) + std::pow(_tmp115, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp117 = _tmp114 * _tmp116;
  const Scalar _tmp118 = _tmp117 * fh1;
  const Scalar _tmp119 = _tmp115 * _tmp116;
  const Scalar _tmp120 = _tmp15 * fh1;
  const Scalar _tmp121 = _tmp119 * _tmp120 + Scalar(40.024799999999999) * _tmp27 + _tmp31 * fv1;
  const Scalar _tmp122 = _tmp57 * _tmp60;
  const Scalar _tmp123 = -_tmp117 * _tmp120 - Scalar(40.024799999999999) * _tmp19 - _tmp24 * fv1;
  const Scalar _tmp124 = _tmp58 * _tmp60 + Scalar(1.0);
  const Scalar _tmp125 = _tmp53 * _tmp60;
  const Scalar _tmp126 = _tmp109 * _tmp60;
  const Scalar _tmp127 = Scalar(1.0) * _tmp108;
  const Scalar _tmp128 = _tmp109 * _tmp122 - _tmp127 * _tmp91;
  const Scalar _tmp129 = fh1 * (_tmp117 * _tmp31 - _tmp119 * _tmp24);
  const Scalar _tmp130 = _tmp73 * _tmp89;
  const Scalar _tmp131 = _tmp130 * _tmp87 + _tmp84;
  const Scalar _tmp132 = _tmp130 * _tmp92 - _tmp131 * _tmp53 - _tmp75;
  const Scalar _tmp133 = _tmp109 * (-_tmp104 + _tmp105 * _tmp130 - _tmp107 * _tmp132);
  const Scalar _tmp134 = _tmp94 * (_tmp132 + _tmp133);
  const Scalar _tmp135 = _tmp111 * _tmp133 + _tmp131 - _tmp134 * _tmp91;
  const Scalar _tmp136 = _tmp119 * fh1;
  const Scalar _tmp137 = -_tmp112 * _tmp88 + Scalar(1.0);
  const Scalar _tmp138 = _tmp83 * _tmp89;
  const Scalar _tmp139 = _tmp83 * _tmp90;
  const Scalar _tmp140 = -_tmp134 * _tmp88 - _tmp73;
  const Scalar _tmp141 = -_tmp103 * _tmp118 * (_tmp112 * _tmp76 + _tmp137 * _tmp138) -
                         _tmp103 * _tmp129 * (-_tmp127 * _tmp139 + _tmp127 * _tmp76) -
                         _tmp103 * _tmp136 * (_tmp134 * _tmp76 + _tmp138 * _tmp140 + Scalar(1.0)) -
                         _tmp103 * _tmp44 * (-_tmp139 * _tmp95 + _tmp76 * _tmp95);
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = std::asinh(
      _tmp142 * (Scalar(1.0) * _tmp118 * (_tmp110 * _tmp60 - _tmp113 * _tmp97) +
                 Scalar(1.0) * _tmp121 * (_tmp122 * _tmp50 - _tmp60) +
                 Scalar(1.0) * _tmp123 * (-_tmp124 * _tmp97 + _tmp125) +
                 Scalar(1.0) * _tmp129 * (_tmp126 - _tmp128 * _tmp97) +
                 Scalar(1.0) * _tmp136 * (_tmp133 * _tmp60 - _tmp135 * _tmp97) +
                 Scalar(1.0) * _tmp44 * (-_tmp54 * _tmp60 - _tmp96 * _tmp97 + Scalar(1.0))));
  const Scalar _tmp144 = Scalar(1.4083112389913199) * _tmp141;
  const Scalar _tmp145 = _tmp44 * _tmp95;
  const Scalar _tmp146 = _tmp127 * _tmp129;
  const Scalar _tmp147 =
      _tmp118 * _tmp137 * _tmp89 + _tmp136 * _tmp140 * _tmp89 - _tmp145 * _tmp90 - _tmp146 * _tmp90;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 = _tmp121 * _tmp60;
  const Scalar _tmp150 =
      std::asinh(_tmp148 * (_tmp113 * _tmp118 * _tmp50 + _tmp123 * _tmp124 * _tmp50 +
                            _tmp128 * _tmp129 * _tmp50 + _tmp135 * _tmp136 * _tmp50 -
                            _tmp149 * _tmp50 * _tmp57 + _tmp44 * _tmp50 * _tmp96));
  const Scalar _tmp151 = Scalar(1.4083112389913199) * _tmp147;
  const Scalar _tmp152 = std::pow(Scalar(-_tmp78 + p_a(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp80 + p_a(1, 0)), Scalar(2));
  const Scalar _tmp153 = std::pow(Scalar(-_tmp64 + p_d(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp66 + p_d(1, 0)), Scalar(2));
  const Scalar _tmp154 = _tmp112 * _tmp118 + _tmp134 * _tmp136 + _tmp145 + _tmp146;
  const Scalar _tmp155 = Scalar(1.0) / (_tmp154);
  const Scalar _tmp156 =
      std::asinh(_tmp155 * (-_tmp110 * _tmp118 * _tmp59 - _tmp123 * _tmp125 - _tmp126 * _tmp129 -
                            _tmp133 * _tmp136 * _tmp59 + _tmp149 + _tmp44 * _tmp61));
  const Scalar _tmp157 = Scalar(1.4083112389913199) * _tmp154;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp36 *
          (-std::sinh(Scalar(1.0) * _tmp35) - std::sinh(Scalar(0.71007031138673404) * _tmp34 *
                                                        (-std::sqrt(_tmp33) - _tmp35 * _tmp36))) -
      std::sqrt(Scalar(_tmp33 +
                       std::pow(Scalar(-_tmp15 + p_c(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(1, 0) =
      _tmp144 * (-std::sinh(Scalar(1.0) * _tmp143) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp142 *
                           (-_tmp143 * _tmp144 - std::sqrt(_tmp43)))) -
      std::sqrt(Scalar(_tmp43 +
                       std::pow(Scalar(-_tmp75 + p_b(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(2, 0) =
      _tmp151 * (-std::sinh(Scalar(1.0) * _tmp150) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp148 *
                           (-_tmp150 * _tmp151 - std::sqrt(_tmp152)))) -
      std::sqrt(Scalar(_tmp152 +
                       std::pow(Scalar(-_tmp85 + p_a(2, 0) - position_vector(2, 0)), Scalar(2))));
  _res(3, 0) =
      _tmp157 * (-std::sinh(Scalar(1.0) * _tmp156) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp155 *
                           (-std::sqrt(_tmp153) - _tmp156 * _tmp157))) -
      std::sqrt(Scalar(_tmp153 +
                       std::pow(Scalar(-_tmp63 + p_d(2, 0) - position_vector(2, 0)), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
