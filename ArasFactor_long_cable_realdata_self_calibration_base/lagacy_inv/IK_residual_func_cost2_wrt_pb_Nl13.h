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
 * Symbolic function: IK_residual_func_cost2_wrt_pb_Nl13
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPbNl13(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1049

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (325)
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
  const Scalar _tmp8 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp1 * _tmp11;
  const Scalar _tmp13 = _tmp0 * _tmp4;
  const Scalar _tmp14 = _tmp12 + _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp10 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp7;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_b(0, 0);
  const Scalar _tmp20 = std::pow(_tmp19, Scalar(2));
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp0 * _tmp11;
  const Scalar _tmp25 = _tmp1 * _tmp4;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp29 = _tmp27 + _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(1, 0);
  const Scalar _tmp32 = _tmp31 - p_b(1, 0);
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(2));
  const Scalar _tmp34 = _tmp20 + _tmp33;
  const Scalar _tmp35 = std::pow(_tmp34, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = -Scalar(0.010999999999999999) * _tmp21 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp39 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp37 + _tmp40;
  const Scalar _tmp42 = _tmp35 * _tmp41;
  const Scalar _tmp43 = -_tmp10 + _tmp15;
  const Scalar _tmp44 = _tmp43 + _tmp7;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 - p_a(0, 0);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp48 = _tmp27 - _tmp28;
  const Scalar _tmp49 = _tmp23 + _tmp48;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 - p_a(1, 0);
  const Scalar _tmp52 = _tmp47 * _tmp51;
  const Scalar _tmp53 = _tmp35 * _tmp52;
  const Scalar _tmp54 = _tmp19 * _tmp53 - _tmp32 * _tmp35;
  const Scalar _tmp55 = _tmp43 + _tmp6;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_d(0, 0);
  const Scalar _tmp58 = _tmp22 + _tmp48;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_d(1, 0);
  const Scalar _tmp61 = std::pow(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp60, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp60 * _tmp61;
  const Scalar _tmp63 = _tmp57 * _tmp61;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp52 * _tmp63 - _tmp62);
  const Scalar _tmp65 = _tmp38 - _tmp39;
  const Scalar _tmp66 = _tmp36 + _tmp65;
  const Scalar _tmp67 = _tmp37 + _tmp65;
  const Scalar _tmp68 = _tmp63 * _tmp67;
  const Scalar _tmp69 = _tmp64 * (-_tmp52 * _tmp68 + _tmp62 * _tmp66);
  const Scalar _tmp70 = _tmp35 * _tmp67;
  const Scalar _tmp71 = _tmp19 * _tmp70;
  const Scalar _tmp72 = _tmp32 * _tmp42 - _tmp52 * _tmp71 - _tmp54 * _tmp69;
  const Scalar _tmp73 = Scalar(1.0) * _tmp49;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp58 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp44;
  const Scalar _tmp77 = -_tmp55 + _tmp76;
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp64 * (-_tmp63 * _tmp66 + _tmp68);
  const Scalar _tmp80 = -_tmp19 * _tmp42 - _tmp54 * _tmp79 + _tmp71 - _tmp72 * _tmp78;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp17 * _tmp35;
  const Scalar _tmp83 = _tmp30 * _tmp35;
  const Scalar _tmp84 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp51, Scalar(2))));
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp47 * _tmp84;
  const Scalar _tmp87 = _tmp86 * (_tmp44 * _tmp51 * _tmp85 - _tmp46 * _tmp49 * _tmp85);
  const Scalar _tmp88 = _tmp35 * _tmp87;
  const Scalar _tmp89 = _tmp64 * (-_tmp55 * _tmp62 + _tmp58 * _tmp63 + _tmp63 * _tmp87);
  const Scalar _tmp90 = _tmp19 * _tmp83 + _tmp19 * _tmp88 - _tmp32 * _tmp82 - _tmp54 * _tmp89;
  const Scalar _tmp91 = Scalar(1.0) * _tmp75;
  const Scalar _tmp92 = _tmp69 * _tmp77 * _tmp91 - Scalar(1.0) * _tmp79;
  const Scalar _tmp93 = _tmp81 * _tmp92;
  const Scalar _tmp94 = -Scalar(1.0) * _tmp89 - _tmp90 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp96 = _tmp80 * _tmp95;
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp92 + _tmp97;
  const Scalar _tmp99 = _tmp81 * _tmp98;
  const Scalar _tmp100 = _tmp35 * _tmp99;
  const Scalar _tmp101 = _tmp54 * _tmp81;
  const Scalar _tmp102 = -_tmp101 * _tmp98 + Scalar(1.0);
  const Scalar _tmp103 = _tmp63 * _tmp64;
  const Scalar _tmp104 = _tmp16 + _tmp6;
  const Scalar _tmp105 = _tmp104 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp106 = _tmp22 + _tmp29;
  const Scalar _tmp107 = _tmp106 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp107 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = _tmp110 * _tmp86;
  const Scalar _tmp112 = _tmp52 * _tmp67;
  const Scalar _tmp113 = _tmp112 + _tmp52 * _tmp69;
  const Scalar _tmp114 = -_tmp113 * _tmp78 + _tmp52 * _tmp79 - _tmp67;
  const Scalar _tmp115 = _tmp114 * _tmp81;
  const Scalar _tmp116 = -_tmp115 * _tmp90 + _tmp52 * _tmp89 - _tmp87;
  const Scalar _tmp117 = _tmp116 * _tmp95;
  const Scalar _tmp118 = _tmp117 * _tmp80;
  const Scalar _tmp119 = _tmp114 + _tmp118;
  const Scalar _tmp120 = -_tmp101 * _tmp119 - _tmp52;
  const Scalar _tmp121 = _tmp119 * _tmp81;
  const Scalar _tmp122 = _tmp121 * _tmp35;
  const Scalar _tmp123 = _tmp105 * _tmp108;
  const Scalar _tmp124 = _tmp123 * fh1;
  const Scalar _tmp125 = _tmp124 * _tmp86;
  const Scalar _tmp126 = _tmp73 * _tmp78 + _tmp76;
  const Scalar _tmp127 = 0;
  const Scalar _tmp128 = _tmp103 * _tmp127;
  const Scalar _tmp129 = _tmp127 * _tmp81;
  const Scalar _tmp130 = _tmp129 * _tmp35;
  const Scalar _tmp131 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp132 = _tmp131 * _tmp86;
  const Scalar _tmp133 = Scalar(1.0) * _tmp95;
  const Scalar _tmp134 = _tmp103 * _tmp133;
  const Scalar _tmp135 = _tmp133 * _tmp35;
  const Scalar _tmp136 = fh1 * (_tmp104 * _tmp109 - _tmp106 * _tmp123);
  const Scalar _tmp137 = _tmp136 * _tmp86;
  const Scalar _tmp138 = -_tmp111 * (_tmp100 * _tmp19 + _tmp102 * _tmp103) -
                         _tmp125 * (_tmp103 * _tmp120 + _tmp122 * _tmp19 + Scalar(1.0)) -
                         _tmp132 * (-_tmp101 * _tmp128 + _tmp130 * _tmp19) -
                         _tmp137 * (-_tmp134 * _tmp54 + _tmp135 * _tmp19);
  const Scalar _tmp139 = Scalar(1.0) / (_tmp138);
  const Scalar _tmp140 = _tmp30 + _tmp74;
  const Scalar _tmp141 = _tmp140 * _tmp78;
  const Scalar _tmp142 = Scalar(1.0) / (-_tmp141 - _tmp17 + _tmp76);
  const Scalar _tmp143 = Scalar(1.0) * _tmp142;
  const Scalar _tmp144 = _tmp143 * _tmp96;
  const Scalar _tmp145 = _tmp140 * _tmp143;
  const Scalar _tmp146 = -_tmp133 * _tmp72 + _tmp145 * _tmp96;
  const Scalar _tmp147 = Scalar(1.0) * _tmp136;
  const Scalar _tmp148 = _tmp140 * _tmp142;
  const Scalar _tmp149 = _tmp72 * _tmp81;
  const Scalar _tmp150 = _tmp148 * _tmp97 - _tmp149 * _tmp98 - Scalar(1.0) * _tmp69;
  const Scalar _tmp151 = Scalar(1.0) * _tmp110;
  const Scalar _tmp152 = fh1 * (_tmp36 + _tmp40);
  const Scalar _tmp153 = -_tmp106 * fv1 - _tmp109 * _tmp152 - Scalar(40.024799999999999) * _tmp26;
  const Scalar _tmp154 = _tmp143 * _tmp78;
  const Scalar _tmp155 = _tmp141 * _tmp143 + Scalar(1.0);
  const Scalar _tmp156 = _tmp104 * fv1 + _tmp123 * _tmp152 + Scalar(40.024799999999999) * _tmp14;
  const Scalar _tmp157 = _tmp113 + _tmp118 * _tmp148 - _tmp119 * _tmp149;
  const Scalar _tmp158 = Scalar(1.0) * _tmp124;
  const Scalar _tmp159 = _tmp126 * _tmp142;
  const Scalar _tmp160 = -_tmp127 * _tmp149 - _tmp140 * _tmp159 + _tmp74;
  const Scalar _tmp161 =
      Scalar(1.0) * _tmp131 * (-_tmp126 * _tmp143 - _tmp160 * _tmp91 + Scalar(1.0)) +
      _tmp147 * (_tmp144 - _tmp146 * _tmp91) + _tmp151 * (_tmp143 * _tmp97 - _tmp150 * _tmp91) +
      Scalar(1.0) * _tmp153 * (_tmp154 - _tmp155 * _tmp91) +
      Scalar(1.0) * _tmp156 * (-_tmp143 + _tmp145 * _tmp75) +
      _tmp158 * (_tmp118 * _tmp143 - _tmp157 * _tmp91);
  const Scalar _tmp162 = std::asinh(_tmp139 * _tmp161);
  const Scalar _tmp163 = Scalar(1.4083112389913199) * _tmp162;
  const Scalar _tmp164 =
      -_tmp138 * _tmp163 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp50 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.71007031138673404) * _tmp139;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = std::cosh(_tmp166);
  const Scalar _tmp168 = Scalar(1.4083112389913199) * _tmp138;
  const Scalar _tmp169 = std::pow(_tmp138, Scalar(-2));
  const Scalar _tmp170 =
      std::pow(Scalar(std::pow(_tmp161, Scalar(2)) * _tmp169 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp171 = std::pow(_tmp34, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp172 = _tmp171 * _tmp20;
  const Scalar _tmp173 = _tmp171 * _tmp19 * _tmp32;
  const Scalar _tmp174 = _tmp172 * _tmp52 - _tmp173 - _tmp53;
  const Scalar _tmp175 = _tmp172 * _tmp67;
  const Scalar _tmp176 = _tmp173 * _tmp41;
  const Scalar _tmp177 = -_tmp174 * _tmp69 - _tmp175 * _tmp52 + _tmp176 + _tmp52 * _tmp70;
  const Scalar _tmp178 =
      -_tmp172 * _tmp41 - _tmp174 * _tmp79 + _tmp175 - _tmp177 * _tmp78 + _tmp42 - _tmp70;
  const Scalar _tmp179 = std::pow(_tmp80, Scalar(-2));
  const Scalar _tmp180 = _tmp178 * _tmp179;
  const Scalar _tmp181 = _tmp19 * _tmp35;
  const Scalar _tmp182 = _tmp180 * _tmp181;
  const Scalar _tmp183 =
      -_tmp17 * _tmp173 + _tmp172 * _tmp30 + _tmp172 * _tmp87 - _tmp174 * _tmp89 - _tmp83 - _tmp88;
  const Scalar _tmp184 = std::pow(_tmp90, Scalar(-2));
  const Scalar _tmp185 = _tmp183 * _tmp184;
  const Scalar _tmp186 = _tmp185 * _tmp80;
  const Scalar _tmp187 = _tmp186 * _tmp94;
  const Scalar _tmp188 = _tmp94 * _tmp95;
  const Scalar _tmp189 = _tmp178 * _tmp188;
  const Scalar _tmp190 = _tmp90 * _tmp92;
  const Scalar _tmp191 = _tmp96 * (_tmp180 * _tmp190 - _tmp183 * _tmp93);
  const Scalar _tmp192 = -_tmp187 + _tmp189 + _tmp191;
  const Scalar _tmp193 = _tmp181 * _tmp81;
  const Scalar _tmp194 = _tmp180 * _tmp54;
  const Scalar _tmp195 = _tmp174 * _tmp81;
  const Scalar _tmp196 = -_tmp101 * _tmp192 + _tmp194 * _tmp98 - _tmp195 * _tmp98;
  const Scalar _tmp197 = _tmp103 * _tmp129;
  const Scalar _tmp198 = _tmp117 * _tmp178;
  const Scalar _tmp199 = _tmp116 * _tmp186;
  const Scalar _tmp200 = _tmp114 * _tmp90;
  const Scalar _tmp201 = _tmp96 * (-_tmp115 * _tmp183 + _tmp180 * _tmp200);
  const Scalar _tmp202 = _tmp198 - _tmp199 + _tmp201;
  const Scalar _tmp203 = _tmp202 * _tmp81;
  const Scalar _tmp204 = -_tmp101 * _tmp202 + _tmp119 * _tmp194 - _tmp119 * _tmp195;
  const Scalar _tmp205 = Scalar(1.0) * _tmp181;
  const Scalar _tmp206 = _tmp103 * _tmp54;
  const Scalar _tmp207 = Scalar(1.0) * _tmp206;
  const Scalar _tmp208 =
      -_tmp111 *
          (-_tmp100 + _tmp103 * _tmp196 + _tmp172 * _tmp99 - _tmp182 * _tmp98 + _tmp192 * _tmp193) -
      _tmp125 * (_tmp103 * _tmp204 - _tmp119 * _tmp182 + _tmp121 * _tmp172 - _tmp122 +
                 _tmp181 * _tmp203) -
      _tmp132 * (-_tmp127 * _tmp182 + _tmp128 * _tmp194 + _tmp129 * _tmp172 - _tmp130 -
                 _tmp174 * _tmp197) -
      _tmp137 *
          (_tmp133 * _tmp172 - _tmp134 * _tmp174 - _tmp135 - _tmp185 * _tmp205 + _tmp185 * _tmp207);
  const Scalar _tmp209 = _tmp161 * _tmp169;
  const Scalar _tmp210 = _tmp143 * _tmp186;
  const Scalar _tmp211 = _tmp143 * _tmp95;
  const Scalar _tmp212 = _tmp178 * _tmp211;
  const Scalar _tmp213 = Scalar(1.0) * _tmp72;
  const Scalar _tmp214 =
      -_tmp133 * _tmp177 + _tmp140 * _tmp212 - _tmp145 * _tmp186 + _tmp185 * _tmp213;
  const Scalar _tmp215 = _tmp180 * _tmp72;
  const Scalar _tmp216 = -_tmp148 * _tmp187 + _tmp148 * _tmp189 + _tmp148 * _tmp191 -
                         _tmp149 * _tmp192 - _tmp177 * _tmp99 + _tmp215 * _tmp98;
  const Scalar _tmp217 = _tmp127 * _tmp215 - _tmp129 * _tmp177;
  const Scalar _tmp218 = _tmp131 * _tmp91;
  const Scalar _tmp219 = _tmp119 * _tmp215 - _tmp121 * _tmp177 + _tmp148 * _tmp198 -
                         _tmp148 * _tmp199 + _tmp148 * _tmp201 - _tmp149 * _tmp202;
  const Scalar _tmp220 = _tmp170 * (_tmp139 * (_tmp147 * (-_tmp210 + _tmp212 - _tmp214 * _tmp91) +
                                               _tmp151 * (-_tmp143 * _tmp187 + _tmp143 * _tmp189 +
                                                          _tmp143 * _tmp191 - _tmp216 * _tmp91) +
                                               _tmp158 * (_tmp143 * _tmp198 - _tmp143 * _tmp199 +
                                                          _tmp143 * _tmp201 - _tmp219 * _tmp91) -
                                               _tmp217 * _tmp218) -
                                    _tmp208 * _tmp209);
  const Scalar _tmp221 = Scalar(0.71007031138673404) * _tmp164 * _tmp169;
  const Scalar _tmp222 = Scalar(1.0) * _tmp162;
  const Scalar _tmp223 = Scalar(1.0) * std::cosh(_tmp222);
  const Scalar _tmp224 = -Scalar(1.4083112389913199) * std::sinh(_tmp166) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp222);
  const Scalar _tmp225 = _tmp147 * _tmp185;
  const Scalar _tmp226 = _tmp54 * _tmp64;
  const Scalar _tmp227 = _tmp129 * _tmp131;
  const Scalar _tmp228 = _tmp227 * _tmp64;
  const Scalar _tmp229 = _tmp127 * _tmp131;
  const Scalar _tmp230 = _tmp229 * _tmp64;
  const Scalar _tmp231 = _tmp133 * _tmp136;
  const Scalar _tmp232 = _tmp231 * _tmp64;
  const Scalar _tmp233 = _tmp110 * _tmp64;
  const Scalar _tmp234 = _tmp124 * _tmp64;
  const Scalar _tmp235 = -_tmp174 * _tmp228 - _tmp174 * _tmp232 + _tmp194 * _tmp230 +
                         _tmp196 * _tmp233 + _tmp204 * _tmp234 + _tmp225 * _tmp226;
  const Scalar _tmp236 =
      -_tmp101 * _tmp230 + _tmp102 * _tmp233 + _tmp120 * _tmp234 - _tmp232 * _tmp54;
  const Scalar _tmp237 = Scalar(1.0) / (_tmp236);
  const Scalar _tmp238 = _tmp110 * _tmp75;
  const Scalar _tmp239 = _tmp124 * _tmp75;
  const Scalar _tmp240 = _tmp143 * _tmp156;
  const Scalar _tmp241 = _tmp131 * _tmp75;
  const Scalar _tmp242 = _tmp136 * _tmp75;
  const Scalar _tmp243 = -_tmp140 * _tmp240 * _tmp75 + _tmp146 * _tmp242 + _tmp150 * _tmp238 +
                         _tmp153 * _tmp155 * _tmp75 + _tmp157 * _tmp239 + _tmp160 * _tmp241;
  const Scalar _tmp244 = std::asinh(_tmp237 * _tmp243);
  const Scalar _tmp245 = Scalar(1.0) * _tmp244;
  const Scalar _tmp246 = Scalar(1.4083112389913199) * _tmp236;
  const Scalar _tmp247 =
      -_tmp244 * _tmp246 - std::sqrt(Scalar(std::pow(Scalar(-_tmp56 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp59 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp248 = Scalar(0.71007031138673404) * _tmp237;
  const Scalar _tmp249 = _tmp247 * _tmp248;
  const Scalar _tmp250 = -Scalar(1.4083112389913199) * std::sinh(_tmp245) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp249);
  const Scalar _tmp251 = std::pow(_tmp236, Scalar(-2));
  const Scalar _tmp252 =
      std::pow(Scalar(std::pow(_tmp243, Scalar(2)) * _tmp251 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp253 = _tmp243 * _tmp251;
  const Scalar _tmp254 =
      _tmp252 * (-_tmp235 * _tmp253 + _tmp237 * (_tmp214 * _tmp242 + _tmp216 * _tmp238 +
                                                 _tmp217 * _tmp241 + _tmp219 * _tmp239));
  const Scalar _tmp255 = Scalar(1.0) * std::cosh(_tmp245);
  const Scalar _tmp256 = Scalar(1.4083112389913199) * _tmp244;
  const Scalar _tmp257 = Scalar(0.71007031138673404) * _tmp247 * _tmp251;
  const Scalar _tmp258 = std::cosh(_tmp249);
  const Scalar _tmp259 = -_tmp18 + p_b(0, 0);
  const Scalar _tmp260 = -_tmp41 + p_b(2, 0) - position_vector(2, 0);
  const Scalar _tmp261 = -_tmp31 + p_b(1, 0);
  const Scalar _tmp262 = std::pow(_tmp259, Scalar(2)) + std::pow(_tmp261, Scalar(2));
  const Scalar _tmp263 =
      std::pow(Scalar(std::pow(_tmp260, Scalar(2)) + _tmp262), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp264 = std::sqrt(_tmp262);
  const Scalar _tmp265 = _tmp110 * _tmp142;
  const Scalar _tmp266 = _tmp124 * _tmp142;
  const Scalar _tmp267 = -_tmp118 * _tmp266 + _tmp131 * _tmp159 - _tmp136 * _tmp144 -
                         _tmp153 * _tmp154 + _tmp240 - _tmp265 * _tmp97;
  const Scalar _tmp268 = _tmp110 * _tmp99 + _tmp121 * _tmp124 + _tmp227 + _tmp231;
  const Scalar _tmp269 = Scalar(1.0) / (_tmp268);
  const Scalar _tmp270 = std::asinh(_tmp267 * _tmp269);
  const Scalar _tmp271 = Scalar(1.4083112389913199) * _tmp268;
  const Scalar _tmp272 = -_tmp264 - _tmp270 * _tmp271;
  const Scalar _tmp273 = Scalar(0.71007031138673404) * _tmp269;
  const Scalar _tmp274 = _tmp272 * _tmp273;
  const Scalar _tmp275 = std::cosh(_tmp274);
  const Scalar _tmp276 = _tmp110 * _tmp81;
  const Scalar _tmp277 = -_tmp110 * _tmp180 * _tmp98 - _tmp119 * _tmp124 * _tmp180 +
                         _tmp124 * _tmp203 - _tmp180 * _tmp229 + _tmp192 * _tmp276 - _tmp225;
  const Scalar _tmp278 = std::pow(_tmp268, Scalar(-2));
  const Scalar _tmp279 = Scalar(0.71007031138673404) * _tmp272 * _tmp278;
  const Scalar _tmp280 = Scalar(1.0) / (_tmp264);
  const Scalar _tmp281 = _tmp267 * _tmp278;
  const Scalar _tmp282 =
      _tmp269 * (_tmp136 * _tmp210 - _tmp136 * _tmp212 + _tmp187 * _tmp265 - _tmp189 * _tmp265 -
                 _tmp191 * _tmp265 - _tmp198 * _tmp266 + _tmp199 * _tmp266 - _tmp201 * _tmp266) -
      _tmp277 * _tmp281;
  const Scalar _tmp283 =
      std::pow(Scalar(std::pow(_tmp267, Scalar(2)) * _tmp278 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp284 = _tmp271 * _tmp283;
  const Scalar _tmp285 = Scalar(1.4083112389913199) * _tmp277;
  const Scalar _tmp286 = Scalar(1.0) * _tmp270;
  const Scalar _tmp287 = Scalar(1.0) * _tmp283 * std::cosh(_tmp286);
  const Scalar _tmp288 = -std::sinh(_tmp274) - std::sinh(_tmp286);
  const Scalar _tmp289 = _tmp171 * _tmp33;
  const Scalar _tmp290 = _tmp173 * _tmp52 - _tmp289 + _tmp35;
  const Scalar _tmp291 =
      -_tmp17 * _tmp289 + _tmp173 * _tmp30 + _tmp173 * _tmp87 - _tmp290 * _tmp89 + _tmp82;
  const Scalar _tmp292 = _tmp184 * _tmp291;
  const Scalar _tmp293 = -_tmp112 * _tmp173 + _tmp289 * _tmp41 - _tmp290 * _tmp69 - _tmp42;
  const Scalar _tmp294 = _tmp173 * _tmp67 - _tmp176 - _tmp290 * _tmp79 - _tmp293 * _tmp78;
  const Scalar _tmp295 = _tmp188 * _tmp294;
  const Scalar _tmp296 = _tmp292 * _tmp80;
  const Scalar _tmp297 = _tmp296 * _tmp94;
  const Scalar _tmp298 = _tmp179 * _tmp294;
  const Scalar _tmp299 = _tmp96 * (_tmp190 * _tmp298 - _tmp291 * _tmp93);
  const Scalar _tmp300 = _tmp295 - _tmp297 + _tmp299;
  const Scalar _tmp301 = _tmp298 * _tmp98;
  const Scalar _tmp302 = -_tmp101 * _tmp300 - _tmp290 * _tmp99 + _tmp301 * _tmp54;
  const Scalar _tmp303 = _tmp96 * (-_tmp115 * _tmp291 + _tmp200 * _tmp298);
  const Scalar _tmp304 = _tmp117 * _tmp294;
  const Scalar _tmp305 = _tmp116 * _tmp296;
  const Scalar _tmp306 = _tmp303 + _tmp304 - _tmp305;
  const Scalar _tmp307 = _tmp119 * _tmp298;
  const Scalar _tmp308 = -_tmp101 * _tmp306 - _tmp121 * _tmp290 + _tmp307 * _tmp54;
  const Scalar _tmp309 = _tmp127 * _tmp298;
  const Scalar _tmp310 =
      -_tmp111 * (_tmp103 * _tmp302 + _tmp173 * _tmp99 - _tmp181 * _tmp301 + _tmp193 * _tmp300) -
      _tmp125 * (_tmp103 * _tmp308 + _tmp121 * _tmp173 - _tmp181 * _tmp307 + _tmp193 * _tmp306) -
      _tmp132 * (_tmp129 * _tmp173 - _tmp181 * _tmp309 - _tmp197 * _tmp290 + _tmp206 * _tmp309) -
      _tmp137 * (_tmp133 * _tmp173 - _tmp134 * _tmp290 - _tmp205 * _tmp292 + _tmp207 * _tmp292);
  const Scalar _tmp311 = -_tmp129 * _tmp293 + _tmp309 * _tmp72;
  const Scalar _tmp312 = -_tmp121 * _tmp293 + _tmp148 * _tmp303 + _tmp148 * _tmp304 -
                         _tmp148 * _tmp305 - _tmp149 * _tmp306 + _tmp307 * _tmp72;
  const Scalar _tmp313 = _tmp148 * _tmp295 - _tmp148 * _tmp297 + _tmp148 * _tmp299 -
                         _tmp149 * _tmp300 - _tmp293 * _tmp99 + _tmp301 * _tmp72;
  const Scalar _tmp314 = _tmp211 * _tmp294;
  const Scalar _tmp315 =
      -_tmp133 * _tmp293 + _tmp140 * _tmp314 - _tmp145 * _tmp296 + _tmp213 * _tmp292;
  const Scalar _tmp316 = _tmp143 * _tmp296;
  const Scalar _tmp317 = _tmp170 * (_tmp139 * (_tmp147 * (_tmp314 - _tmp315 * _tmp91 - _tmp316) +
                                               _tmp151 * (_tmp143 * _tmp295 - _tmp143 * _tmp297 +
                                                          _tmp143 * _tmp299 - _tmp313 * _tmp91) +
                                               _tmp158 * (_tmp143 * _tmp303 + _tmp143 * _tmp304 -
                                                          _tmp143 * _tmp305 - _tmp312 * _tmp91) -
                                               _tmp218 * _tmp311) -
                                    _tmp209 * _tmp310);
  const Scalar _tmp318 = _tmp147 * _tmp292;
  const Scalar _tmp319 = _tmp229 * _tmp298;
  const Scalar _tmp320 = _tmp226 * _tmp318 + _tmp226 * _tmp319 - _tmp228 * _tmp290 -
                         _tmp232 * _tmp290 + _tmp233 * _tmp302 + _tmp234 * _tmp308;
  const Scalar _tmp321 =
      _tmp252 *
      (_tmp237 * (_tmp238 * _tmp313 + _tmp239 * _tmp312 + _tmp241 * _tmp311 + _tmp242 * _tmp315) -
       _tmp253 * _tmp320);
  const Scalar _tmp322 = -_tmp110 * _tmp301 + _tmp124 * _tmp306 * _tmp81 - _tmp124 * _tmp307 +
                         _tmp276 * _tmp300 - _tmp318 - _tmp319;
  const Scalar _tmp323 = Scalar(1.4083112389913199) * _tmp322;
  const Scalar _tmp324 =
      _tmp269 * (-_tmp136 * _tmp314 + _tmp136 * _tmp316 - _tmp265 * _tmp295 + _tmp265 * _tmp297 -
                 _tmp265 * _tmp299 - _tmp266 * _tmp303 - _tmp266 * _tmp304 + _tmp266 * _tmp305) -
      _tmp281 * _tmp322;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp168 *
          (-_tmp167 * (_tmp165 * (-_tmp163 * _tmp208 - _tmp168 * _tmp220) - _tmp208 * _tmp221) -
           _tmp220 * _tmp223) +
      _tmp208 * _tmp224;
  _res(2, 0) =
      _tmp235 * _tmp250 +
      _tmp246 *
          (-_tmp254 * _tmp255 -
           _tmp258 * (-_tmp235 * _tmp257 + _tmp248 * (-_tmp235 * _tmp256 - _tmp246 * _tmp254)));
  _res(3, 0) =
      -_tmp259 * _tmp263 +
      _tmp271 *
          (-_tmp275 * (_tmp273 * (-_tmp259 * _tmp280 - _tmp270 * _tmp285 - _tmp282 * _tmp284) -
                       _tmp277 * _tmp279) -
           _tmp282 * _tmp287) +
      _tmp285 * _tmp288;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp168 *
          (-_tmp167 * (_tmp165 * (-_tmp163 * _tmp310 - _tmp168 * _tmp317) - _tmp221 * _tmp310) -
           _tmp223 * _tmp317) +
      _tmp224 * _tmp310;
  _res(2, 1) =
      _tmp246 *
          (-_tmp255 * _tmp321 -
           _tmp258 * (_tmp248 * (-_tmp246 * _tmp321 - _tmp256 * _tmp320) - _tmp257 * _tmp320)) +
      _tmp250 * _tmp320;
  _res(3, 1) =
      -_tmp261 * _tmp263 +
      _tmp271 *
          (-_tmp275 * (_tmp273 * (-_tmp261 * _tmp280 - _tmp270 * _tmp323 - _tmp284 * _tmp324) -
                       _tmp279 * _tmp322) -
           _tmp287 * _tmp324) +
      _tmp288 * _tmp323;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp260 * _tmp263;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
