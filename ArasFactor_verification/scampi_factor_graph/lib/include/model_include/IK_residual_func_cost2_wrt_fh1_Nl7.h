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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl7
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 638

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 = -_tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp7;
  const Scalar _tmp14 = _tmp2 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp23 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp24 = _tmp6 * _tmp9;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp29), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp18 - 1), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = Scalar(1.0) * _tmp32;
  const Scalar _tmp38 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp38 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp18 + Scalar(8.3885017487099702);
  const Scalar _tmp41 = _tmp29 + Scalar(-2.5193355532036801);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp47 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp48 = _tmp46 + _tmp47;
  const Scalar _tmp49 = _tmp45 + _tmp48;
  const Scalar _tmp50 = _tmp49 * fh1;
  const Scalar _tmp51 = Scalar(3.29616) * _tmp25 + _tmp28 * fv1 + _tmp43 * _tmp50;
  const Scalar _tmp52 = _tmp12 - _tmp15;
  const Scalar _tmp53 = _tmp5 + _tmp52;
  const Scalar _tmp54 = Scalar(1.0) * _tmp53;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 = _tmp16 + _tmp4;
  const Scalar _tmp57 = _tmp55 + _tmp56;
  const Scalar _tmp58 = _tmp4 + _tmp52;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp55 + _tmp58);
  const Scalar _tmp60 = -_tmp22 + _tmp26;
  const Scalar _tmp61 = _tmp19 + _tmp60;
  const Scalar _tmp62 = _tmp20 + _tmp60;
  const Scalar _tmp63 = Scalar(1.0) * _tmp62;
  const Scalar _tmp64 = _tmp59 * (-_tmp61 + _tmp63);
  const Scalar _tmp65 = _tmp57 * _tmp64;
  const Scalar _tmp66 = _tmp19 + _tmp27;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp63 - _tmp65 - _tmp66);
  const Scalar _tmp68 = Scalar(1.0) * _tmp67;
  const Scalar _tmp69 = _tmp57 * _tmp59;
  const Scalar _tmp70 = _tmp68 * _tmp69;
  const Scalar _tmp71 = -Scalar(1.0) * _tmp68 + Scalar(1.0) * _tmp70;
  const Scalar _tmp72 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp73 = _tmp72 + Scalar(8.3196563720703107);
  const Scalar _tmp74 = _tmp62 + position_vector(0, 0);
  const Scalar _tmp75 = _tmp74 + Scalar(1.9874742031097401);
  const Scalar _tmp76 =
      std::sqrt(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp75, Scalar(2))));
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp79 * (-_tmp53 * _tmp75 * _tmp77 + _tmp62 * _tmp73 * _tmp77);
  const Scalar _tmp81 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(1.7965602546229);
  const Scalar _tmp83 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp84 = _tmp83 + Scalar(-4.83288938413423);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp82 * _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp85;
  const Scalar _tmp88 = _tmp58 * _tmp86 - _tmp61 * _tmp87 + _tmp80 * _tmp86;
  const Scalar _tmp89 = _tmp73 * _tmp78;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp86 * _tmp89 - _tmp87);
  const Scalar _tmp91 = _tmp89 * _tmp90;
  const Scalar _tmp92 = _tmp46 - _tmp47;
  const Scalar _tmp93 = _tmp44 + _tmp92;
  const Scalar _tmp94 = _tmp45 + _tmp92;
  const Scalar _tmp95 = _tmp86 * _tmp94;
  const Scalar _tmp96 = _tmp87 * _tmp93 - _tmp89 * _tmp95;
  const Scalar _tmp97 = _tmp89 * _tmp94;
  const Scalar _tmp98 = _tmp91 * _tmp96 + _tmp97;
  const Scalar _tmp99 = -_tmp86 * _tmp93 + _tmp95;
  const Scalar _tmp100 = -_tmp64 * _tmp98 + _tmp91 * _tmp99 - _tmp94;
  const Scalar _tmp101 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp102 = _tmp101 + Scalar(-4.7744369927459998);
  const Scalar _tmp103 = _tmp66 + position_vector(0, 0);
  const Scalar _tmp104 = _tmp103 + Scalar(-2.7171519410699099);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp102 * _tmp105;
  const Scalar _tmp107 = _tmp104 * _tmp105;
  const Scalar _tmp108 = -_tmp106 + _tmp107 * _tmp89;
  const Scalar _tmp109 = _tmp108 * _tmp90;
  const Scalar _tmp110 = _tmp44 + _tmp48;
  const Scalar _tmp111 = _tmp106 * _tmp110 - _tmp107 * _tmp97 - _tmp109 * _tmp96;
  const Scalar _tmp112 =
      -_tmp107 * _tmp110 + _tmp107 * _tmp94 - _tmp109 * _tmp99 - _tmp111 * _tmp64;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp112);
  const Scalar _tmp114 = -_tmp106 * _tmp66 + _tmp107 * _tmp56 + _tmp107 * _tmp80 - _tmp109 * _tmp88;
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = Scalar(1.0) / (_tmp114);
  const Scalar _tmp117 = _tmp112 * _tmp116;
  const Scalar _tmp118 = _tmp117 * (-_tmp100 * _tmp115 - _tmp80 + _tmp88 * _tmp91);
  const Scalar _tmp119 = _tmp100 + _tmp118;
  const Scalar _tmp120 = _tmp111 * _tmp113;
  const Scalar _tmp121 = _tmp57 * _tmp67;
  const Scalar _tmp122 = _tmp118 * _tmp121 - _tmp119 * _tmp120 + _tmp98;
  const Scalar _tmp123 = Scalar(1.0) * _tmp59;
  const Scalar _tmp124 = Scalar(1.0) * _tmp43 * (_tmp118 * _tmp68 - _tmp122 * _tmp123);
  const Scalar _tmp125 = Scalar(1.0) * _tmp90;
  const Scalar _tmp126 = _tmp125 * _tmp96;
  const Scalar _tmp127 = -_tmp125 * _tmp99 + _tmp126 * _tmp64;
  const Scalar _tmp128 = _tmp117 * (-_tmp115 * _tmp127 - _tmp125 * _tmp88);
  const Scalar _tmp129 = _tmp113 * (_tmp127 + _tmp128);
  const Scalar _tmp130 = -_tmp111 * _tmp129 + _tmp121 * _tmp128 - _tmp126;
  const Scalar _tmp131 = _tmp40 * _tmp42;
  const Scalar _tmp132 = Scalar(1.0) * _tmp131 * (-_tmp123 * _tmp130 + _tmp128 * _tmp68);
  const Scalar _tmp133 = -Scalar(3.29616) * _tmp11 - _tmp131 * _tmp50 - _tmp17 * fv1;
  const Scalar _tmp134 = _tmp65 * _tmp68 + Scalar(1.0);
  const Scalar _tmp135 = _tmp64 * _tmp68;
  const Scalar _tmp136 = -Scalar(1.0) * _tmp123 * _tmp134 + Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp131 * _tmp28 - _tmp17 * _tmp43;
  const Scalar _tmp138 = _tmp117 * _tmp68;
  const Scalar _tmp139 = Scalar(1.0) * _tmp116;
  const Scalar _tmp140 = -_tmp111 * _tmp139 + _tmp138 * _tmp57;
  const Scalar _tmp141 = Scalar(1.0) * _tmp137 * (-_tmp123 * _tmp140 + _tmp138);
  const Scalar _tmp142 = _tmp54 * _tmp64 + _tmp63;
  const Scalar _tmp143 = _tmp142 * _tmp67;
  const Scalar _tmp144 = 0;
  const Scalar _tmp145 = -_tmp120 * _tmp144 - _tmp143 * _tmp57 + _tmp55;
  const Scalar _tmp146 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp147 =
      _tmp124 * fh1 + _tmp132 * fh1 + _tmp133 * _tmp136 + _tmp141 * fh1 +
      Scalar(1.0) * _tmp146 * (-_tmp123 * _tmp145 - _tmp142 * _tmp68 + Scalar(1.0)) +
      _tmp51 * _tmp71;
  const Scalar _tmp148 = _tmp113 * _tmp144;
  const Scalar _tmp149 = _tmp109 * _tmp86;
  const Scalar _tmp150 = _tmp113 * _tmp119;
  const Scalar _tmp151 = _tmp90 * (-_tmp108 * _tmp150 - _tmp89);
  const Scalar _tmp152 = _tmp43 * _tmp79 * (_tmp107 * _tmp150 + _tmp151 * _tmp86 + Scalar(1.0));
  const Scalar _tmp153 = _tmp90 * (-_tmp108 * _tmp129 + Scalar(1.0));
  const Scalar _tmp154 = _tmp131 * _tmp79 * (_tmp107 * _tmp129 + _tmp153 * _tmp86);
  const Scalar _tmp155 = _tmp137 * _tmp79 * (_tmp107 * _tmp139 - _tmp139 * _tmp149);
  const Scalar _tmp156 = -_tmp146 * _tmp79 * (_tmp107 * _tmp148 - _tmp148 * _tmp149) -
                         _tmp152 * fh1 - _tmp154 * fh1 - _tmp155 * fh1;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp147 * _tmp157);
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp156;
  const Scalar _tmp160 =
      -_tmp158 * _tmp159 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp72 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp74 - 1), Scalar(2))));
  const Scalar _tmp161 = Scalar(0.1034955) * _tmp157;
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = Scalar(1.0) * _tmp158;
  const Scalar _tmp164 = -_tmp152 - _tmp154 - _tmp155;
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp166 = _tmp43 * _tmp49;
  const Scalar _tmp167 = _tmp131 * _tmp49;
  const Scalar _tmp168 = std::pow(_tmp156, Scalar(-2));
  const Scalar _tmp169 = _tmp164 * _tmp168;
  const Scalar _tmp170 = (-_tmp147 * _tmp169 + _tmp157 * (_tmp124 + _tmp132 - _tmp136 * _tmp167 +
                                                          _tmp141 + _tmp166 * _tmp71)) /
                         std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp168 + 1));
  const Scalar _tmp171 = _tmp131 * _tmp153;
  const Scalar _tmp172 = _tmp151 * _tmp43;
  const Scalar _tmp173 = _tmp146 * _tmp148;
  const Scalar _tmp174 = _tmp137 * _tmp139;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = -_tmp109 * _tmp173 - _tmp109 * _tmp175 + _tmp171 * fh1 + _tmp172 * fh1;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp134 * _tmp59;
  const Scalar _tmp179 = _tmp122 * _tmp43 * _tmp59;
  const Scalar _tmp180 = _tmp51 * _tmp68;
  const Scalar _tmp181 = _tmp137 * _tmp140 * _tmp59;
  const Scalar _tmp182 = _tmp130 * _tmp131 * _tmp59;
  const Scalar _tmp183 = _tmp133 * _tmp178 + _tmp145 * _tmp146 * _tmp59 + _tmp179 * fh1 -
                         _tmp180 * _tmp69 + _tmp181 * fh1 + _tmp182 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp177 * _tmp183);
  const Scalar _tmp185 = Scalar(1.0) * _tmp184;
  const Scalar _tmp186 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp187 = -_tmp109 * _tmp174 + _tmp171 + _tmp172;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 =
      (_tmp177 * (-_tmp166 * _tmp70 - _tmp167 * _tmp178 + _tmp179 + _tmp181 + _tmp182) -
       _tmp183 * _tmp188) /
      std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp186 + 1));
  const Scalar _tmp190 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp191 =
      -_tmp184 * _tmp190 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp83), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp81 - 1), Scalar(2))));
  const Scalar _tmp192 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp193 = _tmp191 * _tmp192;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp187;
  const Scalar _tmp195 = _tmp150 * _tmp43;
  const Scalar _tmp196 = _tmp129 * _tmp131;
  const Scalar _tmp197 = _tmp173 + _tmp175 + _tmp195 * fh1 + _tmp196 * fh1;
  const Scalar _tmp198 = Scalar(1.0) / (_tmp197);
  const Scalar _tmp199 = _tmp128 * _tmp131 * _tmp67;
  const Scalar _tmp200 = _tmp137 * _tmp138;
  const Scalar _tmp201 = _tmp118 * _tmp43 * _tmp67;
  const Scalar _tmp202 = -_tmp133 * _tmp135 + _tmp143 * _tmp146 + _tmp180 - _tmp199 * fh1 -
                         _tmp200 * fh1 - _tmp201 * fh1;
  const Scalar _tmp203 = std::asinh(_tmp198 * _tmp202);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = std::pow(_tmp197, Scalar(-2));
  const Scalar _tmp206 = _tmp174 + _tmp195 + _tmp196;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 =
      (_tmp198 * (_tmp135 * _tmp167 + _tmp166 * _tmp68 - _tmp199 - _tmp200 - _tmp201) -
       _tmp202 * _tmp207) /
      std::sqrt(Scalar(std::pow(_tmp202, Scalar(2)) * _tmp205 + 1));
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp197;
  const Scalar _tmp210 =
      -_tmp203 * _tmp209 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp101), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp103), Scalar(2))));
  const Scalar _tmp211 = Scalar(0.1034955) * _tmp198;
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = Scalar(9.6622558468725703) * _tmp206;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp38 * _tmp39 * fv1 * std::cosh(_tmp37) -
                    (-Scalar(0.1034955) * _tmp34 * _tmp38 +
                     _tmp35 * (Scalar(9.6622558468725703) * _tmp31 * _tmp39 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp36) -
               Scalar(9.6622558468725703) * std::sinh(_tmp37);
  _res(1, 0) = _tmp159 * (-Scalar(1.0) * _tmp170 * std::cosh(_tmp163) -
                          (-Scalar(0.1034955) * _tmp160 * _tmp169 +
                           _tmp161 * (-_tmp158 * _tmp165 - _tmp159 * _tmp170)) *
                              std::cosh(_tmp162)) +
               _tmp165 * (-std::sinh(_tmp162) - std::sinh(_tmp163));
  _res(2, 0) = _tmp190 * (-Scalar(1.0) * _tmp189 * std::cosh(_tmp185) -
                          (-Scalar(0.1034955) * _tmp188 * _tmp191 +
                           _tmp192 * (-_tmp184 * _tmp194 - _tmp189 * _tmp190)) *
                              std::cosh(_tmp193)) +
               _tmp194 * (-std::sinh(_tmp185) - std::sinh(_tmp193));
  _res(3, 0) = _tmp209 * (-Scalar(1.0) * _tmp208 * std::cosh(_tmp204) -
                          (-Scalar(0.1034955) * _tmp207 * _tmp210 +
                           _tmp211 * (-_tmp203 * _tmp213 - _tmp208 * _tmp209)) *
                              std::cosh(_tmp212)) +
               _tmp213 * (-std::sinh(_tmp204) - std::sinh(_tmp212));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
