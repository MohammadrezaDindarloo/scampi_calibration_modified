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
 * Symbolic function: FK_residual_func_cost4_wrt_pb
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     ofset0: Scalar
 *     ofset1: Scalar
 *     ofset2: Scalar
 *     ofset3: Scalar
 *     distance_measure: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     DeltaRot: Rot3
 *     TransformationMatrix: Pose3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix43
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost4WrtPb(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 1200

  // Unused inputs
  (void)ofset0;
  (void)ofset1;
  (void)ofset2;
  (void)ofset3;
  (void)distance_measure;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (386)
  const Scalar _tmp0 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp2 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp6 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp11 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp10 -
                        Scalar(0.010999999999999999) * _tmp11 + Scalar(-0.010999999999999999);
  const Scalar _tmp13 = _tmp3 * _tmp5;
  const Scalar _tmp14 = _tmp1 * _tmp6;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp12 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp9;
  const Scalar _tmp18 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp20 = _tmp13 - _tmp14;
  const Scalar _tmp21 = -Scalar(0.010999999999999999) * _tmp20;
  const Scalar _tmp22 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp23 = _tmp2 * _tmp6;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp25 = _tmp21 - _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _TransformationMatrix[5] + _tmp26;
  const Scalar _tmp28 = _tmp27 - p_d(1, 0);
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp18;
  const Scalar _tmp30 = -_tmp29;
  const Scalar _tmp31 = _tmp4 + _tmp7;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp31;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp30 + _tmp34;
  const Scalar _tmp36 = _TransformationMatrix[4] + _tmp35;
  const Scalar _tmp37 = _tmp36 - p_d(0, 0);
  const Scalar _tmp38 = std::pow(Scalar(std::pow(_tmp28, Scalar(2)) + std::pow(_tmp37, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp37 * _tmp38;
  const Scalar _tmp40 = _tmp12 - _tmp15;
  const Scalar _tmp41 = _tmp40 + _tmp8;
  const Scalar _tmp42 = _tmp16 + _tmp8;
  const Scalar _tmp43 = _tmp29 + _tmp34;
  const Scalar _tmp44 = _TransformationMatrix[4] + _tmp43;
  const Scalar _tmp45 = _tmp44 - p_c(0, 0);
  const Scalar _tmp46 = std::pow(_tmp45, Scalar(2));
  const Scalar _tmp47 = _tmp21 + _tmp24;
  const Scalar _tmp48 = _tmp19 + _tmp47;
  const Scalar _tmp49 = _TransformationMatrix[5] + _tmp48;
  const Scalar _tmp50 = _tmp49 - p_c(1, 0);
  const Scalar _tmp51 = _tmp46 + std::pow(_tmp50, Scalar(2));
  const Scalar _tmp52 = std::pow(_tmp51, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp53 = _tmp45 * _tmp52;
  const Scalar _tmp54 = _tmp41 * _tmp53;
  const Scalar _tmp55 = -_tmp42 * _tmp53 + _tmp54;
  const Scalar _tmp56 = _tmp28 * _tmp38;
  const Scalar _tmp57 = -_tmp19;
  const Scalar _tmp58 = _tmp47 + _tmp57;
  const Scalar _tmp59 = _TransformationMatrix[5] + _tmp58;
  const Scalar _tmp60 = _tmp59 - p_b(1, 0);
  const Scalar _tmp61 = _tmp32 - _tmp33;
  const Scalar _tmp62 = _tmp29 + _tmp61;
  const Scalar _tmp63 = _TransformationMatrix[4] + _tmp62;
  const Scalar _tmp64 = _tmp63 - p_b(0, 0);
  const Scalar _tmp65 = Scalar(1.0) / (_tmp64);
  const Scalar _tmp66 = _tmp60 * _tmp65;
  const Scalar _tmp67 = _tmp39 * _tmp66 - _tmp56;
  const Scalar _tmp68 = _tmp53 * _tmp66;
  const Scalar _tmp69 = _tmp50 * _tmp52;
  const Scalar _tmp70 = _tmp68 - _tmp69;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = _tmp67 * _tmp71;
  const Scalar _tmp73 = _tmp41 * _tmp65;
  const Scalar _tmp74 = _tmp60 * _tmp73;
  const Scalar _tmp75 = _tmp42 * _tmp69 - _tmp53 * _tmp74;
  const Scalar _tmp76 = _tmp17 * _tmp56 - _tmp39 * _tmp74 - _tmp72 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp58;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp48 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp62;
  const Scalar _tmp81 = -_tmp43 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = -_tmp17 * _tmp39 + _tmp39 * _tmp41 - _tmp55 * _tmp72 - _tmp76 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp86 = 0;
  const Scalar _tmp87 = _tmp84 * _tmp86;
  const Scalar _tmp88 = _tmp53 * _tmp72;
  const Scalar _tmp89 = _tmp39 * _tmp87;
  const Scalar _tmp90 = _tmp0 * (-_tmp87 * _tmp88 + _tmp89);
  const Scalar _tmp91 = std::pow(_tmp60, Scalar(2));
  const Scalar _tmp92 = std::pow(_tmp64, Scalar(2));
  const Scalar _tmp93 = _tmp91 + _tmp92;
  const Scalar _tmp94 = std::sqrt(_tmp93);
  const Scalar _tmp95 = _tmp65 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp71;
  const Scalar _tmp97 = _tmp71 * _tmp75;
  const Scalar _tmp98 = Scalar(1.0) * _tmp79;
  const Scalar _tmp99 = _tmp81 * _tmp98;
  const Scalar _tmp100 = -_tmp55 * _tmp96 + _tmp97 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp102 = _tmp101 * _tmp62;
  const Scalar _tmp103 = _tmp101 * _tmp58;
  const Scalar _tmp104 = _tmp102 * _tmp60 - _tmp103 * _tmp64;
  const Scalar _tmp105 = _tmp104 * _tmp94;
  const Scalar _tmp106 = _tmp105 * _tmp65;
  const Scalar _tmp107 = _tmp106 * _tmp53 - _tmp43 * _tmp69 + _tmp48 * _tmp53;
  const Scalar _tmp108 = _tmp106 * _tmp39 - _tmp107 * _tmp72 + _tmp26 * _tmp39 - _tmp35 * _tmp56;
  const Scalar _tmp109 = _tmp108 * _tmp84;
  const Scalar _tmp110 = -_tmp100 * _tmp109 - _tmp107 * _tmp96;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp112 = _tmp111 * _tmp83;
  const Scalar _tmp113 = _tmp110 * _tmp112;
  const Scalar _tmp114 = _tmp100 + _tmp113;
  const Scalar _tmp115 = _tmp114 * _tmp84;
  const Scalar _tmp116 = -_tmp115 * _tmp67 + Scalar(1.0);
  const Scalar _tmp117 = _tmp53 * _tmp71;
  const Scalar _tmp118 = _tmp115 * _tmp39;
  const Scalar _tmp119 = _tmp30 + _tmp61;
  const Scalar _tmp120 = _TransformationMatrix[4] + _tmp119 - p_a(0, 0);
  const Scalar _tmp121 = _tmp25 + _tmp57;
  const Scalar _tmp122 = _TransformationMatrix[5] + _tmp121 - p_a(1, 0);
  const Scalar _tmp123 =
      std::pow(Scalar(std::pow(_tmp120, Scalar(2)) + std::pow(_tmp122, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp124 = _tmp122 * _tmp123;
  const Scalar _tmp125 = _tmp124 * fh1;
  const Scalar _tmp126 = _tmp125 * (_tmp116 * _tmp117 + _tmp118);
  const Scalar _tmp127 = _tmp107 * _tmp71;
  const Scalar _tmp128 = _tmp66 * _tmp97 + _tmp74;
  const Scalar _tmp129 = _tmp66 * _tmp71;
  const Scalar _tmp130 = -_tmp128 * _tmp82 + _tmp129 * _tmp55 - _tmp41;
  const Scalar _tmp131 = -_tmp106 - _tmp109 * _tmp130 + _tmp127 * _tmp66;
  const Scalar _tmp132 = _tmp112 * _tmp131;
  const Scalar _tmp133 = _tmp130 + _tmp132;
  const Scalar _tmp134 = _tmp133 * _tmp84;
  const Scalar _tmp135 = -_tmp134 * _tmp67 - _tmp66;
  const Scalar _tmp136 = _tmp134 * _tmp39;
  const Scalar _tmp137 = _tmp120 * _tmp123;
  const Scalar _tmp138 = _tmp137 * fh1;
  const Scalar _tmp139 = _tmp138 * (_tmp117 * _tmp135 + _tmp136 + Scalar(1.0));
  const Scalar _tmp140 = Scalar(1.0) * _tmp111;
  const Scalar _tmp141 = _tmp140 * _tmp39;
  const Scalar _tmp142 = fh1 * (_tmp119 * _tmp124 - _tmp121 * _tmp137);
  const Scalar _tmp143 = _tmp142 * (-_tmp140 * _tmp88 + _tmp141);
  const Scalar _tmp144 = -_tmp126 * _tmp95 - _tmp139 * _tmp95 - _tmp143 * _tmp95 - _tmp90 * _tmp95;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = _tmp26 + _tmp78;
  const Scalar _tmp147 = _tmp146 * _tmp82;
  const Scalar _tmp148 = Scalar(1.0) / (-_tmp147 - _tmp35 + _tmp80);
  const Scalar _tmp149 = Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp112 * _tmp149;
  const Scalar _tmp151 = -_tmp140 * _tmp76 + _tmp146 * _tmp150;
  const Scalar _tmp152 = Scalar(1.0) * _tmp142;
  const Scalar _tmp153 = _tmp76 * _tmp84;
  const Scalar _tmp154 = _tmp146 * _tmp148;
  const Scalar _tmp155 = _tmp128 + _tmp132 * _tmp154 - _tmp133 * _tmp153;
  const Scalar _tmp156 = Scalar(1.0) * _tmp138;
  const Scalar _tmp157 = fh1 * (_tmp40 + _tmp9);
  const Scalar _tmp158 = -_tmp121 * fv1 - _tmp124 * _tmp157 - Scalar(5.1796800000000003) * _tmp20;
  const Scalar _tmp159 = _tmp149 * _tmp82;
  const Scalar _tmp160 = _tmp147 * _tmp149 + Scalar(1.0);
  const Scalar _tmp161 = _tmp113 * _tmp154 - _tmp115 * _tmp76 - Scalar(1.0) * _tmp97;
  const Scalar _tmp162 = Scalar(1.0) * _tmp125;
  const Scalar _tmp163 = _tmp148 * _tmp85;
  const Scalar _tmp164 = -_tmp146 * _tmp163 - _tmp76 * _tmp87 + _tmp78;
  const Scalar _tmp165 = _tmp146 * _tmp79;
  const Scalar _tmp166 = _tmp119 * fv1 + _tmp137 * _tmp157 + Scalar(5.1796800000000003) * _tmp31;
  const Scalar _tmp167 =
      Scalar(1.0) * _tmp0 * (-_tmp149 * _tmp85 - _tmp164 * _tmp98 + Scalar(1.0)) +
      _tmp152 * (_tmp150 - _tmp151 * _tmp98) + _tmp156 * (_tmp132 * _tmp149 - _tmp155 * _tmp98) +
      Scalar(1.0) * _tmp158 * (_tmp159 - _tmp160 * _tmp98) +
      _tmp162 * (_tmp113 * _tmp149 - _tmp161 * _tmp98) +
      Scalar(1.0) * _tmp166 * (_tmp149 * _tmp165 - _tmp149);
  const Scalar _tmp168 = std::asinh(_tmp145 * _tmp167);
  const Scalar _tmp169 = Scalar(1.0) * _tmp168;
  const Scalar _tmp170 = Scalar(1.0) * std::cosh(_tmp169);
  const Scalar _tmp171 = std::pow(_tmp144, Scalar(-2));
  const Scalar _tmp172 =
      std::pow(Scalar(std::pow(_tmp167, Scalar(2)) * _tmp171 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp173 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp174 = _tmp173 * _tmp94;
  const Scalar _tmp175 = _tmp101 * _tmp143;
  const Scalar _tmp176 = _tmp173 * _tmp60;
  const Scalar _tmp177 = _tmp117 * _tmp176;
  const Scalar _tmp178 = _tmp46 / _tmp51;
  const Scalar _tmp179 = std::pow(_tmp70, Scalar(-2));
  const Scalar _tmp180 = _tmp176 * _tmp179;
  const Scalar _tmp181 = _tmp178 * _tmp180;
  const Scalar _tmp182 = _tmp140 * _tmp67;
  const Scalar _tmp183 = _tmp127 * _tmp176;
  const Scalar _tmp184 = std::pow(_tmp93, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp185 = _tmp184 * _tmp58;
  const Scalar _tmp186 = _tmp184 * _tmp62;
  const Scalar _tmp187 = _tmp60 * _tmp64;
  const Scalar _tmp188 = _tmp95 * (_tmp103 - _tmp185 * _tmp92 + _tmp186 * _tmp187);
  const Scalar _tmp189 = _tmp101 * _tmp104;
  const Scalar _tmp190 = _tmp105 * _tmp173;
  const Scalar _tmp191 = _tmp188 * _tmp53 - _tmp189 * _tmp53 + _tmp190 * _tmp53;
  const Scalar _tmp192 = _tmp189 * _tmp39;
  const Scalar _tmp193 = _tmp107 * _tmp53;
  const Scalar _tmp194 = _tmp180 * _tmp193;
  const Scalar _tmp195 = -_tmp183 * _tmp39 + _tmp188 * _tmp39 + _tmp190 * _tmp39 -
                         _tmp191 * _tmp72 - _tmp192 + _tmp194 * _tmp67;
  const Scalar _tmp196 = std::pow(_tmp108, Scalar(-2));
  const Scalar _tmp197 = _tmp195 * _tmp196;
  const Scalar _tmp198 = Scalar(1.0) * _tmp88;
  const Scalar _tmp199 = Scalar(1.0) * _tmp39;
  const Scalar _tmp200 = _tmp142 * _tmp95;
  const Scalar _tmp201 = _tmp176 * _tmp55;
  const Scalar _tmp202 = _tmp201 * _tmp71;
  const Scalar _tmp203 = _tmp176 * _tmp41;
  const Scalar _tmp204 = _tmp180 * _tmp53;
  const Scalar _tmp205 = _tmp204 * _tmp75;
  const Scalar _tmp206 = _tmp176 * _tmp97;
  const Scalar _tmp207 = -_tmp203 * _tmp39 + _tmp203 * _tmp88 + _tmp205 * _tmp67 - _tmp206 * _tmp39;
  const Scalar _tmp208 = _tmp179 * _tmp53;
  const Scalar _tmp209 = _tmp201 * _tmp208;
  const Scalar _tmp210 = -_tmp202 * _tmp39 - _tmp207 * _tmp82 + _tmp209 * _tmp67;
  const Scalar _tmp211 = _tmp111 * _tmp131;
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = _tmp197 * _tmp83;
  const Scalar _tmp214 = _tmp131 * _tmp213;
  const Scalar _tmp215 = _tmp195 * _tmp84;
  const Scalar _tmp216 = _tmp91 / [&]() {
    const Scalar base = _tmp64;
    return base * base * base;
  }();
  const Scalar _tmp217 = _tmp208 * _tmp216;
  const Scalar _tmp218 = _tmp203 + _tmp206 - _tmp216 * _tmp54 * _tmp71 - _tmp217 * _tmp75;
  const Scalar _tmp219 = _tmp202 - _tmp217 * _tmp55 - _tmp218 * _tmp82;
  const Scalar _tmp220 = std::pow(_tmp83, Scalar(-2));
  const Scalar _tmp221 = _tmp210 * _tmp220;
  const Scalar _tmp222 = _tmp108 * _tmp221;
  const Scalar _tmp223 =
      _tmp112 * (-_tmp109 * _tmp219 + _tmp129 * _tmp191 - _tmp130 * _tmp215 + _tmp130 * _tmp222 -
                 _tmp179 * _tmp193 * _tmp216 + _tmp183 - _tmp188 + _tmp189 - _tmp190);
  const Scalar _tmp224 = _tmp212 - _tmp214 + _tmp219 + _tmp223;
  const Scalar _tmp225 = _tmp39 * _tmp84;
  const Scalar _tmp226 = _tmp67 * _tmp84;
  const Scalar _tmp227 = _tmp133 * _tmp221;
  const Scalar _tmp228 = -_tmp136 * _tmp176 - _tmp176 - _tmp224 * _tmp226 + _tmp227 * _tmp67;
  const Scalar _tmp229 = _tmp135 * _tmp178;
  const Scalar _tmp230 = _tmp138 * _tmp95;
  const Scalar _tmp231 = _tmp67 * _tmp87;
  const Scalar _tmp232 = _tmp86 * _tmp88;
  const Scalar _tmp233 = _tmp39 * _tmp86;
  const Scalar _tmp234 = _tmp0 * _tmp95;
  const Scalar _tmp235 = _tmp101 * _tmp139;
  const Scalar _tmp236 = _tmp117 * _tmp203;
  const Scalar _tmp237 = -_tmp205 * _tmp99 + Scalar(1.0) * _tmp209 - _tmp236 * _tmp99;
  const Scalar _tmp238 = _tmp112 * (-_tmp100 * _tmp215 + _tmp100 * _tmp222 - _tmp109 * _tmp237 -
                                    _tmp191 * _tmp96 + Scalar(1.0) * _tmp194);
  const Scalar _tmp239 = _tmp110 * _tmp213;
  const Scalar _tmp240 = _tmp110 * _tmp111;
  const Scalar _tmp241 = _tmp210 * _tmp240;
  const Scalar _tmp242 = _tmp84 * (_tmp237 + _tmp238 - _tmp239 + _tmp241);
  const Scalar _tmp243 = _tmp114 * _tmp39;
  const Scalar _tmp244 = _tmp114 * _tmp67;
  const Scalar _tmp245 = -_tmp118 * _tmp176 + _tmp221 * _tmp244 - _tmp242 * _tmp67;
  const Scalar _tmp246 = _tmp125 * _tmp95;
  const Scalar _tmp247 = _tmp101 * _tmp90;
  const Scalar _tmp248 = _tmp101 * _tmp126;
  const Scalar _tmp249 =
      -_tmp126 * _tmp174 - _tmp139 * _tmp174 - _tmp143 * _tmp174 - _tmp174 * _tmp90 + _tmp175 -
      _tmp200 * (-_tmp141 * _tmp177 + _tmp181 * _tmp182 + _tmp197 * _tmp198 - _tmp197 * _tmp199) -
      _tmp230 * (_tmp117 * _tmp228 - _tmp180 * _tmp229 + _tmp224 * _tmp225 - _tmp227 * _tmp39) -
      _tmp234 * (-_tmp177 * _tmp89 + _tmp181 * _tmp231 + _tmp221 * _tmp232 - _tmp221 * _tmp233) +
      _tmp235 -
      _tmp246 * (-_tmp116 * _tmp181 + _tmp117 * _tmp245 - _tmp221 * _tmp243 + _tmp242 * _tmp39) +
      _tmp247 + _tmp248;
  const Scalar _tmp250 = _tmp167 * _tmp171;
  const Scalar _tmp251 = _tmp220 * _tmp76;
  const Scalar _tmp252 = _tmp210 * _tmp251;
  const Scalar _tmp253 = -_tmp207 * _tmp87 + _tmp252 * _tmp86;
  const Scalar _tmp254 = _tmp0 * _tmp98;
  const Scalar _tmp255 = _tmp111 * _tmp149;
  const Scalar _tmp256 = _tmp210 * _tmp255;
  const Scalar _tmp257 = _tmp149 * _tmp213;
  const Scalar _tmp258 = Scalar(1.0) * _tmp76;
  const Scalar _tmp259 =
      -_tmp140 * _tmp207 + _tmp146 * _tmp256 - _tmp146 * _tmp257 + _tmp197 * _tmp258;
  const Scalar _tmp260 = _tmp53 * _tmp96;
  const Scalar _tmp261 = _tmp114 * _tmp252 - _tmp115 * _tmp207 + _tmp154 * _tmp238 -
                         _tmp154 * _tmp239 + _tmp154 * _tmp241 + _tmp203 * _tmp260 +
                         Scalar(1.0) * _tmp205 - _tmp242 * _tmp76;
  const Scalar _tmp262 = _tmp133 * _tmp252 - _tmp134 * _tmp207 - _tmp153 * _tmp224 +
                         _tmp154 * _tmp212 - _tmp154 * _tmp214 + _tmp154 * _tmp223 + _tmp218;
  const Scalar _tmp263 = _tmp172 * (_tmp145 * (_tmp152 * (_tmp256 - _tmp257 - _tmp259 * _tmp98) +
                                               _tmp156 * (_tmp149 * _tmp212 - _tmp149 * _tmp214 +
                                                          _tmp149 * _tmp223 - _tmp262 * _tmp98) +
                                               _tmp162 * (_tmp149 * _tmp238 - _tmp149 * _tmp239 +
                                                          _tmp149 * _tmp241 - _tmp261 * _tmp98) -
                                               _tmp253 * _tmp254) -
                                    _tmp249 * _tmp250);
  const Scalar _tmp264 = -_tmp63 + p_b(0, 0);
  const Scalar _tmp265 = -_tmp59 + p_b(1, 0);
  const Scalar _tmp266 =
      std::sqrt(Scalar(std::pow(_tmp264, Scalar(2)) + std::pow(_tmp265, Scalar(2))));
  const Scalar _tmp267 = Scalar(9.6622558468725703) * _tmp168;
  const Scalar _tmp268 = -_tmp144 * _tmp267 - _tmp266;
  const Scalar _tmp269 = Scalar(0.1034955) * _tmp171 * _tmp268;
  const Scalar _tmp270 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp271 = Scalar(1.0) / (_tmp266);
  const Scalar _tmp272 = Scalar(0.1034955) * _tmp145;
  const Scalar _tmp273 = _tmp268 * _tmp272;
  const Scalar _tmp274 = std::cosh(_tmp273);
  const Scalar _tmp275 = -Scalar(9.6622558468725703) * std::sinh(_tmp169) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp273);
  const Scalar _tmp276 = _tmp140 * _tmp142;
  const Scalar _tmp277 = _tmp204 * _tmp67;
  const Scalar _tmp278 = _tmp125 * _tmp71;
  const Scalar _tmp279 = _tmp0 * _tmp87;
  const Scalar _tmp280 = _tmp279 * _tmp39;
  const Scalar _tmp281 = _tmp176 * _tmp71;
  const Scalar _tmp282 = _tmp138 * _tmp71;
  const Scalar _tmp283 = _tmp0 * _tmp86;
  const Scalar _tmp284 = _tmp221 * _tmp283;
  const Scalar _tmp285 = _tmp152 * _tmp197;
  const Scalar _tmp286 = _tmp135 * _tmp138;
  const Scalar _tmp287 = -_tmp116 * _tmp125 * _tmp204 - _tmp141 * _tmp142 * _tmp281 -
                         _tmp204 * _tmp286 + _tmp228 * _tmp282 + _tmp245 * _tmp278 +
                         _tmp276 * _tmp277 + _tmp277 * _tmp279 - _tmp280 * _tmp281 +
                         _tmp284 * _tmp72 + _tmp285 * _tmp72;
  const Scalar _tmp288 =
      _tmp116 * _tmp278 + _tmp135 * _tmp282 - _tmp276 * _tmp72 - _tmp279 * _tmp72;
  const Scalar _tmp289 = std::pow(_tmp288, Scalar(-2));
  const Scalar _tmp290 = _tmp142 * _tmp79;
  const Scalar _tmp291 = _tmp149 * _tmp166;
  const Scalar _tmp292 = _tmp0 * _tmp79;
  const Scalar _tmp293 = _tmp138 * _tmp79;
  const Scalar _tmp294 = _tmp125 * _tmp79;
  const Scalar _tmp295 = _tmp151 * _tmp290 + _tmp155 * _tmp293 + _tmp158 * _tmp160 * _tmp79 +
                         _tmp161 * _tmp294 + _tmp164 * _tmp292 - _tmp165 * _tmp291;
  const Scalar _tmp296 = _tmp289 * _tmp295;
  const Scalar _tmp297 = Scalar(1.0) / (_tmp288);
  const Scalar _tmp298 = -_tmp287 * _tmp296 + _tmp297 * (_tmp253 * _tmp292 + _tmp259 * _tmp290 +
                                                         _tmp261 * _tmp294 + _tmp262 * _tmp293);
  const Scalar _tmp299 =
      std::pow(Scalar(_tmp289 * std::pow(_tmp295, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp300 = std::asinh(_tmp295 * _tmp297);
  const Scalar _tmp301 = Scalar(1.0) * _tmp300;
  const Scalar _tmp302 = Scalar(1.0) * _tmp299 * std::cosh(_tmp301);
  const Scalar _tmp303 = Scalar(9.6622558468725703) * _tmp288;
  const Scalar _tmp304 =
      -_tmp300 * _tmp303 - std::sqrt(Scalar(std::pow(Scalar(-_tmp44 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp49 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp305 = Scalar(0.1034955) * _tmp289 * _tmp304;
  const Scalar _tmp306 = Scalar(9.6622558468725703) * _tmp300;
  const Scalar _tmp307 = _tmp299 * _tmp303;
  const Scalar _tmp308 = Scalar(0.1034955) * _tmp297;
  const Scalar _tmp309 = _tmp304 * _tmp308;
  const Scalar _tmp310 = std::cosh(_tmp309);
  const Scalar _tmp311 = -Scalar(9.6622558468725703) * std::sinh(_tmp301) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp309);
  const Scalar _tmp312 = _tmp114 * _tmp125;
  const Scalar _tmp313 = _tmp138 * _tmp84;
  const Scalar _tmp314 = _tmp125 * _tmp242 - _tmp138 * _tmp227 - _tmp221 * _tmp312 +
                         _tmp224 * _tmp313 - _tmp284 - _tmp285;
  const Scalar _tmp315 = _tmp115 * _tmp125 + _tmp134 * _tmp138 + _tmp276 + _tmp279;
  const Scalar _tmp316 = Scalar(1.0) / (_tmp315);
  const Scalar _tmp317 = _tmp125 * _tmp148;
  const Scalar _tmp318 = _tmp138 * _tmp148;
  const Scalar _tmp319 = _tmp0 * _tmp163 - _tmp113 * _tmp317 - _tmp132 * _tmp318 -
                         _tmp142 * _tmp150 - _tmp158 * _tmp159 + _tmp291;
  const Scalar _tmp320 = std::asinh(_tmp316 * _tmp319);
  const Scalar _tmp321 = Scalar(9.6622558468725703) * _tmp315;
  const Scalar _tmp322 =
      -_tmp320 * _tmp321 - std::sqrt(Scalar(std::pow(Scalar(-_tmp27 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp36 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp323 = Scalar(0.1034955) * _tmp316;
  const Scalar _tmp324 = _tmp322 * _tmp323;
  const Scalar _tmp325 = Scalar(1.0) * _tmp320;
  const Scalar _tmp326 = -Scalar(9.6622558468725703) * std::sinh(_tmp324) -
                         Scalar(9.6622558468725703) * std::sinh(_tmp325);
  const Scalar _tmp327 = std::pow(_tmp315, Scalar(-2));
  const Scalar _tmp328 = _tmp319 * _tmp327;
  const Scalar _tmp329 =
      std::pow(Scalar(std::pow(_tmp319, Scalar(2)) * _tmp327 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp330 =
      _tmp329 *
      (-_tmp314 * _tmp328 +
       _tmp316 * (-_tmp142 * _tmp256 + _tmp142 * _tmp257 - _tmp212 * _tmp318 + _tmp214 * _tmp318 -
                  _tmp223 * _tmp318 - _tmp238 * _tmp317 + _tmp239 * _tmp317 - _tmp241 * _tmp317));
  const Scalar _tmp331 = Scalar(1.0) * std::cosh(_tmp325);
  const Scalar _tmp332 = Scalar(9.6622558468725703) * _tmp320;
  const Scalar _tmp333 = Scalar(0.1034955) * _tmp322 * _tmp327;
  const Scalar _tmp334 = std::cosh(_tmp324);
  const Scalar _tmp335 = _tmp179 * _tmp65;
  const Scalar _tmp336 = _tmp335 * _tmp53;
  const Scalar _tmp337 = _tmp336 * _tmp67;
  const Scalar _tmp338 = _tmp65 * _tmp71;
  const Scalar _tmp339 = _tmp338 * _tmp55;
  const Scalar _tmp340 = _tmp65 * _tmp97;
  const Scalar _tmp341 = -_tmp337 * _tmp75 + _tmp340 * _tmp39 + _tmp39 * _tmp73 - _tmp73 * _tmp88;
  const Scalar _tmp342 = -_tmp337 * _tmp55 + _tmp339 * _tmp39 - _tmp341 * _tmp82;
  const Scalar _tmp343 = _tmp133 * _tmp342;
  const Scalar _tmp344 = _tmp220 * _tmp343;
  const Scalar _tmp345 = _tmp211 * _tmp342;
  const Scalar _tmp346 = _tmp95 * (-_tmp102 - _tmp185 * _tmp187 + _tmp186 * _tmp91);
  const Scalar _tmp347 = -_tmp189 * _tmp68 + _tmp346 * _tmp53;
  const Scalar _tmp348 = _tmp107 * _tmp338;
  const Scalar _tmp349 = -_tmp107 * _tmp337 - _tmp192 * _tmp66 + _tmp346 * _tmp39 -
                         _tmp347 * _tmp72 + _tmp348 * _tmp39;
  const Scalar _tmp350 = _tmp196 * _tmp349;
  const Scalar _tmp351 = _tmp350 * _tmp83;
  const Scalar _tmp352 = _tmp131 * _tmp351;
  const Scalar _tmp353 = _tmp205 + _tmp236 - _tmp340 - _tmp73;
  const Scalar _tmp354 = _tmp209 - _tmp339 - _tmp353 * _tmp82;
  const Scalar _tmp355 = _tmp220 * _tmp342;
  const Scalar _tmp356 = _tmp108 * _tmp355;
  const Scalar _tmp357 = _tmp349 * _tmp84;
  const Scalar _tmp358 =
      _tmp112 * (-_tmp109 * _tmp354 + _tmp129 * _tmp347 + _tmp130 * _tmp356 - _tmp130 * _tmp357 +
                 _tmp189 * _tmp66 + _tmp194 - _tmp346 - _tmp348);
  const Scalar _tmp359 = _tmp345 - _tmp352 + _tmp354 + _tmp358;
  const Scalar _tmp360 = _tmp136 * _tmp65 - _tmp226 * _tmp359 + _tmp344 * _tmp67 + _tmp65;
  const Scalar _tmp361 = _tmp178 * _tmp335;
  const Scalar _tmp362 = Scalar(1.0) * _tmp336;
  const Scalar _tmp363 = _tmp117 * _tmp73 * _tmp99 + _tmp336 * _tmp75 * _tmp99 - _tmp362 * _tmp55;
  const Scalar _tmp364 = _tmp112 * (_tmp100 * _tmp356 - _tmp100 * _tmp357 - _tmp107 * _tmp362 -
                                    _tmp109 * _tmp363 - _tmp347 * _tmp96);
  const Scalar _tmp365 = _tmp110 * _tmp351;
  const Scalar _tmp366 = _tmp240 * _tmp342;
  const Scalar _tmp367 = _tmp363 + _tmp364 - _tmp365 + _tmp366;
  const Scalar _tmp368 = _tmp118 * _tmp65 - _tmp226 * _tmp367 + _tmp244 * _tmp355;
  const Scalar _tmp369 = _tmp116 * _tmp335;
  const Scalar _tmp370 = _tmp141 * _tmp338;
  const Scalar _tmp371 =
      _tmp175 * _tmp66 -
      _tmp200 * (-_tmp182 * _tmp361 + _tmp198 * _tmp350 - _tmp199 * _tmp350 + _tmp370 * _tmp53) -
      _tmp230 * (_tmp117 * _tmp360 + _tmp225 * _tmp359 + _tmp229 * _tmp335 - _tmp344 * _tmp39) -
      _tmp234 *
          (-_tmp231 * _tmp361 + _tmp232 * _tmp355 - _tmp233 * _tmp355 + _tmp338 * _tmp53 * _tmp89) +
      _tmp235 * _tmp66 -
      _tmp246 * (_tmp117 * _tmp368 + _tmp178 * _tmp369 + _tmp225 * _tmp367 - _tmp243 * _tmp355) +
      _tmp247 * _tmp66 + _tmp248 * _tmp66;
  const Scalar _tmp372 = _tmp251 * _tmp342;
  const Scalar _tmp373 = _tmp114 * _tmp372 - _tmp115 * _tmp341 - _tmp153 * _tmp367 +
                         _tmp154 * _tmp364 - _tmp154 * _tmp365 + _tmp154 * _tmp366 -
                         _tmp260 * _tmp73 - _tmp362 * _tmp75;
  const Scalar _tmp374 = -_tmp134 * _tmp341 - _tmp153 * _tmp359 + _tmp154 * _tmp345 -
                         _tmp154 * _tmp352 + _tmp154 * _tmp358 + _tmp251 * _tmp343 + _tmp353;
  const Scalar _tmp375 = -_tmp341 * _tmp87 + _tmp372 * _tmp86;
  const Scalar _tmp376 = _tmp255 * _tmp342;
  const Scalar _tmp377 = _tmp149 * _tmp351;
  const Scalar _tmp378 =
      -_tmp140 * _tmp341 + _tmp146 * _tmp376 - _tmp146 * _tmp377 + _tmp258 * _tmp350;
  const Scalar _tmp379 = _tmp172 * (_tmp145 * (_tmp152 * (_tmp376 - _tmp377 - _tmp378 * _tmp98) +
                                               _tmp156 * (_tmp149 * _tmp345 - _tmp149 * _tmp352 +
                                                          _tmp149 * _tmp358 - _tmp374 * _tmp98) +
                                               _tmp162 * (_tmp149 * _tmp364 - _tmp149 * _tmp365 +
                                                          _tmp149 * _tmp366 - _tmp373 * _tmp98) -
                                               _tmp254 * _tmp375) -
                                    _tmp250 * _tmp371);
  const Scalar _tmp380 = _tmp283 * _tmp355;
  const Scalar _tmp381 = _tmp152 * _tmp350;
  const Scalar _tmp382 = _tmp125 * _tmp369 * _tmp53 + _tmp142 * _tmp370 - _tmp276 * _tmp337 +
                         _tmp278 * _tmp368 - _tmp279 * _tmp337 + _tmp280 * _tmp338 +
                         _tmp282 * _tmp360 + _tmp286 * _tmp336 + _tmp380 * _tmp72 +
                         _tmp381 * _tmp72;
  const Scalar _tmp383 = -_tmp296 * _tmp382 + _tmp297 * (_tmp290 * _tmp378 + _tmp292 * _tmp375 +
                                                         _tmp293 * _tmp374 + _tmp294 * _tmp373);
  const Scalar _tmp384 = _tmp125 * _tmp367 * _tmp84 - _tmp138 * _tmp344 - _tmp312 * _tmp355 +
                         _tmp313 * _tmp359 - _tmp380 - _tmp381;
  const Scalar _tmp385 =
      _tmp329 *
      (_tmp316 * (-_tmp142 * _tmp376 + _tmp142 * _tmp377 - _tmp317 * _tmp364 + _tmp317 * _tmp365 -
                  _tmp317 * _tmp366 - _tmp318 * _tmp345 + _tmp318 * _tmp352 - _tmp318 * _tmp358) -
       _tmp328 * _tmp384);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      _tmp249 * _tmp275 +
      _tmp270 * (-_tmp170 * _tmp263 -
                 _tmp274 * (-_tmp249 * _tmp269 + _tmp272 * (-_tmp249 * _tmp267 - _tmp263 * _tmp270 -
                                                            _tmp264 * _tmp271)));
  _res(2, 0) =
      _tmp287 * _tmp311 +
      _tmp303 *
          (-_tmp298 * _tmp302 -
           _tmp310 * (-_tmp287 * _tmp305 + _tmp308 * (-_tmp287 * _tmp306 - _tmp298 * _tmp307)));
  _res(3, 0) =
      _tmp314 * _tmp326 +
      _tmp321 *
          (-_tmp330 * _tmp331 -
           _tmp334 * (-_tmp314 * _tmp333 + _tmp323 * (-_tmp314 * _tmp332 - _tmp321 * _tmp330)));
  _res(0, 1) = 0;
  _res(1, 1) =
      _tmp270 * (-_tmp170 * _tmp379 -
                 _tmp274 * (-_tmp269 * _tmp371 + _tmp272 * (-_tmp265 * _tmp271 - _tmp267 * _tmp371 -
                                                            _tmp270 * _tmp379))) +
      _tmp275 * _tmp371;
  _res(2, 1) =
      _tmp303 *
          (-_tmp302 * _tmp383 -
           _tmp310 * (-_tmp305 * _tmp382 + _tmp308 * (-_tmp306 * _tmp382 - _tmp307 * _tmp383))) +
      _tmp311 * _tmp382;
  _res(3, 1) =
      _tmp321 *
          (-_tmp331 * _tmp385 -
           _tmp334 * (_tmp323 * (-_tmp321 * _tmp385 - _tmp332 * _tmp384) - _tmp333 * _tmp384)) +
      _tmp326 * _tmp384;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = 0;
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym