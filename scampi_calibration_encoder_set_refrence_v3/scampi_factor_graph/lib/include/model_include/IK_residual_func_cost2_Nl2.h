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
 * Symbolic function: IK_residual_func_cost2_Nl2
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 492

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (156)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp8 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp2 + _tmp5;
  const Scalar _tmp21 = -Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = _tmp0 * _tmp11;
  const Scalar _tmp23 = _tmp1 * _tmp4;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp21 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + p_init0;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp31 = _tmp12 - _tmp13;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = -_tmp30 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _tmp34 + p_init1;
  const Scalar _tmp36 = std::pow(Scalar(-_tmp27 + p_a(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp35 + p_a(1, 0)), Scalar(2));
  const Scalar _tmp37 = Scalar(1.0) / (fh1);
  const Scalar _tmp38 = std::asinh(_tmp37 * fv1);
  const Scalar _tmp39 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp40 = _tmp10 + _tmp14;
  const Scalar _tmp41 = _tmp40 + _tmp6;
  const Scalar _tmp42 = _tmp21 + _tmp24;
  const Scalar _tmp43 = _tmp18 + _tmp42;
  const Scalar _tmp44 = _tmp43 + p_init0;
  const Scalar _tmp45 = _tmp30 + _tmp32;
  const Scalar _tmp46 = _tmp28 + _tmp45;
  const Scalar _tmp47 = _tmp46 + p_init1;
  const Scalar _tmp48 = std::pow(Scalar(-_tmp44 + p_c(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp47 + p_c(1, 0)), Scalar(2));
  const Scalar _tmp49 = _tmp27 - p_a(0, 0);
  const Scalar _tmp50 = _tmp35 - p_a(1, 0);
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = _tmp16 * fh1;
  const Scalar _tmp54 = -Scalar(3.29616) * _tmp31 - _tmp34 * fv1 - _tmp52 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) * _tmp46;
  const Scalar _tmp56 = -_tmp55;
  const Scalar _tmp57 = _tmp28 + _tmp33;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp56 + _tmp57);
  const Scalar _tmp59 = _tmp19 + _tmp42;
  const Scalar _tmp60 = _tmp29 + _tmp45;
  const Scalar _tmp61 = _tmp56 + _tmp60;
  const Scalar _tmp62 = _tmp18 + _tmp25;
  const Scalar _tmp63 = Scalar(1.0) * _tmp43;
  const Scalar _tmp64 = _tmp58 * (-_tmp62 + _tmp63);
  const Scalar _tmp65 = _tmp61 * _tmp64;
  const Scalar _tmp66 = Scalar(1.0) / (-_tmp59 + _tmp63 - _tmp65);
  const Scalar _tmp67 = Scalar(1.0) * _tmp66;
  const Scalar _tmp68 = _tmp58 * (_tmp65 * _tmp67 + Scalar(1.0));
  const Scalar _tmp69 = _tmp64 * _tmp67;
  const Scalar _tmp70 = _tmp57 + p_init1;
  const Scalar _tmp71 = _tmp70 - p_b(1, 0);
  const Scalar _tmp72 = _tmp62 + p_init0;
  const Scalar _tmp73 = _tmp72 - p_b(0, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp73 * _tmp74;
  const Scalar _tmp76 = _tmp71 * _tmp74;
  const Scalar _tmp77 = _tmp44 - p_c(0, 0);
  const Scalar _tmp78 = _tmp47 - p_c(1, 0);
  const Scalar _tmp79 =
      std::sqrt(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp78, Scalar(2))));
  const Scalar _tmp80 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp81 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = _tmp82 * (_tmp43 * _tmp78 * _tmp80 - _tmp46 * _tmp77 * _tmp80);
  const Scalar _tmp84 = _tmp57 * _tmp75 - _tmp62 * _tmp76 + _tmp75 * _tmp83;
  const Scalar _tmp85 = _tmp78 * _tmp81;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp75 * _tmp85 - _tmp76);
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp15 + _tmp6;
  const Scalar _tmp89 = _tmp41 * _tmp85;
  const Scalar _tmp90 = -_tmp75 * _tmp89 + _tmp76 * _tmp88;
  const Scalar _tmp91 = _tmp87 * _tmp90 + _tmp89;
  const Scalar _tmp92 = _tmp41 * _tmp75 - _tmp75 * _tmp88;
  const Scalar _tmp93 = -_tmp41 - _tmp64 * _tmp91 + _tmp87 * _tmp92;
  const Scalar _tmp94 = _tmp60 + p_init1;
  const Scalar _tmp95 = _tmp94 - p_d(1, 0);
  const Scalar _tmp96 = _tmp59 + p_init0;
  const Scalar _tmp97 = _tmp96 - p_d(0, 0);
  const Scalar _tmp98 = std::pow(Scalar(std::pow(_tmp95, Scalar(2)) + std::pow(_tmp97, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp99 = _tmp97 * _tmp98;
  const Scalar _tmp100 = _tmp95 * _tmp98;
  const Scalar _tmp101 = -_tmp100 + _tmp85 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp86;
  const Scalar _tmp103 = _tmp40 + _tmp7;
  const Scalar _tmp104 = _tmp100 * _tmp103 - _tmp102 * _tmp90 - _tmp89 * _tmp99;
  const Scalar _tmp105 = -_tmp102 * _tmp92 - _tmp103 * _tmp99 - _tmp104 * _tmp64 + _tmp41 * _tmp99;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = -_tmp100 * _tmp59 - _tmp102 * _tmp84 + _tmp60 * _tmp99 + _tmp83 * _tmp99;
  const Scalar _tmp108 = _tmp106 * _tmp107;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp110 = _tmp105 * _tmp109;
  const Scalar _tmp111 = _tmp110 * (-_tmp108 * _tmp93 - _tmp83 + _tmp84 * _tmp87);
  const Scalar _tmp112 = _tmp61 * _tmp66;
  const Scalar _tmp113 = _tmp106 * (_tmp111 + _tmp93);
  const Scalar _tmp114 = -_tmp104 * _tmp113 + _tmp111 * _tmp112 + _tmp91;
  const Scalar _tmp115 = Scalar(1.0) * _tmp58;
  const Scalar _tmp116 = _tmp49 * _tmp51;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp119 = _tmp55 * _tmp64 + _tmp63;
  const Scalar _tmp120 = _tmp119 * _tmp66;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = -_tmp104 * _tmp121 - _tmp120 * _tmp61 + _tmp56;
  const Scalar _tmp123 = _tmp116 * _tmp53 + Scalar(3.29616) * _tmp20 + _tmp26 * fv1;
  const Scalar _tmp124 = _tmp58 * _tmp61;
  const Scalar _tmp125 = Scalar(1.0) * _tmp86;
  const Scalar _tmp126 = _tmp125 * _tmp90;
  const Scalar _tmp127 = -_tmp125 * _tmp92 + _tmp126 * _tmp64;
  const Scalar _tmp128 = _tmp110 * (-_tmp108 * _tmp127 - _tmp125 * _tmp84);
  const Scalar _tmp129 = _tmp106 * (_tmp127 + _tmp128);
  const Scalar _tmp130 = -_tmp104 * _tmp129 + _tmp112 * _tmp128 - _tmp126;
  const Scalar _tmp131 = _tmp52 * fh1;
  const Scalar _tmp132 = _tmp110 * _tmp67;
  const Scalar _tmp133 = Scalar(1.0) * _tmp109;
  const Scalar _tmp134 = -_tmp104 * _tmp133 + _tmp132 * _tmp61;
  const Scalar _tmp135 = fh1 * (-_tmp116 * _tmp34 + _tmp26 * _tmp52);
  const Scalar _tmp136 = -_tmp101 * _tmp129 + Scalar(1.0);
  const Scalar _tmp137 = _tmp75 * _tmp86;
  const Scalar _tmp138 = -_tmp101 * _tmp113 - _tmp85;
  const Scalar _tmp139 = _tmp101 * _tmp109 * _tmp125;
  const Scalar _tmp140 = -_tmp117 * _tmp82 * (_tmp113 * _tmp99 + _tmp137 * _tmp138 + Scalar(1.0)) -
                         _tmp118 * _tmp82 * (-_tmp102 * _tmp121 * _tmp75 + _tmp121 * _tmp99) -
                         _tmp131 * _tmp82 * (_tmp129 * _tmp99 + _tmp136 * _tmp137) -
                         _tmp135 * _tmp82 * (_tmp133 * _tmp99 - _tmp139 * _tmp75);
  const Scalar _tmp141 = Scalar(1.0) / (_tmp140);
  const Scalar _tmp142 = std::asinh(
      _tmp141 * (Scalar(1.0) * _tmp117 * (_tmp111 * _tmp67 - _tmp114 * _tmp115) +
                 Scalar(1.0) * _tmp118 * (-_tmp115 * _tmp122 - _tmp119 * _tmp67 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp123 * (_tmp124 * _tmp67 - _tmp67) +
                 Scalar(1.0) * _tmp131 * (-_tmp115 * _tmp130 + _tmp128 * _tmp67) +
                 Scalar(1.0) * _tmp135 * (-_tmp115 * _tmp134 + _tmp132) +
                 Scalar(1.0) * _tmp54 * (-Scalar(1.0) * _tmp68 + _tmp69)));
  const Scalar _tmp143 = Scalar(9.6622558468725703) * _tmp140;
  const Scalar _tmp144 = _tmp118 * _tmp121;
  const Scalar _tmp145 = -_tmp102 * _tmp144 + _tmp117 * _tmp138 * _tmp86 +
                         _tmp131 * _tmp136 * _tmp86 - _tmp135 * _tmp139;
  const Scalar _tmp146 = Scalar(1.0) / (_tmp145);
  const Scalar _tmp147 = _tmp123 * _tmp67;
  const Scalar _tmp148 = std::asinh(
      _tmp146 * (_tmp114 * _tmp117 * _tmp58 + _tmp118 * _tmp122 * _tmp58 - _tmp124 * _tmp147 +
                 _tmp130 * _tmp131 * _tmp58 + _tmp134 * _tmp135 * _tmp58 + _tmp54 * _tmp68));
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp145;
  const Scalar _tmp150 = std::pow(Scalar(-_tmp70 + p_b(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp72 + p_b(0, 0)), Scalar(2));
  const Scalar _tmp151 = std::pow(Scalar(-_tmp94 + p_d(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp96 + p_d(0, 0)), Scalar(2));
  const Scalar _tmp152 = _tmp113 * _tmp117 + _tmp129 * _tmp131 + _tmp133 * _tmp135 + _tmp144;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp153 * (-_tmp111 * _tmp117 * _tmp66 + _tmp118 * _tmp120 -
                                               _tmp128 * _tmp131 * _tmp66 - _tmp132 * _tmp135 +
                                               _tmp147 - _tmp54 * _tmp69));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp39 * (-std::sinh(Scalar(1.0) * _tmp38) -
                std::sinh(Scalar(0.1034955) * _tmp37 * (-std::sqrt(_tmp36) - _tmp38 * _tmp39))) -
      std::sqrt(Scalar(_tmp36 + std::pow(Scalar(-_tmp16 + p_a(2, 0) - p_init2), Scalar(2))));
  _res(1, 0) =
      _tmp143 *
          (-std::sinh(Scalar(1.0) * _tmp142) -
           std::sinh(Scalar(0.1034955) * _tmp141 * (-_tmp142 * _tmp143 - std::sqrt(_tmp48)))) -
      std::sqrt(Scalar(_tmp48 + std::pow(Scalar(-_tmp41 + p_c(2, 0) - p_init2), Scalar(2))));
  _res(2, 0) =
      _tmp149 *
          (-std::sinh(Scalar(1.0) * _tmp148) -
           std::sinh(Scalar(0.1034955) * _tmp146 * (-_tmp148 * _tmp149 - std::sqrt(_tmp150)))) -
      std::sqrt(Scalar(_tmp150 + std::pow(Scalar(-_tmp88 + p_b(2, 0) - p_init2), Scalar(2))));
  _res(3, 0) =
      _tmp155 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-std::sqrt(_tmp151) - _tmp154 * _tmp155))) -
      std::sqrt(Scalar(_tmp151 + std::pow(Scalar(-_tmp103 + p_d(2, 0) - p_init2), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
