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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl19
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 283

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (107)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = 2 * _tmp2;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = _tmp0 * _tmp7;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp13 + _tmp4 + _tmp9;
  const Scalar _tmp15 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp15 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp17 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp18 = _tmp0 * _tmp10;
  const Scalar _tmp19 = _tmp5 * _tmp7;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp17 + _tmp20;
  const Scalar _tmp22 = _tmp16 + _tmp21;
  const Scalar _tmp23 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp26 =
      -Scalar(0.010999999999999999) * _tmp6 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp18 - Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = _tmp25 + _tmp28;
  const Scalar _tmp30 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = std::pow(Scalar(std::pow(_tmp24, Scalar(2)) + std::pow(_tmp31, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp33 = _tmp24 * _tmp32;
  const Scalar _tmp34 = -_tmp13 + _tmp4;
  const Scalar _tmp35 = _tmp34 - _tmp9;
  const Scalar _tmp36 = -_tmp16;
  const Scalar _tmp37 = _tmp17 - _tmp20;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = -_tmp25;
  const Scalar _tmp42 = _tmp26 - _tmp27;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = _tmp40 * _tmp46;
  const Scalar _tmp48 = _tmp35 * _tmp47;
  const Scalar _tmp49 = _tmp31 * _tmp32;
  const Scalar _tmp50 = _tmp14 * _tmp33 - _tmp48 * _tmp49;
  const Scalar _tmp51 = Scalar(1.0) * _tmp43;
  const Scalar _tmp52 = Scalar(1.0) * _tmp38;
  const Scalar _tmp53 = (-_tmp29 + _tmp51) / (_tmp22 - _tmp52);
  const Scalar _tmp54 = Scalar(1.0) / (-_tmp33 + _tmp47 * _tmp49);
  const Scalar _tmp55 = Scalar(1.0) * _tmp54;
  const Scalar _tmp56 = -_tmp14 * _tmp49 + _tmp35 * _tmp49;
  const Scalar _tmp57 = _tmp50 * _tmp53 * _tmp55 - _tmp55 * _tmp56;
  const Scalar _tmp58 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp46 * _tmp58;
  const Scalar _tmp61 = _tmp60 * (-_tmp38 * _tmp45 * _tmp59 + _tmp40 * _tmp43 * _tmp59);
  const Scalar _tmp62 = _tmp22 * _tmp49 - _tmp29 * _tmp33 + _tmp49 * _tmp61;
  const Scalar _tmp63 = _tmp21 + _tmp36;
  const Scalar _tmp64 = _tmp39 + _tmp63;
  const Scalar _tmp65 = _tmp25 + _tmp42;
  const Scalar _tmp66 = _tmp30 + _tmp65;
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp64 * _tmp67;
  const Scalar _tmp69 = _tmp66 * _tmp67;
  const Scalar _tmp70 = _tmp47 * _tmp69 - _tmp68;
  const Scalar _tmp71 = _tmp54 * _tmp70;
  const Scalar _tmp72 = _tmp61 * _tmp69 - _tmp62 * _tmp71 + _tmp63 * _tmp69 - _tmp65 * _tmp68;
  const Scalar _tmp73 = _tmp34 + _tmp9;
  const Scalar _tmp74 = _tmp35 * _tmp69;
  const Scalar _tmp75 = -_tmp53 * (-_tmp47 * _tmp74 - _tmp50 * _tmp71 + _tmp68 * _tmp73) -
                        _tmp56 * _tmp71 - _tmp69 * _tmp73 + _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = _tmp72 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp79 = _tmp75 * _tmp78;
  const Scalar _tmp80 = _tmp57 + _tmp79 * (-_tmp55 * _tmp62 - _tmp57 * _tmp77);
  const Scalar _tmp81 = _tmp69 * _tmp76;
  const Scalar _tmp82 = _tmp70 * _tmp76;
  const Scalar _tmp83 = -_tmp80 * _tmp82 + Scalar(1.0);
  const Scalar _tmp84 = _tmp49 * _tmp54;
  const Scalar _tmp85 = _tmp16 + _tmp37;
  const Scalar _tmp86 = _tmp23 + _tmp85;
  const Scalar _tmp87 = _tmp28 + _tmp41;
  const Scalar _tmp88 = _tmp44 + _tmp87;
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp86 * _tmp89;
  const Scalar _tmp91 = _tmp90 * fh1;
  const Scalar _tmp92 = Scalar(1.0) * _tmp78;
  const Scalar _tmp93 = _tmp88 * _tmp89;
  const Scalar _tmp94 = fh1 * (-_tmp85 * _tmp93 + _tmp87 * _tmp90);
  const Scalar _tmp95 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp96 = _tmp51 + _tmp52 * _tmp53;
  const Scalar _tmp97 = 0;
  const Scalar _tmp98 = _tmp71 * _tmp97;
  const Scalar _tmp99 = _tmp60 * (-_tmp49 * _tmp98 + _tmp69 * _tmp97);
  const Scalar _tmp100 = _tmp47 * _tmp54;
  const Scalar _tmp101 = _tmp100 * _tmp56 - _tmp35 - _tmp53 * (_tmp100 * _tmp50 + _tmp48);
  const Scalar _tmp102 = _tmp101 + _tmp79 * (_tmp100 * _tmp62 - _tmp101 * _tmp77 - _tmp61);
  const Scalar _tmp103 = -_tmp102 * _tmp82 - _tmp47;
  const Scalar _tmp104 = _tmp93 * fh1;
  const Scalar _tmp105 = _tmp92 * _tmp94;
  const Scalar _tmp106 = _tmp95 * _tmp97;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp99 *
      std::exp(_tmp104 * _tmp60 * (_tmp102 * _tmp81 + _tmp103 * _tmp84 + Scalar(1.0)) +
               _tmp60 * _tmp91 * (_tmp80 * _tmp81 + _tmp83 * _tmp84) +
               _tmp60 * _tmp94 * (-_tmp49 * _tmp71 * _tmp92 + _tmp69 * _tmp92) + _tmp95 * _tmp99);
  _res(2, 0) = -_tmp98 * std::exp(-_tmp103 * _tmp104 * _tmp54 + _tmp105 * _tmp71 +
                                  _tmp106 * _tmp71 - _tmp54 * _tmp83 * _tmp91);
  _res(3, 0) =
      _tmp97 * std::exp(-_tmp102 * _tmp104 * _tmp76 - _tmp105 - _tmp106 - _tmp76 * _tmp80 * _tmp91);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
