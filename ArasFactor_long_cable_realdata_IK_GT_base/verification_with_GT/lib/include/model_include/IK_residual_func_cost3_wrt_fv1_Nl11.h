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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl11
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 288

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (103)
  const Scalar _tmp0 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp6 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp5;
  const Scalar _tmp10 = _tmp1 * _tmp6;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp12 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp8;
  const Scalar _tmp17 = _tmp16 + p_init0 + Scalar(-2.71799795);
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp19 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp20 = _tmp2 * _tmp6;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp19 + Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999);
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 + p_init1 + Scalar(-4.7752063900000001);
  const Scalar _tmp27 = std::pow(Scalar(std::pow(_tmp17, Scalar(2)) + std::pow(_tmp26, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp28 = _tmp17 * _tmp27;
  const Scalar _tmp29 = _tmp11 - _tmp14;
  const Scalar _tmp30 = _tmp29 + _tmp8;
  const Scalar _tmp31 = Scalar(1.0) * _tmp30;
  const Scalar _tmp32 = -_tmp18;
  const Scalar _tmp33 = _tmp24 + _tmp32;
  const Scalar _tmp34 = Scalar(1.0) * _tmp33;
  const Scalar _tmp35 = (-_tmp16 + _tmp31) / (_tmp25 - _tmp34);
  const Scalar _tmp36 = _tmp31 + _tmp34 * _tmp35;
  const Scalar _tmp37 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp38 = -_tmp37;
  const Scalar _tmp39 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp38 + _tmp41;
  const Scalar _tmp43 = _tmp21 - _tmp23;
  const Scalar _tmp44 = _tmp32 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init1 + Scalar(8.3196563700000006);
  const Scalar _tmp46 = -_tmp8;
  const Scalar _tmp47 = _tmp29 + _tmp46;
  const Scalar _tmp48 = _tmp47 + p_init0 + Scalar(1.9874742000000001);
  const Scalar _tmp49 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp48, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp48 * _tmp49;
  const Scalar _tmp51 = _tmp38 + _tmp39 - _tmp40;
  const Scalar _tmp52 = _tmp37 + _tmp41;
  const Scalar _tmp53 = _tmp28 * _tmp42 - _tmp28 * _tmp52;
  const Scalar _tmp54 = _tmp45 * _tmp49;
  const Scalar _tmp55 = _tmp33 + p_init1 + Scalar(-4.8333311099999996);
  const Scalar _tmp56 = _tmp30 + p_init0 + Scalar(1.79662371);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = _tmp55 * _tmp57;
  const Scalar _tmp59 = _tmp50 * _tmp58 - _tmp54;
  const Scalar _tmp60 = _tmp26 * _tmp27;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp28 * _tmp58 - _tmp60);
  const Scalar _tmp62 = _tmp59 * _tmp61;
  const Scalar _tmp63 = _tmp42 * _tmp58;
  const Scalar _tmp64 = -_tmp28 * _tmp63 + _tmp52 * _tmp60;
  const Scalar _tmp65 = -_tmp35 * (-_tmp50 * _tmp63 + _tmp51 * _tmp54 - _tmp62 * _tmp64) +
                        _tmp42 * _tmp50 - _tmp50 * _tmp51 - _tmp53 * _tmp62;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = 0;
  const Scalar _tmp68 = _tmp62 * _tmp67;
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp70 = _tmp57 * _tmp69;
  const Scalar _tmp71 = _tmp70 * (-_tmp28 * _tmp68 + _tmp50 * _tmp67);
  const Scalar _tmp72 = _tmp58 * _tmp61;
  const Scalar _tmp73 = -_tmp35 * (_tmp63 + _tmp64 * _tmp72) - _tmp42 + _tmp53 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp75 = _tmp70 * (_tmp30 * _tmp55 * _tmp74 - _tmp33 * _tmp56 * _tmp74);
  const Scalar _tmp76 = -_tmp16 * _tmp60 + _tmp25 * _tmp28 + _tmp28 * _tmp75;
  const Scalar _tmp77 = _tmp44 * _tmp50 - _tmp47 * _tmp54 + _tmp50 * _tmp75 - _tmp62 * _tmp76;
  const Scalar _tmp78 = _tmp66 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp80 = _tmp65 * _tmp79;
  const Scalar _tmp81 = _tmp73 + _tmp80 * (_tmp72 * _tmp76 - _tmp73 * _tmp78 - _tmp75);
  const Scalar _tmp82 = _tmp50 * _tmp66;
  const Scalar _tmp83 = _tmp59 * _tmp66;
  const Scalar _tmp84 = -_tmp58 - _tmp81 * _tmp83;
  const Scalar _tmp85 = _tmp28 * _tmp61;
  const Scalar _tmp86 = _tmp15 + _tmp46;
  const Scalar _tmp87 = _tmp86 + p_init0 + Scalar(-2.5202214700000001);
  const Scalar _tmp88 = _tmp18 + _tmp43;
  const Scalar _tmp89 = _tmp88 + p_init1 + Scalar(8.3888750099999996);
  const Scalar _tmp90 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp89, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp91 = _tmp87 * _tmp90;
  const Scalar _tmp92 = _tmp91 * fh1;
  const Scalar _tmp93 = Scalar(1.0) * _tmp61;
  const Scalar _tmp94 = _tmp35 * _tmp64 * _tmp93 - _tmp53 * _tmp93;
  const Scalar _tmp95 = _tmp80 * (-_tmp76 * _tmp93 - _tmp78 * _tmp94) + _tmp94;
  const Scalar _tmp96 = -_tmp83 * _tmp95 + Scalar(1.0);
  const Scalar _tmp97 = _tmp89 * _tmp90;
  const Scalar _tmp98 = _tmp97 * fh1;
  const Scalar _tmp99 = Scalar(1.0) * _tmp79;
  const Scalar _tmp100 = fh1 * (_tmp86 * _tmp97 - _tmp88 * _tmp91);
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = _tmp0 * _tmp67;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp71 *
      std::exp(_tmp0 * _tmp71 + _tmp100 * _tmp70 * (-_tmp28 * _tmp62 * _tmp99 + _tmp50 * _tmp99) +
               _tmp70 * _tmp92 * (_tmp81 * _tmp82 + _tmp84 * _tmp85 + Scalar(1.0)) +
               _tmp70 * _tmp98 * (_tmp82 * _tmp95 + _tmp85 * _tmp96));
  _res(2, 0) = -_tmp68 * std::exp(_tmp101 * _tmp62 + _tmp102 * _tmp62 - _tmp61 * _tmp84 * _tmp92 -
                                  _tmp61 * _tmp96 * _tmp98);
  _res(3, 0) =
      _tmp67 * std::exp(-_tmp101 - _tmp102 - _tmp66 * _tmp81 * _tmp92 - _tmp66 * _tmp95 * _tmp98);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
