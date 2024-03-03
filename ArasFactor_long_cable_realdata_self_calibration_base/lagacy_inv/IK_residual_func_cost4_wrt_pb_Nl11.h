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
 * Symbolic function: IK_residual_func_cost4_wrt_pb_Nl11
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPbNl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 757

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (268)
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
  const Scalar _tmp13 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -_tmp18 + p_b(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp21 = _tmp2 * _tmp4;
  const Scalar _tmp22 = _tmp0 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999);
  const Scalar _tmp27 = _tmp24 - _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = -_tmp29 + p_b(1, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = Scalar(1.0) / (fh1);
  const Scalar _tmp33 =
      Scalar(1.0) *
      std::cosh(Scalar(0.71007031138673404) * _tmp32 *
                (-_tmp31 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp32 * fv1))) /
      _tmp31;
  const Scalar _tmp34 = _tmp12 - _tmp15;
  const Scalar _tmp35 = _tmp34 + _tmp8;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = _tmp36 - p_a(0, 0);
  const Scalar _tmp38 = -_tmp20;
  const Scalar _tmp39 = _tmp27 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 - p_a(1, 0);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp37 * _tmp42;
  const Scalar _tmp44 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp45 = -_tmp44;
  const Scalar _tmp46 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp47 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp48 = _tmp46 - _tmp47;
  const Scalar _tmp49 = _tmp45 + _tmp48;
  const Scalar _tmp50 = _tmp34 + _tmp7;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_d(0, 0);
  const Scalar _tmp53 = Scalar(1.0) / (_tmp52);
  const Scalar _tmp54 = _tmp24 + _tmp26;
  const Scalar _tmp55 = _tmp38 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 - p_d(1, 0);
  const Scalar _tmp58 = _tmp53 * _tmp57;
  const Scalar _tmp59 = _tmp41 * _tmp42;
  const Scalar _tmp60 = _tmp43 * _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp16 + _tmp7;
  const Scalar _tmp62 = _tmp61 + position_vector(0, 0);
  const Scalar _tmp63 = _tmp62 - p_c(0, 0);
  const Scalar _tmp64 = _tmp20 + _tmp54;
  const Scalar _tmp65 = _tmp64 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 - p_c(1, 0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp63 * _tmp67;
  const Scalar _tmp69 = _tmp66 * _tmp67;
  const Scalar _tmp70 = Scalar(1.0) / (_tmp58 * _tmp68 - _tmp69);
  const Scalar _tmp71 = _tmp46 + _tmp47;
  const Scalar _tmp72 = _tmp45 + _tmp71;
  const Scalar _tmp73 = _tmp68 * _tmp72;
  const Scalar _tmp74 = _tmp44 + _tmp71;
  const Scalar _tmp75 = _tmp70 * (-_tmp58 * _tmp73 + _tmp69 * _tmp74);
  const Scalar _tmp76 = _tmp43 * _tmp72;
  const Scalar _tmp77 = _tmp49 * _tmp59 - _tmp58 * _tmp76 - _tmp60 * _tmp75;
  const Scalar _tmp78 = Scalar(1.0) * _tmp55;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp64 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp50;
  const Scalar _tmp82 = _tmp80 * (-_tmp61 + _tmp81);
  const Scalar _tmp83 = _tmp70 * (-_tmp68 * _tmp74 + _tmp73);
  const Scalar _tmp84 = -_tmp43 * _tmp49 - _tmp60 * _tmp83 + _tmp76 - _tmp77 * _tmp82;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp58 * _tmp72 + _tmp58 * _tmp75;
  const Scalar _tmp87 = _tmp58 * _tmp83 - _tmp72 - _tmp82 * _tmp86;
  const Scalar _tmp88 =
      std::sqrt(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp57, Scalar(2))));
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp53 * _tmp88;
  const Scalar _tmp91 = _tmp90 * (_tmp50 * _tmp57 * _tmp89 - _tmp52 * _tmp55 * _tmp89);
  const Scalar _tmp92 = _tmp70 * (-_tmp61 * _tmp69 + _tmp64 * _tmp68 + _tmp68 * _tmp91);
  const Scalar _tmp93 = -_tmp35 * _tmp59 + _tmp39 * _tmp43 + _tmp43 * _tmp91 - _tmp60 * _tmp92;
  const Scalar _tmp94 = _tmp85 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp96 = _tmp84 * _tmp95;
  const Scalar _tmp97 = _tmp96 * (_tmp58 * _tmp92 - _tmp87 * _tmp94 - _tmp91);
  const Scalar _tmp98 = _tmp87 + _tmp97;
  const Scalar _tmp99 = _tmp85 * _tmp98;
  const Scalar _tmp100 = _tmp60 * _tmp85;
  const Scalar _tmp101 = -_tmp100 * _tmp98 - _tmp58;
  const Scalar _tmp102 = _tmp68 * _tmp70;
  const Scalar _tmp103 = _tmp101 * _tmp102 + _tmp43 * _tmp99 + Scalar(1.0);
  const Scalar _tmp104 = _tmp18 - p_b(0, 0);
  const Scalar _tmp105 = std::pow(_tmp104, Scalar(2));
  const Scalar _tmp106 = _tmp29 - p_b(1, 0);
  const Scalar _tmp107 = std::pow(_tmp106, Scalar(2));
  const Scalar _tmp108 = _tmp105 + _tmp107;
  const Scalar _tmp109 = std::pow(_tmp108, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp110 = _tmp105 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = _tmp104 * _tmp106 * _tmp109;
  const Scalar _tmp113 = std::pow(_tmp108, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp114 = _tmp113 * _tmp28;
  const Scalar _tmp115 = -_tmp110 * _tmp28 + _tmp112 * _tmp17 + _tmp114;
  const Scalar _tmp116 = Scalar(1.0) * _tmp95;
  const Scalar _tmp117 = _tmp90 * fh1;
  const Scalar _tmp118 = _tmp117 * (-_tmp102 * _tmp116 * _tmp60 + _tmp116 * _tmp43);
  const Scalar _tmp119 = _tmp113 * fh1;
  const Scalar _tmp120 = _tmp119 * _tmp90;
  const Scalar _tmp121 = _tmp103 * _tmp120;
  const Scalar _tmp122 = Scalar(1.0) * _tmp75;
  const Scalar _tmp123 = _tmp122 * _tmp82 - Scalar(1.0) * _tmp83;
  const Scalar _tmp124 = _tmp96 * (-_tmp123 * _tmp94 - Scalar(1.0) * _tmp92);
  const Scalar _tmp125 = _tmp123 + _tmp124;
  const Scalar _tmp126 = -_tmp100 * _tmp125 + Scalar(1.0);
  const Scalar _tmp127 = _tmp125 * _tmp85;
  const Scalar _tmp128 = _tmp102 * _tmp126 + _tmp127 * _tmp43;
  const Scalar _tmp129 = _tmp117 * _tmp128;
  const Scalar _tmp130 =
      -_tmp103 * _tmp111 * _tmp90 - _tmp112 * _tmp129 - _tmp115 * _tmp118 + _tmp121;
  const Scalar _tmp131 = _tmp120 * _tmp128;
  const Scalar _tmp132 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp133 = _tmp78 * _tmp82 + _tmp81;
  const Scalar _tmp134 = 0;
  const Scalar _tmp135 = _tmp100 * _tmp134;
  const Scalar _tmp136 = _tmp134 * _tmp85;
  const Scalar _tmp137 = _tmp113 * _tmp17;
  const Scalar _tmp138 = -_tmp104 * _tmp114 + _tmp106 * _tmp137;
  const Scalar _tmp139 = -_tmp104 * _tmp121 - _tmp106 * _tmp131 - _tmp118 * _tmp138 -
                         _tmp132 * _tmp90 * (-_tmp102 * _tmp135 + _tmp136 * _tmp43);
  const Scalar _tmp140 = fh1 * (_tmp44 + _tmp48);
  const Scalar _tmp141 = _tmp113 * _tmp140;
  const Scalar _tmp142 = _tmp104 * _tmp141 + Scalar(40.024799999999999) * _tmp11 + _tmp17 * fv1;
  const Scalar _tmp143 = _tmp39 + _tmp79;
  const Scalar _tmp144 = _tmp143 * _tmp82;
  const Scalar _tmp145 = Scalar(1.0) / (-_tmp144 - _tmp35 + _tmp81);
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp143 * _tmp80;
  const Scalar _tmp148 = _tmp146 * _tmp147;
  const Scalar _tmp149 = -Scalar(1.0) * _tmp146 + Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp143 * _tmp145;
  const Scalar _tmp151 = _tmp77 * _tmp85;
  const Scalar _tmp152 = _tmp150 * _tmp97 - _tmp151 * _tmp98 + _tmp86;
  const Scalar _tmp153 = Scalar(1.0) * _tmp80;
  const Scalar _tmp154 = _tmp146 * _tmp97 - _tmp152 * _tmp153;
  const Scalar _tmp155 = Scalar(1.0) * fh1;
  const Scalar _tmp156 = _tmp113 * _tmp155;
  const Scalar _tmp157 = _tmp154 * _tmp156;
  const Scalar _tmp158 = _tmp133 * _tmp145;
  const Scalar _tmp159 = -_tmp134 * _tmp151 - _tmp143 * _tmp158 + _tmp79;
  const Scalar _tmp160 = -_tmp122 + _tmp124 * _tmp150 - _tmp125 * _tmp151;
  const Scalar _tmp161 = _tmp124 * _tmp146 - _tmp153 * _tmp160;
  const Scalar _tmp162 = _tmp156 * _tmp161;
  const Scalar _tmp163 = -_tmp106 * _tmp141 - Scalar(40.024799999999999) * _tmp23 - _tmp28 * fv1;
  const Scalar _tmp164 = _tmp146 * _tmp82;
  const Scalar _tmp165 = _tmp80 * (_tmp144 * _tmp146 + Scalar(1.0));
  const Scalar _tmp166 = Scalar(1.0) * _tmp164 - Scalar(1.0) * _tmp165;
  const Scalar _tmp167 = _tmp146 * _tmp96;
  const Scalar _tmp168 = -_tmp116 * _tmp77 + _tmp143 * _tmp167;
  const Scalar _tmp169 = _tmp155 * (-_tmp153 * _tmp168 + _tmp167);
  const Scalar _tmp170 =
      _tmp104 * _tmp157 + _tmp106 * _tmp162 +
      Scalar(1.0) * _tmp132 * (-_tmp133 * _tmp146 - _tmp153 * _tmp159 + Scalar(1.0)) +
      _tmp138 * _tmp169 + _tmp142 * _tmp149 + _tmp163 * _tmp166;
  const Scalar _tmp171 = Scalar(1.0) / (_tmp139);
  const Scalar _tmp172 = std::asinh(_tmp170 * _tmp171);
  const Scalar _tmp173 = Scalar(1.4083112389913199) * _tmp172;
  const Scalar _tmp174 =
      -_tmp139 * _tmp173 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp56 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp175 = Scalar(0.71007031138673404) * _tmp171;
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = Scalar(1.0) * _tmp172;
  const Scalar _tmp178 = -Scalar(1.4083112389913199) * std::sinh(_tmp176) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp177);
  const Scalar _tmp179 = Scalar(1.0) * std::cosh(_tmp177);
  const Scalar _tmp180 = std::pow(_tmp139, Scalar(-2));
  const Scalar _tmp181 =
      std::pow(Scalar(std::pow(_tmp170, Scalar(2)) * _tmp180 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp182 = _tmp170 * _tmp180;
  const Scalar _tmp183 = _tmp112 * _tmp140;
  const Scalar _tmp184 = _tmp155 * _tmp161;
  const Scalar _tmp185 = _tmp154 * _tmp155;
  const Scalar _tmp186 = _tmp110 * _tmp140 - _tmp141;
  const Scalar _tmp187 =
      _tmp181 *
      (-_tmp130 * _tmp182 + _tmp171 * (_tmp110 * _tmp185 + _tmp112 * _tmp184 + _tmp115 * _tmp169 +
                                       _tmp149 * _tmp186 - _tmp157 - _tmp166 * _tmp183));
  const Scalar _tmp188 = std::cosh(_tmp176);
  const Scalar _tmp189 = Scalar(0.71007031138673404) * _tmp174 * _tmp180;
  const Scalar _tmp190 = Scalar(1.4083112389913199) * _tmp139;
  const Scalar _tmp191 = _tmp116 * fh1;
  const Scalar _tmp192 = _tmp115 * _tmp191;
  const Scalar _tmp193 = _tmp60 * _tmp70;
  const Scalar _tmp194 = _tmp101 * _tmp70;
  const Scalar _tmp195 = _tmp126 * _tmp70;
  const Scalar _tmp196 = _tmp112 * fh1;
  const Scalar _tmp197 = _tmp119 * _tmp70;
  const Scalar _tmp198 = _tmp101 * _tmp197;
  const Scalar _tmp199 = _tmp111 * _tmp194 - _tmp192 * _tmp193 + _tmp195 * _tmp196 - _tmp198;
  const Scalar _tmp200 = _tmp138 * _tmp191;
  const Scalar _tmp201 = _tmp126 * _tmp197;
  const Scalar _tmp202 =
      _tmp104 * _tmp198 + _tmp106 * _tmp201 - _tmp132 * _tmp135 * _tmp70 - _tmp193 * _tmp200;
  const Scalar _tmp203 = _tmp142 * _tmp146;
  const Scalar _tmp204 = _tmp80 * fh1;
  const Scalar _tmp205 = _tmp168 * _tmp204;
  const Scalar _tmp206 = _tmp119 * _tmp80;
  const Scalar _tmp207 = _tmp160 * _tmp206;
  const Scalar _tmp208 = _tmp152 * _tmp206;
  const Scalar _tmp209 = _tmp104 * _tmp208 + _tmp106 * _tmp207 + _tmp132 * _tmp159 * _tmp80 +
                         _tmp138 * _tmp205 - _tmp147 * _tmp203 + _tmp163 * _tmp165;
  const Scalar _tmp210 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp211 = std::asinh(_tmp209 * _tmp210);
  const Scalar _tmp212 = Scalar(1.4083112389913199) * _tmp211;
  const Scalar _tmp213 =
      -_tmp202 * _tmp212 - std::sqrt(Scalar(std::pow(Scalar(-_tmp62 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp65 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp214 = Scalar(0.71007031138673404) * _tmp210;
  const Scalar _tmp215 = _tmp213 * _tmp214;
  const Scalar _tmp216 = Scalar(1.0) * _tmp211;
  const Scalar _tmp217 = -Scalar(1.4083112389913199) * std::sinh(_tmp215) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp216);
  const Scalar _tmp218 = std::cosh(_tmp215);
  const Scalar _tmp219 = Scalar(1.4083112389913199) * _tmp202;
  const Scalar _tmp220 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp221 =
      std::pow(Scalar(std::pow(_tmp209, Scalar(2)) * _tmp220 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp222 = _tmp209 * _tmp220;
  const Scalar _tmp223 = _tmp160 * _tmp204;
  const Scalar _tmp224 = _tmp146 * _tmp186;
  const Scalar _tmp225 = _tmp152 * _tmp204;
  const Scalar _tmp226 =
      _tmp221 *
      (-_tmp199 * _tmp222 + _tmp210 * (_tmp110 * _tmp225 + _tmp112 * _tmp223 + _tmp115 * _tmp205 -
                                       _tmp147 * _tmp224 - _tmp165 * _tmp183 - _tmp208));
  const Scalar _tmp227 = Scalar(0.71007031138673404) * _tmp213 * _tmp220;
  const Scalar _tmp228 = Scalar(1.0) * std::cosh(_tmp216);
  const Scalar _tmp229 = _tmp119 * _tmp145;
  const Scalar _tmp230 = _tmp124 * _tmp229;
  const Scalar _tmp231 = _tmp229 * _tmp97;
  const Scalar _tmp232 = _tmp167 * fh1;
  const Scalar _tmp233 = -_tmp104 * _tmp231 - _tmp106 * _tmp230 + _tmp132 * _tmp158 -
                         _tmp138 * _tmp232 - _tmp163 * _tmp164 + _tmp203;
  const Scalar _tmp234 = _tmp119 * _tmp127;
  const Scalar _tmp235 = _tmp119 * _tmp99;
  const Scalar _tmp236 = _tmp104 * _tmp235 + _tmp106 * _tmp234 + _tmp132 * _tmp136 + _tmp200;
  const Scalar _tmp237 = Scalar(1.0) / (_tmp236);
  const Scalar _tmp238 = std::asinh(_tmp233 * _tmp237);
  const Scalar _tmp239 = Scalar(1.4083112389913199) * _tmp236;
  const Scalar _tmp240 =
      -_tmp238 * _tmp239 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp40 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp241 = Scalar(0.71007031138673404) * _tmp237;
  const Scalar _tmp242 = _tmp240 * _tmp241;
  const Scalar _tmp243 = Scalar(1.0) * _tmp238;
  const Scalar _tmp244 = -std::sinh(_tmp242) - std::sinh(_tmp243);
  const Scalar _tmp245 = _tmp111 * _tmp99 + _tmp127 * _tmp196 + _tmp192 - _tmp235;
  const Scalar _tmp246 = Scalar(1.4083112389913199) * _tmp245;
  const Scalar _tmp247 = std::pow(_tmp236, Scalar(-2));
  const Scalar _tmp248 =
      std::pow(Scalar(std::pow(_tmp233, Scalar(2)) * _tmp247 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp249 = _tmp233 * _tmp247;
  const Scalar _tmp250 = _tmp124 * _tmp145;
  const Scalar _tmp251 = _tmp145 * _tmp97;
  const Scalar _tmp252 =
      _tmp248 * (_tmp237 * (-_tmp111 * _tmp251 - _tmp115 * _tmp232 + _tmp164 * _tmp183 -
                            _tmp196 * _tmp250 + _tmp224 + _tmp231) -
                 _tmp245 * _tmp249);
  const Scalar _tmp253 = Scalar(1.0) * std::cosh(_tmp243);
  const Scalar _tmp254 = std::cosh(_tmp242);
  const Scalar _tmp255 = Scalar(0.71007031138673404) * _tmp240 * _tmp247;
  const Scalar _tmp256 = _tmp107 * _tmp109;
  const Scalar _tmp257 = -_tmp112 * _tmp28 - _tmp137 + _tmp17 * _tmp256;
  const Scalar _tmp258 =
      -_tmp103 * _tmp112 * _tmp117 - _tmp118 * _tmp257 - _tmp129 * _tmp256 + _tmp131;
  const Scalar _tmp259 = -_tmp140 * _tmp256 + _tmp141;
  const Scalar _tmp260 =
      _tmp181 * (_tmp171 * (_tmp112 * _tmp185 + _tmp149 * _tmp183 - _tmp162 + _tmp166 * _tmp259 +
                            _tmp169 * _tmp257 + _tmp184 * _tmp256) -
                 _tmp182 * _tmp258);
  const Scalar _tmp261 = _tmp191 * _tmp257;
  const Scalar _tmp262 = _tmp256 * fh1;
  const Scalar _tmp263 = -_tmp193 * _tmp261 + _tmp194 * _tmp196 + _tmp195 * _tmp262 - _tmp201;
  const Scalar _tmp264 =
      _tmp221 * (_tmp210 * (_tmp112 * _tmp225 - _tmp148 * _tmp183 + _tmp165 * _tmp259 +
                            _tmp205 * _tmp257 - _tmp207 + _tmp223 * _tmp256) -
                 _tmp222 * _tmp263);
  const Scalar _tmp265 = _tmp127 * _tmp262 + _tmp196 * _tmp99 - _tmp234 + _tmp261;
  const Scalar _tmp266 = Scalar(1.4083112389913199) * _tmp265;
  const Scalar _tmp267 =
      _tmp248 * (_tmp237 * (_tmp146 * _tmp183 - _tmp164 * _tmp259 - _tmp196 * _tmp251 + _tmp230 -
                            _tmp232 * _tmp257 - _tmp250 * _tmp262) -
                 _tmp249 * _tmp265);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = _tmp19 * _tmp33;
  _res(1, 0) =
      _tmp130 * _tmp178 +
      _tmp190 *
          (-_tmp179 * _tmp187 -
           _tmp188 * (-_tmp130 * _tmp189 + _tmp175 * (-_tmp130 * _tmp173 - _tmp187 * _tmp190)));
  _res(2, 0) =
      _tmp199 * _tmp217 +
      _tmp219 *
          (-_tmp218 * (-_tmp199 * _tmp227 + _tmp214 * (-_tmp199 * _tmp212 - _tmp219 * _tmp226)) -
           _tmp226 * _tmp228);
  _res(3, 0) =
      _tmp239 *
          (-_tmp252 * _tmp253 -
           _tmp254 * (_tmp241 * (-_tmp238 * _tmp246 - _tmp239 * _tmp252) - _tmp245 * _tmp255)) +
      _tmp244 * _tmp246;
  _res(0, 1) = _tmp30 * _tmp33;
  _res(1, 1) =
      _tmp178 * _tmp258 + _tmp190 * (-_tmp179 * _tmp260 -
                                     _tmp188 * (_tmp175 * (-_tmp173 * _tmp258 - _tmp190 * _tmp260) -
                                                _tmp189 * _tmp258));
  _res(2, 1) =
      _tmp217 * _tmp263 +
      _tmp219 *
          (-_tmp218 * (_tmp214 * (-_tmp212 * _tmp263 - _tmp219 * _tmp264) - _tmp227 * _tmp263) -
           _tmp228 * _tmp264);
  _res(3, 1) =
      _tmp239 *
          (-_tmp253 * _tmp267 -
           _tmp254 * (_tmp241 * (-_tmp238 * _tmp266 - _tmp239 * _tmp267) - _tmp255 * _tmp265)) +
      _tmp244 * _tmp266;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym