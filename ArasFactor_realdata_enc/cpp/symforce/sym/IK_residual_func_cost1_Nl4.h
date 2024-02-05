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
 * Symbolic function: IK_residual_func_cost1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl4(
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

  // Intermediate terms (161)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp3 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = _tmp12 * _tmp5;
  const Scalar _tmp14 = _tmp11 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 * _tmp5;
  const Scalar _tmp17 = _tmp12 * _tmp3;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 - _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp8;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp25 = _tmp12 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp28 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp30 = _tmp27 - _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 =
      -Scalar(0.010999999999999999) * _tmp28 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp15 + _tmp18;
  const Scalar _tmp41 = _tmp40 + _tmp8;
  const Scalar _tmp42 = Scalar(1.0) * _tmp41;
  const Scalar _tmp43 = _tmp40 + _tmp7;
  const Scalar _tmp44 = _tmp27 + _tmp29;
  const Scalar _tmp45 = _tmp23 + _tmp44;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = -_tmp46;
  const Scalar _tmp48 = _tmp22 + _tmp44;
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = _tmp22 + _tmp30;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp47 + _tmp50);
  const Scalar _tmp52 = _tmp19 + _tmp7;
  const Scalar _tmp53 = _tmp42 - _tmp52;
  const Scalar _tmp54 = _tmp51 * _tmp53;
  const Scalar _tmp55 = _tmp49 * _tmp54;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp42 - _tmp43 - _tmp55);
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = _tmp43 + p_init0;
  const Scalar _tmp59 = _tmp58 - p_c(0, 0);
  const Scalar _tmp60 = _tmp48 + p_init1;
  const Scalar _tmp61 = _tmp60 - p_c(1, 0);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp61 * _tmp62;
  const Scalar _tmp64 = _tmp59 * _tmp62;
  const Scalar _tmp65 = _tmp50 + p_init1;
  const Scalar _tmp66 = _tmp65 - p_b(1, 0);
  const Scalar _tmp67 = _tmp52 + p_init0;
  const Scalar _tmp68 = _tmp67 - p_b(0, 0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp68 * _tmp69;
  const Scalar _tmp71 = _tmp45 + p_init1;
  const Scalar _tmp72 = _tmp71 - p_d(1, 0);
  const Scalar _tmp73 = _tmp41 + p_init0;
  const Scalar _tmp74 = _tmp73 - p_d(0, 0);
  const Scalar _tmp75 =
      std::sqrt(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp74, Scalar(2))));
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp78 * (_tmp41 * _tmp72 * _tmp76 - _tmp45 * _tmp74 * _tmp76);
  const Scalar _tmp80 = _tmp66 * _tmp69;
  const Scalar _tmp81 = _tmp50 * _tmp70 - _tmp52 * _tmp80 + _tmp70 * _tmp79;
  const Scalar _tmp82 = _tmp72 * _tmp77;
  const Scalar _tmp83 = -_tmp63 + _tmp64 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp70 * _tmp82 - _tmp80);
  const Scalar _tmp85 = _tmp83 * _tmp84;
  const Scalar _tmp86 = -_tmp43 * _tmp63 + _tmp48 * _tmp64 + _tmp64 * _tmp79 - _tmp81 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp36 + _tmp37;
  const Scalar _tmp89 = _tmp35 + _tmp88;
  const Scalar _tmp90 = _tmp34 + _tmp88;
  const Scalar _tmp91 = _tmp82 * _tmp89;
  const Scalar _tmp92 = _tmp34 + _tmp38;
  const Scalar _tmp93 = _tmp70 * _tmp89;
  const Scalar _tmp94 = _tmp80 * _tmp92 - _tmp82 * _tmp93;
  const Scalar _tmp95 = _tmp63 * _tmp90 - _tmp64 * _tmp91 - _tmp85 * _tmp94;
  const Scalar _tmp96 = -_tmp70 * _tmp92 + _tmp93;
  const Scalar _tmp97 = -_tmp54 * _tmp95 + _tmp64 * _tmp89 - _tmp64 * _tmp90 - _tmp85 * _tmp96;
  const Scalar _tmp98 = _tmp87 * _tmp97;
  const Scalar _tmp99 = _tmp57 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp87;
  const Scalar _tmp101 = -_tmp100 * _tmp95 + _tmp49 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) * _tmp51;
  const Scalar _tmp103 = _tmp21 - p_a(0, 0);
  const Scalar _tmp104 = _tmp32 - p_a(1, 0);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = _tmp103 * _tmp105;
  const Scalar _tmp108 = fh1 * (_tmp106 * _tmp20 - _tmp107 * _tmp31);
  const Scalar _tmp109 = _tmp42 + _tmp46 * _tmp54;
  const Scalar _tmp110 = _tmp109 * _tmp56;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp112 = 0;
  const Scalar _tmp113 = -_tmp110 * _tmp49 - _tmp112 * _tmp95 + _tmp47;
  const Scalar _tmp114 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp115 = _tmp39 * fh1;
  const Scalar _tmp116 = -_tmp106 * _tmp115 - Scalar(5.1796800000000003) * _tmp26 - _tmp31 * fv1;
  const Scalar _tmp117 = _tmp55 * _tmp57 + Scalar(1.0);
  const Scalar _tmp118 = Scalar(1.0) * _tmp84;
  const Scalar _tmp119 = _tmp102 * _tmp53 * _tmp84 * _tmp94 - _tmp118 * _tmp96;
  const Scalar _tmp120 = _tmp111 * _tmp86;
  const Scalar _tmp121 = _tmp98 * (-_tmp118 * _tmp81 - _tmp119 * _tmp120);
  const Scalar _tmp122 = _tmp119 + _tmp121;
  const Scalar _tmp123 = _tmp111 * _tmp95;
  const Scalar _tmp124 = _tmp49 * _tmp56;
  const Scalar _tmp125 = -_tmp118 * _tmp94 + _tmp121 * _tmp124 - _tmp122 * _tmp123;
  const Scalar _tmp126 = _tmp106 * fh1;
  const Scalar _tmp127 = _tmp82 * _tmp84;
  const Scalar _tmp128 = _tmp127 * _tmp94 + _tmp91;
  const Scalar _tmp129 = _tmp127 * _tmp96 - _tmp128 * _tmp54 - _tmp89;
  const Scalar _tmp130 = _tmp98 * (-_tmp120 * _tmp129 + _tmp127 * _tmp81 - _tmp79);
  const Scalar _tmp131 = _tmp129 + _tmp130;
  const Scalar _tmp132 = -_tmp123 * _tmp131 + _tmp124 * _tmp130 + _tmp128;
  const Scalar _tmp133 = _tmp107 * fh1;
  const Scalar _tmp134 = _tmp107 * _tmp115 + Scalar(5.1796800000000003) * _tmp14 + _tmp20 * fv1;
  const Scalar _tmp135 = _tmp49 * _tmp51;
  const Scalar _tmp136 = _tmp111 * _tmp64;
  const Scalar _tmp137 = _tmp111 * _tmp83;
  const Scalar _tmp138 = -_tmp131 * _tmp137 - _tmp82;
  const Scalar _tmp139 = _tmp70 * _tmp84;
  const Scalar _tmp140 = -_tmp122 * _tmp137 + Scalar(1.0);
  const Scalar _tmp141 = _tmp70 * _tmp85;
  const Scalar _tmp142 = -_tmp108 * _tmp78 * (-_tmp100 * _tmp141 + _tmp100 * _tmp64) -
                         _tmp114 * _tmp78 * (-_tmp112 * _tmp141 + _tmp112 * _tmp64) -
                         _tmp126 * _tmp78 * (_tmp122 * _tmp136 + _tmp139 * _tmp140) -
                         _tmp133 * _tmp78 * (_tmp131 * _tmp136 + _tmp138 * _tmp139 + Scalar(1.0));
  const Scalar _tmp143 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp144 = std::asinh(
      _tmp143 * (Scalar(1.0) * _tmp108 * (-_tmp101 * _tmp102 + _tmp99) +
                 Scalar(1.0) * _tmp114 * (-_tmp102 * _tmp113 - _tmp109 * _tmp57 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp116 * (-_tmp102 * _tmp117 + _tmp54 * _tmp57) +
                 Scalar(1.0) * _tmp126 * (-_tmp102 * _tmp125 + _tmp121 * _tmp57) +
                 Scalar(1.0) * _tmp133 * (-_tmp102 * _tmp132 + _tmp130 * _tmp57) +
                 Scalar(1.0) * _tmp134 * (_tmp135 * _tmp57 - _tmp57)));
  const Scalar _tmp145 = Scalar(0.1034955) * _tmp143;
  const Scalar _tmp146 = Scalar(9.6622558468725703) * _tmp142;
  const Scalar _tmp147 = _tmp100 * _tmp108;
  const Scalar _tmp148 = _tmp112 * _tmp114;
  const Scalar _tmp149 =
      _tmp126 * _tmp140 * _tmp84 + _tmp133 * _tmp138 * _tmp84 - _tmp147 * _tmp85 - _tmp148 * _tmp85;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = Scalar(0.1034955) * _tmp150;
  const Scalar _tmp152 = _tmp134 * _tmp57;
  const Scalar _tmp153 = _tmp116 * _tmp51;
  const Scalar _tmp154 = std::asinh(
      _tmp150 * (_tmp101 * _tmp108 * _tmp51 + _tmp113 * _tmp114 * _tmp51 + _tmp117 * _tmp153 +
                 _tmp125 * _tmp126 * _tmp51 + _tmp132 * _tmp133 * _tmp51 - _tmp135 * _tmp152));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp156 =
      _tmp111 * _tmp122 * _tmp126 + _tmp111 * _tmp131 * _tmp133 + _tmp147 + _tmp148;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = Scalar(0.1034955) * _tmp157;
  const Scalar _tmp159 =
      std::asinh(_tmp157 * (-_tmp108 * _tmp99 + _tmp110 * _tmp114 - _tmp121 * _tmp126 * _tmp56 -
                            _tmp130 * _tmp133 * _tmp56 + _tmp152 - _tmp153 * _tmp53 * _tmp57));
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp156;

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
      -_tmp146 *
          (_tmp145 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp144) -
           std::cosh(_tmp145 *
                     (-_tmp144 * _tmp146 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp71 + p_d(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp73 + p_d(0, 0)), Scalar(2))))))) +
      _tmp89 + p_init2;
  _res(2, 0) =
      -_tmp155 *
          (_tmp151 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(_tmp151 *
                     (-_tmp154 * _tmp155 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp67 + p_b(0, 0)), Scalar(2))))))) +
      _tmp92 + p_init2;
  _res(3, 0) =
      -_tmp160 *
          (_tmp158 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp159) -
           std::cosh(_tmp158 *
                     (-_tmp159 * _tmp160 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp58 + p_c(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp60 + p_c(1, 0)), Scalar(2))))))) +
      _tmp90 + p_init2;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym