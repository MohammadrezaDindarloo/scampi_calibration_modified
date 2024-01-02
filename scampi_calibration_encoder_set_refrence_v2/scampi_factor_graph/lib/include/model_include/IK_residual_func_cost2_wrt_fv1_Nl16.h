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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl16
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 583

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (195)
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
  const Scalar _tmp9 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp10 = 2 * _tmp6;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = _tmp12 * _tmp4;
  const Scalar _tmp14 = _tmp11 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = 2 * _tmp4 * _tmp9;
  const Scalar _tmp17 = _tmp12 * _tmp6;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp8;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp24 = _tmp10 * _tmp4;
  const Scalar _tmp25 = _tmp12 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp34 = -_tmp33;
  const Scalar _tmp35 = -Scalar(0.010999999999999999) * _tmp22 -
                        Scalar(0.010999999999999999) * _tmp5 + Scalar(-0.010999999999999999);
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp37 = _tmp35 + _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = -_tmp8;
  const Scalar _tmp40 = _tmp15 - _tmp18;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = _tmp42 - p_a(0, 0);
  const Scalar _tmp44 = -_tmp23;
  const Scalar _tmp45 = -_tmp29;
  const Scalar _tmp46 = _tmp28 + _tmp45;
  const Scalar _tmp47 = _tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp47 + p_init1;
  const Scalar _tmp49 = _tmp48 - p_a(1, 0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp43 * _tmp50;
  const Scalar _tmp52 = _tmp35 - _tmp36;
  const Scalar _tmp53 = _tmp34 + _tmp52;
  const Scalar _tmp54 = _tmp38 * _tmp51 - _tmp51 * _tmp53;
  const Scalar _tmp55 = _tmp23 + _tmp46;
  const Scalar _tmp56 = _tmp55 + p_init1;
  const Scalar _tmp57 = _tmp56 - p_d(1, 0);
  const Scalar _tmp58 = _tmp19 + _tmp39;
  const Scalar _tmp59 = _tmp58 + p_init0;
  const Scalar _tmp60 = _tmp59 - p_d(0, 0);
  const Scalar _tmp61 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = _tmp49 * _tmp50;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp51 * _tmp62 - _tmp63);
  const Scalar _tmp65 = Scalar(1.0) * _tmp64;
  const Scalar _tmp66 = _tmp38 * _tmp62;
  const Scalar _tmp67 = -_tmp51 * _tmp66 + _tmp53 * _tmp63;
  const Scalar _tmp68 = Scalar(1.0) * _tmp58;
  const Scalar _tmp69 = -_tmp41 + _tmp68;
  const Scalar _tmp70 = Scalar(1.0) * _tmp55;
  const Scalar _tmp71 = -_tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp47 + _tmp71);
  const Scalar _tmp73 = Scalar(1.0) * _tmp72;
  const Scalar _tmp74 = -_tmp54 * _tmp65 + _tmp64 * _tmp67 * _tmp69 * _tmp73;
  const Scalar _tmp75 = _tmp30 + _tmp44;
  const Scalar _tmp76 = _tmp75 + p_init1;
  const Scalar _tmp77 = _tmp76 - p_b(1, 0);
  const Scalar _tmp78 = _tmp40 + _tmp8;
  const Scalar _tmp79 = _tmp78 + p_init0;
  const Scalar _tmp80 = _tmp79 - p_b(0, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp77 * _tmp81;
  const Scalar _tmp84 = _tmp62 * _tmp82 - _tmp83;
  const Scalar _tmp85 = _tmp64 * _tmp84;
  const Scalar _tmp86 = _tmp33 + _tmp52;
  const Scalar _tmp87 = -_tmp66 * _tmp82 - _tmp67 * _tmp85 + _tmp83 * _tmp86;
  const Scalar _tmp88 = _tmp69 * _tmp72;
  const Scalar _tmp89 = _tmp38 * _tmp82 - _tmp54 * _tmp85 - _tmp82 * _tmp86 - _tmp87 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp61 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (-_tmp55 * _tmp60 * _tmp92 + _tmp57 * _tmp58 * _tmp92);
  const Scalar _tmp95 = -_tmp41 * _tmp63 + _tmp47 * _tmp51 + _tmp51 * _tmp94;
  const Scalar _tmp96 = _tmp75 * _tmp82 - _tmp78 * _tmp83 + _tmp82 * _tmp94 - _tmp85 * _tmp95;
  const Scalar _tmp97 = _tmp90 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp89 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp65 * _tmp95 - _tmp74 * _tmp97);
  const Scalar _tmp101 = _tmp71 + _tmp75;
  const Scalar _tmp102 = _tmp101 * _tmp88;
  const Scalar _tmp103 = Scalar(1.0) / (-_tmp102 + _tmp68 - _tmp78);
  const Scalar _tmp104 = _tmp101 * _tmp103;
  const Scalar _tmp105 = _tmp100 + _tmp74;
  const Scalar _tmp106 = _tmp87 * _tmp90;
  const Scalar _tmp107 = _tmp100 * _tmp104 - _tmp105 * _tmp106 - _tmp65 * _tmp67;
  const Scalar _tmp108 = Scalar(1.0) * _tmp103;
  const Scalar _tmp109 = _tmp21 - p_c(0, 0);
  const Scalar _tmp110 = _tmp32 - p_c(1, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp110 * _tmp111;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp115 = _tmp68 + _tmp70 * _tmp88;
  const Scalar _tmp116 = _tmp103 * _tmp115;
  const Scalar _tmp117 = 0;
  const Scalar _tmp118 = _tmp72 * (-_tmp101 * _tmp116 - _tmp106 * _tmp117 + _tmp71);
  const Scalar _tmp119 = -Scalar(1.0) * _tmp116 - Scalar(1.0) * _tmp118 + Scalar(1.0);
  const Scalar _tmp120 = fh1 * (_tmp33 + _tmp37);
  const Scalar _tmp121 = -_tmp112 * _tmp120 - Scalar(3.29616) * _tmp26 - _tmp31 * fv1;
  const Scalar _tmp122 = _tmp102 * _tmp108 + Scalar(1.0);
  const Scalar _tmp123 = _tmp108 * _tmp88;
  const Scalar _tmp124 = -Scalar(1.0) * _tmp122 * _tmp73 + Scalar(1.0) * _tmp123;
  const Scalar _tmp125 = _tmp62 * _tmp64;
  const Scalar _tmp126 = _tmp125 * _tmp67 + _tmp66;
  const Scalar _tmp127 = _tmp125 * _tmp54 - _tmp126 * _tmp88 - _tmp38;
  const Scalar _tmp128 = _tmp99 * (_tmp125 * _tmp95 - _tmp127 * _tmp97 - _tmp94);
  const Scalar _tmp129 = _tmp127 + _tmp128;
  const Scalar _tmp130 = _tmp104 * _tmp128 - _tmp106 * _tmp129 + _tmp126;
  const Scalar _tmp131 = _tmp109 * _tmp111;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = _tmp120 * _tmp131 + Scalar(3.29616) * _tmp14 + _tmp20 * fv1;
  const Scalar _tmp134 = _tmp101 * _tmp108;
  const Scalar _tmp135 = -Scalar(1.0) * _tmp108 + Scalar(1.0) * _tmp134 * _tmp72;
  const Scalar _tmp136 = _tmp108 * _tmp99;
  const Scalar _tmp137 = Scalar(1.0) * _tmp98;
  const Scalar _tmp138 = _tmp134 * _tmp99 - _tmp137 * _tmp87;
  const Scalar _tmp139 = fh1 * (_tmp112 * _tmp20 - _tmp131 * _tmp31);
  const Scalar _tmp140 = Scalar(1.0) * _tmp113 * (_tmp100 * _tmp108 - _tmp107 * _tmp73) +
                         _tmp114 * _tmp119 + _tmp121 * _tmp124 +
                         Scalar(1.0) * _tmp132 * (_tmp108 * _tmp128 - _tmp130 * _tmp73) +
                         _tmp133 * _tmp135 + Scalar(1.0) * _tmp139 * (_tmp136 - _tmp138 * _tmp73);
  const Scalar _tmp141 = _tmp82 * _tmp90;
  const Scalar _tmp142 = _tmp84 * _tmp90;
  const Scalar _tmp143 = -_tmp129 * _tmp142 - _tmp62;
  const Scalar _tmp144 = _tmp51 * _tmp64;
  const Scalar _tmp145 = _tmp65 * _tmp84 * _tmp98;
  const Scalar _tmp146 = -_tmp105 * _tmp142 + Scalar(1.0);
  const Scalar _tmp147 = _tmp117 * _tmp90;
  const Scalar _tmp148 = _tmp147 * _tmp85;
  const Scalar _tmp149 = _tmp93 * (_tmp147 * _tmp82 - _tmp148 * _tmp51);
  const Scalar _tmp150 = -_tmp113 * _tmp93 * (_tmp105 * _tmp141 + _tmp144 * _tmp146) -
                         _tmp114 * _tmp149 -
                         _tmp132 * _tmp93 * (_tmp129 * _tmp141 + _tmp143 * _tmp144 + Scalar(1.0)) -
                         _tmp139 * _tmp93 * (_tmp137 * _tmp82 - _tmp145 * _tmp51);
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp140 * _tmp151);
  const Scalar _tmp153 = Scalar(1.0) * _tmp152;
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp155 =
      -_tmp152 * _tmp154 - std::sqrt(Scalar(std::pow(Scalar(-_tmp56 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp59 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp156 = Scalar(0.1034955) * _tmp151;
  const Scalar _tmp157 = _tmp155 * _tmp156;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp159 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp160 = _tmp149 * _tmp159;
  const Scalar _tmp161 = _tmp27 + _tmp44 + _tmp45;
  const Scalar _tmp162 =
      (-_tmp140 * _tmp160 + _tmp151 * (-_tmp119 + _tmp124 * _tmp161 + _tmp135 * _tmp20)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp163 = _tmp122 * _tmp72;
  const Scalar _tmp164 = _tmp108 * _tmp133;
  const Scalar _tmp165 = _tmp101 * _tmp72;
  const Scalar _tmp166 = _tmp107 * _tmp113 * _tmp72 + _tmp114 * _tmp118 + _tmp121 * _tmp163 +
                         _tmp130 * _tmp132 * _tmp72 + _tmp138 * _tmp139 * _tmp72 -
                         _tmp164 * _tmp165;
  const Scalar _tmp167 = _tmp114 * _tmp147;
  const Scalar _tmp168 = _tmp113 * _tmp146 * _tmp64 + _tmp132 * _tmp143 * _tmp64 -
                         _tmp139 * _tmp145 - _tmp167 * _tmp85;
  const Scalar _tmp169 = Scalar(1.0) / (_tmp168);
  const Scalar _tmp170 = std::asinh(_tmp166 * _tmp169);
  const Scalar _tmp171 = Scalar(1.0) * _tmp170;
  const Scalar _tmp172 = Scalar(9.6622558468725703) * _tmp168;
  const Scalar _tmp173 =
      -_tmp170 * _tmp172 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp174 = Scalar(0.1034955) * _tmp169;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp177 = _tmp176 * _tmp85;
  const Scalar _tmp178 = std::pow(_tmp168, Scalar(-2));
  const Scalar _tmp179 = _tmp148 * _tmp178;
  const Scalar _tmp180 = _tmp108 * _tmp20;
  const Scalar _tmp181 =
      (-_tmp166 * _tmp179 + _tmp169 * (-_tmp118 + _tmp161 * _tmp163 - _tmp165 * _tmp180)) /
      std::sqrt(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp178 + 1));
  const Scalar _tmp182 = _tmp90 * fh1;
  const Scalar _tmp183 =
      _tmp105 * _tmp112 * _tmp182 + _tmp129 * _tmp131 * _tmp182 + _tmp137 * _tmp139 + _tmp167;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = -_tmp100 * _tmp103 * _tmp113 - _tmp103 * _tmp128 * _tmp132 +
                         _tmp114 * _tmp116 - _tmp121 * _tmp123 - _tmp136 * _tmp139 + _tmp164;
  const Scalar _tmp186 = std::asinh(_tmp184 * _tmp185);
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp183;
  const Scalar _tmp188 =
      -_tmp186 * _tmp187 - std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp184;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = Scalar(1.0) * _tmp186;
  const Scalar _tmp192 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp193 = _tmp147 * _tmp192;
  const Scalar _tmp194 = (_tmp184 * (-_tmp116 - _tmp123 * _tmp161 + _tmp180) + _tmp185 * _tmp193) /
                         std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp192 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp3 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(Scalar(0.1034955) * _tmp0 *
                         (-_tmp1 * _tmp3 -
                          std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_c(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_c(1, 0)), Scalar(2)))))));
  _res(1, 0) = _tmp154 * (-Scalar(1.0) * _tmp162 * std::cosh(_tmp153) -
                          (-Scalar(0.1034955) * _tmp155 * _tmp160 +
                           _tmp156 * (-_tmp152 * _tmp158 - _tmp154 * _tmp162)) *
                              std::cosh(_tmp157)) +
               _tmp158 * (-std::sinh(_tmp153) - std::sinh(_tmp157));
  _res(2, 0) = _tmp172 * (-Scalar(1.0) * _tmp181 * std::cosh(_tmp171) -
                          (-Scalar(0.1034955) * _tmp173 * _tmp179 +
                           _tmp174 * (-_tmp170 * _tmp177 - _tmp172 * _tmp181)) *
                              std::cosh(_tmp175)) +
               _tmp177 * (-std::sinh(_tmp171) - std::sinh(_tmp175));
  _res(3, 0) = -_tmp176 * (-std::sinh(_tmp190) - std::sinh(_tmp191)) +
               _tmp187 * (-Scalar(1.0) * _tmp194 * std::cosh(_tmp191) -
                          (Scalar(0.1034955) * _tmp188 * _tmp193 +
                           _tmp189 * (_tmp176 * _tmp186 - _tmp187 * _tmp194)) *
                              std::cosh(_tmp190));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
