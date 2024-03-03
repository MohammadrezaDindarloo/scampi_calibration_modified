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
 * Symbolic function: IK_residual_func_cost2_wrt_pa_Nl16
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPaNl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1147

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (360)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp4;
  const Scalar _tmp12 = _tmp0 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp18 = _tmp11 + _tmp12;
  const Scalar _tmp19 = -Scalar(0.010999999999999999) * _tmp18;
  const Scalar _tmp20 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp21 = _tmp1 * _tmp5;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp20 - Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp19 - _tmp22;
  const Scalar _tmp24 = _tmp17 + _tmp23;
  const Scalar _tmp25 = _tmp24 + position_vector(0, 0);
  const Scalar _tmp26 = _tmp25 - p_b(0, 0);
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp28 = -_tmp27;
  const Scalar _tmp29 = _tmp3 - _tmp6;
  const Scalar _tmp30 = -Scalar(0.010999999999999999) * _tmp29;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = _tmp28 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(1, 0);
  const Scalar _tmp35 = _tmp34 - p_b(1, 0);
  const Scalar _tmp36 = std::pow(Scalar(std::pow(_tmp26, Scalar(2)) + std::pow(_tmp35, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp26 * _tmp36;
  const Scalar _tmp38 = -_tmp7;
  const Scalar _tmp39 = _tmp10 + _tmp13;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp35 * _tmp36;
  const Scalar _tmp42 = -_tmp17;
  const Scalar _tmp43 = _tmp19 + _tmp22;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_d(0, 0);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp30 - _tmp31;
  const Scalar _tmp49 = _tmp27 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_d(1, 0);
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = _tmp15 * _tmp52;
  const Scalar _tmp54 = _tmp23 + _tmp42;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_a(0, 0);
  const Scalar _tmp57 = std::pow(_tmp56, Scalar(2));
  const Scalar _tmp58 = _tmp28 + _tmp48;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_a(1, 0);
  const Scalar _tmp61 = std::pow(_tmp60, Scalar(2));
  const Scalar _tmp62 = _tmp57 + _tmp61;
  const Scalar _tmp63 = std::pow(_tmp62, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp15 * _tmp63;
  const Scalar _tmp65 = _tmp56 * _tmp64;
  const Scalar _tmp66 = _tmp14 + _tmp38;
  const Scalar _tmp67 = _tmp60 * _tmp63;
  const Scalar _tmp68 = -_tmp52 * _tmp65 + _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp37 * _tmp52 - _tmp41;
  const Scalar _tmp70 = _tmp52 * _tmp63;
  const Scalar _tmp71 = _tmp56 * _tmp70 - _tmp67;
  const Scalar _tmp72 = Scalar(1.0) / (_tmp71);
  const Scalar _tmp73 = _tmp69 * _tmp72;
  const Scalar _tmp74 = -_tmp37 * _tmp53 + _tmp40 * _tmp41 - _tmp68 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) * _tmp49;
  const Scalar _tmp76 = -_tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp58 + _tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp44;
  const Scalar _tmp79 = _tmp77 * (-_tmp54 + _tmp78);
  const Scalar _tmp80 = _tmp63 * _tmp66;
  const Scalar _tmp81 = -_tmp56 * _tmp80 + _tmp65;
  const Scalar _tmp82 = _tmp15 * _tmp37 - _tmp37 * _tmp40 - _tmp73 * _tmp81 - _tmp74 * _tmp79;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = _tmp75 * _tmp79 + _tmp78;
  const Scalar _tmp85 = 0;
  const Scalar _tmp86 = _tmp83 * _tmp85;
  const Scalar _tmp87 = _tmp63 * _tmp73;
  const Scalar _tmp88 = _tmp86 * _tmp87;
  const Scalar _tmp89 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp91 = _tmp47 * _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp94 = _tmp91 * (_tmp44 * _tmp51 * _tmp93 - _tmp46 * _tmp49 * _tmp93);
  const Scalar _tmp95 = _tmp63 * _tmp94;
  const Scalar _tmp96 = _tmp58 * _tmp63;
  const Scalar _tmp97 = -_tmp54 * _tmp67 + _tmp56 * _tmp95 + _tmp56 * _tmp96;
  const Scalar _tmp98 = -_tmp24 * _tmp41 + _tmp33 * _tmp37 + _tmp37 * _tmp94 - _tmp73 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = Scalar(1.0) * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp87;
  const Scalar _tmp102 = _tmp27 + _tmp32;
  const Scalar _tmp103 = _tmp17 + _tmp43;
  const Scalar _tmp104 = _tmp103 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp105 = _tmp102 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp104 * _tmp106;
  const Scalar _tmp108 = _tmp105 * _tmp106;
  const Scalar _tmp109 = fh1 * (-_tmp102 * _tmp107 + _tmp103 * _tmp108);
  const Scalar _tmp110 = _tmp109 * _tmp91;
  const Scalar _tmp111 = _tmp52 * _tmp72;
  const Scalar _tmp112 = _tmp111 * _tmp68 + _tmp53;
  const Scalar _tmp113 = _tmp111 * _tmp81 - _tmp112 * _tmp79 - _tmp15;
  const Scalar _tmp114 = _tmp113 * _tmp83;
  const Scalar _tmp115 = _tmp111 * _tmp97 - _tmp114 * _tmp98 - _tmp94;
  const Scalar _tmp116 = _tmp82 * _tmp99;
  const Scalar _tmp117 = _tmp115 * _tmp116;
  const Scalar _tmp118 = _tmp113 + _tmp117;
  const Scalar _tmp119 = _tmp37 * _tmp83;
  const Scalar _tmp120 = _tmp69 * _tmp83;
  const Scalar _tmp121 = -_tmp118 * _tmp120 - _tmp52;
  const Scalar _tmp122 = _tmp63 * _tmp72;
  const Scalar _tmp123 = _tmp121 * _tmp122;
  const Scalar _tmp124 = _tmp107 * fh1;
  const Scalar _tmp125 = _tmp124 * _tmp91;
  const Scalar _tmp126 = Scalar(1.0) * _tmp72;
  const Scalar _tmp127 = _tmp126 * _tmp68;
  const Scalar _tmp128 = -_tmp126 * _tmp81 + _tmp127 * _tmp79;
  const Scalar _tmp129 = _tmp83 * _tmp98;
  const Scalar _tmp130 = -_tmp126 * _tmp97 - _tmp128 * _tmp129;
  const Scalar _tmp131 = _tmp116 * _tmp130;
  const Scalar _tmp132 = _tmp128 + _tmp131;
  const Scalar _tmp133 = -_tmp120 * _tmp132 + Scalar(1.0);
  const Scalar _tmp134 = _tmp122 * _tmp133;
  const Scalar _tmp135 = _tmp108 * fh1;
  const Scalar _tmp136 = _tmp135 * _tmp91;
  const Scalar _tmp137 = -_tmp110 * (_tmp100 * _tmp37 - _tmp101 * _tmp56) -
                         _tmp125 * (_tmp118 * _tmp119 + _tmp123 * _tmp56 + Scalar(1.0)) -
                         _tmp136 * (_tmp119 * _tmp132 + _tmp134 * _tmp56) -
                         _tmp92 * (_tmp37 * _tmp86 - _tmp56 * _tmp88);
  const Scalar _tmp138 = std::pow(_tmp137, Scalar(-2));
  const Scalar _tmp139 = _tmp33 + _tmp76;
  const Scalar _tmp140 = _tmp139 * _tmp79;
  const Scalar _tmp141 = Scalar(1.0) / (-_tmp140 - _tmp24 + _tmp78);
  const Scalar _tmp142 = Scalar(1.0) * _tmp141;
  const Scalar _tmp143 = _tmp139 * _tmp141;
  const Scalar _tmp144 = _tmp74 * _tmp83;
  const Scalar _tmp145 = _tmp112 + _tmp117 * _tmp143 - _tmp118 * _tmp144;
  const Scalar _tmp146 = Scalar(1.0) * _tmp77;
  const Scalar _tmp147 = Scalar(1.0) * _tmp124;
  const Scalar _tmp148 = _tmp116 * _tmp142;
  const Scalar _tmp149 = -_tmp100 * _tmp74 + _tmp139 * _tmp148;
  const Scalar _tmp150 = Scalar(1.0) * _tmp109;
  const Scalar _tmp151 = -_tmp127 + _tmp131 * _tmp143 - _tmp132 * _tmp144;
  const Scalar _tmp152 = Scalar(1.0) * _tmp135;
  const Scalar _tmp153 = fh1 * (_tmp39 + _tmp7);
  const Scalar _tmp154 = _tmp103 * fv1 + _tmp107 * _tmp153 + Scalar(40.024799999999999) * _tmp18;
  const Scalar _tmp155 = _tmp139 * _tmp77;
  const Scalar _tmp156 = -_tmp102 * fv1 - _tmp108 * _tmp153 - Scalar(40.024799999999999) * _tmp29;
  const Scalar _tmp157 = _tmp140 * _tmp142 + Scalar(1.0);
  const Scalar _tmp158 = _tmp142 * _tmp79;
  const Scalar _tmp159 = _tmp141 * _tmp84;
  const Scalar _tmp160 = -_tmp139 * _tmp159 - _tmp144 * _tmp85 + _tmp76;
  const Scalar _tmp161 =
      _tmp147 * (_tmp117 * _tmp142 - _tmp145 * _tmp146) + _tmp150 * (-_tmp146 * _tmp149 + _tmp148) +
      _tmp152 * (_tmp131 * _tmp142 - _tmp146 * _tmp151) +
      Scalar(1.0) * _tmp154 * (_tmp142 * _tmp155 - _tmp142) +
      Scalar(1.0) * _tmp156 * (-_tmp146 * _tmp157 + _tmp158) +
      Scalar(1.0) * _tmp89 * (-_tmp142 * _tmp84 - _tmp146 * _tmp160 + Scalar(1.0));
  const Scalar _tmp162 =
      std::pow(Scalar(_tmp138 * std::pow(_tmp161, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp163 = Scalar(1.0) / (_tmp137);
  const Scalar _tmp164 = std::pow(_tmp62, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp165 = _tmp164 * _tmp57;
  const Scalar _tmp166 = _tmp164 * _tmp56 * _tmp60;
  const Scalar _tmp167 = _tmp165 * _tmp52 - _tmp166 - _tmp70;
  const Scalar _tmp168 = std::pow(_tmp71, Scalar(-2));
  const Scalar _tmp169 = _tmp168 * _tmp69;
  const Scalar _tmp170 = _tmp167 * _tmp169;
  const Scalar _tmp171 = _tmp15 * _tmp165;
  const Scalar _tmp172 = _tmp166 * _tmp66;
  const Scalar _tmp173 = -_tmp171 * _tmp52 + _tmp172 + _tmp52 * _tmp64;
  const Scalar _tmp174 = _tmp170 * _tmp68 - _tmp173 * _tmp73;
  const Scalar _tmp175 = -_tmp165 * _tmp66 + _tmp171 - _tmp64 + _tmp80;
  const Scalar _tmp176 = _tmp170 * _tmp81 - _tmp174 * _tmp79 - _tmp175 * _tmp73;
  const Scalar _tmp177 = _tmp176 * _tmp99;
  const Scalar _tmp178 = _tmp142 * _tmp177;
  const Scalar _tmp179 = _tmp165 * _tmp58 + _tmp165 * _tmp94 - _tmp166 * _tmp54 - _tmp95 - _tmp96;
  const Scalar _tmp180 = _tmp170 * _tmp97 - _tmp179 * _tmp73;
  const Scalar _tmp181 = std::pow(_tmp98, Scalar(-2));
  const Scalar _tmp182 = _tmp180 * _tmp181;
  const Scalar _tmp183 = _tmp182 * _tmp82;
  const Scalar _tmp184 = _tmp142 * _tmp183;
  const Scalar _tmp185 = Scalar(1.0) * _tmp74;
  const Scalar _tmp186 =
      -_tmp100 * _tmp174 + _tmp139 * _tmp178 - _tmp139 * _tmp184 + _tmp182 * _tmp185;
  const Scalar _tmp187 = _tmp130 * _tmp177;
  const Scalar _tmp188 = Scalar(1.0) * _tmp168;
  const Scalar _tmp189 = _tmp167 * _tmp188;
  const Scalar _tmp190 = _tmp128 * _tmp83;
  const Scalar _tmp191 = std::pow(_tmp82, Scalar(-2));
  const Scalar _tmp192 = _tmp176 * _tmp191;
  const Scalar _tmp193 = _tmp192 * _tmp98;
  const Scalar _tmp194 = _tmp126 * _tmp173;
  const Scalar _tmp195 = _tmp189 * _tmp68;
  const Scalar _tmp196 =
      -_tmp126 * _tmp175 + _tmp189 * _tmp81 + _tmp194 * _tmp79 - _tmp195 * _tmp79;
  const Scalar _tmp197 = _tmp116 * (-_tmp126 * _tmp179 + _tmp128 * _tmp193 - _tmp129 * _tmp196 -
                                    _tmp180 * _tmp190 + _tmp189 * _tmp97);
  const Scalar _tmp198 = _tmp174 * _tmp83;
  const Scalar _tmp199 = _tmp130 * _tmp183;
  const Scalar _tmp200 = _tmp132 * _tmp192;
  const Scalar _tmp201 = _tmp187 + _tmp196 + _tmp197 - _tmp199;
  const Scalar _tmp202 = -_tmp132 * _tmp198 + _tmp143 * _tmp187 + _tmp143 * _tmp197 -
                         _tmp143 * _tmp199 - _tmp144 * _tmp201 - _tmp194 + _tmp195 +
                         _tmp200 * _tmp74;
  const Scalar _tmp203 = _tmp167 * _tmp168;
  const Scalar _tmp204 = _tmp203 * _tmp52;
  const Scalar _tmp205 = _tmp111 * _tmp173 - _tmp204 * _tmp68;
  const Scalar _tmp206 = _tmp111 * _tmp175 - _tmp204 * _tmp81 - _tmp205 * _tmp79;
  const Scalar _tmp207 = _tmp116 * (_tmp111 * _tmp179 + _tmp113 * _tmp193 - _tmp114 * _tmp180 -
                                    _tmp129 * _tmp206 - _tmp204 * _tmp97);
  const Scalar _tmp208 = _tmp115 * _tmp183;
  const Scalar _tmp209 = _tmp192 * _tmp74;
  const Scalar _tmp210 = _tmp115 * _tmp177;
  const Scalar _tmp211 = _tmp206 + _tmp207 - _tmp208 + _tmp210;
  const Scalar _tmp212 = -_tmp118 * _tmp198 + _tmp118 * _tmp209 + _tmp143 * _tmp207 -
                         _tmp143 * _tmp208 + _tmp143 * _tmp210 - _tmp144 * _tmp211 + _tmp205;
  const Scalar _tmp213 = _tmp77 * _tmp89;
  const Scalar _tmp214 = _tmp213 * (-_tmp174 * _tmp86 + _tmp209 * _tmp85);
  const Scalar _tmp215 = _tmp37 * _tmp85;
  const Scalar _tmp216 = _tmp56 * _tmp87;
  const Scalar _tmp217 = _tmp216 * _tmp85;
  const Scalar _tmp218 = _tmp165 * _tmp73;
  const Scalar _tmp219 = _tmp56 * _tmp63;
  const Scalar _tmp220 = _tmp120 * _tmp219 * _tmp85;
  const Scalar _tmp221 = _tmp118 * _tmp192;
  const Scalar _tmp222 = -_tmp120 * _tmp211 + _tmp221 * _tmp69;
  const Scalar _tmp223 = _tmp122 * _tmp56;
  const Scalar _tmp224 = _tmp121 * _tmp203;
  const Scalar _tmp225 = _tmp165 * _tmp72;
  const Scalar _tmp226 = -_tmp120 * _tmp201 + _tmp200 * _tmp69;
  const Scalar _tmp227 = _tmp133 * _tmp219;
  const Scalar _tmp228 = Scalar(1.0) * _tmp216;
  const Scalar _tmp229 = Scalar(1.0) * _tmp37;
  const Scalar _tmp230 = _tmp100 * _tmp219;
  const Scalar _tmp231 = -_tmp110 * (-_tmp100 * _tmp218 + _tmp101 + _tmp170 * _tmp230 +
                                     _tmp182 * _tmp228 - _tmp182 * _tmp229) -
                         _tmp125 * (_tmp119 * _tmp211 + _tmp121 * _tmp225 - _tmp123 -
                                    _tmp219 * _tmp224 - _tmp221 * _tmp37 + _tmp222 * _tmp223) -
                         _tmp136 * (_tmp119 * _tmp201 + _tmp133 * _tmp225 - _tmp134 -
                                    _tmp200 * _tmp37 - _tmp203 * _tmp227 + _tmp223 * _tmp226) -
                         _tmp92 * (-_tmp192 * _tmp215 + _tmp192 * _tmp217 + _tmp203 * _tmp220 -
                                   _tmp218 * _tmp86 + _tmp88);
  const Scalar _tmp232 = _tmp138 * _tmp161;
  const Scalar _tmp233 = _tmp162 * (_tmp163 * (_tmp147 * (_tmp142 * _tmp207 - _tmp142 * _tmp208 +
                                                          _tmp142 * _tmp210 - _tmp146 * _tmp212) +
                                               _tmp150 * (-_tmp146 * _tmp186 + _tmp178 - _tmp184) +
                                               _tmp152 * (_tmp142 * _tmp187 + _tmp142 * _tmp197 -
                                                          _tmp142 * _tmp199 - _tmp146 * _tmp202) -
                                               Scalar(1.0) * _tmp214) -
                                    _tmp231 * _tmp232);
  const Scalar _tmp234 = std::asinh(_tmp161 * _tmp163);
  const Scalar _tmp235 = Scalar(1.0) * _tmp234;
  const Scalar _tmp236 = Scalar(1.0) * std::cosh(_tmp235);
  const Scalar _tmp237 = Scalar(1.4083112389913199) * _tmp137;
  const Scalar _tmp238 = Scalar(1.4083112389913199) * _tmp234;
  const Scalar _tmp239 = Scalar(0.71007031138673404) * _tmp163;
  const Scalar _tmp240 =
      -_tmp234 * _tmp237 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp241 = Scalar(0.71007031138673404) * _tmp138 * _tmp240;
  const Scalar _tmp242 = _tmp239 * _tmp240;
  const Scalar _tmp243 = std::cosh(_tmp242);
  const Scalar _tmp244 = -Scalar(1.4083112389913199) * std::sinh(_tmp235) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp242);
  const Scalar _tmp245 = -_tmp55 + p_a(0, 0);
  const Scalar _tmp246 = -_tmp66 + p_a(2, 0) - position_vector(2, 0);
  const Scalar _tmp247 = -_tmp59 + p_a(1, 0);
  const Scalar _tmp248 = std::pow(_tmp245, Scalar(2)) + std::pow(_tmp247, Scalar(2));
  const Scalar _tmp249 =
      std::pow(Scalar(std::pow(_tmp246, Scalar(2)) + _tmp248), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp250 = _tmp85 * _tmp89;
  const Scalar _tmp251 = _tmp120 * _tmp250;
  const Scalar _tmp252 = _tmp135 * _tmp72;
  const Scalar _tmp253 = _tmp124 * _tmp72;
  const Scalar _tmp254 = _tmp100 * _tmp109;
  const Scalar _tmp255 = _tmp192 * _tmp250;
  const Scalar _tmp256 = _tmp133 * _tmp135;
  const Scalar _tmp257 = _tmp150 * _tmp182;
  const Scalar _tmp258 = -_tmp124 * _tmp224 + _tmp170 * _tmp254 + _tmp203 * _tmp251 -
                         _tmp203 * _tmp256 + _tmp222 * _tmp253 + _tmp226 * _tmp252 +
                         _tmp255 * _tmp73 + _tmp257 * _tmp73;
  const Scalar _tmp259 = _tmp86 * _tmp89;
  const Scalar _tmp260 =
      _tmp121 * _tmp253 + _tmp133 * _tmp252 - _tmp254 * _tmp73 - _tmp259 * _tmp73;
  const Scalar _tmp261 = std::pow(_tmp260, Scalar(-2));
  const Scalar _tmp262 = _tmp109 * _tmp77;
  const Scalar _tmp263 = _tmp135 * _tmp77;
  const Scalar _tmp264 = _tmp124 * _tmp77;
  const Scalar _tmp265 = _tmp142 * _tmp154;
  const Scalar _tmp266 = _tmp145 * _tmp264 + _tmp149 * _tmp262 + _tmp151 * _tmp263 -
                         _tmp155 * _tmp265 + _tmp156 * _tmp157 * _tmp77 + _tmp160 * _tmp213;
  const Scalar _tmp267 = _tmp261 * _tmp266;
  const Scalar _tmp268 = Scalar(1.0) / (_tmp260);
  const Scalar _tmp269 =
      std::pow(Scalar(_tmp261 * std::pow(_tmp266, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp270 =
      _tmp269 * (-_tmp258 * _tmp267 +
                 _tmp268 * (_tmp186 * _tmp262 + _tmp202 * _tmp263 + _tmp212 * _tmp264 + _tmp214));
  const Scalar _tmp271 = std::asinh(_tmp266 * _tmp268);
  const Scalar _tmp272 = Scalar(1.0) * _tmp271;
  const Scalar _tmp273 = Scalar(1.0) * std::cosh(_tmp272);
  const Scalar _tmp274 = std::sqrt(_tmp248);
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp260;
  const Scalar _tmp276 = -_tmp271 * _tmp275 - _tmp274;
  const Scalar _tmp277 = Scalar(0.71007031138673404) * _tmp268;
  const Scalar _tmp278 = _tmp276 * _tmp277;
  const Scalar _tmp279 = std::cosh(_tmp278);
  const Scalar _tmp280 = Scalar(0.71007031138673404) * _tmp261 * _tmp276;
  const Scalar _tmp281 = Scalar(1.0) / (_tmp274);
  const Scalar _tmp282 = Scalar(1.4083112389913199) * _tmp271;
  const Scalar _tmp283 = -Scalar(1.4083112389913199) * std::sinh(_tmp272) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp278);
  const Scalar _tmp284 = _tmp124 * _tmp83;
  const Scalar _tmp285 = _tmp135 * _tmp83;
  const Scalar _tmp286 = _tmp118 * _tmp284 + _tmp132 * _tmp285 + _tmp254 + _tmp259;
  const Scalar _tmp287 = Scalar(1.0) / (_tmp286);
  const Scalar _tmp288 = _tmp135 * _tmp141;
  const Scalar _tmp289 = _tmp124 * _tmp141;
  const Scalar _tmp290 = -_tmp109 * _tmp148 - _tmp117 * _tmp289 - _tmp131 * _tmp288 -
                         _tmp156 * _tmp158 + _tmp159 * _tmp89 + _tmp265;
  const Scalar _tmp291 = std::asinh(_tmp287 * _tmp290);
  const Scalar _tmp292 = Scalar(1.0) * _tmp291;
  const Scalar _tmp293 = Scalar(1.0) * std::cosh(_tmp292);
  const Scalar _tmp294 = std::pow(_tmp286, Scalar(-2));
  const Scalar _tmp295 =
      std::pow(Scalar(std::pow(_tmp290, Scalar(2)) * _tmp294 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp296 = -_tmp124 * _tmp221 - _tmp135 * _tmp200 + _tmp201 * _tmp285 +
                         _tmp211 * _tmp284 - _tmp255 - _tmp257;
  const Scalar _tmp297 = _tmp290 * _tmp294;
  const Scalar _tmp298 =
      _tmp295 *
      (_tmp287 * (-_tmp109 * _tmp178 + _tmp109 * _tmp184 - _tmp187 * _tmp288 - _tmp197 * _tmp288 +
                  _tmp199 * _tmp288 - _tmp207 * _tmp289 + _tmp208 * _tmp289 - _tmp210 * _tmp289) -
       _tmp296 * _tmp297);
  const Scalar _tmp299 = Scalar(1.4083112389913199) * _tmp291;
  const Scalar _tmp300 =
      -_tmp286 * _tmp299 - std::sqrt(Scalar(std::pow(Scalar(-_tmp25 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp34 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp301 = Scalar(0.71007031138673404) * _tmp294 * _tmp300;
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp286;
  const Scalar _tmp303 = Scalar(0.71007031138673404) * _tmp287;
  const Scalar _tmp304 = _tmp300 * _tmp303;
  const Scalar _tmp305 = std::cosh(_tmp304);
  const Scalar _tmp306 = -Scalar(1.4083112389913199) * std::sinh(_tmp292) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp304);
  const Scalar _tmp307 = _tmp164 * _tmp61;
  const Scalar _tmp308 = _tmp166 * _tmp52 - _tmp307 + _tmp63;
  const Scalar _tmp309 = _tmp169 * _tmp308;
  const Scalar _tmp310 = _tmp166 * _tmp58 + _tmp166 * _tmp94 - _tmp307 * _tmp54 + _tmp54 * _tmp63;
  const Scalar _tmp311 = _tmp309 * _tmp97 - _tmp310 * _tmp73;
  const Scalar _tmp312 = _tmp181 * _tmp311;
  const Scalar _tmp313 = _tmp166 * _tmp73;
  const Scalar _tmp314 = _tmp168 * _tmp308;
  const Scalar _tmp315 = -_tmp166 * _tmp53 + _tmp307 * _tmp66 - _tmp80;
  const Scalar _tmp316 = _tmp309 * _tmp68 - _tmp315 * _tmp73;
  const Scalar _tmp317 = _tmp15 * _tmp166 - _tmp172;
  const Scalar _tmp318 = _tmp309 * _tmp81 - _tmp316 * _tmp79 - _tmp317 * _tmp73;
  const Scalar _tmp319 = _tmp191 * _tmp318;
  const Scalar _tmp320 = _tmp166 * _tmp72;
  const Scalar _tmp321 = _tmp319 * _tmp37;
  const Scalar _tmp322 = _tmp319 * _tmp98;
  const Scalar _tmp323 = _tmp188 * _tmp308;
  const Scalar _tmp324 = _tmp126 * _tmp315;
  const Scalar _tmp325 = _tmp323 * _tmp68;
  const Scalar _tmp326 =
      -_tmp126 * _tmp317 + _tmp323 * _tmp81 + _tmp324 * _tmp79 - _tmp325 * _tmp79;
  const Scalar _tmp327 = _tmp116 * (-_tmp126 * _tmp310 + _tmp128 * _tmp322 - _tmp129 * _tmp326 -
                                    _tmp190 * _tmp311 + _tmp323 * _tmp97);
  const Scalar _tmp328 = _tmp312 * _tmp82;
  const Scalar _tmp329 = _tmp130 * _tmp328;
  const Scalar _tmp330 = _tmp318 * _tmp99;
  const Scalar _tmp331 = _tmp130 * _tmp330;
  const Scalar _tmp332 = _tmp326 + _tmp327 - _tmp329 + _tmp331;
  const Scalar _tmp333 = _tmp319 * _tmp69;
  const Scalar _tmp334 = -_tmp120 * _tmp332 + _tmp132 * _tmp333;
  const Scalar _tmp335 = _tmp121 * _tmp314;
  const Scalar _tmp336 = _tmp314 * _tmp52;
  const Scalar _tmp337 = _tmp111 * _tmp315 - _tmp336 * _tmp68;
  const Scalar _tmp338 = _tmp111 * _tmp317 - _tmp336 * _tmp81 - _tmp337 * _tmp79;
  const Scalar _tmp339 = _tmp116 * (_tmp111 * _tmp310 + _tmp113 * _tmp322 - _tmp114 * _tmp311 -
                                    _tmp129 * _tmp338 - _tmp336 * _tmp97);
  const Scalar _tmp340 = _tmp115 * _tmp330;
  const Scalar _tmp341 = _tmp115 * _tmp328;
  const Scalar _tmp342 = _tmp338 + _tmp339 + _tmp340 - _tmp341;
  const Scalar _tmp343 = _tmp118 * _tmp333 - _tmp120 * _tmp342;
  const Scalar _tmp344 =
      -_tmp110 * (-_tmp100 * _tmp313 + _tmp228 * _tmp312 - _tmp229 * _tmp312 + _tmp230 * _tmp309) -
      _tmp125 * (-_tmp118 * _tmp321 + _tmp119 * _tmp342 + _tmp121 * _tmp320 - _tmp219 * _tmp335 +
                 _tmp223 * _tmp343) -
      _tmp136 * (_tmp119 * _tmp332 - _tmp132 * _tmp321 + _tmp133 * _tmp320 + _tmp223 * _tmp334 -
                 _tmp227 * _tmp314) -
      _tmp92 * (-_tmp215 * _tmp319 + _tmp217 * _tmp319 + _tmp220 * _tmp314 - _tmp313 * _tmp86);
  const Scalar _tmp345 = _tmp319 * _tmp74;
  const Scalar _tmp346 = _tmp213 * (-_tmp316 * _tmp86 + _tmp345 * _tmp85);
  const Scalar _tmp347 = _tmp316 * _tmp83;
  const Scalar _tmp348 = _tmp132 * _tmp345 - _tmp132 * _tmp347 + _tmp143 * _tmp327 -
                         _tmp143 * _tmp329 + _tmp143 * _tmp331 - _tmp144 * _tmp332 - _tmp324 +
                         _tmp325;
  const Scalar _tmp349 = _tmp142 * _tmp328;
  const Scalar _tmp350 = _tmp142 * _tmp330;
  const Scalar _tmp351 =
      -_tmp100 * _tmp316 - _tmp139 * _tmp349 + _tmp139 * _tmp350 + _tmp185 * _tmp312;
  const Scalar _tmp352 = _tmp118 * _tmp345 - _tmp118 * _tmp347 + _tmp143 * _tmp339 +
                         _tmp143 * _tmp340 - _tmp143 * _tmp341 - _tmp144 * _tmp342 + _tmp337;
  const Scalar _tmp353 = _tmp162 * (_tmp163 * (_tmp147 * (_tmp142 * _tmp339 + _tmp142 * _tmp340 -
                                                          _tmp142 * _tmp341 - _tmp146 * _tmp352) +
                                               _tmp150 * (-_tmp146 * _tmp351 - _tmp349 + _tmp350) +
                                               _tmp152 * (_tmp142 * _tmp327 - _tmp142 * _tmp329 +
                                                          _tmp142 * _tmp331 - _tmp146 * _tmp348) -
                                               Scalar(1.0) * _tmp346) -
                                    _tmp232 * _tmp344);
  const Scalar _tmp354 = _tmp150 * _tmp312;
  const Scalar _tmp355 = _tmp250 * _tmp319;
  const Scalar _tmp356 = -_tmp124 * _tmp335 + _tmp251 * _tmp314 + _tmp252 * _tmp334 +
                         _tmp253 * _tmp343 + _tmp254 * _tmp309 - _tmp256 * _tmp314 +
                         _tmp354 * _tmp73 + _tmp355 * _tmp73;
  const Scalar _tmp357 =
      _tmp269 * (-_tmp267 * _tmp356 +
                 _tmp268 * (_tmp262 * _tmp351 + _tmp263 * _tmp348 + _tmp264 * _tmp352 + _tmp346));
  const Scalar _tmp358 = -_tmp118 * _tmp124 * _tmp319 - _tmp132 * _tmp135 * _tmp319 +
                         _tmp284 * _tmp342 + _tmp285 * _tmp332 - _tmp354 - _tmp355;
  const Scalar _tmp359 =
      _tmp295 *
      (_tmp287 * (_tmp109 * _tmp349 - _tmp109 * _tmp350 - _tmp288 * _tmp327 + _tmp288 * _tmp329 -
                  _tmp288 * _tmp331 - _tmp289 * _tmp339 - _tmp289 * _tmp340 + _tmp289 * _tmp341) -
       _tmp297 * _tmp358);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp231 * _tmp244 +
      _tmp237 *
          (-_tmp233 * _tmp236 -
           _tmp243 * (-_tmp231 * _tmp241 + _tmp239 * (-_tmp231 * _tmp238 - _tmp233 * _tmp237)));
  _res(2, 0) =
      -_tmp245 * _tmp249 + _tmp258 * _tmp283 +
      _tmp275 * (-_tmp270 * _tmp273 -
                 _tmp279 * (-_tmp258 * _tmp280 + _tmp277 * (-_tmp245 * _tmp281 - _tmp258 * _tmp282 -
                                                            _tmp270 * _tmp275)));
  _res(3, 0) =
      _tmp296 * _tmp306 +
      _tmp302 *
          (-_tmp293 * _tmp298 -
           _tmp305 * (-_tmp296 * _tmp301 + _tmp303 * (-_tmp296 * _tmp299 - _tmp298 * _tmp302)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp237 *
          (-_tmp236 * _tmp353 -
           _tmp243 * (_tmp239 * (-_tmp237 * _tmp353 - _tmp238 * _tmp344) - _tmp241 * _tmp344)) +
      _tmp244 * _tmp344;
  _res(2, 1) =
      -_tmp247 * _tmp249 +
      _tmp275 * (-_tmp273 * _tmp357 -
                 _tmp279 * (_tmp277 * (-_tmp247 * _tmp281 - _tmp275 * _tmp357 - _tmp282 * _tmp356) -
                            _tmp280 * _tmp356)) +
      _tmp283 * _tmp356;
  _res(3, 1) =
      _tmp302 *
          (-_tmp293 * _tmp359 -
           _tmp305 * (-_tmp301 * _tmp358 + _tmp303 * (-_tmp299 * _tmp358 - _tmp302 * _tmp359))) +
      _tmp306 * _tmp358;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp246 * _tmp249;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
