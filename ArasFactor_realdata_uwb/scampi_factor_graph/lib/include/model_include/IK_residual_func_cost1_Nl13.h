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
 * Symbolic function: IK_residual_func_cost1_Nl13
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl13(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 481

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp5 * _tmp9;
  const Scalar _tmp11 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                        _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp11 * _tmp12;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp3 * _tmp9;
  const Scalar _tmp17 = 2 * _tmp11 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp24 = _tmp12 * _tmp5;
  const Scalar _tmp25 = _tmp11 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + p_init1;
  const Scalar _tmp32 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp22 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp36 = _tmp34 + _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = -_tmp23;
  const Scalar _tmp39 = _tmp27 - _tmp28;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp41 - p_a(1, 0);
  const Scalar _tmp43 = -_tmp7;
  const Scalar _tmp44 = _tmp15 - _tmp18;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp45 + p_init0;
  const Scalar _tmp47 = _tmp46 - p_a(0, 0);
  const Scalar _tmp48 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp49 = _tmp42 * _tmp48;
  const Scalar _tmp50 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp47, Scalar(2))));
  const Scalar _tmp51 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp52 = _tmp48 * _tmp50;
  const Scalar _tmp53 = _tmp52 * (-_tmp40 * _tmp47 * _tmp51 + _tmp42 * _tmp45 * _tmp51);
  const Scalar _tmp54 = _tmp23 + _tmp39;
  const Scalar _tmp55 = _tmp54 + p_init1;
  const Scalar _tmp56 = _tmp55 - p_d(1, 0);
  const Scalar _tmp57 = _tmp19 + _tmp43;
  const Scalar _tmp58 = _tmp57 + p_init0;
  const Scalar _tmp59 = _tmp58 - p_d(0, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp56 * _tmp60;
  const Scalar _tmp63 = _tmp53 * _tmp61 + _tmp54 * _tmp61 - _tmp57 * _tmp62;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp49 * _tmp61 - _tmp62);
  const Scalar _tmp65 = _tmp49 * _tmp64;
  const Scalar _tmp66 = _tmp34 - _tmp35;
  const Scalar _tmp67 = _tmp33 + _tmp66;
  const Scalar _tmp68 = -_tmp33;
  const Scalar _tmp69 = _tmp66 + _tmp68;
  const Scalar _tmp70 = _tmp61 * _tmp69;
  const Scalar _tmp71 = -_tmp49 * _tmp70 + _tmp62 * _tmp67;
  const Scalar _tmp72 = _tmp49 * _tmp69 + _tmp65 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) * _tmp40;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp54 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp45;
  const Scalar _tmp77 = _tmp75 * (-_tmp57 + _tmp76);
  const Scalar _tmp78 = -_tmp61 * _tmp67 + _tmp70;
  const Scalar _tmp79 = _tmp65 * _tmp78 - _tmp69 - _tmp72 * _tmp77;
  const Scalar _tmp80 = _tmp29 + _tmp38;
  const Scalar _tmp81 = _tmp80 + p_init1;
  const Scalar _tmp82 = _tmp81 - p_b(1, 0);
  const Scalar _tmp83 = _tmp44 + _tmp7;
  const Scalar _tmp84 = _tmp83 + p_init0;
  const Scalar _tmp85 = _tmp84 - p_b(0, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp69 * _tmp87;
  const Scalar _tmp89 = _tmp82 * _tmp86;
  const Scalar _tmp90 = _tmp49 * _tmp87 - _tmp89;
  const Scalar _tmp91 = _tmp64 * _tmp90;
  const Scalar _tmp92 = _tmp36 + _tmp68;
  const Scalar _tmp93 = -_tmp49 * _tmp88 - _tmp71 * _tmp91 + _tmp89 * _tmp92;
  const Scalar _tmp94 = -_tmp77 * _tmp93 - _tmp78 * _tmp91 - _tmp87 * _tmp92 + _tmp88;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp53 * _tmp87 - _tmp63 * _tmp91 + _tmp80 * _tmp87 - _tmp83 * _tmp89;
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp53 + _tmp63 * _tmp65 - _tmp79 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp79;
  const Scalar _tmp102 = _tmp90 * _tmp95;
  const Scalar _tmp103 = -_tmp101 * _tmp102 - _tmp49;
  const Scalar _tmp104 = _tmp61 * _tmp64;
  const Scalar _tmp105 = _tmp87 * _tmp95;
  const Scalar _tmp106 = _tmp21 - p_c(0, 0);
  const Scalar _tmp107 = _tmp31 - p_c(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp112 = _tmp73 * _tmp77 + _tmp76;
  const Scalar _tmp113 = 0;
  const Scalar _tmp114 = _tmp102 * _tmp113;
  const Scalar _tmp115 = _tmp113 * _tmp95;
  const Scalar _tmp116 = Scalar(1.0) * _tmp98;
  const Scalar _tmp117 = _tmp107 * _tmp108;
  const Scalar _tmp118 = fh1 * (-_tmp109 * _tmp30 + _tmp117 * _tmp20);
  const Scalar _tmp119 = Scalar(1.0) * _tmp64;
  const Scalar _tmp120 = _tmp119 * _tmp71;
  const Scalar _tmp121 = -_tmp119 * _tmp78 + _tmp120 * _tmp77;
  const Scalar _tmp122 = _tmp99 * (-_tmp119 * _tmp63 - _tmp121 * _tmp97);
  const Scalar _tmp123 = _tmp121 + _tmp122;
  const Scalar _tmp124 = -_tmp102 * _tmp123 + Scalar(1.0);
  const Scalar _tmp125 = _tmp117 * fh1;
  const Scalar _tmp126 = -_tmp110 * _tmp52 * (_tmp101 * _tmp105 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp111 * _tmp52 * (-_tmp104 * _tmp114 + _tmp115 * _tmp87) -
                         _tmp118 * _tmp52 * (-_tmp116 * _tmp61 * _tmp91 + _tmp116 * _tmp87) -
                         _tmp125 * _tmp52 * (_tmp104 * _tmp124 + _tmp105 * _tmp123);
  const Scalar _tmp127 = Scalar(1.0) / (_tmp126);
  const Scalar _tmp128 = _tmp74 + _tmp80;
  const Scalar _tmp129 = _tmp128 * _tmp77;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 + _tmp76 - _tmp83);
  const Scalar _tmp131 = _tmp112 * _tmp130;
  const Scalar _tmp132 = _tmp93 * _tmp95;
  const Scalar _tmp133 = _tmp75 * (-_tmp113 * _tmp132 - _tmp128 * _tmp131 + _tmp74);
  const Scalar _tmp134 = Scalar(1.0) * _tmp130;
  const Scalar _tmp135 = _tmp128 * _tmp130;
  const Scalar _tmp136 = _tmp100 * _tmp135 - _tmp101 * _tmp132 + _tmp72;
  const Scalar _tmp137 = Scalar(1.0) * _tmp75;
  const Scalar _tmp138 = _tmp134 * _tmp99;
  const Scalar _tmp139 = -_tmp116 * _tmp93 + _tmp128 * _tmp138;
  const Scalar _tmp140 = -_tmp120 + _tmp122 * _tmp135 - _tmp123 * _tmp132;
  const Scalar _tmp141 = _tmp37 * fh1;
  const Scalar _tmp142 = -_tmp117 * _tmp141 - Scalar(3.29616) * _tmp26 - _tmp30 * fv1;
  const Scalar _tmp143 = _tmp75 * (_tmp129 * _tmp134 + Scalar(1.0));
  const Scalar _tmp144 = _tmp134 * _tmp77;
  const Scalar _tmp145 = _tmp109 * _tmp141 + Scalar(3.29616) * _tmp14 + _tmp20 * fv1;
  const Scalar _tmp146 = _tmp128 * _tmp75;
  const Scalar _tmp147 =
      std::asinh(_tmp127 * (Scalar(1.0) * _tmp110 * (_tmp100 * _tmp134 - _tmp136 * _tmp137) +
                            Scalar(1.0) * _tmp111 *
                                (-_tmp112 * _tmp134 - Scalar(1.0) * _tmp133 + Scalar(1.0)) +
                            Scalar(1.0) * _tmp118 * (-_tmp137 * _tmp139 + _tmp138) +
                            Scalar(1.0) * _tmp125 * (_tmp122 * _tmp134 - _tmp137 * _tmp140) +
                            Scalar(1.0) * _tmp142 * (-Scalar(1.0) * _tmp143 + _tmp144) +
                            Scalar(1.0) * _tmp145 * (_tmp134 * _tmp146 - _tmp134)));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp126;
  const Scalar _tmp149 = Scalar(0.1034955) * _tmp127;
  const Scalar _tmp150 = _tmp116 * _tmp118;
  const Scalar _tmp151 = _tmp103 * _tmp110 * _tmp64 - _tmp111 * _tmp114 * _tmp64 +
                         _tmp124 * _tmp125 * _tmp64 - _tmp150 * _tmp91;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = _tmp134 * _tmp145;
  const Scalar _tmp154 = std::asinh(
      _tmp152 * (_tmp110 * _tmp136 * _tmp75 + _tmp111 * _tmp133 + _tmp118 * _tmp139 * _tmp75 +
                 _tmp125 * _tmp140 * _tmp75 + _tmp142 * _tmp143 - _tmp146 * _tmp153));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp152;
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp151;
  const Scalar _tmp157 =
      _tmp101 * _tmp110 * _tmp95 + _tmp111 * _tmp115 + _tmp123 * _tmp125 * _tmp95 + _tmp150;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 = Scalar(0.1034955) * _tmp158;
  const Scalar _tmp160 =
      std::asinh(_tmp158 * (-_tmp100 * _tmp110 * _tmp130 + _tmp111 * _tmp131 - _tmp118 * _tmp138 -
                            _tmp122 * _tmp125 * _tmp130 - _tmp142 * _tmp144 + _tmp153));
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp157;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp2 * (_tmp32 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp1) -
                std::cosh(_tmp32 *
                          (-_tmp1 * _tmp2 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp31 + p_c(1, 0)), Scalar(2))))))) +
      _tmp37 + p_init2;
  _res(1, 0) =
      -_tmp148 *
          (_tmp149 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp147) -
           std::cosh(_tmp149 *
                     (-_tmp147 * _tmp148 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_a(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp46 + p_a(0, 0)), Scalar(2))))))) +
      _tmp69 + p_init2;
  _res(2, 0) =
      -_tmp156 *
          (_tmp155 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(_tmp155 *
                     (-_tmp154 * _tmp156 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_d(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp58 + p_d(0, 0)), Scalar(2))))))) +
      _tmp67 + p_init2;
  _res(3, 0) =
      -_tmp161 *
          (_tmp159 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp160) -
           std::cosh(_tmp159 *
                     (-_tmp160 * _tmp161 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp81 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp84 + p_b(0, 0)), Scalar(2))))))) +
      _tmp92 + p_init2;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym