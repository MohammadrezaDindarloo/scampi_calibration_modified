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
 * Symbolic function: IK_residual_func_cost3_Nl3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3Nl3(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 285

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (103)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp0 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp6;
  const Scalar _tmp12 = _tmp0 * _tmp8;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = Scalar(1.0) * _tmp15;
  const Scalar _tmp17 = -_tmp10 + _tmp13;
  const Scalar _tmp18 = _tmp17 + _tmp4;
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp23 = _tmp5 * _tmp8;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp21 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp26;
  const Scalar _tmp29 = Scalar(1.0) * _tmp28;
  const Scalar _tmp30 = (-_tmp27 + _tmp29) / (-_tmp16 + _tmp18);
  const Scalar _tmp31 = _tmp27 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp32 = _tmp18 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp33 = std::pow(Scalar(std::pow(_tmp31, Scalar(2)) + std::pow(_tmp32, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = _tmp28 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp36 = Scalar(1.0) / (_tmp35);
  const Scalar _tmp37 = _tmp15 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 = _tmp31 * _tmp33;
  const Scalar _tmp40 = Scalar(1.0) / (-_tmp34 + _tmp38 * _tmp39);
  const Scalar _tmp41 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp42 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = -_tmp41 + _tmp44;
  const Scalar _tmp46 = _tmp41 + _tmp44;
  const Scalar _tmp47 = _tmp39 * _tmp46;
  const Scalar _tmp48 = _tmp34 * _tmp45 - _tmp38 * _tmp47;
  const Scalar _tmp49 = _tmp40 * _tmp48;
  const Scalar _tmp50 = -_tmp39 * _tmp45 + _tmp47;
  const Scalar _tmp51 = _tmp40 * _tmp50;
  const Scalar _tmp52 = Scalar(1.0) * _tmp30 * _tmp49 - Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = _tmp41 + _tmp42 - _tmp43;
  const Scalar _tmp54 = _tmp24 - _tmp25;
  const Scalar _tmp55 = _tmp20 + _tmp54;
  const Scalar _tmp56 = _tmp55 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp57 = -_tmp4;
  const Scalar _tmp58 = _tmp14 + _tmp57;
  const Scalar _tmp59 = _tmp58 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = _tmp38 * _tmp61 - _tmp62;
  const Scalar _tmp64 = _tmp40 * _tmp63;
  const Scalar _tmp65 = _tmp38 * _tmp46;
  const Scalar _tmp66 = -_tmp30 * (-_tmp48 * _tmp64 + _tmp53 * _tmp62 - _tmp61 * _tmp65) +
                        _tmp46 * _tmp61 - _tmp50 * _tmp64 - _tmp53 * _tmp61;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp37, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp36 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (-_tmp15 * _tmp35 * _tmp69 + _tmp28 * _tmp37 * _tmp69);
  const Scalar _tmp72 = _tmp40 * (_tmp18 * _tmp39 - _tmp27 * _tmp34 + _tmp39 * _tmp71);
  const Scalar _tmp73 = -_tmp55 * _tmp62 + _tmp58 * _tmp61 + _tmp61 * _tmp71 - _tmp63 * _tmp72;
  const Scalar _tmp74 = _tmp67 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp76 = _tmp66 * _tmp75;
  const Scalar _tmp77 = _tmp52 + _tmp76 * (-_tmp52 * _tmp74 - Scalar(1.0) * _tmp72);
  const Scalar _tmp78 = _tmp61 * _tmp67;
  const Scalar _tmp79 = _tmp63 * _tmp67;
  const Scalar _tmp80 = -_tmp77 * _tmp79 + Scalar(1.0);
  const Scalar _tmp81 = _tmp39 * _tmp40;
  const Scalar _tmp82 = _tmp21 + _tmp54;
  const Scalar _tmp83 = _tmp82 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp84 = _tmp17 + _tmp57;
  const Scalar _tmp85 = _tmp84 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp70 * fh1;
  const Scalar _tmp89 = Scalar(1.0) * _tmp75;
  const Scalar _tmp90 = _tmp39 * _tmp64;
  const Scalar _tmp91 = _tmp83 * _tmp86;
  const Scalar _tmp92 = fh1 * (_tmp82 * _tmp87 - _tmp84 * _tmp91);
  const Scalar _tmp93 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp94 = _tmp16 * _tmp30 + _tmp29;
  const Scalar _tmp95 = 0;
  const Scalar _tmp96 = -_tmp30 * (_tmp38 * _tmp49 + _tmp65) + _tmp38 * _tmp51 - _tmp46;
  const Scalar _tmp97 = _tmp76 * (_tmp38 * _tmp72 - _tmp71 - _tmp74 * _tmp96) + _tmp96;
  const Scalar _tmp98 = -_tmp38 - _tmp79 * _tmp97;
  const Scalar _tmp99 = _tmp89 * _tmp92;
  const Scalar _tmp100 = _tmp93 * _tmp95;
  const Scalar _tmp101 = _tmp40 * fh1;
  const Scalar _tmp102 = _tmp67 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = std::exp(-fh1);
  _res(1, 0) = std::exp(_tmp70 * _tmp92 * (_tmp61 * _tmp89 - _tmp89 * _tmp90) +
                        _tmp70 * _tmp93 * (_tmp61 * _tmp95 - _tmp90 * _tmp95) +
                        _tmp87 * _tmp88 * (_tmp77 * _tmp78 + _tmp80 * _tmp81) +
                        _tmp88 * _tmp91 * (_tmp78 * _tmp97 + _tmp81 * _tmp98 + Scalar(1.0)));
  _res(2, 0) = std::exp(_tmp100 * _tmp64 - _tmp101 * _tmp80 * _tmp87 - _tmp101 * _tmp91 * _tmp98 +
                        _tmp64 * _tmp99);
  _res(3, 0) = std::exp(-_tmp100 - _tmp102 * _tmp77 * _tmp87 - _tmp102 * _tmp91 * _tmp97 - _tmp99);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
