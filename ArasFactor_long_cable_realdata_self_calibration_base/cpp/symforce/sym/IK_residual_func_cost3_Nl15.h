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
 * Symbolic function: IK_residual_func_cost3_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 288

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (103)
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
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = Scalar(1.0) / (_tmp17);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp20 = _tmp0 * _tmp11;
  const Scalar _tmp21 = _tmp1 * _tmp4;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp25 = _tmp22 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = _tmp18 * _tmp27;
  const Scalar _tmp29 = -_tmp10 + _tmp14;
  const Scalar _tmp30 = _tmp29 + _tmp6;
  const Scalar _tmp31 = _tmp30 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp32 = -_tmp19;
  const Scalar _tmp33 = _tmp22 + _tmp24;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp34 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp36 = std::pow(Scalar(std::pow(_tmp31, Scalar(2)) + std::pow(_tmp35, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp31 * _tmp36;
  const Scalar _tmp38 = _tmp35 * _tmp36;
  const Scalar _tmp39 = Scalar(1.0) / (_tmp28 * _tmp37 - _tmp38);
  const Scalar _tmp40 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp41 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp44 = _tmp40 + _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp40 - _tmp43;
  const Scalar _tmp46 = _tmp41 + _tmp45;
  const Scalar _tmp47 = _tmp37 * _tmp46;
  const Scalar _tmp48 = -_tmp37 * _tmp44 + _tmp47;
  const Scalar _tmp49 = _tmp39 * _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp16;
  const Scalar _tmp51 = Scalar(1.0) * _tmp26;
  const Scalar _tmp52 = (-_tmp30 + _tmp50) / (_tmp34 - _tmp51);
  const Scalar _tmp53 = -_tmp28 * _tmp47 + _tmp38 * _tmp44;
  const Scalar _tmp54 = _tmp39 * _tmp53;
  const Scalar _tmp55 = -Scalar(1.0) * _tmp49 + Scalar(1.0) * _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp29 + _tmp7;
  const Scalar _tmp57 = _tmp56 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp58 = _tmp25 + _tmp32;
  const Scalar _tmp59 = _tmp58 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = _tmp28 * _tmp61 - _tmp62;
  const Scalar _tmp64 = _tmp39 * _tmp63;
  const Scalar _tmp65 = _tmp42 + _tmp45;
  const Scalar _tmp66 = _tmp46 * _tmp61;
  const Scalar _tmp67 = -_tmp48 * _tmp64 -
                        _tmp52 * (-_tmp28 * _tmp66 - _tmp53 * _tmp64 + _tmp62 * _tmp65) -
                        _tmp61 * _tmp65 + _tmp66;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp27, Scalar(2))));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp18 * _tmp69;
  const Scalar _tmp72 = _tmp71 * (_tmp16 * _tmp27 * _tmp70 - _tmp17 * _tmp26 * _tmp70);
  const Scalar _tmp73 = _tmp39 * (-_tmp30 * _tmp38 + _tmp34 * _tmp37 + _tmp37 * _tmp72);
  const Scalar _tmp74 = -_tmp56 * _tmp62 + _tmp58 * _tmp61 + _tmp61 * _tmp72 - _tmp63 * _tmp73;
  const Scalar _tmp75 = _tmp68 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp77 = _tmp67 * _tmp76;
  const Scalar _tmp78 = _tmp55 + _tmp77 * (-_tmp55 * _tmp75 - Scalar(1.0) * _tmp73);
  const Scalar _tmp79 = _tmp63 * _tmp68;
  const Scalar _tmp80 = -_tmp78 * _tmp79 + Scalar(1.0);
  const Scalar _tmp81 = _tmp37 * _tmp39;
  const Scalar _tmp82 = _tmp61 * _tmp68;
  const Scalar _tmp83 = _tmp15 + _tmp6;
  const Scalar _tmp84 = _tmp83 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp85 = _tmp19 + _tmp33;
  const Scalar _tmp86 = _tmp85 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp86 * _tmp87;
  const Scalar _tmp89 = _tmp88 * fh1;
  const Scalar _tmp90 = _tmp28 * _tmp49 - _tmp46 - _tmp52 * (_tmp28 * _tmp46 + _tmp28 * _tmp54);
  const Scalar _tmp91 = _tmp77 * (_tmp28 * _tmp73 - _tmp72 - _tmp75 * _tmp90) + _tmp90;
  const Scalar _tmp92 = -_tmp28 - _tmp79 * _tmp91;
  const Scalar _tmp93 = _tmp84 * _tmp87;
  const Scalar _tmp94 = _tmp93 * fh1;
  const Scalar _tmp95 = Scalar(1.0) * _tmp76;
  const Scalar _tmp96 = fh1 * (_tmp83 * _tmp88 - _tmp85 * _tmp93);
  const Scalar _tmp97 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp98 = _tmp50 + _tmp51 * _tmp52;
  const Scalar _tmp99 = 0;
  const Scalar _tmp100 = _tmp68 * _tmp99;
  const Scalar _tmp101 = _tmp79 * _tmp99;
  const Scalar _tmp102 = _tmp95 * _tmp96;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = std::exp(-fh1);
  _res(1, 0) = std::exp(_tmp71 * _tmp89 * (_tmp78 * _tmp82 + _tmp80 * _tmp81) +
                        _tmp71 * _tmp94 * (_tmp81 * _tmp92 + _tmp82 * _tmp91 + Scalar(1.0)) +
                        _tmp71 * _tmp96 * (-_tmp37 * _tmp64 * _tmp95 + _tmp61 * _tmp95) +
                        _tmp71 * _tmp97 * (_tmp100 * _tmp61 - _tmp101 * _tmp81));
  _res(2, 0) = std::exp(_tmp101 * _tmp39 * _tmp97 + _tmp102 * _tmp64 - _tmp39 * _tmp80 * _tmp89 -
                        _tmp39 * _tmp92 * _tmp94);
  _res(3, 0) =
      std::exp(-_tmp100 * _tmp97 - _tmp102 - _tmp68 * _tmp78 * _tmp89 - _tmp68 * _tmp91 * _tmp94);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
