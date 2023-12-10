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
 * Symbolic function: FK_residual_func_cost1_wrt_fh1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost1WrtFh1(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 636

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (220)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp5 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp9 = 2 * _tmp4;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                        _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp12 = 2 * _tmp11;
  const Scalar _tmp13 = _tmp12 * _tmp2;
  const Scalar _tmp14 = _tmp10 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = 2 * _tmp2 * _tmp8;
  const Scalar _tmp17 = _tmp11 * _tmp9;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 - _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(0, 0);
  const Scalar _tmp22 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp26 = _tmp2 * _tmp9;
  const Scalar _tmp27 = _tmp12 * _tmp8;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = Scalar(1.0) / (fh1);
  const Scalar _tmp34 = _tmp33 * fv1;
  const Scalar _tmp35 = std::asinh(_tmp34);
  const Scalar _tmp36 = Scalar(9.6622558468725703) * _tmp35;
  const Scalar _tmp37 =
      -_tmp36 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_a(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp32 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(0.1034955) * _tmp33;
  const Scalar _tmp40 = _tmp37 * _tmp39;
  const Scalar _tmp41 = Scalar(1.0) * _tmp35;
  const Scalar _tmp42 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp43 = _tmp25 + _tmp29;
  const Scalar _tmp44 = _tmp23 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 = _tmp45 - p_c(1, 0);
  const Scalar _tmp47 = _tmp15 + _tmp18;
  const Scalar _tmp48 = _tmp47 + _tmp6;
  const Scalar _tmp49 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp50 = _tmp49 - p_c(0, 0);
  const Scalar _tmp51 = std::pow(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp50, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = _tmp24 + _tmp43;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_b(1, 0);
  const Scalar _tmp56 = _tmp19 + _tmp6;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 - p_b(0, 0);
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp55 * _tmp59;
  const Scalar _tmp61 = _tmp46 * _tmp51;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp52 * _tmp60 - _tmp61);
  const Scalar _tmp63 = _tmp23 + _tmp30;
  const Scalar _tmp64 = _tmp63 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 - p_d(1, 0);
  const Scalar _tmp66 = _tmp47 + _tmp7;
  const Scalar _tmp67 = _tmp66 + position_vector(0, 0);
  const Scalar _tmp68 = _tmp67 - p_d(0, 0);
  const Scalar _tmp69 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp68, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp68 * _tmp69;
  const Scalar _tmp71 = _tmp65 * _tmp69;
  const Scalar _tmp72 = _tmp60 * _tmp70 - _tmp71;
  const Scalar _tmp73 = _tmp62 * _tmp72;
  const Scalar _tmp74 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp75 = -Scalar(0.010999999999999999) * _tmp22 -
                        Scalar(0.010999999999999999) * _tmp3 + Scalar(-0.010999999999999999);
  const Scalar _tmp76 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp77 = _tmp75 - _tmp76;
  const Scalar _tmp78 = _tmp74 + _tmp77;
  const Scalar _tmp79 = _tmp70 * _tmp78;
  const Scalar _tmp80 = -_tmp74;
  const Scalar _tmp81 = _tmp75 + _tmp76;
  const Scalar _tmp82 = _tmp80 + _tmp81;
  const Scalar _tmp83 = _tmp52 * _tmp78;
  const Scalar _tmp84 = _tmp74 + _tmp81;
  const Scalar _tmp85 = -_tmp60 * _tmp83 + _tmp61 * _tmp84;
  const Scalar _tmp86 = -_tmp60 * _tmp79 + _tmp71 * _tmp82 - _tmp73 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) * _tmp53;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp44 + _tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp56;
  const Scalar _tmp91 = -_tmp48 + _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = -_tmp52 * _tmp84 + _tmp83;
  const Scalar _tmp94 = -_tmp70 * _tmp82 - _tmp73 * _tmp93 + _tmp79 - _tmp86 * _tmp92;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp87 * _tmp92 + _tmp90;
  const Scalar _tmp97 = 0;
  const Scalar _tmp98 =
      std::sqrt(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp58, Scalar(2))));
  const Scalar _tmp99 = _tmp59 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp101 = _tmp99 * (-_tmp100 * _tmp53 * _tmp58 + _tmp100 * _tmp55 * _tmp56);
  const Scalar _tmp102 = _tmp101 * _tmp52 + _tmp44 * _tmp52 - _tmp48 * _tmp61;
  const Scalar _tmp103 = _tmp60 * _tmp62;
  const Scalar _tmp104 = _tmp103 * _tmp85 + _tmp60 * _tmp78;
  const Scalar _tmp105 = _tmp103 * _tmp93 - _tmp104 * _tmp92 - _tmp78;
  const Scalar _tmp106 = _tmp101 * _tmp70 - _tmp102 * _tmp73 + _tmp63 * _tmp70 - _tmp66 * _tmp71;
  const Scalar _tmp107 = _tmp106 * _tmp95;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp109 = _tmp108 * _tmp94;
  const Scalar _tmp110 = _tmp109 * (-_tmp101 + _tmp102 * _tmp103 - _tmp105 * _tmp107);
  const Scalar _tmp111 = _tmp105 + _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp95;
  const Scalar _tmp113 = _tmp72 * _tmp95;
  const Scalar _tmp114 = _tmp62 * (-_tmp111 * _tmp113 - _tmp60);
  const Scalar _tmp115 = _tmp21 - p_a(0, 0);
  const Scalar _tmp116 = _tmp32 - p_a(1, 0);
  const Scalar _tmp117 =
      std::pow(Scalar(std::pow(_tmp115, Scalar(2)) + std::pow(_tmp116, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp118 = _tmp115 * _tmp117;
  const Scalar _tmp119 = _tmp118 * _tmp99 * (_tmp112 * _tmp70 + _tmp114 * _tmp52 + Scalar(1.0));
  const Scalar _tmp120 = Scalar(1.0) * _tmp89;
  const Scalar _tmp121 = Scalar(1.0) * _tmp62;
  const Scalar _tmp122 = _tmp120 * _tmp62 * _tmp85 * _tmp91 - _tmp121 * _tmp93;
  const Scalar _tmp123 = _tmp109 * (-_tmp102 * _tmp121 - _tmp107 * _tmp122);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = _tmp124 * _tmp95;
  const Scalar _tmp126 = _tmp62 * (-_tmp113 * _tmp124 + Scalar(1.0));
  const Scalar _tmp127 = _tmp116 * _tmp117;
  const Scalar _tmp128 = _tmp127 * _tmp99 * (_tmp125 * _tmp70 + _tmp126 * _tmp52);
  const Scalar _tmp129 = -_tmp118 * _tmp31 + _tmp127 * _tmp20;
  const Scalar _tmp130 = _tmp108 * _tmp121 * _tmp72;
  const Scalar _tmp131 = Scalar(1.0) * _tmp108;
  const Scalar _tmp132 = _tmp129 * _tmp99 * (-_tmp130 * _tmp52 + _tmp131 * _tmp70);
  const Scalar _tmp133 = -_tmp119 * fh1 - _tmp128 * fh1 - _tmp132 * fh1 -
                         _tmp42 * _tmp99 * (-_tmp52 * _tmp73 * _tmp97 + _tmp70 * _tmp97);
  const Scalar _tmp134 = Scalar(1.0) / (_tmp133);
  const Scalar _tmp135 = _tmp77 + _tmp80;
  const Scalar _tmp136 = _tmp135 * fh1;
  const Scalar _tmp137 = -_tmp127 * _tmp136 - Scalar(3.29616) * _tmp28 - _tmp31 * fv1;
  const Scalar _tmp138 = _tmp63 + _tmp88;
  const Scalar _tmp139 = _tmp138 * _tmp92;
  const Scalar _tmp140 = Scalar(1.0) / (-_tmp139 - _tmp66 + _tmp90);
  const Scalar _tmp141 = Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp139 * _tmp141 + Scalar(1.0);
  const Scalar _tmp143 = _tmp141 * _tmp92;
  const Scalar _tmp144 = -Scalar(1.0) * _tmp120 * _tmp142 + Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp118 * _tmp136 + Scalar(3.29616) * _tmp14 + _tmp20 * fv1;
  const Scalar _tmp146 = _tmp138 * _tmp141;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp141 + Scalar(1.0) * _tmp146 * _tmp89;
  const Scalar _tmp148 = _tmp86 * _tmp95;
  const Scalar _tmp149 = _tmp138 * _tmp140;
  const Scalar _tmp150 = -_tmp121 * _tmp85 + _tmp123 * _tmp149 - _tmp124 * _tmp148;
  const Scalar _tmp151 = Scalar(1.0) * _tmp127 * (-_tmp120 * _tmp150 + _tmp123 * _tmp141);
  const Scalar _tmp152 = _tmp109 * _tmp146 - _tmp131 * _tmp86;
  const Scalar _tmp153 = _tmp109 * _tmp141;
  const Scalar _tmp154 = Scalar(1.0) * _tmp129 * (-_tmp120 * _tmp152 + _tmp153);
  const Scalar _tmp155 = _tmp140 * _tmp96;
  const Scalar _tmp156 = -_tmp138 * _tmp155 - _tmp86 * _tmp97 + _tmp88;
  const Scalar _tmp157 = _tmp104 + _tmp110 * _tmp149 - _tmp111 * _tmp148;
  const Scalar _tmp158 = Scalar(1.0) * _tmp118 * (_tmp110 * _tmp141 - _tmp120 * _tmp157);
  const Scalar _tmp159 =
      _tmp137 * _tmp144 + _tmp145 * _tmp147 + _tmp151 * fh1 + _tmp154 * fh1 + _tmp158 * fh1 +
      Scalar(1.0) * _tmp42 * (-_tmp120 * _tmp156 - _tmp141 * _tmp96 + Scalar(1.0));
  const Scalar _tmp160 = std::asinh(_tmp134 * _tmp159);
  const Scalar _tmp161 = Scalar(1.0) * _tmp160;
  const Scalar _tmp162 = std::pow(_tmp133, Scalar(-2));
  const Scalar _tmp163 = _tmp127 * _tmp135;
  const Scalar _tmp164 = _tmp118 * _tmp135;
  const Scalar _tmp165 = -_tmp119 - _tmp128 - _tmp132;
  const Scalar _tmp166 = _tmp162 * _tmp165;
  const Scalar _tmp167 =
      (_tmp134 * (-_tmp144 * _tmp163 + _tmp147 * _tmp164 + _tmp151 + _tmp154 + _tmp158) -
       _tmp159 * _tmp166) /
      std::sqrt(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp162 + 1));
  const Scalar _tmp168 = Scalar(0.1034955) * _tmp166;
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp133;
  const Scalar _tmp170 =
      -_tmp160 * _tmp169 - std::sqrt(Scalar(std::pow(Scalar(-_tmp54 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp57 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp134;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp174 = _tmp127 * _tmp150 * _tmp89;
  const Scalar _tmp175 = _tmp118 * _tmp89;
  const Scalar _tmp176 = _tmp157 * _tmp175;
  const Scalar _tmp177 = _tmp129 * _tmp152 * _tmp89;
  const Scalar _tmp178 = _tmp142 * _tmp89;
  const Scalar _tmp179 = _tmp141 * _tmp145;
  const Scalar _tmp180 = _tmp137 * _tmp178 - _tmp138 * _tmp179 * _tmp89 +
                         _tmp156 * _tmp42 * _tmp89 + _tmp174 * fh1 + _tmp176 * fh1 + _tmp177 * fh1;
  const Scalar _tmp181 = _tmp42 * _tmp97;
  const Scalar _tmp182 = _tmp114 * _tmp118;
  const Scalar _tmp183 = _tmp129 * _tmp130;
  const Scalar _tmp184 = _tmp126 * _tmp127;
  const Scalar _tmp185 = -_tmp181 * _tmp73 + _tmp182 * fh1 - _tmp183 * fh1 + _tmp184 * fh1;
  const Scalar _tmp186 = Scalar(1.0) / (_tmp185);
  const Scalar _tmp187 = std::asinh(_tmp180 * _tmp186);
  const Scalar _tmp188 = Scalar(1.0) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp185, Scalar(-2));
  const Scalar _tmp190 = _tmp182 - _tmp183 + _tmp184;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 =
      (-_tmp180 * _tmp191 +
       _tmp186 * (-_tmp135 * _tmp146 * _tmp175 - _tmp163 * _tmp178 + _tmp174 + _tmp176 + _tmp177)) /
      std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp193 = Scalar(0.1034955) * _tmp191;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp185;
  const Scalar _tmp195 =
      -_tmp187 * _tmp194 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_c(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp49 + p_c(0, 0)), Scalar(2))));
  const Scalar _tmp196 = Scalar(0.1034955) * _tmp186;
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = Scalar(9.6622558468725703) * _tmp190;
  const Scalar _tmp199 = _tmp123 * _tmp127 * _tmp140;
  const Scalar _tmp200 = _tmp110 * _tmp118 * _tmp140;
  const Scalar _tmp201 = _tmp129 * _tmp153;
  const Scalar _tmp202 = -_tmp137 * _tmp143 + _tmp155 * _tmp42 + _tmp179 - _tmp199 * fh1 -
                         _tmp200 * fh1 - _tmp201 * fh1;
  const Scalar _tmp203 = _tmp112 * _tmp118;
  const Scalar _tmp204 = _tmp125 * _tmp127;
  const Scalar _tmp205 = _tmp129 * _tmp131;
  const Scalar _tmp206 = _tmp181 + _tmp203 * fh1 + _tmp204 * fh1 + _tmp205 * fh1;
  const Scalar _tmp207 = Scalar(1.0) / (_tmp206);
  const Scalar _tmp208 = std::asinh(_tmp202 * _tmp207);
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp206;
  const Scalar _tmp210 =
      -_tmp208 * _tmp209 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp211 = Scalar(0.1034955) * _tmp207;
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = std::pow(_tmp206, Scalar(-2));
  const Scalar _tmp214 = _tmp203 + _tmp204 + _tmp205;
  const Scalar _tmp215 = _tmp213 * _tmp214;
  const Scalar _tmp216 = (-_tmp202 * _tmp215 + _tmp207 * (_tmp141 * _tmp164 + _tmp143 * _tmp163 -
                                                          _tmp199 - _tmp200 - _tmp201)) /
                         std::sqrt(Scalar(std::pow(_tmp202, Scalar(2)) * _tmp213 + 1));
  const Scalar _tmp217 = Scalar(9.6622558468725703) * _tmp214;
  const Scalar _tmp218 = Scalar(0.1034955) * _tmp215;
  const Scalar _tmp219 = Scalar(1.0) * _tmp208;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp39 * p_a(2, 0) -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp0 * _tmp38 * fv1 * std::sinh(_tmp41) - _tmp1 * p_a(2, 0) -
           (-_tmp1 * _tmp37 + _tmp39 * (Scalar(9.6622558468725703) * _tmp34 * _tmp38 - _tmp36)) *
               std::sinh(_tmp40)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp40) -
      Scalar(9.6622558468725703) * std::cosh(_tmp41);
  _res(1, 0) =
      -_tmp169 * (Scalar(1.0) * _tmp167 * std::sinh(_tmp161) - _tmp168 * p_b(2, 0) -
                  (-_tmp168 * _tmp170 + _tmp171 * (-_tmp160 * _tmp173 - _tmp167 * _tmp169)) *
                      std::sinh(_tmp172)) -
      _tmp173 * (_tmp171 * p_b(2, 0) + std::cosh(_tmp161) - std::cosh(_tmp172));
  _res(2, 0) =
      -_tmp194 * (Scalar(1.0) * _tmp192 * std::sinh(_tmp188) - _tmp193 * p_c(2, 0) -
                  (-_tmp193 * _tmp195 + _tmp196 * (-_tmp187 * _tmp198 - _tmp192 * _tmp194)) *
                      std::sinh(_tmp197)) -
      _tmp198 * (_tmp196 * p_c(2, 0) + std::cosh(_tmp188) - std::cosh(_tmp197));
  _res(3, 0) =
      -_tmp209 * (Scalar(1.0) * _tmp216 * std::sinh(_tmp219) - _tmp218 * p_d(2, 0) -
                  (-_tmp210 * _tmp218 + _tmp211 * (-_tmp208 * _tmp217 - _tmp209 * _tmp216)) *
                      std::sinh(_tmp212)) -
      _tmp217 * (_tmp211 * p_d(2, 0) - std::cosh(_tmp212) + std::cosh(_tmp219));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
