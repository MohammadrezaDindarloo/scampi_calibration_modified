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
 * Symbolic function: IK_residual_func_cost2_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 498

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (162)
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
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = _tmp2 * _tmp4;
  const Scalar _tmp17 = _tmp0 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp11 + _tmp12;
  const Scalar _tmp20 = -Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp20 + _tmp22;
  const Scalar _tmp24 = _tmp18 + _tmp23;
  const Scalar _tmp25 = _tmp24 + p_init0;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp28 = _tmp3 - _tmp6;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = _tmp27 + _tmp29;
  const Scalar _tmp31 = _tmp26 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = std::pow(Scalar(-_tmp25 + p_c(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp32 + p_c(1, 0)), Scalar(2));
  const Scalar _tmp34 = Scalar(1.0) / (fh1);
  const Scalar _tmp35 = std::asinh(_tmp34 * fv1);
  const Scalar _tmp36 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp37 = _tmp25 - p_c(0, 0);
  const Scalar _tmp38 = _tmp32 - p_c(1, 0);
  const Scalar _tmp39 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp38, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp37 * _tmp39;
  const Scalar _tmp41 = _tmp15 * fh1;
  const Scalar _tmp42 = Scalar(3.29616) * _tmp19 + _tmp24 * fv1 + _tmp40 * _tmp41;
  const Scalar _tmp43 = -_tmp18;
  const Scalar _tmp44 = _tmp23 + _tmp43;
  const Scalar _tmp45 = Scalar(1.0) * _tmp44;
  const Scalar _tmp46 = _tmp20 - _tmp22;
  const Scalar _tmp47 = _tmp43 + _tmp46;
  const Scalar _tmp48 = -_tmp26;
  const Scalar _tmp49 = _tmp30 + _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp49;
  const Scalar _tmp51 = -_tmp50;
  const Scalar _tmp52 = -_tmp27 + _tmp29;
  const Scalar _tmp53 = _tmp48 + _tmp52;
  const Scalar _tmp54 = _tmp51 + _tmp53;
  const Scalar _tmp55 = _tmp26 + _tmp52;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp51 + _tmp55);
  const Scalar _tmp57 = _tmp18 + _tmp46;
  const Scalar _tmp58 = _tmp45 - _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp54 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp45 - _tmp47 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp54 * _tmp62;
  const Scalar _tmp64 = _tmp49 + p_init1;
  const Scalar _tmp65 = _tmp64 - p_b(1, 0);
  const Scalar _tmp66 = _tmp44 + p_init0;
  const Scalar _tmp67 = _tmp66 - p_b(0, 0);
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp10 - _tmp13;
  const Scalar _tmp71 = _tmp7 + _tmp70;
  const Scalar _tmp72 = _tmp55 + p_init1;
  const Scalar _tmp73 = _tmp72 - p_d(1, 0);
  const Scalar _tmp74 = _tmp57 + p_init0;
  const Scalar _tmp75 = _tmp74 - p_d(0, 0);
  const Scalar _tmp76 = std::pow(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp75, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = -_tmp7;
  const Scalar _tmp79 = _tmp14 + _tmp78;
  const Scalar _tmp80 = _tmp73 * _tmp76;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp69 * _tmp77 - _tmp80);
  const Scalar _tmp82 = _tmp81 * (-_tmp71 * _tmp77 + _tmp77 * _tmp79);
  const Scalar _tmp83 = _tmp69 * _tmp79;
  const Scalar _tmp84 = _tmp71 * _tmp80 - _tmp77 * _tmp83;
  const Scalar _tmp85 = _tmp69 * _tmp81;
  const Scalar _tmp86 = _tmp83 + _tmp84 * _tmp85;
  const Scalar _tmp87 = -_tmp59 * _tmp86 + _tmp69 * _tmp82 - _tmp79;
  const Scalar _tmp88 = _tmp47 + p_init0;
  const Scalar _tmp89 = _tmp88 - p_a(0, 0);
  const Scalar _tmp90 = _tmp53 + p_init1;
  const Scalar _tmp91 = _tmp90 - p_a(1, 0);
  const Scalar _tmp92 = std::pow(Scalar(std::pow(_tmp89, Scalar(2)) + std::pow(_tmp91, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp93 = _tmp89 * _tmp92;
  const Scalar _tmp94 =
      std::sqrt(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp67, Scalar(2))));
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp68 * _tmp94;
  const Scalar _tmp97 = _tmp96 * (_tmp44 * _tmp65 * _tmp95 - _tmp49 * _tmp67 * _tmp95);
  const Scalar _tmp98 = _tmp91 * _tmp92;
  const Scalar _tmp99 = _tmp55 * _tmp77 - _tmp57 * _tmp80 + _tmp77 * _tmp97;
  const Scalar _tmp100 = _tmp69 * _tmp93 - _tmp98;
  const Scalar _tmp101 = _tmp100 * _tmp81;
  const Scalar _tmp102 = -_tmp101 * _tmp99 - _tmp47 * _tmp98 + _tmp53 * _tmp93 + _tmp93 * _tmp97;
  const Scalar _tmp103 = _tmp70 + _tmp78;
  const Scalar _tmp104 = _tmp79 * _tmp93;
  const Scalar _tmp105 = -_tmp101 * _tmp84 + _tmp103 * _tmp98 - _tmp104 * _tmp69;
  const Scalar _tmp106 = -_tmp100 * _tmp82 - _tmp103 * _tmp93 + _tmp104 - _tmp105 * _tmp59;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = _tmp102 * _tmp107;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp110 = _tmp106 * _tmp109;
  const Scalar _tmp111 = _tmp110 * (-_tmp108 * _tmp87 + _tmp85 * _tmp99 - _tmp97);
  const Scalar _tmp112 = _tmp111 + _tmp87;
  const Scalar _tmp113 = _tmp105 * _tmp107;
  const Scalar _tmp114 = _tmp54 * _tmp61;
  const Scalar _tmp115 = _tmp111 * _tmp114 - _tmp112 * _tmp113 + _tmp86;
  const Scalar _tmp116 = Scalar(1.0) * _tmp56;
  const Scalar _tmp117 = _tmp40 * fh1;
  const Scalar _tmp118 = _tmp38 * _tmp39;
  const Scalar _tmp119 = -_tmp118 * _tmp41 - Scalar(3.29616) * _tmp28 - _tmp31 * fv1;
  const Scalar _tmp120 = _tmp60 * _tmp62 + Scalar(1.0);
  const Scalar _tmp121 = _tmp59 * _tmp62;
  const Scalar _tmp122 = Scalar(1.0) * _tmp81;
  const Scalar _tmp123 = _tmp116 * _tmp58 * _tmp81 * _tmp84 - Scalar(1.0) * _tmp82;
  const Scalar _tmp124 = _tmp110 * (-_tmp108 * _tmp123 - _tmp122 * _tmp99);
  const Scalar _tmp125 = _tmp123 + _tmp124;
  const Scalar _tmp126 = -_tmp113 * _tmp125 + _tmp114 * _tmp124 - _tmp122 * _tmp84;
  const Scalar _tmp127 = _tmp118 * fh1;
  const Scalar _tmp128 = Scalar(1.0) * _tmp109;
  const Scalar _tmp129 = -_tmp105 * _tmp128 + _tmp110 * _tmp63;
  const Scalar _tmp130 = _tmp110 * _tmp62;
  const Scalar _tmp131 = fh1 * (_tmp118 * _tmp24 - _tmp31 * _tmp40);
  const Scalar _tmp132 = _tmp45 + _tmp50 * _tmp59;
  const Scalar _tmp133 = _tmp132 * _tmp61;
  const Scalar _tmp134 = 0;
  const Scalar _tmp135 = -_tmp113 * _tmp134 - _tmp133 * _tmp54 + _tmp51;
  const Scalar _tmp136 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp137 = _tmp107 * _tmp134;
  const Scalar _tmp138 = _tmp101 * _tmp77;
  const Scalar _tmp139 = _tmp107 * _tmp93;
  const Scalar _tmp140 = _tmp100 * _tmp107;
  const Scalar _tmp141 = -_tmp125 * _tmp140 + Scalar(1.0);
  const Scalar _tmp142 = _tmp77 * _tmp81;
  const Scalar _tmp143 = -_tmp112 * _tmp140 - _tmp69;
  const Scalar _tmp144 = -_tmp117 * _tmp96 * (_tmp112 * _tmp139 + _tmp142 * _tmp143 + Scalar(1.0)) -
                         _tmp127 * _tmp96 * (_tmp125 * _tmp139 + _tmp141 * _tmp142) -
                         _tmp131 * _tmp96 * (-_tmp128 * _tmp138 + _tmp128 * _tmp93) -
                         _tmp136 * _tmp96 * (-_tmp137 * _tmp138 + _tmp137 * _tmp93);
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = std::asinh(
      _tmp145 * (Scalar(1.0) * _tmp117 * (_tmp111 * _tmp62 - _tmp115 * _tmp116) +
                 Scalar(1.0) * _tmp119 * (-_tmp116 * _tmp120 + _tmp121) +
                 Scalar(1.0) * _tmp127 * (-_tmp116 * _tmp126 + _tmp124 * _tmp62) +
                 Scalar(1.0) * _tmp131 * (-_tmp116 * _tmp129 + _tmp130) +
                 Scalar(1.0) * _tmp136 * (-_tmp116 * _tmp135 - _tmp132 * _tmp62 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp42 * (_tmp56 * _tmp63 - _tmp62)));
  const Scalar _tmp147 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp148 = std::pow(Scalar(-_tmp64 + p_b(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp66 + p_b(0, 0)), Scalar(2));
  const Scalar _tmp149 = std::pow(Scalar(-_tmp72 + p_d(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp74 + p_d(0, 0)), Scalar(2));
  const Scalar _tmp150 = _tmp136 * _tmp137;
  const Scalar _tmp151 = _tmp128 * _tmp131;
  const Scalar _tmp152 = -_tmp101 * _tmp150 - _tmp101 * _tmp151 + _tmp117 * _tmp143 * _tmp81 +
                         _tmp127 * _tmp141 * _tmp81;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = _tmp42 * _tmp62;
  const Scalar _tmp155 =
      std::asinh(_tmp153 * (_tmp115 * _tmp117 * _tmp56 + _tmp119 * _tmp120 * _tmp56 +
                            _tmp126 * _tmp127 * _tmp56 + _tmp129 * _tmp131 * _tmp56 +
                            _tmp135 * _tmp136 * _tmp56 - _tmp154 * _tmp54 * _tmp56));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp157 =
      _tmp107 * _tmp112 * _tmp117 + _tmp107 * _tmp125 * _tmp127 + _tmp150 + _tmp151;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 = std::asinh(_tmp158 * (-_tmp111 * _tmp117 * _tmp61 - _tmp119 * _tmp121 -
                                               _tmp124 * _tmp127 * _tmp61 - _tmp130 * _tmp131 +
                                               _tmp133 * _tmp136 + _tmp154));
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp157;
  const Scalar _tmp161 = std::pow(Scalar(-_tmp88 + p_a(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp90 + p_a(1, 0)), Scalar(2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp36 * (-std::sinh(Scalar(1.0) * _tmp35) -
                std::sinh(Scalar(0.1034955) * _tmp34 * (-std::sqrt(_tmp33) - _tmp35 * _tmp36))) -
      std::sqrt(Scalar(_tmp33 + std::pow(Scalar(-_tmp15 + p_c(2, 0) - p_init2), Scalar(2))));
  _res(1, 0) =
      _tmp147 *
          (-std::sinh(Scalar(1.0) * _tmp146) -
           std::sinh(Scalar(0.1034955) * _tmp145 * (-_tmp146 * _tmp147 - std::sqrt(_tmp148)))) -
      std::sqrt(Scalar(_tmp148 + std::pow(Scalar(-_tmp79 + p_b(2, 0) - p_init2), Scalar(2))));
  _res(2, 0) =
      _tmp156 *
          (-std::sinh(Scalar(1.0) * _tmp155) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-std::sqrt(_tmp149) - _tmp155 * _tmp156))) -
      std::sqrt(Scalar(_tmp149 + std::pow(Scalar(-_tmp71 + p_d(2, 0) - p_init2), Scalar(2))));
  _res(3, 0) =
      _tmp160 *
          (-std::sinh(Scalar(1.0) * _tmp159) -
           std::sinh(Scalar(0.1034955) * _tmp158 * (-_tmp159 * _tmp160 - std::sqrt(_tmp161)))) -
      std::sqrt(Scalar(_tmp161 + std::pow(Scalar(-_tmp103 + p_a(2, 0) - p_init2), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
