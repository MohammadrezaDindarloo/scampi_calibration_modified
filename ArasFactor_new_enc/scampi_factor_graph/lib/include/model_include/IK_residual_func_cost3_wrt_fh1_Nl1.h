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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl1
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 303

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (108)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp0;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp13 = _tmp0 * _tmp9;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0) + Scalar(1.9874742031097401);
  const Scalar _tmp18 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp18 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp22 = _tmp2 * _tmp7;
  const Scalar _tmp23 = _tmp6 * _tmp9;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -_tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(1, 0) + Scalar(8.3196563720703107);
  const Scalar _tmp28 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp27, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp29 = _tmp27 * _tmp28;
  const Scalar _tmp30 = _tmp17 * _tmp28;
  const Scalar _tmp31 = _tmp16 * _tmp29 - _tmp26 * _tmp30;
  const Scalar _tmp32 = _tmp21 + _tmp24;
  const Scalar _tmp33 = _tmp19 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(1, 0) + Scalar(-4.7744369927459998);
  const Scalar _tmp35 = _tmp11 + _tmp14;
  const Scalar _tmp36 = _tmp35 + _tmp4;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0) + Scalar(-2.7171519410699099);
  const Scalar _tmp38 = std::pow(Scalar(std::pow(_tmp34, Scalar(2)) + std::pow(_tmp37, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp37 * _tmp38;
  const Scalar _tmp40 = _tmp34 * _tmp38;
  const Scalar _tmp41 = _tmp15 + _tmp4;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0) + Scalar(-2.5193355532036801);
  const Scalar _tmp43 = _tmp20 + _tmp32;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0) + Scalar(8.3885017487099702);
  const Scalar _tmp45 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp42);
  const Scalar _tmp48 = _tmp45 * _tmp47;
  const Scalar _tmp49 = _tmp48 * (_tmp41 * _tmp44 * _tmp46 - _tmp42 * _tmp43 * _tmp46);
  const Scalar _tmp50 = _tmp35 + _tmp5;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0) + Scalar(1.7965602546229);
  const Scalar _tmp52 = _tmp19 + _tmp25;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0) + Scalar(-4.83288938413423);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp51 * _tmp54;
  const Scalar _tmp56 = _tmp53 * _tmp54;
  const Scalar _tmp57 = _tmp49 * _tmp55 - _tmp50 * _tmp56 + _tmp52 * _tmp55;
  const Scalar _tmp58 = _tmp44 * _tmp47;
  const Scalar _tmp59 = _tmp39 * _tmp58 - _tmp40;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp55 * _tmp58 - _tmp56);
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp33 * _tmp39 - _tmp36 * _tmp40 + _tmp39 * _tmp49 - _tmp57 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp55 * _tmp61;
  const Scalar _tmp66 = _tmp31 * _tmp48 * (_tmp39 * _tmp64 - _tmp64 * _tmp65);
  const Scalar _tmp67 =
      -Scalar(0.010999999999999999) * _tmp18 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp68 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp70 = _tmp67 + _tmp68 - _tmp69;
  const Scalar _tmp71 = _tmp55 * _tmp70;
  const Scalar _tmp72 = _tmp67 + _tmp69;
  const Scalar _tmp73 = -_tmp68 + _tmp72;
  const Scalar _tmp74 = _tmp56 * _tmp73 - _tmp58 * _tmp71;
  const Scalar _tmp75 = Scalar(1.0) * _tmp41;
  const Scalar _tmp76 = Scalar(1.0) * _tmp43;
  const Scalar _tmp77 = (-_tmp50 + _tmp75) / (_tmp52 - _tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp60;
  const Scalar _tmp79 = -_tmp55 * _tmp73 + _tmp71;
  const Scalar _tmp80 = _tmp74 * _tmp77 * _tmp78 - _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp39 * _tmp70;
  const Scalar _tmp82 = _tmp68 + _tmp72;
  const Scalar _tmp83 = -_tmp39 * _tmp82 - _tmp61 * _tmp79 -
                        _tmp77 * (_tmp40 * _tmp82 - _tmp58 * _tmp81 - _tmp61 * _tmp74) + _tmp81;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp62 * _tmp84;
  const Scalar _tmp86 = _tmp63 * _tmp83;
  const Scalar _tmp87 = _tmp80 + _tmp86 * (-_tmp57 * _tmp78 - _tmp80 * _tmp85);
  const Scalar _tmp88 = _tmp39 * _tmp84;
  const Scalar _tmp89 = _tmp59 * _tmp84;
  const Scalar _tmp90 = -_tmp87 * _tmp89 + Scalar(1.0);
  const Scalar _tmp91 = _tmp55 * _tmp60;
  const Scalar _tmp92 = _tmp29 * _tmp48 * (_tmp87 * _tmp88 + _tmp90 * _tmp91);
  const Scalar _tmp93 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp94 = _tmp75 + _tmp76 * _tmp77;
  const Scalar _tmp95 = 0;
  const Scalar _tmp96 = _tmp58 * _tmp60;
  const Scalar _tmp97 = -_tmp70 - _tmp77 * (_tmp58 * _tmp70 + _tmp74 * _tmp96) + _tmp79 * _tmp96;
  const Scalar _tmp98 = _tmp86 * (-_tmp49 + _tmp57 * _tmp96 - _tmp85 * _tmp97) + _tmp97;
  const Scalar _tmp99 = -_tmp58 - _tmp89 * _tmp98;
  const Scalar _tmp100 = _tmp30 * _tmp48 * (_tmp88 * _tmp98 + _tmp91 * _tmp99 + Scalar(1.0));
  const Scalar _tmp101 = _tmp30 * _tmp60 * _tmp99;
  const Scalar _tmp102 = _tmp29 * _tmp60 * _tmp90;
  const Scalar _tmp103 = _tmp93 * _tmp95;
  const Scalar _tmp104 = _tmp31 * _tmp64;
  const Scalar _tmp105 = _tmp104 * fh1;
  const Scalar _tmp106 = _tmp29 * _tmp84 * _tmp87;
  const Scalar _tmp107 = _tmp30 * _tmp84 * _tmp98;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp100 - _tmp66 - _tmp92) *
               std::exp(_tmp100 * fh1 + _tmp48 * _tmp93 * (_tmp39 * _tmp95 - _tmp65 * _tmp95) +
                        _tmp66 * fh1 + _tmp92 * fh1);
  _res(2, 0) = -(_tmp101 + _tmp102 - _tmp104 * _tmp61) *
               std::exp(-_tmp101 * fh1 - _tmp102 * fh1 + _tmp103 * _tmp61 + _tmp105 * _tmp61);
  _res(3, 0) =
      -(_tmp104 + _tmp106 + _tmp107) * std::exp(-_tmp103 - _tmp105 - _tmp106 * fh1 - _tmp107 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym