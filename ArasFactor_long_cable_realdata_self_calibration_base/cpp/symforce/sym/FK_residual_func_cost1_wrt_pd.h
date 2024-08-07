// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: FK_residual_func_cost1_wrt_pd
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost1WrtPd(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 1058

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (326)
  const Scalar _tmp0 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp5 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _tmp2 * _tmp4;
  const Scalar _tmp10 = _tmp0 * _tmp5;
  const Scalar _tmp11 = _tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _TransformationMatrix[4] + _tmp17;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp20 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = -_tmp21 + _tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp26;
  const Scalar _tmp28 = _TransformationMatrix[5] + _tmp27;
  const Scalar _tmp29 = -_tmp19;
  const Scalar _tmp30 = _tmp21 + _tmp25;
  const Scalar _tmp31 = _tmp29 + _tmp30;
  const Scalar _tmp32 = _TransformationMatrix[5] + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_d(1, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp12 - _tmp15;
  const Scalar _tmp36 = _tmp35 + _tmp7;
  const Scalar _tmp37 = _TransformationMatrix[4] + _tmp36;
  const Scalar _tmp38 = _tmp37 - p_d(0, 0);
  const Scalar _tmp39 = std::pow(_tmp38, Scalar(2));
  const Scalar _tmp40 = _tmp34 + _tmp39;
  const Scalar _tmp41 = std::pow(_tmp40, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp33 * _tmp41;
  const Scalar _tmp43 = _tmp28 - p_b(1, 0);
  const Scalar _tmp44 = _tmp18 - p_b(0, 0);
  const Scalar _tmp45 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp46 = _tmp43 * _tmp45;
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = _tmp38 * _tmp47 - _tmp42;
  const Scalar _tmp49 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp50 = -_tmp49;
  const Scalar _tmp51 = -Scalar(0.010999999999999999) * _tmp13 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp52 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp53 = _tmp51 + _tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp53;
  const Scalar _tmp55 = _tmp41 * _tmp54;
  const Scalar _tmp56 = _tmp51 - _tmp52;
  const Scalar _tmp57 = _tmp49 + _tmp56;
  const Scalar _tmp58 = _tmp41 * _tmp57;
  const Scalar _tmp59 = _tmp38 * _tmp58;
  const Scalar _tmp60 = _tmp16 + _tmp7;
  const Scalar _tmp61 = _TransformationMatrix[4] + _tmp60;
  const Scalar _tmp62 = _tmp61 - p_c(0, 0);
  const Scalar _tmp63 = _tmp19 + _tmp30;
  const Scalar _tmp64 = _TransformationMatrix[5] + _tmp63;
  const Scalar _tmp65 = _tmp64 - p_c(1, 0);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp62 * _tmp66;
  const Scalar _tmp68 = _tmp65 * _tmp66;
  const Scalar _tmp69 = Scalar(1.0) / (_tmp46 * _tmp67 - _tmp68);
  const Scalar _tmp70 = _tmp49 + _tmp53;
  const Scalar _tmp71 = _tmp69 * (_tmp57 * _tmp67 - _tmp67 * _tmp70);
  const Scalar _tmp72 = _tmp46 * _tmp57;
  const Scalar _tmp73 = _tmp69 * (-_tmp67 * _tmp72 + _tmp68 * _tmp70);
  const Scalar _tmp74 = _tmp42 * _tmp54 - _tmp46 * _tmp59 - _tmp48 * _tmp73;
  const Scalar _tmp75 = Scalar(1.0) * _tmp27;
  const Scalar _tmp76 = -_tmp75;
  const Scalar _tmp77 = Scalar(1.0) / (_tmp63 + _tmp76);
  const Scalar _tmp78 = Scalar(1.0) * _tmp17;
  const Scalar _tmp79 = -_tmp60 + _tmp78;
  const Scalar _tmp80 = _tmp77 * _tmp79;
  const Scalar _tmp81 = -_tmp38 * _tmp55 - _tmp48 * _tmp71 + _tmp59 - _tmp74 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = _tmp75 * _tmp80 + _tmp78;
  const Scalar _tmp84 = 0;
  const Scalar _tmp85 = _tmp82 * _tmp84;
  const Scalar _tmp86 = _tmp67 * _tmp69;
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = _tmp41 * _tmp85;
  const Scalar _tmp89 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp90 =
      std::sqrt(Scalar(std::pow(_tmp43, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp91 = _tmp45 * _tmp90;
  const Scalar _tmp92 = _tmp89 * _tmp91;
  const Scalar _tmp93 = _tmp36 * _tmp41;
  const Scalar _tmp94 = _tmp31 * _tmp41;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp96 = _tmp91 * (_tmp17 * _tmp43 * _tmp95 - _tmp27 * _tmp44 * _tmp95);
  const Scalar _tmp97 = _tmp69 * (-_tmp60 * _tmp68 + _tmp63 * _tmp67 + _tmp67 * _tmp96);
  const Scalar _tmp98 = _tmp38 * _tmp41;
  const Scalar _tmp99 = -_tmp33 * _tmp93 + _tmp38 * _tmp94 - _tmp48 * _tmp97 + _tmp96 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 = Scalar(1.0) * _tmp77;
  const Scalar _tmp102 = _tmp101 * _tmp73 * _tmp79 - Scalar(1.0) * _tmp71;
  const Scalar _tmp103 = _tmp102 * _tmp82;
  const Scalar _tmp104 = -_tmp103 * _tmp99 - Scalar(1.0) * _tmp97;
  const Scalar _tmp105 = _tmp100 * _tmp104;
  const Scalar _tmp106 = _tmp105 * _tmp81;
  const Scalar _tmp107 = _tmp102 + _tmp106;
  const Scalar _tmp108 = _tmp107 * _tmp82;
  const Scalar _tmp109 = -_tmp108 * _tmp48 + Scalar(1.0);
  const Scalar _tmp110 = _tmp108 * _tmp41;
  const Scalar _tmp111 = _tmp35 + _tmp8;
  const Scalar _tmp112 = _TransformationMatrix[4] + _tmp111 - p_a(0, 0);
  const Scalar _tmp113 = _tmp26 + _tmp29;
  const Scalar _tmp114 = _TransformationMatrix[5] + _tmp113 - p_a(1, 0);
  const Scalar _tmp115 =
      std::pow(Scalar(std::pow(_tmp112, Scalar(2)) + std::pow(_tmp114, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp116 = _tmp114 * _tmp115;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = _tmp117 * _tmp91;
  const Scalar _tmp119 = _tmp46 * _tmp73 + _tmp72;
  const Scalar _tmp120 = -_tmp119 * _tmp80 + _tmp46 * _tmp71 - _tmp57;
  const Scalar _tmp121 = _tmp120 * _tmp82;
  const Scalar _tmp122 = -_tmp121 * _tmp99 + _tmp46 * _tmp97 - _tmp96;
  const Scalar _tmp123 = _tmp100 * _tmp122;
  const Scalar _tmp124 = _tmp123 * _tmp81;
  const Scalar _tmp125 = _tmp120 + _tmp124;
  const Scalar _tmp126 = _tmp125 * _tmp82;
  const Scalar _tmp127 = -_tmp126 * _tmp48 - _tmp46;
  const Scalar _tmp128 = _tmp126 * _tmp41;
  const Scalar _tmp129 = _tmp112 * _tmp115;
  const Scalar _tmp130 = _tmp129 * fh1;
  const Scalar _tmp131 = _tmp130 * _tmp91;
  const Scalar _tmp132 = Scalar(1.0) * _tmp100;
  const Scalar _tmp133 = _tmp132 * _tmp41;
  const Scalar _tmp134 = _tmp132 * _tmp86;
  const Scalar _tmp135 = fh1 * (_tmp111 * _tmp116 - _tmp113 * _tmp129);
  const Scalar _tmp136 = _tmp135 * _tmp91;
  const Scalar _tmp137 = -_tmp118 * (_tmp109 * _tmp86 + _tmp110 * _tmp38) -
                         _tmp131 * (_tmp127 * _tmp86 + _tmp128 * _tmp38 + Scalar(1.0)) -
                         _tmp136 * (_tmp133 * _tmp38 - _tmp134 * _tmp48) -
                         _tmp92 * (_tmp38 * _tmp88 - _tmp48 * _tmp87);
  const Scalar _tmp138 = Scalar(1.0) / (_tmp137);
  const Scalar _tmp139 = fh1 * (_tmp50 + _tmp56);
  const Scalar _tmp140 = -_tmp113 * fv1 - _tmp116 * _tmp139 - Scalar(40.024799999999999) * _tmp24;
  const Scalar _tmp141 = _tmp31 + _tmp76;
  const Scalar _tmp142 = _tmp141 * _tmp80;
  const Scalar _tmp143 = Scalar(1.0) / (-_tmp142 - _tmp36 + _tmp78);
  const Scalar _tmp144 = Scalar(1.0) * _tmp143;
  const Scalar _tmp145 = _tmp144 * _tmp80;
  const Scalar _tmp146 = _tmp142 * _tmp144 + Scalar(1.0);
  const Scalar _tmp147 = _tmp100 * _tmp81;
  const Scalar _tmp148 = _tmp144 * _tmp147;
  const Scalar _tmp149 = -_tmp132 * _tmp74 + _tmp141 * _tmp148;
  const Scalar _tmp150 = Scalar(1.0) * _tmp135;
  const Scalar _tmp151 = _tmp74 * _tmp82;
  const Scalar _tmp152 = _tmp141 * _tmp143;
  const Scalar _tmp153 = _tmp119 + _tmp124 * _tmp152 - _tmp125 * _tmp151;
  const Scalar _tmp154 = Scalar(1.0) * _tmp130;
  const Scalar _tmp155 = _tmp106 * _tmp152 - _tmp107 * _tmp151 - Scalar(1.0) * _tmp73;
  const Scalar _tmp156 = Scalar(1.0) * _tmp117;
  const Scalar _tmp157 = _tmp141 * _tmp77;
  const Scalar _tmp158 = Scalar(40.024799999999999) * _tmp11 + _tmp111 * fv1 + _tmp129 * _tmp139;
  const Scalar _tmp159 = _tmp143 * _tmp83;
  const Scalar _tmp160 = -_tmp141 * _tmp159 - _tmp151 * _tmp84 + _tmp76;
  const Scalar _tmp161 =
      Scalar(1.0) * _tmp140 * (-_tmp101 * _tmp146 + _tmp145) +
      _tmp150 * (-_tmp101 * _tmp149 + _tmp148) +
      _tmp154 * (-_tmp101 * _tmp153 + _tmp124 * _tmp144) +
      _tmp156 * (-_tmp101 * _tmp155 + _tmp106 * _tmp144) +
      Scalar(1.0) * _tmp158 * (_tmp144 * _tmp157 - _tmp144) +
      Scalar(1.0) * _tmp89 * (-_tmp101 * _tmp160 - _tmp144 * _tmp83 + Scalar(1.0));
  const Scalar _tmp162 = std::asinh(_tmp138 * _tmp161);
  const Scalar _tmp163 = Scalar(1.4083112389913199) * _tmp137;
  const Scalar _tmp164 =
      -_tmp162 * _tmp163 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp28 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp165 = Scalar(0.71007031138673404) * _tmp138;
  const Scalar _tmp166 = _tmp164 * _tmp165;
  const Scalar _tmp167 = std::sinh(_tmp166);
  const Scalar _tmp168 = std::pow(_tmp40, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp169 = _tmp168 * _tmp33 * _tmp38;
  const Scalar _tmp170 = _tmp168 * _tmp39;
  const Scalar _tmp171 = -_tmp169 + _tmp170 * _tmp46 - _tmp47;
  const Scalar _tmp172 = -_tmp169 * _tmp36 + _tmp170 * _tmp31 + _tmp170 * _tmp96 -
                         _tmp171 * _tmp97 - _tmp41 * _tmp96 - _tmp94;
  const Scalar _tmp173 = _tmp169 * _tmp54;
  const Scalar _tmp174 = -_tmp170 * _tmp72 - _tmp171 * _tmp73 + _tmp173 + _tmp46 * _tmp58;
  const Scalar _tmp175 =
      -_tmp170 * _tmp54 + _tmp170 * _tmp57 - _tmp171 * _tmp71 - _tmp174 * _tmp80 + _tmp55 - _tmp58;
  const Scalar _tmp176 = std::pow(_tmp81, Scalar(-2));
  const Scalar _tmp177 = _tmp175 * _tmp176;
  const Scalar _tmp178 = _tmp177 * _tmp99;
  const Scalar _tmp179 = _tmp147 * (_tmp102 * _tmp178 - _tmp103 * _tmp172);
  const Scalar _tmp180 = _tmp104 * _tmp81;
  const Scalar _tmp181 = std::pow(_tmp99, Scalar(-2));
  const Scalar _tmp182 = _tmp172 * _tmp181;
  const Scalar _tmp183 = _tmp180 * _tmp182;
  const Scalar _tmp184 = _tmp105 * _tmp175;
  const Scalar _tmp185 = _tmp179 - _tmp183 + _tmp184;
  const Scalar _tmp186 = _tmp82 * _tmp98;
  const Scalar _tmp187 = _tmp177 * _tmp98;
  const Scalar _tmp188 = _tmp48 * _tmp82;
  const Scalar _tmp189 = _tmp107 * _tmp48;
  const Scalar _tmp190 = -_tmp108 * _tmp171 + _tmp177 * _tmp189 - _tmp185 * _tmp188;
  const Scalar _tmp191 = _tmp48 * _tmp86;
  const Scalar _tmp192 = Scalar(1.0) * _tmp191;
  const Scalar _tmp193 = Scalar(1.0) * _tmp98;
  const Scalar _tmp194 = _tmp123 * _tmp175;
  const Scalar _tmp195 = _tmp147 * (_tmp120 * _tmp178 - _tmp121 * _tmp172);
  const Scalar _tmp196 = _tmp122 * _tmp81;
  const Scalar _tmp197 = _tmp182 * _tmp196;
  const Scalar _tmp198 = _tmp194 + _tmp195 - _tmp197;
  const Scalar _tmp199 = _tmp125 * _tmp48;
  const Scalar _tmp200 = -_tmp126 * _tmp171 + _tmp177 * _tmp199 - _tmp188 * _tmp198;
  const Scalar _tmp201 = _tmp191 * _tmp84;
  const Scalar _tmp202 = -_tmp118 * (-_tmp107 * _tmp187 + _tmp108 * _tmp170 - _tmp110 +
                                     _tmp185 * _tmp186 + _tmp190 * _tmp86) -
                         _tmp131 * (-_tmp125 * _tmp187 + _tmp126 * _tmp170 - _tmp128 +
                                    _tmp186 * _tmp198 + _tmp200 * _tmp86) -
                         _tmp136 * (_tmp132 * _tmp170 - _tmp133 - _tmp134 * _tmp171 +
                                    _tmp182 * _tmp192 - _tmp182 * _tmp193) -
                         _tmp92 * (_tmp170 * _tmp85 - _tmp171 * _tmp87 + _tmp177 * _tmp201 -
                                   _tmp187 * _tmp84 - _tmp88);
  const Scalar _tmp203 = std::pow(_tmp137, Scalar(-2));
  const Scalar _tmp204 = Scalar(0.71007031138673404) * _tmp203;
  const Scalar _tmp205 = _tmp164 * _tmp204;
  const Scalar _tmp206 = Scalar(1.4083112389913199) * _tmp162;
  const Scalar _tmp207 =
      std::pow(Scalar(std::pow(_tmp161, Scalar(2)) * _tmp203 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp208 = _tmp161 * _tmp203;
  const Scalar _tmp209 = _tmp177 * _tmp74;
  const Scalar _tmp210 = _tmp107 * _tmp209 - _tmp108 * _tmp174 - _tmp151 * _tmp185 +
                         _tmp152 * _tmp179 - _tmp152 * _tmp183 + _tmp152 * _tmp184;
  const Scalar _tmp211 = _tmp125 * _tmp209 - _tmp126 * _tmp174 - _tmp151 * _tmp198 +
                         _tmp152 * _tmp194 + _tmp152 * _tmp195 - _tmp152 * _tmp197;
  const Scalar _tmp212 = -_tmp174 * _tmp85 + _tmp209 * _tmp84;
  const Scalar _tmp213 = _tmp101 * _tmp89;
  const Scalar _tmp214 = _tmp144 * _tmp81;
  const Scalar _tmp215 = _tmp182 * _tmp214;
  const Scalar _tmp216 = Scalar(1.0) * _tmp74;
  const Scalar _tmp217 = _tmp100 * _tmp144;
  const Scalar _tmp218 = _tmp175 * _tmp217;
  const Scalar _tmp219 =
      -_tmp132 * _tmp174 - _tmp141 * _tmp215 + _tmp141 * _tmp218 + _tmp182 * _tmp216;
  const Scalar _tmp220 = _tmp207 * (_tmp138 * (_tmp150 * (-_tmp101 * _tmp219 - _tmp215 + _tmp218) +
                                               _tmp154 * (-_tmp101 * _tmp211 + _tmp144 * _tmp194 +
                                                          _tmp144 * _tmp195 - _tmp144 * _tmp197) +
                                               _tmp156 * (-_tmp101 * _tmp210 + _tmp144 * _tmp179 -
                                                          _tmp144 * _tmp183 + _tmp144 * _tmp184) -
                                               _tmp212 * _tmp213) -
                                    _tmp202 * _tmp208);
  const Scalar _tmp221 = _tmp204 * p_b(2, 0);
  const Scalar _tmp222 = Scalar(1.0) * _tmp162;
  const Scalar _tmp223 = Scalar(1.0) * std::sinh(_tmp222);
  const Scalar _tmp224 = Scalar(1.4083112389913199) * _tmp165 * p_b(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp166) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp222);
  const Scalar _tmp225 = _tmp135 * _tmp77;
  const Scalar _tmp226 = _tmp77 * _tmp89;
  const Scalar _tmp227 = _tmp130 * _tmp77;
  const Scalar _tmp228 = _tmp144 * _tmp158;
  const Scalar _tmp229 = _tmp117 * _tmp77;
  const Scalar _tmp230 = _tmp140 * _tmp146 * _tmp77 + _tmp149 * _tmp225 + _tmp153 * _tmp227 +
                         _tmp155 * _tmp229 - _tmp157 * _tmp228 + _tmp160 * _tmp226;
  const Scalar _tmp231 = _tmp132 * _tmp135;
  const Scalar _tmp232 = _tmp48 * _tmp69;
  const Scalar _tmp233 = _tmp130 * _tmp69;
  const Scalar _tmp234 = _tmp85 * _tmp89;
  const Scalar _tmp235 = _tmp234 * _tmp69;
  const Scalar _tmp236 = _tmp117 * _tmp69;
  const Scalar _tmp237 =
      _tmp109 * _tmp236 + _tmp127 * _tmp233 - _tmp231 * _tmp232 - _tmp235 * _tmp48;
  const Scalar _tmp238 = std::pow(_tmp237, Scalar(-2));
  const Scalar _tmp239 =
      std::pow(Scalar(std::pow(_tmp230, Scalar(2)) * _tmp238 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp240 = _tmp150 * _tmp182;
  const Scalar _tmp241 = _tmp84 * _tmp89;
  const Scalar _tmp242 = _tmp177 * _tmp241;
  const Scalar _tmp243 = _tmp231 * _tmp69;
  const Scalar _tmp244 = -_tmp171 * _tmp235 - _tmp171 * _tmp243 + _tmp190 * _tmp236 +
                         _tmp200 * _tmp233 + _tmp232 * _tmp240 + _tmp232 * _tmp242;
  const Scalar _tmp245 = _tmp230 * _tmp238;
  const Scalar _tmp246 = Scalar(1.0) / (_tmp237);
  const Scalar _tmp247 =
      _tmp239 * (-_tmp244 * _tmp245 + _tmp246 * (_tmp210 * _tmp229 + _tmp211 * _tmp227 +
                                                 _tmp212 * _tmp226 + _tmp219 * _tmp225));
  const Scalar _tmp248 = std::asinh(_tmp230 * _tmp246);
  const Scalar _tmp249 = Scalar(1.0) * _tmp248;
  const Scalar _tmp250 = Scalar(1.0) * std::sinh(_tmp249);
  const Scalar _tmp251 = Scalar(0.71007031138673404) * _tmp238;
  const Scalar _tmp252 = _tmp244 * _tmp251;
  const Scalar _tmp253 = Scalar(1.4083112389913199) * _tmp237;
  const Scalar _tmp254 =
      -_tmp248 * _tmp253 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp64 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp255 = Scalar(1.4083112389913199) * _tmp248;
  const Scalar _tmp256 = Scalar(0.71007031138673404) * _tmp246;
  const Scalar _tmp257 = _tmp254 * _tmp256;
  const Scalar _tmp258 = std::sinh(_tmp257);
  const Scalar _tmp259 = Scalar(1.4083112389913199) * _tmp256 * p_c(2, 0) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp249) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp257);
  const Scalar _tmp260 = _tmp130 * _tmp82;
  const Scalar _tmp261 = _tmp107 * _tmp117;
  const Scalar _tmp262 = _tmp125 * _tmp130;
  const Scalar _tmp263 = _tmp117 * _tmp185 * _tmp82 - _tmp177 * _tmp261 - _tmp177 * _tmp262 +
                         _tmp198 * _tmp260 - _tmp240 - _tmp242;
  const Scalar _tmp264 = -_tmp37 + p_d(0, 0);
  const Scalar _tmp265 = -_tmp32 + p_d(1, 0);
  const Scalar _tmp266 =
      std::sqrt(Scalar(std::pow(_tmp264, Scalar(2)) + std::pow(_tmp265, Scalar(2))));
  const Scalar _tmp267 = _tmp108 * _tmp117 + _tmp126 * _tmp130 + _tmp231 + _tmp234;
  const Scalar _tmp268 = _tmp117 * _tmp143;
  const Scalar _tmp269 = _tmp130 * _tmp143;
  const Scalar _tmp270 = -_tmp106 * _tmp268 - _tmp124 * _tmp269 - _tmp135 * _tmp148 -
                         _tmp140 * _tmp145 + _tmp159 * _tmp89 + _tmp228;
  const Scalar _tmp271 = Scalar(1.0) / (_tmp267);
  const Scalar _tmp272 = std::asinh(_tmp270 * _tmp271);
  const Scalar _tmp273 = Scalar(1.4083112389913199) * _tmp272;
  const Scalar _tmp274 = -_tmp266 - _tmp267 * _tmp273;
  const Scalar _tmp275 = std::pow(_tmp267, Scalar(-2));
  const Scalar _tmp276 = Scalar(0.71007031138673404) * _tmp275;
  const Scalar _tmp277 = _tmp274 * _tmp276;
  const Scalar _tmp278 = Scalar(1.4083112389913199) * _tmp267;
  const Scalar _tmp279 = _tmp270 * _tmp275;
  const Scalar _tmp280 =
      std::pow(Scalar(std::pow(_tmp270, Scalar(2)) * _tmp275 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp281 =
      _tmp280 *
      (-_tmp263 * _tmp279 +
       _tmp271 * (_tmp135 * _tmp215 - _tmp135 * _tmp218 - _tmp179 * _tmp268 + _tmp183 * _tmp268 -
                  _tmp184 * _tmp268 - _tmp194 * _tmp269 - _tmp195 * _tmp269 + _tmp197 * _tmp269));
  const Scalar _tmp282 = Scalar(1.0) / (_tmp266);
  const Scalar _tmp283 = Scalar(0.71007031138673404) * _tmp271;
  const Scalar _tmp284 = _tmp274 * _tmp283;
  const Scalar _tmp285 = std::sinh(_tmp284);
  const Scalar _tmp286 = Scalar(1.0) * _tmp272;
  const Scalar _tmp287 = Scalar(1.0) * std::sinh(_tmp286);
  const Scalar _tmp288 = _tmp276 * p_d(2, 0);
  const Scalar _tmp289 = Scalar(1.4083112389913199) * _tmp283 * p_d(2, 0) -
                         Scalar(1.4083112389913199) * std::cosh(_tmp284) +
                         Scalar(1.4083112389913199) * std::cosh(_tmp286);
  const Scalar _tmp290 = _tmp168 * _tmp34;
  const Scalar _tmp291 = _tmp169 * _tmp46 - _tmp290 + _tmp41;
  const Scalar _tmp292 =
      _tmp169 * _tmp31 + _tmp169 * _tmp96 - _tmp290 * _tmp36 - _tmp291 * _tmp97 + _tmp93;
  const Scalar _tmp293 = _tmp181 * _tmp292;
  const Scalar _tmp294 = -_tmp169 * _tmp72 + _tmp290 * _tmp54 - _tmp291 * _tmp73 - _tmp55;
  const Scalar _tmp295 = _tmp169 * _tmp57 - _tmp173 - _tmp291 * _tmp71 - _tmp294 * _tmp80;
  const Scalar _tmp296 = _tmp176 * _tmp295;
  const Scalar _tmp297 = _tmp296 * _tmp98;
  const Scalar _tmp298 = _tmp296 * _tmp99;
  const Scalar _tmp299 = _tmp147 * (_tmp120 * _tmp298 - _tmp121 * _tmp292);
  const Scalar _tmp300 = _tmp123 * _tmp295;
  const Scalar _tmp301 = _tmp196 * _tmp293;
  const Scalar _tmp302 = _tmp299 + _tmp300 - _tmp301;
  const Scalar _tmp303 = -_tmp126 * _tmp291 - _tmp188 * _tmp302 + _tmp199 * _tmp296;
  const Scalar _tmp304 = _tmp180 * _tmp293;
  const Scalar _tmp305 = _tmp147 * (_tmp102 * _tmp298 - _tmp103 * _tmp292);
  const Scalar _tmp306 = _tmp105 * _tmp295;
  const Scalar _tmp307 = -_tmp304 + _tmp305 + _tmp306;
  const Scalar _tmp308 = -_tmp108 * _tmp291 - _tmp188 * _tmp307 + _tmp189 * _tmp296;
  const Scalar _tmp309 = _tmp307 * _tmp82;
  const Scalar _tmp310 =
      -_tmp118 * (-_tmp107 * _tmp297 + _tmp108 * _tmp169 + _tmp308 * _tmp86 + _tmp309 * _tmp98) -
      _tmp131 * (-_tmp125 * _tmp297 + _tmp126 * _tmp169 + _tmp186 * _tmp302 + _tmp303 * _tmp86) -
      _tmp136 * (_tmp132 * _tmp169 - _tmp134 * _tmp291 + _tmp192 * _tmp293 - _tmp193 * _tmp293) -
      _tmp92 * (_tmp169 * _tmp85 + _tmp201 * _tmp296 - _tmp291 * _tmp87 - _tmp297 * _tmp84);
  const Scalar _tmp311 = _tmp296 * _tmp74;
  const Scalar _tmp312 = _tmp125 * _tmp311 - _tmp126 * _tmp294 - _tmp151 * _tmp302 +
                         _tmp152 * _tmp299 + _tmp152 * _tmp300 - _tmp152 * _tmp301;
  const Scalar _tmp313 = _tmp217 * _tmp295;
  const Scalar _tmp314 = _tmp214 * _tmp293;
  const Scalar _tmp315 =
      -_tmp132 * _tmp294 + _tmp141 * _tmp313 - _tmp141 * _tmp314 + _tmp216 * _tmp293;
  const Scalar _tmp316 = -_tmp294 * _tmp85 + _tmp311 * _tmp84;
  const Scalar _tmp317 = _tmp107 * _tmp311 - _tmp108 * _tmp294 - _tmp151 * _tmp307 -
                         _tmp152 * _tmp304 + _tmp152 * _tmp305 + _tmp152 * _tmp306;
  const Scalar _tmp318 = _tmp207 * (_tmp138 * (_tmp150 * (-_tmp101 * _tmp315 + _tmp313 - _tmp314) +
                                               _tmp154 * (-_tmp101 * _tmp312 + _tmp144 * _tmp299 +
                                                          _tmp144 * _tmp300 - _tmp144 * _tmp301) +
                                               _tmp156 * (-_tmp101 * _tmp317 - _tmp144 * _tmp304 +
                                                          _tmp144 * _tmp305 + _tmp144 * _tmp306) -
                                               _tmp213 * _tmp316) -
                                    _tmp208 * _tmp310);
  const Scalar _tmp319 = _tmp241 * _tmp296;
  const Scalar _tmp320 = _tmp150 * _tmp293;
  const Scalar _tmp321 = _tmp232 * _tmp319 + _tmp232 * _tmp320 + _tmp233 * _tmp303 -
                         _tmp235 * _tmp291 + _tmp236 * _tmp308 - _tmp243 * _tmp291;
  const Scalar _tmp322 = _tmp251 * _tmp321;
  const Scalar _tmp323 =
      _tmp239 * (-_tmp245 * _tmp321 + _tmp246 * (_tmp225 * _tmp315 + _tmp226 * _tmp316 +
                                                 _tmp227 * _tmp312 + _tmp229 * _tmp317));
  const Scalar _tmp324 = _tmp117 * _tmp309 + _tmp260 * _tmp302 - _tmp261 * _tmp296 -
                         _tmp262 * _tmp296 - _tmp319 - _tmp320;
  const Scalar _tmp325 =
      _tmp280 *
      (_tmp271 * (-_tmp135 * _tmp313 + _tmp135 * _tmp314 + _tmp268 * _tmp304 - _tmp268 * _tmp305 -
                  _tmp268 * _tmp306 - _tmp269 * _tmp299 - _tmp269 * _tmp300 + _tmp269 * _tmp301) -
       _tmp279 * _tmp324);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp163 *
          (-_tmp167 * (_tmp165 * (-_tmp163 * _tmp220 - _tmp202 * _tmp206) - _tmp202 * _tmp205) -
           _tmp202 * _tmp221 + _tmp220 * _tmp223) -
      _tmp202 * _tmp224;
  _res(2, 0) =
      -_tmp244 * _tmp259 -
      _tmp253 *
          (_tmp247 * _tmp250 - _tmp252 * p_c(2, 0) -
           _tmp258 * (-_tmp252 * _tmp254 + _tmp256 * (-_tmp244 * _tmp255 - _tmp247 * _tmp253)));
  _res(3, 0) =
      -_tmp263 * _tmp289 -
      _tmp278 * (-_tmp263 * _tmp288 + _tmp281 * _tmp287 -
                 _tmp285 * (-_tmp263 * _tmp277 + _tmp283 * (-_tmp263 * _tmp273 - _tmp264 * _tmp282 -
                                                            _tmp278 * _tmp281)));
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp163 *
          (-_tmp167 * (_tmp165 * (-_tmp163 * _tmp318 - _tmp206 * _tmp310) - _tmp205 * _tmp310) -
           _tmp221 * _tmp310 + _tmp223 * _tmp318) -
      _tmp224 * _tmp310;
  _res(2, 1) =
      -_tmp253 *
          (_tmp250 * _tmp323 -
           _tmp258 * (-_tmp254 * _tmp322 + _tmp256 * (-_tmp253 * _tmp323 - _tmp255 * _tmp321)) -
           _tmp322 * p_c(2, 0)) -
      _tmp259 * _tmp321;
  _res(3, 1) =
      -_tmp278 *
          (-_tmp285 * (-_tmp277 * _tmp324 +
                       _tmp283 * (-_tmp265 * _tmp282 - _tmp273 * _tmp324 - _tmp278 * _tmp325)) +
           _tmp287 * _tmp325 - _tmp288 * _tmp324) -
      _tmp289 * _tmp324;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(-1.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
