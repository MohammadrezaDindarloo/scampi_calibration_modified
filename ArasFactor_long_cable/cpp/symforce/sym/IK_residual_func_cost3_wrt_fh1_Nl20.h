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
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 299

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (114)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp0;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = 2 * _tmp2;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp12 = _tmp5 * _tmp9;
  const Scalar _tmp13 = _tmp6 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp18 = _tmp16 + _tmp17;
  const Scalar _tmp19 = Scalar(1.0) / (_tmp18);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp21 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp21 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = _tmp2 * _tmp6;
  const Scalar _tmp24 = 2 * _tmp5 * _tmp8;
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp23 + Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp22 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp19 * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp32 = -_tmp31;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp34 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = _tmp30 * _tmp36;
  const Scalar _tmp38 = _tmp32 + _tmp33 - _tmp34;
  const Scalar _tmp39 = -_tmp20;
  const Scalar _tmp40 = _tmp26 + _tmp39;
  const Scalar _tmp41 = _tmp28 + _tmp40;
  const Scalar _tmp42 = -_tmp4;
  const Scalar _tmp43 = _tmp15 + _tmp42;
  const Scalar _tmp44 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = _tmp45 * _tmp46;
  const Scalar _tmp49 = -_tmp37 * _tmp48 + _tmp38 * _tmp47;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp30 * _tmp48 - _tmp47);
  const Scalar _tmp51 = _tmp30 * _tmp50;
  const Scalar _tmp52 = Scalar(1.0) * _tmp27;
  const Scalar _tmp53 = Scalar(1.0) * _tmp16;
  const Scalar _tmp54 = (-_tmp43 + _tmp53) / (_tmp40 - _tmp52);
  const Scalar _tmp55 = _tmp36 * _tmp48 - _tmp38 * _tmp48;
  const Scalar _tmp56 = -_tmp36 + _tmp51 * _tmp55 - _tmp54 * (_tmp37 + _tmp49 * _tmp51);
  const Scalar _tmp57 = _tmp22 + _tmp25;
  const Scalar _tmp58 = _tmp20 + _tmp57;
  const Scalar _tmp59 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp60 = _tmp58 + _tmp59;
  const Scalar _tmp61 = _tmp11 + _tmp14;
  const Scalar _tmp62 = _tmp4 + _tmp61;
  const Scalar _tmp63 = _tmp17 + _tmp62;
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp60 * _tmp64;
  const Scalar _tmp67 =
      std::sqrt(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))));
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp19 * _tmp67;
  const Scalar _tmp70 = _tmp69 * (_tmp16 * _tmp29 * _tmp68 - _tmp18 * _tmp27 * _tmp68);
  const Scalar _tmp71 = _tmp40 * _tmp48 - _tmp43 * _tmp47 + _tmp48 * _tmp70;
  const Scalar _tmp72 = _tmp30 * _tmp65 - _tmp66;
  const Scalar _tmp73 = _tmp50 * _tmp72;
  const Scalar _tmp74 = _tmp58 * _tmp65 - _tmp62 * _tmp66 + _tmp65 * _tmp70 - _tmp71 * _tmp73;
  const Scalar _tmp75 = _tmp31 + _tmp35;
  const Scalar _tmp76 = _tmp36 * _tmp65 -
                        _tmp54 * (-_tmp37 * _tmp65 - _tmp49 * _tmp73 + _tmp66 * _tmp75) -
                        _tmp55 * _tmp73 - _tmp65 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = _tmp74 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp80 = _tmp76 * _tmp79;
  const Scalar _tmp81 = _tmp56 + _tmp80 * (_tmp51 * _tmp71 - _tmp56 * _tmp78 - _tmp70);
  const Scalar _tmp82 = _tmp72 * _tmp77;
  const Scalar _tmp83 = -_tmp30 - _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp48 * _tmp50;
  const Scalar _tmp85 = _tmp77 * _tmp81;
  const Scalar _tmp86 = _tmp42 + _tmp61;
  const Scalar _tmp87 = _tmp44 + _tmp86;
  const Scalar _tmp88 = _tmp39 + _tmp57;
  const Scalar _tmp89 = _tmp59 + _tmp88;
  const Scalar _tmp90 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp89, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp91 = _tmp87 * _tmp90;
  const Scalar _tmp92 = _tmp69 * _tmp91 * (_tmp65 * _tmp85 + _tmp83 * _tmp84 + Scalar(1.0));
  const Scalar _tmp93 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp94 = _tmp52 * _tmp54 + _tmp53;
  const Scalar _tmp95 = 0;
  const Scalar _tmp96 = _tmp82 * _tmp95;
  const Scalar _tmp97 = _tmp77 * _tmp95;
  const Scalar _tmp98 = Scalar(1.0) * _tmp50;
  const Scalar _tmp99 = _tmp49 * _tmp54 * _tmp98 - _tmp55 * _tmp98;
  const Scalar _tmp100 = _tmp80 * (-_tmp71 * _tmp98 - _tmp78 * _tmp99) + _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp82 + Scalar(1.0);
  const Scalar _tmp102 = _tmp100 * _tmp77;
  const Scalar _tmp103 = _tmp89 * _tmp90;
  const Scalar _tmp104 = _tmp103 * _tmp69 * (_tmp101 * _tmp84 + _tmp102 * _tmp65);
  const Scalar _tmp105 = _tmp103 * _tmp86 - _tmp88 * _tmp91;
  const Scalar _tmp106 = Scalar(1.0) * _tmp79;
  const Scalar _tmp107 = _tmp105 * _tmp69 * (-_tmp106 * _tmp48 * _tmp73 + _tmp106 * _tmp65);
  const Scalar _tmp108 = _tmp50 * _tmp83 * _tmp91;
  const Scalar _tmp109 = _tmp105 * _tmp106;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp101 * _tmp103 * _tmp50;
  const Scalar _tmp112 = _tmp102 * _tmp103;
  const Scalar _tmp113 = _tmp85 * _tmp91;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp104 - _tmp107 - _tmp92) *
               std::exp(_tmp104 * fh1 + _tmp107 * fh1 +
                        _tmp69 * _tmp93 * (_tmp65 * _tmp97 - _tmp84 * _tmp96) + _tmp92 * fh1);
  _res(2, 0) =
      -(_tmp108 - _tmp109 * _tmp73 + _tmp111) *
      std::exp(-_tmp108 * fh1 + _tmp110 * _tmp73 - _tmp111 * fh1 + _tmp50 * _tmp93 * _tmp96);
  _res(3, 0) = -(_tmp109 + _tmp112 + _tmp113) *
               std::exp(-_tmp110 - _tmp112 * fh1 - _tmp113 * fh1 - _tmp93 * _tmp97);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
