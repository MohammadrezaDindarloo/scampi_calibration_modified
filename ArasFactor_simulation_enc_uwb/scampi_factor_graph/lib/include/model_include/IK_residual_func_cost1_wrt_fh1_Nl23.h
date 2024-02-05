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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl23
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar p_init0, const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w,
    const Scalar epsilon) {
  // Total ops: 638

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp1 = Scalar(0.1034955) * p_d(2, 0);
  const Scalar _tmp2 = Scalar(1.0) / (fh1);
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                        _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp13 = 2 * _tmp12;
  const Scalar _tmp14 = _tmp13 * _tmp3;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp10 * _tmp3;
  const Scalar _tmp18 = _tmp13 * _tmp5;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp26 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp27 = _tmp10 * _tmp12;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = _tmp2 * fv1;
  const Scalar _tmp34 = std::asinh(_tmp33);
  const Scalar _tmp35 = Scalar(9.6622558468725703) * _tmp34;
  const Scalar _tmp36 =
      -Scalar(0.1034955) * _tmp35 * fh1 -
      Scalar(0.1034955) * std::sqrt(Scalar(std::pow(Scalar(-_tmp22 + p_d(0, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp32 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp37 = _tmp2 * _tmp36;
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp0 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp34;
  const Scalar _tmp40 = _tmp16 - _tmp19;
  const Scalar _tmp41 = _tmp40 + _tmp8;
  const Scalar _tmp42 = _tmp20 + _tmp7;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = _tmp25 + _tmp29;
  const Scalar _tmp45 = _tmp24 + _tmp44;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = -_tmp46;
  const Scalar _tmp48 = -_tmp24;
  const Scalar _tmp49 = _tmp30 + _tmp48;
  const Scalar _tmp50 = _tmp47 + _tmp49;
  const Scalar _tmp51 = _tmp44 + _tmp48;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp47 + _tmp51);
  const Scalar _tmp53 = _tmp40 + _tmp7;
  const Scalar _tmp54 = _tmp52 * (_tmp43 - _tmp53);
  const Scalar _tmp55 = _tmp50 * _tmp54;
  const Scalar _tmp56 = Scalar(1.0) / (-_tmp41 + _tmp43 - _tmp55);
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = _tmp51 + p_init1;
  const Scalar _tmp59 = _tmp58 - p_b(1, 0);
  const Scalar _tmp60 = _tmp53 + p_init0;
  const Scalar _tmp61 = _tmp60 - p_b(0, 0);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp61 * _tmp62;
  const Scalar _tmp64 = _tmp59 * _tmp62;
  const Scalar _tmp65 = _tmp42 + p_init0;
  const Scalar _tmp66 = _tmp65 - p_c(0, 0);
  const Scalar _tmp67 = _tmp45 + p_init1;
  const Scalar _tmp68 = _tmp67 - p_c(1, 0);
  const Scalar _tmp69 =
      std::sqrt(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp68, Scalar(2))));
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp72 = _tmp69 * _tmp71;
  const Scalar _tmp73 = _tmp72 * (_tmp42 * _tmp68 * _tmp70 - _tmp45 * _tmp66 * _tmp70);
  const Scalar _tmp74 = _tmp51 * _tmp63 - _tmp53 * _tmp64 + _tmp63 * _tmp73;
  const Scalar _tmp75 = _tmp68 * _tmp71;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp63 * _tmp75 - _tmp64);
  const Scalar _tmp77 = _tmp75 * _tmp76;
  const Scalar _tmp78 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp79 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp80 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp81 = _tmp79 + _tmp80;
  const Scalar _tmp82 = _tmp78 + _tmp81;
  const Scalar _tmp83 = _tmp79 - _tmp80;
  const Scalar _tmp84 = _tmp78 + _tmp83;
  const Scalar _tmp85 = _tmp63 * _tmp82;
  const Scalar _tmp86 = _tmp76 * (_tmp64 * _tmp84 - _tmp75 * _tmp85);
  const Scalar _tmp87 = _tmp75 * _tmp82 + _tmp75 * _tmp86;
  const Scalar _tmp88 = -_tmp63 * _tmp84 + _tmp85;
  const Scalar _tmp89 = -_tmp54 * _tmp87 + _tmp77 * _tmp88 - _tmp82;
  const Scalar _tmp90 = -_tmp78;
  const Scalar _tmp91 = _tmp83 + _tmp90;
  const Scalar _tmp92 = _tmp41 + p_init0;
  const Scalar _tmp93 = _tmp92 - p_a(0, 0);
  const Scalar _tmp94 = _tmp49 + p_init1;
  const Scalar _tmp95 = _tmp94 - p_a(1, 0);
  const Scalar _tmp96 = std::pow(Scalar(std::pow(_tmp93, Scalar(2)) + std::pow(_tmp95, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = _tmp93 * _tmp96;
  const Scalar _tmp99 = _tmp82 * _tmp98;
  const Scalar _tmp100 = _tmp75 * _tmp98 - _tmp97;
  const Scalar _tmp101 = -_tmp100 * _tmp86 - _tmp75 * _tmp99 + _tmp91 * _tmp97;
  const Scalar _tmp102 = _tmp100 * _tmp76;
  const Scalar _tmp103 = -_tmp101 * _tmp54 - _tmp102 * _tmp88 - _tmp91 * _tmp98 + _tmp99;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp105 = -_tmp102 * _tmp74 - _tmp41 * _tmp97 + _tmp49 * _tmp98 + _tmp73 * _tmp98;
  const Scalar _tmp106 = _tmp104 * _tmp105;
  const Scalar _tmp107 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp108 = _tmp103 * _tmp107;
  const Scalar _tmp109 = _tmp108 * (-_tmp106 * _tmp89 - _tmp73 + _tmp74 * _tmp77);
  const Scalar _tmp110 = _tmp50 * _tmp56;
  const Scalar _tmp111 = _tmp104 * (_tmp109 + _tmp89);
  const Scalar _tmp112 = -_tmp101 * _tmp111 + _tmp109 * _tmp110 + _tmp87;
  const Scalar _tmp113 = Scalar(1.0) * _tmp52;
  const Scalar _tmp114 = _tmp32 - p_d(1, 0);
  const Scalar _tmp115 = _tmp22 - p_d(0, 0);
  const Scalar _tmp116 =
      std::pow(Scalar(std::pow(_tmp114, Scalar(2)) + std::pow(_tmp115, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp117 = _tmp115 * _tmp116;
  const Scalar _tmp118 = Scalar(1.0) * _tmp117 * (_tmp109 * _tmp57 - _tmp112 * _tmp113);
  const Scalar _tmp119 = _tmp114 * _tmp116;
  const Scalar _tmp120 = _tmp81 + _tmp90;
  const Scalar _tmp121 = _tmp120 * fh1;
  const Scalar _tmp122 = -_tmp119 * _tmp121 - Scalar(3.29616) * _tmp28 - _tmp31 * fv1;
  const Scalar _tmp123 = _tmp55 * _tmp57 + Scalar(1.0);
  const Scalar _tmp124 = _tmp54 * _tmp57;
  const Scalar _tmp125 = -Scalar(1.0) * _tmp113 * _tmp123 + Scalar(1.0) * _tmp124;
  const Scalar _tmp126 = _tmp117 * _tmp121 + Scalar(3.29616) * _tmp15 + _tmp21 * fv1;
  const Scalar _tmp127 = _tmp50 * _tmp52;
  const Scalar _tmp128 = Scalar(1.0) * _tmp127 * _tmp57 - Scalar(1.0) * _tmp57;
  const Scalar _tmp129 = Scalar(1.0) * _tmp76;
  const Scalar _tmp130 = Scalar(1.0) * _tmp86;
  const Scalar _tmp131 = -_tmp129 * _tmp88 + _tmp130 * _tmp54;
  const Scalar _tmp132 = _tmp108 * (-_tmp106 * _tmp131 - _tmp129 * _tmp74);
  const Scalar _tmp133 = _tmp104 * (_tmp131 + _tmp132);
  const Scalar _tmp134 = -_tmp101 * _tmp133 + _tmp110 * _tmp132 - _tmp130;
  const Scalar _tmp135 = Scalar(1.0) * _tmp119 * (-_tmp113 * _tmp134 + _tmp132 * _tmp57);
  const Scalar _tmp136 = _tmp43 + _tmp46 * _tmp54;
  const Scalar _tmp137 = 0;
  const Scalar _tmp138 = _tmp136 * _tmp56;
  const Scalar _tmp139 = -_tmp101 * _tmp137 - _tmp138 * _tmp50 + _tmp47;
  const Scalar _tmp140 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp141 = -_tmp117 * _tmp31 + _tmp119 * _tmp21;
  const Scalar _tmp142 = Scalar(1.0) * _tmp107;
  const Scalar _tmp143 = _tmp108 * _tmp57;
  const Scalar _tmp144 = -_tmp101 * _tmp142 + _tmp143 * _tmp50;
  const Scalar _tmp145 = Scalar(1.0) * _tmp141 * (-_tmp113 * _tmp144 + _tmp143);
  const Scalar _tmp146 =
      _tmp118 * fh1 + _tmp122 * _tmp125 + _tmp126 * _tmp128 + _tmp135 * fh1 +
      Scalar(1.0) * _tmp140 * (-_tmp113 * _tmp139 - _tmp136 * _tmp57 + Scalar(1.0)) + _tmp145 * fh1;
  const Scalar _tmp147 = -_tmp100 * _tmp133 + Scalar(1.0);
  const Scalar _tmp148 = _tmp63 * _tmp76;
  const Scalar _tmp149 = _tmp119 * _tmp72 * (_tmp133 * _tmp98 + _tmp147 * _tmp148);
  const Scalar _tmp150 = _tmp100 * _tmp107 * _tmp129;
  const Scalar _tmp151 = _tmp141 * _tmp72 * (_tmp142 * _tmp98 - _tmp150 * _tmp63);
  const Scalar _tmp152 = -_tmp100 * _tmp111 - _tmp75;
  const Scalar _tmp153 = _tmp117 * _tmp72 * (_tmp111 * _tmp98 + _tmp148 * _tmp152 + Scalar(1.0));
  const Scalar _tmp154 = -_tmp140 * _tmp72 * (-_tmp102 * _tmp137 * _tmp63 + _tmp137 * _tmp98) -
                         _tmp149 * fh1 - _tmp151 * fh1 - _tmp153 * fh1;
  const Scalar _tmp155 = Scalar(1.0) / (_tmp154);
  const Scalar _tmp156 = std::asinh(_tmp146 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp156;
  const Scalar _tmp158 = std::pow(_tmp154, Scalar(-2));
  const Scalar _tmp159 = -_tmp149 - _tmp151 - _tmp153;
  const Scalar _tmp160 = _tmp158 * _tmp159;
  const Scalar _tmp161 = _tmp119 * _tmp120;
  const Scalar _tmp162 = _tmp117 * _tmp120;
  const Scalar _tmp163 = (-_tmp146 * _tmp160 + _tmp155 * (_tmp118 - _tmp125 * _tmp161 +
                                                          _tmp128 * _tmp162 + _tmp135 + _tmp145)) /
                         std::sqrt(Scalar(std::pow(_tmp146, Scalar(2)) * _tmp158 + 1));
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp154;
  const Scalar _tmp165 =
      -_tmp156 * _tmp164 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp67 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp166 = Scalar(0.1034955) * _tmp160;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp159;
  const Scalar _tmp168 = Scalar(0.1034955) * _tmp155;
  const Scalar _tmp169 = _tmp165 * _tmp168;
  const Scalar _tmp170 = _tmp117 * _tmp52;
  const Scalar _tmp171 = _tmp112 * _tmp170;
  const Scalar _tmp172 = _tmp126 * _tmp57;
  const Scalar _tmp173 = _tmp141 * _tmp144 * _tmp52;
  const Scalar _tmp174 = _tmp123 * _tmp52;
  const Scalar _tmp175 = _tmp119 * _tmp134 * _tmp52;
  const Scalar _tmp176 = _tmp122 * _tmp174 - _tmp127 * _tmp172 + _tmp139 * _tmp140 * _tmp52 +
                         _tmp171 * fh1 + _tmp173 * fh1 + _tmp175 * fh1;
  const Scalar _tmp177 = _tmp137 * _tmp140;
  const Scalar _tmp178 = _tmp119 * _tmp147 * _tmp76;
  const Scalar _tmp179 = _tmp141 * _tmp150;
  const Scalar _tmp180 = _tmp117 * _tmp152 * _tmp76;
  const Scalar _tmp181 = -_tmp102 * _tmp177 + _tmp178 * fh1 - _tmp179 * fh1 + _tmp180 * fh1;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = std::asinh(_tmp176 * _tmp182);
  const Scalar _tmp184 = Scalar(1.0) * _tmp183;
  const Scalar _tmp185 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp186 = _tmp178 - _tmp179 + _tmp180;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 =
      (-_tmp176 * _tmp187 + _tmp182 * (-_tmp120 * _tmp170 * _tmp50 * _tmp57 - _tmp161 * _tmp174 +
                                       _tmp171 + _tmp173 + _tmp175)) /
      std::sqrt(Scalar(std::pow(_tmp176, Scalar(2)) * _tmp185 + 1));
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp183;
  const Scalar _tmp190 =
      -_tmp181 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp58 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp60 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp191 = Scalar(0.1034955) * _tmp182;
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = Scalar(0.1034955) * _tmp187;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp181;
  const Scalar _tmp195 = _tmp119 * _tmp133;
  const Scalar _tmp196 = _tmp111 * _tmp117;
  const Scalar _tmp197 = _tmp141 * _tmp142;
  const Scalar _tmp198 = _tmp195 + _tmp196 + _tmp197;
  const Scalar _tmp199 = _tmp177 + _tmp195 * fh1 + _tmp196 * fh1 + _tmp197 * fh1;
  const Scalar _tmp200 = Scalar(1.0) / (_tmp199);
  const Scalar _tmp201 = _tmp109 * _tmp117 * _tmp56;
  const Scalar _tmp202 = _tmp119 * _tmp132 * _tmp56;
  const Scalar _tmp203 = _tmp141 * _tmp143;
  const Scalar _tmp204 = -_tmp122 * _tmp124 + _tmp138 * _tmp140 + _tmp172 - _tmp201 * fh1 -
                         _tmp202 * fh1 - _tmp203 * fh1;
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(1.0) * _tmp205;
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp205;
  const Scalar _tmp208 =
      -_tmp199 * _tmp207 - std::sqrt(Scalar(std::pow(Scalar(-_tmp92 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp94 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.1034955) * _tmp200;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = std::pow(_tmp199, Scalar(-2));
  const Scalar _tmp212 = _tmp198 * _tmp211;
  const Scalar _tmp213 =
      (_tmp200 * (_tmp124 * _tmp161 + _tmp162 * _tmp57 - _tmp201 - _tmp202 - _tmp203) -
       _tmp204 * _tmp212) /
      std::sqrt(Scalar(std::pow(_tmp204, Scalar(2)) * _tmp211 + 1));
  const Scalar _tmp214 = Scalar(0.1034955) * _tmp212;
  const Scalar _tmp215 = Scalar(9.6622558468725703) * _tmp199;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp1 * _tmp2 -
      Scalar(9.6622558468725703) * fh1 *
          (-_tmp0 * _tmp1 - Scalar(1.0) * _tmp0 * _tmp38 * fv1 * std::sinh(_tmp39) -
           (-_tmp0 * _tmp36 +
            Scalar(0.1034955) * _tmp2 * (Scalar(9.6622558468725703) * _tmp33 * _tmp38 - _tmp35)) *
               std::sinh(_tmp37)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp37) -
      Scalar(9.6622558468725703) * std::cosh(_tmp39);
  _res(1, 0) =
      -_tmp164 * (Scalar(1.0) * _tmp163 * std::sinh(_tmp157) - _tmp166 * p_c(2, 0) -
                  (-_tmp165 * _tmp166 + _tmp168 * (-_tmp156 * _tmp167 - _tmp163 * _tmp164)) *
                      std::sinh(_tmp169)) -
      _tmp167 * (_tmp168 * p_c(2, 0) + std::cosh(_tmp157) - std::cosh(_tmp169));
  _res(2, 0) =
      -Scalar(9.6622558468725703) * _tmp186 *
          (_tmp191 * p_b(2, 0) + std::cosh(_tmp184) - std::cosh(_tmp192)) -
      _tmp194 * (Scalar(1.0) * _tmp188 * std::sinh(_tmp184) - _tmp193 * p_b(2, 0) -
                 (-_tmp190 * _tmp193 + _tmp191 * (-_tmp186 * _tmp189 - _tmp188 * _tmp194)) *
                     std::sinh(_tmp192));
  _res(3, 0) =
      -Scalar(9.6622558468725703) * _tmp198 *
          (_tmp209 * p_a(2, 0) + std::cosh(_tmp206) - std::cosh(_tmp210)) -
      _tmp215 * (Scalar(1.0) * _tmp213 * std::sinh(_tmp206) - _tmp214 * p_a(2, 0) -
                 (-_tmp208 * _tmp214 + _tmp209 * (-_tmp198 * _tmp207 - _tmp213 * _tmp215)) *
                     std::sinh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym