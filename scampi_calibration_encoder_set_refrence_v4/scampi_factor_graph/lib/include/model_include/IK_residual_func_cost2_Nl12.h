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
 * Symbolic function: IK_residual_func_cost2_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 497

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                       _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = 2 * _tmp4;
  const Scalar _tmp6 = _tmp3 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp8 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp11 = _tmp1 * _tmp5;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp0 * _tmp12;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp0 * _tmp5;
  const Scalar _tmp18 = _tmp1 * _tmp12;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp2 + _tmp6;
  const Scalar _tmp21 = -Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp24 = _tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp19 + _tmp24;
  const Scalar _tmp26 = _tmp25 + p_init0;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp28 = _tmp11 - _tmp13;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp27 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 = std::pow(Scalar(-_tmp26 + p_c(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp33 + p_c(1, 0)), Scalar(2));
  const Scalar _tmp35 = Scalar(1.0) / (fh1);
  const Scalar _tmp36 = std::asinh(_tmp35 * fv1);
  const Scalar _tmp37 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp38 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp39 = -_tmp27;
  const Scalar _tmp40 = _tmp31 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp41 - p_d(1, 0);
  const Scalar _tmp43 = _tmp21 - _tmp23;
  const Scalar _tmp44 = _tmp19 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init0;
  const Scalar _tmp46 = _tmp45 - p_d(0, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = -_tmp7;
  const Scalar _tmp50 = _tmp10 - _tmp14;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp48 * _tmp51;
  const Scalar _tmp53 = _tmp15 + _tmp49;
  const Scalar _tmp54 = _tmp42 * _tmp47;
  const Scalar _tmp55 = _tmp29 - _tmp30;
  const Scalar _tmp56 = _tmp39 + _tmp55;
  const Scalar _tmp57 = _tmp56 + p_init1;
  const Scalar _tmp58 = _tmp57 - p_a(1, 0);
  const Scalar _tmp59 = -_tmp19;
  const Scalar _tmp60 = _tmp43 + _tmp59;
  const Scalar _tmp61 = _tmp60 + p_init0;
  const Scalar _tmp62 = _tmp61 - p_a(0, 0);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = _tmp58 * _tmp63;
  const Scalar _tmp65 = _tmp27 + _tmp55;
  const Scalar _tmp66 = _tmp65 + p_init1;
  const Scalar _tmp67 = _tmp66 - p_b(1, 0);
  const Scalar _tmp68 = _tmp24 + _tmp59;
  const Scalar _tmp69 = _tmp68 + p_init0;
  const Scalar _tmp70 = _tmp69 - p_b(0, 0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp51 * _tmp72;
  const Scalar _tmp74 = _tmp50 + _tmp7;
  const Scalar _tmp75 = _tmp67 * _tmp71;
  const Scalar _tmp76 = -_tmp64 * _tmp73 + _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp48 * _tmp64 - _tmp54;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp64 * _tmp72 - _tmp75);
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = -_tmp52 * _tmp64 + _tmp53 * _tmp54 - _tmp76 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) * _tmp56;
  const Scalar _tmp82 = -_tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp65 + _tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp60;
  const Scalar _tmp85 = -_tmp68 + _tmp84;
  const Scalar _tmp86 = _tmp83 * _tmp85;
  const Scalar _tmp87 = _tmp78 * (-_tmp72 * _tmp74 + _tmp73);
  const Scalar _tmp88 = -_tmp48 * _tmp53 + _tmp52 - _tmp77 * _tmp87 - _tmp80 * _tmp86;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp81 * _tmp86 + _tmp84;
  const Scalar _tmp91 = 0;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = _tmp72 * _tmp78;
  const Scalar _tmp94 = _tmp77 * _tmp89;
  const Scalar _tmp95 = _tmp91 * _tmp94;
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp62, Scalar(2))));
  const Scalar _tmp97 = _tmp63 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp97 * (-_tmp56 * _tmp62 * _tmp98 + _tmp58 * _tmp60 * _tmp98);
  const Scalar _tmp100 = _tmp65 * _tmp72 - _tmp68 * _tmp75 + _tmp72 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp79 + _tmp40 * _tmp48 - _tmp44 * _tmp54 + _tmp48 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = Scalar(1.0) * _tmp78;
  const Scalar _tmp104 = _tmp102 * _tmp103 * _tmp77;
  const Scalar _tmp105 = Scalar(1.0) * _tmp102;
  const Scalar _tmp106 = _tmp26 - p_c(0, 0);
  const Scalar _tmp107 = _tmp33 - p_c(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp106 * _tmp108;
  const Scalar _tmp111 = fh1 * (_tmp109 * _tmp25 - _tmp110 * _tmp32);
  const Scalar _tmp112 = Scalar(1.0) * _tmp83;
  const Scalar _tmp113 = _tmp112 * _tmp76 * _tmp78 * _tmp85 - Scalar(1.0) * _tmp87;
  const Scalar _tmp114 = _tmp101 * _tmp89;
  const Scalar _tmp115 = _tmp102 * _tmp88;
  const Scalar _tmp116 = _tmp115 * (-_tmp100 * _tmp103 - _tmp113 * _tmp114);
  const Scalar _tmp117 = _tmp113 + _tmp116;
  const Scalar _tmp118 = -_tmp117 * _tmp94 + Scalar(1.0);
  const Scalar _tmp119 = _tmp48 * _tmp89;
  const Scalar _tmp120 = _tmp109 * fh1;
  const Scalar _tmp121 = _tmp64 * _tmp78;
  const Scalar _tmp122 = _tmp121 * _tmp76 + _tmp51 * _tmp64;
  const Scalar _tmp123 = -_tmp122 * _tmp86 - _tmp51 + _tmp64 * _tmp87;
  const Scalar _tmp124 = _tmp115 * (_tmp100 * _tmp121 - _tmp114 * _tmp123 - _tmp99);
  const Scalar _tmp125 = _tmp123 + _tmp124;
  const Scalar _tmp126 = -_tmp125 * _tmp94 - _tmp64;
  const Scalar _tmp127 = _tmp110 * fh1;
  const Scalar _tmp128 = -_tmp111 * _tmp97 * (-_tmp104 * _tmp72 + _tmp105 * _tmp48) -
                         _tmp120 * _tmp97 * (_tmp117 * _tmp119 + _tmp118 * _tmp93) -
                         _tmp127 * _tmp97 * (_tmp119 * _tmp125 + _tmp126 * _tmp93 + Scalar(1.0)) -
                         _tmp38 * _tmp97 * (_tmp48 * _tmp92 - _tmp93 * _tmp95);
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = _tmp16 * fh1;
  const Scalar _tmp131 = _tmp110 * _tmp130 + Scalar(5.1796800000000003) * _tmp20 + _tmp25 * fv1;
  const Scalar _tmp132 = _tmp40 + _tmp82;
  const Scalar _tmp133 = _tmp132 * _tmp86;
  const Scalar _tmp134 = Scalar(1.0) / (-_tmp133 - _tmp44 + _tmp84);
  const Scalar _tmp135 = Scalar(1.0) * _tmp134;
  const Scalar _tmp136 = _tmp132 * _tmp83;
  const Scalar _tmp137 = _tmp80 * _tmp89;
  const Scalar _tmp138 = _tmp134 * _tmp90;
  const Scalar _tmp139 = -_tmp132 * _tmp138 - _tmp137 * _tmp91 + _tmp82;
  const Scalar _tmp140 = -_tmp109 * _tmp130 - Scalar(5.1796800000000003) * _tmp28 - _tmp32 * fv1;
  const Scalar _tmp141 = _tmp133 * _tmp135 + Scalar(1.0);
  const Scalar _tmp142 = _tmp135 * _tmp86;
  const Scalar _tmp143 = _tmp115 * _tmp135;
  const Scalar _tmp144 = -_tmp105 * _tmp80 + _tmp132 * _tmp143;
  const Scalar _tmp145 = _tmp132 * _tmp134;
  const Scalar _tmp146 = _tmp122 + _tmp124 * _tmp145 - _tmp125 * _tmp137;
  const Scalar _tmp147 = -_tmp103 * _tmp76 + _tmp116 * _tmp145 - _tmp117 * _tmp137;
  const Scalar _tmp148 = std::asinh(
      _tmp129 * (Scalar(1.0) * _tmp111 * (-_tmp112 * _tmp144 + _tmp143) +
                 Scalar(1.0) * _tmp120 * (-_tmp112 * _tmp147 + _tmp116 * _tmp135) +
                 Scalar(1.0) * _tmp127 * (-_tmp112 * _tmp146 + _tmp124 * _tmp135) +
                 Scalar(1.0) * _tmp131 * (_tmp135 * _tmp136 - _tmp135) +
                 Scalar(1.0) * _tmp140 * (-_tmp112 * _tmp141 + _tmp142) +
                 Scalar(1.0) * _tmp38 * (-_tmp112 * _tmp139 - _tmp135 * _tmp90 + Scalar(1.0))));
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp150 = std::pow(Scalar(-_tmp57 + p_a(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp61 + p_a(0, 0)), Scalar(2));
  const Scalar _tmp151 = std::pow(Scalar(-_tmp66 + p_b(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp69 + p_b(0, 0)), Scalar(2));
  const Scalar _tmp152 = -_tmp104 * _tmp111 + _tmp118 * _tmp120 * _tmp78 +
                         _tmp126 * _tmp127 * _tmp78 - _tmp38 * _tmp78 * _tmp95;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = _tmp131 * _tmp135;
  const Scalar _tmp155 =
      std::asinh(_tmp153 * (_tmp111 * _tmp144 * _tmp83 + _tmp120 * _tmp147 * _tmp83 +
                            _tmp127 * _tmp146 * _tmp83 - _tmp136 * _tmp154 +
                            _tmp139 * _tmp38 * _tmp83 + _tmp140 * _tmp141 * _tmp83));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp157 = std::pow(Scalar(-_tmp41 + p_d(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp45 + p_d(0, 0)), Scalar(2));
  const Scalar _tmp158 =
      _tmp105 * _tmp111 + _tmp117 * _tmp120 * _tmp89 + _tmp125 * _tmp127 * _tmp89 + _tmp38 * _tmp92;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = std::asinh(_tmp159 * (-_tmp111 * _tmp143 - _tmp116 * _tmp120 * _tmp134 -
                                               _tmp124 * _tmp127 * _tmp134 + _tmp138 * _tmp38 -
                                               _tmp140 * _tmp142 + _tmp154));
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp37 * (-std::sinh(Scalar(1.0) * _tmp36) -
                std::sinh(Scalar(0.1034955) * _tmp35 * (-std::sqrt(_tmp34) - _tmp36 * _tmp37))) -
      std::sqrt(Scalar(_tmp34 + std::pow(Scalar(-_tmp16 + p_c(2, 0) - p_init2), Scalar(2))));
  _res(1, 0) =
      _tmp149 *
          (-std::sinh(Scalar(1.0) * _tmp148) -
           std::sinh(Scalar(0.1034955) * _tmp129 * (-_tmp148 * _tmp149 - std::sqrt(_tmp150)))) -
      std::sqrt(Scalar(_tmp150 + std::pow(Scalar(-_tmp51 + p_a(2, 0) - p_init2), Scalar(2))));
  _res(2, 0) =
      _tmp156 *
          (-std::sinh(Scalar(1.0) * _tmp155) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-std::sqrt(_tmp151) - _tmp155 * _tmp156))) -
      std::sqrt(Scalar(_tmp151 + std::pow(Scalar(-_tmp74 + p_b(2, 0) - p_init2), Scalar(2))));
  _res(3, 0) =
      _tmp161 *
          (-std::sinh(Scalar(1.0) * _tmp160) -
           std::sinh(Scalar(0.1034955) * _tmp159 * (-std::sqrt(_tmp157) - _tmp160 * _tmp161))) -
      std::sqrt(Scalar(_tmp157 + std::pow(Scalar(-_tmp53 + p_d(2, 0) - p_init2), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
