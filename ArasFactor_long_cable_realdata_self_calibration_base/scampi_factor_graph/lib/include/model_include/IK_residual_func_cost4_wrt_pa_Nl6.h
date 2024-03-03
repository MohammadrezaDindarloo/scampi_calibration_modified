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
 * Symbolic function: IK_residual_func_cost4_wrt_pa_Nl6
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPaNl6(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1194

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (394)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp2 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _tmp0 * _tmp10;
  const Scalar _tmp12 = _tmp11 + _tmp8;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp0 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp2;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp5;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = _tmp19 - p_a(0, 0);
  const Scalar _tmp21 = std::pow(_tmp20, Scalar(2));
  const Scalar _tmp22 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp26 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp27 = _tmp7 * _tmp9;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(1, 0);
  const Scalar _tmp33 = _tmp32 - p_a(1, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp21 + _tmp34;
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp37 = _tmp31 * _tmp36;
  const Scalar _tmp38 = std::sqrt(_tmp35);
  const Scalar _tmp39 = Scalar(1.0) / (_tmp38);
  const Scalar _tmp40 = _tmp31 * _tmp39;
  const Scalar _tmp41 = _tmp18 * _tmp36;
  const Scalar _tmp42 = _tmp20 * _tmp33;
  const Scalar _tmp43 = Scalar(1.0) / (_tmp20);
  const Scalar _tmp44 = _tmp38 * _tmp43;
  const Scalar _tmp45 = _tmp44 * (-_tmp21 * _tmp37 + _tmp40 + _tmp41 * _tmp42);
  const Scalar _tmp46 = _tmp13 + _tmp16;
  const Scalar _tmp47 = _tmp46 + _tmp5;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_d(0, 0);
  const Scalar _tmp50 = _tmp23 + _tmp30;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp49 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp21);
  const Scalar _tmp56 = _tmp33 * _tmp55;
  const Scalar _tmp57 = _tmp25 + _tmp29;
  const Scalar _tmp58 = _tmp23 + _tmp57;
  const Scalar _tmp59 = _tmp4 + _tmp46;
  const Scalar _tmp60 = _tmp59 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 - p_c(0, 0);
  const Scalar _tmp62 = std::pow(_tmp61, Scalar(2));
  const Scalar _tmp63 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_c(1, 0);
  const Scalar _tmp65 = _tmp62 + std::pow(_tmp64, Scalar(2));
  const Scalar _tmp66 = std::pow(_tmp65, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp61 * _tmp66;
  const Scalar _tmp68 = _tmp64 * _tmp66;
  const Scalar _tmp69 = _tmp18 * _tmp39;
  const Scalar _tmp70 = -_tmp20 * _tmp40 + _tmp33 * _tmp69;
  const Scalar _tmp71 = _tmp44 * _tmp70;
  const Scalar _tmp72 = _tmp58 * _tmp67 - _tmp59 * _tmp68 + _tmp67 * _tmp71;
  const Scalar _tmp73 = _tmp33 * _tmp43;
  const Scalar _tmp74 = _tmp67 * _tmp73;
  const Scalar _tmp75 = -_tmp68 + _tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = _tmp72 * _tmp76;
  const Scalar _tmp78 = _tmp56 * _tmp77;
  const Scalar _tmp79 = _tmp52 * _tmp53;
  const Scalar _tmp80 = _tmp54 * _tmp73;
  const Scalar _tmp81 = -_tmp79 + _tmp80;
  const Scalar _tmp82 = std::pow(_tmp75, Scalar(-2));
  const Scalar _tmp83 = _tmp67 * _tmp82;
  const Scalar _tmp84 = _tmp56 * _tmp83;
  const Scalar _tmp85 = _tmp72 * _tmp84;
  const Scalar _tmp86 = _tmp38 * _tmp55;
  const Scalar _tmp87 = _tmp70 * _tmp86;
  const Scalar _tmp88 = _tmp39 * _tmp70;
  const Scalar _tmp89 = _tmp45 * _tmp67 + _tmp67 * _tmp87 - _tmp67 * _tmp88;
  const Scalar _tmp90 = _tmp76 * _tmp81;
  const Scalar _tmp91 = _tmp45 * _tmp54 - _tmp54 * _tmp78 + _tmp54 * _tmp87 - _tmp54 * _tmp88 +
                        _tmp81 * _tmp85 - _tmp89 * _tmp90;
  const Scalar _tmp92 = -_tmp47 * _tmp79 + _tmp50 * _tmp54 + _tmp54 * _tmp71 - _tmp72 * _tmp90;
  const Scalar _tmp93 = std::pow(_tmp92, Scalar(-2));
  const Scalar _tmp94 = _tmp91 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) * _tmp54;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp97 = Scalar(1.0) * _tmp96;
  const Scalar _tmp98 = _tmp54 * _tmp97;
  const Scalar _tmp99 = _tmp67 * _tmp76;
  const Scalar _tmp100 = _tmp56 * _tmp99;
  const Scalar _tmp101 = _tmp62 / _tmp65;
  const Scalar _tmp102 = _tmp56 * _tmp82;
  const Scalar _tmp103 = _tmp101 * _tmp102;
  const Scalar _tmp104 = _tmp81 * _tmp97;
  const Scalar _tmp105 = _tmp67 * _tmp90;
  const Scalar _tmp106 = Scalar(1.0) * _tmp105;
  const Scalar _tmp107 = _tmp17 + _tmp4;
  const Scalar _tmp108 = _tmp107 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp109 = _tmp24 + _tmp57;
  const Scalar _tmp110 = _tmp109 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp108, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp110 * _tmp111;
  const Scalar _tmp113 = _tmp108 * _tmp111;
  const Scalar _tmp114 = fh1 * (_tmp107 * _tmp112 - _tmp109 * _tmp113);
  const Scalar _tmp115 = _tmp114 * _tmp44;
  const Scalar _tmp116 = _tmp114 * (-_tmp105 * _tmp97 + _tmp98);
  const Scalar _tmp117 = _tmp116 * _tmp39;
  const Scalar _tmp118 =
      -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp119 = -_tmp118;
  const Scalar _tmp120 = -Scalar(0.010999999999999999) * _tmp1 -
                         Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp121 =
      Scalar(0.20999999999999999) * _tmp26 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp122 = _tmp120 - _tmp121;
  const Scalar _tmp123 = _tmp119 + _tmp122;
  const Scalar _tmp124 = _tmp123 * _tmp73;
  const Scalar _tmp125 = _tmp120 + _tmp121;
  const Scalar _tmp126 = _tmp118 + _tmp125;
  const Scalar _tmp127 = -_tmp124 * _tmp67 + _tmp126 * _tmp68;
  const Scalar _tmp128 = _tmp127 * _tmp76;
  const Scalar _tmp129 = _tmp124 + _tmp128 * _tmp73;
  const Scalar _tmp130 = Scalar(1.0) * _tmp18;
  const Scalar _tmp131 = Scalar(1.0) * _tmp31;
  const Scalar _tmp132 = -_tmp131;
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132 + _tmp58);
  const Scalar _tmp134 = _tmp133 * (_tmp130 - _tmp59);
  const Scalar _tmp135 = _tmp123 * _tmp67;
  const Scalar _tmp136 = -_tmp126 * _tmp67 + _tmp135;
  const Scalar _tmp137 = _tmp136 * _tmp76;
  const Scalar _tmp138 = -_tmp123 - _tmp129 * _tmp134 + _tmp137 * _tmp73;
  const Scalar _tmp139 = _tmp119 + _tmp125;
  const Scalar _tmp140 = -_tmp124 * _tmp54 - _tmp127 * _tmp90 + _tmp139 * _tmp79;
  const Scalar _tmp141 = _tmp123 * _tmp54 - _tmp134 * _tmp140 - _tmp136 * _tmp90 - _tmp139 * _tmp54;
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = _tmp142 * _tmp92;
  const Scalar _tmp144 = -_tmp138 * _tmp143 - _tmp71 + _tmp73 * _tmp77;
  const Scalar _tmp145 = _tmp141 * _tmp96;
  const Scalar _tmp146 = _tmp144 * _tmp145;
  const Scalar _tmp147 = _tmp138 + _tmp146;
  const Scalar _tmp148 = _tmp142 * _tmp81;
  const Scalar _tmp149 = -_tmp147 * _tmp148 - _tmp73;
  const Scalar _tmp150 = _tmp142 * _tmp54;
  const Scalar _tmp151 = _tmp147 * _tmp150;
  const Scalar _tmp152 = _tmp113 * (_tmp149 * _tmp99 + _tmp151 + Scalar(1.0));
  const Scalar _tmp153 = _tmp152 * fh1;
  const Scalar _tmp154 = Scalar(1.0) * _tmp128;
  const Scalar _tmp155 = _tmp134 * _tmp154 - Scalar(1.0) * _tmp137;
  const Scalar _tmp156 = -_tmp143 * _tmp155 - Scalar(1.0) * _tmp77;
  const Scalar _tmp157 = _tmp145 * _tmp156;
  const Scalar _tmp158 = _tmp155 + _tmp157;
  const Scalar _tmp159 = _tmp136 * _tmp81;
  const Scalar _tmp160 = _tmp127 * _tmp84;
  const Scalar _tmp161 = _tmp123 * _tmp56;
  const Scalar _tmp162 = _tmp128 * _tmp56;
  const Scalar _tmp163 = _tmp105 * _tmp161 + _tmp160 * _tmp81 - _tmp161 * _tmp54 - _tmp162 * _tmp54;
  const Scalar _tmp164 = _tmp137 * _tmp56;
  const Scalar _tmp165 = -_tmp134 * _tmp163 + _tmp159 * _tmp84 - _tmp164 * _tmp54;
  const Scalar _tmp166 = std::pow(_tmp141, Scalar(-2));
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = _tmp167 * _tmp81;
  const Scalar _tmp169 = _tmp150 * _tmp158;
  const Scalar _tmp170 = _tmp142 * _tmp91;
  const Scalar _tmp171 = Scalar(1.0) * _tmp76;
  const Scalar _tmp172 = _tmp171 * _tmp67;
  const Scalar _tmp173 = _tmp161 * _tmp172;
  const Scalar _tmp174 = Scalar(1.0) * _tmp160;
  const Scalar _tmp175 = _tmp136 * _tmp84;
  const Scalar _tmp176 = -_tmp134 * _tmp173 - _tmp134 * _tmp174 + Scalar(1.0) * _tmp175;
  const Scalar _tmp177 = _tmp167 * _tmp92;
  const Scalar _tmp178 = _tmp145 * (-_tmp143 * _tmp176 - _tmp155 * _tmp170 + _tmp155 * _tmp177 -
                                    _tmp171 * _tmp89 + Scalar(1.0) * _tmp85);
  const Scalar _tmp179 = _tmp156 * _tmp96;
  const Scalar _tmp180 = _tmp165 * _tmp179;
  const Scalar _tmp181 = _tmp141 * _tmp156;
  const Scalar _tmp182 = _tmp181 * _tmp94;
  const Scalar _tmp183 = _tmp176 + _tmp178 + _tmp180 - _tmp182;
  const Scalar _tmp184 = -_tmp148 * _tmp183 + _tmp158 * _tmp168 - _tmp169 * _tmp56;
  const Scalar _tmp185 = -_tmp148 * _tmp158 + Scalar(1.0);
  const Scalar _tmp186 = _tmp167 * _tmp54;
  const Scalar _tmp187 = _tmp112 * fh1;
  const Scalar _tmp188 = _tmp187 * _tmp44;
  const Scalar _tmp189 = _tmp112 * (_tmp169 + _tmp185 * _tmp99);
  const Scalar _tmp190 = _tmp189 * fh1;
  const Scalar _tmp191 = _tmp39 * fh1;
  const Scalar _tmp192 = _tmp152 * _tmp191;
  const Scalar _tmp193 = _tmp141 * _tmp144;
  const Scalar _tmp194 = _tmp193 * _tmp94;
  const Scalar _tmp195 = _tmp73 * _tmp76;
  const Scalar _tmp196 = _tmp34 / [&]() {
    const Scalar base = _tmp20;
    return base * base * base;
  }();
  const Scalar _tmp197 = _tmp196 * _tmp83;
  const Scalar _tmp198 = -_tmp127 * _tmp197 - _tmp135 * _tmp196 * _tmp76 + _tmp161 + _tmp162;
  const Scalar _tmp199 = -_tmp134 * _tmp198 - _tmp136 * _tmp197 + _tmp164;
  const Scalar _tmp200 =
      _tmp145 * (-_tmp138 * _tmp170 + _tmp138 * _tmp177 - _tmp143 * _tmp199 + _tmp195 * _tmp89 -
                 _tmp197 * _tmp72 - _tmp45 + _tmp78 - _tmp87 + _tmp88);
  const Scalar _tmp201 = _tmp144 * _tmp96;
  const Scalar _tmp202 = _tmp165 * _tmp201;
  const Scalar _tmp203 = -_tmp194 + _tmp199 + _tmp200 + _tmp202;
  const Scalar _tmp204 = _tmp147 * _tmp168 - _tmp148 * _tmp203 - _tmp151 * _tmp56 - _tmp56;
  const Scalar _tmp205 = _tmp101 * _tmp149;
  const Scalar _tmp206 = _tmp113 * fh1;
  const Scalar _tmp207 = _tmp206 * _tmp44;
  const Scalar _tmp208 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp209 = _tmp130 + _tmp131 * _tmp134;
  const Scalar _tmp210 = 0;
  const Scalar _tmp211 = _tmp142 * _tmp210;
  const Scalar _tmp212 = _tmp211 * _tmp54;
  const Scalar _tmp213 = _tmp208 * (-_tmp105 * _tmp211 + _tmp212);
  const Scalar _tmp214 = _tmp213 * _tmp39;
  const Scalar _tmp215 = _tmp189 * _tmp191;
  const Scalar _tmp216 = _tmp211 * _tmp81;
  const Scalar _tmp217 = _tmp167 * _tmp210;
  const Scalar _tmp218 = _tmp208 * _tmp44;
  const Scalar _tmp219 =
      -_tmp115 * (-_tmp100 * _tmp98 + _tmp103 * _tmp104 + _tmp106 * _tmp94 - _tmp94 * _tmp95) -
      _tmp116 * _tmp86 + _tmp117 - _tmp153 * _tmp86 -
      _tmp188 * (-_tmp103 * _tmp185 + _tmp150 * _tmp183 - _tmp158 * _tmp186 + _tmp184 * _tmp99) -
      _tmp190 * _tmp86 + _tmp192 -
      _tmp207 * (-_tmp102 * _tmp205 - _tmp147 * _tmp186 + _tmp150 * _tmp203 + _tmp204 * _tmp99) -
      _tmp213 * _tmp86 + _tmp214 + _tmp215 -
      _tmp218 * (-_tmp100 * _tmp212 + _tmp103 * _tmp216 + _tmp105 * _tmp217 - _tmp217 * _tmp54);
  const Scalar _tmp220 = -_tmp116 * _tmp44 - _tmp153 * _tmp44 - _tmp190 * _tmp44 - _tmp213 * _tmp44;
  const Scalar _tmp221 = Scalar(1.0) / (_tmp220);
  const Scalar _tmp222 = _tmp140 * _tmp142;
  const Scalar _tmp223 = _tmp132 + _tmp50;
  const Scalar _tmp224 = _tmp134 * _tmp223;
  const Scalar _tmp225 = Scalar(1.0) / (_tmp130 - _tmp224 - _tmp47);
  const Scalar _tmp226 = _tmp209 * _tmp225;
  const Scalar _tmp227 = _tmp132 - _tmp210 * _tmp222 - _tmp223 * _tmp226;
  const Scalar _tmp228 = Scalar(1.0) * _tmp133;
  const Scalar _tmp229 = Scalar(1.0) * _tmp225;
  const Scalar _tmp230 = Scalar(1.0) * _tmp208;
  const Scalar _tmp231 = _tmp223 * _tmp225;
  const Scalar _tmp232 = _tmp129 + _tmp146 * _tmp231 - _tmp147 * _tmp222;
  const Scalar _tmp233 = Scalar(1.0) * fh1;
  const Scalar _tmp234 = _tmp113 * _tmp233;
  const Scalar _tmp235 = _tmp133 * _tmp223;
  const Scalar _tmp236 = fh1 * (_tmp118 + _tmp122);
  const Scalar _tmp237 = _tmp107 * fv1 + _tmp113 * _tmp236 + Scalar(40.024799999999999) * _tmp12;
  const Scalar _tmp238 = _tmp145 * _tmp229;
  const Scalar _tmp239 = -_tmp140 * _tmp97 + _tmp223 * _tmp238;
  const Scalar _tmp240 = Scalar(1.0) * _tmp114;
  const Scalar _tmp241 = -_tmp154 + _tmp157 * _tmp231 - _tmp158 * _tmp222;
  const Scalar _tmp242 = _tmp112 * _tmp233;
  const Scalar _tmp243 = -_tmp109 * fv1 - _tmp112 * _tmp236 - Scalar(40.024799999999999) * _tmp28;
  const Scalar _tmp244 = _tmp224 * _tmp229 + Scalar(1.0);
  const Scalar _tmp245 = _tmp134 * _tmp229;
  const Scalar _tmp246 = _tmp230 * (-_tmp209 * _tmp229 - _tmp227 * _tmp228 + Scalar(1.0)) +
                         _tmp234 * (_tmp146 * _tmp229 - _tmp228 * _tmp232) +
                         Scalar(1.0) * _tmp237 * (_tmp229 * _tmp235 - _tmp229) +
                         _tmp240 * (-_tmp228 * _tmp239 + _tmp238) +
                         _tmp242 * (_tmp157 * _tmp229 - _tmp228 * _tmp241) +
                         Scalar(1.0) * _tmp243 * (-_tmp228 * _tmp244 + _tmp245);
  const Scalar _tmp247 = std::asinh(_tmp221 * _tmp246);
  const Scalar _tmp248 = Scalar(1.0) * _tmp247;
  const Scalar _tmp249 = Scalar(1.4083112389913199) * _tmp247;
  const Scalar _tmp250 = -_tmp32 + p_a(1, 0);
  const Scalar _tmp251 = -_tmp19 + p_a(0, 0);
  const Scalar _tmp252 =
      std::sqrt(Scalar(std::pow(_tmp250, Scalar(2)) + std::pow(_tmp251, Scalar(2))));
  const Scalar _tmp253 = -_tmp220 * _tmp249 - _tmp252;
  const Scalar _tmp254 = Scalar(0.71007031138673404) * _tmp221;
  const Scalar _tmp255 = _tmp253 * _tmp254;
  const Scalar _tmp256 = -Scalar(1.4083112389913199) * std::sinh(_tmp248) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp255);
  const Scalar _tmp257 = _tmp140 * _tmp167;
  const Scalar _tmp258 = -_tmp163 * _tmp211 + _tmp210 * _tmp257;
  const Scalar _tmp259 = _tmp133 * _tmp230;
  const Scalar _tmp260 = _tmp229 * _tmp96;
  const Scalar _tmp261 = _tmp165 * _tmp260;
  const Scalar _tmp262 = _tmp141 * _tmp229;
  const Scalar _tmp263 = _tmp262 * _tmp94;
  const Scalar _tmp264 = Scalar(1.0) * _tmp140;
  const Scalar _tmp265 =
      -_tmp163 * _tmp97 + _tmp223 * _tmp261 - _tmp223 * _tmp263 + _tmp264 * _tmp94;
  const Scalar _tmp266 = _tmp142 * _tmp163;
  const Scalar _tmp267 = _tmp147 * _tmp257 - _tmp147 * _tmp266 - _tmp194 * _tmp231 + _tmp198 +
                         _tmp200 * _tmp231 + _tmp202 * _tmp231 - _tmp203 * _tmp222;
  const Scalar _tmp268 = _tmp158 * _tmp257 - _tmp158 * _tmp266 + _tmp173 + _tmp174 +
                         _tmp178 * _tmp231 + _tmp180 * _tmp231 - _tmp182 * _tmp231 -
                         _tmp183 * _tmp222;
  const Scalar _tmp269 = std::pow(_tmp220, Scalar(-2));
  const Scalar _tmp270 = _tmp246 * _tmp269;
  const Scalar _tmp271 =
      std::pow(Scalar(std::pow(_tmp246, Scalar(2)) * _tmp269 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp272 = _tmp271 * (-_tmp219 * _tmp270 +
                                    _tmp221 * (_tmp234 * (-_tmp194 * _tmp229 + _tmp200 * _tmp229 +
                                                          _tmp202 * _tmp229 - _tmp228 * _tmp267) +
                                               _tmp240 * (-_tmp228 * _tmp265 + _tmp261 - _tmp263) +
                                               _tmp242 * (_tmp178 * _tmp229 + _tmp180 * _tmp229 -
                                                          _tmp182 * _tmp229 - _tmp228 * _tmp268) -
                                               _tmp258 * _tmp259));
  const Scalar _tmp273 = Scalar(1.0) * std::cosh(_tmp248);
  const Scalar _tmp274 = std::cosh(_tmp255);
  const Scalar _tmp275 = Scalar(0.71007031138673404) * _tmp253 * _tmp269;
  const Scalar _tmp276 = Scalar(1.4083112389913199) * _tmp220;
  const Scalar _tmp277 = Scalar(1.0) / (_tmp252);
  const Scalar _tmp278 = _tmp76 * fh1;
  const Scalar _tmp279 = _tmp112 * _tmp278;
  const Scalar _tmp280 = _tmp114 * _tmp97;
  const Scalar _tmp281 = _tmp54 * _tmp76;
  const Scalar _tmp282 = _tmp280 * _tmp281;
  const Scalar _tmp283 = _tmp208 * _tmp217;
  const Scalar _tmp284 = _tmp208 * _tmp211;
  const Scalar _tmp285 = _tmp281 * _tmp284;
  const Scalar _tmp286 = _tmp240 * _tmp94;
  const Scalar _tmp287 = _tmp149 * _tmp206;
  const Scalar _tmp288 = _tmp113 * _tmp278;
  const Scalar _tmp289 = _tmp81 * _tmp84;
  const Scalar _tmp290 = _tmp184 * _tmp279 - _tmp185 * _tmp187 * _tmp84 + _tmp204 * _tmp288 +
                         _tmp280 * _tmp289 - _tmp282 * _tmp56 + _tmp283 * _tmp90 +
                         _tmp284 * _tmp289 - _tmp285 * _tmp56 + _tmp286 * _tmp90 - _tmp287 * _tmp84;
  const Scalar _tmp291 =
      _tmp149 * _tmp288 + _tmp185 * _tmp279 - _tmp280 * _tmp90 - _tmp284 * _tmp90;
  const Scalar _tmp292 = std::pow(_tmp291, Scalar(-2));
  const Scalar _tmp293 = _tmp133 * fh1;
  const Scalar _tmp294 = _tmp113 * _tmp293;
  const Scalar _tmp295 = _tmp229 * _tmp237;
  const Scalar _tmp296 = _tmp114 * _tmp133;
  const Scalar _tmp297 = _tmp133 * _tmp208;
  const Scalar _tmp298 = _tmp112 * _tmp293;
  const Scalar _tmp299 = _tmp133 * _tmp243 * _tmp244 + _tmp227 * _tmp297 + _tmp232 * _tmp294 -
                         _tmp235 * _tmp295 + _tmp239 * _tmp296 + _tmp241 * _tmp298;
  const Scalar _tmp300 = Scalar(1.0) / (_tmp291);
  const Scalar _tmp301 = std::asinh(_tmp299 * _tmp300);
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp291;
  const Scalar _tmp303 =
      -_tmp301 * _tmp302 - std::sqrt(Scalar(std::pow(Scalar(-_tmp60 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp292 * _tmp303;
  const Scalar _tmp305 =
      std::pow(Scalar(_tmp292 * std::pow(_tmp299, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp306 = _tmp292 * _tmp299;
  const Scalar _tmp307 =
      _tmp305 * (-_tmp290 * _tmp306 + _tmp300 * (_tmp258 * _tmp297 + _tmp265 * _tmp296 +
                                                 _tmp267 * _tmp294 + _tmp268 * _tmp298));
  const Scalar _tmp308 = Scalar(1.4083112389913199) * _tmp290;
  const Scalar _tmp309 = Scalar(0.71007031138673404) * _tmp300;
  const Scalar _tmp310 = _tmp303 * _tmp309;
  const Scalar _tmp311 = std::cosh(_tmp310);
  const Scalar _tmp312 = Scalar(1.0) * _tmp301;
  const Scalar _tmp313 = Scalar(1.0) * std::cosh(_tmp312);
  const Scalar _tmp314 = -std::sinh(_tmp310) - std::sinh(_tmp312);
  const Scalar _tmp315 = _tmp142 * fh1;
  const Scalar _tmp316 = _tmp112 * _tmp315;
  const Scalar _tmp317 = _tmp113 * _tmp315;
  const Scalar _tmp318 = -_tmp147 * _tmp167 * _tmp206 - _tmp158 * _tmp167 * _tmp187 +
                         _tmp183 * _tmp316 + _tmp203 * _tmp317 - _tmp283 - _tmp286;
  const Scalar _tmp319 = _tmp147 * _tmp317 + _tmp158 * _tmp316 + _tmp280 + _tmp284;
  const Scalar _tmp320 = std::pow(_tmp319, Scalar(-2));
  const Scalar _tmp321 = _tmp187 * _tmp225;
  const Scalar _tmp322 = _tmp206 * _tmp225;
  const Scalar _tmp323 = -_tmp114 * _tmp238 - _tmp146 * _tmp322 - _tmp157 * _tmp321 +
                         _tmp208 * _tmp226 - _tmp243 * _tmp245 + _tmp295;
  const Scalar _tmp324 = Scalar(1.0) / (_tmp319);
  const Scalar _tmp325 = std::asinh(_tmp323 * _tmp324);
  const Scalar _tmp326 = Scalar(1.4083112389913199) * _tmp325;
  const Scalar _tmp327 =
      -_tmp319 * _tmp326 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp328 = Scalar(0.71007031138673404) * _tmp320 * _tmp327;
  const Scalar _tmp329 = Scalar(1.4083112389913199) * _tmp319;
  const Scalar _tmp330 = _tmp320 * _tmp323;
  const Scalar _tmp331 =
      std::pow(Scalar(_tmp320 * std::pow(_tmp323, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp332 =
      _tmp331 *
      (-_tmp318 * _tmp330 +
       _tmp324 * (-_tmp114 * _tmp261 + _tmp114 * _tmp263 - _tmp178 * _tmp321 - _tmp180 * _tmp321 +
                  _tmp182 * _tmp321 + _tmp194 * _tmp322 - _tmp200 * _tmp322 - _tmp202 * _tmp322));
  const Scalar _tmp333 = Scalar(0.71007031138673404) * _tmp324;
  const Scalar _tmp334 = _tmp327 * _tmp333;
  const Scalar _tmp335 = std::cosh(_tmp334);
  const Scalar _tmp336 = Scalar(1.0) * _tmp325;
  const Scalar _tmp337 = Scalar(1.0) * std::cosh(_tmp336);
  const Scalar _tmp338 = -Scalar(1.4083112389913199) * std::sinh(_tmp334) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp336);
  const Scalar _tmp339 = _tmp43 * _tmp99;
  const Scalar _tmp340 = _tmp43 * _tmp82;
  const Scalar _tmp341 = _tmp101 * _tmp340;
  const Scalar _tmp342 = _tmp340 * _tmp67;
  const Scalar _tmp343 = _tmp123 * _tmp43;
  const Scalar _tmp344 = _tmp342 * _tmp81;
  const Scalar _tmp345 = _tmp128 * _tmp43;
  const Scalar _tmp346 =
      -_tmp105 * _tmp343 - _tmp127 * _tmp344 + _tmp343 * _tmp54 + _tmp345 * _tmp54;
  const Scalar _tmp347 = _tmp137 * _tmp43;
  const Scalar _tmp348 = -_tmp134 * _tmp346 - _tmp159 * _tmp342 + _tmp347 * _tmp54;
  const Scalar _tmp349 = _tmp166 * _tmp348;
  const Scalar _tmp350 = _tmp210 * _tmp349;
  const Scalar _tmp351 = _tmp43 * _tmp77;
  const Scalar _tmp352 = _tmp44 * (_tmp34 * _tmp41 - _tmp37 * _tmp42 - _tmp69);
  const Scalar _tmp353 = _tmp352 * _tmp67 - _tmp74 * _tmp88;
  const Scalar _tmp354 = _tmp342 * _tmp72;
  const Scalar _tmp355 =
      _tmp351 * _tmp54 + _tmp352 * _tmp54 - _tmp353 * _tmp90 - _tmp354 * _tmp81 - _tmp80 * _tmp88;
  const Scalar _tmp356 = _tmp355 * _tmp93;
  const Scalar _tmp357 = _tmp179 * _tmp348;
  const Scalar _tmp358 = Scalar(1.0) * _tmp342;
  const Scalar _tmp359 = _tmp127 * _tmp358;
  const Scalar _tmp360 = _tmp172 * _tmp343;
  const Scalar _tmp361 = _tmp134 * _tmp359 + _tmp134 * _tmp360 - _tmp136 * _tmp358;
  const Scalar _tmp362 = _tmp142 * _tmp355;
  const Scalar _tmp363 = _tmp349 * _tmp92;
  const Scalar _tmp364 = _tmp145 * (-_tmp143 * _tmp361 - _tmp155 * _tmp362 + _tmp155 * _tmp363 -
                                    _tmp171 * _tmp353 - Scalar(1.0) * _tmp354);
  const Scalar _tmp365 = _tmp181 * _tmp356;
  const Scalar _tmp366 = _tmp357 + _tmp361 + _tmp364 - _tmp365;
  const Scalar _tmp367 = _tmp158 * _tmp349;
  const Scalar _tmp368 = -_tmp148 * _tmp366 + _tmp169 * _tmp43 + _tmp367 * _tmp81;
  const Scalar _tmp369 = _tmp185 * _tmp340;
  const Scalar _tmp370 = _tmp147 * _tmp349;
  const Scalar _tmp371 = _tmp193 * _tmp356;
  const Scalar _tmp372 = _tmp201 * _tmp348;
  const Scalar _tmp373 = _tmp160 + _tmp161 * _tmp99 - _tmp343 - _tmp345;
  const Scalar _tmp374 = -_tmp134 * _tmp373 + _tmp175 - _tmp347;
  const Scalar _tmp375 =
      _tmp145 * (-_tmp138 * _tmp362 + _tmp138 * _tmp363 - _tmp143 * _tmp374 + _tmp195 * _tmp353 -
                 _tmp351 - _tmp352 + _tmp73 * _tmp88 + _tmp85);
  const Scalar _tmp376 = -_tmp371 + _tmp372 + _tmp374 + _tmp375;
  const Scalar _tmp377 = -_tmp148 * _tmp376 + _tmp151 * _tmp43 + _tmp370 * _tmp81 + _tmp43;
  const Scalar _tmp378 =
      -_tmp115 * (-_tmp104 * _tmp341 + _tmp106 * _tmp356 + _tmp339 * _tmp98 - _tmp356 * _tmp95) +
      _tmp117 * _tmp73 -
      _tmp188 * (_tmp101 * _tmp369 + _tmp150 * _tmp366 - _tmp367 * _tmp54 + _tmp368 * _tmp99) +
      _tmp192 * _tmp73 -
      _tmp207 * (_tmp150 * _tmp376 + _tmp205 * _tmp340 - _tmp370 * _tmp54 + _tmp377 * _tmp99) +
      _tmp214 * _tmp73 + _tmp215 * _tmp73 -
      _tmp218 * (_tmp105 * _tmp350 + _tmp212 * _tmp339 - _tmp216 * _tmp341 - _tmp350 * _tmp54);
  const Scalar _tmp379 = _tmp142 * _tmp346;
  const Scalar _tmp380 = _tmp140 * _tmp370 - _tmp147 * _tmp379 - _tmp222 * _tmp376 -
                         _tmp231 * _tmp371 + _tmp231 * _tmp372 + _tmp231 * _tmp375 + _tmp373;
  const Scalar _tmp381 = _tmp262 * _tmp356;
  const Scalar _tmp382 = _tmp260 * _tmp348;
  const Scalar _tmp383 =
      -_tmp223 * _tmp381 + _tmp223 * _tmp382 + _tmp264 * _tmp356 - _tmp346 * _tmp97;
  const Scalar _tmp384 = _tmp140 * _tmp350 - _tmp210 * _tmp379;
  const Scalar _tmp385 = _tmp140 * _tmp367 - _tmp158 * _tmp379 - _tmp222 * _tmp366 +
                         _tmp231 * _tmp357 + _tmp231 * _tmp364 - _tmp231 * _tmp365 - _tmp359 -
                         _tmp360;
  const Scalar _tmp386 = _tmp271 * (_tmp221 * (_tmp234 * (-_tmp228 * _tmp380 - _tmp229 * _tmp371 +
                                                          _tmp229 * _tmp372 + _tmp229 * _tmp375) +
                                               _tmp240 * (-_tmp228 * _tmp383 - _tmp381 + _tmp382) +
                                               _tmp242 * (-_tmp228 * _tmp385 + _tmp229 * _tmp357 +
                                                          _tmp229 * _tmp364 - _tmp229 * _tmp365) -
                                               _tmp259 * _tmp384) -
                                    _tmp270 * _tmp378);
  const Scalar _tmp387 = _tmp208 * _tmp350;
  const Scalar _tmp388 = _tmp240 * _tmp356;
  const Scalar _tmp389 = _tmp187 * _tmp369 * _tmp67 + _tmp279 * _tmp368 - _tmp280 * _tmp344 +
                         _tmp282 * _tmp43 - _tmp284 * _tmp344 + _tmp285 * _tmp43 +
                         _tmp287 * _tmp342 + _tmp288 * _tmp377 + _tmp387 * _tmp90 +
                         _tmp388 * _tmp90;
  const Scalar _tmp390 = Scalar(1.4083112389913199) * _tmp389;
  const Scalar _tmp391 =
      _tmp305 *
      (_tmp300 * (_tmp294 * _tmp380 + _tmp296 * _tmp383 + _tmp297 * _tmp384 + _tmp298 * _tmp385) -
       _tmp306 * _tmp389);
  const Scalar _tmp392 = -_tmp187 * _tmp367 - _tmp206 * _tmp370 + _tmp316 * _tmp366 +
                         _tmp317 * _tmp376 - _tmp387 - _tmp388;
  const Scalar _tmp393 =
      _tmp331 *
      (_tmp324 * (_tmp114 * _tmp381 - _tmp114 * _tmp382 - _tmp321 * _tmp357 - _tmp321 * _tmp364 +
                  _tmp321 * _tmp365 + _tmp322 * _tmp371 - _tmp322 * _tmp372 - _tmp322 * _tmp375) -
       _tmp330 * _tmp392);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp219 * _tmp256 +
      _tmp276 * (-_tmp272 * _tmp273 -
                 _tmp274 * (-_tmp219 * _tmp275 + _tmp254 * (-_tmp219 * _tmp249 - _tmp251 * _tmp277 -
                                                            _tmp272 * _tmp276)));
  _res(2, 0) =
      _tmp302 *
          (-_tmp307 * _tmp313 -
           _tmp311 * (-_tmp290 * _tmp304 + _tmp309 * (-_tmp301 * _tmp308 - _tmp302 * _tmp307))) +
      _tmp308 * _tmp314;
  _res(3, 0) =
      _tmp318 * _tmp338 +
      _tmp329 *
          (-_tmp332 * _tmp337 -
           _tmp335 * (-_tmp318 * _tmp328 + _tmp333 * (-_tmp318 * _tmp326 - _tmp329 * _tmp332)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp256 * _tmp378 +
      _tmp276 * (-_tmp273 * _tmp386 -
                 _tmp274 * (_tmp254 * (-_tmp249 * _tmp378 - _tmp250 * _tmp277 - _tmp276 * _tmp386) -
                            _tmp275 * _tmp378));
  _res(2, 1) =
      _tmp302 *
          (-_tmp311 * (-_tmp304 * _tmp389 + _tmp309 * (-_tmp301 * _tmp390 - _tmp302 * _tmp391)) -
           _tmp313 * _tmp391) +
      _tmp314 * _tmp390;
  _res(3, 1) =
      _tmp329 *
          (-_tmp335 * (-_tmp328 * _tmp392 + _tmp333 * (-_tmp326 * _tmp392 - _tmp329 * _tmp393)) -
           _tmp337 * _tmp393) +
      _tmp338 * _tmp392;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
