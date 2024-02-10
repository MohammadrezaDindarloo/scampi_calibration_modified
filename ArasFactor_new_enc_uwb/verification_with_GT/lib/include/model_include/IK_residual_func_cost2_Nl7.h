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
 * Symbolic function: IK_residual_func_cost2_Nl7
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl7(const Scalar fh1, const Scalar fv1,
                                                   const sym::Rot3<Scalar>& DeltaRot,
                                                   const Scalar p_init0, const Scalar p_init1,
                                                   const Scalar p_init2, const Scalar rot_init_x,
                                                   const Scalar rot_init_y, const Scalar rot_init_z,
                                                   const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 534

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp4 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                       2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp8 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp19 = _tmp12 + _tmp13;
  const Scalar _tmp20 = -Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp0 * _tmp11;
  const Scalar _tmp22 = _tmp1 * _tmp4;
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp20 - _tmp23;
  const Scalar _tmp25 = _tmp18 + _tmp24;
  const Scalar _tmp26 = _tmp25 + p_init0;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp28 = _tmp2 - _tmp5;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp31 = _tmp29 - _tmp30;
  const Scalar _tmp32 = _tmp27 + _tmp31;
  const Scalar _tmp33 = _tmp32 + p_init1;
  const Scalar _tmp34 = Scalar(6.351516257848961) *
                            std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp26), Scalar(2)) +
                        Scalar(70.3732239334025) *
                            std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp33 - 1), Scalar(2));
  const Scalar _tmp35 = Scalar(1.0) / (fh1);
  const Scalar _tmp36 = std::asinh(_tmp35 * fv1);
  const Scalar _tmp37 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp38 = _tmp10 - _tmp14;
  const Scalar _tmp39 = _tmp38 + _tmp7;
  const Scalar _tmp40 = -_tmp18;
  const Scalar _tmp41 = _tmp24 + _tmp40;
  const Scalar _tmp42 = _tmp41 + p_init0;
  const Scalar _tmp43 = -_tmp27;
  const Scalar _tmp44 = _tmp31 + _tmp43;
  const Scalar _tmp45 = _tmp44 + p_init1;
  const Scalar _tmp46 = Scalar(3.9500536956656402) *
                            std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp42 - 1), Scalar(2)) +
                        Scalar(69.216682114881593) *
                            std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp45 - 1), Scalar(2));
  const Scalar _tmp47 = Scalar(1.0) * _tmp41;
  const Scalar _tmp48 = _tmp20 + _tmp23;
  const Scalar _tmp49 = _tmp18 + _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp44;
  const Scalar _tmp51 = -_tmp50;
  const Scalar _tmp52 = _tmp29 + _tmp30;
  const Scalar _tmp53 = _tmp27 + _tmp52;
  const Scalar _tmp54 = _tmp51 + _tmp53;
  const Scalar _tmp55 = _tmp43 + _tmp52;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp51 + _tmp55);
  const Scalar _tmp57 = _tmp40 + _tmp48;
  const Scalar _tmp58 = _tmp56 * (_tmp47 - _tmp57);
  const Scalar _tmp59 = _tmp54 * _tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp47 - _tmp49 - _tmp59);
  const Scalar _tmp61 = Scalar(1.0) * _tmp60;
  const Scalar _tmp62 = _tmp55 + p_init1;
  const Scalar _tmp63 = _tmp62 + Scalar(-4.8333311099999996);
  const Scalar _tmp64 = _tmp57 + p_init0;
  const Scalar _tmp65 = _tmp64 + Scalar(1.79662371);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp65 * _tmp66;
  const Scalar _tmp68 = _tmp45 + Scalar(8.3196563700000006);
  const Scalar _tmp69 = _tmp42 + Scalar(1.9874742000000001);
  const Scalar _tmp70 =
      std::sqrt(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp69, Scalar(2))));
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp73 = _tmp70 * _tmp72;
  const Scalar _tmp74 = _tmp73 * (_tmp41 * _tmp68 * _tmp71 - _tmp44 * _tmp69 * _tmp71);
  const Scalar _tmp75 = _tmp63 * _tmp66;
  const Scalar _tmp76 = _tmp55 * _tmp67 - _tmp57 * _tmp75 + _tmp67 * _tmp74;
  const Scalar _tmp77 = _tmp68 * _tmp72;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp67 * _tmp77 - _tmp75);
  const Scalar _tmp79 = Scalar(1.0) * _tmp78;
  const Scalar _tmp80 = _tmp38 + _tmp6;
  const Scalar _tmp81 = _tmp39 * _tmp67;
  const Scalar _tmp82 = _tmp78 * (_tmp75 * _tmp80 - _tmp77 * _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp82;
  const Scalar _tmp84 = -_tmp67 * _tmp80 + _tmp81;
  const Scalar _tmp85 = _tmp58 * _tmp83 - _tmp79 * _tmp84;
  const Scalar _tmp86 = _tmp49 + p_init0;
  const Scalar _tmp87 = _tmp86 + Scalar(-2.71799795);
  const Scalar _tmp88 = _tmp53 + p_init1;
  const Scalar _tmp89 = _tmp88 + Scalar(-4.7752063900000001);
  const Scalar _tmp90 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp89, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp91 = _tmp87 * _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp90;
  const Scalar _tmp93 = _tmp77 * _tmp91 - _tmp92;
  const Scalar _tmp94 = _tmp78 * _tmp93;
  const Scalar _tmp95 = _tmp15 + _tmp6;
  const Scalar _tmp96 = _tmp39 * _tmp77;
  const Scalar _tmp97 = -_tmp82 * _tmp93 - _tmp91 * _tmp96 + _tmp92 * _tmp95;
  const Scalar _tmp98 = _tmp39 * _tmp91 - _tmp58 * _tmp97 - _tmp84 * _tmp94 - _tmp91 * _tmp95;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = -_tmp49 * _tmp92 + _tmp53 * _tmp91 + _tmp74 * _tmp91 - _tmp76 * _tmp94;
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp98;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp85 - _tmp76 * _tmp79);
  const Scalar _tmp105 = _tmp104 + _tmp85;
  const Scalar _tmp106 = _tmp97 * _tmp99;
  const Scalar _tmp107 = _tmp54 * _tmp60;
  const Scalar _tmp108 = _tmp104 * _tmp107 - _tmp105 * _tmp106 - _tmp83;
  const Scalar _tmp109 = Scalar(1.0) * _tmp56;
  const Scalar _tmp110 = _tmp26 + Scalar(-2.5202214700000001);
  const Scalar _tmp111 = _tmp33 + Scalar(8.3888750099999996);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp113 * fh1;
  const Scalar _tmp115 = _tmp59 * _tmp61 + Scalar(1.0);
  const Scalar _tmp116 = _tmp58 * _tmp61;
  const Scalar _tmp117 = _tmp16 * fh1;
  const Scalar _tmp118 = -_tmp113 * _tmp117 - Scalar(3.29616) * _tmp28 - _tmp32 * fv1;
  const Scalar _tmp119 = _tmp54 * _tmp56;
  const Scalar _tmp120 = _tmp110 * _tmp112;
  const Scalar _tmp121 = _tmp117 * _tmp120 + Scalar(3.29616) * _tmp19 + _tmp25 * fv1;
  const Scalar _tmp122 = _tmp77 * _tmp78;
  const Scalar _tmp123 = _tmp77 * _tmp82 + _tmp96;
  const Scalar _tmp124 = _tmp122 * _tmp84 - _tmp123 * _tmp58 - _tmp39;
  const Scalar _tmp125 = _tmp103 * (-_tmp101 * _tmp124 + _tmp122 * _tmp76 - _tmp74);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = -_tmp106 * _tmp126 + _tmp107 * _tmp125 + _tmp123;
  const Scalar _tmp128 = _tmp120 * fh1;
  const Scalar _tmp129 = _tmp47 + _tmp50 * _tmp58;
  const Scalar _tmp130 = 0;
  const Scalar _tmp131 = _tmp129 * _tmp60;
  const Scalar _tmp132 = -_tmp106 * _tmp130 - _tmp131 * _tmp54 + _tmp51;
  const Scalar _tmp133 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp134 = _tmp103 * _tmp61;
  const Scalar _tmp135 = Scalar(1.0) * _tmp102;
  const Scalar _tmp136 = _tmp134 * _tmp54 - _tmp135 * _tmp97;
  const Scalar _tmp137 = fh1 * (_tmp113 * _tmp25 - _tmp120 * _tmp32);
  const Scalar _tmp138 = _tmp93 * _tmp99;
  const Scalar _tmp139 = -_tmp105 * _tmp138 + Scalar(1.0);
  const Scalar _tmp140 = _tmp67 * _tmp78;
  const Scalar _tmp141 = _tmp91 * _tmp99;
  const Scalar _tmp142 = _tmp130 * _tmp138;
  const Scalar _tmp143 = _tmp130 * _tmp99;
  const Scalar _tmp144 = -_tmp126 * _tmp138 - _tmp77;
  const Scalar _tmp145 = -_tmp114 * _tmp73 * (_tmp105 * _tmp141 + _tmp139 * _tmp140) -
                         _tmp128 * _tmp73 * (_tmp126 * _tmp141 + _tmp140 * _tmp144 + Scalar(1.0)) -
                         _tmp133 * _tmp73 * (-_tmp140 * _tmp142 + _tmp143 * _tmp91) -
                         _tmp137 * _tmp73 * (-_tmp135 * _tmp67 * _tmp94 + _tmp135 * _tmp91);
  const Scalar _tmp146 = Scalar(1.0) / (_tmp145);
  const Scalar _tmp147 = std::asinh(
      _tmp146 * (Scalar(1.0) * _tmp114 * (_tmp104 * _tmp61 - _tmp108 * _tmp109) +
                 Scalar(1.0) * _tmp118 * (-_tmp109 * _tmp115 + _tmp116) +
                 Scalar(1.0) * _tmp121 * (_tmp119 * _tmp61 - _tmp61) +
                 Scalar(1.0) * _tmp128 * (-_tmp109 * _tmp127 + _tmp125 * _tmp61) +
                 Scalar(1.0) * _tmp133 * (-_tmp109 * _tmp132 - _tmp129 * _tmp61 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp137 * (-_tmp109 * _tmp136 + _tmp134)));
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp145;
  const Scalar _tmp149 = Scalar(23.361089618893828) *
                             std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp62), Scalar(2)) +
                         Scalar(3.2278567553341642) *
                             std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp64 - 1), Scalar(2));
  const Scalar _tmp150 = _tmp121 * _tmp61;
  const Scalar _tmp151 = _tmp135 * _tmp137;
  const Scalar _tmp152 = _tmp78 * fh1;
  const Scalar _tmp153 = _tmp113 * _tmp139 * _tmp152 + _tmp120 * _tmp144 * _tmp152 -
                         _tmp133 * _tmp142 * _tmp78 - _tmp151 * _tmp94;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 =
      std::asinh(_tmp154 * (_tmp108 * _tmp114 * _tmp56 + _tmp115 * _tmp118 * _tmp56 -
                            _tmp119 * _tmp150 + _tmp127 * _tmp128 * _tmp56 +
                            _tmp132 * _tmp133 * _tmp56 + _tmp136 * _tmp137 * _tmp56));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp153;
  const Scalar _tmp157 = Scalar(7.3875128562042027) *
                             std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp86), Scalar(2)) +
                         Scalar(22.802596067096832) *
                             std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp88), Scalar(2));
  const Scalar _tmp158 =
      _tmp105 * _tmp114 * _tmp99 + _tmp126 * _tmp128 * _tmp99 + _tmp133 * _tmp143 + _tmp151;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = std::asinh(_tmp159 * (-_tmp104 * _tmp114 * _tmp60 - _tmp116 * _tmp118 -
                                               _tmp125 * _tmp128 * _tmp60 + _tmp131 * _tmp133 -
                                               _tmp134 * _tmp137 + _tmp150));
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp37 * (-std::sinh(Scalar(1.0) * _tmp36) -
                std::sinh(Scalar(0.1034955) * _tmp35 * (-std::sqrt(_tmp34) - _tmp36 * _tmp37))) -
      Scalar(8.4693136199999994) *
          std::sqrt(Scalar(Scalar(0.013941309530580858) * _tmp34 +
                           std::pow(Scalar(-Scalar(0.11807332268798426) * _tmp16 -
                                           Scalar(0.11807332268798426) * p_init2 + 1),
                                    Scalar(2))));
  _res(1, 0) =
      _tmp148 *
          (-std::sinh(Scalar(1.0) * _tmp147) -
           std::sinh(Scalar(0.1034955) * _tmp146 * (-_tmp147 * _tmp148 - std::sqrt(_tmp46)))) -
      Scalar(8.4718465799999993) *
          std::sqrt(Scalar(Scalar(0.013932974275675287) * _tmp46 +
                           std::pow(Scalar(-Scalar(0.11803802046660766) * _tmp39 -
                                           Scalar(0.11803802046660766) * p_init2 + 1),
                                    Scalar(2))));
  _res(2, 0) =
      _tmp156 *
          (-std::sinh(Scalar(1.0) * _tmp155) -
           std::sinh(Scalar(0.1034955) * _tmp154 * (-std::sqrt(_tmp149) - _tmp155 * _tmp156))) -
      Scalar(8.3700199099999999) *
          std::sqrt(Scalar(Scalar(0.01427404356387209) * _tmp149 +
                           std::pow(Scalar(-Scalar(0.11947402882581673) * _tmp80 -
                                           Scalar(0.11947402882581673) * p_init2 + 1),
                                    Scalar(2))));
  _res(3, 0) =
      _tmp161 *
          (-std::sinh(Scalar(1.0) * _tmp160) -
           std::sinh(Scalar(0.1034955) * _tmp159 * (-std::sqrt(_tmp157) - _tmp160 * _tmp161))) -
      Scalar(8.36416322) *
          std::sqrt(Scalar(Scalar(0.014294040284261563) * _tmp157 +
                           std::pow(Scalar(-Scalar(0.1195576860108189) * _tmp95 -
                                           Scalar(0.1195576860108189) * p_init2 + 1),
                                    Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
