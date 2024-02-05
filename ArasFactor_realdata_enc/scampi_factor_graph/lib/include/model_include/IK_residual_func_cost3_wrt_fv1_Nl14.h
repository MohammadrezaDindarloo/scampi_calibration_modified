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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl14(
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
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp12 = _tmp2 * _tmp7;
  const Scalar _tmp13 = _tmp0 * _tmp9;
  const Scalar _tmp14 =
      -Scalar(0.010999999999999999) * _tmp12 + Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp5;
  const Scalar _tmp17 = _tmp16 - p_b(1, 0) + p_init1;
  const Scalar _tmp18 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp20 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp21 = _tmp6 * _tmp9;
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 - p_b(0, 0) + p_init0;
  const Scalar _tmp27 = Scalar(1.0) / (_tmp26);
  const Scalar _tmp28 = _tmp17 * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp18 + Scalar(-0.010999999999999999);
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp29 + _tmp32;
  const Scalar _tmp34 = _tmp28 * _tmp33;
  const Scalar _tmp35 = -_tmp19;
  const Scalar _tmp36 = _tmp24 + _tmp35;
  const Scalar _tmp37 = _tmp36 - p_a(0, 0) + p_init0;
  const Scalar _tmp38 = -_tmp11 + _tmp14;
  const Scalar _tmp39 = _tmp38 + _tmp5;
  const Scalar _tmp40 = _tmp39 - p_a(1, 0) + p_init1;
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp37 * _tmp41;
  const Scalar _tmp43 = _tmp40 * _tmp41;
  const Scalar _tmp44 = Scalar(1.0) / (_tmp28 * _tmp42 - _tmp43);
  const Scalar _tmp45 = -_tmp29;
  const Scalar _tmp46 = _tmp32 + _tmp45;
  const Scalar _tmp47 = -_tmp34 * _tmp42 + _tmp43 * _tmp46;
  const Scalar _tmp48 = _tmp44 * _tmp47;
  const Scalar _tmp49 = Scalar(1.0) * _tmp16;
  const Scalar _tmp50 = Scalar(1.0) * _tmp25;
  const Scalar _tmp51 = (-_tmp36 + _tmp50) / (_tmp39 - _tmp49);
  const Scalar _tmp52 = _tmp33 * _tmp42 - _tmp42 * _tmp46;
  const Scalar _tmp53 = _tmp44 * _tmp52;
  const Scalar _tmp54 = _tmp28 * _tmp53 - _tmp33 - _tmp51 * (_tmp28 * _tmp48 + _tmp34);
  const Scalar _tmp55 = _tmp38 + _tmp4;
  const Scalar _tmp56 = _tmp55 - p_d(1, 0) + p_init1;
  const Scalar _tmp57 = _tmp22 + _tmp23;
  const Scalar _tmp58 = _tmp35 + _tmp57;
  const Scalar _tmp59 = _tmp58 - p_d(0, 0) + p_init0;
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp56 * _tmp60;
  const Scalar _tmp63 = _tmp28 * _tmp61 - _tmp62;
  const Scalar _tmp64 = _tmp44 * _tmp63;
  const Scalar _tmp65 = _tmp30 + _tmp31 + _tmp45;
  const Scalar _tmp66 = _tmp33 * _tmp61 -
                        _tmp51 * (-_tmp34 * _tmp61 - _tmp47 * _tmp64 + _tmp62 * _tmp65) -
                        _tmp52 * _tmp64 - _tmp61 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp26, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp27 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (-_tmp16 * _tmp26 * _tmp69 + _tmp17 * _tmp25 * _tmp69);
  const Scalar _tmp72 = _tmp44 * (-_tmp36 * _tmp43 + _tmp39 * _tmp42 + _tmp42 * _tmp71);
  const Scalar _tmp73 = _tmp55 * _tmp61 - _tmp58 * _tmp62 + _tmp61 * _tmp71 - _tmp63 * _tmp72;
  const Scalar _tmp74 = _tmp67 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp76 = _tmp66 * _tmp75;
  const Scalar _tmp77 = _tmp54 + _tmp76 * (_tmp28 * _tmp72 - _tmp54 * _tmp74 - _tmp71);
  const Scalar _tmp78 = _tmp63 * _tmp67;
  const Scalar _tmp79 = -_tmp28 - _tmp77 * _tmp78;
  const Scalar _tmp80 = _tmp42 * _tmp44;
  const Scalar _tmp81 = _tmp61 * _tmp67;
  const Scalar _tmp82 = _tmp19 + _tmp57;
  const Scalar _tmp83 = _tmp82 - p_c(0, 0) + p_init0;
  const Scalar _tmp84 = _tmp15 + _tmp4;
  const Scalar _tmp85 = _tmp84 - p_c(1, 0) + p_init1;
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp87 * fh1;
  const Scalar _tmp89 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp90 = _tmp49 * _tmp51 + _tmp50;
  const Scalar _tmp91 = 0;
  const Scalar _tmp92 = _tmp67 * _tmp91;
  const Scalar _tmp93 = _tmp78 * _tmp91;
  const Scalar _tmp94 = _tmp70 * (_tmp61 * _tmp92 - _tmp80 * _tmp93);
  const Scalar _tmp95 = Scalar(1.0) * _tmp48 * _tmp51 - Scalar(1.0) * _tmp53;
  const Scalar _tmp96 = _tmp76 * (-Scalar(1.0) * _tmp72 - _tmp74 * _tmp95) + _tmp95;
  const Scalar _tmp97 = -_tmp78 * _tmp96 + Scalar(1.0);
  const Scalar _tmp98 = _tmp85 * _tmp86;
  const Scalar _tmp99 = _tmp98 * fh1;
  const Scalar _tmp100 = Scalar(1.0) * _tmp75;
  const Scalar _tmp101 = fh1 * (_tmp82 * _tmp98 - _tmp84 * _tmp87);
  const Scalar _tmp102 = _tmp44 * _tmp93;
  const Scalar _tmp103 = _tmp100 * _tmp101;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp94 * std::exp(_tmp101 * _tmp70 * (-_tmp100 * _tmp42 * _tmp64 + _tmp100 * _tmp61) +
                         _tmp70 * _tmp88 * (_tmp77 * _tmp81 + _tmp79 * _tmp80 + Scalar(1.0)) +
                         _tmp70 * _tmp99 * (_tmp80 * _tmp97 + _tmp81 * _tmp96) + _tmp89 * _tmp94);
  _res(2, 0) = -_tmp102 * std::exp(_tmp102 * _tmp89 + _tmp103 * _tmp64 - _tmp44 * _tmp79 * _tmp88 -
                                   _tmp44 * _tmp97 * _tmp99);
  _res(3, 0) = _tmp92 * std::exp(-_tmp103 - _tmp67 * _tmp77 * _tmp88 - _tmp67 * _tmp96 * _tmp99 -
                                 _tmp89 * _tmp92);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym