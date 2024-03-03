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
 * Symbolic function: IK_residual_func_cost2_wrt_pa_Nl2
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPaNl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 761

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (269)
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
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = 2 * _tmp2;
  const Scalar _tmp11 = _tmp10 * _tmp9;
  const Scalar _tmp12 = _tmp11 + _tmp8;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 * _tmp6;
  const Scalar _tmp15 = 2 * _tmp0 * _tmp9;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp5;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = -_tmp19 + p_a(0, 0);
  const Scalar _tmp21 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp24 =
      -Scalar(0.010999999999999999) * _tmp23 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp25 = _tmp0 * _tmp10;
  const Scalar _tmp26 = _tmp7 * _tmp9;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp28 = _tmp24 - _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = -_tmp29 + p_a(2, 0) - position_vector(2, 0);
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp32 = -_tmp31;
  const Scalar _tmp33 = _tmp25 - _tmp26;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp33;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp23 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp32 + _tmp36;
  const Scalar _tmp38 = _tmp37 + position_vector(1, 0);
  const Scalar _tmp39 = -_tmp38 + p_a(1, 0);
  const Scalar _tmp40 = std::pow(_tmp20, Scalar(2)) + std::pow(_tmp39, Scalar(2));
  const Scalar _tmp41 =
      std::pow(Scalar(std::pow(_tmp30, Scalar(2)) + _tmp40), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = Scalar(1.0) / (fh1);
  const Scalar _tmp43 = std::sqrt(_tmp40);
  const Scalar _tmp44 =
      Scalar(1.0) *
      std::cosh(Scalar(0.71007031138673404) * _tmp42 *
                (-_tmp43 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp42 * fv1))) /
      _tmp43;
  const Scalar _tmp45 = _tmp38 - p_a(1, 0);
  const Scalar _tmp46 = _tmp19 - p_a(0, 0);
  const Scalar _tmp47 = _tmp45 * _tmp46;
  const Scalar _tmp48 = std::pow(_tmp46, Scalar(2));
  const Scalar _tmp49 = std::pow(_tmp45, Scalar(2));
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = std::pow(_tmp50, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp52 = _tmp51 * fh1;
  const Scalar _tmp53 = _tmp47 * _tmp52;
  const Scalar _tmp54 = _tmp17 + _tmp4;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_b(0, 0);
  const Scalar _tmp57 = _tmp31 + _tmp36;
  const Scalar _tmp58 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 - p_b(1, 0);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = _tmp13 + _tmp16;
  const Scalar _tmp64 = _tmp4 + _tmp63;
  const Scalar _tmp65 = _tmp64 + position_vector(0, 0);
  const Scalar _tmp66 = _tmp65 - p_c(0, 0);
  const Scalar _tmp67 = Scalar(1.0) / (_tmp66);
  const Scalar _tmp68 = _tmp34 + _tmp35;
  const Scalar _tmp69 = _tmp31 + _tmp68;
  const Scalar _tmp70 = _tmp69 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 - p_c(1, 0);
  const Scalar _tmp72 = _tmp67 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp61 * _tmp72 - _tmp62);
  const Scalar _tmp74 =
      std::sqrt(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp71, Scalar(2))));
  const Scalar _tmp75 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp76 = _tmp67 * _tmp74;
  const Scalar _tmp77 = _tmp76 * (_tmp64 * _tmp71 * _tmp75 - _tmp66 * _tmp69 * _tmp75);
  const Scalar _tmp78 = -_tmp54 * _tmp62 + _tmp57 * _tmp61 + _tmp61 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) * _tmp73;
  const Scalar _tmp80 = _tmp21 + _tmp28;
  const Scalar _tmp81 = _tmp24 + _tmp27;
  const Scalar _tmp82 = _tmp21 + _tmp81;
  const Scalar _tmp83 = _tmp61 * _tmp82;
  const Scalar _tmp84 = _tmp62 * _tmp80 - _tmp72 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) * _tmp64;
  const Scalar _tmp86 = -_tmp54 + _tmp85;
  const Scalar _tmp87 = Scalar(1.0) * _tmp69;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp57 + _tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp89;
  const Scalar _tmp91 = -_tmp61 * _tmp80 + _tmp83;
  const Scalar _tmp92 = _tmp73 * _tmp84 * _tmp86 * _tmp90 - _tmp79 * _tmp91;
  const Scalar _tmp93 = _tmp5 + _tmp63;
  const Scalar _tmp94 = _tmp93 + position_vector(0, 0);
  const Scalar _tmp95 = _tmp94 - p_d(0, 0);
  const Scalar _tmp96 = _tmp32 + _tmp68;
  const Scalar _tmp97 = _tmp96 + position_vector(1, 0);
  const Scalar _tmp98 = _tmp97 - p_d(1, 0);
  const Scalar _tmp99 = std::pow(Scalar(std::pow(_tmp95, Scalar(2)) + std::pow(_tmp98, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp100 = _tmp95 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp82;
  const Scalar _tmp102 = _tmp22 + _tmp81;
  const Scalar _tmp103 = _tmp98 * _tmp99;
  const Scalar _tmp104 = _tmp100 * _tmp72 - _tmp103;
  const Scalar _tmp105 = _tmp104 * _tmp73;
  const Scalar _tmp106 = -_tmp101 * _tmp72 + _tmp102 * _tmp103 - _tmp105 * _tmp84;
  const Scalar _tmp107 = _tmp86 * _tmp89;
  const Scalar _tmp108 = -_tmp100 * _tmp102 + _tmp101 - _tmp105 * _tmp91 - _tmp106 * _tmp107;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp110 = _tmp100 * _tmp77 + _tmp100 * _tmp96 - _tmp103 * _tmp93 - _tmp105 * _tmp78;
  const Scalar _tmp111 = _tmp109 * _tmp110;
  const Scalar _tmp112 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp113 = _tmp108 * _tmp112;
  const Scalar _tmp114 = _tmp113 * (-_tmp111 * _tmp92 - _tmp78 * _tmp79);
  const Scalar _tmp115 = _tmp114 + _tmp92;
  const Scalar _tmp116 = _tmp104 * _tmp109;
  const Scalar _tmp117 = _tmp73 * (-_tmp115 * _tmp116 + Scalar(1.0));
  const Scalar _tmp118 = _tmp109 * _tmp115;
  const Scalar _tmp119 = _tmp100 * _tmp118 + _tmp117 * _tmp61;
  const Scalar _tmp120 = _tmp119 * _tmp76;
  const Scalar _tmp121 = _tmp48 * _tmp52;
  const Scalar _tmp122 = _tmp72 * _tmp73;
  const Scalar _tmp123 = _tmp122 * _tmp84 + _tmp72 * _tmp82;
  const Scalar _tmp124 = -_tmp107 * _tmp123 + _tmp122 * _tmp91 - _tmp82;
  const Scalar _tmp125 = _tmp113 * (-_tmp111 * _tmp124 + _tmp122 * _tmp78 - _tmp77);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = _tmp73 * (-_tmp116 * _tmp126 - _tmp72);
  const Scalar _tmp128 = _tmp109 * _tmp126;
  const Scalar _tmp129 = _tmp100 * _tmp128 + _tmp127 * _tmp61 + Scalar(1.0);
  const Scalar _tmp130 = _tmp129 * _tmp76;
  const Scalar _tmp131 = std::pow(_tmp50, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = _tmp132 * _tmp76;
  const Scalar _tmp134 = _tmp129 * _tmp133;
  const Scalar _tmp135 = _tmp37 * _tmp51;
  const Scalar _tmp136 = _tmp131 * _tmp37;
  const Scalar _tmp137 = _tmp18 * _tmp51;
  const Scalar _tmp138 = fh1 * (-_tmp135 * _tmp48 + _tmp136 + _tmp137 * _tmp47);
  const Scalar _tmp139 = Scalar(1.0) * _tmp112;
  const Scalar _tmp140 = _tmp105 * _tmp61;
  const Scalar _tmp141 = _tmp76 * (_tmp100 * _tmp139 - _tmp139 * _tmp140);
  const Scalar _tmp142 = -_tmp120 * _tmp53 - _tmp121 * _tmp130 + _tmp134 - _tmp138 * _tmp141;
  const Scalar _tmp143 = _tmp131 * _tmp18;
  const Scalar _tmp144 = fh1 * (-_tmp136 * _tmp46 + _tmp143 * _tmp45);
  const Scalar _tmp145 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp146 = _tmp107 * _tmp87 + _tmp85;
  const Scalar _tmp147 = 0;
  const Scalar _tmp148 = _tmp109 * _tmp147;
  const Scalar _tmp149 = _tmp119 * _tmp133;
  const Scalar _tmp150 = -_tmp134 * _tmp46 - _tmp141 * _tmp144 -
                         _tmp145 * _tmp76 * (_tmp100 * _tmp148 - _tmp140 * _tmp148) -
                         _tmp149 * _tmp45;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 = _tmp132 * _tmp29;
  const Scalar _tmp153 = Scalar(40.024799999999999) * _tmp12 + _tmp152 * _tmp46 + _tmp18 * fv1;
  const Scalar _tmp154 = _tmp88 + _tmp96;
  const Scalar _tmp155 = _tmp107 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) / (-_tmp155 + _tmp85 - _tmp93);
  const Scalar _tmp157 = Scalar(1.0) * _tmp156;
  const Scalar _tmp158 = _tmp154 * _tmp89;
  const Scalar _tmp159 = _tmp157 * _tmp158;
  const Scalar _tmp160 = -Scalar(1.0) * _tmp157 + Scalar(1.0) * _tmp159;
  const Scalar _tmp161 = _tmp106 * _tmp109;
  const Scalar _tmp162 = _tmp146 * _tmp156;
  const Scalar _tmp163 = -_tmp147 * _tmp161 - _tmp154 * _tmp162 + _tmp88;
  const Scalar _tmp164 = _tmp154 * _tmp156;
  const Scalar _tmp165 = _tmp114 * _tmp164 - _tmp115 * _tmp161 - _tmp79 * _tmp84;
  const Scalar _tmp166 = _tmp114 * _tmp157 - _tmp165 * _tmp90;
  const Scalar _tmp167 = Scalar(1.0) * _tmp132;
  const Scalar _tmp168 = _tmp166 * _tmp167;
  const Scalar _tmp169 = -_tmp152 * _tmp45 - Scalar(40.024799999999999) * _tmp33 - _tmp37 * fv1;
  const Scalar _tmp170 = _tmp107 * _tmp157;
  const Scalar _tmp171 = _tmp89 * (_tmp155 * _tmp157 + Scalar(1.0));
  const Scalar _tmp172 = Scalar(1.0) * _tmp170 - Scalar(1.0) * _tmp171;
  const Scalar _tmp173 = _tmp123 + _tmp125 * _tmp164 - _tmp126 * _tmp161;
  const Scalar _tmp174 = _tmp125 * _tmp157 - _tmp173 * _tmp90;
  const Scalar _tmp175 = _tmp167 * _tmp174;
  const Scalar _tmp176 = _tmp113 * _tmp157;
  const Scalar _tmp177 = -_tmp106 * _tmp139 + _tmp154 * _tmp176;
  const Scalar _tmp178 = Scalar(1.0) * _tmp176 - Scalar(1.0) * _tmp177 * _tmp90;
  const Scalar _tmp179 =
      _tmp144 * _tmp178 +
      Scalar(1.0) * _tmp145 * (-_tmp146 * _tmp157 - _tmp163 * _tmp90 + Scalar(1.0)) +
      _tmp153 * _tmp160 + _tmp168 * _tmp45 + _tmp169 * _tmp172 + _tmp175 * _tmp46;
  const Scalar _tmp180 = std::asinh(_tmp151 * _tmp179);
  const Scalar _tmp181 = Scalar(1.0) * _tmp180;
  const Scalar _tmp182 = Scalar(1.4083112389913199) * _tmp150;
  const Scalar _tmp183 =
      -_tmp180 * _tmp182 - std::sqrt(Scalar(std::pow(Scalar(-_tmp65 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp70 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp184 = Scalar(0.71007031138673404) * _tmp151;
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = -Scalar(1.4083112389913199) * std::sinh(_tmp181) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp185);
  const Scalar _tmp187 = std::pow(_tmp150, Scalar(-2));
  const Scalar _tmp188 = Scalar(0.71007031138673404) * _tmp183 * _tmp187;
  const Scalar _tmp189 = _tmp179 * _tmp187;
  const Scalar _tmp190 = _tmp29 * _tmp52;
  const Scalar _tmp191 = _tmp190 * _tmp47;
  const Scalar _tmp192 = Scalar(1.0) * _tmp166;
  const Scalar _tmp193 = Scalar(1.0) * _tmp174;
  const Scalar _tmp194 = -_tmp152 + _tmp190 * _tmp48;
  const Scalar _tmp195 =
      std::pow(Scalar(std::pow(_tmp179, Scalar(2)) * _tmp187 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp196 =
      _tmp195 *
      (-_tmp142 * _tmp189 + _tmp151 * (_tmp121 * _tmp193 + _tmp138 * _tmp178 + _tmp160 * _tmp194 -
                                       _tmp172 * _tmp191 - _tmp175 + _tmp192 * _tmp53));
  const Scalar _tmp197 = Scalar(1.4083112389913199) * _tmp180;
  const Scalar _tmp198 = std::cosh(_tmp185);
  const Scalar _tmp199 = Scalar(1.0) * std::cosh(_tmp181);
  const Scalar _tmp200 = _tmp138 * _tmp139;
  const Scalar _tmp201 = _tmp127 * _tmp132;
  const Scalar _tmp202 = -_tmp105 * _tmp200 + _tmp117 * _tmp53 + _tmp121 * _tmp127 - _tmp201;
  const Scalar _tmp203 = _tmp139 * _tmp144;
  const Scalar _tmp204 = _tmp117 * _tmp132;
  const Scalar _tmp205 = _tmp145 * _tmp148;
  const Scalar _tmp206 =
      -_tmp105 * _tmp203 - _tmp105 * _tmp205 + _tmp201 * _tmp46 + _tmp204 * _tmp45;
  const Scalar _tmp207 = Scalar(1.0) / (_tmp206);
  const Scalar _tmp208 = _tmp132 * _tmp89;
  const Scalar _tmp209 = _tmp165 * _tmp208;
  const Scalar _tmp210 = _tmp177 * _tmp89;
  const Scalar _tmp211 = _tmp153 * _tmp157;
  const Scalar _tmp212 = _tmp173 * _tmp208;
  const Scalar _tmp213 = _tmp144 * _tmp210 + _tmp145 * _tmp163 * _tmp89 - _tmp158 * _tmp211 +
                         _tmp169 * _tmp171 + _tmp209 * _tmp45 + _tmp212 * _tmp46;
  const Scalar _tmp214 = std::asinh(_tmp207 * _tmp213);
  const Scalar _tmp215 = Scalar(1.0) * _tmp214;
  const Scalar _tmp216 = Scalar(1.4083112389913199) * _tmp214;
  const Scalar _tmp217 =
      -_tmp206 * _tmp216 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp58 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp218 = Scalar(0.71007031138673404) * _tmp207;
  const Scalar _tmp219 = _tmp217 * _tmp218;
  const Scalar _tmp220 = -Scalar(1.4083112389913199) * std::sinh(_tmp215) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp219);
  const Scalar _tmp221 = _tmp165 * _tmp89;
  const Scalar _tmp222 = _tmp157 * _tmp194;
  const Scalar _tmp223 = _tmp173 * _tmp89;
  const Scalar _tmp224 = std::pow(_tmp206, Scalar(-2));
  const Scalar _tmp225 = _tmp213 * _tmp224;
  const Scalar _tmp226 =
      std::pow(Scalar(std::pow(_tmp213, Scalar(2)) * _tmp224 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp227 =
      _tmp226 *
      (-_tmp202 * _tmp225 + _tmp207 * (_tmp121 * _tmp223 + _tmp138 * _tmp210 - _tmp158 * _tmp222 -
                                       _tmp171 * _tmp191 - _tmp212 + _tmp221 * _tmp53));
  const Scalar _tmp228 = Scalar(1.0) * std::cosh(_tmp215);
  const Scalar _tmp229 = Scalar(0.71007031138673404) * _tmp217 * _tmp224;
  const Scalar _tmp230 = Scalar(1.4083112389913199) * _tmp206;
  const Scalar _tmp231 = std::cosh(_tmp219);
  const Scalar _tmp232 = _tmp128 * _tmp132;
  const Scalar _tmp233 = _tmp118 * _tmp132;
  const Scalar _tmp234 = _tmp203 + _tmp205 + _tmp232 * _tmp46 + _tmp233 * _tmp45;
  const Scalar _tmp235 = std::pow(_tmp234, Scalar(-2));
  const Scalar _tmp236 = _tmp132 * _tmp156;
  const Scalar _tmp237 = _tmp114 * _tmp236;
  const Scalar _tmp238 = _tmp125 * _tmp236;
  const Scalar _tmp239 = -_tmp144 * _tmp176 + _tmp145 * _tmp162 - _tmp169 * _tmp170 + _tmp211 -
                         _tmp237 * _tmp45 - _tmp238 * _tmp46;
  const Scalar _tmp240 =
      std::pow(Scalar(_tmp235 * std::pow(_tmp239, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp241 = _tmp118 * _tmp53 + _tmp121 * _tmp128 + _tmp200 - _tmp232;
  const Scalar _tmp242 = _tmp235 * _tmp239;
  const Scalar _tmp243 = Scalar(1.0) / (_tmp234);
  const Scalar _tmp244 = _tmp114 * _tmp156;
  const Scalar _tmp245 = _tmp125 * _tmp156;
  const Scalar _tmp246 =
      _tmp240 *
      (-_tmp241 * _tmp242 + _tmp243 * (-_tmp121 * _tmp245 - _tmp138 * _tmp176 + _tmp170 * _tmp191 +
                                       _tmp222 + _tmp238 - _tmp244 * _tmp53));
  const Scalar _tmp247 = std::asinh(_tmp239 * _tmp243);
  const Scalar _tmp248 = Scalar(1.0) * _tmp247;
  const Scalar _tmp249 = Scalar(1.0) * std::cosh(_tmp248);
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp247;
  const Scalar _tmp251 =
      -_tmp234 * _tmp250 - std::sqrt(Scalar(std::pow(Scalar(-_tmp94 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp97 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp252 = Scalar(0.71007031138673404) * _tmp243;
  const Scalar _tmp253 = _tmp251 * _tmp252;
  const Scalar _tmp254 = std::cosh(_tmp253);
  const Scalar _tmp255 = Scalar(0.71007031138673404) * _tmp235 * _tmp251;
  const Scalar _tmp256 = Scalar(1.4083112389913199) * _tmp234;
  const Scalar _tmp257 = Scalar(1.4083112389913199) * _tmp241;
  const Scalar _tmp258 = -std::sinh(_tmp248) - std::sinh(_tmp253);
  const Scalar _tmp259 = fh1 * (-_tmp135 * _tmp47 + _tmp137 * _tmp49 - _tmp143);
  const Scalar _tmp260 = _tmp49 * _tmp52;
  const Scalar _tmp261 = -_tmp120 * _tmp260 - _tmp130 * _tmp53 - _tmp141 * _tmp259 + _tmp149;
  const Scalar _tmp262 = _tmp152 - _tmp190 * _tmp49;
  const Scalar _tmp263 =
      _tmp195 * (_tmp151 * (_tmp160 * _tmp191 - _tmp168 + _tmp172 * _tmp262 + _tmp178 * _tmp259 +
                            _tmp192 * _tmp260 + _tmp193 * _tmp53) -
                 _tmp189 * _tmp261);
  const Scalar _tmp264 = _tmp139 * _tmp259;
  const Scalar _tmp265 = -_tmp105 * _tmp264 + _tmp117 * _tmp260 + _tmp127 * _tmp53 - _tmp204;
  const Scalar _tmp266 =
      _tmp226 * (_tmp207 * (-_tmp159 * _tmp191 + _tmp171 * _tmp262 - _tmp209 + _tmp210 * _tmp259 +
                            _tmp221 * _tmp260 + _tmp223 * _tmp53) -
                 _tmp225 * _tmp265);
  const Scalar _tmp267 = _tmp118 * _tmp260 + _tmp128 * _tmp53 - _tmp233 + _tmp264;
  const Scalar _tmp268 =
      _tmp240 *
      (-_tmp242 * _tmp267 + _tmp243 * (_tmp157 * _tmp191 - _tmp170 * _tmp262 - _tmp176 * _tmp259 +
                                       _tmp237 - _tmp244 * _tmp260 - _tmp245 * _tmp53));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp20 * _tmp41 + _tmp20 * _tmp44;
  _res(1, 0) =
      _tmp142 * _tmp186 +
      _tmp182 *
          (-_tmp196 * _tmp199 -
           _tmp198 * (-_tmp142 * _tmp188 + _tmp184 * (-_tmp142 * _tmp197 - _tmp182 * _tmp196)));
  _res(2, 0) =
      _tmp202 * _tmp220 +
      _tmp230 *
          (-_tmp227 * _tmp228 -
           _tmp231 * (-_tmp202 * _tmp229 + _tmp218 * (-_tmp202 * _tmp216 - _tmp227 * _tmp230)));
  _res(3, 0) =
      _tmp256 *
          (-_tmp246 * _tmp249 -
           _tmp254 * (-_tmp241 * _tmp255 + _tmp252 * (-_tmp246 * _tmp256 - _tmp247 * _tmp257))) +
      _tmp257 * _tmp258;
  _res(0, 1) = -_tmp39 * _tmp41 + _tmp39 * _tmp44;
  _res(1, 1) =
      _tmp182 *
          (-_tmp198 * (_tmp184 * (-_tmp182 * _tmp263 - _tmp197 * _tmp261) - _tmp188 * _tmp261) -
           _tmp199 * _tmp263) +
      _tmp186 * _tmp261;
  _res(2, 1) =
      _tmp220 * _tmp265 + _tmp230 * (-_tmp228 * _tmp266 -
                                     _tmp231 * (_tmp218 * (-_tmp216 * _tmp265 - _tmp230 * _tmp266) -
                                                _tmp229 * _tmp265));
  _res(3, 1) =
      _tmp256 *
          (-_tmp249 * _tmp268 -
           _tmp254 * (_tmp252 * (-_tmp250 * _tmp267 - _tmp256 * _tmp268) - _tmp255 * _tmp267)) +
      Scalar(1.4083112389913199) * _tmp258 * _tmp267;
  _res(0, 2) = -_tmp30 * _tmp41;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
