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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl19
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 302

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (106)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp6 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp7 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = 2 * _tmp2;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp5 * _tmp8;
  const Scalar _tmp12 = 2 * _tmp7;
  const Scalar _tmp13 = _tmp0 * _tmp12;
  const Scalar _tmp14 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(1, 0) + Scalar(-4.7744369927459998);
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp19 = _tmp0 * _tmp8;
  const Scalar _tmp20 = _tmp12 * _tmp5;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 + position_vector(0, 0) + Scalar(-2.7171519410699099);
  const Scalar _tmp27 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp26, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp28 = _tmp26 * _tmp27;
  const Scalar _tmp29 = _tmp17 * _tmp27;
  const Scalar _tmp30 = -_tmp4;
  const Scalar _tmp31 = -_tmp10 + _tmp14;
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(1, 0) + Scalar(8.3196563720703107);
  const Scalar _tmp34 = -_tmp18;
  const Scalar _tmp35 = _tmp21 - _tmp23;
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0) + Scalar(1.9874742031097401);
  const Scalar _tmp38 = Scalar(1.0) / (_tmp37);
  const Scalar _tmp39 = _tmp33 * _tmp38;
  const Scalar _tmp40 = Scalar(1.0) / (_tmp28 * _tmp39 - _tmp29);
  const Scalar _tmp41 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp19 - Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp44 = _tmp41 + _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp41 - _tmp43;
  const Scalar _tmp46 = -_tmp42 + _tmp45;
  const Scalar _tmp47 = _tmp39 * _tmp46;
  const Scalar _tmp48 = _tmp40 * (-_tmp28 * _tmp47 + _tmp29 * _tmp44);
  const Scalar _tmp49 = Scalar(1.0) * _tmp36;
  const Scalar _tmp50 = Scalar(1.0) * _tmp32;
  const Scalar _tmp51 = (-_tmp25 + _tmp49) / (_tmp16 - _tmp50);
  const Scalar _tmp52 = _tmp40 * (-_tmp28 * _tmp44 + _tmp28 * _tmp46);
  const Scalar _tmp53 = _tmp39 * _tmp52 - _tmp46 - _tmp51 * (_tmp39 * _tmp48 + _tmp47);
  const Scalar _tmp54 = _tmp42 + _tmp45;
  const Scalar _tmp55 = _tmp15 + _tmp30;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0) + Scalar(8.3885017487099702);
  const Scalar _tmp57 = _tmp24 + _tmp34;
  const Scalar _tmp58 = _tmp57 + position_vector(0, 0) + Scalar(-2.5193355532036801);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = _tmp56 * _tmp59;
  const Scalar _tmp62 = _tmp39 * _tmp60 - _tmp61;
  const Scalar _tmp63 = _tmp46 * _tmp60 -
                        _tmp51 * (-_tmp47 * _tmp60 - _tmp48 * _tmp62 + _tmp54 * _tmp61) -
                        _tmp52 * _tmp62 - _tmp54 * _tmp60;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp65 =
      std::sqrt(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp37, Scalar(2))));
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp38 * _tmp65;
  const Scalar _tmp68 = _tmp67 * (-_tmp32 * _tmp37 * _tmp66 + _tmp33 * _tmp36 * _tmp66);
  const Scalar _tmp69 = _tmp40 * (_tmp16 * _tmp28 - _tmp25 * _tmp29 + _tmp28 * _tmp68);
  const Scalar _tmp70 = _tmp55 * _tmp60 - _tmp57 * _tmp61 + _tmp60 * _tmp68 - _tmp62 * _tmp69;
  const Scalar _tmp71 = _tmp64 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp73 = _tmp63 * _tmp72;
  const Scalar _tmp74 = _tmp53 + _tmp73 * (_tmp39 * _tmp69 - _tmp53 * _tmp71 - _tmp68);
  const Scalar _tmp75 = _tmp62 * _tmp64;
  const Scalar _tmp76 = _tmp40 * (-_tmp39 - _tmp74 * _tmp75);
  const Scalar _tmp77 = _tmp64 * _tmp74;
  const Scalar _tmp78 = _tmp18 + _tmp35;
  const Scalar _tmp79 = _tmp78 + position_vector(0, 0) + Scalar(1.7965602546229);
  const Scalar _tmp80 = _tmp31 + _tmp4;
  const Scalar _tmp81 = _tmp80 + position_vector(1, 0) + Scalar(-4.83288938413423);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp79 * _tmp82;
  const Scalar _tmp84 = _tmp67 * _tmp83 * (_tmp28 * _tmp76 + _tmp60 * _tmp77 + Scalar(1.0));
  const Scalar _tmp85 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp86 = _tmp49 + _tmp50 * _tmp51;
  const Scalar _tmp87 = 0;
  const Scalar _tmp88 = _tmp64 * _tmp87;
  const Scalar _tmp89 = _tmp40 * _tmp75 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) * _tmp48 * _tmp51 - Scalar(1.0) * _tmp52;
  const Scalar _tmp91 = _tmp73 * (-Scalar(1.0) * _tmp69 - _tmp71 * _tmp90) + _tmp90;
  const Scalar _tmp92 = _tmp64 * _tmp91;
  const Scalar _tmp93 = _tmp40 * (-_tmp75 * _tmp91 + Scalar(1.0));
  const Scalar _tmp94 = _tmp81 * _tmp82;
  const Scalar _tmp95 = _tmp67 * _tmp94 * (_tmp28 * _tmp93 + _tmp60 * _tmp92);
  const Scalar _tmp96 = _tmp78 * _tmp94 - _tmp80 * _tmp83;
  const Scalar _tmp97 = Scalar(1.0) * _tmp72;
  const Scalar _tmp98 = _tmp40 * _tmp62;
  const Scalar _tmp99 = _tmp67 * _tmp96 * (-_tmp28 * _tmp97 * _tmp98 + _tmp60 * _tmp97);
  const Scalar _tmp100 = _tmp96 * _tmp97;
  const Scalar _tmp101 = _tmp100 * fh1;
  const Scalar _tmp102 = _tmp76 * _tmp83;
  const Scalar _tmp103 = _tmp93 * _tmp94;
  const Scalar _tmp104 = _tmp92 * _tmp94;
  const Scalar _tmp105 = _tmp77 * _tmp83;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp84 - _tmp95 - _tmp99) *
               std::exp(_tmp67 * _tmp85 * (-_tmp28 * _tmp89 + _tmp60 * _tmp88) + _tmp84 * fh1 +
                        _tmp95 * fh1 + _tmp99 * fh1);
  _res(2, 0) = -(-_tmp100 * _tmp98 + _tmp102 + _tmp103) *
               std::exp(_tmp101 * _tmp98 - _tmp102 * fh1 - _tmp103 * fh1 + _tmp85 * _tmp89);
  _res(3, 0) = -(_tmp100 + _tmp104 + _tmp105) *
               std::exp(-_tmp101 - _tmp104 * fh1 - _tmp105 * fh1 - _tmp85 * _tmp88);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym