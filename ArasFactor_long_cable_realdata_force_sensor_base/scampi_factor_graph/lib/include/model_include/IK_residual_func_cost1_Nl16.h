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
  // Total ops: 503

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (159)
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
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp1 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = _tmp1 * _tmp7;
  const Scalar _tmp21 = _tmp6 * _tmp9;
  const Scalar _tmp22 = _tmp20 - _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp26 = _tmp23 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp24 + Scalar(-0.010999999999999999);
  const Scalar _tmp33 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp31 + _tmp34;
  const Scalar _tmp36 = _tmp23 - _tmp25;
  const Scalar _tmp37 = _tmp19 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(1, 0);
  const Scalar _tmp39 = _tmp38 + Scalar(110.0);
  const Scalar _tmp40 = _tmp12 - _tmp15;
  const Scalar _tmp41 = _tmp40 + _tmp5;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = _tmp42 + Scalar(-125.0);
  const Scalar _tmp44 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp43, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = _tmp43 * _tmp44;
  const Scalar _tmp46 = -_tmp19;
  const Scalar _tmp47 = _tmp36 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(110.0);
  const Scalar _tmp50 = -_tmp5;
  const Scalar _tmp51 = _tmp40 + _tmp50;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 + Scalar(125.0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp26 + _tmp46;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(-110.0);
  const Scalar _tmp59 = _tmp16 + _tmp50;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(125.0);
  const Scalar _tmp62 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp65 * (-_tmp56 * _tmp61 * _tmp63 + _tmp58 * _tmp59 * _tmp63);
  const Scalar _tmp67 = _tmp49 * _tmp54;
  const Scalar _tmp68 = _tmp47 * _tmp55 - _tmp51 * _tmp67 + _tmp55 * _tmp66;
  const Scalar _tmp69 = _tmp58 * _tmp64;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp55 * _tmp69 - _tmp67);
  const Scalar _tmp71 = _tmp39 * _tmp44;
  const Scalar _tmp72 = _tmp45 * _tmp69 - _tmp71;
  const Scalar _tmp73 = _tmp70 * _tmp72;
  const Scalar _tmp74 = _tmp37 * _tmp45 - _tmp41 * _tmp71 + _tmp45 * _tmp66 - _tmp68 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp75;
  const Scalar _tmp77 = _tmp55 * _tmp73;
  const Scalar _tmp78 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp79 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp78 * _tmp80;
  const Scalar _tmp83 = fh1 * (_tmp17 * _tmp82 - _tmp27 * _tmp81);
  const Scalar _tmp84 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp85 = -_tmp31;
  const Scalar _tmp86 = _tmp34 + _tmp85;
  const Scalar _tmp87 = _tmp32 - _tmp33;
  const Scalar _tmp88 = _tmp31 + _tmp87;
  const Scalar _tmp89 = _tmp45 * _tmp88;
  const Scalar _tmp90 = _tmp85 + _tmp87;
  const Scalar _tmp91 = _tmp69 * _tmp88;
  const Scalar _tmp92 = -_tmp55 * _tmp91 + _tmp67 * _tmp90;
  const Scalar _tmp93 = -_tmp69 * _tmp89 + _tmp71 * _tmp86 - _tmp73 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) * _tmp56;
  const Scalar _tmp95 = -_tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp47 + _tmp95);
  const Scalar _tmp97 = Scalar(1.0) * _tmp59;
  const Scalar _tmp98 = _tmp96 * (-_tmp51 + _tmp97);
  const Scalar _tmp99 = _tmp55 * _tmp88 - _tmp55 * _tmp90;
  const Scalar _tmp100 = -_tmp45 * _tmp86 - _tmp73 * _tmp99 + _tmp89 - _tmp93 * _tmp98;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp102 = _tmp94 * _tmp98 + _tmp97;
  const Scalar _tmp103 = 0;
  const Scalar _tmp104 = _tmp101 * _tmp103;
  const Scalar _tmp105 = Scalar(1.0) * _tmp70;
  const Scalar _tmp106 = _tmp105 * _tmp92;
  const Scalar _tmp107 = -_tmp105 * _tmp99 + _tmp106 * _tmp98;
  const Scalar _tmp108 = _tmp101 * _tmp74;
  const Scalar _tmp109 = _tmp100 * _tmp75;
  const Scalar _tmp110 = _tmp109 * (-_tmp105 * _tmp68 - _tmp107 * _tmp108);
  const Scalar _tmp111 = _tmp107 + _tmp110;
  const Scalar _tmp112 = _tmp101 * _tmp72;
  const Scalar _tmp113 = -_tmp111 * _tmp112 + Scalar(1.0);
  const Scalar _tmp114 = _tmp55 * _tmp70;
  const Scalar _tmp115 = _tmp101 * _tmp45;
  const Scalar _tmp116 = _tmp82 * fh1;
  const Scalar _tmp117 = _tmp69 * _tmp70;
  const Scalar _tmp118 = _tmp117 * _tmp92 + _tmp91;
  const Scalar _tmp119 = _tmp117 * _tmp99 - _tmp118 * _tmp98 - _tmp88;
  const Scalar _tmp120 = _tmp109 * (-_tmp108 * _tmp119 + _tmp117 * _tmp68 - _tmp66);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = -_tmp112 * _tmp121 - _tmp69;
  const Scalar _tmp123 = _tmp81 * fh1;
  const Scalar _tmp124 = -_tmp116 * _tmp65 * (_tmp111 * _tmp115 + _tmp113 * _tmp114) -
                         _tmp123 * _tmp65 * (_tmp114 * _tmp122 + _tmp115 * _tmp121 + Scalar(1.0)) -
                         _tmp65 * _tmp83 * (_tmp45 * _tmp76 - _tmp76 * _tmp77) -
                         _tmp65 * _tmp84 * (_tmp104 * _tmp45 - _tmp104 * _tmp77);
  const Scalar _tmp125 = Scalar(1.0) / (_tmp124);
  const Scalar _tmp126 = _tmp37 + _tmp95;
  const Scalar _tmp127 = _tmp126 * _tmp98;
  const Scalar _tmp128 = Scalar(1.0) / (-_tmp127 - _tmp41 + _tmp97);
  const Scalar _tmp129 = _tmp126 * _tmp128;
  const Scalar _tmp130 = _tmp101 * _tmp93;
  const Scalar _tmp131 = _tmp118 + _tmp120 * _tmp129 - _tmp121 * _tmp130;
  const Scalar _tmp132 = Scalar(1.0) * _tmp96;
  const Scalar _tmp133 = Scalar(1.0) * _tmp128;
  const Scalar _tmp134 = _tmp35 * fh1;
  const Scalar _tmp135 = Scalar(40.024799999999999) * _tmp11 + _tmp134 * _tmp81 + _tmp17 * fv1;
  const Scalar _tmp136 = _tmp126 * _tmp96;
  const Scalar _tmp137 = -_tmp106 + _tmp110 * _tmp129 - _tmp111 * _tmp130;
  const Scalar _tmp138 = _tmp109 * _tmp133;
  const Scalar _tmp139 = _tmp126 * _tmp138 - _tmp76 * _tmp93;
  const Scalar _tmp140 = _tmp127 * _tmp133 + Scalar(1.0);
  const Scalar _tmp141 = _tmp133 * _tmp98;
  const Scalar _tmp142 = -_tmp134 * _tmp82 - Scalar(40.024799999999999) * _tmp22 - _tmp27 * fv1;
  const Scalar _tmp143 = _tmp102 * _tmp128;
  const Scalar _tmp144 = -_tmp103 * _tmp130 - _tmp126 * _tmp143 + _tmp95;
  const Scalar _tmp145 = std::asinh(
      _tmp125 * (Scalar(1.0) * _tmp116 * (_tmp110 * _tmp133 - _tmp132 * _tmp137) +
                 Scalar(1.0) * _tmp123 * (_tmp120 * _tmp133 - _tmp131 * _tmp132) +
                 Scalar(1.0) * _tmp135 * (_tmp133 * _tmp136 - _tmp133) +
                 Scalar(1.0) * _tmp142 * (-_tmp132 * _tmp140 + _tmp141) +
                 Scalar(1.0) * _tmp83 * (-_tmp132 * _tmp139 + _tmp138) +
                 Scalar(1.0) * _tmp84 * (-_tmp102 * _tmp133 - _tmp132 * _tmp144 + Scalar(1.0))));
  const Scalar _tmp146 = Scalar(1.4083112389913199) * _tmp124;
  const Scalar _tmp147 = _tmp133 * _tmp135;
  const Scalar _tmp148 = _tmp104 * _tmp84;
  const Scalar _tmp149 = _tmp76 * _tmp83;
  const Scalar _tmp150 =
      _tmp113 * _tmp116 * _tmp70 + _tmp122 * _tmp123 * _tmp70 - _tmp148 * _tmp73 - _tmp149 * _tmp73;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 =
      std::asinh(_tmp151 * (_tmp116 * _tmp137 * _tmp96 + _tmp123 * _tmp131 * _tmp96 -
                            _tmp136 * _tmp147 + _tmp139 * _tmp83 * _tmp96 +
                            _tmp140 * _tmp142 * _tmp96 + _tmp144 * _tmp84 * _tmp96));
  const Scalar _tmp153 = Scalar(1.4083112389913199) * _tmp150;
  const Scalar _tmp154 = _tmp101 * fh1;
  const Scalar _tmp155 =
      _tmp111 * _tmp154 * _tmp82 + _tmp121 * _tmp154 * _tmp81 + _tmp148 + _tmp149;
  const Scalar _tmp156 = Scalar(1.0) / (_tmp155);
  const Scalar _tmp157 =
      std::asinh(_tmp156 * (-_tmp110 * _tmp116 * _tmp128 - _tmp120 * _tmp123 * _tmp128 -
                            _tmp138 * _tmp83 - _tmp141 * _tmp142 + _tmp143 * _tmp84 + _tmp147));
  const Scalar _tmp158 = Scalar(1.4083112389913199) * _tmp155;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp30 *
          (Scalar(34.083374946563197) * _tmp0 + std::cosh(Scalar(1.0) * _tmp29) -
           std::cosh(
               Scalar(0.71007031138673404) * _tmp0 *
               (-_tmp29 * _tmp30 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp18), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp28),
                                     Scalar(2))))))) +
      _tmp35 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp146 *
          (Scalar(34.083374946563197) * _tmp125 + std::cosh(Scalar(1.0) * _tmp145) -
           std::cosh(
               Scalar(0.71007031138673404) * _tmp125 *
               (-_tmp145 * _tmp146 -
                Scalar(125.0) * std::sqrt(Scalar(
                                    Scalar(0.77439999999999998) *
                                        std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp57),
                                                 Scalar(2)) +
                                    std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp60 - 1),
                                             Scalar(2))))))) +
      _tmp88 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp153 *
          (Scalar(34.083374946563197) * _tmp151 + std::cosh(Scalar(1.0) * _tmp152) -
           std::cosh(Scalar(0.71007031138673404) * _tmp151 *
                     (-_tmp152 * _tmp153 -
                      Scalar(125.0) *
                          std::sqrt(Scalar(
                              Scalar(0.77439999999999998) *
                                  std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp48 - 1),
                                           Scalar(2)) +
                              std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp52 - 1),
                                       Scalar(2))))))) +
      _tmp90 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp158 *
          (Scalar(34.083374946563197) * _tmp156 + std::cosh(Scalar(1.0) * _tmp157) -
           std::cosh(
               Scalar(0.71007031138673404) * _tmp156 *
               (-_tmp157 * _tmp158 -
                Scalar(125.0) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp42), Scalar(2)) +
                        Scalar(0.77439999999999998) *
                            std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp38 - 1),
                                     Scalar(2))))))) +
      _tmp86 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
