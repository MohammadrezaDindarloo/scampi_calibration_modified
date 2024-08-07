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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl6
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl6(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 657

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (214)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp10 = _tmp1 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + p_init0;
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp1 * _tmp7;
  const Scalar _tmp23 = _tmp6 * _tmp9;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + p_init1;
  const Scalar _tmp30 = _tmp0 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 -
      Scalar(8.3888750099999996) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp18), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp29 - 1), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp31;
  const Scalar _tmp39 = _tmp18 + Scalar(-2.5202214700000001);
  const Scalar _tmp40 = _tmp29 + Scalar(8.3888750099999996);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp40 * _tmp41;
  const Scalar _tmp43 = _tmp39 * _tmp41;
  const Scalar _tmp44 = _tmp17 * _tmp42 - _tmp28 * _tmp43;
  const Scalar _tmp45 = _tmp25 - _tmp26;
  const Scalar _tmp46 = _tmp20 + _tmp45;
  const Scalar _tmp47 = _tmp46 + p_init1;
  const Scalar _tmp48 = _tmp47 + Scalar(-4.8333311099999996);
  const Scalar _tmp49 = -_tmp5;
  const Scalar _tmp50 = _tmp12 + _tmp15;
  const Scalar _tmp51 = _tmp49 + _tmp50;
  const Scalar _tmp52 = _tmp51 + p_init0;
  const Scalar _tmp53 = _tmp52 + Scalar(1.79662371);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp5 + _tmp50;
  const Scalar _tmp57 = _tmp20 + _tmp27;
  const Scalar _tmp58 = _tmp57 + p_init1;
  const Scalar _tmp59 = _tmp58 + Scalar(-4.7752063900000001);
  const Scalar _tmp60 = _tmp56 + p_init0;
  const Scalar _tmp61 = _tmp60 + Scalar(-2.71799795);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp59 * _tmp62;
  const Scalar _tmp64 = _tmp61 * _tmp62;
  const Scalar _tmp65 = _tmp21 + _tmp45;
  const Scalar _tmp66 = _tmp65 + p_init1;
  const Scalar _tmp67 = _tmp66 + Scalar(8.3196563700000006);
  const Scalar _tmp68 = _tmp16 + _tmp49;
  const Scalar _tmp69 = _tmp68 + p_init0;
  const Scalar _tmp70 = _tmp69 + Scalar(1.9874742000000001);
  const Scalar _tmp71 =
      std::sqrt(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))));
  const Scalar _tmp72 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp73 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp74 = _tmp71 * _tmp73;
  const Scalar _tmp75 = _tmp74 * (-_tmp65 * _tmp70 * _tmp72 + _tmp67 * _tmp68 * _tmp72);
  const Scalar _tmp76 = -_tmp56 * _tmp63 + _tmp57 * _tmp64 + _tmp64 * _tmp75;
  const Scalar _tmp77 = _tmp67 * _tmp73;
  const Scalar _tmp78 = _tmp48 * _tmp54;
  const Scalar _tmp79 = _tmp55 * _tmp77 - _tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (-_tmp63 + _tmp64 * _tmp77);
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp46 * _tmp55 - _tmp51 * _tmp78 + _tmp55 * _tmp75 - _tmp76 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp83;
  const Scalar _tmp85 = _tmp44 * _tmp74 * (_tmp55 * _tmp84 - _tmp64 * _tmp81 * _tmp84);
  const Scalar _tmp86 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp87 = -_tmp86;
  const Scalar _tmp88 =
      -Scalar(0.010999999999999999) * _tmp19 - Scalar(0.010999999999999999) * _tmp2;
  const Scalar _tmp89 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp90 = _tmp88 - _tmp89;
  const Scalar _tmp91 = _tmp87 + _tmp90;
  const Scalar _tmp92 = _tmp88 + _tmp89;
  const Scalar _tmp93 = _tmp87 + _tmp92;
  const Scalar _tmp94 = _tmp77 * _tmp91;
  const Scalar _tmp95 = _tmp86 + _tmp92;
  const Scalar _tmp96 = _tmp63 * _tmp95 - _tmp64 * _tmp94;
  const Scalar _tmp97 = -_tmp55 * _tmp94 + _tmp78 * _tmp93 - _tmp81 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) * _tmp65;
  const Scalar _tmp99 = -_tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp57 + _tmp99);
  const Scalar _tmp101 = Scalar(1.0) * _tmp68;
  const Scalar _tmp102 = _tmp100 * (_tmp101 - _tmp56);
  const Scalar _tmp103 = _tmp64 * _tmp91 - _tmp64 * _tmp95;
  const Scalar _tmp104 = -_tmp102 * _tmp97 - _tmp103 * _tmp81 + _tmp55 * _tmp91 - _tmp55 * _tmp93;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = Scalar(1.0) * _tmp80;
  const Scalar _tmp107 = _tmp106 * _tmp96;
  const Scalar _tmp108 = _tmp102 * _tmp107 - _tmp103 * _tmp106;
  const Scalar _tmp109 = _tmp105 * _tmp82;
  const Scalar _tmp110 = _tmp104 * _tmp83;
  const Scalar _tmp111 = _tmp110 * (-_tmp106 * _tmp76 - _tmp108 * _tmp109);
  const Scalar _tmp112 = _tmp108 + _tmp111;
  const Scalar _tmp113 = _tmp105 * _tmp112;
  const Scalar _tmp114 = _tmp105 * _tmp79;
  const Scalar _tmp115 = _tmp80 * (-_tmp112 * _tmp114 + Scalar(1.0));
  const Scalar _tmp116 = _tmp42 * _tmp74 * (_tmp113 * _tmp55 + _tmp115 * _tmp64);
  const Scalar _tmp117 = _tmp77 * _tmp80;
  const Scalar _tmp118 = _tmp117 * _tmp96 + _tmp94;
  const Scalar _tmp119 = -_tmp102 * _tmp118 + _tmp103 * _tmp117 - _tmp91;
  const Scalar _tmp120 = _tmp110 * (-_tmp109 * _tmp119 + _tmp117 * _tmp76 - _tmp75);
  const Scalar _tmp121 = _tmp119 + _tmp120;
  const Scalar _tmp122 = _tmp105 * _tmp121;
  const Scalar _tmp123 = _tmp80 * (-_tmp114 * _tmp121 - _tmp77);
  const Scalar _tmp124 = _tmp43 * _tmp74 * (_tmp122 * _tmp55 + _tmp123 * _tmp64 + Scalar(1.0));
  const Scalar _tmp125 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp126 = _tmp101 + _tmp102 * _tmp98;
  const Scalar _tmp127 = 0;
  const Scalar _tmp128 = _tmp105 * _tmp127;
  const Scalar _tmp129 = _tmp114 * _tmp127 * _tmp80;
  const Scalar _tmp130 = -_tmp116 * fh1 - _tmp124 * fh1 -
                         _tmp125 * _tmp74 * (_tmp128 * _tmp55 - _tmp129 * _tmp64) - _tmp85 * fh1;
  const Scalar _tmp131 = std::pow(_tmp130, Scalar(-2));
  const Scalar _tmp132 = -_tmp116 - _tmp124 - _tmp85;
  const Scalar _tmp133 = _tmp131 * _tmp132;
  const Scalar _tmp134 = _tmp46 + _tmp99;
  const Scalar _tmp135 = _tmp102 * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) / (_tmp101 - _tmp135 - _tmp51);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp134 * _tmp136;
  const Scalar _tmp139 = _tmp105 * _tmp97;
  const Scalar _tmp140 = -_tmp107 + _tmp111 * _tmp138 - _tmp112 * _tmp139;
  const Scalar _tmp141 = Scalar(1.0) * _tmp100;
  const Scalar _tmp142 = Scalar(1.0) * _tmp42 * (_tmp111 * _tmp137 - _tmp140 * _tmp141);
  const Scalar _tmp143 = _tmp118 + _tmp120 * _tmp138 - _tmp121 * _tmp139;
  const Scalar _tmp144 = Scalar(1.0) * _tmp43 * (_tmp120 * _tmp137 - _tmp141 * _tmp143);
  const Scalar _tmp145 = _tmp126 * _tmp136;
  const Scalar _tmp146 = _tmp100 * (-_tmp128 * _tmp97 - _tmp134 * _tmp145 + _tmp99);
  const Scalar _tmp147 = _tmp110 * _tmp137;
  const Scalar _tmp148 = _tmp134 * _tmp147 - _tmp84 * _tmp97;
  const Scalar _tmp149 = Scalar(1.0) * _tmp44;
  const Scalar _tmp150 = _tmp149 * (-_tmp141 * _tmp148 + _tmp147);
  const Scalar _tmp151 = _tmp86 + _tmp90;
  const Scalar _tmp152 = _tmp151 * fh1;
  const Scalar _tmp153 = -_tmp152 * _tmp42 - Scalar(3.29616) * _tmp24 - _tmp28 * fv1;
  const Scalar _tmp154 = _tmp102 * _tmp137;
  const Scalar _tmp155 = _tmp100 * (_tmp135 * _tmp137 + Scalar(1.0));
  const Scalar _tmp156 = Scalar(1.0) * _tmp154 - Scalar(1.0) * _tmp155;
  const Scalar _tmp157 = Scalar(3.29616) * _tmp11 + _tmp152 * _tmp43 + _tmp17 * fv1;
  const Scalar _tmp158 = _tmp100 * _tmp134;
  const Scalar _tmp159 = Scalar(1.0) * _tmp137 * _tmp158 - Scalar(1.0) * _tmp137;
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp125 * (-_tmp126 * _tmp137 - Scalar(1.0) * _tmp146 + Scalar(1.0)) +
      _tmp142 * fh1 + _tmp144 * fh1 + _tmp150 * fh1 + _tmp153 * _tmp156 + _tmp157 * _tmp159;
  const Scalar _tmp161 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp162 = std::asinh(_tmp160 * _tmp161);
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp130;
  const Scalar _tmp164 =
      -_tmp162 * _tmp163 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp66 - 1), Scalar(2)) +
                     Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp69 - 1), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.1034955) * _tmp161;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp132;
  const Scalar _tmp168 = _tmp151 * _tmp42;
  const Scalar _tmp169 = _tmp151 * _tmp43;
  const Scalar _tmp170 = (-_tmp133 * _tmp160 + _tmp161 * (_tmp142 + _tmp144 + _tmp150 -
                                                          _tmp156 * _tmp168 + _tmp159 * _tmp169)) /
                         std::sqrt(Scalar(_tmp131 * std::pow(_tmp160, Scalar(2)) + 1));
  const Scalar _tmp171 = Scalar(1.0) * _tmp162;
  const Scalar _tmp172 = _tmp115 * _tmp42;
  const Scalar _tmp173 = _tmp123 * _tmp43;
  const Scalar _tmp174 = _tmp149 * _tmp83;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = -_tmp125 * _tmp129 + _tmp172 * fh1 + _tmp173 * fh1 - _tmp175 * _tmp81;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp137 * _tmp157;
  const Scalar _tmp179 = _tmp100 * _tmp148 * _tmp44;
  const Scalar _tmp180 = _tmp100 * _tmp140 * _tmp42;
  const Scalar _tmp181 = _tmp100 * _tmp43;
  const Scalar _tmp182 = _tmp143 * _tmp181;
  const Scalar _tmp183 = _tmp125 * _tmp146 + _tmp153 * _tmp155 - _tmp158 * _tmp178 + _tmp179 * fh1 +
                         _tmp180 * fh1 + _tmp182 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp177 * _tmp183);
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp186 =
      -_tmp176 * _tmp185 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp58), Scalar(2)) +
                     Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp60), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = _tmp172 + _tmp173 - _tmp174 * _tmp81;
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp192 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp193 = _tmp190 * _tmp192;
  const Scalar _tmp194 = (_tmp177 * (-_tmp134 * _tmp137 * _tmp151 * _tmp181 - _tmp155 * _tmp168 +
                                     _tmp179 + _tmp180 + _tmp182) -
                          _tmp183 * _tmp193) /
                         std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp192 + 1));
  const Scalar _tmp195 = _tmp147 * _tmp44;
  const Scalar _tmp196 = _tmp120 * _tmp136 * _tmp43;
  const Scalar _tmp197 = _tmp111 * _tmp136 * _tmp42;
  const Scalar _tmp198 = _tmp125 * _tmp145 - _tmp153 * _tmp154 + _tmp178 - _tmp195 * fh1 -
                         _tmp196 * fh1 - _tmp197 * fh1;
  const Scalar _tmp199 = _tmp122 * _tmp43;
  const Scalar _tmp200 = _tmp113 * _tmp42;
  const Scalar _tmp201 = _tmp125 * _tmp128 + _tmp175 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp203 = std::asinh(_tmp198 * _tmp202);
  const Scalar _tmp204 = Scalar(9.6622558468725703) * _tmp201;
  const Scalar _tmp205 =
      -_tmp203 * _tmp204 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp47), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp52 - 1), Scalar(2))));
  const Scalar _tmp206 = Scalar(0.1034955) * _tmp202;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = _tmp174 + _tmp199 + _tmp200;
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp208;
  const Scalar _tmp210 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp211 = _tmp208 * _tmp210;
  const Scalar _tmp212 = (-_tmp198 * _tmp211 + _tmp202 * (_tmp137 * _tmp169 + _tmp154 * _tmp168 -
                                                          _tmp195 - _tmp196 - _tmp197)) /
                         std::sqrt(Scalar(std::pow(_tmp198, Scalar(2)) * _tmp210 + 1));
  const Scalar _tmp213 = Scalar(1.0) * _tmp203;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(8.4693136200000012) * _tmp0 -
               Scalar(9.6622558468725703) * fh1 *
                   (-Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::sinh(_tmp38) -
                    Scalar(0.87653584775870996) * _tmp36 -
                    (-Scalar(0.1034955) * _tmp33 * _tmp36 +
                     _tmp34 * (Scalar(9.6622558468725703) * _tmp30 * _tmp37 - _tmp32)) *
                        std::sinh(_tmp35)) +
               Scalar(9.6622558468725703) * std::cosh(_tmp35) -
               Scalar(9.6622558468725703) * std::cosh(_tmp38);
  _res(1, 0) =
      -_tmp163 *
          (-Scalar(0.87679799772039002) * _tmp133 + Scalar(1.0) * _tmp170 * std::sinh(_tmp171) -
           (-Scalar(0.1034955) * _tmp133 * _tmp164 +
            _tmp165 * (-_tmp162 * _tmp167 - _tmp163 * _tmp170)) *
               std::sinh(_tmp166)) -
      _tmp167 * (Scalar(0.87679799772039002) * _tmp161 - std::cosh(_tmp166) + std::cosh(_tmp171));
  _res(2, 0) =
      -Scalar(9.6622558468725703) * _tmp190 *
          (Scalar(0.86565325453551001) * _tmp177 - std::cosh(_tmp188) + std::cosh(_tmp189)) -
      _tmp191 *
          (-Scalar(0.86565325453551001) * _tmp193 + Scalar(1.0) * _tmp194 * std::sinh(_tmp189) -
           (-Scalar(0.1034955) * _tmp186 * _tmp193 +
            _tmp187 * (-_tmp185 * _tmp190 - _tmp191 * _tmp194)) *
               std::sinh(_tmp188));
  _res(3, 0) =
      -_tmp204 *
          (-Scalar(0.86625939559540499) * _tmp211 + Scalar(1.0) * _tmp212 * std::sinh(_tmp213) -
           (-Scalar(0.1034955) * _tmp205 * _tmp211 +
            _tmp206 * (-_tmp203 * _tmp209 - _tmp204 * _tmp212)) *
               std::sinh(_tmp207)) -
      _tmp209 * (Scalar(0.86625939559540499) * _tmp202 - std::cosh(_tmp207) + std::cosh(_tmp213));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
