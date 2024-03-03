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
 * Symbolic function: IK_residual_func_cost4_wrt_pd_Nl12
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
Eigen::Matrix<Scalar, 4, 3> IkResidualFuncCost4WrtPdNl12(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 1041

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (317)
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
  const Scalar _tmp7 = 2 * _tmp3;
  const Scalar _tmp8 = _tmp1 * _tmp7;
  const Scalar _tmp9 = _tmp0 * _tmp4;
  const Scalar _tmp10 = _tmp8 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp13 = 1 - 2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp6;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = _tmp17 - p_d(0, 0);
  const Scalar _tmp19 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp12 +
                        Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp23 = _tmp0 * _tmp7;
  const Scalar _tmp24 = _tmp1 * _tmp4;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = _tmp29 - p_d(1, 0);
  const Scalar _tmp31 = std::pow(_tmp30, Scalar(2));
  const Scalar _tmp32 = _tmp19 + _tmp31;
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp34 = _tmp18 * _tmp33;
  const Scalar _tmp35 = -_tmp21;
  const Scalar _tmp36 = _tmp27 + _tmp35;
  const Scalar _tmp37 = Scalar(1.0) * _tmp36;
  const Scalar _tmp38 = -_tmp37;
  const Scalar _tmp39 = _tmp22 + _tmp26;
  const Scalar _tmp40 = _tmp35 + _tmp39;
  const Scalar _tmp41 = Scalar(1.0) / (_tmp38 + _tmp40);
  const Scalar _tmp42 = -_tmp6;
  const Scalar _tmp43 = _tmp11 + _tmp14;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp15 + _tmp42;
  const Scalar _tmp46 = Scalar(1.0) * _tmp45;
  const Scalar _tmp47 = -_tmp44 + _tmp46;
  const Scalar _tmp48 = _tmp41 * _tmp47;
  const Scalar _tmp49 = _tmp37 * _tmp48 + _tmp46;
  const Scalar _tmp50 = 0;
  const Scalar _tmp51 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp52 = -_tmp51;
  const Scalar _tmp53 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp54 = Scalar(0.20999999999999999) * _tmp8 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp55 = _tmp53 - _tmp54;
  const Scalar _tmp56 = _tmp52 + _tmp55;
  const Scalar _tmp57 = std::pow(_tmp32, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp58 = _tmp19 * _tmp57;
  const Scalar _tmp59 = _tmp51 + _tmp55;
  const Scalar _tmp60 = _tmp18 * _tmp30 * _tmp57;
  const Scalar _tmp61 = _tmp45 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 - p_a(0, 0);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = _tmp36 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 - p_a(1, 0);
  const Scalar _tmp66 = _tmp63 * _tmp65;
  const Scalar _tmp67 = _tmp33 * _tmp66;
  const Scalar _tmp68 = _tmp58 * _tmp66 - _tmp60 - _tmp67;
  const Scalar _tmp69 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 - p_b(0, 0);
  const Scalar _tmp71 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp72 = _tmp71 - p_b(1, 0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp70 * _tmp73;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp66 * _tmp75 - _tmp74);
  const Scalar _tmp77 = _tmp53 + _tmp54;
  const Scalar _tmp78 = _tmp52 + _tmp77;
  const Scalar _tmp79 = _tmp56 * _tmp66;
  const Scalar _tmp80 = _tmp76 * (_tmp74 * _tmp78 - _tmp75 * _tmp79);
  const Scalar _tmp81 = _tmp33 * _tmp56;
  const Scalar _tmp82 = _tmp59 * _tmp60;
  const Scalar _tmp83 = -_tmp58 * _tmp79 + _tmp66 * _tmp81 - _tmp68 * _tmp80 + _tmp82;
  const Scalar _tmp84 = _tmp76 * (_tmp56 * _tmp75 - _tmp75 * _tmp78);
  const Scalar _tmp85 = _tmp33 * _tmp59;
  const Scalar _tmp86 =
      -_tmp48 * _tmp83 + _tmp56 * _tmp58 - _tmp58 * _tmp59 - _tmp68 * _tmp84 - _tmp81 + _tmp85;
  const Scalar _tmp87 = _tmp18 * _tmp81;
  const Scalar _tmp88 = _tmp18 * _tmp67 - _tmp30 * _tmp33;
  const Scalar _tmp89 = _tmp30 * _tmp85 - _tmp66 * _tmp87 - _tmp80 * _tmp88;
  const Scalar _tmp90 = -_tmp18 * _tmp85 - _tmp48 * _tmp89 - _tmp84 * _tmp88 + _tmp87;
  const Scalar _tmp91 = std::pow(_tmp90, Scalar(-2));
  const Scalar _tmp92 = _tmp86 * _tmp91;
  const Scalar _tmp93 = _tmp50 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp95 = _tmp50 * _tmp94;
  const Scalar _tmp96 = _tmp75 * _tmp76;
  const Scalar _tmp97 = _tmp88 * _tmp96;
  const Scalar _tmp98 = _tmp95 * _tmp96;
  const Scalar _tmp99 = _tmp33 * _tmp95;
  const Scalar _tmp100 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp101 =
      std::sqrt(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))));
  const Scalar _tmp102 = _tmp101 * _tmp63;
  const Scalar _tmp103 = _tmp100 * _tmp102;
  const Scalar _tmp104 = _tmp16 * _tmp33;
  const Scalar _tmp105 = _tmp28 * _tmp33;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp107 = _tmp102 * (-_tmp106 * _tmp36 * _tmp62 + _tmp106 * _tmp45 * _tmp65);
  const Scalar _tmp108 = _tmp76 * (_tmp107 * _tmp75 + _tmp40 * _tmp75 - _tmp44 * _tmp74);
  const Scalar _tmp109 = -_tmp104 * _tmp30 + _tmp105 * _tmp18 + _tmp107 * _tmp34 - _tmp108 * _tmp88;
  const Scalar _tmp110 = Scalar(1.0) / (_tmp109);
  const Scalar _tmp111 = Scalar(1.0) * _tmp110;
  const Scalar _tmp112 = _tmp111 * _tmp33;
  const Scalar _tmp113 = -_tmp105 - _tmp107 * _tmp33 + _tmp107 * _tmp58 - _tmp108 * _tmp68 -
                         _tmp16 * _tmp60 + _tmp28 * _tmp58;
  const Scalar _tmp114 = std::pow(_tmp109, Scalar(-2));
  const Scalar _tmp115 = _tmp113 * _tmp114;
  const Scalar _tmp116 = Scalar(1.0) * _tmp97;
  const Scalar _tmp117 = Scalar(1.0) * _tmp34;
  const Scalar _tmp118 = _tmp111 * _tmp96;
  const Scalar _tmp119 = _tmp21 + _tmp39;
  const Scalar _tmp120 = _tmp43 + _tmp6;
  const Scalar _tmp121 = _tmp120 - p_c(0, 0) + position_vector(0, 0);
  const Scalar _tmp122 = _tmp119 - p_c(1, 0) + position_vector(1, 0);
  const Scalar _tmp123 =
      std::pow(Scalar(std::pow(_tmp121, Scalar(2)) + std::pow(_tmp122, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp124 = _tmp121 * _tmp123;
  const Scalar _tmp125 = _tmp122 * _tmp123;
  const Scalar _tmp126 = fh1 * (-_tmp119 * _tmp124 + _tmp120 * _tmp125);
  const Scalar _tmp127 = _tmp102 * _tmp126;
  const Scalar _tmp128 = Scalar(1.0) * _tmp41;
  const Scalar _tmp129 = _tmp128 * _tmp47 * _tmp80 - Scalar(1.0) * _tmp84;
  const Scalar _tmp130 = _tmp129 * _tmp94;
  const Scalar _tmp131 = -Scalar(1.0) * _tmp108 - _tmp109 * _tmp130;
  const Scalar _tmp132 = _tmp110 * _tmp86;
  const Scalar _tmp133 = _tmp131 * _tmp132;
  const Scalar _tmp134 = _tmp109 * _tmp92;
  const Scalar _tmp135 = _tmp110 * _tmp90;
  const Scalar _tmp136 = _tmp135 * (-_tmp113 * _tmp130 + _tmp129 * _tmp134);
  const Scalar _tmp137 = _tmp131 * _tmp90;
  const Scalar _tmp138 = _tmp115 * _tmp137;
  const Scalar _tmp139 = _tmp133 + _tmp136 - _tmp138;
  const Scalar _tmp140 = _tmp34 * _tmp94;
  const Scalar _tmp141 = _tmp131 * _tmp135;
  const Scalar _tmp142 = _tmp129 + _tmp141;
  const Scalar _tmp143 = _tmp142 * _tmp94;
  const Scalar _tmp144 = _tmp143 * _tmp33;
  const Scalar _tmp145 = _tmp88 * _tmp94;
  const Scalar _tmp146 = _tmp142 * _tmp92;
  const Scalar _tmp147 = -_tmp139 * _tmp145 - _tmp143 * _tmp68 + _tmp146 * _tmp88;
  const Scalar _tmp148 = _tmp125 * fh1;
  const Scalar _tmp149 = _tmp102 * _tmp148;
  const Scalar _tmp150 = _tmp66 * _tmp80 + _tmp79;
  const Scalar _tmp151 = -_tmp150 * _tmp48 - _tmp56 + _tmp66 * _tmp84;
  const Scalar _tmp152 = _tmp151 * _tmp94;
  const Scalar _tmp153 = -_tmp107 + _tmp108 * _tmp66 - _tmp109 * _tmp152;
  const Scalar _tmp154 = _tmp153 * _tmp90;
  const Scalar _tmp155 = _tmp115 * _tmp154;
  const Scalar _tmp156 = _tmp110 * _tmp153;
  const Scalar _tmp157 = _tmp156 * _tmp86;
  const Scalar _tmp158 = _tmp135 * (-_tmp113 * _tmp152 + _tmp134 * _tmp151);
  const Scalar _tmp159 = -_tmp155 + _tmp157 + _tmp158;
  const Scalar _tmp160 = _tmp156 * _tmp90;
  const Scalar _tmp161 = _tmp151 + _tmp160;
  const Scalar _tmp162 = _tmp161 * _tmp94;
  const Scalar _tmp163 = _tmp161 * _tmp92;
  const Scalar _tmp164 = -_tmp145 * _tmp159 - _tmp162 * _tmp68 + _tmp163 * _tmp88;
  const Scalar _tmp165 = _tmp162 * _tmp33;
  const Scalar _tmp166 = _tmp159 * _tmp94;
  const Scalar _tmp167 = _tmp124 * fh1;
  const Scalar _tmp168 = _tmp102 * _tmp167;
  const Scalar _tmp169 =
      -_tmp103 * (-_tmp34 * _tmp93 + _tmp58 * _tmp95 - _tmp68 * _tmp98 + _tmp93 * _tmp97 - _tmp99) -
      _tmp127 *
          (_tmp111 * _tmp58 - _tmp112 + _tmp115 * _tmp116 - _tmp115 * _tmp117 - _tmp118 * _tmp68) -
      _tmp149 *
          (_tmp139 * _tmp140 + _tmp143 * _tmp58 - _tmp144 - _tmp146 * _tmp34 + _tmp147 * _tmp96) -
      _tmp168 *
          (_tmp162 * _tmp58 - _tmp163 * _tmp34 + _tmp164 * _tmp96 - _tmp165 + _tmp166 * _tmp34);
  const Scalar _tmp170 = -_tmp162 * _tmp88 - _tmp66;
  const Scalar _tmp171 = -_tmp143 * _tmp88 + Scalar(1.0);
  const Scalar _tmp172 = -_tmp103 * (_tmp18 * _tmp99 - _tmp88 * _tmp98) -
                         _tmp127 * (_tmp112 * _tmp18 - _tmp118 * _tmp88) -
                         _tmp149 * (_tmp144 * _tmp18 + _tmp171 * _tmp96) -
                         _tmp168 * (_tmp165 * _tmp18 + _tmp170 * _tmp96 + Scalar(1.0));
  const Scalar _tmp173 = std::pow(_tmp172, Scalar(-2));
  const Scalar _tmp174 = fh1 * (_tmp51 + _tmp77);
  const Scalar _tmp175 = Scalar(40.024799999999999) * _tmp10 + _tmp120 * fv1 + _tmp124 * _tmp174;
  const Scalar _tmp176 = _tmp28 + _tmp38;
  const Scalar _tmp177 = _tmp176 * _tmp48;
  const Scalar _tmp178 = Scalar(1.0) / (-_tmp16 - _tmp177 + _tmp46);
  const Scalar _tmp179 = Scalar(1.0) * _tmp178;
  const Scalar _tmp180 = _tmp176 * _tmp179;
  const Scalar _tmp181 = _tmp176 * _tmp178;
  const Scalar _tmp182 = _tmp141 * _tmp181 - _tmp143 * _tmp89 - Scalar(1.0) * _tmp80;
  const Scalar _tmp183 = Scalar(1.0) * _tmp148;
  const Scalar _tmp184 = -_tmp119 * fv1 - _tmp125 * _tmp174 - Scalar(40.024799999999999) * _tmp25;
  const Scalar _tmp185 = _tmp179 * _tmp48;
  const Scalar _tmp186 = _tmp177 * _tmp179 + Scalar(1.0);
  const Scalar _tmp187 = _tmp135 * _tmp179;
  const Scalar _tmp188 = -_tmp111 * _tmp89 + _tmp135 * _tmp180;
  const Scalar _tmp189 = Scalar(1.0) * _tmp126;
  const Scalar _tmp190 = _tmp150 + _tmp160 * _tmp181 - _tmp162 * _tmp89;
  const Scalar _tmp191 = Scalar(1.0) * _tmp167;
  const Scalar _tmp192 = _tmp178 * _tmp49;
  const Scalar _tmp193 = -_tmp176 * _tmp192 + _tmp38 - _tmp89 * _tmp95;
  const Scalar _tmp194 =
      Scalar(1.0) * _tmp100 * (-_tmp128 * _tmp193 - _tmp179 * _tmp49 + Scalar(1.0)) +
      Scalar(1.0) * _tmp175 * (-_tmp179 + _tmp180 * _tmp41) +
      _tmp183 * (-_tmp128 * _tmp182 + _tmp141 * _tmp179) +
      Scalar(1.0) * _tmp184 * (-_tmp128 * _tmp186 + _tmp185) +
      _tmp189 * (-_tmp128 * _tmp188 + _tmp187) + _tmp191 * (-_tmp128 * _tmp190 + _tmp160 * _tmp179);
  const Scalar _tmp195 = Scalar(1.0) / (_tmp172);
  const Scalar _tmp196 = std::asinh(_tmp194 * _tmp195);
  const Scalar _tmp197 = Scalar(1.4083112389913199) * _tmp172;
  const Scalar _tmp198 =
      -_tmp196 * _tmp197 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_a(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp64 + p_a(1, 0)), Scalar(2))));
  const Scalar _tmp199 = Scalar(0.71007031138673404) * _tmp173 * _tmp198;
  const Scalar _tmp200 = -_tmp83 * _tmp95 + _tmp89 * _tmp93;
  const Scalar _tmp201 = _tmp100 * _tmp128;
  const Scalar _tmp202 = _tmp89 * _tmp94;
  const Scalar _tmp203 = -_tmp155 * _tmp181 + _tmp157 * _tmp181 + _tmp158 * _tmp181 -
                         _tmp159 * _tmp202 - _tmp162 * _tmp83 + _tmp163 * _tmp89;
  const Scalar _tmp204 = _tmp180 * _tmp90;
  const Scalar _tmp205 = Scalar(1.0) * _tmp89;
  const Scalar _tmp206 =
      -_tmp111 * _tmp83 - _tmp115 * _tmp204 + _tmp115 * _tmp205 + _tmp132 * _tmp180;
  const Scalar _tmp207 = _tmp179 * _tmp90;
  const Scalar _tmp208 = _tmp115 * _tmp207;
  const Scalar _tmp209 = _tmp132 * _tmp179;
  const Scalar _tmp210 = _tmp142 * _tmp89;
  const Scalar _tmp211 = _tmp133 * _tmp181 + _tmp136 * _tmp181 - _tmp138 * _tmp181 -
                         _tmp139 * _tmp202 - _tmp143 * _tmp83 + _tmp210 * _tmp92;
  const Scalar _tmp212 = _tmp173 * _tmp194;
  const Scalar _tmp213 =
      std::pow(Scalar(_tmp173 * std::pow(_tmp194, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp214 = _tmp213 * (-_tmp169 * _tmp212 +
                                    _tmp195 * (_tmp183 * (-_tmp128 * _tmp211 + _tmp133 * _tmp179 +
                                                          _tmp136 * _tmp179 - _tmp138 * _tmp179) +
                                               _tmp189 * (-_tmp128 * _tmp206 - _tmp208 + _tmp209) +
                                               _tmp191 * (-_tmp128 * _tmp203 - _tmp155 * _tmp179 +
                                                          _tmp157 * _tmp179 + _tmp158 * _tmp179) -
                                               _tmp200 * _tmp201));
  const Scalar _tmp215 = Scalar(1.4083112389913199) * _tmp196;
  const Scalar _tmp216 = Scalar(0.71007031138673404) * _tmp195;
  const Scalar _tmp217 = _tmp198 * _tmp216;
  const Scalar _tmp218 = std::cosh(_tmp217);
  const Scalar _tmp219 = Scalar(1.0) * _tmp196;
  const Scalar _tmp220 = Scalar(1.0) * std::cosh(_tmp219);
  const Scalar _tmp221 = -Scalar(1.4083112389913199) * std::sinh(_tmp217) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp219);
  const Scalar _tmp222 = _tmp115 * _tmp189;
  const Scalar _tmp223 = _tmp76 * _tmp88;
  const Scalar _tmp224 = _tmp100 * _tmp50;
  const Scalar _tmp225 = _tmp224 * _tmp92;
  const Scalar _tmp226 = _tmp167 * _tmp76;
  const Scalar _tmp227 = _tmp148 * _tmp76;
  const Scalar _tmp228 = _tmp100 * _tmp95;
  const Scalar _tmp229 = _tmp228 * _tmp76;
  const Scalar _tmp230 = _tmp111 * _tmp126;
  const Scalar _tmp231 = _tmp230 * _tmp76;
  const Scalar _tmp232 = _tmp147 * _tmp227 + _tmp164 * _tmp226 + _tmp222 * _tmp223 +
                         _tmp223 * _tmp225 - _tmp229 * _tmp68 - _tmp231 * _tmp68;
  const Scalar _tmp233 = _tmp100 * _tmp41;
  const Scalar _tmp234 = _tmp167 * _tmp41;
  const Scalar _tmp235 = _tmp126 * _tmp41;
  const Scalar _tmp236 = _tmp148 * _tmp41;
  const Scalar _tmp237 = _tmp175 * _tmp179;
  const Scalar _tmp238 = -_tmp176 * _tmp237 * _tmp41 + _tmp182 * _tmp236 +
                         _tmp184 * _tmp186 * _tmp41 + _tmp188 * _tmp235 + _tmp190 * _tmp234 +
                         _tmp193 * _tmp233;
  const Scalar _tmp239 =
      _tmp170 * _tmp226 + _tmp171 * _tmp227 - _tmp223 * _tmp230 - _tmp229 * _tmp88;
  const Scalar _tmp240 = Scalar(1.0) / (_tmp239);
  const Scalar _tmp241 = std::asinh(_tmp238 * _tmp240);
  const Scalar _tmp242 = Scalar(1.4083112389913199) * _tmp239;
  const Scalar _tmp243 =
      -_tmp241 * _tmp242 - std::sqrt(Scalar(std::pow(Scalar(-_tmp69 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp71 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp244 = Scalar(0.71007031138673404) * _tmp240;
  const Scalar _tmp245 = _tmp243 * _tmp244;
  const Scalar _tmp246 = Scalar(1.0) * _tmp241;
  const Scalar _tmp247 = -Scalar(1.4083112389913199) * std::sinh(_tmp245) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp246);
  const Scalar _tmp248 = Scalar(1.0) * std::cosh(_tmp246);
  const Scalar _tmp249 = std::pow(_tmp239, Scalar(-2));
  const Scalar _tmp250 =
      std::pow(Scalar(std::pow(_tmp238, Scalar(2)) * _tmp249 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp251 = _tmp238 * _tmp249;
  const Scalar _tmp252 =
      _tmp250 * (-_tmp232 * _tmp251 + _tmp240 * (_tmp200 * _tmp233 + _tmp203 * _tmp234 +
                                                 _tmp206 * _tmp235 + _tmp211 * _tmp236));
  const Scalar _tmp253 = std::cosh(_tmp245);
  const Scalar _tmp254 = Scalar(1.4083112389913199) * _tmp241;
  const Scalar _tmp255 = Scalar(0.71007031138673404) * _tmp243 * _tmp249;
  const Scalar _tmp256 = _tmp167 * _tmp178;
  const Scalar _tmp257 = _tmp148 * _tmp178;
  const Scalar _tmp258 = _tmp100 * _tmp192 - _tmp126 * _tmp187 - _tmp141 * _tmp257 -
                         _tmp160 * _tmp256 - _tmp184 * _tmp185 + _tmp237;
  const Scalar _tmp259 = _tmp143 * _tmp148 + _tmp162 * _tmp167 + _tmp228 + _tmp230;
  const Scalar _tmp260 = Scalar(1.0) / (_tmp259);
  const Scalar _tmp261 = std::asinh(_tmp258 * _tmp260);
  const Scalar _tmp262 = Scalar(1.0) * _tmp261;
  const Scalar _tmp263 = Scalar(1.0) * std::cosh(_tmp262);
  const Scalar _tmp264 = std::pow(_tmp259, Scalar(-2));
  const Scalar _tmp265 =
      std::pow(Scalar(std::pow(_tmp258, Scalar(2)) * _tmp264 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp266 = _tmp139 * _tmp148 * _tmp94 - _tmp146 * _tmp148 - _tmp163 * _tmp167 +
                         _tmp166 * _tmp167 - _tmp222 - _tmp225;
  const Scalar _tmp267 = _tmp258 * _tmp264;
  const Scalar _tmp268 =
      _tmp265 *
      (_tmp260 * (_tmp126 * _tmp208 - _tmp126 * _tmp209 - _tmp133 * _tmp257 - _tmp136 * _tmp257 +
                  _tmp138 * _tmp257 + _tmp155 * _tmp256 - _tmp157 * _tmp256 - _tmp158 * _tmp256) -
       _tmp266 * _tmp267);
  const Scalar _tmp269 = -_tmp29 + p_d(1, 0);
  const Scalar _tmp270 = -_tmp17 + p_d(0, 0);
  const Scalar _tmp271 =
      std::sqrt(Scalar(std::pow(_tmp269, Scalar(2)) + std::pow(_tmp270, Scalar(2))));
  const Scalar _tmp272 = Scalar(1.4083112389913199) * _tmp261;
  const Scalar _tmp273 = -_tmp259 * _tmp272 - _tmp271;
  const Scalar _tmp274 = Scalar(0.71007031138673404) * _tmp264 * _tmp273;
  const Scalar _tmp275 = Scalar(1.0) / (_tmp271);
  const Scalar _tmp276 = Scalar(1.4083112389913199) * _tmp259;
  const Scalar _tmp277 = Scalar(0.71007031138673404) * _tmp260;
  const Scalar _tmp278 = _tmp273 * _tmp277;
  const Scalar _tmp279 = std::cosh(_tmp278);
  const Scalar _tmp280 = -Scalar(1.4083112389913199) * std::sinh(_tmp262) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp278);
  const Scalar _tmp281 = _tmp31 * _tmp57;
  const Scalar _tmp282 = -_tmp281 + _tmp33 + _tmp60 * _tmp66;
  const Scalar _tmp283 = _tmp281 * _tmp59 - _tmp282 * _tmp80 - _tmp60 * _tmp79 - _tmp85;
  const Scalar _tmp284 = -_tmp282 * _tmp84 - _tmp283 * _tmp48 + _tmp56 * _tmp60 - _tmp82;
  const Scalar _tmp285 = _tmp284 * _tmp91;
  const Scalar _tmp286 = _tmp285 * _tmp89;
  const Scalar _tmp287 = -_tmp283 * _tmp95 + _tmp286 * _tmp50;
  const Scalar _tmp288 =
      _tmp104 + _tmp107 * _tmp60 - _tmp108 * _tmp282 - _tmp16 * _tmp281 + _tmp28 * _tmp60;
  const Scalar _tmp289 = _tmp114 * _tmp288;
  const Scalar _tmp290 = _tmp110 * _tmp284;
  const Scalar _tmp291 =
      -_tmp111 * _tmp283 + _tmp180 * _tmp290 - _tmp204 * _tmp289 + _tmp205 * _tmp289;
  const Scalar _tmp292 = _tmp207 * _tmp289;
  const Scalar _tmp293 = _tmp179 * _tmp290;
  const Scalar _tmp294 = _tmp109 * _tmp285;
  const Scalar _tmp295 = _tmp135 * (_tmp151 * _tmp294 - _tmp152 * _tmp288);
  const Scalar _tmp296 = _tmp153 * _tmp290;
  const Scalar _tmp297 = _tmp154 * _tmp289;
  const Scalar _tmp298 = _tmp295 + _tmp296 - _tmp297;
  const Scalar _tmp299 = _tmp161 * _tmp286 - _tmp162 * _tmp283 + _tmp181 * _tmp295 +
                         _tmp181 * _tmp296 - _tmp181 * _tmp297 - _tmp202 * _tmp298;
  const Scalar _tmp300 = _tmp137 * _tmp289;
  const Scalar _tmp301 = _tmp131 * _tmp290;
  const Scalar _tmp302 = _tmp135 * (_tmp129 * _tmp294 - _tmp130 * _tmp288);
  const Scalar _tmp303 = _tmp94 * (-_tmp300 + _tmp301 + _tmp302);
  const Scalar _tmp304 = -_tmp143 * _tmp283 - _tmp181 * _tmp300 + _tmp181 * _tmp301 +
                         _tmp181 * _tmp302 + _tmp210 * _tmp285 - _tmp303 * _tmp89;
  const Scalar _tmp305 = _tmp285 * _tmp34;
  const Scalar _tmp306 = _tmp285 * _tmp88;
  const Scalar _tmp307 = -_tmp145 * _tmp298 + _tmp161 * _tmp306 - _tmp162 * _tmp282;
  const Scalar _tmp308 = _tmp142 * _tmp306 - _tmp143 * _tmp282 - _tmp303 * _tmp88;
  const Scalar _tmp309 =
      -_tmp103 *
          (-_tmp282 * _tmp98 - _tmp305 * _tmp50 + _tmp306 * _tmp50 * _tmp96 + _tmp60 * _tmp95) -
      _tmp127 * (_tmp111 * _tmp60 + _tmp116 * _tmp289 - _tmp117 * _tmp289 - _tmp118 * _tmp282) -
      _tmp149 * (-_tmp142 * _tmp305 + _tmp143 * _tmp60 + _tmp303 * _tmp34 + _tmp308 * _tmp96) -
      _tmp168 * (_tmp140 * _tmp298 - _tmp161 * _tmp305 + _tmp162 * _tmp60 + _tmp307 * _tmp96);
  const Scalar _tmp310 = _tmp213 * (_tmp195 * (_tmp183 * (-_tmp128 * _tmp304 - _tmp179 * _tmp300 +
                                                          _tmp179 * _tmp301 + _tmp179 * _tmp302) +
                                               _tmp189 * (-_tmp128 * _tmp291 - _tmp292 + _tmp293) +
                                               _tmp191 * (-_tmp128 * _tmp299 + _tmp179 * _tmp295 +
                                                          _tmp179 * _tmp296 - _tmp179 * _tmp297) -
                                               _tmp201 * _tmp287) -
                                    _tmp212 * _tmp309);
  const Scalar _tmp311 = _tmp224 * _tmp285;
  const Scalar _tmp312 = _tmp189 * _tmp289;
  const Scalar _tmp313 = _tmp223 * _tmp311 + _tmp223 * _tmp312 + _tmp226 * _tmp307 +
                         _tmp227 * _tmp308 - _tmp229 * _tmp282 - _tmp231 * _tmp282;
  const Scalar _tmp314 =
      _tmp250 *
      (_tmp240 * (_tmp233 * _tmp287 + _tmp234 * _tmp299 + _tmp235 * _tmp291 + _tmp236 * _tmp304) -
       _tmp251 * _tmp313);
  const Scalar _tmp315 = -_tmp142 * _tmp148 * _tmp285 + _tmp148 * _tmp303 -
                         _tmp161 * _tmp167 * _tmp285 + _tmp167 * _tmp298 * _tmp94 - _tmp311 -
                         _tmp312;
  const Scalar _tmp316 =
      _tmp265 *
      (_tmp260 * (_tmp126 * _tmp292 - _tmp126 * _tmp293 - _tmp256 * _tmp295 - _tmp256 * _tmp296 +
                  _tmp256 * _tmp297 + _tmp257 * _tmp300 - _tmp257 * _tmp301 - _tmp257 * _tmp302) -
       _tmp267 * _tmp315);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp169 * _tmp221 +
      _tmp197 *
          (-_tmp214 * _tmp220 -
           _tmp218 * (-_tmp169 * _tmp199 + _tmp216 * (-_tmp169 * _tmp215 - _tmp197 * _tmp214)));
  _res(2, 0) =
      _tmp232 * _tmp247 +
      _tmp242 *
          (-_tmp248 * _tmp252 -
           _tmp253 * (-_tmp232 * _tmp255 + _tmp244 * (-_tmp232 * _tmp254 - _tmp242 * _tmp252)));
  _res(3, 0) =
      _tmp266 * _tmp280 +
      _tmp276 * (-_tmp263 * _tmp268 -
                 _tmp279 * (-_tmp266 * _tmp274 + _tmp277 * (-_tmp266 * _tmp272 - _tmp268 * _tmp276 -
                                                            _tmp270 * _tmp275)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp197 *
          (-_tmp218 * (-_tmp199 * _tmp309 + _tmp216 * (-_tmp197 * _tmp310 - _tmp215 * _tmp309)) -
           _tmp220 * _tmp310) +
      _tmp221 * _tmp309;
  _res(2, 1) =
      _tmp242 *
          (-_tmp248 * _tmp314 -
           _tmp253 * (_tmp244 * (-_tmp242 * _tmp314 - _tmp254 * _tmp313) - _tmp255 * _tmp313)) +
      _tmp247 * _tmp313;
  _res(3, 1) =
      _tmp276 * (-_tmp263 * _tmp316 -
                 _tmp279 * (-_tmp274 * _tmp315 + _tmp277 * (-_tmp269 * _tmp275 - _tmp272 * _tmp315 -
                                                            _tmp276 * _tmp316))) +
      _tmp280 * _tmp315;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym