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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 282

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (109)
  const Scalar _tmp0 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp5 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = _tmp1 * _tmp7;
  const Scalar _tmp11 = _tmp3 * _tmp5;
  const Scalar _tmp12 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp9;
  const Scalar _tmp18 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp19 = _tmp17 + _tmp18;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999);
  const Scalar _tmp24 = _tmp2 * _tmp7;
  const Scalar _tmp25 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp26 =
      -Scalar(0.010999999999999999) * _tmp24 + Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp23 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = std::pow(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 = _tmp19 * _tmp31;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp37 = _tmp33 + _tmp35 + _tmp36;
  const Scalar _tmp38 = -_tmp23 + _tmp26;
  const Scalar _tmp39 = _tmp21 + _tmp38;
  const Scalar _tmp40 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = -_tmp9;
  const Scalar _tmp43 = _tmp16 + _tmp42;
  const Scalar _tmp44 = _tmp18 + _tmp43;
  const Scalar _tmp45 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp46 = _tmp41 * _tmp45;
  const Scalar _tmp47 = _tmp33 - _tmp36;
  const Scalar _tmp48 = _tmp35 + _tmp47;
  const Scalar _tmp49 = _tmp32 * _tmp48;
  const Scalar _tmp50 = _tmp30 * _tmp31;
  const Scalar _tmp51 = _tmp34 + _tmp47;
  const Scalar _tmp52 = _tmp20 + _tmp38;
  const Scalar _tmp53 = _tmp40 + _tmp52;
  const Scalar _tmp54 = _tmp12 + _tmp15;
  const Scalar _tmp55 = _tmp42 + _tmp54;
  const Scalar _tmp56 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp57 = _tmp55 + _tmp56;
  const Scalar _tmp58 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp53 * _tmp58;
  const Scalar _tmp60 = _tmp57 * _tmp58;
  const Scalar _tmp61 = _tmp48 * _tmp60;
  const Scalar _tmp62 = -_tmp46 * _tmp61 + _tmp51 * _tmp59;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp46 * _tmp60 - _tmp59);
  const Scalar _tmp64 = _tmp32 * _tmp46 - _tmp50;
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) * _tmp39;
  const Scalar _tmp67 = Scalar(1.0) * _tmp43;
  const Scalar _tmp68 = (-_tmp55 + _tmp67) / (_tmp52 - _tmp66);
  const Scalar _tmp69 = _tmp63 * (-_tmp51 * _tmp60 + _tmp61);
  const Scalar _tmp70 = -_tmp32 * _tmp37 + _tmp49 - _tmp64 * _tmp69 -
                        _tmp68 * (_tmp37 * _tmp50 - _tmp46 * _tmp49 - _tmp62 * _tmp65);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp66 * _tmp68 + _tmp67;
  const Scalar _tmp73 = 0;
  const Scalar _tmp74 = _tmp65 * _tmp73;
  const Scalar _tmp75 =
      std::sqrt(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp76 = _tmp45 * _tmp75;
  const Scalar _tmp77 = _tmp76 * (_tmp32 * _tmp73 - _tmp60 * _tmp74);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp79 = _tmp76 * (-_tmp39 * _tmp44 * _tmp78 + _tmp41 * _tmp43 * _tmp78);
  const Scalar _tmp80 = _tmp52 * _tmp60 - _tmp55 * _tmp59 + _tmp60 * _tmp79;
  const Scalar _tmp81 = -_tmp17 * _tmp50 + _tmp28 * _tmp32 + _tmp32 * _tmp79 - _tmp65 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp82;
  const Scalar _tmp84 = _tmp20 + _tmp27;
  const Scalar _tmp85 = _tmp29 + _tmp84;
  const Scalar _tmp86 = _tmp54 + _tmp9;
  const Scalar _tmp87 = _tmp56 + _tmp86;
  const Scalar _tmp88 = std::pow(Scalar(std::pow(_tmp85, Scalar(2)) + std::pow(_tmp87, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp85 * _tmp88;
  const Scalar _tmp91 = fh1 * (-_tmp84 * _tmp89 + _tmp86 * _tmp90);
  const Scalar _tmp92 = _tmp63 * _tmp80;
  const Scalar _tmp93 = _tmp62 * _tmp63;
  const Scalar _tmp94 = Scalar(1.0) * _tmp68 * _tmp93 - Scalar(1.0) * _tmp69;
  const Scalar _tmp95 = _tmp71 * _tmp81;
  const Scalar _tmp96 = _tmp70 * _tmp82;
  const Scalar _tmp97 = _tmp94 + _tmp96 * (-Scalar(1.0) * _tmp92 - _tmp94 * _tmp95);
  const Scalar _tmp98 = _tmp64 * _tmp71;
  const Scalar _tmp99 = -_tmp97 * _tmp98 + Scalar(1.0);
  const Scalar _tmp100 = _tmp60 * _tmp63;
  const Scalar _tmp101 = _tmp32 * _tmp71;
  const Scalar _tmp102 = _tmp90 * fh1;
  const Scalar _tmp103 = _tmp46 * _tmp69 - _tmp48 - _tmp68 * (_tmp46 * _tmp48 + _tmp46 * _tmp93);
  const Scalar _tmp104 = _tmp103 + _tmp96 * (-_tmp103 * _tmp95 + _tmp46 * _tmp92 - _tmp79);
  const Scalar _tmp105 = -_tmp104 * _tmp98 - _tmp46;
  const Scalar _tmp106 = _tmp89 * fh1;
  const Scalar _tmp107 = _tmp0 * _tmp73;
  const Scalar _tmp108 = _tmp83 * _tmp91;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp77 * std::exp(_tmp0 * _tmp77 + _tmp102 * _tmp76 * (_tmp100 * _tmp99 + _tmp101 * _tmp97) +
                         _tmp106 * _tmp76 * (_tmp100 * _tmp105 + _tmp101 * _tmp104 + Scalar(1.0)) +
                         _tmp76 * _tmp91 * (_tmp32 * _tmp83 - _tmp60 * _tmp65 * _tmp83));
  _res(2, 0) = -_tmp74 * std::exp(-_tmp102 * _tmp63 * _tmp99 - _tmp105 * _tmp106 * _tmp63 +
                                  _tmp107 * _tmp65 + _tmp108 * _tmp65);
  _res(3, 0) = _tmp73 * std::exp(-_tmp102 * _tmp71 * _tmp97 - _tmp104 * _tmp106 * _tmp71 - _tmp107 -
                                 _tmp108);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym