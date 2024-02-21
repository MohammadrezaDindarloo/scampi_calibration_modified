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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl0
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 643

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (213)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp13 = _tmp3 * _tmp8;
  const Scalar _tmp14 = _tmp1 * _tmp10;
  const Scalar _tmp15 = _tmp13 - _tmp14;
  const Scalar _tmp16 = -Scalar(0.010999999999999999) * _tmp15;
  const Scalar _tmp17 = -_tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp23 = _tmp10 * _tmp7;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp28 = _tmp25 - _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 = _tmp0 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -Scalar(0.1034955) * _tmp33 * fh1 -
      Scalar(0.86104699605560286) *
          std::sqrt(
              Scalar(std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp19 - 1), Scalar(2)) +
                     Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp30 - 1), Scalar(2))));
  const Scalar _tmp35 = _tmp0 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) * _tmp32;
  const Scalar _tmp39 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp40 = _tmp20 + _tmp28;
  const Scalar _tmp41 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp42 = _tmp41 + Scalar(1.7965602546229);
  const Scalar _tmp43 = _tmp17 + _tmp5;
  const Scalar _tmp44 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(-4.83288938413423);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp42 * _tmp46;
  const Scalar _tmp48 = _tmp12 + _tmp16;
  const Scalar _tmp49 = _tmp48 + _tmp5;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-4.7744369927459998);
  const Scalar _tmp52 = _tmp25 + _tmp27;
  const Scalar _tmp53 = _tmp20 + _tmp52;
  const Scalar _tmp54 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 + Scalar(-2.7171519410699099);
  const Scalar _tmp56 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp55, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp55 * _tmp56;
  const Scalar _tmp58 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp59 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp26 + Scalar(-0.010999999999999999);
  const Scalar _tmp60 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp61 = _tmp59 - _tmp60;
  const Scalar _tmp62 = _tmp58 + _tmp61;
  const Scalar _tmp63 = _tmp21 + _tmp52;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(-2.5193355532036801);
  const Scalar _tmp66 = Scalar(1.0) / (_tmp65);
  const Scalar _tmp67 = _tmp48 + _tmp6;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(8.3885017487099702);
  const Scalar _tmp70 = _tmp66 * _tmp69;
  const Scalar _tmp71 = _tmp62 * _tmp70;
  const Scalar _tmp72 = _tmp59 + _tmp60;
  const Scalar _tmp73 = _tmp58 + _tmp72;
  const Scalar _tmp74 = _tmp51 * _tmp56;
  const Scalar _tmp75 = -_tmp57 * _tmp71 + _tmp73 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp57 * _tmp70 - _tmp74);
  const Scalar _tmp77 = _tmp45 * _tmp46;
  const Scalar _tmp78 = _tmp47 * _tmp70 - _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp47 * _tmp62;
  const Scalar _tmp81 = -_tmp58;
  const Scalar _tmp82 = _tmp72 + _tmp81;
  const Scalar _tmp83 = -_tmp70 * _tmp80 - _tmp75 * _tmp79 + _tmp77 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) * _tmp67;
  const Scalar _tmp85 = -_tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp49 + _tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp63;
  const Scalar _tmp88 = _tmp86 * (-_tmp53 + _tmp87);
  const Scalar _tmp89 = _tmp57 * _tmp62 - _tmp57 * _tmp73;
  const Scalar _tmp90 = -_tmp47 * _tmp82 - _tmp79 * _tmp89 + _tmp80 - _tmp83 * _tmp88;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = _tmp84 * _tmp88 + _tmp87;
  const Scalar _tmp93 = 0;
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp69, Scalar(2))));
  const Scalar _tmp96 = _tmp66 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp96 * (_tmp63 * _tmp69 * _tmp97 - _tmp65 * _tmp67 * _tmp97);
  const Scalar _tmp99 = _tmp49 * _tmp57 - _tmp53 * _tmp74 + _tmp57 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp76;
  const Scalar _tmp101 = _tmp100 * _tmp75;
  const Scalar _tmp102 = -_tmp100 * _tmp89 + _tmp101 * _tmp88;
  const Scalar _tmp103 = -_tmp40 * _tmp77 + _tmp43 * _tmp47 + _tmp47 * _tmp98 - _tmp79 * _tmp99;
  const Scalar _tmp104 = _tmp103 * _tmp91;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp106 = _tmp105 * _tmp90;
  const Scalar _tmp107 = _tmp106 * (-_tmp100 * _tmp99 - _tmp102 * _tmp104);
  const Scalar _tmp108 = _tmp102 + _tmp107;
  const Scalar _tmp109 = _tmp108 * _tmp91;
  const Scalar _tmp110 = _tmp76 * (-_tmp109 * _tmp78 + Scalar(1.0));
  const Scalar _tmp111 = _tmp30 + Scalar(1.9874742031097401);
  const Scalar _tmp112 = _tmp19 + Scalar(8.3196563720703107);
  const Scalar _tmp113 =
      std::pow(Scalar(std::pow(_tmp111, Scalar(2)) + std::pow(_tmp112, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp114 = _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp114 * _tmp96 * (_tmp109 * _tmp47 + _tmp110 * _tmp57);
  const Scalar _tmp116 = _tmp111 * _tmp113;
  const Scalar _tmp117 = _tmp114 * _tmp29 - _tmp116 * _tmp18;
  const Scalar _tmp118 = Scalar(1.0) * _tmp105;
  const Scalar _tmp119 = _tmp100 * _tmp105 * _tmp78;
  const Scalar _tmp120 = _tmp117 * _tmp96 * (_tmp118 * _tmp47 - _tmp119 * _tmp57);
  const Scalar _tmp121 = _tmp70 * _tmp76;
  const Scalar _tmp122 = _tmp121 * _tmp75 + _tmp71;
  const Scalar _tmp123 = _tmp121 * _tmp89 - _tmp122 * _tmp88 - _tmp62;
  const Scalar _tmp124 = _tmp106 * (-_tmp104 * _tmp123 + _tmp121 * _tmp99 - _tmp98);
  const Scalar _tmp125 = _tmp91 * (_tmp123 + _tmp124);
  const Scalar _tmp126 = _tmp76 * (-_tmp125 * _tmp78 - _tmp70);
  const Scalar _tmp127 = _tmp116 * _tmp96 * (_tmp125 * _tmp47 + _tmp126 * _tmp57 + Scalar(1.0));
  const Scalar _tmp128 = -_tmp115 * fh1 - _tmp120 * fh1 - _tmp127 * fh1 -
                         _tmp39 * _tmp96 * (_tmp47 * _tmp94 - _tmp57 * _tmp79 * _tmp94);
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = _tmp61 + _tmp81;
  const Scalar _tmp131 = _tmp130 * fh1;
  const Scalar _tmp132 = _tmp116 * _tmp131 + Scalar(5.1796800000000003) * _tmp24 + _tmp29 * fv1;
  const Scalar _tmp133 = _tmp43 + _tmp85;
  const Scalar _tmp134 = _tmp133 * _tmp88;
  const Scalar _tmp135 = Scalar(1.0) / (-_tmp134 - _tmp40 + _tmp87);
  const Scalar _tmp136 = Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp133 * _tmp86;
  const Scalar _tmp138 = Scalar(1.0) * _tmp136 * _tmp137 - Scalar(1.0) * _tmp136;
  const Scalar _tmp139 = _tmp133 * _tmp135;
  const Scalar _tmp140 = _tmp122 + _tmp124 * _tmp139 - _tmp125 * _tmp83;
  const Scalar _tmp141 = Scalar(1.0) * _tmp86;
  const Scalar _tmp142 = Scalar(1.0) * _tmp116 * (_tmp124 * _tmp136 - _tmp140 * _tmp141);
  const Scalar _tmp143 = _tmp135 * _tmp92;
  const Scalar _tmp144 = _tmp83 * _tmp91;
  const Scalar _tmp145 = -_tmp133 * _tmp143 - _tmp144 * _tmp93 + _tmp85;
  const Scalar _tmp146 = -_tmp101 + _tmp107 * _tmp139 - _tmp108 * _tmp144;
  const Scalar _tmp147 = Scalar(1.0) * _tmp114 * (_tmp107 * _tmp136 - _tmp141 * _tmp146);
  const Scalar _tmp148 = _tmp106 * _tmp136;
  const Scalar _tmp149 = -_tmp118 * _tmp83 + _tmp133 * _tmp148;
  const Scalar _tmp150 = Scalar(1.0) * _tmp117 * (-_tmp141 * _tmp149 + _tmp148);
  const Scalar _tmp151 = -_tmp114 * _tmp131 - Scalar(5.1796800000000003) * _tmp15 - _tmp18 * fv1;
  const Scalar _tmp152 = _tmp134 * _tmp136 + Scalar(1.0);
  const Scalar _tmp153 = _tmp136 * _tmp88;
  const Scalar _tmp154 = -Scalar(1.0) * _tmp141 * _tmp152 + Scalar(1.0) * _tmp153;
  const Scalar _tmp155 =
      _tmp132 * _tmp138 + _tmp142 * fh1 + _tmp147 * fh1 + _tmp150 * fh1 + _tmp151 * _tmp154 +
      Scalar(1.0) * _tmp39 * (-_tmp136 * _tmp92 - _tmp141 * _tmp145 + Scalar(1.0));
  const Scalar _tmp156 = std::asinh(_tmp129 * _tmp155);
  const Scalar _tmp157 = Scalar(1.0) * _tmp156;
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp159 =
      -_tmp156 * _tmp158 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp64), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp68 - 1), Scalar(2))));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp129;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = -_tmp115 - _tmp120 - _tmp127;
  const Scalar _tmp163 = Scalar(9.6622558468725703) * _tmp162;
  const Scalar _tmp164 = _tmp116 * _tmp130;
  const Scalar _tmp165 = _tmp114 * _tmp130;
  const Scalar _tmp166 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp167 = _tmp162 * _tmp166;
  const Scalar _tmp168 =
      (_tmp129 * (_tmp138 * _tmp164 + _tmp142 + _tmp147 + _tmp150 - _tmp154 * _tmp165) -
       _tmp155 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp155, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp169 = _tmp39 * _tmp94;
  const Scalar _tmp170 = _tmp116 * _tmp126;
  const Scalar _tmp171 = _tmp117 * _tmp119;
  const Scalar _tmp172 = _tmp110 * _tmp114;
  const Scalar _tmp173 = -_tmp169 * _tmp79 + _tmp170 * fh1 - _tmp171 * fh1 + _tmp172 * fh1;
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = _tmp132 * _tmp136;
  const Scalar _tmp176 = _tmp152 * _tmp86;
  const Scalar _tmp177 = _tmp114 * _tmp146 * _tmp86;
  const Scalar _tmp178 = _tmp116 * _tmp86;
  const Scalar _tmp179 = _tmp140 * _tmp178;
  const Scalar _tmp180 = _tmp117 * _tmp149 * _tmp86;
  const Scalar _tmp181 = -_tmp137 * _tmp175 + _tmp145 * _tmp39 * _tmp86 + _tmp151 * _tmp176 +
                         _tmp177 * fh1 + _tmp179 * fh1 + _tmp180 * fh1;
  const Scalar _tmp182 = std::asinh(_tmp174 * _tmp181);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp173;
  const Scalar _tmp185 =
      -_tmp182 * _tmp184 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp50), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp54), Scalar(2))));
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp174;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = _tmp170 - _tmp171 + _tmp172;
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 = (_tmp174 * (-_tmp130 * _tmp133 * _tmp136 * _tmp178 - _tmp165 * _tmp176 +
                                     _tmp177 + _tmp179 + _tmp180) -
                          _tmp181 * _tmp191) /
                         std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp193 = _tmp109 * _tmp114;
  const Scalar _tmp194 = _tmp117 * _tmp118;
  const Scalar _tmp195 = _tmp116 * _tmp125;
  const Scalar _tmp196 = _tmp169 + _tmp193 * fh1 + _tmp194 * fh1 + _tmp195 * fh1;
  const Scalar _tmp197 = Scalar(1.0) / (_tmp196);
  const Scalar _tmp198 = _tmp107 * _tmp114 * _tmp135;
  const Scalar _tmp199 = _tmp116 * _tmp124 * _tmp135;
  const Scalar _tmp200 = _tmp117 * _tmp148;
  const Scalar _tmp201 = _tmp143 * _tmp39 - _tmp151 * _tmp153 + _tmp175 - _tmp198 * fh1 -
                         _tmp199 * fh1 - _tmp200 * fh1;
  const Scalar _tmp202 = std::asinh(_tmp197 * _tmp201);
  const Scalar _tmp203 = Scalar(1.0) * _tmp202;
  const Scalar _tmp204 = Scalar(9.6622558468725703) * _tmp202;
  const Scalar _tmp205 =
      -_tmp196 * _tmp204 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp44), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp41 - 1), Scalar(2))));
  const Scalar _tmp206 = Scalar(0.1034955) * _tmp197;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = _tmp193 + _tmp194 + _tmp195;
  const Scalar _tmp209 = std::pow(_tmp196, Scalar(-2));
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 =
      (_tmp197 * (_tmp136 * _tmp164 + _tmp153 * _tmp165 - _tmp198 - _tmp199 - _tmp200) -
       _tmp201 * _tmp210) /
      std::sqrt(Scalar(std::pow(_tmp201, Scalar(2)) * _tmp209 + 1));
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp196;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::cosh(_tmp38) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp31 * _tmp37 - _tmp33) -
            _tmp34 * _tmp36) *
               std::cosh(_tmp35)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp35) -
      Scalar(9.6622558468725703) * std::sinh(_tmp38);
  _res(1, 0) = _tmp158 * (-Scalar(1.0) * _tmp168 * std::cosh(_tmp157) -
                          (-Scalar(0.1034955) * _tmp159 * _tmp167 +
                           _tmp160 * (-_tmp156 * _tmp163 - _tmp158 * _tmp168)) *
                              std::cosh(_tmp161)) +
               _tmp163 * (-std::sinh(_tmp157) - std::sinh(_tmp161));
  _res(2, 0) = _tmp184 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp183) -
                          (-Scalar(0.1034955) * _tmp185 * _tmp191 +
                           _tmp186 * (-_tmp182 * _tmp189 - _tmp184 * _tmp192)) *
                              std::cosh(_tmp187)) +
               _tmp189 * (-std::sinh(_tmp183) - std::sinh(_tmp187));
  _res(3, 0) = Scalar(9.6622558468725703) * _tmp208 * (-std::sinh(_tmp203) - std::sinh(_tmp207)) +
               _tmp212 * (-Scalar(1.0) * _tmp211 * std::cosh(_tmp203) -
                          (-Scalar(0.1034955) * _tmp205 * _tmp210 +
                           _tmp206 * (-_tmp204 * _tmp208 - _tmp211 * _tmp212)) *
                              std::cosh(_tmp207));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym