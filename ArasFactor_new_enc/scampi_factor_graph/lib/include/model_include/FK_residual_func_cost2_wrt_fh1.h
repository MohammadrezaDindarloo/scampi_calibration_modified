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
 * Symbolic function: FK_residual_func_cost2_wrt_fh1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     encoder: Matrix41
 *     pulley: Matrix43
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost2WrtFh1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Eigen::Matrix<Scalar, 4, 1>& encoder, const Eigen::Matrix<Scalar, 4, 3>& pulley,
    const Scalar epsilon) {
  // Total ops: 623

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (217)
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
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp10 * _tmp8;
  const Scalar _tmp12 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp13 = -_tmp12;
  const Scalar _tmp14 = _tmp6 * _tmp8;
  const Scalar _tmp15 = _tmp10 * _tmp4;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = _tmp17 - _tmp20;
  const Scalar _tmp22 = _tmp13 + _tmp21;
  const Scalar _tmp23 = _tmp22 + position_vector(1, 0);
  const Scalar _tmp24 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = 2 * _tmp4 * _tmp8;
  const Scalar _tmp28 = _tmp6 * _tmp9;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp32 = _tmp30 - _tmp31;
  const Scalar _tmp33 = _tmp26 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp35 = Scalar(9.6622558468725703) * _tmp2;
  const Scalar _tmp36 =
      -Scalar(0.1034955) * _tmp35 * fh1 -
      Scalar(0.1034955) * std::sqrt(Scalar(std::pow(Scalar(-_tmp23 + pulley(0, 1)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp34 + pulley(0, 0)), Scalar(2))));
  const Scalar _tmp37 = _tmp0 * _tmp36;
  const Scalar _tmp38 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp38 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp25 + _tmp32;
  const Scalar _tmp41 = _tmp12 + _tmp21;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 - pulley(1, 1);
  const Scalar _tmp44 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 - pulley(1, 0);
  const Scalar _tmp46 =
      std::sqrt(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp45, Scalar(2))));
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp49 = _tmp46 * _tmp48;
  const Scalar _tmp50 = _tmp49 * (_tmp40 * _tmp43 * _tmp47 - _tmp41 * _tmp45 * _tmp47);
  const Scalar _tmp51 = _tmp17 + _tmp20;
  const Scalar _tmp52 = _tmp12 + _tmp51;
  const Scalar _tmp53 = _tmp30 + _tmp31;
  const Scalar _tmp54 = _tmp25 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - pulley(2, 0);
  const Scalar _tmp57 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 - pulley(2, 1);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp56 * _tmp59;
  const Scalar _tmp61 = _tmp58 * _tmp59;
  const Scalar _tmp62 = _tmp50 * _tmp60 + _tmp52 * _tmp60 - _tmp54 * _tmp61;
  const Scalar _tmp63 = _tmp43 * _tmp48;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp60 * _tmp63 - _tmp61);
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = Scalar(0.20999999999999999) * _tmp27 - Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp67 = -Scalar(0.010999999999999999) * _tmp18 -
                        Scalar(0.010999999999999999) * _tmp24 + Scalar(-0.010999999999999999);
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp69 = _tmp67 + _tmp68;
  const Scalar _tmp70 = _tmp66 + _tmp69;
  const Scalar _tmp71 = _tmp67 - _tmp68;
  const Scalar _tmp72 = _tmp66 + _tmp71;
  const Scalar _tmp73 = _tmp60 * _tmp72;
  const Scalar _tmp74 = _tmp64 * (_tmp61 * _tmp70 - _tmp63 * _tmp73);
  const Scalar _tmp75 = _tmp63 * _tmp72 + _tmp63 * _tmp74;
  const Scalar _tmp76 = Scalar(1.0) * _tmp41;
  const Scalar _tmp77 = -_tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp52 + _tmp77);
  const Scalar _tmp79 = Scalar(1.0) * _tmp40;
  const Scalar _tmp80 = _tmp78 * (-_tmp54 + _tmp79);
  const Scalar _tmp81 = -_tmp60 * _tmp70 + _tmp73;
  const Scalar _tmp82 = _tmp65 * _tmp81 - _tmp72 - _tmp75 * _tmp80;
  const Scalar _tmp83 = _tmp13 + _tmp51;
  const Scalar _tmp84 = _tmp83 + position_vector(1, 0);
  const Scalar _tmp85 = _tmp84 - pulley(3, 1);
  const Scalar _tmp86 = _tmp26 + _tmp53;
  const Scalar _tmp87 = _tmp86 + position_vector(0, 0);
  const Scalar _tmp88 = _tmp87 - pulley(3, 0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp85, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp85 * _tmp89;
  const Scalar _tmp91 = _tmp88 * _tmp89;
  const Scalar _tmp92 = _tmp63 * _tmp91 - _tmp90;
  const Scalar _tmp93 = _tmp64 * _tmp92;
  const Scalar _tmp94 = _tmp72 * _tmp91;
  const Scalar _tmp95 = -_tmp66;
  const Scalar _tmp96 = _tmp69 + _tmp95;
  const Scalar _tmp97 = -_tmp63 * _tmp94 - _tmp74 * _tmp92 + _tmp90 * _tmp96;
  const Scalar _tmp98 = -_tmp80 * _tmp97 - _tmp81 * _tmp93 - _tmp91 * _tmp96 + _tmp94;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = _tmp50 * _tmp91 - _tmp62 * _tmp93 + _tmp83 * _tmp91 - _tmp86 * _tmp90;
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp98;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp82 - _tmp50 + _tmp62 * _tmp65);
  const Scalar _tmp105 = _tmp104 + _tmp82;
  const Scalar _tmp106 = _tmp92 * _tmp99;
  const Scalar _tmp107 = -_tmp105 * _tmp106 - _tmp63;
  const Scalar _tmp108 = _tmp60 * _tmp64;
  const Scalar _tmp109 = _tmp105 * _tmp99;
  const Scalar _tmp110 = _tmp34 - pulley(0, 0);
  const Scalar _tmp111 = _tmp23 - pulley(0, 1);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp49 * (_tmp107 * _tmp108 + _tmp109 * _tmp91 + Scalar(1.0));
  const Scalar _tmp115 = _tmp111 * _tmp112;
  const Scalar _tmp116 = -_tmp113 * _tmp22 + _tmp115 * _tmp33;
  const Scalar _tmp117 = Scalar(1.0) * _tmp102;
  const Scalar _tmp118 = _tmp116 * _tmp49 * (-_tmp117 * _tmp60 * _tmp93 + _tmp117 * _tmp91);
  const Scalar _tmp119 = Scalar(1.0) * _tmp64;
  const Scalar _tmp120 = Scalar(1.0) * _tmp74;
  const Scalar _tmp121 = -_tmp119 * _tmp81 + _tmp120 * _tmp80;
  const Scalar _tmp122 = _tmp103 * (-_tmp101 * _tmp121 - _tmp119 * _tmp62);
  const Scalar _tmp123 = _tmp121 + _tmp122;
  const Scalar _tmp124 = -_tmp106 * _tmp123 + Scalar(1.0);
  const Scalar _tmp125 = _tmp123 * _tmp99;
  const Scalar _tmp126 = _tmp115 * _tmp49 * (_tmp108 * _tmp124 + _tmp125 * _tmp91);
  const Scalar _tmp127 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp128 = _tmp76 * _tmp80 + _tmp79;
  const Scalar _tmp129 = 0;
  const Scalar _tmp130 = _tmp106 * _tmp129;
  const Scalar _tmp131 = _tmp129 * _tmp99;
  const Scalar _tmp132 = -_tmp114 * fh1 - _tmp118 * fh1 - _tmp126 * fh1 -
                         _tmp127 * _tmp49 * (-_tmp108 * _tmp130 + _tmp131 * _tmp91);
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp77 + _tmp83;
  const Scalar _tmp135 = _tmp134 * _tmp80;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 + _tmp79 - _tmp86);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp103 * _tmp137;
  const Scalar _tmp139 = -_tmp117 * _tmp97 + _tmp134 * _tmp138;
  const Scalar _tmp140 = Scalar(1.0) * _tmp78;
  const Scalar _tmp141 = Scalar(1.0) * _tmp116;
  const Scalar _tmp142 = _tmp141 * (_tmp138 - _tmp139 * _tmp140);
  const Scalar _tmp143 = _tmp71 + _tmp95;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = _tmp113 * _tmp144 + Scalar(5.1796800000000003) * _tmp29 + _tmp33 * fv1;
  const Scalar _tmp146 = _tmp134 * _tmp78;
  const Scalar _tmp147 = Scalar(1.0) * _tmp137 * _tmp146 - Scalar(1.0) * _tmp137;
  const Scalar _tmp148 = _tmp128 * _tmp136;
  const Scalar _tmp149 = -_tmp131 * _tmp97 - _tmp134 * _tmp148 + _tmp77;
  const Scalar _tmp150 = _tmp97 * _tmp99;
  const Scalar _tmp151 = _tmp134 * _tmp136;
  const Scalar _tmp152 = -_tmp120 + _tmp122 * _tmp151 - _tmp123 * _tmp150;
  const Scalar _tmp153 = Scalar(1.0) * _tmp115 * (_tmp122 * _tmp137 - _tmp140 * _tmp152);
  const Scalar _tmp154 = _tmp104 * _tmp151 - _tmp105 * _tmp150 + _tmp75;
  const Scalar _tmp155 = Scalar(1.0) * _tmp113 * (_tmp104 * _tmp137 - _tmp140 * _tmp154);
  const Scalar _tmp156 = -_tmp115 * _tmp144 - Scalar(5.1796800000000003) * _tmp16 - _tmp22 * fv1;
  const Scalar _tmp157 = _tmp135 * _tmp137 + Scalar(1.0);
  const Scalar _tmp158 = _tmp137 * _tmp80;
  const Scalar _tmp159 = -Scalar(1.0) * _tmp140 * _tmp157 + Scalar(1.0) * _tmp158;
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp127 * (-_tmp128 * _tmp137 - _tmp140 * _tmp149 + Scalar(1.0)) +
      _tmp142 * fh1 + _tmp145 * _tmp147 + _tmp153 * fh1 + _tmp155 * fh1 + _tmp156 * _tmp159;
  const Scalar _tmp161 = std::asinh(_tmp133 * _tmp160);
  const Scalar _tmp162 = Scalar(1.0) * _tmp161;
  const Scalar _tmp163 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp164 = -_tmp114 - _tmp118 - _tmp126;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = _tmp113 * _tmp143;
  const Scalar _tmp167 = _tmp115 * _tmp143;
  const Scalar _tmp168 =
      (_tmp133 * (_tmp142 + _tmp147 * _tmp166 + _tmp153 + _tmp155 - _tmp159 * _tmp167) -
       _tmp160 * _tmp165) /
      std::sqrt(Scalar(std::pow(_tmp160, Scalar(2)) * _tmp163 + 1));
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp170 = Scalar(9.6622558468725703) * _tmp132;
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp133;
  const Scalar _tmp172 =
      -_tmp161 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + pulley(1, 1)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + pulley(1, 0)), Scalar(2))));
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = _tmp157 * _tmp78;
  const Scalar _tmp175 = _tmp137 * _tmp145;
  const Scalar _tmp176 = _tmp115 * _tmp152 * _tmp78;
  const Scalar _tmp177 = _tmp116 * _tmp139 * _tmp78;
  const Scalar _tmp178 = _tmp113 * _tmp78;
  const Scalar _tmp179 = _tmp154 * _tmp178;
  const Scalar _tmp180 = _tmp127 * _tmp149 * _tmp78 - _tmp146 * _tmp175 + _tmp156 * _tmp174 +
                         _tmp176 * fh1 + _tmp177 * fh1 + _tmp179 * fh1;
  const Scalar _tmp181 = _tmp115 * _tmp124 * _tmp64;
  const Scalar _tmp182 = _tmp102 * _tmp141;
  const Scalar _tmp183 = _tmp182 * fh1;
  const Scalar _tmp184 = _tmp107 * _tmp113 * _tmp64;
  const Scalar _tmp185 =
      -_tmp127 * _tmp130 * _tmp64 + _tmp181 * fh1 - _tmp183 * _tmp93 + _tmp184 * fh1;
  const Scalar _tmp186 = Scalar(1.0) / (_tmp185);
  const Scalar _tmp187 = std::asinh(_tmp180 * _tmp186);
  const Scalar _tmp188 = Scalar(1.0) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp185, Scalar(-2));
  const Scalar _tmp190 = _tmp181 - _tmp182 * _tmp93 + _tmp184;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 =
      (-_tmp180 * _tmp191 + _tmp186 * (-_tmp134 * _tmp137 * _tmp143 * _tmp178 - _tmp167 * _tmp174 +
                                       _tmp176 + _tmp177 + _tmp179)) /
      std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp185;
  const Scalar _tmp194 =
      -_tmp187 * _tmp193 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + pulley(2, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp57 + pulley(2, 1)), Scalar(2))));
  const Scalar _tmp195 = Scalar(0.1034955) * _tmp186;
  const Scalar _tmp196 = _tmp194 * _tmp195;
  const Scalar _tmp197 = Scalar(9.6622558468725703) * _tmp190;
  const Scalar _tmp198 = _tmp109 * _tmp113;
  const Scalar _tmp199 = _tmp115 * _tmp125;
  const Scalar _tmp200 = _tmp127 * _tmp131 + _tmp183 + _tmp198 * fh1 + _tmp199 * fh1;
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = _tmp115 * _tmp122 * _tmp136;
  const Scalar _tmp203 = _tmp116 * _tmp138;
  const Scalar _tmp204 = _tmp104 * _tmp113 * _tmp136;
  const Scalar _tmp205 = _tmp127 * _tmp148 - _tmp156 * _tmp158 + _tmp175 - _tmp202 * fh1 -
                         _tmp203 * fh1 - _tmp204 * fh1;
  const Scalar _tmp206 = std::asinh(_tmp201 * _tmp205);
  const Scalar _tmp207 = Scalar(1.0) * _tmp206;
  const Scalar _tmp208 = std::pow(_tmp200, Scalar(-2));
  const Scalar _tmp209 = _tmp182 + _tmp198 + _tmp199;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 =
      (_tmp201 * (_tmp137 * _tmp166 + _tmp158 * _tmp167 - _tmp202 - _tmp203 - _tmp204) -
       _tmp205 * _tmp210) /
      std::sqrt(Scalar(std::pow(_tmp205, Scalar(2)) * _tmp208 + 1));
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp209;
  const Scalar _tmp213 = Scalar(9.6622558468725703) * _tmp200;
  const Scalar _tmp214 = Scalar(0.1034955) * _tmp201;
  const Scalar _tmp215 =
      -_tmp206 * _tmp213 - std::sqrt(Scalar(std::pow(Scalar(-_tmp84 + pulley(3, 1)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp87 + pulley(3, 0)), Scalar(2))));
  const Scalar _tmp216 = _tmp214 * _tmp215;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp38 * _tmp39 * fv1 * std::cosh(_tmp3) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp1 * _tmp39 - _tmp35) -
            _tmp36 * _tmp38) *
               std::cosh(_tmp37)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp3) -
      Scalar(9.6622558468725703) * std::sinh(_tmp37);
  _res(1, 0) = _tmp169 * (-std::sinh(_tmp162) - std::sinh(_tmp173)) +
               _tmp170 * (-Scalar(1.0) * _tmp168 * std::cosh(_tmp162) -
                          (-Scalar(0.1034955) * _tmp165 * _tmp172 +
                           _tmp171 * (-_tmp161 * _tmp169 - _tmp168 * _tmp170)) *
                              std::cosh(_tmp173));
  _res(2, 0) = _tmp193 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp188) -
                          (-Scalar(0.1034955) * _tmp191 * _tmp194 +
                           _tmp195 * (-_tmp187 * _tmp197 - _tmp192 * _tmp193)) *
                              std::cosh(_tmp196)) +
               _tmp197 * (-std::sinh(_tmp188) - std::sinh(_tmp196));
  _res(3, 0) = _tmp212 * (-std::sinh(_tmp207) - std::sinh(_tmp216)) +
               _tmp213 * (-Scalar(1.0) * _tmp211 * std::cosh(_tmp207) -
                          (-Scalar(0.1034955) * _tmp210 * _tmp215 +
                           _tmp214 * (-_tmp206 * _tmp212 - _tmp211 * _tmp213)) *
                              std::cosh(_tmp216));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
