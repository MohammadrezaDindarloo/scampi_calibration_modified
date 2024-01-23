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
 * Symbolic function: FK_residual_func_cost4_wrt_fh1
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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost4WrtFh1(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 620

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

  // Intermediate terms (212)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp2 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 =
      -_DeltaRot[0] * _TransformationMatrix[0] - _DeltaRot[1] * _TransformationMatrix[1] -
      _DeltaRot[2] * _TransformationMatrix[2] + _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp6 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _tmp5 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp12 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp1 * _tmp7;
  const Scalar _tmp15 = _tmp3 * _tmp5;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp10 + _tmp18;
  const Scalar _tmp20 = _TransformationMatrix[5] + _tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp11 +
                        Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999);
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp2 * _tmp7;
  const Scalar _tmp25 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _TransformationMatrix[4] + _tmp30;
  const Scalar _tmp32 = _tmp0 * fv1;
  const Scalar _tmp33 = std::asinh(_tmp32);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * _tmp33;
  const Scalar _tmp35 =
      -Scalar(0.1034955) * _tmp34 * fh1 -
      Scalar(0.1034955) * std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_a(1, 0)), Scalar(2)) +
                                           std::pow(Scalar(-_tmp31 + p_a(0, 0)), Scalar(2))));
  const Scalar _tmp36 = _tmp0 * _tmp35;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = Scalar(1.0) * _tmp33;
  const Scalar _tmp40 = _tmp22 + _tmp29;
  const Scalar _tmp41 = _TransformationMatrix[4] + _tmp40;
  const Scalar _tmp42 = _tmp18 + _tmp9;
  const Scalar _tmp43 = _TransformationMatrix[5] + _tmp42;
  const Scalar _tmp44 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp45 = _tmp27 + _tmp28;
  const Scalar _tmp46 = _tmp22 + _tmp45;
  const Scalar _tmp47 = _TransformationMatrix[4] + _tmp46;
  const Scalar _tmp48 = _tmp47 - p_c(0, 0);
  const Scalar _tmp49 = _tmp13 + _tmp17;
  const Scalar _tmp50 = _tmp49 + _tmp9;
  const Scalar _tmp51 = _TransformationMatrix[5] + _tmp50;
  const Scalar _tmp52 = _tmp51 - p_c(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp48 * _tmp53;
  const Scalar _tmp55 = Scalar(1.0) * _tmp40;
  const Scalar _tmp56 = Scalar(1.0) * _tmp42;
  const Scalar _tmp57 = -_tmp56;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp50 + _tmp57);
  const Scalar _tmp59 = _tmp58 * (-_tmp46 + _tmp55);
  const Scalar _tmp60 = _tmp55 + _tmp56 * _tmp59;
  const Scalar _tmp61 = 0;
  const Scalar _tmp62 = _tmp43 - p_b(1, 0);
  const Scalar _tmp63 = _tmp41 - p_b(0, 0);
  const Scalar _tmp64 = Scalar(1.0) / (_tmp63);
  const Scalar _tmp65 = _tmp62 * _tmp64;
  const Scalar _tmp66 = _tmp52 * _tmp53;
  const Scalar _tmp67 = Scalar(1.0) / (_tmp54 * _tmp65 - _tmp66);
  const Scalar _tmp68 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp71 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp72 = _tmp70 + _tmp71;
  const Scalar _tmp73 = _tmp69 + _tmp72;
  const Scalar _tmp74 = _tmp10 + _tmp49;
  const Scalar _tmp75 = _TransformationMatrix[5] + _tmp74;
  const Scalar _tmp76 = _tmp75 - p_d(1, 0);
  const Scalar _tmp77 = _tmp23 + _tmp45;
  const Scalar _tmp78 = _TransformationMatrix[4] + _tmp77;
  const Scalar _tmp79 = _tmp78 - p_d(0, 0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp70 - _tmp71;
  const Scalar _tmp83 = _tmp68 + _tmp82;
  const Scalar _tmp84 = _tmp76 * _tmp80;
  const Scalar _tmp85 = _tmp65 * _tmp81 - _tmp84;
  const Scalar _tmp86 = _tmp68 + _tmp72;
  const Scalar _tmp87 = _tmp67 * (_tmp54 * _tmp83 - _tmp54 * _tmp86);
  const Scalar _tmp88 = _tmp65 * _tmp83;
  const Scalar _tmp89 = _tmp67 * (-_tmp54 * _tmp88 + _tmp66 * _tmp86);
  const Scalar _tmp90 = _tmp73 * _tmp84 - _tmp81 * _tmp88 - _tmp85 * _tmp89;
  const Scalar _tmp91 = -_tmp59 * _tmp90 - _tmp73 * _tmp81 + _tmp81 * _tmp83 - _tmp85 * _tmp87;
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp85 * _tmp92;
  const Scalar _tmp94 = _tmp61 * _tmp67 * _tmp93;
  const Scalar _tmp95 = _tmp61 * _tmp92;
  const Scalar _tmp96 =
      std::sqrt(Scalar(std::pow(_tmp62, Scalar(2)) + std::pow(_tmp63, Scalar(2))));
  const Scalar _tmp97 = _tmp64 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) * _tmp89;
  const Scalar _tmp99 = _tmp59 * _tmp98 - Scalar(1.0) * _tmp87;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp101 = _tmp97 * (_tmp100 * _tmp40 * _tmp62 - _tmp100 * _tmp42 * _tmp63);
  const Scalar _tmp102 = _tmp67 * (_tmp101 * _tmp54 - _tmp46 * _tmp66 + _tmp50 * _tmp54);
  const Scalar _tmp103 = _tmp101 * _tmp81 - _tmp102 * _tmp85 + _tmp74 * _tmp81 - _tmp77 * _tmp84;
  const Scalar _tmp104 = _tmp103 * _tmp92;
  const Scalar _tmp105 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp106 = _tmp105 * _tmp91;
  const Scalar _tmp107 = _tmp106 * (-Scalar(1.0) * _tmp102 - _tmp104 * _tmp99);
  const Scalar _tmp108 = _tmp107 + _tmp99;
  const Scalar _tmp109 = _tmp67 * (-_tmp108 * _tmp93 + Scalar(1.0));
  const Scalar _tmp110 = _tmp108 * _tmp92;
  const Scalar _tmp111 = _tmp31 - p_a(0, 0);
  const Scalar _tmp112 = _tmp20 - p_a(1, 0);
  const Scalar _tmp113 =
      std::pow(Scalar(std::pow(_tmp111, Scalar(2)) + std::pow(_tmp112, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp114 = _tmp112 * _tmp113;
  const Scalar _tmp115 = _tmp114 * _tmp97 * (_tmp109 * _tmp54 + _tmp110 * _tmp81);
  const Scalar _tmp116 = _tmp65 * _tmp89 + _tmp88;
  const Scalar _tmp117 = -_tmp116 * _tmp59 + _tmp65 * _tmp87 - _tmp83;
  const Scalar _tmp118 = _tmp106 * (-_tmp101 + _tmp102 * _tmp65 - _tmp104 * _tmp117);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = _tmp67 * (-_tmp119 * _tmp93 - _tmp65);
  const Scalar _tmp121 = _tmp119 * _tmp92;
  const Scalar _tmp122 = _tmp111 * _tmp113;
  const Scalar _tmp123 = _tmp122 * _tmp97 * (_tmp120 * _tmp54 + _tmp121 * _tmp81 + Scalar(1.0));
  const Scalar _tmp124 = _tmp114 * _tmp30 - _tmp122 * _tmp19;
  const Scalar _tmp125 = Scalar(1.0) * _tmp105;
  const Scalar _tmp126 = _tmp67 * _tmp85;
  const Scalar _tmp127 = _tmp124 * _tmp97 * (-_tmp125 * _tmp126 * _tmp54 + _tmp125 * _tmp81);
  const Scalar _tmp128 = -_tmp115 * fh1 - _tmp123 * fh1 - _tmp127 * fh1 -
                         _tmp44 * _tmp97 * (-_tmp54 * _tmp94 + _tmp81 * _tmp95);
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = _tmp57 + _tmp74;
  const Scalar _tmp131 = _tmp130 * _tmp59;
  const Scalar _tmp132 = Scalar(1.0) / (-_tmp131 + _tmp55 - _tmp77);
  const Scalar _tmp133 = Scalar(1.0) * _tmp132;
  const Scalar _tmp134 = _tmp106 * _tmp133;
  const Scalar _tmp135 = _tmp58 * (-_tmp125 * _tmp90 + _tmp130 * _tmp134);
  const Scalar _tmp136 = Scalar(1.0) * _tmp124 * (_tmp134 - Scalar(1.0) * _tmp135);
  const Scalar _tmp137 = _tmp90 * _tmp92;
  const Scalar _tmp138 = _tmp130 * _tmp132;
  const Scalar _tmp139 = _tmp116 + _tmp118 * _tmp138 - _tmp119 * _tmp137;
  const Scalar _tmp140 = Scalar(1.0) * _tmp58;
  const Scalar _tmp141 = Scalar(1.0) * _tmp122 * (_tmp118 * _tmp133 - _tmp139 * _tmp140);
  const Scalar _tmp142 = _tmp69 + _tmp82;
  const Scalar _tmp143 = _tmp142 * fh1;
  const Scalar _tmp144 = -_tmp114 * _tmp143 - Scalar(5.1796800000000003) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp145 = _tmp133 * _tmp59;
  const Scalar _tmp146 = _tmp131 * _tmp133 + Scalar(1.0);
  const Scalar _tmp147 = -Scalar(1.0) * _tmp140 * _tmp146 + Scalar(1.0) * _tmp145;
  const Scalar _tmp148 = _tmp107 * _tmp138 - _tmp108 * _tmp137 - _tmp98;
  const Scalar _tmp149 = Scalar(1.0) * _tmp114 * (_tmp107 * _tmp133 - _tmp140 * _tmp148);
  const Scalar _tmp150 = _tmp132 * _tmp60;
  const Scalar _tmp151 = -_tmp130 * _tmp150 - _tmp137 * _tmp61 + _tmp57;
  const Scalar _tmp152 = _tmp122 * _tmp143 + Scalar(5.1796800000000003) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp153 = _tmp130 * _tmp58;
  const Scalar _tmp154 = _tmp133 * _tmp153;
  const Scalar _tmp155 = -Scalar(1.0) * _tmp133 + Scalar(1.0) * _tmp154;
  const Scalar _tmp156 =
      _tmp136 * fh1 + _tmp141 * fh1 + _tmp144 * _tmp147 + _tmp149 * fh1 + _tmp152 * _tmp155 +
      Scalar(1.0) * _tmp44 * (-_tmp133 * _tmp60 - _tmp140 * _tmp151 + Scalar(1.0));
  const Scalar _tmp157 = std::asinh(_tmp129 * _tmp156);
  const Scalar _tmp158 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp159 =
      -_tmp157 * _tmp158 - std::sqrt(Scalar(std::pow(Scalar(-_tmp41 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp43 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp160 = Scalar(0.1034955) * _tmp129;
  const Scalar _tmp161 = _tmp159 * _tmp160;
  const Scalar _tmp162 = Scalar(1.0) * _tmp157;
  const Scalar _tmp163 = -_tmp115 - _tmp123 - _tmp127;
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp165 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp166 = _tmp163 * _tmp165;
  const Scalar _tmp167 = _tmp122 * _tmp142;
  const Scalar _tmp168 = _tmp114 * _tmp142;
  const Scalar _tmp169 =
      (_tmp129 * (_tmp136 + _tmp141 - _tmp147 * _tmp168 + _tmp149 + _tmp155 * _tmp167) -
       _tmp156 * _tmp166) /
      std::sqrt(Scalar(std::pow(_tmp156, Scalar(2)) * _tmp165 + 1));
  const Scalar _tmp170 = _tmp124 * _tmp125;
  const Scalar _tmp171 = _tmp170 * fh1;
  const Scalar _tmp172 = _tmp120 * _tmp122;
  const Scalar _tmp173 = _tmp109 * _tmp114;
  const Scalar _tmp174 = -_tmp126 * _tmp171 + _tmp172 * fh1 + _tmp173 * fh1 - _tmp44 * _tmp94;
  const Scalar _tmp175 = Scalar(1.0) / (_tmp174);
  const Scalar _tmp176 = _tmp146 * _tmp58;
  const Scalar _tmp177 = _tmp124 * _tmp135;
  const Scalar _tmp178 = _tmp133 * _tmp152;
  const Scalar _tmp179 = _tmp122 * _tmp139 * _tmp58;
  const Scalar _tmp180 = _tmp114 * _tmp148 * _tmp58;
  const Scalar _tmp181 = _tmp144 * _tmp176 + _tmp151 * _tmp44 * _tmp58 - _tmp153 * _tmp178 +
                         _tmp177 * fh1 + _tmp179 * fh1 + _tmp180 * fh1;
  const Scalar _tmp182 = std::asinh(_tmp175 * _tmp181);
  const Scalar _tmp183 = Scalar(1.0) * _tmp182;
  const Scalar _tmp184 = Scalar(9.6622558468725703) * _tmp174;
  const Scalar _tmp185 =
      -_tmp182 * _tmp184 - std::sqrt(Scalar(std::pow(Scalar(-_tmp47 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp186 = Scalar(0.1034955) * _tmp175;
  const Scalar _tmp187 = _tmp185 * _tmp186;
  const Scalar _tmp188 = -_tmp126 * _tmp170 + _tmp172 + _tmp173;
  const Scalar _tmp189 = Scalar(9.6622558468725703) * _tmp188;
  const Scalar _tmp190 = std::pow(_tmp174, Scalar(-2));
  const Scalar _tmp191 = _tmp188 * _tmp190;
  const Scalar _tmp192 =
      (_tmp175 * (-_tmp154 * _tmp167 - _tmp168 * _tmp176 + _tmp177 + _tmp179 + _tmp180) -
       _tmp181 * _tmp191) /
      std::sqrt(Scalar(std::pow(_tmp181, Scalar(2)) * _tmp190 + 1));
  const Scalar _tmp193 = _tmp110 * _tmp114;
  const Scalar _tmp194 = _tmp121 * _tmp122;
  const Scalar _tmp195 = _tmp171 + _tmp193 * fh1 + _tmp194 * fh1 + _tmp44 * _tmp95;
  const Scalar _tmp196 = Scalar(1.0) / (_tmp195);
  const Scalar _tmp197 = _tmp107 * _tmp114 * _tmp132;
  const Scalar _tmp198 = _tmp118 * _tmp122 * _tmp132;
  const Scalar _tmp199 = _tmp124 * _tmp134;
  const Scalar _tmp200 = -_tmp144 * _tmp145 + _tmp150 * _tmp44 + _tmp178 - _tmp197 * fh1 -
                         _tmp198 * fh1 - _tmp199 * fh1;
  const Scalar _tmp201 = std::asinh(_tmp196 * _tmp200);
  const Scalar _tmp202 = Scalar(1.0) * _tmp201;
  const Scalar _tmp203 = std::pow(_tmp195, Scalar(-2));
  const Scalar _tmp204 = _tmp170 + _tmp193 + _tmp194;
  const Scalar _tmp205 = _tmp203 * _tmp204;
  const Scalar _tmp206 =
      (_tmp196 * (_tmp133 * _tmp167 + _tmp145 * _tmp168 - _tmp197 - _tmp198 - _tmp199) -
       _tmp200 * _tmp205) /
      std::sqrt(Scalar(std::pow(_tmp200, Scalar(2)) * _tmp203 + 1));
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp195;
  const Scalar _tmp208 =
      -_tmp201 * _tmp207 - std::sqrt(Scalar(std::pow(Scalar(-_tmp75 + p_d(1, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp78 + p_d(0, 0)), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.1034955) * _tmp196;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = Scalar(9.6622558468725703) * _tmp204;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::cosh(_tmp39) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp32 * _tmp38 - _tmp34) -
            _tmp35 * _tmp37) *
               std::cosh(_tmp36)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp36) -
      Scalar(9.6622558468725703) * std::sinh(_tmp39);
  _res(1, 0) = _tmp158 * (-Scalar(1.0) * _tmp169 * std::cosh(_tmp162) -
                          (-Scalar(0.1034955) * _tmp159 * _tmp166 +
                           _tmp160 * (-_tmp157 * _tmp164 - _tmp158 * _tmp169)) *
                              std::cosh(_tmp161)) +
               _tmp164 * (-std::sinh(_tmp161) - std::sinh(_tmp162));
  _res(2, 0) = _tmp184 * (-Scalar(1.0) * _tmp192 * std::cosh(_tmp183) -
                          (-Scalar(0.1034955) * _tmp185 * _tmp191 +
                           _tmp186 * (-_tmp182 * _tmp189 - _tmp184 * _tmp192)) *
                              std::cosh(_tmp187)) +
               _tmp189 * (-std::sinh(_tmp183) - std::sinh(_tmp187));
  _res(3, 0) = _tmp207 * (-Scalar(1.0) * _tmp206 * std::cosh(_tmp202) -
                          (-Scalar(0.1034955) * _tmp205 * _tmp208 +
                           _tmp209 * (-_tmp201 * _tmp211 - _tmp206 * _tmp207)) *
                              std::cosh(_tmp210)) +
               _tmp211 * (-std::sinh(_tmp202) - std::sinh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
