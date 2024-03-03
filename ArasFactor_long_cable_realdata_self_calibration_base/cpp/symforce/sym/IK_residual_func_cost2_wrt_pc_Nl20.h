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
 * Symbolic function: IK_residual_func_cost2_wrt_pc_Nl20
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost2WrtPcNl20(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1048

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (326)
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
  const Scalar _tmp8 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 = Scalar(0.20999999999999999) * _tmp8 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = _tmp11 + _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp7;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp21 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp23 = _tmp2 * _tmp4;
  const Scalar _tmp24 = _tmp0 * _tmp5;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = _tmp29 - p_c(1, 0);
  const Scalar _tmp31 = std::pow(_tmp30, Scalar(2));
  const Scalar _tmp32 = _tmp19 + _tmp31;
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp34 = -_tmp7;
  const Scalar _tmp35 = _tmp15 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = _tmp36 - p_b(0, 0);
  const Scalar _tmp38 = Scalar(1.0) / (_tmp37);
  const Scalar _tmp39 = -_tmp22 + _tmp26;
  const Scalar _tmp40 = _tmp20 + _tmp39;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = _tmp38 * _tmp42;
  const Scalar _tmp44 = _tmp33 * _tmp43;
  const Scalar _tmp45 = _tmp18 * _tmp44 - _tmp30 * _tmp33;
  const Scalar _tmp46 = Scalar(0.20999999999999999) * _tmp11 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp47 = -Scalar(0.010999999999999999) * _tmp21 -
                        Scalar(0.010999999999999999) * _tmp8 + Scalar(-0.010999999999999999);
  const Scalar _tmp48 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp49 = _tmp47 - _tmp48;
  const Scalar _tmp50 = _tmp46 + _tmp49;
  const Scalar _tmp51 = -_tmp10 + _tmp14;
  const Scalar _tmp52 = _tmp34 + _tmp51;
  const Scalar _tmp53 = _tmp52 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 - p_a(0, 0);
  const Scalar _tmp55 = -_tmp20;
  const Scalar _tmp56 = _tmp39 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 - p_a(1, 0);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp54 * _tmp59;
  const Scalar _tmp61 = _tmp50 * _tmp60;
  const Scalar _tmp62 = -_tmp46;
  const Scalar _tmp63 = _tmp49 + _tmp62;
  const Scalar _tmp64 = _tmp58 * _tmp59;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp43 * _tmp60 - _tmp64);
  const Scalar _tmp66 = _tmp65 * (-_tmp43 * _tmp61 + _tmp63 * _tmp64);
  const Scalar _tmp67 = _tmp33 * _tmp50;
  const Scalar _tmp68 = _tmp18 * _tmp67;
  const Scalar _tmp69 = _tmp47 + _tmp48;
  const Scalar _tmp70 = _tmp46 + _tmp69;
  const Scalar _tmp71 = _tmp33 * _tmp70;
  const Scalar _tmp72 = _tmp30 * _tmp71 - _tmp43 * _tmp68 - _tmp45 * _tmp66;
  const Scalar _tmp73 = Scalar(1.0) * _tmp40;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp56 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp35;
  const Scalar _tmp77 = -_tmp52 + _tmp76;
  const Scalar _tmp78 = _tmp75 * _tmp77;
  const Scalar _tmp79 = _tmp65 * (-_tmp60 * _tmp63 + _tmp61);
  const Scalar _tmp80 = -_tmp18 * _tmp71 - _tmp45 * _tmp79 + _tmp68 - _tmp72 * _tmp78;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = _tmp73 * _tmp78 + _tmp76;
  const Scalar _tmp83 = 0;
  const Scalar _tmp84 = _tmp81 * _tmp83;
  const Scalar _tmp85 = std::pow(_tmp32, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp86 = _tmp18 * _tmp30 * _tmp85;
  const Scalar _tmp87 = _tmp19 * _tmp85;
  const Scalar _tmp88 = _tmp43 * _tmp87 - _tmp44 - _tmp86;
  const Scalar _tmp89 = _tmp60 * _tmp65;
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp70 * _tmp86;
  const Scalar _tmp92 = _tmp50 * _tmp87;
  const Scalar _tmp93 = _tmp43 * _tmp67 - _tmp43 * _tmp92 - _tmp66 * _tmp88 + _tmp91;
  const Scalar _tmp94 =
      -_tmp67 - _tmp70 * _tmp87 + _tmp71 - _tmp78 * _tmp93 - _tmp79 * _tmp88 + _tmp92;
  const Scalar _tmp95 = std::pow(_tmp80, Scalar(-2));
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = _tmp45 * _tmp96;
  const Scalar _tmp98 = _tmp83 * _tmp89;
  const Scalar _tmp99 = _tmp18 * _tmp33;
  const Scalar _tmp100 = _tmp96 * _tmp99;
  const Scalar _tmp101 = _tmp33 * _tmp84;
  const Scalar _tmp102 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp103 =
      std::sqrt(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp104 = _tmp103 * _tmp38;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp107 = _tmp104 * (_tmp106 * _tmp35 * _tmp42 - _tmp106 * _tmp37 * _tmp40);
  const Scalar _tmp108 = _tmp65 * (_tmp107 * _tmp60 - _tmp52 * _tmp64 + _tmp56 * _tmp60);
  const Scalar _tmp109 = _tmp28 * _tmp33;
  const Scalar _tmp110 = _tmp16 * _tmp33;
  const Scalar _tmp111 = _tmp107 * _tmp99 - _tmp108 * _tmp45 + _tmp109 * _tmp18 - _tmp110 * _tmp30;
  const Scalar _tmp112 = _tmp43 * _tmp50;
  const Scalar _tmp113 = _tmp112 + _tmp43 * _tmp66;
  const Scalar _tmp114 = -_tmp113 * _tmp78 + _tmp43 * _tmp79 - _tmp50;
  const Scalar _tmp115 = _tmp114 * _tmp81;
  const Scalar _tmp116 = -_tmp107 + _tmp108 * _tmp43 - _tmp111 * _tmp115;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp111);
  const Scalar _tmp118 = _tmp117 * _tmp80;
  const Scalar _tmp119 = _tmp116 * _tmp118;
  const Scalar _tmp120 = _tmp114 + _tmp119;
  const Scalar _tmp121 = _tmp116 * _tmp80;
  const Scalar _tmp122 = -_tmp107 * _tmp33 + _tmp107 * _tmp87 - _tmp108 * _tmp88 - _tmp109 -
                         _tmp16 * _tmp86 + _tmp28 * _tmp87;
  const Scalar _tmp123 = std::pow(_tmp111, Scalar(-2));
  const Scalar _tmp124 = _tmp122 * _tmp123;
  const Scalar _tmp125 = _tmp121 * _tmp124;
  const Scalar _tmp126 = _tmp116 * _tmp117;
  const Scalar _tmp127 = _tmp126 * _tmp94;
  const Scalar _tmp128 = _tmp111 * _tmp96;
  const Scalar _tmp129 = _tmp118 * (_tmp114 * _tmp128 - _tmp115 * _tmp122);
  const Scalar _tmp130 = -_tmp125 + _tmp127 + _tmp129;
  const Scalar _tmp131 = _tmp45 * _tmp81;
  const Scalar _tmp132 = _tmp120 * _tmp81;
  const Scalar _tmp133 = _tmp120 * _tmp97 - _tmp130 * _tmp131 - _tmp132 * _tmp88;
  const Scalar _tmp134 = _tmp81 * _tmp99;
  const Scalar _tmp135 = _tmp132 * _tmp33;
  const Scalar _tmp136 = _tmp51 + _tmp7;
  const Scalar _tmp137 = _tmp136 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp138 = _tmp27 + _tmp55;
  const Scalar _tmp139 = _tmp138 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp140 =
      std::pow(Scalar(std::pow(_tmp137, Scalar(2)) + std::pow(_tmp139, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp141 = _tmp137 * _tmp140;
  const Scalar _tmp142 = _tmp141 * fh1;
  const Scalar _tmp143 = _tmp104 * _tmp142;
  const Scalar _tmp144 = Scalar(1.0) * _tmp66;
  const Scalar _tmp145 = _tmp144 * _tmp78 - Scalar(1.0) * _tmp79;
  const Scalar _tmp146 = _tmp145 * _tmp81;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp108 - _tmp111 * _tmp146;
  const Scalar _tmp148 = _tmp117 * _tmp147;
  const Scalar _tmp149 = _tmp148 * _tmp80;
  const Scalar _tmp150 = _tmp145 + _tmp149;
  const Scalar _tmp151 = _tmp150 * _tmp81;
  const Scalar _tmp152 = _tmp151 * _tmp33;
  const Scalar _tmp153 = _tmp118 * (-_tmp122 * _tmp146 + _tmp128 * _tmp145);
  const Scalar _tmp154 = _tmp147 * _tmp80;
  const Scalar _tmp155 = _tmp124 * _tmp154;
  const Scalar _tmp156 = _tmp148 * _tmp94;
  const Scalar _tmp157 = _tmp153 - _tmp155 + _tmp156;
  const Scalar _tmp158 = -_tmp131 * _tmp157 + _tmp150 * _tmp97 - _tmp151 * _tmp88;
  const Scalar _tmp159 = _tmp157 * _tmp81;
  const Scalar _tmp160 = _tmp139 * _tmp140;
  const Scalar _tmp161 = _tmp160 * fh1;
  const Scalar _tmp162 = _tmp104 * _tmp161;
  const Scalar _tmp163 = Scalar(1.0) * _tmp117;
  const Scalar _tmp164 = Scalar(1.0) * _tmp99;
  const Scalar _tmp165 = _tmp163 * _tmp33;
  const Scalar _tmp166 = _tmp45 * _tmp89;
  const Scalar _tmp167 = Scalar(1.0) * _tmp166;
  const Scalar _tmp168 = fh1 * (_tmp136 * _tmp160 - _tmp138 * _tmp141);
  const Scalar _tmp169 = _tmp104 * _tmp168;
  const Scalar _tmp170 =
      -_tmp105 *
          (-_tmp100 * _tmp83 - _tmp101 + _tmp84 * _tmp87 - _tmp84 * _tmp90 + _tmp97 * _tmp98) -
      _tmp143 *
          (-_tmp100 * _tmp120 + _tmp130 * _tmp134 + _tmp132 * _tmp87 + _tmp133 * _tmp89 - _tmp135) -
      _tmp162 *
          (-_tmp100 * _tmp150 + _tmp151 * _tmp87 - _tmp152 + _tmp158 * _tmp89 + _tmp159 * _tmp99) -
      _tmp169 *
          (-_tmp124 * _tmp164 + _tmp124 * _tmp167 + _tmp163 * _tmp87 - _tmp163 * _tmp90 - _tmp165);
  const Scalar _tmp171 = -_tmp151 * _tmp45 + Scalar(1.0);
  const Scalar _tmp172 = -_tmp132 * _tmp45 - _tmp43;
  const Scalar _tmp173 = -_tmp105 * (_tmp101 * _tmp18 - _tmp166 * _tmp84) -
                         _tmp143 * (_tmp135 * _tmp18 + _tmp172 * _tmp89 + Scalar(1.0)) -
                         _tmp162 * (_tmp152 * _tmp18 + _tmp171 * _tmp89) -
                         _tmp169 * (-_tmp163 * _tmp166 + _tmp165 * _tmp18);
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = _tmp28 + _tmp74;
  const Scalar _tmp176 = _tmp175 * _tmp78;
  const Scalar _tmp177 = Scalar(1.0) / (-_tmp16 - _tmp176 + _tmp76);
  const Scalar _tmp178 = Scalar(1.0) * _tmp177;
  const Scalar _tmp179 = _tmp72 * _tmp81;
  const Scalar _tmp180 = _tmp175 * _tmp177;
  const Scalar _tmp181 = -_tmp144 + _tmp149 * _tmp180 - _tmp150 * _tmp179;
  const Scalar _tmp182 = Scalar(1.0) * _tmp75;
  const Scalar _tmp183 = Scalar(1.0) * _tmp161;
  const Scalar _tmp184 = _tmp175 * _tmp75;
  const Scalar _tmp185 = fh1 * (_tmp62 + _tmp69);
  const Scalar _tmp186 = Scalar(40.024799999999999) * _tmp13 + _tmp136 * fv1 + _tmp141 * _tmp185;
  const Scalar _tmp187 = _tmp113 + _tmp119 * _tmp180 - _tmp120 * _tmp179;
  const Scalar _tmp188 = Scalar(1.0) * _tmp142;
  const Scalar _tmp189 = -_tmp138 * fv1 - _tmp160 * _tmp185 - Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp190 = _tmp176 * _tmp178 + Scalar(1.0);
  const Scalar _tmp191 = _tmp177 * _tmp82;
  const Scalar _tmp192 = -_tmp175 * _tmp191 - _tmp179 * _tmp83 + _tmp74;
  const Scalar _tmp193 = _tmp118 * _tmp178;
  const Scalar _tmp194 = -_tmp163 * _tmp72 + _tmp175 * _tmp193;
  const Scalar _tmp195 = Scalar(1.0) * _tmp168;
  const Scalar _tmp196 =
      Scalar(1.0) * _tmp102 * (-_tmp178 * _tmp82 - _tmp182 * _tmp192 + Scalar(1.0)) +
      _tmp183 * (_tmp149 * _tmp178 - _tmp181 * _tmp182) +
      Scalar(1.0) * _tmp186 * (_tmp178 * _tmp184 - _tmp178) +
      _tmp188 * (_tmp119 * _tmp178 - _tmp182 * _tmp187) +
      Scalar(1.0) * _tmp189 * (_tmp178 * _tmp78 - _tmp182 * _tmp190) +
      _tmp195 * (-_tmp182 * _tmp194 + _tmp193);
  const Scalar _tmp197 = std::asinh(_tmp174 * _tmp196);
  const Scalar _tmp198 = Scalar(1.4083112389913199) * _tmp173;
  const Scalar _tmp199 =
      -_tmp197 * _tmp198 - std::sqrt(Scalar(std::pow(Scalar(-_tmp36 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp200 = Scalar(0.71007031138673404) * _tmp174;
  const Scalar _tmp201 = _tmp199 * _tmp200;
  const Scalar _tmp202 = Scalar(1.0) * _tmp197;
  const Scalar _tmp203 = -Scalar(1.4083112389913199) * std::sinh(_tmp201) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp202);
  const Scalar _tmp204 = std::cosh(_tmp201);
  const Scalar _tmp205 = Scalar(1.4083112389913199) * _tmp197;
  const Scalar _tmp206 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp207 =
      std::pow(Scalar(std::pow(_tmp196, Scalar(2)) * _tmp206 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp208 = _tmp178 * _tmp80;
  const Scalar _tmp209 = _tmp124 * _tmp208;
  const Scalar _tmp210 = Scalar(1.0) * _tmp72;
  const Scalar _tmp211 = _tmp117 * _tmp178;
  const Scalar _tmp212 = _tmp211 * _tmp94;
  const Scalar _tmp213 =
      _tmp124 * _tmp210 - _tmp163 * _tmp93 - _tmp175 * _tmp209 + _tmp175 * _tmp212;
  const Scalar _tmp214 = _tmp72 * _tmp96;
  const Scalar _tmp215 = _tmp120 * _tmp214 - _tmp125 * _tmp180 + _tmp127 * _tmp180 +
                         _tmp129 * _tmp180 - _tmp130 * _tmp179 - _tmp132 * _tmp93;
  const Scalar _tmp216 = _tmp150 * _tmp214 - _tmp151 * _tmp93 + _tmp153 * _tmp180 -
                         _tmp155 * _tmp180 + _tmp156 * _tmp180 - _tmp157 * _tmp179;
  const Scalar _tmp217 = _tmp214 * _tmp83 - _tmp84 * _tmp93;
  const Scalar _tmp218 = _tmp102 * _tmp182;
  const Scalar _tmp219 = _tmp196 * _tmp206;
  const Scalar _tmp220 = _tmp207 * (-_tmp170 * _tmp219 +
                                    _tmp174 * (_tmp183 * (_tmp153 * _tmp178 - _tmp155 * _tmp178 +
                                                          _tmp156 * _tmp178 - _tmp182 * _tmp216) +
                                               _tmp188 * (-_tmp125 * _tmp178 + _tmp127 * _tmp178 +
                                                          _tmp129 * _tmp178 - _tmp182 * _tmp215) +
                                               _tmp195 * (-_tmp182 * _tmp213 - _tmp209 + _tmp212) -
                                               _tmp217 * _tmp218));
  const Scalar _tmp221 = Scalar(0.71007031138673404) * _tmp199 * _tmp206;
  const Scalar _tmp222 = Scalar(1.0) * std::cosh(_tmp202);
  const Scalar _tmp223 = _tmp161 * _tmp65;
  const Scalar _tmp224 = _tmp102 * _tmp84;
  const Scalar _tmp225 = _tmp224 * _tmp65;
  const Scalar _tmp226 = _tmp142 * _tmp65;
  const Scalar _tmp227 = _tmp163 * _tmp168;
  const Scalar _tmp228 = _tmp227 * _tmp65;
  const Scalar _tmp229 = _tmp102 * _tmp83;
  const Scalar _tmp230 = _tmp124 * _tmp195;
  const Scalar _tmp231 = _tmp45 * _tmp65;
  const Scalar _tmp232 = _tmp133 * _tmp226 + _tmp158 * _tmp223 - _tmp225 * _tmp88 -
                         _tmp228 * _tmp88 + _tmp229 * _tmp65 * _tmp97 + _tmp230 * _tmp231;
  const Scalar _tmp233 =
      _tmp171 * _tmp223 + _tmp172 * _tmp226 - _tmp225 * _tmp45 - _tmp227 * _tmp231;
  const Scalar _tmp234 = std::pow(_tmp233, Scalar(-2));
  const Scalar _tmp235 = _tmp102 * _tmp75;
  const Scalar _tmp236 = _tmp168 * _tmp75;
  const Scalar _tmp237 = _tmp178 * _tmp186;
  const Scalar _tmp238 = _tmp142 * _tmp75;
  const Scalar _tmp239 = _tmp189 * _tmp75;
  const Scalar _tmp240 = _tmp161 * _tmp75;
  const Scalar _tmp241 = _tmp181 * _tmp240 - _tmp184 * _tmp237 + _tmp187 * _tmp238 +
                         _tmp190 * _tmp239 + _tmp192 * _tmp235 + _tmp194 * _tmp236;
  const Scalar _tmp242 = Scalar(1.0) / (_tmp233);
  const Scalar _tmp243 = std::asinh(_tmp241 * _tmp242);
  const Scalar _tmp244 = Scalar(1.4083112389913199) * _tmp233;
  const Scalar _tmp245 =
      -_tmp243 * _tmp244 - std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp57 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp246 = Scalar(0.71007031138673404) * _tmp234 * _tmp245;
  const Scalar _tmp247 = Scalar(1.4083112389913199) * _tmp232;
  const Scalar _tmp248 =
      std::pow(Scalar(_tmp234 * std::pow(_tmp241, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp249 = _tmp234 * _tmp241;
  const Scalar _tmp250 =
      _tmp248 * (-_tmp232 * _tmp249 + _tmp242 * (_tmp213 * _tmp236 + _tmp215 * _tmp238 +
                                                 _tmp216 * _tmp240 + _tmp217 * _tmp235));
  const Scalar _tmp251 = Scalar(0.71007031138673404) * _tmp242;
  const Scalar _tmp252 = _tmp245 * _tmp251;
  const Scalar _tmp253 = std::cosh(_tmp252);
  const Scalar _tmp254 = Scalar(1.0) * _tmp243;
  const Scalar _tmp255 = Scalar(1.0) * std::cosh(_tmp254);
  const Scalar _tmp256 = -std::sinh(_tmp252) - std::sinh(_tmp254);
  const Scalar _tmp257 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp258 = -_tmp70 + p_c(2, 0) - position_vector(2, 0);
  const Scalar _tmp259 = -_tmp29 + p_c(1, 0);
  const Scalar _tmp260 = std::pow(_tmp257, Scalar(2)) + std::pow(_tmp259, Scalar(2));
  const Scalar _tmp261 =
      std::pow(Scalar(std::pow(_tmp258, Scalar(2)) + _tmp260), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp262 = _tmp150 * _tmp161;
  const Scalar _tmp263 = _tmp142 * _tmp81;
  const Scalar _tmp264 = _tmp120 * _tmp142;
  const Scalar _tmp265 = _tmp130 * _tmp263 + _tmp159 * _tmp161 - _tmp229 * _tmp96 - _tmp230 -
                         _tmp262 * _tmp96 - _tmp264 * _tmp96;
  const Scalar _tmp266 = _tmp161 * _tmp177;
  const Scalar _tmp267 = _tmp142 * _tmp177;
  const Scalar _tmp268 = _tmp102 * _tmp191 - _tmp119 * _tmp267 - _tmp149 * _tmp266 -
                         _tmp168 * _tmp193 - _tmp178 * _tmp239 * _tmp77 + _tmp237;
  const Scalar _tmp269 = _tmp132 * _tmp142 + _tmp151 * _tmp161 + _tmp224 + _tmp227;
  const Scalar _tmp270 = Scalar(1.0) / (_tmp269);
  const Scalar _tmp271 = std::asinh(_tmp268 * _tmp270);
  const Scalar _tmp272 = Scalar(1.0) * _tmp271;
  const Scalar _tmp273 = std::sqrt(_tmp260);
  const Scalar _tmp274 = Scalar(1.4083112389913199) * _tmp271;
  const Scalar _tmp275 = -_tmp269 * _tmp274 - _tmp273;
  const Scalar _tmp276 = Scalar(0.71007031138673404) * _tmp270;
  const Scalar _tmp277 = _tmp275 * _tmp276;
  const Scalar _tmp278 = -Scalar(1.4083112389913199) * std::sinh(_tmp272) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp277);
  const Scalar _tmp279 = std::pow(_tmp269, Scalar(-2));
  const Scalar _tmp280 = _tmp268 * _tmp279;
  const Scalar _tmp281 =
      -_tmp265 * _tmp280 +
      _tmp270 * (_tmp125 * _tmp267 - _tmp127 * _tmp267 - _tmp129 * _tmp267 - _tmp153 * _tmp266 +
                 _tmp155 * _tmp266 - _tmp156 * _tmp266 + _tmp168 * _tmp209 - _tmp168 * _tmp212);
  const Scalar _tmp282 =
      std::pow(Scalar(std::pow(_tmp268, Scalar(2)) * _tmp279 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp283 = Scalar(1.0) * _tmp282 * std::cosh(_tmp272);
  const Scalar _tmp284 = std::cosh(_tmp277);
  const Scalar _tmp285 = Scalar(0.71007031138673404) * _tmp275 * _tmp279;
  const Scalar _tmp286 = Scalar(1.0) / (_tmp273);
  const Scalar _tmp287 = Scalar(1.4083112389913199) * _tmp269;
  const Scalar _tmp288 = _tmp282 * _tmp287;
  const Scalar _tmp289 = _tmp31 * _tmp85;
  const Scalar _tmp290 = -_tmp289 + _tmp33 + _tmp43 * _tmp86;
  const Scalar _tmp291 = -_tmp112 * _tmp86 + _tmp289 * _tmp70 - _tmp290 * _tmp66 - _tmp71;
  const Scalar _tmp292 = -_tmp290 * _tmp79 - _tmp291 * _tmp78 + _tmp50 * _tmp86 - _tmp91;
  const Scalar _tmp293 = _tmp292 * _tmp95;
  const Scalar _tmp294 = _tmp293 * _tmp45;
  const Scalar _tmp295 = _tmp293 * _tmp99;
  const Scalar _tmp296 = _tmp290 * _tmp89;
  const Scalar _tmp297 = _tmp148 * _tmp292;
  const Scalar _tmp298 =
      _tmp107 * _tmp86 - _tmp108 * _tmp290 + _tmp110 - _tmp16 * _tmp289 + _tmp28 * _tmp86;
  const Scalar _tmp299 = _tmp123 * _tmp298;
  const Scalar _tmp300 = _tmp154 * _tmp299;
  const Scalar _tmp301 = _tmp111 * _tmp293;
  const Scalar _tmp302 = _tmp118 * (_tmp145 * _tmp301 - _tmp146 * _tmp298);
  const Scalar _tmp303 = _tmp297 - _tmp300 + _tmp302;
  const Scalar _tmp304 = -_tmp131 * _tmp303 + _tmp150 * _tmp294 - _tmp151 * _tmp290;
  const Scalar _tmp305 = _tmp121 * _tmp299;
  const Scalar _tmp306 = _tmp118 * (_tmp114 * _tmp301 - _tmp115 * _tmp298);
  const Scalar _tmp307 = _tmp126 * _tmp292;
  const Scalar _tmp308 = -_tmp305 + _tmp306 + _tmp307;
  const Scalar _tmp309 = _tmp120 * _tmp294 - _tmp131 * _tmp308 - _tmp132 * _tmp290;
  const Scalar _tmp310 =
      -_tmp105 * (_tmp294 * _tmp98 - _tmp295 * _tmp83 - _tmp296 * _tmp84 + _tmp84 * _tmp86) -
      _tmp143 * (-_tmp120 * _tmp295 + _tmp132 * _tmp86 + _tmp134 * _tmp308 + _tmp309 * _tmp89) -
      _tmp162 * (_tmp134 * _tmp303 - _tmp150 * _tmp295 + _tmp151 * _tmp86 + _tmp304 * _tmp89) -
      _tmp169 * (-_tmp163 * _tmp296 + _tmp163 * _tmp86 - _tmp164 * _tmp299 + _tmp167 * _tmp299);
  const Scalar _tmp311 = _tmp293 * _tmp72;
  const Scalar _tmp312 = -_tmp291 * _tmp84 + _tmp311 * _tmp83;
  const Scalar _tmp313 = _tmp211 * _tmp292;
  const Scalar _tmp314 = _tmp208 * _tmp299;
  const Scalar _tmp315 =
      -_tmp163 * _tmp291 + _tmp175 * _tmp313 - _tmp175 * _tmp314 + _tmp210 * _tmp299;
  const Scalar _tmp316 = _tmp120 * _tmp311 - _tmp132 * _tmp291 - _tmp179 * _tmp308 -
                         _tmp180 * _tmp305 + _tmp180 * _tmp306 + _tmp180 * _tmp307;
  const Scalar _tmp317 = _tmp150 * _tmp311 - _tmp151 * _tmp291 - _tmp179 * _tmp303 +
                         _tmp180 * _tmp297 - _tmp180 * _tmp300 + _tmp180 * _tmp302;
  const Scalar _tmp318 = _tmp207 * (_tmp174 * (_tmp183 * (_tmp178 * _tmp297 - _tmp178 * _tmp300 +
                                                          _tmp178 * _tmp302 - _tmp182 * _tmp317) +
                                               _tmp188 * (-_tmp178 * _tmp305 + _tmp178 * _tmp306 +
                                                          _tmp178 * _tmp307 - _tmp182 * _tmp316) +
                                               _tmp195 * (-_tmp182 * _tmp315 + _tmp313 - _tmp314) -
                                               _tmp218 * _tmp312) -
                                    _tmp219 * _tmp310);
  const Scalar _tmp319 = _tmp195 * _tmp299;
  const Scalar _tmp320 = _tmp229 * _tmp293;
  const Scalar _tmp321 = _tmp223 * _tmp304 - _tmp225 * _tmp290 + _tmp226 * _tmp309 -
                         _tmp228 * _tmp290 + _tmp231 * _tmp319 + _tmp231 * _tmp320;
  const Scalar _tmp322 =
      _tmp248 *
      (_tmp242 * (_tmp235 * _tmp312 + _tmp236 * _tmp315 + _tmp238 * _tmp316 + _tmp240 * _tmp317) -
       _tmp249 * _tmp321);
  const Scalar _tmp323 = Scalar(1.4083112389913199) * _tmp321;
  const Scalar _tmp324 = _tmp161 * _tmp303 * _tmp81 - _tmp262 * _tmp293 + _tmp263 * _tmp308 -
                         _tmp264 * _tmp293 - _tmp319 - _tmp320;
  const Scalar _tmp325 =
      _tmp270 * (-_tmp168 * _tmp313 + _tmp168 * _tmp314 - _tmp266 * _tmp297 + _tmp266 * _tmp300 -
                 _tmp266 * _tmp302 + _tmp267 * _tmp305 - _tmp267 * _tmp306 - _tmp267 * _tmp307) -
      _tmp280 * _tmp324;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp170 * _tmp203 +
      _tmp198 *
          (-_tmp204 * (-_tmp170 * _tmp221 + _tmp200 * (-_tmp170 * _tmp205 - _tmp198 * _tmp220)) -
           _tmp220 * _tmp222);
  _res(2, 0) =
      _tmp244 *
          (-_tmp250 * _tmp255 -
           _tmp253 * (-_tmp232 * _tmp246 + _tmp251 * (-_tmp243 * _tmp247 - _tmp244 * _tmp250))) +
      _tmp247 * _tmp256;
  _res(3, 0) =
      -_tmp257 * _tmp261 + _tmp265 * _tmp278 +
      _tmp287 * (-_tmp281 * _tmp283 -
                 _tmp284 * (-_tmp265 * _tmp285 + _tmp276 * (-_tmp257 * _tmp286 - _tmp265 * _tmp274 -
                                                            _tmp281 * _tmp288)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp198 *
          (-_tmp204 * (_tmp200 * (-_tmp198 * _tmp318 - _tmp205 * _tmp310) - _tmp221 * _tmp310) -
           _tmp222 * _tmp318) +
      _tmp203 * _tmp310;
  _res(2, 1) =
      _tmp244 *
          (-_tmp253 * (-_tmp246 * _tmp321 + _tmp251 * (-_tmp243 * _tmp323 - _tmp244 * _tmp322)) -
           _tmp255 * _tmp322) +
      _tmp256 * _tmp323;
  _res(3, 1) =
      -_tmp259 * _tmp261 + _tmp278 * _tmp324 +
      _tmp287 * (-_tmp283 * _tmp325 -
                 _tmp284 * (_tmp276 * (-_tmp259 * _tmp286 - _tmp274 * _tmp324 - _tmp288 * _tmp325) -
                            _tmp285 * _tmp324));
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = -_tmp258 * _tmp261;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
