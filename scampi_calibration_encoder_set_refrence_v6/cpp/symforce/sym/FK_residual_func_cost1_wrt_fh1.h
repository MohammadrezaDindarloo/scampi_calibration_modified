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
 * Symbolic function: FK_residual_func_cost1_wrt_fh1
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost1WrtFh1(
    const Scalar fh1, const Scalar fv1, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Scalar epsilon) {
  // Total ops: 638

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (218)
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
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 = _tmp4 * _tmp5;
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _tmp2 * _tmp4;
  const Scalar _tmp10 = _tmp0 * _tmp5;
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _TransformationMatrix[5] + _tmp17;
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 2 * _tmp0 * _tmp4;
  const Scalar _tmp23 = _tmp1 * _tmp5;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp3 - Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _TransformationMatrix[4] + _tmp28;
  const Scalar _tmp30 = Scalar(1.0) / (fh1);
  const Scalar _tmp31 = _tmp30 * fv1;
  const Scalar _tmp32 = std::asinh(_tmp31);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * _tmp32;
  const Scalar _tmp34 =
      -_tmp33 * fh1 - std::sqrt(Scalar(std::pow(Scalar(-_tmp18 + p_a(1, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp29 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp35 = Scalar(0.1034955) * _tmp30;
  const Scalar _tmp36 = _tmp34 * _tmp35;
  const Scalar _tmp37 = Scalar(0.1034955) * p_a(2, 0);
  const Scalar _tmp38 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp39 =
      std::pow(Scalar(_tmp38 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = Scalar(1.0) * _tmp32;
  const Scalar _tmp41 = _tmp20 + _tmp27;
  const Scalar _tmp42 = _TransformationMatrix[4] + _tmp41;
  const Scalar _tmp43 = _tmp16 + _tmp7;
  const Scalar _tmp44 = _TransformationMatrix[5] + _tmp43;
  const Scalar _tmp45 = _tmp25 + _tmp26;
  const Scalar _tmp46 = _tmp21 + _tmp45;
  const Scalar _tmp47 = Scalar(1.0) * _tmp41;
  const Scalar _tmp48 = Scalar(1.0) * _tmp43;
  const Scalar _tmp49 = -_tmp48;
  const Scalar _tmp50 = _tmp12 + _tmp15;
  const Scalar _tmp51 = _tmp50 + _tmp8;
  const Scalar _tmp52 = _tmp49 + _tmp51;
  const Scalar _tmp53 = _tmp50 + _tmp7;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp49 + _tmp53);
  const Scalar _tmp55 = _tmp20 + _tmp45;
  const Scalar _tmp56 = _tmp47 - _tmp55;
  const Scalar _tmp57 = _tmp54 * _tmp56;
  const Scalar _tmp58 = _tmp52 * _tmp57;
  const Scalar _tmp59 = Scalar(1.0) / (-_tmp46 + _tmp47 - _tmp58);
  const Scalar _tmp60 = Scalar(1.0) * _tmp59;
  const Scalar _tmp61 = _TransformationMatrix[5] + _tmp51;
  const Scalar _tmp62 = _tmp61 - p_d(1, 0);
  const Scalar _tmp63 = _TransformationMatrix[4] + _tmp46;
  const Scalar _tmp64 = _tmp63 - p_d(0, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp62 * _tmp65;
  const Scalar _tmp67 = _tmp64 * _tmp65;
  const Scalar _tmp68 = _tmp44 - p_b(1, 0);
  const Scalar _tmp69 = _tmp42 - p_b(0, 0);
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp68 * _tmp70;
  const Scalar _tmp72 = -_tmp66 + _tmp67 * _tmp71;
  const Scalar _tmp73 = _TransformationMatrix[4] + _tmp55;
  const Scalar _tmp74 = _tmp73 - p_c(0, 0);
  const Scalar _tmp75 = _TransformationMatrix[5] + _tmp53;
  const Scalar _tmp76 = _tmp75 - p_c(1, 0);
  const Scalar _tmp77 = std::pow(Scalar(std::pow(_tmp74, Scalar(2)) + std::pow(_tmp76, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp78 = _tmp74 * _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp77;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp71 * _tmp78 - _tmp79);
  const Scalar _tmp81 =
      std::sqrt(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp69, Scalar(2))));
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = _tmp70 * _tmp81;
  const Scalar _tmp84 = _tmp83 * (_tmp41 * _tmp68 * _tmp82 - _tmp43 * _tmp69 * _tmp82);
  const Scalar _tmp85 = _tmp80 * (_tmp53 * _tmp78 - _tmp55 * _tmp79 + _tmp78 * _tmp84);
  const Scalar _tmp86 = -_tmp46 * _tmp66 + _tmp51 * _tmp67 + _tmp67 * _tmp84 - _tmp72 * _tmp85;
  const Scalar _tmp87 = Scalar(1.0) / (_tmp86);
  const Scalar _tmp88 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp89 = -_tmp88;
  const Scalar _tmp90 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp91 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp92 = _tmp90 + _tmp91;
  const Scalar _tmp93 = _tmp89 + _tmp92;
  const Scalar _tmp94 = _tmp90 - _tmp91;
  const Scalar _tmp95 = _tmp88 + _tmp94;
  const Scalar _tmp96 = _tmp88 + _tmp92;
  const Scalar _tmp97 = _tmp80 * (_tmp78 * _tmp95 - _tmp78 * _tmp96);
  const Scalar _tmp98 = _tmp71 * _tmp95;
  const Scalar _tmp99 = _tmp80 * (-_tmp78 * _tmp98 + _tmp79 * _tmp96);
  const Scalar _tmp100 = _tmp66 * _tmp93 - _tmp67 * _tmp98 - _tmp72 * _tmp99;
  const Scalar _tmp101 = -_tmp100 * _tmp57 - _tmp67 * _tmp93 + _tmp67 * _tmp95 - _tmp72 * _tmp97;
  const Scalar _tmp102 = _tmp101 * _tmp87;
  const Scalar _tmp103 = _tmp102 * _tmp60;
  const Scalar _tmp104 = Scalar(1.0) * _tmp87;
  const Scalar _tmp105 = -_tmp100 * _tmp104 + _tmp103 * _tmp52;
  const Scalar _tmp106 = Scalar(1.0) * _tmp54;
  const Scalar _tmp107 = _tmp29 - p_a(0, 0);
  const Scalar _tmp108 = _tmp18 - p_a(1, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp108 * _tmp109;
  const Scalar _tmp111 = _tmp107 * _tmp109;
  const Scalar _tmp112 = _tmp110 * _tmp28 - _tmp111 * _tmp17;
  const Scalar _tmp113 = Scalar(1.0) * _tmp112;
  const Scalar _tmp114 = _tmp113 * (_tmp103 - _tmp105 * _tmp106);
  const Scalar _tmp115 = _tmp71 * _tmp99 + _tmp98;
  const Scalar _tmp116 = -_tmp115 * _tmp57 + _tmp71 * _tmp97 - _tmp95;
  const Scalar _tmp117 = Scalar(1.0) / (_tmp101);
  const Scalar _tmp118 = _tmp117 * _tmp86;
  const Scalar _tmp119 = _tmp102 * (-_tmp116 * _tmp118 + _tmp71 * _tmp85 - _tmp84);
  const Scalar _tmp120 = _tmp116 + _tmp119;
  const Scalar _tmp121 = _tmp100 * _tmp117;
  const Scalar _tmp122 = _tmp52 * _tmp59;
  const Scalar _tmp123 = _tmp115 + _tmp119 * _tmp122 - _tmp120 * _tmp121;
  const Scalar _tmp124 = Scalar(1.0) * _tmp111 * (-_tmp106 * _tmp123 + _tmp119 * _tmp60);
  const Scalar _tmp125 = _tmp106 * _tmp56 * _tmp99 - Scalar(1.0) * _tmp97;
  const Scalar _tmp126 = _tmp102 * (-_tmp118 * _tmp125 - Scalar(1.0) * _tmp85);
  const Scalar _tmp127 = _tmp125 + _tmp126;
  const Scalar _tmp128 = -_tmp121 * _tmp127 + _tmp122 * _tmp126 - Scalar(1.0) * _tmp99;
  const Scalar _tmp129 = Scalar(1.0) * _tmp110 * (-_tmp106 * _tmp128 + _tmp126 * _tmp60);
  const Scalar _tmp130 = _tmp47 + _tmp48 * _tmp57;
  const Scalar _tmp131 = 0;
  const Scalar _tmp132 = _tmp130 * _tmp59;
  const Scalar _tmp133 = -_tmp121 * _tmp131 - _tmp132 * _tmp52 + _tmp49;
  const Scalar _tmp134 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp135 = _tmp89 + _tmp94;
  const Scalar _tmp136 = _tmp135 * fh1;
  const Scalar _tmp137 = _tmp111 * _tmp136 + Scalar(3.29616) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp138 = _tmp52 * _tmp54;
  const Scalar _tmp139 = _tmp138 * _tmp60;
  const Scalar _tmp140 = Scalar(1.0) * _tmp139 - Scalar(1.0) * _tmp60;
  const Scalar _tmp141 = -Scalar(3.29616) * _tmp11 - _tmp110 * _tmp136 - _tmp17 * fv1;
  const Scalar _tmp142 = _tmp57 * _tmp60;
  const Scalar _tmp143 = _tmp58 * _tmp60 + Scalar(1.0);
  const Scalar _tmp144 = -Scalar(1.0) * _tmp106 * _tmp143 + Scalar(1.0) * _tmp142;
  const Scalar _tmp145 =
      _tmp114 * fh1 + _tmp124 * fh1 + _tmp129 * fh1 +
      Scalar(1.0) * _tmp134 * (-_tmp106 * _tmp133 - _tmp130 * _tmp60 + Scalar(1.0)) +
      _tmp137 * _tmp140 + _tmp141 * _tmp144;
  const Scalar _tmp146 = _tmp117 * _tmp131;
  const Scalar _tmp147 = _tmp72 * _tmp80;
  const Scalar _tmp148 = _tmp147 * _tmp78;
  const Scalar _tmp149 = _tmp117 * _tmp72;
  const Scalar _tmp150 = _tmp80 * (-_tmp127 * _tmp149 + Scalar(1.0));
  const Scalar _tmp151 = _tmp117 * _tmp127;
  const Scalar _tmp152 = _tmp110 * _tmp83 * (_tmp150 * _tmp78 + _tmp151 * _tmp67);
  const Scalar _tmp153 = _tmp80 * (-_tmp120 * _tmp149 - _tmp71);
  const Scalar _tmp154 = _tmp117 * _tmp120;
  const Scalar _tmp155 = _tmp111 * _tmp83 * (_tmp153 * _tmp78 + _tmp154 * _tmp67 + Scalar(1.0));
  const Scalar _tmp156 = _tmp112 * _tmp83 * (-_tmp104 * _tmp148 + _tmp104 * _tmp67);
  const Scalar _tmp157 = -_tmp134 * _tmp83 * (-_tmp146 * _tmp148 + _tmp146 * _tmp67) -
                         _tmp152 * fh1 - _tmp155 * fh1 - _tmp156 * fh1;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 = std::asinh(_tmp145 * _tmp158);
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp157;
  const Scalar _tmp161 =
      -_tmp159 * _tmp160 - std::sqrt(Scalar(std::pow(Scalar(-_tmp42 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp44 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp162 = std::pow(_tmp157, Scalar(-2));
  const Scalar _tmp163 = -_tmp152 - _tmp155 - _tmp156;
  const Scalar _tmp164 = _tmp162 * _tmp163;
  const Scalar _tmp165 = Scalar(0.1034955) * _tmp164;
  const Scalar _tmp166 = _tmp111 * _tmp135;
  const Scalar _tmp167 = _tmp110 * _tmp135;
  const Scalar _tmp168 = (-_tmp145 * _tmp164 + _tmp158 * (_tmp114 + _tmp124 + _tmp129 +
                                                          _tmp140 * _tmp166 - _tmp144 * _tmp167)) /
                         std::sqrt(Scalar(std::pow(_tmp145, Scalar(2)) * _tmp162 + 1));
  const Scalar _tmp169 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp170 = Scalar(0.1034955) * _tmp158;
  const Scalar _tmp171 = _tmp161 * _tmp170;
  const Scalar _tmp172 = Scalar(1.0) * _tmp159;
  const Scalar _tmp173 = _tmp111 * _tmp153;
  const Scalar _tmp174 = _tmp113 * _tmp87;
  const Scalar _tmp175 = _tmp110 * _tmp150;
  const Scalar _tmp176 = -_tmp147 * _tmp174 + _tmp173 + _tmp175;
  const Scalar _tmp177 = _tmp134 * _tmp146;
  const Scalar _tmp178 = _tmp174 * fh1;
  const Scalar _tmp179 = -_tmp147 * _tmp177 - _tmp147 * _tmp178 + _tmp173 * fh1 + _tmp175 * fh1;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp182 = _tmp143 * _tmp54;
  const Scalar _tmp183 = _tmp105 * _tmp112 * _tmp54;
  const Scalar _tmp184 = _tmp137 * _tmp60;
  const Scalar _tmp185 = _tmp111 * _tmp123 * _tmp54;
  const Scalar _tmp186 = _tmp110 * _tmp128 * _tmp54;
  const Scalar _tmp187 = _tmp133 * _tmp134 * _tmp54 - _tmp138 * _tmp184 + _tmp141 * _tmp182 +
                         _tmp183 * fh1 + _tmp185 * fh1 + _tmp186 * fh1;
  const Scalar _tmp188 = std::asinh(_tmp180 * _tmp187);
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp188;
  const Scalar _tmp190 =
      -_tmp179 * _tmp189 - std::sqrt(Scalar(std::pow(Scalar(-_tmp73 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp75 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp191 = _tmp181 * _tmp190;
  const Scalar _tmp192 = Scalar(1.0) * _tmp188;
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp194 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp195 = _tmp176 * _tmp194;
  const Scalar _tmp196 =
      (_tmp180 * (-_tmp139 * _tmp166 - _tmp167 * _tmp182 + _tmp183 + _tmp185 + _tmp186) -
       _tmp187 * _tmp195) /
      std::sqrt(Scalar(std::pow(_tmp187, Scalar(2)) * _tmp194 + 1));
  const Scalar _tmp197 = Scalar(0.1034955) * _tmp195;
  const Scalar _tmp198 = _tmp110 * _tmp126 * _tmp59;
  const Scalar _tmp199 = _tmp111 * _tmp119 * _tmp59;
  const Scalar _tmp200 = _tmp103 * _tmp112;
  const Scalar _tmp201 = _tmp132 * _tmp134 - _tmp141 * _tmp142 + _tmp184 - _tmp198 * fh1 -
                         _tmp199 * fh1 - _tmp200 * fh1;
  const Scalar _tmp202 = _tmp110 * _tmp151;
  const Scalar _tmp203 = _tmp111 * _tmp154;
  const Scalar _tmp204 = _tmp177 + _tmp178 + _tmp202 * fh1 + _tmp203 * fh1;
  const Scalar _tmp205 = Scalar(1.0) / (_tmp204);
  const Scalar _tmp206 = std::asinh(_tmp201 * _tmp205);
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp204;
  const Scalar _tmp208 =
      -_tmp206 * _tmp207 - std::sqrt(Scalar(std::pow(Scalar(-_tmp61 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.1034955) * _tmp205;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = std::pow(_tmp204, Scalar(-2));
  const Scalar _tmp212 = _tmp174 + _tmp202 + _tmp203;
  const Scalar _tmp213 = _tmp211 * _tmp212;
  const Scalar _tmp214 = (-_tmp201 * _tmp213 + _tmp205 * (_tmp142 * _tmp167 + _tmp166 * _tmp60 -
                                                          _tmp198 - _tmp199 - _tmp200)) /
                         std::sqrt(Scalar(std::pow(_tmp201, Scalar(2)) * _tmp211 + 1));
  const Scalar _tmp215 = Scalar(9.6622558468725703) * _tmp212;
  const Scalar _tmp216 = Scalar(0.1034955) * _tmp213;
  const Scalar _tmp217 = Scalar(1.0) * _tmp206;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(9.6622558468725703) * _tmp30 * _tmp37 -
               Scalar(9.6622558468725703) * fh1 *
                   (-_tmp37 * _tmp38 - Scalar(1.0) * _tmp38 * _tmp39 * fv1 * std::sinh(_tmp40) -
                    (-Scalar(0.1034955) * _tmp34 * _tmp38 +
                     _tmp35 * (Scalar(9.6622558468725703) * _tmp31 * _tmp39 - _tmp33)) *
                        std::sinh(_tmp36)) +
               Scalar(9.6622558468725703) * std::cosh(_tmp36) -
               Scalar(9.6622558468725703) * std::cosh(_tmp40);
  _res(1, 0) =
      -_tmp160 * (-_tmp165 * p_b(2, 0) + Scalar(1.0) * _tmp168 * std::sinh(_tmp172) -
                  (-_tmp161 * _tmp165 + _tmp170 * (-_tmp159 * _tmp169 - _tmp160 * _tmp168)) *
                      std::sinh(_tmp171)) -
      _tmp169 * (_tmp170 * p_b(2, 0) - std::cosh(_tmp171) + std::cosh(_tmp172));
  _res(2, 0) = -Scalar(9.6622558468725703) * _tmp176 *
                   (_tmp181 * p_c(2, 0) - std::cosh(_tmp191) + std::cosh(_tmp192)) -
               _tmp193 * (Scalar(1.0) * _tmp196 * std::sinh(_tmp192) - _tmp197 * p_c(2, 0) -
                          (_tmp181 * (-_tmp176 * _tmp189 - _tmp193 * _tmp196) - _tmp190 * _tmp197) *
                              std::sinh(_tmp191));
  _res(3, 0) =
      -_tmp207 * (Scalar(1.0) * _tmp214 * std::sinh(_tmp217) - _tmp216 * p_d(2, 0) -
                  (-_tmp208 * _tmp216 + _tmp209 * (-_tmp206 * _tmp215 - _tmp207 * _tmp214)) *
                      std::sinh(_tmp210)) -
      _tmp215 * (_tmp209 * p_d(2, 0) - std::cosh(_tmp210) + std::cosh(_tmp217));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
