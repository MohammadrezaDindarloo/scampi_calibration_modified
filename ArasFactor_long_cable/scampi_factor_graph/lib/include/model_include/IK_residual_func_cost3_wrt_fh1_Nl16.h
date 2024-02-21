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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 298

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (113)
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
  const Scalar _tmp6 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -Scalar(0.010999999999999999) * _tmp6 + Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp0;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = _tmp2 * _tmp7;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp13 + _tmp9;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp20 = _tmp10 * _tmp2;
  const Scalar _tmp21 = _tmp5 * _tmp7;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp27, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp29 = _tmp27 * _tmp28;
  const Scalar _tmp30 = _tmp17 * _tmp28;
  const Scalar _tmp31 = -_tmp15 * _tmp29 + _tmp25 * _tmp30;
  const Scalar _tmp32 = -_tmp4;
  const Scalar _tmp33 = -_tmp13 + _tmp9;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = -_tmp19;
  const Scalar _tmp38 = _tmp22 - _tmp23;
  const Scalar _tmp39 = _tmp37 + _tmp38;
  const Scalar _tmp40 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = _tmp33 + _tmp4;
  const Scalar _tmp45 = _tmp16 + _tmp44;
  const Scalar _tmp46 = _tmp24 + _tmp37;
  const Scalar _tmp47 = _tmp40 + _tmp46;
  const Scalar _tmp48 =
      std::sqrt(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp47, Scalar(2))));
  const Scalar _tmp49 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp51 = _tmp48 * _tmp50;
  const Scalar _tmp52 = _tmp51 * (-_tmp44 * _tmp47 * _tmp49 + _tmp45 * _tmp46 * _tmp49);
  const Scalar _tmp53 = _tmp36 * _tmp42;
  const Scalar _tmp54 = _tmp34 * _tmp43 - _tmp39 * _tmp53 + _tmp43 * _tmp52;
  const Scalar _tmp55 = _tmp45 * _tmp50;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp43 * _tmp55 - _tmp53);
  const Scalar _tmp57 = _tmp14 + _tmp32;
  const Scalar _tmp58 = _tmp35 + _tmp57;
  const Scalar _tmp59 = _tmp19 + _tmp38;
  const Scalar _tmp60 = _tmp26 + _tmp59;
  const Scalar _tmp61 = std::pow(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp60, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp58 * _tmp61;
  const Scalar _tmp63 = _tmp60 * _tmp61;
  const Scalar _tmp64 = _tmp55 * _tmp63 - _tmp62;
  const Scalar _tmp65 = _tmp56 * _tmp64;
  const Scalar _tmp66 = _tmp52 * _tmp63 - _tmp54 * _tmp65 + _tmp57 * _tmp63 - _tmp59 * _tmp62;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = Scalar(1.0) * _tmp67;
  const Scalar _tmp69 = _tmp43 * _tmp65;
  const Scalar _tmp70 = _tmp31 * _tmp51 * (_tmp63 * _tmp68 - _tmp68 * _tmp69);
  const Scalar _tmp71 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp72 = -_tmp71;
  const Scalar _tmp73 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp74 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp75 = _tmp73 - _tmp74;
  const Scalar _tmp76 = _tmp72 + _tmp75;
  const Scalar _tmp77 = _tmp72 + _tmp73 + _tmp74;
  const Scalar _tmp78 = _tmp55 * _tmp77;
  const Scalar _tmp79 = -_tmp43 * _tmp78 + _tmp53 * _tmp76;
  const Scalar _tmp80 = Scalar(1.0) * _tmp44;
  const Scalar _tmp81 = Scalar(1.0) * _tmp46;
  const Scalar _tmp82 = (-_tmp39 + _tmp81) / (_tmp34 - _tmp80);
  const Scalar _tmp83 = Scalar(1.0) * _tmp56;
  const Scalar _tmp84 = -_tmp43 * _tmp76 + _tmp43 * _tmp77;
  const Scalar _tmp85 = _tmp79 * _tmp82 * _tmp83 - _tmp83 * _tmp84;
  const Scalar _tmp86 = _tmp71 + _tmp75;
  const Scalar _tmp87 = _tmp63 * _tmp77;
  const Scalar _tmp88 = -_tmp63 * _tmp86 - _tmp65 * _tmp84 -
                        _tmp82 * (-_tmp55 * _tmp87 + _tmp62 * _tmp86 - _tmp65 * _tmp79) + _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp66 * _tmp89;
  const Scalar _tmp91 = _tmp67 * _tmp88;
  const Scalar _tmp92 = _tmp85 + _tmp91 * (-_tmp54 * _tmp83 - _tmp85 * _tmp90);
  const Scalar _tmp93 = _tmp64 * _tmp89;
  const Scalar _tmp94 = _tmp56 * (-_tmp92 * _tmp93 + Scalar(1.0));
  const Scalar _tmp95 = _tmp89 * _tmp92;
  const Scalar _tmp96 = _tmp30 * _tmp51 * (_tmp43 * _tmp94 + _tmp63 * _tmp95);
  const Scalar _tmp97 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp98 = _tmp80 * _tmp82 + _tmp81;
  const Scalar _tmp99 = 0;
  const Scalar _tmp100 = _tmp55 * _tmp56;
  const Scalar _tmp101 = _tmp100 * _tmp84 - _tmp77 - _tmp82 * (_tmp100 * _tmp79 + _tmp78);
  const Scalar _tmp102 = _tmp101 + _tmp91 * (_tmp100 * _tmp54 - _tmp101 * _tmp90 - _tmp52);
  const Scalar _tmp103 = _tmp56 * (-_tmp102 * _tmp93 - _tmp55);
  const Scalar _tmp104 = _tmp102 * _tmp89;
  const Scalar _tmp105 = _tmp29 * _tmp51 * (_tmp103 * _tmp43 + _tmp104 * _tmp63 + Scalar(1.0));
  const Scalar _tmp106 = _tmp30 * _tmp94;
  const Scalar _tmp107 = _tmp103 * _tmp29;
  const Scalar _tmp108 = _tmp97 * _tmp99;
  const Scalar _tmp109 = _tmp31 * _tmp68;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp104 * _tmp29;
  const Scalar _tmp112 = _tmp30 * _tmp95;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp105 - _tmp70 - _tmp96) *
               std::exp(_tmp105 * fh1 + _tmp51 * _tmp97 * (_tmp63 * _tmp99 - _tmp69 * _tmp99) +
                        _tmp70 * fh1 + _tmp96 * fh1);
  _res(2, 0) = -(_tmp106 + _tmp107 - _tmp109 * _tmp65) *
               std::exp(-_tmp106 * fh1 - _tmp107 * fh1 + _tmp108 * _tmp65 + _tmp110 * _tmp65);
  _res(3, 0) =
      -(_tmp109 + _tmp111 + _tmp112) * std::exp(-_tmp108 - _tmp110 - _tmp111 * fh1 - _tmp112 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym