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
 * Symbolic function: IK_residual_func_cost1_wrt_pa_Nl2
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPaNl2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 776

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (277)
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
  const Scalar _tmp19 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp20 = Scalar(1.0) / (fh1);
  const Scalar _tmp21 = -2 * std::pow(_tmp0, Scalar(2));
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
  const Scalar _tmp32 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp33 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp32, Scalar(2))));
  const Scalar _tmp34 =
      Scalar(1.0) *
      std::sinh(Scalar(0.71007031138673404) * _tmp20 *
                (-_tmp33 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp20 * fv1))) /
      _tmp33;
  const Scalar _tmp35 = _tmp12 + _tmp15;
  const Scalar _tmp36 = _tmp35 + _tmp8;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp38 = _tmp37 - p_b(0, 0);
  const Scalar _tmp39 = _tmp24 + _tmp28;
  const Scalar _tmp40 = _tmp23 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp42 * _tmp43;
  const Scalar _tmp45 = _tmp38 * _tmp43;
  const Scalar _tmp46 = _tmp35 + _tmp7;
  const Scalar _tmp47 = _tmp46 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - p_c(0, 0);
  const Scalar _tmp49 = _tmp22 + _tmp39;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_c(1, 0);
  const Scalar _tmp52 =
      std::sqrt(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp55 = _tmp52 * _tmp54;
  const Scalar _tmp56 = _tmp55 * (_tmp46 * _tmp51 * _tmp53 - _tmp48 * _tmp49 * _tmp53);
  const Scalar _tmp57 = -_tmp36 * _tmp44 + _tmp40 * _tmp45 + _tmp45 * _tmp56;
  const Scalar _tmp58 = _tmp51 * _tmp54;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp44 + _tmp45 * _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = Scalar(1.0) * _tmp46;
  const Scalar _tmp62 = -_tmp36 + _tmp61;
  const Scalar _tmp63 = Scalar(1.0) * _tmp49;
  const Scalar _tmp64 = -_tmp63;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp40 + _tmp64);
  const Scalar _tmp66 = Scalar(1.0) * _tmp65;
  const Scalar _tmp67 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp68 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp70 = _tmp68 - _tmp69;
  const Scalar _tmp71 = _tmp67 + _tmp70;
  const Scalar _tmp72 = _tmp68 + _tmp69;
  const Scalar _tmp73 = _tmp67 + _tmp72;
  const Scalar _tmp74 = _tmp45 * _tmp73;
  const Scalar _tmp75 = _tmp59 * (_tmp44 * _tmp71 - _tmp58 * _tmp74);
  const Scalar _tmp76 = -_tmp45 * _tmp71 + _tmp74;
  const Scalar _tmp77 = -_tmp60 * _tmp76 + _tmp62 * _tmp66 * _tmp75;
  const Scalar _tmp78 = _tmp16 + _tmp7;
  const Scalar _tmp79 = _tmp78 + position_vector(0, 0);
  const Scalar _tmp80 = _tmp79 - p_d(0, 0);
  const Scalar _tmp81 = _tmp22 + _tmp29;
  const Scalar _tmp82 = _tmp81 + position_vector(1, 0);
  const Scalar _tmp83 = _tmp82 - p_d(1, 0);
  const Scalar _tmp84 = std::pow(Scalar(std::pow(_tmp80, Scalar(2)) + std::pow(_tmp83, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp85 = _tmp80 * _tmp84;
  const Scalar _tmp86 = _tmp73 * _tmp85;
  const Scalar _tmp87 = -_tmp67;
  const Scalar _tmp88 = _tmp72 + _tmp87;
  const Scalar _tmp89 = _tmp83 * _tmp84;
  const Scalar _tmp90 = _tmp58 * _tmp85 - _tmp89;
  const Scalar _tmp91 = _tmp59 * _tmp90;
  const Scalar _tmp92 = -_tmp58 * _tmp86 - _tmp75 * _tmp90 + _tmp88 * _tmp89;
  const Scalar _tmp93 = _tmp62 * _tmp65;
  const Scalar _tmp94 = -_tmp76 * _tmp91 - _tmp85 * _tmp88 + _tmp86 - _tmp92 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp56 * _tmp85 - _tmp57 * _tmp91 - _tmp78 * _tmp89 + _tmp81 * _tmp85;
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp57 * _tmp60 - _tmp77 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp77;
  const Scalar _tmp102 = _tmp90 * _tmp95;
  const Scalar _tmp103 = -_tmp101 * _tmp102 + Scalar(1.0);
  const Scalar _tmp104 = _tmp45 * _tmp59;
  const Scalar _tmp105 = _tmp101 * _tmp95;
  const Scalar _tmp106 = _tmp103 * _tmp104 + _tmp105 * _tmp85;
  const Scalar _tmp107 = _tmp106 * _tmp55;
  const Scalar _tmp108 = _tmp18 - p_a(0, 0);
  const Scalar _tmp109 = std::pow(_tmp108, Scalar(2));
  const Scalar _tmp110 = _tmp31 - p_a(1, 0);
  const Scalar _tmp111 = std::pow(_tmp110, Scalar(2));
  const Scalar _tmp112 = _tmp109 + _tmp111;
  const Scalar _tmp113 = std::pow(_tmp112, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp114 = _tmp108 * _tmp110;
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = _tmp109 * _tmp113;
  const Scalar _tmp118 = _tmp117 * fh1;
  const Scalar _tmp119 = _tmp58 * _tmp73 + _tmp58 * _tmp75;
  const Scalar _tmp120 = _tmp58 * _tmp59;
  const Scalar _tmp121 = -_tmp119 * _tmp93 + _tmp120 * _tmp76 - _tmp73;
  const Scalar _tmp122 = _tmp99 * (_tmp120 * _tmp57 - _tmp121 * _tmp97 - _tmp56);
  const Scalar _tmp123 = _tmp121 + _tmp122;
  const Scalar _tmp124 = -_tmp102 * _tmp123 - _tmp58;
  const Scalar _tmp125 = _tmp123 * _tmp95;
  const Scalar _tmp126 = _tmp104 * _tmp124 + _tmp125 * _tmp85 + Scalar(1.0);
  const Scalar _tmp127 = _tmp126 * _tmp55;
  const Scalar _tmp128 = std::pow(_tmp112, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp129 = _tmp128 * fh1;
  const Scalar _tmp130 = _tmp129 * _tmp55;
  const Scalar _tmp131 = _tmp126 * _tmp130;
  const Scalar _tmp132 = _tmp128 * _tmp30;
  const Scalar _tmp133 = _tmp113 * _tmp17;
  const Scalar _tmp134 = fh1 * (_tmp114 * _tmp133 - _tmp117 * _tmp30 + _tmp132);
  const Scalar _tmp135 = Scalar(1.0) * _tmp98;
  const Scalar _tmp136 = _tmp45 * _tmp91;
  const Scalar _tmp137 = _tmp55 * (-_tmp135 * _tmp136 + _tmp135 * _tmp85);
  const Scalar _tmp138 = -_tmp107 * _tmp116 - _tmp118 * _tmp127 + _tmp131 - _tmp134 * _tmp137;
  const Scalar _tmp139 = _tmp128 * _tmp17;
  const Scalar _tmp140 = fh1 * (-_tmp108 * _tmp132 + _tmp110 * _tmp139);
  const Scalar _tmp141 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp142 = _tmp61 + _tmp63 * _tmp93;
  const Scalar _tmp143 = 0;
  const Scalar _tmp144 = _tmp143 * _tmp95;
  const Scalar _tmp145 = _tmp106 * _tmp130;
  const Scalar _tmp146 = -_tmp108 * _tmp131 - _tmp110 * _tmp145 - _tmp137 * _tmp140 -
                         _tmp141 * _tmp55 * (-_tmp136 * _tmp144 + _tmp144 * _tmp85);
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 = fh1 * (_tmp70 + _tmp87);
  const Scalar _tmp149 = _tmp128 * _tmp148;
  const Scalar _tmp150 = _tmp108 * _tmp149 + Scalar(40.024799999999999) * _tmp11 + _tmp17 * fv1;
  const Scalar _tmp151 = _tmp64 + _tmp81;
  const Scalar _tmp152 = _tmp151 * _tmp93;
  const Scalar _tmp153 = Scalar(1.0) / (-_tmp152 + _tmp61 - _tmp78);
  const Scalar _tmp154 = Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = _tmp151 * _tmp65;
  const Scalar _tmp156 = _tmp154 * _tmp155;
  const Scalar _tmp157 = -Scalar(1.0) * _tmp154 + Scalar(1.0) * _tmp156;
  const Scalar _tmp158 = _tmp92 * _tmp95;
  const Scalar _tmp159 = _tmp142 * _tmp153;
  const Scalar _tmp160 = -_tmp143 * _tmp158 - _tmp151 * _tmp159 + _tmp64;
  const Scalar _tmp161 = _tmp151 * _tmp153;
  const Scalar _tmp162 = _tmp100 * _tmp161 - _tmp101 * _tmp158 - Scalar(1.0) * _tmp75;
  const Scalar _tmp163 = _tmp100 * _tmp154 - _tmp162 * _tmp66;
  const Scalar _tmp164 = Scalar(1.0) * _tmp129;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = -_tmp110 * _tmp149 - Scalar(40.024799999999999) * _tmp27 - _tmp30 * fv1;
  const Scalar _tmp167 = _tmp154 * _tmp93;
  const Scalar _tmp168 = _tmp152 * _tmp154 + Scalar(1.0);
  const Scalar _tmp169 = Scalar(1.0) * _tmp167 - Scalar(1.0) * _tmp168 * _tmp66;
  const Scalar _tmp170 = _tmp119 + _tmp122 * _tmp161 - _tmp123 * _tmp158;
  const Scalar _tmp171 = _tmp122 * _tmp154 - _tmp170 * _tmp66;
  const Scalar _tmp172 = _tmp164 * _tmp171;
  const Scalar _tmp173 = _tmp154 * _tmp99;
  const Scalar _tmp174 = -_tmp135 * _tmp92 + _tmp151 * _tmp173;
  const Scalar _tmp175 = Scalar(1.0) * _tmp173 - Scalar(1.0) * _tmp174 * _tmp66;
  const Scalar _tmp176 =
      _tmp108 * _tmp172 + _tmp110 * _tmp165 + _tmp140 * _tmp175 +
      Scalar(1.0) * _tmp141 * (-_tmp142 * _tmp154 - _tmp160 * _tmp66 + Scalar(1.0)) +
      _tmp150 * _tmp157 + _tmp166 * _tmp169;
  const Scalar _tmp177 = std::asinh(_tmp147 * _tmp176);
  const Scalar _tmp178 = Scalar(1.4083112389913199) * _tmp146;
  const Scalar _tmp179 =
      -_tmp177 * _tmp178 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp180 = std::pow(_tmp146, Scalar(-2));
  const Scalar _tmp181 = Scalar(0.71007031138673404) * _tmp180;
  const Scalar _tmp182 = _tmp179 * _tmp181;
  const Scalar _tmp183 = _tmp176 * _tmp180;
  const Scalar _tmp184 = _tmp115 * _tmp148;
  const Scalar _tmp185 = Scalar(1.0) * _tmp163;
  const Scalar _tmp186 = Scalar(1.0) * _tmp171;
  const Scalar _tmp187 = _tmp117 * _tmp148 - _tmp149;
  const Scalar _tmp188 =
      std::pow(Scalar(std::pow(_tmp176, Scalar(2)) * _tmp180 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp189 =
      _tmp188 *
      (-_tmp138 * _tmp183 + _tmp147 * (_tmp116 * _tmp185 + _tmp118 * _tmp186 + _tmp134 * _tmp175 +
                                       _tmp157 * _tmp187 - _tmp169 * _tmp184 - _tmp172));
  const Scalar _tmp190 = Scalar(1.4083112389913199) * _tmp177;
  const Scalar _tmp191 = Scalar(0.71007031138673404) * _tmp147;
  const Scalar _tmp192 = _tmp179 * _tmp191;
  const Scalar _tmp193 = std::sinh(_tmp192);
  const Scalar _tmp194 = Scalar(1.0) * _tmp177;
  const Scalar _tmp195 = Scalar(1.0) * std::sinh(_tmp194);
  const Scalar _tmp196 = _tmp181 * p_c(2, 0);
  const Scalar _tmp197 = Scalar(1.4083112389913199) * _tmp191 * p_c(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp192) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp194);
  const Scalar _tmp198 = _tmp135 * _tmp140;
  const Scalar _tmp199 = _tmp129 * _tmp59;
  const Scalar _tmp200 = _tmp124 * _tmp199;
  const Scalar _tmp201 = _tmp103 * _tmp199;
  const Scalar _tmp202 = _tmp141 * _tmp144;
  const Scalar _tmp203 =
      _tmp108 * _tmp200 + _tmp110 * _tmp201 - _tmp198 * _tmp91 - _tmp202 * _tmp91;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp205 = _tmp162 * _tmp65;
  const Scalar _tmp206 = _tmp154 * _tmp187;
  const Scalar _tmp207 = _tmp168 * _tmp65;
  const Scalar _tmp208 = _tmp129 * _tmp65;
  const Scalar _tmp209 = _tmp170 * _tmp208;
  const Scalar _tmp210 = _tmp170 * _tmp65;
  const Scalar _tmp211 = _tmp174 * _tmp65;
  const Scalar _tmp212 = _tmp134 * _tmp135;
  const Scalar _tmp213 = _tmp124 * _tmp59;
  const Scalar _tmp214 = _tmp103 * _tmp59;
  const Scalar _tmp215 = _tmp116 * _tmp214 + _tmp118 * _tmp213 - _tmp200 - _tmp212 * _tmp91;
  const Scalar _tmp216 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp217 = _tmp162 * _tmp208;
  const Scalar _tmp218 = _tmp150 * _tmp154;
  const Scalar _tmp219 = _tmp108 * _tmp209 + _tmp110 * _tmp217 + _tmp140 * _tmp211 +
                         _tmp141 * _tmp160 * _tmp65 - _tmp155 * _tmp218 + _tmp166 * _tmp207;
  const Scalar _tmp220 = _tmp216 * _tmp219;
  const Scalar _tmp221 =
      std::pow(Scalar(_tmp216 * std::pow(_tmp219, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp222 =
      _tmp221 * (_tmp204 * (_tmp116 * _tmp205 + _tmp118 * _tmp210 + _tmp134 * _tmp211 -
                            _tmp155 * _tmp206 - _tmp184 * _tmp207 - _tmp209) -
                 _tmp215 * _tmp220);
  const Scalar _tmp223 = std::asinh(_tmp204 * _tmp219);
  const Scalar _tmp224 = Scalar(1.0) * _tmp223;
  const Scalar _tmp225 = Scalar(1.0) * std::sinh(_tmp224);
  const Scalar _tmp226 = Scalar(1.4083112389913199) * _tmp203;
  const Scalar _tmp227 =
      -_tmp223 * _tmp226 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp228 = Scalar(0.71007031138673404) * _tmp216;
  const Scalar _tmp229 = _tmp215 * _tmp228;
  const Scalar _tmp230 = Scalar(1.4083112389913199) * _tmp215;
  const Scalar _tmp231 = Scalar(0.71007031138673404) * _tmp204;
  const Scalar _tmp232 = _tmp227 * _tmp231;
  const Scalar _tmp233 = std::sinh(_tmp232);
  const Scalar _tmp234 = _tmp231 * p_b(2, 0) + std::cosh(_tmp224) - std::cosh(_tmp232);
  const Scalar _tmp235 = _tmp125 * _tmp129;
  const Scalar _tmp236 = _tmp105 * _tmp129;
  const Scalar _tmp237 = _tmp108 * _tmp235 + _tmp110 * _tmp236 + _tmp198 + _tmp202;
  const Scalar _tmp238 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp239 = _tmp129 * _tmp153;
  const Scalar _tmp240 = _tmp100 * _tmp239;
  const Scalar _tmp241 = _tmp122 * _tmp239;
  const Scalar _tmp242 = -_tmp108 * _tmp241 - _tmp110 * _tmp240 - _tmp140 * _tmp173 +
                         _tmp141 * _tmp159 - _tmp166 * _tmp167 + _tmp218;
  const Scalar _tmp243 =
      std::pow(Scalar(_tmp238 * std::pow(_tmp242, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp244 = _tmp105 * _tmp116 + _tmp118 * _tmp125 + _tmp212 - _tmp235;
  const Scalar _tmp245 = _tmp238 * _tmp242;
  const Scalar _tmp246 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp247 = _tmp100 * _tmp153;
  const Scalar _tmp248 = _tmp122 * _tmp153;
  const Scalar _tmp249 =
      _tmp243 *
      (-_tmp244 * _tmp245 + _tmp246 * (-_tmp116 * _tmp247 - _tmp118 * _tmp248 - _tmp134 * _tmp173 +
                                       _tmp167 * _tmp184 + _tmp206 + _tmp241));
  const Scalar _tmp250 = std::asinh(_tmp242 * _tmp246);
  const Scalar _tmp251 = Scalar(1.0) * _tmp250;
  const Scalar _tmp252 = Scalar(1.0) * std::sinh(_tmp251);
  const Scalar _tmp253 = Scalar(0.71007031138673404) * _tmp238;
  const Scalar _tmp254 = _tmp253 * p_d(2, 0);
  const Scalar _tmp255 = Scalar(1.4083112389913199) * _tmp237;
  const Scalar _tmp256 =
      -_tmp250 * _tmp255 - std::sqrt(Scalar(std::pow(Scalar(-_tmp79 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp82 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp257 = Scalar(0.71007031138673404) * _tmp246;
  const Scalar _tmp258 = _tmp256 * _tmp257;
  const Scalar _tmp259 = std::sinh(_tmp258);
  const Scalar _tmp260 = _tmp253 * _tmp256;
  const Scalar _tmp261 = Scalar(1.4083112389913199) * _tmp244;
  const Scalar _tmp262 = _tmp257 * p_d(2, 0) + std::cosh(_tmp251) - std::cosh(_tmp258);
  const Scalar _tmp263 = fh1 * (_tmp111 * _tmp133 - _tmp115 * _tmp30 - _tmp139);
  const Scalar _tmp264 = _tmp111 * _tmp113;
  const Scalar _tmp265 = _tmp264 * fh1;
  const Scalar _tmp266 = -_tmp107 * _tmp265 - _tmp116 * _tmp127 - _tmp137 * _tmp263 + _tmp145;
  const Scalar _tmp267 = -_tmp148 * _tmp264 + _tmp149;
  const Scalar _tmp268 =
      _tmp188 * (_tmp147 * (_tmp116 * _tmp186 + _tmp157 * _tmp184 - _tmp165 + _tmp169 * _tmp267 +
                            _tmp175 * _tmp263 + _tmp185 * _tmp265) -
                 _tmp183 * _tmp266);
  const Scalar _tmp269 = _tmp135 * _tmp263;
  const Scalar _tmp270 = _tmp116 * _tmp213 - _tmp201 + _tmp214 * _tmp265 - _tmp269 * _tmp91;
  const Scalar _tmp271 =
      _tmp221 * (_tmp204 * (_tmp116 * _tmp210 - _tmp156 * _tmp184 + _tmp205 * _tmp265 +
                            _tmp207 * _tmp267 + _tmp211 * _tmp263 - _tmp217) -
                 _tmp220 * _tmp270);
  const Scalar _tmp272 = Scalar(1.4083112389913199) * _tmp270;
  const Scalar _tmp273 = _tmp228 * _tmp270;
  const Scalar _tmp274 = _tmp105 * _tmp265 + _tmp116 * _tmp125 - _tmp236 + _tmp269;
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp274;
  const Scalar _tmp276 =
      _tmp243 *
      (-_tmp245 * _tmp274 + _tmp246 * (-_tmp116 * _tmp248 + _tmp154 * _tmp184 - _tmp167 * _tmp267 -
                                       _tmp173 * _tmp263 + _tmp240 - _tmp247 * _tmp265));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp19 * _tmp34;
  _res(1, 0) =
      -_tmp138 * _tmp197 -
      _tmp178 *
          (-_tmp138 * _tmp196 + _tmp189 * _tmp195 -
           _tmp193 * (-_tmp138 * _tmp182 + _tmp191 * (-_tmp138 * _tmp190 - _tmp178 * _tmp189)));
  _res(2, 0) =
      -_tmp226 *
          (_tmp222 * _tmp225 - _tmp229 * p_b(2, 0) -
           _tmp233 * (-_tmp227 * _tmp229 + _tmp231 * (-_tmp222 * _tmp226 - _tmp223 * _tmp230))) -
      _tmp230 * _tmp234;
  _res(3, 0) =
      -_tmp255 *
          (-_tmp244 * _tmp254 + _tmp249 * _tmp252 -
           _tmp259 * (-_tmp244 * _tmp260 + _tmp257 * (-_tmp249 * _tmp255 - _tmp250 * _tmp261))) -
      _tmp261 * _tmp262;
  _res(0, 1) = -_tmp32 * _tmp34;
  _res(1, 1) =
      -_tmp178 *
          (-_tmp193 * (-_tmp182 * _tmp266 + _tmp191 * (-_tmp178 * _tmp268 - _tmp190 * _tmp266)) +
           _tmp195 * _tmp268 - _tmp196 * _tmp266) -
      _tmp197 * _tmp266;
  _res(2, 1) =
      -_tmp226 *
          (_tmp225 * _tmp271 -
           _tmp233 * (-_tmp227 * _tmp273 + _tmp231 * (-_tmp223 * _tmp272 - _tmp226 * _tmp271)) -
           _tmp273 * p_b(2, 0)) -
      _tmp234 * _tmp272;
  _res(3, 1) =
      -_tmp255 *
          (_tmp252 * _tmp276 - _tmp254 * _tmp274 -
           _tmp259 * (_tmp257 * (-_tmp250 * _tmp275 - _tmp255 * _tmp276) - _tmp260 * _tmp274)) -
      _tmp262 * _tmp275;
  _res(0, 2) = Scalar(-1.0);
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
