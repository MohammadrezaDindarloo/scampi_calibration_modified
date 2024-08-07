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
 * Symbolic function: IK_residual_func_cost2_Nl23
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 530

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = 2 * _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = 2 * _tmp0;
  const Scalar _tmp14 = _tmp13 * _tmp5;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp13 * _tmp4;
  const Scalar _tmp19 = _tmp2 * _tmp5;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 - Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp3 + _tmp6;
  const Scalar _tmp22 = -Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp25 = _tmp22 - _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(0, 0);
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp31 = _tmp12 - _tmp14;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = _tmp30 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp35), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp27 - 1), Scalar(2));
  const Scalar _tmp37 = Scalar(1.0) / (fh1);
  const Scalar _tmp38 = std::asinh(_tmp37 * fv1);
  const Scalar _tmp39 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp40 = _tmp35 + Scalar(-110.0);
  const Scalar _tmp41 = _tmp27 + Scalar(125.0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp17 * fh1;
  const Scalar _tmp45 = -Scalar(40.024799999999999) * _tmp31 - _tmp34 * fv1 - _tmp43 * _tmp44;
  const Scalar _tmp46 = _tmp28 + _tmp33;
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = -_tmp30 + _tmp32;
  const Scalar _tmp50 = _tmp29 + _tmp49;
  const Scalar _tmp51 = _tmp48 + _tmp50;
  const Scalar _tmp52 = _tmp28 + _tmp49;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp48 + _tmp52);
  const Scalar _tmp54 = -_tmp20;
  const Scalar _tmp55 = _tmp22 + _tmp24;
  const Scalar _tmp56 = _tmp54 + _tmp55;
  const Scalar _tmp57 = _tmp20 + _tmp55;
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp53 * (-_tmp56 + _tmp58);
  const Scalar _tmp60 = _tmp51 * _tmp59;
  const Scalar _tmp61 = _tmp25 + _tmp54;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp58 - _tmp60 - _tmp61);
  const Scalar _tmp63 = Scalar(1.0) * _tmp62;
  const Scalar _tmp64 = _tmp60 * _tmp63 + Scalar(1.0);
  const Scalar _tmp65 = Scalar(1.0) * _tmp53;
  const Scalar _tmp66 = _tmp59 * _tmp63;
  const Scalar _tmp67 = _tmp11 - _tmp15;
  const Scalar _tmp68 = _tmp67 + _tmp7;
  const Scalar _tmp69 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp70 = _tmp69 + Scalar(110.0);
  const Scalar _tmp71 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(-125.0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp70 * _tmp73;
  const Scalar _tmp75 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp76 = _tmp75 + Scalar(-110.0);
  const Scalar _tmp77 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp78 = _tmp77 + Scalar(-125.0);
  const Scalar _tmp79 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp80 = _tmp76 * _tmp79;
  const Scalar _tmp81 = _tmp16 + _tmp7;
  const Scalar _tmp82 = _tmp72 * _tmp73;
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp68 * _tmp74 - _tmp80 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (-_tmp74 + _tmp80 * _tmp82);
  const Scalar _tmp86 = Scalar(1.0) * _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = -_tmp68 * _tmp82 + _tmp83;
  const Scalar _tmp89 = _tmp59 * _tmp87 - _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp91 = _tmp90 + Scalar(110.0);
  const Scalar _tmp92 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp93 = _tmp92 + Scalar(125.0);
  const Scalar _tmp94 = std::pow(Scalar(std::pow(_tmp91, Scalar(2)) + std::pow(_tmp93, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp95 = _tmp93 * _tmp94;
  const Scalar _tmp96 = _tmp91 * _tmp94;
  const Scalar _tmp97 = _tmp80 * _tmp95 - _tmp96;
  const Scalar _tmp98 = _tmp85 * _tmp97;
  const Scalar _tmp99 = _tmp67 + _tmp8;
  const Scalar _tmp100 = _tmp81 * _tmp95;
  const Scalar _tmp101 = -_tmp100 * _tmp80 - _tmp84 * _tmp98 + _tmp96 * _tmp99;
  const Scalar _tmp102 = _tmp100 - _tmp101 * _tmp59 - _tmp88 * _tmp98 - _tmp95 * _tmp99;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 =
      std::sqrt(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp78, Scalar(2))));
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = _tmp104 * _tmp79;
  const Scalar _tmp107 = _tmp106 * (-_tmp105 * _tmp46 * _tmp78 + _tmp105 * _tmp57 * _tmp76);
  const Scalar _tmp108 = _tmp107 * _tmp82 + _tmp52 * _tmp82 - _tmp56 * _tmp74;
  const Scalar _tmp109 = _tmp107 * _tmp95 - _tmp108 * _tmp98 + _tmp50 * _tmp95 - _tmp61 * _tmp96;
  const Scalar _tmp110 = _tmp103 * _tmp109;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp112 = _tmp102 * _tmp111;
  const Scalar _tmp113 = _tmp112 * (-_tmp108 * _tmp86 - _tmp110 * _tmp89);
  const Scalar _tmp114 = _tmp113 + _tmp89;
  const Scalar _tmp115 = _tmp101 * _tmp103;
  const Scalar _tmp116 = _tmp51 * _tmp62;
  const Scalar _tmp117 = _tmp113 * _tmp116 - _tmp114 * _tmp115 - _tmp87;
  const Scalar _tmp118 = _tmp43 * fh1;
  const Scalar _tmp119 = _tmp41 * _tmp42;
  const Scalar _tmp120 = _tmp119 * _tmp44 + Scalar(40.024799999999999) * _tmp21 + _tmp26 * fv1;
  const Scalar _tmp121 = _tmp51 * _tmp53;
  const Scalar _tmp122 = _tmp80 * _tmp85;
  const Scalar _tmp123 = _tmp122 * _tmp84 + _tmp80 * _tmp81;
  const Scalar _tmp124 = _tmp122 * _tmp88 - _tmp123 * _tmp59 - _tmp81;
  const Scalar _tmp125 = _tmp112 * (-_tmp107 + _tmp108 * _tmp122 - _tmp110 * _tmp124);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = -_tmp115 * _tmp126 + _tmp116 * _tmp125 + _tmp123;
  const Scalar _tmp128 = _tmp119 * fh1;
  const Scalar _tmp129 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp130 = _tmp47 * _tmp59 + _tmp58;
  const Scalar _tmp131 = _tmp130 * _tmp62;
  const Scalar _tmp132 = 0;
  const Scalar _tmp133 = _tmp53 * (-_tmp115 * _tmp132 - _tmp131 * _tmp51 + _tmp48);
  const Scalar _tmp134 = _tmp112 * _tmp63;
  const Scalar _tmp135 = Scalar(1.0) * _tmp111;
  const Scalar _tmp136 = -_tmp101 * _tmp135 + _tmp134 * _tmp51;
  const Scalar _tmp137 = fh1 * (-_tmp119 * _tmp34 + _tmp26 * _tmp43);
  const Scalar _tmp138 = _tmp111 * _tmp86 * _tmp97;
  const Scalar _tmp139 = _tmp82 * _tmp85;
  const Scalar _tmp140 = _tmp103 * _tmp97;
  const Scalar _tmp141 = _tmp132 * _tmp140;
  const Scalar _tmp142 = _tmp103 * _tmp132;
  const Scalar _tmp143 = _tmp103 * _tmp95;
  const Scalar _tmp144 = -_tmp114 * _tmp140 + Scalar(1.0);
  const Scalar _tmp145 = -_tmp126 * _tmp140 - _tmp80;
  const Scalar _tmp146 = -_tmp106 * _tmp118 * (_tmp114 * _tmp143 + _tmp139 * _tmp144) -
                         _tmp106 * _tmp128 * (_tmp126 * _tmp143 + _tmp139 * _tmp145 + Scalar(1.0)) -
                         _tmp106 * _tmp129 * (-_tmp139 * _tmp141 + _tmp142 * _tmp95) -
                         _tmp106 * _tmp137 * (_tmp135 * _tmp95 - _tmp138 * _tmp82);
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = std::asinh(
      _tmp147 * (Scalar(1.0) * _tmp118 * (_tmp113 * _tmp63 - _tmp117 * _tmp65) +
                 Scalar(1.0) * _tmp120 * (_tmp121 * _tmp63 - _tmp63) +
                 Scalar(1.0) * _tmp128 * (_tmp125 * _tmp63 - _tmp127 * _tmp65) +
                 Scalar(1.0) * _tmp129 * (-_tmp130 * _tmp63 - Scalar(1.0) * _tmp133 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp137 * (_tmp134 - _tmp136 * _tmp65) +
                 Scalar(1.0) * _tmp45 * (-_tmp64 * _tmp65 + _tmp66)));
  const Scalar _tmp149 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp75), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp77), Scalar(2));
  const Scalar _tmp150 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp151 = _tmp120 * _tmp63;
  const Scalar _tmp152 = _tmp118 * _tmp144 * _tmp85 + _tmp128 * _tmp145 * _tmp85 -
                         _tmp129 * _tmp141 * _tmp85 - _tmp137 * _tmp138;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(
      _tmp153 * (_tmp117 * _tmp118 * _tmp53 - _tmp121 * _tmp151 + _tmp127 * _tmp128 * _tmp53 +
                 _tmp129 * _tmp133 + _tmp136 * _tmp137 * _tmp53 + _tmp45 * _tmp53 * _tmp64));
  const Scalar _tmp155 = Scalar(1.4083112389913199) * _tmp152;
  const Scalar _tmp156 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp71), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp69 - 1), Scalar(2));
  const Scalar _tmp157 = _tmp103 * _tmp114 * _tmp118 + _tmp103 * _tmp126 * _tmp128 +
                         _tmp129 * _tmp142 + _tmp135 * _tmp137;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 =
      std::asinh(_tmp158 * (-_tmp113 * _tmp118 * _tmp62 - _tmp125 * _tmp128 * _tmp62 +
                            _tmp129 * _tmp131 - _tmp134 * _tmp137 + _tmp151 - _tmp45 * _tmp66));
  const Scalar _tmp160 = Scalar(1.4083112389913199) * _tmp157;
  const Scalar _tmp161 =
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp90 - 1), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp92 - 1), Scalar(2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp39 *
          (-std::sinh(Scalar(1.0) * _tmp38) - std::sinh(Scalar(0.71007031138673404) * _tmp37 *
                                                        (-std::sqrt(_tmp36) - _tmp38 * _tmp39))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp36 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp17 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(1, 0) =
      _tmp150 * (-std::sinh(Scalar(1.0) * _tmp148) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp147 *
                           (-_tmp148 * _tmp150 - std::sqrt(_tmp149)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp149 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp81 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(2, 0) =
      _tmp155 * (-std::sinh(Scalar(1.0) * _tmp154) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp153 *
                           (-_tmp154 * _tmp155 - std::sqrt(_tmp156)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp156 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp68 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(3, 0) =
      _tmp160 * (-std::sinh(Scalar(1.0) * _tmp159) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp158 *
                           (-_tmp159 * _tmp160 - std::sqrt(_tmp161)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp161 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp99 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
