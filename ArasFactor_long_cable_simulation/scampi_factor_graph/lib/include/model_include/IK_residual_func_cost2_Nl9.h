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
 * Symbolic function: IK_residual_func_cost2_Nl9
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 526

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (159)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = 2 * _tmp1;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 = -_tmp12 + _tmp9;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp1 * _tmp8;
  const Scalar _tmp16 = 2 * _tmp10 * _tmp3;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp14 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp6;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp23 = _tmp11 * _tmp3;
  const Scalar _tmp24 = _tmp10 * _tmp8;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp30), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp20 - 1), Scalar(2));
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp35 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp37 = _tmp35 - _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp36;
  const Scalar _tmp40 = _tmp34 + _tmp39;
  const Scalar _tmp41 = _tmp26 + _tmp27;
  const Scalar _tmp42 = _tmp22 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp18 + _tmp5;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp43), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp45), Scalar(2));
  const Scalar _tmp47 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp48 = Scalar(1.0) * _tmp44;
  const Scalar _tmp49 = -_tmp48;
  const Scalar _tmp50 = _tmp14 - _tmp17;
  const Scalar _tmp51 = _tmp50 + _tmp6;
  const Scalar _tmp52 = _tmp49 + _tmp51;
  const Scalar _tmp53 = _tmp5 + _tmp50;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp49 + _tmp53);
  const Scalar _tmp55 = -_tmp22;
  const Scalar _tmp56 = _tmp41 + _tmp55;
  const Scalar _tmp57 = Scalar(1.0) * _tmp42;
  const Scalar _tmp58 = -_tmp56 + _tmp57;
  const Scalar _tmp59 = _tmp54 * _tmp58;
  const Scalar _tmp60 = _tmp52 * _tmp59;
  const Scalar _tmp61 = _tmp28 + _tmp55;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp57 - _tmp60 - _tmp61);
  const Scalar _tmp63 = _tmp48 * _tmp59 + _tmp57;
  const Scalar _tmp64 = _tmp62 * _tmp63;
  const Scalar _tmp65 = -_tmp34;
  const Scalar _tmp66 = _tmp37 + _tmp65;
  const Scalar _tmp67 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp68 = _tmp67 + Scalar(110.0);
  const Scalar _tmp69 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 + Scalar(125.0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp68 * _tmp71;
  const Scalar _tmp73 = _tmp45 + Scalar(-110.0);
  const Scalar _tmp74 = _tmp43 + Scalar(-125.0);
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = _tmp73 * _tmp75;
  const Scalar _tmp77 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(125.0);
  const Scalar _tmp79 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(-110.0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp40 * _tmp82;
  const Scalar _tmp84 = _tmp39 + _tmp65;
  const Scalar _tmp85 = _tmp80 * _tmp81;
  const Scalar _tmp86 = -_tmp76 * _tmp83 + _tmp84 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp76 * _tmp82 - _tmp85);
  const Scalar _tmp88 = _tmp70 * _tmp71;
  const Scalar _tmp89 = -_tmp72 + _tmp76 * _tmp88;
  const Scalar _tmp90 = _tmp87 * _tmp89;
  const Scalar _tmp91 = _tmp40 * _tmp88;
  const Scalar _tmp92 = _tmp66 * _tmp72 - _tmp76 * _tmp91 - _tmp86 * _tmp90;
  const Scalar _tmp93 = -_tmp82 * _tmp84 + _tmp83;
  const Scalar _tmp94 = -_tmp59 * _tmp92 - _tmp66 * _tmp88 - _tmp90 * _tmp93 + _tmp91;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = 0;
  const Scalar _tmp97 = _tmp49 - _tmp52 * _tmp64 - _tmp92 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) * _tmp54;
  const Scalar _tmp99 = Scalar(1.0) * _tmp62;
  const Scalar _tmp100 =
      std::sqrt(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp74, Scalar(2))));
  const Scalar _tmp101 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp102 = _tmp100 * _tmp75;
  const Scalar _tmp103 = _tmp102 * (_tmp101 * _tmp42 * _tmp73 - _tmp101 * _tmp44 * _tmp74);
  const Scalar _tmp104 = _tmp76 * _tmp87;
  const Scalar _tmp105 = _tmp104 * _tmp86 + _tmp40 * _tmp76;
  const Scalar _tmp106 = _tmp104 * _tmp93 - _tmp105 * _tmp59 - _tmp40;
  const Scalar _tmp107 = _tmp87 * (_tmp103 * _tmp82 + _tmp53 * _tmp82 - _tmp56 * _tmp85);
  const Scalar _tmp108 = _tmp103 * _tmp88 - _tmp107 * _tmp89 + _tmp51 * _tmp88 - _tmp61 * _tmp72;
  const Scalar _tmp109 = _tmp108 * _tmp95;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp111 = _tmp110 * _tmp94;
  const Scalar _tmp112 = _tmp111 * (-_tmp103 - _tmp106 * _tmp109 + _tmp107 * _tmp76);
  const Scalar _tmp113 = _tmp52 * _tmp62;
  const Scalar _tmp114 = _tmp95 * (_tmp106 + _tmp112);
  const Scalar _tmp115 = _tmp105 + _tmp112 * _tmp113 - _tmp114 * _tmp92;
  const Scalar _tmp116 = _tmp30 + Scalar(-125.0);
  const Scalar _tmp117 = _tmp20 + Scalar(110.0);
  const Scalar _tmp118 =
      std::pow(Scalar(std::pow(_tmp116, Scalar(2)) + std::pow(_tmp117, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp119 = _tmp116 * _tmp118;
  const Scalar _tmp120 = _tmp119 * fh1;
  const Scalar _tmp121 = Scalar(1.0) * _tmp87;
  const Scalar _tmp122 = -_tmp121 * _tmp93 + _tmp58 * _tmp86 * _tmp87 * _tmp98;
  const Scalar _tmp123 = _tmp111 * (-Scalar(1.0) * _tmp107 - _tmp109 * _tmp122);
  const Scalar _tmp124 = _tmp95 * (_tmp122 + _tmp123);
  const Scalar _tmp125 = _tmp113 * _tmp123 - _tmp121 * _tmp86 - _tmp124 * _tmp92;
  const Scalar _tmp126 = _tmp117 * _tmp118;
  const Scalar _tmp127 = _tmp126 * fh1;
  const Scalar _tmp128 = _tmp38 * fh1;
  const Scalar _tmp129 = -_tmp126 * _tmp128 - Scalar(40.024799999999999) * _tmp13 - _tmp19 * fv1;
  const Scalar _tmp130 = _tmp60 * _tmp99 + Scalar(1.0);
  const Scalar _tmp131 = _tmp59 * _tmp99;
  const Scalar _tmp132 = _tmp52 * _tmp54;
  const Scalar _tmp133 = _tmp119 * _tmp128 + Scalar(40.024799999999999) * _tmp25 + _tmp29 * fv1;
  const Scalar _tmp134 = _tmp111 * _tmp99;
  const Scalar _tmp135 = Scalar(1.0) * _tmp110;
  const Scalar _tmp136 = _tmp134 * _tmp52 - _tmp135 * _tmp92;
  const Scalar _tmp137 = fh1 * (-_tmp119 * _tmp19 + _tmp126 * _tmp29);
  const Scalar _tmp138 = -_tmp124 * _tmp89 + Scalar(1.0);
  const Scalar _tmp139 = _tmp82 * _tmp87;
  const Scalar _tmp140 = _tmp82 * _tmp90;
  const Scalar _tmp141 = -_tmp114 * _tmp89 - _tmp76;
  const Scalar _tmp142 = -_tmp102 * _tmp120 * (_tmp114 * _tmp88 + _tmp139 * _tmp141 + Scalar(1.0)) -
                         _tmp102 * _tmp127 * (_tmp124 * _tmp88 + _tmp138 * _tmp139) -
                         _tmp102 * _tmp137 * (-_tmp135 * _tmp140 + _tmp135 * _tmp88) -
                         _tmp102 * _tmp47 * (-_tmp140 * _tmp96 + _tmp88 * _tmp96);
  const Scalar _tmp143 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp144 = std::asinh(
      _tmp143 * (Scalar(1.0) * _tmp120 * (_tmp112 * _tmp99 - _tmp115 * _tmp98) +
                 Scalar(1.0) * _tmp127 * (_tmp123 * _tmp99 - _tmp125 * _tmp98) +
                 Scalar(1.0) * _tmp129 * (-_tmp130 * _tmp98 + _tmp131) +
                 Scalar(1.0) * _tmp133 * (_tmp132 * _tmp99 - _tmp99) +
                 Scalar(1.0) * _tmp137 * (_tmp134 - _tmp136 * _tmp98) +
                 Scalar(1.0) * _tmp47 * (-_tmp63 * _tmp99 - _tmp97 * _tmp98 + Scalar(1.0))));
  const Scalar _tmp145 = Scalar(1.4083112389913199) * _tmp142;
  const Scalar _tmp146 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp79), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp77 - 1), Scalar(2));
  const Scalar _tmp147 = _tmp133 * _tmp99;
  const Scalar _tmp148 = _tmp135 * _tmp137;
  const Scalar _tmp149 = _tmp47 * _tmp96;
  const Scalar _tmp150 =
      _tmp120 * _tmp141 * _tmp87 + _tmp127 * _tmp138 * _tmp87 - _tmp148 * _tmp90 - _tmp149 * _tmp90;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 =
      std::asinh(_tmp151 * (_tmp115 * _tmp120 * _tmp54 + _tmp125 * _tmp127 * _tmp54 +
                            _tmp129 * _tmp130 * _tmp54 - _tmp132 * _tmp147 +
                            _tmp136 * _tmp137 * _tmp54 + _tmp47 * _tmp54 * _tmp97));
  const Scalar _tmp153 = Scalar(1.4083112389913199) * _tmp150;
  const Scalar _tmp154 = _tmp114 * _tmp120 + _tmp124 * _tmp127 + _tmp148 + _tmp149;
  const Scalar _tmp155 = Scalar(1.0) / (_tmp154);
  const Scalar _tmp156 =
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp67 - 1), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp69 - 1), Scalar(2));
  const Scalar _tmp157 =
      std::asinh(_tmp155 * (-_tmp112 * _tmp120 * _tmp62 - _tmp123 * _tmp127 * _tmp62 -
                            _tmp129 * _tmp131 - _tmp134 * _tmp137 + _tmp147 + _tmp47 * _tmp64));
  const Scalar _tmp158 = Scalar(1.4083112389913199) * _tmp154;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
          (-std::sinh(Scalar(1.0) * _tmp32) - std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                                                        (-std::sqrt(_tmp31) - _tmp32 * _tmp33))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp31 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp38 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(1, 0) =
      _tmp145 * (-std::sinh(Scalar(1.0) * _tmp144) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp143 *
                           (-_tmp144 * _tmp145 - std::sqrt(_tmp46)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp46 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp40 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(2, 0) =
      _tmp153 * (-std::sinh(Scalar(1.0) * _tmp152) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp151 *
                           (-std::sqrt(_tmp146) - _tmp152 * _tmp153))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp146 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp84 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(3, 0) =
      _tmp158 * (-std::sinh(Scalar(1.0) * _tmp157) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp155 *
                           (-std::sqrt(_tmp156) - _tmp157 * _tmp158))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp156 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp66 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym