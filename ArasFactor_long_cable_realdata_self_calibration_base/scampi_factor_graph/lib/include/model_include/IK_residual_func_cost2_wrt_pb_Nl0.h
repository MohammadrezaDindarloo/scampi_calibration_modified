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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl0
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 1208

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (390)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp0 * _tmp1;
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp5 = _tmp3 * _tmp4;
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp2 - Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp0 * _tmp4;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_b(0, 0);
  const Scalar _tmp20 = _tmp0 * _tmp8;
  const Scalar _tmp21 = _tmp1 * _tmp4;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp24 + Scalar(-0.010999999999999999);
  const Scalar _tmp26 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp23 + _tmp27;
  const Scalar _tmp29 = -_tmp28 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp31 = -_tmp30;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp33 = _tmp20 - _tmp21;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp33;
  const Scalar _tmp35 = _tmp32 + _tmp34;
  const Scalar _tmp36 = _tmp31 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp38 = -_tmp37 + p_b(1, 0);
  const Scalar _tmp39 = std::pow(_tmp19, Scalar(2)) + std::pow(_tmp38, Scalar(2));
  const Scalar _tmp40 =
      std::pow(Scalar(std::pow(_tmp29, Scalar(2)) + _tmp39), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp18 - p_b(0, 0);
  const Scalar _tmp42 = std::pow(_tmp41, Scalar(2));
  const Scalar _tmp43 = Scalar(1.0) / (_tmp42);
  const Scalar _tmp44 = _tmp37 - p_b(1, 0);
  const Scalar _tmp45 = _tmp43 * _tmp44;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp47 = _tmp44 * _tmp46;
  const Scalar _tmp48 = _tmp16 + _tmp6;
  const Scalar _tmp49 = _tmp48 + position_vector(0, 0);
  const Scalar _tmp50 = _tmp49 - p_c(0, 0);
  const Scalar _tmp51 = std::pow(_tmp50, Scalar(2));
  const Scalar _tmp52 = _tmp30 + _tmp35;
  const Scalar _tmp53 = _tmp52 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - p_c(1, 0);
  const Scalar _tmp55 = _tmp51 + std::pow(_tmp54, Scalar(2));
  const Scalar _tmp56 = std::pow(_tmp55, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp50 * _tmp56;
  const Scalar _tmp58 = _tmp47 * _tmp57;
  const Scalar _tmp59 = _tmp54 * _tmp56;
  const Scalar _tmp60 = _tmp58 - _tmp59;
  const Scalar _tmp61 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) * _tmp17;
  const Scalar _tmp64 = Scalar(1.0) * _tmp36;
  const Scalar _tmp65 = -_tmp64;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp52 + _tmp65);
  const Scalar _tmp67 = -_tmp48 + _tmp63;
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp63 + _tmp64 * _tmp68;
  const Scalar _tmp70 = 0;
  const Scalar _tmp71 = _tmp25 - _tmp26;
  const Scalar _tmp72 = _tmp22 + _tmp71;
  const Scalar _tmp73 = _tmp12 - _tmp15;
  const Scalar _tmp74 = _tmp6 + _tmp73;
  const Scalar _tmp75 = _tmp74 + position_vector(0, 0);
  const Scalar _tmp76 = _tmp75 - p_d(0, 0);
  const Scalar _tmp77 = -_tmp32 + _tmp34;
  const Scalar _tmp78 = _tmp30 + _tmp77;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_d(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp76 * _tmp81;
  const Scalar _tmp83 = _tmp28 * _tmp82;
  const Scalar _tmp84 = _tmp80 * _tmp81;
  const Scalar _tmp85 = _tmp28 * _tmp57;
  const Scalar _tmp86 = _tmp22 + _tmp27;
  const Scalar _tmp87 = -_tmp47 * _tmp85 + _tmp59 * _tmp86;
  const Scalar _tmp88 = _tmp47 * _tmp82 - _tmp84;
  const Scalar _tmp89 = _tmp61 * _tmp88;
  const Scalar _tmp90 = -_tmp47 * _tmp83 + _tmp72 * _tmp84 - _tmp87 * _tmp89;
  const Scalar _tmp91 = -_tmp57 * _tmp86 + _tmp85;
  const Scalar _tmp92 = -_tmp68 * _tmp90 - _tmp72 * _tmp82 + _tmp83 - _tmp89 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp70 * _tmp93;
  const Scalar _tmp95 = _tmp82 * _tmp94;
  const Scalar _tmp96 = std::pow(_tmp60, Scalar(-2));
  const Scalar _tmp97 = _tmp45 * _tmp96;
  const Scalar _tmp98 = _tmp57 * _tmp91;
  const Scalar _tmp99 = _tmp97 * _tmp98;
  const Scalar _tmp100 = _tmp57 * _tmp87;
  const Scalar _tmp101 = _tmp100 * _tmp97;
  const Scalar _tmp102 = _tmp45 * _tmp61;
  const Scalar _tmp103 = _tmp102 * _tmp87;
  const Scalar _tmp104 = _tmp28 * _tmp45;
  const Scalar _tmp105 = _tmp57 * _tmp89;
  const Scalar _tmp106 = _tmp101 * _tmp88 - _tmp103 * _tmp82 + _tmp104 * _tmp105 - _tmp45 * _tmp83;
  const Scalar _tmp107 = _tmp102 * _tmp91;
  const Scalar _tmp108 = -_tmp106 * _tmp68 - _tmp107 * _tmp82 + _tmp88 * _tmp99;
  const Scalar _tmp109 = std::pow(_tmp92, Scalar(-2));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp82;
  const Scalar _tmp112 = _tmp51 / _tmp55;
  const Scalar _tmp113 = _tmp112 * _tmp97;
  const Scalar _tmp114 = _tmp88 * _tmp94;
  const Scalar _tmp115 = _tmp105 * _tmp70;
  const Scalar _tmp116 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp117 = std::pow(_tmp44, Scalar(2));
  const Scalar _tmp118 = _tmp117 + _tmp42;
  const Scalar _tmp119 = std::sqrt(_tmp118);
  const Scalar _tmp120 = _tmp119 * _tmp46;
  const Scalar _tmp121 = _tmp116 * _tmp120;
  const Scalar _tmp122 = Scalar(1.0) / (_tmp119);
  const Scalar _tmp123 = _tmp122 * _tmp17;
  const Scalar _tmp124 = _tmp122 * _tmp36;
  const Scalar _tmp125 = _tmp123 * _tmp44 - _tmp124 * _tmp41;
  const Scalar _tmp126 = _tmp120 * _tmp125;
  const Scalar _tmp127 = _tmp126 * _tmp57 - _tmp48 * _tmp59 + _tmp52 * _tmp57;
  const Scalar _tmp128 = _tmp126 * _tmp82 - _tmp127 * _tmp89 - _tmp74 * _tmp84 + _tmp78 * _tmp82;
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = Scalar(1.0) * _tmp61;
  const Scalar _tmp132 = _tmp131 * _tmp57;
  const Scalar _tmp133 = _tmp129 * _tmp88;
  const Scalar _tmp134 = _tmp31 + _tmp77;
  const Scalar _tmp135 = _tmp7 + _tmp73;
  const Scalar _tmp136 = _tmp135 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp137 = _tmp134 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp138 =
      std::pow(Scalar(std::pow(_tmp136, Scalar(2)) + std::pow(_tmp137, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp139 = _tmp136 * _tmp138;
  const Scalar _tmp140 = _tmp137 * _tmp138;
  const Scalar _tmp141 = fh1 * (-_tmp134 * _tmp139 + _tmp135 * _tmp140);
  const Scalar _tmp142 = _tmp141 * (_tmp130 * _tmp82 - _tmp132 * _tmp133);
  const Scalar _tmp143 = _tmp122 * _tmp142;
  const Scalar _tmp144 = _tmp119 * _tmp43;
  const Scalar _tmp145 = _tmp47 * _tmp61;
  const Scalar _tmp146 = _tmp145 * _tmp87 + _tmp28 * _tmp47;
  const Scalar _tmp147 = _tmp145 * _tmp91 - _tmp146 * _tmp68 - _tmp28;
  const Scalar _tmp148 = _tmp128 * _tmp93;
  const Scalar _tmp149 = -_tmp126 + _tmp127 * _tmp145 - _tmp147 * _tmp148;
  const Scalar _tmp150 = _tmp129 * _tmp92;
  const Scalar _tmp151 = _tmp149 * _tmp150;
  const Scalar _tmp152 = _tmp147 + _tmp151;
  const Scalar _tmp153 = _tmp88 * _tmp93;
  const Scalar _tmp154 = -_tmp152 * _tmp153 - _tmp47;
  const Scalar _tmp155 = _tmp152 * _tmp93;
  const Scalar _tmp156 = _tmp155 * _tmp82;
  const Scalar _tmp157 = _tmp139 * fh1;
  const Scalar _tmp158 = _tmp157 * (_tmp154 * _tmp62 + _tmp156 + Scalar(1.0));
  const Scalar _tmp159 = _tmp122 * _tmp158;
  const Scalar _tmp160 = _tmp117 / [&]() {
    const Scalar base = _tmp41;
    return base * base * base;
  }();
  const Scalar _tmp161 = _tmp160 * _tmp96;
  const Scalar _tmp162 = -_tmp100 * _tmp161 + _tmp103 + _tmp104 - _tmp160 * _tmp61 * _tmp85;
  const Scalar _tmp163 = _tmp107 - _tmp161 * _tmp98 - _tmp162 * _tmp68;
  const Scalar _tmp164 = _tmp125 * _tmp144;
  const Scalar _tmp165 = _tmp122 * _tmp125;
  const Scalar _tmp166 = std::pow(_tmp118, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp167 = _tmp166 * _tmp36;
  const Scalar _tmp168 = _tmp166 * _tmp17;
  const Scalar _tmp169 = _tmp41 * _tmp44;
  const Scalar _tmp170 = _tmp120 * (_tmp124 - _tmp167 * _tmp42 + _tmp168 * _tmp169);
  const Scalar _tmp171 = _tmp164 * _tmp57 - _tmp165 * _tmp57 + _tmp170 * _tmp57;
  const Scalar _tmp172 = _tmp127 * _tmp57;
  const Scalar _tmp173 = _tmp172 * _tmp97;
  const Scalar _tmp174 = _tmp102 * _tmp127;
  const Scalar _tmp175 = _tmp164 * _tmp82 - _tmp165 * _tmp82 + _tmp170 * _tmp82 - _tmp171 * _tmp89 +
                         _tmp173 * _tmp88 - _tmp174 * _tmp82;
  const Scalar _tmp176 = _tmp175 * _tmp93;
  const Scalar _tmp177 = _tmp110 * _tmp128;
  const Scalar _tmp178 =
      _tmp150 * (_tmp145 * _tmp171 - _tmp147 * _tmp176 + _tmp147 * _tmp177 - _tmp148 * _tmp163 -
                 _tmp161 * _tmp172 - _tmp164 + _tmp165 - _tmp170 + _tmp174);
  const Scalar _tmp179 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp180 = _tmp175 * _tmp179;
  const Scalar _tmp181 = _tmp149 * _tmp92;
  const Scalar _tmp182 = _tmp180 * _tmp181;
  const Scalar _tmp183 = _tmp108 * _tmp129;
  const Scalar _tmp184 = _tmp149 * _tmp183;
  const Scalar _tmp185 = _tmp163 + _tmp178 - _tmp182 + _tmp184;
  const Scalar _tmp186 = _tmp82 * _tmp93;
  const Scalar _tmp187 = _tmp112 * _tmp154;
  const Scalar _tmp188 = _tmp152 * _tmp88;
  const Scalar _tmp189 = _tmp110 * _tmp188 - _tmp153 * _tmp185 - _tmp156 * _tmp45 - _tmp45;
  const Scalar _tmp190 = _tmp120 * _tmp157;
  const Scalar _tmp191 = Scalar(1.0) * _tmp66;
  const Scalar _tmp192 = _tmp191 * _tmp67;
  const Scalar _tmp193 = _tmp192 * _tmp87;
  const Scalar _tmp194 = -_tmp131 * _tmp91 + _tmp193 * _tmp61;
  const Scalar _tmp195 = -_tmp127 * _tmp131 - _tmp148 * _tmp194;
  const Scalar _tmp196 = _tmp150 * _tmp195;
  const Scalar _tmp197 = _tmp194 + _tmp196;
  const Scalar _tmp198 = _tmp197 * _tmp93;
  const Scalar _tmp199 = _tmp198 * _tmp82;
  const Scalar _tmp200 = -_tmp153 * _tmp197 + Scalar(1.0);
  const Scalar _tmp201 = _tmp140 * fh1;
  const Scalar _tmp202 = _tmp201 * (_tmp199 + _tmp200 * _tmp62);
  const Scalar _tmp203 = _tmp122 * _tmp202;
  const Scalar _tmp204 = _tmp129 * _tmp82;
  const Scalar _tmp205 = _tmp204 * _tmp45;
  const Scalar _tmp206 = _tmp130 * _tmp88;
  const Scalar _tmp207 = _tmp180 * _tmp88;
  const Scalar _tmp208 = Scalar(1.0) * _tmp82;
  const Scalar _tmp209 = _tmp120 * _tmp141;
  const Scalar _tmp210 = _tmp116 * (-_tmp105 * _tmp94 + _tmp95);
  const Scalar _tmp211 = _tmp197 * _tmp88;
  const Scalar _tmp212 = _tmp195 * _tmp92;
  const Scalar _tmp213 = _tmp180 * _tmp212;
  const Scalar _tmp214 = _tmp104 * _tmp62;
  const Scalar _tmp215 = _tmp57 * _tmp97;
  const Scalar _tmp216 = -_tmp192 * _tmp214 - _tmp193 * _tmp215 + Scalar(1.0) * _tmp99;
  const Scalar _tmp217 = _tmp150 * (-_tmp131 * _tmp171 - _tmp148 * _tmp216 + Scalar(1.0) * _tmp173 -
                                    _tmp176 * _tmp194 + _tmp177 * _tmp194);
  const Scalar _tmp218 = _tmp183 * _tmp195;
  const Scalar _tmp219 = -_tmp213 + _tmp216 + _tmp217 + _tmp218;
  const Scalar _tmp220 = _tmp110 * _tmp211 - _tmp153 * _tmp219 - _tmp199 * _tmp45;
  const Scalar _tmp221 = _tmp120 * _tmp201;
  const Scalar _tmp222 = _tmp122 * _tmp210;
  const Scalar _tmp223 =
      -_tmp121 *
          (_tmp110 * _tmp115 - _tmp111 * _tmp70 + _tmp113 * _tmp114 - _tmp45 * _tmp62 * _tmp95) -
      _tmp142 * _tmp144 + _tmp143 - _tmp144 * _tmp158 - _tmp144 * _tmp202 - _tmp144 * _tmp210 +
      _tmp159 -
      _tmp190 * (-_tmp111 * _tmp152 + _tmp185 * _tmp186 - _tmp187 * _tmp97 + _tmp189 * _tmp62) +
      _tmp203 -
      _tmp209 * (_tmp113 * _tmp206 - _tmp132 * _tmp205 + _tmp132 * _tmp207 - _tmp180 * _tmp208) -
      _tmp221 * (-_tmp111 * _tmp197 - _tmp113 * _tmp200 + _tmp186 * _tmp219 + _tmp220 * _tmp62) +
      _tmp222;
  const Scalar _tmp224 = std::sqrt(_tmp39);
  const Scalar _tmp225 =
      -_tmp120 * _tmp142 - _tmp120 * _tmp158 - _tmp120 * _tmp202 - _tmp120 * _tmp210;
  const Scalar _tmp226 = Scalar(1.0) / (_tmp225);
  const Scalar _tmp227 = fh1 * (_tmp23 + _tmp71);
  const Scalar _tmp228 = Scalar(40.024799999999999) * _tmp11 + _tmp135 * fv1 + _tmp139 * _tmp227;
  const Scalar _tmp229 = _tmp65 + _tmp78;
  const Scalar _tmp230 = _tmp229 * _tmp68;
  const Scalar _tmp231 = Scalar(1.0) / (-_tmp230 + _tmp63 - _tmp74);
  const Scalar _tmp232 = Scalar(1.0) * _tmp231;
  const Scalar _tmp233 = _tmp229 * _tmp232;
  const Scalar _tmp234 = _tmp231 * _tmp69;
  const Scalar _tmp235 = -_tmp229 * _tmp234 + _tmp65 - _tmp90 * _tmp94;
  const Scalar _tmp236 = -_tmp134 * fv1 - _tmp140 * _tmp227 - Scalar(40.024799999999999) * _tmp33;
  const Scalar _tmp237 = _tmp66 * (_tmp230 * _tmp232 + Scalar(1.0));
  const Scalar _tmp238 = _tmp232 * _tmp68;
  const Scalar _tmp239 = -_tmp130 * _tmp90 + _tmp150 * _tmp233;
  const Scalar _tmp240 = _tmp150 * _tmp232;
  const Scalar _tmp241 = Scalar(1.0) * _tmp141;
  const Scalar _tmp242 = _tmp229 * _tmp231;
  const Scalar _tmp243 = _tmp90 * _tmp93;
  const Scalar _tmp244 = -_tmp131 * _tmp87 + _tmp196 * _tmp242 - _tmp197 * _tmp243;
  const Scalar _tmp245 = Scalar(1.0) * _tmp201;
  const Scalar _tmp246 = _tmp146 + _tmp151 * _tmp242 - _tmp152 * _tmp243;
  const Scalar _tmp247 = Scalar(1.0) * _tmp157;
  const Scalar _tmp248 =
      Scalar(1.0) * _tmp116 * (-_tmp191 * _tmp235 - _tmp232 * _tmp69 + Scalar(1.0)) +
      Scalar(1.0) * _tmp228 * (-_tmp232 + _tmp233 * _tmp66) +
      Scalar(1.0) * _tmp236 * (-Scalar(1.0) * _tmp237 + _tmp238) +
      _tmp241 * (-_tmp191 * _tmp239 + _tmp240) +
      _tmp245 * (-_tmp191 * _tmp244 + _tmp196 * _tmp232) +
      _tmp247 * (_tmp151 * _tmp232 - _tmp191 * _tmp246);
  const Scalar _tmp249 = std::asinh(_tmp226 * _tmp248);
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp225;
  const Scalar _tmp251 = -_tmp224 - _tmp249 * _tmp250;
  const Scalar _tmp252 = Scalar(0.71007031138673404) * _tmp226;
  const Scalar _tmp253 = _tmp251 * _tmp252;
  const Scalar _tmp254 = Scalar(1.0) * _tmp249;
  const Scalar _tmp255 = -Scalar(1.4083112389913199) * std::sinh(_tmp253) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp254);
  const Scalar _tmp256 = std::cosh(_tmp253);
  const Scalar _tmp257 = Scalar(1.0) / (_tmp224);
  const Scalar _tmp258 = std::pow(_tmp225, Scalar(-2));
  const Scalar _tmp259 = _tmp248 * _tmp258;
  const Scalar _tmp260 = _tmp110 * _tmp90;
  const Scalar _tmp261 = _tmp116 * _tmp66;
  const Scalar _tmp262 = _tmp261 * (-_tmp106 * _tmp94 + _tmp260 * _tmp70);
  const Scalar _tmp263 = _tmp232 * _tmp92;
  const Scalar _tmp264 = _tmp180 * _tmp263;
  const Scalar _tmp265 = _tmp183 * _tmp232;
  const Scalar _tmp266 = Scalar(1.0) * _tmp90;
  const Scalar _tmp267 = _tmp233 * _tmp92;
  const Scalar _tmp268 =
      -_tmp106 * _tmp130 + _tmp180 * _tmp266 - _tmp180 * _tmp267 + _tmp183 * _tmp233;
  const Scalar _tmp269 = -_tmp106 * _tmp155 + _tmp152 * _tmp260 + _tmp162 + _tmp178 * _tmp242 -
                         _tmp182 * _tmp242 + _tmp184 * _tmp242 - _tmp185 * _tmp243;
  const Scalar _tmp270 = Scalar(1.0) * _tmp101 + _tmp104 * _tmp132 - _tmp106 * _tmp198 +
                         _tmp197 * _tmp260 - _tmp213 * _tmp242 + _tmp217 * _tmp242 +
                         _tmp218 * _tmp242 - _tmp219 * _tmp243;
  const Scalar _tmp271 =
      std::pow(Scalar(std::pow(_tmp248, Scalar(2)) * _tmp258 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp272 = _tmp271 * (-_tmp223 * _tmp259 +
                                    _tmp226 * (_tmp241 * (-_tmp191 * _tmp268 - _tmp264 + _tmp265) +
                                               _tmp245 * (-_tmp191 * _tmp270 - _tmp213 * _tmp232 +
                                                          _tmp217 * _tmp232 + _tmp218 * _tmp232) +
                                               _tmp247 * (_tmp178 * _tmp232 - _tmp182 * _tmp232 +
                                                          _tmp184 * _tmp232 - _tmp191 * _tmp269) -
                                               Scalar(1.0) * _tmp262));
  const Scalar _tmp273 = Scalar(1.4083112389913199) * _tmp249;
  const Scalar _tmp274 = Scalar(0.71007031138673404) * _tmp251 * _tmp258;
  const Scalar _tmp275 = Scalar(1.0) * std::cosh(_tmp254);
  const Scalar _tmp276 = _tmp130 * _tmp141;
  const Scalar _tmp277 = _tmp215 * _tmp88;
  const Scalar _tmp278 = _tmp116 * _tmp94;
  const Scalar _tmp279 = _tmp131 * _tmp141;
  const Scalar _tmp280 = _tmp278 * _tmp82;
  const Scalar _tmp281 = _tmp201 * _tmp61;
  const Scalar _tmp282 = _tmp116 * _tmp70;
  const Scalar _tmp283 = _tmp110 * _tmp282;
  const Scalar _tmp284 = _tmp157 * _tmp61;
  const Scalar _tmp285 = _tmp201 * _tmp57;
  const Scalar _tmp286 = _tmp154 * _tmp157;
  const Scalar _tmp287 = -_tmp102 * _tmp280 + _tmp189 * _tmp284 - _tmp200 * _tmp285 * _tmp97 -
                         _tmp205 * _tmp279 + _tmp207 * _tmp279 - _tmp215 * _tmp286 +
                         _tmp220 * _tmp281 + _tmp276 * _tmp277 + _tmp277 * _tmp278 +
                         _tmp283 * _tmp89;
  const Scalar _tmp288 =
      -_tmp133 * _tmp279 + _tmp154 * _tmp284 + _tmp200 * _tmp281 - _tmp278 * _tmp89;
  const Scalar _tmp289 = std::pow(_tmp288, Scalar(-2));
  const Scalar _tmp290 = Scalar(1.0) / (_tmp288);
  const Scalar _tmp291 = _tmp157 * _tmp66;
  const Scalar _tmp292 = _tmp201 * _tmp66;
  const Scalar _tmp293 = _tmp228 * _tmp232;
  const Scalar _tmp294 = _tmp141 * _tmp66;
  const Scalar _tmp295 = -_tmp229 * _tmp293 * _tmp66 + _tmp235 * _tmp261 + _tmp236 * _tmp237 +
                         _tmp239 * _tmp294 + _tmp244 * _tmp292 + _tmp246 * _tmp291;
  const Scalar _tmp296 = std::asinh(_tmp290 * _tmp295);
  const Scalar _tmp297 = Scalar(1.4083112389913199) * _tmp288;
  const Scalar _tmp298 =
      -_tmp296 * _tmp297 - std::sqrt(Scalar(std::pow(Scalar(-_tmp49 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp53 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp299 = Scalar(0.71007031138673404) * _tmp289 * _tmp298;
  const Scalar _tmp300 = Scalar(1.4083112389913199) * _tmp287;
  const Scalar _tmp301 = _tmp289 * _tmp295;
  const Scalar _tmp302 =
      std::pow(Scalar(_tmp289 * std::pow(_tmp295, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp303 =
      _tmp302 * (-_tmp287 * _tmp301 +
                 _tmp290 * (_tmp262 + _tmp268 * _tmp294 + _tmp269 * _tmp291 + _tmp270 * _tmp292));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp290;
  const Scalar _tmp305 = _tmp298 * _tmp304;
  const Scalar _tmp306 = std::cosh(_tmp305);
  const Scalar _tmp307 = Scalar(1.0) * _tmp296;
  const Scalar _tmp308 = Scalar(1.0) * std::cosh(_tmp307);
  const Scalar _tmp309 = -std::sinh(_tmp305) - std::sinh(_tmp307);
  const Scalar _tmp310 = _tmp155 * _tmp157 + _tmp198 * _tmp201 + _tmp276 + _tmp278;
  const Scalar _tmp311 = Scalar(1.0) / (_tmp310);
  const Scalar _tmp312 = _tmp201 * _tmp231;
  const Scalar _tmp313 = _tmp157 * _tmp231;
  const Scalar _tmp314 = _tmp116 * _tmp234 - _tmp141 * _tmp240 - _tmp151 * _tmp313 -
                         _tmp196 * _tmp312 - _tmp236 * _tmp238 + _tmp293;
  const Scalar _tmp315 = std::asinh(_tmp311 * _tmp314);
  const Scalar _tmp316 = Scalar(1.4083112389913199) * _tmp310;
  const Scalar _tmp317 =
      -_tmp315 * _tmp316 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp79 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp318 = Scalar(0.71007031138673404) * _tmp311;
  const Scalar _tmp319 = _tmp317 * _tmp318;
  const Scalar _tmp320 = Scalar(1.0) * _tmp315;
  const Scalar _tmp321 = -std::sinh(_tmp319) - std::sinh(_tmp320);
  const Scalar _tmp322 = _tmp197 * _tmp201;
  const Scalar _tmp323 = _tmp152 * _tmp157;
  const Scalar _tmp324 = _tmp201 * _tmp93;
  const Scalar _tmp325 = _tmp157 * _tmp93;
  const Scalar _tmp326 = -_tmp110 * _tmp322 - _tmp110 * _tmp323 - _tmp180 * _tmp241 +
                         _tmp185 * _tmp325 + _tmp219 * _tmp324 - _tmp283;
  const Scalar _tmp327 = Scalar(1.4083112389913199) * _tmp326;
  const Scalar _tmp328 = std::pow(_tmp310, Scalar(-2));
  const Scalar _tmp329 =
      std::pow(Scalar(std::pow(_tmp314, Scalar(2)) * _tmp328 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp330 = _tmp314 * _tmp328;
  const Scalar _tmp331 =
      _tmp329 *
      (_tmp311 * (_tmp141 * _tmp264 - _tmp141 * _tmp265 - _tmp178 * _tmp313 + _tmp182 * _tmp313 -
                  _tmp184 * _tmp313 + _tmp213 * _tmp312 - _tmp217 * _tmp312 - _tmp218 * _tmp312) -
       _tmp326 * _tmp330);
  const Scalar _tmp332 = Scalar(1.0) * std::cosh(_tmp320);
  const Scalar _tmp333 = std::cosh(_tmp319);
  const Scalar _tmp334 = Scalar(0.71007031138673404) * _tmp317 * _tmp328;
  const Scalar _tmp335 = _tmp120 * (_tmp117 * _tmp168 - _tmp123 - _tmp167 * _tmp169);
  const Scalar _tmp336 = -_tmp165 * _tmp58 + _tmp335 * _tmp57;
  const Scalar _tmp337 = _tmp46 * _tmp96;
  const Scalar _tmp338 = _tmp337 * _tmp57;
  const Scalar _tmp339 = _tmp338 * _tmp88;
  const Scalar _tmp340 = _tmp46 * _tmp61;
  const Scalar _tmp341 = _tmp127 * _tmp340;
  const Scalar _tmp342 = _tmp165 * _tmp47;
  const Scalar _tmp343 = -_tmp127 * _tmp339 + _tmp335 * _tmp82 - _tmp336 * _tmp89 +
                         _tmp341 * _tmp82 - _tmp342 * _tmp82;
  const Scalar _tmp344 = _tmp343 * _tmp93;
  const Scalar _tmp345 = _tmp340 * _tmp91;
  const Scalar _tmp346 = _tmp338 * _tmp91;
  const Scalar _tmp347 = _tmp28 * _tmp46;
  const Scalar _tmp348 = _tmp340 * _tmp87;
  const Scalar _tmp349 =
      -_tmp105 * _tmp347 - _tmp339 * _tmp87 + _tmp347 * _tmp82 + _tmp348 * _tmp82;
  const Scalar _tmp350 = _tmp345 * _tmp82 - _tmp346 * _tmp88 - _tmp349 * _tmp68;
  const Scalar _tmp351 = _tmp109 * _tmp350;
  const Scalar _tmp352 = _tmp128 * _tmp351;
  const Scalar _tmp353 = _tmp192 * _tmp347 * _tmp62 + _tmp193 * _tmp338 - Scalar(1.0) * _tmp346;
  const Scalar _tmp354 = Scalar(1.0) * _tmp338;
  const Scalar _tmp355 = _tmp150 * (-_tmp127 * _tmp354 - _tmp131 * _tmp336 - _tmp148 * _tmp353 -
                                    _tmp194 * _tmp344 + _tmp194 * _tmp352);
  const Scalar _tmp356 = _tmp179 * _tmp343;
  const Scalar _tmp357 = _tmp212 * _tmp356;
  const Scalar _tmp358 = _tmp129 * _tmp350;
  const Scalar _tmp359 = _tmp195 * _tmp358;
  const Scalar _tmp360 = _tmp353 + _tmp355 - _tmp357 + _tmp359;
  const Scalar _tmp361 = _tmp200 * _tmp337;
  const Scalar _tmp362 = -_tmp153 * _tmp360 + _tmp199 * _tmp46 + _tmp211 * _tmp351;
  const Scalar _tmp363 = _tmp351 * _tmp82;
  const Scalar _tmp364 = _tmp356 * _tmp88;
  const Scalar _tmp365 = _tmp112 * _tmp337;
  const Scalar _tmp366 = _tmp204 * _tmp46;
  const Scalar _tmp367 = _tmp101 + _tmp214 - _tmp347 - _tmp348;
  const Scalar _tmp368 = -_tmp345 - _tmp367 * _tmp68 + _tmp99;
  const Scalar _tmp369 = _tmp150 * (_tmp145 * _tmp336 - _tmp147 * _tmp344 + _tmp147 * _tmp352 -
                                    _tmp148 * _tmp368 + _tmp173 - _tmp335 - _tmp341 + _tmp342);
  const Scalar _tmp370 = _tmp149 * _tmp358;
  const Scalar _tmp371 = _tmp181 * _tmp356;
  const Scalar _tmp372 = _tmp368 + _tmp369 + _tmp370 - _tmp371;
  const Scalar _tmp373 = -_tmp153 * _tmp372 + _tmp156 * _tmp46 + _tmp188 * _tmp351 + _tmp46;
  const Scalar _tmp374 =
      -_tmp121 *
          (-_tmp114 * _tmp365 + _tmp115 * _tmp351 + _tmp340 * _tmp57 * _tmp95 - _tmp363 * _tmp70) +
      _tmp143 * _tmp47 + _tmp159 * _tmp47 -
      _tmp190 * (-_tmp152 * _tmp363 + _tmp186 * _tmp372 + _tmp187 * _tmp337 + _tmp373 * _tmp62) +
      _tmp203 * _tmp47 -
      _tmp209 * (_tmp132 * _tmp364 + _tmp132 * _tmp366 - _tmp206 * _tmp365 - _tmp208 * _tmp356) -
      _tmp221 * (_tmp112 * _tmp361 + _tmp186 * _tmp360 - _tmp197 * _tmp363 + _tmp362 * _tmp62) +
      _tmp222 * _tmp47;
  const Scalar _tmp375 = _tmp232 * _tmp358;
  const Scalar _tmp376 =
      -_tmp130 * _tmp349 + _tmp229 * _tmp375 + _tmp266 * _tmp356 - _tmp267 * _tmp356;
  const Scalar _tmp377 = _tmp263 * _tmp356;
  const Scalar _tmp378 = _tmp351 * _tmp90;
  const Scalar _tmp379 = _tmp152 * _tmp378 - _tmp155 * _tmp349 + _tmp242 * _tmp369 +
                         _tmp242 * _tmp370 - _tmp242 * _tmp371 - _tmp243 * _tmp372 + _tmp367;
  const Scalar _tmp380 = _tmp261 * (-_tmp349 * _tmp94 + _tmp378 * _tmp70);
  const Scalar _tmp381 = -_tmp132 * _tmp347 + _tmp197 * _tmp378 - _tmp198 * _tmp349 +
                         _tmp242 * _tmp355 - _tmp242 * _tmp357 + _tmp242 * _tmp359 -
                         _tmp243 * _tmp360 - _tmp354 * _tmp87;
  const Scalar _tmp382 = _tmp271 * (_tmp226 * (_tmp241 * (-_tmp191 * _tmp376 + _tmp375 - _tmp377) +
                                               _tmp245 * (-_tmp191 * _tmp381 + _tmp232 * _tmp355 -
                                                          _tmp232 * _tmp357 + _tmp232 * _tmp359) +
                                               _tmp247 * (-_tmp191 * _tmp379 + _tmp232 * _tmp369 +
                                                          _tmp232 * _tmp370 - _tmp232 * _tmp371) -
                                               Scalar(1.0) * _tmp380) -
                                    _tmp259 * _tmp374);
  const Scalar _tmp383 = _tmp282 * _tmp351;
  const Scalar _tmp384 = -_tmp276 * _tmp339 - _tmp278 * _tmp339 + _tmp279 * _tmp364 +
                         _tmp279 * _tmp366 + _tmp280 * _tmp340 + _tmp281 * _tmp362 +
                         _tmp284 * _tmp373 + _tmp285 * _tmp361 + _tmp286 * _tmp338 +
                         _tmp383 * _tmp89;
  const Scalar _tmp385 = Scalar(1.4083112389913199) * _tmp384;
  const Scalar _tmp386 =
      _tmp302 * (_tmp290 * (_tmp291 * _tmp379 + _tmp292 * _tmp381 + _tmp294 * _tmp376 + _tmp380) -
                 _tmp301 * _tmp384);
  const Scalar _tmp387 = -_tmp241 * _tmp356 - _tmp322 * _tmp351 - _tmp323 * _tmp351 +
                         _tmp324 * _tmp360 + _tmp325 * _tmp372 - _tmp383;
  const Scalar _tmp388 =
      _tmp329 *
      (_tmp311 * (-_tmp141 * _tmp375 + _tmp141 * _tmp377 - _tmp312 * _tmp355 + _tmp312 * _tmp357 -
                  _tmp312 * _tmp359 - _tmp313 * _tmp369 - _tmp313 * _tmp370 + _tmp313 * _tmp371) -
       _tmp330 * _tmp387);
  const Scalar _tmp389 = Scalar(1.4083112389913199) * _tmp387;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp19 * _tmp40 + _tmp223 * _tmp255 +
      _tmp250 * (-_tmp256 * (-_tmp223 * _tmp274 + _tmp252 * (-_tmp19 * _tmp257 - _tmp223 * _tmp273 -
                                                             _tmp250 * _tmp272)) -
                 _tmp272 * _tmp275);
  _res(2, 0) =
      _tmp297 *
          (-_tmp303 * _tmp308 -
           _tmp306 * (-_tmp287 * _tmp299 + _tmp304 * (-_tmp296 * _tmp300 - _tmp297 * _tmp303))) +
      _tmp300 * _tmp309;
  _res(3, 0) =
      _tmp316 *
          (-_tmp331 * _tmp332 -
           _tmp333 * (_tmp318 * (-_tmp315 * _tmp327 - _tmp316 * _tmp331) - _tmp326 * _tmp334)) +
      _tmp321 * _tmp327;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp250 * (-_tmp256 * (_tmp252 * (-_tmp250 * _tmp382 - _tmp257 * _tmp38 - _tmp273 * _tmp374) -
                             _tmp274 * _tmp374) -
                 _tmp275 * _tmp382) +
      _tmp255 * _tmp374 - _tmp38 * _tmp40;
  _res(2, 1) =
      _tmp297 *
          (-_tmp306 * (-_tmp299 * _tmp384 + _tmp304 * (-_tmp296 * _tmp385 - _tmp297 * _tmp386)) -
           _tmp308 * _tmp386) +
      _tmp309 * _tmp385;
  _res(3, 1) =
      _tmp316 *
          (-_tmp332 * _tmp388 -
           _tmp333 * (_tmp318 * (-_tmp315 * _tmp389 - _tmp316 * _tmp388) - _tmp334 * _tmp387)) +
      _tmp321 * _tmp389;
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp29 * _tmp40;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
