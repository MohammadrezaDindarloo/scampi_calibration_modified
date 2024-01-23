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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 301

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (108)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp6 = 2 * _tmp2;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp9 = _tmp0 * _tmp8;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp7 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp5;
  const Scalar _tmp12 = _tmp2 * _tmp8;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + p_init0;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp18 = _tmp0 * _tmp6;
  const Scalar _tmp19 = _tmp5 * _tmp8;
  const Scalar _tmp20 =
      -Scalar(0.010999999999999999) * _tmp18 + Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp23 = _tmp20 + _tmp22;
  const Scalar _tmp24 = _tmp17 + _tmp23;
  const Scalar _tmp25 = _tmp24 - p_c(1, 0) + p_init1;
  const Scalar _tmp26 = std::pow(Scalar(std::pow(_tmp16, Scalar(2)) + std::pow(_tmp25, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp27 = _tmp16 * _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp31 = _tmp28 - _tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp27 * _tmp31;
  const Scalar _tmp33 = _tmp28 + _tmp29;
  const Scalar _tmp34 = _tmp30 + _tmp33;
  const Scalar _tmp35 = _tmp25 * _tmp26;
  const Scalar _tmp36 = -_tmp17;
  const Scalar _tmp37 = _tmp23 + _tmp36;
  const Scalar _tmp38 = _tmp37 - p_d(1, 0) + p_init1;
  const Scalar _tmp39 = -_tmp4;
  const Scalar _tmp40 = _tmp14 + _tmp39;
  const Scalar _tmp41 = _tmp40 - p_d(0, 0) + p_init0;
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp38 * _tmp42;
  const Scalar _tmp44 = -_tmp30 + _tmp33;
  const Scalar _tmp45 = _tmp20 - _tmp22;
  const Scalar _tmp46 = _tmp17 + _tmp45;
  const Scalar _tmp47 = _tmp46 - p_b(1, 0) + p_init1;
  const Scalar _tmp48 = _tmp10 - _tmp13;
  const Scalar _tmp49 = _tmp4 + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_b(0, 0) + p_init0;
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = _tmp50 * _tmp51;
  const Scalar _tmp54 = _tmp31 * _tmp53;
  const Scalar _tmp55 = -_tmp43 * _tmp54 + _tmp44 * _tmp52;
  const Scalar _tmp56 = _tmp27 * _tmp43 - _tmp35;
  const Scalar _tmp57 = Scalar(1.0) / (_tmp43 * _tmp53 - _tmp52);
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) * _tmp37;
  const Scalar _tmp60 = Scalar(1.0) * _tmp40;
  const Scalar _tmp61 = (-_tmp49 + _tmp60) / (_tmp46 - _tmp59);
  const Scalar _tmp62 = -_tmp44 * _tmp53 + _tmp54;
  const Scalar _tmp63 = -_tmp27 * _tmp34 + _tmp32 - _tmp58 * _tmp62 -
                        _tmp61 * (-_tmp32 * _tmp43 + _tmp34 * _tmp35 - _tmp55 * _tmp58);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp65 =
      std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp41, Scalar(2))));
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp42 * _tmp65;
  const Scalar _tmp68 = _tmp67 * (-_tmp37 * _tmp41 * _tmp66 + _tmp38 * _tmp40 * _tmp66);
  const Scalar _tmp69 = _tmp46 * _tmp53 - _tmp49 * _tmp52 + _tmp53 * _tmp68;
  const Scalar _tmp70 = _tmp43 * _tmp57;
  const Scalar _tmp71 = -_tmp31 - _tmp61 * (_tmp31 * _tmp43 + _tmp55 * _tmp70) + _tmp62 * _tmp70;
  const Scalar _tmp72 = -_tmp15 * _tmp35 + _tmp24 * _tmp27 + _tmp27 * _tmp68 - _tmp58 * _tmp69;
  const Scalar _tmp73 = _tmp64 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp75 = _tmp63 * _tmp74;
  const Scalar _tmp76 = _tmp71 + _tmp75 * (-_tmp68 + _tmp69 * _tmp70 - _tmp71 * _tmp73);
  const Scalar _tmp77 = _tmp64 * _tmp76;
  const Scalar _tmp78 = _tmp56 * _tmp64;
  const Scalar _tmp79 = _tmp57 * (-_tmp43 - _tmp76 * _tmp78);
  const Scalar _tmp80 = _tmp39 + _tmp48;
  const Scalar _tmp81 = _tmp80 - p_a(0, 0) + p_init0;
  const Scalar _tmp82 = _tmp36 + _tmp45;
  const Scalar _tmp83 = _tmp82 - p_a(1, 0) + p_init1;
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp81 * _tmp84;
  const Scalar _tmp86 = _tmp67 * _tmp85 * (_tmp27 * _tmp77 + _tmp53 * _tmp79 + Scalar(1.0));
  const Scalar _tmp87 = Scalar(1.0) * _tmp57;
  const Scalar _tmp88 = _tmp55 * _tmp61 * _tmp87 - _tmp62 * _tmp87;
  const Scalar _tmp89 = _tmp75 * (-_tmp69 * _tmp87 - _tmp73 * _tmp88) + _tmp88;
  const Scalar _tmp90 = _tmp57 * (-_tmp78 * _tmp89 + Scalar(1.0));
  const Scalar _tmp91 = _tmp64 * _tmp89;
  const Scalar _tmp92 = _tmp83 * _tmp84;
  const Scalar _tmp93 = _tmp67 * _tmp92 * (_tmp27 * _tmp91 + _tmp53 * _tmp90);
  const Scalar _tmp94 = _tmp80 * _tmp92 - _tmp82 * _tmp85;
  const Scalar _tmp95 = Scalar(1.0) * _tmp74;
  const Scalar _tmp96 = _tmp53 * _tmp58;
  const Scalar _tmp97 = _tmp67 * _tmp94 * (_tmp27 * _tmp95 - _tmp95 * _tmp96);
  const Scalar _tmp98 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp99 = _tmp59 * _tmp61 + _tmp60;
  const Scalar _tmp100 = 0;
  const Scalar _tmp101 = _tmp94 * _tmp95;
  const Scalar _tmp102 = _tmp101 * fh1;
  const Scalar _tmp103 = _tmp90 * _tmp92;
  const Scalar _tmp104 = _tmp79 * _tmp85;
  const Scalar _tmp105 = _tmp100 * _tmp98;
  const Scalar _tmp106 = _tmp91 * _tmp92;
  const Scalar _tmp107 = _tmp77 * _tmp85;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp86 - _tmp93 - _tmp97) *
               std::exp(_tmp67 * _tmp98 * (_tmp100 * _tmp27 - _tmp100 * _tmp96) + _tmp86 * fh1 +
                        _tmp93 * fh1 + _tmp97 * fh1);
  _res(2, 0) = -(-_tmp101 * _tmp58 + _tmp103 + _tmp104) *
               std::exp(_tmp102 * _tmp58 - _tmp103 * fh1 - _tmp104 * fh1 + _tmp105 * _tmp58);
  _res(3, 0) =
      -(_tmp101 + _tmp106 + _tmp107) * std::exp(-_tmp102 - _tmp105 - _tmp106 * fh1 - _tmp107 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
