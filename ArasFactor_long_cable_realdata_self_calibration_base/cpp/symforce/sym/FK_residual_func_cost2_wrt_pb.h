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
 * Symbolic function: FK_residual_func_cost2_wrt_pb
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost2WrtPb(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 1206

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (387)
  const Scalar _tmp0 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp1 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp2 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp6 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp10 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp9 + Scalar(-0.010999999999999999);
  const Scalar _tmp12 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp6;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 - _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp8;
  const Scalar _tmp17 = _tmp3 * _tmp5;
  const Scalar _tmp18 = _tmp1 * _tmp6;
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp17 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = -_tmp19;
  const Scalar _tmp21 = _tmp4 - _tmp7;
  const Scalar _tmp22 = -Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp23 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp22 + _tmp24;
  const Scalar _tmp26 = _tmp20 + _tmp25;
  const Scalar _tmp27 = _TransformationMatrix[5] + _tmp26;
  const Scalar _tmp28 = _tmp27 - p_d(1, 0);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp17 - Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp30 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp31 = _tmp12 + _tmp13;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = -_tmp30 + _tmp32;
  const Scalar _tmp34 = _tmp29 + _tmp33;
  const Scalar _tmp35 = _TransformationMatrix[4] + _tmp34;
  const Scalar _tmp36 = _tmp35 - p_d(0, 0);
  const Scalar _tmp37 = std::pow(Scalar(std::pow(_tmp28, Scalar(2)) + std::pow(_tmp36, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp36 * _tmp37;
  const Scalar _tmp39 = -_tmp8;
  const Scalar _tmp40 = _tmp11 + _tmp14;
  const Scalar _tmp41 = _tmp39 + _tmp40;
  const Scalar _tmp42 = _tmp40 + _tmp8;
  const Scalar _tmp43 = _tmp30 + _tmp32;
  const Scalar _tmp44 = _tmp29 + _tmp43;
  const Scalar _tmp45 = _TransformationMatrix[4] + _tmp44;
  const Scalar _tmp46 = _tmp45 - p_c(0, 0);
  const Scalar _tmp47 = std::pow(_tmp46, Scalar(2));
  const Scalar _tmp48 = _tmp19 + _tmp25;
  const Scalar _tmp49 = _TransformationMatrix[5] + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_c(1, 0);
  const Scalar _tmp51 = _tmp47 + std::pow(_tmp50, Scalar(2));
  const Scalar _tmp52 = std::pow(_tmp51, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp46 * _tmp52;
  const Scalar _tmp54 = _tmp41 * _tmp53;
  const Scalar _tmp55 = -_tmp42 * _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp28 * _tmp37;
  const Scalar _tmp57 = _tmp22 - _tmp24;
  const Scalar _tmp58 = _tmp19 + _tmp57;
  const Scalar _tmp59 = _TransformationMatrix[5] + _tmp58;
  const Scalar _tmp60 = _tmp59 - p_b(1, 0);
  const Scalar _tmp61 = -_tmp29;
  const Scalar _tmp62 = _tmp43 + _tmp61;
  const Scalar _tmp63 = _TransformationMatrix[4] + _tmp62;
  const Scalar _tmp64 = _tmp63 - p_b(0, 0);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp60 * _tmp65;
  const Scalar _tmp67 = _tmp38 * _tmp66;
  const Scalar _tmp68 = -_tmp56 + _tmp67;
  const Scalar _tmp69 = _tmp50 * _tmp52;
  const Scalar _tmp70 = _tmp53 * _tmp66 - _tmp69;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp68 * _tmp71;
  const Scalar _tmp73 = _tmp41 * _tmp65;
  const Scalar _tmp74 = _tmp60 * _tmp73;
  const Scalar _tmp75 = _tmp42 * _tmp69 - _tmp53 * _tmp74;
  const Scalar _tmp76 = _tmp16 * _tmp56 - _tmp38 * _tmp74 - _tmp72 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp58;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp48 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp62;
  const Scalar _tmp81 = -_tmp44 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = -_tmp16 * _tmp38 + _tmp38 * _tmp41 - _tmp55 * _tmp72 - _tmp76 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp86 = 0;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp53 * _tmp72;
  const Scalar _tmp89 = _tmp38 * _tmp87;
  const Scalar _tmp90 = _tmp0 * (-_tmp87 * _tmp88 + _tmp89);
  const Scalar _tmp91 = std::pow(_tmp60, Scalar(2));
  const Scalar _tmp92 = std::pow(_tmp64, Scalar(2));
  const Scalar _tmp93 = _tmp91 + _tmp92;
  const Scalar _tmp94 = std::sqrt(_tmp93);
  const Scalar _tmp95 = _tmp65 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp62 * _tmp96;
  const Scalar _tmp98 = _tmp58 * _tmp96;
  const Scalar _tmp99 = _tmp60 * _tmp97 - _tmp64 * _tmp98;
  const Scalar _tmp100 = _tmp94 * _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp65;
  const Scalar _tmp102 = _tmp101 * _tmp53 - _tmp44 * _tmp69 + _tmp48 * _tmp53;
  const Scalar _tmp103 = _tmp101 * _tmp38 - _tmp102 * _tmp72 + _tmp26 * _tmp38 - _tmp34 * _tmp56;
  const Scalar _tmp104 = Scalar(1.0) * _tmp71;
  const Scalar _tmp105 = Scalar(1.0) * _tmp79;
  const Scalar _tmp106 = _tmp105 * _tmp81;
  const Scalar _tmp107 = _tmp106 * _tmp75;
  const Scalar _tmp108 = -_tmp104 * _tmp55 + _tmp107 * _tmp71;
  const Scalar _tmp109 = _tmp108 * _tmp84;
  const Scalar _tmp110 = -_tmp102 * _tmp104 - _tmp103 * _tmp109;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp112 = _tmp111 * _tmp83;
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp108 + _tmp113;
  const Scalar _tmp115 = _tmp68 * _tmp84;
  const Scalar _tmp116 = -_tmp114 * _tmp115 + Scalar(1.0);
  const Scalar _tmp117 = _tmp53 * _tmp71;
  const Scalar _tmp118 = _tmp114 * _tmp84;
  const Scalar _tmp119 = _tmp118 * _tmp38;
  const Scalar _tmp120 = _tmp33 + _tmp61;
  const Scalar _tmp121 = _TransformationMatrix[4] + _tmp120 - p_a(0, 0);
  const Scalar _tmp122 = _tmp20 + _tmp57;
  const Scalar _tmp123 = _TransformationMatrix[5] + _tmp122 - p_a(1, 0);
  const Scalar _tmp124 =
      std::pow(Scalar(std::pow(_tmp121, Scalar(2)) + std::pow(_tmp123, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp125 = _tmp123 * _tmp124;
  const Scalar _tmp126 = _tmp125 * fh1;
  const Scalar _tmp127 = _tmp126 * (_tmp116 * _tmp117 + _tmp119);
  const Scalar _tmp128 = _tmp66 * _tmp71;
  const Scalar _tmp129 = _tmp128 * _tmp75 + _tmp74;
  const Scalar _tmp130 = _tmp128 * _tmp55 - _tmp129 * _tmp82 - _tmp41;
  const Scalar _tmp131 = _tmp103 * _tmp84;
  const Scalar _tmp132 = -_tmp101 + _tmp102 * _tmp128 - _tmp130 * _tmp131;
  const Scalar _tmp133 = _tmp112 * _tmp132;
  const Scalar _tmp134 = _tmp130 + _tmp133;
  const Scalar _tmp135 = -_tmp115 * _tmp134 - _tmp66;
  const Scalar _tmp136 = _tmp134 * _tmp84;
  const Scalar _tmp137 = _tmp136 * _tmp38;
  const Scalar _tmp138 = _tmp121 * _tmp124;
  const Scalar _tmp139 = _tmp138 * fh1;
  const Scalar _tmp140 = _tmp139 * (_tmp117 * _tmp135 + _tmp137 + Scalar(1.0));
  const Scalar _tmp141 = Scalar(1.0) * _tmp111;
  const Scalar _tmp142 = fh1 * (_tmp120 * _tmp125 - _tmp122 * _tmp138);
  const Scalar _tmp143 = _tmp142 * (_tmp141 * _tmp38 - _tmp141 * _tmp88);
  const Scalar _tmp144 = -_tmp127 * _tmp95 - _tmp140 * _tmp95 - _tmp143 * _tmp95 - _tmp90 * _tmp95;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = fh1 * (_tmp15 + _tmp39);
  const Scalar _tmp147 = -_tmp122 * fv1 - _tmp125 * _tmp146 - Scalar(40.024799999999999) * _tmp21;
  const Scalar _tmp148 = _tmp26 + _tmp78;
  const Scalar _tmp149 = _tmp148 * _tmp82;
  const Scalar _tmp150 = Scalar(1.0) / (-_tmp149 - _tmp34 + _tmp80);
  const Scalar _tmp151 = Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp151 * _tmp82;
  const Scalar _tmp153 = _tmp149 * _tmp151 + Scalar(1.0);
  const Scalar _tmp154 = _tmp112 * _tmp151;
  const Scalar _tmp155 = -_tmp141 * _tmp76 + _tmp148 * _tmp154;
  const Scalar _tmp156 = Scalar(1.0) * _tmp142;
  const Scalar _tmp157 = _tmp76 * _tmp84;
  const Scalar _tmp158 = _tmp148 * _tmp150;
  const Scalar _tmp159 = _tmp129 + _tmp133 * _tmp158 - _tmp134 * _tmp157;
  const Scalar _tmp160 = Scalar(1.0) * _tmp139;
  const Scalar _tmp161 = -_tmp104 * _tmp75 + _tmp113 * _tmp158 - _tmp114 * _tmp157;
  const Scalar _tmp162 = Scalar(1.0) * _tmp126;
  const Scalar _tmp163 = _tmp148 * _tmp79;
  const Scalar _tmp164 = _tmp120 * fv1 + _tmp138 * _tmp146 + Scalar(40.024799999999999) * _tmp31;
  const Scalar _tmp165 = _tmp150 * _tmp85;
  const Scalar _tmp166 = -_tmp148 * _tmp165 - _tmp157 * _tmp86 + _tmp78;
  const Scalar _tmp167 =
      Scalar(1.0) * _tmp0 * (-_tmp105 * _tmp166 - _tmp151 * _tmp85 + Scalar(1.0)) +
      Scalar(1.0) * _tmp147 * (-_tmp105 * _tmp153 + _tmp152) +
      _tmp156 * (-_tmp105 * _tmp155 + _tmp154) +
      _tmp160 * (-_tmp105 * _tmp159 + _tmp133 * _tmp151) +
      _tmp162 * (-_tmp105 * _tmp161 + _tmp113 * _tmp151) +
      Scalar(1.0) * _tmp164 * (_tmp151 * _tmp163 - _tmp151);
  const Scalar _tmp168 = std::asinh(_tmp145 * _tmp167);
  const Scalar _tmp169 = Scalar(1.0) * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) * std::cosh(_tmp169);
  const Scalar _tmp171 = std::pow(_tmp144, Scalar(-2));
  const Scalar _tmp172 =
      std::pow(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp171 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp173 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp174 = _tmp173 * _tmp60;
  const Scalar _tmp175 = _tmp174 * _tmp41;
  const Scalar _tmp176 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp177 = _tmp176 * _tmp53;
  const Scalar _tmp178 = _tmp174 * _tmp177;
  const Scalar _tmp179 = _tmp178 * _tmp75;
  const Scalar _tmp180 = _tmp174 * _tmp71;
  const Scalar _tmp181 = _tmp180 * _tmp75;
  const Scalar _tmp182 = -_tmp175 * _tmp38 + _tmp175 * _tmp88 + _tmp179 * _tmp68 - _tmp181 * _tmp38;
  const Scalar _tmp183 = _tmp180 * _tmp55;
  const Scalar _tmp184 = _tmp178 * _tmp55;
  const Scalar _tmp185 = -_tmp182 * _tmp82 - _tmp183 * _tmp38 + _tmp184 * _tmp68;
  const Scalar _tmp186 = std::pow(_tmp83, Scalar(-2));
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = _tmp187 * _tmp76;
  const Scalar _tmp189 = -_tmp182 * _tmp87 + _tmp188 * _tmp86;
  const Scalar _tmp190 = _tmp0 * _tmp105;
  const Scalar _tmp191 = _tmp111 * _tmp151;
  const Scalar _tmp192 = _tmp185 * _tmp191;
  const Scalar _tmp193 = _tmp102 * _tmp180;
  const Scalar _tmp194 = std::pow(_tmp93, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp195 = _tmp194 * _tmp58;
  const Scalar _tmp196 = _tmp194 * _tmp62;
  const Scalar _tmp197 = _tmp60 * _tmp64;
  const Scalar _tmp198 = _tmp95 * (-_tmp195 * _tmp92 + _tmp196 * _tmp197 + _tmp98);
  const Scalar _tmp199 = _tmp96 * _tmp99;
  const Scalar _tmp200 = _tmp100 * _tmp173;
  const Scalar _tmp201 = _tmp198 * _tmp53 - _tmp199 * _tmp53 + _tmp200 * _tmp53;
  const Scalar _tmp202 = _tmp102 * _tmp178;
  const Scalar _tmp203 = -_tmp193 * _tmp38 + _tmp198 * _tmp38 - _tmp199 * _tmp38 +
                         _tmp200 * _tmp38 - _tmp201 * _tmp72 + _tmp202 * _tmp68;
  const Scalar _tmp204 = std::pow(_tmp103, Scalar(-2));
  const Scalar _tmp205 = _tmp203 * _tmp204;
  const Scalar _tmp206 = _tmp205 * _tmp83;
  const Scalar _tmp207 = _tmp151 * _tmp206;
  const Scalar _tmp208 = Scalar(1.0) * _tmp76;
  const Scalar _tmp209 =
      -_tmp141 * _tmp182 + _tmp148 * _tmp192 - _tmp148 * _tmp207 + _tmp205 * _tmp208;
  const Scalar _tmp210 = _tmp110 * _tmp206;
  const Scalar _tmp211 = _tmp103 * _tmp108;
  const Scalar _tmp212 = _tmp117 * _tmp175;
  const Scalar _tmp213 = -_tmp106 * _tmp212 - _tmp107 * _tmp178 + Scalar(1.0) * _tmp184;
  const Scalar _tmp214 = _tmp112 * (-_tmp104 * _tmp201 - _tmp109 * _tmp203 - _tmp131 * _tmp213 +
                                    _tmp187 * _tmp211 + Scalar(1.0) * _tmp202);
  const Scalar _tmp215 = _tmp110 * _tmp111;
  const Scalar _tmp216 = _tmp185 * _tmp215;
  const Scalar _tmp217 = -_tmp210 + _tmp213 + _tmp214 + _tmp216;
  const Scalar _tmp218 = _tmp104 * _tmp53;
  const Scalar _tmp219 = _tmp114 * _tmp188 - _tmp118 * _tmp182 - _tmp157 * _tmp217 -
                         _tmp158 * _tmp210 + _tmp158 * _tmp214 + _tmp158 * _tmp216 +
                         _tmp175 * _tmp218 + Scalar(1.0) * _tmp179;
  const Scalar _tmp220 = _tmp132 * _tmp206;
  const Scalar _tmp221 = _tmp130 * _tmp84;
  const Scalar _tmp222 = _tmp91 / [&]() {
    const Scalar base = _tmp64;
    return base * base * base;
  }();
  const Scalar _tmp223 = _tmp177 * _tmp222;
  const Scalar _tmp224 = _tmp175 + _tmp181 - _tmp222 * _tmp54 * _tmp71 - _tmp223 * _tmp75;
  const Scalar _tmp225 = _tmp183 - _tmp223 * _tmp55 - _tmp224 * _tmp82;
  const Scalar _tmp226 = _tmp103 * _tmp130;
  const Scalar _tmp227 =
      _tmp112 * (-_tmp102 * _tmp223 + _tmp128 * _tmp201 - _tmp131 * _tmp225 + _tmp187 * _tmp226 +
                 _tmp193 - _tmp198 + _tmp199 - _tmp200 - _tmp203 * _tmp221);
  const Scalar _tmp228 = _tmp111 * _tmp132;
  const Scalar _tmp229 = _tmp185 * _tmp228;
  const Scalar _tmp230 = -_tmp220 + _tmp225 + _tmp227 + _tmp229;
  const Scalar _tmp231 = _tmp134 * _tmp188 - _tmp136 * _tmp182 - _tmp157 * _tmp230 -
                         _tmp158 * _tmp220 + _tmp158 * _tmp227 + _tmp158 * _tmp229 + _tmp224;
  const Scalar _tmp232 = _tmp173 * _tmp94;
  const Scalar _tmp233 = _tmp143 * _tmp96;
  const Scalar _tmp234 = _tmp111 * _tmp38;
  const Scalar _tmp235 = _tmp174 * _tmp234;
  const Scalar _tmp236 = _tmp47 / _tmp51;
  const Scalar _tmp237 = _tmp174 * _tmp176;
  const Scalar _tmp238 = _tmp236 * _tmp237;
  const Scalar _tmp239 = _tmp141 * _tmp68;
  const Scalar _tmp240 = Scalar(1.0) * _tmp88;
  const Scalar _tmp241 = Scalar(1.0) * _tmp38;
  const Scalar _tmp242 = _tmp142 * _tmp95;
  const Scalar _tmp243 = _tmp38 * _tmp84;
  const Scalar _tmp244 = _tmp134 * _tmp68;
  const Scalar _tmp245 = -_tmp115 * _tmp230 - _tmp137 * _tmp174 - _tmp174 + _tmp187 * _tmp244;
  const Scalar _tmp246 = _tmp135 * _tmp236;
  const Scalar _tmp247 = _tmp187 * _tmp38;
  const Scalar _tmp248 = _tmp139 * _tmp95;
  const Scalar _tmp249 = _tmp140 * _tmp96;
  const Scalar _tmp250 = _tmp114 * _tmp68;
  const Scalar _tmp251 = -_tmp115 * _tmp217 - _tmp119 * _tmp174 + _tmp187 * _tmp250;
  const Scalar _tmp252 = _tmp126 * _tmp95;
  const Scalar _tmp253 = _tmp90 * _tmp96;
  const Scalar _tmp254 = _tmp115 * _tmp86;
  const Scalar _tmp255 = _tmp86 * _tmp88;
  const Scalar _tmp256 = _tmp0 * _tmp95;
  const Scalar _tmp257 = _tmp127 * _tmp96;
  const Scalar _tmp258 =
      -_tmp127 * _tmp232 - _tmp140 * _tmp232 - _tmp143 * _tmp232 - _tmp232 * _tmp90 + _tmp233 -
      _tmp242 * (_tmp205 * _tmp240 - _tmp205 * _tmp241 - _tmp218 * _tmp235 + _tmp238 * _tmp239) -
      _tmp248 * (_tmp117 * _tmp245 - _tmp134 * _tmp247 + _tmp230 * _tmp243 - _tmp237 * _tmp246) +
      _tmp249 -
      _tmp252 * (-_tmp114 * _tmp247 - _tmp116 * _tmp238 + _tmp117 * _tmp251 + _tmp217 * _tmp243) +
      _tmp253 -
      _tmp256 *
          (-_tmp117 * _tmp174 * _tmp89 + _tmp187 * _tmp255 + _tmp238 * _tmp254 - _tmp247 * _tmp86) +
      _tmp257;
  const Scalar _tmp259 = _tmp167 * _tmp171;
  const Scalar _tmp260 = _tmp172 * (_tmp145 * (_tmp156 * (-_tmp105 * _tmp209 + _tmp192 - _tmp207) +
                                               _tmp160 * (-_tmp105 * _tmp231 - _tmp151 * _tmp220 +
                                                          _tmp151 * _tmp227 + _tmp151 * _tmp229) +
                                               _tmp162 * (-_tmp105 * _tmp219 - _tmp151 * _tmp210 +
                                                          _tmp151 * _tmp214 + _tmp151 * _tmp216) -
                                               _tmp189 * _tmp190) -
                                    _tmp258 * _tmp259);
  const Scalar _tmp261 = -_tmp63 + p_b(0, 0);
  const Scalar _tmp262 = -_tmp59 + p_b(1, 0);
  const Scalar _tmp263 = std::pow(_tmp261, Scalar(2)) + std::pow(_tmp262, Scalar(2));
  const Scalar _tmp264 = std::sqrt(_tmp263);
  const Scalar _tmp265 = Scalar(1.4083112389913199) * _tmp144;
  const Scalar _tmp266 = -_tmp168 * _tmp265 - _tmp264;
  const Scalar _tmp267 = Scalar(0.71007031138673404) * _tmp145;
  const Scalar _tmp268 = _tmp266 * _tmp267;
  const Scalar _tmp269 = std::cosh(_tmp268);
  const Scalar _tmp270 = Scalar(1.0) / (_tmp264);
  const Scalar _tmp271 = Scalar(1.4083112389913199) * _tmp168;
  const Scalar _tmp272 = Scalar(0.71007031138673404) * _tmp171 * _tmp266;
  const Scalar _tmp273 = -Scalar(1.4083112389913199) * std::sinh(_tmp169) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp268);
  const Scalar _tmp274 = -_TransformationMatrix[6] - _tmp41 + p_b(2, 0);
  const Scalar _tmp275 =
      std::pow(Scalar(_tmp263 + std::pow(_tmp274, Scalar(2))), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp276 = _tmp0 * _tmp86;
  const Scalar _tmp277 = _tmp115 * _tmp276;
  const Scalar _tmp278 = _tmp141 * _tmp142;
  const Scalar _tmp279 = _tmp126 * _tmp71;
  const Scalar _tmp280 = _tmp0 * _tmp87;
  const Scalar _tmp281 = _tmp280 * _tmp38;
  const Scalar _tmp282 = _tmp139 * _tmp71;
  const Scalar _tmp283 = _tmp104 * _tmp142;
  const Scalar _tmp284 = _tmp156 * _tmp205;
  const Scalar _tmp285 = _tmp187 * _tmp276;
  const Scalar _tmp286 = _tmp135 * _tmp139;
  const Scalar _tmp287 = -_tmp116 * _tmp126 * _tmp178 + _tmp178 * _tmp277 +
                         _tmp178 * _tmp278 * _tmp68 - _tmp178 * _tmp286 - _tmp180 * _tmp281 -
                         _tmp235 * _tmp283 + _tmp245 * _tmp282 + _tmp251 * _tmp279 +
                         _tmp284 * _tmp72 + _tmp285 * _tmp72;
  const Scalar _tmp288 = _tmp142 * _tmp79;
  const Scalar _tmp289 = _tmp0 * _tmp79;
  const Scalar _tmp290 = _tmp139 * _tmp79;
  const Scalar _tmp291 = _tmp151 * _tmp164;
  const Scalar _tmp292 = _tmp126 * _tmp79;
  const Scalar _tmp293 = _tmp147 * _tmp153 * _tmp79 + _tmp155 * _tmp288 + _tmp159 * _tmp290 +
                         _tmp161 * _tmp292 - _tmp163 * _tmp291 + _tmp166 * _tmp289;
  const Scalar _tmp294 =
      _tmp116 * _tmp279 + _tmp135 * _tmp282 - _tmp278 * _tmp72 - _tmp280 * _tmp72;
  const Scalar _tmp295 = Scalar(1.0) / (_tmp294);
  const Scalar _tmp296 = std::asinh(_tmp293 * _tmp295);
  const Scalar _tmp297 = Scalar(1.0) * _tmp296;
  const Scalar _tmp298 = Scalar(1.4083112389913199) * _tmp296;
  const Scalar _tmp299 =
      -_tmp294 * _tmp298 - std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp49 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp300 = Scalar(0.71007031138673404) * _tmp295;
  const Scalar _tmp301 = _tmp299 * _tmp300;
  const Scalar _tmp302 = -Scalar(1.4083112389913199) * std::sinh(_tmp297) -
                         Scalar(1.4083112389913199) * std::sinh(_tmp301);
  const Scalar _tmp303 = std::pow(_tmp294, Scalar(-2));
  const Scalar _tmp304 = Scalar(0.71007031138673404) * _tmp299 * _tmp303;
  const Scalar _tmp305 = Scalar(1.4083112389913199) * _tmp294;
  const Scalar _tmp306 =
      std::pow(Scalar(std::pow(_tmp293, Scalar(2)) * _tmp303 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp307 = _tmp293 * _tmp303;
  const Scalar _tmp308 =
      _tmp306 * (-_tmp287 * _tmp307 + _tmp295 * (_tmp189 * _tmp289 + _tmp209 * _tmp288 +
                                                 _tmp219 * _tmp292 + _tmp231 * _tmp290));
  const Scalar _tmp309 = std::cosh(_tmp301);
  const Scalar _tmp310 = Scalar(1.0) * std::cosh(_tmp297);
  const Scalar _tmp311 = _tmp126 * _tmp150;
  const Scalar _tmp312 = _tmp139 * _tmp150;
  const Scalar _tmp313 = _tmp0 * _tmp165 - _tmp113 * _tmp311 - _tmp133 * _tmp312 -
                         _tmp142 * _tmp154 - _tmp147 * _tmp152 + _tmp291;
  const Scalar _tmp314 = _tmp118 * _tmp126 + _tmp136 * _tmp139 + _tmp278 + _tmp280;
  const Scalar _tmp315 = Scalar(1.0) / (_tmp314);
  const Scalar _tmp316 = std::asinh(_tmp313 * _tmp315);
  const Scalar _tmp317 = Scalar(1.0) * _tmp316;
  const Scalar _tmp318 = Scalar(1.4083112389913199) * _tmp314;
  const Scalar _tmp319 =
      -_tmp316 * _tmp318 - std::sqrt(Scalar(std::pow(Scalar(-_tmp27 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp35 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp320 = Scalar(0.71007031138673404) * _tmp315;
  const Scalar _tmp321 = _tmp319 * _tmp320;
  const Scalar _tmp322 = -std::sinh(_tmp317) - std::sinh(_tmp321);
  const Scalar _tmp323 = _tmp114 * _tmp126;
  const Scalar _tmp324 = _tmp134 * _tmp139;
  const Scalar _tmp325 = _tmp139 * _tmp84;
  const Scalar _tmp326 = _tmp126 * _tmp84;
  const Scalar _tmp327 = -_tmp187 * _tmp323 - _tmp187 * _tmp324 + _tmp217 * _tmp326 +
                         _tmp230 * _tmp325 - _tmp284 - _tmp285;
  const Scalar _tmp328 = Scalar(1.4083112389913199) * _tmp327;
  const Scalar _tmp329 = std::pow(_tmp314, Scalar(-2));
  const Scalar _tmp330 =
      std::pow(Scalar(std::pow(_tmp313, Scalar(2)) * _tmp329 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp331 = _tmp313 * _tmp329;
  const Scalar _tmp332 =
      _tmp330 *
      (_tmp315 * (-_tmp142 * _tmp192 + _tmp142 * _tmp207 + _tmp210 * _tmp311 - _tmp214 * _tmp311 -
                  _tmp216 * _tmp311 + _tmp220 * _tmp312 - _tmp227 * _tmp312 - _tmp229 * _tmp312) -
       _tmp327 * _tmp331);
  const Scalar _tmp333 = Scalar(1.0) * std::cosh(_tmp317);
  const Scalar _tmp334 = Scalar(0.71007031138673404) * _tmp319 * _tmp329;
  const Scalar _tmp335 = std::cosh(_tmp321);
  const Scalar _tmp336 = _tmp176 * _tmp65;
  const Scalar _tmp337 = _tmp336 * _tmp53;
  const Scalar _tmp338 = _tmp337 * _tmp55;
  const Scalar _tmp339 = _tmp65 * _tmp71;
  const Scalar _tmp340 = _tmp339 * _tmp55;
  const Scalar _tmp341 = _tmp337 * _tmp68;
  const Scalar _tmp342 = _tmp339 * _tmp75;
  const Scalar _tmp343 = -_tmp341 * _tmp75 + _tmp342 * _tmp38 + _tmp38 * _tmp73 - _tmp73 * _tmp88;
  const Scalar _tmp344 = -_tmp338 * _tmp68 + _tmp340 * _tmp38 - _tmp343 * _tmp82;
  const Scalar _tmp345 = _tmp186 * _tmp344;
  const Scalar _tmp346 = _tmp345 * _tmp38;
  const Scalar _tmp347 = _tmp228 * _tmp344;
  const Scalar _tmp348 = _tmp95 * (-_tmp195 * _tmp197 + _tmp196 * _tmp91 - _tmp97);
  const Scalar _tmp349 = _tmp199 * _tmp66;
  const Scalar _tmp350 = _tmp348 * _tmp53 - _tmp349 * _tmp53;
  const Scalar _tmp351 = _tmp102 * _tmp339;
  const Scalar _tmp352 = -_tmp102 * _tmp341 - _tmp199 * _tmp67 + _tmp348 * _tmp38 -
                         _tmp350 * _tmp72 + _tmp351 * _tmp38;
  const Scalar _tmp353 = _tmp204 * _tmp352;
  const Scalar _tmp354 = _tmp353 * _tmp83;
  const Scalar _tmp355 = _tmp132 * _tmp354;
  const Scalar _tmp356 = _tmp179 + _tmp212 - _tmp342 - _tmp73;
  const Scalar _tmp357 = _tmp184 - _tmp340 - _tmp356 * _tmp82;
  const Scalar _tmp358 =
      _tmp112 * (_tmp128 * _tmp350 - _tmp131 * _tmp357 + _tmp202 - _tmp221 * _tmp352 +
                 _tmp226 * _tmp345 - _tmp348 + _tmp349 - _tmp351);
  const Scalar _tmp359 = _tmp347 - _tmp355 + _tmp357 + _tmp358;
  const Scalar _tmp360 = -_tmp115 * _tmp359 + _tmp137 * _tmp65 + _tmp244 * _tmp345 + _tmp65;
  const Scalar _tmp361 = _tmp236 * _tmp336;
  const Scalar _tmp362 = _tmp106 * _tmp117 * _tmp73 + _tmp107 * _tmp337 - Scalar(1.0) * _tmp338;
  const Scalar _tmp363 = Scalar(1.0) * _tmp337;
  const Scalar _tmp364 = _tmp112 * (-_tmp102 * _tmp363 - _tmp104 * _tmp350 - _tmp109 * _tmp352 -
                                    _tmp131 * _tmp362 + _tmp211 * _tmp345);
  const Scalar _tmp365 = _tmp110 * _tmp354;
  const Scalar _tmp366 = _tmp215 * _tmp344;
  const Scalar _tmp367 = _tmp362 + _tmp364 - _tmp365 + _tmp366;
  const Scalar _tmp368 = -_tmp115 * _tmp367 + _tmp119 * _tmp65 + _tmp250 * _tmp345;
  const Scalar _tmp369 = _tmp116 * _tmp336;
  const Scalar _tmp370 = _tmp234 * _tmp65;
  const Scalar _tmp371 =
      _tmp233 * _tmp66 -
      _tmp242 * (_tmp218 * _tmp370 - _tmp239 * _tmp361 + _tmp240 * _tmp353 - _tmp241 * _tmp353) -
      _tmp248 * (_tmp117 * _tmp360 - _tmp134 * _tmp346 + _tmp243 * _tmp359 + _tmp246 * _tmp336) +
      _tmp249 * _tmp66 -
      _tmp252 * (-_tmp114 * _tmp346 + _tmp117 * _tmp368 + _tmp236 * _tmp369 + _tmp243 * _tmp367) +
      _tmp253 * _tmp66 -
      _tmp256 *
          (-_tmp254 * _tmp361 + _tmp255 * _tmp345 + _tmp339 * _tmp53 * _tmp89 - _tmp346 * _tmp86) +
      _tmp257 * _tmp66;
  const Scalar _tmp372 = _tmp345 * _tmp76;
  const Scalar _tmp373 = _tmp114 * _tmp372 - _tmp118 * _tmp343 - _tmp157 * _tmp367 +
                         _tmp158 * _tmp364 - _tmp158 * _tmp365 + _tmp158 * _tmp366 -
                         _tmp218 * _tmp73 - _tmp363 * _tmp75;
  const Scalar _tmp374 = -_tmp343 * _tmp87 + _tmp372 * _tmp86;
  const Scalar _tmp375 = _tmp134 * _tmp372 - _tmp136 * _tmp343 - _tmp157 * _tmp359 +
                         _tmp158 * _tmp347 - _tmp158 * _tmp355 + _tmp158 * _tmp358 + _tmp356;
  const Scalar _tmp376 = _tmp191 * _tmp344;
  const Scalar _tmp377 = _tmp151 * _tmp354;
  const Scalar _tmp378 =
      -_tmp141 * _tmp343 + _tmp148 * _tmp376 - _tmp148 * _tmp377 + _tmp208 * _tmp353;
  const Scalar _tmp379 = _tmp172 * (_tmp145 * (_tmp156 * (-_tmp105 * _tmp378 + _tmp376 - _tmp377) +
                                               _tmp160 * (-_tmp105 * _tmp375 + _tmp151 * _tmp347 -
                                                          _tmp151 * _tmp355 + _tmp151 * _tmp358) +
                                               _tmp162 * (-_tmp105 * _tmp373 + _tmp151 * _tmp364 -
                                                          _tmp151 * _tmp365 + _tmp151 * _tmp366) -
                                               _tmp190 * _tmp374) -
                                    _tmp259 * _tmp371);
  const Scalar _tmp380 = _tmp276 * _tmp345;
  const Scalar _tmp381 = _tmp156 * _tmp353;
  const Scalar _tmp382 = _tmp126 * _tmp369 * _tmp53 - _tmp277 * _tmp337 - _tmp278 * _tmp341 +
                         _tmp279 * _tmp368 + _tmp281 * _tmp339 + _tmp282 * _tmp360 +
                         _tmp283 * _tmp370 + _tmp286 * _tmp337 + _tmp380 * _tmp72 +
                         _tmp381 * _tmp72;
  const Scalar _tmp383 =
      _tmp306 *
      (_tmp295 * (_tmp288 * _tmp378 + _tmp289 * _tmp374 + _tmp290 * _tmp375 + _tmp292 * _tmp373) -
       _tmp307 * _tmp382);
  const Scalar _tmp384 = -_tmp323 * _tmp345 - _tmp324 * _tmp345 + _tmp325 * _tmp359 +
                         _tmp326 * _tmp367 - _tmp380 - _tmp381;
  const Scalar _tmp385 = Scalar(1.4083112389913199) * _tmp384;
  const Scalar _tmp386 =
      _tmp330 *
      (_tmp315 * (-_tmp142 * _tmp376 + _tmp142 * _tmp377 - _tmp311 * _tmp364 + _tmp311 * _tmp365 -
                  _tmp311 * _tmp366 - _tmp312 * _tmp347 + _tmp312 * _tmp355 - _tmp312 * _tmp358) -
       _tmp331 * _tmp384);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp258 * _tmp273 - _tmp261 * _tmp275 +
      _tmp265 * (-_tmp170 * _tmp260 -
                 _tmp269 * (-_tmp258 * _tmp272 + _tmp267 * (-_tmp258 * _tmp271 - _tmp260 * _tmp265 -
                                                            _tmp261 * _tmp270)));
  _res(2, 0) =
      _tmp287 * _tmp302 +
      _tmp305 *
          (-_tmp308 * _tmp310 -
           _tmp309 * (-_tmp287 * _tmp304 + _tmp300 * (-_tmp287 * _tmp298 - _tmp305 * _tmp308)));
  _res(3, 0) =
      _tmp318 *
          (-_tmp332 * _tmp333 -
           _tmp335 * (_tmp320 * (-_tmp316 * _tmp328 - _tmp318 * _tmp332) - _tmp327 * _tmp334)) +
      _tmp322 * _tmp328;
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp262 * _tmp275 +
      _tmp265 * (-_tmp170 * _tmp379 -
                 _tmp269 * (_tmp267 * (-_tmp262 * _tmp270 - _tmp265 * _tmp379 - _tmp271 * _tmp371) -
                            _tmp272 * _tmp371)) +
      _tmp273 * _tmp371;
  _res(2, 1) =
      _tmp302 * _tmp382 +
      _tmp305 *
          (-_tmp309 * (_tmp300 * (-_tmp298 * _tmp382 - _tmp305 * _tmp383) - _tmp304 * _tmp382) -
           _tmp310 * _tmp383);
  _res(3, 1) =
      _tmp318 *
          (-_tmp333 * _tmp386 -
           _tmp335 * (_tmp320 * (-_tmp316 * _tmp385 - _tmp318 * _tmp386) - _tmp334 * _tmp384)) +
      _tmp322 * _tmp385;
  _res(0, 2) = 0;
  _res(1, 2) = -_tmp274 * _tmp275;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
