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
 * Symbolic function: FK_residual_func_cost4_wrt_pd
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost4WrtPd(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 737

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (242)
  const Scalar _tmp0 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp5 =
      -_DeltaRot[0] * _TransformationMatrix[0] - _DeltaRot[1] * _TransformationMatrix[1] -
      _DeltaRot[2] * _TransformationMatrix[2] + _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp4 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = _tmp2 * _tmp4;
  const Scalar _tmp11 = _tmp0 * _tmp6;
  const Scalar _tmp12 = _tmp10 - _tmp11;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp15 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 +
                        Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999);
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp9;
  const Scalar _tmp19 = _TransformationMatrix[5] + _tmp18;
  const Scalar _tmp20 = _tmp19 - p_d(1, 0);
  const Scalar _tmp21 = std::pow(_tmp20, Scalar(2));
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp26 = _tmp2 * _tmp5;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _TransformationMatrix[4] + _tmp31;
  const Scalar _tmp33 = _tmp32 - p_d(0, 0);
  const Scalar _tmp34 = std::pow(_tmp33, Scalar(2));
  const Scalar _tmp35 = _tmp21 + _tmp34;
  const Scalar _tmp36 = std::pow(_tmp35, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp28 - _tmp29;
  const Scalar _tmp38 = _tmp23 + _tmp37;
  const Scalar _tmp39 = _tmp13 - _tmp16;
  const Scalar _tmp40 = _tmp39 + _tmp8;
  const Scalar _tmp41 = _TransformationMatrix[5] + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_b(1, 0);
  const Scalar _tmp43 = _TransformationMatrix[4] + _tmp38;
  const Scalar _tmp44 = _tmp43 - p_b(0, 0);
  const Scalar _tmp45 =
      std::sqrt(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp44, Scalar(2))));
  const Scalar _tmp46 = Scalar(1.0) / (_tmp45);
  const Scalar _tmp47 = Scalar(1.0) / (_tmp44);
  const Scalar _tmp48 = _tmp45 * _tmp47;
  const Scalar _tmp49 = _tmp48 * (_tmp38 * _tmp42 * _tmp46 - _tmp40 * _tmp44 * _tmp46);
  const Scalar _tmp50 = _tmp18 * _tmp36;
  const Scalar _tmp51 = _tmp23 + _tmp30;
  const Scalar _tmp52 = _TransformationMatrix[4] + _tmp51;
  const Scalar _tmp53 = _tmp52 - p_c(0, 0);
  const Scalar _tmp54 = _tmp17 + _tmp8;
  const Scalar _tmp55 = _TransformationMatrix[5] + _tmp54;
  const Scalar _tmp56 = _tmp55 - p_c(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp53, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp53 * _tmp57;
  const Scalar _tmp60 = _tmp49 * _tmp59 - _tmp51 * _tmp58 + _tmp54 * _tmp59;
  const Scalar _tmp61 = _tmp42 * _tmp47;
  const Scalar _tmp62 = _tmp36 * _tmp61;
  const Scalar _tmp63 = std::pow(_tmp35, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp64 = _tmp20 * _tmp33 * _tmp63;
  const Scalar _tmp65 = _tmp34 * _tmp63;
  const Scalar _tmp66 = _tmp61 * _tmp65 - _tmp62 - _tmp64;
  const Scalar _tmp67 = Scalar(1.0) / (-_tmp58 + _tmp59 * _tmp61);
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = _tmp18 * _tmp65 - _tmp31 * _tmp64 - _tmp36 * _tmp49 + _tmp49 * _tmp65 -
                        _tmp50 - _tmp60 * _tmp68;
  const Scalar _tmp70 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp71 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp73 = _tmp71 + _tmp72;
  const Scalar _tmp74 = _tmp70 + _tmp73;
  const Scalar _tmp75 = _tmp71 - _tmp72;
  const Scalar _tmp76 = _tmp70 + _tmp75;
  const Scalar _tmp77 = -_tmp59 * _tmp74 + _tmp59 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp67;
  const Scalar _tmp79 = Scalar(1.0) * _tmp38;
  const Scalar _tmp80 = -_tmp51 + _tmp79;
  const Scalar _tmp81 = _tmp61 * _tmp76;
  const Scalar _tmp82 = _tmp58 * _tmp74 - _tmp59 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) * _tmp40;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp54 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp85;
  const Scalar _tmp87 = _tmp67 * _tmp80 * _tmp82 * _tmp86 - _tmp77 * _tmp78;
  const Scalar _tmp88 = -_tmp70;
  const Scalar _tmp89 = _tmp73 + _tmp88;
  const Scalar _tmp90 = _tmp36 * _tmp89;
  const Scalar _tmp91 = _tmp36 * _tmp76;
  const Scalar _tmp92 = _tmp33 * _tmp91;
  const Scalar _tmp93 = -_tmp20 * _tmp36 + _tmp33 * _tmp62;
  const Scalar _tmp94 = _tmp67 * _tmp93;
  const Scalar _tmp95 = _tmp20 * _tmp90 - _tmp61 * _tmp92 - _tmp82 * _tmp94;
  const Scalar _tmp96 = _tmp80 * _tmp85;
  const Scalar _tmp97 = -_tmp33 * _tmp90 - _tmp77 * _tmp94 + _tmp92 - _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 = _tmp87 * _tmp98;
  const Scalar _tmp100 = _tmp65 * _tmp76;
  const Scalar _tmp101 = _tmp64 * _tmp89;
  const Scalar _tmp102 = _tmp100 - _tmp65 * _tmp89 - _tmp68 * _tmp77 + _tmp90 - _tmp91 -
                         _tmp96 * (-_tmp100 * _tmp61 + _tmp101 + _tmp61 * _tmp91 - _tmp68 * _tmp82);
  const Scalar _tmp103 = std::pow(_tmp97, Scalar(-2));
  const Scalar _tmp104 = _tmp102 * _tmp103;
  const Scalar _tmp105 = _tmp31 * _tmp36;
  const Scalar _tmp106 = _tmp33 * _tmp36;
  const Scalar _tmp107 = -_tmp105 * _tmp20 + _tmp106 * _tmp49 + _tmp33 * _tmp50 - _tmp60 * _tmp94;
  const Scalar _tmp108 = _tmp107 * _tmp87;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp110 = _tmp109 * _tmp97;
  const Scalar _tmp111 = _tmp60 * _tmp67;
  const Scalar _tmp112 = -_tmp107 * _tmp99 - Scalar(1.0) * _tmp111;
  const Scalar _tmp113 = std::pow(_tmp107, Scalar(-2));
  const Scalar _tmp114 = _tmp113 * _tmp97;
  const Scalar _tmp115 = _tmp112 * _tmp114;
  const Scalar _tmp116 = _tmp109 * _tmp112;
  const Scalar _tmp117 =
      _tmp102 * _tmp116 + _tmp110 * (_tmp104 * _tmp108 - _tmp69 * _tmp99) - _tmp115 * _tmp69;
  const Scalar _tmp118 = _tmp106 * _tmp98;
  const Scalar _tmp119 = _tmp110 * _tmp112;
  const Scalar _tmp120 = _tmp119 + _tmp87;
  const Scalar _tmp121 = _tmp120 * _tmp98;
  const Scalar _tmp122 = _tmp104 * _tmp106;
  const Scalar _tmp123 = _tmp121 * _tmp36;
  const Scalar _tmp124 = _tmp93 * _tmp98;
  const Scalar _tmp125 = _tmp120 * _tmp93;
  const Scalar _tmp126 = _tmp104 * _tmp125 - _tmp117 * _tmp124 - _tmp121 * _tmp66;
  const Scalar _tmp127 = _tmp59 * _tmp67;
  const Scalar _tmp128 = _tmp24 + _tmp37;
  const Scalar _tmp129 = _TransformationMatrix[4] + _tmp128 - p_a(0, 0);
  const Scalar _tmp130 = _tmp39 + _tmp9;
  const Scalar _tmp131 = _TransformationMatrix[5] + _tmp130 - p_a(1, 0);
  const Scalar _tmp132 =
      std::pow(Scalar(std::pow(_tmp129, Scalar(2)) + std::pow(_tmp131, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp133 = _tmp131 * _tmp132;
  const Scalar _tmp134 = _tmp133 * fh1;
  const Scalar _tmp135 = _tmp134 * _tmp48;
  const Scalar _tmp136 = Scalar(1.0) * _tmp109;
  const Scalar _tmp137 = _tmp136 * _tmp36;
  const Scalar _tmp138 = _tmp113 * _tmp69;
  const Scalar _tmp139 = _tmp59 * _tmp94;
  const Scalar _tmp140 = Scalar(1.0) * _tmp139;
  const Scalar _tmp141 = Scalar(1.0) * _tmp106;
  const Scalar _tmp142 = _tmp59 * _tmp68;
  const Scalar _tmp143 = _tmp129 * _tmp132;
  const Scalar _tmp144 = fh1 * (_tmp128 * _tmp133 - _tmp130 * _tmp143);
  const Scalar _tmp145 = _tmp144 * _tmp48;
  const Scalar _tmp146 = _tmp61 * _tmp67;
  const Scalar _tmp147 = _tmp146 * _tmp82 + _tmp81;
  const Scalar _tmp148 = _tmp146 * _tmp77 - _tmp147 * _tmp96 - _tmp76;
  const Scalar _tmp149 = _tmp148 * _tmp98;
  const Scalar _tmp150 = -_tmp107 * _tmp149 + _tmp111 * _tmp61 - _tmp49;
  const Scalar _tmp151 = _tmp110 * _tmp150;
  const Scalar _tmp152 = _tmp148 + _tmp151;
  const Scalar _tmp153 = _tmp152 * _tmp98;
  const Scalar _tmp154 = _tmp153 * _tmp36;
  const Scalar _tmp155 = _tmp109 * _tmp150;
  const Scalar _tmp156 = _tmp107 * _tmp148;
  const Scalar _tmp157 = _tmp114 * _tmp150;
  const Scalar _tmp158 =
      _tmp102 * _tmp155 + _tmp110 * (_tmp104 * _tmp156 - _tmp149 * _tmp69) - _tmp157 * _tmp69;
  const Scalar _tmp159 = _tmp152 * _tmp93;
  const Scalar _tmp160 = _tmp104 * _tmp159 - _tmp124 * _tmp158 - _tmp153 * _tmp66;
  const Scalar _tmp161 = _tmp143 * fh1;
  const Scalar _tmp162 = _tmp161 * _tmp48;
  const Scalar _tmp163 = _tmp79 + _tmp83 * _tmp96;
  const Scalar _tmp164 = 0;
  const Scalar _tmp165 = _tmp164 * _tmp98;
  const Scalar _tmp166 = _tmp139 * _tmp164;
  const Scalar _tmp167 = _tmp165 * _tmp36;
  const Scalar _tmp168 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp169 = _tmp168 * _tmp48;
  const Scalar _tmp170 =
      -_tmp135 *
          (_tmp117 * _tmp118 - _tmp120 * _tmp122 + _tmp121 * _tmp65 - _tmp123 + _tmp126 * _tmp127) -
      _tmp145 * (-_tmp136 * _tmp142 + _tmp136 * _tmp65 - _tmp137 + _tmp138 * _tmp140 -
                 _tmp138 * _tmp141) -
      _tmp162 *
          (_tmp118 * _tmp158 - _tmp122 * _tmp152 + _tmp127 * _tmp160 + _tmp153 * _tmp65 - _tmp154) -
      _tmp169 *
          (_tmp104 * _tmp166 - _tmp122 * _tmp164 - _tmp142 * _tmp165 + _tmp165 * _tmp65 - _tmp167);
  const Scalar _tmp171 = -_tmp120 * _tmp124 + Scalar(1.0);
  const Scalar _tmp172 = -_tmp124 * _tmp152 - _tmp61;
  const Scalar _tmp173 = _tmp136 * _tmp59;
  const Scalar _tmp174 = -_tmp135 * (_tmp123 * _tmp33 + _tmp127 * _tmp171) -
                         _tmp145 * (_tmp137 * _tmp33 - _tmp173 * _tmp94) -
                         _tmp162 * (_tmp127 * _tmp172 + _tmp154 * _tmp33 + Scalar(1.0)) -
                         _tmp169 * (-_tmp124 * _tmp127 * _tmp164 + _tmp167 * _tmp33);
  const Scalar _tmp175 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp176 = Scalar(1.0) * _tmp175 * p_b(2, 0);
  const Scalar _tmp177 = Scalar(0.71007031138673404) * _tmp175;
  const Scalar _tmp178 = fh1 * (_tmp75 + _tmp88);
  const Scalar _tmp179 = -Scalar(40.024799999999999) * _tmp12 - _tmp130 * fv1 - _tmp133 * _tmp178;
  const Scalar _tmp180 = _tmp18 + _tmp84;
  const Scalar _tmp181 = _tmp180 * _tmp96;
  const Scalar _tmp182 = Scalar(1.0) / (-_tmp181 - _tmp31 + _tmp79);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = _tmp183 * _tmp96;
  const Scalar _tmp185 = _tmp181 * _tmp183 + Scalar(1.0);
  const Scalar _tmp186 = _tmp110 * _tmp183;
  const Scalar _tmp187 = _tmp180 * _tmp183;
  const Scalar _tmp188 = _tmp110 * _tmp187 - _tmp136 * _tmp95;
  const Scalar _tmp189 = Scalar(1.0) * _tmp144;
  const Scalar _tmp190 = _tmp95 * _tmp98;
  const Scalar _tmp191 = _tmp180 * _tmp182;
  const Scalar _tmp192 = _tmp147 + _tmp151 * _tmp191 - _tmp152 * _tmp190;
  const Scalar _tmp193 = _tmp119 * _tmp191 - _tmp120 * _tmp190 - _tmp78 * _tmp82;
  const Scalar _tmp194 = _tmp128 * fv1 + _tmp143 * _tmp178 + Scalar(40.024799999999999) * _tmp27;
  const Scalar _tmp195 = _tmp163 * _tmp182;
  const Scalar _tmp196 = -_tmp164 * _tmp190 - _tmp180 * _tmp195 + _tmp84;
  const Scalar _tmp197 = std::cosh(
      _tmp177 *
      (-Scalar(1.4083112389913199) * _tmp174 *
           std::asinh(_tmp175 * (Scalar(1.0) * _tmp134 * (_tmp119 * _tmp183 - _tmp193 * _tmp86) +
                                 Scalar(1.0) * _tmp161 * (_tmp151 * _tmp183 - _tmp192 * _tmp86) +
                                 Scalar(1.0) * _tmp168 *
                                     (-_tmp163 * _tmp183 - _tmp196 * _tmp86 + Scalar(1.0)) +
                                 Scalar(1.0) * _tmp179 * (_tmp184 - _tmp185 * _tmp86) +
                                 _tmp189 * (_tmp186 - _tmp188 * _tmp86) +
                                 Scalar(1.0) * _tmp194 * (-_tmp183 + _tmp187 * _tmp85))) -
       std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_b(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp43 + p_b(0, 0)), Scalar(2))))));
  const Scalar _tmp198 = Scalar(1.4083112389913199) * _tmp177 * p_b(2, 0);
  const Scalar _tmp199 = _tmp134 * _tmp67;
  const Scalar _tmp200 = _tmp165 * _tmp168;
  const Scalar _tmp201 = _tmp161 * _tmp67;
  const Scalar _tmp202 = _tmp138 * _tmp189;
  const Scalar _tmp203 = _tmp164 * _tmp168;
  const Scalar _tmp204 = _tmp104 * _tmp203;
  const Scalar _tmp205 = _tmp136 * _tmp144;
  const Scalar _tmp206 = _tmp126 * _tmp199 + _tmp160 * _tmp201 - _tmp200 * _tmp68 +
                         _tmp202 * _tmp94 + _tmp204 * _tmp94 - _tmp205 * _tmp68;
  const Scalar _tmp207 =
      -_tmp124 * _tmp203 * _tmp67 + _tmp171 * _tmp199 + _tmp172 * _tmp201 - _tmp205 * _tmp94;
  const Scalar _tmp208 = Scalar(1.0) / (_tmp207);
  const Scalar _tmp209 = Scalar(0.71007031138673404) * _tmp208;
  const Scalar _tmp210 = _tmp183 * _tmp194;
  const Scalar _tmp211 = std::cosh(
      _tmp209 *
      (-Scalar(1.4083112389913199) * _tmp207 *
           std::asinh(_tmp208 * (_tmp134 * _tmp193 * _tmp85 + _tmp144 * _tmp188 * _tmp85 +
                                 _tmp161 * _tmp192 * _tmp85 + _tmp168 * _tmp196 * _tmp85 +
                                 _tmp179 * _tmp185 * _tmp85 - _tmp180 * _tmp210 * _tmp85)) -
       std::sqrt(Scalar(std::pow(Scalar(-_tmp52 + p_c(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp55 + p_c(1, 0)), Scalar(2))))));
  const Scalar _tmp212 = Scalar(1.4083112389913199) * _tmp209 * p_c(2, 0);
  const Scalar _tmp213 = Scalar(1.0) * _tmp208 * p_c(2, 0);
  const Scalar _tmp214 = _tmp134 * _tmp98;
  const Scalar _tmp215 = _tmp120 * _tmp134;
  const Scalar _tmp216 = _tmp152 * _tmp161;
  const Scalar _tmp217 = -_tmp104 * _tmp215 - _tmp104 * _tmp216 + _tmp117 * _tmp214 +
                         _tmp158 * _tmp161 * _tmp98 - _tmp202 - _tmp204;
  const Scalar _tmp218 = _tmp121 * _tmp134 + _tmp153 * _tmp161 + _tmp200 + _tmp205;
  const Scalar _tmp219 = Scalar(1.0) / (_tmp218);
  const Scalar _tmp220 = Scalar(1.0) * _tmp219 * p_d(2, 0);
  const Scalar _tmp221 = Scalar(0.71007031138673404) * _tmp219;
  const Scalar _tmp222 = std::cosh(
      _tmp221 * (-Scalar(1.4083112389913199) * _tmp218 *
                     std::asinh(_tmp219 * (-_tmp119 * _tmp134 * _tmp182 - _tmp144 * _tmp186 -
                                           _tmp151 * _tmp161 * _tmp182 + _tmp168 * _tmp195 -
                                           _tmp179 * _tmp184 + _tmp210)) -
                 std::sqrt(Scalar(std::pow(Scalar(-_tmp19 + p_d(1, 0)), Scalar(2)) +
                                  std::pow(Scalar(-_tmp32 + p_d(0, 0)), Scalar(2))))));
  const Scalar _tmp223 = Scalar(1.4083112389913199) * _tmp221 * p_d(2, 0);
  const Scalar _tmp224 = _tmp21 * _tmp63;
  const Scalar _tmp225 = -_tmp224 + _tmp36 + _tmp61 * _tmp64;
  const Scalar _tmp226 =
      _tmp105 - _tmp111 * _tmp225 + _tmp18 * _tmp64 - _tmp224 * _tmp31 + _tmp49 * _tmp64;
  const Scalar _tmp227 = _tmp113 * _tmp226;
  const Scalar _tmp228 = _tmp225 * _tmp67;
  const Scalar _tmp229 = -_tmp101 - _tmp228 * _tmp77 + _tmp64 * _tmp76 -
                         _tmp96 * (_tmp224 * _tmp89 - _tmp228 * _tmp82 - _tmp64 * _tmp81 - _tmp90);
  const Scalar _tmp230 = _tmp103 * _tmp229;
  const Scalar _tmp231 = _tmp106 * _tmp230;
  const Scalar _tmp232 =
      _tmp110 * (-_tmp149 * _tmp226 + _tmp156 * _tmp230) + _tmp155 * _tmp229 - _tmp157 * _tmp226;
  const Scalar _tmp233 = -_tmp124 * _tmp232 - _tmp153 * _tmp225 + _tmp159 * _tmp230;
  const Scalar _tmp234 = _tmp232 * _tmp98;
  const Scalar _tmp235 =
      _tmp110 * (_tmp108 * _tmp230 - _tmp226 * _tmp99) - _tmp115 * _tmp226 + _tmp116 * _tmp229;
  const Scalar _tmp236 = -_tmp121 * _tmp225 - _tmp124 * _tmp235 + _tmp125 * _tmp230;
  const Scalar _tmp237 =
      -_tmp135 * (_tmp118 * _tmp235 - _tmp120 * _tmp231 + _tmp121 * _tmp64 + _tmp127 * _tmp236) -
      _tmp145 * (_tmp136 * _tmp64 + _tmp140 * _tmp227 - _tmp141 * _tmp227 - _tmp173 * _tmp228) -
      _tmp162 * (_tmp106 * _tmp234 + _tmp127 * _tmp233 - _tmp152 * _tmp231 + _tmp153 * _tmp64) -
      _tmp169 *
          (-_tmp164 * _tmp231 - _tmp165 * _tmp228 * _tmp59 + _tmp165 * _tmp64 + _tmp166 * _tmp230);
  const Scalar _tmp238 = _tmp203 * _tmp230;
  const Scalar _tmp239 = _tmp189 * _tmp227;
  const Scalar _tmp240 = _tmp199 * _tmp236 - _tmp200 * _tmp228 + _tmp201 * _tmp233 -
                         _tmp205 * _tmp228 + _tmp238 * _tmp94 + _tmp239 * _tmp94;
  const Scalar _tmp241 = _tmp161 * _tmp234 + _tmp214 * _tmp235 - _tmp215 * _tmp230 -
                         _tmp216 * _tmp230 - _tmp238 - _tmp239;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) = _tmp170 * _tmp176 - _tmp170 * _tmp198;
  _res(2, 0) = -_tmp206 * _tmp212 + _tmp206 * _tmp213;
  _res(3, 0) = _tmp217 * _tmp220 - _tmp217 * _tmp223;
  _res(0, 1) = 0;
  _res(1, 1) = _tmp176 * _tmp237 - _tmp198 * _tmp237;
  _res(2, 1) = -_tmp212 * _tmp240 + _tmp213 * _tmp240;
  _res(3, 1) = _tmp220 * _tmp241 - _tmp223 * _tmp241;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = Scalar(0.0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
