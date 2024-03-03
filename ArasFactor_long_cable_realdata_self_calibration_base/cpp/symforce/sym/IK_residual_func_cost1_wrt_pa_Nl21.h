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
 * Symbolic function: IK_residual_func_cost1_wrt_pa_Nl21
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPaNl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1064

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (336)
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
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp2 * _tmp4;
  const Scalar _tmp25 = _tmp0 * _tmp5;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = _tmp31 - p_a(1, 0);
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp19 * _tmp35;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp38 = -_tmp37;
  const Scalar _tmp39 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp40 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp41 = _tmp39 - _tmp40;
  const Scalar _tmp42 = _tmp38 + _tmp41;
  const Scalar _tmp43 = std::pow(_tmp34, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp44 = _tmp20 * _tmp43;
  const Scalar _tmp45 = _tmp35 * _tmp42;
  const Scalar _tmp46 = _tmp12 + _tmp15;
  const Scalar _tmp47 = _tmp46 + _tmp8;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_b(0, 0);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp27 + _tmp28;
  const Scalar _tmp52 = _tmp23 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - p_b(1, 0);
  const Scalar _tmp55 = _tmp50 * _tmp54;
  const Scalar _tmp56 = _tmp19 * _tmp32 * _tmp43;
  const Scalar _tmp57 = _tmp35 * _tmp55;
  const Scalar _tmp58 = _tmp44 * _tmp55 - _tmp56 - _tmp57;
  const Scalar _tmp59 = _tmp46 + _tmp7;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 - p_c(0, 0);
  const Scalar _tmp62 = _tmp22 + _tmp51;
  const Scalar _tmp63 = _tmp62 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_c(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp61, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp61 * _tmp65;
  const Scalar _tmp67 = _tmp64 * _tmp65;
  const Scalar _tmp68 = Scalar(1.0) / (_tmp55 * _tmp66 - _tmp67);
  const Scalar _tmp69 = _tmp39 + _tmp40;
  const Scalar _tmp70 = _tmp38 + _tmp69;
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp37 + _tmp69;
  const Scalar _tmp73 = -_tmp55 * _tmp71 + _tmp67 * _tmp72;
  const Scalar _tmp74 = _tmp68 * _tmp73;
  const Scalar _tmp75 = _tmp44 * _tmp70;
  const Scalar _tmp76 = _tmp35 * _tmp70;
  const Scalar _tmp77 = _tmp42 * _tmp56;
  const Scalar _tmp78 = -_tmp55 * _tmp75 + _tmp55 * _tmp76 - _tmp58 * _tmp74 + _tmp77;
  const Scalar _tmp79 = Scalar(1.0) * _tmp52;
  const Scalar _tmp80 = -_tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp62 + _tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp47;
  const Scalar _tmp83 = -_tmp59 + _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp83;
  const Scalar _tmp85 = -_tmp66 * _tmp72 + _tmp71;
  const Scalar _tmp86 = _tmp68 * _tmp85;
  const Scalar _tmp87 =
      -_tmp42 * _tmp44 + _tmp45 - _tmp58 * _tmp86 + _tmp75 - _tmp76 - _tmp78 * _tmp84;
  const Scalar _tmp88 = _tmp32 * _tmp35;
  const Scalar _tmp89 = _tmp19 * _tmp57 - _tmp88;
  const Scalar _tmp90 = _tmp68 * _tmp89;
  const Scalar _tmp91 = _tmp19 * _tmp76;
  const Scalar _tmp92 = _tmp42 * _tmp88 - _tmp55 * _tmp91 - _tmp73 * _tmp90;
  const Scalar _tmp93 = -_tmp19 * _tmp45 - _tmp84 * _tmp92 - _tmp85 * _tmp90 + _tmp91;
  const Scalar _tmp94 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp54, Scalar(2))));
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp50 * _tmp94;
  const Scalar _tmp97 = _tmp96 * (_tmp47 * _tmp54 * _tmp95 - _tmp49 * _tmp52 * _tmp95);
  const Scalar _tmp98 = _tmp55 * _tmp70;
  const Scalar _tmp99 = _tmp55 * _tmp74 + _tmp98;
  const Scalar _tmp100 = _tmp55 * _tmp86 - _tmp70 - _tmp84 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp102 = _tmp30 * _tmp35;
  const Scalar _tmp103 = -_tmp59 * _tmp67 + _tmp62 * _tmp66 + _tmp66 * _tmp97;
  const Scalar _tmp104 = _tmp102 * _tmp19 - _tmp103 * _tmp90 - _tmp17 * _tmp88 + _tmp36 * _tmp97;
  const Scalar _tmp105 = _tmp101 * _tmp104;
  const Scalar _tmp106 = _tmp103 * _tmp68;
  const Scalar _tmp107 = -_tmp100 * _tmp105 + _tmp106 * _tmp55 - _tmp97;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp109 * _tmp93;
  const Scalar _tmp111 = _tmp100 + _tmp110;
  const Scalar _tmp112 = std::pow(_tmp93, Scalar(-2));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp113 * _tmp87;
  const Scalar _tmp115 = _tmp109 * _tmp87;
  const Scalar _tmp116 = -_tmp102 - _tmp106 * _tmp58 - _tmp17 * _tmp56 + _tmp30 * _tmp44 -
                         _tmp35 * _tmp97 + _tmp44 * _tmp97;
  const Scalar _tmp117 = std::pow(_tmp104, Scalar(-2));
  const Scalar _tmp118 = _tmp117 * _tmp93;
  const Scalar _tmp119 = _tmp107 * _tmp118;
  const Scalar _tmp120 = _tmp116 * _tmp119;
  const Scalar _tmp121 = _tmp112 * _tmp87;
  const Scalar _tmp122 = _tmp100 * _tmp104;
  const Scalar _tmp123 = _tmp101 * _tmp116;
  const Scalar _tmp124 = _tmp108 * _tmp93;
  const Scalar _tmp125 = _tmp124 * (-_tmp100 * _tmp123 + _tmp121 * _tmp122);
  const Scalar _tmp126 = _tmp115 - _tmp120 + _tmp125;
  const Scalar _tmp127 = _tmp101 * _tmp126;
  const Scalar _tmp128 = _tmp101 * _tmp111;
  const Scalar _tmp129 = _tmp128 * _tmp35;
  const Scalar _tmp130 = _tmp101 * _tmp89;
  const Scalar _tmp131 = _tmp113 * _tmp89;
  const Scalar _tmp132 = -_tmp126 * _tmp130 - _tmp128 * _tmp58 + _tmp131 * _tmp87;
  const Scalar _tmp133 = _tmp66 * _tmp68;
  const Scalar _tmp134 = _tmp16 + _tmp7;
  const Scalar _tmp135 = _tmp134 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp136 = _tmp22 + _tmp29;
  const Scalar _tmp137 = _tmp136 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp138 =
      std::pow(Scalar(std::pow(_tmp135, Scalar(2)) + std::pow(_tmp137, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp139 = _tmp135 * _tmp138;
  const Scalar _tmp140 = _tmp139 * fh1;
  const Scalar _tmp141 = _tmp140 * _tmp96;
  const Scalar _tmp142 = Scalar(1.0) * _tmp81;
  const Scalar _tmp143 = _tmp142 * _tmp74 * _tmp83 - Scalar(1.0) * _tmp86;
  const Scalar _tmp144 = -_tmp105 * _tmp143 - Scalar(1.0) * _tmp106;
  const Scalar _tmp145 = _tmp124 * _tmp144;
  const Scalar _tmp146 = _tmp143 + _tmp145;
  const Scalar _tmp147 = _tmp101 * _tmp146;
  const Scalar _tmp148 = _tmp147 * _tmp35;
  const Scalar _tmp149 = _tmp146 * _tmp89;
  const Scalar _tmp150 = _tmp104 * _tmp143;
  const Scalar _tmp151 = _tmp124 * (_tmp121 * _tmp150 - _tmp123 * _tmp143);
  const Scalar _tmp152 = _tmp108 * _tmp144;
  const Scalar _tmp153 = _tmp152 * _tmp87;
  const Scalar _tmp154 = _tmp118 * _tmp144;
  const Scalar _tmp155 = _tmp116 * _tmp154;
  const Scalar _tmp156 = _tmp151 + _tmp153 - _tmp155;
  const Scalar _tmp157 = _tmp121 * _tmp149 - _tmp130 * _tmp156 - _tmp147 * _tmp58;
  const Scalar _tmp158 = _tmp121 * _tmp146;
  const Scalar _tmp159 = _tmp101 * _tmp36;
  const Scalar _tmp160 = _tmp137 * _tmp138;
  const Scalar _tmp161 = _tmp160 * fh1;
  const Scalar _tmp162 = _tmp161 * _tmp96;
  const Scalar _tmp163 = Scalar(1.0) * _tmp108;
  const Scalar _tmp164 = _tmp116 * _tmp117;
  const Scalar _tmp165 = _tmp66 * _tmp90;
  const Scalar _tmp166 = Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = _tmp163 * _tmp35;
  const Scalar _tmp168 = Scalar(1.0) * _tmp36;
  const Scalar _tmp169 = _tmp133 * _tmp163;
  const Scalar _tmp170 = fh1 * (_tmp134 * _tmp160 - _tmp136 * _tmp139);
  const Scalar _tmp171 = _tmp170 * _tmp96;
  const Scalar _tmp172 = _tmp79 * _tmp84 + _tmp82;
  const Scalar _tmp173 = 0;
  const Scalar _tmp174 = _tmp101 * _tmp173;
  const Scalar _tmp175 = _tmp174 * _tmp35;
  const Scalar _tmp176 = _tmp112 * _tmp173;
  const Scalar _tmp177 = _tmp176 * _tmp87;
  const Scalar _tmp178 = _tmp133 * _tmp174;
  const Scalar _tmp179 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp180 = _tmp179 * _tmp96;
  const Scalar _tmp181 =
      -_tmp141 *
          (-_tmp114 * _tmp36 + _tmp127 * _tmp36 + _tmp128 * _tmp44 - _tmp129 + _tmp132 * _tmp133) -
      _tmp162 *
          (_tmp133 * _tmp157 + _tmp147 * _tmp44 - _tmp148 + _tmp156 * _tmp159 - _tmp158 * _tmp36) -
      _tmp171 *
          (_tmp163 * _tmp44 + _tmp164 * _tmp166 - _tmp164 * _tmp168 - _tmp167 - _tmp169 * _tmp58) -
      _tmp180 *
          (_tmp165 * _tmp177 + _tmp174 * _tmp44 - _tmp175 - _tmp177 * _tmp36 - _tmp178 * _tmp58);
  const Scalar _tmp182 = -_tmp130 * _tmp146 + Scalar(1.0);
  const Scalar _tmp183 = _tmp130 * _tmp173;
  const Scalar _tmp184 = -_tmp111 * _tmp130 - _tmp55;
  const Scalar _tmp185 = -_tmp141 * (_tmp129 * _tmp19 + _tmp133 * _tmp184 + Scalar(1.0)) -
                         _tmp162 * (_tmp133 * _tmp182 + _tmp148 * _tmp19) -
                         _tmp171 * (-_tmp163 * _tmp165 + _tmp167 * _tmp19) -
                         _tmp180 * (-_tmp133 * _tmp183 + _tmp175 * _tmp19);
  const Scalar _tmp186 = std::pow(_tmp185, Scalar(-2));
  const Scalar _tmp187 = _tmp30 + _tmp80;
  const Scalar _tmp188 = _tmp187 * _tmp84;
  const Scalar _tmp189 = Scalar(1.0) / (-_tmp17 - _tmp188 + _tmp82);
  const Scalar _tmp190 = Scalar(1.0) * _tmp189;
  const Scalar _tmp191 = _tmp187 * _tmp81;
  const Scalar _tmp192 = fh1 * (_tmp37 + _tmp41);
  const Scalar _tmp193 = Scalar(40.024799999999999) * _tmp11 + _tmp134 * fv1 + _tmp139 * _tmp192;
  const Scalar _tmp194 = _tmp172 * _tmp189;
  const Scalar _tmp195 = _tmp101 * _tmp92;
  const Scalar _tmp196 = -_tmp173 * _tmp195 - _tmp187 * _tmp194 + _tmp80;
  const Scalar _tmp197 = _tmp124 * _tmp190;
  const Scalar _tmp198 = -_tmp163 * _tmp92 + _tmp187 * _tmp197;
  const Scalar _tmp199 = Scalar(1.0) * _tmp170;
  const Scalar _tmp200 = _tmp187 * _tmp189;
  const Scalar _tmp201 = _tmp110 * _tmp200 - _tmp111 * _tmp195 + _tmp99;
  const Scalar _tmp202 = Scalar(1.0) * _tmp140;
  const Scalar _tmp203 = _tmp145 * _tmp200 - _tmp146 * _tmp195 - Scalar(1.0) * _tmp74;
  const Scalar _tmp204 = Scalar(1.0) * _tmp161;
  const Scalar _tmp205 = -_tmp136 * fv1 - _tmp160 * _tmp192 - Scalar(40.024799999999999) * _tmp26;
  const Scalar _tmp206 = _tmp190 * _tmp84;
  const Scalar _tmp207 = _tmp188 * _tmp190 + Scalar(1.0);
  const Scalar _tmp208 =
      Scalar(1.0) * _tmp179 * (-_tmp142 * _tmp196 - _tmp172 * _tmp190 + Scalar(1.0)) +
      Scalar(1.0) * _tmp193 * (_tmp190 * _tmp191 - _tmp190) +
      _tmp199 * (-_tmp142 * _tmp198 + _tmp197) + _tmp202 * (_tmp110 * _tmp190 - _tmp142 * _tmp201) +
      _tmp204 * (-_tmp142 * _tmp203 + _tmp145 * _tmp190) +
      Scalar(1.0) * _tmp205 * (-_tmp142 * _tmp207 + _tmp206);
  const Scalar _tmp209 = _tmp186 * _tmp208;
  const Scalar _tmp210 = _tmp87 * _tmp92;
  const Scalar _tmp211 = _tmp113 * _tmp210 + _tmp115 * _tmp200 - _tmp120 * _tmp200 +
                         _tmp125 * _tmp200 - _tmp126 * _tmp195 - _tmp128 * _tmp78;
  const Scalar _tmp212 = -_tmp174 * _tmp78 + _tmp176 * _tmp210;
  const Scalar _tmp213 = _tmp142 * _tmp179;
  const Scalar _tmp214 = _tmp108 * _tmp190;
  const Scalar _tmp215 = _tmp214 * _tmp87;
  const Scalar _tmp216 = Scalar(1.0) * _tmp92;
  const Scalar _tmp217 = _tmp118 * _tmp190;
  const Scalar _tmp218 = _tmp116 * _tmp217;
  const Scalar _tmp219 =
      -_tmp163 * _tmp78 + _tmp164 * _tmp216 + _tmp187 * _tmp215 - _tmp187 * _tmp218;
  const Scalar _tmp220 = _tmp112 * _tmp146 * _tmp210 - _tmp147 * _tmp78 + _tmp151 * _tmp200 +
                         _tmp153 * _tmp200 - _tmp155 * _tmp200 - _tmp156 * _tmp195;
  const Scalar _tmp221 = Scalar(1.0) / (_tmp185);
  const Scalar _tmp222 =
      -_tmp181 * _tmp209 + _tmp221 * (_tmp199 * (-_tmp142 * _tmp219 + _tmp215 - _tmp218) +
                                      _tmp202 * (_tmp115 * _tmp190 - _tmp120 * _tmp190 +
                                                 _tmp125 * _tmp190 - _tmp142 * _tmp211) +
                                      _tmp204 * (-_tmp142 * _tmp220 + _tmp151 * _tmp190 +
                                                 _tmp153 * _tmp190 - _tmp155 * _tmp190) -
                                      _tmp212 * _tmp213);
  const Scalar _tmp223 =
      std::pow(Scalar(_tmp186 * std::pow(_tmp208, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp224 = std::asinh(_tmp208 * _tmp221);
  const Scalar _tmp225 = Scalar(1.0) * _tmp224;
  const Scalar _tmp226 = Scalar(1.0) * _tmp223 * std::sinh(_tmp225);
  const Scalar _tmp227 = Scalar(0.71007031138673404) * _tmp186;
  const Scalar _tmp228 = _tmp227 * p_b(2, 0);
  const Scalar _tmp229 = Scalar(1.4083112389913199) * _tmp185;
  const Scalar _tmp230 =
      -_tmp224 * _tmp229 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp53 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp231 = Scalar(0.71007031138673404) * _tmp221;
  const Scalar _tmp232 = _tmp230 * _tmp231;
  const Scalar _tmp233 = std::sinh(_tmp232);
  const Scalar _tmp234 = Scalar(1.4083112389913199) * _tmp224;
  const Scalar _tmp235 = _tmp223 * _tmp229;
  const Scalar _tmp236 = _tmp227 * _tmp230;
  const Scalar _tmp237 = Scalar(1.4083112389913199) * _tmp231 * p_b(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp225) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp232);
  const Scalar _tmp238 = _tmp161 * _tmp68;
  const Scalar _tmp239 = _tmp140 * _tmp68;
  const Scalar _tmp240 = _tmp164 * _tmp199;
  const Scalar _tmp241 = _tmp163 * _tmp170;
  const Scalar _tmp242 = _tmp241 * _tmp68;
  const Scalar _tmp243 = _tmp177 * _tmp179;
  const Scalar _tmp244 = _tmp174 * _tmp179;
  const Scalar _tmp245 = _tmp244 * _tmp68;
  const Scalar _tmp246 = _tmp132 * _tmp239 + _tmp157 * _tmp238 + _tmp240 * _tmp90 -
                         _tmp242 * _tmp58 + _tmp243 * _tmp90 - _tmp245 * _tmp58;
  const Scalar _tmp247 = _tmp161 * _tmp81;
  const Scalar _tmp248 = _tmp190 * _tmp193;
  const Scalar _tmp249 = _tmp140 * _tmp81;
  const Scalar _tmp250 = _tmp170 * _tmp81;
  const Scalar _tmp251 = _tmp179 * _tmp81;
  const Scalar _tmp252 = -_tmp191 * _tmp248 + _tmp196 * _tmp251 + _tmp198 * _tmp250 +
                         _tmp201 * _tmp249 + _tmp203 * _tmp247 + _tmp205 * _tmp207 * _tmp81;
  const Scalar _tmp253 =
      -_tmp179 * _tmp183 * _tmp68 + _tmp182 * _tmp238 + _tmp184 * _tmp239 - _tmp241 * _tmp90;
  const Scalar _tmp254 = Scalar(1.0) / (_tmp253);
  const Scalar _tmp255 = std::asinh(_tmp252 * _tmp254);
  const Scalar _tmp256 = Scalar(1.0) * _tmp255;
  const Scalar _tmp257 = Scalar(1.4083112389913199) * _tmp255;
  const Scalar _tmp258 =
      -_tmp253 * _tmp257 - std::sqrt(Scalar(std::pow(Scalar(-_tmp60 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp259 = Scalar(0.71007031138673404) * _tmp254;
  const Scalar _tmp260 = _tmp258 * _tmp259;
  const Scalar _tmp261 = Scalar(1.4083112389913199) * _tmp259 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp256) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp260);
  const Scalar _tmp262 = std::pow(_tmp253, Scalar(-2));
  const Scalar _tmp263 = Scalar(0.71007031138673404) * _tmp262;
  const Scalar _tmp264 = _tmp246 * _tmp263;
  const Scalar _tmp265 = _tmp252 * _tmp262;
  const Scalar _tmp266 =
      std::pow(Scalar(std::pow(_tmp252, Scalar(2)) * _tmp262 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp267 =
      _tmp266 * (-_tmp246 * _tmp265 + _tmp254 * (_tmp211 * _tmp249 + _tmp212 * _tmp251 +
                                                 _tmp219 * _tmp250 + _tmp220 * _tmp247));
  const Scalar _tmp268 = Scalar(1.0) * std::sinh(_tmp256);
  const Scalar _tmp269 = std::sinh(_tmp260);
  const Scalar _tmp270 = Scalar(1.4083112389913199) * _tmp253;
  const Scalar _tmp271 = _tmp101 * _tmp161;
  const Scalar _tmp272 = -_tmp114 * _tmp140 + _tmp127 * _tmp140 + _tmp156 * _tmp271 -
                         _tmp158 * _tmp161 - _tmp240 - _tmp243;
  const Scalar _tmp273 = _tmp128 * _tmp140 + _tmp147 * _tmp161 + _tmp241 + _tmp244;
  const Scalar _tmp274 = _tmp140 * _tmp189;
  const Scalar _tmp275 = _tmp161 * _tmp189;
  const Scalar _tmp276 = -_tmp110 * _tmp274 - _tmp145 * _tmp275 - _tmp170 * _tmp197 +
                         _tmp179 * _tmp194 - _tmp205 * _tmp206 + _tmp248;
  const Scalar _tmp277 = Scalar(1.0) / (_tmp273);
  const Scalar _tmp278 = std::asinh(_tmp276 * _tmp277);
  const Scalar _tmp279 = Scalar(1.4083112389913199) * _tmp278;
  const Scalar _tmp280 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp281 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp282 =
      std::sqrt(Scalar(std::pow(_tmp280, Scalar(2)) + std::pow(_tmp281, Scalar(2))));
  const Scalar _tmp283 = -_tmp273 * _tmp279 - _tmp282;
  const Scalar _tmp284 = Scalar(0.71007031138673404) * _tmp277;
  const Scalar _tmp285 = _tmp283 * _tmp284;
  const Scalar _tmp286 = Scalar(1.0) * _tmp278;
  const Scalar _tmp287 = Scalar(1.4083112389913199) * _tmp284 * p_a(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp285) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp286);
  const Scalar _tmp288 = std::pow(_tmp273, Scalar(-2));
  const Scalar _tmp289 = _tmp276 * _tmp288;
  const Scalar _tmp290 =
      -_tmp272 * _tmp289 +
      _tmp277 * (-_tmp115 * _tmp274 + _tmp120 * _tmp274 - _tmp125 * _tmp274 - _tmp151 * _tmp275 -
                 _tmp153 * _tmp275 + _tmp155 * _tmp275 - _tmp170 * _tmp215 + _tmp170 * _tmp218);
  const Scalar _tmp291 =
      std::pow(Scalar(std::pow(_tmp276, Scalar(2)) * _tmp288 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp292 = Scalar(1.0) * _tmp291 * std::sinh(_tmp286);
  const Scalar _tmp293 = std::sinh(_tmp285);
  const Scalar _tmp294 = Scalar(1.4083112389913199) * _tmp273;
  const Scalar _tmp295 = _tmp291 * _tmp294;
  const Scalar _tmp296 = Scalar(1.0) / (_tmp282);
  const Scalar _tmp297 = Scalar(0.71007031138673404) * _tmp288;
  const Scalar _tmp298 = _tmp283 * _tmp297;
  const Scalar _tmp299 = _tmp297 * p_a(2, 0);
  const Scalar _tmp300 = _tmp33 * _tmp43;
  const Scalar _tmp301 = -_tmp300 + _tmp35 + _tmp55 * _tmp56;
  const Scalar _tmp302 =
      -_tmp106 * _tmp301 - _tmp17 * _tmp300 + _tmp17 * _tmp35 + _tmp30 * _tmp56 + _tmp56 * _tmp97;
  const Scalar _tmp303 = _tmp117 * _tmp302;
  const Scalar _tmp304 = _tmp300 * _tmp42 - _tmp301 * _tmp74 - _tmp45 - _tmp56 * _tmp98;
  const Scalar _tmp305 = -_tmp301 * _tmp86 - _tmp304 * _tmp84 + _tmp56 * _tmp70 - _tmp77;
  const Scalar _tmp306 = _tmp176 * _tmp305;
  const Scalar _tmp307 = _tmp113 * _tmp305;
  const Scalar _tmp308 = _tmp119 * _tmp302;
  const Scalar _tmp309 = _tmp112 * _tmp305;
  const Scalar _tmp310 = _tmp101 * _tmp302;
  const Scalar _tmp311 = _tmp124 * (-_tmp100 * _tmp310 + _tmp122 * _tmp309);
  const Scalar _tmp312 = _tmp109 * _tmp305;
  const Scalar _tmp313 = -_tmp308 + _tmp311 + _tmp312;
  const Scalar _tmp314 = -_tmp128 * _tmp301 - _tmp130 * _tmp313 + _tmp131 * _tmp305;
  const Scalar _tmp315 = _tmp154 * _tmp302;
  const Scalar _tmp316 = _tmp152 * _tmp305;
  const Scalar _tmp317 = _tmp124 * (-_tmp143 * _tmp310 + _tmp150 * _tmp309);
  const Scalar _tmp318 = -_tmp315 + _tmp316 + _tmp317;
  const Scalar _tmp319 = -_tmp130 * _tmp318 - _tmp147 * _tmp301 + _tmp149 * _tmp309;
  const Scalar _tmp320 = _tmp146 * _tmp309;
  const Scalar _tmp321 =
      -_tmp141 * (_tmp128 * _tmp56 + _tmp133 * _tmp314 + _tmp159 * _tmp313 - _tmp307 * _tmp36) -
      _tmp162 * (_tmp133 * _tmp319 + _tmp147 * _tmp56 + _tmp159 * _tmp318 - _tmp320 * _tmp36) -
      _tmp171 * (_tmp163 * _tmp56 + _tmp166 * _tmp303 - _tmp168 * _tmp303 - _tmp169 * _tmp301) -
      _tmp180 * (_tmp165 * _tmp306 + _tmp174 * _tmp56 - _tmp178 * _tmp301 - _tmp306 * _tmp36);
  const Scalar _tmp322 = -_tmp174 * _tmp304 + _tmp306 * _tmp92;
  const Scalar _tmp323 = -_tmp147 * _tmp304 - _tmp195 * _tmp318 - _tmp200 * _tmp315 +
                         _tmp200 * _tmp316 + _tmp200 * _tmp317 + _tmp320 * _tmp92;
  const Scalar _tmp324 = -_tmp128 * _tmp304 - _tmp195 * _tmp313 - _tmp200 * _tmp308 +
                         _tmp200 * _tmp311 + _tmp200 * _tmp312 + _tmp307 * _tmp92;
  const Scalar _tmp325 = _tmp217 * _tmp302;
  const Scalar _tmp326 = _tmp214 * _tmp305;
  const Scalar _tmp327 =
      -_tmp163 * _tmp304 - _tmp187 * _tmp325 + _tmp187 * _tmp326 + _tmp216 * _tmp303;
  const Scalar _tmp328 =
      -_tmp209 * _tmp321 + _tmp221 * (_tmp199 * (-_tmp142 * _tmp327 - _tmp325 + _tmp326) +
                                      _tmp202 * (-_tmp142 * _tmp324 - _tmp190 * _tmp308 +
                                                 _tmp190 * _tmp311 + _tmp190 * _tmp312) +
                                      _tmp204 * (-_tmp142 * _tmp323 - _tmp190 * _tmp315 +
                                                 _tmp190 * _tmp316 + _tmp190 * _tmp317) -
                                      _tmp213 * _tmp322);
  const Scalar _tmp329 = _tmp199 * _tmp303;
  const Scalar _tmp330 = _tmp179 * _tmp306;
  const Scalar _tmp331 = _tmp238 * _tmp319 + _tmp239 * _tmp314 - _tmp242 * _tmp301 -
                         _tmp245 * _tmp301 + _tmp329 * _tmp90 + _tmp330 * _tmp90;
  const Scalar _tmp332 = _tmp263 * _tmp331;
  const Scalar _tmp333 =
      _tmp266 *
      (_tmp254 * (_tmp247 * _tmp323 + _tmp249 * _tmp324 + _tmp250 * _tmp327 + _tmp251 * _tmp322) -
       _tmp265 * _tmp331);
  const Scalar _tmp334 = _tmp101 * _tmp140 * _tmp313 - _tmp140 * _tmp307 - _tmp161 * _tmp320 +
                         _tmp271 * _tmp318 - _tmp329 - _tmp330;
  const Scalar _tmp335 =
      _tmp277 * (_tmp170 * _tmp325 - _tmp170 * _tmp326 + _tmp274 * _tmp308 - _tmp274 * _tmp311 -
                 _tmp274 * _tmp312 + _tmp275 * _tmp315 - _tmp275 * _tmp316 - _tmp275 * _tmp317) -
      _tmp289 * _tmp334;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp181 * _tmp237 -
      _tmp229 *
          (-_tmp181 * _tmp228 + _tmp222 * _tmp226 -
           _tmp233 * (-_tmp181 * _tmp236 + _tmp231 * (-_tmp181 * _tmp234 - _tmp222 * _tmp235)));
  _res(2, 0) =
      -_tmp246 * _tmp261 -
      _tmp270 *
          (-_tmp264 * p_c(2, 0) + _tmp267 * _tmp268 -
           _tmp269 * (-_tmp258 * _tmp264 + _tmp259 * (-_tmp246 * _tmp257 - _tmp267 * _tmp270)));
  _res(3, 0) =
      -_tmp272 * _tmp287 -
      _tmp294 * (-_tmp272 * _tmp299 + _tmp290 * _tmp292 -
                 _tmp293 * (-_tmp272 * _tmp298 + _tmp284 * (-_tmp272 * _tmp279 - _tmp281 * _tmp296 -
                                                            _tmp290 * _tmp295)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp229 *
          (_tmp226 * _tmp328 - _tmp228 * _tmp321 -
           _tmp233 * (_tmp231 * (-_tmp234 * _tmp321 - _tmp235 * _tmp328) - _tmp236 * _tmp321)) -
      _tmp237 * _tmp321;
  _res(2, 1) =
      -_tmp261 * _tmp331 -
      _tmp270 *
          (_tmp268 * _tmp333 -
           _tmp269 * (-_tmp258 * _tmp332 + _tmp259 * (-_tmp257 * _tmp331 - _tmp270 * _tmp333)) -
           _tmp332 * p_c(2, 0));
  _res(3, 1) =
      -_tmp287 * _tmp334 -
      _tmp294 * (_tmp292 * _tmp335 -
                 _tmp293 * (_tmp284 * (-_tmp279 * _tmp334 - _tmp280 * _tmp296 - _tmp295 * _tmp335) -
                            _tmp298 * _tmp334) -
                 _tmp299 * _tmp334);
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(-1.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
