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
 * Symbolic function: IK_residual_func_cost4_wrt_pd_Nl22
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPdNl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 749

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (262)
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
  const Scalar _tmp8 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = _tmp11 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -_tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -_tmp17 + p_d(0, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp2 * _tmp4;
  const Scalar _tmp22 = _tmp0 * _tmp5;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp27 = _tmp24 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = -_tmp29 + p_d(1, 0);
  const Scalar _tmp31 =
      std::sqrt(Scalar(std::pow(_tmp18, Scalar(2)) + std::pow(_tmp30, Scalar(2))));
  const Scalar _tmp32 = Scalar(1.0) / (fh1);
  const Scalar _tmp33 =
      Scalar(1.0) *
      std::cosh(Scalar(0.71007031138673404) * _tmp32 *
                (-_tmp31 - Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp32 * fv1))) /
      _tmp31;
  const Scalar _tmp34 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp35 = -_tmp7;
  const Scalar _tmp36 = _tmp15 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp38 = _tmp37 - p_a(0, 0);
  const Scalar _tmp39 = _tmp24 - _tmp26;
  const Scalar _tmp40 = _tmp20 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_a(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp38 * _tmp43;
  const Scalar _tmp45 = _tmp42 * _tmp43;
  const Scalar _tmp46 = _tmp10 + _tmp14;
  const Scalar _tmp47 = _tmp46 + _tmp7;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_c(0, 0);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = _tmp19 + _tmp27;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 - p_c(1, 0);
  const Scalar _tmp54 = _tmp50 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp44 * _tmp54 - _tmp45);
  const Scalar _tmp56 = _tmp35 + _tmp46;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 - p_b(0, 0);
  const Scalar _tmp59 = _tmp19 + _tmp39;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 - p_b(1, 0);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp61 * _tmp62;
  const Scalar _tmp64 = _tmp58 * _tmp62;
  const Scalar _tmp65 = _tmp54 * _tmp64 - _tmp63;
  const Scalar _tmp66 = _tmp55 * _tmp65;
  const Scalar _tmp67 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp68 = -_tmp67;
  const Scalar _tmp69 =
      -Scalar(0.010999999999999999) * _tmp25 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp71 = _tmp69 + _tmp70;
  const Scalar _tmp72 = _tmp68 + _tmp71;
  const Scalar _tmp73 = _tmp69 - _tmp70;
  const Scalar _tmp74 = _tmp68 + _tmp73;
  const Scalar _tmp75 = _tmp67 + _tmp71;
  const Scalar _tmp76 = _tmp44 * _tmp75;
  const Scalar _tmp77 = -_tmp44 * _tmp74 + _tmp76;
  const Scalar _tmp78 = _tmp64 * _tmp75;
  const Scalar _tmp79 = _tmp45 * _tmp74 - _tmp54 * _tmp76;
  const Scalar _tmp80 = -_tmp54 * _tmp78 + _tmp63 * _tmp72 - _tmp66 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) * _tmp51;
  const Scalar _tmp82 = -_tmp81;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp40 + _tmp82);
  const Scalar _tmp84 = Scalar(1.0) * _tmp47;
  const Scalar _tmp85 = _tmp83 * (-_tmp36 + _tmp84);
  const Scalar _tmp86 = -_tmp64 * _tmp72 - _tmp66 * _tmp77 + _tmp78 - _tmp80 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp81 * _tmp85 + _tmp84;
  const Scalar _tmp89 = 0;
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp53, Scalar(2))));
  const Scalar _tmp91 = _tmp50 * _tmp90;
  const Scalar _tmp92 = _tmp29 - p_d(1, 0);
  const Scalar _tmp93 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp94 = _tmp91 * (_tmp47 * _tmp53 * _tmp93 - _tmp49 * _tmp51 * _tmp93);
  const Scalar _tmp95 = -_tmp36 * _tmp45 + _tmp40 * _tmp44 + _tmp44 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp55;
  const Scalar _tmp97 = _tmp79 * _tmp96;
  const Scalar _tmp98 = -_tmp77 * _tmp96 + _tmp85 * _tmp97;
  const Scalar _tmp99 = -_tmp56 * _tmp63 + _tmp59 * _tmp64 + _tmp64 * _tmp94 - _tmp66 * _tmp95;
  const Scalar _tmp100 = _tmp87 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp86;
  const Scalar _tmp103 = _tmp102 * (-_tmp100 * _tmp98 - _tmp95 * _tmp96);
  const Scalar _tmp104 = _tmp87 * (_tmp103 + _tmp98);
  const Scalar _tmp105 = _tmp55 * (-_tmp104 * _tmp65 + Scalar(1.0));
  const Scalar _tmp106 = _tmp104 * _tmp64 + _tmp105 * _tmp44;
  const Scalar _tmp107 = _tmp17 - p_d(0, 0);
  const Scalar _tmp108 = std::pow(_tmp107, Scalar(2));
  const Scalar _tmp109 = std::pow(_tmp92, Scalar(2));
  const Scalar _tmp110 = _tmp108 + _tmp109;
  const Scalar _tmp111 = std::pow(_tmp110, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp111 * fh1;
  const Scalar _tmp113 = _tmp112 * _tmp91;
  const Scalar _tmp114 = _tmp106 * _tmp113;
  const Scalar _tmp115 = _tmp111 * _tmp16;
  const Scalar _tmp116 = _tmp111 * _tmp28;
  const Scalar _tmp117 = fh1 * (-_tmp107 * _tmp116 + _tmp115 * _tmp92);
  const Scalar _tmp118 = _tmp101 * _tmp65 * _tmp96;
  const Scalar _tmp119 = Scalar(1.0) * _tmp101;
  const Scalar _tmp120 = _tmp91 * (-_tmp118 * _tmp44 + _tmp119 * _tmp64);
  const Scalar _tmp121 = _tmp54 * _tmp55;
  const Scalar _tmp122 = _tmp121 * _tmp79 + _tmp54 * _tmp75;
  const Scalar _tmp123 = _tmp121 * _tmp77 - _tmp122 * _tmp85 - _tmp75;
  const Scalar _tmp124 = _tmp102 * (-_tmp100 * _tmp123 + _tmp121 * _tmp95 - _tmp94);
  const Scalar _tmp125 = _tmp87 * (_tmp123 + _tmp124);
  const Scalar _tmp126 = _tmp55 * (-_tmp125 * _tmp65 - _tmp54);
  const Scalar _tmp127 = _tmp125 * _tmp64 + _tmp126 * _tmp44 + Scalar(1.0);
  const Scalar _tmp128 = _tmp113 * _tmp127;
  const Scalar _tmp129 = -_tmp107 * _tmp128 - _tmp114 * _tmp92 - _tmp117 * _tmp120 -
                         _tmp34 * _tmp91 * (-_tmp44 * _tmp66 * _tmp89 + _tmp64 * _tmp89);
  const Scalar _tmp130 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp131 = _tmp59 + _tmp82;
  const Scalar _tmp132 = _tmp131 * _tmp85;
  const Scalar _tmp133 = Scalar(1.0) / (-_tmp132 - _tmp56 + _tmp84);
  const Scalar _tmp134 = Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = _tmp131 * _tmp133;
  const Scalar _tmp136 = _tmp103 * _tmp135 - _tmp104 * _tmp80 - _tmp97;
  const Scalar _tmp137 = Scalar(1.0) * _tmp83;
  const Scalar _tmp138 = _tmp103 * _tmp134 - _tmp136 * _tmp137;
  const Scalar _tmp139 = Scalar(1.0) * _tmp112;
  const Scalar _tmp140 = _tmp138 * _tmp139;
  const Scalar _tmp141 = _tmp67 + _tmp73;
  const Scalar _tmp142 = _tmp112 * _tmp141;
  const Scalar _tmp143 = -_tmp142 * _tmp92 - Scalar(40.024799999999999) * _tmp23 - _tmp28 * fv1;
  const Scalar _tmp144 = _tmp132 * _tmp134 + Scalar(1.0);
  const Scalar _tmp145 = _tmp134 * _tmp85;
  const Scalar _tmp146 = -Scalar(1.0) * _tmp137 * _tmp144 + Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp122 + _tmp124 * _tmp135 - _tmp125 * _tmp80;
  const Scalar _tmp148 = _tmp124 * _tmp134 - _tmp137 * _tmp147;
  const Scalar _tmp149 = _tmp139 * _tmp148;
  const Scalar _tmp150 = _tmp102 * _tmp134;
  const Scalar _tmp151 = -_tmp119 * _tmp80 + _tmp131 * _tmp150;
  const Scalar _tmp152 = -Scalar(1.0) * _tmp137 * _tmp151 + Scalar(1.0) * _tmp150;
  const Scalar _tmp153 = _tmp133 * _tmp88;
  const Scalar _tmp154 = -_tmp131 * _tmp153 - _tmp80 * _tmp89 + _tmp82;
  const Scalar _tmp155 = _tmp107 * _tmp142 + Scalar(40.024799999999999) * _tmp13 + _tmp16 * fv1;
  const Scalar _tmp156 = _tmp131 * _tmp83;
  const Scalar _tmp157 = _tmp134 * _tmp156;
  const Scalar _tmp158 = -Scalar(1.0) * _tmp134 + Scalar(1.0) * _tmp157;
  const Scalar _tmp159 =
      _tmp107 * _tmp149 + _tmp117 * _tmp152 + _tmp140 * _tmp92 + _tmp143 * _tmp146 +
      _tmp155 * _tmp158 +
      Scalar(1.0) * _tmp34 * (-_tmp134 * _tmp88 - _tmp137 * _tmp154 + Scalar(1.0));
  const Scalar _tmp160 = std::asinh(_tmp130 * _tmp159);
  const Scalar _tmp161 = Scalar(1.4083112389913199) * _tmp129;
  const Scalar _tmp162 =
      -_tmp160 * _tmp161 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp52 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp163 = Scalar(0.71007031138673404) * _tmp130;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) * _tmp160;
  const Scalar _tmp166 = -std::sinh(_tmp164) - std::sinh(_tmp165);
  const Scalar _tmp167 = std::pow(_tmp110, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp168 = _tmp167 * _tmp28;
  const Scalar _tmp169 = _tmp107 * _tmp92;
  const Scalar _tmp170 = _tmp167 * _tmp169;
  const Scalar _tmp171 = fh1 * (-_tmp108 * _tmp168 + _tmp116 + _tmp16 * _tmp170);
  const Scalar _tmp172 = _tmp170 * fh1;
  const Scalar _tmp173 = _tmp106 * _tmp91;
  const Scalar _tmp174 = _tmp108 * _tmp167;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = _tmp127 * _tmp91;
  const Scalar _tmp177 = -_tmp120 * _tmp171 + _tmp128 - _tmp172 * _tmp173 - _tmp175 * _tmp176;
  const Scalar _tmp178 = Scalar(1.4083112389913199) * _tmp177;
  const Scalar _tmp179 = std::cosh(_tmp164);
  const Scalar _tmp180 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp181 = Scalar(0.71007031138673404) * _tmp162 * _tmp180;
  const Scalar _tmp182 =
      std::pow(Scalar(std::pow(_tmp159, Scalar(2)) * _tmp180 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp183 = Scalar(1.0) * _tmp148;
  const Scalar _tmp184 = Scalar(1.0) * _tmp138;
  const Scalar _tmp185 = _tmp141 * fh1;
  const Scalar _tmp186 = _tmp170 * _tmp185;
  const Scalar _tmp187 = -_tmp142 + _tmp174 * _tmp185;
  const Scalar _tmp188 = _tmp159 * _tmp180;
  const Scalar _tmp189 =
      _tmp182 * (_tmp130 * (-_tmp146 * _tmp186 - _tmp149 + _tmp152 * _tmp171 + _tmp158 * _tmp187 +
                            _tmp172 * _tmp184 + _tmp175 * _tmp183) -
                 _tmp177 * _tmp188);
  const Scalar _tmp190 = Scalar(1.0) * std::cosh(_tmp165);
  const Scalar _tmp191 = _tmp112 * _tmp83;
  const Scalar _tmp192 = _tmp136 * _tmp191;
  const Scalar _tmp193 = _tmp147 * _tmp191;
  const Scalar _tmp194 = _tmp144 * _tmp83;
  const Scalar _tmp195 = _tmp151 * _tmp83;
  const Scalar _tmp196 = _tmp134 * _tmp155;
  const Scalar _tmp197 = _tmp107 * _tmp193 + _tmp117 * _tmp195 + _tmp143 * _tmp194 +
                         _tmp154 * _tmp34 * _tmp83 - _tmp156 * _tmp196 + _tmp192 * _tmp92;
  const Scalar _tmp198 = _tmp112 * _tmp126;
  const Scalar _tmp199 = _tmp105 * _tmp112;
  const Scalar _tmp200 = _tmp34 * _tmp89;
  const Scalar _tmp201 =
      _tmp107 * _tmp198 - _tmp117 * _tmp118 + _tmp199 * _tmp92 - _tmp200 * _tmp66;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp203 = std::asinh(_tmp197 * _tmp202);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = Scalar(1.4083112389913199) * _tmp201;
  const Scalar _tmp206 =
      -_tmp203 * _tmp205 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp207 = Scalar(0.71007031138673404) * _tmp202;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = -std::sinh(_tmp204) - std::sinh(_tmp208);
  const Scalar _tmp210 = _tmp105 * _tmp172 - _tmp118 * _tmp171 + _tmp126 * _tmp175 - _tmp198;
  const Scalar _tmp211 = Scalar(1.4083112389913199) * _tmp210;
  const Scalar _tmp212 = std::cosh(_tmp208);
  const Scalar _tmp213 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp214 = _tmp197 * _tmp213;
  const Scalar _tmp215 = _tmp134 * _tmp187;
  const Scalar _tmp216 = _tmp147 * _tmp83;
  const Scalar _tmp217 = _tmp136 * _tmp83;
  const Scalar _tmp218 =
      std::pow(Scalar(std::pow(_tmp197, Scalar(2)) * _tmp213 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp219 =
      _tmp218 * (_tmp202 * (-_tmp156 * _tmp215 + _tmp171 * _tmp195 + _tmp172 * _tmp217 +
                            _tmp175 * _tmp216 - _tmp186 * _tmp194 - _tmp193) -
                 _tmp210 * _tmp214);
  const Scalar _tmp220 = Scalar(0.71007031138673404) * _tmp206 * _tmp213;
  const Scalar _tmp221 = Scalar(1.0) * std::cosh(_tmp204);
  const Scalar _tmp222 = _tmp104 * _tmp112;
  const Scalar _tmp223 = _tmp112 * _tmp125;
  const Scalar _tmp224 = _tmp107 * _tmp223 + _tmp117 * _tmp119 + _tmp200 + _tmp222 * _tmp92;
  const Scalar _tmp225 = Scalar(1.0) / (_tmp224);
  const Scalar _tmp226 = _tmp112 * _tmp133;
  const Scalar _tmp227 = _tmp103 * _tmp226;
  const Scalar _tmp228 = _tmp124 * _tmp226;
  const Scalar _tmp229 = -_tmp107 * _tmp228 - _tmp117 * _tmp150 - _tmp143 * _tmp145 +
                         _tmp153 * _tmp34 + _tmp196 - _tmp227 * _tmp92;
  const Scalar _tmp230 = std::asinh(_tmp225 * _tmp229);
  const Scalar _tmp231 = Scalar(1.0) * _tmp230;
  const Scalar _tmp232 = Scalar(1.4083112389913199) * _tmp224;
  const Scalar _tmp233 =
      -_tmp230 * _tmp232 - std::sqrt(Scalar(std::pow(Scalar(-_tmp57 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp60 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp234 = Scalar(0.71007031138673404) * _tmp225;
  const Scalar _tmp235 = _tmp233 * _tmp234;
  const Scalar _tmp236 = -std::sinh(_tmp231) - std::sinh(_tmp235);
  const Scalar _tmp237 = _tmp104 * _tmp172 + _tmp119 * _tmp171 + _tmp125 * _tmp175 - _tmp223;
  const Scalar _tmp238 = Scalar(1.4083112389913199) * _tmp237;
  const Scalar _tmp239 = std::pow(_tmp224, Scalar(-2));
  const Scalar _tmp240 = _tmp229 * _tmp239;
  const Scalar _tmp241 = _tmp103 * _tmp133;
  const Scalar _tmp242 = _tmp124 * _tmp133;
  const Scalar _tmp243 = _tmp225 * (_tmp145 * _tmp186 - _tmp150 * _tmp171 - _tmp172 * _tmp241 -
                                    _tmp175 * _tmp242 + _tmp215 + _tmp228) -
                         _tmp237 * _tmp240;
  const Scalar _tmp244 =
      std::pow(Scalar(std::pow(_tmp229, Scalar(2)) * _tmp239 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp245 = _tmp232 * _tmp244;
  const Scalar _tmp246 = Scalar(0.71007031138673404) * _tmp233 * _tmp239;
  const Scalar _tmp247 = std::cosh(_tmp235);
  const Scalar _tmp248 = Scalar(1.0) * _tmp244 * std::cosh(_tmp231);
  const Scalar _tmp249 = _tmp109 * _tmp167;
  const Scalar _tmp250 = _tmp249 * fh1;
  const Scalar _tmp251 = fh1 * (-_tmp115 + _tmp16 * _tmp249 - _tmp168 * _tmp169);
  const Scalar _tmp252 = _tmp114 - _tmp120 * _tmp251 - _tmp172 * _tmp176 - _tmp173 * _tmp250;
  const Scalar _tmp253 = Scalar(1.4083112389913199) * _tmp252;
  const Scalar _tmp254 = _tmp142 - _tmp185 * _tmp249;
  const Scalar _tmp255 =
      _tmp182 * (_tmp130 * (-_tmp140 + _tmp146 * _tmp254 + _tmp152 * _tmp251 + _tmp158 * _tmp186 +
                            _tmp172 * _tmp183 + _tmp184 * _tmp250) -
                 _tmp188 * _tmp252);
  const Scalar _tmp256 = _tmp105 * _tmp250 - _tmp118 * _tmp251 + _tmp126 * _tmp172 - _tmp199;
  const Scalar _tmp257 =
      _tmp218 * (_tmp202 * (-_tmp157 * _tmp186 + _tmp172 * _tmp216 - _tmp192 + _tmp194 * _tmp254 +
                            _tmp195 * _tmp251 + _tmp217 * _tmp250) -
                 _tmp214 * _tmp256);
  const Scalar _tmp258 = Scalar(1.4083112389913199) * _tmp256;
  const Scalar _tmp259 = _tmp104 * _tmp250 + _tmp119 * _tmp251 + _tmp125 * _tmp172 - _tmp222;
  const Scalar _tmp260 = Scalar(1.4083112389913199) * _tmp259;
  const Scalar _tmp261 = _tmp225 * (_tmp134 * _tmp186 - _tmp145 * _tmp254 - _tmp150 * _tmp251 -
                                    _tmp172 * _tmp242 + _tmp227 - _tmp241 * _tmp250) -
                         _tmp240 * _tmp259;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = _tmp18 * _tmp33;
  _res(1, 0) =
      _tmp161 *
          (-_tmp179 * (_tmp163 * (-_tmp160 * _tmp178 - _tmp161 * _tmp189) - _tmp177 * _tmp181) -
           _tmp189 * _tmp190) +
      _tmp166 * _tmp178;
  _res(2, 0) =
      _tmp205 *
          (-_tmp212 * (_tmp207 * (-_tmp203 * _tmp211 - _tmp205 * _tmp219) - _tmp210 * _tmp220) -
           _tmp219 * _tmp221) +
      _tmp209 * _tmp211;
  _res(3, 0) =
      _tmp232 *
          (-_tmp243 * _tmp248 -
           _tmp247 * (_tmp234 * (-_tmp230 * _tmp238 - _tmp243 * _tmp245) - _tmp237 * _tmp246)) +
      _tmp236 * _tmp238;
  _res(0, 1) = _tmp30 * _tmp33;
  _res(1, 1) =
      _tmp161 *
          (-_tmp179 * (_tmp163 * (-_tmp160 * _tmp253 - _tmp161 * _tmp255) - _tmp181 * _tmp252) -
           _tmp190 * _tmp255) +
      _tmp166 * _tmp253;
  _res(2, 1) =
      _tmp205 *
          (-_tmp212 * (_tmp207 * (-_tmp203 * _tmp258 - _tmp205 * _tmp257) - _tmp220 * _tmp256) -
           _tmp221 * _tmp257) +
      _tmp209 * _tmp258;
  _res(3, 1) =
      _tmp232 *
          (-_tmp247 * (_tmp234 * (-_tmp230 * _tmp260 - _tmp245 * _tmp261) - _tmp246 * _tmp259) -
           _tmp248 * _tmp261) +
      _tmp236 * _tmp260;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
