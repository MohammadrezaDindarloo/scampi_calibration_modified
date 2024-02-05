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
 * Symbolic function: IK_residual_func_cost1_wrt_fv1_Nl5
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFv1Nl5(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 607

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (192)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(1.0) * _tmp0 /
                       std::sqrt(Scalar(1 + std::pow(fv1, Scalar(2)) / std::pow(fh1, Scalar(2))));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp13 = _tmp12 * _tmp5;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 * _tmp5;
  const Scalar _tmp16 = _tmp12 * _tmp3;
  const Scalar _tmp17 = _tmp15 - _tmp16;
  const Scalar _tmp18 = Scalar(0.010999999999999999) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = -_tmp14 + _tmp19;
  const Scalar _tmp21 = _tmp20 + _tmp8;
  const Scalar _tmp22 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp23 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = -_tmp24;
  const Scalar _tmp26 = 2 * _tmp3 * _tmp5;
  const Scalar _tmp27 = _tmp12 * _tmp9;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp31 = _tmp29 - _tmp30;
  const Scalar _tmp32 = _tmp25 + _tmp31;
  const Scalar _tmp33 = _tmp32 + position_vector(0, 0);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = _tmp20 + _tmp7;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = _tmp36 + Scalar(-4.83288938413423);
  const Scalar _tmp38 = _tmp29 + _tmp30;
  const Scalar _tmp39 = _tmp25 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(0, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(1.7965602546229);
  const Scalar _tmp42 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp43 = _tmp37 * _tmp42;
  const Scalar _tmp44 =
      std::sqrt(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))));
  const Scalar _tmp45 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp46 = _tmp42 * _tmp44;
  const Scalar _tmp47 = _tmp46 * (-_tmp35 * _tmp41 * _tmp45 + _tmp37 * _tmp39 * _tmp45);
  const Scalar _tmp48 = _tmp24 + _tmp38;
  const Scalar _tmp49 = _tmp14 + _tmp7;
  const Scalar _tmp50 = _tmp19 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(-4.7744369927459998);
  const Scalar _tmp53 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 + Scalar(-2.7171519410699099);
  const Scalar _tmp55 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp54, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp56 = _tmp52 * _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp55;
  const Scalar _tmp58 = _tmp47 * _tmp57 - _tmp48 * _tmp56 + _tmp50 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp43 * _tmp57 - _tmp56);
  const Scalar _tmp60 = _tmp43 * _tmp59;
  const Scalar _tmp61 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp62 = -_tmp61;
  const Scalar _tmp63 = -Scalar(0.010999999999999999) * _tmp23 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp65 = _tmp63 + _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = _tmp61 + _tmp65;
  const Scalar _tmp68 = _tmp57 * _tmp66;
  const Scalar _tmp69 = _tmp59 * (-_tmp43 * _tmp68 + _tmp56 * _tmp67);
  const Scalar _tmp70 = _tmp43 * _tmp66 + _tmp43 * _tmp69;
  const Scalar _tmp71 = Scalar(1.0) * _tmp35;
  const Scalar _tmp72 = -_tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp50 + _tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp39;
  const Scalar _tmp75 = _tmp73 * (-_tmp48 + _tmp74);
  const Scalar _tmp76 = -_tmp57 * _tmp67 + _tmp68;
  const Scalar _tmp77 = _tmp60 * _tmp76 - _tmp66 - _tmp70 * _tmp75;
  const Scalar _tmp78 = _tmp14 + _tmp19 + _tmp8;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 + Scalar(8.3885017487099702);
  const Scalar _tmp81 = _tmp24 + _tmp31;
  const Scalar _tmp82 = _tmp81 + position_vector(0, 0);
  const Scalar _tmp83 = _tmp82 + Scalar(-2.5193355532036801);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp83 * _tmp84;
  const Scalar _tmp86 = _tmp66 * _tmp85;
  const Scalar _tmp87 = _tmp63 - _tmp64;
  const Scalar _tmp88 = _tmp61 + _tmp87;
  const Scalar _tmp89 = _tmp80 * _tmp84;
  const Scalar _tmp90 = _tmp43 * _tmp85 - _tmp89;
  const Scalar _tmp91 = _tmp59 * _tmp90;
  const Scalar _tmp92 = -_tmp43 * _tmp86 - _tmp69 * _tmp90 + _tmp88 * _tmp89;
  const Scalar _tmp93 = -_tmp75 * _tmp92 - _tmp76 * _tmp91 - _tmp85 * _tmp88 + _tmp86;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp47 * _tmp85 - _tmp58 * _tmp91 + _tmp78 * _tmp85 - _tmp81 * _tmp89;
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp93 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp47 + _tmp58 * _tmp60 - _tmp77 * _tmp96);
  const Scalar _tmp100 = _tmp77 + _tmp99;
  const Scalar _tmp101 = _tmp90 * _tmp94;
  const Scalar _tmp102 = -_tmp100 * _tmp101 - _tmp43;
  const Scalar _tmp103 = _tmp57 * _tmp59;
  const Scalar _tmp104 = _tmp85 * _tmp94;
  const Scalar _tmp105 = _tmp33 + Scalar(1.9874742031097401);
  const Scalar _tmp106 = _tmp22 + Scalar(8.3196563720703107);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = Scalar(1.0) * _tmp59;
  const Scalar _tmp111 = Scalar(1.0) * _tmp69;
  const Scalar _tmp112 = -_tmp110 * _tmp76 + _tmp111 * _tmp75;
  const Scalar _tmp113 = _tmp98 * (-_tmp110 * _tmp58 - _tmp112 * _tmp96);
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = -_tmp101 * _tmp114 + Scalar(1.0);
  const Scalar _tmp116 = _tmp106 * _tmp107;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp119 = _tmp71 * _tmp75 + _tmp74;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp120 * _tmp91;
  const Scalar _tmp122 = _tmp46 * (_tmp120 * _tmp85 - _tmp121 * _tmp57);
  const Scalar _tmp123 = Scalar(1.0) * _tmp97;
  const Scalar _tmp124 = fh1 * (-_tmp108 * _tmp21 + _tmp116 * _tmp32);
  const Scalar _tmp125 = -_tmp109 * _tmp46 * (_tmp100 * _tmp104 + _tmp102 * _tmp103 + Scalar(1.0)) -
                         _tmp117 * _tmp46 * (_tmp103 * _tmp115 + _tmp104 * _tmp114) -
                         _tmp118 * _tmp122 -
                         _tmp124 * _tmp46 * (-_tmp123 * _tmp57 * _tmp91 + _tmp123 * _tmp85);
  const Scalar _tmp126 = std::pow(_tmp125, Scalar(-2));
  const Scalar _tmp127 = _tmp122 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp129 = _tmp72 + _tmp78;
  const Scalar _tmp130 = _tmp129 * _tmp75;
  const Scalar _tmp131 = Scalar(1.0) / (-_tmp130 + _tmp74 - _tmp81);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp129 * _tmp131;
  const Scalar _tmp134 = _tmp92 * _tmp94;
  const Scalar _tmp135 = -_tmp111 + _tmp113 * _tmp133 - _tmp114 * _tmp134;
  const Scalar _tmp136 = Scalar(1.0) * _tmp73;
  const Scalar _tmp137 = fh1 * (_tmp62 + _tmp87);
  const Scalar _tmp138 = _tmp108 * _tmp137 + Scalar(3.29616) * _tmp28 + _tmp32 * fv1;
  const Scalar _tmp139 = _tmp129 * _tmp73;
  const Scalar _tmp140 = Scalar(1.0) * _tmp132 * _tmp139 - Scalar(1.0) * _tmp132;
  const Scalar _tmp141 = -_tmp100 * _tmp134 + _tmp133 * _tmp99 + _tmp70;
  const Scalar _tmp142 = _tmp132 * _tmp98;
  const Scalar _tmp143 = -_tmp123 * _tmp92 + _tmp129 * _tmp142;
  const Scalar _tmp144 = _tmp119 * _tmp131;
  const Scalar _tmp145 = _tmp73 * (-_tmp120 * _tmp92 - _tmp129 * _tmp144 + _tmp72);
  const Scalar _tmp146 = -Scalar(1.0) * _tmp119 * _tmp132 - Scalar(1.0) * _tmp145 + Scalar(1.0);
  const Scalar _tmp147 = -_tmp116 * _tmp137 - Scalar(3.29616) * _tmp17 - _tmp21 * fv1;
  const Scalar _tmp148 = _tmp73 * (_tmp130 * _tmp132 + Scalar(1.0));
  const Scalar _tmp149 = _tmp132 * _tmp75;
  const Scalar _tmp150 = -Scalar(1.0) * _tmp148 + Scalar(1.0) * _tmp149;
  const Scalar _tmp151 = Scalar(1.0) * _tmp109 * (_tmp132 * _tmp99 - _tmp136 * _tmp141) +
                         Scalar(1.0) * _tmp117 * (_tmp113 * _tmp132 - _tmp135 * _tmp136) +
                         _tmp118 * _tmp146 +
                         Scalar(1.0) * _tmp124 * (-_tmp136 * _tmp143 + _tmp142) +
                         _tmp138 * _tmp140 + _tmp147 * _tmp150;
  const Scalar _tmp152 = std::asinh(_tmp128 * _tmp151);
  const Scalar _tmp153 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp154 =
      -_tmp152 * _tmp153 -
      Scalar(4.83288938413423) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.20691555724053495) * _tmp36), Scalar(2)) +
                     Scalar(0.13818785160942856) *
                         std::pow(Scalar(-Scalar(0.55661923802822921) * _tmp40 - 1), Scalar(2))));
  const Scalar _tmp155 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = _tmp18 + _tmp49;
  const Scalar _tmp158 =
      (-_tmp127 * _tmp151 + _tmp128 * (_tmp140 * _tmp32 - _tmp146 + _tmp150 * _tmp157)) /
      std::sqrt(Scalar(_tmp126 * std::pow(_tmp151, Scalar(2)) + 1));
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp122;
  const Scalar _tmp160 = Scalar(1.0) * _tmp152;
  const Scalar _tmp161 = _tmp132 * _tmp138;
  const Scalar _tmp162 = _tmp109 * _tmp141 * _tmp73 + _tmp117 * _tmp135 * _tmp73 +
                         _tmp118 * _tmp145 + _tmp124 * _tmp143 * _tmp73 - _tmp139 * _tmp161 +
                         _tmp147 * _tmp148;
  const Scalar _tmp163 = _tmp123 * _tmp124;
  const Scalar _tmp164 = _tmp118 * _tmp120;
  const Scalar _tmp165 =
      _tmp102 * _tmp109 * _tmp59 + _tmp115 * _tmp117 * _tmp59 - _tmp163 * _tmp91 - _tmp164 * _tmp91;
  const Scalar _tmp166 = Scalar(1.0) / (_tmp165);
  const Scalar _tmp167 = std::asinh(_tmp162 * _tmp166);
  const Scalar _tmp168 = Scalar(1.0) * _tmp167;
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp165;
  const Scalar _tmp170 =
      -_tmp167 * _tmp169 -
      Scalar(4.7744369927459998) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.2094487793051498) * _tmp51), Scalar(2)) +
                     Scalar(0.32387954179207445) *
                         std::pow(Scalar(1 - Scalar(0.36803241838814449) * _tmp53), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp166;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp120;
  const Scalar _tmp174 = _tmp173 * _tmp91;
  const Scalar _tmp175 = std::pow(_tmp165, Scalar(-2));
  const Scalar _tmp176 = _tmp121 * _tmp175;
  const Scalar _tmp177 = _tmp132 * _tmp32;
  const Scalar _tmp178 =
      (-_tmp162 * _tmp176 + _tmp166 * (-_tmp139 * _tmp177 - _tmp145 + _tmp148 * _tmp157)) /
      std::sqrt(Scalar(std::pow(_tmp162, Scalar(2)) * _tmp175 + 1));
  const Scalar _tmp179 = _tmp94 * fh1;
  const Scalar _tmp180 =
      _tmp100 * _tmp108 * _tmp179 + _tmp114 * _tmp116 * _tmp179 + _tmp163 + _tmp164;
  const Scalar _tmp181 = std::pow(_tmp180, Scalar(-2));
  const Scalar _tmp182 = _tmp120 * _tmp181;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp180);
  const Scalar _tmp184 = -_tmp109 * _tmp131 * _tmp99 - _tmp113 * _tmp117 * _tmp131 +
                         _tmp118 * _tmp144 - _tmp124 * _tmp142 - _tmp147 * _tmp149 + _tmp161;
  const Scalar _tmp185 = std::asinh(_tmp183 * _tmp184);
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp180;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 -
      Scalar(8.3885017487099702) *
          std::sqrt(
              Scalar(Scalar(0.090199313518583735) *
                         std::pow(Scalar(1 - Scalar(0.39693005512043167) * _tmp82), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.11921079949155229) * _tmp79 - 1), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp183;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = (_tmp182 * _tmp184 + _tmp183 * (-_tmp144 - _tmp149 * _tmp157 + _tmp177)) /
                         std::sqrt(Scalar(_tmp181 * std::pow(_tmp184, Scalar(2)) + 1));
  const Scalar _tmp191 = Scalar(1.0) * _tmp185;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp34 *
      (_tmp2 * std::sinh(Scalar(1.0) * _tmp1) +
       _tmp2 * std::sinh(
                   Scalar(0.1034955) * _tmp0 *
                   (-_tmp1 * _tmp34 -
                    Scalar(8.3196563720703107) *
                        std::sqrt(Scalar(
                            std::pow(Scalar(-Scalar(0.12019727201198747) * _tmp22 - 1), Scalar(2)) +
                            Scalar(0.057067943527034905) *
                                std::pow(Scalar(-Scalar(0.50315118477277876) * _tmp33 - 1),
                                         Scalar(2)))))));
  _res(1, 0) =
      -_tmp153 *
          (-Scalar(0.86627065637365697) * _tmp127 + Scalar(1.0) * _tmp158 * std::sinh(_tmp160) -
           (-Scalar(0.1034955) * _tmp127 * _tmp154 +
            _tmp155 * (-_tmp152 * _tmp159 - _tmp153 * _tmp158)) *
               std::sinh(_tmp156)) -
      _tmp159 * (Scalar(0.86627065637365697) * _tmp128 - std::cosh(_tmp156) + std::cosh(_tmp160));
  _res(2, 0) =
      -_tmp169 *
          (-Scalar(0.86564762886483004) * _tmp176 + Scalar(1.0) * _tmp178 * std::sinh(_tmp168) -
           (-Scalar(0.1034955) * _tmp170 * _tmp176 +
            _tmp171 * (-_tmp167 * _tmp174 - _tmp169 * _tmp178)) *
               std::sinh(_tmp172)) -
      _tmp174 * (Scalar(0.86564762886483004) * _tmp166 + std::cosh(_tmp168) - std::cosh(_tmp172));
  _res(3, 0) =
      _tmp173 * (Scalar(0.876505537412406) * _tmp183 - std::cosh(_tmp189) + std::cosh(_tmp191)) -
      _tmp186 * (Scalar(0.876505537412406) * _tmp182 + Scalar(1.0) * _tmp190 * std::sinh(_tmp191) -
                 (Scalar(0.1034955) * _tmp182 * _tmp187 +
                  _tmp188 * (_tmp173 * _tmp185 - _tmp186 * _tmp190)) *
                     std::sinh(_tmp189));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
