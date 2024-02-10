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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl9
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 642

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (217)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp5 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp1 * _tmp5;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + p_init0;
  const Scalar _tmp19 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp2 * _tmp4;
  const Scalar _tmp23 = _tmp0 * _tmp5;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + p_init1;
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 -
      Scalar(8.3888750099999996) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp18), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp29 - 1), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp32;
  const Scalar _tmp40 = _tmp18 + Scalar(-2.5202214700000001);
  const Scalar _tmp41 = _tmp29 + Scalar(8.3888750099999996);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp19 + Scalar(-0.010999999999999999);
  const Scalar _tmp47 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp48 = _tmp46 + _tmp47;
  const Scalar _tmp49 = _tmp45 + _tmp48;
  const Scalar _tmp50 = _tmp49 * fh1;
  const Scalar _tmp51 = -Scalar(3.29616) * _tmp24 - _tmp28 * fv1 - _tmp43 * _tmp50;
  const Scalar _tmp52 = _tmp12 - _tmp15;
  const Scalar _tmp53 = _tmp52 + _tmp8;
  const Scalar _tmp54 = _tmp16 + _tmp7;
  const Scalar _tmp55 = Scalar(1.0) * _tmp54;
  const Scalar _tmp56 = _tmp20 + _tmp27;
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = -_tmp57;
  const Scalar _tmp59 = _tmp25 - _tmp26;
  const Scalar _tmp60 = _tmp21 + _tmp59;
  const Scalar _tmp61 = _tmp58 + _tmp60;
  const Scalar _tmp62 = _tmp20 + _tmp59;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp58 + _tmp62);
  const Scalar _tmp64 = _tmp52 + _tmp7;
  const Scalar _tmp65 = _tmp63 * (_tmp55 - _tmp64);
  const Scalar _tmp66 = _tmp61 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) / (-_tmp53 + _tmp55 - _tmp66);
  const Scalar _tmp68 = Scalar(1.0) * _tmp67;
  const Scalar _tmp69 = _tmp66 * _tmp68 + Scalar(1.0);
  const Scalar _tmp70 = Scalar(1.0) * _tmp63;
  const Scalar _tmp71 = _tmp65 * _tmp68;
  const Scalar _tmp72 = -Scalar(1.0) * _tmp69 * _tmp70 + Scalar(1.0) * _tmp71;
  const Scalar _tmp73 = _tmp40 * _tmp42;
  const Scalar _tmp74 = Scalar(3.29616) * _tmp11 + _tmp17 * fv1 + _tmp50 * _tmp73;
  const Scalar _tmp75 = _tmp61 * _tmp63;
  const Scalar _tmp76 = _tmp68 * _tmp75;
  const Scalar _tmp77 = -Scalar(1.0) * _tmp68 + Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = _tmp44 + _tmp48;
  const Scalar _tmp79 = _tmp62 + p_init1;
  const Scalar _tmp80 = _tmp79 + Scalar(-4.8333311099999996);
  const Scalar _tmp81 = _tmp64 + p_init0;
  const Scalar _tmp82 = _tmp81 + Scalar(1.79662371);
  const Scalar _tmp83 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp82, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp84 = _tmp82 * _tmp83;
  const Scalar _tmp85 = _tmp46 - _tmp47;
  const Scalar _tmp86 = _tmp44 + _tmp85;
  const Scalar _tmp87 = _tmp78 * _tmp84 - _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp80 * _tmp83;
  const Scalar _tmp89 = _tmp54 + p_init0;
  const Scalar _tmp90 = _tmp89 + Scalar(-2.71799795);
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp56 + p_init1;
  const Scalar _tmp93 = _tmp92 + Scalar(-4.7752063900000001);
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp84 * _tmp94 - _tmp88);
  const Scalar _tmp96 = Scalar(1.0) * _tmp95;
  const Scalar _tmp97 = _tmp78 * _tmp94;
  const Scalar _tmp98 = -_tmp84 * _tmp97 + _tmp86 * _tmp88;
  const Scalar _tmp99 = _tmp96 * _tmp98;
  const Scalar _tmp100 = _tmp65 * _tmp99 - _tmp87 * _tmp96;
  const Scalar _tmp101 = _tmp60 + p_init1;
  const Scalar _tmp102 = _tmp101 + Scalar(8.3196563700000006);
  const Scalar _tmp103 = _tmp53 + p_init0;
  const Scalar _tmp104 = _tmp103 + Scalar(1.9874742000000001);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp102 * _tmp105;
  const Scalar _tmp107 = _tmp104 * _tmp105;
  const Scalar _tmp108 = -_tmp106 + _tmp107 * _tmp94;
  const Scalar _tmp109 = _tmp108 * _tmp95;
  const Scalar _tmp110 = _tmp107 * _tmp78;
  const Scalar _tmp111 = _tmp45 + _tmp85;
  const Scalar _tmp112 = _tmp106 * _tmp111 - _tmp109 * _tmp98 - _tmp110 * _tmp94;
  const Scalar _tmp113 = -_tmp107 * _tmp111 - _tmp109 * _tmp87 + _tmp110 - _tmp112 * _tmp65;
  const Scalar _tmp114 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp115 =
      std::sqrt(Scalar(std::pow(_tmp90, Scalar(2)) + std::pow(_tmp93, Scalar(2))));
  const Scalar _tmp116 = Scalar(1.0) / (_tmp115);
  const Scalar _tmp117 = _tmp115 * _tmp91;
  const Scalar _tmp118 = _tmp117 * (_tmp116 * _tmp54 * _tmp93 - _tmp116 * _tmp56 * _tmp90);
  const Scalar _tmp119 = _tmp118 * _tmp84 + _tmp62 * _tmp84 - _tmp64 * _tmp88;
  const Scalar _tmp120 =
      -_tmp106 * _tmp53 + _tmp107 * _tmp118 + _tmp107 * _tmp60 - _tmp109 * _tmp119;
  const Scalar _tmp121 = _tmp114 * _tmp120;
  const Scalar _tmp122 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp123 = _tmp113 * _tmp122;
  const Scalar _tmp124 = _tmp123 * (-_tmp100 * _tmp121 - _tmp119 * _tmp96);
  const Scalar _tmp125 = _tmp100 + _tmp124;
  const Scalar _tmp126 = _tmp112 * _tmp114;
  const Scalar _tmp127 = _tmp61 * _tmp67;
  const Scalar _tmp128 = _tmp124 * _tmp127 - _tmp125 * _tmp126 - _tmp99;
  const Scalar _tmp129 = Scalar(1.0) * _tmp43 * (_tmp124 * _tmp68 - _tmp128 * _tmp70);
  const Scalar _tmp130 = _tmp55 + _tmp57 * _tmp65;
  const Scalar _tmp131 = 0;
  const Scalar _tmp132 = _tmp130 * _tmp67;
  const Scalar _tmp133 = -_tmp126 * _tmp131 - _tmp132 * _tmp61 + _tmp58;
  const Scalar _tmp134 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp135 = _tmp94 * _tmp95;
  const Scalar _tmp136 = _tmp135 * _tmp98 + _tmp97;
  const Scalar _tmp137 = _tmp135 * _tmp87 - _tmp136 * _tmp65 - _tmp78;
  const Scalar _tmp138 = _tmp123 * (-_tmp118 + _tmp119 * _tmp135 - _tmp121 * _tmp137);
  const Scalar _tmp139 = _tmp137 + _tmp138;
  const Scalar _tmp140 = -_tmp126 * _tmp139 + _tmp127 * _tmp138 + _tmp136;
  const Scalar _tmp141 = Scalar(1.0) * _tmp73 * (_tmp138 * _tmp68 - _tmp140 * _tmp70);
  const Scalar _tmp142 = _tmp123 * _tmp68;
  const Scalar _tmp143 = Scalar(1.0) * _tmp122;
  const Scalar _tmp144 = _tmp63 * (-_tmp112 * _tmp143 + _tmp142 * _tmp61);
  const Scalar _tmp145 = _tmp17 * _tmp43 - _tmp28 * _tmp73;
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp146 * (_tmp142 - Scalar(1.0) * _tmp144);
  const Scalar _tmp148 =
      _tmp129 * fh1 + Scalar(1.0) * _tmp134 * (-_tmp130 * _tmp68 - _tmp133 * _tmp70 + Scalar(1.0)) +
      _tmp141 * fh1 + _tmp147 * fh1 + _tmp51 * _tmp72 + _tmp74 * _tmp77;
  const Scalar _tmp149 = _tmp108 * _tmp114;
  const Scalar _tmp150 = _tmp95 * (-_tmp125 * _tmp149 + Scalar(1.0));
  const Scalar _tmp151 = _tmp114 * _tmp125;
  const Scalar _tmp152 = _tmp117 * _tmp43 * (_tmp107 * _tmp151 + _tmp150 * _tmp84);
  const Scalar _tmp153 = _tmp108 * _tmp122 * _tmp96;
  const Scalar _tmp154 = _tmp117 * _tmp145 * (_tmp107 * _tmp143 - _tmp153 * _tmp84);
  const Scalar _tmp155 = _tmp131 * _tmp149 * _tmp95;
  const Scalar _tmp156 = _tmp114 * _tmp131;
  const Scalar _tmp157 = _tmp114 * _tmp139;
  const Scalar _tmp158 = _tmp95 * (-_tmp139 * _tmp149 - _tmp94);
  const Scalar _tmp159 = _tmp117 * _tmp73 * (_tmp107 * _tmp157 + _tmp158 * _tmp84 + Scalar(1.0));
  const Scalar _tmp160 = -_tmp117 * _tmp134 * (_tmp107 * _tmp156 - _tmp155 * _tmp84) -
                         _tmp152 * fh1 - _tmp154 * fh1 - _tmp159 * fh1;
  const Scalar _tmp161 = Scalar(1.0) / (_tmp160);
  const Scalar _tmp162 = std::asinh(_tmp148 * _tmp161);
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp160;
  const Scalar _tmp164 =
      -_tmp162 * _tmp163 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp89), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp92), Scalar(2))));
  const Scalar _tmp165 = std::pow(_tmp160, Scalar(-2));
  const Scalar _tmp166 = -_tmp152 - _tmp154 - _tmp159;
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = _tmp49 * _tmp73;
  const Scalar _tmp169 = _tmp43 * _tmp49;
  const Scalar _tmp170 = (-_tmp148 * _tmp167 + _tmp161 * (_tmp129 + _tmp141 + _tmp147 +
                                                          _tmp168 * _tmp77 - _tmp169 * _tmp72)) /
                         std::sqrt(Scalar(std::pow(_tmp148, Scalar(2)) * _tmp165 + 1));
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp172 = Scalar(0.1034955) * _tmp161;
  const Scalar _tmp173 = _tmp164 * _tmp172;
  const Scalar _tmp174 = Scalar(1.0) * _tmp162;
  const Scalar _tmp175 = _tmp128 * _tmp43 * _tmp63;
  const Scalar _tmp176 = _tmp63 * _tmp69;
  const Scalar _tmp177 = _tmp144 * _tmp145;
  const Scalar _tmp178 = _tmp140 * _tmp63 * _tmp73;
  const Scalar _tmp179 = _tmp68 * _tmp74;
  const Scalar _tmp180 = _tmp133 * _tmp134 * _tmp63 + _tmp175 * fh1 + _tmp176 * _tmp51 +
                         _tmp177 * fh1 + _tmp178 * fh1 - _tmp179 * _tmp75;
  const Scalar _tmp181 = _tmp150 * _tmp43;
  const Scalar _tmp182 = _tmp145 * _tmp153;
  const Scalar _tmp183 = _tmp158 * _tmp73;
  const Scalar _tmp184 = -_tmp134 * _tmp155 + _tmp181 * fh1 - _tmp182 * fh1 + _tmp183 * fh1;
  const Scalar _tmp185 = Scalar(1.0) / (_tmp184);
  const Scalar _tmp186 = std::asinh(_tmp180 * _tmp185);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = std::pow(_tmp184, Scalar(-2));
  const Scalar _tmp189 = _tmp181 - _tmp182 + _tmp183;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = (-_tmp180 * _tmp190 + _tmp185 * (-_tmp168 * _tmp76 - _tmp169 * _tmp176 +
                                                          _tmp175 + _tmp177 + _tmp178)) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp188 + 1));
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp189;
  const Scalar _tmp194 = Scalar(0.1034955) * _tmp185;
  const Scalar _tmp195 =
      -_tmp186 * _tmp192 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp79), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp81 - 1), Scalar(2))));
  const Scalar _tmp196 = _tmp194 * _tmp195;
  const Scalar _tmp197 = _tmp122 * _tmp146;
  const Scalar _tmp198 = _tmp151 * _tmp43;
  const Scalar _tmp199 = _tmp157 * _tmp73;
  const Scalar _tmp200 = _tmp134 * _tmp156 + _tmp197 * fh1 + _tmp198 * fh1 + _tmp199 * fh1;
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = _tmp138 * _tmp67 * _tmp73;
  const Scalar _tmp203 = _tmp142 * _tmp145;
  const Scalar _tmp204 = _tmp124 * _tmp43 * _tmp67;
  const Scalar _tmp205 =
      _tmp132 * _tmp134 + _tmp179 - _tmp202 * fh1 - _tmp203 * fh1 - _tmp204 * fh1 - _tmp51 * _tmp71;
  const Scalar _tmp206 = std::asinh(_tmp201 * _tmp205);
  const Scalar _tmp207 = Scalar(1.0) * _tmp206;
  const Scalar _tmp208 = std::pow(_tmp200, Scalar(-2));
  const Scalar _tmp209 = _tmp197 + _tmp198 + _tmp199;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 =
      (_tmp201 * (_tmp168 * _tmp68 + _tmp169 * _tmp71 - _tmp202 - _tmp203 - _tmp204) -
       _tmp205 * _tmp210) /
      std::sqrt(Scalar(std::pow(_tmp205, Scalar(2)) * _tmp208 + 1));
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp200;
  const Scalar _tmp213 = Scalar(9.6622558468725703) * _tmp209;
  const Scalar _tmp214 = Scalar(0.1034955) * _tmp201;
  const Scalar _tmp215 =
      -_tmp206 * _tmp212 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp101 - 1), Scalar(2)) +
                     Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp103 - 1), Scalar(2))));
  const Scalar _tmp216 = _tmp214 * _tmp215;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
                    (-Scalar(0.1034955) * _tmp34 * _tmp37 +
                     _tmp35 * (Scalar(9.6622558468725703) * _tmp31 * _tmp38 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp36) -
               Scalar(9.6622558468725703) * std::sinh(_tmp39);
  _res(1, 0) = _tmp163 * (-Scalar(1.0) * _tmp170 * std::cosh(_tmp174) -
                          (-Scalar(0.1034955) * _tmp164 * _tmp167 +
                           _tmp172 * (-_tmp162 * _tmp171 - _tmp163 * _tmp170)) *
                              std::cosh(_tmp173)) +
               _tmp171 * (-std::sinh(_tmp173) - std::sinh(_tmp174));
  _res(2, 0) = _tmp192 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp187) -
                          (-Scalar(0.1034955) * _tmp190 * _tmp195 +
                           _tmp194 * (-_tmp186 * _tmp193 - _tmp191 * _tmp192)) *
                              std::cosh(_tmp196)) +
               _tmp193 * (-std::sinh(_tmp187) - std::sinh(_tmp196));
  _res(3, 0) = _tmp212 * (-Scalar(1.0) * _tmp211 * std::cosh(_tmp207) -
                          (-Scalar(0.1034955) * _tmp210 * _tmp215 +
                           _tmp214 * (-_tmp206 * _tmp213 - _tmp211 * _tmp212)) *
                              std::cosh(_tmp216)) +
               _tmp213 * (-std::sinh(_tmp207) - std::sinh(_tmp216));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
