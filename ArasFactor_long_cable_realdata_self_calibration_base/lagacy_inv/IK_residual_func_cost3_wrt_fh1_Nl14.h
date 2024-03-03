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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 302

  // Unused inputs
  (void)encoder;
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
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp0 * _tmp11;
  const Scalar _tmp23 = _tmp1 * _tmp4;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -_tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp28 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp27, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp29 = _tmp17 * _tmp28;
  const Scalar _tmp30 = _tmp10 + _tmp14;
  const Scalar _tmp31 = _tmp30 + _tmp7;
  const Scalar _tmp32 = _tmp31 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.0) / (_tmp32);
  const Scalar _tmp34 = _tmp18 + _tmp25;
  const Scalar _tmp35 = _tmp34 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp36 = _tmp33 * _tmp35;
  const Scalar _tmp37 = _tmp27 * _tmp28;
  const Scalar _tmp38 = Scalar(1.0) / (_tmp29 * _tmp36 - _tmp37);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp43 = _tmp41 - _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = _tmp40 + _tmp41 + _tmp42;
  const Scalar _tmp46 = _tmp29 * _tmp45;
  const Scalar _tmp47 = -_tmp29 * _tmp44 + _tmp46;
  const Scalar _tmp48 = Scalar(1.0) * _tmp38;
  const Scalar _tmp49 = -_tmp36 * _tmp46 + _tmp37 * _tmp44;
  const Scalar _tmp50 = Scalar(1.0) * _tmp34;
  const Scalar _tmp51 = Scalar(1.0) * _tmp31;
  const Scalar _tmp52 = (-_tmp16 + _tmp51) / (_tmp26 - _tmp50);
  const Scalar _tmp53 = -_tmp47 * _tmp48 + _tmp48 * _tmp49 * _tmp52;
  const Scalar _tmp54 = _tmp39 + _tmp43;
  const Scalar _tmp55 = _tmp15 + _tmp6;
  const Scalar _tmp56 = _tmp55 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp57 = _tmp21 + _tmp24;
  const Scalar _tmp58 = _tmp19 + _tmp57;
  const Scalar _tmp59 = _tmp58 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp45 * _tmp61;
  const Scalar _tmp63 = _tmp59 * _tmp60;
  const Scalar _tmp64 = _tmp36 * _tmp61 - _tmp63;
  const Scalar _tmp65 = _tmp38 * _tmp64;
  const Scalar _tmp66 = -_tmp47 * _tmp65 -
                        _tmp52 * (-_tmp36 * _tmp62 - _tmp49 * _tmp65 + _tmp54 * _tmp63) -
                        _tmp54 * _tmp61 + _tmp62;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp32, Scalar(2)) + std::pow(_tmp35, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp33 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (_tmp31 * _tmp35 * _tmp69 - _tmp32 * _tmp34 * _tmp69);
  const Scalar _tmp72 = -_tmp16 * _tmp37 + _tmp26 * _tmp29 + _tmp29 * _tmp71;
  const Scalar _tmp73 = -_tmp55 * _tmp63 + _tmp58 * _tmp61 + _tmp61 * _tmp71 - _tmp65 * _tmp72;
  const Scalar _tmp74 = _tmp67 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp76 = _tmp66 * _tmp75;
  const Scalar _tmp77 = _tmp53 + _tmp76 * (-_tmp48 * _tmp72 - _tmp53 * _tmp74);
  const Scalar _tmp78 = _tmp64 * _tmp67;
  const Scalar _tmp79 = _tmp38 * (-_tmp77 * _tmp78 + Scalar(1.0));
  const Scalar _tmp80 = _tmp67 * _tmp77;
  const Scalar _tmp81 = _tmp18 + _tmp57;
  const Scalar _tmp82 = _tmp81 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp83 = _tmp30 + _tmp6;
  const Scalar _tmp84 = _tmp83 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp82 * _tmp85;
  const Scalar _tmp87 = _tmp70 * _tmp86 * (_tmp29 * _tmp79 + _tmp61 * _tmp80);
  const Scalar _tmp88 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp89 = _tmp50 * _tmp52 + _tmp51;
  const Scalar _tmp90 = 0;
  const Scalar _tmp91 = _tmp29 * _tmp65;
  const Scalar _tmp92 = _tmp36 * _tmp38;
  const Scalar _tmp93 = -_tmp45 + _tmp47 * _tmp92 - _tmp52 * (_tmp36 * _tmp45 + _tmp49 * _tmp92);
  const Scalar _tmp94 = _tmp76 * (-_tmp71 + _tmp72 * _tmp92 - _tmp74 * _tmp93) + _tmp93;
  const Scalar _tmp95 = _tmp38 * (-_tmp36 - _tmp78 * _tmp94);
  const Scalar _tmp96 = _tmp67 * _tmp94;
  const Scalar _tmp97 = _tmp84 * _tmp85;
  const Scalar _tmp98 = _tmp70 * _tmp97 * (_tmp29 * _tmp95 + _tmp61 * _tmp96 + Scalar(1.0));
  const Scalar _tmp99 = -_tmp81 * _tmp97 + _tmp83 * _tmp86;
  const Scalar _tmp100 = Scalar(1.0) * _tmp75;
  const Scalar _tmp101 = _tmp70 * _tmp99 * (_tmp100 * _tmp61 - _tmp100 * _tmp91);
  const Scalar _tmp102 = _tmp95 * _tmp97;
  const Scalar _tmp103 = _tmp79 * _tmp86;
  const Scalar _tmp104 = _tmp88 * _tmp90;
  const Scalar _tmp105 = _tmp100 * _tmp99;
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = _tmp80 * _tmp86;
  const Scalar _tmp108 = _tmp96 * _tmp97;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp101 - _tmp87 - _tmp98) *
               std::exp(_tmp101 * fh1 + _tmp70 * _tmp88 * (_tmp61 * _tmp90 - _tmp90 * _tmp91) +
                        _tmp87 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(_tmp102 + _tmp103 - _tmp105 * _tmp65) *
               std::exp(-_tmp102 * fh1 - _tmp103 * fh1 + _tmp104 * _tmp65 + _tmp106 * _tmp65);
  _res(3, 0) =
      -(_tmp105 + _tmp107 + _tmp108) * std::exp(-_tmp104 - _tmp106 - _tmp107 * fh1 - _tmp108 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
