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
 * Symbolic function: IK_residual_func_cost2_wrt_pd_Nl21
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPdNl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 764

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (271)
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
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp1 * _tmp7;
  const Scalar _tmp9 = _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp8 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_d(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = _tmp0 * _tmp7;
  const Scalar _tmp24 = _tmp1 * _tmp4;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp26 = _tmp22 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = -_tmp27 + p_d(2, 0) - position_vector(2, 0);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999);
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp31 = _tmp23 - _tmp24;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = -_tmp30 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 = -_tmp35 + p_d(1, 0);
  const Scalar _tmp37 = std::pow(_tmp18, Scalar(2)) + std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 =
      std::pow(Scalar(std::pow(_tmp28, Scalar(2)) + _tmp37), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = std::sqrt(_tmp37);
  const Scalar _tmp40 = Scalar(1.0) / (fh1);
  const Scalar _tmp41 =
      Scalar(1.0) *
      std::cosh(Scalar(0.71007031138673404) * _tmp40 *
                (-_tmp39 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp40 * fv1))) /
      _tmp39;
  const Scalar _tmp42 = _tmp11 + _tmp14;
  const Scalar _tmp43 = _tmp42 + _tmp6;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 - p_c(0, 0);
  const Scalar _tmp46 = _tmp30 + _tmp32;
  const Scalar _tmp47 = _tmp29 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_c(1, 0);
  const Scalar _tmp50 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp49, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp51 = _tmp45 * _tmp50;
  const Scalar _tmp52 = -_tmp6;
  const Scalar _tmp53 = _tmp42 + _tmp52;
  const Scalar _tmp54 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 - p_b(0, 0);
  const Scalar _tmp56 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp57 = -_tmp29;
  const Scalar _tmp58 = _tmp46 + _tmp57;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_b(1, 0);
  const Scalar _tmp61 = _tmp56 * _tmp60;
  const Scalar _tmp62 = _tmp49 * _tmp50;
  const Scalar _tmp63 = Scalar(1.0) / (_tmp51 * _tmp61 - _tmp62);
  const Scalar _tmp64 =
      std::sqrt(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp56 * _tmp64;
  const Scalar _tmp67 = _tmp66 * (_tmp53 * _tmp60 * _tmp65 - _tmp55 * _tmp58 * _tmp65);
  const Scalar _tmp68 = -_tmp43 * _tmp62 + _tmp47 * _tmp51 + _tmp51 * _tmp67;
  const Scalar _tmp69 = Scalar(1.0) * _tmp63;
  const Scalar _tmp70 = _tmp19 + _tmp26;
  const Scalar _tmp71 = _tmp22 - _tmp25;
  const Scalar _tmp72 = _tmp19 + _tmp71;
  const Scalar _tmp73 = _tmp51 * _tmp72;
  const Scalar _tmp74 = -_tmp51 * _tmp70 + _tmp73;
  const Scalar _tmp75 = -_tmp61 * _tmp73 + _tmp62 * _tmp70;
  const Scalar _tmp76 = Scalar(1.0) * _tmp53;
  const Scalar _tmp77 = -_tmp43 + _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp58;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp47 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp80;
  const Scalar _tmp82 = _tmp63 * _tmp75 * _tmp77 * _tmp81 - _tmp69 * _tmp74;
  const Scalar _tmp83 = _tmp20 + _tmp71;
  const Scalar _tmp84 = _tmp15 + _tmp52;
  const Scalar _tmp85 = _tmp84 + position_vector(0, 0);
  const Scalar _tmp86 = _tmp85 - p_a(0, 0);
  const Scalar _tmp87 = _tmp33 + _tmp57;
  const Scalar _tmp88 = _tmp87 + position_vector(1, 0);
  const Scalar _tmp89 = _tmp88 - p_a(1, 0);
  const Scalar _tmp90 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp89, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp91 = _tmp86 * _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp90;
  const Scalar _tmp93 = _tmp61 * _tmp91 - _tmp92;
  const Scalar _tmp94 = _tmp63 * _tmp93;
  const Scalar _tmp95 = _tmp72 * _tmp91;
  const Scalar _tmp96 = -_tmp61 * _tmp95 - _tmp75 * _tmp94 + _tmp83 * _tmp92;
  const Scalar _tmp97 = _tmp77 * _tmp80;
  const Scalar _tmp98 = -_tmp74 * _tmp94 - _tmp83 * _tmp91 + _tmp95 - _tmp96 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = _tmp67 * _tmp91 - _tmp68 * _tmp94 - _tmp84 * _tmp92 + _tmp87 * _tmp91;
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp98;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp82 - _tmp68 * _tmp69);
  const Scalar _tmp105 = _tmp104 + _tmp82;
  const Scalar _tmp106 = _tmp93 * _tmp99;
  const Scalar _tmp107 = _tmp63 * (-_tmp105 * _tmp106 + Scalar(1.0));
  const Scalar _tmp108 = _tmp105 * _tmp99;
  const Scalar _tmp109 = _tmp107 * _tmp51 + _tmp108 * _tmp91;
  const Scalar _tmp110 = _tmp35 - p_d(1, 0);
  const Scalar _tmp111 = _tmp17 - p_d(0, 0);
  const Scalar _tmp112 = std::pow(_tmp111, Scalar(2));
  const Scalar _tmp113 = std::pow(_tmp110, Scalar(2));
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = std::pow(_tmp114, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp116 = _tmp110 * _tmp111 * _tmp115;
  const Scalar _tmp117 = _tmp66 * fh1;
  const Scalar _tmp118 = _tmp61 * _tmp63;
  const Scalar _tmp119 = _tmp118 * _tmp75 + _tmp61 * _tmp72;
  const Scalar _tmp120 = _tmp118 * _tmp74 - _tmp119 * _tmp97 - _tmp72;
  const Scalar _tmp121 = _tmp103 * (-_tmp101 * _tmp120 + _tmp118 * _tmp68 - _tmp67);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = _tmp122 * _tmp99;
  const Scalar _tmp124 = _tmp63 * (-_tmp106 * _tmp122 - _tmp61);
  const Scalar _tmp125 = _tmp123 * _tmp91 + _tmp124 * _tmp51 + Scalar(1.0);
  const Scalar _tmp126 = std::pow(_tmp114, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp127 = _tmp126 * fh1;
  const Scalar _tmp128 = _tmp127 * _tmp66;
  const Scalar _tmp129 = _tmp125 * _tmp128;
  const Scalar _tmp130 = _tmp112 * _tmp115;
  const Scalar _tmp131 = _tmp117 * _tmp125;
  const Scalar _tmp132 = _tmp126 * _tmp34;
  const Scalar _tmp133 = _tmp116 * _tmp16 - _tmp130 * _tmp34 + _tmp132;
  const Scalar _tmp134 = Scalar(1.0) * _tmp102;
  const Scalar _tmp135 = _tmp51 * _tmp94;
  const Scalar _tmp136 = _tmp117 * (-_tmp134 * _tmp135 + _tmp134 * _tmp91);
  const Scalar _tmp137 =
      -_tmp109 * _tmp116 * _tmp117 + _tmp129 - _tmp130 * _tmp131 - _tmp133 * _tmp136;
  const Scalar _tmp138 = _tmp109 * _tmp128;
  const Scalar _tmp139 = _tmp126 * _tmp16;
  const Scalar _tmp140 = _tmp110 * _tmp139 - _tmp111 * _tmp132;
  const Scalar _tmp141 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp142 = _tmp76 + _tmp78 * _tmp97;
  const Scalar _tmp143 = 0;
  const Scalar _tmp144 = -_tmp110 * _tmp138 - _tmp111 * _tmp129 - _tmp136 * _tmp140 -
                         _tmp141 * _tmp66 * (-_tmp135 * _tmp143 + _tmp143 * _tmp91);
  const Scalar _tmp145 = std::pow(_tmp144, Scalar(-2));
  const Scalar _tmp146 = _tmp27 * fh1;
  const Scalar _tmp147 = _tmp126 * _tmp146;
  const Scalar _tmp148 = Scalar(40.024799999999999) * _tmp10 + _tmp111 * _tmp147 + _tmp16 * fv1;
  const Scalar _tmp149 = _tmp79 + _tmp87;
  const Scalar _tmp150 = _tmp149 * _tmp97;
  const Scalar _tmp151 = Scalar(1.0) / (-_tmp150 + _tmp76 - _tmp84);
  const Scalar _tmp152 = Scalar(1.0) * _tmp151;
  const Scalar _tmp153 = _tmp149 * _tmp80;
  const Scalar _tmp154 = _tmp152 * _tmp153;
  const Scalar _tmp155 = -Scalar(1.0) * _tmp152 + Scalar(1.0) * _tmp154;
  const Scalar _tmp156 = _tmp142 * _tmp151;
  const Scalar _tmp157 = -_tmp143 * _tmp96 - _tmp149 * _tmp156 + _tmp79;
  const Scalar _tmp158 = _tmp103 * _tmp152;
  const Scalar _tmp159 = -_tmp134 * _tmp96 + _tmp149 * _tmp158;
  const Scalar _tmp160 = Scalar(1.0) * fh1;
  const Scalar _tmp161 = _tmp160 * (_tmp158 - _tmp159 * _tmp81);
  const Scalar _tmp162 = _tmp149 * _tmp151;
  const Scalar _tmp163 = _tmp96 * _tmp99;
  const Scalar _tmp164 = _tmp119 + _tmp121 * _tmp162 - _tmp122 * _tmp163;
  const Scalar _tmp165 = _tmp121 * _tmp152 - _tmp164 * _tmp81;
  const Scalar _tmp166 = _tmp126 * _tmp160;
  const Scalar _tmp167 = _tmp165 * _tmp166;
  const Scalar _tmp168 = _tmp104 * _tmp162 - _tmp105 * _tmp163 - _tmp69 * _tmp75;
  const Scalar _tmp169 = _tmp104 * _tmp152 - _tmp168 * _tmp81;
  const Scalar _tmp170 = _tmp166 * _tmp169;
  const Scalar _tmp171 = -_tmp110 * _tmp147 - Scalar(40.024799999999999) * _tmp31 - _tmp34 * fv1;
  const Scalar _tmp172 = _tmp152 * _tmp97;
  const Scalar _tmp173 = _tmp80 * (_tmp150 * _tmp152 + Scalar(1.0));
  const Scalar _tmp174 = Scalar(1.0) * _tmp172 - Scalar(1.0) * _tmp173;
  const Scalar _tmp175 =
      _tmp110 * _tmp170 + _tmp111 * _tmp167 + _tmp140 * _tmp161 +
      Scalar(1.0) * _tmp141 * (-_tmp142 * _tmp152 - _tmp157 * _tmp81 + Scalar(1.0)) +
      _tmp148 * _tmp155 + _tmp171 * _tmp174;
  const Scalar _tmp176 = _tmp145 * _tmp175;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp178 = _tmp116 * _tmp146;
  const Scalar _tmp179 = _tmp160 * _tmp169;
  const Scalar _tmp180 = _tmp160 * _tmp165;
  const Scalar _tmp181 = _tmp130 * _tmp146 - _tmp147;
  const Scalar _tmp182 =
      std::pow(Scalar(_tmp145 * std::pow(_tmp175, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp183 =
      _tmp182 *
      (-_tmp137 * _tmp176 + _tmp177 * (_tmp116 * _tmp179 + _tmp130 * _tmp180 + _tmp133 * _tmp161 +
                                       _tmp155 * _tmp181 - _tmp167 - _tmp174 * _tmp178));
  const Scalar _tmp184 = std::asinh(_tmp175 * _tmp177);
  const Scalar _tmp185 = Scalar(1.0) * _tmp184;
  const Scalar _tmp186 = Scalar(1.0) * std::cosh(_tmp185);
  const Scalar _tmp187 = Scalar(1.4083112389913199) * _tmp144;
  const Scalar _tmp188 = Scalar(1.4083112389913199) * _tmp137;
  const Scalar _tmp189 = Scalar(0.71007031138673404) * _tmp177;
  const Scalar _tmp190 =
      -_tmp184 * _tmp187 - std::sqrt(Scalar(std::pow(Scalar(-_tmp54 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp59 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp191 = Scalar(0.71007031138673404) * _tmp145 * _tmp190;
  const Scalar _tmp192 = _tmp189 * _tmp190;
  const Scalar _tmp193 = std::cosh(_tmp192);
  const Scalar _tmp194 = -std::sinh(_tmp185) - std::sinh(_tmp192);
  const Scalar _tmp195 = _tmp134 * fh1;
  const Scalar _tmp196 = _tmp133 * _tmp195;
  const Scalar _tmp197 = _tmp130 * fh1;
  const Scalar _tmp198 = _tmp116 * fh1;
  const Scalar _tmp199 = _tmp124 * _tmp127;
  const Scalar _tmp200 = _tmp107 * _tmp198 + _tmp124 * _tmp197 - _tmp196 * _tmp94 - _tmp199;
  const Scalar _tmp201 = _tmp107 * _tmp127;
  const Scalar _tmp202 = _tmp141 * _tmp143;
  const Scalar _tmp203 = _tmp140 * _tmp195;
  const Scalar _tmp204 =
      _tmp110 * _tmp201 + _tmp111 * _tmp199 - _tmp202 * _tmp94 - _tmp203 * _tmp94;
  const Scalar _tmp205 = _tmp80 * fh1;
  const Scalar _tmp206 = _tmp126 * _tmp205;
  const Scalar _tmp207 = _tmp168 * _tmp206;
  const Scalar _tmp208 = _tmp148 * _tmp152;
  const Scalar _tmp209 = _tmp164 * _tmp206;
  const Scalar _tmp210 = _tmp159 * _tmp205;
  const Scalar _tmp211 = _tmp110 * _tmp207 + _tmp111 * _tmp209 + _tmp140 * _tmp210 +
                         _tmp141 * _tmp157 * _tmp80 - _tmp153 * _tmp208 + _tmp171 * _tmp173;
  const Scalar _tmp212 = Scalar(1.0) / (_tmp204);
  const Scalar _tmp213 = std::asinh(_tmp211 * _tmp212);
  const Scalar _tmp214 = Scalar(1.4083112389913199) * _tmp213;
  const Scalar _tmp215 =
      -_tmp204 * _tmp214 - std::sqrt(Scalar(std::pow(Scalar(-_tmp44 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp48 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp216 = Scalar(0.71007031138673404) * _tmp212;
  const Scalar _tmp217 = _tmp215 * _tmp216;
  const Scalar _tmp218 = Scalar(1.0) * _tmp213;
  const Scalar _tmp219 = -Scalar(1.4083112389913199) * std::sinh(_tmp217) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp218);
  const Scalar _tmp220 = std::cosh(_tmp217);
  const Scalar _tmp221 = std::pow(_tmp204, Scalar(-2));
  const Scalar _tmp222 = Scalar(0.71007031138673404) * _tmp215 * _tmp221;
  const Scalar _tmp223 = Scalar(1.4083112389913199) * _tmp204;
  const Scalar _tmp224 = _tmp211 * _tmp221;
  const Scalar _tmp225 = _tmp168 * _tmp205;
  const Scalar _tmp226 = _tmp152 * _tmp181;
  const Scalar _tmp227 = _tmp164 * _tmp205;
  const Scalar _tmp228 =
      std::pow(Scalar(std::pow(_tmp211, Scalar(2)) * _tmp221 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp229 =
      _tmp228 *
      (-_tmp200 * _tmp224 + _tmp212 * (_tmp116 * _tmp225 + _tmp130 * _tmp227 + _tmp133 * _tmp210 -
                                       _tmp153 * _tmp226 - _tmp173 * _tmp178 - _tmp209));
  const Scalar _tmp230 = Scalar(1.0) * std::cosh(_tmp218);
  const Scalar _tmp231 = _tmp123 * _tmp127;
  const Scalar _tmp232 = _tmp108 * _tmp198 + _tmp123 * _tmp197 + _tmp196 - _tmp231;
  const Scalar _tmp233 = _tmp127 * _tmp151;
  const Scalar _tmp234 = _tmp121 * _tmp233;
  const Scalar _tmp235 = _tmp158 * fh1;
  const Scalar _tmp236 = _tmp104 * _tmp233;
  const Scalar _tmp237 = -_tmp110 * _tmp236 - _tmp111 * _tmp234 - _tmp140 * _tmp235 +
                         _tmp141 * _tmp156 - _tmp171 * _tmp172 + _tmp208;
  const Scalar _tmp238 = _tmp108 * _tmp127;
  const Scalar _tmp239 = _tmp110 * _tmp238 + _tmp111 * _tmp231 + _tmp202 + _tmp203;
  const Scalar _tmp240 = Scalar(1.0) / (_tmp239);
  const Scalar _tmp241 = std::asinh(_tmp237 * _tmp240);
  const Scalar _tmp242 = Scalar(1.0) * _tmp241;
  const Scalar _tmp243 = Scalar(1.4083112389913199) * _tmp239;
  const Scalar _tmp244 =
      -_tmp241 * _tmp243 - std::sqrt(Scalar(std::pow(Scalar(-_tmp85 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp88 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp245 = Scalar(0.71007031138673404) * _tmp240;
  const Scalar _tmp246 = _tmp244 * _tmp245;
  const Scalar _tmp247 = -Scalar(1.4083112389913199) * std::sinh(_tmp242) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp246);
  const Scalar _tmp248 = std::pow(_tmp239, Scalar(-2));
  const Scalar _tmp249 = Scalar(0.71007031138673404) * _tmp244 * _tmp248;
  const Scalar _tmp250 = _tmp104 * _tmp151;
  const Scalar _tmp251 = _tmp121 * _tmp151;
  const Scalar _tmp252 = _tmp237 * _tmp248;
  const Scalar _tmp253 =
      -_tmp232 * _tmp252 + _tmp240 * (-_tmp133 * _tmp235 + _tmp172 * _tmp178 - _tmp197 * _tmp251 -
                                      _tmp198 * _tmp250 + _tmp226 + _tmp234);
  const Scalar _tmp254 =
      std::pow(Scalar(std::pow(_tmp237, Scalar(2)) * _tmp248 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp255 = _tmp243 * _tmp254;
  const Scalar _tmp256 = Scalar(1.4083112389913199) * _tmp241;
  const Scalar _tmp257 = std::cosh(_tmp246);
  const Scalar _tmp258 = Scalar(1.0) * _tmp254 * std::cosh(_tmp242);
  const Scalar _tmp259 = _tmp113 * _tmp115;
  const Scalar _tmp260 = _tmp259 * fh1;
  const Scalar _tmp261 = -_tmp116 * _tmp34 - _tmp139 + _tmp16 * _tmp259;
  const Scalar _tmp262 =
      -_tmp109 * _tmp260 * _tmp66 - _tmp116 * _tmp131 - _tmp136 * _tmp261 + _tmp138;
  const Scalar _tmp263 = Scalar(1.4083112389913199) * _tmp262;
  const Scalar _tmp264 = -_tmp146 * _tmp259 + _tmp147;
  const Scalar _tmp265 =
      _tmp182 *
      (-_tmp176 * _tmp262 + _tmp177 * (_tmp116 * _tmp180 + _tmp155 * _tmp178 + _tmp161 * _tmp261 -
                                       _tmp170 + _tmp174 * _tmp264 + _tmp179 * _tmp259));
  const Scalar _tmp266 = _tmp195 * _tmp261;
  const Scalar _tmp267 = _tmp107 * _tmp260 + _tmp124 * _tmp198 - _tmp201 - _tmp266 * _tmp94;
  const Scalar _tmp268 =
      _tmp228 * (_tmp212 * (_tmp116 * _tmp227 - _tmp154 * _tmp178 + _tmp173 * _tmp264 - _tmp207 +
                            _tmp210 * _tmp261 + _tmp225 * _tmp259) -
                 _tmp224 * _tmp267);
  const Scalar _tmp269 = _tmp108 * _tmp260 + _tmp123 * _tmp198 - _tmp238 + _tmp266;
  const Scalar _tmp270 = _tmp240 * (_tmp152 * _tmp178 - _tmp172 * _tmp264 - _tmp198 * _tmp251 -
                                    _tmp235 * _tmp261 + _tmp236 - _tmp250 * _tmp260) -
                         _tmp252 * _tmp269;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = -_tmp18 * _tmp38 + _tmp18 * _tmp41;
  _res(1, 0) =
      _tmp187 *
          (-_tmp183 * _tmp186 -
           _tmp193 * (-_tmp137 * _tmp191 + _tmp189 * (-_tmp183 * _tmp187 - _tmp184 * _tmp188))) +
      _tmp188 * _tmp194;
  _res(2, 0) =
      _tmp200 * _tmp219 +
      _tmp223 *
          (-_tmp220 * (-_tmp200 * _tmp222 + _tmp216 * (-_tmp200 * _tmp214 - _tmp223 * _tmp229)) -
           _tmp229 * _tmp230);
  _res(3, 0) =
      _tmp232 * _tmp247 +
      _tmp243 *
          (-_tmp253 * _tmp258 -
           _tmp257 * (-_tmp232 * _tmp249 + _tmp245 * (-_tmp232 * _tmp256 - _tmp253 * _tmp255)));
  _res(0, 1) = -_tmp36 * _tmp38 + _tmp36 * _tmp41;
  _res(1, 1) =
      _tmp187 *
          (-_tmp186 * _tmp265 -
           _tmp193 * (_tmp189 * (-_tmp184 * _tmp263 - _tmp187 * _tmp265) - _tmp191 * _tmp262)) +
      _tmp194 * _tmp263;
  _res(2, 1) =
      _tmp219 * _tmp267 +
      _tmp223 *
          (-_tmp220 * (_tmp216 * (-_tmp214 * _tmp267 - _tmp223 * _tmp268) - _tmp222 * _tmp267) -
           _tmp230 * _tmp268);
  _res(3, 1) =
      _tmp243 *
          (-_tmp257 * (_tmp245 * (-_tmp255 * _tmp270 - _tmp256 * _tmp269) - _tmp249 * _tmp269) -
           _tmp258 * _tmp270) +
      _tmp247 * _tmp269;
  _res(0, 2) = -_tmp28 * _tmp38;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
