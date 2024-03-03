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
 * Symbolic function: IK_residual_func_cost3_wrt_pb_Nl7
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
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPbNl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 354

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (131)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -_tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = _tmp15 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp17 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp21 = _tmp1 * _tmp5;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp27 = -_tmp7;
  const Scalar _tmp28 = _tmp10 + _tmp13;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp31 = std::pow(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp30, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 = _tmp26 * _tmp31;
  const Scalar _tmp33 = _tmp30 * _tmp31;
  const Scalar _tmp34 = _tmp22 - _tmp23;
  const Scalar _tmp35 = _tmp19 + _tmp34;
  const Scalar _tmp36 = _tmp35 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp37 = Scalar(1.0) / (_tmp36);
  const Scalar _tmp38 = _tmp14 + _tmp27;
  const Scalar _tmp39 = _tmp38 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp40 = _tmp37 * _tmp39;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp32 * _tmp40 - _tmp33);
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp43 = -Scalar(0.010999999999999999) * _tmp17 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp45 = _tmp43 - _tmp44;
  const Scalar _tmp46 = _tmp42 + _tmp45;
  const Scalar _tmp47 = -_tmp42 + _tmp45;
  const Scalar _tmp48 = _tmp40 * _tmp47;
  const Scalar _tmp49 = -_tmp32 * _tmp48 + _tmp33 * _tmp46;
  const Scalar _tmp50 = Scalar(1.0) * _tmp41;
  const Scalar _tmp51 = Scalar(1.0) * _tmp38;
  const Scalar _tmp52 = Scalar(1.0) * _tmp35;
  const Scalar _tmp53 = (-_tmp25 + _tmp52) / (_tmp29 - _tmp51);
  const Scalar _tmp54 = -_tmp32 * _tmp46 + _tmp32 * _tmp47;
  const Scalar _tmp55 = _tmp49 * _tmp50 * _tmp53 - _tmp50 * _tmp54;
  const Scalar _tmp56 = _tmp18 + _tmp24;
  const Scalar _tmp57 = _tmp56 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp58 = _tmp28 + _tmp7;
  const Scalar _tmp59 = _tmp58 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp47 * _tmp61;
  const Scalar _tmp63 = _tmp42 + _tmp43 + _tmp44;
  const Scalar _tmp64 = _tmp59 * _tmp60;
  const Scalar _tmp65 = _tmp40 * _tmp61 - _tmp64;
  const Scalar _tmp66 = _tmp41 * _tmp65;
  const Scalar _tmp67 = -_tmp53 * (-_tmp40 * _tmp62 - _tmp49 * _tmp66 + _tmp63 * _tmp64) -
                        _tmp54 * _tmp66 - _tmp61 * _tmp63 + _tmp62;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp39, Scalar(2))));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp37 * _tmp69;
  const Scalar _tmp72 = _tmp71 * (_tmp35 * _tmp39 * _tmp70 - _tmp36 * _tmp38 * _tmp70);
  const Scalar _tmp73 = -_tmp25 * _tmp33 + _tmp29 * _tmp32 + _tmp32 * _tmp72;
  const Scalar _tmp74 = -_tmp56 * _tmp64 + _tmp58 * _tmp61 + _tmp61 * _tmp72 - _tmp66 * _tmp73;
  const Scalar _tmp75 = _tmp68 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp77 = _tmp67 * _tmp76;
  const Scalar _tmp78 = _tmp55 + _tmp77 * (-_tmp50 * _tmp73 - _tmp55 * _tmp75);
  const Scalar _tmp79 = _tmp65 * _tmp68;
  const Scalar _tmp80 = _tmp41 * (-_tmp78 * _tmp79 + Scalar(1.0));
  const Scalar _tmp81 = _tmp68 * _tmp78;
  const Scalar _tmp82 = _tmp32 * _tmp80 + _tmp61 * _tmp81;
  const Scalar _tmp83 = _tmp18 + _tmp34;
  const Scalar _tmp84 = _tmp83 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp85 = std::pow(_tmp84, Scalar(2));
  const Scalar _tmp86 = std::pow(_tmp16, Scalar(2));
  const Scalar _tmp87 = _tmp85 + _tmp86;
  const Scalar _tmp88 = std::pow(_tmp87, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp88 * fh1;
  const Scalar _tmp90 = _tmp71 * _tmp89;
  const Scalar _tmp91 = _tmp82 * _tmp90;
  const Scalar _tmp92 = _tmp83 * _tmp88;
  const Scalar _tmp93 = _tmp15 * _tmp88;
  const Scalar _tmp94 = fh1 * (_tmp16 * _tmp92 - _tmp84 * _tmp93);
  const Scalar _tmp95 = _tmp50 * _tmp65 * _tmp76;
  const Scalar _tmp96 = Scalar(1.0) * _tmp76;
  const Scalar _tmp97 = _tmp71 * (-_tmp32 * _tmp95 + _tmp61 * _tmp96);
  const Scalar _tmp98 = _tmp40 * _tmp41;
  const Scalar _tmp99 = -_tmp47 - _tmp53 * (_tmp48 + _tmp49 * _tmp98) + _tmp54 * _tmp98;
  const Scalar _tmp100 = _tmp77 * (-_tmp72 + _tmp73 * _tmp98 - _tmp75 * _tmp99) + _tmp99;
  const Scalar _tmp101 = _tmp41 * (-_tmp100 * _tmp79 - _tmp40);
  const Scalar _tmp102 = _tmp100 * _tmp68;
  const Scalar _tmp103 = _tmp101 * _tmp32 + _tmp102 * _tmp61 + Scalar(1.0);
  const Scalar _tmp104 = _tmp103 * _tmp90;
  const Scalar _tmp105 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp106 = _tmp51 * _tmp53 + _tmp52;
  const Scalar _tmp107 = 0;
  const Scalar _tmp108 = std::exp(
      _tmp104 * _tmp84 + _tmp105 * _tmp71 * (-_tmp107 * _tmp32 * _tmp66 + _tmp107 * _tmp61) +
      _tmp16 * _tmp91 + _tmp94 * _tmp97);
  const Scalar _tmp109 = std::pow(_tmp87, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp110 * _tmp85;
  const Scalar _tmp112 = _tmp103 * _tmp71;
  const Scalar _tmp113 = _tmp109 * _tmp15;
  const Scalar _tmp114 = _tmp109 * _tmp83;
  const Scalar _tmp115 = _tmp16 * _tmp84;
  const Scalar _tmp116 = -_tmp113 * _tmp85 + _tmp114 * _tmp115 + _tmp93;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = _tmp110 * _tmp115;
  const Scalar _tmp119 = _tmp71 * _tmp82;
  const Scalar _tmp120 = _tmp105 * _tmp107;
  const Scalar _tmp121 = _tmp101 * _tmp89;
  const Scalar _tmp122 = _tmp80 * _tmp89;
  const Scalar _tmp123 =
      std::exp(_tmp120 * _tmp66 - _tmp121 * _tmp84 - _tmp122 * _tmp16 + _tmp94 * _tmp95);
  const Scalar _tmp124 = _tmp81 * _tmp89;
  const Scalar _tmp125 = _tmp102 * _tmp89;
  const Scalar _tmp126 = std::exp(-_tmp120 - _tmp124 * _tmp16 - _tmp125 * _tmp84 - _tmp94 * _tmp96);
  const Scalar _tmp127 = _tmp96 * fh1;
  const Scalar _tmp128 = _tmp110 * _tmp86;
  const Scalar _tmp129 = -_tmp113 * _tmp115 + _tmp114 * _tmp86 - _tmp92;
  const Scalar _tmp130 = _tmp129 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp108 * (_tmp104 - _tmp111 * _tmp112 - _tmp117 * _tmp97 - _tmp118 * _tmp119);
  _res(2, 0) = -_tmp123 * (_tmp101 * _tmp111 - _tmp117 * _tmp95 + _tmp118 * _tmp80 - _tmp121);
  _res(3, 0) = -_tmp126 * (_tmp102 * _tmp111 + _tmp116 * _tmp127 + _tmp118 * _tmp81 - _tmp125);
  _res(0, 1) = 0;
  _res(1, 1) = -_tmp108 * (-_tmp112 * _tmp118 - _tmp119 * _tmp128 - _tmp130 * _tmp97 + _tmp91);
  _res(2, 1) = -_tmp123 * (_tmp101 * _tmp118 - _tmp122 + _tmp128 * _tmp80 - _tmp130 * _tmp95);
  _res(3, 1) = -_tmp126 * (_tmp102 * _tmp118 - _tmp124 + _tmp127 * _tmp129 + _tmp128 * _tmp81);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
