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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl17
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 767

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (275)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = _tmp2 * _tmp4;
  const Scalar _tmp9 = _tmp0 * _tmp5;
  const Scalar _tmp10 = _tmp8 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp21 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = -_tmp26 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp30 = _tmp22 - _tmp23;
  const Scalar _tmp31 = -Scalar(0.010999999999999999) * _tmp30;
  const Scalar _tmp32 = _tmp29 + _tmp31;
  const Scalar _tmp33 = _tmp28 + _tmp32;
  const Scalar _tmp34 = _tmp33 + position_vector(1, 0);
  const Scalar _tmp35 = -_tmp34 + p_c(1, 0);
  const Scalar _tmp36 = std::pow(_tmp18, Scalar(2)) + std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 =
      std::pow(Scalar(std::pow(_tmp27, Scalar(2)) + _tmp36), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = Scalar(1.0) / (fh1);
  const Scalar _tmp39 = std::sqrt(_tmp36);
  const Scalar _tmp40 =
      Scalar(1.0) *
      std::cosh(Scalar(0.71007031138673404) * _tmp38 *
                (-_tmp39 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp38 * fv1))) /
      _tmp39;
  const Scalar _tmp41 = -_tmp29 + _tmp31;
  const Scalar _tmp42 = _tmp28 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(1, 0);
  const Scalar _tmp44 = _tmp11 - _tmp14;
  const Scalar _tmp45 = _tmp44 + _tmp7;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp34 - p_c(1, 0);
  const Scalar _tmp48 = -_tmp7;
  const Scalar _tmp49 = _tmp15 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp51 = _tmp50 - p_b(0, 0);
  const Scalar _tmp52 = -_tmp28;
  const Scalar _tmp53 = _tmp32 + _tmp52;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_b(1, 0);
  const Scalar _tmp56 = std::pow(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp55, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp57 = _tmp51 * _tmp56;
  const Scalar _tmp58 = _tmp46 - p_d(0, 0);
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp43 - p_d(1, 0);
  const Scalar _tmp61 = _tmp59 * _tmp60;
  const Scalar _tmp62 = _tmp55 * _tmp56;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp57 * _tmp61 - _tmp62);
  const Scalar _tmp64 = Scalar(1.0) * _tmp45;
  const Scalar _tmp65 = -_tmp49 + _tmp64;
  const Scalar _tmp66 = _tmp21 - _tmp24;
  const Scalar _tmp67 = _tmp19 + _tmp66;
  const Scalar _tmp68 = -_tmp19;
  const Scalar _tmp69 = _tmp25 + _tmp68;
  const Scalar _tmp70 = _tmp61 * _tmp69;
  const Scalar _tmp71 = -_tmp57 * _tmp70 + _tmp62 * _tmp67;
  const Scalar _tmp72 = Scalar(1.0) * _tmp42;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp53 + _tmp73);
  const Scalar _tmp75 = Scalar(1.0) * _tmp74;
  const Scalar _tmp76 = _tmp63 * (-_tmp57 * _tmp67 + _tmp57 * _tmp69);
  const Scalar _tmp77 = _tmp63 * _tmp65 * _tmp71 * _tmp75 - Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = _tmp66 + _tmp68;
  const Scalar _tmp79 = _tmp44 + _tmp48;
  const Scalar _tmp80 = _tmp79 + position_vector(0, 0);
  const Scalar _tmp81 = _tmp80 - p_a(0, 0);
  const Scalar _tmp82 = _tmp41 + _tmp52;
  const Scalar _tmp83 = _tmp82 + position_vector(1, 0);
  const Scalar _tmp84 = _tmp83 - p_a(1, 0);
  const Scalar _tmp85 = std::pow(Scalar(std::pow(_tmp81, Scalar(2)) + std::pow(_tmp84, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp81 * _tmp85;
  const Scalar _tmp87 = _tmp84 * _tmp85;
  const Scalar _tmp88 = _tmp61 * _tmp86 - _tmp87;
  const Scalar _tmp89 = _tmp63 * _tmp88;
  const Scalar _tmp90 = _tmp69 * _tmp86;
  const Scalar _tmp91 = -_tmp61 * _tmp90 - _tmp71 * _tmp89 + _tmp78 * _tmp87;
  const Scalar _tmp92 = _tmp65 * _tmp74;
  const Scalar _tmp93 = -_tmp76 * _tmp88 - _tmp78 * _tmp86 + _tmp90 - _tmp91 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp59 * _tmp95;
  const Scalar _tmp98 = _tmp97 * (-_tmp42 * _tmp58 * _tmp96 + _tmp45 * _tmp60 * _tmp96);
  const Scalar _tmp99 = -_tmp49 * _tmp62 + _tmp53 * _tmp57 + _tmp57 * _tmp98;
  const Scalar _tmp100 = -_tmp79 * _tmp87 + _tmp82 * _tmp86 + _tmp86 * _tmp98 - _tmp89 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp94;
  const Scalar _tmp102 = Scalar(1.0) * _tmp63;
  const Scalar _tmp103 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp104 = _tmp103 * _tmp93;
  const Scalar _tmp105 = _tmp104 * (-_tmp101 * _tmp77 - _tmp102 * _tmp99);
  const Scalar _tmp106 = _tmp105 + _tmp77;
  const Scalar _tmp107 = _tmp88 * _tmp94;
  const Scalar _tmp108 = _tmp63 * (-_tmp106 * _tmp107 + Scalar(1.0));
  const Scalar _tmp109 = _tmp106 * _tmp94;
  const Scalar _tmp110 = _tmp108 * _tmp57 + _tmp109 * _tmp86;
  const Scalar _tmp111 = _tmp17 - p_c(0, 0);
  const Scalar _tmp112 = std::pow(_tmp111, Scalar(2));
  const Scalar _tmp113 = std::pow(_tmp47, Scalar(2));
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = std::pow(_tmp114, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = _tmp116 * _tmp97;
  const Scalar _tmp118 = _tmp110 * _tmp117;
  const Scalar _tmp119 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp120 = _tmp64 + _tmp72 * _tmp92;
  const Scalar _tmp121 = 0;
  const Scalar _tmp122 = _tmp121 * _tmp94;
  const Scalar _tmp123 = _tmp61 * _tmp63;
  const Scalar _tmp124 = _tmp123 * _tmp71 + _tmp70;
  const Scalar _tmp125 = -_tmp124 * _tmp92 + _tmp61 * _tmp76 - _tmp69;
  const Scalar _tmp126 = _tmp104 * (-_tmp101 * _tmp125 + _tmp123 * _tmp99 - _tmp98);
  const Scalar _tmp127 = _tmp125 + _tmp126;
  const Scalar _tmp128 = _tmp63 * (-_tmp107 * _tmp127 - _tmp61);
  const Scalar _tmp129 = _tmp127 * _tmp94;
  const Scalar _tmp130 = _tmp128 * _tmp57 + _tmp129 * _tmp86 + Scalar(1.0);
  const Scalar _tmp131 = _tmp117 * _tmp130;
  const Scalar _tmp132 = _tmp115 * _tmp33;
  const Scalar _tmp133 = _tmp115 * _tmp16;
  const Scalar _tmp134 = -_tmp111 * _tmp132 + _tmp133 * _tmp47;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = _tmp102 * _tmp103 * _tmp88;
  const Scalar _tmp137 = Scalar(1.0) * _tmp103;
  const Scalar _tmp138 = _tmp97 * (-_tmp136 * _tmp57 + _tmp137 * _tmp86);
  const Scalar _tmp139 = -_tmp111 * _tmp131 - _tmp118 * _tmp47 -
                         _tmp119 * _tmp97 * (-_tmp122 * _tmp57 * _tmp89 + _tmp122 * _tmp86) -
                         _tmp135 * _tmp138;
  const Scalar _tmp140 = Scalar(1.0) / (_tmp139);
  const Scalar _tmp141 = _tmp73 + _tmp82;
  const Scalar _tmp142 = _tmp141 * _tmp92;
  const Scalar _tmp143 = Scalar(1.0) / (-_tmp142 + _tmp64 - _tmp79);
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp91 * _tmp94;
  const Scalar _tmp146 = _tmp141 * _tmp143;
  const Scalar _tmp147 = -_tmp102 * _tmp71 + _tmp105 * _tmp146 - _tmp106 * _tmp145;
  const Scalar _tmp148 = _tmp105 * _tmp144 - _tmp147 * _tmp75;
  const Scalar _tmp149 = Scalar(1.0) * _tmp116;
  const Scalar _tmp150 = _tmp148 * _tmp149;
  const Scalar _tmp151 = _tmp104 * _tmp144;
  const Scalar _tmp152 = _tmp141 * _tmp144;
  const Scalar _tmp153 = _tmp104 * _tmp152 - _tmp137 * _tmp91;
  const Scalar _tmp154 = Scalar(1.0) * _tmp151 - Scalar(1.0) * _tmp153 * _tmp75;
  const Scalar _tmp155 = _tmp120 * _tmp143;
  const Scalar _tmp156 = -_tmp121 * _tmp145 - _tmp141 * _tmp155 + _tmp73;
  const Scalar _tmp157 = _tmp124 + _tmp126 * _tmp146 - _tmp127 * _tmp145;
  const Scalar _tmp158 = _tmp126 * _tmp144 - _tmp157 * _tmp75;
  const Scalar _tmp159 = _tmp149 * _tmp158;
  const Scalar _tmp160 = _tmp116 * _tmp26;
  const Scalar _tmp161 = -_tmp160 * _tmp47 - Scalar(40.024799999999999) * _tmp30 - _tmp33 * fv1;
  const Scalar _tmp162 = _tmp142 * _tmp144 + Scalar(1.0);
  const Scalar _tmp163 = _tmp144 * _tmp92;
  const Scalar _tmp164 = -Scalar(1.0) * _tmp162 * _tmp75 + Scalar(1.0) * _tmp163;
  const Scalar _tmp165 = Scalar(40.024799999999999) * _tmp10 + _tmp111 * _tmp160 + _tmp16 * fv1;
  const Scalar _tmp166 = _tmp152 * _tmp74;
  const Scalar _tmp167 = -Scalar(1.0) * _tmp144 + Scalar(1.0) * _tmp166;
  const Scalar _tmp168 =
      _tmp111 * _tmp159 +
      Scalar(1.0) * _tmp119 * (-_tmp120 * _tmp144 - _tmp156 * _tmp75 + Scalar(1.0)) +
      _tmp135 * _tmp154 + _tmp150 * _tmp47 + _tmp161 * _tmp164 + _tmp165 * _tmp167;
  const Scalar _tmp169 = std::asinh(_tmp140 * _tmp168);
  const Scalar _tmp170 = Scalar(1.4083112389913199) * _tmp139;
  const Scalar _tmp171 =
      -_tmp169 * _tmp170 - std::sqrt(Scalar(std::pow(Scalar(-_tmp43 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp46 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp172 = Scalar(0.71007031138673404) * _tmp140;
  const Scalar _tmp173 = _tmp171 * _tmp172;
  const Scalar _tmp174 = Scalar(1.0) * _tmp169;
  const Scalar _tmp175 = -std::sinh(_tmp173) - std::sinh(_tmp174);
  const Scalar _tmp176 = std::pow(_tmp114, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp177 = _tmp176 * _tmp33;
  const Scalar _tmp178 = _tmp16 * _tmp176;
  const Scalar _tmp179 = _tmp111 * _tmp47;
  const Scalar _tmp180 = -_tmp112 * _tmp177 + _tmp132 + _tmp178 * _tmp179;
  const Scalar _tmp181 = _tmp180 * fh1;
  const Scalar _tmp182 = _tmp176 * fh1;
  const Scalar _tmp183 = _tmp179 * _tmp182;
  const Scalar _tmp184 = _tmp110 * _tmp97;
  const Scalar _tmp185 = _tmp112 * _tmp182;
  const Scalar _tmp186 = _tmp130 * _tmp97;
  const Scalar _tmp187 = _tmp131 - _tmp138 * _tmp181 - _tmp183 * _tmp184 - _tmp185 * _tmp186;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp187;
  const Scalar _tmp189 = std::cosh(_tmp173);
  const Scalar _tmp190 = std::pow(_tmp139, Scalar(-2));
  const Scalar _tmp191 =
      std::pow(Scalar(std::pow(_tmp168, Scalar(2)) * _tmp190 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp192 = _tmp168 * _tmp190;
  const Scalar _tmp193 = _tmp182 * _tmp26;
  const Scalar _tmp194 = _tmp179 * _tmp193;
  const Scalar _tmp195 = Scalar(1.0) * _tmp158;
  const Scalar _tmp196 = _tmp112 * _tmp193 - _tmp160;
  const Scalar _tmp197 = Scalar(1.0) * _tmp148;
  const Scalar _tmp198 =
      _tmp191 * (_tmp140 * (_tmp154 * _tmp181 - _tmp159 - _tmp164 * _tmp194 + _tmp167 * _tmp196 +
                            _tmp183 * _tmp197 + _tmp185 * _tmp195) -
                 _tmp187 * _tmp192);
  const Scalar _tmp199 = Scalar(0.71007031138673404) * _tmp171 * _tmp190;
  const Scalar _tmp200 = Scalar(1.0) * std::cosh(_tmp174);
  const Scalar _tmp201 = _tmp116 * _tmp74;
  const Scalar _tmp202 = _tmp157 * _tmp201;
  const Scalar _tmp203 = _tmp147 * _tmp201;
  const Scalar _tmp204 = _tmp162 * _tmp74;
  const Scalar _tmp205 = _tmp153 * _tmp74;
  const Scalar _tmp206 = _tmp144 * _tmp165;
  const Scalar _tmp207 = _tmp141 * _tmp74;
  const Scalar _tmp208 = _tmp111 * _tmp202 + _tmp119 * _tmp156 * _tmp74 + _tmp135 * _tmp205 +
                         _tmp161 * _tmp204 + _tmp203 * _tmp47 - _tmp206 * _tmp207;
  const Scalar _tmp209 = _tmp116 * _tmp128;
  const Scalar _tmp210 = _tmp119 * _tmp122;
  const Scalar _tmp211 = _tmp108 * _tmp116;
  const Scalar _tmp212 =
      _tmp111 * _tmp209 - _tmp135 * _tmp136 - _tmp210 * _tmp89 + _tmp211 * _tmp47;
  const Scalar _tmp213 = Scalar(1.0) / (_tmp212);
  const Scalar _tmp214 = std::asinh(_tmp208 * _tmp213);
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp212;
  const Scalar _tmp216 =
      -_tmp214 * _tmp215 - std::sqrt(Scalar(std::pow(Scalar(-_tmp50 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp217 = Scalar(0.71007031138673404) * _tmp213;
  const Scalar _tmp218 = _tmp216 * _tmp217;
  const Scalar _tmp219 = Scalar(1.0) * _tmp214;
  const Scalar _tmp220 = -std::sinh(_tmp218) - std::sinh(_tmp219);
  const Scalar _tmp221 = _tmp108 * _tmp183 + _tmp128 * _tmp185 - _tmp136 * _tmp181 - _tmp209;
  const Scalar _tmp222 = Scalar(1.4083112389913199) * _tmp221;
  const Scalar _tmp223 = std::cosh(_tmp218);
  const Scalar _tmp224 = std::pow(_tmp212, Scalar(-2));
  const Scalar _tmp225 = _tmp208 * _tmp224;
  const Scalar _tmp226 = _tmp157 * _tmp74;
  const Scalar _tmp227 = _tmp147 * _tmp74;
  const Scalar _tmp228 = _tmp144 * _tmp196;
  const Scalar _tmp229 = _tmp213 * (_tmp181 * _tmp205 + _tmp183 * _tmp227 + _tmp185 * _tmp226 -
                                    _tmp194 * _tmp204 - _tmp202 - _tmp207 * _tmp228) -
                         _tmp221 * _tmp225;
  const Scalar _tmp230 =
      std::pow(Scalar(std::pow(_tmp208, Scalar(2)) * _tmp224 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp231 = _tmp215 * _tmp230;
  const Scalar _tmp232 = Scalar(0.71007031138673404) * _tmp216 * _tmp224;
  const Scalar _tmp233 = Scalar(1.0) * _tmp230 * std::cosh(_tmp219);
  const Scalar _tmp234 = _tmp109 * _tmp116;
  const Scalar _tmp235 = _tmp116 * _tmp129;
  const Scalar _tmp236 = _tmp137 * fh1;
  const Scalar _tmp237 = _tmp111 * _tmp235 + _tmp134 * _tmp236 + _tmp210 + _tmp234 * _tmp47;
  const Scalar _tmp238 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp239 = _tmp116 * _tmp143;
  const Scalar _tmp240 = _tmp126 * _tmp239;
  const Scalar _tmp241 = _tmp105 * _tmp239;
  const Scalar _tmp242 = -_tmp111 * _tmp240 + _tmp119 * _tmp155 - _tmp135 * _tmp151 -
                         _tmp161 * _tmp163 + _tmp206 - _tmp241 * _tmp47;
  const Scalar _tmp243 = std::asinh(_tmp238 * _tmp242);
  const Scalar _tmp244 = Scalar(1.0) * _tmp243;
  const Scalar _tmp245 = Scalar(1.4083112389913199) * _tmp237;
  const Scalar _tmp246 =
      -_tmp243 * _tmp245 - std::sqrt(Scalar(std::pow(Scalar(-_tmp80 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp83 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp247 = Scalar(0.71007031138673404) * _tmp238;
  const Scalar _tmp248 = _tmp246 * _tmp247;
  const Scalar _tmp249 = -std::sinh(_tmp244) - std::sinh(_tmp248);
  const Scalar _tmp250 = _tmp109 * _tmp183 + _tmp129 * _tmp185 + _tmp180 * _tmp236 - _tmp235;
  const Scalar _tmp251 = Scalar(1.4083112389913199) * _tmp250;
  const Scalar _tmp252 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp253 = _tmp242 * _tmp252;
  const Scalar _tmp254 = _tmp105 * _tmp143;
  const Scalar _tmp255 = _tmp126 * _tmp143;
  const Scalar _tmp256 = _tmp238 * (-_tmp151 * _tmp181 + _tmp163 * _tmp194 - _tmp183 * _tmp254 -
                                    _tmp185 * _tmp255 + _tmp228 + _tmp240) -
                         _tmp250 * _tmp253;
  const Scalar _tmp257 =
      std::pow(Scalar(std::pow(_tmp242, Scalar(2)) * _tmp252 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp258 = Scalar(1.0) * _tmp257 * std::cosh(_tmp244);
  const Scalar _tmp259 = Scalar(0.71007031138673404) * _tmp246 * _tmp252;
  const Scalar _tmp260 = _tmp245 * _tmp257;
  const Scalar _tmp261 = std::cosh(_tmp248);
  const Scalar _tmp262 = _tmp113 * _tmp178 - _tmp133 - _tmp177 * _tmp179;
  const Scalar _tmp263 = _tmp262 * fh1;
  const Scalar _tmp264 = _tmp113 * _tmp182;
  const Scalar _tmp265 = _tmp118 - _tmp138 * _tmp263 - _tmp183 * _tmp186 - _tmp184 * _tmp264;
  const Scalar _tmp266 = Scalar(1.4083112389913199) * _tmp265;
  const Scalar _tmp267 = -_tmp113 * _tmp193 + _tmp160;
  const Scalar _tmp268 =
      _tmp191 * (_tmp140 * (-_tmp150 + _tmp154 * _tmp263 + _tmp164 * _tmp267 + _tmp167 * _tmp194 +
                            _tmp183 * _tmp195 + _tmp197 * _tmp264) -
                 _tmp192 * _tmp265);
  const Scalar _tmp269 = _tmp108 * _tmp264 + _tmp128 * _tmp183 - _tmp136 * _tmp263 - _tmp211;
  const Scalar _tmp270 = Scalar(1.4083112389913199) * _tmp269;
  const Scalar _tmp271 = _tmp213 * (-_tmp166 * _tmp194 + _tmp183 * _tmp226 - _tmp203 +
                                    _tmp204 * _tmp267 + _tmp205 * _tmp263 + _tmp227 * _tmp264) -
                         _tmp225 * _tmp269;
  const Scalar _tmp272 = _tmp109 * _tmp264 + _tmp129 * _tmp183 - _tmp234 + _tmp236 * _tmp262;
  const Scalar _tmp273 = _tmp238 * (_tmp144 * _tmp194 - _tmp151 * _tmp263 - _tmp163 * _tmp267 -
                                    _tmp183 * _tmp255 + _tmp241 - _tmp254 * _tmp264) -
                         _tmp253 * _tmp272;
  const Scalar _tmp274 = Scalar(1.4083112389913199) * _tmp272;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp18 * _tmp37 + _tmp18 * _tmp40;
  _res(1, 0) =
      _tmp170 *
          (-_tmp189 * (_tmp172 * (-_tmp169 * _tmp188 - _tmp170 * _tmp198) - _tmp187 * _tmp199) -
           _tmp198 * _tmp200) +
      _tmp175 * _tmp188;
  _res(2, 0) =
      _tmp215 *
          (-_tmp223 * (_tmp217 * (-_tmp214 * _tmp222 - _tmp229 * _tmp231) - _tmp221 * _tmp232) -
           _tmp229 * _tmp233) +
      _tmp220 * _tmp222;
  _res(3, 0) =
      _tmp245 *
          (-_tmp256 * _tmp258 -
           _tmp261 * (_tmp247 * (-_tmp243 * _tmp251 - _tmp256 * _tmp260) - _tmp250 * _tmp259)) +
      _tmp249 * _tmp251;
  _res(0, 1) = -_tmp35 * _tmp37 + _tmp35 * _tmp40;
  _res(1, 1) =
      _tmp170 *
          (-_tmp189 * (_tmp172 * (-_tmp169 * _tmp266 - _tmp170 * _tmp268) - _tmp199 * _tmp265) -
           _tmp200 * _tmp268) +
      _tmp175 * _tmp266;
  _res(2, 1) =
      _tmp215 *
          (-_tmp223 * (_tmp217 * (-_tmp214 * _tmp270 - _tmp231 * _tmp271) - _tmp232 * _tmp269) -
           _tmp233 * _tmp271) +
      _tmp220 * _tmp270;
  _res(3, 1) =
      _tmp245 *
          (-_tmp258 * _tmp273 -
           _tmp261 * (_tmp247 * (-_tmp243 * _tmp274 - _tmp260 * _tmp273) - _tmp259 * _tmp272)) +
      _tmp249 * _tmp274;
  _res(0, 2) = -_tmp27 * _tmp37;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
