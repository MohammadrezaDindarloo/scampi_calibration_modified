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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl10
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 657

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (213)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp7 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp1 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + p_init0;
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp2 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp23 = _tmp1 * _tmp12;
  const Scalar _tmp24 = _tmp6 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + p_init1;
  const Scalar _tmp30 = _tmp0 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * _tmp31;
  const Scalar _tmp33 =
      -Scalar(0.1034955) * _tmp32 * fh1 -
      Scalar(0.868210813597455) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp18), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp29 - 1), Scalar(2))));
  const Scalar _tmp34 = _tmp0 * _tmp33;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(1.0) * _tmp31;
  const Scalar _tmp38 = -_tmp5;
  const Scalar _tmp39 = _tmp11 + _tmp15;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init0;
  const Scalar _tmp42 = -_tmp22 + _tmp26;
  const Scalar _tmp43 = _tmp20 + _tmp42;
  const Scalar _tmp44 = _tmp43 + p_init1;
  const Scalar _tmp45 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp46 = -_tmp45;
  const Scalar _tmp47 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp48 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = _tmp46 + _tmp49;
  const Scalar _tmp51 = _tmp21 + _tmp42;
  const Scalar _tmp52 = _tmp51 + p_init1;
  const Scalar _tmp53 = _tmp52 + Scalar(8.3196563700000006);
  const Scalar _tmp54 = _tmp16 + _tmp38;
  const Scalar _tmp55 = _tmp54 + p_init0;
  const Scalar _tmp56 = _tmp55 + Scalar(1.9874742000000001);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp47 - _tmp48;
  const Scalar _tmp60 = _tmp46 + _tmp59;
  const Scalar _tmp61 = _tmp50 * _tmp58 - _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp53 * _tmp57;
  const Scalar _tmp63 = _tmp44 + Scalar(-4.8333311099999996);
  const Scalar _tmp64 = _tmp41 + Scalar(1.79662371);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp58 * _tmp66 - _tmp62);
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp50 * _tmp66;
  const Scalar _tmp70 = -_tmp58 * _tmp69 + _tmp60 * _tmp62;
  const Scalar _tmp71 = _tmp68 * _tmp70 + _tmp69;
  const Scalar _tmp72 = Scalar(1.0) * _tmp43;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp51 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp40;
  const Scalar _tmp76 = _tmp74 * (-_tmp54 + _tmp75);
  const Scalar _tmp77 = -_tmp50 + _tmp61 * _tmp68 - _tmp71 * _tmp76;
  const Scalar _tmp78 = _tmp45 + _tmp49;
  const Scalar _tmp79 = _tmp39 + _tmp5;
  const Scalar _tmp80 = _tmp79 + p_init0;
  const Scalar _tmp81 = _tmp80 + Scalar(-2.71799795);
  const Scalar _tmp82 = _tmp20 + _tmp27;
  const Scalar _tmp83 = _tmp82 + p_init1;
  const Scalar _tmp84 = _tmp83 + Scalar(-4.7752063900000001);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp81 * _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp85;
  const Scalar _tmp88 = _tmp66 * _tmp86 - _tmp87;
  const Scalar _tmp89 = _tmp67 * _tmp88;
  const Scalar _tmp90 = -_tmp69 * _tmp86 - _tmp70 * _tmp89 + _tmp78 * _tmp87;
  const Scalar _tmp91 = _tmp50 * _tmp86 - _tmp61 * _tmp89 - _tmp76 * _tmp90 - _tmp78 * _tmp86;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 =
      std::sqrt(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp64, Scalar(2))));
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp65 * _tmp93;
  const Scalar _tmp96 = _tmp95 * (_tmp40 * _tmp63 * _tmp94 - _tmp43 * _tmp64 * _tmp94);
  const Scalar _tmp97 = _tmp51 * _tmp58 - _tmp54 * _tmp62 + _tmp58 * _tmp96;
  const Scalar _tmp98 = -_tmp79 * _tmp87 + _tmp82 * _tmp86 + _tmp86 * _tmp96 - _tmp89 * _tmp97;
  const Scalar _tmp99 = _tmp92 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp101 = _tmp100 * _tmp91;
  const Scalar _tmp102 = _tmp101 * (_tmp68 * _tmp97 - _tmp77 * _tmp99 - _tmp96);
  const Scalar _tmp103 = _tmp102 + _tmp77;
  const Scalar _tmp104 = _tmp86 * _tmp92;
  const Scalar _tmp105 = _tmp88 * _tmp92;
  const Scalar _tmp106 = _tmp67 * (-_tmp103 * _tmp105 - _tmp66);
  const Scalar _tmp107 = _tmp18 + Scalar(-2.5202214700000001);
  const Scalar _tmp108 = _tmp29 + Scalar(8.3888750099999996);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp95 * (_tmp103 * _tmp104 + _tmp106 * _tmp58 + Scalar(1.0));
  const Scalar _tmp112 = _tmp108 * _tmp109;
  const Scalar _tmp113 = -_tmp110 * _tmp28 + _tmp112 * _tmp17;
  const Scalar _tmp114 = Scalar(1.0) * _tmp67;
  const Scalar _tmp115 = _tmp100 * _tmp114 * _tmp88;
  const Scalar _tmp116 = Scalar(1.0) * _tmp100;
  const Scalar _tmp117 = _tmp113 * _tmp95 * (-_tmp115 * _tmp58 + _tmp116 * _tmp86);
  const Scalar _tmp118 = _tmp114 * _tmp70;
  const Scalar _tmp119 = -_tmp114 * _tmp61 + _tmp118 * _tmp76;
  const Scalar _tmp120 = _tmp101 * (-_tmp114 * _tmp97 - _tmp119 * _tmp99);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = _tmp67 * (-_tmp105 * _tmp121 + Scalar(1.0));
  const Scalar _tmp123 = _tmp112 * _tmp95 * (_tmp104 * _tmp121 + _tmp122 * _tmp58);
  const Scalar _tmp124 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp125 = _tmp72 * _tmp76 + _tmp75;
  const Scalar _tmp126 = 0;
  const Scalar _tmp127 = _tmp126 * _tmp92;
  const Scalar _tmp128 = -_tmp111 * fh1 - _tmp117 * fh1 - _tmp123 * fh1 -
                         _tmp124 * _tmp95 * (-_tmp127 * _tmp58 * _tmp89 + _tmp127 * _tmp86);
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = _tmp73 + _tmp82;
  const Scalar _tmp131 = _tmp130 * _tmp76;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 + _tmp75 - _tmp79);
  const Scalar _tmp133 = _tmp130 * _tmp132;
  const Scalar _tmp134 = _tmp90 * _tmp92;
  const Scalar _tmp135 = -_tmp118 + _tmp120 * _tmp133 - _tmp121 * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) * _tmp74;
  const Scalar _tmp137 = Scalar(1.0) * _tmp132;
  const Scalar _tmp138 = Scalar(1.0) * _tmp112 * (_tmp120 * _tmp137 - _tmp135 * _tmp136);
  const Scalar _tmp139 = _tmp101 * _tmp137;
  const Scalar _tmp140 = -_tmp116 * _tmp90 + _tmp130 * _tmp139;
  const Scalar _tmp141 = Scalar(1.0) * _tmp113 * (-_tmp136 * _tmp140 + _tmp139);
  const Scalar _tmp142 = _tmp102 * _tmp133 - _tmp103 * _tmp134 + _tmp71;
  const Scalar _tmp143 = Scalar(1.0) * _tmp110 * (_tmp102 * _tmp137 - _tmp136 * _tmp142);
  const Scalar _tmp144 = _tmp45 + _tmp59;
  const Scalar _tmp145 = _tmp144 * fh1;
  const Scalar _tmp146 = Scalar(3.29616) * _tmp10 + _tmp110 * _tmp145 + _tmp17 * fv1;
  const Scalar _tmp147 = _tmp130 * _tmp74;
  const Scalar _tmp148 = _tmp137 * _tmp147;
  const Scalar _tmp149 = -Scalar(1.0) * _tmp137 + Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = -_tmp112 * _tmp145 - Scalar(3.29616) * _tmp25 - _tmp28 * fv1;
  const Scalar _tmp151 = _tmp137 * _tmp76;
  const Scalar _tmp152 = _tmp131 * _tmp137 + Scalar(1.0);
  const Scalar _tmp153 = -Scalar(1.0) * _tmp136 * _tmp152 + Scalar(1.0) * _tmp151;
  const Scalar _tmp154 = _tmp125 * _tmp132;
  const Scalar _tmp155 = -_tmp126 * _tmp134 - _tmp130 * _tmp154 + _tmp73;
  const Scalar _tmp156 =
      Scalar(1.0) * _tmp124 * (-_tmp125 * _tmp137 - _tmp136 * _tmp155 + Scalar(1.0)) +
      _tmp138 * fh1 + _tmp141 * fh1 + _tmp143 * fh1 + _tmp146 * _tmp149 + _tmp150 * _tmp153;
  const Scalar _tmp157 = std::asinh(_tmp129 * _tmp156);
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp159 =
      -_tmp157 * _tmp158 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp44), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp41 - 1), Scalar(2))));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp129;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = -_tmp111 - _tmp117 - _tmp123;
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp162;
  const Scalar _tmp164 = _tmp110 * _tmp144;
  const Scalar _tmp165 = _tmp112 * _tmp144;
  const Scalar _tmp166 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp167 = _tmp162 * _tmp166;
  const Scalar _tmp168 =
      (_tmp129 * (_tmp138 + _tmp141 + _tmp143 + _tmp149 * _tmp164 - _tmp153 * _tmp165) -
       _tmp156 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp156, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp169 = Scalar(1.0) * _tmp157;
  const Scalar _tmp170 = _tmp152 * _tmp74;
  const Scalar _tmp171 = _tmp112 * _tmp135 * _tmp74;
  const Scalar _tmp172 = _tmp110 * _tmp142 * _tmp74;
  const Scalar _tmp173 = _tmp137 * _tmp146;
  const Scalar _tmp174 = _tmp113 * _tmp140 * _tmp74;
  const Scalar _tmp175 = _tmp124 * _tmp155 * _tmp74 - _tmp147 * _tmp173 + _tmp150 * _tmp170 +
                         _tmp171 * fh1 + _tmp172 * fh1 + _tmp174 * fh1;
  const Scalar _tmp176 = _tmp124 * _tmp127;
  const Scalar _tmp177 = _tmp106 * _tmp110;
  const Scalar _tmp178 = _tmp112 * _tmp122;
  const Scalar _tmp179 = _tmp113 * _tmp115;
  const Scalar _tmp180 = -_tmp176 * _tmp89 + _tmp177 * fh1 + _tmp178 * fh1 - _tmp179 * fh1;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = std::asinh(_tmp175 * _tmp181);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp185 = _tmp177 + _tmp178 - _tmp179;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = (-_tmp175 * _tmp186 + _tmp181 * (-_tmp148 * _tmp164 - _tmp165 * _tmp170 +
                                                          _tmp171 + _tmp172 + _tmp174)) /
                         std::sqrt(Scalar(std::pow(_tmp175, Scalar(2)) * _tmp184 + 1));
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp191 =
      -_tmp180 * _tmp188 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp52 - 1), Scalar(2)) +
                     Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp55 - 1), Scalar(2))));
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = _tmp112 * _tmp121 * _tmp92;
  const Scalar _tmp194 = _tmp113 * _tmp116;
  const Scalar _tmp195 = _tmp103 * _tmp110 * _tmp92;
  const Scalar _tmp196 = _tmp176 + _tmp193 * fh1 + _tmp194 * fh1 + _tmp195 * fh1;
  const Scalar _tmp197 = Scalar(1.0) / (_tmp196);
  const Scalar _tmp198 = _tmp102 * _tmp110 * _tmp132;
  const Scalar _tmp199 = _tmp113 * _tmp139;
  const Scalar _tmp200 = _tmp112 * _tmp120 * _tmp132;
  const Scalar _tmp201 = _tmp124 * _tmp154 - _tmp150 * _tmp151 + _tmp173 - _tmp198 * fh1 -
                         _tmp199 * fh1 - _tmp200 * fh1;
  const Scalar _tmp202 = std::asinh(_tmp197 * _tmp201);
  const Scalar _tmp203 = Scalar(9.6622558468725703) * _tmp196;
  const Scalar _tmp204 =
      -_tmp202 * _tmp203 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp80), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp83), Scalar(2))));
  const Scalar _tmp205 = Scalar(0.1034955) * _tmp197;
  const Scalar _tmp206 = _tmp204 * _tmp205;
  const Scalar _tmp207 = Scalar(1.0) * _tmp202;
  const Scalar _tmp208 = _tmp193 + _tmp194 + _tmp195;
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp208;
  const Scalar _tmp210 = std::pow(_tmp196, Scalar(-2));
  const Scalar _tmp211 = _tmp208 * _tmp210;
  const Scalar _tmp212 =
      (_tmp197 * (_tmp137 * _tmp164 + _tmp151 * _tmp165 - _tmp198 - _tmp199 - _tmp200) -
       _tmp201 * _tmp211) /
      std::sqrt(Scalar(std::pow(_tmp201, Scalar(2)) * _tmp210 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(8.4693136200000012) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::sinh(_tmp37) -
           Scalar(0.87653584775870996) * _tmp35 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp30 * _tmp36 - _tmp32) -
            _tmp33 * _tmp35) *
               std::sinh(_tmp34)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp34) -
      Scalar(9.6622558468725703) * std::cosh(_tmp37);
  _res(1, 0) =
      -_tmp158 *
          (-Scalar(0.86625939559540499) * _tmp167 + Scalar(1.0) * _tmp168 * std::sinh(_tmp169) -
           (-Scalar(0.1034955) * _tmp159 * _tmp167 +
            _tmp160 * (-_tmp157 * _tmp163 - _tmp158 * _tmp168)) *
               std::sinh(_tmp161)) -
      _tmp163 * (Scalar(0.86625939559540499) * _tmp129 - std::cosh(_tmp161) + std::cosh(_tmp169));
  _res(2, 0) =
      -Scalar(9.6622558468725703) * _tmp185 *
          (Scalar(0.87679799772039002) * _tmp181 + std::cosh(_tmp183) - std::cosh(_tmp192)) -
      _tmp189 *
          (-Scalar(0.87679799772039002) * _tmp186 + Scalar(1.0) * _tmp187 * std::sinh(_tmp183) -
           (-Scalar(0.1034955) * _tmp186 * _tmp191 +
            _tmp190 * (-_tmp185 * _tmp188 - _tmp187 * _tmp189)) *
               std::sinh(_tmp192));
  _res(3, 0) =
      -_tmp203 *
          (-Scalar(0.86565325453551001) * _tmp211 + Scalar(1.0) * _tmp212 * std::sinh(_tmp207) -
           (-Scalar(0.1034955) * _tmp204 * _tmp211 +
            _tmp205 * (-_tmp202 * _tmp209 - _tmp203 * _tmp212)) *
               std::sinh(_tmp206)) -
      _tmp209 * (Scalar(0.86565325453551001) * _tmp197 - std::cosh(_tmp206) + std::cosh(_tmp207));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
