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
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 304

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (109)
  const Scalar _tmp0 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                       _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp5 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp12 = _tmp3 * _tmp6;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp15 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 +
                        Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999);
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp10 + _tmp17;
  const Scalar _tmp19 = _tmp18 + p_init1 + Scalar(-4.8333311099999996);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp3 * _tmp5;
  const Scalar _tmp24 = _tmp1 * _tmp7;
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp22 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + p_init0 + Scalar(1.79662371);
  const Scalar _tmp29 = std::pow(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp28, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp30 = _tmp19 * _tmp29;
  const Scalar _tmp31 = _tmp22 + _tmp25;
  const Scalar _tmp32 = _tmp20 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init0 + Scalar(-2.71799795);
  const Scalar _tmp34 = Scalar(1.0) / (_tmp33);
  const Scalar _tmp35 = _tmp17 + _tmp9;
  const Scalar _tmp36 = _tmp35 + p_init1 + Scalar(-4.7752063900000001);
  const Scalar _tmp37 = _tmp34 * _tmp36;
  const Scalar _tmp38 = _tmp28 * _tmp29;
  const Scalar _tmp39 = Scalar(1.0) / (-_tmp30 + _tmp37 * _tmp38);
  const Scalar _tmp40 = _tmp38 * _tmp39;
  const Scalar _tmp41 = Scalar(1.0) * _tmp32;
  const Scalar _tmp42 = Scalar(1.0) * _tmp35;
  const Scalar _tmp43 = (-_tmp27 + _tmp41) / (_tmp18 - _tmp42);
  const Scalar _tmp44 = _tmp41 + _tmp42 * _tmp43;
  const Scalar _tmp45 = 0;
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp47 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp48 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = _tmp46 + _tmp49;
  const Scalar _tmp51 = -_tmp46 + _tmp49;
  const Scalar _tmp52 = _tmp38 * _tmp50 - _tmp38 * _tmp51;
  const Scalar _tmp53 = -_tmp20;
  const Scalar _tmp54 = _tmp31 + _tmp53;
  const Scalar _tmp55 = _tmp54 + p_init0 + Scalar(-2.5202214700000001);
  const Scalar _tmp56 = _tmp13 - _tmp16;
  const Scalar _tmp57 = _tmp56 + _tmp9;
  const Scalar _tmp58 = _tmp57 + p_init1 + Scalar(8.3888750099999996);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = _tmp55 * _tmp59;
  const Scalar _tmp62 = _tmp37 * _tmp61 - _tmp60;
  const Scalar _tmp63 = _tmp39 * _tmp62;
  const Scalar _tmp64 = _tmp46 + _tmp47 - _tmp48;
  const Scalar _tmp65 = _tmp37 * _tmp50;
  const Scalar _tmp66 = _tmp30 * _tmp51 - _tmp38 * _tmp65;
  const Scalar _tmp67 = -_tmp43 * (_tmp60 * _tmp64 - _tmp61 * _tmp65 - _tmp63 * _tmp66) +
                        _tmp50 * _tmp61 - _tmp52 * _tmp63 - _tmp61 * _tmp64;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp62 * _tmp68;
  const Scalar _tmp70 = _tmp45 * _tmp69;
  const Scalar _tmp71 = _tmp45 * _tmp68;
  const Scalar _tmp72 =
      std::sqrt(Scalar(std::pow(_tmp33, Scalar(2)) + std::pow(_tmp36, Scalar(2))));
  const Scalar _tmp73 = _tmp34 * _tmp72;
  const Scalar _tmp74 = _tmp26 + _tmp53;
  const Scalar _tmp75 = _tmp10 + _tmp56;
  const Scalar _tmp76 = _tmp75 + p_init1 + Scalar(8.3196563700000006);
  const Scalar _tmp77 = _tmp74 + p_init0 + Scalar(1.9874742000000001);
  const Scalar _tmp78 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp77, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp78;
  const Scalar _tmp81 = _tmp74 * _tmp79 - _tmp75 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp83 = _tmp73 * (_tmp32 * _tmp36 * _tmp82 - _tmp33 * _tmp35 * _tmp82);
  const Scalar _tmp84 = _tmp18 * _tmp38 - _tmp27 * _tmp30 + _tmp38 * _tmp83;
  const Scalar _tmp85 = -_tmp54 * _tmp60 + _tmp57 * _tmp61 + _tmp61 * _tmp83 - _tmp63 * _tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp39;
  const Scalar _tmp88 = _tmp62 * _tmp86 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) * _tmp86;
  const Scalar _tmp90 = _tmp73 * _tmp81 * (-_tmp38 * _tmp88 + _tmp61 * _tmp89);
  const Scalar _tmp91 = _tmp37 * _tmp39;
  const Scalar _tmp92 = -_tmp43 * (_tmp65 + _tmp66 * _tmp91) - _tmp50 + _tmp52 * _tmp91;
  const Scalar _tmp93 = _tmp68 * _tmp85;
  const Scalar _tmp94 = _tmp67 * _tmp86;
  const Scalar _tmp95 = _tmp92 + _tmp94 * (-_tmp83 + _tmp84 * _tmp91 - _tmp92 * _tmp93);
  const Scalar _tmp96 = _tmp61 * _tmp68;
  const Scalar _tmp97 = -_tmp37 - _tmp69 * _tmp95;
  const Scalar _tmp98 = _tmp73 * _tmp80 * (_tmp40 * _tmp97 + _tmp95 * _tmp96 + Scalar(1.0));
  const Scalar _tmp99 = _tmp43 * _tmp66 * _tmp87 - _tmp52 * _tmp87;
  const Scalar _tmp100 = _tmp94 * (-_tmp84 * _tmp87 - _tmp93 * _tmp99) + _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp69 + Scalar(1.0);
  const Scalar _tmp102 = _tmp73 * _tmp79 * (_tmp100 * _tmp96 + _tmp101 * _tmp40);
  const Scalar _tmp103 = _tmp81 * _tmp88;
  const Scalar _tmp104 = _tmp39 * _tmp80 * _tmp97;
  const Scalar _tmp105 = _tmp101 * _tmp39 * _tmp79;
  const Scalar _tmp106 = _tmp81 * _tmp89;
  const Scalar _tmp107 = _tmp100 * _tmp68 * _tmp79;
  const Scalar _tmp108 = _tmp68 * _tmp80 * _tmp95;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp102 - _tmp90 - _tmp98) *
               std::exp(_tmp0 * _tmp73 * (-_tmp40 * _tmp70 + _tmp61 * _tmp71) + _tmp102 * fh1 +
                        _tmp90 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(-_tmp103 + _tmp104 + _tmp105) *
               std::exp(_tmp0 * _tmp39 * _tmp70 + _tmp103 * fh1 - _tmp104 * fh1 - _tmp105 * fh1);
  _res(3, 0) = -(_tmp106 + _tmp107 + _tmp108) *
               std::exp(-_tmp0 * _tmp71 - _tmp106 * fh1 - _tmp107 * fh1 - _tmp108 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
