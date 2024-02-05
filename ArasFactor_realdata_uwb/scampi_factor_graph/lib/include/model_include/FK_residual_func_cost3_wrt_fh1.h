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
 * Symbolic function: FK_residual_func_cost3_wrt_fh1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
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
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost3WrtFh1(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Scalar epsilon) {
  // Total ops: 301

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (108)
  const Scalar _tmp0 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp3 * _tmp7;
  const Scalar _tmp9 =
      -_DeltaRot[0] * _TransformationMatrix[0] - _DeltaRot[1] * _TransformationMatrix[1] -
      _DeltaRot[2] * _TransformationMatrix[2] + _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 =
      -Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp13 = _tmp1 * _tmp7;
  const Scalar _tmp14 = _tmp10 * _tmp3;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _TransformationMatrix[4] + _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp22 = _tmp7 * _tmp9;
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp21 + Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _TransformationMatrix[5] + _tmp26 - p_c(1, 0);
  const Scalar _tmp28 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp27, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp29 = _tmp18 * _tmp28;
  const Scalar _tmp30 = -_tmp20;
  const Scalar _tmp31 = _tmp25 + _tmp30;
  const Scalar _tmp32 = _TransformationMatrix[5] + _tmp31 - p_b(1, 0);
  const Scalar _tmp33 = _tmp12 - _tmp15;
  const Scalar _tmp34 = _tmp33 + _tmp5;
  const Scalar _tmp35 = _TransformationMatrix[4] + _tmp34 - p_b(0, 0);
  const Scalar _tmp36 = Scalar(1.0) / (_tmp35);
  const Scalar _tmp37 = _tmp32 * _tmp36;
  const Scalar _tmp38 = _tmp27 * _tmp28;
  const Scalar _tmp39 = Scalar(1.0) / (_tmp29 * _tmp37 - _tmp38);
  const Scalar _tmp40 = Scalar(1.0) * _tmp34;
  const Scalar _tmp41 = Scalar(1.0) * _tmp31;
  const Scalar _tmp42 = (-_tmp17 + _tmp40) / (_tmp26 - _tmp41);
  const Scalar _tmp43 = _tmp40 + _tmp41 * _tmp42;
  const Scalar _tmp44 = 0;
  const Scalar _tmp45 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp46 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp47 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp48 = _tmp45 - _tmp46 + _tmp47;
  const Scalar _tmp49 = _tmp23 - _tmp24;
  const Scalar _tmp50 = _tmp20 + _tmp49;
  const Scalar _tmp51 = _TransformationMatrix[5] + _tmp50 - p_d(1, 0);
  const Scalar _tmp52 = -_tmp5;
  const Scalar _tmp53 = _tmp16 + _tmp52;
  const Scalar _tmp54 = _TransformationMatrix[4] + _tmp53 - p_d(0, 0);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp54 * _tmp55;
  const Scalar _tmp57 = _tmp45 + _tmp46;
  const Scalar _tmp58 = -_tmp47 + _tmp57;
  const Scalar _tmp59 = _tmp47 + _tmp57;
  const Scalar _tmp60 = _tmp29 * _tmp58 - _tmp29 * _tmp59;
  const Scalar _tmp61 = _tmp51 * _tmp55;
  const Scalar _tmp62 = _tmp37 * _tmp56 - _tmp61;
  const Scalar _tmp63 = _tmp39 * _tmp62;
  const Scalar _tmp64 = _tmp37 * _tmp58;
  const Scalar _tmp65 = -_tmp29 * _tmp64 + _tmp38 * _tmp59;
  const Scalar _tmp66 = -_tmp42 * (_tmp48 * _tmp61 - _tmp56 * _tmp64 - _tmp63 * _tmp65) -
                        _tmp48 * _tmp56 + _tmp56 * _tmp58 - _tmp60 * _tmp63;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp62 * _tmp67;
  const Scalar _tmp69 = _tmp39 * _tmp44 * _tmp68;
  const Scalar _tmp70 = _tmp44 * _tmp67;
  const Scalar _tmp71 =
      std::sqrt(Scalar(std::pow(_tmp32, Scalar(2)) + std::pow(_tmp35, Scalar(2))));
  const Scalar _tmp72 = _tmp36 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) * _tmp39;
  const Scalar _tmp74 = _tmp42 * _tmp65 * _tmp73 - _tmp60 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp76 = _tmp72 * (-_tmp31 * _tmp35 * _tmp75 + _tmp32 * _tmp34 * _tmp75);
  const Scalar _tmp77 = -_tmp17 * _tmp38 + _tmp26 * _tmp29 + _tmp29 * _tmp76;
  const Scalar _tmp78 = _tmp50 * _tmp56 - _tmp53 * _tmp61 + _tmp56 * _tmp76 - _tmp63 * _tmp77;
  const Scalar _tmp79 = _tmp67 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp81 = _tmp66 * _tmp80;
  const Scalar _tmp82 = _tmp74 + _tmp81 * (-_tmp73 * _tmp77 - _tmp74 * _tmp79);
  const Scalar _tmp83 = _tmp39 * (-_tmp68 * _tmp82 + Scalar(1.0));
  const Scalar _tmp84 = _tmp67 * _tmp82;
  const Scalar _tmp85 = _tmp33 + _tmp52;
  const Scalar _tmp86 = _TransformationMatrix[4] + _tmp85 - p_a(0, 0);
  const Scalar _tmp87 = _tmp30 + _tmp49;
  const Scalar _tmp88 = _TransformationMatrix[5] + _tmp87 - p_a(1, 0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp72 * _tmp90 * (_tmp29 * _tmp83 + _tmp56 * _tmp84);
  const Scalar _tmp92 = _tmp37 * _tmp39;
  const Scalar _tmp93 = -_tmp42 * (_tmp64 + _tmp65 * _tmp92) - _tmp58 + _tmp60 * _tmp92;
  const Scalar _tmp94 = _tmp81 * (-_tmp76 + _tmp77 * _tmp92 - _tmp79 * _tmp93) + _tmp93;
  const Scalar _tmp95 = _tmp39 * (-_tmp37 - _tmp68 * _tmp94);
  const Scalar _tmp96 = _tmp67 * _tmp94;
  const Scalar _tmp97 = _tmp86 * _tmp89;
  const Scalar _tmp98 = _tmp72 * _tmp97 * (_tmp29 * _tmp95 + _tmp56 * _tmp96 + Scalar(1.0));
  const Scalar _tmp99 = _tmp85 * _tmp90 - _tmp87 * _tmp97;
  const Scalar _tmp100 = Scalar(1.0) * _tmp80;
  const Scalar _tmp101 = _tmp72 * _tmp99 * (-_tmp100 * _tmp29 * _tmp63 + _tmp100 * _tmp56);
  const Scalar _tmp102 = _tmp100 * _tmp99;
  const Scalar _tmp103 = _tmp102 * fh1;
  const Scalar _tmp104 = _tmp95 * _tmp97;
  const Scalar _tmp105 = _tmp83 * _tmp90;
  const Scalar _tmp106 = _tmp84 * _tmp90;
  const Scalar _tmp107 = _tmp96 * _tmp97;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp101 - _tmp91 - _tmp98) *
               std::exp(_tmp0 * _tmp72 * (-_tmp29 * _tmp69 + _tmp56 * _tmp70) + _tmp101 * fh1 +
                        _tmp91 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(-_tmp102 * _tmp63 + _tmp104 + _tmp105) *
               std::exp(_tmp0 * _tmp69 + _tmp103 * _tmp63 - _tmp104 * fh1 - _tmp105 * fh1);
  _res(3, 0) = -(_tmp102 + _tmp106 + _tmp107) *
               std::exp(-_tmp0 * _tmp70 - _tmp103 - _tmp106 * fh1 - _tmp107 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym