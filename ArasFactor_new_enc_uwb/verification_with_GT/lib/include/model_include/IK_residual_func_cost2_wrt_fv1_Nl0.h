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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl0
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 594

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (192)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
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
  const Scalar _tmp13 = 2 * _tmp3;
  const Scalar _tmp14 = _tmp12 * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp10 * _tmp3;
  const Scalar _tmp18 = 2 * _tmp12 * _tmp5;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp16 - _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + p_init0;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = _tmp13 * _tmp5;
  const Scalar _tmp26 = _tmp10 * _tmp12;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp30 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp32 = _tmp29 - _tmp31;
  const Scalar _tmp33 = _tmp24 + _tmp32;
  const Scalar _tmp34 = _tmp33 + p_init1;
  const Scalar _tmp35 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp36 = _tmp34 + Scalar(8.3196563700000006);
  const Scalar _tmp37 = _tmp22 + Scalar(1.9874742000000001);
  const Scalar _tmp38 = std::pow(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp37, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp37 * _tmp38;
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp41 = -_tmp40;
  const Scalar _tmp42 = -Scalar(0.010999999999999999) * _tmp30 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp44 = _tmp42 - _tmp43;
  const Scalar _tmp45 = fh1 * (_tmp41 + _tmp44);
  const Scalar _tmp46 = Scalar(3.29616) * _tmp15 + _tmp21 * fv1 + _tmp39 * _tmp45;
  const Scalar _tmp47 = _tmp16 + _tmp19;
  const Scalar _tmp48 = _tmp47 + _tmp8;
  const Scalar _tmp49 = _tmp20 + _tmp7;
  const Scalar _tmp50 = Scalar(1.0) * _tmp49;
  const Scalar _tmp51 = _tmp23 + _tmp32;
  const Scalar _tmp52 = Scalar(1.0) * _tmp51;
  const Scalar _tmp53 = -_tmp52;
  const Scalar _tmp54 = _tmp24 + _tmp29 + _tmp31;
  const Scalar _tmp55 = _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp23 + _tmp31;
  const Scalar _tmp57 = _tmp29 + _tmp56;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp53 + _tmp57);
  const Scalar _tmp59 = _tmp47 + _tmp7;
  const Scalar _tmp60 = _tmp50 - _tmp59;
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = _tmp55 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (-_tmp48 + _tmp50 - _tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp63;
  const Scalar _tmp65 = _tmp55 * _tmp58;
  const Scalar _tmp66 = Scalar(1.0) * _tmp64 * _tmp65 - Scalar(1.0) * _tmp64;
  const Scalar _tmp67 = _tmp42 + _tmp43;
  const Scalar _tmp68 = _tmp40 + _tmp67;
  const Scalar _tmp69 = _tmp59 + p_init0;
  const Scalar _tmp70 = _tmp69 + Scalar(-2.71799795);
  const Scalar _tmp71 = _tmp57 + p_init1;
  const Scalar _tmp72 = _tmp71 + Scalar(-4.7752063900000001);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp70 * _tmp73;
  const Scalar _tmp75 = _tmp40 + _tmp44;
  const Scalar _tmp76 = -_tmp68 * _tmp74 + _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp54 + p_init1;
  const Scalar _tmp78 = _tmp77 + Scalar(-4.8333311099999996);
  const Scalar _tmp79 = _tmp48 + p_init0;
  const Scalar _tmp80 = _tmp79 + Scalar(1.79662371);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp78, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp78 * _tmp81;
  const Scalar _tmp83 = _tmp49 + p_init0;
  const Scalar _tmp84 = _tmp83 + Scalar(-2.5202214700000001);
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp51 + p_init1;
  const Scalar _tmp87 = _tmp86 + Scalar(8.3888750099999996);
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp80 * _tmp81;
  const Scalar _tmp90 = -_tmp82 + _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp72 * _tmp73;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp74 * _tmp88 - _tmp91);
  const Scalar _tmp93 = _tmp90 * _tmp92;
  const Scalar _tmp94 = _tmp75 * _tmp88;
  const Scalar _tmp95 = _tmp41 + _tmp67;
  const Scalar _tmp96 = _tmp68 * _tmp91 - _tmp74 * _tmp94;
  const Scalar _tmp97 = _tmp82 * _tmp95 - _tmp89 * _tmp94 - _tmp93 * _tmp96;
  const Scalar _tmp98 = -_tmp61 * _tmp97 + _tmp75 * _tmp89 - _tmp76 * _tmp93 - _tmp89 * _tmp95;
  const Scalar _tmp99 =
      std::sqrt(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp87, Scalar(2))));
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 = _tmp85 * _tmp99;
  const Scalar _tmp102 = _tmp101 * (_tmp100 * _tmp49 * _tmp87 - _tmp100 * _tmp51 * _tmp84);
  const Scalar _tmp103 = _tmp102 * _tmp74 + _tmp57 * _tmp74 - _tmp59 * _tmp91;
  const Scalar _tmp104 = _tmp102 * _tmp89 - _tmp103 * _tmp93 - _tmp48 * _tmp82 + _tmp54 * _tmp89;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp106 = _tmp105 * _tmp98;
  const Scalar _tmp107 = _tmp106 * _tmp64;
  const Scalar _tmp108 = Scalar(1.0) * _tmp105;
  const Scalar _tmp109 = _tmp107 * _tmp55 - _tmp108 * _tmp97;
  const Scalar _tmp110 = Scalar(1.0) * _tmp58;
  const Scalar _tmp111 = _tmp36 * _tmp38;
  const Scalar _tmp112 = fh1 * (_tmp111 * _tmp21 - _tmp33 * _tmp39);
  const Scalar _tmp113 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp114 = _tmp50 + _tmp52 * _tmp61;
  const Scalar _tmp115 = _tmp114 * _tmp63;
  const Scalar _tmp116 = 0;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp118 = _tmp117 * _tmp97;
  const Scalar _tmp119 = _tmp58 * (-_tmp115 * _tmp55 - _tmp116 * _tmp118 + _tmp53);
  const Scalar _tmp120 = -Scalar(1.0) * _tmp115 - Scalar(1.0) * _tmp119 + Scalar(1.0);
  const Scalar _tmp121 = _tmp88 * _tmp92;
  const Scalar _tmp122 = _tmp121 * _tmp96 + _tmp94;
  const Scalar _tmp123 = _tmp121 * _tmp76 - _tmp122 * _tmp61 - _tmp75;
  const Scalar _tmp124 = _tmp104 * _tmp117;
  const Scalar _tmp125 = _tmp106 * (-_tmp102 + _tmp103 * _tmp121 - _tmp123 * _tmp124);
  const Scalar _tmp126 = _tmp55 * _tmp63;
  const Scalar _tmp127 = _tmp123 + _tmp125;
  const Scalar _tmp128 = -_tmp118 * _tmp127 + _tmp122 + _tmp125 * _tmp126;
  const Scalar _tmp129 = _tmp39 * fh1;
  const Scalar _tmp130 = -_tmp111 * _tmp45 - Scalar(3.29616) * _tmp27 - _tmp33 * fv1;
  const Scalar _tmp131 = _tmp62 * _tmp64 + Scalar(1.0);
  const Scalar _tmp132 = _tmp61 * _tmp64;
  const Scalar _tmp133 = -Scalar(1.0) * _tmp110 * _tmp131 + Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp92;
  const Scalar _tmp135 = _tmp110 * _tmp60 * _tmp92 * _tmp96 - _tmp134 * _tmp76;
  const Scalar _tmp136 = _tmp106 * (-_tmp103 * _tmp134 - _tmp124 * _tmp135);
  const Scalar _tmp137 = _tmp117 * (_tmp135 + _tmp136);
  const Scalar _tmp138 = _tmp126 * _tmp136 - _tmp134 * _tmp96 - _tmp137 * _tmp97;
  const Scalar _tmp139 = _tmp111 * fh1;
  const Scalar _tmp140 =
      Scalar(1.0) * _tmp112 * (_tmp107 - _tmp109 * _tmp110) + _tmp113 * _tmp120 +
      Scalar(1.0) * _tmp129 * (-_tmp110 * _tmp128 + _tmp125 * _tmp64) + _tmp130 * _tmp133 +
      Scalar(1.0) * _tmp139 * (-_tmp110 * _tmp138 + _tmp136 * _tmp64) + _tmp46 * _tmp66;
  const Scalar _tmp141 = _tmp117 * _tmp127;
  const Scalar _tmp142 = -_tmp141 * _tmp90 - _tmp88;
  const Scalar _tmp143 = _tmp74 * _tmp92;
  const Scalar _tmp144 = _tmp116 * _tmp117;
  const Scalar _tmp145 = _tmp74 * _tmp93;
  const Scalar _tmp146 = _tmp101 * (-_tmp144 * _tmp145 + _tmp144 * _tmp89);
  const Scalar _tmp147 = -_tmp137 * _tmp90 + Scalar(1.0);
  const Scalar _tmp148 = -_tmp101 * _tmp112 * (-_tmp108 * _tmp145 + _tmp108 * _tmp89) -
                         _tmp101 * _tmp129 * (_tmp141 * _tmp89 + _tmp142 * _tmp143 + Scalar(1.0)) -
                         _tmp101 * _tmp139 * (_tmp137 * _tmp89 + _tmp143 * _tmp147) -
                         _tmp113 * _tmp146;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 = std::asinh(_tmp140 * _tmp149);
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp153 =
      -_tmp150 * _tmp152 -
      Scalar(8.3888750099999996) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp83), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp86 - 1), Scalar(2))));
  const Scalar _tmp154 = Scalar(0.1034955) * _tmp149;
  const Scalar _tmp155 = _tmp153 * _tmp154;
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp157 = std::pow(_tmp148, Scalar(-2));
  const Scalar _tmp158 = _tmp28 + _tmp56;
  const Scalar _tmp159 = _tmp146 * _tmp157;
  const Scalar _tmp160 =
      (-_tmp140 * _tmp159 + _tmp149 * (-_tmp120 + _tmp133 * _tmp158 + _tmp21 * _tmp66)) /
      std::sqrt(Scalar(std::pow(_tmp140, Scalar(2)) * _tmp157 + 1));
  const Scalar _tmp161 = _tmp131 * _tmp58;
  const Scalar _tmp162 = _tmp46 * _tmp64;
  const Scalar _tmp163 = _tmp109 * _tmp112 * _tmp58 + _tmp113 * _tmp119 +
                         _tmp128 * _tmp129 * _tmp58 + _tmp130 * _tmp161 +
                         _tmp138 * _tmp139 * _tmp58 - _tmp162 * _tmp65;
  const Scalar _tmp164 = _tmp108 * _tmp112;
  const Scalar _tmp165 = _tmp113 * _tmp144;
  const Scalar _tmp166 =
      _tmp129 * _tmp142 * _tmp92 + _tmp139 * _tmp147 * _tmp92 - _tmp164 * _tmp93 - _tmp165 * _tmp93;
  const Scalar _tmp167 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp168 = std::asinh(_tmp163 * _tmp167);
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp166;
  const Scalar _tmp170 =
      -_tmp168 * _tmp169 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp69), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp71), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp167;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp174 = _tmp173 * _tmp93;
  const Scalar _tmp175 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp176 = _tmp144 * _tmp175 * _tmp93;
  const Scalar _tmp177 = _tmp21 * _tmp64;
  const Scalar _tmp178 =
      (-_tmp163 * _tmp176 + _tmp167 * (-_tmp119 + _tmp158 * _tmp161 - _tmp177 * _tmp65)) /
      std::sqrt(Scalar(std::pow(_tmp163, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp179 = Scalar(1.0) * _tmp168;
  const Scalar _tmp180 = _tmp129 * _tmp141 + _tmp137 * _tmp139 + _tmp164 + _tmp165;
  const Scalar _tmp181 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp182 = -_tmp107 * _tmp112 + _tmp113 * _tmp115 - _tmp125 * _tmp129 * _tmp63 -
                         _tmp130 * _tmp132 - _tmp136 * _tmp139 * _tmp63 + _tmp162;
  const Scalar _tmp183 = std::asinh(_tmp181 * _tmp182);
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp185 =
      -_tmp183 * _tmp184 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp77), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp79 - 1), Scalar(2))));
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp181;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = Scalar(1.0) * _tmp183;
  const Scalar _tmp189 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp190 = _tmp144 * _tmp189;
  const Scalar _tmp191 = (_tmp181 * (-_tmp115 - _tmp132 * _tmp158 + _tmp177) + _tmp182 * _tmp190) /
                         std::sqrt(Scalar(std::pow(_tmp182, Scalar(2)) * _tmp189 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp35 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 *
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp1 * _tmp35 -
                Scalar(8.3196563700000006) *
                    std::sqrt(Scalar(
                        Scalar(0.057067943376852184) *
                            std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp22 - 1), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp34 - 1), Scalar(2)))))));
  _res(1, 0) = _tmp152 * (-Scalar(1.0) * _tmp160 * std::cosh(_tmp151) -
                          (-Scalar(0.1034955) * _tmp153 * _tmp159 +
                           _tmp154 * (-_tmp150 * _tmp156 - _tmp152 * _tmp160)) *
                              std::cosh(_tmp155)) +
               _tmp156 * (-std::sinh(_tmp151) - std::sinh(_tmp155));
  _res(2, 0) = _tmp169 * (-Scalar(1.0) * _tmp178 * std::cosh(_tmp179) -
                          (-Scalar(0.1034955) * _tmp170 * _tmp176 +
                           _tmp171 * (-_tmp168 * _tmp174 - _tmp169 * _tmp178)) *
                              std::cosh(_tmp172)) +
               _tmp174 * (-std::sinh(_tmp172) - std::sinh(_tmp179));
  _res(3, 0) = -_tmp173 * (-std::sinh(_tmp187) - std::sinh(_tmp188)) +
               _tmp184 * (-Scalar(1.0) * _tmp191 * std::cosh(_tmp188) -
                          (Scalar(0.1034955) * _tmp185 * _tmp190 +
                           _tmp186 * (_tmp173 * _tmp183 - _tmp184 * _tmp191)) *
                              std::cosh(_tmp187));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
