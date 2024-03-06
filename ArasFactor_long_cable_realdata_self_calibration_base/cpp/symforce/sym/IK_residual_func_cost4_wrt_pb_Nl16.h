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
 * Symbolic function: IK_residual_func_cost4_wrt_pb_Nl16
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPbNl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1041

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (323)
  const Scalar _tmp0 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp2;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp0 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_d(0, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp20 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp0 * _tmp12;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = _tmp29 - p_d(1, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = Scalar(1.0) / (_tmp31);
  const Scalar _tmp33 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp34 = _tmp31 * _tmp33;
  const Scalar _tmp35 = _tmp34 * (_tmp17 * _tmp30 * _tmp32 - _tmp19 * _tmp28 * _tmp32);
  const Scalar _tmp36 = _tmp30 * _tmp33;
  const Scalar _tmp37 = _tmp11 - _tmp15;
  const Scalar _tmp38 = _tmp37 + _tmp5;
  const Scalar _tmp39 = _tmp38 + position_vector(0, 0);
  const Scalar _tmp40 = _tmp39 - p_a(0, 0);
  const Scalar _tmp41 = -_tmp21;
  const Scalar _tmp42 = _tmp27 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp43 - p_a(1, 0);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp40 * _tmp45;
  const Scalar _tmp47 = _tmp44 * _tmp45;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp36 * _tmp46 - _tmp47);
  const Scalar _tmp49 = _tmp35 * _tmp46 - _tmp38 * _tmp47 + _tmp42 * _tmp46;
  const Scalar _tmp50 = _tmp48 * _tmp49;
  const Scalar _tmp51 = _tmp37 + _tmp4;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_b(0, 0);
  const Scalar _tmp54 = std::pow(_tmp53, Scalar(2));
  const Scalar _tmp55 = _tmp25 + _tmp26;
  const Scalar _tmp56 = _tmp41 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 - p_b(1, 0);
  const Scalar _tmp59 = std::pow(_tmp58, Scalar(2));
  const Scalar _tmp60 = _tmp54 + _tmp59;
  const Scalar _tmp61 = std::pow(_tmp60, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp58 * _tmp61;
  const Scalar _tmp63 = _tmp56 * _tmp61;
  const Scalar _tmp64 = _tmp36 * _tmp61;
  const Scalar _tmp65 = _tmp53 * _tmp64 - _tmp62;
  const Scalar _tmp66 = _tmp53 * _tmp61;
  const Scalar _tmp67 = _tmp35 * _tmp66 - _tmp50 * _tmp65 - _tmp51 * _tmp62 + _tmp53 * _tmp63;
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp71 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp72 = _tmp70 + _tmp71;
  const Scalar _tmp73 = _tmp69 + _tmp72;
  const Scalar _tmp74 = _tmp61 * _tmp73;
  const Scalar _tmp75 = _tmp53 * _tmp74;
  const Scalar _tmp76 = _tmp70 - _tmp71;
  const Scalar _tmp77 = _tmp68 + _tmp76;
  const Scalar _tmp78 = _tmp61 * _tmp77;
  const Scalar _tmp79 = _tmp46 * _tmp73;
  const Scalar _tmp80 = _tmp69 + _tmp76;
  const Scalar _tmp81 = _tmp48 * (-_tmp36 * _tmp79 + _tmp47 * _tmp80);
  const Scalar _tmp82 = -_tmp36 * _tmp75 + _tmp58 * _tmp78 - _tmp65 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) * _tmp28;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp42 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp17;
  const Scalar _tmp87 = -_tmp38 + _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = -_tmp46 * _tmp80 + _tmp79;
  const Scalar _tmp90 = _tmp48 * _tmp89;
  const Scalar _tmp91 = -_tmp53 * _tmp78 - _tmp65 * _tmp90 + _tmp75 - _tmp82 * _tmp88;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp36 * _tmp73;
  const Scalar _tmp94 = _tmp36 * _tmp81 + _tmp93;
  const Scalar _tmp95 = _tmp36 * _tmp90 - _tmp73 - _tmp88 * _tmp94;
  const Scalar _tmp96 = _tmp92 * _tmp95;
  const Scalar _tmp97 = -_tmp35 + _tmp36 * _tmp50 - _tmp67 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp99 = _tmp91 * _tmp98;
  const Scalar _tmp100 = _tmp97 * _tmp99;
  const Scalar _tmp101 = _tmp100 + _tmp95;
  const Scalar _tmp102 = std::pow(_tmp60, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp103 = _tmp102 * _tmp54;
  const Scalar _tmp104 = _tmp102 * _tmp53 * _tmp58;
  const Scalar _tmp105 = _tmp103 * _tmp36 - _tmp104 - _tmp64;
  const Scalar _tmp106 = _tmp104 * _tmp77;
  const Scalar _tmp107 = -_tmp103 * _tmp93 - _tmp105 * _tmp81 + _tmp106 + _tmp36 * _tmp74;
  const Scalar _tmp108 =
      _tmp103 * _tmp73 - _tmp103 * _tmp77 - _tmp105 * _tmp90 - _tmp107 * _tmp88 - _tmp74 + _tmp78;
  const Scalar _tmp109 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp66;
  const Scalar _tmp112 = _tmp101 * _tmp92;
  const Scalar _tmp113 = _tmp97 * _tmp98;
  const Scalar _tmp114 = _tmp108 * _tmp113;
  const Scalar _tmp115 = _tmp110 * _tmp67;
  const Scalar _tmp116 = _tmp103 * _tmp35 + _tmp103 * _tmp56 - _tmp104 * _tmp51 - _tmp105 * _tmp50 -
                         _tmp35 * _tmp61 - _tmp63;
  const Scalar _tmp117 = _tmp99 * (_tmp115 * _tmp95 - _tmp116 * _tmp96);
  const Scalar _tmp118 = std::pow(_tmp67, Scalar(-2));
  const Scalar _tmp119 = _tmp116 * _tmp118;
  const Scalar _tmp120 = _tmp91 * _tmp97;
  const Scalar _tmp121 = _tmp119 * _tmp120;
  const Scalar _tmp122 = _tmp114 + _tmp117 - _tmp121;
  const Scalar _tmp123 = _tmp122 * _tmp92;
  const Scalar _tmp124 = _tmp109 * _tmp65;
  const Scalar _tmp125 = _tmp108 * _tmp124;
  const Scalar _tmp126 = _tmp65 * _tmp92;
  const Scalar _tmp127 = _tmp101 * _tmp125 - _tmp105 * _tmp112 - _tmp122 * _tmp126;
  const Scalar _tmp128 = _tmp46 * _tmp48;
  const Scalar _tmp129 = _tmp112 * _tmp61;
  const Scalar _tmp130 = _tmp16 + _tmp4;
  const Scalar _tmp131 = _tmp130 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp132 = _tmp21 + _tmp55;
  const Scalar _tmp133 = _tmp132 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp134 =
      std::pow(Scalar(std::pow(_tmp131, Scalar(2)) + std::pow(_tmp133, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp135 = _tmp131 * _tmp134;
  const Scalar _tmp136 = _tmp135 * fh1;
  const Scalar _tmp137 = _tmp136 * _tmp34;
  const Scalar _tmp138 = Scalar(1.0) * _tmp48;
  const Scalar _tmp139 = _tmp138 * _tmp65;
  const Scalar _tmp140 = _tmp139 * _tmp46;
  const Scalar _tmp141 = Scalar(1.0) * _tmp98;
  const Scalar _tmp142 = _tmp128 * _tmp141;
  const Scalar _tmp143 = Scalar(1.0) * _tmp66;
  const Scalar _tmp144 = _tmp141 * _tmp61;
  const Scalar _tmp145 = _tmp133 * _tmp134;
  const Scalar _tmp146 = fh1 * (_tmp130 * _tmp145 - _tmp132 * _tmp135);
  const Scalar _tmp147 = _tmp146 * _tmp34;
  const Scalar _tmp148 = Scalar(1.0) * _tmp85;
  const Scalar _tmp149 = -_tmp138 * _tmp89 + _tmp148 * _tmp81 * _tmp87;
  const Scalar _tmp150 = _tmp149 * _tmp92;
  const Scalar _tmp151 = -_tmp138 * _tmp49 - _tmp150 * _tmp67;
  const Scalar _tmp152 = _tmp151 * _tmp99;
  const Scalar _tmp153 = _tmp149 + _tmp152;
  const Scalar _tmp154 = _tmp153 * _tmp92;
  const Scalar _tmp155 = _tmp151 * _tmp98;
  const Scalar _tmp156 = _tmp108 * _tmp155;
  const Scalar _tmp157 = _tmp99 * (_tmp115 * _tmp149 - _tmp116 * _tmp150);
  const Scalar _tmp158 = _tmp151 * _tmp91;
  const Scalar _tmp159 = _tmp119 * _tmp158;
  const Scalar _tmp160 = _tmp156 + _tmp157 - _tmp159;
  const Scalar _tmp161 = -_tmp105 * _tmp154 + _tmp125 * _tmp153 - _tmp126 * _tmp160;
  const Scalar _tmp162 = _tmp66 * _tmp92;
  const Scalar _tmp163 = _tmp154 * _tmp61;
  const Scalar _tmp164 = _tmp145 * fh1;
  const Scalar _tmp165 = _tmp164 * _tmp34;
  const Scalar _tmp166 = _tmp83 * _tmp88 + _tmp86;
  const Scalar _tmp167 = 0;
  const Scalar _tmp168 = _tmp167 * _tmp92;
  const Scalar _tmp169 = _tmp128 * _tmp167;
  const Scalar _tmp170 = _tmp168 * _tmp61;
  const Scalar _tmp171 = _tmp128 * _tmp168;
  const Scalar _tmp172 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp173 = _tmp172 * _tmp34;
  const Scalar _tmp174 = -_tmp137 * (-_tmp101 * _tmp111 + _tmp103 * _tmp112 + _tmp123 * _tmp66 +
                                     _tmp127 * _tmp128 - _tmp129) -
                         _tmp147 * (_tmp103 * _tmp141 - _tmp105 * _tmp142 + _tmp119 * _tmp140 -
                                    _tmp119 * _tmp143 - _tmp144) -
                         _tmp165 * (_tmp103 * _tmp154 - _tmp111 * _tmp153 + _tmp128 * _tmp161 +
                                    _tmp160 * _tmp162 - _tmp163) -
                         _tmp173 * (_tmp103 * _tmp168 - _tmp105 * _tmp171 - _tmp111 * _tmp167 +
                                    _tmp125 * _tmp169 - _tmp170);
  const Scalar _tmp175 = -_tmp112 * _tmp65 - _tmp36;
  const Scalar _tmp176 = -_tmp154 * _tmp65 + Scalar(1.0);
  const Scalar _tmp177 = -_tmp137 * (_tmp128 * _tmp175 + _tmp129 * _tmp53 + Scalar(1.0)) -
                         _tmp147 * (-_tmp142 * _tmp65 + _tmp144 * _tmp53) -
                         _tmp165 * (_tmp128 * _tmp176 + _tmp163 * _tmp53) -
                         _tmp173 * (-_tmp126 * _tmp169 + _tmp170 * _tmp53);
  const Scalar _tmp178 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp179 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp180 = _tmp56 + _tmp84;
  const Scalar _tmp181 = _tmp180 * _tmp88;
  const Scalar _tmp182 = Scalar(1.0) / (-_tmp181 - _tmp51 + _tmp86);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = _tmp180 * _tmp182;
  const Scalar _tmp185 = _tmp100 * _tmp184 - _tmp112 * _tmp82 + _tmp94;
  const Scalar _tmp186 = Scalar(1.0) * _tmp136;
  const Scalar _tmp187 = _tmp183 * _tmp99;
  const Scalar _tmp188 = -_tmp141 * _tmp82 + _tmp180 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp146;
  const Scalar _tmp190 = _tmp152 * _tmp184 - _tmp154 * _tmp82 - Scalar(1.0) * _tmp81;
  const Scalar _tmp191 = Scalar(1.0) * _tmp164;
  const Scalar _tmp192 = fh1 * (_tmp68 + _tmp72);
  const Scalar _tmp193 = Scalar(40.024799999999999) * _tmp10 + _tmp130 * fv1 + _tmp135 * _tmp192;
  const Scalar _tmp194 = _tmp180 * _tmp85;
  const Scalar _tmp195 = -_tmp132 * fv1 - _tmp145 * _tmp192 - Scalar(40.024799999999999) * _tmp24;
  const Scalar _tmp196 = _tmp181 * _tmp183 + Scalar(1.0);
  const Scalar _tmp197 = _tmp183 * _tmp88;
  const Scalar _tmp198 = _tmp166 * _tmp182;
  const Scalar _tmp199 = _tmp82 * _tmp92;
  const Scalar _tmp200 = -_tmp167 * _tmp199 - _tmp180 * _tmp198 + _tmp84;
  const Scalar _tmp201 =
      Scalar(1.0) * _tmp172 * (-_tmp148 * _tmp200 - _tmp166 * _tmp183 + Scalar(1.0)) +
      _tmp186 * (_tmp100 * _tmp183 - _tmp148 * _tmp185) + _tmp189 * (-_tmp148 * _tmp188 + _tmp187) +
      _tmp191 * (-_tmp148 * _tmp190 + _tmp152 * _tmp183) +
      Scalar(1.0) * _tmp193 * (_tmp183 * _tmp194 - _tmp183) +
      Scalar(1.0) * _tmp195 * (-_tmp148 * _tmp196 + _tmp197);
  const Scalar _tmp202 = std::asinh(_tmp179 * _tmp201);
  const Scalar _tmp203 = Scalar(1.4083112389913199) * _tmp202;
  const Scalar _tmp204 =
      -_tmp177 * _tmp203 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp29 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp205 = Scalar(0.71007031138673404) * _tmp178 * _tmp204;
  const Scalar _tmp206 = Scalar(1.4083112389913199) * _tmp177;
  const Scalar _tmp207 =
      std::pow(Scalar(_tmp178 * std::pow(_tmp201, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp208 = _tmp110 * _tmp82;
  const Scalar _tmp209 = -_tmp107 * _tmp154 + _tmp153 * _tmp208 + _tmp156 * _tmp184 +
                         _tmp157 * _tmp184 - _tmp159 * _tmp184 - _tmp160 * _tmp199;
  const Scalar _tmp210 = -_tmp107 * _tmp168 + _tmp167 * _tmp208;
  const Scalar _tmp211 = _tmp148 * _tmp172;
  const Scalar _tmp212 = _tmp101 * _tmp208 - _tmp107 * _tmp112 + _tmp114 * _tmp184 +
                         _tmp117 * _tmp184 - _tmp121 * _tmp184 - _tmp122 * _tmp199;
  const Scalar _tmp213 = _tmp183 * _tmp98;
  const Scalar _tmp214 = _tmp108 * _tmp213;
  const Scalar _tmp215 = _tmp183 * _tmp91;
  const Scalar _tmp216 = _tmp119 * _tmp215;
  const Scalar _tmp217 = Scalar(1.0) * _tmp82;
  const Scalar _tmp218 =
      -_tmp107 * _tmp141 + _tmp119 * _tmp217 + _tmp180 * _tmp214 - _tmp180 * _tmp216;
  const Scalar _tmp219 = _tmp178 * _tmp201;
  const Scalar _tmp220 = _tmp207 * (-_tmp174 * _tmp219 +
                                    _tmp179 * (_tmp186 * (_tmp114 * _tmp183 + _tmp117 * _tmp183 -
                                                          _tmp121 * _tmp183 - _tmp148 * _tmp212) +
                                               _tmp189 * (-_tmp148 * _tmp218 + _tmp214 - _tmp216) +
                                               _tmp191 * (-_tmp148 * _tmp209 + _tmp156 * _tmp183 +
                                                          _tmp157 * _tmp183 - _tmp159 * _tmp183) -
                                               _tmp210 * _tmp211));
  const Scalar _tmp221 = Scalar(0.71007031138673404) * _tmp179;
  const Scalar _tmp222 = _tmp204 * _tmp221;
  const Scalar _tmp223 = std::cosh(_tmp222);
  const Scalar _tmp224 = Scalar(1.0) * _tmp202;
  const Scalar _tmp225 = Scalar(1.0) * std::cosh(_tmp224);
  const Scalar _tmp226 = -Scalar(1.4083112389913199) * std::sinh(_tmp222) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp224);
  const Scalar _tmp227 = _tmp164 * _tmp48;
  const Scalar _tmp228 = _tmp141 * _tmp146;
  const Scalar _tmp229 = _tmp228 * _tmp48;
  const Scalar _tmp230 = _tmp139 * _tmp146;
  const Scalar _tmp231 = _tmp168 * _tmp172;
  const Scalar _tmp232 = _tmp231 * _tmp48;
  const Scalar _tmp233 = _tmp136 * _tmp48;
  const Scalar _tmp234 = _tmp167 * _tmp172;
  const Scalar _tmp235 = _tmp234 * _tmp48;
  const Scalar _tmp236 = -_tmp105 * _tmp229 - _tmp105 * _tmp232 + _tmp119 * _tmp230 +
                         _tmp125 * _tmp235 + _tmp127 * _tmp233 + _tmp161 * _tmp227;
  const Scalar _tmp237 =
      -_tmp126 * _tmp235 + _tmp175 * _tmp233 + _tmp176 * _tmp227 - _tmp229 * _tmp65;
  const Scalar _tmp238 = _tmp146 * _tmp85;
  const Scalar _tmp239 = _tmp164 * _tmp85;
  const Scalar _tmp240 = _tmp136 * _tmp85;
  const Scalar _tmp241 = _tmp172 * _tmp85;
  const Scalar _tmp242 = _tmp183 * _tmp193;
  const Scalar _tmp243 = _tmp185 * _tmp240 + _tmp188 * _tmp238 + _tmp190 * _tmp239 -
                         _tmp194 * _tmp242 + _tmp195 * _tmp196 * _tmp85 + _tmp200 * _tmp241;
  const Scalar _tmp244 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp245 = std::asinh(_tmp243 * _tmp244);
  const Scalar _tmp246 = Scalar(1.4083112389913199) * _tmp245;
  const Scalar _tmp247 =
      -_tmp237 * _tmp246 - std::sqrt(Scalar(std::pow(Scalar(-_tmp39 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp43 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp248 = Scalar(0.71007031138673404) * _tmp244;
  const Scalar _tmp249 = _tmp247 * _tmp248;
  const Scalar _tmp250 = Scalar(1.0) * _tmp245;
  const Scalar _tmp251 = -Scalar(1.4083112389913199) * std::sinh(_tmp249) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp250);
  const Scalar _tmp252 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp253 = _tmp243 * _tmp252;
  const Scalar _tmp254 =
      std::pow(Scalar(std::pow(_tmp243, Scalar(2)) * _tmp252 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp255 =
      _tmp254 * (-_tmp236 * _tmp253 + _tmp244 * (_tmp209 * _tmp239 + _tmp210 * _tmp241 +
                                                 _tmp212 * _tmp240 + _tmp218 * _tmp238));
  const Scalar _tmp256 = Scalar(1.0) * std::cosh(_tmp250);
  const Scalar _tmp257 = std::cosh(_tmp249);
  const Scalar _tmp258 = Scalar(1.4083112389913199) * _tmp237;
  const Scalar _tmp259 = Scalar(0.71007031138673404) * _tmp247 * _tmp252;
  const Scalar _tmp260 = _tmp112 * _tmp136 + _tmp154 * _tmp164 + _tmp228 + _tmp231;
  const Scalar _tmp261 = Scalar(1.0) / (_tmp260);
  const Scalar _tmp262 = _tmp164 * _tmp182;
  const Scalar _tmp263 = _tmp136 * _tmp182;
  const Scalar _tmp264 = -_tmp100 * _tmp263 - _tmp146 * _tmp187 - _tmp152 * _tmp262 +
                         _tmp172 * _tmp198 - _tmp195 * _tmp197 + _tmp242;
  const Scalar _tmp265 = std::asinh(_tmp261 * _tmp264);
  const Scalar _tmp266 = Scalar(1.0) * _tmp265;
  const Scalar _tmp267 = -_tmp57 + p_b(1, 0);
  const Scalar _tmp268 = -_tmp52 + p_b(0, 0);
  const Scalar _tmp269 =
      std::sqrt(Scalar(std::pow(_tmp267, Scalar(2)) + std::pow(_tmp268, Scalar(2))));
  const Scalar _tmp270 = Scalar(1.4083112389913199) * _tmp260;
  const Scalar _tmp271 = -_tmp265 * _tmp270 - _tmp269;
  const Scalar _tmp272 = Scalar(0.71007031138673404) * _tmp261;
  const Scalar _tmp273 = _tmp271 * _tmp272;
  const Scalar _tmp274 = -std::sinh(_tmp266) - std::sinh(_tmp273);
  const Scalar _tmp275 = _tmp153 * _tmp164;
  const Scalar _tmp276 = _tmp164 * _tmp92;
  const Scalar _tmp277 = -_tmp101 * _tmp110 * _tmp136 - _tmp110 * _tmp234 - _tmp110 * _tmp275 -
                         _tmp119 * _tmp189 + _tmp123 * _tmp136 + _tmp160 * _tmp276;
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp277;
  const Scalar _tmp279 = std::pow(_tmp260, Scalar(-2));
  const Scalar _tmp280 = Scalar(0.71007031138673404) * _tmp271 * _tmp279;
  const Scalar _tmp281 = Scalar(1.0) / (_tmp269);
  const Scalar _tmp282 =
      std::pow(Scalar(std::pow(_tmp264, Scalar(2)) * _tmp279 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp283 = _tmp264 * _tmp279;
  const Scalar _tmp284 =
      _tmp282 *
      (_tmp261 * (-_tmp114 * _tmp263 - _tmp117 * _tmp263 + _tmp121 * _tmp263 - _tmp146 * _tmp214 +
                  _tmp146 * _tmp216 - _tmp156 * _tmp262 - _tmp157 * _tmp262 + _tmp159 * _tmp262) -
       _tmp277 * _tmp283);
  const Scalar _tmp285 = std::cosh(_tmp273);
  const Scalar _tmp286 = Scalar(1.0) * std::cosh(_tmp266);
  const Scalar _tmp287 = _tmp102 * _tmp59;
  const Scalar _tmp288 = _tmp104 * _tmp36 - _tmp287 + _tmp61;
  const Scalar _tmp289 = -_tmp104 * _tmp93 + _tmp287 * _tmp77 - _tmp288 * _tmp81 - _tmp78;
  const Scalar _tmp290 = _tmp104 * _tmp73 - _tmp106 - _tmp288 * _tmp90 - _tmp289 * _tmp88;
  const Scalar _tmp291 = _tmp101 * _tmp290;
  const Scalar _tmp292 = _tmp109 * _tmp291;
  const Scalar _tmp293 =
      _tmp104 * _tmp35 + _tmp104 * _tmp56 - _tmp287 * _tmp51 - _tmp288 * _tmp50 + _tmp51 * _tmp61;
  const Scalar _tmp294 = _tmp118 * _tmp293;
  const Scalar _tmp295 = _tmp120 * _tmp294;
  const Scalar _tmp296 = _tmp113 * _tmp290;
  const Scalar _tmp297 = _tmp109 * _tmp290;
  const Scalar _tmp298 = _tmp297 * _tmp67;
  const Scalar _tmp299 = _tmp99 * (-_tmp293 * _tmp96 + _tmp298 * _tmp95);
  const Scalar _tmp300 = -_tmp295 + _tmp296 + _tmp299;
  const Scalar _tmp301 = -_tmp112 * _tmp288 + _tmp124 * _tmp291 - _tmp126 * _tmp300;
  const Scalar _tmp302 = _tmp124 * _tmp290;
  const Scalar _tmp303 = _tmp297 * _tmp66;
  const Scalar _tmp304 = _tmp99 * (_tmp149 * _tmp298 - _tmp150 * _tmp293);
  const Scalar _tmp305 = _tmp155 * _tmp290;
  const Scalar _tmp306 = _tmp158 * _tmp294;
  const Scalar _tmp307 = _tmp304 + _tmp305 - _tmp306;
  const Scalar _tmp308 = -_tmp126 * _tmp307 + _tmp153 * _tmp302 - _tmp154 * _tmp288;
  const Scalar _tmp309 =
      -_tmp137 * (_tmp104 * _tmp112 + _tmp128 * _tmp301 + _tmp162 * _tmp300 - _tmp292 * _tmp66) -
      _tmp147 * (_tmp104 * _tmp141 + _tmp140 * _tmp294 - _tmp142 * _tmp288 - _tmp143 * _tmp294) -
      _tmp165 * (_tmp104 * _tmp154 + _tmp128 * _tmp308 - _tmp153 * _tmp303 + _tmp162 * _tmp307) -
      _tmp173 * (_tmp104 * _tmp168 - _tmp167 * _tmp303 + _tmp169 * _tmp302 - _tmp171 * _tmp288);
  const Scalar _tmp310 = -_tmp112 * _tmp289 - _tmp184 * _tmp295 + _tmp184 * _tmp296 +
                         _tmp184 * _tmp299 - _tmp199 * _tmp300 + _tmp292 * _tmp82;
  const Scalar _tmp311 = _tmp297 * _tmp82;
  const Scalar _tmp312 = _tmp153 * _tmp311 - _tmp154 * _tmp289 + _tmp184 * _tmp304 +
                         _tmp184 * _tmp305 - _tmp184 * _tmp306 - _tmp199 * _tmp307;
  const Scalar _tmp313 = _tmp167 * _tmp311 - _tmp168 * _tmp289;
  const Scalar _tmp314 = _tmp215 * _tmp294;
  const Scalar _tmp315 = _tmp213 * _tmp290;
  const Scalar _tmp316 =
      -_tmp141 * _tmp289 - _tmp180 * _tmp314 + _tmp180 * _tmp315 + _tmp217 * _tmp294;
  const Scalar _tmp317 = _tmp207 * (_tmp179 * (_tmp186 * (-_tmp148 * _tmp310 - _tmp183 * _tmp295 +
                                                          _tmp183 * _tmp296 + _tmp183 * _tmp299) +
                                               _tmp189 * (-_tmp148 * _tmp316 - _tmp314 + _tmp315) +
                                               _tmp191 * (-_tmp148 * _tmp312 + _tmp183 * _tmp304 +
                                                          _tmp183 * _tmp305 - _tmp183 * _tmp306) -
                                               _tmp211 * _tmp313) -
                                    _tmp219 * _tmp309);
  const Scalar _tmp318 = _tmp227 * _tmp308 - _tmp229 * _tmp288 + _tmp230 * _tmp294 -
                         _tmp232 * _tmp288 + _tmp233 * _tmp301 + _tmp235 * _tmp302;
  const Scalar _tmp319 =
      _tmp254 *
      (_tmp244 * (_tmp238 * _tmp316 + _tmp239 * _tmp312 + _tmp240 * _tmp310 + _tmp241 * _tmp313) -
       _tmp253 * _tmp318);
  const Scalar _tmp320 = -_tmp136 * _tmp292 + _tmp136 * _tmp300 * _tmp92 - _tmp189 * _tmp294 -
                         _tmp234 * _tmp297 - _tmp275 * _tmp297 + _tmp276 * _tmp307;
  const Scalar _tmp321 =
      _tmp282 *
      (_tmp261 * (_tmp146 * _tmp314 - _tmp146 * _tmp315 - _tmp262 * _tmp304 - _tmp262 * _tmp305 +
                  _tmp262 * _tmp306 + _tmp263 * _tmp295 - _tmp263 * _tmp296 - _tmp263 * _tmp299) -
       _tmp283 * _tmp320);
  const Scalar _tmp322 = Scalar(1.4083112389913199) * _tmp320;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp174 * _tmp226 +
      _tmp206 *
          (-_tmp220 * _tmp225 -
           _tmp223 * (-_tmp174 * _tmp205 + _tmp221 * (-_tmp174 * _tmp203 - _tmp206 * _tmp220)));
  _res(2, 0) =
      _tmp236 * _tmp251 +
      _tmp258 *
          (-_tmp255 * _tmp256 -
           _tmp257 * (-_tmp236 * _tmp259 + _tmp248 * (-_tmp236 * _tmp246 - _tmp255 * _tmp258)));
  _res(3, 0) =
      _tmp270 * (-_tmp284 * _tmp286 -
                 _tmp285 * (_tmp272 * (-_tmp265 * _tmp278 - _tmp268 * _tmp281 - _tmp270 * _tmp284) -
                            _tmp277 * _tmp280)) +
      _tmp274 * _tmp278;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp206 *
          (-_tmp223 * (-_tmp205 * _tmp309 + _tmp221 * (-_tmp203 * _tmp309 - _tmp206 * _tmp317)) -
           _tmp225 * _tmp317) +
      _tmp226 * _tmp309;
  _res(2, 1) =
      _tmp251 * _tmp318 + _tmp258 * (-_tmp256 * _tmp319 -
                                     _tmp257 * (_tmp248 * (-_tmp246 * _tmp318 - _tmp258 * _tmp319) -
                                                _tmp259 * _tmp318));
  _res(3, 1) =
      _tmp270 *
          (-_tmp285 * (_tmp272 * (-_tmp265 * _tmp322 - _tmp267 * _tmp281 - _tmp270 * _tmp321) -
                       _tmp280 * _tmp320) -
           _tmp286 * _tmp321) +
      _tmp274 * _tmp322;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym