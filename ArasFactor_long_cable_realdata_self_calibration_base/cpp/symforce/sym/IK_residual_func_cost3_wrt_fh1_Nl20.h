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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl20
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 304

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (109)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp1 * _tmp7;
  const Scalar _tmp9 = _tmp0 * _tmp4;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp6;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp17 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp20 = _tmp0 * _tmp7;
  const Scalar _tmp21 = _tmp1 * _tmp4;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp19 + _tmp22;
  const Scalar _tmp24 = _tmp18 + _tmp23;
  const Scalar _tmp25 = _tmp24 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp26 = std::pow(Scalar(std::pow(_tmp16, Scalar(2)) + std::pow(_tmp25, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp27 = _tmp16 * _tmp26;
  const Scalar _tmp28 = -_tmp6;
  const Scalar _tmp29 = _tmp14 + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp31 = Scalar(1.0) / (_tmp30);
  const Scalar _tmp32 = -_tmp18;
  const Scalar _tmp33 = _tmp23 + _tmp32;
  const Scalar _tmp34 = _tmp33 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp35 = _tmp31 * _tmp34;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = -Scalar(0.010999999999999999) * _tmp11 -
                        Scalar(0.010999999999999999) * _tmp17 + Scalar(-0.010999999999999999);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp37 + _tmp40;
  const Scalar _tmp42 = _tmp10 - _tmp13;
  const Scalar _tmp43 = _tmp28 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp45 = -_tmp19 + _tmp22;
  const Scalar _tmp46 = _tmp32 + _tmp45;
  const Scalar _tmp47 = _tmp46 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp44 * _tmp48;
  const Scalar _tmp50 = _tmp41 * _tmp49;
  const Scalar _tmp51 = _tmp37 + _tmp38 - _tmp39;
  const Scalar _tmp52 = _tmp47 * _tmp48;
  const Scalar _tmp53 = -_tmp35 * _tmp50 + _tmp51 * _tmp52;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp35 * _tmp49 - _tmp52);
  const Scalar _tmp55 = _tmp25 * _tmp26;
  const Scalar _tmp56 = _tmp27 * _tmp35 - _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp27 * _tmp41;
  const Scalar _tmp59 = _tmp36 + _tmp40;
  const Scalar _tmp60 = Scalar(1.0) * _tmp33;
  const Scalar _tmp61 = Scalar(1.0) * _tmp29;
  const Scalar _tmp62 = (-_tmp43 + _tmp61) / (_tmp46 - _tmp60);
  const Scalar _tmp63 = -_tmp49 * _tmp51 + _tmp50;
  const Scalar _tmp64 = -_tmp27 * _tmp59 - _tmp57 * _tmp63 + _tmp58 -
                        _tmp62 * (-_tmp35 * _tmp58 - _tmp53 * _tmp57 + _tmp55 * _tmp59);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = Scalar(1.0) * _tmp54;
  const Scalar _tmp67 = _tmp53 * _tmp62 * _tmp66 - _tmp63 * _tmp66;
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp30, Scalar(2)) + std::pow(_tmp34, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp31 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (_tmp29 * _tmp34 * _tmp69 - _tmp30 * _tmp33 * _tmp69);
  const Scalar _tmp72 = -_tmp43 * _tmp52 + _tmp46 * _tmp49 + _tmp49 * _tmp71;
  const Scalar _tmp73 = -_tmp15 * _tmp55 + _tmp24 * _tmp27 + _tmp27 * _tmp71 - _tmp57 * _tmp72;
  const Scalar _tmp74 = _tmp65 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp76 = _tmp64 * _tmp75;
  const Scalar _tmp77 = _tmp67 + _tmp76 * (-_tmp66 * _tmp72 - _tmp67 * _tmp74);
  const Scalar _tmp78 = _tmp65 * _tmp77;
  const Scalar _tmp79 = _tmp56 * _tmp65;
  const Scalar _tmp80 = _tmp54 * (-_tmp77 * _tmp79 + Scalar(1.0));
  const Scalar _tmp81 = _tmp42 + _tmp6;
  const Scalar _tmp82 = _tmp81 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp83 = _tmp18 + _tmp45;
  const Scalar _tmp84 = _tmp83 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = _tmp70 * _tmp86 * (_tmp27 * _tmp78 + _tmp49 * _tmp80);
  const Scalar _tmp88 = _tmp35 * _tmp54;
  const Scalar _tmp89 = -_tmp41 - _tmp62 * (_tmp35 * _tmp41 + _tmp53 * _tmp88) + _tmp63 * _tmp88;
  const Scalar _tmp90 = _tmp76 * (-_tmp71 + _tmp72 * _tmp88 - _tmp74 * _tmp89) + _tmp89;
  const Scalar _tmp91 = _tmp65 * _tmp90;
  const Scalar _tmp92 = _tmp54 * (-_tmp35 - _tmp79 * _tmp90);
  const Scalar _tmp93 = _tmp82 * _tmp85;
  const Scalar _tmp94 = _tmp70 * _tmp93 * (_tmp27 * _tmp91 + _tmp49 * _tmp92 + Scalar(1.0));
  const Scalar _tmp95 = _tmp81 * _tmp86 - _tmp83 * _tmp93;
  const Scalar _tmp96 = Scalar(1.0) * _tmp75;
  const Scalar _tmp97 = _tmp56 * _tmp66 * _tmp75;
  const Scalar _tmp98 = _tmp70 * _tmp95 * (_tmp27 * _tmp96 - _tmp49 * _tmp97);
  const Scalar _tmp99 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp100 = _tmp60 * _tmp62 + _tmp61;
  const Scalar _tmp101 = 0;
  const Scalar _tmp102 = _tmp95 * _tmp97;
  const Scalar _tmp103 = _tmp101 * _tmp99;
  const Scalar _tmp104 = _tmp92 * _tmp93;
  const Scalar _tmp105 = _tmp80 * _tmp86;
  const Scalar _tmp106 = _tmp95 * _tmp96;
  const Scalar _tmp107 = _tmp78 * _tmp86;
  const Scalar _tmp108 = _tmp91 * _tmp93;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp87 - _tmp94 - _tmp98) *
               std::exp(_tmp70 * _tmp99 * (_tmp101 * _tmp27 - _tmp101 * _tmp49 * _tmp57) +
                        _tmp87 * fh1 + _tmp94 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(-_tmp102 + _tmp104 + _tmp105) *
               std::exp(_tmp102 * fh1 + _tmp103 * _tmp57 - _tmp104 * fh1 - _tmp105 * fh1);
  _res(3, 0) = -(_tmp106 + _tmp107 + _tmp108) *
               std::exp(-_tmp103 - _tmp106 * fh1 - _tmp107 * fh1 - _tmp108 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
