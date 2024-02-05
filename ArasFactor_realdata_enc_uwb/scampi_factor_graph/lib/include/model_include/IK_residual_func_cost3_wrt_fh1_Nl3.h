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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl3(
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

  // Intermediate terms (107)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp5 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp1 * _tmp5;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp12 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp8;
  const Scalar _tmp17 = _tmp16 - p_a(0, 0) + p_init0;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp2 * _tmp4;
  const Scalar _tmp21 = _tmp0 * _tmp5;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp22 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 - p_a(1, 0) + p_init1;
  const Scalar _tmp28 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp27, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp29 = _tmp27 * _tmp28;
  const Scalar _tmp30 = _tmp17 * _tmp28;
  const Scalar _tmp31 = _tmp16 * _tmp29 - _tmp26 * _tmp30;
  const Scalar _tmp32 = _tmp18 + _tmp25;
  const Scalar _tmp33 = _tmp32 - p_b(1, 0) + p_init1;
  const Scalar _tmp34 = _tmp11 + _tmp14;
  const Scalar _tmp35 = _tmp34 + _tmp8;
  const Scalar _tmp36 = _tmp35 - p_b(0, 0) + p_init0;
  const Scalar _tmp37 = std::pow(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp36, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 = _tmp33 * _tmp37;
  const Scalar _tmp40 = _tmp34 + _tmp7;
  const Scalar _tmp41 = _tmp40 - p_c(0, 0) + p_init0;
  const Scalar _tmp42 = _tmp22 + _tmp24;
  const Scalar _tmp43 = _tmp18 + _tmp42;
  const Scalar _tmp44 = _tmp43 - p_c(1, 0) + p_init1;
  const Scalar _tmp45 =
      std::sqrt(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp48 = _tmp45 * _tmp47;
  const Scalar _tmp49 = _tmp48 * (_tmp40 * _tmp44 * _tmp46 - _tmp41 * _tmp43 * _tmp46);
  const Scalar _tmp50 = _tmp19 + _tmp42;
  const Scalar _tmp51 = _tmp50 - p_d(1, 0) + p_init1;
  const Scalar _tmp52 = _tmp15 + _tmp7;
  const Scalar _tmp53 = _tmp52 - p_d(0, 0) + p_init0;
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp51 * _tmp54;
  const Scalar _tmp57 = _tmp49 * _tmp55 + _tmp50 * _tmp55 - _tmp52 * _tmp56;
  const Scalar _tmp58 = _tmp44 * _tmp47;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp55 * _tmp58 - _tmp56);
  const Scalar _tmp60 = _tmp38 * _tmp58 - _tmp39;
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp32 * _tmp38 - _tmp35 * _tmp39 + _tmp38 * _tmp49 - _tmp57 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp55 * _tmp61;
  const Scalar _tmp66 = _tmp31 * _tmp48 * (_tmp38 * _tmp64 - _tmp64 * _tmp65);
  const Scalar _tmp67 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp68 = -Scalar(0.010999999999999999) * _tmp12 -
                        Scalar(0.010999999999999999) * _tmp23 + Scalar(-0.010999999999999999);
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp70 = _tmp68 + _tmp69;
  const Scalar _tmp71 = _tmp67 + _tmp70;
  const Scalar _tmp72 = _tmp67 + _tmp68 - _tmp69;
  const Scalar _tmp73 = -_tmp67 + _tmp70;
  const Scalar _tmp74 = _tmp55 * _tmp71 - _tmp55 * _tmp73;
  const Scalar _tmp75 = _tmp58 * _tmp71;
  const Scalar _tmp76 = -_tmp55 * _tmp75 + _tmp56 * _tmp73;
  const Scalar _tmp77 = Scalar(1.0) * _tmp43;
  const Scalar _tmp78 = Scalar(1.0) * _tmp40;
  const Scalar _tmp79 = (-_tmp52 + _tmp78) / (_tmp50 - _tmp77);
  const Scalar _tmp80 = _tmp38 * _tmp71 - _tmp38 * _tmp72 - _tmp61 * _tmp74 -
                        _tmp79 * (-_tmp38 * _tmp75 + _tmp39 * _tmp72 - _tmp61 * _tmp76);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp58 * _tmp59;
  const Scalar _tmp83 = -_tmp71 + _tmp74 * _tmp82 - _tmp79 * (_tmp75 + _tmp76 * _tmp82);
  const Scalar _tmp84 = _tmp62 * _tmp81;
  const Scalar _tmp85 = _tmp63 * _tmp80;
  const Scalar _tmp86 = _tmp83 + _tmp85 * (-_tmp49 + _tmp57 * _tmp82 - _tmp83 * _tmp84);
  const Scalar _tmp87 = _tmp81 * _tmp86;
  const Scalar _tmp88 = _tmp60 * _tmp81;
  const Scalar _tmp89 = _tmp59 * (-_tmp58 - _tmp86 * _tmp88);
  const Scalar _tmp90 = _tmp30 * _tmp48 * (_tmp38 * _tmp87 + _tmp55 * _tmp89 + Scalar(1.0));
  const Scalar _tmp91 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp92 = _tmp77 * _tmp79 + _tmp78;
  const Scalar _tmp93 = 0;
  const Scalar _tmp94 = Scalar(1.0) * _tmp59;
  const Scalar _tmp95 = -_tmp74 * _tmp94 + _tmp76 * _tmp79 * _tmp94;
  const Scalar _tmp96 = _tmp85 * (-_tmp57 * _tmp94 - _tmp84 * _tmp95) + _tmp95;
  const Scalar _tmp97 = _tmp81 * _tmp96;
  const Scalar _tmp98 = _tmp59 * (-_tmp88 * _tmp96 + Scalar(1.0));
  const Scalar _tmp99 = _tmp29 * _tmp48 * (_tmp38 * _tmp97 + _tmp55 * _tmp98);
  const Scalar _tmp100 = _tmp31 * _tmp64;
  const Scalar _tmp101 = _tmp100 * fh1;
  const Scalar _tmp102 = _tmp29 * _tmp98;
  const Scalar _tmp103 = _tmp91 * _tmp93;
  const Scalar _tmp104 = _tmp30 * _tmp89;
  const Scalar _tmp105 = _tmp30 * _tmp87;
  const Scalar _tmp106 = _tmp29 * _tmp97;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp66 - _tmp90 - _tmp99) *
               std::exp(_tmp48 * _tmp91 * (_tmp38 * _tmp93 - _tmp65 * _tmp93) + _tmp66 * fh1 +
                        _tmp90 * fh1 + _tmp99 * fh1);
  _res(2, 0) = -(-_tmp100 * _tmp61 + _tmp102 + _tmp104) *
               std::exp(_tmp101 * _tmp61 - _tmp102 * fh1 + _tmp103 * _tmp61 - _tmp104 * fh1);
  _res(3, 0) =
      -(_tmp100 + _tmp105 + _tmp106) * std::exp(-_tmp101 - _tmp103 - _tmp105 * fh1 - _tmp106 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym