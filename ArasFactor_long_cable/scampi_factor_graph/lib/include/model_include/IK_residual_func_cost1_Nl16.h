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
 * Symbolic function: IK_residual_func_cost1_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 508

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (156)
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
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = 2 * _tmp4;
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = _tmp1 * _tmp5;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp1 * _tmp8;
  const Scalar _tmp22 = _tmp2 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp33 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp31 + _tmp34;
  const Scalar _tmp36 = _tmp12 - _tmp15;
  const Scalar _tmp37 = _tmp36 + _tmp7;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp24 - _tmp25;
  const Scalar _tmp40 = _tmp20 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = -_tmp20;
  const Scalar _tmp43 = _tmp26 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(110.0);
  const Scalar _tmp46 = -_tmp7;
  const Scalar _tmp47 = _tmp16 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(-125.0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp49 * _tmp50;
  const Scalar _tmp52 = _tmp45 * _tmp50;
  const Scalar _tmp53 = _tmp41 + Scalar(-110.0);
  const Scalar _tmp54 = _tmp38 + Scalar(125.0);
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = _tmp53 * _tmp55;
  const Scalar _tmp57 = _tmp51 * _tmp56 - _tmp52;
  const Scalar _tmp58 = _tmp39 + _tmp42;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 + Scalar(110.0);
  const Scalar _tmp61 = _tmp36 + _tmp46;
  const Scalar _tmp62 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 + Scalar(125.0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp60 * _tmp64;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp56 * _tmp65 - _tmp66);
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp54, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp55 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (_tmp37 * _tmp53 * _tmp69 - _tmp40 * _tmp54 * _tmp69);
  const Scalar _tmp72 = _tmp67 * (_tmp58 * _tmp65 - _tmp61 * _tmp66 + _tmp65 * _tmp71);
  const Scalar _tmp73 = _tmp43 * _tmp51 - _tmp47 * _tmp52 + _tmp51 * _tmp71 - _tmp57 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp74;
  const Scalar _tmp76 = _tmp65 * _tmp67;
  const Scalar _tmp77 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp78 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp77 * _tmp79;
  const Scalar _tmp82 = fh1 * (_tmp17 * _tmp81 - _tmp27 * _tmp80);
  const Scalar _tmp83 = Scalar(1.0) * _tmp40;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp58 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp37;
  const Scalar _tmp87 = _tmp85 * (-_tmp61 + _tmp86);
  const Scalar _tmp88 = -_tmp31;
  const Scalar _tmp89 = _tmp32 - _tmp33;
  const Scalar _tmp90 = _tmp88 + _tmp89;
  const Scalar _tmp91 = _tmp31 + _tmp89;
  const Scalar _tmp92 = _tmp56 * _tmp91;
  const Scalar _tmp93 = _tmp67 * (-_tmp65 * _tmp92 + _tmp66 * _tmp90);
  const Scalar _tmp94 = Scalar(1.0) * _tmp93;
  const Scalar _tmp95 = _tmp67 * (-_tmp65 * _tmp90 + _tmp65 * _tmp91);
  const Scalar _tmp96 = _tmp87 * _tmp94 - Scalar(1.0) * _tmp95;
  const Scalar _tmp97 = _tmp34 + _tmp88;
  const Scalar _tmp98 = _tmp51 * _tmp91;
  const Scalar _tmp99 = _tmp52 * _tmp97 - _tmp56 * _tmp98 - _tmp57 * _tmp93;
  const Scalar _tmp100 = -_tmp51 * _tmp97 - _tmp57 * _tmp95 - _tmp87 * _tmp99 + _tmp98;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp102 = _tmp101 * _tmp73;
  const Scalar _tmp103 = _tmp100 * _tmp74;
  const Scalar _tmp104 = _tmp103 * (-_tmp102 * _tmp96 - Scalar(1.0) * _tmp72);
  const Scalar _tmp105 = _tmp104 + _tmp96;
  const Scalar _tmp106 = _tmp101 * _tmp57;
  const Scalar _tmp107 = -_tmp105 * _tmp106 + Scalar(1.0);
  const Scalar _tmp108 = _tmp101 * _tmp51;
  const Scalar _tmp109 = _tmp81 * fh1;
  const Scalar _tmp110 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp111 = _tmp83 * _tmp87 + _tmp86;
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = _tmp106 * _tmp112;
  const Scalar _tmp114 = _tmp101 * _tmp112;
  const Scalar _tmp115 = _tmp56 * _tmp93 + _tmp92;
  const Scalar _tmp116 = -_tmp115 * _tmp87 + _tmp56 * _tmp95 - _tmp91;
  const Scalar _tmp117 = _tmp103 * (-_tmp102 * _tmp116 + _tmp56 * _tmp72 - _tmp71);
  const Scalar _tmp118 = _tmp116 + _tmp117;
  const Scalar _tmp119 = -_tmp106 * _tmp118 - _tmp56;
  const Scalar _tmp120 = _tmp80 * fh1;
  const Scalar _tmp121 = -_tmp109 * _tmp70 * (_tmp105 * _tmp108 + _tmp107 * _tmp76) -
                         _tmp110 * _tmp70 * (-_tmp113 * _tmp76 + _tmp114 * _tmp51) -
                         _tmp120 * _tmp70 * (_tmp108 * _tmp118 + _tmp119 * _tmp76 + Scalar(1.0)) -
                         _tmp70 * _tmp82 * (_tmp51 * _tmp75 - _tmp57 * _tmp75 * _tmp76);
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = _tmp43 + _tmp84;
  const Scalar _tmp124 = _tmp123 * _tmp87;
  const Scalar _tmp125 = Scalar(1.0) / (-_tmp124 - _tmp47 + _tmp86);
  const Scalar _tmp126 = _tmp123 * _tmp125;
  const Scalar _tmp127 = _tmp101 * _tmp99;
  const Scalar _tmp128 = _tmp115 + _tmp117 * _tmp126 - _tmp118 * _tmp127;
  const Scalar _tmp129 = Scalar(1.0) * _tmp85;
  const Scalar _tmp130 = Scalar(1.0) * _tmp125;
  const Scalar _tmp131 = _tmp124 * _tmp130 + Scalar(1.0);
  const Scalar _tmp132 = _tmp130 * _tmp87;
  const Scalar _tmp133 = _tmp35 * fh1;
  const Scalar _tmp134 = -_tmp133 * _tmp81 - Scalar(2.3544) * _tmp23 - _tmp27 * fv1;
  const Scalar _tmp135 = _tmp104 * _tmp126 - _tmp105 * _tmp127 - _tmp94;
  const Scalar _tmp136 = Scalar(2.3544) * _tmp11 + _tmp133 * _tmp80 + _tmp17 * fv1;
  const Scalar _tmp137 = _tmp123 * _tmp130;
  const Scalar _tmp138 = _tmp103 * _tmp137 - _tmp75 * _tmp99;
  const Scalar _tmp139 = _tmp103 * _tmp130;
  const Scalar _tmp140 = _tmp111 * _tmp125;
  const Scalar _tmp141 = -_tmp112 * _tmp127 - _tmp123 * _tmp140 + _tmp84;
  const Scalar _tmp142 = std::asinh(
      _tmp122 * (Scalar(1.0) * _tmp109 * (_tmp104 * _tmp130 - _tmp129 * _tmp135) +
                 Scalar(1.0) * _tmp110 * (-_tmp111 * _tmp130 - _tmp129 * _tmp141 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp120 * (_tmp117 * _tmp130 - _tmp128 * _tmp129) +
                 Scalar(1.0) * _tmp134 * (-_tmp129 * _tmp131 + _tmp132) +
                 Scalar(1.0) * _tmp136 * (-_tmp130 + _tmp137 * _tmp85) +
                 Scalar(1.0) * _tmp82 * (-_tmp129 * _tmp138 + _tmp139)));
  const Scalar _tmp143 = Scalar(9.6622558468725703) * _tmp121;
  const Scalar _tmp144 = _tmp75 * _tmp82;
  const Scalar _tmp145 = _tmp107 * _tmp109 * _tmp67 - _tmp110 * _tmp113 * _tmp67 +
                         _tmp119 * _tmp120 * _tmp67 - _tmp144 * _tmp57 * _tmp67;
  const Scalar _tmp146 = Scalar(1.0) / (_tmp145);
  const Scalar _tmp147 = _tmp85 * fh1;
  const Scalar _tmp148 = _tmp130 * _tmp136;
  const Scalar _tmp149 =
      std::asinh(_tmp146 * (_tmp110 * _tmp141 * _tmp85 - _tmp123 * _tmp148 * _tmp85 +
                            _tmp128 * _tmp147 * _tmp80 + _tmp131 * _tmp134 * _tmp85 +
                            _tmp135 * _tmp147 * _tmp81 + _tmp138 * _tmp82 * _tmp85));
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp145;
  const Scalar _tmp151 = _tmp101 * fh1;
  const Scalar _tmp152 =
      _tmp105 * _tmp151 * _tmp81 + _tmp110 * _tmp114 + _tmp118 * _tmp151 * _tmp80 + _tmp144;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp153 * (-_tmp104 * _tmp109 * _tmp125 + _tmp110 * _tmp140 -
                                               _tmp117 * _tmp120 * _tmp125 - _tmp132 * _tmp134 -
                                               _tmp139 * _tmp82 + _tmp148));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp30 *
          (Scalar(4.967784) * _tmp0 + std::cosh(Scalar(1.0) * _tmp29) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp29 * _tmp30 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp18), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp28),
                                     Scalar(2))))))) +
      _tmp35 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp143 *
          (Scalar(4.967784) * _tmp122 + std::cosh(Scalar(1.0) * _tmp142) -
           std::cosh(
               Scalar(0.1034955) * _tmp122 *
               (-_tmp142 * _tmp143 -
                Scalar(125.0) * std::sqrt(Scalar(
                                    Scalar(0.77439999999999998) *
                                        std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp41),
                                                 Scalar(2)) +
                                    std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp38 - 1),
                                             Scalar(2))))))) +
      _tmp91 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp150 *
          (Scalar(4.967784) * _tmp146 + std::cosh(Scalar(1.0) * _tmp149) -
           std::cosh(Scalar(0.1034955) * _tmp146 *
                     (-_tmp149 * _tmp150 -
                      Scalar(125.0) *
                          std::sqrt(Scalar(
                              Scalar(0.77439999999999998) *
                                  std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp59 - 1),
                                           Scalar(2)) +
                              std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp62 - 1),
                                       Scalar(2))))))) +
      _tmp90 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp155 *
          (Scalar(4.967784) * _tmp153 + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(
               Scalar(0.1034955) * _tmp153 *
               (-_tmp154 * _tmp155 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp48), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp44 - 1),
                                     Scalar(2))))))) +
      _tmp97 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym