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
 * Symbolic function: IK_residual_func_cost4_wrt_pc_Nl20
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPcNl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1038

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (330)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp5 = -_tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp7 = 2 * _tmp2;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp0 * _tmp9;
  const Scalar _tmp11 = -_tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp14 = _tmp2 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp23 = _tmp0 * _tmp7;
  const Scalar _tmp24 = _tmp6 * _tmp9;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = _tmp19 + _tmp27;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = _tmp31 - p_c(0, 0);
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp34 = _tmp16 + _tmp4;
  const Scalar _tmp35 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp36 = _tmp35 - p_c(1, 0);
  const Scalar _tmp37 = std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 = _tmp33 + _tmp37;
  const Scalar _tmp39 = std::pow(_tmp38, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp29 - p_b(0, 0);
  const Scalar _tmp41 = Scalar(1.0) / (_tmp40);
  const Scalar _tmp42 = _tmp18 - p_b(1, 0);
  const Scalar _tmp43 = _tmp41 * _tmp42;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp45 =
      -Scalar(0.010999999999999999) * _tmp1 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp47 = _tmp45 - _tmp46;
  const Scalar _tmp48 = _tmp44 + _tmp47;
  const Scalar _tmp49 = -_tmp22 + _tmp26;
  const Scalar _tmp50 = _tmp20 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_a(0, 0);
  const Scalar _tmp53 = _tmp12 - _tmp15;
  const Scalar _tmp54 = _tmp5 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_a(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp48 * _tmp58;
  const Scalar _tmp60 = -_tmp44;
  const Scalar _tmp61 = _tmp47 + _tmp60;
  const Scalar _tmp62 = _tmp56 * _tmp57;
  const Scalar _tmp63 = -_tmp43 * _tmp59 + _tmp61 * _tmp62;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp43 * _tmp58 - _tmp62);
  const Scalar _tmp65 = _tmp39 * _tmp43;
  const Scalar _tmp66 = _tmp36 * _tmp39;
  const Scalar _tmp67 = _tmp32 * _tmp65 - _tmp66;
  const Scalar _tmp68 = _tmp64 * _tmp67;
  const Scalar _tmp69 = _tmp39 * _tmp48;
  const Scalar _tmp70 = _tmp32 * _tmp69;
  const Scalar _tmp71 = _tmp45 + _tmp46;
  const Scalar _tmp72 = _tmp44 + _tmp71;
  const Scalar _tmp73 = -_tmp43 * _tmp70 - _tmp63 * _tmp68 + _tmp66 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) * _tmp17;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp54 + _tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp28;
  const Scalar _tmp78 = -_tmp50 + _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp39 * _tmp72;
  const Scalar _tmp81 = -_tmp58 * _tmp61 + _tmp59;
  const Scalar _tmp82 = -_tmp32 * _tmp80 - _tmp68 * _tmp81 + _tmp70 - _tmp73 * _tmp79;
  const Scalar _tmp83 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp84 = _tmp34 * _tmp39;
  const Scalar _tmp85 =
      std::sqrt(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp41 * _tmp85;
  const Scalar _tmp88 = _tmp87 * (-_tmp17 * _tmp40 * _tmp86 + _tmp28 * _tmp42 * _tmp86);
  const Scalar _tmp89 = _tmp32 * _tmp39;
  const Scalar _tmp90 = -_tmp50 * _tmp62 + _tmp54 * _tmp58 + _tmp58 * _tmp88;
  const Scalar _tmp91 = -_tmp30 * _tmp66 + _tmp32 * _tmp84 - _tmp68 * _tmp90 + _tmp88 * _tmp89;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = Scalar(1.0) * _tmp64;
  const Scalar _tmp94 = _tmp63 * _tmp93;
  const Scalar _tmp95 = _tmp79 * _tmp94 - _tmp81 * _tmp93;
  const Scalar _tmp96 = _tmp83 * _tmp95;
  const Scalar _tmp97 = -_tmp90 * _tmp93 - _tmp91 * _tmp96;
  const Scalar _tmp98 = _tmp92 * _tmp97;
  const Scalar _tmp99 = _tmp82 * _tmp98;
  const Scalar _tmp100 = _tmp95 + _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp83;
  const Scalar _tmp102 = _tmp101 * _tmp39;
  const Scalar _tmp103 = -_tmp101 * _tmp67 + Scalar(1.0);
  const Scalar _tmp104 = _tmp58 * _tmp64;
  const Scalar _tmp105 = _tmp19 + _tmp49;
  const Scalar _tmp106 = _tmp105 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp107 = _tmp4 + _tmp53;
  const Scalar _tmp108 = _tmp107 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp110 * fh1;
  const Scalar _tmp112 = _tmp111 * _tmp87;
  const Scalar _tmp113 = _tmp64 * _tmp90;
  const Scalar _tmp114 = _tmp43 * _tmp48;
  const Scalar _tmp115 = _tmp43 * _tmp64;
  const Scalar _tmp116 = _tmp114 + _tmp115 * _tmp63;
  const Scalar _tmp117 = _tmp115 * _tmp81 - _tmp116 * _tmp79 - _tmp48;
  const Scalar _tmp118 = _tmp117 * _tmp83;
  const Scalar _tmp119 = _tmp113 * _tmp43 - _tmp118 * _tmp91 - _tmp88;
  const Scalar _tmp120 = _tmp82 * _tmp92;
  const Scalar _tmp121 = _tmp119 * _tmp120;
  const Scalar _tmp122 = _tmp117 + _tmp121;
  const Scalar _tmp123 = _tmp122 * _tmp83;
  const Scalar _tmp124 = _tmp123 * _tmp39;
  const Scalar _tmp125 = -_tmp123 * _tmp67 - _tmp43;
  const Scalar _tmp126 = _tmp106 * _tmp109;
  const Scalar _tmp127 = _tmp126 * fh1;
  const Scalar _tmp128 = _tmp127 * _tmp87;
  const Scalar _tmp129 = Scalar(1.0) * _tmp92;
  const Scalar _tmp130 = _tmp129 * _tmp39;
  const Scalar _tmp131 = _tmp58 * _tmp68;
  const Scalar _tmp132 = fh1 * (_tmp105 * _tmp110 - _tmp107 * _tmp126);
  const Scalar _tmp133 = _tmp132 * _tmp87;
  const Scalar _tmp134 = _tmp74 * _tmp79 + _tmp77;
  const Scalar _tmp135 = 0;
  const Scalar _tmp136 = _tmp135 * _tmp83;
  const Scalar _tmp137 = _tmp136 * _tmp58;
  const Scalar _tmp138 = _tmp136 * _tmp39;
  const Scalar _tmp139 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp140 = _tmp139 * _tmp87;
  const Scalar _tmp141 = -_tmp112 * (_tmp102 * _tmp32 + _tmp103 * _tmp104) -
                         _tmp128 * (_tmp104 * _tmp125 + _tmp124 * _tmp32 + Scalar(1.0)) -
                         _tmp133 * (-_tmp129 * _tmp131 + _tmp130 * _tmp32) -
                         _tmp140 * (-_tmp137 * _tmp68 + _tmp138 * _tmp32);
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = _tmp34 + _tmp75;
  const Scalar _tmp144 = _tmp143 * _tmp79;
  const Scalar _tmp145 = Scalar(1.0) / (-_tmp144 - _tmp30 + _tmp77);
  const Scalar _tmp146 = Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp73 * _tmp83;
  const Scalar _tmp148 = _tmp143 * _tmp145;
  const Scalar _tmp149 = -_tmp100 * _tmp147 + _tmp148 * _tmp99 - _tmp94;
  const Scalar _tmp150 = Scalar(1.0) * _tmp76;
  const Scalar _tmp151 = Scalar(1.0) * _tmp111;
  const Scalar _tmp152 = _tmp143 * _tmp76;
  const Scalar _tmp153 = fh1 * (_tmp60 + _tmp71);
  const Scalar _tmp154 = _tmp105 * fv1 + _tmp126 * _tmp153 + Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp155 = _tmp116 + _tmp121 * _tmp148 - _tmp123 * _tmp73;
  const Scalar _tmp156 = Scalar(1.0) * _tmp127;
  const Scalar _tmp157 = -_tmp107 * fv1 - Scalar(40.024799999999999) * _tmp11 - _tmp110 * _tmp153;
  const Scalar _tmp158 = _tmp144 * _tmp146 + Scalar(1.0);
  const Scalar _tmp159 = _tmp134 * _tmp145;
  const Scalar _tmp160 = -_tmp135 * _tmp147 - _tmp143 * _tmp159 + _tmp75;
  const Scalar _tmp161 = _tmp120 * _tmp146;
  const Scalar _tmp162 = -_tmp129 * _tmp73 + _tmp143 * _tmp161;
  const Scalar _tmp163 = Scalar(1.0) * _tmp132;
  const Scalar _tmp164 =
      Scalar(1.0) * _tmp139 * (-_tmp134 * _tmp146 - _tmp150 * _tmp160 + Scalar(1.0)) +
      _tmp151 * (_tmp146 * _tmp99 - _tmp149 * _tmp150) +
      Scalar(1.0) * _tmp154 * (_tmp146 * _tmp152 - _tmp146) +
      _tmp156 * (_tmp121 * _tmp146 - _tmp150 * _tmp155) +
      Scalar(1.0) * _tmp157 * (_tmp146 * _tmp79 - _tmp150 * _tmp158) +
      _tmp163 * (-_tmp150 * _tmp162 + _tmp161);
  const Scalar _tmp165 = std::asinh(_tmp142 * _tmp164);
  const Scalar _tmp166 = Scalar(1.4083112389913199) * _tmp141;
  const Scalar _tmp167 =
      -_tmp165 * _tmp166 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp29 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp168 = Scalar(0.71007031138673404) * _tmp142;
  const Scalar _tmp169 = _tmp167 * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) * _tmp165;
  const Scalar _tmp171 = -std::sinh(_tmp169) - std::sinh(_tmp170);
  const Scalar _tmp172 = std::pow(_tmp38, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp173 = _tmp172 * _tmp32 * _tmp36;
  const Scalar _tmp174 = _tmp172 * _tmp33;
  const Scalar _tmp175 = -_tmp173 + _tmp174 * _tmp43 - _tmp65;
  const Scalar _tmp176 = _tmp175 * _tmp64;
  const Scalar _tmp177 = _tmp173 * _tmp72;
  const Scalar _tmp178 = _tmp174 * _tmp48;
  const Scalar _tmp179 = -_tmp176 * _tmp63 + _tmp177 - _tmp178 * _tmp43 + _tmp43 * _tmp69;
  const Scalar _tmp180 =
      -_tmp174 * _tmp72 - _tmp176 * _tmp81 + _tmp178 - _tmp179 * _tmp79 - _tmp69 + _tmp80;
  const Scalar _tmp181 = std::pow(_tmp82, Scalar(-2));
  const Scalar _tmp182 = _tmp180 * _tmp181;
  const Scalar _tmp183 = _tmp131 * _tmp135;
  const Scalar _tmp184 = _tmp182 * _tmp89;
  const Scalar _tmp185 = _tmp122 * _tmp67;
  const Scalar _tmp186 = _tmp119 * _tmp82;
  const Scalar _tmp187 = -_tmp113 * _tmp175 - _tmp173 * _tmp30 + _tmp174 * _tmp34 +
                         _tmp174 * _tmp88 - _tmp39 * _tmp88 - _tmp84;
  const Scalar _tmp188 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = _tmp186 * _tmp189;
  const Scalar _tmp191 = _tmp119 * _tmp92;
  const Scalar _tmp192 = _tmp180 * _tmp191;
  const Scalar _tmp193 = _tmp181 * _tmp91;
  const Scalar _tmp194 = _tmp117 * _tmp193;
  const Scalar _tmp195 = _tmp120 * (-_tmp118 * _tmp187 + _tmp180 * _tmp194);
  const Scalar _tmp196 = -_tmp190 + _tmp192 + _tmp195;
  const Scalar _tmp197 = _tmp67 * _tmp83;
  const Scalar _tmp198 = -_tmp123 * _tmp175 + _tmp182 * _tmp185 - _tmp196 * _tmp197;
  const Scalar _tmp199 = _tmp83 * _tmp89;
  const Scalar _tmp200 = _tmp100 * _tmp182;
  const Scalar _tmp201 = _tmp193 * _tmp95;
  const Scalar _tmp202 = _tmp120 * (_tmp180 * _tmp201 - _tmp187 * _tmp96);
  const Scalar _tmp203 = _tmp82 * _tmp97;
  const Scalar _tmp204 = _tmp189 * _tmp203;
  const Scalar _tmp205 = _tmp180 * _tmp98;
  const Scalar _tmp206 = _tmp202 - _tmp204 + _tmp205;
  const Scalar _tmp207 = -_tmp101 * _tmp175 - _tmp197 * _tmp206 + _tmp200 * _tmp67;
  const Scalar _tmp208 = _tmp92 * _tmp93;
  const Scalar _tmp209 = _tmp208 * _tmp58;
  const Scalar _tmp210 = Scalar(1.0) * _tmp89;
  const Scalar _tmp211 = Scalar(1.0) * _tmp131;
  const Scalar _tmp212 = -_tmp112 * (_tmp101 * _tmp174 - _tmp102 + _tmp104 * _tmp207 +
                                     _tmp199 * _tmp206 - _tmp200 * _tmp89) -
                         _tmp128 * (_tmp104 * _tmp198 - _tmp122 * _tmp184 + _tmp123 * _tmp174 -
                                    _tmp124 + _tmp196 * _tmp199) -
                         _tmp133 * (_tmp129 * _tmp174 - _tmp130 - _tmp175 * _tmp209 -
                                    _tmp189 * _tmp210 + _tmp189 * _tmp211) -
                         _tmp140 * (-_tmp135 * _tmp184 + _tmp136 * _tmp174 - _tmp137 * _tmp176 -
                                    _tmp138 + _tmp182 * _tmp183);
  const Scalar _tmp213 = Scalar(1.4083112389913199) * _tmp212;
  const Scalar _tmp214 = std::cosh(_tmp169);
  const Scalar _tmp215 = std::pow(_tmp141, Scalar(-2));
  const Scalar _tmp216 =
      std::pow(Scalar(std::pow(_tmp164, Scalar(2)) * _tmp215 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp217 = _tmp146 * _tmp82;
  const Scalar _tmp218 = _tmp189 * _tmp217;
  const Scalar _tmp219 = Scalar(1.0) * _tmp73;
  const Scalar _tmp220 = _tmp146 * _tmp92;
  const Scalar _tmp221 = _tmp180 * _tmp220;
  const Scalar _tmp222 =
      -_tmp129 * _tmp179 - _tmp143 * _tmp218 + _tmp143 * _tmp221 + _tmp189 * _tmp219;
  const Scalar _tmp223 = _tmp182 * _tmp73;
  const Scalar _tmp224 = _tmp122 * _tmp223 - _tmp123 * _tmp179 - _tmp147 * _tmp196 -
                         _tmp148 * _tmp190 + _tmp148 * _tmp192 + _tmp148 * _tmp195;
  const Scalar _tmp225 = -_tmp101 * _tmp179 - _tmp147 * _tmp206 + _tmp148 * _tmp202 -
                         _tmp148 * _tmp204 + _tmp148 * _tmp205 + _tmp200 * _tmp73;
  const Scalar _tmp226 = _tmp135 * _tmp223 - _tmp136 * _tmp179;
  const Scalar _tmp227 = _tmp139 * _tmp150;
  const Scalar _tmp228 = _tmp164 * _tmp215;
  const Scalar _tmp229 = _tmp216 * (_tmp142 * (_tmp151 * (_tmp146 * _tmp202 - _tmp146 * _tmp204 +
                                                          _tmp146 * _tmp205 - _tmp150 * _tmp225) +
                                               _tmp156 * (-_tmp146 * _tmp190 + _tmp146 * _tmp192 +
                                                          _tmp146 * _tmp195 - _tmp150 * _tmp224) +
                                               _tmp163 * (-_tmp150 * _tmp222 - _tmp218 + _tmp221) -
                                               _tmp226 * _tmp227) -
                                    _tmp212 * _tmp228);
  const Scalar _tmp230 = Scalar(0.71007031138673404) * _tmp167 * _tmp215;
  const Scalar _tmp231 = Scalar(1.0) * std::cosh(_tmp170);
  const Scalar _tmp232 = _tmp111 * _tmp64;
  const Scalar _tmp233 = _tmp136 * _tmp139;
  const Scalar _tmp234 = _tmp127 * _tmp64;
  const Scalar _tmp235 = _tmp132 * _tmp208;
  const Scalar _tmp236 = _tmp135 * _tmp139;
  const Scalar _tmp237 = _tmp182 * _tmp236;
  const Scalar _tmp238 = _tmp163 * _tmp189;
  const Scalar _tmp239 = -_tmp175 * _tmp235 - _tmp176 * _tmp233 + _tmp198 * _tmp234 +
                         _tmp207 * _tmp232 + _tmp237 * _tmp68 + _tmp238 * _tmp68;
  const Scalar _tmp240 = _tmp129 * _tmp132;
  const Scalar _tmp241 =
      _tmp103 * _tmp232 + _tmp125 * _tmp234 - _tmp233 * _tmp68 - _tmp240 * _tmp68;
  const Scalar _tmp242 = std::pow(_tmp241, Scalar(-2));
  const Scalar _tmp243 = _tmp139 * _tmp76;
  const Scalar _tmp244 = _tmp132 * _tmp76;
  const Scalar _tmp245 = _tmp146 * _tmp154;
  const Scalar _tmp246 = _tmp127 * _tmp76;
  const Scalar _tmp247 = _tmp157 * _tmp76;
  const Scalar _tmp248 = _tmp111 * _tmp76;
  const Scalar _tmp249 = _tmp149 * _tmp248 - _tmp152 * _tmp245 + _tmp155 * _tmp246 +
                         _tmp158 * _tmp247 + _tmp160 * _tmp243 + _tmp162 * _tmp244;
  const Scalar _tmp250 = Scalar(1.0) / (_tmp241);
  const Scalar _tmp251 = std::asinh(_tmp249 * _tmp250);
  const Scalar _tmp252 = Scalar(1.4083112389913199) * _tmp241;
  const Scalar _tmp253 =
      -_tmp251 * _tmp252 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp254 = Scalar(0.71007031138673404) * _tmp242 * _tmp253;
  const Scalar _tmp255 = Scalar(1.4083112389913199) * _tmp239;
  const Scalar _tmp256 =
      std::pow(Scalar(_tmp242 * std::pow(_tmp249, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp257 = _tmp242 * _tmp249;
  const Scalar _tmp258 =
      _tmp256 * (-_tmp239 * _tmp257 + _tmp250 * (_tmp222 * _tmp244 + _tmp224 * _tmp246 +
                                                 _tmp225 * _tmp248 + _tmp226 * _tmp243));
  const Scalar _tmp259 = Scalar(0.71007031138673404) * _tmp250;
  const Scalar _tmp260 = _tmp253 * _tmp259;
  const Scalar _tmp261 = std::cosh(_tmp260);
  const Scalar _tmp262 = Scalar(1.0) * _tmp251;
  const Scalar _tmp263 = Scalar(1.0) * std::cosh(_tmp262);
  const Scalar _tmp264 = -std::sinh(_tmp260) - std::sinh(_tmp262);
  const Scalar _tmp265 = _tmp111 * _tmp83;
  const Scalar _tmp266 = _tmp122 * _tmp127;
  const Scalar _tmp267 = -_tmp111 * _tmp200 + _tmp127 * _tmp196 * _tmp83 - _tmp182 * _tmp266 +
                         _tmp206 * _tmp265 - _tmp237 - _tmp238;
  const Scalar _tmp268 = _tmp111 * _tmp145;
  const Scalar _tmp269 = _tmp127 * _tmp145;
  const Scalar _tmp270 = -_tmp121 * _tmp269 - _tmp132 * _tmp161 + _tmp139 * _tmp159 -
                         _tmp146 * _tmp247 * _tmp78 + _tmp245 - _tmp268 * _tmp99;
  const Scalar _tmp271 = _tmp101 * _tmp111 + _tmp123 * _tmp127 + _tmp233 + _tmp240;
  const Scalar _tmp272 = Scalar(1.0) / (_tmp271);
  const Scalar _tmp273 = std::asinh(_tmp270 * _tmp272);
  const Scalar _tmp274 = Scalar(1.0) * _tmp273;
  const Scalar _tmp275 = -_tmp35 + p_c(1, 0);
  const Scalar _tmp276 = -_tmp31 + p_c(0, 0);
  const Scalar _tmp277 =
      std::sqrt(Scalar(std::pow(_tmp275, Scalar(2)) + std::pow(_tmp276, Scalar(2))));
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp273;
  const Scalar _tmp279 = -_tmp271 * _tmp278 - _tmp277;
  const Scalar _tmp280 = Scalar(0.71007031138673404) * _tmp272;
  const Scalar _tmp281 = _tmp279 * _tmp280;
  const Scalar _tmp282 = -Scalar(1.4083112389913199) * std::sinh(_tmp274) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp281);
  const Scalar _tmp283 = Scalar(1.0) * std::cosh(_tmp274);
  const Scalar _tmp284 = std::pow(_tmp271, Scalar(-2));
  const Scalar _tmp285 =
      std::pow(Scalar(std::pow(_tmp270, Scalar(2)) * _tmp284 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp286 = _tmp270 * _tmp284;
  const Scalar _tmp287 =
      _tmp285 *
      (-_tmp267 * _tmp286 +
       _tmp272 * (_tmp132 * _tmp218 - _tmp132 * _tmp221 + _tmp190 * _tmp269 - _tmp192 * _tmp269 -
                  _tmp195 * _tmp269 - _tmp202 * _tmp268 + _tmp204 * _tmp268 - _tmp205 * _tmp268));
  const Scalar _tmp288 = std::cosh(_tmp281);
  const Scalar _tmp289 = Scalar(0.71007031138673404) * _tmp279 * _tmp284;
  const Scalar _tmp290 = Scalar(1.0) / (_tmp277);
  const Scalar _tmp291 = Scalar(1.4083112389913199) * _tmp271;
  const Scalar _tmp292 = _tmp172 * _tmp37;
  const Scalar _tmp293 = _tmp173 * _tmp43 - _tmp292 + _tmp39;
  const Scalar _tmp294 = _tmp293 * _tmp64;
  const Scalar _tmp295 = -_tmp114 * _tmp173 + _tmp292 * _tmp72 - _tmp294 * _tmp63 - _tmp80;
  const Scalar _tmp296 = _tmp173 * _tmp48 - _tmp177 - _tmp294 * _tmp81 - _tmp295 * _tmp79;
  const Scalar _tmp297 = _tmp181 * _tmp296;
  const Scalar _tmp298 = _tmp297 * _tmp89;
  const Scalar _tmp299 = _tmp100 * _tmp297;
  const Scalar _tmp300 = _tmp296 * _tmp98;
  const Scalar _tmp301 =
      -_tmp113 * _tmp293 + _tmp173 * _tmp34 + _tmp173 * _tmp88 - _tmp292 * _tmp30 + _tmp30 * _tmp39;
  const Scalar _tmp302 = _tmp188 * _tmp301;
  const Scalar _tmp303 = _tmp203 * _tmp302;
  const Scalar _tmp304 = _tmp120 * (_tmp201 * _tmp296 - _tmp301 * _tmp96);
  const Scalar _tmp305 = _tmp300 - _tmp303 + _tmp304;
  const Scalar _tmp306 = -_tmp101 * _tmp293 - _tmp197 * _tmp305 + _tmp299 * _tmp67;
  const Scalar _tmp307 = _tmp186 * _tmp302;
  const Scalar _tmp308 = _tmp120 * (-_tmp118 * _tmp301 + _tmp194 * _tmp296);
  const Scalar _tmp309 = _tmp191 * _tmp296;
  const Scalar _tmp310 = -_tmp307 + _tmp308 + _tmp309;
  const Scalar _tmp311 = _tmp310 * _tmp83;
  const Scalar _tmp312 = -_tmp123 * _tmp293 + _tmp185 * _tmp297 - _tmp197 * _tmp310;
  const Scalar _tmp313 =
      -_tmp112 * (_tmp101 * _tmp173 + _tmp104 * _tmp306 + _tmp199 * _tmp305 - _tmp299 * _tmp89) -
      _tmp128 * (_tmp104 * _tmp312 - _tmp122 * _tmp298 + _tmp123 * _tmp173 + _tmp311 * _tmp89) -
      _tmp133 * (_tmp129 * _tmp173 - _tmp209 * _tmp293 - _tmp210 * _tmp302 + _tmp211 * _tmp302) -
      _tmp140 * (-_tmp135 * _tmp298 + _tmp136 * _tmp173 - _tmp137 * _tmp294 + _tmp183 * _tmp297);
  const Scalar _tmp314 = _tmp297 * _tmp73;
  const Scalar _tmp315 = _tmp135 * _tmp314 - _tmp136 * _tmp295;
  const Scalar _tmp316 = _tmp220 * _tmp296;
  const Scalar _tmp317 = _tmp217 * _tmp302;
  const Scalar _tmp318 =
      -_tmp129 * _tmp295 + _tmp143 * _tmp316 - _tmp143 * _tmp317 + _tmp219 * _tmp302;
  const Scalar _tmp319 = _tmp122 * _tmp314 - _tmp123 * _tmp295 - _tmp147 * _tmp310 -
                         _tmp148 * _tmp307 + _tmp148 * _tmp308 + _tmp148 * _tmp309;
  const Scalar _tmp320 = _tmp100 * _tmp314 - _tmp101 * _tmp295 - _tmp147 * _tmp305 +
                         _tmp148 * _tmp300 - _tmp148 * _tmp303 + _tmp148 * _tmp304;
  const Scalar _tmp321 = _tmp216 * (_tmp142 * (_tmp151 * (_tmp146 * _tmp300 - _tmp146 * _tmp303 +
                                                          _tmp146 * _tmp304 - _tmp150 * _tmp320) +
                                               _tmp156 * (-_tmp146 * _tmp307 + _tmp146 * _tmp308 +
                                                          _tmp146 * _tmp309 - _tmp150 * _tmp319) +
                                               _tmp163 * (-_tmp150 * _tmp318 + _tmp316 - _tmp317) -
                                               _tmp227 * _tmp315) -
                                    _tmp228 * _tmp313);
  const Scalar _tmp322 = Scalar(1.4083112389913199) * _tmp313;
  const Scalar _tmp323 = _tmp163 * _tmp302;
  const Scalar _tmp324 = _tmp236 * _tmp297;
  const Scalar _tmp325 = _tmp232 * _tmp306 - _tmp233 * _tmp294 + _tmp234 * _tmp312 -
                         _tmp235 * _tmp293 + _tmp323 * _tmp68 + _tmp324 * _tmp68;
  const Scalar _tmp326 =
      _tmp256 *
      (_tmp250 * (_tmp243 * _tmp315 + _tmp244 * _tmp318 + _tmp246 * _tmp319 + _tmp248 * _tmp320) -
       _tmp257 * _tmp325);
  const Scalar _tmp327 = Scalar(1.4083112389913199) * _tmp325;
  const Scalar _tmp328 = -_tmp111 * _tmp299 + _tmp127 * _tmp311 + _tmp265 * _tmp305 -
                         _tmp266 * _tmp297 - _tmp323 - _tmp324;
  const Scalar _tmp329 =
      _tmp285 *
      (_tmp272 * (-_tmp132 * _tmp316 + _tmp132 * _tmp317 - _tmp268 * _tmp300 + _tmp268 * _tmp303 -
                  _tmp268 * _tmp304 + _tmp269 * _tmp307 - _tmp269 * _tmp308 - _tmp269 * _tmp309) -
       _tmp286 * _tmp328);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp166 *
          (-_tmp214 * (_tmp168 * (-_tmp165 * _tmp213 - _tmp166 * _tmp229) - _tmp212 * _tmp230) -
           _tmp229 * _tmp231) +
      _tmp171 * _tmp213;
  _res(2, 0) =
      _tmp252 *
          (-_tmp258 * _tmp263 -
           _tmp261 * (-_tmp239 * _tmp254 + _tmp259 * (-_tmp251 * _tmp255 - _tmp252 * _tmp258))) +
      _tmp255 * _tmp264;
  _res(3, 0) =
      _tmp267 * _tmp282 +
      _tmp291 * (-_tmp283 * _tmp287 -
                 _tmp288 * (-_tmp267 * _tmp289 + _tmp280 * (-_tmp267 * _tmp278 - _tmp276 * _tmp290 -
                                                            _tmp287 * _tmp291)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp166 *
          (-_tmp214 * (_tmp168 * (-_tmp165 * _tmp322 - _tmp166 * _tmp321) - _tmp230 * _tmp313) -
           _tmp231 * _tmp321) +
      _tmp171 * _tmp322;
  _res(2, 1) =
      _tmp252 *
          (-_tmp261 * (-_tmp254 * _tmp325 + _tmp259 * (-_tmp251 * _tmp327 - _tmp252 * _tmp326)) -
           _tmp263 * _tmp326) +
      _tmp264 * _tmp327;
  _res(3, 1) =
      _tmp282 * _tmp328 +
      _tmp291 * (-_tmp283 * _tmp329 -
                 _tmp288 * (_tmp280 * (-_tmp275 * _tmp290 - _tmp278 * _tmp328 - _tmp291 * _tmp329) -
                            _tmp289 * _tmp328));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
