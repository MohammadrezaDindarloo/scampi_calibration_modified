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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl12
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     p_init0: Scalar
 *     p_init1: Scalar
 *     p_init2: Scalar
 *     rot_init_x: Scalar
 *     rot_init_y: Scalar
 *     rot_init_z: Scalar
 *     rot_init_w: Scalar
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 304

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (109)
  const Scalar _tmp0 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                       _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp10 = 2 * _tmp1;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 =
      Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp13 = _tmp10 * _tmp6;
  const Scalar _tmp14 = _tmp7 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 - p_d(1, 0) + p_init1;
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp7;
  const Scalar _tmp23 = 2 * _tmp6 * _tmp9;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp21 + _tmp26;
  const Scalar _tmp28 = _tmp27 - p_d(0, 0) + p_init0;
  const Scalar _tmp29 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp28, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp30 = _tmp28 * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp32 = -_tmp31;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp2;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp35 = _tmp33 - _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = _tmp30 * _tmp36;
  const Scalar _tmp38 = _tmp31 + _tmp35;
  const Scalar _tmp39 = _tmp18 * _tmp29;
  const Scalar _tmp40 = -_tmp5;
  const Scalar _tmp41 = _tmp16 + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_a(1, 0) + p_init1;
  const Scalar _tmp43 = _tmp24 - _tmp25;
  const Scalar _tmp44 = _tmp21 + _tmp43;
  const Scalar _tmp45 = _tmp44 - p_a(0, 0) + p_init0;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = _tmp12 + _tmp15;
  const Scalar _tmp49 = _tmp40 + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_b(1, 0) + p_init1;
  const Scalar _tmp51 = _tmp20 + _tmp43;
  const Scalar _tmp52 = _tmp51 - p_b(0, 0) + p_init0;
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp50, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp52 * _tmp53;
  const Scalar _tmp55 = _tmp36 * _tmp54;
  const Scalar _tmp56 = _tmp32 + _tmp33 + _tmp34;
  const Scalar _tmp57 = _tmp50 * _tmp53;
  const Scalar _tmp58 = -_tmp47 * _tmp55 + _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp30 * _tmp47 - _tmp39;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp47 * _tmp54 - _tmp57);
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = Scalar(1.0) * _tmp41;
  const Scalar _tmp63 = Scalar(1.0) * _tmp44;
  const Scalar _tmp64 = (-_tmp51 + _tmp63) / (_tmp49 - _tmp62);
  const Scalar _tmp65 = _tmp60 * (-_tmp54 * _tmp56 + _tmp55);
  const Scalar _tmp66 = -_tmp30 * _tmp38 + _tmp37 - _tmp59 * _tmp65 -
                        _tmp64 * (-_tmp37 * _tmp47 + _tmp38 * _tmp39 - _tmp58 * _tmp61);
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp62 * _tmp64 + _tmp63;
  const Scalar _tmp69 = 0;
  const Scalar _tmp70 = _tmp67 * _tmp69;
  const Scalar _tmp71 = _tmp59 * _tmp67;
  const Scalar _tmp72 = _tmp60 * _tmp69 * _tmp71;
  const Scalar _tmp73 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp74 = _tmp46 * _tmp73;
  const Scalar _tmp75 = _tmp20 + _tmp26;
  const Scalar _tmp76 = _tmp75 - p_c(0, 0) + p_init0;
  const Scalar _tmp77 = _tmp48 + _tmp5;
  const Scalar _tmp78 = _tmp77 - p_c(1, 0) + p_init1;
  const Scalar _tmp79 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp78, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp76 * _tmp79;
  const Scalar _tmp82 = _tmp75 * _tmp80 - _tmp77 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp84 = _tmp74 * (-_tmp41 * _tmp45 * _tmp83 + _tmp42 * _tmp44 * _tmp83);
  const Scalar _tmp85 = _tmp49 * _tmp54 - _tmp51 * _tmp57 + _tmp54 * _tmp84;
  const Scalar _tmp86 = _tmp17 * _tmp30 - _tmp27 * _tmp39 + _tmp30 * _tmp84 - _tmp61 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = Scalar(1.0) * _tmp87;
  const Scalar _tmp89 = _tmp74 * _tmp82 * (_tmp30 * _tmp88 - _tmp54 * _tmp61 * _tmp88);
  const Scalar _tmp90 = _tmp60 * _tmp85;
  const Scalar _tmp91 = _tmp58 * _tmp60;
  const Scalar _tmp92 = Scalar(1.0) * _tmp64 * _tmp91 - Scalar(1.0) * _tmp65;
  const Scalar _tmp93 = _tmp67 * _tmp86;
  const Scalar _tmp94 = _tmp66 * _tmp87;
  const Scalar _tmp95 = _tmp92 + _tmp94 * (-Scalar(1.0) * _tmp90 - _tmp92 * _tmp93);
  const Scalar _tmp96 = _tmp60 * (-_tmp71 * _tmp95 + Scalar(1.0));
  const Scalar _tmp97 = _tmp30 * _tmp67;
  const Scalar _tmp98 = _tmp74 * _tmp80 * (_tmp54 * _tmp96 + _tmp95 * _tmp97);
  const Scalar _tmp99 = -_tmp36 + _tmp47 * _tmp65 - _tmp64 * (_tmp36 * _tmp47 + _tmp47 * _tmp91);
  const Scalar _tmp100 = _tmp94 * (_tmp47 * _tmp90 - _tmp84 - _tmp93 * _tmp99) + _tmp99;
  const Scalar _tmp101 = _tmp60 * (-_tmp100 * _tmp71 - _tmp47);
  const Scalar _tmp102 = _tmp74 * _tmp81 * (_tmp100 * _tmp97 + _tmp101 * _tmp54 + Scalar(1.0));
  const Scalar _tmp103 = _tmp82 * _tmp88;
  const Scalar _tmp104 = _tmp103 * fh1;
  const Scalar _tmp105 = _tmp80 * _tmp96;
  const Scalar _tmp106 = _tmp101 * _tmp81;
  const Scalar _tmp107 = _tmp100 * _tmp67 * _tmp81;
  const Scalar _tmp108 = _tmp67 * _tmp80 * _tmp95;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp102 - _tmp89 - _tmp98) *
               std::exp(_tmp0 * _tmp74 * (_tmp30 * _tmp70 - _tmp54 * _tmp72) + _tmp102 * fh1 +
                        _tmp89 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(-_tmp103 * _tmp61 + _tmp105 + _tmp106) *
               std::exp(_tmp0 * _tmp72 + _tmp104 * _tmp61 - _tmp105 * fh1 - _tmp106 * fh1);
  _res(3, 0) = -(_tmp103 + _tmp107 + _tmp108) *
               std::exp(-_tmp0 * _tmp70 - _tmp104 - _tmp107 * fh1 - _tmp108 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
