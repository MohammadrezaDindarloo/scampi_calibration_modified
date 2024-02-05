// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: FK_residual_func_cost4
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     distance_measure: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost4(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 478

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (153)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp8 = 2 * _tmp1;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 =
      -_DeltaRot[0] * _TransformationMatrix[0] - _DeltaRot[1] * _TransformationMatrix[1] -
      _DeltaRot[2] * _TransformationMatrix[2] + _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp11 = 2 * _tmp10 * _tmp3;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp13 = 2 * _tmp7;
  const Scalar _tmp14 = _tmp13 * _tmp3;
  const Scalar _tmp15 = _tmp10 * _tmp8;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp12 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp6;
  const Scalar _tmp20 = _TransformationMatrix[5] + _tmp19;
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp3 * _tmp8;
  const Scalar _tmp25 = _tmp10 * _tmp13;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _TransformationMatrix[4] + _tmp30;
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = _tmp22 + _tmp29;
  const Scalar _tmp35 = _TransformationMatrix[4] + _tmp34;
  const Scalar _tmp36 = _tmp12 + _tmp17;
  const Scalar _tmp37 = _tmp36 + _tmp6;
  const Scalar _tmp38 = _TransformationMatrix[5] + _tmp37;
  const Scalar _tmp39 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp40 = _tmp38 - p_b(1, 0);
  const Scalar _tmp41 = _tmp35 - p_b(0, 0);
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp27 + _tmp28;
  const Scalar _tmp45 = _tmp22 + _tmp44;
  const Scalar _tmp46 = _TransformationMatrix[4] + _tmp45;
  const Scalar _tmp47 = _tmp46 - p_c(0, 0);
  const Scalar _tmp48 = _tmp36 + _tmp5;
  const Scalar _tmp49 = _TransformationMatrix[5] + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_c(1, 0);
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = _tmp50 * _tmp51;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp43 * _tmp52 - _tmp53);
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = Scalar(1.0) * _tmp34;
  const Scalar _tmp57 = Scalar(1.0) * _tmp37;
  const Scalar _tmp58 = -_tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp48 + _tmp58);
  const Scalar _tmp60 = _tmp59 * (-_tmp45 + _tmp56);
  const Scalar _tmp61 = _tmp56 + _tmp57 * _tmp60;
  const Scalar _tmp62 = 0;
  const Scalar _tmp63 = _tmp18 + _tmp5;
  const Scalar _tmp64 = _TransformationMatrix[5] + _tmp63;
  const Scalar _tmp65 = _tmp64 - p_d(1, 0);
  const Scalar _tmp66 = _tmp23 + _tmp44;
  const Scalar _tmp67 = _TransformationMatrix[4] + _tmp66;
  const Scalar _tmp68 = _tmp67 - p_d(0, 0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp65 * _tmp69;
  const Scalar _tmp71 = _tmp68 * _tmp69;
  const Scalar _tmp72 = _tmp43 * _tmp71 - _tmp70;
  const Scalar _tmp73 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 =
      -Scalar(0.010999999999999999) * _tmp2 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp76 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp77 = _tmp75 + _tmp76;
  const Scalar _tmp78 = _tmp74 + _tmp77;
  const Scalar _tmp79 = _tmp75 - _tmp76;
  const Scalar _tmp80 = _tmp73 + _tmp79;
  const Scalar _tmp81 = _tmp73 + _tmp77;
  const Scalar _tmp82 = _tmp54 * (_tmp52 * _tmp80 - _tmp52 * _tmp81);
  const Scalar _tmp83 = _tmp43 * _tmp80;
  const Scalar _tmp84 = _tmp54 * (-_tmp52 * _tmp83 + _tmp53 * _tmp81);
  const Scalar _tmp85 = _tmp70 * _tmp78 - _tmp71 * _tmp83 - _tmp72 * _tmp84;
  const Scalar _tmp86 = -_tmp60 * _tmp85 - _tmp71 * _tmp78 + _tmp71 * _tmp80 - _tmp72 * _tmp82;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp72 * _tmp87;
  const Scalar _tmp89 = _tmp62 * _tmp88;
  const Scalar _tmp90 = _tmp62 * _tmp87;
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))));
  const Scalar _tmp92 = _tmp42 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) * _tmp84;
  const Scalar _tmp94 = _tmp60 * _tmp93 - Scalar(1.0) * _tmp82;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp96 = _tmp92 * (_tmp34 * _tmp40 * _tmp95 - _tmp37 * _tmp41 * _tmp95);
  const Scalar _tmp97 = _tmp54 * (-_tmp45 * _tmp53 + _tmp48 * _tmp52 + _tmp52 * _tmp96);
  const Scalar _tmp98 = _tmp63 * _tmp71 - _tmp66 * _tmp70 + _tmp71 * _tmp96 - _tmp72 * _tmp97;
  const Scalar _tmp99 = _tmp87 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp101 = _tmp100 * _tmp86;
  const Scalar _tmp102 = _tmp101 * (-_tmp94 * _tmp99 - Scalar(1.0) * _tmp97);
  const Scalar _tmp103 = _tmp102 + _tmp94;
  const Scalar _tmp104 = -_tmp103 * _tmp88 + Scalar(1.0);
  const Scalar _tmp105 = _tmp71 * _tmp87;
  const Scalar _tmp106 = _tmp31 - p_a(0, 0);
  const Scalar _tmp107 = _tmp20 - p_a(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp43 * _tmp84 + _tmp83;
  const Scalar _tmp112 = -_tmp111 * _tmp60 + _tmp43 * _tmp82 - _tmp80;
  const Scalar _tmp113 = _tmp101 * (-_tmp112 * _tmp99 + _tmp43 * _tmp97 - _tmp96);
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = -_tmp114 * _tmp88 - _tmp43;
  const Scalar _tmp116 = _tmp106 * _tmp108;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = Scalar(1.0) * _tmp100;
  const Scalar _tmp119 = fh1 * (_tmp109 * _tmp30 - _tmp116 * _tmp19);
  const Scalar _tmp120 = -_tmp110 * _tmp92 * (_tmp103 * _tmp105 + _tmp104 * _tmp55) -
                         _tmp117 * _tmp92 * (_tmp105 * _tmp114 + _tmp115 * _tmp55 + Scalar(1.0)) -
                         _tmp119 * _tmp92 * (-_tmp118 * _tmp55 * _tmp72 + _tmp118 * _tmp71) -
                         _tmp39 * _tmp92 * (-_tmp55 * _tmp89 + _tmp71 * _tmp90);
  const Scalar _tmp121 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp122 = _tmp58 + _tmp63;
  const Scalar _tmp123 = _tmp122 * _tmp60;
  const Scalar _tmp124 = Scalar(1.0) / (-_tmp123 + _tmp56 - _tmp66);
  const Scalar _tmp125 = Scalar(1.0) * _tmp124;
  const Scalar _tmp126 = _tmp101 * _tmp125;
  const Scalar _tmp127 = -_tmp118 * _tmp85 + _tmp122 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) * _tmp59;
  const Scalar _tmp129 = _tmp85 * _tmp87;
  const Scalar _tmp130 = _tmp122 * _tmp124;
  const Scalar _tmp131 = _tmp111 + _tmp113 * _tmp130 - _tmp114 * _tmp129;
  const Scalar _tmp132 = fh1 * (_tmp74 + _tmp79);
  const Scalar _tmp133 = -_tmp109 * _tmp132 - Scalar(5.1796800000000003) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp134 = _tmp125 * _tmp60;
  const Scalar _tmp135 = _tmp123 * _tmp125 + Scalar(1.0);
  const Scalar _tmp136 = _tmp102 * _tmp130 - _tmp103 * _tmp129 - _tmp93;
  const Scalar _tmp137 = _tmp124 * _tmp61;
  const Scalar _tmp138 = -_tmp122 * _tmp137 + _tmp58 - _tmp85 * _tmp90;
  const Scalar _tmp139 = _tmp122 * _tmp59;
  const Scalar _tmp140 = _tmp116 * _tmp132 + Scalar(5.1796800000000003) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp141 = std::asinh(
      _tmp121 * (Scalar(1.0) * _tmp110 * (_tmp102 * _tmp125 - _tmp128 * _tmp136) +
                 Scalar(1.0) * _tmp117 * (_tmp113 * _tmp125 - _tmp128 * _tmp131) +
                 Scalar(1.0) * _tmp119 * (_tmp126 - _tmp127 * _tmp128) +
                 Scalar(1.0) * _tmp133 * (-_tmp128 * _tmp135 + _tmp134) +
                 Scalar(1.0) * _tmp140 * (_tmp125 * _tmp139 - _tmp125) +
                 Scalar(1.0) * _tmp39 * (-_tmp125 * _tmp61 - _tmp128 * _tmp138 + Scalar(1.0))));
  const Scalar _tmp142 = Scalar(9.6622558468725703) * _tmp120;
  const Scalar _tmp143 = _tmp118 * _tmp119;
  const Scalar _tmp144 = _tmp104 * _tmp110 * _tmp54 + _tmp115 * _tmp117 * _tmp54 -
                         _tmp143 * _tmp54 * _tmp72 - _tmp39 * _tmp54 * _tmp89;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = _tmp125 * _tmp140;
  const Scalar _tmp147 =
      std::asinh(_tmp145 * (_tmp110 * _tmp136 * _tmp59 + _tmp117 * _tmp131 * _tmp59 +
                            _tmp119 * _tmp127 * _tmp59 + _tmp133 * _tmp135 * _tmp59 +
                            _tmp138 * _tmp39 * _tmp59 - _tmp139 * _tmp146));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp149 =
      _tmp103 * _tmp110 * _tmp87 + _tmp114 * _tmp117 * _tmp87 + _tmp143 + _tmp39 * _tmp90;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 =
      std::asinh(_tmp150 * (-_tmp102 * _tmp110 * _tmp124 - _tmp113 * _tmp117 * _tmp124 -
                            _tmp119 * _tmp126 - _tmp133 * _tmp134 + _tmp137 * _tmp39 + _tmp146));
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp149;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 * (-std::sinh(Scalar(1.0) * _tmp32) -
                std::sinh(Scalar(0.1034955) * _tmp0 *
                          (-_tmp32 * _tmp33 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp31 + p_a(0, 0)), Scalar(2))))))) -
      distance_measure(0, 0) + ofset0;
  _res(1, 0) =
      _tmp142 * (-std::sinh(Scalar(1.0) * _tmp141) -
                 std::sinh(Scalar(0.1034955) * _tmp121 *
                           (-_tmp141 * _tmp142 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp35 + p_b(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp38 + p_b(1, 0)), Scalar(2))))))) -
      distance_measure(1, 0) + ofset1;
  _res(2, 0) =
      _tmp148 * (-std::sinh(Scalar(1.0) * _tmp147) -
                 std::sinh(Scalar(0.1034955) * _tmp145 *
                           (-_tmp147 * _tmp148 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp46 + p_c(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp49 + p_c(1, 0)), Scalar(2))))))) -
      distance_measure(2, 0) + ofset2;
  _res(3, 0) =
      _tmp152 * (-std::sinh(Scalar(1.0) * _tmp151) -
                 std::sinh(Scalar(0.1034955) * _tmp150 *
                           (-_tmp151 * _tmp152 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_d(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp67 + p_d(0, 0)), Scalar(2))))))) -
      distance_measure(3, 0) + ofset3;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym