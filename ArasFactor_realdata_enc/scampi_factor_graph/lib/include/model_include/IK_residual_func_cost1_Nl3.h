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
 * Symbolic function: IK_residual_func_cost1_Nl3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl3(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 484

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (158)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = 2 * _tmp4;
  const Scalar _tmp6 = _tmp3 * _tmp5;
  const Scalar _tmp7 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp16 = _tmp4 * _tmp8;
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = -Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp11 + _tmp19;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999);
  const Scalar _tmp26 = _tmp5 * _tmp7;
  const Scalar _tmp27 = _tmp3 * _tmp8;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp22 + _tmp30;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = _tmp14 + _tmp18;
  const Scalar _tmp44 = _tmp11 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init0;
  const Scalar _tmp46 = _tmp45 - p_b(0, 0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp42 * _tmp47;
  const Scalar _tmp50 = _tmp10 + _tmp43;
  const Scalar _tmp51 = _tmp50 + p_init0;
  const Scalar _tmp52 = _tmp51 - p_c(0, 0);
  const Scalar _tmp53 = _tmp25 + _tmp29;
  const Scalar _tmp54 = _tmp22 + _tmp53;
  const Scalar _tmp55 = _tmp54 + p_init1;
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp60 = _tmp57 * _tmp59;
  const Scalar _tmp61 = _tmp60 * (_tmp50 * _tmp56 * _tmp58 - _tmp52 * _tmp54 * _tmp58);
  const Scalar _tmp62 = _tmp56 * _tmp59;
  const Scalar _tmp63 = _tmp48 * _tmp62 - _tmp49;
  const Scalar _tmp64 = _tmp23 + _tmp53;
  const Scalar _tmp65 = _tmp64 + p_init1;
  const Scalar _tmp66 = _tmp65 - p_d(1, 0);
  const Scalar _tmp67 = _tmp10 + _tmp19;
  const Scalar _tmp68 = _tmp67 + p_init0;
  const Scalar _tmp69 = _tmp68 - p_d(0, 0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp69 * _tmp70;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp62 * _tmp72 - _tmp71);
  const Scalar _tmp74 = _tmp73 * (_tmp61 * _tmp72 + _tmp64 * _tmp72 - _tmp67 * _tmp71);
  const Scalar _tmp75 = _tmp40 * _tmp48 - _tmp44 * _tmp49 + _tmp48 * _tmp61 - _tmp63 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = _tmp72 * _tmp73;
  const Scalar _tmp79 = _tmp63 * _tmp78;
  const Scalar _tmp80 = _tmp21 - p_a(0, 0);
  const Scalar _tmp81 = _tmp32 - p_a(1, 0);
  const Scalar _tmp82 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp81, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp80 * _tmp82;
  const Scalar _tmp85 = fh1 * (_tmp20 * _tmp83 - _tmp31 * _tmp84);
  const Scalar _tmp86 = _tmp36 + _tmp37;
  const Scalar _tmp87 = _tmp34 + _tmp86;
  const Scalar _tmp88 = _tmp62 * _tmp87;
  const Scalar _tmp89 = _tmp34 + _tmp38;
  const Scalar _tmp90 = _tmp73 * (_tmp71 * _tmp89 - _tmp72 * _tmp88);
  const Scalar _tmp91 = _tmp62 * _tmp90 + _tmp88;
  const Scalar _tmp92 = Scalar(1.0) * _tmp54;
  const Scalar _tmp93 = -_tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp64 + _tmp93);
  const Scalar _tmp95 = Scalar(1.0) * _tmp50;
  const Scalar _tmp96 = -_tmp67 + _tmp95;
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp73 * (_tmp72 * _tmp87 - _tmp72 * _tmp89);
  const Scalar _tmp99 = _tmp62 * _tmp98 - _tmp87 - _tmp91 * _tmp97;
  const Scalar _tmp100 = _tmp35 + _tmp86;
  const Scalar _tmp101 = _tmp100 * _tmp49 - _tmp48 * _tmp88 - _tmp63 * _tmp90;
  const Scalar _tmp102 = -_tmp100 * _tmp48 - _tmp101 * _tmp97 + _tmp48 * _tmp87 - _tmp63 * _tmp98;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp104 = _tmp103 * _tmp75;
  const Scalar _tmp105 = _tmp102 * _tmp76;
  const Scalar _tmp106 = _tmp105 * (-_tmp104 * _tmp99 - _tmp61 + _tmp62 * _tmp74);
  const Scalar _tmp107 = _tmp106 + _tmp99;
  const Scalar _tmp108 = _tmp103 * _tmp48;
  const Scalar _tmp109 = _tmp103 * _tmp63;
  const Scalar _tmp110 = -_tmp107 * _tmp109 - _tmp62;
  const Scalar _tmp111 = _tmp84 * fh1;
  const Scalar _tmp112 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp113 = _tmp92 * _tmp97 + _tmp95;
  const Scalar _tmp114 = 0;
  const Scalar _tmp115 = Scalar(1.0) * _tmp94;
  const Scalar _tmp116 = _tmp115 * _tmp90 * _tmp96 - Scalar(1.0) * _tmp98;
  const Scalar _tmp117 = _tmp105 * (-_tmp104 * _tmp116 - Scalar(1.0) * _tmp74);
  const Scalar _tmp118 = _tmp116 + _tmp117;
  const Scalar _tmp119 = -_tmp109 * _tmp118 + Scalar(1.0);
  const Scalar _tmp120 = _tmp83 * fh1;
  const Scalar _tmp121 = -_tmp111 * _tmp60 * (_tmp107 * _tmp108 + _tmp110 * _tmp78 + Scalar(1.0)) -
                         _tmp112 * _tmp60 * (_tmp114 * _tmp48 - _tmp114 * _tmp79) -
                         _tmp120 * _tmp60 * (_tmp108 * _tmp118 + _tmp119 * _tmp78) -
                         _tmp60 * _tmp85 * (_tmp48 * _tmp77 - _tmp77 * _tmp79);
  const Scalar _tmp122 = Scalar(1.0) / (_tmp121);
  const Scalar _tmp123 = _tmp40 + _tmp93;
  const Scalar _tmp124 = _tmp123 * _tmp97;
  const Scalar _tmp125 = Scalar(1.0) / (-_tmp124 - _tmp44 + _tmp95);
  const Scalar _tmp126 = Scalar(1.0) * _tmp125;
  const Scalar _tmp127 = _tmp113 * _tmp125;
  const Scalar _tmp128 = -_tmp101 * _tmp114 - _tmp123 * _tmp127 + _tmp93;
  const Scalar _tmp129 = _tmp39 * fh1;
  const Scalar _tmp130 = _tmp129 * _tmp84 + Scalar(5.1796800000000003) * _tmp17 + _tmp20 * fv1;
  const Scalar _tmp131 = _tmp123 * _tmp126;
  const Scalar _tmp132 = -_tmp129 * _tmp83 - Scalar(5.1796800000000003) * _tmp28 - _tmp31 * fv1;
  const Scalar _tmp133 = _tmp124 * _tmp126 + Scalar(1.0);
  const Scalar _tmp134 = _tmp126 * _tmp97;
  const Scalar _tmp135 = _tmp101 * _tmp103;
  const Scalar _tmp136 = _tmp123 * _tmp125;
  const Scalar _tmp137 = _tmp117 * _tmp136 - _tmp118 * _tmp135 - Scalar(1.0) * _tmp90;
  const Scalar _tmp138 = _tmp106 * _tmp136 - _tmp107 * _tmp135 + _tmp91;
  const Scalar _tmp139 = -_tmp101 * _tmp77 + _tmp105 * _tmp131;
  const Scalar _tmp140 = _tmp105 * _tmp126;
  const Scalar _tmp141 = std::asinh(
      _tmp122 * (Scalar(1.0) * _tmp111 * (_tmp106 * _tmp126 - _tmp115 * _tmp138) +
                 Scalar(1.0) * _tmp112 * (-_tmp113 * _tmp126 - _tmp115 * _tmp128 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp120 * (-_tmp115 * _tmp137 + _tmp117 * _tmp126) +
                 Scalar(1.0) * _tmp130 * (-_tmp126 + _tmp131 * _tmp94) +
                 Scalar(1.0) * _tmp132 * (-_tmp115 * _tmp133 + _tmp134) +
                 Scalar(1.0) * _tmp85 * (-_tmp115 * _tmp139 + _tmp140)));
  const Scalar _tmp142 = Scalar(9.6622558468725703) * _tmp121;
  const Scalar _tmp143 = Scalar(0.1034955) * _tmp122;
  const Scalar _tmp144 = _tmp77 * _tmp85;
  const Scalar _tmp145 = _tmp63 * _tmp73;
  const Scalar _tmp146 = _tmp112 * _tmp114;
  const Scalar _tmp147 = _tmp110 * _tmp111 * _tmp73 + _tmp119 * _tmp120 * _tmp73 -
                         _tmp144 * _tmp145 - _tmp145 * _tmp146;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 = _tmp126 * _tmp130;
  const Scalar _tmp150 =
      std::asinh(_tmp148 * (_tmp111 * _tmp138 * _tmp94 + _tmp112 * _tmp128 * _tmp94 +
                            _tmp120 * _tmp137 * _tmp94 - _tmp123 * _tmp149 * _tmp94 +
                            _tmp132 * _tmp133 * _tmp94 + _tmp139 * _tmp85 * _tmp94));
  const Scalar _tmp151 = Scalar(0.1034955) * _tmp148;
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp153 =
      _tmp103 * _tmp107 * _tmp111 + _tmp103 * _tmp118 * _tmp120 + _tmp144 + _tmp146;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp154;
  const Scalar _tmp156 = std::asinh(_tmp154 * (-_tmp106 * _tmp111 * _tmp125 + _tmp112 * _tmp127 -
                                               _tmp117 * _tmp120 * _tmp125 - _tmp132 * _tmp134 -
                                               _tmp140 * _tmp85 + _tmp149));
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp153;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp2 * (_tmp33 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp1) -
                std::cosh(_tmp33 *
                          (-_tmp1 * _tmp2 -
                           std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp32 + p_a(1, 0)), Scalar(2))))))) +
      _tmp39 + p_init2;
  _res(1, 0) =
      -_tmp142 *
          (_tmp143 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp141) -
           std::cosh(_tmp143 *
                     (-_tmp141 * _tmp142 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_c(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))))))) +
      _tmp87 + p_init2;
  _res(2, 0) =
      -_tmp152 *
          (_tmp151 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp150) -
           std::cosh(_tmp151 *
                     (-_tmp150 * _tmp152 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_d(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp68 + p_d(0, 0)), Scalar(2))))))) +
      _tmp89 + p_init2;
  _res(3, 0) =
      _tmp100 -
      _tmp157 * (_tmp155 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp156) -
                 std::cosh(_tmp155 *
                           (-_tmp156 * _tmp157 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp45 + p_b(0, 0)), Scalar(2))))))) +
      p_init2;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym