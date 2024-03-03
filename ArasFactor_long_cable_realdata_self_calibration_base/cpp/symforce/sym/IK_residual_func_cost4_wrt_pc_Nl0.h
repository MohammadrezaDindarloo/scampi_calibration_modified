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
 * Symbolic function: IK_residual_func_cost4_wrt_pc_Nl0
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPcNl0(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1141

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (357)
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
  const Scalar _tmp7 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp8 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp7 + Scalar(0.20999999999999999) * _tmp8 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp10 = 2 * _tmp3;
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = _tmp0 * _tmp4;
  const Scalar _tmp13 = _tmp11 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp9;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = _tmp0 * _tmp10;
  const Scalar _tmp20 = _tmp1 * _tmp4;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 =
      -Scalar(0.010999999999999999) * _tmp22 - Scalar(0.010999999999999999) * _tmp7;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = _tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp14 - _tmp9;
  const Scalar _tmp28 = _tmp27 + _tmp6;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = _tmp29 - p_d(0, 0);
  const Scalar _tmp31 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp33 = _tmp19 - _tmp20;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp33;
  const Scalar _tmp35 = -_tmp32 + _tmp34;
  const Scalar _tmp36 = _tmp31 + _tmp35;
  const Scalar _tmp37 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp38 = _tmp37 - p_d(1, 0);
  const Scalar _tmp39 = std::pow(Scalar(std::pow(_tmp30, Scalar(2)) + std::pow(_tmp38, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp30 * _tmp39;
  const Scalar _tmp41 = -_tmp21;
  const Scalar _tmp42 = _tmp23 + _tmp24;
  const Scalar _tmp43 = _tmp41 + _tmp42;
  const Scalar _tmp44 = _tmp40 * _tmp43;
  const Scalar _tmp45 = _tmp38 * _tmp39;
  const Scalar _tmp46 = -_tmp6;
  const Scalar _tmp47 = _tmp15 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_b(0, 0);
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = -_tmp31;
  const Scalar _tmp52 = _tmp32 + _tmp34;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp55 = _tmp54 - p_b(1, 0);
  const Scalar _tmp56 = _tmp50 * _tmp55;
  const Scalar _tmp57 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp58 = _tmp31 + _tmp52;
  const Scalar _tmp59 = _tmp58 + position_vector(1, 0);
  const Scalar _tmp60 = _tmp59 - p_c(1, 0);
  const Scalar _tmp61 = std::pow(_tmp60, Scalar(2));
  const Scalar _tmp62 = _tmp57 + _tmp61;
  const Scalar _tmp63 = std::pow(_tmp62, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp43 * _tmp63;
  const Scalar _tmp65 = _tmp18 * _tmp64;
  const Scalar _tmp66 = _tmp21 + _tmp42;
  const Scalar _tmp67 = _tmp60 * _tmp63;
  const Scalar _tmp68 = -_tmp56 * _tmp65 + _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp56 * _tmp63;
  const Scalar _tmp70 = _tmp18 * _tmp69 - _tmp67;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp40 * _tmp56 - _tmp45;
  const Scalar _tmp73 = _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp26 * _tmp45 - _tmp44 * _tmp56 - _tmp68 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) * _tmp53;
  const Scalar _tmp76 = -_tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp58 + _tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp47;
  const Scalar _tmp79 = -_tmp16 + _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = _tmp63 * _tmp66;
  const Scalar _tmp82 = -_tmp18 * _tmp81 + _tmp65;
  const Scalar _tmp83 = -_tmp26 * _tmp40 + _tmp44 - _tmp73 * _tmp82 - _tmp74 * _tmp80;
  const Scalar _tmp84 = _tmp58 * _tmp63;
  const Scalar _tmp85 = _tmp16 * _tmp63;
  const Scalar _tmp86 =
      std::sqrt(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = _tmp50 * _tmp86;
  const Scalar _tmp89 = _tmp88 * (_tmp47 * _tmp55 * _tmp87 - _tmp49 * _tmp53 * _tmp87);
  const Scalar _tmp90 = _tmp63 * _tmp89;
  const Scalar _tmp91 = _tmp18 * _tmp84 + _tmp18 * _tmp90 - _tmp60 * _tmp85;
  const Scalar _tmp92 = -_tmp28 * _tmp45 + _tmp36 * _tmp40 + _tmp40 * _tmp89 - _tmp73 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp56 * _tmp71;
  const Scalar _tmp95 = _tmp43 * _tmp56;
  const Scalar _tmp96 = _tmp68 * _tmp94 + _tmp95;
  const Scalar _tmp97 = -_tmp43 - _tmp80 * _tmp96 + _tmp82 * _tmp94;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp99 = _tmp92 * _tmp98;
  const Scalar _tmp100 = -_tmp89 + _tmp91 * _tmp94 - _tmp97 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp93;
  const Scalar _tmp102 = _tmp101 * _tmp83;
  const Scalar _tmp103 = _tmp102 + _tmp97;
  const Scalar _tmp104 = _tmp72 * _tmp98;
  const Scalar _tmp105 = -_tmp103 * _tmp104 - _tmp56;
  const Scalar _tmp106 = _tmp63 * _tmp71;
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp103 * _tmp98;
  const Scalar _tmp109 = _tmp27 + _tmp46;
  const Scalar _tmp110 = _tmp109 - p_a(0, 0) + position_vector(0, 0);
  const Scalar _tmp111 = _tmp35 + _tmp51;
  const Scalar _tmp112 = _tmp111 - p_a(1, 0) + position_vector(1, 0);
  const Scalar _tmp113 =
      std::pow(Scalar(std::pow(_tmp110, Scalar(2)) + std::pow(_tmp112, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp114 = _tmp110 * _tmp113;
  const Scalar _tmp115 = _tmp114 * fh1;
  const Scalar _tmp116 = _tmp115 * _tmp88;
  const Scalar _tmp117 = _tmp75 * _tmp80 + _tmp78;
  const Scalar _tmp118 = 0;
  const Scalar _tmp119 = _tmp118 * _tmp98;
  const Scalar _tmp120 = _tmp106 * _tmp18;
  const Scalar _tmp121 = _tmp120 * _tmp72;
  const Scalar _tmp122 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp123 = _tmp122 * _tmp88;
  const Scalar _tmp124 = Scalar(1.0) * _tmp71;
  const Scalar _tmp125 = Scalar(1.0) * _tmp77;
  const Scalar _tmp126 = _tmp125 * _tmp79;
  const Scalar _tmp127 = _tmp126 * _tmp71;
  const Scalar _tmp128 = -_tmp124 * _tmp82 + _tmp127 * _tmp68;
  const Scalar _tmp129 = -_tmp124 * _tmp91 - _tmp128 * _tmp99;
  const Scalar _tmp130 = _tmp83 * _tmp93;
  const Scalar _tmp131 = _tmp129 * _tmp130;
  const Scalar _tmp132 = _tmp128 + _tmp131;
  const Scalar _tmp133 = _tmp132 * _tmp98;
  const Scalar _tmp134 = -_tmp104 * _tmp132 + Scalar(1.0);
  const Scalar _tmp135 = _tmp106 * _tmp134;
  const Scalar _tmp136 = _tmp112 * _tmp113;
  const Scalar _tmp137 = _tmp136 * fh1;
  const Scalar _tmp138 = _tmp137 * _tmp88;
  const Scalar _tmp139 = Scalar(1.0) * _tmp93;
  const Scalar _tmp140 = fh1 * (_tmp109 * _tmp136 - _tmp111 * _tmp114);
  const Scalar _tmp141 = _tmp140 * _tmp88;
  const Scalar _tmp142 = -_tmp116 * (_tmp107 * _tmp18 + _tmp108 * _tmp40 + Scalar(1.0)) -
                         _tmp123 * (-_tmp119 * _tmp121 + _tmp119 * _tmp40) -
                         _tmp138 * (_tmp133 * _tmp40 + _tmp135 * _tmp18) -
                         _tmp141 * (-_tmp121 * _tmp139 + _tmp139 * _tmp40);
  const Scalar _tmp143 = Scalar(1.0) / (_tmp142);
  const Scalar _tmp144 = fh1 * (_tmp25 + _tmp41);
  const Scalar _tmp145 = _tmp109 * fv1 + _tmp114 * _tmp144 + Scalar(40.024799999999999) * _tmp13;
  const Scalar _tmp146 = _tmp36 + _tmp76;
  const Scalar _tmp147 = _tmp146 * _tmp80;
  const Scalar _tmp148 = Scalar(1.0) / (-_tmp147 - _tmp28 + _tmp78);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp146 * _tmp77;
  const Scalar _tmp151 = _tmp117 * _tmp148;
  const Scalar _tmp152 = -_tmp119 * _tmp74 - _tmp146 * _tmp151 + _tmp76;
  const Scalar _tmp153 = -_tmp111 * fv1 - _tmp136 * _tmp144 - Scalar(40.024799999999999) * _tmp33;
  const Scalar _tmp154 = _tmp77 * (_tmp147 * _tmp149 + Scalar(1.0));
  const Scalar _tmp155 = _tmp149 * _tmp80;
  const Scalar _tmp156 = _tmp130 * _tmp149;
  const Scalar _tmp157 = -_tmp139 * _tmp74 + _tmp146 * _tmp156;
  const Scalar _tmp158 = Scalar(1.0) * _tmp140;
  const Scalar _tmp159 = _tmp146 * _tmp148;
  const Scalar _tmp160 = _tmp74 * _tmp98;
  const Scalar _tmp161 = -_tmp124 * _tmp68 + _tmp131 * _tmp159 - _tmp132 * _tmp160;
  const Scalar _tmp162 = Scalar(1.0) * _tmp137;
  const Scalar _tmp163 = _tmp102 * _tmp159 - _tmp103 * _tmp160 + _tmp96;
  const Scalar _tmp164 = Scalar(1.0) * _tmp115;
  const Scalar _tmp165 =
      Scalar(1.0) * _tmp122 * (-_tmp117 * _tmp149 - _tmp125 * _tmp152 + Scalar(1.0)) +
      Scalar(1.0) * _tmp145 * (_tmp149 * _tmp150 - _tmp149) +
      Scalar(1.0) * _tmp153 * (-Scalar(1.0) * _tmp154 + _tmp155) +
      _tmp158 * (-_tmp125 * _tmp157 + _tmp156) +
      _tmp162 * (-_tmp125 * _tmp161 + _tmp131 * _tmp149) +
      _tmp164 * (_tmp102 * _tmp149 - _tmp125 * _tmp163);
  const Scalar _tmp166 = std::asinh(_tmp143 * _tmp165);
  const Scalar _tmp167 = Scalar(1.0) * _tmp166;
  const Scalar _tmp168 = Scalar(1.0) * std::cosh(_tmp167);
  const Scalar _tmp169 = std::pow(_tmp142, Scalar(-2));
  const Scalar _tmp170 =
      std::pow(Scalar(std::pow(_tmp165, Scalar(2)) * _tmp169 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp171 = std::pow(_tmp62, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp172 = _tmp171 * _tmp57;
  const Scalar _tmp173 = _tmp172 * _tmp43;
  const Scalar _tmp174 = -_tmp172 * _tmp66 + _tmp173 - _tmp64 + _tmp81;
  const Scalar _tmp175 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp176 = _tmp171 * _tmp18 * _tmp60;
  const Scalar _tmp177 = _tmp175 * (_tmp172 * _tmp56 - _tmp176 - _tmp69);
  const Scalar _tmp178 = _tmp177 * _tmp72;
  const Scalar _tmp179 = _tmp176 * _tmp66;
  const Scalar _tmp180 = -_tmp173 * _tmp56 + _tmp179 + _tmp56 * _tmp64;
  const Scalar _tmp181 = _tmp178 * _tmp68 - _tmp180 * _tmp73;
  const Scalar _tmp182 = -_tmp174 * _tmp73 + _tmp178 * _tmp82 - _tmp181 * _tmp80;
  const Scalar _tmp183 = std::pow(_tmp83, Scalar(-2));
  const Scalar _tmp184 = _tmp182 * _tmp183;
  const Scalar _tmp185 = _tmp184 * _tmp74;
  const Scalar _tmp186 = _tmp118 * _tmp185 - _tmp119 * _tmp181;
  const Scalar _tmp187 = _tmp122 * _tmp125;
  const Scalar _tmp188 = -_tmp16 * _tmp176 + _tmp172 * _tmp58 + _tmp172 * _tmp89 - _tmp84 - _tmp90;
  const Scalar _tmp189 = _tmp178 * _tmp91 - _tmp188 * _tmp73;
  const Scalar _tmp190 = std::pow(_tmp92, Scalar(-2));
  const Scalar _tmp191 = _tmp189 * _tmp190;
  const Scalar _tmp192 = _tmp129 * _tmp83;
  const Scalar _tmp193 = _tmp191 * _tmp192;
  const Scalar _tmp194 = _tmp129 * _tmp93;
  const Scalar _tmp195 = _tmp182 * _tmp194;
  const Scalar _tmp196 = Scalar(1.0) * _tmp177;
  const Scalar _tmp197 = _tmp184 * _tmp92;
  const Scalar _tmp198 = _tmp126 * _tmp68;
  const Scalar _tmp199 =
      -_tmp124 * _tmp174 + _tmp127 * _tmp180 - _tmp177 * _tmp198 + _tmp196 * _tmp82;
  const Scalar _tmp200 = _tmp189 * _tmp98;
  const Scalar _tmp201 = _tmp130 * (-_tmp124 * _tmp188 + _tmp128 * _tmp197 - _tmp128 * _tmp200 +
                                    _tmp196 * _tmp91 - _tmp199 * _tmp99);
  const Scalar _tmp202 = -_tmp193 + _tmp195 + _tmp199 + _tmp201;
  const Scalar _tmp203 = -_tmp124 * _tmp180 + _tmp132 * _tmp185 - _tmp133 * _tmp181 -
                         _tmp159 * _tmp193 + _tmp159 * _tmp195 + _tmp159 * _tmp201 -
                         _tmp160 * _tmp202 + _tmp196 * _tmp68;
  const Scalar _tmp204 = _tmp149 * _tmp93;
  const Scalar _tmp205 = _tmp182 * _tmp204;
  const Scalar _tmp206 = _tmp149 * _tmp83;
  const Scalar _tmp207 = _tmp191 * _tmp206;
  const Scalar _tmp208 = Scalar(1.0) * _tmp74;
  const Scalar _tmp209 =
      -_tmp139 * _tmp181 + _tmp146 * _tmp205 - _tmp146 * _tmp207 + _tmp191 * _tmp208;
  const Scalar _tmp210 = _tmp177 * _tmp56;
  const Scalar _tmp211 = _tmp180 * _tmp94 - _tmp210 * _tmp68;
  const Scalar _tmp212 = _tmp174 * _tmp94 - _tmp210 * _tmp82 - _tmp211 * _tmp80;
  const Scalar _tmp213 = _tmp130 * (_tmp188 * _tmp94 + _tmp197 * _tmp97 - _tmp200 * _tmp97 -
                                    _tmp210 * _tmp91 - _tmp212 * _tmp99);
  const Scalar _tmp214 = _tmp100 * _tmp83;
  const Scalar _tmp215 = _tmp191 * _tmp214;
  const Scalar _tmp216 = _tmp101 * _tmp182;
  const Scalar _tmp217 = _tmp212 + _tmp213 - _tmp215 + _tmp216;
  const Scalar _tmp218 = _tmp103 * _tmp185 - _tmp108 * _tmp181 + _tmp159 * _tmp213 -
                         _tmp159 * _tmp215 + _tmp159 * _tmp216 - _tmp160 * _tmp217 + _tmp211;
  const Scalar _tmp219 = Scalar(1.0) * _tmp40;
  const Scalar _tmp220 = Scalar(1.0) * _tmp121;
  const Scalar _tmp221 = _tmp124 * _tmp72 * _tmp93;
  const Scalar _tmp222 = _tmp18 * _tmp63;
  const Scalar _tmp223 = _tmp139 * _tmp222;
  const Scalar _tmp224 = _tmp106 * _tmp72;
  const Scalar _tmp225 = _tmp177 * _tmp222;
  const Scalar _tmp226 = _tmp132 * _tmp72;
  const Scalar _tmp227 = -_tmp104 * _tmp202 + _tmp184 * _tmp226;
  const Scalar _tmp228 = _tmp172 * _tmp71;
  const Scalar _tmp229 = _tmp132 * _tmp40;
  const Scalar _tmp230 = _tmp40 * _tmp98;
  const Scalar _tmp231 = _tmp119 * _tmp222;
  const Scalar _tmp232 = _tmp118 * _tmp121;
  const Scalar _tmp233 = _tmp118 * _tmp40;
  const Scalar _tmp234 = _tmp119 * _tmp73;
  const Scalar _tmp235 = _tmp103 * _tmp40;
  const Scalar _tmp236 = _tmp103 * _tmp72;
  const Scalar _tmp237 = -_tmp104 * _tmp217 + _tmp184 * _tmp236;
  const Scalar _tmp238 = -_tmp116 * (-_tmp105 * _tmp225 + _tmp105 * _tmp228 - _tmp107 +
                                     _tmp120 * _tmp237 - _tmp184 * _tmp235 + _tmp217 * _tmp230) -
                         _tmp123 * (_tmp119 * _tmp224 - _tmp172 * _tmp234 + _tmp178 * _tmp231 +
                                    _tmp184 * _tmp232 - _tmp184 * _tmp233) -
                         _tmp138 * (_tmp120 * _tmp227 - _tmp134 * _tmp225 + _tmp134 * _tmp228 -
                                    _tmp135 - _tmp184 * _tmp229 + _tmp202 * _tmp230) -
                         _tmp141 * (_tmp139 * _tmp224 - _tmp172 * _tmp221 + _tmp178 * _tmp223 -
                                    _tmp191 * _tmp219 + _tmp191 * _tmp220);
  const Scalar _tmp239 = _tmp165 * _tmp169;
  const Scalar _tmp240 = _tmp170 * (_tmp143 * (_tmp158 * (-_tmp125 * _tmp209 + _tmp205 - _tmp207) +
                                               _tmp162 * (-_tmp125 * _tmp203 - _tmp149 * _tmp193 +
                                                          _tmp149 * _tmp195 + _tmp149 * _tmp201) +
                                               _tmp164 * (-_tmp125 * _tmp218 + _tmp149 * _tmp213 -
                                                          _tmp149 * _tmp215 + _tmp149 * _tmp216) -
                                               _tmp186 * _tmp187) -
                                    _tmp238 * _tmp239);
  const Scalar _tmp241 = Scalar(1.4083112389913199) * _tmp142;
  const Scalar _tmp242 =
      -_tmp166 * _tmp241 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp54 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp243 = Scalar(0.71007031138673404) * _tmp143;
  const Scalar _tmp244 = _tmp242 * _tmp243;
  const Scalar _tmp245 = std::cosh(_tmp244);
  const Scalar _tmp246 = Scalar(0.71007031138673404) * _tmp169 * _tmp242;
  const Scalar _tmp247 = Scalar(1.4083112389913199) * _tmp166;
  const Scalar _tmp248 = -Scalar(1.4083112389913199) * std::sinh(_tmp167) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp244);
  const Scalar _tmp249 = -_tmp59 + p_c(1, 0);
  const Scalar _tmp250 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp251 =
      std::sqrt(Scalar(std::pow(_tmp249, Scalar(2)) + std::pow(_tmp250, Scalar(2))));
  const Scalar _tmp252 = _tmp137 * _tmp71;
  const Scalar _tmp253 = _tmp119 * _tmp122;
  const Scalar _tmp254 = _tmp115 * _tmp71;
  const Scalar _tmp255 =
      _tmp105 * _tmp254 + _tmp134 * _tmp252 - _tmp140 * _tmp221 - _tmp253 * _tmp73;
  const Scalar _tmp256 = Scalar(1.0) / (_tmp255);
  const Scalar _tmp257 = _tmp122 * _tmp77;
  const Scalar _tmp258 = _tmp77 * fh1;
  const Scalar _tmp259 = _tmp114 * _tmp258;
  const Scalar _tmp260 = _tmp136 * _tmp258;
  const Scalar _tmp261 = _tmp145 * _tmp149;
  const Scalar _tmp262 = _tmp140 * _tmp77;
  const Scalar _tmp263 = -_tmp150 * _tmp261 + _tmp152 * _tmp257 + _tmp153 * _tmp154 +
                         _tmp157 * _tmp262 + _tmp161 * _tmp260 + _tmp163 * _tmp259;
  const Scalar _tmp264 = std::asinh(_tmp256 * _tmp263);
  const Scalar _tmp265 = Scalar(1.4083112389913199) * _tmp255;
  const Scalar _tmp266 = -_tmp251 - _tmp264 * _tmp265;
  const Scalar _tmp267 = Scalar(0.71007031138673404) * _tmp256;
  const Scalar _tmp268 = _tmp266 * _tmp267;
  const Scalar _tmp269 = Scalar(1.0) * _tmp264;
  const Scalar _tmp270 = -std::sinh(_tmp268) - std::sinh(_tmp269);
  const Scalar _tmp271 = _tmp118 * _tmp122;
  const Scalar _tmp272 = _tmp184 * _tmp271;
  const Scalar _tmp273 = _tmp139 * _tmp140;
  const Scalar _tmp274 = _tmp124 * _tmp140 * _tmp72;
  const Scalar _tmp275 = -_tmp105 * _tmp115 * _tmp177 - _tmp134 * _tmp137 * _tmp177 +
                         _tmp178 * _tmp253 + _tmp178 * _tmp273 + _tmp191 * _tmp274 +
                         _tmp227 * _tmp252 + _tmp237 * _tmp254 + _tmp272 * _tmp73;
  const Scalar _tmp276 = Scalar(1.4083112389913199) * _tmp275;
  const Scalar _tmp277 = std::pow(_tmp255, Scalar(-2));
  const Scalar _tmp278 =
      std::pow(Scalar(std::pow(_tmp263, Scalar(2)) * _tmp277 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp279 = _tmp263 * _tmp277;
  const Scalar _tmp280 =
      _tmp278 *
      (_tmp256 * (_tmp186 * _tmp257 + _tmp203 * _tmp260 + _tmp209 * _tmp262 + _tmp218 * _tmp259) -
       _tmp275 * _tmp279);
  const Scalar _tmp281 = Scalar(1.0) * std::cosh(_tmp269);
  const Scalar _tmp282 = std::cosh(_tmp268);
  const Scalar _tmp283 = Scalar(1.0) / (_tmp251);
  const Scalar _tmp284 = Scalar(0.71007031138673404) * _tmp266 * _tmp277;
  const Scalar _tmp285 = _tmp103 * _tmp115;
  const Scalar _tmp286 = _tmp115 * _tmp98;
  const Scalar _tmp287 = _tmp137 * _tmp98;
  const Scalar _tmp288 = _tmp132 * _tmp137;
  const Scalar _tmp289 = -_tmp158 * _tmp191 - _tmp184 * _tmp285 - _tmp184 * _tmp288 +
                         _tmp202 * _tmp287 + _tmp217 * _tmp286 - _tmp272;
  const Scalar _tmp290 = _tmp137 * _tmp148;
  const Scalar _tmp291 = _tmp115 * _tmp148;
  const Scalar _tmp292 = -_tmp102 * _tmp291 + _tmp122 * _tmp151 - _tmp131 * _tmp290 -
                         _tmp140 * _tmp156 - _tmp153 * _tmp155 + _tmp261;
  const Scalar _tmp293 = _tmp108 * _tmp115 + _tmp133 * _tmp137 + _tmp253 + _tmp273;
  const Scalar _tmp294 = std::pow(_tmp293, Scalar(-2));
  const Scalar _tmp295 = _tmp292 * _tmp294;
  const Scalar _tmp296 = Scalar(1.0) / (_tmp293);
  const Scalar _tmp297 =
      std::pow(Scalar(std::pow(_tmp292, Scalar(2)) * _tmp294 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp298 =
      _tmp297 *
      (-_tmp289 * _tmp295 +
       _tmp296 * (-_tmp140 * _tmp205 + _tmp140 * _tmp207 + _tmp193 * _tmp290 - _tmp195 * _tmp290 -
                  _tmp201 * _tmp290 - _tmp213 * _tmp291 + _tmp215 * _tmp291 - _tmp216 * _tmp291));
  const Scalar _tmp299 = std::asinh(_tmp292 * _tmp296);
  const Scalar _tmp300 = Scalar(1.0) * _tmp299;
  const Scalar _tmp301 = Scalar(1.0) * std::cosh(_tmp300);
  const Scalar _tmp302 = Scalar(1.4083112389913199) * _tmp293;
  const Scalar _tmp303 =
      -_tmp299 * _tmp302 - std::sqrt(Scalar(std::pow(Scalar(-_tmp29 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp37 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp296;
  const Scalar _tmp305 = _tmp303 * _tmp304;
  const Scalar _tmp306 = std::cosh(_tmp305);
  const Scalar _tmp307 = Scalar(0.71007031138673404) * _tmp294 * _tmp303;
  const Scalar _tmp308 = Scalar(1.4083112389913199) * _tmp289;
  const Scalar _tmp309 = -std::sinh(_tmp300) - std::sinh(_tmp305);
  const Scalar _tmp310 = _tmp171 * _tmp61;
  const Scalar _tmp311 = _tmp175 * (_tmp176 * _tmp56 - _tmp310 + _tmp63);
  const Scalar _tmp312 = _tmp311 * _tmp72;
  const Scalar _tmp313 = _tmp176 * _tmp43 - _tmp179;
  const Scalar _tmp314 = -_tmp176 * _tmp95 + _tmp310 * _tmp66 - _tmp81;
  const Scalar _tmp315 = _tmp312 * _tmp68 - _tmp314 * _tmp73;
  const Scalar _tmp316 = _tmp312 * _tmp82 - _tmp313 * _tmp73 - _tmp315 * _tmp80;
  const Scalar _tmp317 = _tmp183 * _tmp316;
  const Scalar _tmp318 = _tmp105 * _tmp311;
  const Scalar _tmp319 = _tmp176 * _tmp71;
  const Scalar _tmp320 = _tmp101 * _tmp316;
  const Scalar _tmp321 = _tmp311 * _tmp56;
  const Scalar _tmp322 = _tmp314 * _tmp94 - _tmp321 * _tmp68;
  const Scalar _tmp323 = _tmp313 * _tmp94 - _tmp321 * _tmp82 - _tmp322 * _tmp80;
  const Scalar _tmp324 = -_tmp16 * _tmp310 + _tmp176 * _tmp58 + _tmp176 * _tmp89 + _tmp85;
  const Scalar _tmp325 = _tmp312 * _tmp91 - _tmp324 * _tmp73;
  const Scalar _tmp326 = _tmp325 * _tmp98;
  const Scalar _tmp327 = _tmp317 * _tmp92;
  const Scalar _tmp328 = _tmp130 * (-_tmp321 * _tmp91 - _tmp323 * _tmp99 + _tmp324 * _tmp94 -
                                    _tmp326 * _tmp97 + _tmp327 * _tmp97);
  const Scalar _tmp329 = _tmp190 * _tmp325;
  const Scalar _tmp330 = _tmp214 * _tmp329;
  const Scalar _tmp331 = _tmp320 + _tmp323 + _tmp328 - _tmp330;
  const Scalar _tmp332 = -_tmp104 * _tmp331 + _tmp236 * _tmp317;
  const Scalar _tmp333 = Scalar(1.0) * _tmp311;
  const Scalar _tmp334 =
      -_tmp124 * _tmp313 + _tmp127 * _tmp314 - _tmp198 * _tmp311 + _tmp333 * _tmp82;
  const Scalar _tmp335 = _tmp130 * (-_tmp124 * _tmp324 - _tmp128 * _tmp326 + _tmp128 * _tmp327 +
                                    _tmp333 * _tmp91 - _tmp334 * _tmp99);
  const Scalar _tmp336 = _tmp194 * _tmp316;
  const Scalar _tmp337 = _tmp192 * _tmp329;
  const Scalar _tmp338 = _tmp334 + _tmp335 + _tmp336 - _tmp337;
  const Scalar _tmp339 = -_tmp104 * _tmp338 + _tmp226 * _tmp317;
  const Scalar _tmp340 = _tmp134 * _tmp311;
  const Scalar _tmp341 =
      -_tmp116 * (_tmp105 * _tmp319 + _tmp120 * _tmp332 - _tmp222 * _tmp318 + _tmp230 * _tmp331 -
                  _tmp235 * _tmp317) -
      _tmp123 * (-_tmp176 * _tmp234 + _tmp231 * _tmp312 + _tmp232 * _tmp317 - _tmp233 * _tmp317) -
      _tmp138 * (_tmp120 * _tmp339 + _tmp134 * _tmp319 - _tmp222 * _tmp340 - _tmp229 * _tmp317 +
                 _tmp230 * _tmp338) -
      _tmp141 * (-_tmp176 * _tmp221 - _tmp219 * _tmp329 + _tmp220 * _tmp329 + _tmp223 * _tmp312);
  const Scalar _tmp342 = _tmp317 * _tmp74;
  const Scalar _tmp343 = -_tmp124 * _tmp314 + _tmp132 * _tmp342 - _tmp133 * _tmp315 +
                         _tmp159 * _tmp335 + _tmp159 * _tmp336 - _tmp159 * _tmp337 -
                         _tmp160 * _tmp338 + _tmp333 * _tmp68;
  const Scalar _tmp344 = _tmp118 * _tmp342 - _tmp119 * _tmp315;
  const Scalar _tmp345 = _tmp103 * _tmp342 - _tmp108 * _tmp315 + _tmp159 * _tmp320 +
                         _tmp159 * _tmp328 - _tmp159 * _tmp330 - _tmp160 * _tmp331 + _tmp322;
  const Scalar _tmp346 = _tmp204 * _tmp316;
  const Scalar _tmp347 = _tmp206 * _tmp329;
  const Scalar _tmp348 =
      -_tmp139 * _tmp315 + _tmp146 * _tmp346 - _tmp146 * _tmp347 + _tmp208 * _tmp329;
  const Scalar _tmp349 = _tmp170 * (_tmp143 * (_tmp158 * (-_tmp125 * _tmp348 + _tmp346 - _tmp347) +
                                               _tmp162 * (-_tmp125 * _tmp343 + _tmp149 * _tmp335 +
                                                          _tmp149 * _tmp336 - _tmp149 * _tmp337) +
                                               _tmp164 * (-_tmp125 * _tmp345 + _tmp149 * _tmp320 +
                                                          _tmp149 * _tmp328 - _tmp149 * _tmp330) -
                                               _tmp187 * _tmp344) -
                                    _tmp239 * _tmp341);
  const Scalar _tmp350 = _tmp271 * _tmp317;
  const Scalar _tmp351 = -_tmp115 * _tmp318 - _tmp137 * _tmp340 + _tmp252 * _tmp339 +
                         _tmp253 * _tmp312 + _tmp254 * _tmp332 + _tmp273 * _tmp312 +
                         _tmp274 * _tmp329 + _tmp350 * _tmp73;
  const Scalar _tmp352 = Scalar(1.4083112389913199) * _tmp351;
  const Scalar _tmp353 =
      _tmp278 *
      (_tmp256 * (_tmp257 * _tmp344 + _tmp259 * _tmp345 + _tmp260 * _tmp343 + _tmp262 * _tmp348) -
       _tmp279 * _tmp351);
  const Scalar _tmp354 = -_tmp158 * _tmp329 - _tmp285 * _tmp317 + _tmp286 * _tmp331 +
                         _tmp287 * _tmp338 - _tmp288 * _tmp317 - _tmp350;
  const Scalar _tmp355 = Scalar(1.4083112389913199) * _tmp354;
  const Scalar _tmp356 =
      _tmp297 *
      (-_tmp295 * _tmp354 +
       _tmp296 * (-_tmp140 * _tmp346 + _tmp140 * _tmp347 - _tmp290 * _tmp335 - _tmp290 * _tmp336 +
                  _tmp290 * _tmp337 - _tmp291 * _tmp320 - _tmp291 * _tmp328 + _tmp291 * _tmp330));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp238 * _tmp248 +
      _tmp241 *
          (-_tmp168 * _tmp240 -
           _tmp245 * (-_tmp238 * _tmp246 + _tmp243 * (-_tmp238 * _tmp247 - _tmp240 * _tmp241)));
  _res(2, 0) =
      _tmp265 * (-_tmp280 * _tmp281 -
                 _tmp282 * (_tmp267 * (-_tmp250 * _tmp283 - _tmp264 * _tmp276 - _tmp265 * _tmp280) -
                            _tmp275 * _tmp284)) +
      _tmp270 * _tmp276;
  _res(3, 0) =
      _tmp302 *
          (-_tmp298 * _tmp301 -
           _tmp306 * (-_tmp289 * _tmp307 + _tmp304 * (-_tmp298 * _tmp302 - _tmp299 * _tmp308))) +
      _tmp308 * _tmp309;
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp241 *
          (-_tmp168 * _tmp349 -
           _tmp245 * (_tmp243 * (-_tmp241 * _tmp349 - _tmp247 * _tmp341) - _tmp246 * _tmp341)) +
      _tmp248 * _tmp341;
  _res(2, 1) =
      _tmp265 * (-_tmp281 * _tmp353 -
                 _tmp282 * (_tmp267 * (-_tmp249 * _tmp283 - _tmp264 * _tmp352 - _tmp265 * _tmp353) -
                            _tmp284 * _tmp351)) +
      _tmp270 * _tmp352;
  _res(3, 1) =
      _tmp302 *
          (-_tmp301 * _tmp356 -
           _tmp306 * (_tmp304 * (-_tmp299 * _tmp355 - _tmp302 * _tmp356) - _tmp307 * _tmp354)) +
      _tmp309 * _tmp355;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
