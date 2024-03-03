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
 * Symbolic function: IK_residual_func_cost1_wrt_pc_Nl9
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPcNl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1214

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (390)
  const Scalar _tmp0 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp12 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp6;
  const Scalar _tmp14 = _tmp12 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = Scalar(1.0) * _tmp17;
  const Scalar _tmp19 = -_tmp18;
  const Scalar _tmp20 = -_tmp8;
  const Scalar _tmp21 = _tmp16 + _tmp20;
  const Scalar _tmp22 = Scalar(1.0) / (_tmp19 + _tmp21);
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp24 = _tmp3 * _tmp5;
  const Scalar _tmp25 = _tmp1 * _tmp6;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp28;
  const Scalar _tmp30 = _tmp27 - _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp27 + _tmp29;
  const Scalar _tmp33 = _tmp23 + _tmp32;
  const Scalar _tmp34 = Scalar(1.0) * _tmp33;
  const Scalar _tmp35 = -_tmp31 + _tmp34;
  const Scalar _tmp36 = _tmp22 * _tmp35;
  const Scalar _tmp37 = _tmp18 * _tmp36 + _tmp34;
  const Scalar _tmp38 = 0;
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp40 = -_tmp39;
  const Scalar _tmp41 =
      -Scalar(0.010999999999999999) * _tmp28 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_d(0, 0);
  const Scalar _tmp47 = std::pow(_tmp46, Scalar(2));
  const Scalar _tmp48 = _tmp21 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_d(1, 0);
  const Scalar _tmp50 = _tmp47 + std::pow(_tmp49, Scalar(2));
  const Scalar _tmp51 = std::pow(_tmp50, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp54 = _tmp53 - p_c(1, 0);
  const Scalar _tmp55 = _tmp33 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_c(0, 0);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = _tmp39 + _tmp43;
  const Scalar _tmp59 = _tmp57 * _tmp58;
  const Scalar _tmp60 = _tmp54 * _tmp59;
  const Scalar _tmp61 = _tmp46 * _tmp51;
  const Scalar _tmp62 = _tmp44 * _tmp52 - _tmp60 * _tmp61;
  const Scalar _tmp63 = _tmp54 * _tmp57;
  const Scalar _tmp64 = -_tmp52 + _tmp61 * _tmp63;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = -_tmp11 + _tmp15;
  const Scalar _tmp67 = _tmp20 + _tmp66;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 - p_a(1, 0);
  const Scalar _tmp70 = -_tmp23;
  const Scalar _tmp71 = _tmp30 + _tmp70;
  const Scalar _tmp72 = _tmp71 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 - p_a(0, 0);
  const Scalar _tmp74 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp73, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp75 = _tmp69 * _tmp74;
  const Scalar _tmp76 = _tmp73 * _tmp74;
  const Scalar _tmp77 = _tmp63 * _tmp76 - _tmp75;
  const Scalar _tmp78 = _tmp65 * _tmp77;
  const Scalar _tmp79 = _tmp41 - _tmp42;
  const Scalar _tmp80 = _tmp40 + _tmp79;
  const Scalar _tmp81 = -_tmp60 * _tmp76 - _tmp62 * _tmp78 + _tmp75 * _tmp80;
  const Scalar _tmp82 = _tmp58 * _tmp61;
  const Scalar _tmp83 = -_tmp44 * _tmp61 + _tmp82;
  const Scalar _tmp84 = -_tmp36 * _tmp81 + _tmp58 * _tmp76 - _tmp76 * _tmp80 - _tmp78 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp81 * _tmp85;
  const Scalar _tmp87 = _tmp19 + _tmp67;
  const Scalar _tmp88 = _tmp36 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp34 - _tmp71 - _tmp88);
  const Scalar _tmp90 = _tmp37 * _tmp89;
  const Scalar _tmp91 = _tmp19 - _tmp38 * _tmp86 - _tmp87 * _tmp90;
  const Scalar _tmp92 = Scalar(1.0) * _tmp22;
  const Scalar _tmp93 = Scalar(1.0) * _tmp89;
  const Scalar _tmp94 = _tmp22 * _tmp87;
  const Scalar _tmp95 = _tmp32 + _tmp70;
  const Scalar _tmp96 = _tmp95 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp97 = _tmp66 + _tmp8;
  const Scalar _tmp98 = _tmp97 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp96, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp96 * _tmp99;
  const Scalar _tmp101 = fh1 * (_tmp39 + _tmp79);
  const Scalar _tmp102 = _tmp100 * _tmp101 + Scalar(40.024799999999999) * _tmp26 + _tmp95 * fv1;
  const Scalar _tmp103 = std::pow(_tmp56, Scalar(2));
  const Scalar _tmp104 = std::pow(_tmp54, Scalar(2));
  const Scalar _tmp105 = _tmp103 + _tmp104;
  const Scalar _tmp106 = std::sqrt(_tmp105);
  const Scalar _tmp107 = Scalar(1.0) / (_tmp106);
  const Scalar _tmp108 = _tmp107 * _tmp17;
  const Scalar _tmp109 = _tmp107 * _tmp33;
  const Scalar _tmp110 = -_tmp108 * _tmp56 + _tmp109 * _tmp54;
  const Scalar _tmp111 = _tmp106 * _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp57;
  const Scalar _tmp113 = _tmp112 * _tmp61 + _tmp21 * _tmp61 - _tmp31 * _tmp52;
  const Scalar _tmp114 = _tmp113 * _tmp65;
  const Scalar _tmp115 = _tmp63 * _tmp65;
  const Scalar _tmp116 = _tmp115 * _tmp62 + _tmp60;
  const Scalar _tmp117 = _tmp115 * _tmp83 - _tmp116 * _tmp36 - _tmp58;
  const Scalar _tmp118 = _tmp112 * _tmp76 - _tmp114 * _tmp77 + _tmp67 * _tmp76 - _tmp71 * _tmp75;
  const Scalar _tmp119 = _tmp118 * _tmp85;
  const Scalar _tmp120 = -_tmp112 + _tmp114 * _tmp63 - _tmp117 * _tmp119;
  const Scalar _tmp121 = Scalar(1.0) / (_tmp118);
  const Scalar _tmp122 = _tmp121 * _tmp84;
  const Scalar _tmp123 = _tmp120 * _tmp122;
  const Scalar _tmp124 = _tmp117 + _tmp123;
  const Scalar _tmp125 = _tmp87 * _tmp89;
  const Scalar _tmp126 = _tmp116 + _tmp123 * _tmp125 - _tmp124 * _tmp86;
  const Scalar _tmp127 = _tmp100 * fh1;
  const Scalar _tmp128 = Scalar(1.0) * _tmp127;
  const Scalar _tmp129 = _tmp122 * _tmp93;
  const Scalar _tmp130 = Scalar(1.0) * _tmp121;
  const Scalar _tmp131 = _tmp129 * _tmp87 - _tmp130 * _tmp81;
  const Scalar _tmp132 = _tmp98 * _tmp99;
  const Scalar _tmp133 = fh1 * (-_tmp100 * _tmp97 + _tmp132 * _tmp95);
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp35 * _tmp92;
  const Scalar _tmp136 = _tmp135 * _tmp62;
  const Scalar _tmp137 = Scalar(1.0) * _tmp65;
  const Scalar _tmp138 = _tmp136 * _tmp65 - _tmp137 * _tmp83;
  const Scalar _tmp139 = -Scalar(1.0) * _tmp114 - _tmp119 * _tmp138;
  const Scalar _tmp140 = _tmp122 * _tmp139;
  const Scalar _tmp141 = _tmp138 + _tmp140;
  const Scalar _tmp142 = _tmp125 * _tmp140 - _tmp137 * _tmp62 - _tmp141 * _tmp86;
  const Scalar _tmp143 = _tmp132 * fh1;
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = -_tmp101 * _tmp132 - Scalar(40.024799999999999) * _tmp14 - _tmp97 * fv1;
  const Scalar _tmp146 = _tmp88 * _tmp93 + Scalar(1.0);
  const Scalar _tmp147 = _tmp36 * _tmp93;
  const Scalar _tmp148 = Scalar(1.0) * _tmp0 * (-_tmp37 * _tmp93 - _tmp91 * _tmp92 + Scalar(1.0)) +
                         Scalar(1.0) * _tmp102 * (_tmp93 * _tmp94 - _tmp93) +
                         _tmp128 * (_tmp123 * _tmp93 - _tmp126 * _tmp92) +
                         _tmp134 * (_tmp129 - _tmp131 * _tmp92) +
                         _tmp144 * (_tmp140 * _tmp93 - _tmp142 * _tmp92) +
                         Scalar(1.0) * _tmp145 * (-_tmp146 * _tmp92 + _tmp147);
  const Scalar _tmp149 = _tmp106 * _tmp57;
  const Scalar _tmp150 = _tmp77 * _tmp85;
  const Scalar _tmp151 = -_tmp141 * _tmp150 + Scalar(1.0);
  const Scalar _tmp152 = _tmp61 * _tmp65;
  const Scalar _tmp153 = _tmp76 * _tmp85;
  const Scalar _tmp154 = _tmp141 * _tmp153;
  const Scalar _tmp155 = _tmp143 * (_tmp151 * _tmp152 + _tmp154);
  const Scalar _tmp156 = _tmp124 * _tmp153;
  const Scalar _tmp157 = -_tmp124 * _tmp150 - _tmp63;
  const Scalar _tmp158 = _tmp127 * (_tmp152 * _tmp157 + _tmp156 + Scalar(1.0));
  const Scalar _tmp159 = _tmp150 * _tmp38;
  const Scalar _tmp160 = _tmp38 * _tmp85;
  const Scalar _tmp161 = _tmp160 * _tmp76;
  const Scalar _tmp162 = _tmp0 * (-_tmp152 * _tmp159 + _tmp161);
  const Scalar _tmp163 = _tmp130 * _tmp76;
  const Scalar _tmp164 = _tmp61 * _tmp78;
  const Scalar _tmp165 = _tmp133 * (-_tmp130 * _tmp164 + _tmp163);
  const Scalar _tmp166 =
      -_tmp149 * _tmp155 - _tmp149 * _tmp158 - _tmp149 * _tmp162 - _tmp149 * _tmp165;
  const Scalar _tmp167 = Scalar(1.0) / (_tmp166);
  const Scalar _tmp168 = std::asinh(_tmp148 * _tmp167);
  const Scalar _tmp169 = Scalar(1.4083112389913199) * _tmp166;
  const Scalar _tmp170 = -_tmp53 + p_c(1, 0);
  const Scalar _tmp171 = -_tmp55 + p_c(0, 0);
  const Scalar _tmp172 =
      std::sqrt(Scalar(std::pow(_tmp170, Scalar(2)) + std::pow(_tmp171, Scalar(2))));
  const Scalar _tmp173 = -_tmp168 * _tmp169 - _tmp172;
  const Scalar _tmp174 = Scalar(0.71007031138673404) * _tmp167;
  const Scalar _tmp175 = _tmp173 * _tmp174;
  const Scalar _tmp176 = std::sinh(_tmp175);
  const Scalar _tmp177 = _tmp107 * _tmp162;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp179 = _tmp106 * _tmp178;
  const Scalar _tmp180 = _tmp107 * _tmp165;
  const Scalar _tmp181 = _tmp137 * _tmp61;
  const Scalar _tmp182 = std::pow(_tmp64, Scalar(-2));
  const Scalar _tmp183 = _tmp178 * _tmp54;
  const Scalar _tmp184 = _tmp182 * _tmp183;
  const Scalar _tmp185 = _tmp184 * _tmp61;
  const Scalar _tmp186 = _tmp113 * _tmp185;
  const Scalar _tmp187 = _tmp111 * _tmp178;
  const Scalar _tmp188 = _tmp107 * _tmp110;
  const Scalar _tmp189 = _tmp188 * _tmp61;
  const Scalar _tmp190 = std::pow(_tmp105, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp191 = _tmp17 * _tmp190;
  const Scalar _tmp192 = _tmp190 * _tmp33;
  const Scalar _tmp193 = _tmp54 * _tmp56;
  const Scalar _tmp194 = _tmp149 * (-_tmp103 * _tmp191 + _tmp108 + _tmp192 * _tmp193);
  const Scalar _tmp195 = _tmp187 * _tmp61 - _tmp189 + _tmp194 * _tmp61;
  const Scalar _tmp196 = _tmp188 * _tmp76;
  const Scalar _tmp197 = _tmp114 * _tmp183;
  const Scalar _tmp198 = _tmp186 * _tmp77 + _tmp187 * _tmp76 + _tmp194 * _tmp76 - _tmp195 * _tmp78 -
                         _tmp196 - _tmp197 * _tmp76;
  const Scalar _tmp199 = std::pow(_tmp118, Scalar(-2));
  const Scalar _tmp200 = _tmp198 * _tmp199;
  const Scalar _tmp201 = _tmp200 * _tmp77;
  const Scalar _tmp202 = _tmp47 / _tmp50;
  const Scalar _tmp203 = _tmp184 * _tmp202;
  const Scalar _tmp204 = _tmp130 * _tmp77;
  const Scalar _tmp205 = Scalar(1.0) * _tmp76;
  const Scalar _tmp206 = _tmp152 * _tmp183;
  const Scalar _tmp207 = _tmp133 * _tmp149;
  const Scalar _tmp208 = _tmp185 * _tmp83;
  const Scalar _tmp209 = _tmp183 * _tmp65;
  const Scalar _tmp210 = _tmp209 * _tmp83;
  const Scalar _tmp211 = _tmp185 * _tmp62;
  const Scalar _tmp212 = _tmp183 * _tmp58;
  const Scalar _tmp213 = _tmp209 * _tmp62;
  const Scalar _tmp214 = _tmp164 * _tmp212 + _tmp211 * _tmp77 - _tmp212 * _tmp76 - _tmp213 * _tmp76;
  const Scalar _tmp215 = _tmp208 * _tmp77 - _tmp210 * _tmp76 - _tmp214 * _tmp36;
  const Scalar _tmp216 = std::pow(_tmp84, Scalar(-2));
  const Scalar _tmp217 = _tmp215 * _tmp216;
  const Scalar _tmp218 = _tmp217 * _tmp76;
  const Scalar _tmp219 = _tmp141 * _tmp77;
  const Scalar _tmp220 = _tmp200 * _tmp84;
  const Scalar _tmp221 = _tmp139 * _tmp220;
  const Scalar _tmp222 = _tmp121 * _tmp215;
  const Scalar _tmp223 = _tmp139 * _tmp222;
  const Scalar _tmp224 = _tmp118 * _tmp217;
  const Scalar _tmp225 = _tmp198 * _tmp85;
  const Scalar _tmp226 = _tmp152 * _tmp212;
  const Scalar _tmp227 = -_tmp135 * _tmp226 - _tmp136 * _tmp185 + Scalar(1.0) * _tmp208;
  const Scalar _tmp228 = _tmp122 * (-_tmp119 * _tmp227 - _tmp137 * _tmp195 + _tmp138 * _tmp224 -
                                    _tmp138 * _tmp225 + Scalar(1.0) * _tmp186);
  const Scalar _tmp229 = -_tmp221 + _tmp223 + _tmp227 + _tmp228;
  const Scalar _tmp230 = -_tmp150 * _tmp229 - _tmp154 * _tmp183 + _tmp217 * _tmp219;
  const Scalar _tmp231 = _tmp143 * _tmp149;
  const Scalar _tmp232 = _tmp107 * _tmp158;
  const Scalar _tmp233 = _tmp164 * _tmp38;
  const Scalar _tmp234 = _tmp0 * _tmp149;
  const Scalar _tmp235 = _tmp107 * _tmp155;
  const Scalar _tmp236 = _tmp124 * _tmp77;
  const Scalar _tmp237 = _tmp120 * _tmp220;
  const Scalar _tmp238 = _tmp104 / [&]() {
    const Scalar base = _tmp56;
    return base * base * base;
  }();
  const Scalar _tmp239 = _tmp182 * _tmp238 * _tmp61;
  const Scalar _tmp240 = _tmp212 + _tmp213 - _tmp238 * _tmp65 * _tmp82 - _tmp239 * _tmp62;
  const Scalar _tmp241 = _tmp210 - _tmp239 * _tmp83 - _tmp240 * _tmp36;
  const Scalar _tmp242 =
      _tmp122 * (-_tmp113 * _tmp239 + _tmp115 * _tmp195 + _tmp117 * _tmp224 - _tmp117 * _tmp225 -
                 _tmp119 * _tmp241 - _tmp187 + _tmp188 - _tmp194 + _tmp197);
  const Scalar _tmp243 = _tmp120 * _tmp222;
  const Scalar _tmp244 = -_tmp237 + _tmp241 + _tmp242 + _tmp243;
  const Scalar _tmp245 = -_tmp150 * _tmp244 - _tmp156 * _tmp183 - _tmp183 + _tmp217 * _tmp236;
  const Scalar _tmp246 = _tmp157 * _tmp202;
  const Scalar _tmp247 = _tmp127 * _tmp149;
  const Scalar _tmp248 =
      -_tmp155 * _tmp179 - _tmp158 * _tmp179 - _tmp162 * _tmp179 - _tmp165 * _tmp179 + _tmp177 +
      _tmp180 -
      _tmp207 * (-_tmp163 * _tmp206 + _tmp181 * _tmp201 - _tmp200 * _tmp205 + _tmp203 * _tmp204) -
      _tmp231 * (-_tmp141 * _tmp218 - _tmp151 * _tmp203 + _tmp152 * _tmp230 + _tmp153 * _tmp229) +
      _tmp232 -
      _tmp234 * (_tmp159 * _tmp203 - _tmp161 * _tmp206 + _tmp217 * _tmp233 - _tmp218 * _tmp38) +
      _tmp235 -
      _tmp247 * (-_tmp124 * _tmp218 + _tmp152 * _tmp245 + _tmp153 * _tmp244 - _tmp184 * _tmp246);
  const Scalar _tmp249 = std::pow(_tmp166, Scalar(-2));
  const Scalar _tmp250 = Scalar(0.71007031138673404) * _tmp249;
  const Scalar _tmp251 = _tmp173 * _tmp250;
  const Scalar _tmp252 = Scalar(1.4083112389913199) * _tmp168;
  const Scalar _tmp253 =
      std::pow(Scalar(std::pow(_tmp148, Scalar(2)) * _tmp249 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp254 = _tmp148 * _tmp249;
  const Scalar _tmp255 = _tmp214 * _tmp85;
  const Scalar _tmp256 = _tmp124 * _tmp81;
  const Scalar _tmp257 = -_tmp124 * _tmp255 - _tmp125 * _tmp237 + _tmp125 * _tmp242 +
                         _tmp125 * _tmp243 + _tmp217 * _tmp256 + _tmp240 - _tmp244 * _tmp86;
  const Scalar _tmp258 = _tmp141 * _tmp81;
  const Scalar _tmp259 = -_tmp125 * _tmp221 + _tmp125 * _tmp223 + _tmp125 * _tmp228 -
                         _tmp141 * _tmp255 + _tmp181 * _tmp212 + Scalar(1.0) * _tmp211 +
                         _tmp217 * _tmp258 - _tmp229 * _tmp86;
  const Scalar _tmp260 = _tmp38 * _tmp81;
  const Scalar _tmp261 = _tmp0 * _tmp22;
  const Scalar _tmp262 = _tmp261 * (-_tmp160 * _tmp214 + _tmp217 * _tmp260);
  const Scalar _tmp263 = _tmp220 * _tmp93;
  const Scalar _tmp264 = Scalar(1.0) * _tmp81;
  const Scalar _tmp265 = _tmp222 * _tmp93;
  const Scalar _tmp266 =
      -_tmp130 * _tmp214 + _tmp200 * _tmp264 - _tmp263 * _tmp87 + _tmp265 * _tmp87;
  const Scalar _tmp267 =
      _tmp253 *
      (_tmp167 *
           (_tmp128 * (-_tmp237 * _tmp93 + _tmp242 * _tmp93 + _tmp243 * _tmp93 - _tmp257 * _tmp92) +
            _tmp134 * (-_tmp263 + _tmp265 - _tmp266 * _tmp92) +
            _tmp144 * (-_tmp221 * _tmp93 + _tmp223 * _tmp93 + _tmp228 * _tmp93 - _tmp259 * _tmp92) -
            Scalar(1.0) * _tmp262) -
       _tmp248 * _tmp254);
  const Scalar _tmp268 = Scalar(1.0) / (_tmp172);
  const Scalar _tmp269 = _tmp250 * p_c(2, 0);
  const Scalar _tmp270 = Scalar(1.0) * _tmp168;
  const Scalar _tmp271 = Scalar(1.0) * std::sinh(_tmp270);
  const Scalar _tmp272 = Scalar(1.4083112389913199) * _tmp174 * p_c(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp175) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp270);
  const Scalar _tmp273 = _tmp127 * _tmp65;
  const Scalar _tmp274 = _tmp0 * _tmp38;
  const Scalar _tmp275 = _tmp150 * _tmp274;
  const Scalar _tmp276 = _tmp130 * _tmp133;
  const Scalar _tmp277 = _tmp276 * _tmp76;
  const Scalar _tmp278 = _tmp217 * _tmp274;
  const Scalar _tmp279 = _tmp133 * _tmp137;
  const Scalar _tmp280 = _tmp143 * _tmp65;
  const Scalar _tmp281 = _tmp127 * _tmp157;
  const Scalar _tmp282 = _tmp0 * _tmp160;
  const Scalar _tmp283 = _tmp282 * _tmp76;
  const Scalar _tmp284 = -_tmp143 * _tmp151 * _tmp185 + _tmp185 * _tmp275 +
                         _tmp185 * _tmp276 * _tmp77 - _tmp185 * _tmp281 + _tmp201 * _tmp279 -
                         _tmp209 * _tmp277 - _tmp209 * _tmp283 + _tmp230 * _tmp280 +
                         _tmp245 * _tmp273 + _tmp278 * _tmp78;
  const Scalar _tmp285 =
      _tmp151 * _tmp280 + _tmp157 * _tmp273 - _tmp275 * _tmp65 - _tmp276 * _tmp78;
  const Scalar _tmp286 = std::pow(_tmp285, Scalar(-2));
  const Scalar _tmp287 = Scalar(0.71007031138673404) * _tmp286;
  const Scalar _tmp288 = _tmp287 * p_d(2, 0);
  const Scalar _tmp289 = _tmp127 * _tmp22;
  const Scalar _tmp290 = _tmp102 * _tmp93;
  const Scalar _tmp291 = _tmp143 * _tmp22;
  const Scalar _tmp292 = _tmp133 * _tmp22;
  const Scalar _tmp293 = _tmp126 * _tmp289 + _tmp131 * _tmp292 + _tmp142 * _tmp291 +
                         _tmp145 * _tmp146 * _tmp22 + _tmp261 * _tmp91 - _tmp290 * _tmp94;
  const Scalar _tmp294 = Scalar(1.0) / (_tmp285);
  const Scalar _tmp295 = std::asinh(_tmp293 * _tmp294);
  const Scalar _tmp296 = Scalar(1.0) * _tmp295;
  const Scalar _tmp297 = Scalar(1.0) * std::sinh(_tmp296);
  const Scalar _tmp298 =
      std::pow(Scalar(_tmp286 * std::pow(_tmp293, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp299 = _tmp286 * _tmp293;
  const Scalar _tmp300 =
      _tmp298 * (-_tmp284 * _tmp299 +
                 _tmp294 * (_tmp257 * _tmp289 + _tmp259 * _tmp291 + _tmp262 + _tmp266 * _tmp292));
  const Scalar _tmp301 = Scalar(1.4083112389913199) * _tmp285;
  const Scalar _tmp302 =
      -_tmp295 * _tmp301 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp303 = Scalar(0.71007031138673404) * _tmp294;
  const Scalar _tmp304 = _tmp302 * _tmp303;
  const Scalar _tmp305 = std::sinh(_tmp304);
  const Scalar _tmp306 = Scalar(1.4083112389913199) * _tmp295;
  const Scalar _tmp307 = _tmp287 * _tmp302;
  const Scalar _tmp308 = Scalar(1.4083112389913199) * _tmp303 * p_d(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp296) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp304);
  const Scalar _tmp309 = _tmp124 * _tmp127;
  const Scalar _tmp310 = _tmp141 * _tmp143;
  const Scalar _tmp311 = _tmp127 * _tmp85;
  const Scalar _tmp312 = _tmp143 * _tmp85;
  const Scalar _tmp313 = -_tmp134 * _tmp200 - _tmp217 * _tmp309 - _tmp217 * _tmp310 +
                         _tmp229 * _tmp312 + _tmp244 * _tmp311 - _tmp278;
  const Scalar _tmp314 = _tmp124 * _tmp311 + _tmp141 * _tmp312 + _tmp276 + _tmp282;
  const Scalar _tmp315 = std::pow(_tmp314, Scalar(-2));
  const Scalar _tmp316 = Scalar(0.71007031138673404) * _tmp315;
  const Scalar _tmp317 = _tmp316 * p_a(2, 0);
  const Scalar _tmp318 = Scalar(1.0) / (_tmp314);
  const Scalar _tmp319 = _tmp143 * _tmp89;
  const Scalar _tmp320 = _tmp127 * _tmp89;
  const Scalar _tmp321 = _tmp0 * _tmp90 - _tmp123 * _tmp320 - _tmp129 * _tmp133 -
                         _tmp140 * _tmp319 - _tmp145 * _tmp147 + _tmp290;
  const Scalar _tmp322 = _tmp315 * _tmp321;
  const Scalar _tmp323 =
      -_tmp313 * _tmp322 +
      _tmp318 * (_tmp133 * _tmp263 - _tmp133 * _tmp265 + _tmp221 * _tmp319 - _tmp223 * _tmp319 -
                 _tmp228 * _tmp319 + _tmp237 * _tmp320 - _tmp242 * _tmp320 - _tmp243 * _tmp320);
  const Scalar _tmp324 =
      std::pow(Scalar(_tmp315 * std::pow(_tmp321, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp325 = std::asinh(_tmp318 * _tmp321);
  const Scalar _tmp326 = Scalar(1.0) * _tmp325;
  const Scalar _tmp327 = Scalar(1.0) * _tmp324 * std::sinh(_tmp326);
  const Scalar _tmp328 = Scalar(1.4083112389913199) * _tmp313;
  const Scalar _tmp329 = Scalar(1.4083112389913199) * _tmp314;
  const Scalar _tmp330 = _tmp324 * _tmp329;
  const Scalar _tmp331 = Scalar(0.71007031138673404) * _tmp318;
  const Scalar _tmp332 =
      -_tmp325 * _tmp329 - std::sqrt(Scalar(std::pow(Scalar(-_tmp68 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp72 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp333 = _tmp316 * _tmp332;
  const Scalar _tmp334 = _tmp331 * _tmp332;
  const Scalar _tmp335 = std::sinh(_tmp334);
  const Scalar _tmp336 = _tmp331 * p_a(2, 0) + std::cosh(_tmp326) - std::cosh(_tmp334);
  const Scalar _tmp337 = _tmp149 * (_tmp104 * _tmp192 - _tmp109 - _tmp191 * _tmp193);
  const Scalar _tmp338 = -_tmp189 * _tmp63 + _tmp337 * _tmp61;
  const Scalar _tmp339 = _tmp182 * _tmp57;
  const Scalar _tmp340 = _tmp339 * _tmp61;
  const Scalar _tmp341 = _tmp340 * _tmp77;
  const Scalar _tmp342 = _tmp114 * _tmp57;
  const Scalar _tmp343 = -_tmp113 * _tmp341 - _tmp196 * _tmp63 + _tmp337 * _tmp76 -
                         _tmp338 * _tmp78 + _tmp342 * _tmp76;
  const Scalar _tmp344 = _tmp199 * _tmp343;
  const Scalar _tmp345 = _tmp344 * _tmp77;
  const Scalar _tmp346 = _tmp202 * _tmp339;
  const Scalar _tmp347 = _tmp57 * _tmp65;
  const Scalar _tmp348 = _tmp347 * _tmp61;
  const Scalar _tmp349 = _tmp347 * _tmp83;
  const Scalar _tmp350 = _tmp340 * _tmp83;
  const Scalar _tmp351 = _tmp347 * _tmp62;
  const Scalar _tmp352 = -_tmp164 * _tmp59 - _tmp341 * _tmp62 + _tmp351 * _tmp76 + _tmp59 * _tmp76;
  const Scalar _tmp353 = _tmp349 * _tmp76 - _tmp350 * _tmp77 - _tmp352 * _tmp36;
  const Scalar _tmp354 = _tmp216 * _tmp353;
  const Scalar _tmp355 = _tmp354 * _tmp76;
  const Scalar _tmp356 = _tmp211 + _tmp226 - _tmp351 - _tmp59;
  const Scalar _tmp357 = _tmp208 - _tmp349 - _tmp356 * _tmp36;
  const Scalar _tmp358 = _tmp118 * _tmp354;
  const Scalar _tmp359 = _tmp343 * _tmp85;
  const Scalar _tmp360 =
      _tmp122 * (_tmp115 * _tmp338 + _tmp117 * _tmp358 - _tmp117 * _tmp359 - _tmp119 * _tmp357 +
                 _tmp186 + _tmp188 * _tmp63 - _tmp337 - _tmp342);
  const Scalar _tmp361 = _tmp121 * _tmp353;
  const Scalar _tmp362 = _tmp120 * _tmp361;
  const Scalar _tmp363 = _tmp344 * _tmp84;
  const Scalar _tmp364 = _tmp120 * _tmp363;
  const Scalar _tmp365 = _tmp357 + _tmp360 + _tmp362 - _tmp364;
  const Scalar _tmp366 = -_tmp150 * _tmp365 + _tmp156 * _tmp57 + _tmp236 * _tmp354 + _tmp57;
  const Scalar _tmp367 = _tmp139 * _tmp361;
  const Scalar _tmp368 = _tmp139 * _tmp363;
  const Scalar _tmp369 = _tmp135 * _tmp152 * _tmp59 + _tmp136 * _tmp340 - Scalar(1.0) * _tmp350;
  const Scalar _tmp370 = Scalar(1.0) * _tmp340;
  const Scalar _tmp371 = _tmp122 * (-_tmp113 * _tmp370 - _tmp119 * _tmp369 - _tmp137 * _tmp338 +
                                    _tmp138 * _tmp358 - _tmp138 * _tmp359);
  const Scalar _tmp372 = _tmp367 - _tmp368 + _tmp369 + _tmp371;
  const Scalar _tmp373 = _tmp151 * _tmp339;
  const Scalar _tmp374 = -_tmp150 * _tmp372 + _tmp154 * _tmp57 + _tmp219 * _tmp354;
  const Scalar _tmp375 =
      _tmp177 * _tmp63 + _tmp180 * _tmp63 -
      _tmp207 * (_tmp163 * _tmp348 + _tmp181 * _tmp345 - _tmp204 * _tmp346 - _tmp205 * _tmp344) -
      _tmp231 * (-_tmp141 * _tmp355 + _tmp152 * _tmp374 + _tmp153 * _tmp372 + _tmp202 * _tmp373) +
      _tmp232 * _tmp63 -
      _tmp234 * (-_tmp159 * _tmp346 + _tmp161 * _tmp348 + _tmp233 * _tmp354 - _tmp355 * _tmp38) +
      _tmp235 * _tmp63 -
      _tmp247 * (-_tmp124 * _tmp355 + _tmp152 * _tmp366 + _tmp153 * _tmp365 + _tmp246 * _tmp339);
  const Scalar _tmp376 = _tmp352 * _tmp85;
  const Scalar _tmp377 = _tmp125 * _tmp367 - _tmp125 * _tmp368 + _tmp125 * _tmp371 -
                         _tmp141 * _tmp376 - _tmp181 * _tmp59 + _tmp258 * _tmp354 -
                         _tmp370 * _tmp62 - _tmp372 * _tmp86;
  const Scalar _tmp378 = _tmp363 * _tmp93;
  const Scalar _tmp379 = _tmp361 * _tmp93;
  const Scalar _tmp380 =
      -_tmp130 * _tmp352 + _tmp264 * _tmp344 - _tmp378 * _tmp87 + _tmp379 * _tmp87;
  const Scalar _tmp381 = _tmp261 * (_tmp260 * _tmp354 - _tmp376 * _tmp38);
  const Scalar _tmp382 = -_tmp124 * _tmp376 + _tmp125 * _tmp360 + _tmp125 * _tmp362 -
                         _tmp125 * _tmp364 + _tmp256 * _tmp354 + _tmp356 - _tmp365 * _tmp86;
  const Scalar _tmp383 =
      _tmp253 *
      (_tmp167 *
           (_tmp128 * (_tmp360 * _tmp93 + _tmp362 * _tmp93 - _tmp364 * _tmp93 - _tmp382 * _tmp92) +
            _tmp134 * (-_tmp378 + _tmp379 - _tmp380 * _tmp92) +
            _tmp144 * (_tmp367 * _tmp93 - _tmp368 * _tmp93 + _tmp371 * _tmp93 - _tmp377 * _tmp92) -
            Scalar(1.0) * _tmp381) -
       _tmp254 * _tmp375);
  const Scalar _tmp384 = _tmp274 * _tmp354;
  const Scalar _tmp385 = _tmp143 * _tmp373 * _tmp61 + _tmp273 * _tmp366 - _tmp275 * _tmp340 -
                         _tmp276 * _tmp341 + _tmp277 * _tmp347 + _tmp279 * _tmp345 +
                         _tmp280 * _tmp374 + _tmp281 * _tmp340 + _tmp283 * _tmp347 +
                         _tmp384 * _tmp78;
  const Scalar _tmp386 =
      _tmp298 * (_tmp294 * (_tmp289 * _tmp382 + _tmp291 * _tmp377 + _tmp292 * _tmp380 + _tmp381) -
                 _tmp299 * _tmp385);
  const Scalar _tmp387 = -_tmp134 * _tmp344 - _tmp309 * _tmp354 - _tmp310 * _tmp354 +
                         _tmp311 * _tmp365 + _tmp312 * _tmp372 - _tmp384;
  const Scalar _tmp388 =
      _tmp318 * (_tmp133 * _tmp378 - _tmp133 * _tmp379 - _tmp319 * _tmp367 + _tmp319 * _tmp368 -
                 _tmp319 * _tmp371 - _tmp320 * _tmp360 - _tmp320 * _tmp362 + _tmp320 * _tmp364) -
      _tmp322 * _tmp387;
  const Scalar _tmp389 = Scalar(1.4083112389913199) * _tmp387;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp169 *
          (-_tmp176 * (_tmp174 * (-_tmp169 * _tmp267 - _tmp171 * _tmp268 - _tmp248 * _tmp252) -
                       _tmp248 * _tmp251) -
           _tmp248 * _tmp269 + _tmp267 * _tmp271) -
      _tmp248 * _tmp272;
  _res(2, 0) =
      -_tmp284 * _tmp308 -
      _tmp301 *
          (-_tmp284 * _tmp288 + _tmp297 * _tmp300 -
           _tmp305 * (-_tmp284 * _tmp307 + _tmp303 * (-_tmp284 * _tmp306 - _tmp300 * _tmp301)));
  _res(3, 0) =
      -_tmp328 * _tmp336 -
      _tmp329 *
          (-_tmp313 * _tmp317 + _tmp323 * _tmp327 -
           _tmp335 * (-_tmp313 * _tmp333 + _tmp331 * (-_tmp323 * _tmp330 - _tmp325 * _tmp328)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp169 *
          (-_tmp176 * (_tmp174 * (-_tmp169 * _tmp383 - _tmp170 * _tmp268 - _tmp252 * _tmp375) -
                       _tmp251 * _tmp375) -
           _tmp269 * _tmp375 + _tmp271 * _tmp383) -
      _tmp272 * _tmp375;
  _res(2, 1) =
      -_tmp301 *
          (-_tmp288 * _tmp385 + _tmp297 * _tmp386 -
           _tmp305 * (_tmp303 * (-_tmp301 * _tmp386 - _tmp306 * _tmp385) - _tmp307 * _tmp385)) -
      _tmp308 * _tmp385;
  _res(3, 1) =
      -_tmp329 *
          (-_tmp317 * _tmp387 + _tmp327 * _tmp388 -
           _tmp335 * (_tmp331 * (-_tmp325 * _tmp389 - _tmp330 * _tmp388) - _tmp333 * _tmp387)) -
      _tmp336 * _tmp389;
  _res(0, 2) = 0;
  _res(1, 2) = Scalar(-1.0);
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
