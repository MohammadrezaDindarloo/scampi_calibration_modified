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
 * Symbolic function: IK_residual_func_cost3_Nl2
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3Nl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 279

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (107)
  const Scalar _tmp0 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = 2 * _tmp1;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 =
      Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp14 = _tmp11 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp8;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp20 = _tmp18 + _tmp19;
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp23 = _tmp11 * _tmp3;
  const Scalar _tmp24 = 2 * _tmp10 * _tmp7;
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp22 + _tmp27;
  const Scalar _tmp29 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = std::pow(Scalar(std::pow(_tmp20, Scalar(2)) + std::pow(_tmp30, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 = _tmp30 * _tmp31;
  const Scalar _tmp33 = _tmp20 * _tmp31;
  const Scalar _tmp34 = _tmp17 + _tmp5;
  const Scalar _tmp35 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = _tmp25 + _tmp26;
  const Scalar _tmp38 = _tmp22 + _tmp37;
  const Scalar _tmp39 = _tmp29 + _tmp38;
  const Scalar _tmp40 = Scalar(1.0) / (_tmp39);
  const Scalar _tmp41 = _tmp36 * _tmp40;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp32 * _tmp41 - _tmp33);
  const Scalar _tmp43 = _tmp13 - _tmp16;
  const Scalar _tmp44 = _tmp43 + _tmp5;
  const Scalar _tmp45 = _tmp35 + _tmp44;
  const Scalar _tmp46 = -_tmp22;
  const Scalar _tmp47 = _tmp37 + _tmp46;
  const Scalar _tmp48 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp45 * _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp50;
  const Scalar _tmp53 = _tmp41 * _tmp52 - _tmp51;
  const Scalar _tmp54 = _tmp42 * _tmp53;
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp56 =
      -Scalar(0.010999999999999999) * _tmp2 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp58 = _tmp56 + _tmp57;
  const Scalar _tmp59 = -_tmp55 + _tmp58;
  const Scalar _tmp60 = _tmp55 + _tmp56 - _tmp57;
  const Scalar _tmp61 = _tmp55 + _tmp58;
  const Scalar _tmp62 = _tmp32 * _tmp61;
  const Scalar _tmp63 = _tmp33 * _tmp60 - _tmp41 * _tmp62;
  const Scalar _tmp64 = _tmp52 * _tmp61;
  const Scalar _tmp65 = Scalar(1.0) * _tmp34;
  const Scalar _tmp66 = Scalar(1.0) * _tmp38;
  const Scalar _tmp67 = (-_tmp28 + _tmp66) / (_tmp18 - _tmp65);
  const Scalar _tmp68 = -_tmp32 * _tmp60 + _tmp62;
  const Scalar _tmp69 = -_tmp52 * _tmp59 - _tmp54 * _tmp68 + _tmp64 -
                        _tmp67 * (-_tmp41 * _tmp64 + _tmp51 * _tmp59 - _tmp54 * _tmp63);
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp65 * _tmp67 + _tmp66;
  const Scalar _tmp72 = 0;
  const Scalar _tmp73 =
      std::sqrt(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp39, Scalar(2))));
  const Scalar _tmp74 = _tmp40 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp76 = _tmp74 * (-_tmp34 * _tmp39 * _tmp75 + _tmp36 * _tmp38 * _tmp75);
  const Scalar _tmp77 = _tmp18 * _tmp32 - _tmp28 * _tmp33 + _tmp32 * _tmp76;
  const Scalar _tmp78 = _tmp44 * _tmp52 - _tmp47 * _tmp51 + _tmp52 * _tmp76 - _tmp54 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) * _tmp42;
  const Scalar _tmp82 = _tmp53 * _tmp79 * _tmp81;
  const Scalar _tmp83 = _tmp27 + _tmp46;
  const Scalar _tmp84 = _tmp43 + _tmp6;
  const Scalar _tmp85 = _tmp19 + _tmp84;
  const Scalar _tmp86 = _tmp48 + _tmp83;
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp85, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp86 * _tmp87;
  const Scalar _tmp90 = fh1 * (_tmp83 * _tmp88 - _tmp84 * _tmp89);
  const Scalar _tmp91 = _tmp41 * _tmp42;
  const Scalar _tmp92 = -_tmp61 - _tmp67 * (_tmp41 * _tmp61 + _tmp63 * _tmp91) + _tmp68 * _tmp91;
  const Scalar _tmp93 = _tmp70 * _tmp78;
  const Scalar _tmp94 = _tmp69 * _tmp79;
  const Scalar _tmp95 = _tmp92 + _tmp94 * (-_tmp76 + _tmp77 * _tmp91 - _tmp92 * _tmp93);
  const Scalar _tmp96 = _tmp53 * _tmp70;
  const Scalar _tmp97 = -_tmp41 - _tmp95 * _tmp96;
  const Scalar _tmp98 = _tmp32 * _tmp42;
  const Scalar _tmp99 = _tmp52 * _tmp70;
  const Scalar _tmp100 = _tmp74 * fh1;
  const Scalar _tmp101 = _tmp63 * _tmp67 * _tmp81 - _tmp68 * _tmp81;
  const Scalar _tmp102 = _tmp101 + _tmp94 * (-_tmp101 * _tmp93 - _tmp77 * _tmp81);
  const Scalar _tmp103 = -_tmp102 * _tmp96 + Scalar(1.0);
  const Scalar _tmp104 = _tmp42 * fh1;
  const Scalar _tmp105 = _tmp0 * _tmp72;
  const Scalar _tmp106 = _tmp70 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = std::exp(-fh1);
  _res(1, 0) = std::exp(_tmp0 * _tmp74 * (-_tmp32 * _tmp54 * _tmp72 + _tmp52 * _tmp72) +
                        _tmp100 * _tmp88 * (_tmp102 * _tmp99 + _tmp103 * _tmp98) +
                        _tmp100 * _tmp89 * (_tmp95 * _tmp99 + _tmp97 * _tmp98 + Scalar(1.0)) +
                        _tmp74 * _tmp90 * (-_tmp32 * _tmp82 + _tmp52 * _tmp80));
  _res(2, 0) = std::exp(-_tmp103 * _tmp104 * _tmp88 - _tmp104 * _tmp89 * _tmp97 + _tmp105 * _tmp54 +
                        _tmp82 * _tmp90);
  _res(3, 0) =
      std::exp(-_tmp102 * _tmp106 * _tmp88 - _tmp105 - _tmp106 * _tmp89 * _tmp95 - _tmp80 * _tmp90);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym