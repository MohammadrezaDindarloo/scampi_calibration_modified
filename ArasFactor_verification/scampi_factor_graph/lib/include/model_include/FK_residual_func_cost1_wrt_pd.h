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
 * Symbolic function: FK_residual_func_cost1_wrt_pd
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
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
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost1WrtPd(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1056

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (332)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = _tmp3 + _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp13 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp14 = _tmp1 * _tmp5;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp11 + _tmp16;
  const Scalar _tmp18 = _tmp17 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp2 * _tmp4;
  const Scalar _tmp22 = _tmp0 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp27 = _tmp24 - _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp30 = std::pow(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp29, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp31 = _tmp18 * _tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp33 = -_tmp32;
  const Scalar _tmp34 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = fh1 * (_tmp33 + _tmp36);
  const Scalar _tmp38 = _tmp17 * fv1 + _tmp31 * _tmp37 + Scalar(3.29616) * _tmp7;
  const Scalar _tmp39 = _tmp12 + _tmp15;
  const Scalar _tmp40 = _tmp11 + _tmp39;
  const Scalar _tmp41 = _tmp10 + _tmp16;
  const Scalar _tmp42 = Scalar(1.0) * _tmp41;
  const Scalar _tmp43 = _tmp19 + _tmp27;
  const Scalar _tmp44 = Scalar(1.0) * _tmp43;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 = _tmp24 + _tmp26;
  const Scalar _tmp47 = _tmp20 + _tmp46;
  const Scalar _tmp48 = _tmp45 + _tmp47;
  const Scalar _tmp49 = _tmp19 + _tmp46;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp45 + _tmp49);
  const Scalar _tmp51 = _tmp10 + _tmp39;
  const Scalar _tmp52 = _tmp42 - _tmp51;
  const Scalar _tmp53 = _tmp50 * _tmp52;
  const Scalar _tmp54 = _tmp48 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (-_tmp40 + _tmp42 - _tmp54);
  const Scalar _tmp56 = Scalar(1.0) * _tmp55;
  const Scalar _tmp57 = _tmp48 * _tmp50;
  const Scalar _tmp58 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp59 = _tmp42 + _tmp44 * _tmp53;
  const Scalar _tmp60 = 0;
  const Scalar _tmp61 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 - p_d(0, 0);
  const Scalar _tmp63 = _tmp32 + _tmp36;
  const Scalar _tmp64 = std::pow(_tmp62, Scalar(2));
  const Scalar _tmp65 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_d(1, 0);
  const Scalar _tmp67 = std::pow(_tmp66, Scalar(2));
  const Scalar _tmp68 = _tmp64 + _tmp67;
  const Scalar _tmp69 = std::pow(_tmp68, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp70 = _tmp63 * _tmp69;
  const Scalar _tmp71 = _tmp34 + _tmp35;
  const Scalar _tmp72 = _tmp33 + _tmp71;
  const Scalar _tmp73 = _tmp69 * _tmp72;
  const Scalar _tmp74 = _tmp62 * _tmp73;
  const Scalar _tmp75 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp76 = _tmp75 - p_b(0, 0);
  const Scalar _tmp77 = Scalar(1.0) / (_tmp76);
  const Scalar _tmp78 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp79 = _tmp78 - p_b(1, 0);
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = _tmp69 * _tmp80;
  const Scalar _tmp82 = _tmp62 * _tmp81 - _tmp66 * _tmp69;
  const Scalar _tmp83 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp84 = _tmp83 - p_c(0, 0);
  const Scalar _tmp85 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp86 = _tmp85 - p_c(1, 0);
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp84 * _tmp87;
  const Scalar _tmp89 = _tmp86 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp80 * _tmp88 - _tmp89);
  const Scalar _tmp91 = _tmp72 * _tmp88;
  const Scalar _tmp92 = _tmp32 + _tmp71;
  const Scalar _tmp93 = -_tmp80 * _tmp91 + _tmp89 * _tmp92;
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = _tmp66 * _tmp70 - _tmp74 * _tmp80 - _tmp82 * _tmp94;
  const Scalar _tmp96 = -_tmp88 * _tmp92 + _tmp91;
  const Scalar _tmp97 = _tmp90 * _tmp96;
  const Scalar _tmp98 = -_tmp53 * _tmp95 - _tmp62 * _tmp70 + _tmp74 - _tmp82 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp55 * _tmp59;
  const Scalar _tmp102 = -_tmp100 * _tmp60 - _tmp101 * _tmp48 + _tmp45;
  const Scalar _tmp103 = Scalar(1.0) * _tmp50;
  const Scalar _tmp104 = _tmp40 * _tmp69;
  const Scalar _tmp105 = _tmp47 * _tmp69;
  const Scalar _tmp106 =
      std::sqrt(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp79, Scalar(2))));
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = _tmp106 * _tmp77;
  const Scalar _tmp109 = _tmp108 * (_tmp107 * _tmp41 * _tmp79 - _tmp107 * _tmp43 * _tmp76);
  const Scalar _tmp110 = _tmp109 * _tmp88 + _tmp49 * _tmp88 - _tmp51 * _tmp89;
  const Scalar _tmp111 = _tmp110 * _tmp90;
  const Scalar _tmp112 = _tmp109 * _tmp69;
  const Scalar _tmp113 = -_tmp104 * _tmp66 + _tmp105 * _tmp62 - _tmp111 * _tmp82 + _tmp112 * _tmp62;
  const Scalar _tmp114 = Scalar(1.0) / (_tmp113);
  const Scalar _tmp115 = Scalar(1.0) * _tmp114;
  const Scalar _tmp116 = _tmp114 * _tmp98;
  const Scalar _tmp117 = _tmp116 * _tmp56;
  const Scalar _tmp118 = -_tmp115 * _tmp95 + _tmp117 * _tmp48;
  const Scalar _tmp119 = _tmp29 * _tmp30;
  const Scalar _tmp120 = fh1 * (_tmp119 * _tmp17 - _tmp28 * _tmp31);
  const Scalar _tmp121 = Scalar(1.0) * _tmp120;
  const Scalar _tmp122 = -_tmp119 * _tmp37 - Scalar(3.29616) * _tmp23 - _tmp28 * fv1;
  const Scalar _tmp123 = _tmp54 * _tmp56 + Scalar(1.0);
  const Scalar _tmp124 = _tmp53 * _tmp56;
  const Scalar _tmp125 = _tmp103 * _tmp52 * _tmp94 - Scalar(1.0) * _tmp97;
  const Scalar _tmp126 = _tmp125 * _tmp99;
  const Scalar _tmp127 = -Scalar(1.0) * _tmp111 - _tmp113 * _tmp126;
  const Scalar _tmp128 = _tmp116 * _tmp127;
  const Scalar _tmp129 = _tmp48 * _tmp55;
  const Scalar _tmp130 = _tmp125 + _tmp128;
  const Scalar _tmp131 = _tmp130 * _tmp99;
  const Scalar _tmp132 = _tmp128 * _tmp129 - _tmp131 * _tmp95 - Scalar(1.0) * _tmp94;
  const Scalar _tmp133 = _tmp119 * fh1;
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp72 * _tmp80;
  const Scalar _tmp136 = _tmp135 + _tmp80 * _tmp94;
  const Scalar _tmp137 = -_tmp136 * _tmp53 - _tmp72 + _tmp80 * _tmp97;
  const Scalar _tmp138 = _tmp137 * _tmp99;
  const Scalar _tmp139 = -_tmp109 + _tmp111 * _tmp80 - _tmp113 * _tmp138;
  const Scalar _tmp140 = _tmp116 * _tmp139;
  const Scalar _tmp141 = _tmp137 + _tmp140;
  const Scalar _tmp142 = _tmp141 * _tmp99;
  const Scalar _tmp143 = _tmp129 * _tmp140 + _tmp136 - _tmp142 * _tmp95;
  const Scalar _tmp144 = _tmp31 * fh1;
  const Scalar _tmp145 = Scalar(1.0) * _tmp144;
  const Scalar _tmp146 =
      _tmp121 * (-_tmp103 * _tmp118 + _tmp117) +
      Scalar(1.0) * _tmp122 * (-_tmp103 * _tmp123 + _tmp124) +
      _tmp134 * (-_tmp103 * _tmp132 + _tmp128 * _tmp56) +
      _tmp145 * (-_tmp103 * _tmp143 + _tmp140 * _tmp56) +
      Scalar(1.0) * _tmp38 * (_tmp56 * _tmp57 - _tmp56) +
      Scalar(1.0) * _tmp58 * (-_tmp102 * _tmp103 - _tmp56 * _tmp59 + Scalar(1.0));
  const Scalar _tmp147 = _tmp82 * _tmp99;
  const Scalar _tmp148 = -_tmp141 * _tmp147 - _tmp80;
  const Scalar _tmp149 = _tmp88 * _tmp90;
  const Scalar _tmp150 = _tmp142 * _tmp69;
  const Scalar _tmp151 = _tmp108 * _tmp144;
  const Scalar _tmp152 = _tmp131 * _tmp69;
  const Scalar _tmp153 = -_tmp130 * _tmp147 + Scalar(1.0);
  const Scalar _tmp154 = _tmp108 * _tmp133;
  const Scalar _tmp155 = _tmp115 * _tmp69;
  const Scalar _tmp156 = _tmp149 * _tmp82;
  const Scalar _tmp157 = _tmp108 * _tmp120;
  const Scalar _tmp158 = _tmp60 * _tmp99;
  const Scalar _tmp159 = _tmp158 * _tmp69;
  const Scalar _tmp160 = _tmp108 * _tmp58;
  const Scalar _tmp161 = -_tmp151 * (_tmp148 * _tmp149 + _tmp150 * _tmp62 + Scalar(1.0)) -
                         _tmp154 * (_tmp149 * _tmp153 + _tmp152 * _tmp62) -
                         _tmp157 * (-_tmp115 * _tmp156 + _tmp155 * _tmp62) -
                         _tmp160 * (-_tmp147 * _tmp149 * _tmp60 + _tmp159 * _tmp62);
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = std::asinh(_tmp146 * _tmp162);
  const Scalar _tmp164 = Scalar(1.0) * _tmp163;
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp166 =
      -_tmp163 * _tmp165 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp78 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp167 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp168 = _tmp166 * _tmp167;
  const Scalar _tmp169 = _tmp167 * p_b(2, 0) + std::cosh(_tmp164) - std::cosh(_tmp168);
  const Scalar _tmp170 = std::pow(_tmp68, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp171 = _tmp170 * _tmp64;
  const Scalar _tmp172 = _tmp170 * _tmp62 * _tmp66;
  const Scalar _tmp173 = _tmp171 * _tmp80 - _tmp172 - _tmp81;
  const Scalar _tmp174 = _tmp173 * _tmp90;
  const Scalar _tmp175 = _tmp172 * _tmp63;
  const Scalar _tmp176 = -_tmp135 * _tmp171 - _tmp174 * _tmp93 + _tmp175 + _tmp73 * _tmp80;
  const Scalar _tmp177 =
      -_tmp171 * _tmp63 + _tmp171 * _tmp72 - _tmp174 * _tmp96 - _tmp176 * _tmp53 + _tmp70 - _tmp73;
  const Scalar _tmp178 = _tmp114 * _tmp177;
  const Scalar _tmp179 = _tmp139 * _tmp178;
  const Scalar _tmp180 = -_tmp105 + _tmp109 * _tmp171 - _tmp110 * _tmp174 - _tmp112 +
                         _tmp171 * _tmp47 - _tmp172 * _tmp40;
  const Scalar _tmp181 = std::pow(_tmp98, Scalar(-2));
  const Scalar _tmp182 = _tmp177 * _tmp181;
  const Scalar _tmp183 = _tmp113 * _tmp137;
  const Scalar _tmp184 = _tmp116 * (-_tmp138 * _tmp180 + _tmp182 * _tmp183);
  const Scalar _tmp185 = std::pow(_tmp113, Scalar(-2));
  const Scalar _tmp186 = _tmp180 * _tmp185;
  const Scalar _tmp187 = _tmp186 * _tmp98;
  const Scalar _tmp188 = _tmp139 * _tmp187;
  const Scalar _tmp189 = _tmp179 + _tmp184 - _tmp188;
  const Scalar _tmp190 = _tmp62 * _tmp69;
  const Scalar _tmp191 = _tmp190 * _tmp99;
  const Scalar _tmp192 = _tmp182 * _tmp190;
  const Scalar _tmp193 = _tmp141 * _tmp82;
  const Scalar _tmp194 = -_tmp142 * _tmp173 - _tmp147 * _tmp189 + _tmp182 * _tmp193;
  const Scalar _tmp195 = _tmp156 * _tmp60;
  const Scalar _tmp196 = _tmp158 * _tmp88;
  const Scalar _tmp197 = Scalar(1.0) * _tmp156;
  const Scalar _tmp198 = Scalar(1.0) * _tmp190;
  const Scalar _tmp199 = _tmp115 * _tmp88;
  const Scalar _tmp200 = _tmp127 * _tmp178;
  const Scalar _tmp201 = _tmp113 * _tmp125;
  const Scalar _tmp202 = _tmp116 * (-_tmp126 * _tmp180 + _tmp182 * _tmp201);
  const Scalar _tmp203 = _tmp127 * _tmp187;
  const Scalar _tmp204 = _tmp200 + _tmp202 - _tmp203;
  const Scalar _tmp205 = _tmp204 * _tmp99;
  const Scalar _tmp206 = _tmp130 * _tmp82;
  const Scalar _tmp207 = -_tmp131 * _tmp173 - _tmp147 * _tmp204 + _tmp182 * _tmp206;
  const Scalar _tmp208 = -_tmp151 * (-_tmp141 * _tmp192 + _tmp142 * _tmp171 + _tmp149 * _tmp194 -
                                     _tmp150 + _tmp189 * _tmp191) -
                         _tmp154 * (-_tmp130 * _tmp192 + _tmp131 * _tmp171 + _tmp149 * _tmp207 -
                                    _tmp152 + _tmp190 * _tmp205) -
                         _tmp157 * (_tmp115 * _tmp171 - _tmp155 - _tmp174 * _tmp199 +
                                    _tmp186 * _tmp197 - _tmp186 * _tmp198) -
                         _tmp160 * (_tmp158 * _tmp171 - _tmp159 - _tmp174 * _tmp196 +
                                    _tmp182 * _tmp195 - _tmp192 * _tmp60);
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp208;
  const Scalar _tmp210 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp211 = Scalar(0.1034955) * _tmp210;
  const Scalar _tmp212 = _tmp208 * _tmp211;
  const Scalar _tmp213 = std::sinh(_tmp168);
  const Scalar _tmp214 =
      std::pow(Scalar(std::pow(_tmp146, Scalar(2)) * _tmp210 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp215 = _tmp182 * _tmp95;
  const Scalar _tmp216 = -_tmp100 * _tmp189 + _tmp129 * _tmp179 + _tmp129 * _tmp184 -
                         _tmp129 * _tmp188 + _tmp141 * _tmp215 - _tmp142 * _tmp176;
  const Scalar _tmp217 = -_tmp158 * _tmp176 + _tmp215 * _tmp60;
  const Scalar _tmp218 = _tmp103 * _tmp58;
  const Scalar _tmp219 = _tmp130 * _tmp95;
  const Scalar _tmp220 = -_tmp100 * _tmp204 + _tmp129 * _tmp200 + _tmp129 * _tmp202 -
                         _tmp129 * _tmp203 - _tmp131 * _tmp176 + _tmp182 * _tmp219;
  const Scalar _tmp221 = Scalar(1.0) * _tmp95;
  const Scalar _tmp222 = _tmp187 * _tmp56;
  const Scalar _tmp223 = _tmp178 * _tmp56;
  const Scalar _tmp224 =
      -_tmp115 * _tmp176 + _tmp186 * _tmp221 - _tmp222 * _tmp48 + _tmp223 * _tmp48;
  const Scalar _tmp225 = _tmp146 * _tmp210;
  const Scalar _tmp226 = _tmp214 * (_tmp162 * (_tmp121 * (-_tmp103 * _tmp224 - _tmp222 + _tmp223) +
                                               _tmp134 * (-_tmp103 * _tmp220 + _tmp200 * _tmp56 +
                                                          _tmp202 * _tmp56 - _tmp203 * _tmp56) +
                                               _tmp145 * (-_tmp103 * _tmp216 + _tmp179 * _tmp56 +
                                                          _tmp184 * _tmp56 - _tmp188 * _tmp56) -
                                               _tmp217 * _tmp218) -
                                    _tmp208 * _tmp225);
  const Scalar _tmp227 = Scalar(1.0) * std::sinh(_tmp164);
  const Scalar _tmp228 = _tmp144 * _tmp90;
  const Scalar _tmp229 = _tmp115 * _tmp120;
  const Scalar _tmp230 = _tmp158 * _tmp58;
  const Scalar _tmp231 = _tmp121 * _tmp186;
  const Scalar _tmp232 = _tmp82 * _tmp90;
  const Scalar _tmp233 = _tmp58 * _tmp60;
  const Scalar _tmp234 = _tmp182 * _tmp233;
  const Scalar _tmp235 = _tmp133 * _tmp90;
  const Scalar _tmp236 = -_tmp174 * _tmp229 - _tmp174 * _tmp230 + _tmp194 * _tmp228 +
                         _tmp207 * _tmp235 + _tmp231 * _tmp232 + _tmp232 * _tmp234;
  const Scalar _tmp237 =
      -_tmp147 * _tmp233 * _tmp90 + _tmp148 * _tmp228 + _tmp153 * _tmp235 - _tmp229 * _tmp232;
  const Scalar _tmp238 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp239 = _tmp144 * _tmp50;
  const Scalar _tmp240 = _tmp50 * _tmp58;
  const Scalar _tmp241 = _tmp133 * _tmp50;
  const Scalar _tmp242 = _tmp120 * _tmp50;
  const Scalar _tmp243 = _tmp38 * _tmp56;
  const Scalar _tmp244 = _tmp102 * _tmp240 + _tmp118 * _tmp242 + _tmp122 * _tmp123 * _tmp50 +
                         _tmp132 * _tmp241 + _tmp143 * _tmp239 - _tmp243 * _tmp57;
  const Scalar _tmp245 = std::asinh(_tmp238 * _tmp244);
  const Scalar _tmp246 = Scalar(1.0) * _tmp245;
  const Scalar _tmp247 = Scalar(0.1034955) * _tmp238;
  const Scalar _tmp248 = Scalar(9.6622558468725703) * _tmp245;
  const Scalar _tmp249 =
      -_tmp237 * _tmp248 - std::sqrt(Scalar(std::pow(Scalar(-_tmp83 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp85 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp250 = _tmp247 * _tmp249;
  const Scalar _tmp251 = Scalar(9.6622558468725703) * _tmp247 * p_c(2, 0) +
                         Scalar(9.6622558468725703) * std::cosh(_tmp246) -
                         Scalar(9.6622558468725703) * std::cosh(_tmp250);
  const Scalar _tmp252 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp253 = _tmp244 * _tmp252;
  const Scalar _tmp254 = -_tmp236 * _tmp253 + _tmp238 * (_tmp216 * _tmp239 + _tmp217 * _tmp240 +
                                                         _tmp220 * _tmp241 + _tmp224 * _tmp242);
  const Scalar _tmp255 =
      std::pow(Scalar(std::pow(_tmp244, Scalar(2)) * _tmp252 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp256 = Scalar(1.0) * _tmp255 * std::sinh(_tmp246);
  const Scalar _tmp257 = Scalar(0.1034955) * _tmp252;
  const Scalar _tmp258 = _tmp257 * p_c(2, 0);
  const Scalar _tmp259 = Scalar(9.6622558468725703) * _tmp237;
  const Scalar _tmp260 = _tmp255 * _tmp259;
  const Scalar _tmp261 = _tmp249 * _tmp257;
  const Scalar _tmp262 = std::sinh(_tmp250);
  const Scalar _tmp263 = -_tmp65 + p_d(1, 0);
  const Scalar _tmp264 = -_tmp61 + p_d(0, 0);
  const Scalar _tmp265 =
      std::sqrt(Scalar(std::pow(_tmp263, Scalar(2)) + std::pow(_tmp264, Scalar(2))));
  const Scalar _tmp266 = _tmp131 * _tmp133 + _tmp142 * _tmp144 + _tmp229 + _tmp230;
  const Scalar _tmp267 = Scalar(1.0) / (_tmp266);
  const Scalar _tmp268 = _tmp133 * _tmp55;
  const Scalar _tmp269 = _tmp144 * _tmp55;
  const Scalar _tmp270 = _tmp101 * _tmp58 - _tmp117 * _tmp120 - _tmp122 * _tmp124 -
                         _tmp128 * _tmp268 - _tmp140 * _tmp269 + _tmp243;
  const Scalar _tmp271 = std::asinh(_tmp267 * _tmp270);
  const Scalar _tmp272 = Scalar(9.6622558468725703) * _tmp271;
  const Scalar _tmp273 = -_tmp265 - _tmp266 * _tmp272;
  const Scalar _tmp274 = Scalar(0.1034955) * _tmp267;
  const Scalar _tmp275 = _tmp273 * _tmp274;
  const Scalar _tmp276 = std::sinh(_tmp275);
  const Scalar _tmp277 = Scalar(1.0) / (_tmp265);
  const Scalar _tmp278 = _tmp130 * _tmp133;
  const Scalar _tmp279 = _tmp141 * _tmp144;
  const Scalar _tmp280 = _tmp144 * _tmp99;
  const Scalar _tmp281 = _tmp133 * _tmp205 - _tmp182 * _tmp278 - _tmp182 * _tmp279 +
                         _tmp189 * _tmp280 - _tmp231 - _tmp234;
  const Scalar _tmp282 = Scalar(9.6622558468725703) * _tmp281;
  const Scalar _tmp283 = Scalar(9.6622558468725703) * _tmp266;
  const Scalar _tmp284 = std::pow(_tmp266, Scalar(-2));
  const Scalar _tmp285 =
      std::pow(Scalar(std::pow(_tmp270, Scalar(2)) * _tmp284 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp286 = _tmp270 * _tmp284;
  const Scalar _tmp287 =
      _tmp285 *
      (_tmp267 * (_tmp120 * _tmp222 - _tmp120 * _tmp223 - _tmp179 * _tmp269 - _tmp184 * _tmp269 +
                  _tmp188 * _tmp269 - _tmp200 * _tmp268 - _tmp202 * _tmp268 + _tmp203 * _tmp268) -
       _tmp281 * _tmp286);
  const Scalar _tmp288 = Scalar(0.1034955) * _tmp284;
  const Scalar _tmp289 = _tmp273 * _tmp288;
  const Scalar _tmp290 = _tmp288 * p_d(2, 0);
  const Scalar _tmp291 = Scalar(1.0) * _tmp271;
  const Scalar _tmp292 = Scalar(1.0) * std::sinh(_tmp291);
  const Scalar _tmp293 = _tmp274 * p_d(2, 0) - std::cosh(_tmp275) + std::cosh(_tmp291);
  const Scalar _tmp294 = _tmp170 * _tmp67;
  const Scalar _tmp295 = _tmp172 * _tmp80 - _tmp294 + _tmp69;
  const Scalar _tmp296 = _tmp295 * _tmp90;
  const Scalar _tmp297 = -_tmp135 * _tmp172 + _tmp294 * _tmp63 - _tmp296 * _tmp93 - _tmp70;
  const Scalar _tmp298 = _tmp172 * _tmp72 - _tmp175 - _tmp296 * _tmp96 - _tmp297 * _tmp53;
  const Scalar _tmp299 = _tmp181 * _tmp298;
  const Scalar _tmp300 = _tmp190 * _tmp299;
  const Scalar _tmp301 = _tmp114 * _tmp298;
  const Scalar _tmp302 = _tmp139 * _tmp301;
  const Scalar _tmp303 =
      _tmp104 + _tmp109 * _tmp172 - _tmp111 * _tmp295 + _tmp172 * _tmp47 - _tmp294 * _tmp40;
  const Scalar _tmp304 = _tmp116 * (-_tmp138 * _tmp303 + _tmp183 * _tmp299);
  const Scalar _tmp305 = _tmp185 * _tmp303;
  const Scalar _tmp306 = _tmp305 * _tmp98;
  const Scalar _tmp307 = _tmp139 * _tmp306;
  const Scalar _tmp308 = _tmp302 + _tmp304 - _tmp307;
  const Scalar _tmp309 = -_tmp142 * _tmp295 - _tmp147 * _tmp308 + _tmp193 * _tmp299;
  const Scalar _tmp310 = _tmp127 * _tmp301;
  const Scalar _tmp311 = _tmp127 * _tmp306;
  const Scalar _tmp312 = _tmp116 * (-_tmp126 * _tmp303 + _tmp201 * _tmp299);
  const Scalar _tmp313 = _tmp310 - _tmp311 + _tmp312;
  const Scalar _tmp314 = -_tmp131 * _tmp295 - _tmp147 * _tmp313 + _tmp206 * _tmp299;
  const Scalar _tmp315 =
      -_tmp151 * (-_tmp141 * _tmp300 + _tmp142 * _tmp172 + _tmp149 * _tmp309 + _tmp191 * _tmp308) -
      _tmp154 * (-_tmp130 * _tmp300 + _tmp131 * _tmp172 + _tmp149 * _tmp314 + _tmp191 * _tmp313) -
      _tmp157 * (_tmp115 * _tmp172 + _tmp197 * _tmp305 - _tmp198 * _tmp305 - _tmp199 * _tmp296) -
      _tmp160 * (_tmp158 * _tmp172 + _tmp195 * _tmp299 - _tmp196 * _tmp296 - _tmp300 * _tmp60);
  const Scalar _tmp316 = Scalar(9.6622558468725703) * _tmp315;
  const Scalar _tmp317 = _tmp299 * _tmp95;
  const Scalar _tmp318 = -_tmp100 * _tmp308 + _tmp129 * _tmp302 + _tmp129 * _tmp304 -
                         _tmp129 * _tmp307 + _tmp141 * _tmp317 - _tmp142 * _tmp297;
  const Scalar _tmp319 = -_tmp100 * _tmp313 + _tmp129 * _tmp310 - _tmp129 * _tmp311 +
                         _tmp129 * _tmp312 - _tmp131 * _tmp297 + _tmp219 * _tmp299;
  const Scalar _tmp320 = _tmp306 * _tmp56;
  const Scalar _tmp321 = _tmp301 * _tmp56;
  const Scalar _tmp322 =
      -_tmp115 * _tmp297 + _tmp221 * _tmp305 - _tmp320 * _tmp48 + _tmp321 * _tmp48;
  const Scalar _tmp323 = -_tmp158 * _tmp297 + _tmp317 * _tmp60;
  const Scalar _tmp324 = _tmp214 * (_tmp162 * (_tmp121 * (-_tmp103 * _tmp322 - _tmp320 + _tmp321) +
                                               _tmp134 * (-_tmp103 * _tmp319 + _tmp310 * _tmp56 -
                                                          _tmp311 * _tmp56 + _tmp312 * _tmp56) +
                                               _tmp145 * (-_tmp103 * _tmp318 + _tmp302 * _tmp56 +
                                                          _tmp304 * _tmp56 - _tmp307 * _tmp56) -
                                               _tmp218 * _tmp323) -
                                    _tmp225 * _tmp315);
  const Scalar _tmp325 = _tmp211 * _tmp315;
  const Scalar _tmp326 = _tmp233 * _tmp299;
  const Scalar _tmp327 = _tmp121 * _tmp305;
  const Scalar _tmp328 = _tmp228 * _tmp309 - _tmp229 * _tmp296 - _tmp230 * _tmp296 +
                         _tmp232 * _tmp326 + _tmp232 * _tmp327 + _tmp235 * _tmp314;
  const Scalar _tmp329 =
      _tmp238 * (_tmp239 * _tmp318 + _tmp240 * _tmp323 + _tmp241 * _tmp319 + _tmp242 * _tmp322) -
      _tmp253 * _tmp328;
  const Scalar _tmp330 = _tmp133 * _tmp313 * _tmp99 - _tmp278 * _tmp299 - _tmp279 * _tmp299 +
                         _tmp280 * _tmp308 - _tmp326 - _tmp327;
  const Scalar _tmp331 =
      _tmp285 *
      (_tmp267 * (_tmp120 * _tmp320 - _tmp120 * _tmp321 - _tmp268 * _tmp310 + _tmp268 * _tmp311 -
                  _tmp268 * _tmp312 - _tmp269 * _tmp302 - _tmp269 * _tmp304 + _tmp269 * _tmp307) -
       _tmp286 * _tmp330);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp165 *
          (-_tmp212 * p_b(2, 0) -
           _tmp213 * (-_tmp166 * _tmp212 + _tmp167 * (-_tmp163 * _tmp209 - _tmp165 * _tmp226)) +
           _tmp226 * _tmp227) -
      _tmp169 * _tmp209;
  _res(2, 0) =
      -_tmp236 * _tmp251 -
      _tmp259 *
          (-_tmp236 * _tmp258 + _tmp254 * _tmp256 -
           _tmp262 * (-_tmp236 * _tmp261 + _tmp247 * (-_tmp236 * _tmp248 - _tmp254 * _tmp260)));
  _res(3, 0) =
      -_tmp282 * _tmp293 -
      _tmp283 *
          (-_tmp276 * (_tmp274 * (-_tmp264 * _tmp277 - _tmp271 * _tmp282 - _tmp283 * _tmp287) -
                       _tmp281 * _tmp289) -
           _tmp281 * _tmp290 + _tmp287 * _tmp292);
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp165 *
          (-_tmp213 * (-_tmp166 * _tmp325 + _tmp167 * (-_tmp163 * _tmp316 - _tmp165 * _tmp324)) +
           _tmp227 * _tmp324 - _tmp325 * p_b(2, 0)) -
      _tmp169 * _tmp316;
  _res(2, 1) =
      -_tmp251 * _tmp328 -
      _tmp259 *
          (_tmp256 * _tmp329 - _tmp258 * _tmp328 -
           _tmp262 * (_tmp247 * (-_tmp248 * _tmp328 - _tmp260 * _tmp329) - _tmp261 * _tmp328));
  _res(3, 1) =
      -_tmp283 *
          (-_tmp276 * (_tmp274 * (-_tmp263 * _tmp277 - _tmp272 * _tmp330 - _tmp283 * _tmp331) -
                       _tmp289 * _tmp330) -
           _tmp290 * _tmp330 + _tmp292 * _tmp331) -
      Scalar(9.6622558468725703) * _tmp293 * _tmp330;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(-1.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
