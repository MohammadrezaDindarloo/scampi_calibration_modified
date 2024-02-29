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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 289

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (104)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 - _tmp7;
  const Scalar _tmp16 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 =
      -Scalar(0.010999999999999999) * _tmp3 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp20 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp21 = _tmp1 * _tmp5;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp19 - _tmp22;
  const Scalar _tmp24 = _tmp18 + _tmp23;
  const Scalar _tmp25 = _tmp24 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp27 = -_tmp26;
  const Scalar _tmp28 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp27 + _tmp30;
  const Scalar _tmp32 = _tmp31 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp33 = std::pow(Scalar(std::pow(_tmp25, Scalar(2)) + std::pow(_tmp32, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp34 = _tmp25 * _tmp33;
  const Scalar _tmp35 = _tmp14 + _tmp7;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = -_tmp15 * _tmp34 + _tmp36;
  const Scalar _tmp38 = _tmp17 + _tmp23;
  const Scalar _tmp39 = _tmp38 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp40 = Scalar(1.0) / (_tmp39);
  const Scalar _tmp41 = _tmp26 + _tmp30;
  const Scalar _tmp42 = _tmp41 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp32 * _tmp33;
  const Scalar _tmp45 = Scalar(1.0) / (_tmp34 * _tmp43 - _tmp44);
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = _tmp15 * _tmp44 - _tmp36 * _tmp43;
  const Scalar _tmp48 = Scalar(1.0) * _tmp41;
  const Scalar _tmp49 = Scalar(1.0) * _tmp38;
  const Scalar _tmp50 = (-_tmp24 + _tmp49) / (_tmp31 - _tmp48);
  const Scalar _tmp51 = -_tmp37 * _tmp46 + _tmp46 * _tmp47 * _tmp50;
  const Scalar _tmp52 = _tmp19 + _tmp22;
  const Scalar _tmp53 = _tmp17 + _tmp52;
  const Scalar _tmp54 = _tmp53 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp55 = _tmp28 + _tmp29;
  const Scalar _tmp56 = _tmp26 + _tmp55;
  const Scalar _tmp57 = _tmp56 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp58 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp57, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp54 * _tmp58;
  const Scalar _tmp60 = _tmp57 * _tmp58;
  const Scalar _tmp61 = _tmp43 * _tmp59 - _tmp60;
  const Scalar _tmp62 = _tmp45 * _tmp61;
  const Scalar _tmp63 = _tmp35 * _tmp59;
  const Scalar _tmp64 = _tmp10 + _tmp13 + _tmp7;
  const Scalar _tmp65 = -_tmp37 * _tmp62 -
                        _tmp50 * (-_tmp43 * _tmp63 - _tmp47 * _tmp62 + _tmp60 * _tmp64) -
                        _tmp59 * _tmp64 + _tmp63;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 =
      std::sqrt(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp40 * _tmp67;
  const Scalar _tmp70 = _tmp69 * (_tmp38 * _tmp42 * _tmp68 - _tmp39 * _tmp41 * _tmp68);
  const Scalar _tmp71 = -_tmp24 * _tmp44 + _tmp31 * _tmp34 + _tmp34 * _tmp70;
  const Scalar _tmp72 = -_tmp53 * _tmp60 + _tmp56 * _tmp59 + _tmp59 * _tmp70 - _tmp62 * _tmp71;
  const Scalar _tmp73 = _tmp66 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp75 = _tmp65 * _tmp74;
  const Scalar _tmp76 = _tmp51 + _tmp75 * (-_tmp46 * _tmp71 - _tmp51 * _tmp73);
  const Scalar _tmp77 = _tmp59 * _tmp66;
  const Scalar _tmp78 = _tmp61 * _tmp66;
  const Scalar _tmp79 = -_tmp76 * _tmp78 + Scalar(1.0);
  const Scalar _tmp80 = _tmp34 * _tmp45;
  const Scalar _tmp81 = _tmp18 + _tmp52;
  const Scalar _tmp82 = _tmp81 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp83 = _tmp27 + _tmp55;
  const Scalar _tmp84 = _tmp83 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = _tmp69 * fh1;
  const Scalar _tmp88 = _tmp43 * _tmp45;
  const Scalar _tmp89 = -_tmp35 + _tmp37 * _tmp88 - _tmp50 * (_tmp35 * _tmp43 + _tmp47 * _tmp88);
  const Scalar _tmp90 = _tmp75 * (-_tmp70 + _tmp71 * _tmp88 - _tmp73 * _tmp89) + _tmp89;
  const Scalar _tmp91 = -_tmp43 - _tmp78 * _tmp90;
  const Scalar _tmp92 = _tmp82 * _tmp85;
  const Scalar _tmp93 = Scalar(1.0) * _tmp74;
  const Scalar _tmp94 = _tmp46 * _tmp61 * _tmp74;
  const Scalar _tmp95 = fh1 * (_tmp81 * _tmp86 - _tmp83 * _tmp92);
  const Scalar _tmp96 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp97 = _tmp48 * _tmp50 + _tmp49;
  const Scalar _tmp98 = 0;
  const Scalar _tmp99 = _tmp62 * _tmp98;
  const Scalar _tmp100 = _tmp69 * (-_tmp34 * _tmp99 + _tmp59 * _tmp98);
  const Scalar _tmp101 = _tmp96 * _tmp98;
  const Scalar _tmp102 = _tmp45 * fh1;
  const Scalar _tmp103 = _tmp66 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) = -_tmp100 *
               std::exp(_tmp100 * _tmp96 + _tmp69 * _tmp95 * (-_tmp34 * _tmp94 + _tmp59 * _tmp93) +
                        _tmp86 * _tmp87 * (_tmp76 * _tmp77 + _tmp79 * _tmp80) +
                        _tmp87 * _tmp92 * (_tmp77 * _tmp90 + _tmp80 * _tmp91 + Scalar(1.0)));
  _res(2, 0) = -_tmp99 * std::exp(_tmp101 * _tmp62 - _tmp102 * _tmp79 * _tmp86 -
                                  _tmp102 * _tmp91 * _tmp92 + _tmp94 * _tmp95);
  _res(3, 0) = _tmp98 * std::exp(-_tmp101 - _tmp103 * _tmp76 * _tmp86 - _tmp103 * _tmp90 * _tmp92 -
                                 _tmp93 * _tmp95);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
