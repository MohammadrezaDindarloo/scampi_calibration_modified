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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl13
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl13(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
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
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -_tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = _tmp15 + position_vector(1, 0) + Scalar(8.3885017487099702);
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp18 = -_tmp17;
  const Scalar _tmp19 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp20 = _tmp1 * _tmp5;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 + position_vector(0, 0) + Scalar(-2.5193355532036801);
  const Scalar _tmp27 = std::pow(Scalar(std::pow(_tmp16, Scalar(2)) + std::pow(_tmp26, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp28 = _tmp26 * _tmp27;
  const Scalar _tmp29 = -_tmp7;
  const Scalar _tmp30 = _tmp14 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0) + Scalar(8.3196563720703107);
  const Scalar _tmp32 = _tmp21 - _tmp23;
  const Scalar _tmp33 = _tmp18 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0) + Scalar(1.9874742031097401);
  const Scalar _tmp35 =
      std::sqrt(Scalar(std::pow(_tmp31, Scalar(2)) + std::pow(_tmp34, Scalar(2))));
  const Scalar _tmp36 = Scalar(1.0) / (_tmp35);
  const Scalar _tmp37 = Scalar(1.0) / (_tmp34);
  const Scalar _tmp38 = _tmp35 * _tmp37;
  const Scalar _tmp39 = _tmp38 * (-_tmp30 * _tmp34 * _tmp36 + _tmp31 * _tmp33 * _tmp36);
  const Scalar _tmp40 = _tmp16 * _tmp27;
  const Scalar _tmp41 = _tmp17 + _tmp32;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0) + Scalar(1.7965602546229);
  const Scalar _tmp43 = _tmp10 + _tmp13;
  const Scalar _tmp44 = _tmp29 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0) + Scalar(-4.83288938413423);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = _tmp45 * _tmp46;
  const Scalar _tmp49 = _tmp39 * _tmp47 - _tmp41 * _tmp48 + _tmp44 * _tmp47;
  const Scalar _tmp50 = _tmp31 * _tmp37;
  const Scalar _tmp51 = _tmp28 * _tmp50 - _tmp40;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp47 * _tmp50 - _tmp48);
  const Scalar _tmp53 = _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp15 * _tmp28 - _tmp25 * _tmp40 + _tmp28 * _tmp39 - _tmp49 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = Scalar(1.0) * _tmp55;
  const Scalar _tmp57 = _tmp17 + _tmp24;
  const Scalar _tmp58 = _tmp43 + _tmp7;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0) + Scalar(-4.7744369927459998);
  const Scalar _tmp60 = _tmp57 + position_vector(0, 0) + Scalar(-2.7171519410699099);
  const Scalar _tmp61 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp60, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp59 * _tmp61;
  const Scalar _tmp63 = _tmp60 * _tmp61;
  const Scalar _tmp64 = fh1 * (_tmp57 * _tmp62 - _tmp58 * _tmp63);
  const Scalar _tmp65 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp66 = -Scalar(0.010999999999999999) * _tmp22 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp19 - Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 = _tmp66 + _tmp67 + _tmp69;
  const Scalar _tmp71 = _tmp66 - _tmp67;
  const Scalar _tmp72 = _tmp69 + _tmp71;
  const Scalar _tmp73 = _tmp68 + _tmp71;
  const Scalar _tmp74 = _tmp50 * _tmp72;
  const Scalar _tmp75 = -_tmp47 * _tmp74 + _tmp48 * _tmp73;
  const Scalar _tmp76 = Scalar(1.0) * _tmp30;
  const Scalar _tmp77 = Scalar(1.0) * _tmp33;
  const Scalar _tmp78 = (-_tmp41 + _tmp77) / (_tmp44 - _tmp76);
  const Scalar _tmp79 = _tmp47 * _tmp72 - _tmp47 * _tmp73;
  const Scalar _tmp80 = -_tmp28 * _tmp70 + _tmp28 * _tmp72 - _tmp53 * _tmp79 -
                        _tmp78 * (-_tmp28 * _tmp74 + _tmp40 * _tmp70 - _tmp53 * _tmp75);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp76 * _tmp78 + _tmp77;
  const Scalar _tmp83 = 0;
  const Scalar _tmp84 = _tmp53 * _tmp83;
  const Scalar _tmp85 = _tmp38 * (_tmp28 * _tmp83 - _tmp47 * _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp52;
  const Scalar _tmp87 = _tmp75 * _tmp78 * _tmp86 - _tmp79 * _tmp86;
  const Scalar _tmp88 = _tmp54 * _tmp81;
  const Scalar _tmp89 = _tmp55 * _tmp80;
  const Scalar _tmp90 = _tmp87 + _tmp89 * (-_tmp49 * _tmp86 - _tmp87 * _tmp88);
  const Scalar _tmp91 = _tmp28 * _tmp81;
  const Scalar _tmp92 = _tmp51 * _tmp81;
  const Scalar _tmp93 = -_tmp90 * _tmp92 + Scalar(1.0);
  const Scalar _tmp94 = _tmp47 * _tmp52;
  const Scalar _tmp95 = _tmp38 * fh1;
  const Scalar _tmp96 = _tmp50 * _tmp52;
  const Scalar _tmp97 = -_tmp72 - _tmp78 * (_tmp74 + _tmp75 * _tmp96) + _tmp79 * _tmp96;
  const Scalar _tmp98 = _tmp89 * (-_tmp39 + _tmp49 * _tmp96 - _tmp88 * _tmp97) + _tmp97;
  const Scalar _tmp99 = -_tmp50 - _tmp92 * _tmp98;
  const Scalar _tmp100 = _tmp52 * fh1;
  const Scalar _tmp101 = _tmp56 * _tmp64;
  const Scalar _tmp102 = _tmp65 * _tmp83;
  const Scalar _tmp103 = _tmp81 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp85 * std::exp(_tmp38 * _tmp64 * (_tmp28 * _tmp56 - _tmp47 * _tmp53 * _tmp56) +
                         _tmp62 * _tmp95 * (_tmp90 * _tmp91 + _tmp93 * _tmp94) +
                         _tmp63 * _tmp95 * (_tmp91 * _tmp98 + _tmp94 * _tmp99 + Scalar(1.0)) +
                         _tmp65 * _tmp85);
  _res(2, 0) = -_tmp84 * std::exp(-_tmp100 * _tmp62 * _tmp93 - _tmp100 * _tmp63 * _tmp99 +
                                  _tmp101 * _tmp53 + _tmp102 * _tmp53);
  _res(3, 0) =
      _tmp83 * std::exp(-_tmp101 - _tmp102 - _tmp103 * _tmp62 * _tmp90 - _tmp103 * _tmp63 * _tmp98);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym