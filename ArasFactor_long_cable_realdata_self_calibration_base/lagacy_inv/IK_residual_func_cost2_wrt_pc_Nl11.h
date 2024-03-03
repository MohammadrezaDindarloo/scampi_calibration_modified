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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl11
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1151

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (362)
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
  const Scalar _tmp7 = 2 * _tmp0;
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp2 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp14 = _tmp0 * _tmp9;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = Scalar(1.0) * _tmp17;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp21 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = _tmp2 * _tmp7;
  const Scalar _tmp24 = _tmp6 * _tmp9;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = Scalar(1.0) * _tmp28;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = -_tmp22 + _tmp26;
  const Scalar _tmp32 = _tmp20 + _tmp31;
  const Scalar _tmp33 = _tmp30 + _tmp32;
  const Scalar _tmp34 = _tmp19 + _tmp27;
  const Scalar _tmp35 = Scalar(1.0) / (_tmp30 + _tmp34);
  const Scalar _tmp36 = _tmp16 + _tmp4;
  const Scalar _tmp37 = _tmp35 * (_tmp18 - _tmp36);
  const Scalar _tmp38 = _tmp33 * _tmp37;
  const Scalar _tmp39 = _tmp12 - _tmp15;
  const Scalar _tmp40 = _tmp39 + _tmp5;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp18 - _tmp38 - _tmp40);
  const Scalar _tmp42 = Scalar(1.0) * _tmp41;
  const Scalar _tmp43 = _tmp33 * _tmp35;
  const Scalar _tmp44 = _tmp39 + _tmp4;
  const Scalar _tmp45 = _tmp44 - p_b(0, 0) + position_vector(0, 0);
  const Scalar _tmp46 = _tmp19 + _tmp31;
  const Scalar _tmp47 = _tmp46 - p_b(1, 0) + position_vector(1, 0);
  const Scalar _tmp48 = std::pow(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp47, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp49 = _tmp45 * _tmp48;
  const Scalar _tmp50 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp51 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp53 = _tmp51 - _tmp52;
  const Scalar _tmp54 = fh1 * (_tmp50 + _tmp53);
  const Scalar _tmp55 = Scalar(40.024799999999999) * _tmp11 + _tmp44 * fv1 + _tmp49 * _tmp54;
  const Scalar _tmp56 = _tmp36 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_c(0, 0);
  const Scalar _tmp58 = std::pow(_tmp57, Scalar(2));
  const Scalar _tmp59 = _tmp34 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_c(1, 0);
  const Scalar _tmp61 = std::pow(_tmp60, Scalar(2));
  const Scalar _tmp62 = _tmp58 + _tmp61;
  const Scalar _tmp63 = std::pow(_tmp62, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp51 + _tmp52;
  const Scalar _tmp65 = _tmp50 + _tmp64;
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = -_tmp50;
  const Scalar _tmp68 = _tmp64 + _tmp67;
  const Scalar _tmp69 = _tmp63 * _tmp68;
  const Scalar _tmp70 = _tmp57 * _tmp69;
  const Scalar _tmp71 = -_tmp57 * _tmp66 + _tmp70;
  const Scalar _tmp72 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp73 = _tmp72 - p_d(0, 0);
  const Scalar _tmp74 = Scalar(1.0) / (_tmp73);
  const Scalar _tmp75 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp76 = _tmp75 - p_d(1, 0);
  const Scalar _tmp77 = _tmp74 * _tmp76;
  const Scalar _tmp78 = _tmp63 * _tmp77;
  const Scalar _tmp79 = _tmp60 * _tmp63;
  const Scalar _tmp80 = _tmp57 * _tmp78 - _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp77 * _tmp81;
  const Scalar _tmp83 = _tmp68 * _tmp77;
  const Scalar _tmp84 = _tmp60 * _tmp66 - _tmp70 * _tmp77;
  const Scalar _tmp85 = _tmp82 * _tmp84 + _tmp83;
  const Scalar _tmp86 = -_tmp37 * _tmp85 - _tmp68 + _tmp71 * _tmp82;
  const Scalar _tmp87 = _tmp53 + _tmp67;
  const Scalar _tmp88 = _tmp40 + position_vector(0, 0);
  const Scalar _tmp89 = _tmp88 - p_a(0, 0);
  const Scalar _tmp90 = _tmp32 + position_vector(1, 0);
  const Scalar _tmp91 = _tmp90 - p_a(1, 0);
  const Scalar _tmp92 = std::pow(Scalar(std::pow(_tmp89, Scalar(2)) + std::pow(_tmp91, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp93 = _tmp89 * _tmp92;
  const Scalar _tmp94 = _tmp91 * _tmp92;
  const Scalar _tmp95 = _tmp77 * _tmp93 - _tmp94;
  const Scalar _tmp96 = _tmp81 * _tmp95;
  const Scalar _tmp97 = _tmp68 * _tmp93;
  const Scalar _tmp98 = -_tmp77 * _tmp97 - _tmp84 * _tmp96 + _tmp87 * _tmp94;
  const Scalar _tmp99 = -_tmp37 * _tmp98 - _tmp71 * _tmp96 - _tmp87 * _tmp93 + _tmp97;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 =
      std::sqrt(Scalar(std::pow(_tmp73, Scalar(2)) + std::pow(_tmp76, Scalar(2))));
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp103 = _tmp101 * _tmp74;
  const Scalar _tmp104 = _tmp103 * (_tmp102 * _tmp17 * _tmp76 - _tmp102 * _tmp28 * _tmp73);
  const Scalar _tmp105 = _tmp104 * _tmp63;
  const Scalar _tmp106 = _tmp34 * _tmp63;
  const Scalar _tmp107 = _tmp105 * _tmp57 + _tmp106 * _tmp57 - _tmp36 * _tmp79;
  const Scalar _tmp108 = _tmp104 * _tmp93 - _tmp107 * _tmp96 + _tmp32 * _tmp93 - _tmp40 * _tmp94;
  const Scalar _tmp109 = _tmp100 * _tmp108;
  const Scalar _tmp110 = -_tmp104 + _tmp107 * _tmp82 - _tmp109 * _tmp86;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp112 = _tmp111 * _tmp99;
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp33 * _tmp41;
  const Scalar _tmp115 = _tmp113 + _tmp86;
  const Scalar _tmp116 = _tmp100 * _tmp98;
  const Scalar _tmp117 = _tmp113 * _tmp114 - _tmp115 * _tmp116 + _tmp85;
  const Scalar _tmp118 = Scalar(1.0) * _tmp35;
  const Scalar _tmp119 = _tmp49 * fh1;
  const Scalar _tmp120 = Scalar(1.0) * _tmp119;
  const Scalar _tmp121 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp122 = _tmp18 + _tmp29 * _tmp37;
  const Scalar _tmp123 = _tmp122 * _tmp41;
  const Scalar _tmp124 = 0;
  const Scalar _tmp125 = -_tmp116 * _tmp124 - _tmp123 * _tmp33 + _tmp30;
  const Scalar _tmp126 = Scalar(1.0) * _tmp81;
  const Scalar _tmp127 = _tmp126 * _tmp84;
  const Scalar _tmp128 = -_tmp126 * _tmp71 + _tmp127 * _tmp37;
  const Scalar _tmp129 = -_tmp107 * _tmp126 - _tmp109 * _tmp128;
  const Scalar _tmp130 = _tmp112 * _tmp129;
  const Scalar _tmp131 = _tmp128 + _tmp130;
  const Scalar _tmp132 = _tmp100 * _tmp131;
  const Scalar _tmp133 = _tmp114 * _tmp130 - _tmp127 - _tmp132 * _tmp98;
  const Scalar _tmp134 = _tmp47 * _tmp48;
  const Scalar _tmp135 = _tmp134 * fh1;
  const Scalar _tmp136 = Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = -_tmp134 * _tmp54 - Scalar(40.024799999999999) * _tmp25 - _tmp46 * fv1;
  const Scalar _tmp138 = _tmp37 * _tmp42;
  const Scalar _tmp139 = _tmp38 * _tmp42 + Scalar(1.0);
  const Scalar _tmp140 = _tmp112 * _tmp42;
  const Scalar _tmp141 = Scalar(1.0) * _tmp111;
  const Scalar _tmp142 = _tmp140 * _tmp33 - _tmp141 * _tmp98;
  const Scalar _tmp143 = fh1 * (_tmp134 * _tmp44 - _tmp46 * _tmp49);
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 =
      _tmp120 * (_tmp113 * _tmp42 - _tmp117 * _tmp118) +
      Scalar(1.0) * _tmp121 * (-_tmp118 * _tmp125 - _tmp122 * _tmp42 + Scalar(1.0)) +
      _tmp136 * (-_tmp118 * _tmp133 + _tmp130 * _tmp42) +
      Scalar(1.0) * _tmp137 * (-_tmp118 * _tmp139 + _tmp138) +
      _tmp144 * (-_tmp118 * _tmp142 + _tmp140) + Scalar(1.0) * _tmp55 * (_tmp42 * _tmp43 - _tmp42);
  const Scalar _tmp146 = -_tmp132 * _tmp95 + Scalar(1.0);
  const Scalar _tmp147 = _tmp63 * _tmp81;
  const Scalar _tmp148 = _tmp146 * _tmp147;
  const Scalar _tmp149 = _tmp103 * _tmp135;
  const Scalar _tmp150 = _tmp100 * _tmp115;
  const Scalar _tmp151 = -_tmp150 * _tmp95 - _tmp77;
  const Scalar _tmp152 = _tmp147 * _tmp151;
  const Scalar _tmp153 = _tmp103 * _tmp119;
  const Scalar _tmp154 = _tmp57 * _tmp63;
  const Scalar _tmp155 = _tmp100 * _tmp124;
  const Scalar _tmp156 = _tmp155 * _tmp96;
  const Scalar _tmp157 = _tmp103 * _tmp121;
  const Scalar _tmp158 = _tmp126 * _tmp95;
  const Scalar _tmp159 = _tmp111 * _tmp158;
  const Scalar _tmp160 = _tmp103 * _tmp143;
  const Scalar _tmp161 = -_tmp149 * (_tmp132 * _tmp93 + _tmp148 * _tmp57) -
                         _tmp153 * (_tmp150 * _tmp93 + _tmp152 * _tmp57 + Scalar(1.0)) -
                         _tmp157 * (-_tmp154 * _tmp156 + _tmp155 * _tmp93) -
                         _tmp160 * (_tmp141 * _tmp93 - _tmp154 * _tmp159);
  const Scalar _tmp162 = Scalar(1.0) / (_tmp161);
  const Scalar _tmp163 = std::asinh(_tmp145 * _tmp162);
  const Scalar _tmp164 = Scalar(1.0) * _tmp163;
  const Scalar _tmp165 = Scalar(1.0) * std::cosh(_tmp164);
  const Scalar _tmp166 = std::pow(_tmp161, Scalar(-2));
  const Scalar _tmp167 =
      std::pow(Scalar(std::pow(_tmp145, Scalar(2)) * _tmp166 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp168 = std::pow(_tmp62, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp169 = _tmp168 * _tmp57 * _tmp60;
  const Scalar _tmp170 = _tmp168 * _tmp58;
  const Scalar _tmp171 = -_tmp169 + _tmp170 * _tmp77 - _tmp78;
  const Scalar _tmp172 = std::pow(_tmp80, Scalar(-2));
  const Scalar _tmp173 = _tmp172 * _tmp95;
  const Scalar _tmp174 = _tmp171 * _tmp173;
  const Scalar _tmp175 =
      _tmp104 * _tmp170 - _tmp105 - _tmp106 - _tmp169 * _tmp36 + _tmp170 * _tmp34;
  const Scalar _tmp176 = _tmp107 * _tmp174 - _tmp175 * _tmp96;
  const Scalar _tmp177 = _tmp100 * _tmp176;
  const Scalar _tmp178 = _tmp170 * _tmp68;
  const Scalar _tmp179 = -_tmp170 * _tmp65 + _tmp178 + _tmp66 - _tmp69;
  const Scalar _tmp180 = _tmp169 * _tmp65;
  const Scalar _tmp181 = -_tmp178 * _tmp77 + _tmp180 + _tmp69 * _tmp77;
  const Scalar _tmp182 = _tmp174 * _tmp84 - _tmp181 * _tmp96;
  const Scalar _tmp183 = _tmp174 * _tmp71 - _tmp179 * _tmp96 - _tmp182 * _tmp37;
  const Scalar _tmp184 = std::pow(_tmp99, Scalar(-2));
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = _tmp108 * _tmp185;
  const Scalar _tmp187 = _tmp171 * _tmp172;
  const Scalar _tmp188 = _tmp187 * _tmp77;
  const Scalar _tmp189 = _tmp181 * _tmp82 - _tmp188 * _tmp84;
  const Scalar _tmp190 = _tmp179 * _tmp82 - _tmp188 * _tmp71 - _tmp189 * _tmp37;
  const Scalar _tmp191 = _tmp112 * (-_tmp107 * _tmp188 - _tmp109 * _tmp190 + _tmp175 * _tmp82 -
                                    _tmp177 * _tmp86 + _tmp186 * _tmp86);
  const Scalar _tmp192 = _tmp111 * _tmp183;
  const Scalar _tmp193 = _tmp110 * _tmp192;
  const Scalar _tmp194 = std::pow(_tmp108, Scalar(-2));
  const Scalar _tmp195 = _tmp176 * _tmp194;
  const Scalar _tmp196 = _tmp110 * _tmp99;
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = _tmp190 + _tmp191 + _tmp193 - _tmp197;
  const Scalar _tmp199 = _tmp115 * _tmp98;
  const Scalar _tmp200 = _tmp114 * _tmp191 + _tmp114 * _tmp193 - _tmp114 * _tmp197 -
                         _tmp116 * _tmp198 - _tmp150 * _tmp182 + _tmp185 * _tmp199 + _tmp189;
  const Scalar _tmp201 = _tmp131 * _tmp98;
  const Scalar _tmp202 = Scalar(1.0) * _tmp172;
  const Scalar _tmp203 = _tmp171 * _tmp202;
  const Scalar _tmp204 = _tmp203 * _tmp84;
  const Scalar _tmp205 = _tmp126 * _tmp181;
  const Scalar _tmp206 =
      -_tmp126 * _tmp179 + _tmp203 * _tmp71 - _tmp204 * _tmp37 + _tmp205 * _tmp37;
  const Scalar _tmp207 = _tmp112 * (_tmp107 * _tmp203 - _tmp109 * _tmp206 - _tmp126 * _tmp175 -
                                    _tmp128 * _tmp177 + _tmp128 * _tmp186);
  const Scalar _tmp208 = _tmp129 * _tmp192;
  const Scalar _tmp209 = _tmp129 * _tmp99;
  const Scalar _tmp210 = _tmp195 * _tmp209;
  const Scalar _tmp211 = _tmp206 + _tmp207 + _tmp208 - _tmp210;
  const Scalar _tmp212 = _tmp114 * _tmp207 + _tmp114 * _tmp208 - _tmp114 * _tmp210 -
                         _tmp116 * _tmp211 - _tmp132 * _tmp182 + _tmp185 * _tmp201 + _tmp204 -
                         _tmp205;
  const Scalar _tmp213 = Scalar(1.0) * _tmp98;
  const Scalar _tmp214 = _tmp192 * _tmp42;
  const Scalar _tmp215 = _tmp42 * _tmp99;
  const Scalar _tmp216 = _tmp195 * _tmp215;
  const Scalar _tmp217 =
      -_tmp141 * _tmp182 + _tmp195 * _tmp213 + _tmp214 * _tmp33 - _tmp216 * _tmp33;
  const Scalar _tmp218 = _tmp124 * _tmp185;
  const Scalar _tmp219 = -_tmp155 * _tmp182 + _tmp218 * _tmp98;
  const Scalar _tmp220 = _tmp118 * _tmp121;
  const Scalar _tmp221 = _tmp154 * _tmp96;
  const Scalar _tmp222 = _tmp154 * _tmp174;
  const Scalar _tmp223 = _tmp100 * _tmp95;
  const Scalar _tmp224 = _tmp115 * _tmp95;
  const Scalar _tmp225 = _tmp185 * _tmp224 - _tmp198 * _tmp223;
  const Scalar _tmp226 = _tmp147 * _tmp57;
  const Scalar _tmp227 = _tmp154 * _tmp187;
  const Scalar _tmp228 = _tmp100 * _tmp93;
  const Scalar _tmp229 = _tmp185 * _tmp93;
  const Scalar _tmp230 = _tmp170 * _tmp81;
  const Scalar _tmp231 = Scalar(1.0) * _tmp93;
  const Scalar _tmp232 = _tmp158 * _tmp195;
  const Scalar _tmp233 = _tmp131 * _tmp95;
  const Scalar _tmp234 = _tmp185 * _tmp233 - _tmp211 * _tmp223;
  const Scalar _tmp235 = -_tmp149 * (-_tmp131 * _tmp229 - _tmp146 * _tmp227 + _tmp146 * _tmp230 -
                                     _tmp148 + _tmp211 * _tmp228 + _tmp226 * _tmp234) -
                         _tmp153 * (-_tmp115 * _tmp229 - _tmp151 * _tmp227 + _tmp151 * _tmp230 -
                                    _tmp152 + _tmp198 * _tmp228 + _tmp225 * _tmp226) -
                         _tmp157 * (_tmp155 * _tmp222 - _tmp156 * _tmp170 + _tmp156 * _tmp63 +
                                    _tmp218 * _tmp221 - _tmp218 * _tmp93) -
                         _tmp160 * (_tmp141 * _tmp222 + _tmp154 * _tmp232 - _tmp159 * _tmp170 +
                                    _tmp159 * _tmp63 - _tmp195 * _tmp231);
  const Scalar _tmp236 = _tmp145 * _tmp166;
  const Scalar _tmp237 = _tmp167 * (_tmp162 * (_tmp120 * (-_tmp118 * _tmp200 + _tmp191 * _tmp42 +
                                                          _tmp193 * _tmp42 - _tmp197 * _tmp42) +
                                               _tmp136 * (-_tmp118 * _tmp212 + _tmp207 * _tmp42 +
                                                          _tmp208 * _tmp42 - _tmp210 * _tmp42) +
                                               _tmp144 * (-_tmp118 * _tmp217 + _tmp214 - _tmp216) -
                                               _tmp219 * _tmp220) -
                                    _tmp235 * _tmp236);
  const Scalar _tmp238 = Scalar(1.4083112389913199) * _tmp163;
  const Scalar _tmp239 =
      -_tmp161 * _tmp238 - std::sqrt(Scalar(std::pow(Scalar(-_tmp72 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp75 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp240 = Scalar(0.71007031138673404) * _tmp162;
  const Scalar _tmp241 = _tmp239 * _tmp240;
  const Scalar _tmp242 = std::cosh(_tmp241);
  const Scalar _tmp243 = Scalar(1.4083112389913199) * _tmp161;
  const Scalar _tmp244 = Scalar(0.71007031138673404) * _tmp166 * _tmp239;
  const Scalar _tmp245 = -Scalar(1.4083112389913199) * std::sinh(_tmp164) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp241);
  const Scalar _tmp246 = -_tmp56 + p_c(0, 0);
  const Scalar _tmp247 = -_tmp65 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp248 = -_tmp59 + p_c(1, 0);
  const Scalar _tmp249 = std::pow(_tmp246, Scalar(2)) + std::pow(_tmp248, Scalar(2));
  const Scalar _tmp250 =
      std::pow(Scalar(std::pow(_tmp247, Scalar(2)) + _tmp249), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp251 = std::sqrt(_tmp249);
  const Scalar _tmp252 = _tmp119 * _tmp81;
  const Scalar _tmp253 = _tmp146 * _tmp81;
  const Scalar _tmp254 = _tmp121 * _tmp155;
  const Scalar _tmp255 =
      _tmp135 * _tmp253 - _tmp143 * _tmp159 + _tmp151 * _tmp252 - _tmp254 * _tmp96;
  const Scalar _tmp256 = _tmp42 * _tmp55;
  const Scalar _tmp257 = _tmp143 * _tmp35;
  const Scalar _tmp258 = _tmp121 * _tmp35;
  const Scalar _tmp259 = _tmp135 * _tmp35;
  const Scalar _tmp260 = _tmp119 * _tmp35;
  const Scalar _tmp261 = _tmp117 * _tmp260 + _tmp125 * _tmp258 + _tmp133 * _tmp259 +
                         _tmp137 * _tmp139 * _tmp35 + _tmp142 * _tmp257 - _tmp256 * _tmp43;
  const Scalar _tmp262 = Scalar(1.0) / (_tmp255);
  const Scalar _tmp263 = std::asinh(_tmp261 * _tmp262);
  const Scalar _tmp264 = Scalar(1.4083112389913199) * _tmp263;
  const Scalar _tmp265 = -_tmp251 - _tmp255 * _tmp264;
  const Scalar _tmp266 = Scalar(0.71007031138673404) * _tmp262;
  const Scalar _tmp267 = _tmp265 * _tmp266;
  const Scalar _tmp268 = Scalar(1.0) * _tmp263;
  const Scalar _tmp269 = -std::sinh(_tmp267) - std::sinh(_tmp268);
  const Scalar _tmp270 = _tmp135 * _tmp81;
  const Scalar _tmp271 = _tmp121 * _tmp218;
  const Scalar _tmp272 = _tmp141 * _tmp143;
  const Scalar _tmp273 = -_tmp119 * _tmp151 * _tmp187 - _tmp135 * _tmp146 * _tmp187 +
                         _tmp143 * _tmp232 + _tmp174 * _tmp254 + _tmp174 * _tmp272 +
                         _tmp225 * _tmp252 + _tmp234 * _tmp270 + _tmp271 * _tmp96;
  const Scalar _tmp274 = Scalar(1.4083112389913199) * _tmp273;
  const Scalar _tmp275 = std::pow(_tmp255, Scalar(-2));
  const Scalar _tmp276 = _tmp261 * _tmp275;
  const Scalar _tmp277 =
      _tmp262 * (_tmp200 * _tmp260 + _tmp212 * _tmp259 + _tmp217 * _tmp257 + _tmp219 * _tmp258) -
      _tmp273 * _tmp276;
  const Scalar _tmp278 =
      std::pow(Scalar(std::pow(_tmp261, Scalar(2)) * _tmp275 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp279 = Scalar(1.0) * _tmp278 * std::cosh(_tmp268);
  const Scalar _tmp280 = std::cosh(_tmp267);
  const Scalar _tmp281 = Scalar(0.71007031138673404) * _tmp265 * _tmp275;
  const Scalar _tmp282 = Scalar(1.4083112389913199) * _tmp255;
  const Scalar _tmp283 = _tmp278 * _tmp282;
  const Scalar _tmp284 = Scalar(1.0) / (_tmp251);
  const Scalar _tmp285 = _tmp135 * _tmp41;
  const Scalar _tmp286 = _tmp119 * _tmp41;
  const Scalar _tmp287 = -_tmp113 * _tmp286 + _tmp121 * _tmp123 - _tmp130 * _tmp285 -
                         _tmp137 * _tmp138 - _tmp140 * _tmp143 + _tmp256;
  const Scalar _tmp288 = _tmp119 * _tmp150 + _tmp132 * _tmp135 + _tmp254 + _tmp272;
  const Scalar _tmp289 = Scalar(1.0) / (_tmp288);
  const Scalar _tmp290 = std::asinh(_tmp287 * _tmp289);
  const Scalar _tmp291 = Scalar(1.4083112389913199) * _tmp288;
  const Scalar _tmp292 =
      -_tmp290 * _tmp291 - std::sqrt(Scalar(std::pow(Scalar(-_tmp88 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp90 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp293 = Scalar(0.71007031138673404) * _tmp289;
  const Scalar _tmp294 = _tmp292 * _tmp293;
  const Scalar _tmp295 = Scalar(1.0) * _tmp290;
  const Scalar _tmp296 = -std::sinh(_tmp294) - std::sinh(_tmp295);
  const Scalar _tmp297 = _tmp100 * _tmp119;
  const Scalar _tmp298 = _tmp115 * _tmp119;
  const Scalar _tmp299 = _tmp131 * _tmp135;
  const Scalar _tmp300 = _tmp100 * _tmp135 * _tmp211 - _tmp144 * _tmp195 - _tmp185 * _tmp298 -
                         _tmp185 * _tmp299 + _tmp198 * _tmp297 - _tmp271;
  const Scalar _tmp301 = Scalar(1.4083112389913199) * _tmp300;
  const Scalar _tmp302 = std::pow(_tmp288, Scalar(-2));
  const Scalar _tmp303 =
      std::pow(Scalar(std::pow(_tmp287, Scalar(2)) * _tmp302 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp304 = _tmp287 * _tmp302;
  const Scalar _tmp305 =
      _tmp303 *
      (_tmp289 * (-_tmp143 * _tmp214 + _tmp143 * _tmp216 - _tmp191 * _tmp286 - _tmp193 * _tmp286 +
                  _tmp197 * _tmp286 - _tmp207 * _tmp285 - _tmp208 * _tmp285 + _tmp210 * _tmp285) -
       _tmp300 * _tmp304);
  const Scalar _tmp306 = Scalar(1.0) * std::cosh(_tmp295);
  const Scalar _tmp307 = std::cosh(_tmp294);
  const Scalar _tmp308 = Scalar(0.71007031138673404) * _tmp292 * _tmp302;
  const Scalar _tmp309 = _tmp169 * _tmp68 - _tmp180;
  const Scalar _tmp310 = _tmp168 * _tmp61;
  const Scalar _tmp311 = _tmp169 * _tmp77 - _tmp310 + _tmp63;
  const Scalar _tmp312 = _tmp173 * _tmp311;
  const Scalar _tmp313 = -_tmp169 * _tmp83 + _tmp310 * _tmp65 - _tmp66;
  const Scalar _tmp314 = _tmp312 * _tmp84 - _tmp313 * _tmp96;
  const Scalar _tmp315 = _tmp311 * _tmp71;
  const Scalar _tmp316 = _tmp173 * _tmp315 - _tmp309 * _tmp96 - _tmp314 * _tmp37;
  const Scalar _tmp317 = _tmp184 * _tmp316;
  const Scalar _tmp318 = _tmp124 * _tmp317;
  const Scalar _tmp319 = _tmp154 * _tmp312;
  const Scalar _tmp320 = _tmp104 * _tmp169 + _tmp169 * _tmp34 - _tmp310 * _tmp36 + _tmp36 * _tmp63;
  const Scalar _tmp321 = _tmp107 * _tmp312 - _tmp320 * _tmp96;
  const Scalar _tmp322 = _tmp194 * _tmp321;
  const Scalar _tmp323 = _tmp158 * _tmp322;
  const Scalar _tmp324 = _tmp209 * _tmp322;
  const Scalar _tmp325 = _tmp111 * _tmp316;
  const Scalar _tmp326 = _tmp129 * _tmp325;
  const Scalar _tmp327 = _tmp108 * _tmp317;
  const Scalar _tmp328 = _tmp202 * _tmp311;
  const Scalar _tmp329 = _tmp126 * _tmp313;
  const Scalar _tmp330 = _tmp328 * _tmp84;
  const Scalar _tmp331 =
      -_tmp126 * _tmp309 + _tmp202 * _tmp315 + _tmp329 * _tmp37 - _tmp330 * _tmp37;
  const Scalar _tmp332 = _tmp100 * _tmp321;
  const Scalar _tmp333 = _tmp112 * (_tmp107 * _tmp328 - _tmp109 * _tmp331 - _tmp126 * _tmp320 +
                                    _tmp128 * _tmp327 - _tmp128 * _tmp332);
  const Scalar _tmp334 = _tmp100 * (-_tmp324 + _tmp326 + _tmp331 + _tmp333);
  const Scalar _tmp335 = _tmp233 * _tmp317 - _tmp334 * _tmp95;
  const Scalar _tmp336 = _tmp317 * _tmp93;
  const Scalar _tmp337 = _tmp172 * _tmp311;
  const Scalar _tmp338 = _tmp146 * _tmp337;
  const Scalar _tmp339 = _tmp196 * _tmp322;
  const Scalar _tmp340 = _tmp110 * _tmp325;
  const Scalar _tmp341 = _tmp337 * _tmp77;
  const Scalar _tmp342 = _tmp313 * _tmp82 - _tmp341 * _tmp84;
  const Scalar _tmp343 = -_tmp172 * _tmp315 * _tmp77 + _tmp309 * _tmp82 - _tmp342 * _tmp37;
  const Scalar _tmp344 = _tmp112 * (-_tmp107 * _tmp341 - _tmp109 * _tmp343 + _tmp320 * _tmp82 +
                                    _tmp327 * _tmp86 - _tmp332 * _tmp86);
  const Scalar _tmp345 = -_tmp339 + _tmp340 + _tmp343 + _tmp344;
  const Scalar _tmp346 = -_tmp223 * _tmp345 + _tmp224 * _tmp317;
  const Scalar _tmp347 = _tmp151 * _tmp337;
  const Scalar _tmp348 =
      -_tmp149 * (-_tmp131 * _tmp336 - _tmp154 * _tmp338 + _tmp169 * _tmp253 + _tmp226 * _tmp335 +
                  _tmp334 * _tmp93) -
      _tmp153 * (-_tmp115 * _tmp336 + _tmp151 * _tmp169 * _tmp81 - _tmp154 * _tmp347 +
                 _tmp226 * _tmp346 + _tmp228 * _tmp345) -
      _tmp157 * (_tmp155 * _tmp319 - _tmp156 * _tmp169 + _tmp221 * _tmp318 - _tmp318 * _tmp93) -
      _tmp160 * (_tmp141 * _tmp319 + _tmp154 * _tmp323 - _tmp159 * _tmp169 - _tmp231 * _tmp322);
  const Scalar _tmp349 = -_tmp114 * _tmp324 + _tmp114 * _tmp326 + _tmp114 * _tmp333 -
                         _tmp132 * _tmp314 + _tmp201 * _tmp317 - _tmp329 + _tmp330 -
                         _tmp334 * _tmp98;
  const Scalar _tmp350 = -_tmp155 * _tmp314 + _tmp318 * _tmp98;
  const Scalar _tmp351 = _tmp215 * _tmp322;
  const Scalar _tmp352 = _tmp325 * _tmp42;
  const Scalar _tmp353 =
      -_tmp141 * _tmp314 + _tmp213 * _tmp322 - _tmp33 * _tmp351 + _tmp33 * _tmp352;
  const Scalar _tmp354 = -_tmp114 * _tmp339 + _tmp114 * _tmp340 + _tmp114 * _tmp344 -
                         _tmp116 * _tmp345 - _tmp150 * _tmp314 + _tmp199 * _tmp317 + _tmp342;
  const Scalar _tmp355 = _tmp167 * (_tmp162 * (_tmp120 * (-_tmp118 * _tmp354 - _tmp339 * _tmp42 +
                                                          _tmp340 * _tmp42 + _tmp344 * _tmp42) +
                                               _tmp136 * (-_tmp118 * _tmp349 - _tmp324 * _tmp42 +
                                                          _tmp326 * _tmp42 + _tmp333 * _tmp42) +
                                               _tmp144 * (-_tmp118 * _tmp353 - _tmp351 + _tmp352) -
                                               _tmp220 * _tmp350) -
                                    _tmp236 * _tmp348);
  const Scalar _tmp356 = _tmp121 * _tmp318;
  const Scalar _tmp357 = -_tmp119 * _tmp347 - _tmp135 * _tmp338 + _tmp143 * _tmp323 +
                         _tmp252 * _tmp346 + _tmp254 * _tmp312 + _tmp270 * _tmp335 +
                         _tmp272 * _tmp312 + _tmp356 * _tmp96;
  const Scalar _tmp358 =
      _tmp262 * (_tmp257 * _tmp353 + _tmp258 * _tmp350 + _tmp259 * _tmp349 + _tmp260 * _tmp354) -
      _tmp276 * _tmp357;
  const Scalar _tmp359 = _tmp135 * _tmp334 - _tmp144 * _tmp322 + _tmp297 * _tmp345 -
                         _tmp298 * _tmp317 - _tmp299 * _tmp317 - _tmp356;
  const Scalar _tmp360 = Scalar(1.4083112389913199) * _tmp359;
  const Scalar _tmp361 =
      _tmp303 *
      (_tmp289 * (_tmp143 * _tmp351 - _tmp143 * _tmp352 + _tmp285 * _tmp324 - _tmp285 * _tmp326 -
                  _tmp285 * _tmp333 + _tmp286 * _tmp339 - _tmp286 * _tmp340 - _tmp286 * _tmp344) -
       _tmp304 * _tmp359);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp235 * _tmp245 +
      _tmp243 *
          (-_tmp165 * _tmp237 -
           _tmp242 * (-_tmp235 * _tmp244 + _tmp240 * (-_tmp235 * _tmp238 - _tmp237 * _tmp243)));
  _res(2, 0) =
      -_tmp246 * _tmp250 + _tmp269 * _tmp274 +
      _tmp282 * (-_tmp277 * _tmp279 -
                 _tmp280 * (_tmp266 * (-_tmp246 * _tmp284 - _tmp263 * _tmp274 - _tmp277 * _tmp283) -
                            _tmp273 * _tmp281));
  _res(3, 0) =
      _tmp291 *
          (-_tmp305 * _tmp306 -
           _tmp307 * (_tmp293 * (-_tmp290 * _tmp301 - _tmp291 * _tmp305) - _tmp300 * _tmp308)) +
      _tmp296 * _tmp301;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp243 *
          (-_tmp165 * _tmp355 -
           _tmp242 * (_tmp240 * (-_tmp238 * _tmp348 - _tmp243 * _tmp355) - _tmp244 * _tmp348)) +
      _tmp245 * _tmp348;
  _res(2, 1) =
      -_tmp248 * _tmp250 + Scalar(1.4083112389913199) * _tmp269 * _tmp357 +
      _tmp282 * (-_tmp279 * _tmp358 -
                 _tmp280 * (_tmp266 * (-_tmp248 * _tmp284 - _tmp264 * _tmp357 - _tmp283 * _tmp358) -
                            _tmp281 * _tmp357));
  _res(3, 1) =
      _tmp291 *
          (-_tmp306 * _tmp361 -
           _tmp307 * (_tmp293 * (-_tmp290 * _tmp360 - _tmp291 * _tmp361) - _tmp308 * _tmp359)) +
      _tmp296 * _tmp360;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = -_tmp247 * _tmp250;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym