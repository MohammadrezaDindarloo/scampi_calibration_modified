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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl20
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 599

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (194)
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
  const Scalar _tmp10 = 2 * _tmp5 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp12 = _tmp11 * _tmp3;
  const Scalar _tmp13 = _tmp10 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = 2 * _tmp3;
  const Scalar _tmp16 = _tmp15 * _tmp9;
  const Scalar _tmp17 = _tmp11 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp8;
  const Scalar _tmp21 = _tmp20 + p_init0;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp15 * _tmp5;
  const Scalar _tmp25 = _tmp11 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp27;
  const Scalar _tmp29 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp29 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp31 = _tmp28 + _tmp30;
  const Scalar _tmp32 = _tmp23 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = _tmp14 - _tmp18;
  const Scalar _tmp36 = _tmp35 + _tmp7;
  const Scalar _tmp37 = _tmp36 + p_init0;
  const Scalar _tmp38 = -_tmp30;
  const Scalar _tmp39 = _tmp28 + _tmp38;
  const Scalar _tmp40 = _tmp22 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp37 + Scalar(-2.5202214700000001);
  const Scalar _tmp43 = _tmp41 + Scalar(8.3888750099999996);
  const Scalar _tmp44 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp45 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp46 = Scalar(1.0) / (_tmp42);
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = _tmp47 * (_tmp36 * _tmp43 * _tmp45 - _tmp40 * _tmp42 * _tmp45);
  const Scalar _tmp49 = _tmp19 + _tmp7;
  const Scalar _tmp50 = _tmp49 + p_init0;
  const Scalar _tmp51 = _tmp50 + Scalar(-2.71799795);
  const Scalar _tmp52 = _tmp22 + _tmp31;
  const Scalar _tmp53 = _tmp52 + p_init1;
  const Scalar _tmp54 = _tmp53 + Scalar(-4.7752063900000001);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp51 * _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp55;
  const Scalar _tmp58 = _tmp23 + _tmp39;
  const Scalar _tmp59 = _tmp58 + p_init1;
  const Scalar _tmp60 = _tmp59 + Scalar(8.3196563700000006);
  const Scalar _tmp61 = _tmp35 + _tmp8;
  const Scalar _tmp62 = _tmp61 + p_init0;
  const Scalar _tmp63 = _tmp62 + Scalar(1.9874742000000001);
  const Scalar _tmp64 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp60 * _tmp64;
  const Scalar _tmp67 = _tmp48 * _tmp65 + _tmp58 * _tmp65 - _tmp61 * _tmp66;
  const Scalar _tmp68 = _tmp43 * _tmp46;
  const Scalar _tmp69 = Scalar(1.0) / (_tmp65 * _tmp68 - _tmp66);
  const Scalar _tmp70 = _tmp56 * _tmp68 - _tmp57;
  const Scalar _tmp71 = _tmp69 * _tmp70;
  const Scalar _tmp72 = _tmp48 * _tmp56 - _tmp49 * _tmp57 + _tmp52 * _tmp56 - _tmp67 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp73;
  const Scalar _tmp75 = _tmp33 + Scalar(-4.8333311099999996);
  const Scalar _tmp76 = _tmp21 + Scalar(1.79662371);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp77;
  const Scalar _tmp80 = fh1 * (_tmp20 * _tmp78 - _tmp32 * _tmp79);
  const Scalar _tmp81 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp82 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp83 = -_tmp82;
  const Scalar _tmp84 = -Scalar(0.010999999999999999) * _tmp29 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp85 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp86 = _tmp84 - _tmp85;
  const Scalar _tmp87 = _tmp83 + _tmp86;
  const Scalar _tmp88 = _tmp82 + _tmp86;
  const Scalar _tmp89 = _tmp65 * _tmp88;
  const Scalar _tmp90 = _tmp66 * _tmp87 - _tmp68 * _tmp89;
  const Scalar _tmp91 = _tmp84 + _tmp85;
  const Scalar _tmp92 = _tmp82 + _tmp91;
  const Scalar _tmp93 = _tmp68 * _tmp88;
  const Scalar _tmp94 = -_tmp56 * _tmp93 + _tmp57 * _tmp92 - _tmp71 * _tmp90;
  const Scalar _tmp95 = Scalar(1.0) * _tmp40;
  const Scalar _tmp96 = -_tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp58 + _tmp96);
  const Scalar _tmp98 = Scalar(1.0) * _tmp36;
  const Scalar _tmp99 = _tmp97 * (-_tmp61 + _tmp98);
  const Scalar _tmp100 = -_tmp65 * _tmp87 + _tmp89;
  const Scalar _tmp101 = -_tmp100 * _tmp71 + _tmp56 * _tmp88 - _tmp56 * _tmp92 - _tmp94 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = _tmp95 * _tmp99 + _tmp98;
  const Scalar _tmp104 = 0;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp105 * _tmp71;
  const Scalar _tmp107 = _tmp47 * (_tmp105 * _tmp56 - _tmp106 * _tmp65);
  const Scalar _tmp108 = _tmp68 * _tmp69;
  const Scalar _tmp109 = _tmp108 * _tmp90 + _tmp93;
  const Scalar _tmp110 = _tmp100 * _tmp108 - _tmp109 * _tmp99 - _tmp88;
  const Scalar _tmp111 = _tmp102 * _tmp72;
  const Scalar _tmp112 = _tmp101 * _tmp73;
  const Scalar _tmp113 = _tmp112 * (_tmp108 * _tmp67 - _tmp110 * _tmp111 - _tmp48);
  const Scalar _tmp114 = _tmp110 + _tmp113;
  const Scalar _tmp115 = _tmp102 * _tmp56;
  const Scalar _tmp116 = _tmp102 * _tmp70;
  const Scalar _tmp117 = -_tmp114 * _tmp116 - _tmp68;
  const Scalar _tmp118 = _tmp65 * _tmp69;
  const Scalar _tmp119 = _tmp79 * fh1;
  const Scalar _tmp120 = Scalar(1.0) * _tmp69;
  const Scalar _tmp121 = _tmp120 * _tmp90;
  const Scalar _tmp122 = -_tmp100 * _tmp120 + _tmp121 * _tmp99;
  const Scalar _tmp123 = _tmp112 * (-_tmp111 * _tmp122 - _tmp120 * _tmp67);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = -_tmp116 * _tmp124 + Scalar(1.0);
  const Scalar _tmp126 = _tmp78 * fh1;
  const Scalar _tmp127 = -_tmp107 * _tmp81 -
                         _tmp119 * _tmp47 * (_tmp114 * _tmp115 + _tmp117 * _tmp118 + Scalar(1.0)) -
                         _tmp126 * _tmp47 * (_tmp115 * _tmp124 + _tmp118 * _tmp125) -
                         _tmp47 * _tmp80 * (_tmp56 * _tmp74 - _tmp65 * _tmp71 * _tmp74);
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp102 * _tmp94;
  const Scalar _tmp130 = _tmp52 + _tmp96;
  const Scalar _tmp131 = _tmp130 * _tmp99;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 - _tmp49 + _tmp98);
  const Scalar _tmp133 = _tmp130 * _tmp132;
  const Scalar _tmp134 = _tmp109 + _tmp113 * _tmp133 - _tmp114 * _tmp129;
  const Scalar _tmp135 = Scalar(1.0) * _tmp97;
  const Scalar _tmp136 = Scalar(1.0) * _tmp132;
  const Scalar _tmp137 = fh1 * (_tmp83 + _tmp91);
  const Scalar _tmp138 = -_tmp137 * _tmp78 - Scalar(3.29616) * _tmp26 - _tmp32 * fv1;
  const Scalar _tmp139 = _tmp136 * _tmp99;
  const Scalar _tmp140 = _tmp97 * (_tmp131 * _tmp136 + Scalar(1.0));
  const Scalar _tmp141 = Scalar(1.0) * _tmp139 - Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = Scalar(3.29616) * _tmp13 + _tmp137 * _tmp79 + _tmp20 * fv1;
  const Scalar _tmp143 = _tmp130 * _tmp97;
  const Scalar _tmp144 = Scalar(1.0) * _tmp136 * _tmp143 - Scalar(1.0) * _tmp136;
  const Scalar _tmp145 = -_tmp121 + _tmp123 * _tmp133 - _tmp124 * _tmp129;
  const Scalar _tmp146 = _tmp112 * _tmp136;
  const Scalar _tmp147 = _tmp130 * _tmp146 - _tmp74 * _tmp94;
  const Scalar _tmp148 = _tmp103 * _tmp132;
  const Scalar _tmp149 = _tmp97 * (-_tmp104 * _tmp129 - _tmp130 * _tmp148 + _tmp96);
  const Scalar _tmp150 = -Scalar(1.0) * _tmp103 * _tmp136 - Scalar(1.0) * _tmp149 + Scalar(1.0);
  const Scalar _tmp151 = Scalar(1.0) * _tmp119 * (_tmp113 * _tmp136 - _tmp134 * _tmp135) +
                         Scalar(1.0) * _tmp126 * (_tmp123 * _tmp136 - _tmp135 * _tmp145) +
                         _tmp138 * _tmp141 + _tmp142 * _tmp144 + _tmp150 * _tmp81 +
                         Scalar(1.0) * _tmp80 * (-_tmp135 * _tmp147 + _tmp146);
  const Scalar _tmp152 = std::asinh(_tmp128 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 -
      Scalar(8.3888750099999996) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp37), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp41 - 1), Scalar(2))));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = Scalar(1.0) * _tmp152;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp107;
  const Scalar _tmp159 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp160 = _tmp107 * _tmp159;
  const Scalar _tmp161 = _tmp22 + _tmp27 + _tmp38;
  const Scalar _tmp162 =
      (_tmp128 * (_tmp141 * _tmp161 + _tmp144 * _tmp20 - _tmp150) - _tmp151 * _tmp160) /
      std::sqrt(Scalar(std::pow(_tmp151, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp163 = _tmp74 * _tmp80;
  const Scalar _tmp164 = _tmp105 * _tmp81;
  const Scalar _tmp165 =
      _tmp117 * _tmp119 * _tmp69 + _tmp125 * _tmp126 * _tmp69 - _tmp163 * _tmp71 - _tmp164 * _tmp71;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = _tmp136 * _tmp142;
  const Scalar _tmp168 = _tmp97 * fh1;
  const Scalar _tmp169 = _tmp134 * _tmp168 * _tmp79 + _tmp138 * _tmp140 - _tmp143 * _tmp167 +
                         _tmp145 * _tmp168 * _tmp78 + _tmp147 * _tmp80 * _tmp97 + _tmp149 * _tmp81;
  const Scalar _tmp170 = std::asinh(_tmp166 * _tmp169);
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp172 =
      -_tmp170 * _tmp171 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp59 - 1), Scalar(2)) +
                     Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp62 - 1), Scalar(2))));
  const Scalar _tmp173 = Scalar(0.1034955) * _tmp166;
  const Scalar _tmp174 = _tmp172 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp170;
  const Scalar _tmp176 = Scalar(9.6622558468725703) * _tmp105;
  const Scalar _tmp177 = _tmp176 * _tmp71;
  const Scalar _tmp178 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp179 = _tmp136 * _tmp20;
  const Scalar _tmp180 = _tmp106 * _tmp178;
  const Scalar _tmp181 =
      (_tmp166 * (_tmp140 * _tmp161 - _tmp143 * _tmp179 - _tmp149) - _tmp169 * _tmp180) /
      std::sqrt(Scalar(std::pow(_tmp169, Scalar(2)) * _tmp178 + 1));
  const Scalar _tmp182 =
      _tmp102 * _tmp114 * _tmp119 + _tmp102 * _tmp124 * _tmp126 + _tmp163 + _tmp164;
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp184 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp185 = -_tmp113 * _tmp119 * _tmp132 - _tmp123 * _tmp126 * _tmp132 -
                         _tmp138 * _tmp139 - _tmp146 * _tmp80 + _tmp148 * _tmp81 + _tmp167;
  const Scalar _tmp186 = _tmp105 * _tmp184;
  const Scalar _tmp187 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp188 = (_tmp185 * _tmp186 + _tmp187 * (-_tmp139 * _tmp161 - _tmp148 + _tmp179)) /
                         std::sqrt(Scalar(_tmp184 * std::pow(_tmp185, Scalar(2)) + 1));
  const Scalar _tmp189 = std::asinh(_tmp185 * _tmp187);
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp187;
  const Scalar _tmp191 =
      -_tmp183 * _tmp189 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp50), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp53), Scalar(2))));
  const Scalar _tmp192 = _tmp190 * _tmp191;
  const Scalar _tmp193 = Scalar(1.0) * _tmp189;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp34 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::cosh(
                   Scalar(0.1034955) * _tmp0 *
                   (-_tmp1 * _tmp34 -
                    Scalar(4.8333311099999996) *
                        std::sqrt(Scalar(
                            std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp33), Scalar(2)) +
                            Scalar(0.13817235445745474) *
                                std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp21 - 1),
                                         Scalar(2)))))));
  _res(1, 0) = _tmp153 * (-Scalar(1.0) * _tmp162 * std::cosh(_tmp157) -
                          (-Scalar(0.1034955) * _tmp154 * _tmp160 +
                           _tmp155 * (-_tmp152 * _tmp158 - _tmp153 * _tmp162)) *
                              std::cosh(_tmp156)) +
               _tmp158 * (-std::sinh(_tmp156) - std::sinh(_tmp157));
  _res(2, 0) = _tmp171 * (-Scalar(1.0) * _tmp181 * std::cosh(_tmp175) -
                          (-Scalar(0.1034955) * _tmp172 * _tmp180 +
                           _tmp173 * (-_tmp170 * _tmp177 - _tmp171 * _tmp181)) *
                              std::cosh(_tmp174)) +
               _tmp177 * (-std::sinh(_tmp174) - std::sinh(_tmp175));
  _res(3, 0) = -_tmp176 * (-std::sinh(_tmp192) - std::sinh(_tmp193)) +
               _tmp183 * (-Scalar(1.0) * _tmp188 * std::cosh(_tmp193) -
                          (Scalar(0.1034955) * _tmp186 * _tmp191 +
                           _tmp190 * (_tmp176 * _tmp189 - _tmp183 * _tmp188)) *
                              std::cosh(_tmp192));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
