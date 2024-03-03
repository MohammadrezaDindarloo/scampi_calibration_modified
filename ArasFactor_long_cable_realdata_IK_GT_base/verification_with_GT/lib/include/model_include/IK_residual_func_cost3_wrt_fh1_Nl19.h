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
 * Symbolic function: IK_residual_func_cost3_wrt_fh1_Nl19
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFh1Nl19(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 305

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (110)
  const Scalar _tmp0 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp6 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp11 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp12 =
      -Scalar(0.010999999999999999) * _tmp10 - Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp14 = _tmp2 * _tmp6;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp9;
  const Scalar _tmp18 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp10 +
                        Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999);
  const Scalar _tmp20 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp21 = _tmp3 * _tmp5;
  const Scalar _tmp22 = _tmp1 * _tmp6;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp20 - _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 + p_init0 + Scalar(-2.5202214700000001);
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp28 =
      -Scalar(0.010999999999999999) * _tmp4 + Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp27 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1 + Scalar(8.3888750099999996);
  const Scalar _tmp33 = std::pow(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp32, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp34 = _tmp26 * _tmp33;
  const Scalar _tmp35 = _tmp12 - _tmp15 + _tmp9;
  const Scalar _tmp36 = _tmp20 + _tmp23;
  const Scalar _tmp37 = _tmp19 + _tmp36;
  const Scalar _tmp38 = _tmp37 + p_init0 + Scalar(-2.71799795);
  const Scalar _tmp39 = _tmp28 + _tmp29;
  const Scalar _tmp40 = _tmp27 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1 + Scalar(-4.7752063900000001);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp38 * _tmp42;
  const Scalar _tmp44 = _tmp35 * _tmp43;
  const Scalar _tmp45 = _tmp16 + _tmp8;
  const Scalar _tmp46 = -_tmp43 * _tmp45 + _tmp44;
  const Scalar _tmp47 = -_tmp27;
  const Scalar _tmp48 = _tmp30 + _tmp47;
  const Scalar _tmp49 = _tmp48 + p_init1 + Scalar(8.3196563700000006);
  const Scalar _tmp50 = -_tmp19;
  const Scalar _tmp51 = _tmp24 + _tmp50;
  const Scalar _tmp52 = _tmp51 + p_init0 + Scalar(1.9874742000000001);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = _tmp49 * _tmp53;
  const Scalar _tmp55 = _tmp41 * _tmp42;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp43 * _tmp54 - _tmp55);
  const Scalar _tmp57 = _tmp32 * _tmp33;
  const Scalar _tmp58 = _tmp34 * _tmp54 - _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = -_tmp44 * _tmp54 + _tmp45 * _tmp55;
  const Scalar _tmp61 = _tmp34 * _tmp35;
  const Scalar _tmp62 = Scalar(1.0) * _tmp48;
  const Scalar _tmp63 = Scalar(1.0) * _tmp51;
  const Scalar _tmp64 = (-_tmp37 + _tmp63) / (_tmp40 - _tmp62);
  const Scalar _tmp65 = -_tmp17 * _tmp34 - _tmp46 * _tmp59 + _tmp61 -
                        _tmp64 * (_tmp17 * _tmp57 - _tmp54 * _tmp61 - _tmp59 * _tmp60);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp62 * _tmp64 + _tmp63;
  const Scalar _tmp68 = 0;
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp52, Scalar(2))));
  const Scalar _tmp70 = _tmp53 * _tmp69;
  const Scalar _tmp71 = Scalar(1.0) * _tmp56;
  const Scalar _tmp72 = -_tmp46 * _tmp71 + _tmp60 * _tmp64 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp74 = _tmp70 * (-_tmp48 * _tmp52 * _tmp73 + _tmp49 * _tmp51 * _tmp73);
  const Scalar _tmp75 = -_tmp37 * _tmp55 + _tmp40 * _tmp43 + _tmp43 * _tmp74;
  const Scalar _tmp76 = -_tmp25 * _tmp57 + _tmp31 * _tmp34 + _tmp34 * _tmp74 - _tmp59 * _tmp75;
  const Scalar _tmp77 = _tmp66 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp79 = _tmp65 * _tmp78;
  const Scalar _tmp80 = _tmp72 + _tmp79 * (-_tmp71 * _tmp75 - _tmp72 * _tmp77);
  const Scalar _tmp81 = _tmp66 * _tmp80;
  const Scalar _tmp82 = _tmp58 * _tmp66;
  const Scalar _tmp83 = -_tmp80 * _tmp82 + Scalar(1.0);
  const Scalar _tmp84 = _tmp43 * _tmp56;
  const Scalar _tmp85 = _tmp39 + _tmp47;
  const Scalar _tmp86 = _tmp85 + p_init1 + Scalar(-4.8333311099999996);
  const Scalar _tmp87 = _tmp36 + _tmp50;
  const Scalar _tmp88 = _tmp87 + p_init0 + Scalar(1.79662371);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp86 * _tmp89;
  const Scalar _tmp91 = _tmp70 * _tmp90 * (_tmp34 * _tmp81 + _tmp83 * _tmp84);
  const Scalar _tmp92 = _tmp54 * _tmp56;
  const Scalar _tmp93 = -_tmp35 + _tmp46 * _tmp92 - _tmp64 * (_tmp35 * _tmp54 + _tmp60 * _tmp92);
  const Scalar _tmp94 = _tmp79 * (-_tmp74 + _tmp75 * _tmp92 - _tmp77 * _tmp93) + _tmp93;
  const Scalar _tmp95 = -_tmp54 - _tmp82 * _tmp94;
  const Scalar _tmp96 = _tmp66 * _tmp94;
  const Scalar _tmp97 = _tmp88 * _tmp89;
  const Scalar _tmp98 = _tmp70 * _tmp97 * (_tmp34 * _tmp96 + _tmp84 * _tmp95 + Scalar(1.0));
  const Scalar _tmp99 = -_tmp85 * _tmp97 + _tmp87 * _tmp90;
  const Scalar _tmp100 = _tmp58 * _tmp71 * _tmp78;
  const Scalar _tmp101 = Scalar(1.0) * _tmp78;
  const Scalar _tmp102 = _tmp70 * _tmp99 * (-_tmp100 * _tmp43 + _tmp101 * _tmp34);
  const Scalar _tmp103 = _tmp0 * _tmp68;
  const Scalar _tmp104 = _tmp56 * _tmp95 * _tmp97;
  const Scalar _tmp105 = _tmp56 * _tmp83 * _tmp90;
  const Scalar _tmp106 = _tmp100 * _tmp99;
  const Scalar _tmp107 = _tmp81 * _tmp90;
  const Scalar _tmp108 = _tmp101 * _tmp99;
  const Scalar _tmp109 = _tmp96 * _tmp97;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -std::exp(-fh1);
  _res(1, 0) = -(-_tmp102 - _tmp91 - _tmp98) *
               std::exp(_tmp0 * _tmp70 * (_tmp34 * _tmp68 - _tmp43 * _tmp59 * _tmp68) +
                        _tmp102 * fh1 + _tmp91 * fh1 + _tmp98 * fh1);
  _res(2, 0) = -(_tmp104 + _tmp105 - _tmp106) *
               std::exp(_tmp103 * _tmp59 - _tmp104 * fh1 - _tmp105 * fh1 + _tmp106 * fh1);
  _res(3, 0) = -(_tmp107 + _tmp108 + _tmp109) *
               std::exp(-_tmp103 - _tmp107 * fh1 - _tmp108 * fh1 - _tmp109 * fh1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym