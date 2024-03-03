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
 * Symbolic function: IK_residual_func_cost2_wrt_pa_Nl10
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPaNl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1148

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (363)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp1 * _tmp5;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp25 = _tmp2 * _tmp4;
  const Scalar _tmp26 = _tmp0 * _tmp5;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = -_tmp24 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = _tmp31 - p_a(1, 0);
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp16 + _tmp7;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp38 = _tmp37 - p_d(0, 0);
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = _tmp22 + _tmp29;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_d(1, 0);
  const Scalar _tmp43 = _tmp39 * _tmp42;
  const Scalar _tmp44 = _tmp35 * _tmp43;
  const Scalar _tmp45 = _tmp32 * _tmp35;
  const Scalar _tmp46 = _tmp19 * _tmp44 - _tmp45;
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp35 * _tmp47;
  const Scalar _tmp49 = _tmp19 * _tmp48;
  const Scalar _tmp50 = Scalar(1.0) * _tmp36;
  const Scalar _tmp51 = Scalar(1.0) * _tmp40;
  const Scalar _tmp52 = -_tmp51;
  const Scalar _tmp53 = Scalar(1.0) / (_tmp30 + _tmp52);
  const Scalar _tmp54 = _tmp53 * (-_tmp17 + _tmp50);
  const Scalar _tmp55 = _tmp50 + _tmp51 * _tmp54;
  const Scalar _tmp56 = 0;
  const Scalar _tmp57 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp58 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp59 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp60 = _tmp58 + _tmp59;
  const Scalar _tmp61 = _tmp57 + _tmp60;
  const Scalar _tmp62 = _tmp12 + _tmp15;
  const Scalar _tmp63 = _tmp62 + _tmp7;
  const Scalar _tmp64 = _tmp63 + position_vector(0, 0);
  const Scalar _tmp65 = _tmp64 - p_c(0, 0);
  const Scalar _tmp66 = _tmp24 + _tmp28;
  const Scalar _tmp67 = _tmp22 + _tmp66;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_c(1, 0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp65 * _tmp70;
  const Scalar _tmp72 = -_tmp57;
  const Scalar _tmp73 = _tmp58 - _tmp59;
  const Scalar _tmp74 = _tmp72 + _tmp73;
  const Scalar _tmp75 = _tmp35 * _tmp74;
  const Scalar _tmp76 = _tmp57 + _tmp73;
  const Scalar _tmp77 = _tmp35 * _tmp76;
  const Scalar _tmp78 = _tmp19 * _tmp77;
  const Scalar _tmp79 = -_tmp19 * _tmp75 + _tmp78;
  const Scalar _tmp80 = _tmp69 * _tmp70;
  const Scalar _tmp81 = _tmp43 * _tmp71 - _tmp80;
  const Scalar _tmp82 = _tmp47 * _tmp81;
  const Scalar _tmp83 = _tmp71 * _tmp76;
  const Scalar _tmp84 = -_tmp43 * _tmp78 + _tmp45 * _tmp74;
  const Scalar _tmp85 = -_tmp43 * _tmp83 + _tmp61 * _tmp80 - _tmp82 * _tmp84;
  const Scalar _tmp86 = -_tmp54 * _tmp85 - _tmp61 * _tmp71 - _tmp79 * _tmp82 + _tmp83;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp81 * _tmp87;
  const Scalar _tmp89 = _tmp56 * _tmp88;
  const Scalar _tmp90 = _tmp71 * _tmp87;
  const Scalar _tmp91 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp92 =
      std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp93 = _tmp39 * _tmp92;
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp96 = _tmp93 * (_tmp36 * _tmp42 * _tmp95 - _tmp38 * _tmp40 * _tmp95);
  const Scalar _tmp97 = _tmp35 * _tmp96;
  const Scalar _tmp98 = _tmp30 * _tmp35;
  const Scalar _tmp99 = _tmp17 * _tmp35;
  const Scalar _tmp100 = _tmp19 * _tmp97 + _tmp19 * _tmp98 - _tmp32 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp82 - _tmp63 * _tmp80 + _tmp67 * _tmp71 + _tmp71 * _tmp96;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = Scalar(1.0) * _tmp47;
  const Scalar _tmp104 = _tmp103 * _tmp84;
  const Scalar _tmp105 = -_tmp103 * _tmp79 + _tmp104 * _tmp54;
  const Scalar _tmp106 = _tmp105 * _tmp87;
  const Scalar _tmp107 = -_tmp100 * _tmp103 - _tmp101 * _tmp106;
  const Scalar _tmp108 = _tmp102 * _tmp107;
  const Scalar _tmp109 = _tmp108 * _tmp86;
  const Scalar _tmp110 = _tmp105 + _tmp109;
  const Scalar _tmp111 = -_tmp110 * _tmp88 + Scalar(1.0);
  const Scalar _tmp112 = _tmp111 * _tmp48;
  const Scalar _tmp113 = _tmp62 + _tmp8;
  const Scalar _tmp114 = _tmp113 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp115 = _tmp23 + _tmp66;
  const Scalar _tmp116 = _tmp115 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp117 =
      std::pow(Scalar(std::pow(_tmp114, Scalar(2)) + std::pow(_tmp116, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp118 = _tmp116 * _tmp117;
  const Scalar _tmp119 = _tmp118 * fh1;
  const Scalar _tmp120 = _tmp119 * _tmp93;
  const Scalar _tmp121 = _tmp43 * _tmp47;
  const Scalar _tmp122 = _tmp43 * _tmp76;
  const Scalar _tmp123 = _tmp121 * _tmp84 + _tmp122;
  const Scalar _tmp124 = _tmp121 * _tmp79 - _tmp123 * _tmp54 - _tmp76;
  const Scalar _tmp125 = _tmp124 * _tmp87;
  const Scalar _tmp126 = _tmp100 * _tmp121 - _tmp101 * _tmp125 - _tmp96;
  const Scalar _tmp127 = _tmp102 * _tmp86;
  const Scalar _tmp128 = _tmp126 * _tmp127;
  const Scalar _tmp129 = _tmp124 + _tmp128;
  const Scalar _tmp130 = -_tmp129 * _tmp88 - _tmp43;
  const Scalar _tmp131 = _tmp130 * _tmp48;
  const Scalar _tmp132 = _tmp114 * _tmp117;
  const Scalar _tmp133 = _tmp132 * fh1;
  const Scalar _tmp134 = _tmp133 * _tmp93;
  const Scalar _tmp135 = Scalar(1.0) * _tmp102;
  const Scalar _tmp136 = _tmp135 * _tmp81;
  const Scalar _tmp137 = fh1 * (_tmp113 * _tmp118 - _tmp115 * _tmp132);
  const Scalar _tmp138 = _tmp137 * _tmp93;
  const Scalar _tmp139 = -_tmp120 * (_tmp110 * _tmp90 + _tmp112 * _tmp19) -
                         _tmp134 * (_tmp129 * _tmp90 + _tmp131 * _tmp19 + Scalar(1.0)) -
                         _tmp138 * (_tmp135 * _tmp71 - _tmp136 * _tmp49) -
                         _tmp94 * (-_tmp49 * _tmp89 + _tmp56 * _tmp90);
  const Scalar _tmp140 = std::pow(_tmp139, Scalar(-2));
  const Scalar _tmp141 = _tmp52 + _tmp67;
  const Scalar _tmp142 = _tmp141 * _tmp54;
  const Scalar _tmp143 = Scalar(1.0) / (-_tmp142 + _tmp50 - _tmp63);
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp141 * _tmp144;
  const Scalar _tmp146 = fh1 * (_tmp60 + _tmp72);
  const Scalar _tmp147 = Scalar(40.024799999999999) * _tmp11 + _tmp113 * fv1 + _tmp132 * _tmp146;
  const Scalar _tmp148 = -_tmp115 * fv1 - _tmp118 * _tmp146 - Scalar(40.024799999999999) * _tmp27;
  const Scalar _tmp149 = _tmp144 * _tmp54;
  const Scalar _tmp150 = _tmp142 * _tmp144 + Scalar(1.0);
  const Scalar _tmp151 = Scalar(1.0) * _tmp53;
  const Scalar _tmp152 = _tmp127 * _tmp144;
  const Scalar _tmp153 = _tmp127 * _tmp145 - _tmp135 * _tmp85;
  const Scalar _tmp154 = Scalar(1.0) * _tmp137;
  const Scalar _tmp155 = _tmp143 * _tmp55;
  const Scalar _tmp156 = _tmp85 * _tmp87;
  const Scalar _tmp157 = -_tmp141 * _tmp155 - _tmp156 * _tmp56 + _tmp52;
  const Scalar _tmp158 = _tmp141 * _tmp143;
  const Scalar _tmp159 = _tmp123 + _tmp128 * _tmp158 - _tmp129 * _tmp156;
  const Scalar _tmp160 = Scalar(1.0) * _tmp133;
  const Scalar _tmp161 = -_tmp104 + _tmp109 * _tmp158 - _tmp110 * _tmp156;
  const Scalar _tmp162 = Scalar(1.0) * _tmp119;
  const Scalar _tmp163 =
      Scalar(1.0) * _tmp147 * (-_tmp144 + _tmp145 * _tmp53) +
      Scalar(1.0) * _tmp148 * (_tmp149 - _tmp150 * _tmp151) +
      _tmp154 * (-_tmp151 * _tmp153 + _tmp152) + _tmp160 * (_tmp128 * _tmp144 - _tmp151 * _tmp159) +
      _tmp162 * (_tmp109 * _tmp144 - _tmp151 * _tmp161) +
      Scalar(1.0) * _tmp91 * (-_tmp144 * _tmp55 - _tmp151 * _tmp157 + Scalar(1.0));
  const Scalar _tmp164 =
      std::pow(Scalar(_tmp140 * std::pow(_tmp163, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp165 = std::pow(_tmp34, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp166 = _tmp165 * _tmp20;
  const Scalar _tmp167 = _tmp166 * _tmp82;
  const Scalar _tmp168 = _tmp165 * _tmp19 * _tmp32;
  const Scalar _tmp169 = std::pow(_tmp46, Scalar(-2));
  const Scalar _tmp170 = _tmp169 * (_tmp166 * _tmp43 - _tmp168 - _tmp44);
  const Scalar _tmp171 = _tmp170 * _tmp81;
  const Scalar _tmp172 = _tmp166 * _tmp30 + _tmp166 * _tmp96 - _tmp168 * _tmp17 - _tmp97 - _tmp98;
  const Scalar _tmp173 = _tmp100 * _tmp171 - _tmp172 * _tmp82;
  const Scalar _tmp174 = std::pow(_tmp101, Scalar(-2));
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = Scalar(1.0) * _tmp71;
  const Scalar _tmp177 = Scalar(1.0) * _tmp49 * _tmp81;
  const Scalar _tmp178 = _tmp19 * _tmp35;
  const Scalar _tmp179 = _tmp135 * _tmp178;
  const Scalar _tmp180 = _tmp166 * _tmp76;
  const Scalar _tmp181 = -_tmp166 * _tmp74 + _tmp180 + _tmp75 - _tmp77;
  const Scalar _tmp182 = _tmp168 * _tmp74;
  const Scalar _tmp183 = -_tmp180 * _tmp43 + _tmp182 + _tmp43 * _tmp77;
  const Scalar _tmp184 = _tmp171 * _tmp84 - _tmp183 * _tmp82;
  const Scalar _tmp185 = _tmp171 * _tmp79 - _tmp181 * _tmp82 - _tmp184 * _tmp54;
  const Scalar _tmp186 = std::pow(_tmp86, Scalar(-2));
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = _tmp187 * _tmp81;
  const Scalar _tmp189 = _tmp49 * _tmp56;
  const Scalar _tmp190 = _tmp178 * _tmp89;
  const Scalar _tmp191 = _tmp56 * _tmp87;
  const Scalar _tmp192 = _tmp187 * _tmp71;
  const Scalar _tmp193 = _tmp170 * _tmp43;
  const Scalar _tmp194 = _tmp121 * _tmp183 - _tmp193 * _tmp84;
  const Scalar _tmp195 = _tmp121 * _tmp181 - _tmp193 * _tmp79 - _tmp194 * _tmp54;
  const Scalar _tmp196 = _tmp101 * _tmp87;
  const Scalar _tmp197 = _tmp101 * _tmp124;
  const Scalar _tmp198 = _tmp127 * (-_tmp100 * _tmp193 + _tmp121 * _tmp172 - _tmp125 * _tmp173 +
                                    _tmp187 * _tmp197 - _tmp195 * _tmp196);
  const Scalar _tmp199 = _tmp175 * _tmp86;
  const Scalar _tmp200 = _tmp126 * _tmp199;
  const Scalar _tmp201 = _tmp102 * _tmp126;
  const Scalar _tmp202 = _tmp185 * _tmp201;
  const Scalar _tmp203 = _tmp195 + _tmp198 - _tmp200 + _tmp202;
  const Scalar _tmp204 = _tmp130 * _tmp170;
  const Scalar _tmp205 = _tmp166 * _tmp47;
  const Scalar _tmp206 = _tmp129 * _tmp188 - _tmp203 * _tmp88;
  const Scalar _tmp207 = _tmp111 * _tmp178;
  const Scalar _tmp208 = _tmp107 * _tmp199;
  const Scalar _tmp209 = _tmp108 * _tmp185;
  const Scalar _tmp210 = Scalar(1.0) * _tmp170;
  const Scalar _tmp211 = _tmp103 * _tmp183;
  const Scalar _tmp212 = _tmp210 * _tmp84;
  const Scalar _tmp213 =
      -_tmp103 * _tmp181 + _tmp210 * _tmp79 + _tmp211 * _tmp54 - _tmp212 * _tmp54;
  const Scalar _tmp214 = _tmp101 * _tmp105;
  const Scalar _tmp215 = _tmp127 * (_tmp100 * _tmp210 - _tmp103 * _tmp172 - _tmp106 * _tmp173 +
                                    _tmp187 * _tmp214 - _tmp196 * _tmp213);
  const Scalar _tmp216 = -_tmp208 + _tmp209 + _tmp213 + _tmp215;
  const Scalar _tmp217 = _tmp110 * _tmp188 - _tmp216 * _tmp88;
  const Scalar _tmp218 = -_tmp120 * (-_tmp110 * _tmp192 + _tmp111 * _tmp205 - _tmp112 -
                                     _tmp170 * _tmp207 + _tmp216 * _tmp90 + _tmp217 * _tmp49) -
                         _tmp134 * (-_tmp129 * _tmp192 + _tmp130 * _tmp205 - _tmp131 -
                                    _tmp178 * _tmp204 + _tmp203 * _tmp90 + _tmp206 * _tmp49) -
                         _tmp138 * (-_tmp135 * _tmp167 + _tmp136 * _tmp48 + _tmp171 * _tmp179 -
                                    _tmp175 * _tmp176 + _tmp175 * _tmp177) -
                         _tmp94 * (-_tmp167 * _tmp191 + _tmp170 * _tmp190 + _tmp188 * _tmp189 -
                                   _tmp192 * _tmp56 + _tmp48 * _tmp89);
  const Scalar _tmp219 = _tmp140 * _tmp163;
  const Scalar _tmp220 = Scalar(1.0) / (_tmp139);
  const Scalar _tmp221 = _tmp184 * _tmp87;
  const Scalar _tmp222 = _tmp187 * _tmp85;
  const Scalar _tmp223 = -_tmp110 * _tmp221 + _tmp110 * _tmp222 - _tmp156 * _tmp216 -
                         _tmp158 * _tmp208 + _tmp158 * _tmp209 + _tmp158 * _tmp215 - _tmp211 +
                         _tmp212;
  const Scalar _tmp224 = _tmp102 * _tmp144;
  const Scalar _tmp225 = _tmp185 * _tmp224;
  const Scalar _tmp226 = Scalar(1.0) * _tmp85;
  const Scalar _tmp227 =
      -_tmp135 * _tmp184 + _tmp141 * _tmp225 - _tmp145 * _tmp199 + _tmp175 * _tmp226;
  const Scalar _tmp228 = _tmp144 * _tmp199;
  const Scalar _tmp229 = _tmp129 * _tmp85;
  const Scalar _tmp230 = -_tmp129 * _tmp221 - _tmp156 * _tmp203 + _tmp158 * _tmp198 -
                         _tmp158 * _tmp200 + _tmp158 * _tmp202 + _tmp187 * _tmp229 + _tmp194;
  const Scalar _tmp231 = -_tmp221 * _tmp56 + _tmp222 * _tmp56;
  const Scalar _tmp232 = _tmp151 * _tmp91;
  const Scalar _tmp233 = _tmp164 * (-_tmp218 * _tmp219 +
                                    _tmp220 * (_tmp154 * (-_tmp151 * _tmp227 + _tmp225 - _tmp228) +
                                               _tmp160 * (_tmp144 * _tmp198 - _tmp144 * _tmp200 +
                                                          _tmp144 * _tmp202 - _tmp151 * _tmp230) +
                                               _tmp162 * (-_tmp144 * _tmp208 + _tmp144 * _tmp209 +
                                                          _tmp144 * _tmp215 - _tmp151 * _tmp223) -
                                               _tmp231 * _tmp232));
  const Scalar _tmp234 = std::asinh(_tmp163 * _tmp220);
  const Scalar _tmp235 = Scalar(1.0) * _tmp234;
  const Scalar _tmp236 = Scalar(1.0) * std::cosh(_tmp235);
  const Scalar _tmp237 = Scalar(1.4083112389913199) * _tmp139;
  const Scalar _tmp238 =
      -_tmp234 * _tmp237 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp239 = Scalar(0.71007031138673404) * _tmp220;
  const Scalar _tmp240 = _tmp238 * _tmp239;
  const Scalar _tmp241 = std::cosh(_tmp240);
  const Scalar _tmp242 = Scalar(0.71007031138673404) * _tmp140 * _tmp238;
  const Scalar _tmp243 = Scalar(1.4083112389913199) * _tmp218;
  const Scalar _tmp244 = -std::sinh(_tmp235) - std::sinh(_tmp240);
  const Scalar _tmp245 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp246 = -_tmp74 + p_a(2, 0) - position_vector(2, 0);
  const Scalar _tmp247 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp248 = std::pow(_tmp245, Scalar(2)) + std::pow(_tmp247, Scalar(2));
  const Scalar _tmp249 =
      std::pow(Scalar(std::pow(_tmp246, Scalar(2)) + _tmp248), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp250 = _tmp130 * _tmp47;
  const Scalar _tmp251 = _tmp135 * _tmp137;
  const Scalar _tmp252 = _tmp56 * _tmp91;
  const Scalar _tmp253 = _tmp252 * _tmp87;
  const Scalar _tmp254 = _tmp119 * _tmp47;
  const Scalar _tmp255 =
      _tmp111 * _tmp254 + _tmp133 * _tmp250 - _tmp251 * _tmp82 - _tmp253 * _tmp82;
  const Scalar _tmp256 = std::pow(_tmp255, Scalar(-2));
  const Scalar _tmp257 = _tmp144 * _tmp147;
  const Scalar _tmp258 = _tmp53 * fh1;
  const Scalar _tmp259 = _tmp132 * _tmp258;
  const Scalar _tmp260 = _tmp118 * _tmp258;
  const Scalar _tmp261 = _tmp137 * _tmp53;
  const Scalar _tmp262 = _tmp53 * _tmp91;
  const Scalar _tmp263 = -_tmp141 * _tmp257 * _tmp53 + _tmp148 * _tmp150 * _tmp53 +
                         _tmp153 * _tmp261 + _tmp157 * _tmp262 + _tmp159 * _tmp259 +
                         _tmp161 * _tmp260;
  const Scalar _tmp264 =
      std::pow(Scalar(_tmp256 * std::pow(_tmp263, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp265 = _tmp154 * _tmp175;
  const Scalar _tmp266 = _tmp187 * _tmp252;
  const Scalar _tmp267 = _tmp133 * _tmp47;
  const Scalar _tmp268 = _tmp252 * _tmp88;
  const Scalar _tmp269 = _tmp111 * _tmp119;
  const Scalar _tmp270 = -_tmp133 * _tmp204 + _tmp170 * _tmp268 - _tmp170 * _tmp269 +
                         _tmp171 * _tmp251 + _tmp206 * _tmp267 + _tmp217 * _tmp254 +
                         _tmp265 * _tmp82 + _tmp266 * _tmp82;
  const Scalar _tmp271 = _tmp256 * _tmp263;
  const Scalar _tmp272 = Scalar(1.0) / (_tmp255);
  const Scalar _tmp273 =
      _tmp264 * (-_tmp270 * _tmp271 + _tmp272 * (_tmp223 * _tmp260 + _tmp227 * _tmp261 +
                                                 _tmp230 * _tmp259 + _tmp231 * _tmp262));
  const Scalar _tmp274 = std::asinh(_tmp263 * _tmp272);
  const Scalar _tmp275 = Scalar(1.0) * _tmp274;
  const Scalar _tmp276 = Scalar(1.0) * std::cosh(_tmp275);
  const Scalar _tmp277 = std::sqrt(_tmp248);
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp274;
  const Scalar _tmp279 = -_tmp255 * _tmp278 - _tmp277;
  const Scalar _tmp280 = Scalar(0.71007031138673404) * _tmp256 * _tmp279;
  const Scalar _tmp281 = Scalar(1.4083112389913199) * _tmp255;
  const Scalar _tmp282 = Scalar(1.0) / (_tmp277);
  const Scalar _tmp283 = Scalar(0.71007031138673404) * _tmp272;
  const Scalar _tmp284 = _tmp279 * _tmp283;
  const Scalar _tmp285 = std::cosh(_tmp284);
  const Scalar _tmp286 = -Scalar(1.4083112389913199) * std::sinh(_tmp275) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp284);
  const Scalar _tmp287 = _tmp119 * _tmp143;
  const Scalar _tmp288 = _tmp133 * _tmp143;
  const Scalar _tmp289 = -_tmp109 * _tmp287 - _tmp128 * _tmp288 - _tmp137 * _tmp152 -
                         _tmp148 * _tmp149 + _tmp155 * _tmp91 + _tmp257;
  const Scalar _tmp290 = _tmp133 * _tmp87;
  const Scalar _tmp291 = _tmp119 * _tmp87;
  const Scalar _tmp292 = _tmp110 * _tmp291 + _tmp129 * _tmp290 + _tmp251 + _tmp253;
  const Scalar _tmp293 = Scalar(1.0) / (_tmp292);
  const Scalar _tmp294 = std::asinh(_tmp289 * _tmp293);
  const Scalar _tmp295 = Scalar(1.0) * _tmp294;
  const Scalar _tmp296 = Scalar(1.4083112389913199) * _tmp292;
  const Scalar _tmp297 =
      -_tmp294 * _tmp296 - std::sqrt(Scalar(std::pow(Scalar(-_tmp64 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp68 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp298 = Scalar(0.71007031138673404) * _tmp293;
  const Scalar _tmp299 = _tmp297 * _tmp298;
  const Scalar _tmp300 = -std::sinh(_tmp295) - std::sinh(_tmp299);
  const Scalar _tmp301 = _tmp110 * _tmp119;
  const Scalar _tmp302 = _tmp129 * _tmp133;
  const Scalar _tmp303 = -_tmp187 * _tmp301 - _tmp187 * _tmp302 + _tmp203 * _tmp290 +
                         _tmp216 * _tmp291 - _tmp265 - _tmp266;
  const Scalar _tmp304 = Scalar(1.4083112389913199) * _tmp303;
  const Scalar _tmp305 = std::cosh(_tmp299);
  const Scalar _tmp306 = std::pow(_tmp292, Scalar(-2));
  const Scalar _tmp307 = Scalar(0.71007031138673404) * _tmp297 * _tmp306;
  const Scalar _tmp308 =
      std::pow(Scalar(std::pow(_tmp289, Scalar(2)) * _tmp306 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp309 = _tmp289 * _tmp306;
  const Scalar _tmp310 =
      _tmp308 *
      (_tmp293 * (-_tmp137 * _tmp225 + _tmp137 * _tmp228 - _tmp198 * _tmp288 + _tmp200 * _tmp288 -
                  _tmp202 * _tmp288 + _tmp208 * _tmp287 - _tmp209 * _tmp287 - _tmp215 * _tmp287) -
       _tmp303 * _tmp309);
  const Scalar _tmp311 = Scalar(1.0) * std::cosh(_tmp295);
  const Scalar _tmp312 = _tmp165 * _tmp33;
  const Scalar _tmp313 = -_tmp122 * _tmp168 + _tmp312 * _tmp74 - _tmp75;
  const Scalar _tmp314 = _tmp169 * (_tmp168 * _tmp43 - _tmp312 + _tmp35);
  const Scalar _tmp315 = _tmp314 * _tmp81;
  const Scalar _tmp316 = -_tmp313 * _tmp82 + _tmp315 * _tmp84;
  const Scalar _tmp317 = _tmp168 * _tmp76 - _tmp182;
  const Scalar _tmp318 = _tmp315 * _tmp79 - _tmp316 * _tmp54 - _tmp317 * _tmp82;
  const Scalar _tmp319 = _tmp108 * _tmp318;
  const Scalar _tmp320 = Scalar(1.0) * _tmp314;
  const Scalar _tmp321 = _tmp103 * _tmp313;
  const Scalar _tmp322 = _tmp320 * _tmp84;
  const Scalar _tmp323 =
      -_tmp103 * _tmp317 + _tmp320 * _tmp79 + _tmp321 * _tmp54 - _tmp322 * _tmp54;
  const Scalar _tmp324 = _tmp168 * _tmp30 + _tmp168 * _tmp96 - _tmp17 * _tmp312 + _tmp99;
  const Scalar _tmp325 = _tmp100 * _tmp315 - _tmp324 * _tmp82;
  const Scalar _tmp326 = _tmp186 * _tmp318;
  const Scalar _tmp327 = _tmp127 * (_tmp100 * _tmp320 - _tmp103 * _tmp324 - _tmp106 * _tmp325 -
                                    _tmp196 * _tmp323 + _tmp214 * _tmp326);
  const Scalar _tmp328 = _tmp174 * _tmp325;
  const Scalar _tmp329 = _tmp328 * _tmp86;
  const Scalar _tmp330 = _tmp107 * _tmp329;
  const Scalar _tmp331 = _tmp319 + _tmp323 + _tmp327 - _tmp330;
  const Scalar _tmp332 = _tmp316 * _tmp87;
  const Scalar _tmp333 = _tmp326 * _tmp85;
  const Scalar _tmp334 = -_tmp110 * _tmp332 + _tmp110 * _tmp333 - _tmp156 * _tmp331 +
                         _tmp158 * _tmp319 + _tmp158 * _tmp327 - _tmp158 * _tmp330 - _tmp321 +
                         _tmp322;
  const Scalar _tmp335 = -_tmp332 * _tmp56 + _tmp333 * _tmp56;
  const Scalar _tmp336 = _tmp314 * _tmp43;
  const Scalar _tmp337 = _tmp121 * _tmp313 - _tmp336 * _tmp84;
  const Scalar _tmp338 = _tmp121 * _tmp317 - _tmp336 * _tmp79 - _tmp337 * _tmp54;
  const Scalar _tmp339 = _tmp127 * (-_tmp100 * _tmp336 + _tmp121 * _tmp324 - _tmp125 * _tmp325 -
                                    _tmp196 * _tmp338 + _tmp197 * _tmp326);
  const Scalar _tmp340 = _tmp201 * _tmp318;
  const Scalar _tmp341 = _tmp126 * _tmp329;
  const Scalar _tmp342 = _tmp338 + _tmp339 + _tmp340 - _tmp341;
  const Scalar _tmp343 = -_tmp129 * _tmp332 - _tmp156 * _tmp342 + _tmp158 * _tmp339 +
                         _tmp158 * _tmp340 - _tmp158 * _tmp341 + _tmp229 * _tmp326 + _tmp337;
  const Scalar _tmp344 = _tmp224 * _tmp318;
  const Scalar _tmp345 =
      -_tmp135 * _tmp316 + _tmp141 * _tmp344 - _tmp145 * _tmp329 + _tmp226 * _tmp328;
  const Scalar _tmp346 = _tmp144 * _tmp329;
  const Scalar _tmp347 = _tmp130 * _tmp314;
  const Scalar _tmp348 = _tmp326 * _tmp81;
  const Scalar _tmp349 = _tmp129 * _tmp348 - _tmp342 * _tmp88;
  const Scalar _tmp350 = _tmp326 * _tmp71;
  const Scalar _tmp351 = _tmp168 * _tmp82;
  const Scalar _tmp352 = _tmp110 * _tmp348 - _tmp331 * _tmp88;
  const Scalar _tmp353 =
      -_tmp120 * (-_tmp110 * _tmp350 + _tmp111 * _tmp168 * _tmp47 - _tmp207 * _tmp314 +
                  _tmp331 * _tmp90 + _tmp352 * _tmp49) -
      _tmp134 * (-_tmp129 * _tmp350 + _tmp168 * _tmp250 - _tmp178 * _tmp347 + _tmp342 * _tmp90 +
                 _tmp349 * _tmp49) -
      _tmp138 * (-_tmp135 * _tmp351 - _tmp176 * _tmp328 + _tmp177 * _tmp328 + _tmp179 * _tmp315) -
      _tmp94 * (_tmp189 * _tmp348 + _tmp190 * _tmp314 - _tmp191 * _tmp351 - _tmp350 * _tmp56);
  const Scalar _tmp354 = _tmp164 * (-_tmp219 * _tmp353 +
                                    _tmp220 * (_tmp154 * (-_tmp151 * _tmp345 + _tmp344 - _tmp346) +
                                               _tmp160 * (_tmp144 * _tmp339 + _tmp144 * _tmp340 -
                                                          _tmp144 * _tmp341 - _tmp151 * _tmp343) +
                                               _tmp162 * (_tmp144 * _tmp319 + _tmp144 * _tmp327 -
                                                          _tmp144 * _tmp330 - _tmp151 * _tmp334) -
                                               _tmp232 * _tmp335));
  const Scalar _tmp355 = Scalar(1.4083112389913199) * _tmp353;
  const Scalar _tmp356 = _tmp252 * _tmp326;
  const Scalar _tmp357 = _tmp154 * _tmp328;
  const Scalar _tmp358 = -_tmp133 * _tmp347 + _tmp251 * _tmp315 + _tmp254 * _tmp352 +
                         _tmp267 * _tmp349 + _tmp268 * _tmp314 - _tmp269 * _tmp314 +
                         _tmp356 * _tmp82 + _tmp357 * _tmp82;
  const Scalar _tmp359 =
      _tmp264 * (-_tmp271 * _tmp358 + _tmp272 * (_tmp259 * _tmp343 + _tmp260 * _tmp334 +
                                                 _tmp261 * _tmp345 + _tmp262 * _tmp335));
  const Scalar _tmp360 = _tmp290 * _tmp342 + _tmp291 * _tmp331 - _tmp301 * _tmp326 -
                         _tmp302 * _tmp326 - _tmp356 - _tmp357;
  const Scalar _tmp361 = Scalar(1.4083112389913199) * _tmp360;
  const Scalar _tmp362 =
      _tmp308 *
      (_tmp293 * (-_tmp137 * _tmp344 + _tmp137 * _tmp346 - _tmp287 * _tmp319 - _tmp287 * _tmp327 +
                  _tmp287 * _tmp330 - _tmp288 * _tmp339 - _tmp288 * _tmp340 + _tmp288 * _tmp341) -
       _tmp309 * _tmp360);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp237 *
          (-_tmp233 * _tmp236 -
           _tmp241 * (-_tmp218 * _tmp242 + _tmp239 * (-_tmp233 * _tmp237 - _tmp234 * _tmp243))) +
      _tmp243 * _tmp244;
  _res(2, 0) =
      -_tmp245 * _tmp249 + _tmp270 * _tmp286 +
      _tmp281 * (-_tmp273 * _tmp276 -
                 _tmp285 * (-_tmp270 * _tmp280 + _tmp283 * (-_tmp245 * _tmp282 - _tmp270 * _tmp278 -
                                                            _tmp273 * _tmp281)));
  _res(3, 0) =
      _tmp296 *
          (-_tmp305 * (_tmp298 * (-_tmp294 * _tmp304 - _tmp296 * _tmp310) - _tmp303 * _tmp307) -
           _tmp310 * _tmp311) +
      _tmp300 * _tmp304;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp237 *
          (-_tmp236 * _tmp354 -
           _tmp241 * (_tmp239 * (-_tmp234 * _tmp355 - _tmp237 * _tmp354) - _tmp242 * _tmp353)) +
      _tmp244 * _tmp355;
  _res(2, 1) =
      -_tmp247 * _tmp249 +
      _tmp281 * (-_tmp276 * _tmp359 -
                 _tmp285 * (-_tmp280 * _tmp358 + _tmp283 * (-_tmp247 * _tmp282 - _tmp278 * _tmp358 -
                                                            _tmp281 * _tmp359))) +
      _tmp286 * _tmp358;
  _res(3, 1) =
      _tmp296 *
          (-_tmp305 * (_tmp298 * (-_tmp294 * _tmp361 - _tmp296 * _tmp362) - _tmp307 * _tmp360) -
           _tmp311 * _tmp362) +
      _tmp300 * _tmp361;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp246 * _tmp249;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
