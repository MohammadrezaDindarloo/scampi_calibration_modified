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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl6
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl6(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 306

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
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp8 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp8 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp10 = 2 * _tmp3;
  const Scalar _tmp11 = _tmp0 * _tmp10;
  const Scalar _tmp12 = _tmp1 * _tmp4;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp13 - _tmp9;
  const Scalar _tmp15 = _tmp14 + _tmp6;
  const Scalar _tmp16 = _tmp15 + position_vector(1, 0) + Scalar(8.3885017487099702);
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = _tmp1 * _tmp10;
  const Scalar _tmp20 = _tmp0 * _tmp4;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 + position_vector(0, 0) + Scalar(-2.5193355532036801);
  const Scalar _tmp27 = std::pow(Scalar(std::pow(_tmp16, Scalar(2)) + std::pow(_tmp26, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp28 = _tmp26 * _tmp27;
  const Scalar _tmp29 = _tmp16 * _tmp27;
  const Scalar _tmp30 = -_tmp15 * _tmp28 + _tmp25 * _tmp29;
  const Scalar _tmp31 = _tmp13 + _tmp9;
  const Scalar _tmp32 = _tmp31 + _tmp6;
  const Scalar _tmp33 = _tmp32 + position_vector(1, 0) + Scalar(-4.7744369927459998);
  const Scalar _tmp34 = _tmp17 + _tmp24;
  const Scalar _tmp35 = _tmp34 + position_vector(0, 0) + Scalar(-2.7171519410699099);
  const Scalar _tmp36 = std::pow(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp35, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp35 * _tmp36;
  const Scalar _tmp38 = -_tmp6;
  const Scalar _tmp39 = _tmp31 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0) + Scalar(-4.83288938413423);
  const Scalar _tmp41 = _tmp21 - _tmp23;
  const Scalar _tmp42 = _tmp17 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0) + Scalar(1.7965602546229);
  const Scalar _tmp44 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp43, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = _tmp40 * _tmp44;
  const Scalar _tmp46 = _tmp14 + _tmp38;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0) + Scalar(8.3196563720703107);
  const Scalar _tmp48 = _tmp18 + _tmp41;
  const Scalar _tmp49 = _tmp48 + position_vector(0, 0) + Scalar(1.9874742031097401);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp47 * _tmp50;
  const Scalar _tmp52 = _tmp43 * _tmp44;
  const Scalar _tmp53 = -_tmp45 + _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp33 * _tmp36;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp37 * _tmp51 - _tmp54);
  const Scalar _tmp56 = _tmp53 * _tmp55;
  const Scalar _tmp57 =
      std::sqrt(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = _tmp50 * _tmp57;
  const Scalar _tmp60 = _tmp59 * (-_tmp46 * _tmp49 * _tmp58 + _tmp47 * _tmp48 * _tmp58);
  const Scalar _tmp61 = _tmp32 * _tmp37 - _tmp34 * _tmp54 + _tmp37 * _tmp60;
  const Scalar _tmp62 = _tmp39 * _tmp52 - _tmp42 * _tmp45 + _tmp52 * _tmp60 - _tmp56 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp30 * _tmp59 * (-_tmp37 * _tmp56 * _tmp64 + _tmp52 * _tmp64);
  const Scalar _tmp66 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp19 - Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp68 = -_tmp67;
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp70 = _tmp66 + _tmp68 - _tmp69;
  const Scalar _tmp71 = _tmp66 + _tmp69;
  const Scalar _tmp72 = _tmp68 + _tmp71;
  const Scalar _tmp73 = _tmp67 + _tmp71;
  const Scalar _tmp74 = _tmp37 * _tmp70 - _tmp37 * _tmp73;
  const Scalar _tmp75 = _tmp51 * _tmp70;
  const Scalar _tmp76 = -_tmp37 * _tmp75 + _tmp54 * _tmp73;
  const Scalar _tmp77 = Scalar(1.0) * _tmp48;
  const Scalar _tmp78 = Scalar(1.0) * _tmp46;
  const Scalar _tmp79 = (-_tmp34 + _tmp77) / (_tmp32 - _tmp78);
  const Scalar _tmp80 = _tmp52 * _tmp70 - _tmp52 * _tmp72 - _tmp56 * _tmp74 -
                        _tmp79 * (_tmp45 * _tmp72 - _tmp52 * _tmp75 - _tmp56 * _tmp76);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp51 * _tmp55;
  const Scalar _tmp83 = -_tmp70 + _tmp74 * _tmp82 - _tmp79 * (_tmp75 + _tmp76 * _tmp82);
  const Scalar _tmp84 = _tmp62 * _tmp81;
  const Scalar _tmp85 = _tmp63 * _tmp80;
  const Scalar _tmp86 = _tmp83 + _tmp85 * (-_tmp60 + _tmp61 * _tmp82 - _tmp83 * _tmp84);
  const Scalar _tmp87 = _tmp81 * _tmp86;
  const Scalar _tmp88 = _tmp53 * _tmp81;
  const Scalar _tmp89 = -_tmp51 - _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp37 * _tmp55;
  const Scalar _tmp91 = _tmp28 * _tmp59 * (_tmp52 * _tmp87 + _tmp89 * _tmp90 + Scalar(1.0));
  const Scalar _tmp92 = Scalar(1.0) * _tmp55;
  const Scalar _tmp93 = -_tmp74 * _tmp92 + _tmp76 * _tmp79 * _tmp92;
  const Scalar _tmp94 = _tmp85 * (-_tmp61 * _tmp92 - _tmp84 * _tmp93) + _tmp93;
  const Scalar _tmp95 = -_tmp88 * _tmp94 + Scalar(1.0);
  const Scalar _tmp96 = _tmp81 * _tmp94;
  const Scalar _tmp97 = _tmp29 * _tmp59 * (_tmp52 * _tmp96 + _tmp90 * _tmp95);
  const Scalar _tmp98 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp99 = _tmp77 + _tmp78 * _tmp79;
  const Scalar _tmp100 = 0;
  const Scalar _tmp101 = _tmp100 * _tmp81;
  const Scalar _tmp102 = _tmp100 * _tmp88;
  const Scalar _tmp103 = _tmp30 * _tmp64;
  const Scalar _tmp104 = _tmp103 * fh1;
  const Scalar _tmp105 = _tmp29 * _tmp55 * _tmp95;
  const Scalar _tmp106 = _tmp28 * _tmp55 * _tmp89;
  const Scalar _tmp107 = _tmp29 * _tmp96;
  const Scalar _tmp108 = _tmp28 * _tmp87;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp65 - _tmp91 - _tmp97) *
               std::exp(_tmp59 * _tmp98 * (_tmp101 * _tmp52 - _tmp102 * _tmp90) + _tmp65 * fh1 +
                        _tmp91 * fh1 + _tmp97 * fh1);
  _res(2, 0) =
      -(-_tmp103 * _tmp56 + _tmp105 + _tmp106) *
      std::exp(_tmp102 * _tmp55 * _tmp98 + _tmp104 * _tmp56 - _tmp105 * fh1 - _tmp106 * fh1);
  _res(3, 0) = -(_tmp103 + _tmp107 + _tmp108) *
               std::exp(-_tmp101 * _tmp98 - _tmp104 - _tmp107 * fh1 - _tmp108 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
