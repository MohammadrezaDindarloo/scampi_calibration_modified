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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 306

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (105)
  const Scalar _tmp0 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp7 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp11 * _tmp6;
  const Scalar _tmp13 = _tmp1 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp2 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp1 * _tmp11;
  const Scalar _tmp22 = _tmp6 * _tmp8;
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp21 + Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp27, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp29 = _tmp17 * _tmp28;
  const Scalar _tmp30 = -_tmp5;
  const Scalar _tmp31 = _tmp10 + _tmp14;
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(1.0) / (_tmp33);
  const Scalar _tmp35 = _tmp23 - _tmp24;
  const Scalar _tmp36 = _tmp19 + _tmp35;
  const Scalar _tmp37 = _tmp36 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp38 = _tmp34 * _tmp37;
  const Scalar _tmp39 = _tmp27 * _tmp28;
  const Scalar _tmp40 = Scalar(1.0) / (_tmp29 * _tmp38 - _tmp39);
  const Scalar _tmp41 = Scalar(1.0) * _tmp32;
  const Scalar _tmp42 = Scalar(1.0) * _tmp36;
  const Scalar _tmp43 = (-_tmp16 + _tmp41) / (_tmp26 - _tmp42);
  const Scalar _tmp44 = _tmp41 + _tmp42 * _tmp43;
  const Scalar _tmp45 = 0;
  const Scalar _tmp46 = _tmp31 + _tmp5;
  const Scalar _tmp47 = _tmp46 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp48 = _tmp19 + _tmp25;
  const Scalar _tmp49 = _tmp48 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp47 * _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp50;
  const Scalar _tmp53 = _tmp38 * _tmp51 - _tmp52;
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp55 =
      -Scalar(0.010999999999999999) * _tmp18 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp56 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp57 = _tmp55 + _tmp56;
  const Scalar _tmp58 = -_tmp54 + _tmp57;
  const Scalar _tmp59 = _tmp54 + _tmp55 - _tmp56;
  const Scalar _tmp60 = _tmp29 * _tmp59;
  const Scalar _tmp61 = _tmp40 * (-_tmp38 * _tmp60 + _tmp39 * _tmp58);
  const Scalar _tmp62 = _tmp38 * _tmp59;
  const Scalar _tmp63 = _tmp54 + _tmp57;
  const Scalar _tmp64 = _tmp40 * (-_tmp29 * _tmp58 + _tmp60);
  const Scalar _tmp65 = -_tmp43 * (-_tmp51 * _tmp62 + _tmp52 * _tmp63 - _tmp53 * _tmp61) +
                        _tmp51 * _tmp59 - _tmp51 * _tmp63 - _tmp53 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp53 * _tmp66;
  const Scalar _tmp68 = _tmp40 * _tmp45 * _tmp67;
  const Scalar _tmp69 = _tmp45 * _tmp66;
  const Scalar _tmp70 =
      std::sqrt(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp37, Scalar(2))));
  const Scalar _tmp71 = _tmp34 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) * _tmp43 * _tmp61 - Scalar(1.0) * _tmp64;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp74 = _tmp71 * (_tmp32 * _tmp37 * _tmp73 - _tmp33 * _tmp36 * _tmp73);
  const Scalar _tmp75 = _tmp40 * (-_tmp16 * _tmp39 + _tmp26 * _tmp29 + _tmp29 * _tmp74);
  const Scalar _tmp76 = -_tmp46 * _tmp52 + _tmp48 * _tmp51 + _tmp51 * _tmp74 - _tmp53 * _tmp75;
  const Scalar _tmp77 = _tmp66 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp79 = _tmp65 * _tmp78;
  const Scalar _tmp80 = _tmp72 + _tmp79 * (-_tmp72 * _tmp77 - Scalar(1.0) * _tmp75);
  const Scalar _tmp81 = _tmp40 * (-_tmp67 * _tmp80 + Scalar(1.0));
  const Scalar _tmp82 = _tmp51 * _tmp66;
  const Scalar _tmp83 = _tmp20 + _tmp35;
  const Scalar _tmp84 = _tmp83 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp85 = _tmp15 + _tmp30;
  const Scalar _tmp86 = _tmp85 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp84 * _tmp87;
  const Scalar _tmp89 = _tmp71 * _tmp88 * (_tmp29 * _tmp81 + _tmp80 * _tmp82);
  const Scalar _tmp90 = _tmp38 * _tmp64 - _tmp43 * (_tmp38 * _tmp61 + _tmp62) - _tmp59;
  const Scalar _tmp91 = _tmp79 * (_tmp38 * _tmp75 - _tmp74 - _tmp77 * _tmp90) + _tmp90;
  const Scalar _tmp92 = _tmp40 * (-_tmp38 - _tmp67 * _tmp91);
  const Scalar _tmp93 = _tmp86 * _tmp87;
  const Scalar _tmp94 = _tmp71 * _tmp93 * (_tmp29 * _tmp92 + _tmp82 * _tmp91 + Scalar(1.0));
  const Scalar _tmp95 = -_tmp83 * _tmp93 + _tmp85 * _tmp88;
  const Scalar _tmp96 = Scalar(1.0) * _tmp78;
  const Scalar _tmp97 = _tmp40 * _tmp53;
  const Scalar _tmp98 = _tmp71 * _tmp95 * (-_tmp29 * _tmp96 * _tmp97 + _tmp51 * _tmp96);
  const Scalar _tmp99 = _tmp95 * _tmp96;
  const Scalar _tmp100 = _tmp99 * fh1;
  const Scalar _tmp101 = _tmp92 * _tmp93;
  const Scalar _tmp102 = _tmp81 * _tmp88;
  const Scalar _tmp103 = _tmp66 * _tmp91 * _tmp93;
  const Scalar _tmp104 = _tmp66 * _tmp80 * _tmp88;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp89 - _tmp94 - _tmp98) *
               std::exp(_tmp0 * _tmp71 * (-_tmp29 * _tmp68 + _tmp51 * _tmp69) + _tmp89 * fh1 +
                        _tmp94 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(_tmp101 + _tmp102 - _tmp97 * _tmp99) *
               std::exp(_tmp0 * _tmp68 + _tmp100 * _tmp97 - _tmp101 * fh1 - _tmp102 * fh1);
  _res(3, 0) = -(_tmp103 + _tmp104 + _tmp99) *
               std::exp(-_tmp0 * _tmp69 - _tmp100 - _tmp103 * fh1 - _tmp104 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
