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
 * Symbolic function: IK_residual_func_cost1_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 504

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (157)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = _tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp8;
  const Scalar _tmp23 = _tmp10 * _tmp7;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp28 = _tmp25 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp26 + Scalar(-0.010999999999999999);
  const Scalar _tmp35 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = _tmp17 + _tmp5;
  const Scalar _tmp39 = _tmp38 + position_vector(0, 0);
  const Scalar _tmp40 = _tmp20 + _tmp28;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp25 - _tmp27;
  const Scalar _tmp43 = _tmp20 + _tmp42;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(110.0);
  const Scalar _tmp46 = _tmp13 - _tmp16;
  const Scalar _tmp47 = _tmp46 + _tmp5;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(-125.0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp49 * _tmp50;
  const Scalar _tmp52 = _tmp41 + Scalar(-110.0);
  const Scalar _tmp53 = _tmp39 + Scalar(-125.0);
  const Scalar _tmp54 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp53, Scalar(2))));
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp57 * (_tmp38 * _tmp52 * _tmp55 - _tmp40 * _tmp53 * _tmp55);
  const Scalar _tmp59 = _tmp21 + _tmp42;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(110.0);
  const Scalar _tmp62 = _tmp46 + _tmp6;
  const Scalar _tmp63 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp64 = _tmp63 + Scalar(125.0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp61 * _tmp65;
  const Scalar _tmp68 = _tmp58 * _tmp66 + _tmp59 * _tmp66 - _tmp62 * _tmp67;
  const Scalar _tmp69 = _tmp52 * _tmp56;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp66 * _tmp69 - _tmp67);
  const Scalar _tmp71 = _tmp45 * _tmp50;
  const Scalar _tmp72 = _tmp51 * _tmp69 - _tmp71;
  const Scalar _tmp73 = _tmp70 * _tmp72;
  const Scalar _tmp74 = _tmp43 * _tmp51 - _tmp47 * _tmp71 + _tmp51 * _tmp58 - _tmp68 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp75;
  const Scalar _tmp77 = _tmp66 * _tmp73;
  const Scalar _tmp78 = _tmp19 + Scalar(125.0);
  const Scalar _tmp79 = _tmp30 + Scalar(-110.0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp78 * _tmp80;
  const Scalar _tmp83 = fh1 * (_tmp18 * _tmp81 - _tmp29 * _tmp82);
  const Scalar _tmp84 = _tmp69 * _tmp70;
  const Scalar _tmp85 = _tmp34 + _tmp35;
  const Scalar _tmp86 = _tmp33 + _tmp85;
  const Scalar _tmp87 = _tmp69 * _tmp86;
  const Scalar _tmp88 = -_tmp33;
  const Scalar _tmp89 = _tmp36 + _tmp88;
  const Scalar _tmp90 = -_tmp66 * _tmp87 + _tmp67 * _tmp89;
  const Scalar _tmp91 = _tmp84 * _tmp90 + _tmp87;
  const Scalar _tmp92 = Scalar(1.0) * _tmp40;
  const Scalar _tmp93 = -_tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp59 + _tmp93);
  const Scalar _tmp95 = Scalar(1.0) * _tmp38;
  const Scalar _tmp96 = -_tmp62 + _tmp95;
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp66 * _tmp86 - _tmp66 * _tmp89;
  const Scalar _tmp99 = _tmp84 * _tmp98 - _tmp86 - _tmp91 * _tmp97;
  const Scalar _tmp100 = _tmp85 + _tmp88;
  const Scalar _tmp101 = _tmp100 * _tmp71 - _tmp51 * _tmp87 - _tmp73 * _tmp90;
  const Scalar _tmp102 = -_tmp100 * _tmp51 - _tmp101 * _tmp97 + _tmp51 * _tmp86 - _tmp73 * _tmp98;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = _tmp103 * _tmp74;
  const Scalar _tmp105 = _tmp102 * _tmp75;
  const Scalar _tmp106 = _tmp105 * (-_tmp104 * _tmp99 - _tmp58 + _tmp68 * _tmp84);
  const Scalar _tmp107 = _tmp106 + _tmp99;
  const Scalar _tmp108 = _tmp103 * _tmp51;
  const Scalar _tmp109 = _tmp103 * _tmp72;
  const Scalar _tmp110 = -_tmp107 * _tmp109 - _tmp69;
  const Scalar _tmp111 = _tmp66 * _tmp70;
  const Scalar _tmp112 = _tmp82 * fh1;
  const Scalar _tmp113 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp114 = _tmp92 * _tmp97 + _tmp95;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = _tmp103 * _tmp115;
  const Scalar _tmp117 = Scalar(1.0) * _tmp70;
  const Scalar _tmp118 = Scalar(1.0) * _tmp94;
  const Scalar _tmp119 = -_tmp117 * _tmp98 + _tmp118 * _tmp70 * _tmp90 * _tmp96;
  const Scalar _tmp120 = _tmp105 * (-_tmp104 * _tmp119 - _tmp117 * _tmp68);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = -_tmp109 * _tmp121 + Scalar(1.0);
  const Scalar _tmp123 = _tmp81 * fh1;
  const Scalar _tmp124 = -_tmp112 * _tmp57 * (_tmp107 * _tmp108 + _tmp110 * _tmp111 + Scalar(1.0)) -
                         _tmp113 * _tmp57 * (_tmp116 * _tmp51 - _tmp116 * _tmp77) -
                         _tmp123 * _tmp57 * (_tmp108 * _tmp121 + _tmp111 * _tmp122) -
                         _tmp57 * _tmp83 * (_tmp51 * _tmp76 - _tmp76 * _tmp77);
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp43 + _tmp93;
  const Scalar _tmp127 = _tmp126 * _tmp97;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 - _tmp47 + _tmp95);
  const Scalar _tmp129 = Scalar(1.0) * _tmp128;
  const Scalar _tmp130 = _tmp105 * _tmp129;
  const Scalar _tmp131 = -_tmp101 * _tmp76 + _tmp126 * _tmp130;
  const Scalar _tmp132 = _tmp37 * fh1;
  const Scalar _tmp133 = Scalar(2.3544) * _tmp12 + _tmp132 * _tmp82 + _tmp18 * fv1;
  const Scalar _tmp134 = _tmp126 * _tmp94;
  const Scalar _tmp135 = _tmp126 * _tmp128;
  const Scalar _tmp136 = _tmp101 * _tmp103;
  const Scalar _tmp137 = -_tmp117 * _tmp90 + _tmp120 * _tmp135 - _tmp121 * _tmp136;
  const Scalar _tmp138 = _tmp114 * _tmp128;
  const Scalar _tmp139 = -_tmp115 * _tmp136 - _tmp126 * _tmp138 + _tmp93;
  const Scalar _tmp140 = _tmp127 * _tmp129 + Scalar(1.0);
  const Scalar _tmp141 = _tmp129 * _tmp97;
  const Scalar _tmp142 = -_tmp132 * _tmp81 - Scalar(2.3544) * _tmp24 - _tmp29 * fv1;
  const Scalar _tmp143 = _tmp106 * _tmp135 - _tmp107 * _tmp136 + _tmp91;
  const Scalar _tmp144 = std::asinh(
      _tmp125 * (Scalar(1.0) * _tmp112 * (_tmp106 * _tmp129 - _tmp118 * _tmp143) +
                 Scalar(1.0) * _tmp113 * (-_tmp114 * _tmp129 - _tmp118 * _tmp139 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp123 * (-_tmp118 * _tmp137 + _tmp120 * _tmp129) +
                 Scalar(1.0) * _tmp133 * (_tmp129 * _tmp134 - _tmp129) +
                 Scalar(1.0) * _tmp142 * (-_tmp118 * _tmp140 + _tmp141) +
                 Scalar(1.0) * _tmp83 * (-_tmp118 * _tmp131 + _tmp130)));
  const Scalar _tmp145 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp146 = _tmp113 * _tmp116;
  const Scalar _tmp147 = _tmp76 * _tmp83;
  const Scalar _tmp148 =
      _tmp110 * _tmp112 * _tmp70 + _tmp122 * _tmp123 * _tmp70 - _tmp146 * _tmp73 - _tmp147 * _tmp73;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = _tmp129 * _tmp133;
  const Scalar _tmp151 =
      std::asinh(_tmp149 * (_tmp112 * _tmp143 * _tmp94 + _tmp113 * _tmp139 * _tmp94 +
                            _tmp123 * _tmp137 * _tmp94 + _tmp131 * _tmp83 * _tmp94 -
                            _tmp134 * _tmp150 + _tmp140 * _tmp142 * _tmp94));
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp153 =
      _tmp103 * _tmp107 * _tmp112 + _tmp103 * _tmp121 * _tmp123 + _tmp146 + _tmp147;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 = std::asinh(_tmp154 * (-_tmp106 * _tmp112 * _tmp128 + _tmp113 * _tmp138 -
                                               _tmp120 * _tmp123 * _tmp128 - _tmp130 * _tmp83 -
                                               _tmp141 * _tmp142 + _tmp150));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp153;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 * (Scalar(4.967784) * _tmp0 + std::cosh(Scalar(1.0) * _tmp31) -
                 std::cosh(Scalar(0.1034955) * _tmp0 *
                           (-_tmp31 * _tmp32 -
                            Scalar(125.0) *
                                std::sqrt(Scalar(
                                    Scalar(0.77439999999999998) *
                                        std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp30),
                                                 Scalar(2)) +
                                    std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp19 - 1),
                                             Scalar(2))))))) +
      _tmp37 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp145 *
          (Scalar(4.967784) * _tmp125 + std::cosh(Scalar(1.0) * _tmp144) -
           std::cosh(
               Scalar(0.1034955) * _tmp125 *
               (-_tmp144 * _tmp145 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp39), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp41),
                                     Scalar(2))))))) +
      _tmp86 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp152 *
          (Scalar(4.967784) * _tmp149 + std::cosh(Scalar(1.0) * _tmp151) -
           std::cosh(Scalar(0.1034955) * _tmp149 *
                     (-_tmp151 * _tmp152 -
                      Scalar(125.0) *
                          std::sqrt(Scalar(
                              Scalar(0.77439999999999998) *
                                  std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp60 - 1),
                                           Scalar(2)) +
                              std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp63 - 1),
                                       Scalar(2))))))) +
      _tmp89 + position_vector(2, 0);
  _res(3, 0) =
      _tmp100 -
      _tmp156 *
          (Scalar(4.967784) * _tmp154 + std::cosh(Scalar(1.0) * _tmp155) -
           std::cosh(
               Scalar(0.1034955) * _tmp154 *
               (-_tmp155 * _tmp156 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp48), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp44 - 1),
                                     Scalar(2))))))) +
      position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
