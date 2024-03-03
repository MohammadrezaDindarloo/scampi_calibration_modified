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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl23
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl23(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1154

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (358)
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
  const Scalar _tmp9 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp10 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp11 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp12 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp13 = _tmp1 * _tmp5;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_b(0, 0);
  const Scalar _tmp20 = _tmp2 * _tmp4;
  const Scalar _tmp21 = _tmp0 * _tmp5;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = _tmp23 + _tmp27;
  const Scalar _tmp29 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp32 = _tmp20 - _tmp21;
  const Scalar _tmp33 = -Scalar(0.010999999999999999) * _tmp32;
  const Scalar _tmp34 = -_tmp31 + _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(1, 0);
  const Scalar _tmp37 = _tmp36 - p_b(1, 0);
  const Scalar _tmp38 = std::pow(_tmp37, Scalar(2));
  const Scalar _tmp39 = _tmp29 + _tmp38;
  const Scalar _tmp40 = std::pow(_tmp39, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp28 * _tmp40;
  const Scalar _tmp42 = _tmp22 + _tmp27;
  const Scalar _tmp43 = _tmp40 * _tmp42;
  const Scalar _tmp44 = _tmp19 * _tmp43;
  const Scalar _tmp45 = -_tmp19 * _tmp41 + _tmp44;
  const Scalar _tmp46 = -_tmp30;
  const Scalar _tmp47 = _tmp34 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 - p_a(1, 0);
  const Scalar _tmp50 = -_tmp11 + _tmp15;
  const Scalar _tmp51 = _tmp50 + _tmp8;
  const Scalar _tmp52 = _tmp51 + position_vector(0, 0);
  const Scalar _tmp53 = _tmp52 - p_a(0, 0);
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp49 * _tmp54;
  const Scalar _tmp56 = _tmp16 + _tmp7;
  const Scalar _tmp57 = _tmp56 + position_vector(0, 0);
  const Scalar _tmp58 = _tmp57 - p_c(0, 0);
  const Scalar _tmp59 = Scalar(1.0) / (_tmp58);
  const Scalar _tmp60 = _tmp31 + _tmp33;
  const Scalar _tmp61 = _tmp30 + _tmp60;
  const Scalar _tmp62 = _tmp61 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_c(1, 0);
  const Scalar _tmp64 = _tmp59 * _tmp63;
  const Scalar _tmp65 = _tmp53 * _tmp54;
  const Scalar _tmp66 = -_tmp55 + _tmp64 * _tmp65;
  const Scalar _tmp67 = std::pow(_tmp39, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp68 = _tmp19 * _tmp37 * _tmp67;
  const Scalar _tmp69 = _tmp40 * _tmp64;
  const Scalar _tmp70 = _tmp29 * _tmp67;
  const Scalar _tmp71 = _tmp37 * _tmp40;
  const Scalar _tmp72 = _tmp19 * _tmp69 - _tmp71;
  const Scalar _tmp73 = std::pow(_tmp72, Scalar(-2));
  const Scalar _tmp74 = _tmp73 * (_tmp64 * _tmp70 - _tmp68 - _tmp69);
  const Scalar _tmp75 = _tmp66 * _tmp74;
  const Scalar _tmp76 = -_tmp28 * _tmp70 + _tmp41 + _tmp42 * _tmp70 - _tmp43;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp78 = _tmp66 * _tmp77;
  const Scalar _tmp79 = _tmp42 * _tmp64;
  const Scalar _tmp80 = _tmp28 * _tmp68;
  const Scalar _tmp81 = _tmp43 * _tmp64 - _tmp70 * _tmp79 + _tmp80;
  const Scalar _tmp82 = _tmp28 * _tmp71 - _tmp44 * _tmp64;
  const Scalar _tmp83 = _tmp75 * _tmp82 - _tmp78 * _tmp81;
  const Scalar _tmp84 = Scalar(1.0) * _tmp61;
  const Scalar _tmp85 = -_tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp35 + _tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp56;
  const Scalar _tmp88 = -_tmp17 + _tmp87;
  const Scalar _tmp89 = _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp45 * _tmp75 - _tmp76 * _tmp78 - _tmp83 * _tmp89;
  const Scalar _tmp91 = _tmp25 - _tmp26;
  const Scalar _tmp92 = _tmp23 + _tmp91;
  const Scalar _tmp93 = _tmp55 * _tmp92 - _tmp65 * _tmp79 - _tmp78 * _tmp82;
  const Scalar _tmp94 = _tmp42 * _tmp65 - _tmp45 * _tmp78 - _tmp65 * _tmp92 - _tmp89 * _tmp93;
  const Scalar _tmp95 = std::pow(_tmp94, Scalar(-2));
  const Scalar _tmp96 = _tmp90 * _tmp95;
  const Scalar _tmp97 = _tmp84 * _tmp89 + _tmp87;
  const Scalar _tmp98 = 0;
  const Scalar _tmp99 = _tmp19 * _tmp40;
  const Scalar _tmp100 = _tmp78 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp103 = _tmp102 * _tmp98;
  const Scalar _tmp104 = _tmp103 * _tmp78;
  const Scalar _tmp105 = _tmp65 * _tmp96;
  const Scalar _tmp106 = _tmp40 * _tmp78;
  const Scalar _tmp107 = _tmp102 * _tmp66;
  const Scalar _tmp108 = _tmp107 * _tmp98;
  const Scalar _tmp109 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp110 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp63, Scalar(2))));
  const Scalar _tmp111 = _tmp110 * _tmp59;
  const Scalar _tmp112 = _tmp109 * _tmp111;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp114 = _tmp111 * (_tmp113 * _tmp56 * _tmp63 - _tmp113 * _tmp58 * _tmp61);
  const Scalar _tmp115 = _tmp114 * _tmp40;
  const Scalar _tmp116 = _tmp35 * _tmp40;
  const Scalar _tmp117 = _tmp114 * _tmp70 - _tmp115 - _tmp116 - _tmp17 * _tmp68 + _tmp35 * _tmp70;
  const Scalar _tmp118 = _tmp115 * _tmp19 + _tmp116 * _tmp19 - _tmp17 * _tmp71;
  const Scalar _tmp119 = -_tmp117 * _tmp78 + _tmp118 * _tmp75;
  const Scalar _tmp120 = _tmp114 * _tmp65 - _tmp118 * _tmp78 + _tmp47 * _tmp65 - _tmp51 * _tmp55;
  const Scalar _tmp121 = std::pow(_tmp120, Scalar(-2));
  const Scalar _tmp122 = Scalar(1.0) * _tmp121;
  const Scalar _tmp123 = _tmp100 * _tmp122;
  const Scalar _tmp124 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp125 = Scalar(1.0) * _tmp124;
  const Scalar _tmp126 = _tmp125 * _tmp78;
  const Scalar _tmp127 = _tmp125 * _tmp99;
  const Scalar _tmp128 = _tmp122 * _tmp65;
  const Scalar _tmp129 = _tmp50 + _tmp7;
  const Scalar _tmp130 = _tmp129 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp131 = _tmp46 + _tmp60;
  const Scalar _tmp132 = _tmp131 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp133 =
      std::pow(Scalar(std::pow(_tmp130, Scalar(2)) + std::pow(_tmp132, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp134 = _tmp132 * _tmp133;
  const Scalar _tmp135 = _tmp130 * _tmp133;
  const Scalar _tmp136 = fh1 * (_tmp129 * _tmp134 - _tmp131 * _tmp135);
  const Scalar _tmp137 = _tmp111 * _tmp136;
  const Scalar _tmp138 = _tmp64 * _tmp77;
  const Scalar _tmp139 = _tmp138 * _tmp82 + _tmp79;
  const Scalar _tmp140 = _tmp138 * _tmp45 - _tmp139 * _tmp89 - _tmp42;
  const Scalar _tmp141 = _tmp102 * _tmp120;
  const Scalar _tmp142 = -_tmp114 + _tmp118 * _tmp138 - _tmp140 * _tmp141;
  const Scalar _tmp143 = _tmp124 * _tmp94;
  const Scalar _tmp144 = _tmp142 * _tmp143;
  const Scalar _tmp145 = _tmp140 + _tmp144;
  const Scalar _tmp146 = -_tmp107 * _tmp145 - _tmp64;
  const Scalar _tmp147 = _tmp70 * _tmp77;
  const Scalar _tmp148 = _tmp124 * _tmp90;
  const Scalar _tmp149 = _tmp142 * _tmp148;
  const Scalar _tmp150 = _tmp102 * _tmp119;
  const Scalar _tmp151 = _tmp120 * _tmp96;
  const Scalar _tmp152 = _tmp118 * _tmp64;
  const Scalar _tmp153 = _tmp64 * _tmp74;
  const Scalar _tmp154 = _tmp138 * _tmp81 - _tmp153 * _tmp82;
  const Scalar _tmp155 = _tmp138 * _tmp76 - _tmp153 * _tmp45 - _tmp154 * _tmp89;
  const Scalar _tmp156 = _tmp143 * (_tmp117 * _tmp138 - _tmp140 * _tmp150 + _tmp140 * _tmp151 -
                                    _tmp141 * _tmp155 - _tmp152 * _tmp74);
  const Scalar _tmp157 = _tmp121 * _tmp94;
  const Scalar _tmp158 = _tmp119 * _tmp157;
  const Scalar _tmp159 = _tmp142 * _tmp158;
  const Scalar _tmp160 = _tmp149 + _tmp155 + _tmp156 - _tmp159;
  const Scalar _tmp161 = _tmp102 * _tmp65;
  const Scalar _tmp162 = _tmp40 * _tmp77;
  const Scalar _tmp163 = _tmp146 * _tmp162;
  const Scalar _tmp164 = _tmp146 * _tmp74;
  const Scalar _tmp165 = _tmp145 * _tmp96;
  const Scalar _tmp166 = -_tmp107 * _tmp160 + _tmp165 * _tmp66;
  const Scalar _tmp167 = _tmp162 * _tmp19;
  const Scalar _tmp168 = _tmp135 * fh1;
  const Scalar _tmp169 = _tmp111 * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) * _tmp77;
  const Scalar _tmp171 = Scalar(1.0) * _tmp86;
  const Scalar _tmp172 = _tmp171 * _tmp88;
  const Scalar _tmp173 = _tmp172 * _tmp77;
  const Scalar _tmp174 = -_tmp170 * _tmp45 + _tmp173 * _tmp82;
  const Scalar _tmp175 = -_tmp118 * _tmp170 - _tmp141 * _tmp174;
  const Scalar _tmp176 = _tmp143 * _tmp175;
  const Scalar _tmp177 = _tmp174 + _tmp176;
  const Scalar _tmp178 = -_tmp107 * _tmp177 + Scalar(1.0);
  const Scalar _tmp179 = _tmp158 * _tmp175;
  const Scalar _tmp180 = _tmp172 * _tmp82;
  const Scalar _tmp181 = Scalar(1.0) * _tmp45;
  const Scalar _tmp182 = -_tmp170 * _tmp76 + _tmp173 * _tmp81 - _tmp180 * _tmp74 + _tmp181 * _tmp74;
  const Scalar _tmp183 = Scalar(1.0) * _tmp74;
  const Scalar _tmp184 = _tmp143 * (-_tmp117 * _tmp170 + _tmp118 * _tmp183 - _tmp141 * _tmp182 -
                                    _tmp150 * _tmp174 + _tmp151 * _tmp174);
  const Scalar _tmp185 = _tmp148 * _tmp175;
  const Scalar _tmp186 = -_tmp179 + _tmp182 + _tmp184 + _tmp185;
  const Scalar _tmp187 = _tmp177 * _tmp66;
  const Scalar _tmp188 = -_tmp107 * _tmp186 + _tmp187 * _tmp96;
  const Scalar _tmp189 = _tmp178 * _tmp74;
  const Scalar _tmp190 = _tmp162 * _tmp178;
  const Scalar _tmp191 = _tmp134 * fh1;
  const Scalar _tmp192 = _tmp111 * _tmp191;
  const Scalar _tmp193 = -_tmp112 * (_tmp101 * _tmp96 + _tmp103 * _tmp106 - _tmp104 * _tmp70 -
                                     _tmp105 * _tmp98 + _tmp108 * _tmp74 * _tmp99) -
                         _tmp137 * (_tmp106 * _tmp125 + _tmp119 * _tmp123 - _tmp119 * _tmp128 -
                                    _tmp126 * _tmp70 + _tmp127 * _tmp75) -
                         _tmp169 * (_tmp146 * _tmp147 + _tmp160 * _tmp161 - _tmp163 -
                                    _tmp164 * _tmp99 - _tmp165 * _tmp65 + _tmp166 * _tmp167) -
                         _tmp192 * (-_tmp105 * _tmp177 + _tmp147 * _tmp178 + _tmp161 * _tmp186 +
                                    _tmp167 * _tmp188 - _tmp189 * _tmp99 - _tmp190);
  const Scalar _tmp194 = _tmp47 + _tmp85;
  const Scalar _tmp195 = _tmp194 * _tmp89;
  const Scalar _tmp196 = Scalar(1.0) / (-_tmp195 - _tmp51 + _tmp87);
  const Scalar _tmp197 = _tmp196 * _tmp97;
  const Scalar _tmp198 = _tmp102 * _tmp93;
  const Scalar _tmp199 = -_tmp194 * _tmp197 - _tmp198 * _tmp98 + _tmp85;
  const Scalar _tmp200 = Scalar(1.0) * _tmp196;
  const Scalar _tmp201 = _tmp194 * _tmp86;
  const Scalar _tmp202 = fh1 * (_tmp22 + _tmp91);
  const Scalar _tmp203 = _tmp129 * fv1 + _tmp135 * _tmp202 + Scalar(40.024799999999999) * _tmp14;
  const Scalar _tmp204 = _tmp194 * _tmp196;
  const Scalar _tmp205 = _tmp139 + _tmp144 * _tmp204 - _tmp145 * _tmp198;
  const Scalar _tmp206 = Scalar(1.0) * _tmp168;
  const Scalar _tmp207 = -_tmp170 * _tmp82 + _tmp176 * _tmp204 - _tmp177 * _tmp198;
  const Scalar _tmp208 = Scalar(1.0) * _tmp191;
  const Scalar _tmp209 = -_tmp131 * fv1 - _tmp134 * _tmp202 - Scalar(40.024799999999999) * _tmp32;
  const Scalar _tmp210 = _tmp195 * _tmp200 + Scalar(1.0);
  const Scalar _tmp211 = _tmp200 * _tmp89;
  const Scalar _tmp212 = _tmp143 * _tmp200;
  const Scalar _tmp213 = -_tmp125 * _tmp93 + _tmp194 * _tmp212;
  const Scalar _tmp214 = Scalar(1.0) * _tmp136;
  const Scalar _tmp215 =
      Scalar(1.0) * _tmp109 * (-_tmp171 * _tmp199 - _tmp200 * _tmp97 + Scalar(1.0)) +
      Scalar(1.0) * _tmp203 * (_tmp200 * _tmp201 - _tmp200) +
      _tmp206 * (_tmp144 * _tmp200 - _tmp171 * _tmp205) +
      _tmp208 * (-_tmp171 * _tmp207 + _tmp176 * _tmp200) +
      Scalar(1.0) * _tmp209 * (-_tmp171 * _tmp210 + _tmp211) +
      _tmp214 * (-_tmp171 * _tmp213 + _tmp212);
  const Scalar _tmp216 = -_tmp112 * (-_tmp104 * _tmp99 + _tmp161 * _tmp98) -
                         _tmp137 * (_tmp125 * _tmp65 - _tmp126 * _tmp99) -
                         _tmp169 * (_tmp145 * _tmp161 + _tmp163 * _tmp19 + Scalar(1.0)) -
                         _tmp192 * (_tmp161 * _tmp177 + _tmp19 * _tmp190);
  const Scalar _tmp217 = Scalar(1.0) / (_tmp216);
  const Scalar _tmp218 = std::asinh(_tmp215 * _tmp217);
  const Scalar _tmp219 = Scalar(1.0) * _tmp218;
  const Scalar _tmp220 = Scalar(1.4083112389913199) * _tmp218;
  const Scalar _tmp221 =
      -_tmp216 * _tmp220 - std::sqrt(Scalar(std::pow(Scalar(-_tmp57 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp62 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp222 = Scalar(0.71007031138673404) * _tmp217;
  const Scalar _tmp223 = _tmp221 * _tmp222;
  const Scalar _tmp224 = -Scalar(1.4083112389913199) * std::sinh(_tmp219) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp223);
  const Scalar _tmp225 = Scalar(1.4083112389913199) * _tmp216;
  const Scalar _tmp226 = _tmp158 * _tmp200;
  const Scalar _tmp227 = _tmp148 * _tmp200;
  const Scalar _tmp228 = _tmp122 * _tmp93;
  const Scalar _tmp229 =
      _tmp119 * _tmp228 - _tmp125 * _tmp83 - _tmp194 * _tmp226 + _tmp194 * _tmp227;
  const Scalar _tmp230 = _tmp102 * _tmp83;
  const Scalar _tmp231 = -_tmp145 * _tmp230 + _tmp149 * _tmp204 + _tmp154 + _tmp156 * _tmp204 -
                         _tmp159 * _tmp204 - _tmp160 * _tmp198 + _tmp165 * _tmp93;
  const Scalar _tmp232 = _tmp177 * _tmp93;
  const Scalar _tmp233 = -_tmp170 * _tmp81 - _tmp177 * _tmp230 - _tmp179 * _tmp204 +
                         _tmp183 * _tmp82 + _tmp184 * _tmp204 + _tmp185 * _tmp204 -
                         _tmp186 * _tmp198 + _tmp232 * _tmp96;
  const Scalar _tmp234 = _tmp93 * _tmp98;
  const Scalar _tmp235 = -_tmp230 * _tmp98 + _tmp234 * _tmp96;
  const Scalar _tmp236 = _tmp109 * _tmp171;
  const Scalar _tmp237 = std::pow(_tmp216, Scalar(-2));
  const Scalar _tmp238 = _tmp215 * _tmp237;
  const Scalar _tmp239 =
      std::pow(Scalar(std::pow(_tmp215, Scalar(2)) * _tmp237 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp240 = _tmp239 * (-_tmp193 * _tmp238 +
                                    _tmp217 * (_tmp206 * (_tmp149 * _tmp200 + _tmp156 * _tmp200 -
                                                          _tmp159 * _tmp200 - _tmp171 * _tmp231) +
                                               _tmp208 * (-_tmp171 * _tmp233 - _tmp179 * _tmp200 +
                                                          _tmp184 * _tmp200 + _tmp185 * _tmp200) +
                                               _tmp214 * (-_tmp171 * _tmp229 - _tmp226 + _tmp227) -
                                               _tmp235 * _tmp236));
  const Scalar _tmp241 = Scalar(0.71007031138673404) * _tmp221 * _tmp237;
  const Scalar _tmp242 = std::cosh(_tmp223);
  const Scalar _tmp243 = Scalar(1.0) * std::cosh(_tmp219);
  const Scalar _tmp244 = -_tmp18 + p_b(0, 0);
  const Scalar _tmp245 = -_tmp28 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp246 = -_tmp36 + p_b(1, 0);
  const Scalar _tmp247 = std::pow(_tmp244, Scalar(2)) + std::pow(_tmp246, Scalar(2));
  const Scalar _tmp248 =
      std::pow(Scalar(std::pow(_tmp245, Scalar(2)) + _tmp247), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp249 = _tmp109 * _tmp86;
  const Scalar _tmp250 = _tmp191 * _tmp86;
  const Scalar _tmp251 = _tmp136 * _tmp86;
  const Scalar _tmp252 = _tmp168 * _tmp86;
  const Scalar _tmp253 = _tmp200 * _tmp203;
  const Scalar _tmp254 = _tmp199 * _tmp249 - _tmp201 * _tmp253 + _tmp205 * _tmp252 +
                         _tmp207 * _tmp250 + _tmp209 * _tmp210 * _tmp86 + _tmp213 * _tmp251;
  const Scalar _tmp255 = _tmp178 * _tmp77;
  const Scalar _tmp256 = _tmp168 * _tmp77;
  const Scalar _tmp257 = _tmp109 * _tmp98;
  const Scalar _tmp258 = _tmp102 * _tmp257;
  const Scalar _tmp259 = _tmp125 * _tmp136;
  const Scalar _tmp260 =
      _tmp146 * _tmp256 + _tmp191 * _tmp255 - _tmp258 * _tmp78 - _tmp259 * _tmp78;
  const Scalar _tmp261 = std::pow(_tmp260, Scalar(-2));
  const Scalar _tmp262 =
      std::pow(Scalar(std::pow(_tmp254, Scalar(2)) * _tmp261 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp263 = _tmp107 * _tmp257;
  const Scalar _tmp264 = _tmp122 * _tmp136;
  const Scalar _tmp265 = _tmp119 * _tmp264;
  const Scalar _tmp266 = _tmp191 * _tmp77;
  const Scalar _tmp267 = _tmp257 * _tmp96;
  const Scalar _tmp268 = -_tmp164 * _tmp168 + _tmp166 * _tmp256 + _tmp188 * _tmp266 -
                         _tmp189 * _tmp191 + _tmp259 * _tmp75 + _tmp263 * _tmp74 +
                         _tmp265 * _tmp78 + _tmp267 * _tmp78;
  const Scalar _tmp269 = _tmp254 * _tmp261;
  const Scalar _tmp270 = Scalar(1.0) / (_tmp260);
  const Scalar _tmp271 =
      _tmp262 * (-_tmp268 * _tmp269 + _tmp270 * (_tmp229 * _tmp251 + _tmp231 * _tmp252 +
                                                 _tmp233 * _tmp250 + _tmp235 * _tmp249));
  const Scalar _tmp272 = std::asinh(_tmp254 * _tmp270);
  const Scalar _tmp273 = Scalar(1.0) * _tmp272;
  const Scalar _tmp274 = Scalar(1.0) * std::cosh(_tmp273);
  const Scalar _tmp275 = Scalar(1.4083112389913199) * _tmp260;
  const Scalar _tmp276 = std::sqrt(_tmp247);
  const Scalar _tmp277 = Scalar(1.0) / (_tmp276);
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp272;
  const Scalar _tmp279 = Scalar(0.71007031138673404) * _tmp270;
  const Scalar _tmp280 = -_tmp260 * _tmp278 - _tmp276;
  const Scalar _tmp281 = Scalar(0.71007031138673404) * _tmp261 * _tmp280;
  const Scalar _tmp282 = _tmp279 * _tmp280;
  const Scalar _tmp283 = std::cosh(_tmp282);
  const Scalar _tmp284 = -Scalar(1.4083112389913199) * std::sinh(_tmp273) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp282);
  const Scalar _tmp285 = _tmp102 * fh1;
  const Scalar _tmp286 = _tmp134 * _tmp285;
  const Scalar _tmp287 = _tmp177 * _tmp191;
  const Scalar _tmp288 = _tmp135 * _tmp285;
  const Scalar _tmp289 = _tmp160 * _tmp288 - _tmp165 * _tmp168 + _tmp186 * _tmp286 - _tmp265 -
                         _tmp267 - _tmp287 * _tmp96;
  const Scalar _tmp290 = _tmp168 * _tmp196;
  const Scalar _tmp291 = _tmp191 * _tmp196;
  const Scalar _tmp292 = _tmp109 * _tmp197 - _tmp136 * _tmp212 - _tmp144 * _tmp290 -
                         _tmp176 * _tmp291 - _tmp209 * _tmp211 + _tmp253;
  const Scalar _tmp293 = _tmp145 * _tmp288 + _tmp177 * _tmp286 + _tmp258 + _tmp259;
  const Scalar _tmp294 = Scalar(1.0) / (_tmp293);
  const Scalar _tmp295 = std::asinh(_tmp292 * _tmp294);
  const Scalar _tmp296 = Scalar(1.4083112389913199) * _tmp293;
  const Scalar _tmp297 =
      -_tmp295 * _tmp296 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_a(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp52 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp298 = Scalar(0.71007031138673404) * _tmp294;
  const Scalar _tmp299 = _tmp297 * _tmp298;
  const Scalar _tmp300 = Scalar(1.0) * _tmp295;
  const Scalar _tmp301 = -Scalar(1.4083112389913199) * std::sinh(_tmp299) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp300);
  const Scalar _tmp302 = std::pow(_tmp293, Scalar(-2));
  const Scalar _tmp303 = _tmp292 * _tmp302;
  const Scalar _tmp304 =
      -_tmp289 * _tmp303 +
      _tmp294 * (_tmp136 * _tmp226 - _tmp136 * _tmp227 - _tmp149 * _tmp290 - _tmp156 * _tmp290 +
                 _tmp159 * _tmp290 + _tmp179 * _tmp291 - _tmp184 * _tmp291 - _tmp185 * _tmp291);
  const Scalar _tmp305 =
      std::pow(Scalar(std::pow(_tmp292, Scalar(2)) * _tmp302 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp306 = Scalar(1.0) * _tmp305 * std::cosh(_tmp300);
  const Scalar _tmp307 = std::cosh(_tmp299);
  const Scalar _tmp308 = Scalar(1.4083112389913199) * _tmp295;
  const Scalar _tmp309 = _tmp296 * _tmp305;
  const Scalar _tmp310 = Scalar(0.71007031138673404) * _tmp297 * _tmp302;
  const Scalar _tmp311 = _tmp38 * _tmp67;
  const Scalar _tmp312 = _tmp73 * (-_tmp311 + _tmp40 + _tmp64 * _tmp68);
  const Scalar _tmp313 = _tmp312 * _tmp66;
  const Scalar _tmp314 = _tmp114 * _tmp68 - _tmp17 * _tmp311 + _tmp17 * _tmp40 + _tmp35 * _tmp68;
  const Scalar _tmp315 = _tmp118 * _tmp313 - _tmp314 * _tmp78;
  const Scalar _tmp316 = _tmp28 * _tmp311 - _tmp41 - _tmp68 * _tmp79;
  const Scalar _tmp317 = _tmp313 * _tmp82 - _tmp316 * _tmp78;
  const Scalar _tmp318 = _tmp42 * _tmp68 - _tmp80;
  const Scalar _tmp319 = _tmp313 * _tmp45 - _tmp317 * _tmp89 - _tmp318 * _tmp78;
  const Scalar _tmp320 = _tmp319 * _tmp95;
  const Scalar _tmp321 = _tmp145 * _tmp320;
  const Scalar _tmp322 = _tmp312 * _tmp99;
  const Scalar _tmp323 = _tmp157 * _tmp315;
  const Scalar _tmp324 = _tmp142 * _tmp323;
  const Scalar _tmp325 = _tmp124 * _tmp319;
  const Scalar _tmp326 = _tmp142 * _tmp325;
  const Scalar _tmp327 = _tmp102 * _tmp315;
  const Scalar _tmp328 = _tmp120 * _tmp320;
  const Scalar _tmp329 = _tmp312 * _tmp64;
  const Scalar _tmp330 = _tmp138 * _tmp316 - _tmp329 * _tmp82;
  const Scalar _tmp331 = _tmp138 * _tmp318 - _tmp329 * _tmp45 - _tmp330 * _tmp89;
  const Scalar _tmp332 = _tmp143 * (_tmp138 * _tmp314 - _tmp140 * _tmp327 + _tmp140 * _tmp328 -
                                    _tmp141 * _tmp331 - _tmp152 * _tmp312);
  const Scalar _tmp333 = -_tmp324 + _tmp326 + _tmp331 + _tmp332;
  const Scalar _tmp334 = -_tmp107 * _tmp333 + _tmp321 * _tmp66;
  const Scalar _tmp335 = _tmp320 * _tmp65;
  const Scalar _tmp336 =
      -_tmp170 * _tmp318 + _tmp173 * _tmp316 - _tmp180 * _tmp312 + _tmp181 * _tmp312;
  const Scalar _tmp337 = Scalar(1.0) * _tmp312;
  const Scalar _tmp338 = _tmp143 * (_tmp118 * _tmp337 - _tmp141 * _tmp336 - _tmp170 * _tmp314 -
                                    _tmp174 * _tmp327 + _tmp174 * _tmp328);
  const Scalar _tmp339 = _tmp175 * _tmp323;
  const Scalar _tmp340 = _tmp175 * _tmp325;
  const Scalar _tmp341 = _tmp336 + _tmp338 - _tmp339 + _tmp340;
  const Scalar _tmp342 = -_tmp107 * _tmp341 + _tmp187 * _tmp320;
  const Scalar _tmp343 =
      -_tmp112 * (_tmp101 * _tmp320 - _tmp104 * _tmp68 + _tmp108 * _tmp322 - _tmp335 * _tmp98) -
      _tmp137 * (_tmp123 * _tmp315 - _tmp126 * _tmp68 + _tmp127 * _tmp313 - _tmp128 * _tmp315) -
      _tmp169 * (-_tmp146 * _tmp322 + _tmp146 * _tmp68 * _tmp77 + _tmp161 * _tmp333 +
                 _tmp167 * _tmp334 - _tmp321 * _tmp65) -
      _tmp192 * (_tmp161 * _tmp341 + _tmp167 * _tmp342 - _tmp177 * _tmp335 - _tmp178 * _tmp322 +
                 _tmp255 * _tmp68);
  const Scalar _tmp344 = _tmp200 * _tmp323;
  const Scalar _tmp345 = _tmp200 * _tmp325;
  const Scalar _tmp346 =
      -_tmp125 * _tmp317 - _tmp194 * _tmp344 + _tmp194 * _tmp345 + _tmp228 * _tmp315;
  const Scalar _tmp347 = _tmp102 * _tmp317;
  const Scalar _tmp348 = -_tmp145 * _tmp347 - _tmp198 * _tmp333 - _tmp204 * _tmp324 +
                         _tmp204 * _tmp326 + _tmp204 * _tmp332 + _tmp321 * _tmp93 + _tmp330;
  const Scalar _tmp349 = -_tmp170 * _tmp316 - _tmp177 * _tmp347 - _tmp198 * _tmp341 +
                         _tmp204 * _tmp338 - _tmp204 * _tmp339 + _tmp204 * _tmp340 +
                         _tmp232 * _tmp320 + _tmp337 * _tmp82;
  const Scalar _tmp350 = _tmp234 * _tmp320 - _tmp347 * _tmp98;
  const Scalar _tmp351 = _tmp239 * (_tmp217 * (_tmp206 * (-_tmp171 * _tmp348 - _tmp200 * _tmp324 +
                                                          _tmp200 * _tmp326 + _tmp200 * _tmp332) +
                                               _tmp208 * (-_tmp171 * _tmp349 + _tmp200 * _tmp338 -
                                                          _tmp200 * _tmp339 + _tmp200 * _tmp340) +
                                               _tmp214 * (-_tmp171 * _tmp346 - _tmp344 + _tmp345) -
                                               _tmp236 * _tmp350) -
                                    _tmp238 * _tmp343);
  const Scalar _tmp352 = _tmp264 * _tmp315;
  const Scalar _tmp353 = _tmp257 * _tmp320;
  const Scalar _tmp354 = -_tmp146 * _tmp168 * _tmp312 - _tmp178 * _tmp191 * _tmp312 +
                         _tmp256 * _tmp334 + _tmp259 * _tmp313 + _tmp263 * _tmp312 +
                         _tmp266 * _tmp342 + _tmp352 * _tmp78 + _tmp353 * _tmp78;
  const Scalar _tmp355 =
      _tmp262 * (-_tmp269 * _tmp354 + _tmp270 * (_tmp249 * _tmp350 + _tmp250 * _tmp349 +
                                                 _tmp251 * _tmp346 + _tmp252 * _tmp348));
  const Scalar _tmp356 = -_tmp168 * _tmp321 + _tmp286 * _tmp341 - _tmp287 * _tmp320 +
                         _tmp288 * _tmp333 - _tmp352 - _tmp353;
  const Scalar _tmp357 =
      _tmp294 * (_tmp136 * _tmp344 - _tmp136 * _tmp345 + _tmp290 * _tmp324 - _tmp290 * _tmp326 -
                 _tmp290 * _tmp332 - _tmp291 * _tmp338 + _tmp291 * _tmp339 - _tmp291 * _tmp340) -
      _tmp303 * _tmp356;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp193 * _tmp224 +
      _tmp225 *
          (-_tmp240 * _tmp243 -
           _tmp242 * (-_tmp193 * _tmp241 + _tmp222 * (-_tmp193 * _tmp220 - _tmp225 * _tmp240)));
  _res(2, 0) =
      -_tmp244 * _tmp248 + _tmp268 * _tmp284 +
      _tmp275 * (-_tmp271 * _tmp274 -
                 _tmp283 * (-_tmp268 * _tmp281 + _tmp279 * (-_tmp244 * _tmp277 - _tmp268 * _tmp278 -
                                                            _tmp271 * _tmp275)));
  _res(3, 0) =
      _tmp289 * _tmp301 +
      _tmp296 *
          (-_tmp304 * _tmp306 -
           _tmp307 * (-_tmp289 * _tmp310 + _tmp298 * (-_tmp289 * _tmp308 - _tmp304 * _tmp309)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp224 * _tmp343 +
      _tmp225 *
          (-_tmp242 * (_tmp222 * (-_tmp220 * _tmp343 - _tmp225 * _tmp351) - _tmp241 * _tmp343) -
           _tmp243 * _tmp351);
  _res(2, 1) =
      -_tmp246 * _tmp248 +
      _tmp275 * (-_tmp274 * _tmp355 -
                 _tmp283 * (_tmp279 * (-_tmp246 * _tmp277 - _tmp275 * _tmp355 - _tmp278 * _tmp354) -
                            _tmp281 * _tmp354)) +
      _tmp284 * _tmp354;
  _res(3, 1) =
      _tmp296 *
          (-_tmp306 * _tmp357 -
           _tmp307 * (_tmp298 * (-_tmp308 * _tmp356 - _tmp309 * _tmp357) - _tmp310 * _tmp356)) +
      _tmp301 * _tmp356;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp245 * _tmp248;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
