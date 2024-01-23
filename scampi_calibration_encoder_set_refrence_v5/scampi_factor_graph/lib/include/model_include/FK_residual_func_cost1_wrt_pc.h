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
 * Symbolic function: FK_residual_func_cost1_wrt_pc
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
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
Eigen::Matrix<Scalar, 4, 3> FkResidualFuncCost1WrtPc(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Scalar epsilon) {
  // Total ops: 1165

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (370)
  const Scalar _tmp0 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp6 = 2 * _tmp5;
  const Scalar _tmp7 = _tmp0 * _tmp6;
  const Scalar _tmp8 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp9 = _tmp2 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = _tmp2 * _tmp6;
  const Scalar _tmp13 = _tmp0 * _tmp8;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _TransformationMatrix[4] + _tmp16;
  const Scalar _tmp18 = _tmp17 - p_c(0, 0);
  const Scalar _tmp19 = std::pow(_tmp18, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp21 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp21 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = 2 * _tmp0 * _tmp2;
  const Scalar _tmp24 = _tmp5 * _tmp8;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp20 + _tmp27;
  const Scalar _tmp29 = _TransformationMatrix[5] + _tmp28;
  const Scalar _tmp30 = _tmp29 - p_c(1, 0);
  const Scalar _tmp31 = std::pow(_tmp30, Scalar(2));
  const Scalar _tmp32 = _tmp19 + _tmp31;
  const Scalar _tmp33 = std::pow(_tmp32, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp34 = _tmp18 * _tmp33;
  const Scalar _tmp35 = -_tmp22 + _tmp26;
  const Scalar _tmp36 = _tmp20 + _tmp35;
  const Scalar _tmp37 = _TransformationMatrix[5] + _tmp36;
  const Scalar _tmp38 = _tmp37 - p_b(1, 0);
  const Scalar _tmp39 = _tmp11 - _tmp14;
  const Scalar _tmp40 = _tmp39 + _tmp4;
  const Scalar _tmp41 = _TransformationMatrix[4] + _tmp40;
  const Scalar _tmp42 = _tmp41 - p_b(0, 0);
  const Scalar _tmp43 = Scalar(1.0) / (_tmp42);
  const Scalar _tmp44 = _tmp38 * _tmp43;
  const Scalar _tmp45 = _tmp33 * _tmp44;
  const Scalar _tmp46 = _tmp30 * _tmp33;
  const Scalar _tmp47 = _tmp18 * _tmp45 - _tmp46;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp47);
  const Scalar _tmp49 = -_tmp20;
  const Scalar _tmp50 = _tmp27 + _tmp49;
  const Scalar _tmp51 = _TransformationMatrix[5] + _tmp50;
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = -_tmp4;
  const Scalar _tmp54 = _tmp15 + _tmp53;
  const Scalar _tmp55 = _TransformationMatrix[4] + _tmp54;
  const Scalar _tmp56 = _tmp55 - p_d(0, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = _tmp56 * _tmp57;
  const Scalar _tmp60 = _tmp44 * _tmp59 - _tmp58;
  const Scalar _tmp61 = _tmp48 * _tmp60;
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp63 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp65 = _tmp63 - _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = -_tmp62;
  const Scalar _tmp68 = _tmp63 + _tmp64;
  const Scalar _tmp69 = _tmp67 + _tmp68;
  const Scalar _tmp70 = _tmp62 + _tmp68;
  const Scalar _tmp71 = _tmp33 * _tmp70;
  const Scalar _tmp72 = _tmp33 * _tmp69;
  const Scalar _tmp73 = _tmp18 * _tmp72;
  const Scalar _tmp74 = -_tmp18 * _tmp71 + _tmp73;
  const Scalar _tmp75 = -_tmp44 * _tmp73 + _tmp46 * _tmp70;
  const Scalar _tmp76 = _tmp44 * _tmp69;
  const Scalar _tmp77 = _tmp58 * _tmp66 - _tmp59 * _tmp76 - _tmp61 * _tmp75;
  const Scalar _tmp78 = Scalar(1.0) * _tmp36;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp28 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp40;
  const Scalar _tmp82 = -_tmp16 + _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = -_tmp59 * _tmp66 + _tmp59 * _tmp69 - _tmp61 * _tmp74 - _tmp77 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp84);
  const Scalar _tmp86 = _tmp78 * _tmp83 + _tmp81;
  const Scalar _tmp87 = 0;
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp61 * _tmp88;
  const Scalar _tmp90 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp92 = _tmp43 * _tmp91;
  const Scalar _tmp93 = _tmp90 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) * _tmp48;
  const Scalar _tmp95 = _tmp75 * _tmp94;
  const Scalar _tmp96 = -_tmp74 * _tmp94 + _tmp83 * _tmp95;
  const Scalar _tmp97 = _tmp16 * _tmp33;
  const Scalar _tmp98 = _tmp28 * _tmp33;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp100 = _tmp92 * (-_tmp36 * _tmp42 * _tmp99 + _tmp38 * _tmp40 * _tmp99);
  const Scalar _tmp101 = _tmp100 * _tmp33;
  const Scalar _tmp102 = _tmp101 * _tmp18 + _tmp18 * _tmp98 - _tmp30 * _tmp97;
  const Scalar _tmp103 = _tmp100 * _tmp59 - _tmp102 * _tmp61 + _tmp50 * _tmp59 - _tmp54 * _tmp58;
  const Scalar _tmp104 = _tmp103 * _tmp85;
  const Scalar _tmp105 = -_tmp102 * _tmp94 - _tmp104 * _tmp96;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp107 = _tmp106 * _tmp84;
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 + _tmp96;
  const Scalar _tmp110 = _tmp109 * _tmp85;
  const Scalar _tmp111 = -_tmp110 * _tmp60 + Scalar(1.0);
  const Scalar _tmp112 = _tmp33 * _tmp48;
  const Scalar _tmp113 = _tmp111 * _tmp112;
  const Scalar _tmp114 = _tmp39 + _tmp53;
  const Scalar _tmp115 = _TransformationMatrix[4] + _tmp114 - p_a(0, 0);
  const Scalar _tmp116 = _tmp35 + _tmp49;
  const Scalar _tmp117 = _TransformationMatrix[5] + _tmp116 - p_a(1, 0);
  const Scalar _tmp118 =
      std::pow(Scalar(std::pow(_tmp115, Scalar(2)) + std::pow(_tmp117, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp119 = _tmp117 * _tmp118;
  const Scalar _tmp120 = _tmp119 * fh1;
  const Scalar _tmp121 = _tmp120 * _tmp92;
  const Scalar _tmp122 = _tmp44 * _tmp48;
  const Scalar _tmp123 = _tmp122 * _tmp75 + _tmp76;
  const Scalar _tmp124 = _tmp122 * _tmp74 - _tmp123 * _tmp83 - _tmp69;
  const Scalar _tmp125 = _tmp124 * _tmp85;
  const Scalar _tmp126 = -_tmp100 + _tmp102 * _tmp122 - _tmp103 * _tmp125;
  const Scalar _tmp127 = _tmp107 * _tmp126;
  const Scalar _tmp128 = _tmp124 + _tmp127;
  const Scalar _tmp129 = _tmp60 * _tmp85;
  const Scalar _tmp130 = -_tmp128 * _tmp129 - _tmp44;
  const Scalar _tmp131 = _tmp112 * _tmp130;
  const Scalar _tmp132 = _tmp128 * _tmp85;
  const Scalar _tmp133 = _tmp115 * _tmp118;
  const Scalar _tmp134 = _tmp133 * fh1;
  const Scalar _tmp135 = _tmp134 * _tmp92;
  const Scalar _tmp136 = Scalar(1.0) * _tmp106;
  const Scalar _tmp137 = _tmp60 * _tmp94;
  const Scalar _tmp138 = _tmp106 * _tmp137;
  const Scalar _tmp139 = fh1 * (_tmp114 * _tmp119 - _tmp116 * _tmp133);
  const Scalar _tmp140 = _tmp139 * _tmp92;
  const Scalar _tmp141 = -_tmp121 * (_tmp110 * _tmp59 + _tmp113 * _tmp18) -
                         _tmp135 * (_tmp131 * _tmp18 + _tmp132 * _tmp59 + Scalar(1.0)) -
                         _tmp140 * (_tmp136 * _tmp59 - _tmp138 * _tmp34) -
                         _tmp93 * (-_tmp34 * _tmp89 + _tmp59 * _tmp88);
  const Scalar _tmp142 = Scalar(1.0) / (_tmp141);
  const Scalar _tmp143 = Scalar(0.1034955) * _tmp142;
  const Scalar _tmp144 = _tmp50 + _tmp79;
  const Scalar _tmp145 = _tmp144 * _tmp83;
  const Scalar _tmp146 = Scalar(1.0) / (-_tmp145 - _tmp54 + _tmp81);
  const Scalar _tmp147 = Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = _tmp107 * _tmp147;
  const Scalar _tmp149 = -_tmp136 * _tmp77 + _tmp144 * _tmp148;
  const Scalar _tmp150 = Scalar(1.0) * _tmp80;
  const Scalar _tmp151 = Scalar(1.0) * _tmp139;
  const Scalar _tmp152 = _tmp77 * _tmp85;
  const Scalar _tmp153 = _tmp144 * _tmp146;
  const Scalar _tmp154 = _tmp123 + _tmp127 * _tmp153 - _tmp128 * _tmp152;
  const Scalar _tmp155 = Scalar(1.0) * _tmp134;
  const Scalar _tmp156 = _tmp108 * _tmp153 - _tmp110 * _tmp77 - _tmp95;
  const Scalar _tmp157 = Scalar(1.0) * _tmp120;
  const Scalar _tmp158 = _tmp146 * _tmp86;
  const Scalar _tmp159 = -_tmp144 * _tmp158 - _tmp152 * _tmp87 + _tmp79;
  const Scalar _tmp160 = _tmp144 * _tmp80;
  const Scalar _tmp161 = fh1 * (_tmp65 + _tmp67);
  const Scalar _tmp162 = Scalar(3.29616) * _tmp10 + _tmp114 * fv1 + _tmp133 * _tmp161;
  const Scalar _tmp163 = -_tmp116 * fv1 - _tmp119 * _tmp161 - Scalar(3.29616) * _tmp25;
  const Scalar _tmp164 = _tmp147 * _tmp83;
  const Scalar _tmp165 = _tmp145 * _tmp147 + Scalar(1.0);
  const Scalar _tmp166 =
      _tmp151 * (_tmp148 - _tmp149 * _tmp150) + _tmp155 * (_tmp127 * _tmp147 - _tmp150 * _tmp154) +
      _tmp157 * (_tmp108 * _tmp147 - _tmp150 * _tmp156) +
      Scalar(1.0) * _tmp162 * (_tmp147 * _tmp160 - _tmp147) +
      Scalar(1.0) * _tmp163 * (-_tmp150 * _tmp165 + _tmp164) +
      Scalar(1.0) * _tmp90 * (-_tmp147 * _tmp86 - _tmp150 * _tmp159 + Scalar(1.0));
  const Scalar _tmp167 = std::asinh(_tmp142 * _tmp166);
  const Scalar _tmp168 = Scalar(9.6622558468725703) * _tmp141;
  const Scalar _tmp169 =
      -_tmp167 * _tmp168 - std::sqrt(Scalar(std::pow(Scalar(-_tmp37 + p_b(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp41 + p_b(0, 0)), Scalar(2))));
  const Scalar _tmp170 = _tmp143 * _tmp169;
  const Scalar _tmp171 = Scalar(1.0) * _tmp167;
  const Scalar _tmp172 = _tmp143 * p_b(2, 0) - std::cosh(_tmp170) + std::cosh(_tmp171);
  const Scalar _tmp173 = std::pow(_tmp32, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp174 = _tmp173 * _tmp18 * _tmp30;
  const Scalar _tmp175 = _tmp173 * _tmp19;
  const Scalar _tmp176 = -_tmp174 + _tmp175 * _tmp44 - _tmp45;
  const Scalar _tmp177 = std::pow(_tmp47, Scalar(-2));
  const Scalar _tmp178 = _tmp129 * _tmp177;
  const Scalar _tmp179 = _tmp178 * _tmp87;
  const Scalar _tmp180 = _tmp177 * _tmp75;
  const Scalar _tmp181 = _tmp176 * _tmp60;
  const Scalar _tmp182 = _tmp174 * _tmp70;
  const Scalar _tmp183 = -_tmp175 * _tmp76 + _tmp182 + _tmp44 * _tmp72;
  const Scalar _tmp184 = _tmp180 * _tmp181 - _tmp183 * _tmp61;
  const Scalar _tmp185 = _tmp175 * _tmp69 - _tmp175 * _tmp70 + _tmp71 - _tmp72;
  const Scalar _tmp186 = _tmp177 * _tmp74;
  const Scalar _tmp187 = _tmp181 * _tmp186 - _tmp184 * _tmp83 - _tmp185 * _tmp61;
  const Scalar _tmp188 = std::pow(_tmp84, Scalar(-2));
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = _tmp189 * _tmp59;
  const Scalar _tmp191 = _tmp34 * _tmp61 * _tmp87;
  const Scalar _tmp192 = _tmp100 * _tmp175 - _tmp101 - _tmp16 * _tmp174 + _tmp175 * _tmp28 - _tmp98;
  const Scalar _tmp193 = _tmp102 * _tmp177;
  const Scalar _tmp194 = _tmp181 * _tmp193 - _tmp192 * _tmp61;
  const Scalar _tmp195 = std::pow(_tmp103, Scalar(-2));
  const Scalar _tmp196 = _tmp194 * _tmp195;
  const Scalar _tmp197 = _tmp137 * _tmp34;
  const Scalar _tmp198 = _tmp177 * _tmp181;
  const Scalar _tmp199 = _tmp136 * _tmp34;
  const Scalar _tmp200 = Scalar(1.0) * _tmp59;
  const Scalar _tmp201 = _tmp130 * _tmp177;
  const Scalar _tmp202 = _tmp176 * _tmp201;
  const Scalar _tmp203 = _tmp175 * _tmp48;
  const Scalar _tmp204 = _tmp128 * _tmp60;
  const Scalar _tmp205 = _tmp176 * _tmp44;
  const Scalar _tmp206 = _tmp180 * _tmp44;
  const Scalar _tmp207 = _tmp122 * _tmp183 - _tmp176 * _tmp206;
  const Scalar _tmp208 = _tmp122 * _tmp185 - _tmp186 * _tmp205 - _tmp207 * _tmp83;
  const Scalar _tmp209 = _tmp103 * _tmp189;
  const Scalar _tmp210 = _tmp107 * (-_tmp104 * _tmp208 + _tmp122 * _tmp192 + _tmp124 * _tmp209 -
                                    _tmp125 * _tmp194 - _tmp193 * _tmp205);
  const Scalar _tmp211 = _tmp126 * _tmp84;
  const Scalar _tmp212 = _tmp196 * _tmp211;
  const Scalar _tmp213 = _tmp106 * _tmp187;
  const Scalar _tmp214 = _tmp126 * _tmp213;
  const Scalar _tmp215 = _tmp208 + _tmp210 - _tmp212 + _tmp214;
  const Scalar _tmp216 = -_tmp129 * _tmp215 + _tmp189 * _tmp204;
  const Scalar _tmp217 = _tmp112 * _tmp18;
  const Scalar _tmp218 = _tmp59 * _tmp85;
  const Scalar _tmp219 = _tmp111 * _tmp177;
  const Scalar _tmp220 = _tmp176 * _tmp219;
  const Scalar _tmp221 = _tmp109 * _tmp60;
  const Scalar _tmp222 = _tmp105 * _tmp84;
  const Scalar _tmp223 = _tmp196 * _tmp222;
  const Scalar _tmp224 = _tmp85 * _tmp96;
  const Scalar _tmp225 = Scalar(1.0) * _tmp176;
  const Scalar _tmp226 = _tmp150 * _tmp180 * _tmp82;
  const Scalar _tmp227 = _tmp183 * _tmp94;
  const Scalar _tmp228 =
      -_tmp176 * _tmp226 - _tmp185 * _tmp94 + _tmp186 * _tmp225 + _tmp227 * _tmp83;
  const Scalar _tmp229 = _tmp107 * (-_tmp104 * _tmp228 - _tmp192 * _tmp94 + _tmp193 * _tmp225 -
                                    _tmp194 * _tmp224 + _tmp209 * _tmp96);
  const Scalar _tmp230 = _tmp105 * _tmp213;
  const Scalar _tmp231 = -_tmp223 + _tmp228 + _tmp229 + _tmp230;
  const Scalar _tmp232 = -_tmp129 * _tmp231 + _tmp189 * _tmp221;
  const Scalar _tmp233 = -_tmp121 * (-_tmp109 * _tmp190 + _tmp111 * _tmp203 - _tmp113 +
                                     _tmp217 * _tmp232 + _tmp218 * _tmp231 - _tmp220 * _tmp34) -
                         _tmp135 * (-_tmp128 * _tmp190 + _tmp130 * _tmp203 - _tmp131 -
                                    _tmp202 * _tmp34 + _tmp215 * _tmp218 + _tmp216 * _tmp217) -
                         _tmp140 * (-_tmp138 * _tmp175 + _tmp138 * _tmp33 + _tmp196 * _tmp197 -
                                    _tmp196 * _tmp200 + _tmp198 * _tmp199) -
                         _tmp93 * (-_tmp175 * _tmp89 + _tmp176 * _tmp179 * _tmp34 +
                                   _tmp189 * _tmp191 - _tmp190 * _tmp87 + _tmp33 * _tmp89);
  const Scalar _tmp234 = Scalar(9.6622558468725703) * _tmp233;
  const Scalar _tmp235 = std::pow(_tmp141, Scalar(-2));
  const Scalar _tmp236 =
      std::pow(Scalar(std::pow(_tmp166, Scalar(2)) * _tmp235 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp237 = _tmp166 * _tmp235;
  const Scalar _tmp238 = _tmp147 * _tmp84;
  const Scalar _tmp239 = _tmp196 * _tmp238;
  const Scalar _tmp240 = _tmp147 * _tmp213;
  const Scalar _tmp241 = Scalar(1.0) * _tmp77;
  const Scalar _tmp242 =
      -_tmp136 * _tmp184 - _tmp144 * _tmp239 + _tmp144 * _tmp240 + _tmp196 * _tmp241;
  const Scalar _tmp243 = _tmp128 * _tmp77;
  const Scalar _tmp244 = -_tmp132 * _tmp184 - _tmp152 * _tmp215 + _tmp153 * _tmp210 -
                         _tmp153 * _tmp212 + _tmp153 * _tmp214 + _tmp189 * _tmp243 + _tmp207;
  const Scalar _tmp245 = _tmp189 * _tmp77;
  const Scalar _tmp246 = _tmp109 * _tmp245 - _tmp110 * _tmp184 - _tmp152 * _tmp231 -
                         _tmp153 * _tmp223 + _tmp153 * _tmp229 + _tmp153 * _tmp230 +
                         _tmp180 * _tmp225 - _tmp227;
  const Scalar _tmp247 = -_tmp184 * _tmp88 + _tmp245 * _tmp87;
  const Scalar _tmp248 = _tmp150 * _tmp90;
  const Scalar _tmp249 = _tmp236 * (_tmp142 * (_tmp151 * (-_tmp150 * _tmp242 - _tmp239 + _tmp240) +
                                               _tmp155 * (_tmp147 * _tmp210 - _tmp147 * _tmp212 +
                                                          _tmp147 * _tmp214 - _tmp150 * _tmp244) +
                                               _tmp157 * (-_tmp147 * _tmp223 + _tmp147 * _tmp229 +
                                                          _tmp147 * _tmp230 - _tmp150 * _tmp246) -
                                               _tmp247 * _tmp248) -
                                    _tmp233 * _tmp237);
  const Scalar _tmp250 = Scalar(0.1034955) * _tmp235;
  const Scalar _tmp251 = _tmp169 * _tmp250;
  const Scalar _tmp252 = std::sinh(_tmp170);
  const Scalar _tmp253 = _tmp250 * p_b(2, 0);
  const Scalar _tmp254 = Scalar(1.0) * std::sinh(_tmp171);
  const Scalar _tmp255 = _tmp139 * _tmp80;
  const Scalar _tmp256 = _tmp147 * _tmp162;
  const Scalar _tmp257 = _tmp80 * _tmp90;
  const Scalar _tmp258 = _tmp134 * _tmp80;
  const Scalar _tmp259 = _tmp120 * _tmp80;
  const Scalar _tmp260 = _tmp149 * _tmp255 + _tmp154 * _tmp258 + _tmp156 * _tmp259 +
                         _tmp159 * _tmp257 - _tmp160 * _tmp256 + _tmp163 * _tmp165 * _tmp80;
  const Scalar _tmp261 = _tmp88 * _tmp90;
  const Scalar _tmp262 = _tmp130 * _tmp48;
  const Scalar _tmp263 = _tmp120 * _tmp48;
  const Scalar _tmp264 =
      _tmp111 * _tmp263 + _tmp134 * _tmp262 - _tmp138 * _tmp139 - _tmp261 * _tmp61;
  const Scalar _tmp265 = Scalar(1.0) / (_tmp264);
  const Scalar _tmp266 = std::asinh(_tmp260 * _tmp265);
  const Scalar _tmp267 = Scalar(1.0) * _tmp266;
  const Scalar _tmp268 = Scalar(1.0) * std::sinh(_tmp267);
  const Scalar _tmp269 = std::pow(_tmp264, Scalar(-2));
  const Scalar _tmp270 =
      std::pow(Scalar(std::pow(_tmp260, Scalar(2)) * _tmp269 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp271 = _tmp136 * _tmp139;
  const Scalar _tmp272 = _tmp137 * _tmp139;
  const Scalar _tmp273 = _tmp87 * _tmp90;
  const Scalar _tmp274 = _tmp178 * _tmp273;
  const Scalar _tmp275 = _tmp134 * _tmp48;
  const Scalar _tmp276 = _tmp189 * _tmp273;
  const Scalar _tmp277 = -_tmp120 * _tmp220 - _tmp134 * _tmp202 + _tmp176 * _tmp274 +
                         _tmp196 * _tmp272 + _tmp198 * _tmp271 + _tmp216 * _tmp275 +
                         _tmp232 * _tmp263 + _tmp276 * _tmp61;
  const Scalar _tmp278 = _tmp260 * _tmp269;
  const Scalar _tmp279 =
      _tmp270 *
      (_tmp265 * (_tmp242 * _tmp255 + _tmp244 * _tmp258 + _tmp246 * _tmp259 + _tmp247 * _tmp257) -
       _tmp277 * _tmp278);
  const Scalar _tmp280 = -_tmp17 + p_c(0, 0);
  const Scalar _tmp281 = -_tmp29 + p_c(1, 0);
  const Scalar _tmp282 =
      std::sqrt(Scalar(std::pow(_tmp280, Scalar(2)) + std::pow(_tmp281, Scalar(2))));
  const Scalar _tmp283 = Scalar(1.0) / (_tmp282);
  const Scalar _tmp284 = Scalar(9.6622558468725703) * _tmp266;
  const Scalar _tmp285 = Scalar(9.6622558468725703) * _tmp264;
  const Scalar _tmp286 = Scalar(0.1034955) * _tmp265;
  const Scalar _tmp287 = -_tmp266 * _tmp285 - _tmp282;
  const Scalar _tmp288 = Scalar(0.1034955) * _tmp269;
  const Scalar _tmp289 = _tmp287 * _tmp288;
  const Scalar _tmp290 = _tmp286 * _tmp287;
  const Scalar _tmp291 = std::sinh(_tmp290);
  const Scalar _tmp292 = _tmp288 * p_c(2, 0);
  const Scalar _tmp293 = Scalar(9.6622558468725703) * _tmp286 * p_c(2, 0) +
                         Scalar(9.6622558468725703) * std::cosh(_tmp267) -
                         Scalar(9.6622558468725703) * std::cosh(_tmp290);
  const Scalar _tmp294 = _tmp134 * _tmp85;
  const Scalar _tmp295 = _tmp120 * _tmp85;
  const Scalar _tmp296 = _tmp109 * _tmp120;
  const Scalar _tmp297 = _tmp128 * _tmp134;
  const Scalar _tmp298 = -_tmp151 * _tmp196 - _tmp189 * _tmp296 - _tmp189 * _tmp297 +
                         _tmp215 * _tmp294 + _tmp231 * _tmp295 - _tmp276;
  const Scalar _tmp299 = _tmp120 * _tmp146;
  const Scalar _tmp300 = _tmp134 * _tmp146;
  const Scalar _tmp301 = -_tmp108 * _tmp299 - _tmp127 * _tmp300 - _tmp139 * _tmp148 +
                         _tmp158 * _tmp90 - _tmp163 * _tmp164 + _tmp256;
  const Scalar _tmp302 = _tmp110 * _tmp120 + _tmp132 * _tmp134 + _tmp261 + _tmp271;
  const Scalar _tmp303 = std::pow(_tmp302, Scalar(-2));
  const Scalar _tmp304 = _tmp301 * _tmp303;
  const Scalar _tmp305 = Scalar(1.0) / (_tmp302);
  const Scalar _tmp306 =
      -_tmp298 * _tmp304 +
      _tmp305 * (_tmp139 * _tmp239 - _tmp139 * _tmp240 - _tmp210 * _tmp300 + _tmp212 * _tmp300 -
                 _tmp214 * _tmp300 + _tmp223 * _tmp299 - _tmp229 * _tmp299 - _tmp230 * _tmp299);
  const Scalar _tmp307 =
      std::pow(Scalar(std::pow(_tmp301, Scalar(2)) * _tmp303 + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp308 = std::asinh(_tmp301 * _tmp305);
  const Scalar _tmp309 = Scalar(1.0) * _tmp308;
  const Scalar _tmp310 = Scalar(1.0) * _tmp307 * std::sinh(_tmp309);
  const Scalar _tmp311 = Scalar(0.1034955) * _tmp303;
  const Scalar _tmp312 = _tmp298 * _tmp311;
  const Scalar _tmp313 = Scalar(9.6622558468725703) * _tmp302;
  const Scalar _tmp314 =
      -_tmp308 * _tmp313 - std::sqrt(Scalar(std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp55 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp315 = Scalar(0.1034955) * _tmp305;
  const Scalar _tmp316 = _tmp314 * _tmp315;
  const Scalar _tmp317 = std::sinh(_tmp316);
  const Scalar _tmp318 = _tmp307 * _tmp313;
  const Scalar _tmp319 = Scalar(9.6622558468725703) * _tmp298;
  const Scalar _tmp320 = _tmp315 * p_d(2, 0) + std::cosh(_tmp309) - std::cosh(_tmp316);
  const Scalar _tmp321 = _tmp173 * _tmp31;
  const Scalar _tmp322 = -_tmp174 * _tmp76 + _tmp321 * _tmp70 - _tmp71;
  const Scalar _tmp323 = _tmp174 * _tmp44 - _tmp321 + _tmp33;
  const Scalar _tmp324 = _tmp323 * _tmp60;
  const Scalar _tmp325 = _tmp180 * _tmp324 - _tmp322 * _tmp61;
  const Scalar _tmp326 = _tmp174 * _tmp69 - _tmp182;
  const Scalar _tmp327 = _tmp186 * _tmp324 - _tmp325 * _tmp83 - _tmp326 * _tmp61;
  const Scalar _tmp328 = _tmp188 * _tmp327;
  const Scalar _tmp329 = _tmp328 * _tmp59;
  const Scalar _tmp330 = _tmp323 * _tmp34;
  const Scalar _tmp331 = _tmp100 * _tmp174 - _tmp16 * _tmp321 + _tmp174 * _tmp28 + _tmp97;
  const Scalar _tmp332 = _tmp193 * _tmp324 - _tmp331 * _tmp61;
  const Scalar _tmp333 = _tmp195 * _tmp332;
  const Scalar _tmp334 = _tmp222 * _tmp333;
  const Scalar _tmp335 = Scalar(1.0) * _tmp323;
  const Scalar _tmp336 = _tmp322 * _tmp94;
  const Scalar _tmp337 =
      _tmp186 * _tmp335 - _tmp226 * _tmp323 - _tmp326 * _tmp94 + _tmp336 * _tmp83;
  const Scalar _tmp338 = _tmp103 * _tmp328;
  const Scalar _tmp339 = _tmp107 * (-_tmp104 * _tmp337 + _tmp193 * _tmp335 - _tmp224 * _tmp332 -
                                    _tmp331 * _tmp94 + _tmp338 * _tmp96);
  const Scalar _tmp340 = _tmp106 * _tmp327;
  const Scalar _tmp341 = _tmp105 * _tmp340;
  const Scalar _tmp342 = -_tmp334 + _tmp337 + _tmp339 + _tmp341;
  const Scalar _tmp343 = -_tmp129 * _tmp342 + _tmp221 * _tmp328;
  const Scalar _tmp344 = _tmp211 * _tmp333;
  const Scalar _tmp345 = _tmp122 * _tmp322 - _tmp206 * _tmp323;
  const Scalar _tmp346 = _tmp323 * _tmp44;
  const Scalar _tmp347 = _tmp122 * _tmp326 - _tmp186 * _tmp346 - _tmp345 * _tmp83;
  const Scalar _tmp348 = _tmp107 * (-_tmp104 * _tmp347 + _tmp122 * _tmp331 + _tmp124 * _tmp338 -
                                    _tmp125 * _tmp332 - _tmp193 * _tmp346);
  const Scalar _tmp349 = _tmp126 * _tmp340;
  const Scalar _tmp350 = -_tmp344 + _tmp347 + _tmp348 + _tmp349;
  const Scalar _tmp351 = -_tmp129 * _tmp350 + _tmp204 * _tmp328;
  const Scalar _tmp352 = _tmp177 * _tmp324;
  const Scalar _tmp353 =
      -_tmp121 * (-_tmp109 * _tmp329 + _tmp111 * _tmp174 * _tmp48 + _tmp217 * _tmp343 +
                  _tmp218 * _tmp342 - _tmp219 * _tmp330) -
      _tmp135 * (-_tmp128 * _tmp329 + _tmp174 * _tmp262 - _tmp201 * _tmp330 + _tmp217 * _tmp351 +
                 _tmp218 * _tmp350) -
      _tmp140 * (-_tmp138 * _tmp174 + _tmp197 * _tmp333 + _tmp199 * _tmp352 - _tmp200 * _tmp333) -
      _tmp93 * (-_tmp174 * _tmp89 + _tmp179 * _tmp330 + _tmp191 * _tmp328 - _tmp329 * _tmp87);
  const Scalar _tmp354 = Scalar(9.6622558468725703) * _tmp353;
  const Scalar _tmp355 = _tmp238 * _tmp333;
  const Scalar _tmp356 = _tmp147 * _tmp340;
  const Scalar _tmp357 =
      -_tmp136 * _tmp325 - _tmp144 * _tmp355 + _tmp144 * _tmp356 + _tmp241 * _tmp333;
  const Scalar _tmp358 = -_tmp132 * _tmp325 - _tmp152 * _tmp350 - _tmp153 * _tmp344 +
                         _tmp153 * _tmp348 + _tmp153 * _tmp349 + _tmp243 * _tmp328 + _tmp345;
  const Scalar _tmp359 = _tmp328 * _tmp77;
  const Scalar _tmp360 = _tmp109 * _tmp359 - _tmp110 * _tmp325 - _tmp152 * _tmp342 -
                         _tmp153 * _tmp334 + _tmp153 * _tmp339 + _tmp153 * _tmp341 +
                         _tmp180 * _tmp335 - _tmp336;
  const Scalar _tmp361 = -_tmp325 * _tmp88 + _tmp359 * _tmp87;
  const Scalar _tmp362 = _tmp236 * (_tmp142 * (_tmp151 * (-_tmp150 * _tmp357 - _tmp355 + _tmp356) +
                                               _tmp155 * (-_tmp147 * _tmp344 + _tmp147 * _tmp348 +
                                                          _tmp147 * _tmp349 - _tmp150 * _tmp358) +
                                               _tmp157 * (-_tmp147 * _tmp334 + _tmp147 * _tmp339 +
                                                          _tmp147 * _tmp341 - _tmp150 * _tmp360) -
                                               _tmp248 * _tmp361) -
                                    _tmp237 * _tmp353);
  const Scalar _tmp363 = _tmp273 * _tmp328;
  const Scalar _tmp364 = -_tmp120 * _tmp219 * _tmp323 - _tmp134 * _tmp201 * _tmp323 +
                         _tmp263 * _tmp343 + _tmp271 * _tmp352 + _tmp272 * _tmp333 +
                         _tmp274 * _tmp323 + _tmp275 * _tmp351 + _tmp363 * _tmp61;
  const Scalar _tmp365 =
      _tmp270 *
      (_tmp265 * (_tmp255 * _tmp357 + _tmp257 * _tmp361 + _tmp258 * _tmp358 + _tmp259 * _tmp360) -
       _tmp278 * _tmp364);
  const Scalar _tmp366 = -_tmp151 * _tmp333 + _tmp294 * _tmp350 + _tmp295 * _tmp342 -
                         _tmp296 * _tmp328 - _tmp297 * _tmp328 - _tmp363;
  const Scalar _tmp367 = _tmp311 * _tmp366;
  const Scalar _tmp368 = Scalar(9.6622558468725703) * _tmp366;
  const Scalar _tmp369 =
      -_tmp304 * _tmp366 +
      _tmp305 * (_tmp139 * _tmp355 - _tmp139 * _tmp356 + _tmp299 * _tmp334 - _tmp299 * _tmp339 -
                 _tmp299 * _tmp341 + _tmp300 * _tmp344 - _tmp300 * _tmp348 - _tmp300 * _tmp349);

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 3> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp168 *
          (-_tmp233 * _tmp253 + _tmp249 * _tmp254 -
           _tmp252 * (_tmp143 * (-_tmp167 * _tmp234 - _tmp168 * _tmp249) - _tmp233 * _tmp251)) -
      _tmp172 * _tmp234;
  _res(2, 0) =
      -_tmp277 * _tmp293 -
      _tmp285 * (_tmp268 * _tmp279 - _tmp277 * _tmp292 -
                 _tmp291 * (-_tmp277 * _tmp289 + _tmp286 * (-_tmp277 * _tmp284 - _tmp279 * _tmp285 -
                                                            _tmp280 * _tmp283)));
  _res(3, 0) =
      -_tmp313 *
          (_tmp306 * _tmp310 - _tmp312 * p_d(2, 0) -
           _tmp317 * (-_tmp312 * _tmp314 + _tmp315 * (-_tmp306 * _tmp318 - _tmp308 * _tmp319))) -
      _tmp319 * _tmp320;
  _res(0, 1) = 0;
  _res(1, 1) =
      -_tmp168 *
          (-_tmp252 * (_tmp143 * (-_tmp167 * _tmp354 - _tmp168 * _tmp362) - _tmp251 * _tmp353) -
           _tmp253 * _tmp353 + _tmp254 * _tmp362) -
      _tmp172 * _tmp354;
  _res(2, 1) =
      -_tmp285 *
          (_tmp268 * _tmp365 -
           _tmp291 * (_tmp286 * (-_tmp281 * _tmp283 - _tmp284 * _tmp364 - _tmp285 * _tmp365) -
                      _tmp289 * _tmp364) -
           _tmp292 * _tmp364) -
      _tmp293 * _tmp364;
  _res(3, 1) =
      -_tmp313 *
          (_tmp310 * _tmp369 -
           _tmp317 * (-_tmp314 * _tmp367 + _tmp315 * (-_tmp308 * _tmp368 - _tmp318 * _tmp369)) -
           _tmp367 * p_d(2, 0)) -
      _tmp320 * _tmp368;
  _res(0, 2) = 0;
  _res(1, 2) = 0;
  _res(2, 2) = Scalar(-1.0);
  _res(3, 2) = 0;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
