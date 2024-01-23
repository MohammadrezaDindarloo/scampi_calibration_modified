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
 * Symbolic function: IK_residual_func_cost2_Nl10
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 499

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (161)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp5 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp12 = _tmp2 * _tmp4;
  const Scalar _tmp13 = _tmp0 * _tmp5;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp8;
  const Scalar _tmp17 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp18 = _tmp1 * _tmp5;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp12 + _tmp13;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp22 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _tmp26 + p_init0;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp30 = _tmp3 - _tmp6;
  const Scalar _tmp31 = -Scalar(0.010999999999999999) * _tmp30;
  const Scalar _tmp32 = -_tmp29 + _tmp31;
  const Scalar _tmp33 = _tmp28 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = std::pow(Scalar(-_tmp27 + p_b(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp34 + p_b(1, 0)), Scalar(2));
  const Scalar _tmp36 = Scalar(1.0) / (fh1);
  const Scalar _tmp37 = std::asinh(_tmp36 * fv1);
  const Scalar _tmp38 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp39 = _tmp11 - _tmp14;
  const Scalar _tmp40 = _tmp39 + _tmp7;
  const Scalar _tmp41 = -_tmp22 + _tmp24;
  const Scalar _tmp42 = _tmp19 + _tmp41;
  const Scalar _tmp43 = _tmp42 + p_init0;
  const Scalar _tmp44 = -_tmp28;
  const Scalar _tmp45 = _tmp29 + _tmp31;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + p_init1;
  const Scalar _tmp48 = std::pow(Scalar(-_tmp43 + p_d(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp47 + p_d(1, 0)), Scalar(2));
  const Scalar _tmp49 = _tmp47 - p_d(1, 0);
  const Scalar _tmp50 = _tmp43 - p_d(0, 0);
  const Scalar _tmp51 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp50, Scalar(2))));
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp51 * _tmp53;
  const Scalar _tmp56 = _tmp55 * (_tmp42 * _tmp49 * _tmp54 - _tmp46 * _tmp50 * _tmp54);
  const Scalar _tmp57 = _tmp20 + _tmp41;
  const Scalar _tmp58 = _tmp57 + p_init0;
  const Scalar _tmp59 = _tmp58 - p_a(0, 0);
  const Scalar _tmp60 = _tmp32 + _tmp44;
  const Scalar _tmp61 = _tmp60 + p_init1;
  const Scalar _tmp62 = _tmp61 - p_a(1, 0);
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp59 * _tmp63;
  const Scalar _tmp65 = _tmp62 * _tmp63;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp52 * _tmp64 - _tmp65);
  const Scalar _tmp67 = _tmp66 * (_tmp56 * _tmp64 - _tmp57 * _tmp65 + _tmp60 * _tmp64);
  const Scalar _tmp68 = _tmp39 + _tmp8;
  const Scalar _tmp69 = _tmp40 * _tmp64 - _tmp64 * _tmp68;
  const Scalar _tmp70 = _tmp52 * _tmp66;
  const Scalar _tmp71 = _tmp40 * _tmp52;
  const Scalar _tmp72 = -_tmp64 * _tmp71 + _tmp65 * _tmp68;
  const Scalar _tmp73 = _tmp70 * _tmp72 + _tmp71;
  const Scalar _tmp74 = Scalar(1.0) * _tmp46;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp60 + _tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp42;
  const Scalar _tmp78 = -_tmp57 + _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = -_tmp40 + _tmp69 * _tmp70 - _tmp73 * _tmp79;
  const Scalar _tmp81 = _tmp15 + _tmp7;
  const Scalar _tmp82 = _tmp19 + _tmp25;
  const Scalar _tmp83 = _tmp82 + p_init0;
  const Scalar _tmp84 = _tmp83 - p_c(0, 0);
  const Scalar _tmp85 = _tmp28 + _tmp45;
  const Scalar _tmp86 = _tmp85 + p_init1;
  const Scalar _tmp87 = _tmp86 - p_c(1, 0);
  const Scalar _tmp88 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp87, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp87 * _tmp88;
  const Scalar _tmp90 = _tmp84 * _tmp88;
  const Scalar _tmp91 = _tmp40 * _tmp90;
  const Scalar _tmp92 = _tmp52 * _tmp90 - _tmp89;
  const Scalar _tmp93 = _tmp66 * _tmp92;
  const Scalar _tmp94 = -_tmp52 * _tmp91 - _tmp72 * _tmp93 + _tmp81 * _tmp89;
  const Scalar _tmp95 = -_tmp69 * _tmp93 - _tmp79 * _tmp94 - _tmp81 * _tmp90 + _tmp91;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp56 * _tmp90 - _tmp67 * _tmp92 - _tmp82 * _tmp89 + _tmp85 * _tmp90;
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp100 = _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp100 * (_tmp52 * _tmp67 - _tmp56 - _tmp80 * _tmp98);
  const Scalar _tmp102 = _tmp101 + _tmp80;
  const Scalar _tmp103 = _tmp92 * _tmp96;
  const Scalar _tmp104 = -_tmp102 * _tmp103 - _tmp52;
  const Scalar _tmp105 = _tmp64 * _tmp66;
  const Scalar _tmp106 = _tmp90 * _tmp96;
  const Scalar _tmp107 = _tmp34 - p_b(1, 0);
  const Scalar _tmp108 = _tmp27 - p_b(0, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = Scalar(1.0) * _tmp66;
  const Scalar _tmp113 = Scalar(1.0) * _tmp76;
  const Scalar _tmp114 = -_tmp112 * _tmp69 + _tmp113 * _tmp66 * _tmp72 * _tmp78;
  const Scalar _tmp115 = _tmp100 * (-_tmp114 * _tmp98 - Scalar(1.0) * _tmp67);
  const Scalar _tmp116 = _tmp114 + _tmp115;
  const Scalar _tmp117 = -_tmp103 * _tmp116 + Scalar(1.0);
  const Scalar _tmp118 = _tmp107 * _tmp109;
  const Scalar _tmp119 = _tmp118 * fh1;
  const Scalar _tmp120 = Scalar(1.0) * _tmp99;
  const Scalar _tmp121 = _tmp112 * _tmp92 * _tmp99;
  const Scalar _tmp122 = fh1 * (-_tmp110 * _tmp33 + _tmp118 * _tmp26);
  const Scalar _tmp123 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp124 = _tmp74 * _tmp79 + _tmp77;
  const Scalar _tmp125 = 0;
  const Scalar _tmp126 = _tmp125 * _tmp96;
  const Scalar _tmp127 = -_tmp111 * _tmp55 * (_tmp102 * _tmp106 + _tmp104 * _tmp105 + Scalar(1.0)) -
                         _tmp119 * _tmp55 * (_tmp105 * _tmp117 + _tmp106 * _tmp116) -
                         _tmp122 * _tmp55 * (_tmp120 * _tmp90 - _tmp121 * _tmp64) -
                         _tmp123 * _tmp55 * (-_tmp126 * _tmp64 * _tmp93 + _tmp126 * _tmp90);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp75 + _tmp85;
  const Scalar _tmp130 = _tmp129 * _tmp79;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 + _tmp77 - _tmp82);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp94 * _tmp96;
  const Scalar _tmp134 = _tmp124 * _tmp131;
  const Scalar _tmp135 = -_tmp125 * _tmp133 - _tmp129 * _tmp134 + _tmp75;
  const Scalar _tmp136 = _tmp100 * _tmp132;
  const Scalar _tmp137 = -_tmp120 * _tmp94 + _tmp129 * _tmp136;
  const Scalar _tmp138 = _tmp16 * fh1;
  const Scalar _tmp139 = _tmp110 * _tmp138 + Scalar(5.1796800000000003) * _tmp23 + _tmp26 * fv1;
  const Scalar _tmp140 = _tmp129 * _tmp76;
  const Scalar _tmp141 = _tmp129 * _tmp131;
  const Scalar _tmp142 = -_tmp112 * _tmp72 + _tmp115 * _tmp141 - _tmp116 * _tmp133;
  const Scalar _tmp143 = _tmp132 * _tmp79;
  const Scalar _tmp144 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp145 = -_tmp118 * _tmp138 - Scalar(5.1796800000000003) * _tmp30 - _tmp33 * fv1;
  const Scalar _tmp146 = _tmp101 * _tmp141 - _tmp102 * _tmp133 + _tmp73;
  const Scalar _tmp147 = std::asinh(
      _tmp128 * (Scalar(1.0) * _tmp111 * (_tmp101 * _tmp132 - _tmp113 * _tmp146) +
                 Scalar(1.0) * _tmp119 * (-_tmp113 * _tmp142 + _tmp115 * _tmp132) +
                 Scalar(1.0) * _tmp122 * (-_tmp113 * _tmp137 + _tmp136) +
                 Scalar(1.0) * _tmp123 * (-_tmp113 * _tmp135 - _tmp124 * _tmp132 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp139 * (_tmp132 * _tmp140 - _tmp132) +
                 Scalar(1.0) * _tmp145 * (-_tmp113 * _tmp144 + _tmp143)));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp149 = std::pow(Scalar(-_tmp58 + p_a(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp61 + p_a(1, 0)), Scalar(2));
  const Scalar _tmp150 = _tmp123 * _tmp126;
  const Scalar _tmp151 = _tmp104 * _tmp111 * _tmp66 + _tmp117 * _tmp119 * _tmp66 -
                         _tmp121 * _tmp122 - _tmp150 * _tmp93;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = _tmp132 * _tmp139;
  const Scalar _tmp154 =
      std::asinh(_tmp152 * (_tmp111 * _tmp146 * _tmp76 + _tmp119 * _tmp142 * _tmp76 +
                            _tmp122 * _tmp137 * _tmp76 + _tmp123 * _tmp135 * _tmp76 -
                            _tmp140 * _tmp153 + _tmp144 * _tmp145 * _tmp76));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp151;
  const Scalar _tmp156 =
      _tmp102 * _tmp111 * _tmp96 + _tmp116 * _tmp119 * _tmp96 + _tmp120 * _tmp122 + _tmp150;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 =
      std::asinh(_tmp157 * (-_tmp101 * _tmp111 * _tmp131 - _tmp115 * _tmp119 * _tmp131 -
                            _tmp122 * _tmp136 + _tmp123 * _tmp134 - _tmp143 * _tmp145 + _tmp153));
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp156;
  const Scalar _tmp160 = std::pow(Scalar(-_tmp83 + p_c(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp86 + p_c(1, 0)), Scalar(2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp38 * (-std::sinh(Scalar(1.0) * _tmp37) -
                std::sinh(Scalar(0.1034955) * _tmp36 * (-std::sqrt(_tmp35) - _tmp37 * _tmp38))) -
      std::sqrt(Scalar(_tmp35 + std::pow(Scalar(-_tmp16 + p_b(2, 0) - p_init2), Scalar(2))));
  _res(1, 0) =
      _tmp148 *
          (-std::sinh(Scalar(1.0) * _tmp147) -
           std::sinh(Scalar(0.1034955) * _tmp128 * (-_tmp147 * _tmp148 - std::sqrt(_tmp48)))) -
      std::sqrt(Scalar(_tmp48 + std::pow(Scalar(-_tmp40 + p_d(2, 0) - p_init2), Scalar(2))));
  _res(2, 0) =
      _tmp155 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp152 * (-std::sqrt(_tmp149) - _tmp154 * _tmp155))) -
      std::sqrt(Scalar(_tmp149 + std::pow(Scalar(-_tmp68 + p_a(2, 0) - p_init2), Scalar(2))));
  _res(3, 0) =
      _tmp159 *
          (-std::sinh(Scalar(1.0) * _tmp158) -
           std::sinh(Scalar(0.1034955) * _tmp157 * (-_tmp158 * _tmp159 - std::sqrt(_tmp160)))) -
      std::sqrt(Scalar(_tmp160 + std::pow(Scalar(-_tmp81 + p_c(2, 0) - p_init2), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
