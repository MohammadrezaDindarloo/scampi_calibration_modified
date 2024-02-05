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
 * Symbolic function: FK_residual_func_cost4_wrt_fh1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     encoder_data: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost4WrtFh1(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& encoder_data,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const Eigen::Matrix<Scalar, 3, 1>& position_vector,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 622

  // Unused inputs
  (void)ofset0;
  (void)ofset1;
  (void)ofset2;
  (void)ofset3;
  (void)encoder_data;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (217)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp12 = _tmp2 * _tmp7;
  const Scalar _tmp13 = _tmp0 * _tmp9;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = -_tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp23 = _tmp6 * _tmp9;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_a(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp29 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp32;
  const Scalar _tmp40 = _tmp25 + _tmp26;
  const Scalar _tmp41 = _tmp20 + _tmp40;
  const Scalar _tmp42 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp43 = _tmp42 - p_c(0, 0);
  const Scalar _tmp44 = _tmp11 + _tmp15;
  const Scalar _tmp45 = _tmp4 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 - p_c(1, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp43 * _tmp48;
  const Scalar _tmp50 = _tmp20 + _tmp27;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_b(0, 0);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = _tmp44 + _tmp5;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_b(1, 0);
  const Scalar _tmp57 = _tmp53 * _tmp56;
  const Scalar _tmp58 = _tmp47 * _tmp48;
  const Scalar _tmp59 = Scalar(1.0) / (_tmp49 * _tmp57 - _tmp58);
  const Scalar _tmp60 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))));
  const Scalar _tmp61 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp62 = _tmp53 * _tmp60;
  const Scalar _tmp63 = _tmp62 * (_tmp50 * _tmp56 * _tmp61 - _tmp52 * _tmp54 * _tmp61);
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp65 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp66 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp67 = _tmp65 + _tmp66;
  const Scalar _tmp68 = _tmp64 + _tmp67;
  const Scalar _tmp69 = -_tmp64;
  const Scalar _tmp70 = _tmp67 + _tmp69;
  const Scalar _tmp71 = _tmp49 * _tmp70;
  const Scalar _tmp72 = -_tmp49 * _tmp68 + _tmp71;
  const Scalar _tmp73 = _tmp57 * _tmp59;
  const Scalar _tmp74 = _tmp57 * _tmp70;
  const Scalar _tmp75 = -_tmp57 * _tmp71 + _tmp58 * _tmp68;
  const Scalar _tmp76 = _tmp73 * _tmp75 + _tmp74;
  const Scalar _tmp77 = Scalar(1.0) * _tmp54;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp45 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp50;
  const Scalar _tmp81 = -_tmp41 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = -_tmp70 + _tmp72 * _tmp73 - _tmp76 * _tmp82;
  const Scalar _tmp84 = _tmp21 + _tmp40;
  const Scalar _tmp85 = _tmp84 + position_vector(0, 0);
  const Scalar _tmp86 = _tmp85 - p_d(0, 0);
  const Scalar _tmp87 = _tmp16 + _tmp4;
  const Scalar _tmp88 = _tmp87 + position_vector(1, 0);
  const Scalar _tmp89 = _tmp88 - p_d(1, 0);
  const Scalar _tmp90 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp89, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp91 = _tmp89 * _tmp90;
  const Scalar _tmp92 = _tmp86 * _tmp90;
  const Scalar _tmp93 = -_tmp41 * _tmp58 + _tmp45 * _tmp49 + _tmp49 * _tmp63;
  const Scalar _tmp94 = _tmp57 * _tmp92 - _tmp91;
  const Scalar _tmp95 = _tmp59 * _tmp94;
  const Scalar _tmp96 = _tmp63 * _tmp92 - _tmp84 * _tmp91 + _tmp87 * _tmp92 - _tmp93 * _tmp95;
  const Scalar _tmp97 = _tmp65 - _tmp66;
  const Scalar _tmp98 = _tmp64 + _tmp97;
  const Scalar _tmp99 = -_tmp74 * _tmp92 - _tmp75 * _tmp95 + _tmp91 * _tmp98;
  const Scalar _tmp100 = _tmp70 * _tmp92 - _tmp72 * _tmp95 - _tmp82 * _tmp99 - _tmp92 * _tmp98;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp102 = _tmp101 * _tmp96;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp104 = _tmp100 * _tmp103;
  const Scalar _tmp105 = _tmp104 * (-_tmp102 * _tmp83 - _tmp63 + _tmp73 * _tmp93);
  const Scalar _tmp106 = _tmp105 + _tmp83;
  const Scalar _tmp107 = _tmp101 * _tmp94;
  const Scalar _tmp108 = _tmp59 * (-_tmp106 * _tmp107 - _tmp57);
  const Scalar _tmp109 = _tmp101 * _tmp106;
  const Scalar _tmp110 = _tmp29 - p_a(0, 0);
  const Scalar _tmp111 = _tmp18 - p_a(1, 0);
  const Scalar _tmp112 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp111, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp62 * (_tmp108 * _tmp49 + _tmp109 * _tmp92 + Scalar(1.0));
  const Scalar _tmp115 = Scalar(1.0) * _tmp59;
  const Scalar _tmp116 = Scalar(1.0) * _tmp79;
  const Scalar _tmp117 = -_tmp115 * _tmp72 + _tmp116 * _tmp59 * _tmp75 * _tmp81;
  const Scalar _tmp118 = _tmp104 * (-_tmp102 * _tmp117 - _tmp115 * _tmp93);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = _tmp101 * _tmp119;
  const Scalar _tmp121 = _tmp59 * (-_tmp107 * _tmp119 + Scalar(1.0));
  const Scalar _tmp122 = _tmp111 * _tmp112;
  const Scalar _tmp123 = _tmp122 * _tmp62 * (_tmp120 * _tmp92 + _tmp121 * _tmp49);
  const Scalar _tmp124 = -_tmp113 * _tmp17 + _tmp122 * _tmp28;
  const Scalar _tmp125 = Scalar(1.0) * _tmp103;
  const Scalar _tmp126 = _tmp49 * _tmp95;
  const Scalar _tmp127 = _tmp124 * _tmp62 * (-_tmp125 * _tmp126 + _tmp125 * _tmp92);
  const Scalar _tmp128 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp129 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp130 = 0;
  const Scalar _tmp131 = _tmp101 * _tmp130;
  const Scalar _tmp132 = -_tmp114 * fh1 - _tmp123 * fh1 - _tmp127 * fh1 -
                         _tmp128 * _tmp62 * (-_tmp126 * _tmp131 + _tmp131 * _tmp92);
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp69 + _tmp97;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = _tmp113 * _tmp135 + Scalar(5.1796800000000003) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp137 = _tmp78 + _tmp87;
  const Scalar _tmp138 = _tmp137 * _tmp82;
  const Scalar _tmp139 = Scalar(1.0) / (-_tmp138 + _tmp80 - _tmp84);
  const Scalar _tmp140 = Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = _tmp137 * _tmp79;
  const Scalar _tmp142 = _tmp140 * _tmp141;
  const Scalar _tmp143 = -Scalar(1.0) * _tmp140 + Scalar(1.0) * _tmp142;
  const Scalar _tmp144 = _tmp101 * _tmp99;
  const Scalar _tmp145 = _tmp129 * _tmp139;
  const Scalar _tmp146 = -_tmp130 * _tmp144 - _tmp137 * _tmp145 + _tmp78;
  const Scalar _tmp147 = _tmp104 * _tmp140;
  const Scalar _tmp148 = _tmp79 * (-_tmp125 * _tmp99 + _tmp137 * _tmp147);
  const Scalar _tmp149 = Scalar(1.0) * _tmp124;
  const Scalar _tmp150 = _tmp149 * (_tmp147 - Scalar(1.0) * _tmp148);
  const Scalar _tmp151 = -_tmp122 * _tmp135 - Scalar(5.1796800000000003) * _tmp14 - _tmp17 * fv1;
  const Scalar _tmp152 = _tmp138 * _tmp140 + Scalar(1.0);
  const Scalar _tmp153 = _tmp140 * _tmp82;
  const Scalar _tmp154 = -Scalar(1.0) * _tmp116 * _tmp152 + Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = _tmp137 * _tmp139;
  const Scalar _tmp156 = -_tmp115 * _tmp75 + _tmp118 * _tmp155 - _tmp119 * _tmp144;
  const Scalar _tmp157 = Scalar(1.0) * _tmp122 * (-_tmp116 * _tmp156 + _tmp118 * _tmp140);
  const Scalar _tmp158 = _tmp105 * _tmp155 - _tmp106 * _tmp144 + _tmp76;
  const Scalar _tmp159 = Scalar(1.0) * _tmp113 * (_tmp105 * _tmp140 - _tmp116 * _tmp158);
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp128 * (-_tmp116 * _tmp146 - _tmp129 * _tmp140 + Scalar(1.0)) +
      _tmp136 * _tmp143 + _tmp150 * fh1 + _tmp151 * _tmp154 + _tmp157 * fh1 + _tmp159 * fh1;
  const Scalar _tmp161 = std::asinh(_tmp133 * _tmp160);
  const Scalar _tmp162 = Scalar(1.0) * _tmp161;
  const Scalar _tmp163 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp164 = _tmp122 * _tmp134;
  const Scalar _tmp165 = _tmp113 * _tmp134;
  const Scalar _tmp166 = -_tmp114 - _tmp123 - _tmp127;
  const Scalar _tmp167 = _tmp163 * _tmp166;
  const Scalar _tmp168 =
      (_tmp133 * (_tmp143 * _tmp165 + _tmp150 - _tmp154 * _tmp164 + _tmp157 + _tmp159) -
       _tmp160 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp160, Scalar(2)) * _tmp163 + 1));
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp170 =
      -_tmp132 * _tmp169 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp171 = Scalar(0.1034955) * _tmp133;
  const Scalar _tmp172 = _tmp170 * _tmp171;
  const Scalar _tmp173 = Scalar(9.6622558468725703) * _tmp132;
  const Scalar _tmp174 = _tmp121 * _tmp122;
  const Scalar _tmp175 = _tmp108 * _tmp113;
  const Scalar _tmp176 = _tmp103 * _tmp149;
  const Scalar _tmp177 = _tmp176 * fh1;
  const Scalar _tmp178 = _tmp128 * _tmp131;
  const Scalar _tmp179 = _tmp174 * fh1 + _tmp175 * fh1 - _tmp177 * _tmp95 - _tmp178 * _tmp95;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = _tmp113 * _tmp158 * _tmp79;
  const Scalar _tmp182 = _tmp122 * _tmp156 * _tmp79;
  const Scalar _tmp183 = _tmp152 * _tmp79;
  const Scalar _tmp184 = _tmp124 * _tmp148;
  const Scalar _tmp185 = _tmp136 * _tmp140;
  const Scalar _tmp186 = _tmp128 * _tmp146 * _tmp79 - _tmp141 * _tmp185 + _tmp151 * _tmp183 +
                         _tmp181 * fh1 + _tmp182 * fh1 + _tmp184 * fh1;
  const Scalar _tmp187 = std::asinh(_tmp180 * _tmp186);
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp189 =
      -_tmp187 * _tmp188 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp46 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp190 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = Scalar(1.0) * _tmp187;
  const Scalar _tmp193 = _tmp174 + _tmp175 - _tmp176 * _tmp95;
  const Scalar _tmp194 = Scalar(9.6622558468725703) * _tmp193;
  const Scalar _tmp195 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp196 = _tmp193 * _tmp195;
  const Scalar _tmp197 =
      (_tmp180 * (-_tmp142 * _tmp165 - _tmp164 * _tmp183 + _tmp181 + _tmp182 + _tmp184) -
       _tmp186 * _tmp196) /
      std::sqrt(Scalar(std::pow(_tmp186, Scalar(2)) * _tmp195 + 1));
  const Scalar _tmp198 = _tmp109 * _tmp113;
  const Scalar _tmp199 = _tmp120 * _tmp122;
  const Scalar _tmp200 = _tmp177 + _tmp178 + _tmp198 * fh1 + _tmp199 * fh1;
  const Scalar _tmp201 = Scalar(1.0) / (_tmp200);
  const Scalar _tmp202 = _tmp118 * _tmp122 * _tmp139;
  const Scalar _tmp203 = _tmp124 * _tmp147;
  const Scalar _tmp204 = _tmp105 * _tmp113 * _tmp139;
  const Scalar _tmp205 = _tmp128 * _tmp145 - _tmp151 * _tmp153 + _tmp185 - _tmp202 * fh1 -
                         _tmp203 * fh1 - _tmp204 * fh1;
  const Scalar _tmp206 = std::asinh(_tmp201 * _tmp205);
  const Scalar _tmp207 = Scalar(1.0) * _tmp206;
  const Scalar _tmp208 = Scalar(9.6622558468725703) * _tmp200;
  const Scalar _tmp209 =
      -_tmp206 * _tmp208 - std::sqrt(Scalar(std::pow(Scalar(-_tmp85 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp88 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp210 = Scalar(0.1034955) * _tmp201;
  const Scalar _tmp211 = _tmp209 * _tmp210;
  const Scalar _tmp212 = _tmp176 + _tmp198 + _tmp199;
  const Scalar _tmp213 = Scalar(9.6622558468725703) * _tmp212;
  const Scalar _tmp214 = std::pow(_tmp200, Scalar(-2));
  const Scalar _tmp215 = _tmp212 * _tmp214;
  const Scalar _tmp216 =
      (_tmp201 * (_tmp140 * _tmp165 + _tmp153 * _tmp164 - _tmp202 - _tmp203 - _tmp204) -
       _tmp205 * _tmp215) /
      std::sqrt(Scalar(std::pow(_tmp205, Scalar(2)) * _tmp214 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
                    (-Scalar(0.1034955) * _tmp34 * _tmp37 +
                     _tmp35 * (Scalar(9.6622558468725703) * _tmp31 * _tmp38 - _tmp33)) *
                        std::cosh(_tmp36)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp36) -
               Scalar(9.6622558468725703) * std::sinh(_tmp39);
  _res(1, 0) = Scalar(9.6622558468725703) * _tmp166 * (-std::sinh(_tmp162) - std::sinh(_tmp172)) +
               _tmp173 * (-Scalar(1.0) * _tmp168 * std::cosh(_tmp162) -
                          (-Scalar(0.1034955) * _tmp167 * _tmp170 +
                           _tmp171 * (-_tmp166 * _tmp169 - _tmp168 * _tmp173)) *
                              std::cosh(_tmp172));
  _res(2, 0) = _tmp188 * (-Scalar(1.0) * _tmp197 * std::cosh(_tmp192) -
                          (-Scalar(0.1034955) * _tmp189 * _tmp196 +
                           _tmp190 * (-_tmp187 * _tmp194 - _tmp188 * _tmp197)) *
                              std::cosh(_tmp191)) +
               _tmp194 * (-std::sinh(_tmp191) - std::sinh(_tmp192));
  _res(3, 0) = _tmp208 * (-Scalar(1.0) * _tmp216 * std::cosh(_tmp207) -
                          (-Scalar(0.1034955) * _tmp209 * _tmp215 +
                           _tmp210 * (-_tmp206 * _tmp213 - _tmp208 * _tmp216)) *
                              std::cosh(_tmp211)) +
               _tmp213 * (-std::sinh(_tmp207) - std::sinh(_tmp211));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
