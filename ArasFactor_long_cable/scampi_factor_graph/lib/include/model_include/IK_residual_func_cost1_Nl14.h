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
 * Symbolic function: IK_residual_func_cost1_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 502

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (157)
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
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp4;
  const Scalar _tmp12 = _tmp11 * _tmp2;
  const Scalar _tmp13 = _tmp1 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp20 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp1 * _tmp11;
  const Scalar _tmp23 = _tmp2 * _tmp5;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp32 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp31 + _tmp34;
  const Scalar _tmp36 = -_tmp10 + _tmp15;
  const Scalar _tmp37 = _tmp36 + _tmp7;
  const Scalar _tmp38 = -_tmp7;
  const Scalar _tmp39 = _tmp16 + _tmp38;
  const Scalar _tmp40 = Scalar(1.0) * _tmp39;
  const Scalar _tmp41 = -_tmp21 + _tmp25;
  const Scalar _tmp42 = _tmp19 + _tmp41;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = -_tmp19;
  const Scalar _tmp46 = _tmp26 + _tmp45;
  const Scalar _tmp47 = _tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp41 + _tmp45;
  const Scalar _tmp49 = Scalar(1.0) / (_tmp44 + _tmp48);
  const Scalar _tmp50 = _tmp36 + _tmp38;
  const Scalar _tmp51 = _tmp49 * (_tmp40 - _tmp50);
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = Scalar(1.0) / (-_tmp37 + _tmp40 - _tmp52);
  const Scalar _tmp54 = Scalar(1.0) * _tmp53;
  const Scalar _tmp55 = _tmp52 * _tmp54 + Scalar(1.0);
  const Scalar _tmp56 = Scalar(1.0) * _tmp49;
  const Scalar _tmp57 = _tmp51 * _tmp54;
  const Scalar _tmp58 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp59 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp35 * fh1;
  const Scalar _tmp63 = -Scalar(2.3544) * _tmp24 - _tmp27 * fv1 - _tmp61 * _tmp62;
  const Scalar _tmp64 = _tmp59 * _tmp60;
  const Scalar _tmp65 = Scalar(2.3544) * _tmp14 + _tmp17 * fv1 + _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp47 * _tmp49;
  const Scalar _tmp67 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp68 = _tmp40 + _tmp43 * _tmp51;
  const Scalar _tmp69 = -_tmp31;
  const Scalar _tmp70 = _tmp34 + _tmp69;
  const Scalar _tmp71 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 + Scalar(-110.0);
  const Scalar _tmp73 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(125.0);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp72 * _tmp75;
  const Scalar _tmp77 = _tmp32 - _tmp33;
  const Scalar _tmp78 = _tmp69 + _tmp77;
  const Scalar _tmp79 = _tmp48 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(110.0);
  const Scalar _tmp81 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(125.0);
  const Scalar _tmp83 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp82, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp84 = _tmp80 * _tmp83;
  const Scalar _tmp85 = _tmp39 + position_vector(0, 0);
  const Scalar _tmp86 = _tmp85 + Scalar(-125.0);
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp89 = _tmp88 + Scalar(110.0);
  const Scalar _tmp90 = _tmp87 * _tmp89;
  const Scalar _tmp91 = _tmp31 + _tmp77;
  const Scalar _tmp92 = _tmp82 * _tmp83;
  const Scalar _tmp93 = _tmp91 * _tmp92;
  const Scalar _tmp94 = _tmp78 * _tmp84 - _tmp90 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (-_tmp84 + _tmp90 * _tmp92);
  const Scalar _tmp96 = _tmp74 * _tmp75;
  const Scalar _tmp97 = -_tmp76 + _tmp90 * _tmp96;
  const Scalar _tmp98 = _tmp95 * _tmp97;
  const Scalar _tmp99 = _tmp90 * _tmp91;
  const Scalar _tmp100 = _tmp70 * _tmp76 - _tmp94 * _tmp98 - _tmp96 * _tmp99;
  const Scalar _tmp101 = -_tmp78 * _tmp92 + _tmp93;
  const Scalar _tmp102 = -_tmp100 * _tmp51 - _tmp101 * _tmp98 - _tmp70 * _tmp96 + _tmp91 * _tmp96;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = 0;
  const Scalar _tmp105 = _tmp53 * _tmp68;
  const Scalar _tmp106 = _tmp49 * (-_tmp100 * _tmp104 - _tmp105 * _tmp47 + _tmp44);
  const Scalar _tmp107 =
      std::sqrt(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp89, Scalar(2))));
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp107 * _tmp87;
  const Scalar _tmp110 = _tmp109 * (_tmp108 * _tmp39 * _tmp89 - _tmp108 * _tmp42 * _tmp86);
  const Scalar _tmp111 = _tmp95 * (_tmp110 * _tmp92 + _tmp48 * _tmp92 - _tmp50 * _tmp84);
  const Scalar _tmp112 = Scalar(1.0) * _tmp95;
  const Scalar _tmp113 = _tmp112 * _tmp94;
  const Scalar _tmp114 = -_tmp101 * _tmp112 + _tmp113 * _tmp51;
  const Scalar _tmp115 = _tmp110 * _tmp96 - _tmp111 * _tmp97 - _tmp37 * _tmp76 + _tmp46 * _tmp96;
  const Scalar _tmp116 = _tmp103 * _tmp115;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp118 = _tmp102 * _tmp117;
  const Scalar _tmp119 = _tmp118 * (-Scalar(1.0) * _tmp111 - _tmp114 * _tmp116);
  const Scalar _tmp120 = _tmp114 + _tmp119;
  const Scalar _tmp121 = _tmp100 * _tmp103;
  const Scalar _tmp122 = _tmp47 * _tmp53;
  const Scalar _tmp123 = -_tmp113 + _tmp119 * _tmp122 - _tmp120 * _tmp121;
  const Scalar _tmp124 = _tmp61 * fh1;
  const Scalar _tmp125 = _tmp90 * _tmp95;
  const Scalar _tmp126 = _tmp125 * _tmp94 + _tmp99;
  const Scalar _tmp127 = _tmp101 * _tmp125 - _tmp126 * _tmp51 - _tmp91;
  const Scalar _tmp128 = _tmp118 * (-_tmp110 + _tmp111 * _tmp90 - _tmp116 * _tmp127);
  const Scalar _tmp129 = _tmp127 + _tmp128;
  const Scalar _tmp130 = -_tmp121 * _tmp129 + _tmp122 * _tmp128 + _tmp126;
  const Scalar _tmp131 = _tmp64 * fh1;
  const Scalar _tmp132 = _tmp118 * _tmp54;
  const Scalar _tmp133 = Scalar(1.0) * _tmp117;
  const Scalar _tmp134 = -_tmp100 * _tmp133 + _tmp132 * _tmp47;
  const Scalar _tmp135 = fh1 * (_tmp17 * _tmp61 - _tmp27 * _tmp64);
  const Scalar _tmp136 = _tmp92 * _tmp98;
  const Scalar _tmp137 = _tmp103 * _tmp97;
  const Scalar _tmp138 = -_tmp120 * _tmp137 + Scalar(1.0);
  const Scalar _tmp139 = _tmp92 * _tmp95;
  const Scalar _tmp140 = _tmp103 * _tmp96;
  const Scalar _tmp141 = -_tmp129 * _tmp137 - _tmp90;
  const Scalar _tmp142 = -_tmp109 * _tmp124 * (_tmp120 * _tmp140 + _tmp138 * _tmp139) -
                         _tmp109 * _tmp131 * (_tmp129 * _tmp140 + _tmp139 * _tmp141 + Scalar(1.0)) -
                         _tmp109 * _tmp135 * (-_tmp133 * _tmp136 + _tmp133 * _tmp96) -
                         _tmp109 * _tmp67 * (-_tmp104 * _tmp136 + _tmp104 * _tmp96);
  const Scalar _tmp143 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp144 = std::asinh(
      _tmp143 * (Scalar(1.0) * _tmp124 * (_tmp119 * _tmp54 - _tmp123 * _tmp56) +
                 Scalar(1.0) * _tmp131 * (_tmp128 * _tmp54 - _tmp130 * _tmp56) +
                 Scalar(1.0) * _tmp135 * (_tmp132 - _tmp134 * _tmp56) +
                 Scalar(1.0) * _tmp63 * (-_tmp55 * _tmp56 + _tmp57) +
                 Scalar(1.0) * _tmp65 * (_tmp54 * _tmp66 - _tmp54) +
                 Scalar(1.0) * _tmp67 * (-Scalar(1.0) * _tmp106 - _tmp54 * _tmp68 + Scalar(1.0))));
  const Scalar _tmp145 = Scalar(9.6622558468725703) * _tmp142;
  const Scalar _tmp146 = _tmp54 * _tmp65;
  const Scalar _tmp147 = _tmp133 * _tmp135;
  const Scalar _tmp148 = _tmp104 * _tmp67;
  const Scalar _tmp149 =
      _tmp124 * _tmp138 * _tmp95 + _tmp131 * _tmp141 * _tmp95 - _tmp147 * _tmp98 - _tmp148 * _tmp98;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = std::asinh(
      _tmp150 * (_tmp106 * _tmp67 + _tmp123 * _tmp124 * _tmp49 + _tmp130 * _tmp131 * _tmp49 +
                 _tmp134 * _tmp135 * _tmp49 - _tmp146 * _tmp66 + _tmp49 * _tmp55 * _tmp63));
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp153 =
      _tmp103 * _tmp120 * _tmp124 + _tmp103 * _tmp129 * _tmp131 + _tmp147 + _tmp148;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 = std::asinh(_tmp154 * (_tmp105 * _tmp67 - _tmp119 * _tmp124 * _tmp53 -
                                               _tmp128 * _tmp131 * _tmp53 - _tmp132 * _tmp135 +
                                               _tmp146 - _tmp57 * _tmp63));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp153;

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
      -_tmp145 *
          (Scalar(4.967784) * _tmp143 + std::cosh(Scalar(1.0) * _tmp144) -
           std::cosh(
               Scalar(0.1034955) * _tmp143 *
               (-_tmp144 * _tmp145 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp85), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp88 - 1),
                                     Scalar(2))))))) +
      _tmp91 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp152 *
          (Scalar(4.967784) * _tmp150 + std::cosh(Scalar(1.0) * _tmp151) -
           std::cosh(Scalar(0.1034955) * _tmp150 *
                     (-_tmp151 * _tmp152 -
                      Scalar(125.0) *
                          std::sqrt(Scalar(
                              Scalar(0.77439999999999998) *
                                  std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp79 - 1),
                                           Scalar(2)) +
                              std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp81 - 1),
                                       Scalar(2))))))) +
      _tmp78 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp156 *
          (Scalar(4.967784) * _tmp154 + std::cosh(Scalar(1.0) * _tmp155) -
           std::cosh(
               Scalar(0.1034955) * _tmp154 *
               (-_tmp155 * _tmp156 -
                Scalar(125.0) * std::sqrt(Scalar(
                                    Scalar(0.77439999999999998) *
                                        std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp71),
                                                 Scalar(2)) +
                                    std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp73 - 1),
                                             Scalar(2))))))) +
      _tmp70 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym