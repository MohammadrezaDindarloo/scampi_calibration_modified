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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl4
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl4(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 579

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (193)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp4 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp7 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                        _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp11 = 2 * _tmp6;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp14 = _tmp13 * _tmp4;
  const Scalar _tmp15 = _tmp12 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = 2 * _tmp10 * _tmp4;
  const Scalar _tmp18 = _tmp13 * _tmp6;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp9;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = _tmp11 * _tmp4;
  const Scalar _tmp27 = _tmp10 * _tmp13;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp25 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = _tmp16 + _tmp19;
  const Scalar _tmp36 = _tmp35 + _tmp9;
  const Scalar _tmp37 = Scalar(1.0) * _tmp36;
  const Scalar _tmp38 = _tmp35 + _tmp8;
  const Scalar _tmp39 = _tmp24 + _tmp32;
  const Scalar _tmp40 = Scalar(1.0) * _tmp39;
  const Scalar _tmp41 = -_tmp40;
  const Scalar _tmp42 = _tmp24 + _tmp31;
  const Scalar _tmp43 = _tmp30 + _tmp42;
  const Scalar _tmp44 = _tmp41 + _tmp43;
  const Scalar _tmp45 = _tmp25 + _tmp30 + _tmp31;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp41 + _tmp45);
  const Scalar _tmp47 = _tmp20 + _tmp8;
  const Scalar _tmp48 = _tmp46 * (_tmp37 - _tmp47);
  const Scalar _tmp49 = _tmp44 * _tmp48;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp37 - _tmp38 - _tmp49);
  const Scalar _tmp51 = Scalar(1.0) * _tmp50;
  const Scalar _tmp52 = _tmp38 + p_init0;
  const Scalar _tmp53 = _tmp52 - p_c(0, 0);
  const Scalar _tmp54 = _tmp43 + p_init1;
  const Scalar _tmp55 = _tmp54 - p_c(1, 0);
  const Scalar _tmp56 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp55, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp55 * _tmp56;
  const Scalar _tmp58 = _tmp53 * _tmp56;
  const Scalar _tmp59 = _tmp45 + p_init1;
  const Scalar _tmp60 = _tmp59 - p_b(1, 0);
  const Scalar _tmp61 = _tmp47 + p_init0;
  const Scalar _tmp62 = _tmp61 - p_b(0, 0);
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp62 * _tmp63;
  const Scalar _tmp65 = _tmp39 + p_init1;
  const Scalar _tmp66 = _tmp65 - p_d(1, 0);
  const Scalar _tmp67 = _tmp36 + p_init0;
  const Scalar _tmp68 = _tmp67 - p_d(0, 0);
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp72 = _tmp69 * _tmp71;
  const Scalar _tmp73 = _tmp72 * (_tmp36 * _tmp66 * _tmp70 - _tmp39 * _tmp68 * _tmp70);
  const Scalar _tmp74 = _tmp60 * _tmp63;
  const Scalar _tmp75 = _tmp45 * _tmp64 - _tmp47 * _tmp74 + _tmp64 * _tmp73;
  const Scalar _tmp76 = _tmp66 * _tmp71;
  const Scalar _tmp77 = -_tmp57 + _tmp58 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp64 * _tmp76 - _tmp74);
  const Scalar _tmp79 = _tmp77 * _tmp78;
  const Scalar _tmp80 = -_tmp38 * _tmp57 + _tmp43 * _tmp58 + _tmp58 * _tmp73 - _tmp75 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp83 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp5 + Scalar(-0.010999999999999999);
  const Scalar _tmp84 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp85 = _tmp83 - _tmp84;
  const Scalar _tmp86 = _tmp82 + _tmp85;
  const Scalar _tmp87 = _tmp83 + _tmp84;
  const Scalar _tmp88 = _tmp82 + _tmp87;
  const Scalar _tmp89 = _tmp76 * _tmp86;
  const Scalar _tmp90 = -_tmp82;
  const Scalar _tmp91 = _tmp87 + _tmp90;
  const Scalar _tmp92 = _tmp64 * _tmp86;
  const Scalar _tmp93 = _tmp74 * _tmp91 - _tmp76 * _tmp92;
  const Scalar _tmp94 = _tmp57 * _tmp88 - _tmp58 * _tmp89 - _tmp79 * _tmp93;
  const Scalar _tmp95 = _tmp78 * (-_tmp64 * _tmp91 + _tmp92);
  const Scalar _tmp96 = -_tmp48 * _tmp94 + _tmp58 * _tmp86 - _tmp58 * _tmp88 - _tmp77 * _tmp95;
  const Scalar _tmp97 = _tmp81 * _tmp96;
  const Scalar _tmp98 = _tmp51 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) * _tmp81;
  const Scalar _tmp100 = _tmp44 * _tmp98 - _tmp94 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) * _tmp46;
  const Scalar _tmp102 = _tmp22 - p_a(0, 0);
  const Scalar _tmp103 = _tmp34 - p_a(1, 0);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp103 * _tmp104;
  const Scalar _tmp106 = _tmp102 * _tmp104;
  const Scalar _tmp107 = fh1 * (_tmp105 * _tmp21 - _tmp106 * _tmp33);
  const Scalar _tmp108 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp109 = _tmp37 + _tmp40 * _tmp48;
  const Scalar _tmp110 = _tmp109 * _tmp50;
  const Scalar _tmp111 = 0;
  const Scalar _tmp112 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp113 = _tmp112 * _tmp94;
  const Scalar _tmp114 = _tmp46 * (-_tmp110 * _tmp44 - _tmp111 * _tmp113 + _tmp41);
  const Scalar _tmp115 = -Scalar(1.0) * _tmp110 - Scalar(1.0) * _tmp114 + Scalar(1.0);
  const Scalar _tmp116 = fh1 * (_tmp85 + _tmp90);
  const Scalar _tmp117 = -_tmp105 * _tmp116 - Scalar(5.1796800000000003) * _tmp28 - _tmp33 * fv1;
  const Scalar _tmp118 = _tmp49 * _tmp51 + Scalar(1.0);
  const Scalar _tmp119 = _tmp48 * _tmp51;
  const Scalar _tmp120 = -Scalar(1.0) * _tmp101 * _tmp118 + Scalar(1.0) * _tmp119;
  const Scalar _tmp121 = Scalar(1.0) * _tmp78;
  const Scalar _tmp122 = _tmp121 * _tmp93;
  const Scalar _tmp123 = _tmp122 * _tmp48 - Scalar(1.0) * _tmp95;
  const Scalar _tmp124 = _tmp112 * _tmp80;
  const Scalar _tmp125 = _tmp97 * (-_tmp121 * _tmp75 - _tmp123 * _tmp124);
  const Scalar _tmp126 = _tmp123 + _tmp125;
  const Scalar _tmp127 = _tmp44 * _tmp50;
  const Scalar _tmp128 = -_tmp113 * _tmp126 - _tmp122 + _tmp125 * _tmp127;
  const Scalar _tmp129 = _tmp105 * fh1;
  const Scalar _tmp130 = _tmp76 * _tmp78;
  const Scalar _tmp131 = _tmp130 * _tmp93 + _tmp89;
  const Scalar _tmp132 = -_tmp131 * _tmp48 + _tmp76 * _tmp95 - _tmp86;
  const Scalar _tmp133 = _tmp97 * (-_tmp124 * _tmp132 + _tmp130 * _tmp75 - _tmp73);
  const Scalar _tmp134 = _tmp132 + _tmp133;
  const Scalar _tmp135 = -_tmp113 * _tmp134 + _tmp127 * _tmp133 + _tmp131;
  const Scalar _tmp136 = _tmp106 * fh1;
  const Scalar _tmp137 = _tmp106 * _tmp116 + Scalar(5.1796800000000003) * _tmp15 + _tmp21 * fv1;
  const Scalar _tmp138 = _tmp44 * _tmp46;
  const Scalar _tmp139 = Scalar(1.0) * _tmp138 * _tmp51 - Scalar(1.0) * _tmp51;
  const Scalar _tmp140 =
      Scalar(1.0) * _tmp107 * (-_tmp100 * _tmp101 + _tmp98) + _tmp108 * _tmp115 +
      _tmp117 * _tmp120 + Scalar(1.0) * _tmp129 * (-_tmp101 * _tmp128 + _tmp125 * _tmp51) +
      Scalar(1.0) * _tmp136 * (-_tmp101 * _tmp135 + _tmp133 * _tmp51) + _tmp137 * _tmp139;
  const Scalar _tmp141 = _tmp112 * _tmp58;
  const Scalar _tmp142 = _tmp112 * _tmp77;
  const Scalar _tmp143 = -_tmp134 * _tmp142 - _tmp76;
  const Scalar _tmp144 = _tmp64 * _tmp78;
  const Scalar _tmp145 = -_tmp126 * _tmp142 + Scalar(1.0);
  const Scalar _tmp146 = _tmp111 * _tmp112;
  const Scalar _tmp147 = _tmp111 * _tmp142;
  const Scalar _tmp148 = _tmp72 * (-_tmp144 * _tmp147 + _tmp146 * _tmp58);
  const Scalar _tmp149 = -_tmp107 * _tmp72 * (_tmp58 * _tmp99 - _tmp64 * _tmp79 * _tmp99) -
                         _tmp108 * _tmp148 -
                         _tmp129 * _tmp72 * (_tmp126 * _tmp141 + _tmp144 * _tmp145) -
                         _tmp136 * _tmp72 * (_tmp134 * _tmp141 + _tmp143 * _tmp144 + Scalar(1.0));
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = std::asinh(_tmp140 * _tmp150);
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp153 =
      -_tmp151 * _tmp152 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp154 = Scalar(0.1034955) * _tmp150;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp151;
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp158 = std::pow(_tmp149, Scalar(-2));
  const Scalar _tmp159 = _tmp148 * _tmp158;
  const Scalar _tmp160 = _tmp29 + _tmp42;
  const Scalar _tmp161 =
      (-_tmp140 * _tmp159 + _tmp150 * (-_tmp115 + _tmp120 * _tmp160 + _tmp139 * _tmp21)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp162 = _tmp107 * _tmp99;
  const Scalar _tmp163 = _tmp147 * _tmp78;
  const Scalar _tmp164 = -_tmp108 * _tmp163 + _tmp129 * _tmp145 * _tmp78 +
                         _tmp136 * _tmp143 * _tmp78 - _tmp162 * _tmp79;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp164);
  const Scalar _tmp166 = _tmp137 * _tmp51;
  const Scalar _tmp167 = _tmp118 * _tmp46;
  const Scalar _tmp168 = _tmp100 * _tmp107 * _tmp46 + _tmp108 * _tmp114 + _tmp117 * _tmp167 +
                         _tmp128 * _tmp129 * _tmp46 + _tmp135 * _tmp136 * _tmp46 -
                         _tmp138 * _tmp166;
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(1.0) * _tmp169;
  const Scalar _tmp171 = _tmp21 * _tmp51;
  const Scalar _tmp172 = std::pow(_tmp164, Scalar(-2));
  const Scalar _tmp173 = _tmp163 * _tmp172;
  const Scalar _tmp174 =
      (_tmp165 * (-_tmp114 - _tmp138 * _tmp171 + _tmp160 * _tmp167) - _tmp168 * _tmp173) /
      std::sqrt(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp172 + 1));
  const Scalar _tmp175 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp176 =
      -_tmp169 * _tmp175 - std::sqrt(Scalar(std::pow(Scalar(-_tmp59 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp61 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp177 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp178 = _tmp176 * _tmp177;
  const Scalar _tmp179 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp180 =
      _tmp108 * _tmp146 + _tmp112 * _tmp126 * _tmp129 + _tmp112 * _tmp134 * _tmp136 + _tmp162;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = -_tmp107 * _tmp98 + _tmp108 * _tmp110 - _tmp117 * _tmp119 -
                         _tmp125 * _tmp129 * _tmp50 - _tmp133 * _tmp136 * _tmp50 + _tmp166;
  const Scalar _tmp183 = std::asinh(_tmp181 * _tmp182);
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp185 =
      -_tmp183 * _tmp184 - std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = Scalar(1.0) * _tmp183;
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp190 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp191 = _tmp146 * _tmp190;
  const Scalar _tmp192 = (_tmp181 * (-_tmp110 - _tmp119 * _tmp160 + _tmp171) + _tmp182 * _tmp191) /
                         std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp190 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp3 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + p_a(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-Scalar(1.0) * _tmp161 * std::cosh(_tmp156) -
                          (-Scalar(0.1034955) * _tmp153 * _tmp159 +
                           _tmp154 * (-_tmp151 * _tmp157 - _tmp152 * _tmp161)) *
                              std::cosh(_tmp155)) +
               _tmp157 * (-std::sinh(_tmp155) - std::sinh(_tmp156));
  _res(2, 0) = _tmp175 * (-Scalar(1.0) * _tmp174 * std::cosh(_tmp170) -
                          (-Scalar(0.1034955) * _tmp173 * _tmp176 +
                           _tmp177 * (-_tmp169 * _tmp179 - _tmp174 * _tmp175)) *
                              std::cosh(_tmp178)) +
               _tmp179 * (-std::sinh(_tmp170) - std::sinh(_tmp178));
  _res(3, 0) = _tmp184 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp188) -
                          (Scalar(0.1034955) * _tmp185 * _tmp191 +
                           _tmp186 * (_tmp183 * _tmp189 - _tmp184 * _tmp192)) *
                              std::cosh(_tmp187)) -
               _tmp189 * (-std::sinh(_tmp187) - std::sinh(_tmp188));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
