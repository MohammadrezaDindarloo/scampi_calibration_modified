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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl12
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 631

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp8 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                        _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp11 = 2 * _tmp5;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                        _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp14 = 2 * _tmp7;
  const Scalar _tmp15 = _tmp13 * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp10 * _tmp14;
  const Scalar _tmp19 = _tmp11 * _tmp13;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 - Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp17 + _tmp20;
  const Scalar _tmp22 = _tmp21 + _tmp9;
  const Scalar _tmp23 = _tmp22 + p_init0;
  const Scalar _tmp24 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp6 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp26 = _tmp11 * _tmp7;
  const Scalar _tmp27 = 2 * _tmp10 * _tmp13;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = _tmp25 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 =
      -_tmp4 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp23 + p_c(0, 0)), Scalar(2)) +
                                      std::pow(Scalar(-_tmp33 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 = Scalar(0.1034955) * _tmp37;
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp41 = _tmp29 - _tmp30;
  const Scalar _tmp42 = _tmp25 + _tmp41;
  const Scalar _tmp43 = _tmp42 + p_init1;
  const Scalar _tmp44 = _tmp43 - p_d(1, 0);
  const Scalar _tmp45 = -_tmp9;
  const Scalar _tmp46 = _tmp21 + _tmp45;
  const Scalar _tmp47 = _tmp46 + p_init0;
  const Scalar _tmp48 = _tmp47 - p_d(0, 0);
  const Scalar _tmp49 = std::pow(Scalar(std::pow(_tmp44, Scalar(2)) + std::pow(_tmp48, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp50 = _tmp48 * _tmp49;
  const Scalar _tmp51 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp52 = -_tmp51;
  const Scalar _tmp53 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp8;
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp55 = _tmp53 - _tmp54;
  const Scalar _tmp56 = _tmp52 + _tmp55;
  const Scalar _tmp57 = _tmp50 * _tmp56;
  const Scalar _tmp58 = _tmp53 + _tmp54;
  const Scalar _tmp59 = _tmp52 + _tmp58;
  const Scalar _tmp60 = _tmp44 * _tmp49;
  const Scalar _tmp61 = -_tmp25;
  const Scalar _tmp62 = _tmp41 + _tmp61;
  const Scalar _tmp63 = _tmp62 + p_init1;
  const Scalar _tmp64 = _tmp63 - p_a(1, 0);
  const Scalar _tmp65 = _tmp17 - _tmp20;
  const Scalar _tmp66 = _tmp45 + _tmp65;
  const Scalar _tmp67 = _tmp66 + p_init0;
  const Scalar _tmp68 = _tmp67 - p_a(0, 0);
  const Scalar _tmp69 = Scalar(1.0) / (_tmp68);
  const Scalar _tmp70 = _tmp64 * _tmp69;
  const Scalar _tmp71 = _tmp31 + _tmp61;
  const Scalar _tmp72 = _tmp71 + p_init1;
  const Scalar _tmp73 = _tmp72 - p_b(1, 0);
  const Scalar _tmp74 = _tmp65 + _tmp9;
  const Scalar _tmp75 = _tmp74 + p_init0;
  const Scalar _tmp76 = _tmp75 - p_b(0, 0);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp76 * _tmp77;
  const Scalar _tmp79 = _tmp56 * _tmp78;
  const Scalar _tmp80 = _tmp51 + _tmp55;
  const Scalar _tmp81 = _tmp73 * _tmp77;
  const Scalar _tmp82 = -_tmp70 * _tmp79 + _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp50 * _tmp70 - _tmp60;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp70 * _tmp78 - _tmp81);
  const Scalar _tmp85 = _tmp83 * _tmp84;
  const Scalar _tmp86 = -_tmp57 * _tmp70 + _tmp59 * _tmp60 - _tmp82 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) * _tmp62;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp71 + _tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp66;
  const Scalar _tmp91 = _tmp89 * (-_tmp74 + _tmp90);
  const Scalar _tmp92 = -_tmp78 * _tmp80 + _tmp79;
  const Scalar _tmp93 = -_tmp50 * _tmp59 + _tmp57 - _tmp85 * _tmp92 - _tmp86 * _tmp91;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp87 * _tmp91 + _tmp90;
  const Scalar _tmp96 = 0;
  const Scalar _tmp97 = _tmp78 * _tmp85;
  const Scalar _tmp98 =
      std::sqrt(Scalar(std::pow(_tmp64, Scalar(2)) + std::pow(_tmp68, Scalar(2))));
  const Scalar _tmp99 = _tmp69 * _tmp98;
  const Scalar _tmp100 = _tmp23 - p_c(0, 0);
  const Scalar _tmp101 = _tmp33 - p_c(1, 0);
  const Scalar _tmp102 =
      std::pow(Scalar(std::pow(_tmp100, Scalar(2)) + std::pow(_tmp101, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp103 = _tmp101 * _tmp102;
  const Scalar _tmp104 = _tmp100 * _tmp102;
  const Scalar _tmp105 = _tmp103 * _tmp22 - _tmp104 * _tmp32;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp107 = _tmp99 * (-_tmp106 * _tmp62 * _tmp68 + _tmp106 * _tmp64 * _tmp66);
  const Scalar _tmp108 = _tmp107 * _tmp78 + _tmp71 * _tmp78 - _tmp74 * _tmp81;
  const Scalar _tmp109 = _tmp107 * _tmp50 - _tmp108 * _tmp85 + _tmp42 * _tmp50 - _tmp46 * _tmp60;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp111 = Scalar(1.0) * _tmp110;
  const Scalar _tmp112 = _tmp105 * _tmp99 * (_tmp111 * _tmp50 - _tmp111 * _tmp97);
  const Scalar _tmp113 = Scalar(1.0) * _tmp84;
  const Scalar _tmp114 = _tmp113 * _tmp82;
  const Scalar _tmp115 = -_tmp113 * _tmp92 + _tmp114 * _tmp91;
  const Scalar _tmp116 = _tmp109 * _tmp94;
  const Scalar _tmp117 = _tmp110 * _tmp93;
  const Scalar _tmp118 = _tmp117 * (-_tmp108 * _tmp113 - _tmp115 * _tmp116);
  const Scalar _tmp119 = _tmp94 * (_tmp115 + _tmp118);
  const Scalar _tmp120 = _tmp84 * (-_tmp119 * _tmp83 + Scalar(1.0));
  const Scalar _tmp121 = _tmp103 * _tmp99 * (_tmp119 * _tmp50 + _tmp120 * _tmp78);
  const Scalar _tmp122 = _tmp70 * _tmp84;
  const Scalar _tmp123 = _tmp122 * _tmp82 + _tmp56 * _tmp70;
  const Scalar _tmp124 = _tmp122 * _tmp92 - _tmp123 * _tmp91 - _tmp56;
  const Scalar _tmp125 = _tmp117 * (-_tmp107 + _tmp108 * _tmp122 - _tmp116 * _tmp124);
  const Scalar _tmp126 = _tmp94 * (_tmp124 + _tmp125);
  const Scalar _tmp127 = _tmp84 * (-_tmp126 * _tmp83 - _tmp70);
  const Scalar _tmp128 = _tmp104 * _tmp99 * (_tmp126 * _tmp50 + _tmp127 * _tmp78 + Scalar(1.0));
  const Scalar _tmp129 = -_tmp112 * fh1 - _tmp121 * fh1 - _tmp128 * fh1 -
                         _tmp40 * _tmp99 * (_tmp50 * _tmp96 - _tmp96 * _tmp97);
  const Scalar _tmp130 = _tmp42 + _tmp88;
  const Scalar _tmp131 = _tmp130 * _tmp91;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 - _tmp46 + _tmp90);
  const Scalar _tmp133 = _tmp132 * _tmp95;
  const Scalar _tmp134 = -_tmp130 * _tmp133 - _tmp86 * _tmp96 + _tmp88;
  const Scalar _tmp135 = Scalar(1.0) * _tmp89;
  const Scalar _tmp136 = Scalar(1.0) * _tmp132;
  const Scalar _tmp137 = _tmp117 * _tmp136;
  const Scalar _tmp138 = -_tmp111 * _tmp86 + _tmp130 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * _tmp105 * (-_tmp135 * _tmp138 + _tmp137);
  const Scalar _tmp140 = _tmp130 * _tmp132;
  const Scalar _tmp141 = _tmp123 + _tmp125 * _tmp140 - _tmp126 * _tmp86;
  const Scalar _tmp142 = Scalar(1.0) * _tmp104 * (_tmp125 * _tmp136 - _tmp135 * _tmp141);
  const Scalar _tmp143 = _tmp51 + _tmp58;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = -_tmp103 * _tmp144 - Scalar(3.29616) * _tmp28 - _tmp32 * fv1;
  const Scalar _tmp146 = _tmp131 * _tmp136 + Scalar(1.0);
  const Scalar _tmp147 = _tmp136 * _tmp91;
  const Scalar _tmp148 = -Scalar(1.0) * _tmp135 * _tmp146 + Scalar(1.0) * _tmp147;
  const Scalar _tmp149 = _tmp104 * _tmp144 + Scalar(3.29616) * _tmp16 + _tmp22 * fv1;
  const Scalar _tmp150 = _tmp130 * _tmp89;
  const Scalar _tmp151 = _tmp136 * _tmp150;
  const Scalar _tmp152 = -Scalar(1.0) * _tmp136 + Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = -_tmp114 + _tmp118 * _tmp140 - _tmp119 * _tmp86;
  const Scalar _tmp154 = Scalar(1.0) * _tmp103 * (_tmp118 * _tmp136 - _tmp135 * _tmp153);
  const Scalar _tmp155 =
      _tmp139 * fh1 + _tmp142 * fh1 + _tmp145 * _tmp148 + _tmp149 * _tmp152 + _tmp154 * fh1 +
      Scalar(1.0) * _tmp40 * (-_tmp134 * _tmp135 - _tmp136 * _tmp95 + Scalar(1.0));
  const Scalar _tmp156 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp157 = std::asinh(_tmp155 * _tmp156);
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp157;
  const Scalar _tmp159 =
      -_tmp129 * _tmp158 - std::sqrt(Scalar(std::pow(Scalar(-_tmp63 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp156;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp129;
  const Scalar _tmp163 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp164 = -_tmp112 - _tmp121 - _tmp128;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = _tmp103 * _tmp143;
  const Scalar _tmp167 = _tmp104 * _tmp143;
  const Scalar _tmp168 = (-_tmp155 * _tmp165 + _tmp156 * (_tmp139 + _tmp142 - _tmp148 * _tmp166 +
                                                          _tmp152 * _tmp167 + _tmp154)) /
                         std::sqrt(Scalar(std::pow(_tmp155, Scalar(2)) * _tmp163 + 1));
  const Scalar _tmp169 = Scalar(0.1034955) * _tmp165;
  const Scalar _tmp170 = Scalar(1.0) * _tmp157;
  const Scalar _tmp171 = _tmp146 * _tmp89;
  const Scalar _tmp172 = _tmp105 * _tmp138 * _tmp89;
  const Scalar _tmp173 = _tmp136 * _tmp149;
  const Scalar _tmp174 = _tmp104 * _tmp141 * _tmp89;
  const Scalar _tmp175 = _tmp103 * _tmp153 * _tmp89;
  const Scalar _tmp176 = _tmp134 * _tmp40 * _tmp89 + _tmp145 * _tmp171 - _tmp150 * _tmp173 +
                         _tmp172 * fh1 + _tmp174 * fh1 + _tmp175 * fh1;
  const Scalar _tmp177 = _tmp40 * _tmp96;
  const Scalar _tmp178 = _tmp105 * _tmp111;
  const Scalar _tmp179 = _tmp178 * fh1;
  const Scalar _tmp180 = _tmp103 * _tmp120;
  const Scalar _tmp181 = _tmp104 * _tmp127;
  const Scalar _tmp182 = -_tmp177 * _tmp85 - _tmp179 * _tmp85 + _tmp180 * fh1 + _tmp181 * fh1;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp184 = std::asinh(_tmp176 * _tmp183);
  const Scalar _tmp185 = Scalar(1.0) * _tmp184;
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp188 =
      -_tmp182 * _tmp187 - std::sqrt(Scalar(std::pow(Scalar(-_tmp72 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp75 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp189 = _tmp186 * _tmp188;
  const Scalar _tmp190 = -_tmp178 * _tmp85 + _tmp180 + _tmp181;
  const Scalar _tmp191 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = Scalar(0.1034955) * _tmp192;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp195 = (-_tmp176 * _tmp192 + _tmp183 * (-_tmp151 * _tmp167 - _tmp166 * _tmp171 +
                                                          _tmp172 + _tmp174 + _tmp175)) /
                         std::sqrt(Scalar(std::pow(_tmp176, Scalar(2)) * _tmp191 + 1));
  const Scalar _tmp196 = _tmp104 * _tmp125 * _tmp132;
  const Scalar _tmp197 = _tmp103 * _tmp118 * _tmp132;
  const Scalar _tmp198 = _tmp105 * _tmp137;
  const Scalar _tmp199 = _tmp133 * _tmp40 - _tmp145 * _tmp147 + _tmp173 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = _tmp104 * _tmp126;
  const Scalar _tmp201 = _tmp103 * _tmp119;
  const Scalar _tmp202 = _tmp177 + _tmp179 + _tmp200 * fh1 + _tmp201 * fh1;
  const Scalar _tmp203 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp204 = std::asinh(_tmp199 * _tmp203);
  const Scalar _tmp205 = Scalar(1.0) * _tmp204;
  const Scalar _tmp206 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp207 = _tmp178 + _tmp200 + _tmp201;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = (-_tmp199 * _tmp208 + _tmp203 * (_tmp136 * _tmp167 + _tmp147 * _tmp166 -
                                                          _tmp196 - _tmp197 - _tmp198)) /
                         std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp206 + 1));
  const Scalar _tmp210 = Scalar(0.1034955) * _tmp208;
  const Scalar _tmp211 = Scalar(9.6622558468725703) * _tmp204;
  const Scalar _tmp212 =
      -_tmp202 * _tmp211 - std::sqrt(Scalar(std::pow(Scalar(-_tmp43 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp47 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp213 = Scalar(0.1034955) * _tmp203;
  const Scalar _tmp214 = _tmp212 * _tmp213;
  const Scalar _tmp215 = Scalar(9.6622558468725703) * _tmp202;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp35 * p_c(2, 0) -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp37 * _tmp39 * fv1 * std::sinh(_tmp3) - _tmp38 * p_c(2, 0) -
           (-_tmp34 * _tmp38 + _tmp35 * (Scalar(9.6622558468725703) * _tmp1 * _tmp39 - _tmp4)) *
               std::sinh(_tmp36)) -
      Scalar(9.6622558468725703) * std::cosh(_tmp3) +
      Scalar(9.6622558468725703) * std::cosh(_tmp36);
  _res(1, 0) =
      -_tmp162 * (Scalar(1.0) * _tmp168 * std::sinh(_tmp170) - _tmp169 * p_a(2, 0) -
                  (-_tmp159 * _tmp169 + _tmp160 * (-_tmp158 * _tmp164 - _tmp162 * _tmp168)) *
                      std::sinh(_tmp161)) -
      Scalar(9.6622558468725703) * _tmp164 *
          (_tmp160 * p_a(2, 0) - std::cosh(_tmp161) + std::cosh(_tmp170));
  _res(2, 0) = -Scalar(9.6622558468725703) * _tmp190 *
                   (_tmp186 * p_b(2, 0) + std::cosh(_tmp185) - std::cosh(_tmp189)) -
               _tmp194 * (-_tmp193 * p_b(2, 0) + Scalar(1.0) * _tmp195 * std::sinh(_tmp185) -
                          (_tmp186 * (-_tmp187 * _tmp190 - _tmp194 * _tmp195) - _tmp188 * _tmp193) *
                              std::sinh(_tmp189));
  _res(3, 0) =
      -Scalar(9.6622558468725703) * _tmp207 *
          (_tmp213 * p_d(2, 0) + std::cosh(_tmp205) - std::cosh(_tmp214)) -
      _tmp215 * (Scalar(1.0) * _tmp209 * std::sinh(_tmp205) - _tmp210 * p_d(2, 0) -
                 (-_tmp210 * _tmp212 + _tmp213 * (-_tmp207 * _tmp211 - _tmp209 * _tmp215)) *
                     std::sinh(_tmp214));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym