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
 * Symbolic function: IK_residual_func_cost1_wrt_pc_Nl18
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost1WrtPcNl18(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1066

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (336)
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
  const Scalar _tmp7 = 2 * _tmp0 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp2;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp0 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = _tmp18 - p_a(0, 0);
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = _tmp0 * _tmp12;
  const Scalar _tmp23 = _tmp6 * _tmp8;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp26 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp28 = _tmp25 - _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(1, 0);
  const Scalar _tmp31 = _tmp30 - p_a(1, 0);
  const Scalar _tmp32 =
      std::sqrt(Scalar(std::pow(_tmp19, Scalar(2)) + std::pow(_tmp31, Scalar(2))));
  const Scalar _tmp33 = Scalar(1.0) / (_tmp32);
  const Scalar _tmp34 = Scalar(1.0) / (_tmp19);
  const Scalar _tmp35 = _tmp32 * _tmp34;
  const Scalar _tmp36 = _tmp35 * (_tmp17 * _tmp31 * _tmp33 - _tmp19 * _tmp29 * _tmp33);
  const Scalar _tmp37 = _tmp16 + _tmp4;
  const Scalar _tmp38 = _tmp37 + position_vector(0, 0);
  const Scalar _tmp39 = _tmp38 - p_b(0, 0);
  const Scalar _tmp40 = _tmp20 + _tmp28;
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = std::pow(Scalar(std::pow(_tmp39, Scalar(2)) + std::pow(_tmp42, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp44 = _tmp42 * _tmp43;
  const Scalar _tmp45 = _tmp39 * _tmp43;
  const Scalar _tmp46 = _tmp36 * _tmp45 - _tmp37 * _tmp44 + _tmp40 * _tmp45;
  const Scalar _tmp47 = _tmp31 * _tmp34;
  const Scalar _tmp48 = Scalar(1.0) / (-_tmp44 + _tmp45 * _tmp47);
  const Scalar _tmp49 = _tmp47 * _tmp48;
  const Scalar _tmp50 = _tmp25 + _tmp27;
  const Scalar _tmp51 = _tmp20 + _tmp50;
  const Scalar _tmp52 = _tmp51 + position_vector(1, 0);
  const Scalar _tmp53 = _tmp52 - p_c(1, 0);
  const Scalar _tmp54 = _tmp11 + _tmp15;
  const Scalar _tmp55 = _tmp4 + _tmp54;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - p_c(0, 0);
  const Scalar _tmp58 = std::pow(_tmp57, Scalar(2));
  const Scalar _tmp59 = std::pow(_tmp53, Scalar(2));
  const Scalar _tmp60 = _tmp58 + _tmp59;
  const Scalar _tmp61 = std::pow(_tmp60, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp62 = _tmp53 * _tmp61;
  const Scalar _tmp63 = _tmp47 * _tmp61;
  const Scalar _tmp64 = _tmp57 * _tmp63 - _tmp62;
  const Scalar _tmp65 = _tmp48 * _tmp64;
  const Scalar _tmp66 = _tmp51 * _tmp61;
  const Scalar _tmp67 = _tmp55 * _tmp61;
  const Scalar _tmp68 = _tmp36 * _tmp61;
  const Scalar _tmp69 = -_tmp46 * _tmp65 - _tmp53 * _tmp67 + _tmp57 * _tmp66 + _tmp57 * _tmp68;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp71 = -_tmp70;
  const Scalar _tmp72 =
      -Scalar(0.010999999999999999) * _tmp26 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp73 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp74 = _tmp72 + _tmp73;
  const Scalar _tmp75 = _tmp71 + _tmp74;
  const Scalar _tmp76 = _tmp72 - _tmp73;
  const Scalar _tmp77 = _tmp71 + _tmp76;
  const Scalar _tmp78 = _tmp45 * _tmp77;
  const Scalar _tmp79 = -_tmp45 * _tmp75 + _tmp78;
  const Scalar _tmp80 = _tmp61 * _tmp77;
  const Scalar _tmp81 = _tmp57 * _tmp80;
  const Scalar _tmp82 = _tmp70 + _tmp74;
  const Scalar _tmp83 = _tmp61 * _tmp82;
  const Scalar _tmp84 = _tmp44 * _tmp75 - _tmp47 * _tmp78;
  const Scalar _tmp85 = _tmp48 * _tmp84;
  const Scalar _tmp86 = -_tmp47 * _tmp81 + _tmp62 * _tmp82 - _tmp64 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) * _tmp29;
  const Scalar _tmp88 = -_tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp40 + _tmp88);
  const Scalar _tmp90 = Scalar(1.0) * _tmp17;
  const Scalar _tmp91 = _tmp89 * (-_tmp37 + _tmp90);
  const Scalar _tmp92 = -_tmp57 * _tmp83 - _tmp65 * _tmp79 + _tmp81 - _tmp86 * _tmp91;
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp47 * _tmp77;
  const Scalar _tmp95 = _tmp47 * _tmp85 + _tmp94;
  const Scalar _tmp96 = _tmp49 * _tmp79 - _tmp77 - _tmp91 * _tmp95;
  const Scalar _tmp97 = _tmp93 * _tmp96;
  const Scalar _tmp98 = -_tmp36 + _tmp46 * _tmp49 - _tmp69 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp100 = _tmp92 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp98;
  const Scalar _tmp102 = _tmp101 + _tmp96;
  const Scalar _tmp103 = std::pow(_tmp60, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp104 = _tmp103 * _tmp53 * _tmp57;
  const Scalar _tmp105 = _tmp103 * _tmp58;
  const Scalar _tmp106 = -_tmp104 + _tmp105 * _tmp47 - _tmp63;
  const Scalar _tmp107 = _tmp106 * _tmp48;
  const Scalar _tmp108 = _tmp105 * _tmp77;
  const Scalar _tmp109 = _tmp104 * _tmp82;
  const Scalar _tmp110 = -_tmp106 * _tmp85 - _tmp108 * _tmp47 + _tmp109 + _tmp47 * _tmp80;
  const Scalar _tmp111 =
      -_tmp105 * _tmp82 - _tmp107 * _tmp79 + _tmp108 - _tmp110 * _tmp91 - _tmp80 + _tmp83;
  const Scalar _tmp112 = std::pow(_tmp92, Scalar(-2));
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp57 * _tmp61;
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = _tmp102 * _tmp93;
  const Scalar _tmp117 = _tmp61 * _tmp93;
  const Scalar _tmp118 = _tmp102 * _tmp117;
  const Scalar _tmp119 = _tmp113 * _tmp69;
  const Scalar _tmp120 =
      -_tmp104 * _tmp55 + _tmp105 * _tmp36 + _tmp105 * _tmp51 - _tmp107 * _tmp46 - _tmp66 - _tmp68;
  const Scalar _tmp121 = _tmp100 * (_tmp119 * _tmp96 - _tmp120 * _tmp97);
  const Scalar _tmp122 = _tmp111 * _tmp99;
  const Scalar _tmp123 = _tmp122 * _tmp98;
  const Scalar _tmp124 = std::pow(_tmp69, Scalar(-2));
  const Scalar _tmp125 = _tmp120 * _tmp124;
  const Scalar _tmp126 = _tmp125 * _tmp92;
  const Scalar _tmp127 = _tmp126 * _tmp98;
  const Scalar _tmp128 = _tmp121 + _tmp123 - _tmp127;
  const Scalar _tmp129 = _tmp117 * _tmp57;
  const Scalar _tmp130 = _tmp102 * _tmp64;
  const Scalar _tmp131 = _tmp64 * _tmp93;
  const Scalar _tmp132 = -_tmp106 * _tmp116 + _tmp113 * _tmp130 - _tmp128 * _tmp131;
  const Scalar _tmp133 = _tmp45 * _tmp48;
  const Scalar _tmp134 = _tmp5 + _tmp54;
  const Scalar _tmp135 = _tmp134 - p_d(0, 0) + position_vector(0, 0);
  const Scalar _tmp136 = _tmp21 + _tmp50;
  const Scalar _tmp137 = _tmp136 - p_d(1, 0) + position_vector(1, 0);
  const Scalar _tmp138 =
      std::pow(Scalar(std::pow(_tmp135, Scalar(2)) + std::pow(_tmp137, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp139 = _tmp135 * _tmp138;
  const Scalar _tmp140 = _tmp139 * fh1;
  const Scalar _tmp141 = _tmp140 * _tmp35;
  const Scalar _tmp142 = _tmp87 * _tmp91 + _tmp90;
  const Scalar _tmp143 = 0;
  const Scalar _tmp144 = _tmp143 * _tmp45 * _tmp65;
  const Scalar _tmp145 = _tmp117 * _tmp143;
  const Scalar _tmp146 = _tmp143 * _tmp93;
  const Scalar _tmp147 = _tmp146 * _tmp45;
  const Scalar _tmp148 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp149 = _tmp148 * _tmp35;
  const Scalar _tmp150 = Scalar(1.0) * _tmp48;
  const Scalar _tmp151 = _tmp150 * _tmp84;
  const Scalar _tmp152 = -_tmp150 * _tmp79 + _tmp151 * _tmp91;
  const Scalar _tmp153 = _tmp152 * _tmp93;
  const Scalar _tmp154 = -_tmp150 * _tmp46 - _tmp153 * _tmp69;
  const Scalar _tmp155 = _tmp100 * _tmp154;
  const Scalar _tmp156 = _tmp152 + _tmp155;
  const Scalar _tmp157 = _tmp156 * _tmp93;
  const Scalar _tmp158 = _tmp117 * _tmp156;
  const Scalar _tmp159 = _tmp122 * _tmp154;
  const Scalar _tmp160 = _tmp100 * (_tmp119 * _tmp152 - _tmp120 * _tmp153);
  const Scalar _tmp161 = _tmp126 * _tmp154;
  const Scalar _tmp162 = _tmp159 + _tmp160 - _tmp161;
  const Scalar _tmp163 = _tmp156 * _tmp64;
  const Scalar _tmp164 = -_tmp106 * _tmp157 + _tmp113 * _tmp163 - _tmp131 * _tmp162;
  const Scalar _tmp165 = _tmp137 * _tmp138;
  const Scalar _tmp166 = _tmp165 * fh1;
  const Scalar _tmp167 = _tmp166 * _tmp35;
  const Scalar _tmp168 = Scalar(1.0) * _tmp114;
  const Scalar _tmp169 = _tmp150 * _tmp64;
  const Scalar _tmp170 = _tmp125 * _tmp169;
  const Scalar _tmp171 = Scalar(1.0) * _tmp99;
  const Scalar _tmp172 = _tmp171 * _tmp61;
  const Scalar _tmp173 = _tmp150 * _tmp99;
  const Scalar _tmp174 = _tmp106 * _tmp173;
  const Scalar _tmp175 = fh1 * (_tmp134 * _tmp165 - _tmp136 * _tmp139);
  const Scalar _tmp176 = _tmp175 * _tmp35;
  const Scalar _tmp177 = -_tmp141 * (-_tmp102 * _tmp115 + _tmp105 * _tmp116 - _tmp118 +
                                     _tmp128 * _tmp129 + _tmp132 * _tmp133) -
                         _tmp149 * (_tmp105 * _tmp146 - _tmp107 * _tmp147 + _tmp113 * _tmp144 -
                                    _tmp115 * _tmp143 - _tmp145) -
                         _tmp167 * (_tmp105 * _tmp157 - _tmp115 * _tmp156 + _tmp129 * _tmp162 +
                                    _tmp133 * _tmp164 - _tmp158) -
                         _tmp176 * (_tmp105 * _tmp171 - _tmp125 * _tmp168 + _tmp170 * _tmp45 -
                                    _tmp172 - _tmp174 * _tmp45);
  const Scalar _tmp178 = -_tmp131 * _tmp156 + Scalar(1.0);
  const Scalar _tmp179 = _tmp173 * _tmp45;
  const Scalar _tmp180 = -_tmp102 * _tmp131 - _tmp47;
  const Scalar _tmp181 = -_tmp141 * (_tmp118 * _tmp57 + _tmp133 * _tmp180 + Scalar(1.0)) -
                         _tmp149 * (-_tmp131 * _tmp133 * _tmp143 + _tmp145 * _tmp57) -
                         _tmp167 * (_tmp133 * _tmp178 + _tmp158 * _tmp57) -
                         _tmp176 * (_tmp172 * _tmp57 - _tmp179 * _tmp64);
  const Scalar _tmp182 = Scalar(1.0) / (_tmp181);
  const Scalar _tmp183 = Scalar(0.71007031138673404) * _tmp182;
  const Scalar _tmp184 = _tmp51 + _tmp88;
  const Scalar _tmp185 = _tmp184 * _tmp91;
  const Scalar _tmp186 = Scalar(1.0) / (-_tmp185 - _tmp55 + _tmp90);
  const Scalar _tmp187 = Scalar(1.0) * _tmp186;
  const Scalar _tmp188 = _tmp86 * _tmp93;
  const Scalar _tmp189 = _tmp184 * _tmp186;
  const Scalar _tmp190 = _tmp101 * _tmp189 - _tmp102 * _tmp188 + _tmp95;
  const Scalar _tmp191 = Scalar(1.0) * _tmp89;
  const Scalar _tmp192 = Scalar(1.0) * _tmp140;
  const Scalar _tmp193 = _tmp184 * _tmp187;
  const Scalar _tmp194 = fh1 * (_tmp70 + _tmp76);
  const Scalar _tmp195 = Scalar(40.024799999999999) * _tmp10 + _tmp134 * fv1 + _tmp139 * _tmp194;
  const Scalar _tmp196 = _tmp142 * _tmp186;
  const Scalar _tmp197 = -_tmp143 * _tmp188 - _tmp184 * _tmp196 + _tmp88;
  const Scalar _tmp198 = _tmp100 * _tmp187;
  const Scalar _tmp199 = -_tmp171 * _tmp86 + _tmp184 * _tmp198;
  const Scalar _tmp200 = Scalar(1.0) * _tmp175;
  const Scalar _tmp201 = -_tmp136 * fv1 - _tmp165 * _tmp194 - Scalar(40.024799999999999) * _tmp24;
  const Scalar _tmp202 = _tmp185 * _tmp187 + Scalar(1.0);
  const Scalar _tmp203 = _tmp187 * _tmp91;
  const Scalar _tmp204 = -_tmp151 + _tmp155 * _tmp189 - _tmp156 * _tmp188;
  const Scalar _tmp205 = Scalar(1.0) * _tmp166;
  const Scalar _tmp206 =
      Scalar(1.0) * _tmp148 * (-_tmp142 * _tmp187 - _tmp191 * _tmp197 + Scalar(1.0)) +
      _tmp192 * (_tmp101 * _tmp187 - _tmp190 * _tmp191) +
      Scalar(1.0) * _tmp195 * (-_tmp187 + _tmp193 * _tmp89) +
      _tmp200 * (-_tmp191 * _tmp199 + _tmp198) +
      Scalar(1.0) * _tmp201 * (-_tmp191 * _tmp202 + _tmp203) +
      _tmp205 * (_tmp155 * _tmp187 - _tmp191 * _tmp204);
  const Scalar _tmp207 = std::asinh(_tmp182 * _tmp206);
  const Scalar _tmp208 = Scalar(1.4083112389913199) * _tmp181;
  const Scalar _tmp209 =
      -_tmp207 * _tmp208 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp30 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp210 = _tmp183 * _tmp209;
  const Scalar _tmp211 = Scalar(1.0) * _tmp207;
  const Scalar _tmp212 = Scalar(1.4083112389913199) * _tmp183 * p_a(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp210) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp211);
  const Scalar _tmp213 = Scalar(1.4083112389913199) * _tmp207;
  const Scalar _tmp214 = _tmp126 * _tmp187;
  const Scalar _tmp215 = _tmp122 * _tmp187;
  const Scalar _tmp216 = Scalar(1.0) * _tmp86;
  const Scalar _tmp217 =
      -_tmp110 * _tmp171 + _tmp122 * _tmp193 + _tmp125 * _tmp216 - _tmp126 * _tmp193;
  const Scalar _tmp218 = _tmp156 * _tmp86;
  const Scalar _tmp219 = -_tmp110 * _tmp157 + _tmp113 * _tmp218 + _tmp159 * _tmp189 +
                         _tmp160 * _tmp189 - _tmp161 * _tmp189 - _tmp162 * _tmp188;
  const Scalar _tmp220 = _tmp113 * _tmp86;
  const Scalar _tmp221 = _tmp102 * _tmp220 - _tmp110 * _tmp116 + _tmp121 * _tmp189 +
                         _tmp123 * _tmp189 - _tmp127 * _tmp189 - _tmp128 * _tmp188;
  const Scalar _tmp222 = -_tmp110 * _tmp146 + _tmp143 * _tmp220;
  const Scalar _tmp223 = _tmp148 * _tmp191;
  const Scalar _tmp224 = std::pow(_tmp181, Scalar(-2));
  const Scalar _tmp225 = _tmp206 * _tmp224;
  const Scalar _tmp226 =
      -_tmp177 * _tmp225 + _tmp182 * (_tmp192 * (_tmp121 * _tmp187 + _tmp123 * _tmp187 -
                                                 _tmp127 * _tmp187 - _tmp191 * _tmp221) +
                                      _tmp200 * (-_tmp191 * _tmp217 - _tmp214 + _tmp215) +
                                      _tmp205 * (_tmp159 * _tmp187 + _tmp160 * _tmp187 -
                                                 _tmp161 * _tmp187 - _tmp191 * _tmp219) -
                                      _tmp222 * _tmp223);
  const Scalar _tmp227 =
      std::pow(Scalar(std::pow(_tmp206, Scalar(2)) * _tmp224 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp228 = _tmp208 * _tmp227;
  const Scalar _tmp229 = Scalar(0.71007031138673404) * _tmp224;
  const Scalar _tmp230 = _tmp209 * _tmp229;
  const Scalar _tmp231 = std::sinh(_tmp210);
  const Scalar _tmp232 = _tmp229 * p_a(2, 0);
  const Scalar _tmp233 = Scalar(1.0) * _tmp227 * std::sinh(_tmp211);
  const Scalar _tmp234 = _tmp146 * _tmp148;
  const Scalar _tmp235 = _tmp143 * _tmp148;
  const Scalar _tmp236 = _tmp113 * _tmp235;
  const Scalar _tmp237 = _tmp166 * _tmp48;
  const Scalar _tmp238 = _tmp140 * _tmp48;
  const Scalar _tmp239 = -_tmp107 * _tmp234 + _tmp132 * _tmp238 + _tmp164 * _tmp237 +
                         _tmp170 * _tmp175 - _tmp174 * _tmp175 + _tmp236 * _tmp65;
  const Scalar _tmp240 = _tmp173 * _tmp175;
  const Scalar _tmp241 =
      -_tmp131 * _tmp235 * _tmp48 + _tmp178 * _tmp237 + _tmp180 * _tmp238 - _tmp240 * _tmp64;
  const Scalar _tmp242 = Scalar(1.0) / (_tmp241);
  const Scalar _tmp243 = _tmp148 * _tmp89;
  const Scalar _tmp244 = _tmp140 * _tmp89;
  const Scalar _tmp245 = _tmp175 * _tmp89;
  const Scalar _tmp246 = _tmp166 * _tmp89;
  const Scalar _tmp247 = _tmp187 * _tmp195;
  const Scalar _tmp248 = -_tmp184 * _tmp247 * _tmp89 + _tmp190 * _tmp244 + _tmp197 * _tmp243 +
                         _tmp199 * _tmp245 + _tmp201 * _tmp202 * _tmp89 + _tmp204 * _tmp246;
  const Scalar _tmp249 = std::asinh(_tmp242 * _tmp248);
  const Scalar _tmp250 = Scalar(1.4083112389913199) * _tmp241;
  const Scalar _tmp251 =
      -_tmp249 * _tmp250 - std::sqrt(Scalar(std::pow(Scalar(-_tmp38 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp252 = Scalar(0.71007031138673404) * _tmp242;
  const Scalar _tmp253 = _tmp251 * _tmp252;
  const Scalar _tmp254 = Scalar(1.0) * _tmp249;
  const Scalar _tmp255 = Scalar(1.4083112389913199) * _tmp252 * p_b(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp253) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp254);
  const Scalar _tmp256 = std::sinh(_tmp253);
  const Scalar _tmp257 = std::pow(_tmp241, Scalar(-2));
  const Scalar _tmp258 = Scalar(0.71007031138673404) * _tmp257;
  const Scalar _tmp259 = _tmp239 * _tmp258;
  const Scalar _tmp260 = _tmp248 * _tmp257;
  const Scalar _tmp261 = -_tmp239 * _tmp260 + _tmp242 * (_tmp217 * _tmp245 + _tmp219 * _tmp246 +
                                                         _tmp221 * _tmp244 + _tmp222 * _tmp243);
  const Scalar _tmp262 =
      std::pow(Scalar(std::pow(_tmp248, Scalar(2)) * _tmp257 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp263 = _tmp250 * _tmp262;
  const Scalar _tmp264 = Scalar(1.4083112389913199) * _tmp249;
  const Scalar _tmp265 = Scalar(1.0) * _tmp262 * std::sinh(_tmp254);
  const Scalar _tmp266 = _tmp116 * _tmp140 + _tmp157 * _tmp166 + _tmp171 * _tmp175 + _tmp234;
  const Scalar _tmp267 = Scalar(1.0) / (_tmp266);
  const Scalar _tmp268 = _tmp166 * _tmp186;
  const Scalar _tmp269 = _tmp140 * _tmp186;
  const Scalar _tmp270 = _tmp140 * _tmp93;
  const Scalar _tmp271 = _tmp166 * _tmp93;
  const Scalar _tmp272 = _tmp102 * _tmp140;
  const Scalar _tmp273 = -_tmp113 * _tmp156 * _tmp166 - _tmp113 * _tmp272 - _tmp125 * _tmp200 +
                         _tmp128 * _tmp270 + _tmp162 * _tmp271 - _tmp236;
  const Scalar _tmp274 = -_tmp101 * _tmp269 + _tmp148 * _tmp196 - _tmp155 * _tmp268 -
                         _tmp175 * _tmp198 - _tmp201 * _tmp203 + _tmp247;
  const Scalar _tmp275 = std::pow(_tmp266, Scalar(-2));
  const Scalar _tmp276 = _tmp274 * _tmp275;
  const Scalar _tmp277 =
      std::pow(Scalar(std::pow(_tmp274, Scalar(2)) * _tmp275 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp278 =
      _tmp277 *
      (_tmp267 * (-_tmp121 * _tmp269 - _tmp123 * _tmp269 + _tmp127 * _tmp269 - _tmp159 * _tmp268 -
                  _tmp160 * _tmp268 + _tmp161 * _tmp268 + _tmp175 * _tmp214 - _tmp175 * _tmp215) -
       _tmp273 * _tmp276);
  const Scalar _tmp279 = std::asinh(_tmp267 * _tmp274);
  const Scalar _tmp280 = Scalar(1.0) * _tmp279;
  const Scalar _tmp281 = Scalar(1.0) * std::sinh(_tmp280);
  const Scalar _tmp282 = Scalar(0.71007031138673404) * _tmp275;
  const Scalar _tmp283 = _tmp273 * _tmp282;
  const Scalar _tmp284 = Scalar(1.4083112389913199) * _tmp266;
  const Scalar _tmp285 = Scalar(1.4083112389913199) * _tmp279;
  const Scalar _tmp286 = -_tmp56 + p_c(0, 0);
  const Scalar _tmp287 = -_tmp52 + p_c(1, 0);
  const Scalar _tmp288 =
      std::sqrt(Scalar(std::pow(_tmp286, Scalar(2)) + std::pow(_tmp287, Scalar(2))));
  const Scalar _tmp289 = Scalar(1.0) / (_tmp288);
  const Scalar _tmp290 = Scalar(0.71007031138673404) * _tmp267;
  const Scalar _tmp291 = -_tmp279 * _tmp284 - _tmp288;
  const Scalar _tmp292 = _tmp290 * _tmp291;
  const Scalar _tmp293 = std::sinh(_tmp292);
  const Scalar _tmp294 = Scalar(1.4083112389913199) * _tmp290 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp280) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp292);
  const Scalar _tmp295 = _tmp103 * _tmp59;
  const Scalar _tmp296 = _tmp104 * _tmp47 - _tmp295 + _tmp61;
  const Scalar _tmp297 = _tmp296 * _tmp48;
  const Scalar _tmp298 = -_tmp104 * _tmp94 + _tmp295 * _tmp82 - _tmp296 * _tmp85 - _tmp83;
  const Scalar _tmp299 = _tmp104 * _tmp77 - _tmp109 - _tmp297 * _tmp79 - _tmp298 * _tmp91;
  const Scalar _tmp300 = _tmp112 * _tmp299;
  const Scalar _tmp301 = _tmp114 * _tmp300;
  const Scalar _tmp302 =
      _tmp104 * _tmp36 + _tmp104 * _tmp51 - _tmp295 * _tmp55 - _tmp297 * _tmp46 + _tmp67;
  const Scalar _tmp303 = _tmp124 * _tmp302;
  const Scalar _tmp304 = _tmp169 * _tmp303;
  const Scalar _tmp305 = _tmp303 * _tmp92;
  const Scalar _tmp306 = _tmp305 * _tmp98;
  const Scalar _tmp307 = _tmp299 * _tmp99;
  const Scalar _tmp308 = _tmp307 * _tmp98;
  const Scalar _tmp309 = _tmp302 * _tmp93;
  const Scalar _tmp310 = _tmp300 * _tmp69;
  const Scalar _tmp311 = _tmp100 * (-_tmp309 * _tmp96 + _tmp310 * _tmp96);
  const Scalar _tmp312 = -_tmp306 + _tmp308 + _tmp311;
  const Scalar _tmp313 = -_tmp116 * _tmp296 + _tmp130 * _tmp300 - _tmp131 * _tmp312;
  const Scalar _tmp314 = _tmp100 * (-_tmp152 * _tmp309 + _tmp152 * _tmp310);
  const Scalar _tmp315 = _tmp154 * _tmp305;
  const Scalar _tmp316 = _tmp154 * _tmp307;
  const Scalar _tmp317 = _tmp314 - _tmp315 + _tmp316;
  const Scalar _tmp318 = -_tmp131 * _tmp317 - _tmp157 * _tmp296 + _tmp163 * _tmp300;
  const Scalar _tmp319 = _tmp156 * _tmp300;
  const Scalar _tmp320 =
      -_tmp141 * (-_tmp102 * _tmp301 + _tmp104 * _tmp116 + _tmp129 * _tmp312 + _tmp133 * _tmp313) -
      _tmp149 * (_tmp104 * _tmp146 - _tmp143 * _tmp301 + _tmp144 * _tmp300 - _tmp147 * _tmp297) -
      _tmp167 * (_tmp104 * _tmp157 - _tmp114 * _tmp319 + _tmp129 * _tmp317 + _tmp133 * _tmp318) -
      _tmp176 * (_tmp104 * _tmp171 - _tmp168 * _tmp303 - _tmp179 * _tmp296 + _tmp304 * _tmp45);
  const Scalar _tmp321 = _tmp300 * _tmp86;
  const Scalar _tmp322 = _tmp102 * _tmp321 - _tmp116 * _tmp298 - _tmp188 * _tmp312 -
                         _tmp189 * _tmp306 + _tmp189 * _tmp308 + _tmp189 * _tmp311;
  const Scalar _tmp323 = _tmp143 * _tmp321 - _tmp146 * _tmp298;
  const Scalar _tmp324 = -_tmp157 * _tmp298 - _tmp188 * _tmp317 + _tmp189 * _tmp314 -
                         _tmp189 * _tmp315 + _tmp189 * _tmp316 + _tmp218 * _tmp300;
  const Scalar _tmp325 = _tmp187 * _tmp305;
  const Scalar _tmp326 = _tmp187 * _tmp307;
  const Scalar _tmp327 =
      -_tmp171 * _tmp298 - _tmp193 * _tmp305 + _tmp193 * _tmp307 + _tmp216 * _tmp303;
  const Scalar _tmp328 = _tmp182 * (_tmp192 * (-_tmp187 * _tmp306 + _tmp187 * _tmp308 +
                                               _tmp187 * _tmp311 - _tmp191 * _tmp322) +
                                    _tmp200 * (-_tmp191 * _tmp327 - _tmp325 + _tmp326) +
                                    _tmp205 * (_tmp187 * _tmp314 - _tmp187 * _tmp315 +
                                               _tmp187 * _tmp316 - _tmp191 * _tmp324) -
                                    _tmp223 * _tmp323) -
                         _tmp225 * _tmp320;
  const Scalar _tmp329 = _tmp235 * _tmp300;
  const Scalar _tmp330 = _tmp175 * _tmp304 - _tmp234 * _tmp297 + _tmp237 * _tmp318 +
                         _tmp238 * _tmp313 - _tmp240 * _tmp296 + _tmp329 * _tmp65;
  const Scalar _tmp331 = _tmp258 * _tmp330;
  const Scalar _tmp332 =
      _tmp242 * (_tmp243 * _tmp323 + _tmp244 * _tmp322 + _tmp245 * _tmp327 + _tmp246 * _tmp324) -
      _tmp260 * _tmp330;
  const Scalar _tmp333 = -_tmp166 * _tmp319 - _tmp200 * _tmp303 + _tmp270 * _tmp312 +
                         _tmp271 * _tmp317 - _tmp272 * _tmp300 - _tmp329;
  const Scalar _tmp334 = _tmp282 * _tmp333;
  const Scalar _tmp335 =
      _tmp277 *
      (_tmp267 * (_tmp175 * _tmp325 - _tmp175 * _tmp326 - _tmp268 * _tmp314 + _tmp268 * _tmp315 -
                  _tmp268 * _tmp316 + _tmp269 * _tmp306 - _tmp269 * _tmp308 - _tmp269 * _tmp311) -
       _tmp276 * _tmp333);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp177 * _tmp212 -
      _tmp208 *
          (-_tmp177 * _tmp232 + _tmp226 * _tmp233 -
           _tmp231 * (-_tmp177 * _tmp230 + _tmp183 * (-_tmp177 * _tmp213 - _tmp226 * _tmp228)));
  _res(2, 0) =
      -_tmp239 * _tmp255 -
      _tmp250 *
          (-_tmp256 * (-_tmp251 * _tmp259 + _tmp252 * (-_tmp239 * _tmp264 - _tmp261 * _tmp263)) -
           _tmp259 * p_b(2, 0) + _tmp261 * _tmp265);
  _res(3, 0) =
      -_tmp273 * _tmp294 -
      _tmp284 * (_tmp278 * _tmp281 - _tmp283 * p_c(2, 0) -
                 _tmp293 * (-_tmp283 * _tmp291 + _tmp290 * (-_tmp273 * _tmp285 - _tmp278 * _tmp284 -
                                                            _tmp286 * _tmp289)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp208 *
          (-_tmp231 * (_tmp183 * (-_tmp213 * _tmp320 - _tmp228 * _tmp328) - _tmp230 * _tmp320) -
           _tmp232 * _tmp320 + _tmp233 * _tmp328) -
      _tmp212 * _tmp320;
  _res(2, 1) =
      -_tmp250 *
          (-_tmp256 * (-_tmp251 * _tmp331 + _tmp252 * (-_tmp263 * _tmp332 - _tmp264 * _tmp330)) +
           _tmp265 * _tmp332 - _tmp331 * p_b(2, 0)) -
      _tmp255 * _tmp330;
  _res(3, 1) =
      -_tmp284 *
          (_tmp281 * _tmp335 -
           _tmp293 * (_tmp290 * (-_tmp284 * _tmp335 - _tmp285 * _tmp333 - _tmp287 * _tmp289) -
                      _tmp291 * _tmp334) -
           _tmp334 * p_c(2, 0)) -
      _tmp294 * _tmp333;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(-1.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym