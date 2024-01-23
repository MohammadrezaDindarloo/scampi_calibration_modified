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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl21
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 641

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (219)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.1034955) * p_d(2, 0);
  const Scalar _tmp2 = Scalar(1.0) / (fh1);
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
  const Scalar _tmp11 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp15 = _tmp4 * _tmp8;
  const Scalar _tmp16 = _tmp14 + _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp10 + _tmp18;
  const Scalar _tmp20 = _tmp19 + p_init0;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp6 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp5 * _tmp7;
  const Scalar _tmp24 = _tmp3 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp11 +
                        Scalar(0.20999999999999999) * _tmp27 + Scalar(0.20999999999999999);
  const Scalar _tmp29 = _tmp26 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + p_init1;
  const Scalar _tmp32 = _tmp2 * fv1;
  const Scalar _tmp33 = std::asinh(_tmp32);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * _tmp33;
  const Scalar _tmp35 =
      -Scalar(0.1034955) * _tmp34 * fh1 -
      Scalar(0.1034955) * std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_d(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp36 = _tmp2 * _tmp35;
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp33;
  const Scalar _tmp39 = -_tmp10;
  const Scalar _tmp40 = _tmp13 + _tmp17;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = _tmp26 - _tmp28;
  const Scalar _tmp44 = _tmp21 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init1;
  const Scalar _tmp46 = _tmp31 - p_d(1, 0);
  const Scalar _tmp47 = _tmp20 - p_d(0, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = _tmp46 * _tmp48;
  const Scalar _tmp51 = _tmp19 * _tmp50 - _tmp30 * _tmp49;
  const Scalar _tmp52 = _tmp18 + _tmp39;
  const Scalar _tmp53 = _tmp52 + p_init0;
  const Scalar _tmp54 = _tmp53 - p_a(0, 0);
  const Scalar _tmp55 = _tmp22 + _tmp43;
  const Scalar _tmp56 = _tmp55 + p_init1;
  const Scalar _tmp57 = _tmp56 - p_a(1, 0);
  const Scalar _tmp58 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp57, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp59 = _tmp54 * _tmp58;
  const Scalar _tmp60 = _tmp10 + _tmp40;
  const Scalar _tmp61 = _tmp60 + p_init0;
  const Scalar _tmp62 = _tmp61 - p_c(0, 0);
  const Scalar _tmp63 = _tmp21 + _tmp29;
  const Scalar _tmp64 = _tmp63 + p_init1;
  const Scalar _tmp65 = _tmp64 - p_c(1, 0);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp65 * _tmp66;
  const Scalar _tmp68 = _tmp62 * _tmp66;
  const Scalar _tmp69 = _tmp45 - p_b(1, 0);
  const Scalar _tmp70 = _tmp42 - p_b(0, 0);
  const Scalar _tmp71 =
      std::sqrt(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp70, Scalar(2))));
  const Scalar _tmp72 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp73 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp74 = _tmp71 * _tmp73;
  const Scalar _tmp75 = _tmp74 * (_tmp41 * _tmp69 * _tmp72 - _tmp44 * _tmp70 * _tmp72);
  const Scalar _tmp76 = -_tmp60 * _tmp67 + _tmp63 * _tmp68 + _tmp68 * _tmp75;
  const Scalar _tmp77 = _tmp69 * _tmp73;
  const Scalar _tmp78 = Scalar(1.0) / (-_tmp67 + _tmp68 * _tmp77);
  const Scalar _tmp79 = _tmp57 * _tmp58;
  const Scalar _tmp80 = _tmp59 * _tmp77 - _tmp79;
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = -_tmp52 * _tmp79 + _tmp55 * _tmp59 + _tmp59 * _tmp75 - _tmp76 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp78;
  const Scalar _tmp86 = _tmp80 * _tmp83 * _tmp85;
  const Scalar _tmp87 = _tmp51 * _tmp74 * (_tmp59 * _tmp84 - _tmp68 * _tmp86);
  const Scalar _tmp88 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp89 = -_tmp88;
  const Scalar _tmp90 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp91 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp92 = _tmp90 + _tmp91;
  const Scalar _tmp93 = _tmp89 + _tmp92;
  const Scalar _tmp94 = _tmp68 * _tmp93;
  const Scalar _tmp95 = _tmp88 + _tmp92;
  const Scalar _tmp96 = -_tmp68 * _tmp95 + _tmp94;
  const Scalar _tmp97 = _tmp90 - _tmp91;
  const Scalar _tmp98 = _tmp89 + _tmp97;
  const Scalar _tmp99 = _tmp67 * _tmp95 - _tmp77 * _tmp94;
  const Scalar _tmp100 = _tmp59 * _tmp93;
  const Scalar _tmp101 = -_tmp100 * _tmp77 + _tmp79 * _tmp98 - _tmp81 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) * _tmp44;
  const Scalar _tmp103 = -_tmp102;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103 + _tmp63);
  const Scalar _tmp105 = Scalar(1.0) * _tmp41;
  const Scalar _tmp106 = _tmp104 * (_tmp105 - _tmp60);
  const Scalar _tmp107 = _tmp100 - _tmp101 * _tmp106 - _tmp59 * _tmp98 - _tmp81 * _tmp96;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp85 * _tmp99;
  const Scalar _tmp110 = _tmp106 * _tmp109 - _tmp85 * _tmp96;
  const Scalar _tmp111 = _tmp108 * _tmp82;
  const Scalar _tmp112 = _tmp107 * _tmp83;
  const Scalar _tmp113 = _tmp112 * (-_tmp110 * _tmp111 - _tmp76 * _tmp85);
  const Scalar _tmp114 = _tmp110 + _tmp113;
  const Scalar _tmp115 = _tmp108 * _tmp114;
  const Scalar _tmp116 = _tmp108 * _tmp80;
  const Scalar _tmp117 = _tmp78 * (-_tmp114 * _tmp116 + Scalar(1.0));
  const Scalar _tmp118 = _tmp50 * _tmp74 * (_tmp115 * _tmp59 + _tmp117 * _tmp68);
  const Scalar _tmp119 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp120 = _tmp102 * _tmp106 + _tmp105;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = _tmp116 * _tmp121 * _tmp78;
  const Scalar _tmp123 = _tmp108 * _tmp121;
  const Scalar _tmp124 = _tmp77 * _tmp78;
  const Scalar _tmp125 = _tmp124 * _tmp99 + _tmp77 * _tmp93;
  const Scalar _tmp126 = -_tmp106 * _tmp125 + _tmp124 * _tmp96 - _tmp93;
  const Scalar _tmp127 = _tmp112 * (-_tmp111 * _tmp126 + _tmp124 * _tmp76 - _tmp75);
  const Scalar _tmp128 = _tmp126 + _tmp127;
  const Scalar _tmp129 = _tmp108 * _tmp128;
  const Scalar _tmp130 = _tmp78 * (-_tmp116 * _tmp128 - _tmp77);
  const Scalar _tmp131 = _tmp49 * _tmp74 * (_tmp129 * _tmp59 + _tmp130 * _tmp68 + Scalar(1.0));
  const Scalar _tmp132 = -_tmp118 * fh1 -
                         _tmp119 * _tmp74 * (-_tmp122 * _tmp68 + _tmp123 * _tmp59) - _tmp131 * fh1 -
                         _tmp87 * fh1;
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp103 + _tmp55;
  const Scalar _tmp135 = _tmp106 * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) / (_tmp105 - _tmp135 - _tmp52);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp101 * _tmp108;
  const Scalar _tmp139 = _tmp134 * _tmp136;
  const Scalar _tmp140 = _tmp125 + _tmp127 * _tmp139 - _tmp128 * _tmp138;
  const Scalar _tmp141 = Scalar(1.0) * _tmp104;
  const Scalar _tmp142 = Scalar(1.0) * _tmp49 * (_tmp127 * _tmp137 - _tmp140 * _tmp141);
  const Scalar _tmp143 = _tmp120 * _tmp136;
  const Scalar _tmp144 = _tmp103 - _tmp121 * _tmp138 - _tmp134 * _tmp143;
  const Scalar _tmp145 = -_tmp109 + _tmp113 * _tmp139 - _tmp114 * _tmp138;
  const Scalar _tmp146 = Scalar(1.0) * _tmp50 * (_tmp113 * _tmp137 - _tmp141 * _tmp145);
  const Scalar _tmp147 = _tmp88 + _tmp97;
  const Scalar _tmp148 = _tmp147 * fh1;
  const Scalar _tmp149 = _tmp148 * _tmp49 + Scalar(5.1796800000000003) * _tmp16 + _tmp19 * fv1;
  const Scalar _tmp150 = _tmp134 * _tmp137;
  const Scalar _tmp151 = Scalar(1.0) * _tmp104 * _tmp150 - Scalar(1.0) * _tmp137;
  const Scalar _tmp152 = -_tmp148 * _tmp50 - Scalar(5.1796800000000003) * _tmp25 - _tmp30 * fv1;
  const Scalar _tmp153 = _tmp106 * _tmp137;
  const Scalar _tmp154 = _tmp104 * (_tmp135 * _tmp137 + Scalar(1.0));
  const Scalar _tmp155 = Scalar(1.0) * _tmp153 - Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = _tmp104 * (-_tmp101 * _tmp84 + _tmp112 * _tmp150);
  const Scalar _tmp157 = _tmp112 * _tmp137;
  const Scalar _tmp158 = Scalar(1.0) * _tmp51;
  const Scalar _tmp159 = _tmp158 * (-Scalar(1.0) * _tmp156 + _tmp157);
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp119 * (-_tmp120 * _tmp137 - _tmp141 * _tmp144 + Scalar(1.0)) +
      _tmp142 * fh1 + _tmp146 * fh1 + _tmp149 * _tmp151 + _tmp152 * _tmp155 + _tmp159 * fh1;
  const Scalar _tmp161 = std::asinh(_tmp133 * _tmp160);
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp132;
  const Scalar _tmp163 =
      -_tmp161 * _tmp162 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp45 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp164 = Scalar(0.1034955) * _tmp133;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp167 = -_tmp118 - _tmp131 - _tmp87;
  const Scalar _tmp168 = _tmp166 * _tmp167;
  const Scalar _tmp169 = Scalar(0.1034955) * _tmp168;
  const Scalar _tmp170 = _tmp147 * _tmp50;
  const Scalar _tmp171 = _tmp147 * _tmp49;
  const Scalar _tmp172 =
      (_tmp133 * (_tmp142 + _tmp146 + _tmp151 * _tmp171 - _tmp155 * _tmp170 + _tmp159) -
       _tmp160 * _tmp168) /
      std::sqrt(Scalar(std::pow(_tmp160, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp167;
  const Scalar _tmp174 = Scalar(1.0) * _tmp161;
  const Scalar _tmp175 = _tmp51 * _tmp86;
  const Scalar _tmp176 = _tmp130 * _tmp49;
  const Scalar _tmp177 = _tmp117 * _tmp50;
  const Scalar _tmp178 = -_tmp119 * _tmp122 - _tmp175 * fh1 + _tmp176 * fh1 + _tmp177 * fh1;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = _tmp137 * _tmp149;
  const Scalar _tmp181 = _tmp104 * _tmp145 * _tmp50;
  const Scalar _tmp182 = _tmp104 * _tmp49;
  const Scalar _tmp183 = _tmp140 * _tmp182;
  const Scalar _tmp184 = _tmp156 * _tmp51;
  const Scalar _tmp185 = _tmp104 * _tmp119 * _tmp144 - _tmp104 * _tmp134 * _tmp180 +
                         _tmp152 * _tmp154 + _tmp181 * fh1 + _tmp183 * fh1 + _tmp184 * fh1;
  const Scalar _tmp186 = std::asinh(_tmp179 * _tmp185);
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp186;
  const Scalar _tmp188 =
      -_tmp178 * _tmp187 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp64 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = Scalar(1.0) * _tmp186;
  const Scalar _tmp192 = -_tmp175 + _tmp176 + _tmp177;
  const Scalar _tmp193 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp194 = _tmp192 * _tmp193;
  const Scalar _tmp195 =
      (_tmp179 * (-_tmp147 * _tmp150 * _tmp182 - _tmp154 * _tmp170 + _tmp181 + _tmp183 + _tmp184) -
       _tmp185 * _tmp194) /
      std::sqrt(Scalar(std::pow(_tmp185, Scalar(2)) * _tmp193 + 1));
  const Scalar _tmp196 = Scalar(0.1034955) * _tmp194;
  const Scalar _tmp197 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp198 = _tmp158 * _tmp83;
  const Scalar _tmp199 = _tmp115 * _tmp50;
  const Scalar _tmp200 = _tmp129 * _tmp49;
  const Scalar _tmp201 = _tmp119 * _tmp123 + _tmp198 * fh1 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp203 = Scalar(0.1034955) * _tmp202;
  const Scalar _tmp204 = _tmp113 * _tmp136 * _tmp50;
  const Scalar _tmp205 = _tmp157 * _tmp51;
  const Scalar _tmp206 = _tmp127 * _tmp136 * _tmp49;
  const Scalar _tmp207 = _tmp119 * _tmp143 - _tmp152 * _tmp153 + _tmp180 - _tmp204 * fh1 -
                         _tmp205 * fh1 - _tmp206 * fh1;
  const Scalar _tmp208 = std::asinh(_tmp202 * _tmp207);
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp201;
  const Scalar _tmp210 =
      -_tmp208 * _tmp209 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp211 = _tmp203 * _tmp210;
  const Scalar _tmp212 = Scalar(1.0) * _tmp208;
  const Scalar _tmp213 = _tmp198 + _tmp199 + _tmp200;
  const Scalar _tmp214 = Scalar(9.6622558468725703) * _tmp213;
  const Scalar _tmp215 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp216 = _tmp213 * _tmp215;
  const Scalar _tmp217 =
      (_tmp202 * (_tmp137 * _tmp171 + _tmp153 * _tmp170 - _tmp204 - _tmp205 - _tmp206) -
       _tmp207 * _tmp216) /
      std::sqrt(Scalar(std::pow(_tmp207, Scalar(2)) * _tmp215 + 1));
  const Scalar _tmp218 = Scalar(0.1034955) * _tmp216;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp1 * _tmp2 -
      Scalar(9.6622558468725703) * fh1 *
          (-_tmp0 * _tmp1 - Scalar(1.0) * _tmp0 * _tmp37 * fv1 * std::sinh(_tmp38) -
           (-_tmp0 * _tmp35 +
            Scalar(0.1034955) * _tmp2 * (Scalar(9.6622558468725703) * _tmp32 * _tmp37 - _tmp34)) *
               std::sinh(_tmp36)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp36) -
      Scalar(9.6622558468725703) * std::cosh(_tmp38);
  _res(1, 0) =
      -_tmp162 * (-_tmp169 * p_b(2, 0) + Scalar(1.0) * _tmp172 * std::sinh(_tmp174) -
                  (-_tmp163 * _tmp169 + _tmp164 * (-_tmp161 * _tmp173 - _tmp162 * _tmp172)) *
                      std::sinh(_tmp165)) -
      _tmp173 * (_tmp164 * p_b(2, 0) - std::cosh(_tmp165) + std::cosh(_tmp174));
  _res(2, 0) =
      -Scalar(9.6622558468725703) * _tmp192 *
          (_tmp189 * p_c(2, 0) - std::cosh(_tmp190) + std::cosh(_tmp191)) -
      _tmp197 * (Scalar(1.0) * _tmp195 * std::sinh(_tmp191) - _tmp196 * p_c(2, 0) -
                 (-_tmp188 * _tmp196 + _tmp189 * (-_tmp187 * _tmp192 - _tmp195 * _tmp197)) *
                     std::sinh(_tmp190));
  _res(3, 0) =
      -_tmp209 * (Scalar(1.0) * _tmp217 * std::sinh(_tmp212) - _tmp218 * p_a(2, 0) -
                  (_tmp203 * (-_tmp208 * _tmp214 - _tmp209 * _tmp217) - _tmp210 * _tmp218) *
                      std::sinh(_tmp211)) -
      _tmp214 * (_tmp203 * p_a(2, 0) - std::cosh(_tmp211) + std::cosh(_tmp212));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
