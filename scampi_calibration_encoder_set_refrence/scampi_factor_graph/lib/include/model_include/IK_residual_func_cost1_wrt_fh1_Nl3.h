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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl3(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 634

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (219)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp2 = Scalar(1.0) / (fh1);
  const Scalar _tmp3 = _tmp2 * fv1;
  const Scalar _tmp4 = std::asinh(_tmp3);
  const Scalar _tmp5 = Scalar(9.6622558468725703) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp7 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp8 = 2 * _tmp6 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp13 = -_tmp12;
  const Scalar _tmp14 = 2 * _tmp9;
  const Scalar _tmp15 = _tmp14 * _tmp7;
  const Scalar _tmp16 = _tmp10 * _tmp6;
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = -Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = 1 - 2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = _tmp18 - _tmp21;
  const Scalar _tmp23 = _tmp13 + _tmp22;
  const Scalar _tmp24 = _tmp23 + p_init0;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = _tmp14 * _tmp6;
  const Scalar _tmp28 = _tmp10 * _tmp7;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp31;
  const Scalar _tmp33 = _tmp30 - _tmp32;
  const Scalar _tmp34 = _tmp26 + _tmp33;
  const Scalar _tmp35 = _tmp34 + p_init1;
  const Scalar _tmp36 =
      -_tmp5 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp24 + p_a(0, 0)), Scalar(2)) +
                                      std::pow(Scalar(-_tmp35 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp37 = Scalar(0.1034955) * _tmp2;
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = Scalar(1.0) * _tmp4;
  const Scalar _tmp41 = _tmp24 - p_a(0, 0);
  const Scalar _tmp42 = _tmp35 - p_a(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp42 * _tmp43;
  const Scalar _tmp45 = _tmp41 * _tmp43;
  const Scalar _tmp46 = _tmp23 * _tmp44 - _tmp34 * _tmp45;
  const Scalar _tmp47 = _tmp25 + _tmp33;
  const Scalar _tmp48 = _tmp47 + p_init1;
  const Scalar _tmp49 = _tmp48 - p_b(1, 0);
  const Scalar _tmp50 = _tmp18 + _tmp21;
  const Scalar _tmp51 = _tmp13 + _tmp50;
  const Scalar _tmp52 = _tmp51 + p_init0;
  const Scalar _tmp53 = _tmp52 - p_b(0, 0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp49 * _tmp54;
  const Scalar _tmp57 = _tmp12 + _tmp50;
  const Scalar _tmp58 = _tmp57 + p_init0;
  const Scalar _tmp59 = _tmp58 - p_c(0, 0);
  const Scalar _tmp60 = _tmp30 + _tmp32;
  const Scalar _tmp61 = _tmp25 + _tmp60;
  const Scalar _tmp62 = _tmp61 + p_init1;
  const Scalar _tmp63 = _tmp62 - p_c(1, 0);
  const Scalar _tmp64 =
      std::sqrt(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp63, Scalar(2))));
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp67 = _tmp64 * _tmp66;
  const Scalar _tmp68 = _tmp67 * (_tmp57 * _tmp63 * _tmp65 - _tmp59 * _tmp61 * _tmp65);
  const Scalar _tmp69 = _tmp26 + _tmp60;
  const Scalar _tmp70 = _tmp69 + p_init1;
  const Scalar _tmp71 = _tmp70 - p_d(1, 0);
  const Scalar _tmp72 = _tmp12 + _tmp22;
  const Scalar _tmp73 = _tmp72 + p_init0;
  const Scalar _tmp74 = _tmp73 - p_d(0, 0);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp71 * _tmp75;
  const Scalar _tmp78 = _tmp68 * _tmp76 + _tmp69 * _tmp76 - _tmp72 * _tmp77;
  const Scalar _tmp79 = _tmp63 * _tmp66;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp76 * _tmp79 - _tmp77);
  const Scalar _tmp81 = _tmp55 * _tmp79 - _tmp56;
  const Scalar _tmp82 = _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp47 * _tmp55 - _tmp51 * _tmp56 + _tmp55 * _tmp68 - _tmp78 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = Scalar(1.0) * _tmp84;
  const Scalar _tmp86 = _tmp76 * _tmp82;
  const Scalar _tmp87 = _tmp46 * _tmp67 * (_tmp55 * _tmp85 - _tmp85 * _tmp86);
  const Scalar _tmp88 = Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp89 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp31 + Scalar(-0.010999999999999999);
  const Scalar _tmp90 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp91 = _tmp89 + _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp91;
  const Scalar _tmp93 = -_tmp88;
  const Scalar _tmp94 = _tmp91 + _tmp93;
  const Scalar _tmp95 = _tmp76 * _tmp92;
  const Scalar _tmp96 = _tmp89 - _tmp90;
  const Scalar _tmp97 = _tmp88 + _tmp96;
  const Scalar _tmp98 = -_tmp76 * _tmp97 + _tmp95;
  const Scalar _tmp99 = _tmp79 * _tmp92;
  const Scalar _tmp100 = _tmp80 * (_tmp77 * _tmp97 - _tmp79 * _tmp95);
  const Scalar _tmp101 = -_tmp100 * _tmp81 - _tmp55 * _tmp99 + _tmp56 * _tmp94;
  const Scalar _tmp102 = Scalar(1.0) * _tmp61;
  const Scalar _tmp103 = -_tmp102;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103 + _tmp69);
  const Scalar _tmp105 = Scalar(1.0) * _tmp57;
  const Scalar _tmp106 = _tmp104 * (_tmp105 - _tmp72);
  const Scalar _tmp107 = -_tmp101 * _tmp106 + _tmp55 * _tmp92 - _tmp55 * _tmp94 - _tmp82 * _tmp98;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp79 * _tmp80;
  const Scalar _tmp110 = _tmp100 * _tmp79 + _tmp99;
  const Scalar _tmp111 = -_tmp106 * _tmp110 + _tmp109 * _tmp98 - _tmp92;
  const Scalar _tmp112 = _tmp108 * _tmp83;
  const Scalar _tmp113 = _tmp107 * _tmp84;
  const Scalar _tmp114 = _tmp113 * (_tmp109 * _tmp78 - _tmp111 * _tmp112 - _tmp68);
  const Scalar _tmp115 = _tmp111 + _tmp114;
  const Scalar _tmp116 = _tmp108 * _tmp115;
  const Scalar _tmp117 = _tmp108 * _tmp81;
  const Scalar _tmp118 = _tmp80 * (-_tmp115 * _tmp117 - _tmp79);
  const Scalar _tmp119 = _tmp45 * _tmp67 * (_tmp116 * _tmp55 + _tmp118 * _tmp76 + Scalar(1.0));
  const Scalar _tmp120 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp121 = _tmp102 * _tmp106 + _tmp105;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = Scalar(1.0) * _tmp100;
  const Scalar _tmp124 = Scalar(1.0) * _tmp80;
  const Scalar _tmp125 = _tmp106 * _tmp123 - _tmp124 * _tmp98;
  const Scalar _tmp126 = _tmp113 * (-_tmp112 * _tmp125 - _tmp124 * _tmp78);
  const Scalar _tmp127 = _tmp125 + _tmp126;
  const Scalar _tmp128 = _tmp108 * _tmp127;
  const Scalar _tmp129 = _tmp80 * (-_tmp117 * _tmp127 + Scalar(1.0));
  const Scalar _tmp130 = _tmp44 * _tmp67 * (_tmp128 * _tmp55 + _tmp129 * _tmp76);
  const Scalar _tmp131 = -_tmp119 * fh1 - _tmp120 * _tmp67 * (_tmp122 * _tmp55 - _tmp122 * _tmp86) -
                         _tmp130 * fh1 - _tmp87 * fh1;
  const Scalar _tmp132 = Scalar(1.0) / (_tmp131);
  const Scalar _tmp133 = _tmp103 + _tmp47;
  const Scalar _tmp134 = _tmp106 * _tmp133;
  const Scalar _tmp135 = Scalar(1.0) / (_tmp105 - _tmp134 - _tmp51);
  const Scalar _tmp136 = Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp121 * _tmp135;
  const Scalar _tmp138 = -_tmp101 * _tmp122 + _tmp103 - _tmp133 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * _tmp104;
  const Scalar _tmp140 = _tmp101 * _tmp108;
  const Scalar _tmp141 = _tmp133 * _tmp135;
  const Scalar _tmp142 = -_tmp123 + _tmp126 * _tmp141 - _tmp127 * _tmp140;
  const Scalar _tmp143 = Scalar(1.0) * _tmp44 * (_tmp126 * _tmp136 - _tmp139 * _tmp142);
  const Scalar _tmp144 = _tmp93 + _tmp96;
  const Scalar _tmp145 = _tmp144 * fh1;
  const Scalar _tmp146 = -_tmp145 * _tmp44 - Scalar(3.29616) * _tmp29 - _tmp34 * fv1;
  const Scalar _tmp147 = _tmp134 * _tmp136 + Scalar(1.0);
  const Scalar _tmp148 = _tmp106 * _tmp136;
  const Scalar _tmp149 = -Scalar(1.0) * _tmp139 * _tmp147 + Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp110 + _tmp114 * _tmp141 - _tmp115 * _tmp140;
  const Scalar _tmp151 = Scalar(1.0) * _tmp45 * (_tmp114 * _tmp136 - _tmp139 * _tmp150);
  const Scalar _tmp152 = _tmp145 * _tmp45 + Scalar(3.29616) * _tmp17 + _tmp23 * fv1;
  const Scalar _tmp153 = _tmp104 * _tmp133;
  const Scalar _tmp154 = _tmp136 * _tmp153;
  const Scalar _tmp155 = -Scalar(1.0) * _tmp136 + Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = _tmp113 * _tmp136;
  const Scalar _tmp157 = _tmp104 * (-_tmp101 * _tmp85 + _tmp133 * _tmp156);
  const Scalar _tmp158 = Scalar(1.0) * _tmp46 * (_tmp156 - Scalar(1.0) * _tmp157);
  const Scalar _tmp159 =
      Scalar(1.0) * _tmp120 * (-_tmp121 * _tmp136 - _tmp138 * _tmp139 + Scalar(1.0)) +
      _tmp143 * fh1 + _tmp146 * _tmp149 + _tmp151 * fh1 + _tmp152 * _tmp155 + _tmp158 * fh1;
  const Scalar _tmp160 = std::asinh(_tmp132 * _tmp159);
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp131;
  const Scalar _tmp162 =
      -_tmp160 * _tmp161 - std::sqrt(Scalar(std::pow(Scalar(-_tmp58 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp163 = Scalar(0.1034955) * _tmp132;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = std::pow(_tmp131, Scalar(-2));
  const Scalar _tmp166 = -_tmp119 - _tmp130 - _tmp87;
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = Scalar(0.1034955) * _tmp167;
  const Scalar _tmp169 = _tmp144 * _tmp45;
  const Scalar _tmp170 = _tmp144 * _tmp44;
  const Scalar _tmp171 =
      (_tmp132 * (_tmp143 - _tmp149 * _tmp170 + _tmp151 + _tmp155 * _tmp169 + _tmp158) -
       _tmp159 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp165 + 1));
  const Scalar _tmp172 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp173 = Scalar(1.0) * _tmp160;
  const Scalar _tmp174 = _tmp104 * _tmp142 * _tmp44;
  const Scalar _tmp175 = _tmp157 * _tmp46;
  const Scalar _tmp176 = _tmp136 * _tmp152;
  const Scalar _tmp177 = _tmp104 * _tmp150 * _tmp45;
  const Scalar _tmp178 = _tmp104 * _tmp147;
  const Scalar _tmp179 = _tmp104 * _tmp120 * _tmp138 + _tmp146 * _tmp178 - _tmp153 * _tmp176 +
                         _tmp174 * fh1 + _tmp175 * fh1 + _tmp177 * fh1;
  const Scalar _tmp180 = _tmp46 * _tmp85;
  const Scalar _tmp181 = _tmp180 * fh1;
  const Scalar _tmp182 = _tmp129 * _tmp44;
  const Scalar _tmp183 = _tmp120 * _tmp122;
  const Scalar _tmp184 = _tmp118 * _tmp45;
  const Scalar _tmp185 = -_tmp181 * _tmp82 + _tmp182 * fh1 - _tmp183 * _tmp82 + _tmp184 * fh1;
  const Scalar _tmp186 = Scalar(1.0) / (_tmp185);
  const Scalar _tmp187 = std::asinh(_tmp179 * _tmp186);
  const Scalar _tmp188 = Scalar(1.0) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp185, Scalar(-2));
  const Scalar _tmp190 = -_tmp180 * _tmp82 + _tmp182 + _tmp184;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = (-_tmp179 * _tmp191 + _tmp186 * (-_tmp154 * _tmp169 - _tmp170 * _tmp178 +
                                                          _tmp174 + _tmp175 + _tmp177)) /
                         std::sqrt(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp190;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp185;
  const Scalar _tmp195 = Scalar(0.1034955) * _tmp186;
  const Scalar _tmp196 =
      -_tmp187 * _tmp194 - std::sqrt(Scalar(std::pow(Scalar(-_tmp70 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp73 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp197 = Scalar(0.1034955) * _tmp191;
  const Scalar _tmp198 = _tmp195 * _tmp196;
  const Scalar _tmp199 = _tmp116 * _tmp45;
  const Scalar _tmp200 = _tmp128 * _tmp44;
  const Scalar _tmp201 = _tmp181 + _tmp183 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp202 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp203 = _tmp180 + _tmp199 + _tmp200;
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 = Scalar(0.1034955) * _tmp204;
  const Scalar _tmp206 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp207 = _tmp126 * _tmp135 * _tmp44;
  const Scalar _tmp208 = _tmp156 * _tmp46;
  const Scalar _tmp209 = _tmp114 * _tmp135 * _tmp45;
  const Scalar _tmp210 = _tmp120 * _tmp137 - _tmp146 * _tmp148 + _tmp176 - _tmp207 * fh1 -
                         _tmp208 * fh1 - _tmp209 * fh1;
  const Scalar _tmp211 = std::asinh(_tmp206 * _tmp210);
  const Scalar _tmp212 = Scalar(1.0) * _tmp211;
  const Scalar _tmp213 = (-_tmp204 * _tmp210 + _tmp206 * (_tmp136 * _tmp169 + _tmp148 * _tmp170 -
                                                          _tmp207 - _tmp208 - _tmp209)) /
                         std::sqrt(Scalar(_tmp202 * std::pow(_tmp210, Scalar(2)) + 1));
  const Scalar _tmp214 = Scalar(9.6622558468725703) * _tmp201;
  const Scalar _tmp215 =
      -_tmp211 * _tmp214 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp52 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp216 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp217 = Scalar(0.1034955) * _tmp206;
  const Scalar _tmp218 = _tmp215 * _tmp217;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp37 * p_a(2, 0) -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp0 * _tmp39 * fv1 * std::sinh(_tmp40) - _tmp1 * p_a(2, 0) -
           (-_tmp1 * _tmp36 + _tmp37 * (Scalar(9.6622558468725703) * _tmp3 * _tmp39 - _tmp5)) *
               std::sinh(_tmp38)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp38) -
      Scalar(9.6622558468725703) * std::cosh(_tmp40);
  _res(1, 0) =
      -_tmp161 * (-_tmp168 * p_c(2, 0) + Scalar(1.0) * _tmp171 * std::sinh(_tmp173) -
                  (-_tmp162 * _tmp168 + _tmp163 * (-_tmp160 * _tmp172 - _tmp161 * _tmp171)) *
                      std::sinh(_tmp164)) -
      _tmp172 * (_tmp163 * p_c(2, 0) - std::cosh(_tmp164) + std::cosh(_tmp173));
  _res(2, 0) = -_tmp193 * (_tmp195 * p_d(2, 0) + std::cosh(_tmp188) - std::cosh(_tmp198)) -
               _tmp194 * (Scalar(1.0) * _tmp192 * std::sinh(_tmp188) - _tmp197 * p_d(2, 0) -
                          (_tmp195 * (-_tmp187 * _tmp193 - _tmp192 * _tmp194) - _tmp196 * _tmp197) *
                              std::sinh(_tmp198));
  _res(3, 0) =
      -_tmp214 * (-_tmp205 * p_b(2, 0) + Scalar(1.0) * _tmp213 * std::sinh(_tmp212) -
                  (-_tmp205 * _tmp215 + _tmp217 * (-_tmp211 * _tmp216 - _tmp213 * _tmp214)) *
                      std::sinh(_tmp218)) -
      _tmp216 * (_tmp217 * p_b(2, 0) + std::cosh(_tmp212) - std::cosh(_tmp218));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
