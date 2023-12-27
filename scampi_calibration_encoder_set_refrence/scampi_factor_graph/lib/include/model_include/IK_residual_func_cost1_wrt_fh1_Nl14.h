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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 639

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (215)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp6 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp8 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                        _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp11 = 2 * _tmp10 * _tmp7;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = _tmp12 * _tmp5;
  const Scalar _tmp14 = _tmp11 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = 2 * _tmp5;
  const Scalar _tmp17 = _tmp10 * _tmp16;
  const Scalar _tmp18 = _tmp12 * _tmp7;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp15 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp9;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp24 = _tmp16 * _tmp7;
  const Scalar _tmp25 = _tmp10 * _tmp12;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -2 * std::pow(_tmp10, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp28 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp30 = _tmp27 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 =
      -Scalar(0.1034955) * _tmp4 * fh1 -
      Scalar(0.1034955) * std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_c(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp34 = _tmp0 * _tmp33;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(0.1034955) * p_c(2, 0);
  const Scalar _tmp38 = _tmp27 - _tmp29;
  const Scalar _tmp39 = _tmp23 + _tmp38;
  const Scalar _tmp40 = _tmp39 + p_init1;
  const Scalar _tmp41 = _tmp40 - p_b(1, 0);
  const Scalar _tmp42 = _tmp15 - _tmp19;
  const Scalar _tmp43 = _tmp42 + _tmp9;
  const Scalar _tmp44 = _tmp43 + p_init0;
  const Scalar _tmp45 = _tmp44 - p_b(0, 0);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = -_tmp23;
  const Scalar _tmp49 = _tmp30 + _tmp48;
  const Scalar _tmp50 = _tmp49 + p_init1;
  const Scalar _tmp51 = _tmp50 - p_d(1, 0);
  const Scalar _tmp52 = -_tmp9;
  const Scalar _tmp53 = _tmp20 + _tmp52;
  const Scalar _tmp54 = _tmp53 + p_init0;
  const Scalar _tmp55 = _tmp54 - p_d(0, 0);
  const Scalar _tmp56 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp55, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp55 * _tmp56;
  const Scalar _tmp58 = _tmp51 * _tmp56;
  const Scalar _tmp59 = _tmp47 * _tmp57 - _tmp58;
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp61 = -_tmp60;
  const Scalar _tmp62 = -Scalar(0.010999999999999999) * _tmp28 -
                        Scalar(0.010999999999999999) * _tmp6 + Scalar(-0.010999999999999999);
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp64 = _tmp62 + _tmp63;
  const Scalar _tmp65 = _tmp61 + _tmp64;
  const Scalar _tmp66 = _tmp42 + _tmp52;
  const Scalar _tmp67 = _tmp66 + p_init0;
  const Scalar _tmp68 = _tmp67 - p_a(0, 0);
  const Scalar _tmp69 = _tmp38 + _tmp48;
  const Scalar _tmp70 = _tmp69 + p_init1;
  const Scalar _tmp71 = _tmp70 - p_a(1, 0);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp62 - _tmp63;
  const Scalar _tmp75 = _tmp61 + _tmp74;
  const Scalar _tmp76 = _tmp65 * _tmp73 - _tmp73 * _tmp75;
  const Scalar _tmp77 = _tmp71 * _tmp72;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp47 * _tmp73 - _tmp77);
  const Scalar _tmp79 = _tmp59 * _tmp78;
  const Scalar _tmp80 = _tmp60 + _tmp74;
  const Scalar _tmp81 = _tmp57 * _tmp65;
  const Scalar _tmp82 = _tmp47 * _tmp65;
  const Scalar _tmp83 = -_tmp73 * _tmp82 + _tmp75 * _tmp77;
  const Scalar _tmp84 = -_tmp47 * _tmp81 + _tmp58 * _tmp80 - _tmp79 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp39;
  const Scalar _tmp86 = -_tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp69 + _tmp86);
  const Scalar _tmp88 = Scalar(1.0) * _tmp43;
  const Scalar _tmp89 = _tmp87 * (-_tmp66 + _tmp88);
  const Scalar _tmp90 = -_tmp57 * _tmp80 - _tmp76 * _tmp79 + _tmp81 - _tmp84 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp47 * _tmp78;
  const Scalar _tmp93 = _tmp82 + _tmp83 * _tmp92;
  const Scalar _tmp94 = -_tmp65 + _tmp76 * _tmp92 - _tmp89 * _tmp93;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp46 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (-_tmp39 * _tmp45 * _tmp96 + _tmp41 * _tmp43 * _tmp96);
  const Scalar _tmp99 = -_tmp66 * _tmp77 + _tmp69 * _tmp73 + _tmp73 * _tmp98;
  const Scalar _tmp100 = _tmp49 * _tmp57 - _tmp53 * _tmp58 + _tmp57 * _tmp98 - _tmp79 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp91;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp90;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp94 + _tmp92 * _tmp99 - _tmp98);
  const Scalar _tmp105 = _tmp91 * (_tmp104 + _tmp94);
  const Scalar _tmp106 = -_tmp105 * _tmp59 - _tmp47;
  const Scalar _tmp107 = _tmp73 * _tmp78;
  const Scalar _tmp108 = _tmp22 - p_c(0, 0);
  const Scalar _tmp109 = _tmp32 - p_c(1, 0);
  const Scalar _tmp110 =
      std::pow(Scalar(std::pow(_tmp108, Scalar(2)) + std::pow(_tmp109, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp111 = _tmp108 * _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp97 * (_tmp105 * _tmp57 + _tmp106 * _tmp107 + Scalar(1.0));
  const Scalar _tmp113 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp114 = _tmp85 * _tmp89 + _tmp88;
  const Scalar _tmp115 = 0;
  const Scalar _tmp116 = Scalar(1.0) * _tmp78;
  const Scalar _tmp117 = _tmp116 * _tmp83;
  const Scalar _tmp118 = -_tmp116 * _tmp76 + _tmp117 * _tmp89;
  const Scalar _tmp119 = _tmp103 * (-_tmp101 * _tmp118 - _tmp116 * _tmp99);
  const Scalar _tmp120 = _tmp91 * (_tmp118 + _tmp119);
  const Scalar _tmp121 = -_tmp120 * _tmp59 + Scalar(1.0);
  const Scalar _tmp122 = _tmp109 * _tmp110;
  const Scalar _tmp123 = _tmp122 * _tmp97 * (_tmp107 * _tmp121 + _tmp120 * _tmp57);
  const Scalar _tmp124 = -_tmp111 * _tmp31 + _tmp122 * _tmp21;
  const Scalar _tmp125 = Scalar(1.0) * _tmp102;
  const Scalar _tmp126 = _tmp102 * _tmp116 * _tmp59;
  const Scalar _tmp127 = _tmp124 * _tmp97 * (_tmp125 * _tmp57 - _tmp126 * _tmp73);
  const Scalar _tmp128 = -_tmp112 * fh1 -
                         _tmp113 * _tmp97 * (_tmp115 * _tmp57 - _tmp115 * _tmp73 * _tmp79) -
                         _tmp123 * fh1 - _tmp127 * fh1;
  const Scalar _tmp129 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp130 = -_tmp112 - _tmp123 - _tmp127;
  const Scalar _tmp131 = _tmp129 * _tmp130;
  const Scalar _tmp132 = Scalar(0.1034955) * _tmp131;
  const Scalar _tmp133 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp134 = _tmp49 + _tmp86;
  const Scalar _tmp135 = _tmp134 * _tmp89;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp53 + _tmp88);
  const Scalar _tmp137 = _tmp134 * _tmp136;
  const Scalar _tmp138 = -_tmp117 + _tmp119 * _tmp137 - _tmp120 * _tmp84;
  const Scalar _tmp139 = Scalar(1.0) * _tmp87;
  const Scalar _tmp140 = Scalar(1.0) * _tmp136;
  const Scalar _tmp141 = Scalar(1.0) * _tmp122 * (_tmp119 * _tmp140 - _tmp138 * _tmp139);
  const Scalar _tmp142 = _tmp103 * _tmp140;
  const Scalar _tmp143 = _tmp87 * (-_tmp125 * _tmp84 + _tmp134 * _tmp142);
  const Scalar _tmp144 = Scalar(1.0) * _tmp124 * (_tmp142 - Scalar(1.0) * _tmp143);
  const Scalar _tmp145 = _tmp114 * _tmp136;
  const Scalar _tmp146 = _tmp87 * (-_tmp115 * _tmp84 - _tmp134 * _tmp145 + _tmp86);
  const Scalar _tmp147 = _tmp60 + _tmp64;
  const Scalar _tmp148 = _tmp147 * fh1;
  const Scalar _tmp149 = -_tmp122 * _tmp148 - Scalar(3.29616) * _tmp26 - _tmp31 * fv1;
  const Scalar _tmp150 = _tmp135 * _tmp140 + Scalar(1.0);
  const Scalar _tmp151 = _tmp140 * _tmp89;
  const Scalar _tmp152 = -Scalar(1.0) * _tmp139 * _tmp150 + Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = _tmp111 * _tmp148 + Scalar(3.29616) * _tmp14 + _tmp21 * fv1;
  const Scalar _tmp154 = _tmp134 * _tmp87;
  const Scalar _tmp155 = Scalar(1.0) * _tmp140 * _tmp154 - Scalar(1.0) * _tmp140;
  const Scalar _tmp156 = _tmp104 * _tmp137 - _tmp105 * _tmp84 + _tmp93;
  const Scalar _tmp157 = Scalar(1.0) * _tmp111 * (_tmp104 * _tmp140 - _tmp139 * _tmp156);
  const Scalar _tmp158 =
      Scalar(1.0) * _tmp113 * (-_tmp114 * _tmp140 - Scalar(1.0) * _tmp146 + Scalar(1.0)) +
      _tmp141 * fh1 + _tmp144 * fh1 + _tmp149 * _tmp152 + _tmp153 * _tmp155 + _tmp157 * fh1;
  const Scalar _tmp159 = std::asinh(_tmp133 * _tmp158);
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp161 =
      -_tmp128 * _tmp160 - std::sqrt(Scalar(std::pow(Scalar(-_tmp40 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp163 = _tmp122 * _tmp147;
  const Scalar _tmp164 = _tmp111 * _tmp147;
  const Scalar _tmp165 = (-_tmp131 * _tmp158 + _tmp133 * (_tmp141 + _tmp144 - _tmp152 * _tmp163 +
                                                          _tmp155 * _tmp164 + _tmp157)) /
                         std::sqrt(Scalar(_tmp129 * std::pow(_tmp158, Scalar(2)) + 1));
  const Scalar _tmp166 = Scalar(0.1034955) * _tmp133;
  const Scalar _tmp167 = _tmp161 * _tmp166;
  const Scalar _tmp168 = Scalar(1.0) * _tmp159;
  const Scalar _tmp169 = _tmp124 * _tmp143;
  const Scalar _tmp170 = _tmp122 * _tmp138 * _tmp87;
  const Scalar _tmp171 = _tmp111 * _tmp87;
  const Scalar _tmp172 = _tmp156 * _tmp171;
  const Scalar _tmp173 = _tmp150 * _tmp87;
  const Scalar _tmp174 = _tmp140 * _tmp153;
  const Scalar _tmp175 = _tmp113 * _tmp146 + _tmp149 * _tmp173 - _tmp154 * _tmp174 + _tmp169 * fh1 +
                         _tmp170 * fh1 + _tmp172 * fh1;
  const Scalar _tmp176 = _tmp121 * _tmp122 * _tmp78;
  const Scalar _tmp177 = _tmp113 * _tmp115;
  const Scalar _tmp178 = _tmp124 * _tmp126;
  const Scalar _tmp179 = _tmp106 * _tmp111 * _tmp78;
  const Scalar _tmp180 = _tmp176 * fh1 - _tmp177 * _tmp79 - _tmp178 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp175 * _tmp181);
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp184 =
      -_tmp182 * _tmp183 - std::sqrt(Scalar(std::pow(Scalar(-_tmp67 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp70 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = _tmp176 - _tmp178 + _tmp179;
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp190 = _tmp187 * _tmp189;
  const Scalar _tmp191 =
      (-_tmp175 * _tmp190 + _tmp181 * (-_tmp134 * _tmp140 * _tmp147 * _tmp171 - _tmp163 * _tmp173 +
                                       _tmp169 + _tmp170 + _tmp172)) /
      std::sqrt(Scalar(std::pow(_tmp175, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = Scalar(0.1034955) * _tmp190;
  const Scalar _tmp193 = Scalar(1.0) * _tmp182;
  const Scalar _tmp194 = _tmp124 * _tmp125;
  const Scalar _tmp195 = _tmp120 * _tmp122;
  const Scalar _tmp196 = _tmp105 * _tmp111;
  const Scalar _tmp197 = _tmp177 + _tmp194 * fh1 + _tmp195 * fh1 + _tmp196 * fh1;
  const Scalar _tmp198 = std::pow(_tmp197, Scalar(-2));
  const Scalar _tmp199 = _tmp194 + _tmp195 + _tmp196;
  const Scalar _tmp200 = _tmp198 * _tmp199;
  const Scalar _tmp201 = Scalar(0.1034955) * _tmp200;
  const Scalar _tmp202 = _tmp124 * _tmp142;
  const Scalar _tmp203 = _tmp119 * _tmp122 * _tmp136;
  const Scalar _tmp204 = _tmp104 * _tmp111 * _tmp136;
  const Scalar _tmp205 = _tmp113 * _tmp145 - _tmp149 * _tmp151 + _tmp174 - _tmp202 * fh1 -
                         _tmp203 * fh1 - _tmp204 * fh1;
  const Scalar _tmp206 = Scalar(1.0) / (_tmp197);
  const Scalar _tmp207 = std::asinh(_tmp205 * _tmp206);
  const Scalar _tmp208 = Scalar(1.0) * _tmp207;
  const Scalar _tmp209 = (-_tmp200 * _tmp205 + _tmp206 * (_tmp140 * _tmp164 + _tmp151 * _tmp163 -
                                                          _tmp202 - _tmp203 - _tmp204)) /
                         std::sqrt(Scalar(_tmp198 * std::pow(_tmp205, Scalar(2)) + 1));
  const Scalar _tmp210 = Scalar(9.6622558468725703) * _tmp197;
  const Scalar _tmp211 =
      -_tmp207 * _tmp210 - std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp199;
  const Scalar _tmp213 = Scalar(0.1034955) * _tmp206;
  const Scalar _tmp214 = _tmp211 * _tmp213;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp0 * _tmp37 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::sinh(_tmp3) - _tmp35 * _tmp37 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp36 - _tmp4) -
            _tmp33 * _tmp35) *
               std::sinh(_tmp34)) -
      Scalar(9.6622558468725703) * std::cosh(_tmp3) +
      Scalar(9.6622558468725703) * std::cosh(_tmp34);
  _res(1, 0) =
      -Scalar(9.6622558468725703) * _tmp130 *
          (_tmp166 * p_b(2, 0) - std::cosh(_tmp167) + std::cosh(_tmp168)) -
      _tmp162 * (-_tmp132 * p_b(2, 0) + Scalar(1.0) * _tmp165 * std::sinh(_tmp168) -
                 (-_tmp132 * _tmp161 + _tmp166 * (-_tmp130 * _tmp160 - _tmp162 * _tmp165)) *
                     std::sinh(_tmp167));
  _res(2, 0) =
      -_tmp183 * (Scalar(1.0) * _tmp191 * std::sinh(_tmp193) - _tmp192 * p_a(2, 0) -
                  (-_tmp184 * _tmp192 + _tmp185 * (-_tmp182 * _tmp188 - _tmp183 * _tmp191)) *
                      std::sinh(_tmp186)) -
      _tmp188 * (_tmp185 * p_a(2, 0) - std::cosh(_tmp186) + std::cosh(_tmp193));
  _res(3, 0) =
      -_tmp210 * (-_tmp201 * p_d(2, 0) + Scalar(1.0) * _tmp209 * std::sinh(_tmp208) -
                  (-_tmp201 * _tmp211 + _tmp213 * (-_tmp207 * _tmp212 - _tmp209 * _tmp210)) *
                      std::sinh(_tmp214)) -
      _tmp212 * (_tmp213 * p_d(2, 0) + std::cosh(_tmp208) - std::cosh(_tmp214));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
