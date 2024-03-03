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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 291

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (106)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -Scalar(0.010999999999999999) * _tmp1 -
                       Scalar(0.010999999999999999) * _tmp3 + Scalar(-0.010999999999999999);
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp2 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = _tmp0 * _tmp6;
  const Scalar _tmp13 = _tmp2 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14 + _tmp4;
  const Scalar _tmp16 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp17 = _tmp5 * _tmp8;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 =
      -Scalar(0.010999999999999999) * _tmp7 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = _tmp19 - _tmp21;
  const Scalar _tmp23 = _tmp18 + _tmp22;
  const Scalar _tmp24 = _tmp23 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp28 =
      -Scalar(0.010999999999999999) * _tmp12 + Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp26 + _tmp29;
  const Scalar _tmp31 = _tmp30 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp32 = std::pow(Scalar(std::pow(_tmp24, Scalar(2)) + std::pow(_tmp31, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp33 = _tmp24 * _tmp32;
  const Scalar _tmp34 = -_tmp14 + _tmp4;
  const Scalar _tmp35 = _tmp10 + _tmp34;
  const Scalar _tmp36 = -_tmp15 * _tmp33 + _tmp33 * _tmp35;
  const Scalar _tmp37 = -_tmp18;
  const Scalar _tmp38 = _tmp19 + _tmp21;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = _tmp39 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = -_tmp27 + _tmp28;
  const Scalar _tmp43 = _tmp25 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp45 = _tmp41 * _tmp44;
  const Scalar _tmp46 = _tmp31 * _tmp32;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp33 * _tmp45 - _tmp46);
  const Scalar _tmp48 = Scalar(1.0) * _tmp47;
  const Scalar _tmp49 = _tmp35 * _tmp45;
  const Scalar _tmp50 = _tmp15 * _tmp46 - _tmp33 * _tmp49;
  const Scalar _tmp51 = Scalar(1.0) * _tmp39;
  const Scalar _tmp52 = Scalar(1.0) * _tmp43;
  const Scalar _tmp53 = (-_tmp23 + _tmp51) / (_tmp30 - _tmp52);
  const Scalar _tmp54 = -_tmp36 * _tmp48 + _tmp48 * _tmp50 * _tmp53;
  const Scalar _tmp55 = _tmp22 + _tmp37;
  const Scalar _tmp56 = _tmp55 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp57 = _tmp26 + _tmp42;
  const Scalar _tmp58 = _tmp57 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp56 * _tmp59;
  const Scalar _tmp61 = _tmp58 * _tmp59;
  const Scalar _tmp62 = _tmp45 * _tmp60 - _tmp61;
  const Scalar _tmp63 = _tmp47 * _tmp62;
  const Scalar _tmp64 = _tmp11 + _tmp34;
  const Scalar _tmp65 = _tmp35 * _tmp60;
  const Scalar _tmp66 = -_tmp36 * _tmp63 -
                        _tmp53 * (-_tmp45 * _tmp65 - _tmp50 * _tmp63 + _tmp61 * _tmp64) -
                        _tmp60 * _tmp64 + _tmp65;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp41 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (_tmp39 * _tmp44 * _tmp69 - _tmp40 * _tmp43 * _tmp69);
  const Scalar _tmp72 = -_tmp23 * _tmp46 + _tmp30 * _tmp33 + _tmp33 * _tmp71;
  const Scalar _tmp73 = -_tmp55 * _tmp61 + _tmp57 * _tmp60 + _tmp60 * _tmp71 - _tmp63 * _tmp72;
  const Scalar _tmp74 = _tmp67 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp76 = _tmp66 * _tmp75;
  const Scalar _tmp77 = _tmp54 + _tmp76 * (-_tmp48 * _tmp72 - _tmp54 * _tmp74);
  const Scalar _tmp78 = _tmp62 * _tmp67;
  const Scalar _tmp79 = -_tmp77 * _tmp78 + Scalar(1.0);
  const Scalar _tmp80 = _tmp33 * _tmp47;
  const Scalar _tmp81 = _tmp60 * _tmp67;
  const Scalar _tmp82 = _tmp25 + _tmp29;
  const Scalar _tmp83 = _tmp82 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp84 = _tmp18 + _tmp38;
  const Scalar _tmp85 = _tmp84 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp70 * fh1;
  const Scalar _tmp89 = _tmp45 * _tmp47;
  const Scalar _tmp90 = -_tmp35 + _tmp36 * _tmp89 - _tmp53 * (_tmp49 + _tmp50 * _tmp89);
  const Scalar _tmp91 = _tmp76 * (-_tmp71 + _tmp72 * _tmp89 - _tmp74 * _tmp90) + _tmp90;
  const Scalar _tmp92 = -_tmp45 - _tmp78 * _tmp91;
  const Scalar _tmp93 = _tmp85 * _tmp86;
  const Scalar _tmp94 = Scalar(1.0) * _tmp75;
  const Scalar _tmp95 = fh1 * (-_tmp82 * _tmp93 + _tmp84 * _tmp87);
  const Scalar _tmp96 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp97 = _tmp51 + _tmp52 * _tmp53;
  const Scalar _tmp98 = 0;
  const Scalar _tmp99 = _tmp67 * _tmp98;
  const Scalar _tmp100 = _tmp78 * _tmp98;
  const Scalar _tmp101 = _tmp70 * (-_tmp100 * _tmp80 + _tmp60 * _tmp99);
  const Scalar _tmp102 = _tmp94 * _tmp95;
  const Scalar _tmp103 = _tmp47 * fh1;
  const Scalar _tmp104 = _tmp100 * _tmp47;
  const Scalar _tmp105 = _tmp67 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp101 *
      std::exp(_tmp101 * _tmp96 + _tmp70 * _tmp95 * (-_tmp33 * _tmp63 * _tmp94 + _tmp60 * _tmp94) +
               _tmp87 * _tmp88 * (_tmp77 * _tmp81 + _tmp79 * _tmp80) +
               _tmp88 * _tmp93 * (_tmp80 * _tmp92 + _tmp81 * _tmp91 + Scalar(1.0)));
  _res(2, 0) = -_tmp104 * std::exp(_tmp102 * _tmp63 - _tmp103 * _tmp79 * _tmp87 -
                                   _tmp103 * _tmp92 * _tmp93 + _tmp104 * _tmp96);
  _res(3, 0) = _tmp99 * std::exp(-_tmp102 - _tmp105 * _tmp77 * _tmp87 - _tmp105 * _tmp91 * _tmp93 -
                                 _tmp96 * _tmp99);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
