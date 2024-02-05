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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl21
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 647

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * fv1;
  const Scalar _tmp2 = std::asinh(_tmp1);
  const Scalar _tmp3 = Scalar(1.0) * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp12 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = 2 * _tmp4 * _tmp8;
  const Scalar _tmp16 = _tmp5 * _tmp9;
  const Scalar _tmp17 = _tmp15 + _tmp16;
  const Scalar _tmp18 = -Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp14 + _tmp18;
  const Scalar _tmp20 = _tmp11 + _tmp19;
  const Scalar _tmp21 = _tmp20 + position_vector(0, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp6 * _tmp8;
  const Scalar _tmp25 = _tmp4 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp30 = _tmp27 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp34 =
      -Scalar(0.1034955) * _tmp33 * fh1 -
      Scalar(0.50018230325566426) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp32), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp21 - 1), Scalar(2))));
  const Scalar _tmp35 = _tmp0 * _tmp34;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp39 = -Scalar(0.010999999999999999) * _tmp12 -
                        Scalar(0.010999999999999999) * _tmp28 + Scalar(-0.010999999999999999);
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp41 = _tmp39 - _tmp40;
  const Scalar _tmp42 = _tmp38 + _tmp41;
  const Scalar _tmp43 = -_tmp11;
  const Scalar _tmp44 = _tmp14 + _tmp18;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(-2.5193355532036801);
  const Scalar _tmp48 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp49 = _tmp27 - _tmp29;
  const Scalar _tmp50 = _tmp22 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(8.3885017487099702);
  const Scalar _tmp53 = _tmp48 * _tmp52;
  const Scalar _tmp54 = _tmp22 + _tmp30;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 + Scalar(-4.7744369927459998);
  const Scalar _tmp57 = _tmp11 + _tmp44;
  const Scalar _tmp58 = _tmp57 + position_vector(0, 0);
  const Scalar _tmp59 = _tmp58 + Scalar(-2.7171519410699099);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp53 * _tmp62 - _tmp61);
  const Scalar _tmp64 = _tmp42 * _tmp62;
  const Scalar _tmp65 = _tmp39 + _tmp40;
  const Scalar _tmp66 = _tmp38 + _tmp65;
  const Scalar _tmp67 = _tmp63 * (-_tmp53 * _tmp64 + _tmp61 * _tmp66);
  const Scalar _tmp68 = _tmp42 * _tmp53 + _tmp53 * _tmp67;
  const Scalar _tmp69 = Scalar(1.0) * _tmp50;
  const Scalar _tmp70 = -_tmp69;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp54 + _tmp70);
  const Scalar _tmp72 = Scalar(1.0) * _tmp45;
  const Scalar _tmp73 = -_tmp57 + _tmp72;
  const Scalar _tmp74 = _tmp71 * _tmp73;
  const Scalar _tmp75 = _tmp63 * (-_tmp62 * _tmp66 + _tmp64);
  const Scalar _tmp76 = -_tmp42 + _tmp53 * _tmp75 - _tmp68 * _tmp74;
  const Scalar _tmp77 = -_tmp38;
  const Scalar _tmp78 = _tmp41 + _tmp77;
  const Scalar _tmp79 = _tmp19 + _tmp43;
  const Scalar _tmp80 = _tmp79 + position_vector(0, 0);
  const Scalar _tmp81 = _tmp80 + Scalar(1.9874742031097401);
  const Scalar _tmp82 = _tmp23 + _tmp49;
  const Scalar _tmp83 = _tmp82 + position_vector(1, 0);
  const Scalar _tmp84 = _tmp83 + Scalar(8.3196563720703107);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp81 * _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp85;
  const Scalar _tmp88 = _tmp53 * _tmp86 - _tmp87;
  const Scalar _tmp89 = _tmp42 * _tmp86;
  const Scalar _tmp90 = -_tmp53 * _tmp89 - _tmp67 * _tmp88 + _tmp78 * _tmp87;
  const Scalar _tmp91 = -_tmp74 * _tmp90 - _tmp75 * _tmp88 - _tmp78 * _tmp86 + _tmp89;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 =
      std::sqrt(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp52, Scalar(2))));
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp48 * _tmp93;
  const Scalar _tmp96 = _tmp95 * (_tmp45 * _tmp52 * _tmp94 - _tmp47 * _tmp50 * _tmp94);
  const Scalar _tmp97 = _tmp63 * (_tmp54 * _tmp62 - _tmp57 * _tmp61 + _tmp62 * _tmp96);
  const Scalar _tmp98 = -_tmp79 * _tmp87 + _tmp82 * _tmp86 + _tmp86 * _tmp96 - _tmp88 * _tmp97;
  const Scalar _tmp99 = _tmp92 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp101 = _tmp100 * _tmp91;
  const Scalar _tmp102 = _tmp101 * (_tmp53 * _tmp97 - _tmp76 * _tmp99 - _tmp96);
  const Scalar _tmp103 = _tmp70 + _tmp82;
  const Scalar _tmp104 = _tmp103 * _tmp74;
  const Scalar _tmp105 = Scalar(1.0) / (-_tmp104 + _tmp72 - _tmp79);
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp102 + _tmp76;
  const Scalar _tmp108 = _tmp90 * _tmp92;
  const Scalar _tmp109 = _tmp102 * _tmp106 - _tmp107 * _tmp108 + _tmp68;
  const Scalar _tmp110 = Scalar(1.0) * _tmp71;
  const Scalar _tmp111 = Scalar(1.0) * _tmp105;
  const Scalar _tmp112 = _tmp21 + Scalar(1.7965602546229);
  const Scalar _tmp113 = _tmp32 + Scalar(-4.83288938413423);
  const Scalar _tmp114 =
      std::pow(Scalar(std::pow(_tmp112, Scalar(2)) + std::pow(_tmp113, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp115 = _tmp112 * _tmp114;
  const Scalar _tmp116 = Scalar(1.0) * _tmp115 * (_tmp102 * _tmp111 - _tmp109 * _tmp110);
  const Scalar _tmp117 = _tmp101 * _tmp111;
  const Scalar _tmp118 = Scalar(1.0) * _tmp100;
  const Scalar _tmp119 = _tmp103 * _tmp111;
  const Scalar _tmp120 = _tmp101 * _tmp119 - _tmp118 * _tmp90;
  const Scalar _tmp121 = _tmp113 * _tmp114;
  const Scalar _tmp122 = -_tmp115 * _tmp31 + _tmp121 * _tmp20;
  const Scalar _tmp123 = Scalar(1.0) * _tmp122;
  const Scalar _tmp124 = _tmp123 * (-_tmp110 * _tmp120 + _tmp117);
  const Scalar _tmp125 = _tmp110 * _tmp67 * _tmp73 - Scalar(1.0) * _tmp75;
  const Scalar _tmp126 = _tmp101 * (-_tmp125 * _tmp99 - Scalar(1.0) * _tmp97);
  const Scalar _tmp127 = _tmp125 + _tmp126;
  const Scalar _tmp128 = _tmp106 * _tmp126 - _tmp108 * _tmp127 - Scalar(1.0) * _tmp67;
  const Scalar _tmp129 = Scalar(1.0) * _tmp121 * (-_tmp110 * _tmp128 + _tmp111 * _tmp126);
  const Scalar _tmp130 = _tmp65 + _tmp77;
  const Scalar _tmp131 = _tmp130 * fh1;
  const Scalar _tmp132 = _tmp115 * _tmp131 + Scalar(3.29616) * _tmp17 + _tmp20 * fv1;
  const Scalar _tmp133 = _tmp119 * _tmp71;
  const Scalar _tmp134 = -Scalar(1.0) * _tmp111 + Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp136 = _tmp69 * _tmp74 + _tmp72;
  const Scalar _tmp137 = _tmp105 * _tmp136;
  const Scalar _tmp138 = 0;
  const Scalar _tmp139 = -_tmp103 * _tmp137 - _tmp108 * _tmp138 + _tmp70;
  const Scalar _tmp140 = -_tmp121 * _tmp131 - Scalar(3.29616) * _tmp26 - _tmp31 * fv1;
  const Scalar _tmp141 = _tmp111 * _tmp74;
  const Scalar _tmp142 = _tmp104 * _tmp111 + Scalar(1.0);
  const Scalar _tmp143 = -Scalar(1.0) * _tmp110 * _tmp142 + Scalar(1.0) * _tmp141;
  const Scalar _tmp144 =
      _tmp116 * fh1 + _tmp124 * fh1 + _tmp129 * fh1 + _tmp132 * _tmp134 +
      Scalar(1.0) * _tmp135 * (-_tmp110 * _tmp139 - _tmp111 * _tmp136 + Scalar(1.0)) +
      _tmp140 * _tmp143;
  const Scalar _tmp145 = _tmp138 * _tmp92;
  const Scalar _tmp146 = _tmp62 * _tmp63;
  const Scalar _tmp147 = _tmp88 * _tmp92;
  const Scalar _tmp148 = _tmp138 * _tmp147;
  const Scalar _tmp149 = -_tmp127 * _tmp147 + Scalar(1.0);
  const Scalar _tmp150 = _tmp127 * _tmp92;
  const Scalar _tmp151 = _tmp121 * _tmp95 * (_tmp146 * _tmp149 + _tmp150 * _tmp86);
  const Scalar _tmp152 = -_tmp107 * _tmp147 - _tmp53;
  const Scalar _tmp153 = _tmp107 * _tmp92;
  const Scalar _tmp154 = _tmp115 * _tmp95 * (_tmp146 * _tmp152 + _tmp153 * _tmp86 + Scalar(1.0));
  const Scalar _tmp155 = _tmp122 * _tmp95 * (-_tmp118 * _tmp146 * _tmp88 + _tmp118 * _tmp86);
  const Scalar _tmp156 = -_tmp135 * _tmp95 * (_tmp145 * _tmp86 - _tmp146 * _tmp148) -
                         _tmp151 * fh1 - _tmp154 * fh1 - _tmp155 * fh1;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp144 * _tmp157);
  const Scalar _tmp159 = Scalar(1.0) * _tmp158;
  const Scalar _tmp160 = _tmp115 * _tmp130;
  const Scalar _tmp161 = _tmp121 * _tmp130;
  const Scalar _tmp162 = std::pow(_tmp156, Scalar(-2));
  const Scalar _tmp163 = -_tmp151 - _tmp154 - _tmp155;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = (-_tmp144 * _tmp164 + _tmp157 * (_tmp116 + _tmp124 + _tmp129 +
                                                          _tmp134 * _tmp160 - _tmp143 * _tmp161)) /
                         std::sqrt(Scalar(std::pow(_tmp144, Scalar(2)) * _tmp162 + 1));
  const Scalar _tmp166 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp156;
  const Scalar _tmp168 = Scalar(0.1034955) * _tmp157;
  const Scalar _tmp169 =
      -_tmp158 * _tmp167 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp46), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp51 - 1), Scalar(2))));
  const Scalar _tmp170 = _tmp168 * _tmp169;
  const Scalar _tmp171 = _tmp121 * _tmp149 * _tmp63;
  const Scalar _tmp172 = _tmp100 * _tmp123;
  const Scalar _tmp173 = _tmp172 * fh1;
  const Scalar _tmp174 = _tmp63 * _tmp88;
  const Scalar _tmp175 = _tmp115 * _tmp152 * _tmp63;
  const Scalar _tmp176 =
      -_tmp135 * _tmp148 * _tmp63 + _tmp171 * fh1 - _tmp173 * _tmp174 + _tmp175 * fh1;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp109 * _tmp115 * _tmp71;
  const Scalar _tmp179 = _tmp142 * _tmp71;
  const Scalar _tmp180 = _tmp120 * _tmp122 * _tmp71;
  const Scalar _tmp181 = _tmp121 * _tmp128 * _tmp71;
  const Scalar _tmp182 = _tmp111 * _tmp132;
  const Scalar _tmp183 = -_tmp103 * _tmp182 * _tmp71 + _tmp135 * _tmp139 * _tmp71 +
                         _tmp140 * _tmp179 + _tmp178 * fh1 + _tmp180 * fh1 + _tmp181 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp177 * _tmp183);
  const Scalar _tmp185 = Scalar(1.0) * _tmp184;
  const Scalar _tmp186 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp187 = _tmp171 - _tmp172 * _tmp174 + _tmp175;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 =
      (_tmp177 * (-_tmp133 * _tmp160 - _tmp161 * _tmp179 + _tmp178 + _tmp180 + _tmp181) -
       _tmp183 * _tmp188) /
      std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp186 + 1));
  const Scalar _tmp190 = Scalar(9.6622558468725703) * _tmp184;
  const Scalar _tmp191 =
      -_tmp176 * _tmp190 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp55), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp58), Scalar(2))));
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp193 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp194 = _tmp191 * _tmp193;
  const Scalar _tmp195 = _tmp105 * _tmp121 * _tmp126;
  const Scalar _tmp196 = _tmp102 * _tmp105 * _tmp115;
  const Scalar _tmp197 = _tmp117 * _tmp122;
  const Scalar _tmp198 = _tmp135 * _tmp137 - _tmp140 * _tmp141 + _tmp182 - _tmp195 * fh1 -
                         _tmp196 * fh1 - _tmp197 * fh1;
  const Scalar _tmp199 = _tmp115 * _tmp153;
  const Scalar _tmp200 = _tmp121 * _tmp150;
  const Scalar _tmp201 = _tmp135 * _tmp145 + _tmp173 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp203 = std::asinh(_tmp198 * _tmp202);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp206 = _tmp172 + _tmp199 + _tmp200;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = (-_tmp198 * _tmp207 + _tmp202 * (_tmp111 * _tmp160 + _tmp141 * _tmp161 -
                                                          _tmp195 - _tmp196 - _tmp197)) /
                         std::sqrt(Scalar(std::pow(_tmp198, Scalar(2)) * _tmp205 + 1));
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp201;
  const Scalar _tmp210 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp211 = Scalar(0.1034955) * _tmp202;
  const Scalar _tmp212 =
      -_tmp201 * _tmp210 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp80 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp83 - 1), Scalar(2))));
  const Scalar _tmp213 = _tmp211 * _tmp212;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::cosh(_tmp3) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp37 - _tmp33) -
            _tmp34 * _tmp36) *
               std::cosh(_tmp35)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp3) -
      Scalar(9.6622558468725703) * std::sinh(_tmp35);
  _res(1, 0) = _tmp166 * (-std::sinh(_tmp159) - std::sinh(_tmp170)) +
               _tmp167 * (-Scalar(1.0) * _tmp165 * std::cosh(_tmp159) -
                          (-Scalar(0.1034955) * _tmp164 * _tmp169 +
                           _tmp168 * (-_tmp158 * _tmp166 - _tmp165 * _tmp167)) *
                              std::cosh(_tmp170));
  _res(2, 0) = Scalar(9.6622558468725703) * _tmp187 * (-std::sinh(_tmp185) - std::sinh(_tmp194)) +
               _tmp192 * (-Scalar(1.0) * _tmp189 * std::cosh(_tmp185) -
                          (-Scalar(0.1034955) * _tmp188 * _tmp191 +
                           _tmp193 * (-_tmp187 * _tmp190 - _tmp189 * _tmp192)) *
                              std::cosh(_tmp194));
  _res(3, 0) = Scalar(9.6622558468725703) * _tmp206 * (-std::sinh(_tmp204) - std::sinh(_tmp213)) +
               _tmp209 * (-Scalar(1.0) * _tmp208 * std::cosh(_tmp204) -
                          (-Scalar(0.1034955) * _tmp207 * _tmp212 +
                           _tmp211 * (-_tmp206 * _tmp210 - _tmp208 * _tmp209)) *
                              std::cosh(_tmp213));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym