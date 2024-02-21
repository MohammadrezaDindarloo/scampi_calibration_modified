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
 * Symbolic function: IK_residual_func_cost2_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 533

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (161)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp3 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp1;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = _tmp12 * _tmp3;
  const Scalar _tmp22 = _tmp6 * _tmp8;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp18), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp28), Scalar(2));
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = -_tmp20;
  const Scalar _tmp38 = _tmp26 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = _tmp11 - _tmp15;
  const Scalar _tmp41 = _tmp40 + _tmp5;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp42), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp39 - 1), Scalar(2));
  const Scalar _tmp44 = _tmp24 - _tmp25;
  const Scalar _tmp45 = _tmp37 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(110.0);
  const Scalar _tmp48 = -_tmp5;
  const Scalar _tmp49 = _tmp40 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(125.0);
  const Scalar _tmp52 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp51, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp39 + Scalar(110.0);
  const Scalar _tmp55 = _tmp42 + Scalar(-125.0);
  const Scalar _tmp56 =
      std::sqrt(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp59 * (-_tmp38 * _tmp55 * _tmp57 + _tmp41 * _tmp54 * _tmp57);
  const Scalar _tmp61 = _tmp16 + _tmp48;
  const Scalar _tmp62 = _tmp20 + _tmp44;
  const Scalar _tmp63 = _tmp62 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 + Scalar(-110.0);
  const Scalar _tmp65 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(125.0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp64 * _tmp67;
  const Scalar _tmp69 = _tmp66 * _tmp67;
  const Scalar _tmp70 = _tmp60 * _tmp69 - _tmp61 * _tmp68 + _tmp62 * _tmp69;
  const Scalar _tmp71 = _tmp54 * _tmp58;
  const Scalar _tmp72 = Scalar(1.0) / (-_tmp68 + _tmp69 * _tmp71);
  const Scalar _tmp73 = _tmp47 * _tmp52;
  const Scalar _tmp74 = _tmp53 * _tmp71 - _tmp73;
  const Scalar _tmp75 = _tmp72 * _tmp74;
  const Scalar _tmp76 = _tmp45 * _tmp53 - _tmp49 * _tmp73 + _tmp53 * _tmp60 - _tmp70 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp77;
  const Scalar _tmp79 = _tmp69 * _tmp75;
  const Scalar _tmp80 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp81 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp80 * _tmp82;
  const Scalar _tmp85 = fh1 * (_tmp17 * _tmp84 - _tmp27 * _tmp83);
  const Scalar _tmp86 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp87 = _tmp33 - _tmp34;
  const Scalar _tmp88 = _tmp32 + _tmp87;
  const Scalar _tmp89 = -_tmp32;
  const Scalar _tmp90 = _tmp87 + _tmp89;
  const Scalar _tmp91 = _tmp35 + _tmp89;
  const Scalar _tmp92 = _tmp71 * _tmp88;
  const Scalar _tmp93 = _tmp68 * _tmp91 - _tmp69 * _tmp92;
  const Scalar _tmp94 = -_tmp53 * _tmp92 + _tmp73 * _tmp90 - _tmp75 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) * _tmp38;
  const Scalar _tmp96 = -_tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp62 + _tmp96);
  const Scalar _tmp98 = Scalar(1.0) * _tmp41;
  const Scalar _tmp99 = -_tmp61 + _tmp98;
  const Scalar _tmp100 = _tmp97 * _tmp99;
  const Scalar _tmp101 = _tmp72 * (_tmp69 * _tmp88 - _tmp69 * _tmp91);
  const Scalar _tmp102 = -_tmp100 * _tmp94 - _tmp101 * _tmp74 + _tmp53 * _tmp88 - _tmp53 * _tmp90;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = _tmp100 * _tmp95 + _tmp98;
  const Scalar _tmp105 = 0;
  const Scalar _tmp106 = _tmp71 * _tmp72;
  const Scalar _tmp107 = _tmp106 * _tmp93 + _tmp92;
  const Scalar _tmp108 = -_tmp100 * _tmp107 + _tmp101 * _tmp71 - _tmp88;
  const Scalar _tmp109 = _tmp103 * _tmp76;
  const Scalar _tmp110 = _tmp102 * _tmp77;
  const Scalar _tmp111 = _tmp110 * (_tmp106 * _tmp70 - _tmp108 * _tmp109 - _tmp60);
  const Scalar _tmp112 = _tmp108 + _tmp111;
  const Scalar _tmp113 = _tmp103 * _tmp74;
  const Scalar _tmp114 = -_tmp112 * _tmp113 - _tmp71;
  const Scalar _tmp115 = _tmp69 * _tmp72;
  const Scalar _tmp116 = _tmp103 * _tmp53;
  const Scalar _tmp117 = _tmp83 * fh1;
  const Scalar _tmp118 = Scalar(1.0) * _tmp97;
  const Scalar _tmp119 = -Scalar(1.0) * _tmp101 + _tmp118 * _tmp72 * _tmp93 * _tmp99;
  const Scalar _tmp120 = Scalar(1.0) * _tmp72;
  const Scalar _tmp121 = _tmp110 * (-_tmp109 * _tmp119 - _tmp120 * _tmp70);
  const Scalar _tmp122 = _tmp119 + _tmp121;
  const Scalar _tmp123 = -_tmp113 * _tmp122 + Scalar(1.0);
  const Scalar _tmp124 = _tmp84 * fh1;
  const Scalar _tmp125 = -_tmp117 * _tmp59 * (_tmp112 * _tmp116 + _tmp114 * _tmp115 + Scalar(1.0)) -
                         _tmp124 * _tmp59 * (_tmp115 * _tmp123 + _tmp116 * _tmp122) -
                         _tmp59 * _tmp85 * (_tmp53 * _tmp78 - _tmp78 * _tmp79) -
                         _tmp59 * _tmp86 * (_tmp105 * _tmp53 - _tmp105 * _tmp79);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp45 + _tmp96;
  const Scalar _tmp128 = _tmp100 * _tmp127;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 - _tmp49 + _tmp98);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp104 * _tmp129;
  const Scalar _tmp132 = -_tmp105 * _tmp94 - _tmp127 * _tmp131 + _tmp96;
  const Scalar _tmp133 = _tmp103 * _tmp94;
  const Scalar _tmp134 = _tmp127 * _tmp129;
  const Scalar _tmp135 = -_tmp120 * _tmp93 + _tmp121 * _tmp134 - _tmp122 * _tmp133;
  const Scalar _tmp136 = Scalar(1.0) * fh1;
  const Scalar _tmp137 = _tmp110 * _tmp130;
  const Scalar _tmp138 = _tmp127 * _tmp137 - _tmp78 * _tmp94;
  const Scalar _tmp139 = _tmp36 * fh1;
  const Scalar _tmp140 = Scalar(2.3544) * _tmp10 + _tmp139 * _tmp83 + _tmp17 * fv1;
  const Scalar _tmp141 = _tmp127 * _tmp97;
  const Scalar _tmp142 = _tmp128 * _tmp130 + Scalar(1.0);
  const Scalar _tmp143 = _tmp100 * _tmp130;
  const Scalar _tmp144 = -_tmp139 * _tmp84 - Scalar(2.3544) * _tmp23 - _tmp27 * fv1;
  const Scalar _tmp145 = _tmp107 + _tmp111 * _tmp134 - _tmp112 * _tmp133;
  const Scalar _tmp146 = std::asinh(
      _tmp126 * (_tmp136 * _tmp83 * (_tmp111 * _tmp130 - _tmp118 * _tmp145) +
                 _tmp136 * _tmp84 * (-_tmp118 * _tmp135 + _tmp121 * _tmp130) +
                 Scalar(1.0) * _tmp140 * (_tmp130 * _tmp141 - _tmp130) +
                 Scalar(1.0) * _tmp144 * (-_tmp118 * _tmp142 + _tmp143) +
                 Scalar(1.0) * _tmp85 * (-_tmp118 * _tmp138 + _tmp137) +
                 Scalar(1.0) * _tmp86 * (-_tmp104 * _tmp130 - _tmp118 * _tmp132 + Scalar(1.0))));
  const Scalar _tmp147 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp148 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp63), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp65 - 1), Scalar(2));
  const Scalar _tmp149 = _tmp130 * _tmp140;
  const Scalar _tmp150 = _tmp78 * _tmp85;
  const Scalar _tmp151 = _tmp105 * _tmp86;
  const Scalar _tmp152 =
      _tmp114 * _tmp117 * _tmp72 + _tmp123 * _tmp124 * _tmp72 - _tmp150 * _tmp75 - _tmp151 * _tmp75;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (_tmp117 * _tmp145 * _tmp97 + _tmp124 * _tmp135 * _tmp97 +
                            _tmp132 * _tmp86 * _tmp97 + _tmp138 * _tmp85 * _tmp97 -
                            _tmp141 * _tmp149 + _tmp142 * _tmp144 * _tmp97));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp156 =
      _tmp103 * _tmp112 * _tmp117 + _tmp103 * _tmp122 * _tmp124 + _tmp150 + _tmp151;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 =
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp46 - 1), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp50 - 1), Scalar(2));
  const Scalar _tmp159 =
      std::asinh(_tmp157 * (-_tmp111 * _tmp117 * _tmp129 - _tmp121 * _tmp124 * _tmp129 +
                            _tmp131 * _tmp86 - _tmp137 * _tmp85 - _tmp143 * _tmp144 + _tmp149));
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp156;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp31 * (-std::sinh(Scalar(1.0) * _tmp30) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp29) - _tmp30 * _tmp31))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp29 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp36 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(1, 0) =
      _tmp147 *
          (-std::sinh(Scalar(1.0) * _tmp146) -
           std::sinh(Scalar(0.1034955) * _tmp126 * (-_tmp146 * _tmp147 - std::sqrt(_tmp43)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp43 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp88 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(2, 0) =
      _tmp155 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-std::sqrt(_tmp148) - _tmp154 * _tmp155))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp148 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp91 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(3, 0) =
      _tmp160 *
          (-std::sinh(Scalar(1.0) * _tmp159) -
           std::sinh(Scalar(0.1034955) * _tmp157 * (-std::sqrt(_tmp158) - _tmp159 * _tmp160))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp158 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp90 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym