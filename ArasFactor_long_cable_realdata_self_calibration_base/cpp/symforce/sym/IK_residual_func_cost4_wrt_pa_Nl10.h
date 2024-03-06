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
 * Symbolic function: IK_residual_func_cost4_wrt_pa_Nl10
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPaNl10(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1140

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (355)
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
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = std::pow(_tmp19, Scalar(2));
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
  const Scalar _tmp32 = _tmp31 - p_a(1, 0);
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = _tmp19 * _tmp35;
  const Scalar _tmp37 = _tmp16 + _tmp7;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp38 - p_d(0, 0);
  const Scalar _tmp40 = Scalar(1.0) / (_tmp39);
  const Scalar _tmp41 = _tmp22 + _tmp29;
  const Scalar _tmp42 = _tmp41 + position_vector(1, 0);
  const Scalar _tmp43 = _tmp42 - p_d(1, 0);
  const Scalar _tmp44 = _tmp40 * _tmp43;
  const Scalar _tmp45 = _tmp35 * _tmp44;
  const Scalar _tmp46 = _tmp32 * _tmp35;
  const Scalar _tmp47 = _tmp19 * _tmp45 - _tmp46;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp49 = _tmp12 + _tmp15;
  const Scalar _tmp50 = _tmp49 + _tmp7;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 - p_c(0, 0);
  const Scalar _tmp53 = _tmp24 + _tmp28;
  const Scalar _tmp54 = _tmp22 + _tmp53;
  const Scalar _tmp55 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp57;
  const Scalar _tmp60 = _tmp44 * _tmp58 - _tmp59;
  const Scalar _tmp61 = _tmp48 * _tmp60;
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp25 + Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp63 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp21 + Scalar(-0.010999999999999999);
  const Scalar _tmp64 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp65 = _tmp63 + _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = -_tmp62;
  const Scalar _tmp68 = _tmp63 - _tmp64;
  const Scalar _tmp69 = _tmp67 + _tmp68;
  const Scalar _tmp70 = _tmp35 * _tmp69;
  const Scalar _tmp71 = _tmp62 + _tmp68;
  const Scalar _tmp72 = _tmp35 * _tmp71;
  const Scalar _tmp73 = _tmp19 * _tmp72;
  const Scalar _tmp74 = -_tmp19 * _tmp70 + _tmp73;
  const Scalar _tmp75 = _tmp58 * _tmp71;
  const Scalar _tmp76 = -_tmp44 * _tmp73 + _tmp46 * _tmp69;
  const Scalar _tmp77 = -_tmp44 * _tmp75 + _tmp59 * _tmp66 - _tmp61 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp41;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp30 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp37;
  const Scalar _tmp82 = _tmp80 * (-_tmp17 + _tmp81);
  const Scalar _tmp83 = -_tmp58 * _tmp66 - _tmp61 * _tmp74 + _tmp75 - _tmp77 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp78 * _tmp82 + _tmp81;
  const Scalar _tmp86 = 0;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp61 * _tmp87;
  const Scalar _tmp89 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp43, Scalar(2))));
  const Scalar _tmp91 = _tmp40 * _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp94 = _tmp91 * (_tmp37 * _tmp43 * _tmp93 - _tmp39 * _tmp41 * _tmp93);
  const Scalar _tmp95 = _tmp35 * _tmp94;
  const Scalar _tmp96 = _tmp30 * _tmp35;
  const Scalar _tmp97 = -_tmp17 * _tmp46 + _tmp19 * _tmp95 + _tmp19 * _tmp96;
  const Scalar _tmp98 = -_tmp50 * _tmp59 + _tmp54 * _tmp58 + _tmp58 * _tmp94 - _tmp61 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) * _tmp48;
  const Scalar _tmp100 = _tmp76 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp82 - _tmp74 * _tmp99;
  const Scalar _tmp102 = _tmp101 * _tmp84;
  const Scalar _tmp103 = -_tmp102 * _tmp98 - _tmp97 * _tmp99;
  const Scalar _tmp104 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp105 = _tmp104 * _tmp83;
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp101 + _tmp106;
  const Scalar _tmp108 = _tmp107 * _tmp84;
  const Scalar _tmp109 = -_tmp108 * _tmp60 + Scalar(1.0);
  const Scalar _tmp110 = _tmp35 * _tmp48;
  const Scalar _tmp111 = _tmp109 * _tmp110;
  const Scalar _tmp112 = _tmp49 + _tmp8;
  const Scalar _tmp113 = _tmp112 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp114 = _tmp23 + _tmp53;
  const Scalar _tmp115 = _tmp114 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp116 =
      std::pow(Scalar(std::pow(_tmp113, Scalar(2)) + std::pow(_tmp115, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp117 = _tmp115 * _tmp116;
  const Scalar _tmp118 = _tmp117 * fh1;
  const Scalar _tmp119 = _tmp118 * _tmp91;
  const Scalar _tmp120 = _tmp44 * _tmp48;
  const Scalar _tmp121 = _tmp44 * _tmp71;
  const Scalar _tmp122 = _tmp120 * _tmp76 + _tmp121;
  const Scalar _tmp123 = _tmp120 * _tmp74 - _tmp122 * _tmp82 - _tmp71;
  const Scalar _tmp124 = _tmp123 * _tmp84;
  const Scalar _tmp125 = _tmp120 * _tmp97 - _tmp124 * _tmp98 - _tmp94;
  const Scalar _tmp126 = _tmp105 * _tmp125;
  const Scalar _tmp127 = _tmp123 + _tmp126;
  const Scalar _tmp128 = _tmp127 * _tmp84;
  const Scalar _tmp129 = -_tmp128 * _tmp60 - _tmp44;
  const Scalar _tmp130 = _tmp110 * _tmp129;
  const Scalar _tmp131 = _tmp113 * _tmp116;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = _tmp132 * _tmp91;
  const Scalar _tmp134 = _tmp60 * _tmp99;
  const Scalar _tmp135 = _tmp104 * _tmp134;
  const Scalar _tmp136 = _tmp135 * _tmp35;
  const Scalar _tmp137 = Scalar(1.0) * _tmp104;
  const Scalar _tmp138 = fh1 * (_tmp112 * _tmp117 - _tmp114 * _tmp131);
  const Scalar _tmp139 = _tmp138 * _tmp91;
  const Scalar _tmp140 = -_tmp119 * (_tmp108 * _tmp58 + _tmp111 * _tmp19) -
                         _tmp133 * (_tmp128 * _tmp58 + _tmp130 * _tmp19 + Scalar(1.0)) -
                         _tmp139 * (-_tmp136 * _tmp19 + _tmp137 * _tmp58) -
                         _tmp92 * (-_tmp36 * _tmp88 + _tmp58 * _tmp87);
  const Scalar _tmp141 = std::pow(_tmp140, Scalar(-2));
  const Scalar _tmp142 = _tmp54 + _tmp79;
  const Scalar _tmp143 = _tmp142 * _tmp82;
  const Scalar _tmp144 = Scalar(1.0) / (-_tmp143 - _tmp50 + _tmp81);
  const Scalar _tmp145 = Scalar(1.0) * _tmp144;
  const Scalar _tmp146 = _tmp142 * _tmp145;
  const Scalar _tmp147 = fh1 * (_tmp65 + _tmp67);
  const Scalar _tmp148 = Scalar(40.024799999999999) * _tmp11 + _tmp112 * fv1 + _tmp131 * _tmp147;
  const Scalar _tmp149 = -_tmp114 * fv1 - _tmp117 * _tmp147 - Scalar(40.024799999999999) * _tmp27;
  const Scalar _tmp150 = _tmp145 * _tmp82;
  const Scalar _tmp151 = _tmp143 * _tmp145 + Scalar(1.0);
  const Scalar _tmp152 = Scalar(1.0) * _tmp80;
  const Scalar _tmp153 = _tmp105 * _tmp145;
  const Scalar _tmp154 = _tmp105 * _tmp146 - _tmp137 * _tmp77;
  const Scalar _tmp155 = Scalar(1.0) * _tmp138;
  const Scalar _tmp156 = _tmp144 * _tmp85;
  const Scalar _tmp157 = _tmp77 * _tmp84;
  const Scalar _tmp158 = -_tmp142 * _tmp156 - _tmp157 * _tmp86 + _tmp79;
  const Scalar _tmp159 = _tmp142 * _tmp144;
  const Scalar _tmp160 = _tmp122 + _tmp126 * _tmp159 - _tmp127 * _tmp157;
  const Scalar _tmp161 = Scalar(1.0) * _tmp132;
  const Scalar _tmp162 = -_tmp100 + _tmp106 * _tmp159 - _tmp108 * _tmp77;
  const Scalar _tmp163 = Scalar(1.0) * _tmp118;
  const Scalar _tmp164 =
      Scalar(1.0) * _tmp148 * (-_tmp145 + _tmp146 * _tmp80) +
      Scalar(1.0) * _tmp149 * (_tmp150 - _tmp151 * _tmp152) +
      _tmp155 * (-_tmp152 * _tmp154 + _tmp153) + _tmp161 * (_tmp126 * _tmp145 - _tmp152 * _tmp160) +
      _tmp163 * (_tmp106 * _tmp145 - _tmp152 * _tmp162) +
      Scalar(1.0) * _tmp89 * (-_tmp145 * _tmp85 - _tmp152 * _tmp158 + Scalar(1.0));
  const Scalar _tmp165 =
      std::pow(Scalar(_tmp141 * std::pow(_tmp164, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp166 = std::pow(_tmp34, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp167 = _tmp166 * _tmp20;
  const Scalar _tmp168 = _tmp166 * _tmp19 * _tmp32;
  const Scalar _tmp169 = _tmp167 * _tmp44 - _tmp168 - _tmp45;
  const Scalar _tmp170 = std::pow(_tmp47, Scalar(-2));
  const Scalar _tmp171 = _tmp170 * _tmp60;
  const Scalar _tmp172 = _tmp169 * _tmp171;
  const Scalar _tmp173 = _tmp167 * _tmp30 + _tmp167 * _tmp94 - _tmp168 * _tmp17 - _tmp95 - _tmp96;
  const Scalar _tmp174 = _tmp172 * _tmp97 - _tmp173 * _tmp61;
  const Scalar _tmp175 = std::pow(_tmp98, Scalar(-2));
  const Scalar _tmp176 = _tmp174 * _tmp175;
  const Scalar _tmp177 = Scalar(1.0) * _tmp58;
  const Scalar _tmp178 = _tmp134 * _tmp176;
  const Scalar _tmp179 = _tmp137 * _tmp36;
  const Scalar _tmp180 = _tmp167 * _tmp71;
  const Scalar _tmp181 = -_tmp167 * _tmp69 + _tmp180 + _tmp70 - _tmp72;
  const Scalar _tmp182 = _tmp168 * _tmp69;
  const Scalar _tmp183 = -_tmp180 * _tmp44 + _tmp182 + _tmp44 * _tmp72;
  const Scalar _tmp184 = _tmp172 * _tmp76 - _tmp183 * _tmp61;
  const Scalar _tmp185 = _tmp172 * _tmp74 - _tmp181 * _tmp61 - _tmp184 * _tmp82;
  const Scalar _tmp186 = std::pow(_tmp83, Scalar(-2));
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = _tmp36 * _tmp61 * _tmp86;
  const Scalar _tmp189 = _tmp36 * _tmp87;
  const Scalar _tmp190 = _tmp187 * _tmp58;
  const Scalar _tmp191 = _tmp169 * _tmp170;
  const Scalar _tmp192 = _tmp191 * _tmp44;
  const Scalar _tmp193 = _tmp120 * _tmp183 - _tmp192 * _tmp76;
  const Scalar _tmp194 = _tmp120 * _tmp181 - _tmp192 * _tmp74 - _tmp193 * _tmp82;
  const Scalar _tmp195 = _tmp84 * _tmp98;
  const Scalar _tmp196 = _tmp123 * _tmp98;
  const Scalar _tmp197 = _tmp105 * (_tmp120 * _tmp173 - _tmp124 * _tmp174 + _tmp187 * _tmp196 -
                                    _tmp192 * _tmp97 - _tmp194 * _tmp195);
  const Scalar _tmp198 = _tmp176 * _tmp83;
  const Scalar _tmp199 = _tmp125 * _tmp198;
  const Scalar _tmp200 = _tmp104 * _tmp185;
  const Scalar _tmp201 = _tmp125 * _tmp200;
  const Scalar _tmp202 = _tmp84 * (_tmp194 + _tmp197 - _tmp199 + _tmp201);
  const Scalar _tmp203 = _tmp129 * _tmp191;
  const Scalar _tmp204 = _tmp167 * _tmp48;
  const Scalar _tmp205 = _tmp187 * _tmp60;
  const Scalar _tmp206 = _tmp127 * _tmp205 - _tmp202 * _tmp60;
  const Scalar _tmp207 = _tmp110 * _tmp19;
  const Scalar _tmp208 = _tmp109 * _tmp191;
  const Scalar _tmp209 = _tmp103 * _tmp198;
  const Scalar _tmp210 = _tmp103 * _tmp200;
  const Scalar _tmp211 = Scalar(1.0) * _tmp170;
  const Scalar _tmp212 = _tmp169 * _tmp211;
  const Scalar _tmp213 = _tmp183 * _tmp99;
  const Scalar _tmp214 = _tmp212 * _tmp76;
  const Scalar _tmp215 = -_tmp181 * _tmp99 + _tmp212 * _tmp74 + _tmp213 * _tmp82 - _tmp214 * _tmp82;
  const Scalar _tmp216 = _tmp101 * _tmp98;
  const Scalar _tmp217 = _tmp105 * (-_tmp102 * _tmp174 - _tmp173 * _tmp99 + _tmp187 * _tmp216 -
                                    _tmp195 * _tmp215 + _tmp212 * _tmp97);
  const Scalar _tmp218 = _tmp84 * (-_tmp209 + _tmp210 + _tmp215 + _tmp217);
  const Scalar _tmp219 = _tmp107 * _tmp205 - _tmp218 * _tmp60;
  const Scalar _tmp220 = -_tmp119 * (-_tmp107 * _tmp190 + _tmp109 * _tmp204 - _tmp111 +
                                     _tmp207 * _tmp219 - _tmp208 * _tmp36 + _tmp218 * _tmp58) -
                         _tmp133 * (-_tmp127 * _tmp190 + _tmp129 * _tmp204 - _tmp130 +
                                    _tmp202 * _tmp58 - _tmp203 * _tmp36 + _tmp206 * _tmp207) -
                         _tmp139 * (-_tmp135 * _tmp167 + _tmp136 + _tmp172 * _tmp179 -
                                    _tmp176 * _tmp177 + _tmp178 * _tmp36) -
                         _tmp92 * (-_tmp167 * _tmp88 + _tmp172 * _tmp189 + _tmp187 * _tmp188 -
                                   _tmp190 * _tmp86 + _tmp35 * _tmp88);
  const Scalar _tmp221 = _tmp141 * _tmp164;
  const Scalar _tmp222 = Scalar(1.0) / (_tmp140);
  const Scalar _tmp223 = _tmp186 * _tmp77;
  const Scalar _tmp224 = _tmp185 * _tmp223;
  const Scalar _tmp225 = _tmp107 * _tmp224 - _tmp108 * _tmp184 - _tmp159 * _tmp209 +
                         _tmp159 * _tmp210 + _tmp159 * _tmp217 - _tmp213 + _tmp214 -
                         _tmp218 * _tmp77;
  const Scalar _tmp226 = _tmp145 * _tmp200;
  const Scalar _tmp227 = Scalar(1.0) * _tmp77;
  const Scalar _tmp228 =
      -_tmp137 * _tmp184 + _tmp142 * _tmp226 - _tmp146 * _tmp198 + _tmp176 * _tmp227;
  const Scalar _tmp229 = _tmp145 * _tmp198;
  const Scalar _tmp230 = _tmp127 * _tmp224 - _tmp128 * _tmp184 + _tmp159 * _tmp197 -
                         _tmp159 * _tmp199 + _tmp159 * _tmp201 + _tmp193 - _tmp202 * _tmp77;
  const Scalar _tmp231 = -_tmp184 * _tmp87 + _tmp224 * _tmp86;
  const Scalar _tmp232 = _tmp152 * _tmp89;
  const Scalar _tmp233 = _tmp165 * (-_tmp220 * _tmp221 +
                                    _tmp222 * (_tmp155 * (-_tmp152 * _tmp228 + _tmp226 - _tmp229) +
                                               _tmp161 * (_tmp145 * _tmp197 - _tmp145 * _tmp199 +
                                                          _tmp145 * _tmp201 - _tmp152 * _tmp230) +
                                               _tmp163 * (-_tmp145 * _tmp209 + _tmp145 * _tmp210 +
                                                          _tmp145 * _tmp217 - _tmp152 * _tmp225) -
                                               _tmp231 * _tmp232));
  const Scalar _tmp234 = std::asinh(_tmp164 * _tmp222);
  const Scalar _tmp235 = Scalar(1.0) * _tmp234;
  const Scalar _tmp236 = Scalar(1.0) * std::cosh(_tmp235);
  const Scalar _tmp237 = Scalar(1.4083112389913199) * _tmp140;
  const Scalar _tmp238 =
      -_tmp234 * _tmp237 - std::sqrt(Scalar(std::pow(Scalar(-_tmp38 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp42 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp239 = Scalar(0.71007031138673404) * _tmp222;
  const Scalar _tmp240 = _tmp238 * _tmp239;
  const Scalar _tmp241 = std::cosh(_tmp240);
  const Scalar _tmp242 = Scalar(0.71007031138673404) * _tmp141 * _tmp238;
  const Scalar _tmp243 = Scalar(1.4083112389913199) * _tmp220;
  const Scalar _tmp244 = -std::sinh(_tmp235) - std::sinh(_tmp240);
  const Scalar _tmp245 = _tmp129 * _tmp48;
  const Scalar _tmp246 = _tmp87 * _tmp89;
  const Scalar _tmp247 = _tmp118 * _tmp48;
  const Scalar _tmp248 =
      _tmp109 * _tmp247 + _tmp132 * _tmp245 - _tmp135 * _tmp138 - _tmp246 * _tmp61;
  const Scalar _tmp249 = std::pow(_tmp248, Scalar(-2));
  const Scalar _tmp250 = _tmp145 * _tmp148;
  const Scalar _tmp251 = _tmp132 * _tmp80;
  const Scalar _tmp252 = _tmp118 * _tmp80;
  const Scalar _tmp253 = _tmp138 * _tmp80;
  const Scalar _tmp254 = _tmp80 * _tmp89;
  const Scalar _tmp255 = -_tmp142 * _tmp250 * _tmp80 + _tmp149 * _tmp151 * _tmp80 +
                         _tmp154 * _tmp253 + _tmp158 * _tmp254 + _tmp160 * _tmp251 +
                         _tmp162 * _tmp252;
  const Scalar _tmp256 =
      std::pow(Scalar(_tmp249 * std::pow(_tmp255, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp257 = _tmp86 * _tmp89;
  const Scalar _tmp258 = _tmp187 * _tmp257;
  const Scalar _tmp259 = _tmp137 * _tmp138;
  const Scalar _tmp260 = _tmp132 * _tmp48;
  const Scalar _tmp261 = -_tmp118 * _tmp208 - _tmp132 * _tmp203 + _tmp138 * _tmp178 +
                         _tmp172 * _tmp246 + _tmp172 * _tmp259 + _tmp206 * _tmp260 +
                         _tmp219 * _tmp247 + _tmp258 * _tmp61;
  const Scalar _tmp262 = _tmp249 * _tmp255;
  const Scalar _tmp263 = Scalar(1.0) / (_tmp248);
  const Scalar _tmp264 =
      _tmp256 * (-_tmp261 * _tmp262 + _tmp263 * (_tmp225 * _tmp252 + _tmp228 * _tmp253 +
                                                 _tmp230 * _tmp251 + _tmp231 * _tmp254));
  const Scalar _tmp265 = std::asinh(_tmp255 * _tmp263);
  const Scalar _tmp266 = Scalar(1.0) * _tmp265;
  const Scalar _tmp267 = Scalar(1.0) * std::cosh(_tmp266);
  const Scalar _tmp268 = -_tmp31 + p_a(1, 0);
  const Scalar _tmp269 = -_tmp18 + p_a(0, 0);
  const Scalar _tmp270 =
      std::sqrt(Scalar(std::pow(_tmp268, Scalar(2)) + std::pow(_tmp269, Scalar(2))));
  const Scalar _tmp271 = Scalar(1.4083112389913199) * _tmp265;
  const Scalar _tmp272 = -_tmp248 * _tmp271 - _tmp270;
  const Scalar _tmp273 = Scalar(0.71007031138673404) * _tmp249 * _tmp272;
  const Scalar _tmp274 = Scalar(1.4083112389913199) * _tmp248;
  const Scalar _tmp275 = Scalar(1.0) / (_tmp270);
  const Scalar _tmp276 = Scalar(0.71007031138673404) * _tmp263;
  const Scalar _tmp277 = _tmp272 * _tmp276;
  const Scalar _tmp278 = std::cosh(_tmp277);
  const Scalar _tmp279 = -Scalar(1.4083112389913199) * std::sinh(_tmp266) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp277);
  const Scalar _tmp280 = _tmp107 * _tmp118;
  const Scalar _tmp281 = _tmp127 * _tmp132;
  const Scalar _tmp282 = _tmp118 * _tmp218 + _tmp132 * _tmp202 - _tmp155 * _tmp176 -
                         _tmp187 * _tmp280 - _tmp187 * _tmp281 - _tmp258;
  const Scalar _tmp283 = _tmp118 * _tmp144;
  const Scalar _tmp284 = _tmp132 * _tmp144;
  const Scalar _tmp285 = -_tmp106 * _tmp283 - _tmp126 * _tmp284 - _tmp138 * _tmp153 -
                         _tmp149 * _tmp150 + _tmp156 * _tmp89 + _tmp250;
  const Scalar _tmp286 = _tmp108 * _tmp118 + _tmp128 * _tmp132 + _tmp246 + _tmp259;
  const Scalar _tmp287 = Scalar(1.0) / (_tmp286);
  const Scalar _tmp288 = std::asinh(_tmp285 * _tmp287);
  const Scalar _tmp289 = Scalar(1.0) * _tmp288;
  const Scalar _tmp290 = Scalar(1.4083112389913199) * _tmp286;
  const Scalar _tmp291 =
      -_tmp288 * _tmp290 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp292 = Scalar(0.71007031138673404) * _tmp287;
  const Scalar _tmp293 = _tmp291 * _tmp292;
  const Scalar _tmp294 = -Scalar(1.4083112389913199) * std::sinh(_tmp289) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp293);
  const Scalar _tmp295 = std::cosh(_tmp293);
  const Scalar _tmp296 = std::pow(_tmp286, Scalar(-2));
  const Scalar _tmp297 = Scalar(0.71007031138673404) * _tmp291 * _tmp296;
  const Scalar _tmp298 = Scalar(1.4083112389913199) * _tmp288;
  const Scalar _tmp299 =
      std::pow(Scalar(std::pow(_tmp285, Scalar(2)) * _tmp296 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp300 = _tmp285 * _tmp296;
  const Scalar _tmp301 =
      _tmp299 *
      (-_tmp282 * _tmp300 +
       _tmp287 * (-_tmp138 * _tmp226 + _tmp138 * _tmp229 - _tmp197 * _tmp284 + _tmp199 * _tmp284 -
                  _tmp201 * _tmp284 + _tmp209 * _tmp283 - _tmp210 * _tmp283 - _tmp217 * _tmp283));
  const Scalar _tmp302 = Scalar(1.0) * std::cosh(_tmp289);
  const Scalar _tmp303 = _tmp166 * _tmp33;
  const Scalar _tmp304 = -_tmp121 * _tmp168 + _tmp303 * _tmp69 - _tmp70;
  const Scalar _tmp305 = _tmp168 * _tmp44 - _tmp303 + _tmp35;
  const Scalar _tmp306 = _tmp171 * _tmp305;
  const Scalar _tmp307 = -_tmp304 * _tmp61 + _tmp306 * _tmp76;
  const Scalar _tmp308 = _tmp168 * _tmp71 - _tmp182;
  const Scalar _tmp309 = _tmp306 * _tmp74 - _tmp307 * _tmp82 - _tmp308 * _tmp61;
  const Scalar _tmp310 = _tmp104 * _tmp309;
  const Scalar _tmp311 = _tmp103 * _tmp310;
  const Scalar _tmp312 = _tmp211 * _tmp305;
  const Scalar _tmp313 = _tmp304 * _tmp99;
  const Scalar _tmp314 = _tmp312 * _tmp76;
  const Scalar _tmp315 = -_tmp308 * _tmp99 + _tmp312 * _tmp74 + _tmp313 * _tmp82 - _tmp314 * _tmp82;
  const Scalar _tmp316 = _tmp168 * _tmp30 + _tmp168 * _tmp94 - _tmp17 * _tmp303 + _tmp17 * _tmp35;
  const Scalar _tmp317 = _tmp306 * _tmp97 - _tmp316 * _tmp61;
  const Scalar _tmp318 = _tmp186 * _tmp309;
  const Scalar _tmp319 = _tmp105 * (-_tmp102 * _tmp317 - _tmp195 * _tmp315 + _tmp216 * _tmp318 +
                                    _tmp312 * _tmp97 - _tmp316 * _tmp99);
  const Scalar _tmp320 = _tmp175 * _tmp317;
  const Scalar _tmp321 = _tmp320 * _tmp83;
  const Scalar _tmp322 = _tmp103 * _tmp321;
  const Scalar _tmp323 = _tmp311 + _tmp315 + _tmp319 - _tmp322;
  const Scalar _tmp324 = _tmp223 * _tmp309;
  const Scalar _tmp325 = _tmp107 * _tmp324 - _tmp108 * _tmp307 - _tmp157 * _tmp323 +
                         _tmp159 * _tmp311 + _tmp159 * _tmp319 - _tmp159 * _tmp322 - _tmp313 +
                         _tmp314;
  const Scalar _tmp326 = -_tmp307 * _tmp87 + _tmp324 * _tmp86;
  const Scalar _tmp327 = _tmp170 * _tmp305;
  const Scalar _tmp328 = _tmp327 * _tmp44;
  const Scalar _tmp329 = _tmp120 * _tmp304 - _tmp328 * _tmp76;
  const Scalar _tmp330 = _tmp120 * _tmp308 - _tmp328 * _tmp74 - _tmp329 * _tmp82;
  const Scalar _tmp331 = _tmp105 * (_tmp120 * _tmp316 - _tmp124 * _tmp317 - _tmp195 * _tmp330 +
                                    _tmp196 * _tmp318 - _tmp328 * _tmp97);
  const Scalar _tmp332 = _tmp125 * _tmp310;
  const Scalar _tmp333 = _tmp125 * _tmp321;
  const Scalar _tmp334 = _tmp330 + _tmp331 + _tmp332 - _tmp333;
  const Scalar _tmp335 = _tmp127 * _tmp324 - _tmp128 * _tmp307 - _tmp157 * _tmp334 +
                         _tmp159 * _tmp331 + _tmp159 * _tmp332 - _tmp159 * _tmp333 + _tmp329;
  const Scalar _tmp336 =
      -_tmp137 * _tmp307 + _tmp146 * _tmp310 - _tmp146 * _tmp321 + _tmp227 * _tmp320;
  const Scalar _tmp337 = _tmp145 * _tmp310;
  const Scalar _tmp338 = _tmp145 * _tmp321;
  const Scalar _tmp339 = _tmp58 * _tmp84;
  const Scalar _tmp340 = _tmp327 * _tmp36;
  const Scalar _tmp341 = _tmp318 * _tmp60;
  const Scalar _tmp342 = _tmp60 * _tmp84;
  const Scalar _tmp343 = _tmp127 * _tmp341 - _tmp334 * _tmp342;
  const Scalar _tmp344 = _tmp318 * _tmp58;
  const Scalar _tmp345 = _tmp134 * _tmp320;
  const Scalar _tmp346 = _tmp107 * _tmp341 - _tmp323 * _tmp342;
  const Scalar _tmp347 =
      -_tmp119 * (-_tmp107 * _tmp344 + _tmp109 * _tmp168 * _tmp48 - _tmp109 * _tmp340 +
                  _tmp207 * _tmp346 + _tmp323 * _tmp339) -
      _tmp133 * (-_tmp127 * _tmp344 - _tmp129 * _tmp340 + _tmp168 * _tmp245 + _tmp207 * _tmp343 +
                 _tmp334 * _tmp339) -
      _tmp139 * (-_tmp135 * _tmp168 - _tmp177 * _tmp320 + _tmp179 * _tmp306 + _tmp345 * _tmp36) -
      _tmp92 * (-_tmp168 * _tmp88 + _tmp188 * _tmp318 + _tmp189 * _tmp306 - _tmp344 * _tmp86);
  const Scalar _tmp348 = _tmp165 * (-_tmp221 * _tmp347 +
                                    _tmp222 * (_tmp155 * (-_tmp152 * _tmp336 + _tmp337 - _tmp338) +
                                               _tmp161 * (_tmp145 * _tmp331 + _tmp145 * _tmp332 -
                                                          _tmp145 * _tmp333 - _tmp152 * _tmp335) +
                                               _tmp163 * (_tmp145 * _tmp311 + _tmp145 * _tmp319 -
                                                          _tmp145 * _tmp322 - _tmp152 * _tmp325) -
                                               _tmp232 * _tmp326));
  const Scalar _tmp349 = Scalar(1.4083112389913199) * _tmp347;
  const Scalar _tmp350 = _tmp257 * _tmp318;
  const Scalar _tmp351 = -_tmp109 * _tmp118 * _tmp327 - _tmp129 * _tmp132 * _tmp327 +
                         _tmp138 * _tmp345 + _tmp246 * _tmp306 + _tmp247 * _tmp346 +
                         _tmp259 * _tmp306 + _tmp260 * _tmp343 + _tmp350 * _tmp61;
  const Scalar _tmp352 =
      _tmp256 * (-_tmp262 * _tmp351 + _tmp263 * (_tmp251 * _tmp335 + _tmp252 * _tmp325 +
                                                 _tmp253 * _tmp336 + _tmp254 * _tmp326));
  const Scalar _tmp353 = _tmp118 * _tmp323 * _tmp84 + _tmp132 * _tmp334 * _tmp84 -
                         _tmp155 * _tmp320 - _tmp280 * _tmp318 - _tmp281 * _tmp318 - _tmp350;
  const Scalar _tmp354 =
      _tmp299 *
      (_tmp287 * (-_tmp138 * _tmp337 + _tmp138 * _tmp338 - _tmp283 * _tmp311 - _tmp283 * _tmp319 +
                  _tmp283 * _tmp322 - _tmp284 * _tmp331 - _tmp284 * _tmp332 + _tmp284 * _tmp333) -
       _tmp300 * _tmp353);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp237 *
          (-_tmp233 * _tmp236 -
           _tmp241 * (-_tmp220 * _tmp242 + _tmp239 * (-_tmp233 * _tmp237 - _tmp234 * _tmp243))) +
      _tmp243 * _tmp244;
  _res(2, 0) =
      _tmp261 * _tmp279 +
      _tmp274 * (-_tmp264 * _tmp267 -
                 _tmp278 * (-_tmp261 * _tmp273 + _tmp276 * (-_tmp261 * _tmp271 - _tmp264 * _tmp274 -
                                                            _tmp269 * _tmp275)));
  _res(3, 0) =
      _tmp282 * _tmp294 +
      _tmp290 *
          (-_tmp295 * (-_tmp282 * _tmp297 + _tmp292 * (-_tmp282 * _tmp298 - _tmp290 * _tmp301)) -
           _tmp301 * _tmp302);
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp237 *
          (-_tmp236 * _tmp348 -
           _tmp241 * (_tmp239 * (-_tmp234 * _tmp349 - _tmp237 * _tmp348) - _tmp242 * _tmp347)) +
      _tmp244 * _tmp349;
  _res(2, 1) =
      _tmp274 * (-_tmp267 * _tmp352 -
                 _tmp278 * (-_tmp273 * _tmp351 + _tmp276 * (-_tmp268 * _tmp275 - _tmp271 * _tmp351 -
                                                            _tmp274 * _tmp352))) +
      _tmp279 * _tmp351;
  _res(3, 1) =
      _tmp290 *
          (-_tmp295 * (_tmp292 * (-_tmp290 * _tmp354 - _tmp298 * _tmp353) - _tmp297 * _tmp353) -
           _tmp302 * _tmp354) +
      _tmp294 * _tmp353;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym