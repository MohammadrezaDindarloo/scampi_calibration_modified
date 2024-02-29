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
 * Symbolic function: IK_residual_func_cost3_wrt_pa_Nl5
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost3WrtPaNl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 353

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (135)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp2;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp13 = _tmp2 * _tmp9;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = _tmp11 + _tmp14;
  const Scalar _tmp19 = _tmp18 + _tmp4;
  const Scalar _tmp20 = _tmp19 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp22 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp24 = _tmp0 * _tmp7;
  const Scalar _tmp25 = _tmp6 * _tmp9;
  const Scalar _tmp26 =
      -Scalar(0.010999999999999999) * _tmp24 + Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp23 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp20, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp20 * _tmp30;
  const Scalar _tmp32 = _tmp18 + _tmp5;
  const Scalar _tmp33 = _tmp32 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(1.0) / (_tmp33);
  const Scalar _tmp35 = -_tmp21;
  const Scalar _tmp36 = _tmp27 + _tmp35;
  const Scalar _tmp37 = _tmp36 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp38 = _tmp34 * _tmp37;
  const Scalar _tmp39 = _tmp29 * _tmp30;
  const Scalar _tmp40 = Scalar(1.0) / (_tmp31 * _tmp38 - _tmp39);
  const Scalar _tmp41 =
      std::sqrt(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp37, Scalar(2))));
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp34 * _tmp41;
  const Scalar _tmp44 = _tmp43 * (_tmp32 * _tmp37 * _tmp42 - _tmp33 * _tmp36 * _tmp42);
  const Scalar _tmp45 = -_tmp19 * _tmp39 + _tmp28 * _tmp31 + _tmp31 * _tmp44;
  const Scalar _tmp46 = _tmp38 * _tmp40;
  const Scalar _tmp47 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp48 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp49 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp47 + _tmp50;
  const Scalar _tmp52 = -_tmp47 + _tmp50;
  const Scalar _tmp53 = _tmp31 * _tmp52;
  const Scalar _tmp54 = -_tmp31 * _tmp51 + _tmp53;
  const Scalar _tmp55 = _tmp38 * _tmp52;
  const Scalar _tmp56 = -_tmp38 * _tmp53 + _tmp39 * _tmp51;
  const Scalar _tmp57 = Scalar(1.0) * _tmp36;
  const Scalar _tmp58 = Scalar(1.0) * _tmp32;
  const Scalar _tmp59 = (-_tmp19 + _tmp58) / (_tmp28 - _tmp57);
  const Scalar _tmp60 = _tmp46 * _tmp54 - _tmp52 - _tmp59 * (_tmp46 * _tmp56 + _tmp55);
  const Scalar _tmp61 = _tmp15 + _tmp4;
  const Scalar _tmp62 = _tmp61 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp63 = -_tmp23 + _tmp26;
  const Scalar _tmp64 = _tmp21 + _tmp63;
  const Scalar _tmp65 = _tmp64 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = _tmp47 + _tmp48 - _tmp49;
  const Scalar _tmp69 = _tmp65 * _tmp66;
  const Scalar _tmp70 = _tmp38 * _tmp67 - _tmp69;
  const Scalar _tmp71 = _tmp40 * _tmp70;
  const Scalar _tmp72 = _tmp52 * _tmp67 - _tmp54 * _tmp71 -
                        _tmp59 * (-_tmp55 * _tmp67 - _tmp56 * _tmp71 + _tmp68 * _tmp69) -
                        _tmp67 * _tmp68;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _tmp44 * _tmp67 - _tmp45 * _tmp71 - _tmp61 * _tmp69 + _tmp64 * _tmp67;
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp77 = _tmp72 * _tmp76;
  const Scalar _tmp78 = _tmp60 + _tmp77 * (-_tmp44 + _tmp45 * _tmp46 - _tmp60 * _tmp75);
  const Scalar _tmp79 = _tmp70 * _tmp73;
  const Scalar _tmp80 = _tmp40 * (-_tmp38 - _tmp78 * _tmp79);
  const Scalar _tmp81 = _tmp67 * _tmp73;
  const Scalar _tmp82 = _tmp31 * _tmp80 + _tmp78 * _tmp81 + Scalar(1.0);
  const Scalar _tmp83 = std::pow(_tmp17, Scalar(2));
  const Scalar _tmp84 = _tmp35 + _tmp63;
  const Scalar _tmp85 = _tmp84 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp86 = std::pow(_tmp85, Scalar(2));
  const Scalar _tmp87 = _tmp83 + _tmp86;
  const Scalar _tmp88 = std::pow(_tmp87, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp88 * fh1;
  const Scalar _tmp90 = _tmp43 * _tmp89;
  const Scalar _tmp91 = _tmp82 * _tmp90;
  const Scalar _tmp92 = _tmp84 * _tmp88;
  const Scalar _tmp93 = _tmp16 * _tmp88;
  const Scalar _tmp94 = -_tmp17 * _tmp92 + _tmp85 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) * _tmp76;
  const Scalar _tmp96 = _tmp31 * _tmp71;
  const Scalar _tmp97 = _tmp43 * (_tmp67 * _tmp95 - _tmp95 * _tmp96);
  const Scalar _tmp98 = _tmp97 * fh1;
  const Scalar _tmp99 = Scalar(1.0) * _tmp40;
  const Scalar _tmp100 = -_tmp54 * _tmp99 + _tmp56 * _tmp59 * _tmp99;
  const Scalar _tmp101 = _tmp100 + _tmp77 * (-_tmp100 * _tmp75 - _tmp45 * _tmp99);
  const Scalar _tmp102 = _tmp40 * (-_tmp101 * _tmp79 + Scalar(1.0));
  const Scalar _tmp103 = _tmp101 * _tmp81 + _tmp102 * _tmp31;
  const Scalar _tmp104 = _tmp103 * _tmp90;
  const Scalar _tmp105 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp106 = _tmp57 * _tmp59 + _tmp58;
  const Scalar _tmp107 = 0;
  const Scalar _tmp108 =
      std::exp(_tmp104 * _tmp85 + _tmp105 * _tmp43 * (_tmp107 * _tmp67 - _tmp107 * _tmp96) +
               _tmp17 * _tmp91 + _tmp94 * _tmp98);
  const Scalar _tmp109 = _tmp103 * _tmp43;
  const Scalar _tmp110 = _tmp17 * _tmp85;
  const Scalar _tmp111 = std::pow(_tmp87, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp112 = _tmp111 * fh1;
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp112 * _tmp83;
  const Scalar _tmp115 = _tmp43 * _tmp82;
  const Scalar _tmp116 = _tmp111 * _tmp84;
  const Scalar _tmp117 = _tmp111 * _tmp16;
  const Scalar _tmp118 = _tmp110 * _tmp117 - _tmp116 * _tmp83 + _tmp92;
  const Scalar _tmp119 = _tmp95 * fh1;
  const Scalar _tmp120 = _tmp119 * _tmp94;
  const Scalar _tmp121 = _tmp80 * _tmp89;
  const Scalar _tmp122 = _tmp102 * _tmp89;
  const Scalar _tmp123 = _tmp105 * _tmp107;
  const Scalar _tmp124 =
      std::exp(_tmp120 * _tmp71 - _tmp121 * _tmp17 - _tmp122 * _tmp85 + _tmp123 * _tmp71);
  const Scalar _tmp125 = _tmp118 * _tmp119;
  const Scalar _tmp126 = _tmp73 * _tmp89;
  const Scalar _tmp127 = _tmp126 * _tmp78;
  const Scalar _tmp128 = _tmp101 * _tmp126;
  const Scalar _tmp129 = std::exp(-_tmp120 - _tmp123 - _tmp127 * _tmp17 - _tmp128 * _tmp85);
  const Scalar _tmp130 = _tmp101 * _tmp73;
  const Scalar _tmp131 = _tmp73 * _tmp78;
  const Scalar _tmp132 = _tmp112 * _tmp86;
  const Scalar _tmp133 = fh1 * (-_tmp110 * _tmp116 + _tmp117 * _tmp86 - _tmp93);
  const Scalar _tmp134 = _tmp133 * _tmp95;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp108 * (-_tmp109 * _tmp113 - _tmp114 * _tmp115 - _tmp118 * _tmp98 + _tmp91);
  _res(2, 0) = -_tmp124 * (_tmp102 * _tmp113 + _tmp114 * _tmp80 - _tmp121 - _tmp125 * _tmp71);
  _res(3, 0) = -_tmp129 * (_tmp113 * _tmp130 + _tmp114 * _tmp131 + _tmp125 - _tmp127);
  _res(0, 1) = 0;
  _res(1, 1) = -_tmp108 * (_tmp104 - _tmp109 * _tmp132 - _tmp113 * _tmp115 - _tmp133 * _tmp97);
  _res(2, 1) = -_tmp124 * (_tmp102 * _tmp132 + _tmp113 * _tmp80 - _tmp122 - _tmp134 * _tmp71);
  _res(3, 1) = -_tmp129 * (_tmp113 * _tmp131 - _tmp128 + _tmp130 * _tmp132 + _tmp134);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
