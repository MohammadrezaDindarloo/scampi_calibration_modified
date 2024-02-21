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
 * Symbolic function: IK_residual_func_cost2_wrt_fv1_Nl6
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFv1Nl6(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 602

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
  const Scalar _tmp3 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp9 = 2 * _tmp3 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = _tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp5;
  const Scalar _tmp15 = _tmp14 * _tmp8;
  const Scalar _tmp16 = _tmp10 * _tmp3;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp13 - _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + p_init0;
  const Scalar _tmp21 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp25 = _tmp14 * _tmp3;
  const Scalar _tmp26 = _tmp10 * _tmp8;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = _tmp24 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + p_init1;
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = -_tmp7;
  const Scalar _tmp35 = _tmp18 + _tmp34;
  const Scalar _tmp36 = _tmp35 + p_init0;
  const Scalar _tmp37 = -_tmp24;
  const Scalar _tmp38 = _tmp23 + _tmp29 + _tmp37;
  const Scalar _tmp39 = _tmp38 + p_init1;
  const Scalar _tmp40 = _tmp13 + _tmp17;
  const Scalar _tmp41 = _tmp34 + _tmp40;
  const Scalar _tmp42 = Scalar(1.0) * _tmp35;
  const Scalar _tmp43 = Scalar(1.0) * _tmp38;
  const Scalar _tmp44 = -_tmp43;
  const Scalar _tmp45 = _tmp22 + _tmp37;
  const Scalar _tmp46 = _tmp29 + _tmp45;
  const Scalar _tmp47 = _tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp22 + _tmp30;
  const Scalar _tmp49 = Scalar(1.0) / (_tmp44 + _tmp48);
  const Scalar _tmp50 = _tmp40 + _tmp7;
  const Scalar _tmp51 = _tmp42 - _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp47 * _tmp52;
  const Scalar _tmp54 = Scalar(1.0) / (-_tmp41 + _tmp42 - _tmp53);
  const Scalar _tmp55 = Scalar(1.0) * _tmp54;
  const Scalar _tmp56 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp59 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp60 = _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp57 + _tmp60;
  const Scalar _tmp62 = _tmp50 + p_init0;
  const Scalar _tmp63 = _tmp62 + Scalar(-2.71799795);
  const Scalar _tmp64 = _tmp48 + p_init1;
  const Scalar _tmp65 = _tmp64 + Scalar(-4.7752063900000001);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp63 * _tmp66;
  const Scalar _tmp68 = _tmp61 * _tmp67;
  const Scalar _tmp69 = _tmp58 + _tmp59;
  const Scalar _tmp70 = _tmp56 + _tmp69;
  const Scalar _tmp71 = -_tmp67 * _tmp70 + _tmp68;
  const Scalar _tmp72 = _tmp39 + Scalar(8.3196563700000006);
  const Scalar _tmp73 = _tmp36 + Scalar(1.9874742000000001);
  const Scalar _tmp74 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp75 = _tmp72 * _tmp74;
  const Scalar _tmp76 = _tmp65 * _tmp66;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp67 * _tmp75 - _tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp77;
  const Scalar _tmp79 = -_tmp68 * _tmp75 + _tmp70 * _tmp76;
  const Scalar _tmp80 = Scalar(1.0) * _tmp49;
  const Scalar _tmp81 = _tmp51 * _tmp77 * _tmp79 * _tmp80 - _tmp71 * _tmp78;
  const Scalar _tmp82 = _tmp46 + p_init1;
  const Scalar _tmp83 = _tmp82 + Scalar(-4.8333311099999996);
  const Scalar _tmp84 = _tmp41 + p_init0;
  const Scalar _tmp85 = _tmp84 + Scalar(1.79662371);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp83, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp61 * _tmp87;
  const Scalar _tmp89 = _tmp56 + _tmp60;
  const Scalar _tmp90 = _tmp83 * _tmp86;
  const Scalar _tmp91 = _tmp75 * _tmp87 - _tmp90;
  const Scalar _tmp92 = _tmp77 * _tmp91;
  const Scalar _tmp93 = -_tmp75 * _tmp88 - _tmp79 * _tmp92 + _tmp89 * _tmp90;
  const Scalar _tmp94 = -_tmp52 * _tmp93 - _tmp71 * _tmp92 - _tmp87 * _tmp89 + _tmp88;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp72, Scalar(2)) + std::pow(_tmp73, Scalar(2))));
  const Scalar _tmp97 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp98 = _tmp74 * _tmp96;
  const Scalar _tmp99 = _tmp98 * (_tmp35 * _tmp72 * _tmp97 - _tmp38 * _tmp73 * _tmp97);
  const Scalar _tmp100 = _tmp48 * _tmp67 - _tmp50 * _tmp76 + _tmp67 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp92 - _tmp41 * _tmp90 + _tmp46 * _tmp87 + _tmp87 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp95;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp104 = _tmp103 * _tmp94;
  const Scalar _tmp105 = _tmp104 * (-_tmp100 * _tmp78 - _tmp102 * _tmp81);
  const Scalar _tmp106 = _tmp47 * _tmp54;
  const Scalar _tmp107 = _tmp105 + _tmp81;
  const Scalar _tmp108 = _tmp93 * _tmp95;
  const Scalar _tmp109 = _tmp105 * _tmp106 - _tmp107 * _tmp108 - _tmp78 * _tmp79;
  const Scalar _tmp110 = _tmp20 + Scalar(-2.5202214700000001);
  const Scalar _tmp111 = _tmp32 + Scalar(8.3888750099999996);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = _tmp75 * _tmp77;
  const Scalar _tmp116 = _tmp115 * _tmp79 + _tmp61 * _tmp75;
  const Scalar _tmp117 = _tmp115 * _tmp71 - _tmp116 * _tmp52 - _tmp61;
  const Scalar _tmp118 = _tmp104 * (_tmp100 * _tmp115 - _tmp102 * _tmp117 - _tmp99);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = _tmp106 * _tmp118 - _tmp108 * _tmp119 + _tmp116;
  const Scalar _tmp121 = _tmp110 * _tmp112;
  const Scalar _tmp122 = _tmp121 * fh1;
  const Scalar _tmp123 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp124 = _tmp42 + _tmp43 * _tmp52;
  const Scalar _tmp125 = 0;
  const Scalar _tmp126 = _tmp125 * _tmp95;
  const Scalar _tmp127 = _tmp124 * _tmp54;
  const Scalar _tmp128 = _tmp49 * (-_tmp126 * _tmp93 - _tmp127 * _tmp47 + _tmp44);
  const Scalar _tmp129 = -Scalar(1.0) * _tmp124 * _tmp55 - Scalar(1.0) * _tmp128 + Scalar(1.0);
  const Scalar _tmp130 = _tmp104 * _tmp55;
  const Scalar _tmp131 = Scalar(1.0) * _tmp103;
  const Scalar _tmp132 = _tmp130 * _tmp47 - _tmp131 * _tmp93;
  const Scalar _tmp133 = fh1 * (_tmp113 * _tmp19 - _tmp121 * _tmp31);
  const Scalar _tmp134 = fh1 * (_tmp57 + _tmp69);
  const Scalar _tmp135 = -_tmp113 * _tmp134 - Scalar(3.29616) * _tmp27 - _tmp31 * fv1;
  const Scalar _tmp136 = _tmp52 * _tmp55;
  const Scalar _tmp137 = _tmp53 * _tmp55 + Scalar(1.0);
  const Scalar _tmp138 = Scalar(1.0) * _tmp136 - Scalar(1.0) * _tmp137 * _tmp80;
  const Scalar _tmp139 = Scalar(3.29616) * _tmp12 + _tmp121 * _tmp134 + _tmp19 * fv1;
  const Scalar _tmp140 = _tmp47 * _tmp49;
  const Scalar _tmp141 = Scalar(1.0) * _tmp140 * _tmp55 - Scalar(1.0) * _tmp55;
  const Scalar _tmp142 = Scalar(1.0) * _tmp114 * (_tmp105 * _tmp55 - _tmp109 * _tmp80) +
                         Scalar(1.0) * _tmp122 * (_tmp118 * _tmp55 - _tmp120 * _tmp80) +
                         _tmp123 * _tmp129 + Scalar(1.0) * _tmp133 * (_tmp130 - _tmp132 * _tmp80) +
                         _tmp135 * _tmp138 + _tmp139 * _tmp141;
  const Scalar _tmp143 = _tmp87 * _tmp95;
  const Scalar _tmp144 = _tmp91 * _tmp95;
  const Scalar _tmp145 = -_tmp107 * _tmp144 + Scalar(1.0);
  const Scalar _tmp146 = _tmp67 * _tmp77;
  const Scalar _tmp147 = -_tmp119 * _tmp144 - _tmp75;
  const Scalar _tmp148 = _tmp125 * _tmp144;
  const Scalar _tmp149 = _tmp98 * (_tmp126 * _tmp87 - _tmp146 * _tmp148);
  const Scalar _tmp150 = -_tmp114 * _tmp98 * (_tmp107 * _tmp143 + _tmp145 * _tmp146) -
                         _tmp122 * _tmp98 * (_tmp119 * _tmp143 + _tmp146 * _tmp147 + Scalar(1.0)) -
                         _tmp123 * _tmp149 -
                         _tmp133 * _tmp98 * (-_tmp131 * _tmp67 * _tmp92 + _tmp131 * _tmp87);
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = std::asinh(_tmp142 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp36 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp39 - 1), Scalar(2))));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp151;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = Scalar(1.0) * _tmp152;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp159 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp160 = _tmp149 * _tmp159;
  const Scalar _tmp161 = _tmp28 + _tmp45;
  const Scalar _tmp162 =
      (-_tmp142 * _tmp160 + _tmp151 * (-_tmp129 + _tmp138 * _tmp161 + _tmp141 * _tmp19)) /
      std::sqrt(Scalar(std::pow(_tmp142, Scalar(2)) * _tmp159 + 1));
  const Scalar _tmp163 = _tmp148 * _tmp77;
  const Scalar _tmp164 = _tmp131 * _tmp133;
  const Scalar _tmp165 = _tmp114 * _tmp145 * _tmp77 + _tmp122 * _tmp147 * _tmp77 -
                         _tmp123 * _tmp163 - _tmp164 * _tmp92;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = _tmp139 * _tmp55;
  const Scalar _tmp168 = _tmp137 * _tmp49;
  const Scalar _tmp169 = _tmp109 * _tmp114 * _tmp49 + _tmp120 * _tmp122 * _tmp49 +
                         _tmp123 * _tmp128 + _tmp132 * _tmp133 * _tmp49 + _tmp135 * _tmp168 -
                         _tmp140 * _tmp167;
  const Scalar _tmp170 = std::asinh(_tmp166 * _tmp169);
  const Scalar _tmp171 = Scalar(1.0) * _tmp170;
  const Scalar _tmp172 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp173 = _tmp163 * _tmp172;
  const Scalar _tmp174 = _tmp19 * _tmp55;
  const Scalar _tmp175 =
      (_tmp166 * (-_tmp128 - _tmp140 * _tmp174 + _tmp161 * _tmp168) - _tmp169 * _tmp173) /
      std::sqrt(Scalar(std::pow(_tmp169, Scalar(2)) * _tmp172 + 1));
  const Scalar _tmp176 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp177 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp178 = Scalar(0.1034955) * _tmp166;
  const Scalar _tmp179 =
      -_tmp170 * _tmp177 -
      Scalar(4.7752063900000001) *
          std::sqrt(
              Scalar(Scalar(0.32397683292140877) *
                         std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp62), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp64), Scalar(2))));
  const Scalar _tmp180 = _tmp178 * _tmp179;
  const Scalar _tmp181 = -_tmp105 * _tmp114 * _tmp54 - _tmp118 * _tmp122 * _tmp54 +
                         _tmp123 * _tmp127 - _tmp130 * _tmp133 - _tmp135 * _tmp136 + _tmp167;
  const Scalar _tmp182 =
      _tmp107 * _tmp114 * _tmp95 + _tmp119 * _tmp122 * _tmp95 + _tmp123 * _tmp126 + _tmp164;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp182);
  const Scalar _tmp184 = std::asinh(_tmp181 * _tmp183);
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp182;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp82), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp84 - 1), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = Scalar(9.6622558468725703) * _tmp126;
  const Scalar _tmp191 = std::pow(_tmp182, Scalar(-2));
  const Scalar _tmp192 = _tmp126 * _tmp191;
  const Scalar _tmp193 = (_tmp181 * _tmp192 + _tmp183 * (-_tmp127 - _tmp136 * _tmp161 + _tmp174)) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp191 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
      (-_tmp2 * std::cosh(Scalar(1.0) * _tmp1) +
       _tmp2 *
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp1 * _tmp33 -
                Scalar(8.3888750099999996) *
                    std::sqrt(Scalar(
                        Scalar(0.090254729040973036) *
                            std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp20), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp32 - 1), Scalar(2)))))));
  _res(1, 0) = _tmp153 * (-Scalar(1.0) * _tmp162 * std::cosh(_tmp157) -
                          (-Scalar(0.1034955) * _tmp154 * _tmp160 +
                           _tmp155 * (-_tmp152 * _tmp158 - _tmp153 * _tmp162)) *
                              std::cosh(_tmp156)) +
               _tmp158 * (-std::sinh(_tmp156) - std::sinh(_tmp157));
  _res(2, 0) = _tmp176 * (-std::sinh(_tmp171) - std::sinh(_tmp180)) +
               _tmp177 * (-Scalar(1.0) * _tmp175 * std::cosh(_tmp171) -
                          (-Scalar(0.1034955) * _tmp173 * _tmp179 +
                           _tmp178 * (-_tmp170 * _tmp176 - _tmp175 * _tmp177)) *
                              std::cosh(_tmp180));
  _res(3, 0) = _tmp185 * (-Scalar(1.0) * _tmp193 * std::cosh(_tmp189) -
                          (Scalar(0.1034955) * _tmp186 * _tmp192 +
                           _tmp187 * (_tmp184 * _tmp190 - _tmp185 * _tmp193)) *
                              std::cosh(_tmp188)) -
               _tmp190 * (-std::sinh(_tmp188) - std::sinh(_tmp189));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym