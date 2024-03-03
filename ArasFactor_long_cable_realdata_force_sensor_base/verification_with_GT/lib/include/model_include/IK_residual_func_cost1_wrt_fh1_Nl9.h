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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl9
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 656

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (216)
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
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp20 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp1 * _tmp12;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + p_init1;
  const Scalar _tmp29 = _tmp0 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -_tmp31 * fh1 -
      Scalar(8.3888750099999996) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp18), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp28 - 1), Scalar(2))));
  const Scalar _tmp33 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(1.0) * _tmp30;
  const Scalar _tmp38 = -_tmp19;
  const Scalar _tmp39 = _tmp21 + _tmp25;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp41 + Scalar(-4.8333311099999996);
  const Scalar _tmp43 = -_tmp5;
  const Scalar _tmp44 = _tmp11 + _tmp15;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp45 + p_init0;
  const Scalar _tmp47 = _tmp46 + Scalar(1.79662371);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = _tmp42 * _tmp48;
  const Scalar _tmp51 = _tmp44 + _tmp5;
  const Scalar _tmp52 = _tmp51 + p_init0;
  const Scalar _tmp53 = _tmp52 + Scalar(-2.71799795);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp53);
  const Scalar _tmp55 = _tmp19 + _tmp39;
  const Scalar _tmp56 = _tmp55 + p_init1;
  const Scalar _tmp57 = _tmp56 + Scalar(-4.7752063900000001);
  const Scalar _tmp58 = _tmp54 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp49 * _tmp58 - _tmp50);
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp61 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp63 = _tmp61 + _tmp62;
  const Scalar _tmp64 = _tmp60 + _tmp63;
  const Scalar _tmp65 = -_tmp60;
  const Scalar _tmp66 = _tmp63 + _tmp65;
  const Scalar _tmp67 = _tmp49 * _tmp64 - _tmp49 * _tmp66;
  const Scalar _tmp68 = Scalar(1.0) * _tmp59;
  const Scalar _tmp69 = _tmp58 * _tmp64;
  const Scalar _tmp70 = -_tmp49 * _tmp69 + _tmp50 * _tmp66;
  const Scalar _tmp71 = _tmp68 * _tmp70;
  const Scalar _tmp72 = Scalar(1.0) * _tmp55;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp40 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp51;
  const Scalar _tmp76 = _tmp74 * (-_tmp45 + _tmp75);
  const Scalar _tmp77 = -_tmp67 * _tmp68 + _tmp71 * _tmp76;
  const Scalar _tmp78 = _tmp26 + _tmp38;
  const Scalar _tmp79 = _tmp78 + p_init1;
  const Scalar _tmp80 = _tmp79 + Scalar(8.3196563700000006);
  const Scalar _tmp81 = _tmp16 + _tmp43;
  const Scalar _tmp82 = _tmp81 + p_init0;
  const Scalar _tmp83 = _tmp82 + Scalar(1.9874742000000001);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp80 * _tmp84;
  const Scalar _tmp86 = _tmp83 * _tmp84;
  const Scalar _tmp87 = _tmp58 * _tmp86 - _tmp85;
  const Scalar _tmp88 = _tmp59 * _tmp87;
  const Scalar _tmp89 = _tmp64 * _tmp86;
  const Scalar _tmp90 = _tmp61 - _tmp62;
  const Scalar _tmp91 = _tmp65 + _tmp90;
  const Scalar _tmp92 = -_tmp58 * _tmp89 - _tmp70 * _tmp88 + _tmp85 * _tmp91;
  const Scalar _tmp93 = -_tmp67 * _tmp88 - _tmp76 * _tmp92 - _tmp86 * _tmp91 + _tmp89;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp54 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (_tmp51 * _tmp57 * _tmp96 - _tmp53 * _tmp55 * _tmp96);
  const Scalar _tmp99 = _tmp40 * _tmp49 - _tmp45 * _tmp50 + _tmp49 * _tmp98;
  const Scalar _tmp100 = _tmp78 * _tmp86 - _tmp81 * _tmp85 + _tmp86 * _tmp98 - _tmp88 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp94;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp93;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp77 - _tmp68 * _tmp99);
  const Scalar _tmp105 = _tmp104 + _tmp77;
  const Scalar _tmp106 = _tmp87 * _tmp94;
  const Scalar _tmp107 = _tmp59 * (-_tmp105 * _tmp106 + Scalar(1.0));
  const Scalar _tmp108 = _tmp105 * _tmp94;
  const Scalar _tmp109 = _tmp18 + Scalar(-2.5202214700000001);
  const Scalar _tmp110 = _tmp28 + Scalar(8.3888750099999996);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp110 * _tmp111;
  const Scalar _tmp113 = _tmp112 * _tmp97 * (_tmp107 * _tmp49 + _tmp108 * _tmp86);
  const Scalar _tmp114 = _tmp109 * _tmp111;
  const Scalar _tmp115 = _tmp112 * _tmp17 - _tmp114 * _tmp27;
  const Scalar _tmp116 = _tmp102 * _tmp68 * _tmp87;
  const Scalar _tmp117 = Scalar(1.0) * _tmp102;
  const Scalar _tmp118 = _tmp115 * _tmp97 * (-_tmp116 * _tmp49 + _tmp117 * _tmp86);
  const Scalar _tmp119 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp120 = _tmp72 * _tmp76 + _tmp75;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = _tmp58 * _tmp59;
  const Scalar _tmp123 = _tmp122 * _tmp70 + _tmp69;
  const Scalar _tmp124 = _tmp122 * _tmp67 - _tmp123 * _tmp76 - _tmp64;
  const Scalar _tmp125 = _tmp103 * (-_tmp101 * _tmp124 + _tmp122 * _tmp99 - _tmp98);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = _tmp126 * _tmp94;
  const Scalar _tmp128 = _tmp59 * (-_tmp106 * _tmp126 - _tmp58);
  const Scalar _tmp129 = _tmp114 * _tmp97 * (_tmp127 * _tmp86 + _tmp128 * _tmp49 + Scalar(1.0));
  const Scalar _tmp130 = -_tmp113 * fh1 - _tmp118 * fh1 -
                         _tmp119 * _tmp97 * (-_tmp121 * _tmp49 * _tmp88 + _tmp121 * _tmp86) -
                         _tmp129 * fh1;
  const Scalar _tmp131 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp132 = _tmp60 + _tmp90;
  const Scalar _tmp133 = _tmp132 * fh1;
  const Scalar _tmp134 = -_tmp112 * _tmp133 - Scalar(3.29616) * _tmp24 - _tmp27 * fv1;
  const Scalar _tmp135 = _tmp73 + _tmp78;
  const Scalar _tmp136 = _tmp135 * _tmp76;
  const Scalar _tmp137 = Scalar(1.0) / (-_tmp136 + _tmp75 - _tmp81);
  const Scalar _tmp138 = Scalar(1.0) * _tmp137;
  const Scalar _tmp139 = _tmp136 * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 = Scalar(1.0) * _tmp74;
  const Scalar _tmp141 = _tmp138 * _tmp76;
  const Scalar _tmp142 = -Scalar(1.0) * _tmp139 * _tmp140 + Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = Scalar(3.29616) * _tmp10 + _tmp114 * _tmp133 + _tmp17 * fv1;
  const Scalar _tmp144 = _tmp135 * _tmp74;
  const Scalar _tmp145 = Scalar(1.0) * _tmp138 * _tmp144 - Scalar(1.0) * _tmp138;
  const Scalar _tmp146 = _tmp92 * _tmp94;
  const Scalar _tmp147 = _tmp135 * _tmp137;
  const Scalar _tmp148 = _tmp104 * _tmp147 - _tmp105 * _tmp146 - _tmp71;
  const Scalar _tmp149 = Scalar(1.0) * _tmp112 * (_tmp104 * _tmp138 - _tmp140 * _tmp148);
  const Scalar _tmp150 = _tmp120 * _tmp137;
  const Scalar _tmp151 = _tmp74 * (-_tmp121 * _tmp92 - _tmp135 * _tmp150 + _tmp73);
  const Scalar _tmp152 = _tmp123 + _tmp125 * _tmp147 - _tmp126 * _tmp146;
  const Scalar _tmp153 = Scalar(1.0) * _tmp114 * (_tmp125 * _tmp138 - _tmp140 * _tmp152);
  const Scalar _tmp154 = _tmp103 * _tmp138;
  const Scalar _tmp155 = -_tmp117 * _tmp92 + _tmp135 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp115;
  const Scalar _tmp157 = _tmp156 * (-_tmp140 * _tmp155 + _tmp154);
  const Scalar _tmp158 =
      Scalar(1.0) * _tmp119 * (-_tmp120 * _tmp138 - Scalar(1.0) * _tmp151 + Scalar(1.0)) +
      _tmp134 * _tmp142 + _tmp143 * _tmp145 + _tmp149 * fh1 + _tmp153 * fh1 + _tmp157 * fh1;
  const Scalar _tmp159 = std::asinh(_tmp131 * _tmp158);
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp130;
  const Scalar _tmp161 =
      -_tmp159 * _tmp160 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp52), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp56), Scalar(2))));
  const Scalar _tmp162 = Scalar(0.1034955) * _tmp131;
  const Scalar _tmp163 = _tmp161 * _tmp162;
  const Scalar _tmp164 = Scalar(1.0) * _tmp159;
  const Scalar _tmp165 = -_tmp113 - _tmp118 - _tmp129;
  const Scalar _tmp166 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp167 = std::pow(_tmp130, Scalar(-2));
  const Scalar _tmp168 = _tmp165 * _tmp167;
  const Scalar _tmp169 = _tmp114 * _tmp132;
  const Scalar _tmp170 = _tmp112 * _tmp132;
  const Scalar _tmp171 =
      (_tmp131 * (-_tmp142 * _tmp170 + _tmp145 * _tmp169 + _tmp149 + _tmp153 + _tmp157) -
       _tmp158 * _tmp168) /
      std::sqrt(Scalar(std::pow(_tmp158, Scalar(2)) * _tmp167 + 1));
  const Scalar _tmp172 = _tmp112 * _tmp148 * _tmp74;
  const Scalar _tmp173 = _tmp139 * _tmp74;
  const Scalar _tmp174 = _tmp115 * _tmp155 * _tmp74;
  const Scalar _tmp175 = _tmp114 * _tmp74;
  const Scalar _tmp176 = _tmp152 * _tmp175;
  const Scalar _tmp177 = _tmp138 * _tmp143;
  const Scalar _tmp178 = _tmp119 * _tmp151 + _tmp134 * _tmp173 - _tmp144 * _tmp177 + _tmp172 * fh1 +
                         _tmp174 * fh1 + _tmp176 * fh1;
  const Scalar _tmp179 = _tmp107 * _tmp112;
  const Scalar _tmp180 = _tmp115 * _tmp116;
  const Scalar _tmp181 = _tmp114 * _tmp128;
  const Scalar _tmp182 = _tmp119 * _tmp121;
  const Scalar _tmp183 = _tmp179 * fh1 - _tmp180 * fh1 + _tmp181 * fh1 - _tmp182 * _tmp88;
  const Scalar _tmp184 = Scalar(1.0) / (_tmp183);
  const Scalar _tmp185 = std::asinh(_tmp178 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp183;
  const Scalar _tmp188 =
      -_tmp185 * _tmp187 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp41), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp46 - 1), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp184;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = _tmp179 - _tmp180 + _tmp181;
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp191;
  const Scalar _tmp193 = std::pow(_tmp183, Scalar(-2));
  const Scalar _tmp194 = _tmp191 * _tmp193;
  const Scalar _tmp195 =
      (-_tmp178 * _tmp194 + _tmp184 * (-_tmp132 * _tmp135 * _tmp138 * _tmp175 - _tmp170 * _tmp173 +
                                       _tmp172 + _tmp174 + _tmp176)) /
      std::sqrt(Scalar(std::pow(_tmp178, Scalar(2)) * _tmp193 + 1));
  const Scalar _tmp196 = _tmp102 * _tmp156;
  const Scalar _tmp197 = _tmp108 * _tmp112;
  const Scalar _tmp198 = _tmp114 * _tmp127;
  const Scalar _tmp199 = _tmp182 + _tmp196 * fh1 + _tmp197 * fh1 + _tmp198 * fh1;
  const Scalar _tmp200 = Scalar(1.0) / (_tmp199);
  const Scalar _tmp201 = _tmp114 * _tmp125 * _tmp137;
  const Scalar _tmp202 = _tmp115 * _tmp154;
  const Scalar _tmp203 = _tmp104 * _tmp112 * _tmp137;
  const Scalar _tmp204 = _tmp119 * _tmp150 - _tmp134 * _tmp141 + _tmp177 - _tmp201 * fh1 -
                         _tmp202 * fh1 - _tmp203 * fh1;
  const Scalar _tmp205 = std::asinh(_tmp200 * _tmp204);
  const Scalar _tmp206 = Scalar(9.6622558468725703) * _tmp199;
  const Scalar _tmp207 =
      -_tmp205 * _tmp206 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp79 - 1), Scalar(2)) +
                     Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp82 - 1), Scalar(2))));
  const Scalar _tmp208 = Scalar(0.1034955) * _tmp200;
  const Scalar _tmp209 = _tmp207 * _tmp208;
  const Scalar _tmp210 = Scalar(1.0) * _tmp205;
  const Scalar _tmp211 = _tmp196 + _tmp197 + _tmp198;
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp211;
  const Scalar _tmp213 = std::pow(_tmp199, Scalar(-2));
  const Scalar _tmp214 = _tmp211 * _tmp213;
  const Scalar _tmp215 =
      (_tmp200 * (_tmp138 * _tmp169 + _tmp141 * _tmp170 - _tmp201 - _tmp202 - _tmp203) -
       _tmp204 * _tmp214) /
      std::sqrt(Scalar(std::pow(_tmp204, Scalar(2)) * _tmp213 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(8.4693136200000012) * _tmp0 -
               Scalar(9.6622558468725703) * fh1 *
                   (-Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::sinh(_tmp37) -
                    Scalar(0.87653584775870996) * _tmp35 -
                    (-Scalar(0.1034955) * _tmp32 * _tmp35 +
                     _tmp33 * (Scalar(9.6622558468725703) * _tmp29 * _tmp36 - _tmp31)) *
                        std::sinh(_tmp34)) +
               Scalar(9.6622558468725703) * std::cosh(_tmp34) -
               Scalar(9.6622558468725703) * std::cosh(_tmp37);
  _res(1, 0) =
      -_tmp160 *
          (-Scalar(0.86565325453551001) * _tmp168 + Scalar(1.0) * _tmp171 * std::sinh(_tmp164) -
           (-Scalar(0.1034955) * _tmp161 * _tmp168 +
            _tmp162 * (-_tmp159 * _tmp166 - _tmp160 * _tmp171)) *
               std::sinh(_tmp163)) -
      _tmp166 * (Scalar(0.86565325453551001) * _tmp131 - std::cosh(_tmp163) + std::cosh(_tmp164));
  _res(2, 0) =
      -_tmp187 *
          (-Scalar(0.86625939559540499) * _tmp194 + Scalar(1.0) * _tmp195 * std::sinh(_tmp186) -
           (-Scalar(0.1034955) * _tmp188 * _tmp194 +
            _tmp189 * (-_tmp185 * _tmp192 - _tmp187 * _tmp195)) *
               std::sinh(_tmp190)) -
      _tmp192 * (Scalar(0.86625939559540499) * _tmp184 + std::cosh(_tmp186) - std::cosh(_tmp190));
  _res(3, 0) =
      -_tmp206 *
          (-Scalar(0.87679799772039002) * _tmp214 + Scalar(1.0) * _tmp215 * std::sinh(_tmp210) -
           (-Scalar(0.1034955) * _tmp207 * _tmp214 +
            _tmp208 * (-_tmp205 * _tmp212 - _tmp206 * _tmp215)) *
               std::sinh(_tmp209)) -
      _tmp212 * (Scalar(0.87679799772039002) * _tmp200 - std::cosh(_tmp209) + std::cosh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym