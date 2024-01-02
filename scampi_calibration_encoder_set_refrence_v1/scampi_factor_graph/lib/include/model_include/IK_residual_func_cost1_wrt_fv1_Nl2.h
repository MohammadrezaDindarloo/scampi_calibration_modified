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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl2
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 589

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
  const Scalar _tmp11 = 2 * _tmp10;
  const Scalar _tmp12 = _tmp11 * _tmp6;
  const Scalar _tmp13 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp14 = _tmp13 * _tmp4;
  const Scalar _tmp15 = _tmp12 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp11 * _tmp4;
  const Scalar _tmp18 = _tmp13 * _tmp6;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp9;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = 2 * _tmp4 * _tmp6;
  const Scalar _tmp27 = _tmp10 * _tmp13;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp25 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = _tmp22 - p_a(0, 0);
  const Scalar _tmp36 = _tmp34 - p_a(1, 0);
  const Scalar _tmp37 = std::pow(Scalar(std::pow(_tmp35, Scalar(2)) + std::pow(_tmp36, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp5 + Scalar(-0.010999999999999999);
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp43 = _tmp41 - _tmp42;
  const Scalar _tmp44 = fh1 * (_tmp40 + _tmp43);
  const Scalar _tmp45 = -Scalar(3.29616) * _tmp28 - _tmp33 * fv1 - _tmp38 * _tmp44;
  const Scalar _tmp46 = _tmp24 + _tmp31;
  const Scalar _tmp47 = _tmp30 + _tmp46;
  const Scalar _tmp48 = Scalar(1.0) * _tmp47;
  const Scalar _tmp49 = -_tmp48;
  const Scalar _tmp50 = _tmp25 + _tmp30 + _tmp31;
  const Scalar _tmp51 = Scalar(1.0) / (_tmp49 + _tmp50);
  const Scalar _tmp52 = _tmp16 + _tmp19;
  const Scalar _tmp53 = _tmp52 + _tmp9;
  const Scalar _tmp54 = _tmp24 + _tmp32;
  const Scalar _tmp55 = _tmp49 + _tmp54;
  const Scalar _tmp56 = _tmp20 + _tmp8;
  const Scalar _tmp57 = _tmp52 + _tmp8;
  const Scalar _tmp58 = Scalar(1.0) * _tmp57;
  const Scalar _tmp59 = _tmp51 * (-_tmp56 + _tmp58);
  const Scalar _tmp60 = _tmp55 * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (-_tmp53 + _tmp58 - _tmp60);
  const Scalar _tmp62 = Scalar(1.0) * _tmp61;
  const Scalar _tmp63 = _tmp51 * (_tmp60 * _tmp62 + Scalar(1.0));
  const Scalar _tmp64 = _tmp59 * _tmp62;
  const Scalar _tmp65 = -Scalar(1.0) * _tmp63 + Scalar(1.0) * _tmp64;
  const Scalar _tmp66 = _tmp47 + p_init1;
  const Scalar _tmp67 = _tmp66 - p_c(1, 0);
  const Scalar _tmp68 = _tmp57 + p_init0;
  const Scalar _tmp69 = _tmp68 - p_c(0, 0);
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp67 * _tmp70;
  const Scalar _tmp72 = _tmp50 + p_init1;
  const Scalar _tmp73 = _tmp72 - p_b(1, 0);
  const Scalar _tmp74 = _tmp56 + p_init0;
  const Scalar _tmp75 = _tmp74 - p_b(0, 0);
  const Scalar _tmp76 = std::pow(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp75, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = _tmp73 * _tmp76;
  const Scalar _tmp79 =
      std::sqrt(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp69, Scalar(2))));
  const Scalar _tmp80 = Scalar(1.0) / (_tmp79);
  const Scalar _tmp81 = _tmp70 * _tmp79;
  const Scalar _tmp82 = _tmp81 * (-_tmp47 * _tmp69 * _tmp80 + _tmp57 * _tmp67 * _tmp80);
  const Scalar _tmp83 = Scalar(1.0) / (_tmp71 * _tmp77 - _tmp78);
  const Scalar _tmp84 = _tmp83 * (_tmp50 * _tmp77 - _tmp56 * _tmp78 + _tmp77 * _tmp82);
  const Scalar _tmp85 = _tmp41 + _tmp42;
  const Scalar _tmp86 = _tmp39 + _tmp85;
  const Scalar _tmp87 = _tmp40 + _tmp85;
  const Scalar _tmp88 = _tmp71 * _tmp86;
  const Scalar _tmp89 = _tmp83 * (-_tmp77 * _tmp88 + _tmp78 * _tmp87);
  const Scalar _tmp90 = _tmp71 * _tmp89 + _tmp88;
  const Scalar _tmp91 = _tmp83 * (_tmp77 * _tmp86 - _tmp77 * _tmp87);
  const Scalar _tmp92 = -_tmp59 * _tmp90 + _tmp71 * _tmp91 - _tmp86;
  const Scalar _tmp93 = _tmp54 + p_init1;
  const Scalar _tmp94 = _tmp93 - p_d(1, 0);
  const Scalar _tmp95 = _tmp53 + p_init0;
  const Scalar _tmp96 = _tmp95 - p_d(0, 0);
  const Scalar _tmp97 = std::pow(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp96, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp98 = _tmp96 * _tmp97;
  const Scalar _tmp99 = _tmp94 * _tmp97;
  const Scalar _tmp100 = _tmp71 * _tmp98 - _tmp99;
  const Scalar _tmp101 = _tmp39 + _tmp43;
  const Scalar _tmp102 = -_tmp100 * _tmp89 + _tmp101 * _tmp99 - _tmp88 * _tmp98;
  const Scalar _tmp103 = -_tmp100 * _tmp91 - _tmp101 * _tmp98 - _tmp102 * _tmp59 + _tmp86 * _tmp98;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp105 = -_tmp100 * _tmp84 - _tmp53 * _tmp99 + _tmp54 * _tmp98 + _tmp82 * _tmp98;
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp108 = _tmp103 * _tmp107;
  const Scalar _tmp109 = _tmp108 * (-_tmp106 * _tmp92 + _tmp71 * _tmp84 - _tmp82);
  const Scalar _tmp110 = _tmp55 * _tmp61;
  const Scalar _tmp111 = _tmp109 + _tmp92;
  const Scalar _tmp112 = _tmp102 * _tmp104;
  const Scalar _tmp113 = _tmp109 * _tmp110 - _tmp111 * _tmp112 + _tmp90;
  const Scalar _tmp114 = Scalar(1.0) * _tmp51;
  const Scalar _tmp115 = _tmp35 * _tmp37;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp118 = _tmp48 * _tmp59 + _tmp58;
  const Scalar _tmp119 = _tmp118 * _tmp61;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp51 * (-_tmp112 * _tmp120 - _tmp119 * _tmp55 + _tmp49);
  const Scalar _tmp122 = -Scalar(1.0) * _tmp119 - Scalar(1.0) * _tmp121 + Scalar(1.0);
  const Scalar _tmp123 = _tmp115 * _tmp44 + Scalar(3.29616) * _tmp15 + _tmp21 * fv1;
  const Scalar _tmp124 = _tmp51 * _tmp55;
  const Scalar _tmp125 = Scalar(1.0) * _tmp124 * _tmp62 - Scalar(1.0) * _tmp62;
  const Scalar _tmp126 = Scalar(1.0) * _tmp89;
  const Scalar _tmp127 = _tmp126 * _tmp59 - Scalar(1.0) * _tmp91;
  const Scalar _tmp128 = _tmp108 * (-_tmp106 * _tmp127 - Scalar(1.0) * _tmp84);
  const Scalar _tmp129 = _tmp127 + _tmp128;
  const Scalar _tmp130 = _tmp110 * _tmp128 - _tmp112 * _tmp129 - _tmp126;
  const Scalar _tmp131 = _tmp38 * fh1;
  const Scalar _tmp132 = _tmp108 * _tmp62;
  const Scalar _tmp133 = Scalar(1.0) * _tmp107;
  const Scalar _tmp134 = -_tmp102 * _tmp133 + _tmp132 * _tmp55;
  const Scalar _tmp135 = fh1 * (-_tmp115 * _tmp33 + _tmp21 * _tmp38);
  const Scalar _tmp136 = Scalar(1.0) * _tmp116 * (_tmp109 * _tmp62 - _tmp113 * _tmp114) +
                         _tmp117 * _tmp122 + _tmp123 * _tmp125 +
                         Scalar(1.0) * _tmp131 * (-_tmp114 * _tmp130 + _tmp128 * _tmp62) +
                         Scalar(1.0) * _tmp135 * (-_tmp114 * _tmp134 + _tmp132) + _tmp45 * _tmp65;
  const Scalar _tmp137 = _tmp104 * _tmp98;
  const Scalar _tmp138 = _tmp100 * _tmp104;
  const Scalar _tmp139 = -_tmp129 * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 = _tmp77 * _tmp83;
  const Scalar _tmp141 = _tmp104 * _tmp120;
  const Scalar _tmp142 = _tmp120 * _tmp138;
  const Scalar _tmp143 = _tmp81 * (-_tmp140 * _tmp142 + _tmp141 * _tmp98);
  const Scalar _tmp144 = -_tmp111 * _tmp138 - _tmp71;
  const Scalar _tmp145 = -_tmp116 * _tmp81 * (_tmp111 * _tmp137 + _tmp140 * _tmp144 + Scalar(1.0)) -
                         _tmp117 * _tmp143 -
                         _tmp131 * _tmp81 * (_tmp129 * _tmp137 + _tmp139 * _tmp140) -
                         _tmp135 * _tmp81 * (-_tmp100 * _tmp133 * _tmp140 + _tmp133 * _tmp98);
  const Scalar _tmp146 = Scalar(1.0) / (_tmp145);
  const Scalar _tmp147 = std::asinh(_tmp136 * _tmp146);
  const Scalar _tmp148 = Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp145;
  const Scalar _tmp150 =
      -_tmp147 * _tmp149 - std::sqrt(Scalar(std::pow(Scalar(-_tmp66 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp151 = Scalar(0.1034955) * _tmp146;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp143;
  const Scalar _tmp154 = std::pow(_tmp145, Scalar(-2));
  const Scalar _tmp155 = _tmp143 * _tmp154;
  const Scalar _tmp156 = Scalar(0.1034955) * _tmp155;
  const Scalar _tmp157 = _tmp29 + _tmp46;
  const Scalar _tmp158 =
      (-_tmp136 * _tmp155 + _tmp146 * (-_tmp122 + _tmp125 * _tmp21 + _tmp157 * _tmp65)) /
      std::sqrt(Scalar(std::pow(_tmp136, Scalar(2)) * _tmp154 + 1));
  const Scalar _tmp159 = _tmp142 * _tmp83;
  const Scalar _tmp160 = _tmp133 * _tmp135;
  const Scalar _tmp161 = -_tmp100 * _tmp160 * _tmp83 + _tmp116 * _tmp144 * _tmp83 -
                         _tmp117 * _tmp159 + _tmp131 * _tmp139 * _tmp83;
  const Scalar _tmp162 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp163 = _tmp159 * _tmp162;
  const Scalar _tmp164 = Scalar(0.1034955) * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp166 = _tmp51 * fh1;
  const Scalar _tmp167 = _tmp123 * _tmp62;
  const Scalar _tmp168 = _tmp113 * _tmp115 * _tmp166 + _tmp117 * _tmp121 - _tmp124 * _tmp167 +
                         _tmp130 * _tmp166 * _tmp38 + _tmp134 * _tmp135 * _tmp51 + _tmp45 * _tmp63;
  const Scalar _tmp169 = std::asinh(_tmp165 * _tmp168);
  const Scalar _tmp170 = Scalar(1.0) * _tmp169;
  const Scalar _tmp171 = _tmp21 * _tmp62;
  const Scalar _tmp172 =
      (-_tmp163 * _tmp168 + _tmp165 * (-_tmp121 - _tmp124 * _tmp171 + _tmp157 * _tmp63)) /
      std::sqrt(Scalar(_tmp162 * std::pow(_tmp168, Scalar(2)) + 1));
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp174 =
      -_tmp169 * _tmp173 - std::sqrt(Scalar(std::pow(Scalar(-_tmp72 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp74 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp175 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp178 = -_tmp109 * _tmp116 * _tmp61 + _tmp117 * _tmp119 -
                         _tmp128 * _tmp131 * _tmp61 - _tmp132 * _tmp135 + _tmp167 - _tmp45 * _tmp64;
  const Scalar _tmp179 = _tmp104 * fh1;
  const Scalar _tmp180 =
      _tmp111 * _tmp115 * _tmp179 + _tmp117 * _tmp141 + _tmp129 * _tmp179 * _tmp38 + _tmp160;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp178 * _tmp181);
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 - std::sqrt(Scalar(std::pow(Scalar(-_tmp93 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp95 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = Scalar(1.0) * _tmp182;
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp141;
  const Scalar _tmp189 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp190 = _tmp141 * _tmp189;
  const Scalar _tmp191 = (_tmp178 * _tmp190 + _tmp181 * (-_tmp119 - _tmp157 * _tmp64 + _tmp171)) /
                         std::sqrt(Scalar(std::pow(_tmp178, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = Scalar(0.1034955) * _tmp190;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp3 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_a(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + p_a(1, 0)), Scalar(2)))))));
  _res(1, 0) =
      -_tmp149 * (-_tmp156 * p_c(2, 0) + Scalar(1.0) * _tmp158 * std::sinh(_tmp148) -
                  (-_tmp150 * _tmp156 + _tmp151 * (-_tmp147 * _tmp153 - _tmp149 * _tmp158)) *
                      std::sinh(_tmp152)) -
      _tmp153 * (_tmp151 * p_c(2, 0) + std::cosh(_tmp148) - std::cosh(_tmp152));
  _res(2, 0) =
      -_tmp173 * (-_tmp164 * p_b(2, 0) + Scalar(1.0) * _tmp172 * std::sinh(_tmp170) -
                  (-_tmp164 * _tmp174 + _tmp175 * (-_tmp169 * _tmp177 - _tmp172 * _tmp173)) *
                      std::sinh(_tmp176)) -
      _tmp177 * (_tmp175 * p_b(2, 0) + std::cosh(_tmp170) - std::cosh(_tmp176));
  _res(3, 0) = -_tmp183 * (Scalar(1.0) * _tmp191 * std::sinh(_tmp187) + _tmp192 * p_d(2, 0) -
                           (_tmp184 * _tmp192 + _tmp185 * (_tmp182 * _tmp188 - _tmp183 * _tmp191)) *
                               std::sinh(_tmp186)) +
               _tmp188 * (_tmp185 * p_d(2, 0) - std::cosh(_tmp186) + std::cosh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
