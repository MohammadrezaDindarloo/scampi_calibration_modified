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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 604

  // Unused inputs
  (void)p_init2;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (189)
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
  const Scalar _tmp18 = _tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + p_init0;
  const Scalar _tmp21 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = _tmp14 * _tmp3;
  const Scalar _tmp24 = _tmp10 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + p_init1;
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = _tmp13 - _tmp17;
  const Scalar _tmp34 = _tmp33 + _tmp7;
  const Scalar _tmp35 = _tmp34 + p_init0;
  const Scalar _tmp36 = -_tmp22;
  const Scalar _tmp37 = _tmp29 + _tmp36;
  const Scalar _tmp38 = _tmp37 + p_init1;
  const Scalar _tmp39 = -_tmp28;
  const Scalar _tmp40 = _tmp22 + _tmp27 + _tmp39;
  const Scalar _tmp41 = _tmp40 + p_init1;
  const Scalar _tmp42 = _tmp41 + Scalar(-4.8333311099999996);
  const Scalar _tmp43 = -_tmp7;
  const Scalar _tmp44 = _tmp18 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init0;
  const Scalar _tmp46 = _tmp45 + Scalar(1.79662371);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp42 * _tmp47;
  const Scalar _tmp49 = _tmp35 + Scalar(-2.5202214700000001);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp38 + Scalar(8.3888750099999996);
  const Scalar _tmp52 = _tmp50 * _tmp51;
  const Scalar _tmp53 = _tmp46 * _tmp47;
  const Scalar _tmp54 = -_tmp48 + _tmp52 * _tmp53;
  const Scalar _tmp55 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp56 = -_tmp55;
  const Scalar _tmp57 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp58 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp59 = _tmp57 + _tmp58;
  const Scalar _tmp60 = _tmp56 + _tmp59;
  const Scalar _tmp61 = _tmp53 * _tmp60;
  const Scalar _tmp62 = _tmp57 - _tmp58;
  const Scalar _tmp63 = _tmp55 + _tmp62;
  const Scalar _tmp64 = _tmp56 + _tmp62;
  const Scalar _tmp65 = _tmp36 + _tmp39;
  const Scalar _tmp66 = _tmp27 + _tmp65;
  const Scalar _tmp67 = _tmp66 + p_init1;
  const Scalar _tmp68 = _tmp67 + Scalar(8.3196563700000006);
  const Scalar _tmp69 = _tmp33 + _tmp43;
  const Scalar _tmp70 = _tmp69 + p_init0;
  const Scalar _tmp71 = _tmp70 + Scalar(1.9874742000000001);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp71 * _tmp72;
  const Scalar _tmp75 = _tmp60 * _tmp74;
  const Scalar _tmp76 = -_tmp52 * _tmp75 + _tmp64 * _tmp73;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp52 * _tmp74 - _tmp73);
  const Scalar _tmp78 = _tmp54 * _tmp77;
  const Scalar _tmp79 = _tmp48 * _tmp63 - _tmp52 * _tmp61 - _tmp76 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) * _tmp37;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp66 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp34;
  const Scalar _tmp84 = _tmp82 * (-_tmp69 + _tmp83);
  const Scalar _tmp85 = _tmp77 * (-_tmp64 * _tmp74 + _tmp75);
  const Scalar _tmp86 = -_tmp53 * _tmp63 - _tmp54 * _tmp85 + _tmp61 - _tmp79 * _tmp84;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp52 * _tmp77;
  const Scalar _tmp89 = _tmp52 * _tmp60 + _tmp76 * _tmp88;
  const Scalar _tmp90 = _tmp52 * _tmp85 - _tmp60 - _tmp84 * _tmp89;
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp50 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (_tmp34 * _tmp51 * _tmp92 - _tmp37 * _tmp49 * _tmp92);
  const Scalar _tmp95 = _tmp66 * _tmp74 - _tmp69 * _tmp73 + _tmp74 * _tmp94;
  const Scalar _tmp96 = _tmp40 * _tmp53 - _tmp44 * _tmp48 + _tmp53 * _tmp94 - _tmp78 * _tmp95;
  const Scalar _tmp97 = _tmp87 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp86 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (_tmp88 * _tmp95 - _tmp90 * _tmp97 - _tmp94);
  const Scalar _tmp101 = _tmp87 * (_tmp100 + _tmp90);
  const Scalar _tmp102 = -_tmp101 * _tmp54 - _tmp52;
  const Scalar _tmp103 = _tmp74 * _tmp77;
  const Scalar _tmp104 = _tmp20 + Scalar(-2.71799795);
  const Scalar _tmp105 = _tmp31 + Scalar(-4.7752063900000001);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp104 * _tmp106;
  const Scalar _tmp108 = _tmp107 * fh1;
  const Scalar _tmp109 = Scalar(1.0) * _tmp77;
  const Scalar _tmp110 = _tmp109 * _tmp76;
  const Scalar _tmp111 = _tmp110 * _tmp84 - Scalar(1.0) * _tmp85;
  const Scalar _tmp112 = _tmp99 * (-_tmp109 * _tmp95 - _tmp111 * _tmp97);
  const Scalar _tmp113 = _tmp87 * (_tmp111 + _tmp112);
  const Scalar _tmp114 = -_tmp113 * _tmp54 + Scalar(1.0);
  const Scalar _tmp115 = _tmp105 * _tmp106;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = Scalar(1.0) * _tmp98;
  const Scalar _tmp118 = _tmp109 * _tmp54 * _tmp98;
  const Scalar _tmp119 = fh1 * (-_tmp107 * _tmp30 + _tmp115 * _tmp19);
  const Scalar _tmp120 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp121 = _tmp80 * _tmp84 + _tmp83;
  const Scalar _tmp122 = 0;
  const Scalar _tmp123 = _tmp122 * _tmp78;
  const Scalar _tmp124 = _tmp93 * (_tmp122 * _tmp53 - _tmp123 * _tmp74);
  const Scalar _tmp125 = -_tmp108 * _tmp93 * (_tmp101 * _tmp53 + _tmp102 * _tmp103 + Scalar(1.0)) -
                         _tmp116 * _tmp93 * (_tmp103 * _tmp114 + _tmp113 * _tmp53) -
                         _tmp119 * _tmp93 * (_tmp117 * _tmp53 - _tmp118 * _tmp74) -
                         _tmp120 * _tmp124;
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp40 + _tmp81;
  const Scalar _tmp128 = _tmp127 * _tmp84;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 - _tmp44 + _tmp83);
  const Scalar _tmp130 = _tmp121 * _tmp129;
  const Scalar _tmp131 = _tmp82 * (-_tmp122 * _tmp79 - _tmp127 * _tmp130 + _tmp81);
  const Scalar _tmp132 = -Scalar(1.0) * _tmp130 - Scalar(1.0) * _tmp131 + Scalar(1.0);
  const Scalar _tmp133 = Scalar(1.0) * _tmp129;
  const Scalar _tmp134 = _tmp127 * _tmp129;
  const Scalar _tmp135 = -_tmp110 + _tmp112 * _tmp134 - _tmp113 * _tmp79;
  const Scalar _tmp136 = Scalar(1.0) * _tmp82;
  const Scalar _tmp137 = fh1 * (_tmp55 + _tmp59);
  const Scalar _tmp138 = -_tmp115 * _tmp137 - Scalar(3.29616) * _tmp25 - _tmp30 * fv1;
  const Scalar _tmp139 = _tmp82 * (_tmp128 * _tmp133 + Scalar(1.0));
  const Scalar _tmp140 = _tmp133 * _tmp84;
  const Scalar _tmp141 = -Scalar(1.0) * _tmp139 + Scalar(1.0) * _tmp140;
  const Scalar _tmp142 = _tmp133 * _tmp99;
  const Scalar _tmp143 = -_tmp117 * _tmp79 + _tmp127 * _tmp142;
  const Scalar _tmp144 = _tmp107 * _tmp137 + Scalar(3.29616) * _tmp12 + _tmp19 * fv1;
  const Scalar _tmp145 = _tmp127 * _tmp82;
  const Scalar _tmp146 = Scalar(1.0) * _tmp133 * _tmp145 - Scalar(1.0) * _tmp133;
  const Scalar _tmp147 = _tmp100 * _tmp134 - _tmp101 * _tmp79 + _tmp89;
  const Scalar _tmp148 = Scalar(1.0) * _tmp108 * (_tmp100 * _tmp133 - _tmp136 * _tmp147) +
                         Scalar(1.0) * _tmp116 * (_tmp112 * _tmp133 - _tmp135 * _tmp136) +
                         Scalar(1.0) * _tmp119 * (-_tmp136 * _tmp143 + _tmp142) +
                         _tmp120 * _tmp132 + _tmp138 * _tmp141 + _tmp144 * _tmp146;
  const Scalar _tmp149 = std::asinh(_tmp126 * _tmp148);
  const Scalar _tmp150 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp151 =
      -_tmp149 * _tmp150 -
      Scalar(8.3888750099999996) *
          std::sqrt(
              Scalar(Scalar(0.090254729040973036) *
                         std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp35), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp38 - 1), Scalar(2))));
  const Scalar _tmp152 = std::pow(_tmp125, Scalar(-2));
  const Scalar _tmp153 = _tmp124 * _tmp152;
  const Scalar _tmp154 = _tmp26 + _tmp65;
  const Scalar _tmp155 =
      (_tmp126 * (-_tmp132 + _tmp141 * _tmp154 + _tmp146 * _tmp19) - _tmp148 * _tmp153) /
      std::sqrt(Scalar(std::pow(_tmp148, Scalar(2)) * _tmp152 + 1));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp124;
  const Scalar _tmp157 = Scalar(0.1034955) * _tmp126;
  const Scalar _tmp158 = _tmp151 * _tmp157;
  const Scalar _tmp159 = Scalar(1.0) * _tmp149;
  const Scalar _tmp160 = _tmp120 * _tmp122;
  const Scalar _tmp161 = _tmp102 * _tmp108 * _tmp77 + _tmp114 * _tmp116 * _tmp77 -
                         _tmp118 * _tmp119 - _tmp160 * _tmp78;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = _tmp133 * _tmp144;
  const Scalar _tmp164 = _tmp108 * _tmp147 * _tmp82 + _tmp116 * _tmp135 * _tmp82 +
                         _tmp119 * _tmp143 * _tmp82 + _tmp120 * _tmp131 + _tmp138 * _tmp139 -
                         _tmp145 * _tmp163;
  const Scalar _tmp165 = std::asinh(_tmp162 * _tmp164);
  const Scalar _tmp166 = Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp168 =
      -_tmp165 * _tmp167 -
      Scalar(8.3196563700000006) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp67 - 1), Scalar(2)) +
                     Scalar(0.057067943376852184) *
                         std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp70 - 1), Scalar(2))));
  const Scalar _tmp169 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp170 = _tmp168 * _tmp169;
  const Scalar _tmp171 = Scalar(9.6622558468725703) * _tmp122;
  const Scalar _tmp172 = _tmp171 * _tmp78;
  const Scalar _tmp173 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp174 = _tmp123 * _tmp173;
  const Scalar _tmp175 = _tmp133 * _tmp19;
  const Scalar _tmp176 =
      (_tmp162 * (-_tmp131 + _tmp139 * _tmp154 - _tmp145 * _tmp175) - _tmp164 * _tmp174) /
      std::sqrt(Scalar(std::pow(_tmp164, Scalar(2)) * _tmp173 + 1));
  const Scalar _tmp177 = -_tmp100 * _tmp108 * _tmp129 - _tmp112 * _tmp116 * _tmp129 -
                         _tmp119 * _tmp142 + _tmp120 * _tmp130 - _tmp138 * _tmp140 + _tmp163;
  const Scalar _tmp178 = _tmp101 * _tmp108 + _tmp113 * _tmp116 + _tmp117 * _tmp119 + _tmp160;
  const Scalar _tmp179 = Scalar(1.0) / (_tmp178);
  const Scalar _tmp180 = std::asinh(_tmp177 * _tmp179);
  const Scalar _tmp181 = Scalar(1.0) * _tmp180;
  const Scalar _tmp182 = Scalar(9.6622558468725703) * _tmp178;
  const Scalar _tmp183 =
      -_tmp180 * _tmp182 -
      Scalar(4.8333311099999996) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp41), Scalar(2)) +
                     Scalar(0.13817235445745474) *
                         std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp45 - 1), Scalar(2))));
  const Scalar _tmp184 = Scalar(0.1034955) * _tmp179;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = std::pow(_tmp178, Scalar(-2));
  const Scalar _tmp187 = _tmp122 * _tmp186;
  const Scalar _tmp188 = (_tmp177 * _tmp187 + _tmp179 * (-_tmp130 - _tmp140 * _tmp154 + _tmp175)) /
                         std::sqrt(Scalar(std::pow(_tmp177, Scalar(2)) * _tmp186 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp32 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 *
           std::sinh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp1 * _tmp32 -
                Scalar(4.7752063900000001) *
                    std::sqrt(Scalar(
                        Scalar(0.32397683292140877) *
                            std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp20), Scalar(2)) +
                        std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp31), Scalar(2)))))));
  _res(1, 0) =
      -_tmp150 *
          (-Scalar(0.87653584775870996) * _tmp153 + Scalar(1.0) * _tmp155 * std::sinh(_tmp159) -
           (-Scalar(0.1034955) * _tmp151 * _tmp153 +
            _tmp157 * (-_tmp149 * _tmp156 - _tmp150 * _tmp155)) *
               std::sinh(_tmp158)) -
      _tmp156 * (Scalar(0.87653584775870996) * _tmp126 - std::cosh(_tmp158) + std::cosh(_tmp159));
  _res(2, 0) =
      -_tmp167 *
          (-Scalar(0.87679799772039002) * _tmp174 + Scalar(1.0) * _tmp176 * std::sinh(_tmp166) -
           (-Scalar(0.1034955) * _tmp168 * _tmp174 +
            _tmp169 * (-_tmp165 * _tmp172 - _tmp167 * _tmp176)) *
               std::sinh(_tmp170)) -
      _tmp172 * (Scalar(0.87679799772039002) * _tmp162 + std::cosh(_tmp166) - std::cosh(_tmp170));
  _res(3, 0) =
      _tmp171 * (Scalar(0.86625939559540499) * _tmp179 + std::cosh(_tmp181) - std::cosh(_tmp185)) -
      _tmp182 *
          (Scalar(0.86625939559540499) * _tmp187 + Scalar(1.0) * _tmp188 * std::sinh(_tmp181) -
           (Scalar(0.1034955) * _tmp183 * _tmp187 +
            _tmp184 * (_tmp171 * _tmp180 - _tmp182 * _tmp188)) *
               std::sinh(_tmp185));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym