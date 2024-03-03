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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl1
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1050

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (330)
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
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = Scalar(1.0) * _tmp17;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp20 = _tmp0 * _tmp11;
  const Scalar _tmp21 = _tmp1 * _tmp4;
  const Scalar _tmp22 = _tmp20 - _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp26 = _tmp23 - _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = Scalar(1.0) * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = -_tmp19;
  const Scalar _tmp31 = _tmp23 + _tmp25;
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = Scalar(1.0) / (_tmp29 + _tmp32);
  const Scalar _tmp34 = -_tmp10 + _tmp15;
  const Scalar _tmp35 = _tmp34 + _tmp6;
  const Scalar _tmp36 = _tmp18 - _tmp35;
  const Scalar _tmp37 = _tmp33 * _tmp36;
  const Scalar _tmp38 = _tmp18 + _tmp28 * _tmp37;
  const Scalar _tmp39 = 0;
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp41 =
      -Scalar(0.010999999999999999) * _tmp24 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp40 + _tmp43;
  const Scalar _tmp45 = _tmp16 + _tmp6;
  const Scalar _tmp46 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp47 = _tmp46 - p_c(0, 0);
  const Scalar _tmp48 = std::pow(_tmp47, Scalar(2));
  const Scalar _tmp49 = _tmp19 + _tmp31;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_c(1, 0);
  const Scalar _tmp52 = std::pow(_tmp51, Scalar(2));
  const Scalar _tmp53 = _tmp48 + _tmp52;
  const Scalar _tmp54 = std::pow(_tmp53, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp55 = _tmp48 * _tmp54;
  const Scalar _tmp56 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_b(0, 0);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp57);
  const Scalar _tmp59 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_b(1, 0);
  const Scalar _tmp61 = _tmp58 * _tmp60;
  const Scalar _tmp62 = -_tmp40;
  const Scalar _tmp63 = _tmp43 + _tmp62;
  const Scalar _tmp64 = std::pow(_tmp53, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp65 = _tmp63 * _tmp64;
  const Scalar _tmp66 = _tmp47 * _tmp51 * _tmp54;
  const Scalar _tmp67 = _tmp61 * _tmp64;
  const Scalar _tmp68 = _tmp55 * _tmp61 - _tmp66 - _tmp67;
  const Scalar _tmp69 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 - p_d(0, 0);
  const Scalar _tmp71 = _tmp32 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 - p_d(1, 0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp70 * _tmp73;
  const Scalar _tmp75 = _tmp72 * _tmp73;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp61 * _tmp74 - _tmp75);
  const Scalar _tmp77 = _tmp41 - _tmp42;
  const Scalar _tmp78 = _tmp40 + _tmp77;
  const Scalar _tmp79 = _tmp63 * _tmp74;
  const Scalar _tmp80 = _tmp76 * (-_tmp61 * _tmp79 + _tmp75 * _tmp78);
  const Scalar _tmp81 = _tmp44 * _tmp66;
  const Scalar _tmp82 = _tmp55 * _tmp63;
  const Scalar _tmp83 = _tmp61 * _tmp65 - _tmp61 * _tmp82 - _tmp68 * _tmp80 + _tmp81;
  const Scalar _tmp84 = _tmp44 * _tmp64;
  const Scalar _tmp85 = _tmp76 * (-_tmp74 * _tmp78 + _tmp79);
  const Scalar _tmp86 =
      -_tmp37 * _tmp83 - _tmp44 * _tmp55 - _tmp65 - _tmp68 * _tmp85 + _tmp82 + _tmp84;
  const Scalar _tmp87 = _tmp51 * _tmp64;
  const Scalar _tmp88 = _tmp47 * _tmp67 - _tmp87;
  const Scalar _tmp89 = _tmp47 * _tmp65;
  const Scalar _tmp90 = _tmp44 * _tmp87 - _tmp61 * _tmp89 - _tmp80 * _tmp88;
  const Scalar _tmp91 = -_tmp37 * _tmp90 - _tmp47 * _tmp84 - _tmp85 * _tmp88 + _tmp89;
  const Scalar _tmp92 = std::pow(_tmp91, Scalar(-2));
  const Scalar _tmp93 = _tmp86 * _tmp92;
  const Scalar _tmp94 = _tmp47 * _tmp64;
  const Scalar _tmp95 = _tmp93 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp97 = _tmp39 * _tmp96;
  const Scalar _tmp98 = _tmp74 * _tmp76;
  const Scalar _tmp99 = _tmp97 * _tmp98;
  const Scalar _tmp100 = _tmp39 * _tmp98;
  const Scalar _tmp101 = _tmp100 * _tmp88;
  const Scalar _tmp102 = _tmp64 * _tmp96;
  const Scalar _tmp103 = _tmp102 * _tmp39;
  const Scalar _tmp104 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp105 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp106 = _tmp105 * _tmp58;
  const Scalar _tmp107 = _tmp104 * _tmp106;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp109 = _tmp106 * (_tmp108 * _tmp17 * _tmp60 - _tmp108 * _tmp27 * _tmp57);
  const Scalar _tmp110 = _tmp76 * (_tmp109 * _tmp74 + _tmp32 * _tmp74 - _tmp35 * _tmp75);
  const Scalar _tmp111 = _tmp49 * _tmp64;
  const Scalar _tmp112 = _tmp109 * _tmp64;
  const Scalar _tmp113 =
      _tmp109 * _tmp55 - _tmp110 * _tmp68 - _tmp111 - _tmp112 - _tmp45 * _tmp66 + _tmp49 * _tmp55;
  const Scalar _tmp114 = Scalar(1.0) * _tmp33;
  const Scalar _tmp115 = _tmp114 * _tmp36 * _tmp80 - Scalar(1.0) * _tmp85;
  const Scalar _tmp116 = _tmp115 * _tmp96;
  const Scalar _tmp117 = -_tmp110 * _tmp88 + _tmp111 * _tmp47 + _tmp112 * _tmp47 - _tmp45 * _tmp87;
  const Scalar _tmp118 = _tmp117 * _tmp93;
  const Scalar _tmp119 = Scalar(1.0) / (_tmp117);
  const Scalar _tmp120 = _tmp119 * _tmp91;
  const Scalar _tmp121 = _tmp120 * (-_tmp113 * _tmp116 + _tmp115 * _tmp118);
  const Scalar _tmp122 = -Scalar(1.0) * _tmp110 - _tmp116 * _tmp117;
  const Scalar _tmp123 = std::pow(_tmp117, Scalar(-2));
  const Scalar _tmp124 = _tmp113 * _tmp123;
  const Scalar _tmp125 = _tmp124 * _tmp91;
  const Scalar _tmp126 = _tmp122 * _tmp125;
  const Scalar _tmp127 = _tmp119 * _tmp86;
  const Scalar _tmp128 = _tmp122 * _tmp127;
  const Scalar _tmp129 = _tmp121 - _tmp126 + _tmp128;
  const Scalar _tmp130 = _tmp102 * _tmp47;
  const Scalar _tmp131 = _tmp120 * _tmp122;
  const Scalar _tmp132 = _tmp115 + _tmp131;
  const Scalar _tmp133 = _tmp132 * _tmp96;
  const Scalar _tmp134 = _tmp132 * _tmp93;
  const Scalar _tmp135 = _tmp88 * _tmp96;
  const Scalar _tmp136 = -_tmp129 * _tmp135 - _tmp133 * _tmp68 + _tmp134 * _tmp88;
  const Scalar _tmp137 = _tmp102 * _tmp132;
  const Scalar _tmp138 = _tmp34 + _tmp7;
  const Scalar _tmp139 = _tmp138 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp140 = _tmp26 + _tmp30;
  const Scalar _tmp141 = _tmp140 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp142 =
      std::pow(Scalar(std::pow(_tmp139, Scalar(2)) + std::pow(_tmp141, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp143 = _tmp141 * _tmp142;
  const Scalar _tmp144 = _tmp143 * fh1;
  const Scalar _tmp145 = _tmp106 * _tmp144;
  const Scalar _tmp146 = Scalar(1.0) * _tmp119;
  const Scalar _tmp147 = _tmp146 * _tmp98;
  const Scalar _tmp148 = Scalar(1.0) * _tmp124;
  const Scalar _tmp149 = _tmp88 * _tmp98;
  const Scalar _tmp150 = _tmp146 * _tmp64;
  const Scalar _tmp151 = _tmp139 * _tmp142;
  const Scalar _tmp152 = fh1 * (_tmp138 * _tmp143 - _tmp140 * _tmp151);
  const Scalar _tmp153 = _tmp106 * _tmp152;
  const Scalar _tmp154 = _tmp61 * _tmp63;
  const Scalar _tmp155 = _tmp154 + _tmp61 * _tmp80;
  const Scalar _tmp156 = -_tmp155 * _tmp37 + _tmp61 * _tmp85 - _tmp63;
  const Scalar _tmp157 = _tmp156 * _tmp96;
  const Scalar _tmp158 = -_tmp109 + _tmp110 * _tmp61 - _tmp117 * _tmp157;
  const Scalar _tmp159 = _tmp120 * _tmp158;
  const Scalar _tmp160 = _tmp156 + _tmp159;
  const Scalar _tmp161 = _tmp160 * _tmp96;
  const Scalar _tmp162 = _tmp161 * _tmp64;
  const Scalar _tmp163 = _tmp127 * _tmp158;
  const Scalar _tmp164 = _tmp120 * (-_tmp113 * _tmp157 + _tmp118 * _tmp156);
  const Scalar _tmp165 = _tmp125 * _tmp158;
  const Scalar _tmp166 = _tmp163 + _tmp164 - _tmp165;
  const Scalar _tmp167 = _tmp160 * _tmp88;
  const Scalar _tmp168 = -_tmp135 * _tmp166 - _tmp161 * _tmp68 + _tmp167 * _tmp93;
  const Scalar _tmp169 = _tmp151 * fh1;
  const Scalar _tmp170 = _tmp106 * _tmp169;
  const Scalar _tmp171 =
      -_tmp107 *
          (_tmp101 * _tmp93 - _tmp103 - _tmp39 * _tmp95 + _tmp55 * _tmp97 - _tmp68 * _tmp99) -
      _tmp145 *
          (_tmp129 * _tmp130 + _tmp133 * _tmp55 - _tmp134 * _tmp94 + _tmp136 * _tmp98 - _tmp137) -
      _tmp153 *
          (_tmp146 * _tmp55 - _tmp147 * _tmp68 + _tmp148 * _tmp149 - _tmp148 * _tmp94 - _tmp150) -
      _tmp170 *
          (_tmp130 * _tmp166 - _tmp160 * _tmp95 + _tmp161 * _tmp55 - _tmp162 + _tmp168 * _tmp98);
  const Scalar _tmp172 = -_tmp135 * _tmp160 - _tmp61;
  const Scalar _tmp173 = -_tmp132 * _tmp135 + Scalar(1.0);
  const Scalar _tmp174 = -_tmp107 * (-_tmp100 * _tmp135 + _tmp103 * _tmp47) -
                         _tmp145 * (_tmp137 * _tmp47 + _tmp173 * _tmp98) -
                         _tmp153 * (-_tmp147 * _tmp88 + _tmp150 * _tmp47) -
                         _tmp170 * (_tmp162 * _tmp47 + _tmp172 * _tmp98 + Scalar(1.0));
  const Scalar _tmp175 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp176 = _tmp29 + _tmp49;
  const Scalar _tmp177 = _tmp176 * _tmp37;
  const Scalar _tmp178 = Scalar(1.0) / (-_tmp177 + _tmp18 - _tmp45);
  const Scalar _tmp179 = Scalar(1.0) * _tmp178;
  const Scalar _tmp180 = _tmp120 * _tmp179;
  const Scalar _tmp181 = _tmp176 * _tmp179;
  const Scalar _tmp182 = _tmp120 * _tmp181 - _tmp146 * _tmp90;
  const Scalar _tmp183 = Scalar(1.0) * _tmp152;
  const Scalar _tmp184 = fh1 * (_tmp62 + _tmp77);
  const Scalar _tmp185 = -_tmp140 * fv1 - _tmp143 * _tmp184 - Scalar(40.024799999999999) * _tmp22;
  const Scalar _tmp186 = _tmp33 * (_tmp177 * _tmp179 + Scalar(1.0));
  const Scalar _tmp187 = _tmp179 * _tmp37;
  const Scalar _tmp188 = _tmp138 * fv1 + Scalar(40.024799999999999) * _tmp14 + _tmp151 * _tmp184;
  const Scalar _tmp189 = _tmp90 * _tmp96;
  const Scalar _tmp190 = _tmp176 * _tmp178;
  const Scalar _tmp191 = _tmp131 * _tmp190 - _tmp132 * _tmp189 - Scalar(1.0) * _tmp80;
  const Scalar _tmp192 = Scalar(1.0) * _tmp144;
  const Scalar _tmp193 = _tmp155 + _tmp159 * _tmp190 - _tmp160 * _tmp189;
  const Scalar _tmp194 = Scalar(1.0) * _tmp169;
  const Scalar _tmp195 = _tmp178 * _tmp38;
  const Scalar _tmp196 = -_tmp176 * _tmp195 - _tmp189 * _tmp39 + _tmp29;
  const Scalar _tmp197 =
      Scalar(1.0) * _tmp104 * (-_tmp114 * _tmp196 - _tmp179 * _tmp38 + Scalar(1.0)) +
      _tmp183 * (-_tmp114 * _tmp182 + _tmp180) +
      Scalar(1.0) * _tmp185 * (-Scalar(1.0) * _tmp186 + _tmp187) +
      Scalar(1.0) * _tmp188 * (-_tmp179 + _tmp181 * _tmp33) +
      _tmp192 * (-_tmp114 * _tmp191 + _tmp131 * _tmp179) +
      _tmp194 * (-_tmp114 * _tmp193 + _tmp159 * _tmp179);
  const Scalar _tmp198 = std::asinh(_tmp175 * _tmp197);
  const Scalar _tmp199 = Scalar(1.0) * _tmp198;
  const Scalar _tmp200 = Scalar(1.4083112389913199) * _tmp198;
  const Scalar _tmp201 =
      -_tmp174 * _tmp200 - std::sqrt(Scalar(std::pow(Scalar(-_tmp56 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp59 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp202 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp203 = _tmp201 * _tmp202;
  const Scalar _tmp204 = -Scalar(1.4083112389913199) * std::sinh(_tmp199) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp203);
  const Scalar _tmp205 = Scalar(1.0) * std::cosh(_tmp199);
  const Scalar _tmp206 = std::pow(_tmp174, Scalar(-2));
  const Scalar _tmp207 =
      std::pow(Scalar(std::pow(_tmp197, Scalar(2)) * _tmp206 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp208 = _tmp90 * _tmp93;
  const Scalar _tmp209 = _tmp121 * _tmp190 - _tmp126 * _tmp190 + _tmp128 * _tmp190 -
                         _tmp129 * _tmp189 + _tmp132 * _tmp208 - _tmp133 * _tmp83;
  const Scalar _tmp210 = _tmp160 * _tmp208 - _tmp161 * _tmp83 + _tmp163 * _tmp190 +
                         _tmp164 * _tmp190 - _tmp165 * _tmp190 - _tmp166 * _tmp189;
  const Scalar _tmp211 = _tmp125 * _tmp179;
  const Scalar _tmp212 = Scalar(1.0) * _tmp90;
  const Scalar _tmp213 =
      _tmp124 * _tmp212 - _tmp125 * _tmp181 + _tmp127 * _tmp181 - _tmp146 * _tmp83;
  const Scalar _tmp214 = _tmp127 * _tmp179;
  const Scalar _tmp215 = _tmp208 * _tmp39 - _tmp83 * _tmp97;
  const Scalar _tmp216 = _tmp104 * _tmp114;
  const Scalar _tmp217 = _tmp197 * _tmp206;
  const Scalar _tmp218 = _tmp207 * (-_tmp171 * _tmp217 +
                                    _tmp175 * (_tmp183 * (-_tmp114 * _tmp213 - _tmp211 + _tmp214) +
                                               _tmp192 * (-_tmp114 * _tmp209 + _tmp121 * _tmp179 -
                                                          _tmp126 * _tmp179 + _tmp128 * _tmp179) +
                                               _tmp194 * (-_tmp114 * _tmp210 + _tmp163 * _tmp179 +
                                                          _tmp164 * _tmp179 - _tmp165 * _tmp179) -
                                               _tmp215 * _tmp216));
  const Scalar _tmp219 = std::cosh(_tmp203);
  const Scalar _tmp220 = Scalar(0.71007031138673404) * _tmp201 * _tmp206;
  const Scalar _tmp221 = Scalar(1.4083112389913199) * _tmp174;
  const Scalar _tmp222 = _tmp104 * _tmp39;
  const Scalar _tmp223 = _tmp144 * _tmp76;
  const Scalar _tmp224 = _tmp169 * _tmp76;
  const Scalar _tmp225 = _tmp146 * _tmp152;
  const Scalar _tmp226 = _tmp76 * _tmp88;
  const Scalar _tmp227 =
      -_tmp135 * _tmp222 * _tmp76 + _tmp172 * _tmp224 + _tmp173 * _tmp223 - _tmp225 * _tmp226;
  const Scalar _tmp228 = Scalar(1.0) / (_tmp227);
  const Scalar _tmp229 = _tmp33 * fh1;
  const Scalar _tmp230 = _tmp143 * _tmp229;
  const Scalar _tmp231 = _tmp151 * _tmp229;
  const Scalar _tmp232 = _tmp104 * _tmp33;
  const Scalar _tmp233 = _tmp152 * _tmp33;
  const Scalar _tmp234 = _tmp179 * _tmp188;
  const Scalar _tmp235 = -_tmp176 * _tmp234 * _tmp33 + _tmp182 * _tmp233 + _tmp185 * _tmp186 +
                         _tmp191 * _tmp230 + _tmp193 * _tmp231 + _tmp196 * _tmp232;
  const Scalar _tmp236 = std::asinh(_tmp228 * _tmp235);
  const Scalar _tmp237 = Scalar(1.4083112389913199) * _tmp227;
  const Scalar _tmp238 =
      -_tmp236 * _tmp237 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp71 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp239 = Scalar(0.71007031138673404) * _tmp228;
  const Scalar _tmp240 = _tmp238 * _tmp239;
  const Scalar _tmp241 = std::cosh(_tmp240);
  const Scalar _tmp242 = _tmp104 * _tmp97;
  const Scalar _tmp243 = _tmp242 * _tmp76;
  const Scalar _tmp244 = _tmp222 * _tmp93;
  const Scalar _tmp245 = _tmp124 * _tmp183;
  const Scalar _tmp246 = _tmp225 * _tmp76;
  const Scalar _tmp247 = _tmp136 * _tmp223 + _tmp168 * _tmp224 + _tmp226 * _tmp244 +
                         _tmp226 * _tmp245 - _tmp243 * _tmp68 - _tmp246 * _tmp68;
  const Scalar _tmp248 = std::pow(_tmp227, Scalar(-2));
  const Scalar _tmp249 = Scalar(0.71007031138673404) * _tmp238 * _tmp248;
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp247;
  const Scalar _tmp251 = _tmp235 * _tmp248;
  const Scalar _tmp252 =
      _tmp228 * (_tmp209 * _tmp230 + _tmp210 * _tmp231 + _tmp213 * _tmp233 + _tmp215 * _tmp232) -
      _tmp247 * _tmp251;
  const Scalar _tmp253 =
      std::pow(Scalar(std::pow(_tmp235, Scalar(2)) * _tmp248 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp254 = _tmp237 * _tmp253;
  const Scalar _tmp255 = Scalar(1.0) * _tmp236;
  const Scalar _tmp256 = Scalar(1.0) * _tmp253 * std::cosh(_tmp255);
  const Scalar _tmp257 = -std::sinh(_tmp240) - std::sinh(_tmp255);
  const Scalar _tmp258 = -_tmp46 + p_c(0, 0);
  const Scalar _tmp259 = -_tmp44 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp260 = -_tmp50 + p_c(1, 0);
  const Scalar _tmp261 = std::pow(_tmp258, Scalar(2)) + std::pow(_tmp260, Scalar(2));
  const Scalar _tmp262 =
      std::pow(Scalar(std::pow(_tmp259, Scalar(2)) + _tmp261), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp263 = _tmp169 * _tmp96;
  const Scalar _tmp264 = _tmp160 * _tmp169;
  const Scalar _tmp265 = _tmp144 * _tmp96;
  const Scalar _tmp266 = _tmp129 * _tmp265 - _tmp134 * _tmp144 + _tmp166 * _tmp263 - _tmp244 -
                         _tmp245 - _tmp264 * _tmp93;
  const Scalar _tmp267 = _tmp133 * _tmp144 + _tmp161 * _tmp169 + _tmp225 + _tmp242;
  const Scalar _tmp268 = Scalar(1.0) / (_tmp267);
  const Scalar _tmp269 = _tmp169 * _tmp178;
  const Scalar _tmp270 = _tmp144 * _tmp178;
  const Scalar _tmp271 = _tmp104 * _tmp195 - _tmp131 * _tmp270 - _tmp152 * _tmp180 -
                         _tmp159 * _tmp269 - _tmp185 * _tmp187 + _tmp234;
  const Scalar _tmp272 = std::asinh(_tmp268 * _tmp271);
  const Scalar _tmp273 = Scalar(1.4083112389913199) * _tmp272;
  const Scalar _tmp274 = std::pow(_tmp267, Scalar(-2));
  const Scalar _tmp275 = _tmp271 * _tmp274;
  const Scalar _tmp276 =
      -_tmp266 * _tmp275 +
      _tmp268 * (-_tmp121 * _tmp270 + _tmp126 * _tmp270 - _tmp128 * _tmp270 + _tmp152 * _tmp211 -
                 _tmp152 * _tmp214 - _tmp163 * _tmp269 - _tmp164 * _tmp269 + _tmp165 * _tmp269);
  const Scalar _tmp277 =
      std::pow(Scalar(std::pow(_tmp271, Scalar(2)) * _tmp274 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp267;
  const Scalar _tmp279 = _tmp277 * _tmp278;
  const Scalar _tmp280 = std::sqrt(_tmp261);
  const Scalar _tmp281 = Scalar(1.0) / (_tmp280);
  const Scalar _tmp282 = Scalar(0.71007031138673404) * _tmp268;
  const Scalar _tmp283 = -_tmp267 * _tmp273 - _tmp280;
  const Scalar _tmp284 = Scalar(0.71007031138673404) * _tmp274 * _tmp283;
  const Scalar _tmp285 = _tmp282 * _tmp283;
  const Scalar _tmp286 = std::cosh(_tmp285);
  const Scalar _tmp287 = Scalar(1.0) * _tmp272;
  const Scalar _tmp288 = Scalar(1.0) * _tmp277 * std::cosh(_tmp287);
  const Scalar _tmp289 = -Scalar(1.4083112389913199) * std::sinh(_tmp285) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp287);
  const Scalar _tmp290 = _tmp52 * _tmp54;
  const Scalar _tmp291 = -_tmp290 + _tmp61 * _tmp66 + _tmp64;
  const Scalar _tmp292 =
      _tmp109 * _tmp66 - _tmp110 * _tmp291 - _tmp290 * _tmp45 + _tmp45 * _tmp64 + _tmp49 * _tmp66;
  const Scalar _tmp293 = -_tmp154 * _tmp66 + _tmp290 * _tmp44 - _tmp291 * _tmp80 - _tmp84;
  const Scalar _tmp294 = -_tmp291 * _tmp85 - _tmp293 * _tmp37 + _tmp63 * _tmp66 - _tmp81;
  const Scalar _tmp295 = _tmp294 * _tmp92;
  const Scalar _tmp296 = _tmp117 * _tmp295;
  const Scalar _tmp297 = _tmp120 * (_tmp115 * _tmp296 - _tmp116 * _tmp292);
  const Scalar _tmp298 = _tmp119 * _tmp294;
  const Scalar _tmp299 = _tmp122 * _tmp298;
  const Scalar _tmp300 = _tmp123 * _tmp292;
  const Scalar _tmp301 = _tmp300 * _tmp91;
  const Scalar _tmp302 = _tmp122 * _tmp301;
  const Scalar _tmp303 = _tmp297 + _tmp299 - _tmp302;
  const Scalar _tmp304 = _tmp132 * _tmp295;
  const Scalar _tmp305 = -_tmp133 * _tmp291 - _tmp135 * _tmp303 + _tmp304 * _tmp88;
  const Scalar _tmp306 = _tmp120 * (_tmp156 * _tmp296 - _tmp157 * _tmp292);
  const Scalar _tmp307 = _tmp158 * _tmp301;
  const Scalar _tmp308 = _tmp158 * _tmp298;
  const Scalar _tmp309 = _tmp306 - _tmp307 + _tmp308;
  const Scalar _tmp310 = -_tmp135 * _tmp309 - _tmp161 * _tmp291 + _tmp167 * _tmp295;
  const Scalar _tmp311 = _tmp295 * _tmp94;
  const Scalar _tmp312 = Scalar(1.0) * _tmp300;
  const Scalar _tmp313 =
      -_tmp107 * (_tmp101 * _tmp295 - _tmp291 * _tmp99 - _tmp311 * _tmp39 + _tmp66 * _tmp97) -
      _tmp145 * (_tmp130 * _tmp303 + _tmp133 * _tmp66 - _tmp304 * _tmp94 + _tmp305 * _tmp98) -
      _tmp153 * (_tmp146 * _tmp66 - _tmp147 * _tmp291 + _tmp149 * _tmp312 - _tmp312 * _tmp94) -
      _tmp170 * (_tmp130 * _tmp309 - _tmp160 * _tmp311 + _tmp161 * _tmp66 + _tmp310 * _tmp98);
  const Scalar _tmp314 = _tmp295 * _tmp90;
  const Scalar _tmp315 = _tmp293 * _tmp96;
  const Scalar _tmp316 = _tmp314 * _tmp39 - _tmp315 * _tmp39;
  const Scalar _tmp317 = _tmp179 * _tmp301;
  const Scalar _tmp318 = _tmp179 * _tmp298;
  const Scalar _tmp319 =
      -_tmp146 * _tmp293 + _tmp181 * _tmp298 - _tmp181 * _tmp301 + _tmp212 * _tmp300;
  const Scalar _tmp320 = -_tmp132 * _tmp315 - _tmp189 * _tmp303 + _tmp190 * _tmp297 +
                         _tmp190 * _tmp299 - _tmp190 * _tmp302 + _tmp304 * _tmp90;
  const Scalar _tmp321 = _tmp160 * _tmp314 - _tmp160 * _tmp315 - _tmp189 * _tmp309 +
                         _tmp190 * _tmp306 - _tmp190 * _tmp307 + _tmp190 * _tmp308;
  const Scalar _tmp322 = _tmp207 * (_tmp175 * (_tmp183 * (-_tmp114 * _tmp319 - _tmp317 + _tmp318) +
                                               _tmp192 * (-_tmp114 * _tmp320 + _tmp179 * _tmp297 +
                                                          _tmp179 * _tmp299 - _tmp179 * _tmp302) +
                                               _tmp194 * (-_tmp114 * _tmp321 + _tmp179 * _tmp306 -
                                                          _tmp179 * _tmp307 + _tmp179 * _tmp308) -
                                               _tmp216 * _tmp316) -
                                    _tmp217 * _tmp313);
  const Scalar _tmp323 = _tmp183 * _tmp300;
  const Scalar _tmp324 = _tmp222 * _tmp295;
  const Scalar _tmp325 = _tmp223 * _tmp305 + _tmp224 * _tmp310 + _tmp226 * _tmp323 +
                         _tmp226 * _tmp324 - _tmp243 * _tmp291 - _tmp246 * _tmp291;
  const Scalar _tmp326 = Scalar(1.4083112389913199) * _tmp325;
  const Scalar _tmp327 =
      _tmp228 * (_tmp230 * _tmp320 + _tmp231 * _tmp321 + _tmp232 * _tmp316 + _tmp233 * _tmp319) -
      _tmp251 * _tmp325;
  const Scalar _tmp328 = -_tmp144 * _tmp304 + _tmp263 * _tmp309 - _tmp264 * _tmp295 +
                         _tmp265 * _tmp303 - _tmp323 - _tmp324;
  const Scalar _tmp329 =
      _tmp268 * (_tmp152 * _tmp317 - _tmp152 * _tmp318 - _tmp269 * _tmp306 + _tmp269 * _tmp307 -
                 _tmp269 * _tmp308 - _tmp270 * _tmp297 - _tmp270 * _tmp299 + _tmp270 * _tmp302) -
      _tmp275 * _tmp328;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp171 * _tmp204 +
      _tmp221 *
          (-_tmp205 * _tmp218 -
           _tmp219 * (-_tmp171 * _tmp220 + _tmp202 * (-_tmp171 * _tmp200 - _tmp218 * _tmp221)));
  _res(2, 0) =
      _tmp237 *
          (-_tmp241 * (_tmp239 * (-_tmp236 * _tmp250 - _tmp252 * _tmp254) - _tmp247 * _tmp249) -
           _tmp252 * _tmp256) +
      _tmp250 * _tmp257;
  _res(3, 0) =
      -_tmp258 * _tmp262 + _tmp266 * _tmp289 +
      _tmp278 * (-_tmp276 * _tmp288 -
                 _tmp286 * (-_tmp266 * _tmp284 + _tmp282 * (-_tmp258 * _tmp281 - _tmp266 * _tmp273 -
                                                            _tmp276 * _tmp279)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp204 * _tmp313 + _tmp221 * (-_tmp205 * _tmp322 -
                                     _tmp219 * (_tmp202 * (-_tmp200 * _tmp313 - _tmp221 * _tmp322) -
                                                _tmp220 * _tmp313));
  _res(2, 1) =
      _tmp237 *
          (-_tmp241 * (_tmp239 * (-_tmp236 * _tmp326 - _tmp254 * _tmp327) - _tmp249 * _tmp325) -
           _tmp256 * _tmp327) +
      _tmp257 * _tmp326;
  _res(3, 1) =
      -_tmp260 * _tmp262 +
      _tmp278 *
          (-_tmp286 * (_tmp282 * (-_tmp260 * _tmp281 - _tmp273 * _tmp328 - _tmp279 * _tmp329) -
                       _tmp284 * _tmp328) -
           _tmp288 * _tmp329) +
      _tmp289 * _tmp328;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp259 * _tmp262;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym