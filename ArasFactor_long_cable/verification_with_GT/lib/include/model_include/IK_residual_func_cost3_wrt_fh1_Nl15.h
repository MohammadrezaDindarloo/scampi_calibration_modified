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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 307

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (108)
  const Scalar _tmp0 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp5 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp8 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp18 = _tmp2 * _tmp4;
  const Scalar _tmp19 = _tmp0 * _tmp5;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp3 + Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp22 = -_tmp20 + _tmp21;
  const Scalar _tmp23 = _tmp17 + _tmp22;
  const Scalar _tmp24 = _tmp23 + p_init1 + Scalar(-4.8333311099999996);
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 =
      -Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp18 - Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp26 + _tmp29;
  const Scalar _tmp31 = _tmp30 + p_init0 + Scalar(1.79662371);
  const Scalar _tmp32 = std::pow(Scalar(std::pow(_tmp24, Scalar(2)) + std::pow(_tmp31, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp33 = _tmp31 * _tmp32;
  const Scalar _tmp34 = -_tmp7;
  const Scalar _tmp35 = _tmp10 + _tmp13 + _tmp34;
  const Scalar _tmp36 = _tmp33 * _tmp35;
  const Scalar _tmp37 = _tmp24 * _tmp32;
  const Scalar _tmp38 = _tmp27 - _tmp28;
  const Scalar _tmp39 = _tmp25 + _tmp38;
  const Scalar _tmp40 = _tmp39 + p_init0 + Scalar(-2.5202214700000001);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = -_tmp17;
  const Scalar _tmp43 = _tmp20 + _tmp21;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init1 + Scalar(8.3888750099999996);
  const Scalar _tmp46 = _tmp41 * _tmp45;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp33 * _tmp46 - _tmp37);
  const Scalar _tmp48 = _tmp47 * (-_tmp15 * _tmp33 + _tmp36);
  const Scalar _tmp49 = Scalar(1.0) * _tmp44;
  const Scalar _tmp50 = Scalar(1.0) * _tmp39;
  const Scalar _tmp51 = (-_tmp30 + _tmp50) / (_tmp23 - _tmp49);
  const Scalar _tmp52 = _tmp15 * _tmp37 - _tmp36 * _tmp46;
  const Scalar _tmp53 = _tmp47 * _tmp52;
  const Scalar _tmp54 = -Scalar(1.0) * _tmp48 + Scalar(1.0) * _tmp51 * _tmp53;
  const Scalar _tmp55 = _tmp14 + _tmp34;
  const Scalar _tmp56 = _tmp22 + _tmp42;
  const Scalar _tmp57 = _tmp56 + p_init1 + Scalar(8.3196563700000006);
  const Scalar _tmp58 = _tmp26 + _tmp38;
  const Scalar _tmp59 = _tmp58 + p_init0 + Scalar(1.9874742000000001);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = _tmp35 * _tmp46;
  const Scalar _tmp64 = _tmp46 * _tmp62 - _tmp61;
  const Scalar _tmp65 = _tmp47 * _tmp64;
  const Scalar _tmp66 = _tmp35 * _tmp62 - _tmp48 * _tmp64 -
                        _tmp51 * (-_tmp52 * _tmp65 + _tmp55 * _tmp61 - _tmp62 * _tmp63) -
                        _tmp55 * _tmp62;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp41 * _tmp68;
  const Scalar _tmp71 = _tmp70 * (_tmp39 * _tmp45 * _tmp69 - _tmp40 * _tmp44 * _tmp69);
  const Scalar _tmp72 = _tmp23 * _tmp33 - _tmp30 * _tmp37 + _tmp33 * _tmp71;
  const Scalar _tmp73 = _tmp56 * _tmp62 - _tmp58 * _tmp61 + _tmp62 * _tmp71 - _tmp65 * _tmp72;
  const Scalar _tmp74 = _tmp67 * _tmp73;
  const Scalar _tmp75 = _tmp47 * _tmp72;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp77 = _tmp66 * _tmp76;
  const Scalar _tmp78 = _tmp54 + _tmp77 * (-_tmp54 * _tmp74 - Scalar(1.0) * _tmp75);
  const Scalar _tmp79 = _tmp62 * _tmp67;
  const Scalar _tmp80 = _tmp64 * _tmp67;
  const Scalar _tmp81 = _tmp47 * (-_tmp78 * _tmp80 + Scalar(1.0));
  const Scalar _tmp82 = _tmp17 + _tmp43;
  const Scalar _tmp83 = _tmp82 + p_init1 + Scalar(-4.7752063900000001);
  const Scalar _tmp84 = _tmp25 + _tmp29;
  const Scalar _tmp85 = _tmp84 + p_init0 + Scalar(-2.71799795);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp70 * _tmp87 * (_tmp33 * _tmp81 + _tmp78 * _tmp79);
  const Scalar _tmp89 = _tmp85 * _tmp86;
  const Scalar _tmp90 = -_tmp82 * _tmp89 + _tmp84 * _tmp87;
  const Scalar _tmp91 = Scalar(1.0) * _tmp76;
  const Scalar _tmp92 = _tmp70 * _tmp90 * (-_tmp33 * _tmp65 * _tmp91 + _tmp62 * _tmp91);
  const Scalar _tmp93 = -_tmp35 + _tmp46 * _tmp48 - _tmp51 * (_tmp46 * _tmp53 + _tmp63);
  const Scalar _tmp94 = _tmp77 * (_tmp46 * _tmp75 - _tmp71 - _tmp74 * _tmp93) + _tmp93;
  const Scalar _tmp95 = _tmp47 * (-_tmp46 - _tmp80 * _tmp94);
  const Scalar _tmp96 = _tmp70 * _tmp89 * (_tmp33 * _tmp95 + _tmp79 * _tmp94 + Scalar(1.0));
  const Scalar _tmp97 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp98 = _tmp49 * _tmp51 + _tmp50;
  const Scalar _tmp99 = 0;
  const Scalar _tmp100 = _tmp67 * _tmp99;
  const Scalar _tmp101 = _tmp47 * _tmp80 * _tmp99;
  const Scalar _tmp102 = _tmp89 * _tmp95;
  const Scalar _tmp103 = _tmp81 * _tmp87;
  const Scalar _tmp104 = _tmp90 * _tmp91;
  const Scalar _tmp105 = _tmp104 * fh1;
  const Scalar _tmp106 = _tmp67 * _tmp78 * _tmp87;
  const Scalar _tmp107 = _tmp67 * _tmp89 * _tmp94;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp88 - _tmp92 - _tmp96) *
               std::exp(_tmp70 * _tmp97 * (_tmp100 * _tmp62 - _tmp101 * _tmp33) + _tmp88 * fh1 +
                        _tmp92 * fh1 + _tmp96 * fh1);
  _res(2, 0) = -(_tmp102 + _tmp103 - _tmp104 * _tmp65) *
               std::exp(_tmp101 * _tmp97 - _tmp102 * fh1 - _tmp103 * fh1 + _tmp105 * _tmp65);
  _res(3, 0) = -(_tmp104 + _tmp106 + _tmp107) *
               std::exp(-_tmp100 * _tmp97 - _tmp105 - _tmp106 * fh1 - _tmp107 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
