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
  // Total ops: 477

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (152)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp2 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp6 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp11 = _tmp2 * _tmp6;
  const Scalar _tmp12 = _tmp10 - _tmp11;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp15 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp9;
  const Scalar _tmp19 = _TransformationMatrix[5] + _tmp18;
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp3 * _tmp5;
  const Scalar _tmp24 = _tmp1 * _tmp6;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _TransformationMatrix[4] + _tmp29;
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = _tmp26 + _tmp27;
  const Scalar _tmp34 = _tmp22 + _tmp33;
  const Scalar _tmp35 = _tmp21 + _tmp28;
  const Scalar _tmp36 = Scalar(1.0) * _tmp35;
  const Scalar _tmp37 = _tmp17 + _tmp8;
  const Scalar _tmp38 = Scalar(1.0) * _tmp37;
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = _tmp13 + _tmp16;
  const Scalar _tmp41 = _tmp40 + _tmp9;
  const Scalar _tmp42 = _tmp39 + _tmp41;
  const Scalar _tmp43 = _tmp40 + _tmp8;
  const Scalar _tmp44 = Scalar(1.0) / (_tmp39 + _tmp43);
  const Scalar _tmp45 = _tmp21 + _tmp33;
  const Scalar _tmp46 = _tmp36 - _tmp45;
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = _tmp42 * _tmp47;
  const Scalar _tmp49 = Scalar(1.0) / (-_tmp34 + _tmp36 - _tmp48);
  const Scalar _tmp50 = Scalar(1.0) * _tmp49;
  const Scalar _tmp51 = _TransformationMatrix[5] + _tmp41;
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = _TransformationMatrix[4] + _tmp34;
  const Scalar _tmp54 = _tmp53 - p_d(0, 0);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp55;
  const Scalar _tmp58 = _TransformationMatrix[4] + _tmp45;
  const Scalar _tmp59 = _tmp58 - p_c(0, 0);
  const Scalar _tmp60 = _TransformationMatrix[5] + _tmp43;
  const Scalar _tmp61 = _tmp60 - p_c(1, 0);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp61 * _tmp62;
  const Scalar _tmp64 = _tmp59 * _tmp62;
  const Scalar _tmp65 = _TransformationMatrix[5] + _tmp37;
  const Scalar _tmp66 = _tmp65 - p_b(1, 0);
  const Scalar _tmp67 = _TransformationMatrix[4] + _tmp35;
  const Scalar _tmp68 = _tmp67 - p_b(0, 0);
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp72 = _tmp69 * _tmp71;
  const Scalar _tmp73 = _tmp72 * (_tmp35 * _tmp66 * _tmp70 - _tmp37 * _tmp68 * _tmp70);
  const Scalar _tmp74 = _tmp43 * _tmp64 - _tmp45 * _tmp63 + _tmp64 * _tmp73;
  const Scalar _tmp75 = _tmp66 * _tmp71;
  const Scalar _tmp76 = -_tmp56 + _tmp57 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (-_tmp63 + _tmp64 * _tmp75);
  const Scalar _tmp78 = _tmp76 * _tmp77;
  const Scalar _tmp79 = -_tmp34 * _tmp56 + _tmp41 * _tmp57 + _tmp57 * _tmp73 - _tmp74 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp81 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp82 = -Scalar(0.010999999999999999) * _tmp14 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp83 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp84 = _tmp82 - _tmp83;
  const Scalar _tmp85 = _tmp81 + _tmp84;
  const Scalar _tmp86 = -_tmp81;
  const Scalar _tmp87 = _tmp82 + _tmp83;
  const Scalar _tmp88 = _tmp86 + _tmp87;
  const Scalar _tmp89 = _tmp81 + _tmp87;
  const Scalar _tmp90 = _tmp64 * _tmp88 - _tmp64 * _tmp89;
  const Scalar _tmp91 = _tmp75 * _tmp88;
  const Scalar _tmp92 = _tmp77 * (_tmp63 * _tmp89 - _tmp64 * _tmp91);
  const Scalar _tmp93 = _tmp56 * _tmp85 - _tmp57 * _tmp91 - _tmp76 * _tmp92;
  const Scalar _tmp94 = -_tmp47 * _tmp93 - _tmp57 * _tmp85 + _tmp57 * _tmp88 - _tmp78 * _tmp90;
  const Scalar _tmp95 = _tmp80 * _tmp94;
  const Scalar _tmp96 = _tmp50 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) * _tmp80;
  const Scalar _tmp98 = _tmp42 * _tmp50;
  const Scalar _tmp99 = -_tmp93 * _tmp97 + _tmp95 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp44;
  const Scalar _tmp101 = _tmp30 - p_a(0, 0);
  const Scalar _tmp102 = _tmp19 - p_a(1, 0);
  const Scalar _tmp103 =
      std::pow(Scalar(std::pow(_tmp101, Scalar(2)) + std::pow(_tmp102, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp104 = _tmp102 * _tmp103;
  const Scalar _tmp105 = _tmp101 * _tmp103;
  const Scalar _tmp106 = fh1 * (_tmp104 * _tmp29 - _tmp105 * _tmp18);
  const Scalar _tmp107 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp108 = _tmp75 * _tmp77;
  const Scalar _tmp109 = _tmp75 * _tmp92 + _tmp91;
  const Scalar _tmp110 = _tmp108 * _tmp90 - _tmp109 * _tmp47 - _tmp88;
  const Scalar _tmp111 = _tmp107 * _tmp79;
  const Scalar _tmp112 = _tmp95 * (_tmp108 * _tmp74 - _tmp110 * _tmp111 - _tmp73);
  const Scalar _tmp113 = _tmp107 * (_tmp110 + _tmp112);
  const Scalar _tmp114 = _tmp42 * _tmp49;
  const Scalar _tmp115 = _tmp109 + _tmp112 * _tmp114 - _tmp113 * _tmp93;
  const Scalar _tmp116 = _tmp105 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp77;
  const Scalar _tmp118 = _tmp100 * _tmp46 * _tmp92 - _tmp117 * _tmp90;
  const Scalar _tmp119 = _tmp95 * (-_tmp111 * _tmp118 - _tmp117 * _tmp74);
  const Scalar _tmp120 = _tmp107 * (_tmp118 + _tmp119);
  const Scalar _tmp121 = _tmp114 * _tmp119 - _tmp120 * _tmp93 - Scalar(1.0) * _tmp92;
  const Scalar _tmp122 = _tmp104 * fh1;
  const Scalar _tmp123 = _tmp36 + _tmp38 * _tmp47;
  const Scalar _tmp124 = 0;
  const Scalar _tmp125 = _tmp123 * _tmp49;
  const Scalar _tmp126 = -_tmp124 * _tmp93 - _tmp125 * _tmp42 + _tmp39;
  const Scalar _tmp127 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp128 = fh1 * (_tmp84 + _tmp86);
  const Scalar _tmp129 = _tmp105 * _tmp128 + Scalar(3.29616) * _tmp25 + _tmp29 * fv1;
  const Scalar _tmp130 = -_tmp104 * _tmp128 - Scalar(3.29616) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp131 = _tmp47 * _tmp50;
  const Scalar _tmp132 = _tmp48 * _tmp50 + Scalar(1.0);
  const Scalar _tmp133 = _tmp64 * _tmp78;
  const Scalar _tmp134 = -_tmp120 * _tmp76 + Scalar(1.0);
  const Scalar _tmp135 = _tmp64 * _tmp77;
  const Scalar _tmp136 = -_tmp113 * _tmp76 - _tmp75;
  const Scalar _tmp137 = -_tmp106 * _tmp72 * (-_tmp133 * _tmp97 + _tmp57 * _tmp97) -
                         _tmp116 * _tmp72 * (_tmp113 * _tmp57 + _tmp135 * _tmp136 + Scalar(1.0)) -
                         _tmp122 * _tmp72 * (_tmp120 * _tmp57 + _tmp134 * _tmp135) -
                         _tmp127 * _tmp72 * (-_tmp124 * _tmp133 + _tmp124 * _tmp57);
  const Scalar _tmp138 = Scalar(1.0) / (_tmp137);
  const Scalar _tmp139 = std::asinh(
      _tmp138 * (Scalar(1.0) * _tmp106 * (-_tmp100 * _tmp99 + _tmp96) +
                 Scalar(1.0) * _tmp116 * (-_tmp100 * _tmp115 + _tmp112 * _tmp50) +
                 Scalar(1.0) * _tmp122 * (-_tmp100 * _tmp121 + _tmp119 * _tmp50) +
                 Scalar(1.0) * _tmp127 * (-_tmp100 * _tmp126 - _tmp123 * _tmp50 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp129 * (_tmp44 * _tmp98 - _tmp50) +
                 Scalar(1.0) * _tmp130 * (-_tmp100 * _tmp132 + _tmp131)));
  const Scalar _tmp140 = Scalar(9.6622558468725703) * _tmp137;
  const Scalar _tmp141 = _tmp129 * _tmp50;
  const Scalar _tmp142 = _tmp124 * _tmp127;
  const Scalar _tmp143 = _tmp106 * _tmp97;
  const Scalar _tmp144 =
      _tmp116 * _tmp136 * _tmp77 + _tmp122 * _tmp134 * _tmp77 - _tmp142 * _tmp78 - _tmp143 * _tmp78;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 =
      std::asinh(_tmp145 * (_tmp106 * _tmp44 * _tmp99 + _tmp115 * _tmp116 * _tmp44 +
                            _tmp121 * _tmp122 * _tmp44 + _tmp126 * _tmp127 * _tmp44 +
                            _tmp130 * _tmp132 * _tmp44 - _tmp141 * _tmp42 * _tmp44));
  const Scalar _tmp147 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp148 = _tmp113 * _tmp116 + _tmp120 * _tmp122 + _tmp142 + _tmp143;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = std::asinh(_tmp149 * (-_tmp106 * _tmp96 - _tmp112 * _tmp116 * _tmp49 -
                                               _tmp119 * _tmp122 * _tmp49 + _tmp125 * _tmp127 -
                                               _tmp130 * _tmp131 + _tmp141));
  const Scalar _tmp151 = Scalar(9.6622558468725703) * _tmp148;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 * (-std::sinh(Scalar(1.0) * _tmp31) -
                std::sinh(Scalar(0.1034955) * _tmp0 *
                          (-_tmp31 * _tmp32 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp19 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp30 + p_a(0, 0)), Scalar(2))))))) -
      distance_measure(0, 0) + ofset0;
  _res(1, 0) =
      _tmp140 * (-std::sinh(Scalar(1.0) * _tmp139) -
                 std::sinh(Scalar(0.1034955) * _tmp138 *
                           (-_tmp139 * _tmp140 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_b(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp67 + p_b(0, 0)), Scalar(2))))))) -
      distance_measure(1, 0) + ofset1;
  _res(2, 0) =
      _tmp147 * (-std::sinh(Scalar(1.0) * _tmp146) -
                 std::sinh(Scalar(0.1034955) * _tmp145 *
                           (-_tmp146 * _tmp147 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp58 + p_c(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp60 + p_c(1, 0)), Scalar(2))))))) -
      distance_measure(2, 0) + ofset2;
  _res(3, 0) =
      _tmp151 * (-std::sinh(Scalar(1.0) * _tmp150) -
                 std::sinh(Scalar(0.1034955) * _tmp149 *
                           (-_tmp150 * _tmp151 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp53 + p_d(0, 0)), Scalar(2))))))) -
      distance_measure(3, 0) + ofset3;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym