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
 * Symbolic function: IK_residual_func_cost3_Nl10
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3Nl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 282

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (106)
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
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = _tmp2 * _tmp7;
  const Scalar _tmp11 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp12 =
      -Scalar(0.010999999999999999) * _tmp10 + Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp9;
  const Scalar _tmp18 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp19 = _tmp17 + _tmp18;
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp7;
  const Scalar _tmp23 = _tmp3 * _tmp5;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp21 + _tmp26;
  const Scalar _tmp28 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp29 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp35 = _tmp33 + _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = -_tmp9;
  const Scalar _tmp38 = _tmp16 + _tmp37;
  const Scalar _tmp39 = _tmp18 + _tmp38;
  const Scalar _tmp40 = -_tmp21;
  const Scalar _tmp41 = _tmp26 + _tmp40;
  const Scalar _tmp42 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp45 = _tmp39 * _tmp44;
  const Scalar _tmp46 = _tmp19 * _tmp30;
  const Scalar _tmp47 = _tmp31 * _tmp45 - _tmp46;
  const Scalar _tmp48 = _tmp12 - _tmp15;
  const Scalar _tmp49 = _tmp37 + _tmp48;
  const Scalar _tmp50 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp24 - _tmp25;
  const Scalar _tmp53 = _tmp40 + _tmp52;
  const Scalar _tmp54 = _tmp42 + _tmp53;
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp54 * _tmp55;
  const Scalar _tmp57 = _tmp51 * _tmp55;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp45 * _tmp56 - _tmp57);
  const Scalar _tmp59 = -_tmp32;
  const Scalar _tmp60 = _tmp35 + _tmp59;
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp33 - _tmp34 + _tmp59;
  const Scalar _tmp63 = _tmp58 * (-_tmp56 * _tmp62 + _tmp61);
  const Scalar _tmp64 = _tmp31 * _tmp60;
  const Scalar _tmp65 = _tmp58 * (-_tmp45 * _tmp61 + _tmp57 * _tmp62);
  const Scalar _tmp66 = Scalar(1.0) * _tmp38;
  const Scalar _tmp67 = Scalar(1.0) * _tmp41;
  const Scalar _tmp68 = (-_tmp53 + _tmp67) / (_tmp49 - _tmp66);
  const Scalar _tmp69 = -_tmp31 * _tmp36 - _tmp47 * _tmp63 + _tmp64 -
                        _tmp68 * (_tmp36 * _tmp46 - _tmp45 * _tmp64 - _tmp47 * _tmp65);
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp66 * _tmp68 + _tmp67;
  const Scalar _tmp72 = 0;
  const Scalar _tmp73 = _tmp70 * _tmp72;
  const Scalar _tmp74 = _tmp56 * _tmp58;
  const Scalar _tmp75 = _tmp47 * _tmp70;
  const Scalar _tmp76 = _tmp72 * _tmp75;
  const Scalar _tmp77 =
      std::sqrt(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp78 = _tmp44 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp80 = _tmp78 * (-_tmp38 * _tmp43 * _tmp79 + _tmp39 * _tmp41 * _tmp79);
  const Scalar _tmp81 = _tmp58 * (_tmp49 * _tmp56 - _tmp53 * _tmp57 + _tmp56 * _tmp80);
  const Scalar _tmp82 = _tmp17 * _tmp31 - _tmp27 * _tmp46 + _tmp31 * _tmp80 - _tmp47 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp21 + _tmp52;
  const Scalar _tmp86 = _tmp48 + _tmp9;
  const Scalar _tmp87 = _tmp50 + _tmp86;
  const Scalar _tmp88 = _tmp28 + _tmp85;
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp87 * _tmp89;
  const Scalar _tmp91 = _tmp88 * _tmp89;
  const Scalar _tmp92 = fh1 * (_tmp85 * _tmp90 - _tmp86 * _tmp91);
  const Scalar _tmp93 = -Scalar(1.0) * _tmp63 + Scalar(1.0) * _tmp65 * _tmp68;
  const Scalar _tmp94 = _tmp70 * _tmp82;
  const Scalar _tmp95 = _tmp69 * _tmp83;
  const Scalar _tmp96 = _tmp93 + _tmp95 * (-Scalar(1.0) * _tmp81 - _tmp93 * _tmp94);
  const Scalar _tmp97 = -_tmp75 * _tmp96 + Scalar(1.0);
  const Scalar _tmp98 = _tmp31 * _tmp70;
  const Scalar _tmp99 = _tmp78 * fh1;
  const Scalar _tmp100 = _tmp45 * _tmp63 - _tmp60 - _tmp68 * (_tmp45 * _tmp60 + _tmp45 * _tmp65);
  const Scalar _tmp101 = _tmp100 + _tmp95 * (-_tmp100 * _tmp94 + _tmp45 * _tmp81 - _tmp80);
  const Scalar _tmp102 = -_tmp101 * _tmp75 - _tmp45;
  const Scalar _tmp103 = _tmp58 * fh1;
  const Scalar _tmp104 = _tmp84 * _tmp92;
  const Scalar _tmp105 = _tmp70 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = std::exp(-fh1);
  _res(1, 0) = std::exp(_tmp0 * _tmp78 * (_tmp31 * _tmp73 - _tmp74 * _tmp76) +
                        _tmp78 * _tmp92 * (_tmp31 * _tmp84 - _tmp47 * _tmp74 * _tmp84) +
                        _tmp90 * _tmp99 * (_tmp74 * _tmp97 + _tmp96 * _tmp98) +
                        _tmp91 * _tmp99 * (_tmp101 * _tmp98 + _tmp102 * _tmp74 + Scalar(1.0)));
  _res(2, 0) = std::exp(_tmp0 * _tmp58 * _tmp76 - _tmp102 * _tmp103 * _tmp91 -
                        _tmp103 * _tmp90 * _tmp97 + _tmp104 * _tmp47 * _tmp58);
  _res(3, 0) =
      std::exp(-_tmp0 * _tmp73 - _tmp101 * _tmp105 * _tmp91 - _tmp104 - _tmp105 * _tmp90 * _tmp96);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
