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
 * Symbolic function: IK_residual_func_cost2_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl22(
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
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = _tmp0 * _tmp5;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp8;
  const Scalar _tmp17 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = _tmp3 + _tmp6;
  const Scalar _tmp21 = -Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + p_init0;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = _tmp12 - _tmp13;
  const Scalar _tmp31 = -Scalar(0.010999999999999999) * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp33 = _tmp31 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _tmp34 + p_init1;
  const Scalar _tmp36 = std::pow(Scalar(-_tmp27 + p_d(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp35 + p_d(1, 0)), Scalar(2));
  const Scalar _tmp37 = Scalar(1.0) / (fh1);
  const Scalar _tmp38 = std::asinh(_tmp37 * fv1);
  const Scalar _tmp39 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp40 = _tmp15 + _tmp7;
  const Scalar _tmp41 = _tmp18 + _tmp25;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = _tmp28 + _tmp33;
  const Scalar _tmp44 = _tmp43 + p_init1;
  const Scalar _tmp45 = std::pow(Scalar(-_tmp42 + p_c(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp44 + p_c(1, 0)), Scalar(2));
  const Scalar _tmp46 = _tmp21 - _tmp24;
  const Scalar _tmp47 = _tmp18 + _tmp46;
  const Scalar _tmp48 = Scalar(1.0) * _tmp41;
  const Scalar _tmp49 = Scalar(1.0) * _tmp43;
  const Scalar _tmp50 = -_tmp49;
  const Scalar _tmp51 = _tmp31 - _tmp32;
  const Scalar _tmp52 = _tmp28 + _tmp51;
  const Scalar _tmp53 = _tmp50 + _tmp52;
  const Scalar _tmp54 = _tmp29 + _tmp51;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp50 + _tmp54);
  const Scalar _tmp56 = _tmp19 + _tmp46;
  const Scalar _tmp57 = _tmp55 * (_tmp48 - _tmp56);
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp47 + _tmp48 - _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = _tmp52 + p_init1;
  const Scalar _tmp62 = _tmp61 - p_b(1, 0);
  const Scalar _tmp63 = _tmp47 + p_init0;
  const Scalar _tmp64 = _tmp63 - p_b(0, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp11 - _tmp14;
  const Scalar _tmp68 = _tmp67 + _tmp7;
  const Scalar _tmp69 = _tmp67 + _tmp8;
  const Scalar _tmp70 = _tmp56 + p_init0;
  const Scalar _tmp71 = _tmp70 - p_a(0, 0);
  const Scalar _tmp72 = _tmp54 + p_init1;
  const Scalar _tmp73 = _tmp72 - p_a(1, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp71 * _tmp74;
  const Scalar _tmp76 = _tmp40 * _tmp75;
  const Scalar _tmp77 = -_tmp69 * _tmp75 + _tmp76;
  const Scalar _tmp78 = _tmp44 - p_c(1, 0);
  const Scalar _tmp79 = _tmp42 - p_c(0, 0);
  const Scalar _tmp80 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = _tmp62 * _tmp65;
  const Scalar _tmp83 = _tmp66 * _tmp81 - _tmp82;
  const Scalar _tmp84 = _tmp73 * _tmp74;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp75 * _tmp81 - _tmp84);
  const Scalar _tmp86 = _tmp83 * _tmp85;
  const Scalar _tmp87 = _tmp69 * _tmp84 - _tmp76 * _tmp81;
  const Scalar _tmp88 = _tmp40 * _tmp81;
  const Scalar _tmp89 = -_tmp66 * _tmp88 + _tmp68 * _tmp82 - _tmp86 * _tmp87;
  const Scalar _tmp90 = _tmp40 * _tmp66 - _tmp57 * _tmp89 - _tmp66 * _tmp68 - _tmp77 * _tmp86;
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp79, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp80 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (_tmp41 * _tmp78 * _tmp92 - _tmp43 * _tmp79 * _tmp92);
  const Scalar _tmp95 = _tmp54 * _tmp75 - _tmp56 * _tmp84 + _tmp75 * _tmp94;
  const Scalar _tmp96 = -_tmp47 * _tmp82 + _tmp52 * _tmp66 + _tmp66 * _tmp94 - _tmp86 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp90 * _tmp97;
  const Scalar _tmp99 = _tmp60 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp97;
  const Scalar _tmp101 = -_tmp100 * _tmp89 + _tmp53 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) * _tmp55;
  const Scalar _tmp103 = _tmp35 - p_d(1, 0);
  const Scalar _tmp104 = _tmp27 - p_d(0, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = _tmp103 * _tmp105;
  const Scalar _tmp108 = fh1 * (-_tmp106 * _tmp34 + _tmp107 * _tmp26);
  const Scalar _tmp109 = _tmp16 * fh1;
  const Scalar _tmp110 = _tmp106 * _tmp109 + Scalar(3.29616) * _tmp20 + _tmp26 * fv1;
  const Scalar _tmp111 = _tmp53 * _tmp55;
  const Scalar _tmp112 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp113 = _tmp48 + _tmp49 * _tmp57;
  const Scalar _tmp114 = 0;
  const Scalar _tmp115 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp116 = _tmp115 * _tmp89;
  const Scalar _tmp117 = _tmp113 * _tmp59;
  const Scalar _tmp118 = _tmp55 * (-_tmp114 * _tmp116 - _tmp117 * _tmp53 + _tmp50);
  const Scalar _tmp119 = Scalar(1.0) * _tmp85;
  const Scalar _tmp120 = _tmp119 * _tmp87;
  const Scalar _tmp121 = -_tmp119 * _tmp77 + _tmp120 * _tmp57;
  const Scalar _tmp122 = _tmp115 * _tmp96;
  const Scalar _tmp123 = _tmp98 * (-_tmp119 * _tmp95 - _tmp121 * _tmp122);
  const Scalar _tmp124 = _tmp53 * _tmp59;
  const Scalar _tmp125 = _tmp121 + _tmp123;
  const Scalar _tmp126 = -_tmp116 * _tmp125 - _tmp120 + _tmp123 * _tmp124;
  const Scalar _tmp127 = _tmp107 * fh1;
  const Scalar _tmp128 = _tmp57 * _tmp60;
  const Scalar _tmp129 = _tmp58 * _tmp60 + Scalar(1.0);
  const Scalar _tmp130 = -_tmp107 * _tmp109 - Scalar(3.29616) * _tmp30 - _tmp34 * fv1;
  const Scalar _tmp131 = _tmp81 * _tmp85;
  const Scalar _tmp132 = _tmp131 * _tmp87 + _tmp88;
  const Scalar _tmp133 = _tmp131 * _tmp77 - _tmp132 * _tmp57 - _tmp40;
  const Scalar _tmp134 = _tmp98 * (-_tmp122 * _tmp133 + _tmp131 * _tmp95 - _tmp94);
  const Scalar _tmp135 = _tmp133 + _tmp134;
  const Scalar _tmp136 = -_tmp116 * _tmp135 + _tmp124 * _tmp134 + _tmp132;
  const Scalar _tmp137 = _tmp106 * fh1;
  const Scalar _tmp138 = _tmp114 * _tmp115;
  const Scalar _tmp139 = _tmp75 * _tmp85;
  const Scalar _tmp140 = _tmp115 * _tmp83;
  const Scalar _tmp141 = _tmp114 * _tmp140;
  const Scalar _tmp142 = _tmp115 * _tmp66;
  const Scalar _tmp143 = -_tmp135 * _tmp140 - _tmp81;
  const Scalar _tmp144 = _tmp119 * _tmp83 * _tmp97;
  const Scalar _tmp145 = -_tmp125 * _tmp140 + Scalar(1.0);
  const Scalar _tmp146 = -_tmp108 * _tmp93 * (_tmp100 * _tmp66 - _tmp144 * _tmp75) -
                         _tmp112 * _tmp93 * (_tmp138 * _tmp66 - _tmp139 * _tmp141) -
                         _tmp127 * _tmp93 * (_tmp125 * _tmp142 + _tmp139 * _tmp145) -
                         _tmp137 * _tmp93 * (_tmp135 * _tmp142 + _tmp139 * _tmp143 + Scalar(1.0));
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = std::asinh(
      _tmp147 * (Scalar(1.0) * _tmp108 * (-_tmp101 * _tmp102 + _tmp99) +
                 Scalar(1.0) * _tmp110 * (_tmp111 * _tmp60 - _tmp60) +
                 Scalar(1.0) * _tmp112 * (-_tmp113 * _tmp60 - Scalar(1.0) * _tmp118 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp127 * (-_tmp102 * _tmp126 + _tmp123 * _tmp60) +
                 Scalar(1.0) * _tmp130 * (-_tmp102 * _tmp129 + _tmp128) +
                 Scalar(1.0) * _tmp137 * (-_tmp102 * _tmp136 + _tmp134 * _tmp60)));
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp150 = _tmp110 * _tmp60;
  const Scalar _tmp151 = -_tmp108 * _tmp144 - _tmp112 * _tmp141 * _tmp85 +
                         _tmp127 * _tmp145 * _tmp85 + _tmp137 * _tmp143 * _tmp85;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 =
      std::asinh(_tmp152 * (_tmp101 * _tmp108 * _tmp55 - _tmp111 * _tmp150 + _tmp112 * _tmp118 +
                            _tmp126 * _tmp127 * _tmp55 + _tmp129 * _tmp130 * _tmp55 +
                            _tmp136 * _tmp137 * _tmp55));
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp151;
  const Scalar _tmp155 = std::pow(Scalar(-_tmp70 + p_a(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp72 + p_a(1, 0)), Scalar(2));
  const Scalar _tmp156 = std::pow(Scalar(-_tmp61 + p_b(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp63 + p_b(0, 0)), Scalar(2));
  const Scalar _tmp157 = _tmp115 * fh1;
  const Scalar _tmp158 = _tmp100 * _tmp108 + _tmp106 * _tmp135 * _tmp157 +
                         _tmp107 * _tmp125 * _tmp157 + _tmp112 * _tmp138;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 =
      std::asinh(_tmp159 * (-_tmp108 * _tmp99 + _tmp112 * _tmp117 - _tmp123 * _tmp127 * _tmp59 -
                            _tmp128 * _tmp130 - _tmp134 * _tmp137 * _tmp59 + _tmp150));
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp39 * (-std::sinh(Scalar(1.0) * _tmp38) -
                std::sinh(Scalar(0.1034955) * _tmp37 * (-std::sqrt(_tmp36) - _tmp38 * _tmp39))) -
      std::sqrt(Scalar(_tmp36 + std::pow(Scalar(-_tmp16 + p_d(2, 0) - p_init2), Scalar(2))));
  _res(1, 0) =
      _tmp149 *
          (-std::sinh(Scalar(1.0) * _tmp148) -
           std::sinh(Scalar(0.1034955) * _tmp147 * (-_tmp148 * _tmp149 - std::sqrt(_tmp45)))) -
      std::sqrt(Scalar(_tmp45 + std::pow(Scalar(-_tmp40 + p_c(2, 0) - p_init2), Scalar(2))));
  _res(2, 0) =
      _tmp154 *
          (-std::sinh(Scalar(1.0) * _tmp153) -
           std::sinh(Scalar(0.1034955) * _tmp152 * (-_tmp153 * _tmp154 - std::sqrt(_tmp155)))) -
      std::sqrt(Scalar(_tmp155 + std::pow(Scalar(-_tmp69 + p_a(2, 0) - p_init2), Scalar(2))));
  _res(3, 0) =
      _tmp161 *
          (-std::sinh(Scalar(1.0) * _tmp160) -
           std::sinh(Scalar(0.1034955) * _tmp159 * (-std::sqrt(_tmp156) - _tmp160 * _tmp161))) -
      std::sqrt(Scalar(_tmp156 + std::pow(Scalar(-_tmp68 + p_b(2, 0) - p_init2), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
