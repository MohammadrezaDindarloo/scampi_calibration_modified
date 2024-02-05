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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl17
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 656

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (213)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp1 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp3;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp1 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = _tmp1 * _tmp12;
  const Scalar _tmp21 = _tmp6 * _tmp8;
  const Scalar _tmp22 = _tmp20 - _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp24 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp26 = _tmp23 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp0 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -_tmp31 * fh1 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp18), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp28), Scalar(2))));
  const Scalar _tmp33 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = Scalar(1.0) * _tmp30;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp43 = _tmp41 - _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = -_tmp5;
  const Scalar _tmp46 = _tmp11 - _tmp15;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(1.9874742031097401);
  const Scalar _tmp50 = -_tmp19;
  const Scalar _tmp51 = _tmp23 - _tmp25;
  const Scalar _tmp52 = _tmp50 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 + Scalar(8.3196563720703107);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp49 * _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp55;
  const Scalar _tmp58 = _tmp41 + _tmp42;
  const Scalar _tmp59 = _tmp40 + _tmp58;
  const Scalar _tmp60 = _tmp19 + _tmp51;
  const Scalar _tmp61 = _tmp60 + position_vector(1, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(8.3885017487099702);
  const Scalar _tmp63 = _tmp46 + _tmp5;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(-2.5193355532036801);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = _tmp39 + _tmp43;
  const Scalar _tmp69 = _tmp26 + _tmp50;
  const Scalar _tmp70 = _tmp69 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(-4.83288938413423);
  const Scalar _tmp72 = _tmp16 + _tmp45;
  const Scalar _tmp73 = _tmp72 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(1.7965602546229);
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = _tmp71 * _tmp75;
  const Scalar _tmp77 = _tmp68 * _tmp76;
  const Scalar _tmp78 = _tmp65 * _tmp66;
  const Scalar _tmp79 = _tmp59 * _tmp67 - _tmp77 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (-_tmp67 + _tmp76 * _tmp78);
  const Scalar _tmp81 = _tmp56 * _tmp76 - _tmp57;
  const Scalar _tmp82 = _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp44 * _tmp57 - _tmp56 * _tmp77 - _tmp79 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) * _tmp69;
  const Scalar _tmp85 = -_tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp60 + _tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp72;
  const Scalar _tmp88 = -_tmp63 + _tmp87;
  const Scalar _tmp89 = _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp80 * (-_tmp59 * _tmp78 + _tmp68 * _tmp78);
  const Scalar _tmp91 = -_tmp44 * _tmp56 + _tmp56 * _tmp68 - _tmp81 * _tmp90 - _tmp83 * _tmp89;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp84 * _tmp89 + _tmp87;
  const Scalar _tmp94 = 0;
  const Scalar _tmp95 = _tmp92 * _tmp94;
  const Scalar _tmp96 = _tmp78 * _tmp82;
  const Scalar _tmp97 =
      std::sqrt(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp74, Scalar(2))));
  const Scalar _tmp98 = _tmp75 * _tmp97;
  const Scalar _tmp99 = _tmp28 + Scalar(-4.7744369927459998);
  const Scalar _tmp100 = _tmp18 + Scalar(-2.7171519410699099);
  const Scalar _tmp101 =
      std::pow(Scalar(std::pow(_tmp100, Scalar(2)) + std::pow(_tmp99, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp102 = _tmp101 * _tmp99;
  const Scalar _tmp103 = _tmp100 * _tmp101;
  const Scalar _tmp104 = _tmp102 * _tmp17 - _tmp103 * _tmp27;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp106 = _tmp98 * (-_tmp105 * _tmp69 * _tmp74 + _tmp105 * _tmp71 * _tmp72);
  const Scalar _tmp107 = _tmp106 * _tmp78 + _tmp60 * _tmp78 - _tmp63 * _tmp67;
  const Scalar _tmp108 = _tmp106 * _tmp56 - _tmp107 * _tmp82 - _tmp47 * _tmp57 + _tmp52 * _tmp56;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp110 = Scalar(1.0) * _tmp109;
  const Scalar _tmp111 = _tmp104 * _tmp98 * (_tmp110 * _tmp56 - _tmp110 * _tmp96);
  const Scalar _tmp112 = Scalar(1.0) * _tmp80;
  const Scalar _tmp113 = Scalar(1.0) * _tmp86;
  const Scalar _tmp114 = _tmp113 * _tmp79 * _tmp80 * _tmp88 - Scalar(1.0) * _tmp90;
  const Scalar _tmp115 = _tmp108 * _tmp92;
  const Scalar _tmp116 = _tmp109 * _tmp91;
  const Scalar _tmp117 = _tmp116 * (-_tmp107 * _tmp112 - _tmp114 * _tmp115);
  const Scalar _tmp118 = _tmp114 + _tmp117;
  const Scalar _tmp119 = _tmp118 * _tmp92;
  const Scalar _tmp120 = _tmp80 * (-_tmp119 * _tmp81 + Scalar(1.0));
  const Scalar _tmp121 = _tmp102 * _tmp98 * (_tmp119 * _tmp56 + _tmp120 * _tmp78);
  const Scalar _tmp122 = _tmp76 * _tmp80;
  const Scalar _tmp123 = _tmp122 * _tmp79 + _tmp77;
  const Scalar _tmp124 = -_tmp123 * _tmp89 - _tmp68 + _tmp76 * _tmp90;
  const Scalar _tmp125 = _tmp116 * (-_tmp106 + _tmp107 * _tmp122 - _tmp115 * _tmp124);
  const Scalar _tmp126 = _tmp92 * (_tmp124 + _tmp125);
  const Scalar _tmp127 = _tmp80 * (-_tmp126 * _tmp81 - _tmp76);
  const Scalar _tmp128 = _tmp103 * _tmp98 * (_tmp126 * _tmp56 + _tmp127 * _tmp78 + Scalar(1.0));
  const Scalar _tmp129 = -_tmp111 * fh1 - _tmp121 * fh1 - _tmp128 * fh1 -
                         _tmp38 * _tmp98 * (_tmp56 * _tmp95 - _tmp95 * _tmp96);
  const Scalar _tmp130 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp131 = _tmp39 + _tmp58;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = Scalar(3.29616) * _tmp10 + _tmp103 * _tmp132 + _tmp17 * fv1;
  const Scalar _tmp134 = _tmp52 + _tmp85;
  const Scalar _tmp135 = _tmp134 * _tmp89;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp47 + _tmp87);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp134 * _tmp86;
  const Scalar _tmp139 = _tmp137 * _tmp138;
  const Scalar _tmp140 = -Scalar(1.0) * _tmp137 + Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp83 * _tmp92;
  const Scalar _tmp142 = _tmp136 * _tmp93;
  const Scalar _tmp143 = -_tmp134 * _tmp142 - _tmp141 * _tmp94 + _tmp85;
  const Scalar _tmp144 = -_tmp102 * _tmp132 - Scalar(3.29616) * _tmp22 - _tmp27 * fv1;
  const Scalar _tmp145 = _tmp135 * _tmp137 + Scalar(1.0);
  const Scalar _tmp146 = _tmp137 * _tmp89;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp113 * _tmp145 + Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = _tmp134 * _tmp136;
  const Scalar _tmp149 = -_tmp112 * _tmp79 + _tmp117 * _tmp148 - _tmp118 * _tmp141;
  const Scalar _tmp150 = Scalar(1.0) * _tmp102 * (-_tmp113 * _tmp149 + _tmp117 * _tmp137);
  const Scalar _tmp151 = _tmp116 * _tmp137;
  const Scalar _tmp152 = -_tmp110 * _tmp83 + _tmp134 * _tmp151;
  const Scalar _tmp153 = Scalar(1.0) * _tmp104 * (-_tmp113 * _tmp152 + _tmp151);
  const Scalar _tmp154 = _tmp123 + _tmp125 * _tmp148 - _tmp126 * _tmp83;
  const Scalar _tmp155 = Scalar(1.0) * _tmp103 * (-_tmp113 * _tmp154 + _tmp125 * _tmp137);
  const Scalar _tmp156 =
      _tmp133 * _tmp140 + _tmp144 * _tmp147 + _tmp150 * fh1 + _tmp153 * fh1 + _tmp155 * fh1 +
      Scalar(1.0) * _tmp38 * (-_tmp113 * _tmp143 - _tmp137 * _tmp93 + Scalar(1.0));
  const Scalar _tmp157 = std::asinh(_tmp130 * _tmp156);
  const Scalar _tmp158 = Scalar(1.0) * _tmp157;
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp157;
  const Scalar _tmp160 =
      -_tmp129 * _tmp159 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp70), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp73 - 1), Scalar(2))));
  const Scalar _tmp161 = Scalar(0.1034955) * _tmp130;
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = -_tmp111 - _tmp121 - _tmp128;
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp129;
  const Scalar _tmp165 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp166 = _tmp163 * _tmp165;
  const Scalar _tmp167 = _tmp102 * _tmp131;
  const Scalar _tmp168 = _tmp103 * _tmp131;
  const Scalar _tmp169 =
      (_tmp130 * (_tmp140 * _tmp168 - _tmp147 * _tmp167 + _tmp150 + _tmp153 + _tmp155) -
       _tmp156 * _tmp166) /
      std::sqrt(Scalar(std::pow(_tmp156, Scalar(2)) * _tmp165 + 1));
  const Scalar _tmp170 = _tmp102 * _tmp149 * _tmp86;
  const Scalar _tmp171 = _tmp103 * _tmp154 * _tmp86;
  const Scalar _tmp172 = _tmp145 * _tmp86;
  const Scalar _tmp173 = _tmp133 * _tmp137;
  const Scalar _tmp174 = _tmp104 * _tmp152 * _tmp86;
  const Scalar _tmp175 = -_tmp138 * _tmp173 + _tmp143 * _tmp38 * _tmp86 + _tmp144 * _tmp172 +
                         _tmp170 * fh1 + _tmp171 * fh1 + _tmp174 * fh1;
  const Scalar _tmp176 = _tmp103 * _tmp127;
  const Scalar _tmp177 = _tmp104 * _tmp110;
  const Scalar _tmp178 = _tmp177 * fh1;
  const Scalar _tmp179 = _tmp38 * _tmp95;
  const Scalar _tmp180 = _tmp102 * _tmp120;
  const Scalar _tmp181 = _tmp176 * fh1 - _tmp178 * _tmp82 - _tmp179 * _tmp82 + _tmp180 * fh1;
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = std::asinh(_tmp175 * _tmp182);
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp181;
  const Scalar _tmp185 =
      -_tmp183 * _tmp184 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp64), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp61 - 1), Scalar(2))));
  const Scalar _tmp186 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp187 = _tmp176 - _tmp177 * _tmp82 + _tmp180;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = (-_tmp175 * _tmp188 + _tmp182 * (-_tmp139 * _tmp168 - _tmp167 * _tmp172 +
                                                          _tmp170 + _tmp171 + _tmp174)) /
                         std::sqrt(Scalar(std::pow(_tmp175, Scalar(2)) * _tmp186 + 1));
  const Scalar _tmp190 = Scalar(9.6622558468725703) * _tmp187;
  const Scalar _tmp191 = Scalar(0.1034955) * _tmp182;
  const Scalar _tmp192 = _tmp185 * _tmp191;
  const Scalar _tmp193 = Scalar(1.0) * _tmp183;
  const Scalar _tmp194 = _tmp103 * _tmp125 * _tmp136;
  const Scalar _tmp195 = _tmp102 * _tmp117 * _tmp136;
  const Scalar _tmp196 = _tmp104 * _tmp151;
  const Scalar _tmp197 = _tmp142 * _tmp38 - _tmp144 * _tmp146 + _tmp173 - _tmp194 * fh1 -
                         _tmp195 * fh1 - _tmp196 * fh1;
  const Scalar _tmp198 = _tmp103 * _tmp126;
  const Scalar _tmp199 = _tmp102 * _tmp119;
  const Scalar _tmp200 = _tmp178 + _tmp179 + _tmp198 * fh1 + _tmp199 * fh1;
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = std::asinh(_tmp197 * _tmp201);
  const Scalar _tmp203 = Scalar(1.0) * _tmp202;
  const Scalar _tmp204 = std::pow(_tmp200, Scalar(-2));
  const Scalar _tmp205 = _tmp177 + _tmp198 + _tmp199;
  const Scalar _tmp206 = _tmp204 * _tmp205;
  const Scalar _tmp207 = (-_tmp197 * _tmp206 + _tmp201 * (_tmp137 * _tmp168 + _tmp146 * _tmp167 -
                                                          _tmp194 - _tmp195 - _tmp196)) /
                         std::sqrt(Scalar(std::pow(_tmp197, Scalar(2)) * _tmp204 + 1));
  const Scalar _tmp208 = Scalar(9.6622558468725703) * _tmp200;
  const Scalar _tmp209 =
      -_tmp202 * _tmp208 -
      Scalar(8.3196563720703107) *
          std::sqrt(
              Scalar(Scalar(0.057067943527034905) *
                         std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp48 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp53 - 1), Scalar(2))));
  const Scalar _tmp210 = Scalar(0.1034955) * _tmp201;
  const Scalar _tmp211 = _tmp209 * _tmp210;
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp205;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(8.3641088633305802) * _tmp0 -
               Scalar(9.6622558468725703) * fh1 *
                   (-Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::sinh(_tmp35) -
                    Scalar(0.86564762886483004) * _tmp36 -
                    (-Scalar(0.1034955) * _tmp32 * _tmp36 +
                     _tmp33 * (Scalar(9.6622558468725703) * _tmp29 * _tmp37 - _tmp31)) *
                        std::sinh(_tmp34)) +
               Scalar(9.6622558468725703) * std::cosh(_tmp34) -
               Scalar(9.6622558468725703) * std::cosh(_tmp35);
  _res(1, 0) =
      -Scalar(9.6622558468725703) * _tmp163 *
          (Scalar(0.86627065637365697) * _tmp130 + std::cosh(_tmp158) - std::cosh(_tmp162)) -
      _tmp164 *
          (-Scalar(0.86627065637365697) * _tmp166 + Scalar(1.0) * _tmp169 * std::sinh(_tmp158) -
           (-Scalar(0.1034955) * _tmp160 * _tmp166 +
            _tmp161 * (-_tmp159 * _tmp163 - _tmp164 * _tmp169)) *
               std::sinh(_tmp162));
  _res(2, 0) =
      -_tmp184 *
          (-Scalar(0.876505537412406) * _tmp188 + Scalar(1.0) * _tmp189 * std::sinh(_tmp193) -
           (-Scalar(0.1034955) * _tmp185 * _tmp188 +
            _tmp191 * (-_tmp183 * _tmp190 - _tmp184 * _tmp189)) *
               std::sinh(_tmp192)) -
      _tmp190 * (Scalar(0.876505537412406) * _tmp182 - std::cosh(_tmp192) + std::cosh(_tmp193));
  _res(3, 0) =
      -_tmp208 *
          (-Scalar(0.87679799777269396) * _tmp206 + Scalar(1.0) * _tmp207 * std::sinh(_tmp203) -
           (-Scalar(0.1034955) * _tmp206 * _tmp209 +
            _tmp210 * (-_tmp202 * _tmp212 - _tmp207 * _tmp208)) *
               std::sinh(_tmp211)) -
      _tmp212 * (Scalar(0.87679799777269396) * _tmp201 + std::cosh(_tmp203) - std::cosh(_tmp211));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym