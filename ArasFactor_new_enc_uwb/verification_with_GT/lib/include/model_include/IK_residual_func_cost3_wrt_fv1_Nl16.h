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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl16(
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
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp8 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp10 = _tmp3 * _tmp9;
  const Scalar _tmp11 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp12 * _tmp7;
  const Scalar _tmp14 = _tmp1 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp6;
  const Scalar _tmp18 = Scalar(1.0) * _tmp17;
  const Scalar _tmp19 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp2 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp22 = _tmp1 * _tmp12;
  const Scalar _tmp23 = _tmp7 * _tmp9;
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp22 + Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -_tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = Scalar(1.0) * _tmp26;
  const Scalar _tmp28 = -_tmp20;
  const Scalar _tmp29 = _tmp25 + _tmp28;
  const Scalar _tmp30 = _tmp11 - _tmp15;
  const Scalar _tmp31 = _tmp30 + _tmp6;
  const Scalar _tmp32 = (_tmp18 - _tmp31) / (-_tmp27 + _tmp29);
  const Scalar _tmp33 = _tmp18 + _tmp27 * _tmp32;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp35 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp36 = -_tmp35;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp38 = _tmp34 + _tmp36 + _tmp37;
  const Scalar _tmp39 = _tmp30 + _tmp5;
  const Scalar _tmp40 = _tmp39 + p_init0 + Scalar(-2.5202214700000001);
  const Scalar _tmp41 = _tmp21 + _tmp24;
  const Scalar _tmp42 = _tmp28 + _tmp41;
  const Scalar _tmp43 = _tmp42 + p_init1 + Scalar(8.3888750099999996);
  const Scalar _tmp44 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp43, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp45 = _tmp40 * _tmp44;
  const Scalar _tmp46 = _tmp34 - _tmp37;
  const Scalar _tmp47 = _tmp35 + _tmp46;
  const Scalar _tmp48 = _tmp29 + p_init1 + Scalar(8.3196563700000006);
  const Scalar _tmp49 = _tmp31 + p_init0 + Scalar(1.9874742000000001);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp49 * _tmp50;
  const Scalar _tmp52 = _tmp36 + _tmp46;
  const Scalar _tmp53 = _tmp38 * _tmp51 - _tmp51 * _tmp52;
  const Scalar _tmp54 = _tmp48 * _tmp50;
  const Scalar _tmp55 = _tmp26 + p_init1 + Scalar(-4.8333311099999996);
  const Scalar _tmp56 = _tmp17 + p_init0 + Scalar(1.79662371);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = _tmp55 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp51 * _tmp58 - _tmp54);
  const Scalar _tmp60 = _tmp43 * _tmp44;
  const Scalar _tmp61 = _tmp45 * _tmp58 - _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp61;
  const Scalar _tmp63 = _tmp38 * _tmp58;
  const Scalar _tmp64 = -_tmp51 * _tmp63 + _tmp52 * _tmp54;
  const Scalar _tmp65 = -_tmp32 * (-_tmp45 * _tmp63 + _tmp47 * _tmp60 - _tmp62 * _tmp64) +
                        _tmp38 * _tmp45 - _tmp45 * _tmp47 - _tmp53 * _tmp62;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = 0;
  const Scalar _tmp68 = _tmp62 * _tmp67;
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp70 = _tmp57 * _tmp69;
  const Scalar _tmp71 = _tmp70 * (_tmp45 * _tmp67 - _tmp51 * _tmp68);
  const Scalar _tmp72 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp73 = _tmp70 * (_tmp17 * _tmp55 * _tmp72 - _tmp26 * _tmp56 * _tmp72);
  const Scalar _tmp74 = _tmp29 * _tmp51 - _tmp31 * _tmp54 + _tmp51 * _tmp73;
  const Scalar _tmp75 = -_tmp39 * _tmp60 + _tmp42 * _tmp45 + _tmp45 * _tmp73 - _tmp62 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = _tmp16 + _tmp5;
  const Scalar _tmp79 = _tmp20 + _tmp41;
  const Scalar _tmp80 = _tmp79 + p_init1 + Scalar(-4.7752063900000001);
  const Scalar _tmp81 = _tmp78 + p_init0 + Scalar(-2.71799795);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp82;
  const Scalar _tmp85 = fh1 * (_tmp78 * _tmp83 - _tmp79 * _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp59;
  const Scalar _tmp87 = _tmp32 * _tmp64 * _tmp86 - _tmp53 * _tmp86;
  const Scalar _tmp88 = _tmp66 * _tmp75;
  const Scalar _tmp89 = _tmp65 * _tmp76;
  const Scalar _tmp90 = _tmp87 + _tmp89 * (-_tmp74 * _tmp86 - _tmp87 * _tmp88);
  const Scalar _tmp91 = _tmp45 * _tmp66;
  const Scalar _tmp92 = _tmp61 * _tmp66;
  const Scalar _tmp93 = -_tmp90 * _tmp92 + Scalar(1.0);
  const Scalar _tmp94 = _tmp51 * _tmp59;
  const Scalar _tmp95 = _tmp83 * fh1;
  const Scalar _tmp96 = _tmp58 * _tmp59;
  const Scalar _tmp97 = -_tmp32 * (_tmp63 + _tmp64 * _tmp96) - _tmp38 + _tmp53 * _tmp96;
  const Scalar _tmp98 = _tmp89 * (-_tmp73 + _tmp74 * _tmp96 - _tmp88 * _tmp97) + _tmp97;
  const Scalar _tmp99 = -_tmp58 - _tmp92 * _tmp98;
  const Scalar _tmp100 = _tmp84 * fh1;
  const Scalar _tmp101 = _tmp77 * _tmp85;
  const Scalar _tmp102 = _tmp0 * _tmp67;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp71 * std::exp(_tmp0 * _tmp71 +
                         _tmp100 * _tmp70 * (_tmp91 * _tmp98 + _tmp94 * _tmp99 + Scalar(1.0)) +
                         _tmp70 * _tmp85 * (_tmp45 * _tmp77 - _tmp51 * _tmp62 * _tmp77) +
                         _tmp70 * _tmp95 * (_tmp90 * _tmp91 + _tmp93 * _tmp94));
  _res(2, 0) = -_tmp68 * std::exp(-_tmp100 * _tmp59 * _tmp99 + _tmp101 * _tmp62 + _tmp102 * _tmp62 -
                                  _tmp59 * _tmp93 * _tmp95);
  _res(3, 0) =
      _tmp67 * std::exp(-_tmp100 * _tmp66 * _tmp98 - _tmp101 - _tmp102 - _tmp66 * _tmp90 * _tmp95);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
