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
 * Symbolic function: IK_residual_func_cost2_Nl11
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 535

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (158)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp5;
  const Scalar _tmp10 = _tmp1 * _tmp6;
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp22 = _tmp2 * _tmp6;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp28), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp18 - 1), Scalar(2));
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp33 = -_tmp32;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = _tmp34 - _tmp35;
  const Scalar _tmp39 = _tmp32 + _tmp38;
  const Scalar _tmp40 = -_tmp20;
  const Scalar _tmp41 = _tmp24 + _tmp25;
  const Scalar _tmp42 = _tmp40 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = -_tmp8;
  const Scalar _tmp45 = _tmp12 + _tmp15;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp47), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp43 - 1), Scalar(2));
  const Scalar _tmp49 = _tmp47 + Scalar(-110.0);
  const Scalar _tmp50 = _tmp43 + Scalar(125.0);
  const Scalar _tmp51 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp39 * _tmp52;
  const Scalar _tmp54 = _tmp45 + _tmp8;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 + Scalar(-110.0);
  const Scalar _tmp57 = _tmp20 + _tmp41;
  const Scalar _tmp58 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 + Scalar(-125.0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp56 * _tmp60;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp52 * _tmp61 - _tmp62);
  const Scalar _tmp64 = _tmp39 * _tmp61;
  const Scalar _tmp65 = _tmp32 + _tmp36;
  const Scalar _tmp66 = _tmp63 * (-_tmp52 * _tmp64 + _tmp62 * _tmp65);
  const Scalar _tmp67 = _tmp52 * _tmp66 + _tmp53;
  const Scalar _tmp68 = Scalar(1.0) * _tmp46;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp54 + _tmp69);
  const Scalar _tmp71 = Scalar(1.0) * _tmp42;
  const Scalar _tmp72 = -_tmp57 + _tmp71;
  const Scalar _tmp73 = _tmp70 * _tmp72;
  const Scalar _tmp74 = _tmp63 * (-_tmp61 * _tmp65 + _tmp64);
  const Scalar _tmp75 = -_tmp39 + _tmp52 * _tmp74 - _tmp67 * _tmp73;
  const Scalar _tmp76 = _tmp16 + _tmp44;
  const Scalar _tmp77 = _tmp76 + position_vector(1, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(110.0);
  const Scalar _tmp79 = _tmp26 + _tmp40;
  const Scalar _tmp80 = _tmp79 + position_vector(0, 0);
  const Scalar _tmp81 = _tmp80 + Scalar(125.0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp33 + _tmp38;
  const Scalar _tmp85 = _tmp78 * _tmp82;
  const Scalar _tmp86 = _tmp52 * _tmp83 - _tmp85;
  const Scalar _tmp87 = -_tmp53 * _tmp83 - _tmp66 * _tmp86 + _tmp84 * _tmp85;
  const Scalar _tmp88 = _tmp39 * _tmp83 - _tmp73 * _tmp87 - _tmp74 * _tmp86 - _tmp83 * _tmp84;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp50, Scalar(2))));
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp51 * _tmp90;
  const Scalar _tmp93 = _tmp92 * (_tmp42 * _tmp49 * _tmp91 - _tmp46 * _tmp50 * _tmp91);
  const Scalar _tmp94 = _tmp63 * (_tmp54 * _tmp61 - _tmp57 * _tmp62 + _tmp61 * _tmp93);
  const Scalar _tmp95 = _tmp76 * _tmp83 - _tmp79 * _tmp85 + _tmp83 * _tmp93 - _tmp86 * _tmp94;
  const Scalar _tmp96 = _tmp89 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp88 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (_tmp52 * _tmp94 - _tmp75 * _tmp96 - _tmp93);
  const Scalar _tmp100 = _tmp75 + _tmp99;
  const Scalar _tmp101 = _tmp86 * _tmp89;
  const Scalar _tmp102 = -_tmp100 * _tmp101 - _tmp52;
  const Scalar _tmp103 = _tmp61 * _tmp63;
  const Scalar _tmp104 = _tmp83 * _tmp89;
  const Scalar _tmp105 = _tmp18 + Scalar(110.0);
  const Scalar _tmp106 = _tmp28 + Scalar(-125.0);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp106 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(1.0) * _tmp70;
  const Scalar _tmp111 = _tmp110 * _tmp66 * _tmp72 - Scalar(1.0) * _tmp74;
  const Scalar _tmp112 = _tmp98 * (-_tmp111 * _tmp96 - Scalar(1.0) * _tmp94);
  const Scalar _tmp113 = _tmp111 + _tmp112;
  const Scalar _tmp114 = -_tmp101 * _tmp113 + Scalar(1.0);
  const Scalar _tmp115 = _tmp105 * _tmp107;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp97;
  const Scalar _tmp118 = fh1 * (-_tmp108 * _tmp17 + _tmp115 * _tmp27);
  const Scalar _tmp119 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp120 = _tmp68 * _tmp73 + _tmp71;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = _tmp121 * _tmp89;
  const Scalar _tmp123 = _tmp101 * _tmp121;
  const Scalar _tmp124 = -_tmp109 * _tmp92 * (_tmp100 * _tmp104 + _tmp102 * _tmp103 + Scalar(1.0)) -
                         _tmp116 * _tmp92 * (_tmp103 * _tmp114 + _tmp104 * _tmp113) -
                         _tmp118 * _tmp92 * (-_tmp103 * _tmp117 * _tmp86 + _tmp117 * _tmp83) -
                         _tmp119 * _tmp92 * (-_tmp103 * _tmp123 + _tmp122 * _tmp83);
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp69 + _tmp76;
  const Scalar _tmp127 = _tmp126 * _tmp73;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 + _tmp71 - _tmp79);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp129 * _tmp98;
  const Scalar _tmp131 = -_tmp117 * _tmp87 + _tmp126 * _tmp130;
  const Scalar _tmp132 = _tmp127 * _tmp129 + Scalar(1.0);
  const Scalar _tmp133 = _tmp37 * fh1;
  const Scalar _tmp134 = -Scalar(40.024799999999999) * _tmp11 - _tmp115 * _tmp133 - _tmp17 * fv1;
  const Scalar _tmp135 = _tmp87 * _tmp89;
  const Scalar _tmp136 = _tmp126 * _tmp128;
  const Scalar _tmp137 = -_tmp100 * _tmp135 + _tmp136 * _tmp99 + _tmp67;
  const Scalar _tmp138 = _tmp112 * _tmp136 - _tmp113 * _tmp135 - Scalar(1.0) * _tmp66;
  const Scalar _tmp139 = _tmp120 * _tmp128;
  const Scalar _tmp140 = -_tmp121 * _tmp135 - _tmp126 * _tmp139 + _tmp69;
  const Scalar _tmp141 = _tmp126 * _tmp70;
  const Scalar _tmp142 = _tmp108 * _tmp133 + Scalar(40.024799999999999) * _tmp23 + _tmp27 * fv1;
  const Scalar _tmp143 = std::asinh(
      _tmp125 * (Scalar(1.0) * _tmp109 * (-_tmp110 * _tmp137 + _tmp129 * _tmp99) +
                 Scalar(1.0) * _tmp116 * (-_tmp110 * _tmp138 + _tmp112 * _tmp129) +
                 Scalar(1.0) * _tmp118 * (-_tmp110 * _tmp131 + _tmp130) +
                 Scalar(1.0) * _tmp119 * (-_tmp110 * _tmp140 - _tmp120 * _tmp129 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp134 * (-_tmp110 * _tmp132 + _tmp129 * _tmp73) +
                 Scalar(1.0) * _tmp142 * (_tmp129 * _tmp141 - _tmp129)));
  const Scalar _tmp144 = Scalar(1.4083112389913199) * _tmp124;
  const Scalar _tmp145 = _tmp117 * _tmp118;
  const Scalar _tmp146 = _tmp102 * _tmp109 * _tmp63 + _tmp114 * _tmp116 * _tmp63 -
                         _tmp119 * _tmp123 * _tmp63 - _tmp145 * _tmp63 * _tmp86;
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp55), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp58), Scalar(2));
  const Scalar _tmp149 = _tmp129 * _tmp142;
  const Scalar _tmp150 = _tmp134 * _tmp70;
  const Scalar _tmp151 =
      std::asinh(_tmp147 * (_tmp109 * _tmp137 * _tmp70 + _tmp116 * _tmp138 * _tmp70 +
                            _tmp118 * _tmp131 * _tmp70 + _tmp119 * _tmp140 * _tmp70 +
                            _tmp132 * _tmp150 - _tmp141 * _tmp149));
  const Scalar _tmp152 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp153 =
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp77 - 1), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp80 - 1), Scalar(2));
  const Scalar _tmp154 =
      _tmp100 * _tmp109 * _tmp89 + _tmp113 * _tmp116 * _tmp89 + _tmp119 * _tmp122 + _tmp145;
  const Scalar _tmp155 = Scalar(1.0) / (_tmp154);
  const Scalar _tmp156 = std::asinh(
      _tmp155 * (-_tmp109 * _tmp128 * _tmp99 - _tmp112 * _tmp116 * _tmp128 - _tmp118 * _tmp130 +
                 _tmp119 * _tmp139 - _tmp129 * _tmp150 * _tmp72 + _tmp149));
  const Scalar _tmp157 = Scalar(1.4083112389913199) * _tmp154;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 *
          (-std::sinh(Scalar(1.0) * _tmp30) - std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                                                        (-std::sqrt(_tmp29) - _tmp30 * _tmp31))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp29 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp37 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(1, 0) =
      _tmp144 * (-std::sinh(Scalar(1.0) * _tmp143) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp125 *
                           (-_tmp143 * _tmp144 - std::sqrt(_tmp48)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp48 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp39 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(2, 0) =
      _tmp152 * (-std::sinh(Scalar(1.0) * _tmp151) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp147 *
                           (-std::sqrt(_tmp148) - _tmp151 * _tmp152))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp148 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp65 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(3, 0) =
      _tmp157 * (-std::sinh(Scalar(1.0) * _tmp156) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp155 *
                           (-std::sqrt(_tmp153) - _tmp156 * _tmp157))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp153 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp84 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym