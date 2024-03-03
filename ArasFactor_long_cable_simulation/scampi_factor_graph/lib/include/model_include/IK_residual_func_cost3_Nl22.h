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
 * Symbolic function: IK_residual_func_cost3_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3Nl22(
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
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp0;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = 2 * _tmp2;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp13 = _tmp10 * _tmp6;
  const Scalar _tmp14 = _tmp7 * _tmp9;
  const Scalar _tmp15 =
      -Scalar(0.010999999999999999) * _tmp13 + Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp19 = _tmp17 + _tmp18;
  const Scalar _tmp20 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp0 * _tmp10;
  const Scalar _tmp23 = 2 * _tmp6 * _tmp9;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp27 = _tmp24 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = std::pow(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 = _tmp30 * _tmp31;
  const Scalar _tmp33 = _tmp16 + _tmp4;
  const Scalar _tmp34 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp20 + _tmp27;
  const Scalar _tmp37 = _tmp29 + _tmp36;
  const Scalar _tmp38 =
      std::sqrt(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp37, Scalar(2))));
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = Scalar(1.0) / (_tmp37);
  const Scalar _tmp41 = _tmp38 * _tmp40;
  const Scalar _tmp42 = _tmp41 * (-_tmp33 * _tmp37 * _tmp39 + _tmp35 * _tmp36 * _tmp39);
  const Scalar _tmp43 = -_tmp12 + _tmp15;
  const Scalar _tmp44 = _tmp43 + _tmp5;
  const Scalar _tmp45 = _tmp18 + _tmp44;
  const Scalar _tmp46 = _tmp24 - _tmp26;
  const Scalar _tmp47 = _tmp21 + _tmp46;
  const Scalar _tmp48 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp49 * _tmp50;
  const Scalar _tmp52 = _tmp45 * _tmp50;
  const Scalar _tmp53 = _tmp42 * _tmp51 + _tmp44 * _tmp51 - _tmp47 * _tmp52;
  const Scalar _tmp54 = _tmp19 * _tmp31;
  const Scalar _tmp55 = _tmp35 * _tmp40;
  const Scalar _tmp56 = _tmp32 * _tmp55 - _tmp54;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp51 * _tmp55 - _tmp52);
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp17 * _tmp32 - _tmp28 * _tmp54 + _tmp32 * _tmp42 - _tmp53 * _tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp61 = Scalar(1.0) * _tmp60;
  const Scalar _tmp62 = _tmp20 + _tmp46;
  const Scalar _tmp63 = _tmp4 + _tmp43;
  const Scalar _tmp64 = _tmp34 + _tmp63;
  const Scalar _tmp65 = _tmp48 + _tmp62;
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp64 * _tmp66;
  const Scalar _tmp68 = _tmp65 * _tmp66;
  const Scalar _tmp69 = fh1 * (_tmp62 * _tmp67 - _tmp63 * _tmp68);
  const Scalar _tmp70 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp71 = _tmp51 * _tmp57;
  const Scalar _tmp72 = Scalar(1.0) * _tmp33;
  const Scalar _tmp73 = Scalar(1.0) * _tmp36;
  const Scalar _tmp74 = (-_tmp47 + _tmp73) / (_tmp44 - _tmp72);
  const Scalar _tmp75 = _tmp72 * _tmp74 + _tmp73;
  const Scalar _tmp76 = 0;
  const Scalar _tmp77 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp78 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp79 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp80 = _tmp78 - _tmp79;
  const Scalar _tmp81 = _tmp77 + _tmp80;
  const Scalar _tmp82 = -_tmp77 + _tmp80;
  const Scalar _tmp83 = _tmp77 + _tmp78 + _tmp79;
  const Scalar _tmp84 = _tmp51 * _tmp83;
  const Scalar _tmp85 = _tmp52 * _tmp82 - _tmp55 * _tmp84;
  const Scalar _tmp86 = _tmp32 * _tmp83;
  const Scalar _tmp87 = -_tmp51 * _tmp82 + _tmp84;
  const Scalar _tmp88 = -_tmp32 * _tmp81 - _tmp58 * _tmp87 -
                        _tmp74 * (_tmp54 * _tmp81 - _tmp55 * _tmp86 - _tmp58 * _tmp85) + _tmp86;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp56 * _tmp89;
  const Scalar _tmp91 = _tmp76 * _tmp90;
  const Scalar _tmp92 = _tmp76 * _tmp89;
  const Scalar _tmp93 = _tmp55 * _tmp57;
  const Scalar _tmp94 = -_tmp74 * (_tmp55 * _tmp83 + _tmp85 * _tmp93) - _tmp83 + _tmp87 * _tmp93;
  const Scalar _tmp95 = _tmp59 * _tmp89;
  const Scalar _tmp96 = _tmp60 * _tmp88;
  const Scalar _tmp97 = _tmp94 + _tmp96 * (-_tmp42 + _tmp53 * _tmp93 - _tmp94 * _tmp95);
  const Scalar _tmp98 = _tmp32 * _tmp89;
  const Scalar _tmp99 = -_tmp55 - _tmp90 * _tmp97;
  const Scalar _tmp100 = _tmp68 * fh1;
  const Scalar _tmp101 = Scalar(1.0) * _tmp57;
  const Scalar _tmp102 = _tmp101 * _tmp74 * _tmp85 - _tmp101 * _tmp87;
  const Scalar _tmp103 = _tmp102 + _tmp96 * (-_tmp101 * _tmp53 - _tmp102 * _tmp95);
  const Scalar _tmp104 = -_tmp103 * _tmp90 + Scalar(1.0);
  const Scalar _tmp105 = _tmp67 * fh1;
  const Scalar _tmp106 = _tmp61 * _tmp69;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = std::exp(-fh1);
  _res(1, 0) = std::exp(_tmp100 * _tmp41 * (_tmp71 * _tmp99 + _tmp97 * _tmp98 + Scalar(1.0)) +
                        _tmp105 * _tmp41 * (_tmp103 * _tmp98 + _tmp104 * _tmp71) +
                        _tmp41 * _tmp69 * (_tmp32 * _tmp61 - _tmp51 * _tmp58 * _tmp61) +
                        _tmp41 * _tmp70 * (_tmp32 * _tmp92 - _tmp71 * _tmp91));
  _res(2, 0) = std::exp(-_tmp100 * _tmp57 * _tmp99 - _tmp104 * _tmp105 * _tmp57 + _tmp106 * _tmp58 +
                        _tmp57 * _tmp70 * _tmp91);
  _res(3, 0) =
      std::exp(-_tmp100 * _tmp89 * _tmp97 - _tmp103 * _tmp105 * _tmp89 - _tmp106 - _tmp70 * _tmp92);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym