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
 * Symbolic function: FK_residual_func_cost3
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     encoder: Matrix41
 *     pulley: Matrix43
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost3(const Scalar fh1, const Scalar fv1,
                                                const sym::Rot3<Scalar>& DeltaRot,
                                                const Eigen::Matrix<Scalar, 3, 1>& position_vector,
                                                const sym::Rot3<Scalar>& Rot_init,
                                                const Eigen::Matrix<Scalar, 4, 1>& encoder,
                                                const Eigen::Matrix<Scalar, 4, 3>& pulley,
                                                const Scalar epsilon) {
  // Total ops: 281

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (103)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = 2 * _tmp0;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp12 = _tmp5 * _tmp9;
  const Scalar _tmp13 = _tmp6 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp2 * _tmp9;
  const Scalar _tmp21 = 2 * _tmp5 * _tmp8;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 + position_vector(1, 0) - pulley(1, 1);
  const Scalar _tmp27 = _tmp16 + position_vector(0, 0) - pulley(1, 0);
  const Scalar _tmp28 =
      std::sqrt(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp27, Scalar(2))));
  const Scalar _tmp29 = Scalar(1.0) / (_tmp28);
  const Scalar _tmp30 = Scalar(1.0) / (_tmp27);
  const Scalar _tmp31 = _tmp28 * _tmp30;
  const Scalar _tmp32 = _tmp31 * (_tmp16 * _tmp26 * _tmp29 - _tmp25 * _tmp27 * _tmp29);
  const Scalar _tmp33 = _tmp18 + _tmp24;
  const Scalar _tmp34 = _tmp11 + _tmp14;
  const Scalar _tmp35 = _tmp34 + _tmp4;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0) - pulley(2, 0);
  const Scalar _tmp37 = _tmp33 + position_vector(1, 0) - pulley(2, 1);
  const Scalar _tmp38 = std::pow(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp37, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp36 * _tmp38;
  const Scalar _tmp40 = _tmp37 * _tmp38;
  const Scalar _tmp41 = _tmp32 * _tmp39 + _tmp33 * _tmp39 - _tmp35 * _tmp40;
  const Scalar _tmp42 = _tmp26 * _tmp30;
  const Scalar _tmp43 = Scalar(1.0) / (_tmp39 * _tmp42 - _tmp40);
  const Scalar _tmp44 = _tmp42 * _tmp43;
  const Scalar _tmp45 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp46 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp17 + Scalar(-0.010999999999999999);
  const Scalar _tmp47 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp48 = _tmp46 + _tmp47;
  const Scalar _tmp49 = _tmp45 + _tmp48;
  const Scalar _tmp50 = -_tmp45 + _tmp48;
  const Scalar _tmp51 = _tmp42 * _tmp50;
  const Scalar _tmp52 = -_tmp39 * _tmp51 + _tmp40 * _tmp49;
  const Scalar _tmp53 = Scalar(1.0) * _tmp25;
  const Scalar _tmp54 = Scalar(1.0) * _tmp16;
  const Scalar _tmp55 = (-_tmp35 + _tmp54) / (_tmp33 - _tmp53);
  const Scalar _tmp56 = -_tmp39 * _tmp49 + _tmp39 * _tmp50;
  const Scalar _tmp57 = _tmp44 * _tmp56 - _tmp50 - _tmp55 * (_tmp44 * _tmp52 + _tmp51);
  const Scalar _tmp58 = _tmp22 - _tmp23;
  const Scalar _tmp59 = _tmp18 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0) - pulley(3, 1);
  const Scalar _tmp61 = -_tmp4;
  const Scalar _tmp62 = _tmp34 + _tmp61;
  const Scalar _tmp63 = _tmp62 + position_vector(0, 0) - pulley(3, 0);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp60 * _tmp64;
  const Scalar _tmp66 = _tmp63 * _tmp64;
  const Scalar _tmp67 = _tmp42 * _tmp66 - _tmp65;
  const Scalar _tmp68 = _tmp43 * _tmp67;
  const Scalar _tmp69 = _tmp45 + _tmp46 - _tmp47;
  const Scalar _tmp70 = _tmp50 * _tmp66 -
                        _tmp55 * (-_tmp51 * _tmp66 - _tmp52 * _tmp68 + _tmp65 * _tmp69) -
                        _tmp56 * _tmp68 - _tmp66 * _tmp69;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp32 * _tmp66 - _tmp41 * _tmp68 + _tmp59 * _tmp66 - _tmp62 * _tmp65;
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp75 = _tmp70 * _tmp74;
  const Scalar _tmp76 = _tmp57 + _tmp75 * (-_tmp32 + _tmp41 * _tmp44 - _tmp57 * _tmp73);
  const Scalar _tmp77 = _tmp67 * _tmp71;
  const Scalar _tmp78 = -_tmp42 - _tmp76 * _tmp77;
  const Scalar _tmp79 = _tmp39 * _tmp43;
  const Scalar _tmp80 = _tmp66 * _tmp71;
  const Scalar _tmp81 = _tmp15 + _tmp61;
  const Scalar _tmp82 = _tmp81 + position_vector(0, 0) - pulley(0, 0);
  const Scalar _tmp83 = _tmp19 + _tmp58;
  const Scalar _tmp84 = _tmp83 + position_vector(1, 0) - pulley(0, 1);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp82 * _tmp85;
  const Scalar _tmp87 = _tmp31 * fh1;
  const Scalar _tmp88 = Scalar(1.0) * _tmp74;
  const Scalar _tmp89 = _tmp39 * _tmp68;
  const Scalar _tmp90 = _tmp84 * _tmp85;
  const Scalar _tmp91 = fh1 * (_tmp81 * _tmp90 - _tmp83 * _tmp86);
  const Scalar _tmp92 = Scalar(1.0) * _tmp43;
  const Scalar _tmp93 = _tmp52 * _tmp55 * _tmp92 - _tmp56 * _tmp92;
  const Scalar _tmp94 = _tmp75 * (-_tmp41 * _tmp92 - _tmp73 * _tmp93) + _tmp93;
  const Scalar _tmp95 = -_tmp77 * _tmp94 + Scalar(1.0);
  const Scalar _tmp96 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp97 = _tmp53 * _tmp55 + _tmp54;
  const Scalar _tmp98 = 0;
  const Scalar _tmp99 = _tmp96 * _tmp98;
  const Scalar _tmp100 = _tmp43 * fh1;
  const Scalar _tmp101 = _tmp88 * _tmp91;
  const Scalar _tmp102 = _tmp71 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = std::exp(-fh1);
  _res(1, 0) = std::exp(_tmp31 * _tmp91 * (_tmp66 * _tmp88 - _tmp88 * _tmp89) +
                        _tmp31 * _tmp96 * (_tmp66 * _tmp98 - _tmp89 * _tmp98) +
                        _tmp86 * _tmp87 * (_tmp76 * _tmp80 + _tmp78 * _tmp79 + Scalar(1.0)) +
                        _tmp87 * _tmp90 * (_tmp79 * _tmp95 + _tmp80 * _tmp94));
  _res(2, 0) = std::exp(-_tmp100 * _tmp78 * _tmp86 - _tmp100 * _tmp90 * _tmp95 + _tmp101 * _tmp68 +
                        _tmp68 * _tmp99);
  _res(3, 0) = std::exp(-_tmp101 - _tmp102 * _tmp76 * _tmp86 - _tmp102 * _tmp90 * _tmp94 - _tmp99);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
