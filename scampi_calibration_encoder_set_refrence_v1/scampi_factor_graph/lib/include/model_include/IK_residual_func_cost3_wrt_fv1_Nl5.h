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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl5
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 291

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (104)
  const Scalar _tmp0 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp6 = 2 * _tmp0;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp7 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp12 = _tmp0 * _tmp8;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp4;
  const Scalar _tmp16 = _tmp15 - p_c(0, 0) + p_init0;
  const Scalar _tmp17 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp17 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp20 = _tmp2 * _tmp6;
  const Scalar _tmp21 = _tmp5 * _tmp8;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 + Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp19 + _tmp22;
  const Scalar _tmp24 = _tmp18 + _tmp23;
  const Scalar _tmp25 = _tmp24 - p_c(1, 0) + p_init1;
  const Scalar _tmp26 = std::pow(Scalar(std::pow(_tmp16, Scalar(2)) + std::pow(_tmp25, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp27 = _tmp16 * _tmp26;
  const Scalar _tmp28 = -_tmp19 + _tmp22;
  const Scalar _tmp29 = _tmp18 + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_d(1, 0) + p_init1;
  const Scalar _tmp31 = -_tmp4;
  const Scalar _tmp32 = _tmp14 + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_d(0, 0) + p_init0;
  const Scalar _tmp34 = Scalar(1.0) / (_tmp33);
  const Scalar _tmp35 = _tmp30 * _tmp34;
  const Scalar _tmp36 = -_tmp18;
  const Scalar _tmp37 = _tmp23 + _tmp36;
  const Scalar _tmp38 = _tmp37 - p_b(1, 0) + p_init1;
  const Scalar _tmp39 = _tmp10 - _tmp13;
  const Scalar _tmp40 = _tmp39 + _tmp4;
  const Scalar _tmp41 = _tmp40 - p_b(0, 0) + p_init0;
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = _tmp38 * _tmp42;
  const Scalar _tmp45 = _tmp35 * _tmp43 - _tmp44;
  const Scalar _tmp46 =
      std::sqrt(Scalar(std::pow(_tmp30, Scalar(2)) + std::pow(_tmp33, Scalar(2))));
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp34 * _tmp46;
  const Scalar _tmp49 = _tmp48 * (-_tmp29 * _tmp33 * _tmp47 + _tmp30 * _tmp32 * _tmp47);
  const Scalar _tmp50 = _tmp25 * _tmp26;
  const Scalar _tmp51 = -_tmp15 * _tmp50 + _tmp24 * _tmp27 + _tmp27 * _tmp49;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp27 * _tmp35 - _tmp50);
  const Scalar _tmp53 = _tmp45 * _tmp52;
  const Scalar _tmp54 = _tmp37 * _tmp43 - _tmp40 * _tmp44 + _tmp43 * _tmp49 - _tmp51 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp54);
  const Scalar _tmp56 = Scalar(1.0) * _tmp52;
  const Scalar _tmp57 = _tmp45 * _tmp55 * _tmp56;
  const Scalar _tmp58 = Scalar(1.0) * _tmp55;
  const Scalar _tmp59 = _tmp31 + _tmp39;
  const Scalar _tmp60 = _tmp59 - p_a(0, 0) + p_init0;
  const Scalar _tmp61 = _tmp28 + _tmp36;
  const Scalar _tmp62 = _tmp61 - p_a(1, 0) + p_init1;
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp62 * _tmp63;
  const Scalar _tmp65 = _tmp60 * _tmp63;
  const Scalar _tmp66 = fh1 * (_tmp59 * _tmp64 - _tmp61 * _tmp65);
  const Scalar _tmp67 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp69 =
      -Scalar(0.010999999999999999) * _tmp17 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp71 = _tmp69 + _tmp70;
  const Scalar _tmp72 = -_tmp68 + _tmp71;
  const Scalar _tmp73 = _tmp68 + _tmp69 - _tmp70;
  const Scalar _tmp74 = _tmp35 * _tmp72;
  const Scalar _tmp75 = _tmp68 + _tmp71;
  const Scalar _tmp76 = -_tmp27 * _tmp74 + _tmp50 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp29;
  const Scalar _tmp78 = Scalar(1.0) * _tmp32;
  const Scalar _tmp79 = (-_tmp15 + _tmp78) / (_tmp24 - _tmp77);
  const Scalar _tmp80 = _tmp27 * _tmp72 - _tmp27 * _tmp75;
  const Scalar _tmp81 = _tmp43 * _tmp72 - _tmp43 * _tmp73 - _tmp53 * _tmp80 -
                        _tmp79 * (-_tmp43 * _tmp74 + _tmp44 * _tmp73 - _tmp53 * _tmp76);
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = _tmp77 * _tmp79 + _tmp78;
  const Scalar _tmp84 = 0;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp27 * _tmp52;
  const Scalar _tmp87 = _tmp45 * _tmp82;
  const Scalar _tmp88 = _tmp84 * _tmp87;
  const Scalar _tmp89 = _tmp48 * (_tmp43 * _tmp85 - _tmp86 * _tmp88);
  const Scalar _tmp90 = _tmp56 * _tmp76 * _tmp79 - _tmp56 * _tmp80;
  const Scalar _tmp91 = _tmp54 * _tmp82;
  const Scalar _tmp92 = _tmp55 * _tmp81;
  const Scalar _tmp93 = _tmp90 + _tmp92 * (-_tmp51 * _tmp56 - _tmp90 * _tmp91);
  const Scalar _tmp94 = _tmp43 * _tmp82;
  const Scalar _tmp95 = -_tmp87 * _tmp93 + Scalar(1.0);
  const Scalar _tmp96 = _tmp48 * fh1;
  const Scalar _tmp97 = _tmp35 * _tmp52;
  const Scalar _tmp98 = -_tmp72 - _tmp79 * (_tmp74 + _tmp76 * _tmp97) + _tmp80 * _tmp97;
  const Scalar _tmp99 = _tmp92 * (-_tmp49 + _tmp51 * _tmp97 - _tmp91 * _tmp98) + _tmp98;
  const Scalar _tmp100 = -_tmp35 - _tmp87 * _tmp99;
  const Scalar _tmp101 = _tmp52 * _tmp88;
  const Scalar _tmp102 = _tmp52 * fh1;
  const Scalar _tmp103 = _tmp82 * fh1;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp89 * std::exp(_tmp48 * _tmp66 * (-_tmp27 * _tmp57 + _tmp43 * _tmp58) +
                         _tmp64 * _tmp96 * (_tmp86 * _tmp95 + _tmp93 * _tmp94) +
                         _tmp65 * _tmp96 * (_tmp100 * _tmp86 + _tmp94 * _tmp99 + Scalar(1.0)) +
                         _tmp67 * _tmp89);
  _res(2, 0) = -_tmp101 * std::exp(-_tmp100 * _tmp102 * _tmp65 + _tmp101 * _tmp67 -
                                   _tmp102 * _tmp64 * _tmp95 + _tmp57 * _tmp66);
  _res(3, 0) = _tmp85 * std::exp(-_tmp103 * _tmp64 * _tmp93 - _tmp103 * _tmp65 * _tmp99 -
                                 _tmp58 * _tmp66 - _tmp67 * _tmp85);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
