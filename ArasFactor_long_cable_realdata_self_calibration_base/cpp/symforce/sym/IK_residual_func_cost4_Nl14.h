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
 * Symbolic function: IK_residual_func_cost4_Nl14
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost4Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 473

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (151)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp11 * _tmp6;
  const Scalar _tmp13 = _tmp1 * _tmp8;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp20 = _tmp1 * _tmp11;
  const Scalar _tmp21 = _tmp6 * _tmp8;
  const Scalar _tmp22 = _tmp20 + _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp26 = _tmp23 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp30 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp31 = -_tmp5;
  const Scalar _tmp32 = _tmp16 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(1, 0);
  const Scalar _tmp34 = -_tmp19;
  const Scalar _tmp35 = _tmp26 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp38 = Scalar(1.0) * _tmp35;
  const Scalar _tmp39 = Scalar(1.0) * _tmp32;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 = -_tmp10 + _tmp15;
  const Scalar _tmp42 = _tmp31 + _tmp41;
  const Scalar _tmp43 = Scalar(1.0) / (_tmp40 + _tmp42);
  const Scalar _tmp44 = _tmp23 - _tmp25;
  const Scalar _tmp45 = _tmp34 + _tmp44;
  const Scalar _tmp46 = _tmp38 - _tmp45;
  const Scalar _tmp47 = _tmp43 * _tmp46;
  const Scalar _tmp48 = _tmp38 + _tmp39 * _tmp47;
  const Scalar _tmp49 = _tmp19 + _tmp44;
  const Scalar _tmp50 = _tmp41 + _tmp5;
  const Scalar _tmp51 = _tmp40 + _tmp50;
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp38 - _tmp49 - _tmp52);
  const Scalar _tmp54 = Scalar(1.0) * _tmp53;
  const Scalar _tmp55 = _tmp48 * _tmp53;
  const Scalar _tmp56 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp57 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp24 + Scalar(-0.010999999999999999);
  const Scalar _tmp58 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp59 = _tmp57 - _tmp58;
  const Scalar _tmp60 = _tmp56 + _tmp59;
  const Scalar _tmp61 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 - p_d(0, 0);
  const Scalar _tmp63 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_d(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = -_tmp56;
  const Scalar _tmp68 = _tmp57 + _tmp58;
  const Scalar _tmp69 = _tmp67 + _tmp68;
  const Scalar _tmp70 = _tmp36 - p_b(0, 0);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp33 - p_b(1, 0);
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp69 * _tmp73;
  const Scalar _tmp75 = _tmp62 * _tmp65;
  const Scalar _tmp76 = -_tmp66 + _tmp73 * _tmp75;
  const Scalar _tmp77 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp78 = _tmp77 - p_a(0, 0);
  const Scalar _tmp79 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_a(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp81;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp73 * _tmp82 - _tmp83);
  const Scalar _tmp85 = _tmp69 * _tmp82;
  const Scalar _tmp86 = _tmp59 + _tmp67;
  const Scalar _tmp87 = _tmp84 * (-_tmp73 * _tmp85 + _tmp83 * _tmp86);
  const Scalar _tmp88 = _tmp60 * _tmp66 - _tmp74 * _tmp75 - _tmp76 * _tmp87;
  const Scalar _tmp89 = _tmp84 * (-_tmp82 * _tmp86 + _tmp85);
  const Scalar _tmp90 = -_tmp47 * _tmp88 - _tmp60 * _tmp75 + _tmp69 * _tmp75 - _tmp76 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = 0;
  const Scalar _tmp93 = _tmp43 * (_tmp40 - _tmp51 * _tmp55 - _tmp88 * _tmp92);
  const Scalar _tmp94 = Scalar(1.0) * _tmp43;
  const Scalar _tmp95 = _tmp46 * _tmp87 * _tmp94 - Scalar(1.0) * _tmp89;
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))));
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp71 * _tmp96;
  const Scalar _tmp99 = _tmp98 * (-_tmp32 * _tmp70 * _tmp97 + _tmp35 * _tmp72 * _tmp97);
  const Scalar _tmp100 = _tmp84 * (_tmp42 * _tmp82 - _tmp45 * _tmp83 + _tmp82 * _tmp99);
  const Scalar _tmp101 = -_tmp100 * _tmp76 - _tmp49 * _tmp66 + _tmp50 * _tmp75 + _tmp75 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp91;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp90;
  const Scalar _tmp105 = _tmp104 * (-Scalar(1.0) * _tmp100 - _tmp102 * _tmp95);
  const Scalar _tmp106 = _tmp51 * _tmp53;
  const Scalar _tmp107 = _tmp91 * (_tmp105 + _tmp95);
  const Scalar _tmp108 = _tmp105 * _tmp106 - _tmp107 * _tmp88 - Scalar(1.0) * _tmp87;
  const Scalar _tmp109 = _tmp18 - p_c(1, 0);
  const Scalar _tmp110 = _tmp28 - p_c(0, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp109 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = _tmp110 * _tmp111;
  const Scalar _tmp115 = fh1 * (_tmp56 + _tmp68);
  const Scalar _tmp116 = _tmp114 * _tmp115 + Scalar(40.024799999999999) * _tmp22 + _tmp27 * fv1;
  const Scalar _tmp117 = _tmp51 * _tmp54;
  const Scalar _tmp118 = -_tmp112 * _tmp115 - Scalar(40.024799999999999) * _tmp14 - _tmp17 * fv1;
  const Scalar _tmp119 = _tmp52 * _tmp54 + Scalar(1.0);
  const Scalar _tmp120 = _tmp47 * _tmp54;
  const Scalar _tmp121 = _tmp104 * _tmp54;
  const Scalar _tmp122 = Scalar(1.0) * _tmp103;
  const Scalar _tmp123 = _tmp104 * _tmp117 - _tmp122 * _tmp88;
  const Scalar _tmp124 = fh1 * (_tmp112 * _tmp27 - _tmp114 * _tmp17);
  const Scalar _tmp125 = _tmp73 * _tmp87 + _tmp74;
  const Scalar _tmp126 = -_tmp125 * _tmp47 - _tmp69 + _tmp73 * _tmp89;
  const Scalar _tmp127 = _tmp104 * (_tmp100 * _tmp73 - _tmp102 * _tmp126 - _tmp99);
  const Scalar _tmp128 = _tmp91 * (_tmp126 + _tmp127);
  const Scalar _tmp129 = _tmp106 * _tmp127 + _tmp125 - _tmp128 * _tmp88;
  const Scalar _tmp130 = _tmp114 * fh1;
  const Scalar _tmp131 = -_tmp107 * _tmp76 + Scalar(1.0);
  const Scalar _tmp132 = _tmp82 * _tmp84;
  const Scalar _tmp133 = _tmp132 * _tmp76;
  const Scalar _tmp134 = -_tmp128 * _tmp76 - _tmp73;
  const Scalar _tmp135 = -_tmp113 * _tmp98 * (_tmp107 * _tmp75 + _tmp131 * _tmp132) -
                         _tmp124 * _tmp98 * (-_tmp122 * _tmp133 + _tmp122 * _tmp75) -
                         _tmp130 * _tmp98 * (_tmp128 * _tmp75 + _tmp132 * _tmp134 + Scalar(1.0)) -
                         _tmp37 * _tmp98 * (-_tmp133 * _tmp92 + _tmp75 * _tmp92);
  const Scalar _tmp136 = Scalar(1.0) / (_tmp135);
  const Scalar _tmp137 = std::asinh(
      _tmp136 * (Scalar(1.0) * _tmp113 * (_tmp105 * _tmp54 - _tmp108 * _tmp94) +
                 Scalar(1.0) * _tmp116 * (_tmp117 * _tmp43 - _tmp54) +
                 Scalar(1.0) * _tmp118 * (-_tmp119 * _tmp94 + _tmp120) +
                 Scalar(1.0) * _tmp124 * (_tmp121 - _tmp123 * _tmp94) +
                 Scalar(1.0) * _tmp130 * (_tmp127 * _tmp54 - _tmp129 * _tmp94) +
                 Scalar(1.0) * _tmp37 * (-_tmp48 * _tmp54 - Scalar(1.0) * _tmp93 + Scalar(1.0))));
  const Scalar _tmp138 = Scalar(1.4083112389913199) * _tmp135;
  const Scalar _tmp139 = _tmp37 * _tmp92;
  const Scalar _tmp140 = _tmp76 * _tmp84;
  const Scalar _tmp141 = _tmp122 * _tmp124;
  const Scalar _tmp142 = _tmp113 * _tmp131 * _tmp84 + _tmp130 * _tmp134 * _tmp84 -
                         _tmp139 * _tmp140 - _tmp140 * _tmp141;
  const Scalar _tmp143 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp144 = _tmp116 * _tmp54;
  const Scalar _tmp145 =
      std::asinh(_tmp143 * (_tmp108 * _tmp113 * _tmp43 + _tmp118 * _tmp119 * _tmp43 +
                            _tmp123 * _tmp124 * _tmp43 + _tmp129 * _tmp130 * _tmp43 -
                            _tmp144 * _tmp43 * _tmp51 + _tmp37 * _tmp93));
  const Scalar _tmp146 = Scalar(1.4083112389913199) * _tmp142;
  const Scalar _tmp147 = _tmp107 * _tmp113 + _tmp128 * _tmp130 + _tmp139 + _tmp141;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 =
      std::asinh(_tmp148 * (-_tmp105 * _tmp113 * _tmp53 - _tmp118 * _tmp120 - _tmp121 * _tmp124 -
                            _tmp127 * _tmp130 * _tmp53 + _tmp144 + _tmp37 * _tmp55));
  const Scalar _tmp150 = Scalar(1.4083112389913199) * _tmp147;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp30 * (-std::sinh(Scalar(1.0) * _tmp29) -
                std::sinh(Scalar(0.71007031138673404) * _tmp0 *
                          (-_tmp29 * _tmp30 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_c(0, 0)), Scalar(2))))))) -
      encoder(0, 0);
  _res(1, 0) =
      _tmp138 * (-std::sinh(Scalar(1.0) * _tmp137) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp136 *
                           (-_tmp137 * _tmp138 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp33 + p_b(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp36 + p_b(0, 0)), Scalar(2))))))) -
      encoder(1, 0);
  _res(2, 0) =
      _tmp146 * (-std::sinh(Scalar(1.0) * _tmp145) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp143 *
                           (-_tmp145 * _tmp146 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp77 + p_a(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp79 + p_a(1, 0)), Scalar(2))))))) -
      encoder(2, 0);
  _res(3, 0) =
      _tmp150 * (-std::sinh(Scalar(1.0) * _tmp149) -
                 std::sinh(Scalar(0.71007031138673404) * _tmp148 *
                           (-_tmp149 * _tmp150 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_d(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp63 + p_d(1, 0)), Scalar(2))))))) -
      encoder(3, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym