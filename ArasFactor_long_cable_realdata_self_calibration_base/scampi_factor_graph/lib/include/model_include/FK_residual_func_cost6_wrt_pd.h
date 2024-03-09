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
 * Symbolic function: FK_residual_func_cost6_wrt_pd
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
 *     res: Matrix23
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 3> FkResidualFuncCost6WrtPd(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 819

  // Unused inputs
  (void)fh1;
  (void)fv1;
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (210)
  const Scalar _tmp0 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp2 = 2 * _tmp1;
  const Scalar _tmp3 = _tmp0 * _tmp2;
  const Scalar _tmp4 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp5 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp9 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp10 =
      -Scalar(0.010999999999999999) * _tmp8 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp12 = _tmp1 * _tmp5;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = _tmp14 + _tmp7;
  const Scalar _tmp16 = _tmp2 * _tmp4;
  const Scalar _tmp17 = _tmp0 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 =
      -Scalar(0.010999999999999999) * _tmp11 + Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp20 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp8 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp19 - _tmp21;
  const Scalar _tmp23 = _tmp18 + _tmp22;
  const Scalar _tmp24 = _TransformationMatrix[5] + _tmp23 - p_b(1, 0);
  const Scalar _tmp25 = _TransformationMatrix[6] + _tmp15 - p_b(2, 0);
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp27 =
      -Scalar(0.010999999999999999) * _tmp3 - Scalar(0.010999999999999999) * _tmp6;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp26 + _tmp29;
  const Scalar _tmp31 = _TransformationMatrix[4] + _tmp30 - p_b(0, 0);
  const Scalar _tmp32 = std::pow(Scalar(std::pow(_tmp24, Scalar(2)) + std::pow(_tmp25, Scalar(2)) +
                                        std::pow(_tmp31, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp33 = _tmp24 * _tmp32;
  const Scalar _tmp34 = -_tmp18;
  const Scalar _tmp35 = _tmp22 + _tmp34;
  const Scalar _tmp36 = -_tmp7;
  const Scalar _tmp37 = _tmp14 + _tmp36;
  const Scalar _tmp38 = _TransformationMatrix[6] + _tmp37 - p_a(2, 0);
  const Scalar _tmp39 = -_tmp26;
  const Scalar _tmp40 = _tmp29 + _tmp39;
  const Scalar _tmp41 = _TransformationMatrix[4] + _tmp40 - p_a(0, 0);
  const Scalar _tmp42 = _TransformationMatrix[5] + _tmp35 - p_a(1, 0);
  const Scalar _tmp43 = std::sqrt(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp41, Scalar(2)) +
                                         std::pow(_tmp42, Scalar(2))));
  const Scalar _tmp44 = Scalar(1.0) / (_tmp43);
  const Scalar _tmp45 = _tmp38 * _tmp44;
  const Scalar _tmp46 = _tmp42 * _tmp44;
  const Scalar _tmp47 = _tmp35 * _tmp45 - _tmp37 * _tmp46;
  const Scalar _tmp48 = Scalar(1.0) / (_tmp41);
  const Scalar _tmp49 = _tmp43 * _tmp48;
  const Scalar _tmp50 = _tmp47 * _tmp49;
  const Scalar _tmp51 = _tmp31 * _tmp32;
  const Scalar _tmp52 = _tmp25 * _tmp32;
  const Scalar _tmp53 = _tmp42 * _tmp48;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp33 - _tmp51 * _tmp53);
  const Scalar _tmp55 = _tmp54 * (-_tmp15 * _tmp33 + _tmp23 * _tmp52 - _tmp50 * _tmp51);
  const Scalar _tmp56 = _tmp38 * _tmp48;
  const Scalar _tmp57 = _tmp54 * (-_tmp51 * _tmp56 + _tmp52);
  const Scalar _tmp58 = _tmp10 + _tmp13;
  const Scalar _tmp59 = _tmp58 + _tmp7;
  const Scalar _tmp60 = _TransformationMatrix[6] + _tmp59 - p_c(2, 0);
  const Scalar _tmp61 = _tmp27 + _tmp28;
  const Scalar _tmp62 = _tmp26 + _tmp61;
  const Scalar _tmp63 = _TransformationMatrix[4] + _tmp62 - p_c(0, 0);
  const Scalar _tmp64 = _tmp19 + _tmp21;
  const Scalar _tmp65 = _tmp18 + _tmp64;
  const Scalar _tmp66 = _TransformationMatrix[5] + _tmp65 - p_c(1, 0);
  const Scalar _tmp67 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2)) +
                                        std::pow(_tmp66, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp68 = _tmp60 * _tmp67;
  const Scalar _tmp69 = _tmp63 * _tmp67;
  const Scalar _tmp70 = _tmp66 * _tmp67;
  const Scalar _tmp71 = -_tmp53 * _tmp69 + _tmp70;
  const Scalar _tmp72 = Scalar(1.0) / (-_tmp56 * _tmp69 - _tmp57 * _tmp71 + _tmp68);
  const Scalar _tmp73 =
      _tmp72 * (-_tmp50 * _tmp69 - _tmp55 * _tmp71 - _tmp59 * _tmp70 + _tmp65 * _tmp68);
  const Scalar _tmp74 = -_tmp55 + _tmp57 * _tmp73;
  const Scalar _tmp75 = _tmp39 + _tmp61;
  const Scalar _tmp76 = _TransformationMatrix[4] + _tmp75 - p_d(0, 0);
  const Scalar _tmp77 = _tmp36 + _tmp58;
  const Scalar _tmp78 = _tmp34 + _tmp64;
  const Scalar _tmp79 = _TransformationMatrix[5] + _tmp78 - p_d(1, 0);
  const Scalar _tmp80 = std::pow(_tmp79, Scalar(2));
  const Scalar _tmp81 = _TransformationMatrix[6] + _tmp77 - p_d(2, 0);
  const Scalar _tmp82 = std::pow(_tmp81, Scalar(2));
  const Scalar _tmp83 = std::pow(_tmp76, Scalar(2));
  const Scalar _tmp84 = _tmp80 + _tmp82 + _tmp83;
  const Scalar _tmp85 = std::pow(_tmp84, Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp86 = _tmp77 * _tmp85;
  const Scalar _tmp87 = _tmp81 * _tmp85;
  const Scalar _tmp88 = -_tmp75 * _tmp87 + _tmp76 * _tmp86;
  const Scalar _tmp89 = std::pow(_tmp84, Scalar(Scalar(-3) / Scalar(2)));
  const Scalar _tmp90 = _tmp83 * _tmp89;
  const Scalar _tmp91 = _tmp76 * _tmp89;
  const Scalar _tmp92 = _tmp79 * _tmp91;
  const Scalar _tmp93 = _tmp53 * _tmp85;
  const Scalar _tmp94 = -_tmp53 * _tmp90 + _tmp92 + _tmp93;
  const Scalar _tmp95 = _tmp50 * _tmp85;
  const Scalar _tmp96 = _tmp77 * _tmp92;
  const Scalar _tmp97 = _tmp81 * _tmp91;
  const Scalar _tmp98 = _tmp78 * _tmp97;
  const Scalar _tmp99 = _tmp56 * _tmp85;
  const Scalar _tmp100 = -_tmp56 * _tmp90 - _tmp57 * _tmp94 + _tmp97 + _tmp99;
  const Scalar _tmp101 = _tmp100 * _tmp73;
  const Scalar _tmp102 = _tmp79 * _tmp85;
  const Scalar _tmp103 = _tmp102 - _tmp76 * _tmp93;
  const Scalar _tmp104 = -_tmp103 * _tmp57 - _tmp76 * _tmp99 + _tmp87;
  const Scalar _tmp105 = _tmp104 * _tmp73;
  const Scalar _tmp106 = _tmp78 * _tmp85;
  const Scalar _tmp107 =
      -_tmp102 * _tmp77 - _tmp103 * _tmp55 - _tmp105 + _tmp106 * _tmp81 - _tmp76 * _tmp95;
  const Scalar _tmp108 = std::pow(_tmp107, Scalar(-2));
  const Scalar _tmp109 =
      _tmp108 * (-_tmp101 - _tmp50 * _tmp90 - _tmp55 * _tmp94 + _tmp95 - _tmp96 + _tmp98);
  const Scalar _tmp110 = _tmp109 * _tmp88;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp112 = _tmp111 * (-_tmp75 * _tmp97 + _tmp77 * _tmp90 - _tmp86);
  const Scalar _tmp113 = _tmp111 * _tmp74;
  const Scalar _tmp114 = _tmp111 * _tmp85;
  const Scalar _tmp115 = _tmp104 * _tmp74;
  const Scalar _tmp116 = -_tmp100 * _tmp113 + _tmp109 * _tmp115;
  const Scalar _tmp117 = _tmp69 * _tmp72;
  const Scalar _tmp118 = _tmp71 * _tmp72;
  const Scalar _tmp119 = _tmp103 * _tmp109;
  const Scalar _tmp120 = _tmp111 * _tmp94;
  const Scalar _tmp121 = -_tmp116 * _tmp118 + _tmp119 * _tmp74 - _tmp120 * _tmp74;
  const Scalar _tmp122 = _tmp51 * _tmp54;
  const Scalar _tmp123 = _tmp76 * _tmp85;
  const Scalar _tmp124 = _tmp109 * _tmp123;
  const Scalar _tmp125 = -_tmp113 * _tmp90 + _tmp114 * _tmp74 - _tmp116 * _tmp117 -
                         _tmp121 * _tmp122 + _tmp124 * _tmp74;
  const Scalar _tmp126 = _tmp41 * _tmp44;
  const Scalar _tmp127 = _tmp49 * (_tmp126 * _tmp37 - _tmp40 * _tmp45);
  const Scalar _tmp128 = _tmp59 * _tmp69 - _tmp62 * _tmp68;
  const Scalar _tmp129 = _tmp128 * _tmp72;
  const Scalar _tmp130 = _tmp54 * (_tmp15 * _tmp51 - _tmp30 * _tmp52);
  const Scalar _tmp131 = _tmp111 * _tmp129;
  const Scalar _tmp132 = _tmp104 * _tmp118;
  const Scalar _tmp133 = _tmp111 * _tmp118;
  const Scalar _tmp134 = _tmp100 * _tmp133 - _tmp109 * _tmp132 + _tmp119 - _tmp120;
  const Scalar _tmp135 = _tmp111 * _tmp90;
  const Scalar _tmp136 = _tmp104 * _tmp117;
  const Scalar _tmp137 = _tmp111 * _tmp117;
  const Scalar _tmp138 =
      _tmp100 * _tmp137 - _tmp109 * _tmp136 + _tmp114 - _tmp122 * _tmp134 + _tmp124 - _tmp135;
  const Scalar _tmp139 = _tmp104 * _tmp129;
  const Scalar _tmp140 = _tmp101 * _tmp111 - _tmp105 * _tmp109;
  const Scalar _tmp141 = -_tmp118 * _tmp140 - _tmp119 * _tmp73 + _tmp120 * _tmp73;
  const Scalar _tmp142 = -_tmp114 * _tmp73 - _tmp117 * _tmp140 - _tmp122 * _tmp141 -
                         _tmp124 * _tmp73 + _tmp135 * _tmp73;
  const Scalar _tmp143 = -_tmp50 + _tmp53 * _tmp55 - _tmp73 * (_tmp53 * _tmp57 - _tmp56);
  const Scalar _tmp144 = _tmp111 * _tmp143;
  const Scalar _tmp145 = _tmp104 * _tmp143;
  const Scalar _tmp146 = -_tmp100 * _tmp144 + _tmp109 * _tmp145;
  const Scalar _tmp147 = -_tmp118 * _tmp146 + _tmp119 * _tmp143 - _tmp120 * _tmp143;
  const Scalar _tmp148 = _tmp114 * _tmp143 - _tmp117 * _tmp146 - _tmp122 * _tmp147 +
                         _tmp124 * _tmp143 - _tmp144 * _tmp90;
  const Scalar _tmp149 = _tmp49 * (-_tmp126 * _tmp35 + _tmp40 * _tmp46);
  const Scalar _tmp150 = _tmp62 * _tmp70 - _tmp65 * _tmp69;
  const Scalar _tmp151 = _tmp150 * _tmp72;
  const Scalar _tmp152 = _tmp54 * (-_tmp23 * _tmp51 + _tmp30 * _tmp33);
  const Scalar _tmp153 = _tmp111 * (_tmp106 + _tmp75 * _tmp92 - _tmp78 * _tmp90);
  const Scalar _tmp154 = _tmp102 * _tmp75 - _tmp106 * _tmp76;
  const Scalar _tmp155 = _tmp109 * _tmp154;
  const Scalar _tmp156 = _tmp111 * _tmp151;
  const Scalar _tmp157 = _tmp104 * _tmp151;
  const Scalar _tmp158 = _tmp79 * _tmp81 * _tmp89;
  const Scalar _tmp159 = _tmp158 * _tmp75;
  const Scalar _tmp160 = _tmp111 * (-_tmp159 + _tmp96);
  const Scalar _tmp161 = -_tmp85;
  const Scalar _tmp162 = _tmp80 * _tmp89;
  const Scalar _tmp163 = _tmp161 + _tmp162 - _tmp53 * _tmp92;
  const Scalar _tmp164 = _tmp158 - _tmp163 * _tmp57 - _tmp56 * _tmp92;
  const Scalar _tmp165 = _tmp164 * _tmp73;
  const Scalar _tmp166 = _tmp108 * (_tmp158 * _tmp78 - _tmp162 * _tmp77 - _tmp163 * _tmp55 -
                                    _tmp165 - _tmp50 * _tmp92 + _tmp86);
  const Scalar _tmp167 = -_tmp144 * _tmp164 + _tmp145 * _tmp166;
  const Scalar _tmp168 = _tmp166 * _tmp88;
  const Scalar _tmp169 = _tmp103 * _tmp166;
  const Scalar _tmp170 = _tmp111 * _tmp163;
  const Scalar _tmp171 = -_tmp118 * _tmp167 + _tmp143 * _tmp169 - _tmp143 * _tmp170;
  const Scalar _tmp172 = _tmp123 * _tmp166;
  const Scalar _tmp173 =
      -_tmp117 * _tmp167 - _tmp122 * _tmp171 + _tmp143 * _tmp172 - _tmp144 * _tmp92;
  const Scalar _tmp174 = -_tmp105 * _tmp166 + _tmp111 * _tmp165;
  const Scalar _tmp175 = -_tmp118 * _tmp174 - _tmp169 * _tmp73 + _tmp170 * _tmp73;
  const Scalar _tmp176 = _tmp111 * _tmp92;
  const Scalar _tmp177 =
      -_tmp117 * _tmp174 - _tmp122 * _tmp175 - _tmp172 * _tmp73 + _tmp176 * _tmp73;
  const Scalar _tmp178 = -_tmp113 * _tmp164 + _tmp115 * _tmp166;
  const Scalar _tmp179 = -_tmp118 * _tmp178 + _tmp169 * _tmp74 - _tmp170 * _tmp74;
  const Scalar _tmp180 =
      -_tmp113 * _tmp92 - _tmp117 * _tmp178 - _tmp122 * _tmp179 + _tmp172 * _tmp74;
  const Scalar _tmp181 = -_tmp132 * _tmp166 + _tmp133 * _tmp164 + _tmp169 - _tmp170;
  const Scalar _tmp182 =
      -_tmp122 * _tmp181 - _tmp136 * _tmp166 + _tmp137 * _tmp164 + _tmp172 - _tmp176;
  const Scalar _tmp183 = _tmp75 * _tmp85;
  const Scalar _tmp184 = _tmp111 * (_tmp162 * _tmp75 - _tmp183 - _tmp78 * _tmp92);
  const Scalar _tmp185 = _tmp154 * _tmp166;
  const Scalar _tmp186 = _tmp82 * _tmp89;
  const Scalar _tmp187 = _tmp158 - _tmp53 * _tmp97;
  const Scalar _tmp188 = _tmp161 + _tmp186 - _tmp187 * _tmp57 - _tmp56 * _tmp97;
  const Scalar _tmp189 = _tmp188 * _tmp73;
  const Scalar _tmp190 = _tmp108 * (-_tmp106 - _tmp158 * _tmp77 + _tmp186 * _tmp78 -
                                    _tmp187 * _tmp55 - _tmp189 - _tmp50 * _tmp97);
  const Scalar _tmp191 = _tmp123 * _tmp190;
  const Scalar _tmp192 = _tmp111 * _tmp97;
  const Scalar _tmp193 = _tmp103 * _tmp190;
  const Scalar _tmp194 = _tmp111 * _tmp187;
  const Scalar _tmp195 = -_tmp132 * _tmp190 + _tmp133 * _tmp188 + _tmp193 - _tmp194;
  const Scalar _tmp196 =
      -_tmp122 * _tmp195 - _tmp136 * _tmp190 + _tmp137 * _tmp188 + _tmp191 - _tmp192;
  const Scalar _tmp197 = _tmp190 * _tmp88;
  const Scalar _tmp198 = _tmp111 * (_tmp183 - _tmp186 * _tmp75 + _tmp77 * _tmp97);
  const Scalar _tmp199 = _tmp72 * (-_tmp105 * _tmp190 + _tmp111 * _tmp189);
  const Scalar _tmp200 = -_tmp193 * _tmp73 + _tmp194 * _tmp73 - _tmp199 * _tmp71;
  const Scalar _tmp201 =
      -_tmp122 * _tmp200 - _tmp191 * _tmp73 + _tmp192 * _tmp73 - _tmp199 * _tmp69;
  const Scalar _tmp202 = -_tmp113 * _tmp188 + _tmp115 * _tmp190;
  const Scalar _tmp203 = -_tmp118 * _tmp202 + _tmp193 * _tmp74 - _tmp194 * _tmp74;
  const Scalar _tmp204 =
      -_tmp113 * _tmp97 - _tmp117 * _tmp202 - _tmp122 * _tmp203 + _tmp191 * _tmp74;
  const Scalar _tmp205 = _tmp72 * (-_tmp144 * _tmp188 + _tmp145 * _tmp190);
  const Scalar _tmp206 = _tmp143 * _tmp193 - _tmp143 * _tmp194 - _tmp205 * _tmp71;
  const Scalar _tmp207 =
      -_tmp122 * _tmp206 + _tmp143 * _tmp191 - _tmp144 * _tmp97 - _tmp205 * _tmp69;
  const Scalar _tmp208 = _tmp154 * _tmp190;
  const Scalar _tmp209 = _tmp111 * (_tmp159 - _tmp98);

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 3> _res;

  _res(0, 0) = _tmp126 * (-_tmp110 * _tmp143 + _tmp112 * _tmp143 + _tmp127 * _tmp148 +
                          _tmp129 * _tmp146 + _tmp130 * _tmp147) +
               _tmp45 * (_tmp110 * _tmp73 - _tmp112 * _tmp73 + _tmp127 * _tmp142 +
                         _tmp129 * _tmp140 + _tmp130 * _tmp141) +
               _tmp46 * (-_tmp110 * _tmp74 + _tmp112 * _tmp74 + _tmp116 * _tmp129 +
                         _tmp121 * _tmp130 + _tmp125 * _tmp127) +
               _tmp47 * (-_tmp100 * _tmp131 + _tmp109 * _tmp139 - _tmp110 + _tmp112 +
                         _tmp127 * _tmp138 + _tmp130 * _tmp134);
  _res(1, 0) = _tmp126 * (_tmp143 * _tmp153 - _tmp143 * _tmp155 + _tmp146 * _tmp151 +
                          _tmp147 * _tmp152 + _tmp148 * _tmp149) +
               _tmp45 * (_tmp140 * _tmp151 + _tmp141 * _tmp152 + _tmp142 * _tmp149 -
                         _tmp153 * _tmp73 + _tmp155 * _tmp73) +
               _tmp46 * (_tmp116 * _tmp151 + _tmp121 * _tmp152 + _tmp125 * _tmp149 +
                         _tmp153 * _tmp74 - _tmp155 * _tmp74) +
               _tmp47 * (-_tmp100 * _tmp156 + _tmp109 * _tmp157 + _tmp134 * _tmp152 +
                         _tmp138 * _tmp149 + _tmp153 - _tmp155);
  _res(0, 1) = _tmp126 * (_tmp127 * _tmp173 + _tmp129 * _tmp167 + _tmp130 * _tmp171 +
                          _tmp143 * _tmp160 - _tmp143 * _tmp168) +
               _tmp45 * (_tmp127 * _tmp177 + _tmp129 * _tmp174 + _tmp130 * _tmp175 -
                         _tmp160 * _tmp73 + _tmp168 * _tmp73) +
               _tmp46 * (_tmp127 * _tmp180 + _tmp129 * _tmp178 + _tmp130 * _tmp179 +
                         _tmp160 * _tmp74 - _tmp168 * _tmp74) +
               _tmp47 * (_tmp127 * _tmp182 + _tmp130 * _tmp181 - _tmp131 * _tmp164 +
                         _tmp139 * _tmp166 + _tmp160 - _tmp168);
  _res(1, 1) = _tmp126 * (_tmp143 * _tmp184 - _tmp143 * _tmp185 + _tmp149 * _tmp173 +
                          _tmp151 * _tmp167 + _tmp152 * _tmp171) +
               _tmp45 * (_tmp149 * _tmp177 + _tmp151 * _tmp174 + _tmp152 * _tmp175 -
                         _tmp184 * _tmp73 + _tmp185 * _tmp73) +
               _tmp46 * (_tmp149 * _tmp180 + _tmp151 * _tmp178 + _tmp152 * _tmp179 +
                         _tmp184 * _tmp74 - _tmp185 * _tmp74) +
               _tmp47 * (_tmp149 * _tmp182 + _tmp152 * _tmp181 - _tmp156 * _tmp164 +
                         _tmp157 * _tmp166 + _tmp184 - _tmp185);
  _res(0, 2) = _tmp126 * (_tmp127 * _tmp207 + _tmp128 * _tmp205 + _tmp130 * _tmp206 -
                          _tmp143 * _tmp197 + _tmp143 * _tmp198) +
               _tmp45 * (_tmp127 * _tmp201 + _tmp128 * _tmp199 + _tmp130 * _tmp200 +
                         _tmp197 * _tmp73 - _tmp198 * _tmp73) +
               _tmp46 * (_tmp127 * _tmp204 + _tmp129 * _tmp202 + _tmp130 * _tmp203 -
                         _tmp197 * _tmp74 + _tmp198 * _tmp74) +
               _tmp47 * (_tmp127 * _tmp196 + _tmp130 * _tmp195 - _tmp131 * _tmp188 +
                         _tmp139 * _tmp190 - _tmp197 + _tmp198);
  _res(1, 2) = _tmp126 * (-_tmp143 * _tmp208 + _tmp143 * _tmp209 + _tmp149 * _tmp207 +
                          _tmp150 * _tmp205 + _tmp152 * _tmp206) +
               _tmp45 * (_tmp149 * _tmp201 + _tmp150 * _tmp199 + _tmp152 * _tmp200 +
                         _tmp208 * _tmp73 - _tmp209 * _tmp73) +
               _tmp46 * (_tmp149 * _tmp204 + _tmp151 * _tmp202 + _tmp152 * _tmp203 -
                         _tmp208 * _tmp74 + _tmp209 * _tmp74) +
               _tmp47 * (_tmp149 * _tmp196 + _tmp152 * _tmp195 - _tmp156 * _tmp188 +
                         _tmp157 * _tmp190 - _tmp208 + _tmp209);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym