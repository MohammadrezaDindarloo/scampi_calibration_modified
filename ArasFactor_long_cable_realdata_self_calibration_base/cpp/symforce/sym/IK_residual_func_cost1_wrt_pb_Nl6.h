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
 * Symbolic function: IK_residual_func_cost1_wrt_pb_Nl6
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPbNl6(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 777

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (275)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                       _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp6 = 2 * _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = 2 * _tmp0;
  const Scalar _tmp10 = _tmp4 * _tmp9;
  const Scalar _tmp11 = _tmp2 * _tmp5;
  const Scalar _tmp12 = _tmp10 + _tmp11;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp15 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp8;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = -_tmp19 + p_b(0, 0);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp22 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp2 * _tmp4;
  const Scalar _tmp25 = _tmp5 * _tmp9;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp23 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = -_tmp30 + p_b(1, 0);
  const Scalar _tmp32 =
      std::sqrt(Scalar(std::pow(_tmp20, Scalar(2)) + std::pow(_tmp31, Scalar(2))));
  const Scalar _tmp33 = Scalar(1.0) / (fh1);
  const Scalar _tmp34 =
      Scalar(1.0) *
      std::sinh(Scalar(0.71007031138673404) * _tmp33 *
                (-_tmp32 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp33 * fv1))) /
      _tmp32;
  const Scalar _tmp35 = _tmp19 - p_b(0, 0);
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(2));
  const Scalar _tmp37 = _tmp30 - p_b(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp36 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp41 = _tmp36 * _tmp40;
  const Scalar _tmp42 = _tmp41 * fh1;
  const Scalar _tmp43 = _tmp17 + _tmp7;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 - p_c(0, 0);
  const Scalar _tmp46 = _tmp23 + _tmp27;
  const Scalar _tmp47 = _tmp21 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_c(1, 0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp45 * _tmp50;
  const Scalar _tmp52 = _tmp49 * _tmp50;
  const Scalar _tmp53 = _tmp13 - _tmp16;
  const Scalar _tmp54 = _tmp53 + _tmp8;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 - p_a(0, 0);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = -_tmp21;
  const Scalar _tmp59 = _tmp28 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 - p_a(1, 0);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp51 * _tmp62 - _tmp52);
  const Scalar _tmp64 =
      std::sqrt(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp57 * _tmp64;
  const Scalar _tmp67 = _tmp66 * (_tmp54 * _tmp61 * _tmp65 - _tmp56 * _tmp59 * _tmp65);
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 = -Scalar(0.010999999999999999) * _tmp14 -
                        Scalar(0.010999999999999999) * _tmp22 + Scalar(-0.010999999999999999);
  const Scalar _tmp71 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp72 = _tmp70 - _tmp71;
  const Scalar _tmp73 = _tmp69 + _tmp72;
  const Scalar _tmp74 = _tmp70 + _tmp71;
  const Scalar _tmp75 = _tmp68 + _tmp74;
  const Scalar _tmp76 = _tmp51 * _tmp73;
  const Scalar _tmp77 = _tmp52 * _tmp75 - _tmp62 * _tmp76;
  const Scalar _tmp78 = _tmp62 * _tmp63;
  const Scalar _tmp79 = _tmp62 * _tmp73 + _tmp77 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) * _tmp59;
  const Scalar _tmp81 = -_tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp47 + _tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp54;
  const Scalar _tmp84 = _tmp82 * (-_tmp43 + _tmp83);
  const Scalar _tmp85 = -_tmp51 * _tmp75 + _tmp76;
  const Scalar _tmp86 = -_tmp73 + _tmp78 * _tmp85 - _tmp79 * _tmp84;
  const Scalar _tmp87 = _tmp53 + _tmp7;
  const Scalar _tmp88 = _tmp87 + position_vector(0, 0);
  const Scalar _tmp89 = _tmp88 - p_d(0, 0);
  const Scalar _tmp90 = _tmp46 + _tmp58;
  const Scalar _tmp91 = _tmp90 + position_vector(1, 0);
  const Scalar _tmp92 = _tmp91 - p_d(1, 0);
  const Scalar _tmp93 = std::pow(Scalar(std::pow(_tmp89, Scalar(2)) + std::pow(_tmp92, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp94 = _tmp89 * _tmp93;
  const Scalar _tmp95 = _tmp73 * _tmp94;
  const Scalar _tmp96 = _tmp69 + _tmp74;
  const Scalar _tmp97 = _tmp92 * _tmp93;
  const Scalar _tmp98 = _tmp62 * _tmp94 - _tmp97;
  const Scalar _tmp99 = _tmp63 * _tmp98;
  const Scalar _tmp100 = -_tmp62 * _tmp95 - _tmp77 * _tmp99 + _tmp96 * _tmp97;
  const Scalar _tmp101 = -_tmp100 * _tmp84 - _tmp85 * _tmp99 - _tmp94 * _tmp96 + _tmp95;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = -_tmp43 * _tmp52 + _tmp47 * _tmp51 + _tmp51 * _tmp67;
  const Scalar _tmp104 = -_tmp103 * _tmp99 + _tmp67 * _tmp94 - _tmp87 * _tmp97 + _tmp90 * _tmp94;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp107 = _tmp101 * _tmp106;
  const Scalar _tmp108 = _tmp107 * (_tmp103 * _tmp78 - _tmp105 * _tmp86 - _tmp67);
  const Scalar _tmp109 = _tmp108 + _tmp86;
  const Scalar _tmp110 = _tmp102 * _tmp98;
  const Scalar _tmp111 = _tmp63 * (-_tmp109 * _tmp110 - _tmp62);
  const Scalar _tmp112 = _tmp102 * _tmp94;
  const Scalar _tmp113 = _tmp109 * _tmp112 + _tmp111 * _tmp51 + Scalar(1.0);
  const Scalar _tmp114 = _tmp113 * _tmp66;
  const Scalar _tmp115 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = _tmp116 * _tmp66;
  const Scalar _tmp118 = _tmp113 * _tmp117;
  const Scalar _tmp119 = _tmp29 * _tmp40;
  const Scalar _tmp120 = _tmp35 * _tmp37;
  const Scalar _tmp121 = _tmp120 * _tmp40;
  const Scalar _tmp122 = _tmp115 * _tmp29;
  const Scalar _tmp123 = fh1 * (-_tmp119 * _tmp36 + _tmp121 * _tmp18 + _tmp122);
  const Scalar _tmp124 = Scalar(1.0) * _tmp106;
  const Scalar _tmp125 = Scalar(1.0) * _tmp63;
  const Scalar _tmp126 = _tmp106 * _tmp125 * _tmp98;
  const Scalar _tmp127 = _tmp66 * (_tmp124 * _tmp94 - _tmp126 * _tmp51);
  const Scalar _tmp128 = _tmp121 * fh1;
  const Scalar _tmp129 = _tmp125 * _tmp77;
  const Scalar _tmp130 = -_tmp125 * _tmp85 + _tmp129 * _tmp84;
  const Scalar _tmp131 = _tmp107 * (-_tmp103 * _tmp125 - _tmp105 * _tmp130);
  const Scalar _tmp132 = _tmp130 + _tmp131;
  const Scalar _tmp133 = _tmp63 * (-_tmp110 * _tmp132 + Scalar(1.0));
  const Scalar _tmp134 = _tmp112 * _tmp132 + _tmp133 * _tmp51;
  const Scalar _tmp135 = _tmp134 * _tmp66;
  const Scalar _tmp136 = -_tmp114 * _tmp42 + _tmp118 - _tmp123 * _tmp127 - _tmp128 * _tmp135;
  const Scalar _tmp137 = _tmp80 * _tmp84 + _tmp83;
  const Scalar _tmp138 = 0;
  const Scalar _tmp139 = _tmp100 * _tmp102;
  const Scalar _tmp140 = _tmp81 + _tmp90;
  const Scalar _tmp141 = _tmp140 * _tmp84;
  const Scalar _tmp142 = Scalar(1.0) / (-_tmp141 + _tmp83 - _tmp87);
  const Scalar _tmp143 = _tmp137 * _tmp142;
  const Scalar _tmp144 = _tmp82 * (-_tmp138 * _tmp139 - _tmp140 * _tmp143 + _tmp81);
  const Scalar _tmp145 = Scalar(1.0) * _tmp142;
  const Scalar _tmp146 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp147 = _tmp140 * _tmp142;
  const Scalar _tmp148 = _tmp108 * _tmp147 - _tmp109 * _tmp139 + _tmp79;
  const Scalar _tmp149 = Scalar(1.0) * _tmp82;
  const Scalar _tmp150 = _tmp108 * _tmp145 - _tmp148 * _tmp149;
  const Scalar _tmp151 = Scalar(1.0) * _tmp116;
  const Scalar _tmp152 = _tmp150 * _tmp151;
  const Scalar _tmp153 = _tmp68 + _tmp72;
  const Scalar _tmp154 = _tmp116 * _tmp153;
  const Scalar _tmp155 = Scalar(40.024799999999999) * _tmp12 + _tmp154 * _tmp35 + _tmp18 * fv1;
  const Scalar _tmp156 = _tmp140 * _tmp82;
  const Scalar _tmp157 = _tmp145 * _tmp156;
  const Scalar _tmp158 = -Scalar(1.0) * _tmp145 + Scalar(1.0) * _tmp157;
  const Scalar _tmp159 = _tmp107 * _tmp145;
  const Scalar _tmp160 = -_tmp100 * _tmp124 + _tmp140 * _tmp159;
  const Scalar _tmp161 = -Scalar(1.0) * _tmp149 * _tmp160 + Scalar(1.0) * _tmp159;
  const Scalar _tmp162 = _tmp115 * _tmp18;
  const Scalar _tmp163 = fh1 * (-_tmp122 * _tmp35 + _tmp162 * _tmp37);
  const Scalar _tmp164 = -_tmp129 + _tmp131 * _tmp147 - _tmp132 * _tmp139;
  const Scalar _tmp165 = _tmp131 * _tmp145 - _tmp149 * _tmp164;
  const Scalar _tmp166 = _tmp151 * _tmp165;
  const Scalar _tmp167 = -_tmp154 * _tmp37 - Scalar(40.024799999999999) * _tmp26 - _tmp29 * fv1;
  const Scalar _tmp168 = _tmp82 * (_tmp141 * _tmp145 + Scalar(1.0));
  const Scalar _tmp169 = _tmp145 * _tmp84;
  const Scalar _tmp170 = -Scalar(1.0) * _tmp168 + Scalar(1.0) * _tmp169;
  const Scalar _tmp171 =
      Scalar(1.0) * _tmp146 * (-_tmp137 * _tmp145 - Scalar(1.0) * _tmp144 + Scalar(1.0)) +
      _tmp152 * _tmp35 + _tmp155 * _tmp158 + _tmp161 * _tmp163 + _tmp166 * _tmp37 +
      _tmp167 * _tmp170;
  const Scalar _tmp172 = _tmp117 * _tmp134;
  const Scalar _tmp173 = _tmp102 * _tmp138;
  const Scalar _tmp174 = -_tmp118 * _tmp35 - _tmp127 * _tmp163 -
                         _tmp146 * _tmp66 * (-_tmp173 * _tmp51 * _tmp99 + _tmp173 * _tmp94) -
                         _tmp172 * _tmp37;
  const Scalar _tmp175 = std::pow(_tmp174, Scalar(-2));
  const Scalar _tmp176 = _tmp171 * _tmp175;
  const Scalar _tmp177 = _tmp153 * fh1;
  const Scalar _tmp178 = _tmp121 * _tmp177;
  const Scalar _tmp179 = Scalar(1.0) * fh1;
  const Scalar _tmp180 = _tmp165 * _tmp179;
  const Scalar _tmp181 = _tmp150 * _tmp179;
  const Scalar _tmp182 = -_tmp154 + _tmp177 * _tmp41;
  const Scalar _tmp183 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp184 =
      -_tmp136 * _tmp176 + _tmp183 * (_tmp121 * _tmp180 + _tmp123 * _tmp161 - _tmp152 +
                                      _tmp158 * _tmp182 - _tmp170 * _tmp178 + _tmp181 * _tmp41);
  const Scalar _tmp185 =
      std::pow(Scalar(std::pow(_tmp171, Scalar(2)) * _tmp175 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp186 = Scalar(1.4083112389913199) * _tmp174;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = std::asinh(_tmp171 * _tmp183);
  const Scalar _tmp189 = Scalar(1.4083112389913199) * _tmp188;
  const Scalar _tmp190 = Scalar(0.71007031138673404) * _tmp183;
  const Scalar _tmp191 =
      -_tmp174 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp55 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp60 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp192 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp193 = _tmp136 * _tmp192;
  const Scalar _tmp194 = _tmp190 * _tmp191;
  const Scalar _tmp195 = std::sinh(_tmp194);
  const Scalar _tmp196 = Scalar(1.0) * _tmp188;
  const Scalar _tmp197 = Scalar(1.0) * _tmp185 * std::sinh(_tmp196);
  const Scalar _tmp198 = _tmp190 * p_a(2, 0) - std::cosh(_tmp194) + std::cosh(_tmp196);
  const Scalar _tmp199 = _tmp111 * _tmp116;
  const Scalar _tmp200 = _tmp111 * _tmp42 - _tmp123 * _tmp126 + _tmp128 * _tmp133 - _tmp199;
  const Scalar _tmp201 = _tmp116 * _tmp133;
  const Scalar _tmp202 = _tmp146 * _tmp173;
  const Scalar _tmp203 =
      -_tmp126 * _tmp163 + _tmp199 * _tmp35 + _tmp201 * _tmp37 - _tmp202 * _tmp99;
  const Scalar _tmp204 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp205 = Scalar(0.71007031138673404) * _tmp204;
  const Scalar _tmp206 = _tmp200 * _tmp205;
  const Scalar _tmp207 = _tmp116 * _tmp82;
  const Scalar _tmp208 = _tmp148 * _tmp207;
  const Scalar _tmp209 = _tmp145 * _tmp155;
  const Scalar _tmp210 = _tmp160 * _tmp82;
  const Scalar _tmp211 = _tmp164 * _tmp207;
  const Scalar _tmp212 = _tmp144 * _tmp146 - _tmp156 * _tmp209 + _tmp163 * _tmp210 +
                         _tmp167 * _tmp168 + _tmp208 * _tmp35 + _tmp211 * _tmp37;
  const Scalar _tmp213 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp214 = std::asinh(_tmp212 * _tmp213);
  const Scalar _tmp215 = Scalar(1.0) * _tmp214;
  const Scalar _tmp216 = Scalar(1.0) * std::sinh(_tmp215);
  const Scalar _tmp217 =
      std::pow(Scalar(_tmp204 * std::pow(_tmp212, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp218 = _tmp204 * _tmp212;
  const Scalar _tmp219 = _tmp145 * _tmp182;
  const Scalar _tmp220 = _tmp164 * _tmp82;
  const Scalar _tmp221 = _tmp148 * _tmp82;
  const Scalar _tmp222 =
      _tmp217 *
      (-_tmp200 * _tmp218 + _tmp213 * (_tmp123 * _tmp210 + _tmp128 * _tmp220 - _tmp156 * _tmp219 -
                                       _tmp168 * _tmp178 - _tmp208 + _tmp221 * _tmp42));
  const Scalar _tmp223 = Scalar(1.4083112389913199) * _tmp214;
  const Scalar _tmp224 =
      -_tmp203 * _tmp223 - std::sqrt(Scalar(std::pow(Scalar(-_tmp44 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp225 = Scalar(0.71007031138673404) * _tmp213;
  const Scalar _tmp226 = _tmp224 * _tmp225;
  const Scalar _tmp227 = std::sinh(_tmp226);
  const Scalar _tmp228 = Scalar(1.4083112389913199) * _tmp203;
  const Scalar _tmp229 = Scalar(1.4083112389913199) * _tmp225 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp215) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp226);
  const Scalar _tmp230 = _tmp102 * _tmp116;
  const Scalar _tmp231 = _tmp109 * _tmp230;
  const Scalar _tmp232 = _tmp102 * fh1;
  const Scalar _tmp233 = _tmp132 * _tmp232;
  const Scalar _tmp234 = _tmp109 * _tmp232;
  const Scalar _tmp235 = _tmp121 * _tmp233 + _tmp123 * _tmp124 - _tmp231 + _tmp234 * _tmp41;
  const Scalar _tmp236 = _tmp132 * _tmp230;
  const Scalar _tmp237 = _tmp124 * _tmp163 + _tmp202 + _tmp231 * _tmp35 + _tmp236 * _tmp37;
  const Scalar _tmp238 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp239 = Scalar(0.71007031138673404) * _tmp238;
  const Scalar _tmp240 = _tmp239 * p_d(2, 0);
  const Scalar _tmp241 = _tmp116 * _tmp142;
  const Scalar _tmp242 = _tmp131 * _tmp241;
  const Scalar _tmp243 = _tmp108 * _tmp241;
  const Scalar _tmp244 = _tmp143 * _tmp146 - _tmp159 * _tmp163 - _tmp167 * _tmp169 + _tmp209 -
                         _tmp242 * _tmp37 - _tmp243 * _tmp35;
  const Scalar _tmp245 = _tmp238 * _tmp244;
  const Scalar _tmp246 = _tmp108 * _tmp142;
  const Scalar _tmp247 = _tmp131 * _tmp142;
  const Scalar _tmp248 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp249 =
      std::pow(Scalar(_tmp238 * std::pow(_tmp244, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp250 =
      _tmp249 *
      (-_tmp235 * _tmp245 + _tmp248 * (-_tmp123 * _tmp159 - _tmp128 * _tmp247 + _tmp169 * _tmp178 +
                                       _tmp219 + _tmp243 - _tmp246 * _tmp42));
  const Scalar _tmp251 = std::asinh(_tmp244 * _tmp248);
  const Scalar _tmp252 = Scalar(1.0) * _tmp251;
  const Scalar _tmp253 = Scalar(1.0) * std::sinh(_tmp252);
  const Scalar _tmp254 = Scalar(1.4083112389913199) * _tmp237;
  const Scalar _tmp255 =
      -_tmp251 * _tmp254 - std::sqrt(Scalar(std::pow(Scalar(-_tmp88 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp91 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp256 = _tmp239 * _tmp255;
  const Scalar _tmp257 = Scalar(1.4083112389913199) * _tmp251;
  const Scalar _tmp258 = Scalar(0.71007031138673404) * _tmp248;
  const Scalar _tmp259 = _tmp255 * _tmp258;
  const Scalar _tmp260 = std::sinh(_tmp259);
  const Scalar _tmp261 = Scalar(1.4083112389913199) * _tmp258 * p_d(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp252) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp259);
  const Scalar _tmp262 = _tmp38 * _tmp40;
  const Scalar _tmp263 = _tmp262 * fh1;
  const Scalar _tmp264 = fh1 * (-_tmp119 * _tmp120 - _tmp162 + _tmp18 * _tmp262);
  const Scalar _tmp265 = -_tmp114 * _tmp128 - _tmp127 * _tmp264 - _tmp135 * _tmp263 + _tmp172;
  const Scalar _tmp266 = _tmp154 - _tmp177 * _tmp262;
  const Scalar _tmp267 =
      -_tmp176 * _tmp265 + _tmp183 * (_tmp121 * _tmp181 + _tmp158 * _tmp178 + _tmp161 * _tmp264 -
                                      _tmp166 + _tmp170 * _tmp266 + _tmp180 * _tmp262);
  const Scalar _tmp268 = Scalar(1.4083112389913199) * _tmp265;
  const Scalar _tmp269 = _tmp192 * _tmp265;
  const Scalar _tmp270 = _tmp111 * _tmp128 - _tmp126 * _tmp264 + _tmp133 * _tmp263 - _tmp201;
  const Scalar _tmp271 = _tmp205 * _tmp270;
  const Scalar _tmp272 =
      _tmp217 * (_tmp213 * (_tmp128 * _tmp221 - _tmp157 * _tmp178 + _tmp168 * _tmp266 +
                            _tmp210 * _tmp264 - _tmp211 + _tmp220 * _tmp263) -
                 _tmp218 * _tmp270);
  const Scalar _tmp273 = _tmp121 * _tmp234 + _tmp124 * _tmp264 + _tmp233 * _tmp262 - _tmp236;
  const Scalar _tmp274 =
      _tmp249 *
      (-_tmp245 * _tmp273 + _tmp248 * (-_tmp128 * _tmp246 + _tmp145 * _tmp178 - _tmp159 * _tmp264 -
                                       _tmp169 * _tmp266 + _tmp242 - _tmp247 * _tmp263));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp20 * _tmp34;
  _res(1, 0) =
      -Scalar(1.4083112389913199) * _tmp136 * _tmp198 -
      _tmp186 *
          (_tmp184 * _tmp197 - _tmp193 * p_a(2, 0) -
           _tmp195 * (_tmp190 * (-_tmp136 * _tmp189 - _tmp184 * _tmp187) - _tmp191 * _tmp193));
  _res(2, 0) =
      -_tmp200 * _tmp229 -
      _tmp228 *
          (-_tmp206 * p_c(2, 0) + _tmp216 * _tmp222 -
           _tmp227 * (-_tmp206 * _tmp224 + _tmp225 * (-_tmp200 * _tmp223 - _tmp222 * _tmp228)));
  _res(3, 0) =
      -_tmp235 * _tmp261 -
      _tmp254 *
          (-_tmp235 * _tmp240 + _tmp250 * _tmp253 -
           _tmp260 * (-_tmp235 * _tmp256 + _tmp258 * (-_tmp235 * _tmp257 - _tmp250 * _tmp254)));
  _res(0, 1) = -_tmp31 * _tmp34;
  _res(1, 1) =
      -_tmp186 *
          (-_tmp195 * (_tmp190 * (-_tmp187 * _tmp267 - _tmp188 * _tmp268) - _tmp191 * _tmp269) +
           _tmp197 * _tmp267 - _tmp269 * p_a(2, 0)) -
      _tmp198 * _tmp268;
  _res(2, 1) =
      -_tmp228 *
          (_tmp216 * _tmp272 -
           _tmp227 * (-_tmp224 * _tmp271 + _tmp225 * (-_tmp223 * _tmp270 - _tmp228 * _tmp272)) -
           _tmp271 * p_c(2, 0)) -
      _tmp229 * _tmp270;
  _res(3, 1) =
      -_tmp254 *
          (-_tmp240 * _tmp273 + _tmp253 * _tmp274 -
           _tmp260 * (-_tmp256 * _tmp273 + _tmp258 * (-_tmp254 * _tmp274 - _tmp257 * _tmp273))) -
      _tmp261 * _tmp273;
  _res(0, 2) = Scalar(-1.0);
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
