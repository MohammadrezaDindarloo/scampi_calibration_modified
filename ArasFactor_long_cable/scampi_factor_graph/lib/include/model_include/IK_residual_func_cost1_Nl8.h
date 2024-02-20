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
 * Symbolic function: IK_residual_func_cost1_Nl8
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl8(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 504

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
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = -_tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp1 * _tmp8;
  const Scalar _tmp15 = _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp23 = _tmp10 * _tmp7;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp35 = _tmp33 - _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = _tmp13 - _tmp16;
  const Scalar _tmp38 = _tmp37 + _tmp6;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = _tmp39 + Scalar(110.0);
  const Scalar _tmp41 = -_tmp21;
  const Scalar _tmp42 = _tmp27 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp43 + Scalar(125.0);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp44 * _tmp45;
  const Scalar _tmp47 = _tmp17 + _tmp5;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(-110.0);
  const Scalar _tmp50 = _tmp25 + _tmp26;
  const Scalar _tmp51 = _tmp21 + _tmp50;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(-125.0);
  const Scalar _tmp54 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp53, Scalar(2))));
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp57 * (-_tmp47 * _tmp53 * _tmp55 + _tmp49 * _tmp51 * _tmp55);
  const Scalar _tmp59 = _tmp40 * _tmp45;
  const Scalar _tmp60 = _tmp38 * _tmp46 - _tmp42 * _tmp59 + _tmp46 * _tmp58;
  const Scalar _tmp61 = _tmp49 * _tmp56;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp46 * _tmp61 - _tmp59);
  const Scalar _tmp63 = Scalar(1.0) * _tmp62;
  const Scalar _tmp64 = -_tmp32;
  const Scalar _tmp65 = _tmp35 + _tmp64;
  const Scalar _tmp66 = _tmp33 + _tmp34;
  const Scalar _tmp67 = _tmp32 + _tmp66;
  const Scalar _tmp68 = -_tmp46 * _tmp65 + _tmp46 * _tmp67;
  const Scalar _tmp69 = _tmp61 * _tmp67;
  const Scalar _tmp70 = -_tmp46 * _tmp69 + _tmp59 * _tmp65;
  const Scalar _tmp71 = _tmp63 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) * _tmp47;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp38 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp51;
  const Scalar _tmp76 = -_tmp42 + _tmp75;
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = -_tmp63 * _tmp68 + _tmp71 * _tmp77;
  const Scalar _tmp79 = _tmp64 + _tmp66;
  const Scalar _tmp80 = _tmp41 + _tmp50;
  const Scalar _tmp81 = _tmp80 + position_vector(0, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(125.0);
  const Scalar _tmp83 = _tmp37 + _tmp5;
  const Scalar _tmp84 = _tmp83 + position_vector(1, 0);
  const Scalar _tmp85 = _tmp84 + Scalar(-110.0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp86;
  const Scalar _tmp89 = _tmp61 * _tmp87 - _tmp88;
  const Scalar _tmp90 = _tmp62 * _tmp89;
  const Scalar _tmp91 = -_tmp69 * _tmp87 - _tmp70 * _tmp90 + _tmp79 * _tmp88;
  const Scalar _tmp92 = _tmp67 * _tmp87 - _tmp68 * _tmp90 - _tmp77 * _tmp91 - _tmp79 * _tmp87;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp58 * _tmp87 - _tmp60 * _tmp90 - _tmp80 * _tmp88 + _tmp83 * _tmp87;
  const Scalar _tmp95 = _tmp93 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp92 * _tmp96;
  const Scalar _tmp98 = _tmp97 * (-_tmp60 * _tmp63 - _tmp78 * _tmp95);
  const Scalar _tmp99 = _tmp78 + _tmp98;
  const Scalar _tmp100 = _tmp87 * _tmp93;
  const Scalar _tmp101 = _tmp89 * _tmp93;
  const Scalar _tmp102 = -_tmp101 * _tmp99 + Scalar(1.0);
  const Scalar _tmp103 = _tmp46 * _tmp62;
  const Scalar _tmp104 = _tmp19 + Scalar(110.0);
  const Scalar _tmp105 = _tmp29 + Scalar(-125.0);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp104 * _tmp106;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = Scalar(1.0) * _tmp96;
  const Scalar _tmp110 = _tmp46 * _tmp90;
  const Scalar _tmp111 = _tmp105 * _tmp106;
  const Scalar _tmp112 = fh1 * (_tmp107 * _tmp28 - _tmp111 * _tmp18);
  const Scalar _tmp113 = _tmp61 * _tmp62;
  const Scalar _tmp114 = _tmp113 * _tmp70 + _tmp69;
  const Scalar _tmp115 = _tmp113 * _tmp68 - _tmp114 * _tmp77 - _tmp67;
  const Scalar _tmp116 = _tmp97 * (_tmp113 * _tmp60 - _tmp115 * _tmp95 - _tmp58);
  const Scalar _tmp117 = _tmp115 + _tmp116;
  const Scalar _tmp118 = -_tmp101 * _tmp117 - _tmp61;
  const Scalar _tmp119 = _tmp111 * fh1;
  const Scalar _tmp120 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp121 = _tmp72 * _tmp77 + _tmp75;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = _tmp122 * _tmp93;
  const Scalar _tmp124 = -_tmp108 * _tmp57 * (_tmp100 * _tmp99 + _tmp102 * _tmp103) -
                         _tmp112 * _tmp57 * (-_tmp109 * _tmp110 + _tmp109 * _tmp87) -
                         _tmp119 * _tmp57 * (_tmp100 * _tmp117 + _tmp103 * _tmp118 + Scalar(1.0)) -
                         _tmp120 * _tmp57 * (-_tmp110 * _tmp123 + _tmp123 * _tmp87);
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp91 * _tmp93;
  const Scalar _tmp127 = _tmp73 + _tmp83;
  const Scalar _tmp128 = _tmp127 * _tmp77;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 + _tmp75 - _tmp80);
  const Scalar _tmp130 = _tmp127 * _tmp129;
  const Scalar _tmp131 = -_tmp126 * _tmp99 + _tmp130 * _tmp98 - _tmp71;
  const Scalar _tmp132 = Scalar(1.0) * _tmp74;
  const Scalar _tmp133 = Scalar(1.0) * _tmp129;
  const Scalar _tmp134 = _tmp114 + _tmp116 * _tmp130 - _tmp117 * _tmp126;
  const Scalar _tmp135 = _tmp127 * _tmp74;
  const Scalar _tmp136 = _tmp36 * fh1;
  const Scalar _tmp137 = _tmp111 * _tmp136 + Scalar(2.3544) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp138 = _tmp133 * _tmp97;
  const Scalar _tmp139 = -_tmp109 * _tmp91 + _tmp127 * _tmp138;
  const Scalar _tmp140 = _tmp128 * _tmp133 + Scalar(1.0);
  const Scalar _tmp141 = -_tmp107 * _tmp136 - Scalar(2.3544) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp142 = _tmp121 * _tmp129;
  const Scalar _tmp143 = _tmp74 * (-_tmp122 * _tmp126 - _tmp127 * _tmp142 + _tmp73);
  const Scalar _tmp144 =
      std::asinh(_tmp125 * (Scalar(1.0) * _tmp108 * (-_tmp131 * _tmp132 + _tmp133 * _tmp98) +
                            Scalar(1.0) * _tmp112 * (-_tmp132 * _tmp139 + _tmp138) +
                            Scalar(1.0) * _tmp119 * (_tmp116 * _tmp133 - _tmp132 * _tmp134) +
                            Scalar(1.0) * _tmp120 *
                                (-_tmp121 * _tmp133 - Scalar(1.0) * _tmp143 + Scalar(1.0)) +
                            Scalar(1.0) * _tmp137 * (_tmp133 * _tmp135 - _tmp133) +
                            Scalar(1.0) * _tmp141 * (-_tmp132 * _tmp140 + _tmp133 * _tmp77)));
  const Scalar _tmp145 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp146 = _tmp120 * _tmp123;
  const Scalar _tmp147 = _tmp109 * _tmp112;
  const Scalar _tmp148 =
      _tmp102 * _tmp108 * _tmp62 + _tmp118 * _tmp119 * _tmp62 - _tmp146 * _tmp90 - _tmp147 * _tmp90;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = _tmp141 * _tmp74;
  const Scalar _tmp151 = _tmp133 * _tmp137;
  const Scalar _tmp152 =
      std::asinh(_tmp149 * (_tmp108 * _tmp131 * _tmp74 + _tmp112 * _tmp139 * _tmp74 +
                            _tmp119 * _tmp134 * _tmp74 + _tmp120 * _tmp143 - _tmp135 * _tmp151 +
                            _tmp140 * _tmp150));
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp154 = _tmp93 * fh1;
  const Scalar _tmp155 =
      _tmp107 * _tmp154 * _tmp99 + _tmp111 * _tmp117 * _tmp154 + _tmp146 + _tmp147;
  const Scalar _tmp156 = Scalar(1.0) / (_tmp155);
  const Scalar _tmp157 = std::asinh(_tmp156 * (-_tmp108 * _tmp129 * _tmp98 - _tmp112 * _tmp138 -
                                               _tmp116 * _tmp119 * _tmp129 + _tmp120 * _tmp142 -
                                               _tmp133 * _tmp150 * _tmp76 + _tmp151));
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp155;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp31 *
          (Scalar(4.967784) * _tmp0 + std::cosh(Scalar(1.0) * _tmp30) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp30 * _tmp31 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp29), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp19 - 1),
                                     Scalar(2))))))) +
      _tmp36 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp145 *
          (Scalar(4.967784) * _tmp125 + std::cosh(Scalar(1.0) * _tmp144) -
           std::cosh(
               Scalar(0.1034955) * _tmp125 *
               (-_tmp144 * _tmp145 -
                Scalar(125.0) * std::sqrt(Scalar(
                                    Scalar(0.77439999999999998) *
                                        std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp48),
                                                 Scalar(2)) +
                                    std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp52),
                                             Scalar(2))))))) +
      _tmp67 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp153 *
          (Scalar(4.967784) * _tmp149 + std::cosh(Scalar(1.0) * _tmp152) -
           std::cosh(Scalar(0.1034955) * _tmp149 *
                     (-_tmp152 * _tmp153 -
                      Scalar(125.0) *
                          std::sqrt(Scalar(
                              Scalar(0.77439999999999998) *
                                  std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp39 - 1),
                                           Scalar(2)) +
                              std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp43 - 1),
                                       Scalar(2))))))) +
      _tmp65 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp158 *
          (Scalar(4.967784) * _tmp156 + std::cosh(Scalar(1.0) * _tmp157) -
           std::cosh(
               Scalar(0.1034955) * _tmp156 *
               (-_tmp157 * _tmp158 -
                Scalar(125.0) * std::sqrt(Scalar(
                                    Scalar(0.77439999999999998) *
                                        std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp84),
                                                 Scalar(2)) +
                                    std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp81 - 1),
                                             Scalar(2))))))) +
      _tmp79 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
