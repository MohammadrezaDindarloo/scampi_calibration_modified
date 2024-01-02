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
 * Symbolic function: IK_residual_func_cost1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 486

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (163)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp5 = 2 * _tmp3 * _tmp4;
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp11 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp6;
  const Scalar _tmp14 = _tmp13 * _tmp4;
  const Scalar _tmp15 = _tmp3 * _tmp7;
  const Scalar _tmp16 = _tmp14 + _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp12 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp9;
  const Scalar _tmp20 = _tmp19 + p_init0;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp13 * _tmp3;
  const Scalar _tmp24 = _tmp4 * _tmp7;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp29 = _tmp26 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + p_init1;
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp27 + Scalar(-0.010999999999999999);
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp37 = _tmp35 + _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp40 = _tmp26 - _tmp28;
  const Scalar _tmp41 = _tmp21 + _tmp40;
  const Scalar _tmp42 = _tmp41 + p_init1;
  const Scalar _tmp43 = _tmp42 - p_b(1, 0);
  const Scalar _tmp44 = -_tmp9;
  const Scalar _tmp45 = _tmp12 + _tmp17;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + p_init0;
  const Scalar _tmp48 = _tmp47 - p_b(0, 0);
  const Scalar _tmp49 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp50 = _tmp43 * _tmp49;
  const Scalar _tmp51 = _tmp18 + _tmp44;
  const Scalar _tmp52 = _tmp51 + p_init0;
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = _tmp22 + _tmp40;
  const Scalar _tmp55 = _tmp54 + p_init1;
  const Scalar _tmp56 = _tmp55 - p_a(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp57;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp50 * _tmp58 - _tmp59);
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = Scalar(1.0) * _tmp46;
  const Scalar _tmp63 = Scalar(1.0) * _tmp41;
  const Scalar _tmp64 = -_tmp63;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp54 + _tmp64);
  const Scalar _tmp66 = _tmp65 * (-_tmp51 + _tmp62);
  const Scalar _tmp67 = _tmp62 + _tmp63 * _tmp66;
  const Scalar _tmp68 = 0;
  const Scalar _tmp69 = _tmp35 - _tmp36;
  const Scalar _tmp70 = _tmp33 + _tmp69;
  const Scalar _tmp71 = _tmp45 + _tmp9;
  const Scalar _tmp72 = _tmp71 + p_init0;
  const Scalar _tmp73 = _tmp72 - p_c(0, 0);
  const Scalar _tmp74 = _tmp21 + _tmp29;
  const Scalar _tmp75 = _tmp74 + p_init1;
  const Scalar _tmp76 = _tmp75 - p_c(1, 0);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp73 * _tmp77;
  const Scalar _tmp79 = _tmp70 * _tmp78;
  const Scalar _tmp80 = _tmp33 + _tmp37;
  const Scalar _tmp81 = _tmp76 * _tmp77;
  const Scalar _tmp82 = _tmp34 + _tmp69;
  const Scalar _tmp83 = _tmp58 * _tmp70;
  const Scalar _tmp84 = -_tmp50 * _tmp83 + _tmp59 * _tmp82;
  const Scalar _tmp85 = _tmp50 * _tmp78 - _tmp81;
  const Scalar _tmp86 = _tmp60 * _tmp85;
  const Scalar _tmp87 = -_tmp50 * _tmp79 + _tmp80 * _tmp81 - _tmp84 * _tmp86;
  const Scalar _tmp88 = -_tmp58 * _tmp82 + _tmp83;
  const Scalar _tmp89 = -_tmp66 * _tmp87 - _tmp78 * _tmp80 + _tmp79 - _tmp86 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp85 * _tmp90;
  const Scalar _tmp92 = _tmp68 * _tmp91;
  const Scalar _tmp93 = _tmp68 * _tmp90;
  const Scalar _tmp94 =
      std::sqrt(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp95 = _tmp49 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp60;
  const Scalar _tmp97 = _tmp84 * _tmp96;
  const Scalar _tmp98 = _tmp66 * _tmp97 - _tmp88 * _tmp96;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp100 = _tmp95 * (-_tmp41 * _tmp48 * _tmp99 + _tmp43 * _tmp46 * _tmp99);
  const Scalar _tmp101 = _tmp100 * _tmp58 - _tmp51 * _tmp59 + _tmp54 * _tmp58;
  const Scalar _tmp102 = _tmp100 * _tmp78 - _tmp101 * _tmp86 - _tmp71 * _tmp81 + _tmp74 * _tmp78;
  const Scalar _tmp103 = _tmp102 * _tmp90;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp102);
  const Scalar _tmp105 = _tmp104 * _tmp89;
  const Scalar _tmp106 = _tmp105 * (-_tmp101 * _tmp96 - _tmp103 * _tmp98);
  const Scalar _tmp107 = _tmp106 + _tmp98;
  const Scalar _tmp108 = -_tmp107 * _tmp91 + Scalar(1.0);
  const Scalar _tmp109 = _tmp78 * _tmp90;
  const Scalar _tmp110 = _tmp31 - p_d(1, 0);
  const Scalar _tmp111 = _tmp20 - p_d(0, 0);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = Scalar(1.0) * _tmp104;
  const Scalar _tmp116 = _tmp111 * _tmp112;
  const Scalar _tmp117 = fh1 * (_tmp113 * _tmp19 - _tmp116 * _tmp30);
  const Scalar _tmp118 = _tmp50 * _tmp60;
  const Scalar _tmp119 = _tmp118 * _tmp84 + _tmp50 * _tmp70;
  const Scalar _tmp120 = _tmp118 * _tmp88 - _tmp119 * _tmp66 - _tmp70;
  const Scalar _tmp121 = _tmp105 * (-_tmp100 + _tmp101 * _tmp118 - _tmp103 * _tmp120);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = -_tmp122 * _tmp91 - _tmp50;
  const Scalar _tmp124 = _tmp116 * fh1;
  const Scalar _tmp125 = -_tmp114 * _tmp95 * (_tmp107 * _tmp109 + _tmp108 * _tmp61) -
                         _tmp117 * _tmp95 * (-_tmp115 * _tmp58 * _tmp86 + _tmp115 * _tmp78) -
                         _tmp124 * _tmp95 * (_tmp109 * _tmp122 + _tmp123 * _tmp61 + Scalar(1.0)) -
                         _tmp39 * _tmp95 * (-_tmp61 * _tmp92 + _tmp78 * _tmp93);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = Scalar(0.1034955) * _tmp126;
  const Scalar _tmp128 = _tmp64 + _tmp74;
  const Scalar _tmp129 = _tmp128 * _tmp66;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 + _tmp62 - _tmp71);
  const Scalar _tmp131 = _tmp128 * _tmp130;
  const Scalar _tmp132 = _tmp87 * _tmp90;
  const Scalar _tmp133 = _tmp119 + _tmp121 * _tmp131 - _tmp122 * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp65;
  const Scalar _tmp135 = Scalar(1.0) * _tmp130;
  const Scalar _tmp136 = _tmp38 * fh1;
  const Scalar _tmp137 = _tmp116 * _tmp136 + Scalar(3.29616) * _tmp16 + _tmp19 * fv1;
  const Scalar _tmp138 = _tmp128 * _tmp65;
  const Scalar _tmp139 = _tmp130 * _tmp67;
  const Scalar _tmp140 = -_tmp128 * _tmp139 - _tmp132 * _tmp68 + _tmp64;
  const Scalar _tmp141 = _tmp105 * _tmp135;
  const Scalar _tmp142 = -_tmp115 * _tmp87 + _tmp128 * _tmp141;
  const Scalar _tmp143 = _tmp135 * _tmp66;
  const Scalar _tmp144 = _tmp65 * (_tmp129 * _tmp135 + Scalar(1.0));
  const Scalar _tmp145 = -_tmp113 * _tmp136 - Scalar(3.29616) * _tmp25 - _tmp30 * fv1;
  const Scalar _tmp146 = _tmp106 * _tmp131 - _tmp107 * _tmp132 - _tmp97;
  const Scalar _tmp147 = std::asinh(
      _tmp126 * (Scalar(1.0) * _tmp114 * (_tmp106 * _tmp135 - _tmp134 * _tmp146) +
                 Scalar(1.0) * _tmp117 * (-_tmp134 * _tmp142 + _tmp141) +
                 Scalar(1.0) * _tmp124 * (_tmp121 * _tmp135 - _tmp133 * _tmp134) +
                 Scalar(1.0) * _tmp137 * (_tmp135 * _tmp138 - _tmp135) +
                 Scalar(1.0) * _tmp145 * (_tmp143 - Scalar(1.0) * _tmp144) +
                 Scalar(1.0) * _tmp39 * (-_tmp134 * _tmp140 - _tmp135 * _tmp67 + Scalar(1.0))));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp149 = _tmp115 * _tmp117;
  const Scalar _tmp150 = _tmp108 * _tmp114 * _tmp60 + _tmp123 * _tmp124 * _tmp60 -
                         _tmp149 * _tmp86 - _tmp39 * _tmp60 * _tmp92;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = Scalar(0.1034955) * _tmp151;
  const Scalar _tmp153 = _tmp65 * fh1;
  const Scalar _tmp154 = _tmp135 * _tmp137;
  const Scalar _tmp155 =
      std::asinh(_tmp151 * (_tmp113 * _tmp146 * _tmp153 + _tmp116 * _tmp133 * _tmp153 +
                            _tmp117 * _tmp142 * _tmp65 - _tmp138 * _tmp154 +
                            _tmp140 * _tmp39 * _tmp65 + _tmp144 * _tmp145));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp157 = _tmp90 * fh1;
  const Scalar _tmp158 =
      _tmp107 * _tmp113 * _tmp157 + _tmp116 * _tmp122 * _tmp157 + _tmp149 + _tmp39 * _tmp93;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = std::asinh(_tmp159 * (-_tmp106 * _tmp114 * _tmp130 - _tmp117 * _tmp141 -
                                               _tmp121 * _tmp124 * _tmp130 + _tmp139 * _tmp39 -
                                               _tmp143 * _tmp145 + _tmp154));
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp158;
  const Scalar _tmp162 = Scalar(0.1034955) * _tmp159;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 * (_tmp2 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp1) -
                 std::cosh(_tmp2 *
                           (-_tmp1 * _tmp32 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_d(0, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp31 + p_d(1, 0)), Scalar(2))))))) +
      _tmp38 + p_init2;
  _res(1, 0) =
      -_tmp148 *
          (_tmp127 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp147) -
           std::cosh(_tmp127 *
                     (-_tmp147 * _tmp148 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_b(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp47 + p_b(0, 0)), Scalar(2))))))) +
      _tmp70 + p_init2;
  _res(2, 0) =
      -_tmp156 *
          (_tmp152 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp155) -
           std::cosh(_tmp152 *
                     (-_tmp155 * _tmp156 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp55 + p_a(1, 0)), Scalar(2))))))) +
      _tmp82 + p_init2;
  _res(3, 0) =
      -_tmp161 *
          (_tmp162 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp160) -
           std::cosh(_tmp162 *
                     (-_tmp160 * _tmp161 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp72 + p_c(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp75 + p_c(1, 0)), Scalar(2))))))) +
      _tmp80 + p_init2;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
