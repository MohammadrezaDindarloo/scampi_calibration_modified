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
 * Symbolic function: FK_residual_func_cost2
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
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost2(
    const Scalar fh1, const Scalar fv1, const Scalar ofset0, const Scalar ofset1,
    const Scalar ofset2, const Scalar ofset3, const Eigen::Matrix<Scalar, 4, 1>& distance_measure,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& DeltaRot, const sym::Pose3<Scalar>& TransformationMatrix,
    const Scalar epsilon) {
  // Total ops: 499

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

  // Intermediate terms (160)
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
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp6 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp11 = _tmp2 * _tmp6;
  const Scalar _tmp12 = _tmp10 - _tmp11;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp15 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 +
                        Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999);
  const Scalar _tmp17 = _tmp13 - _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp9;
  const Scalar _tmp19 = _TransformationMatrix[5] + _tmp18;
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp21 = -_tmp20;
  const Scalar _tmp22 = 1 - 2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp24 = _tmp3 * _tmp5;
  const Scalar _tmp25 = _tmp1 * _tmp6;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = -_tmp23 + _tmp27;
  const Scalar _tmp29 = _tmp21 + _tmp28;
  const Scalar _tmp30 = _TransformationMatrix[4] + _tmp29;
  const Scalar _tmp31 = std::pow(Scalar(-_tmp19 + p_a(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp30 + p_a(0, 0)), Scalar(2));
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 =
      -Scalar(0.010999999999999999) * _tmp14 - Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp11;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp34 + _tmp38;
  const Scalar _tmp41 = _tmp23 + _tmp27;
  const Scalar _tmp42 = _tmp21 + _tmp41;
  const Scalar _tmp43 = _TransformationMatrix[4] + _tmp42;
  const Scalar _tmp44 = _tmp17 + _tmp8;
  const Scalar _tmp45 = _TransformationMatrix[5] + _tmp44;
  const Scalar _tmp46 = std::pow(Scalar(-_tmp43 + p_b(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp45 + p_b(1, 0)), Scalar(2));
  const Scalar _tmp47 = _tmp20 + _tmp28;
  const Scalar _tmp48 = Scalar(1.0) * _tmp42;
  const Scalar _tmp49 = Scalar(1.0) * _tmp44;
  const Scalar _tmp50 = -_tmp49;
  const Scalar _tmp51 = _tmp13 + _tmp16;
  const Scalar _tmp52 = _tmp51 + _tmp9;
  const Scalar _tmp53 = _tmp50 + _tmp52;
  const Scalar _tmp54 = _tmp51 + _tmp8;
  const Scalar _tmp55 = Scalar(1.0) / (_tmp50 + _tmp54);
  const Scalar _tmp56 = _tmp20 + _tmp41;
  const Scalar _tmp57 = _tmp48 - _tmp56;
  const Scalar _tmp58 = _tmp55 * _tmp57;
  const Scalar _tmp59 = _tmp53 * _tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (-_tmp47 + _tmp48 - _tmp59);
  const Scalar _tmp61 = Scalar(1.0) * _tmp60;
  const Scalar _tmp62 = _TransformationMatrix[5] + _tmp52;
  const Scalar _tmp63 = _tmp62 - p_d(1, 0);
  const Scalar _tmp64 = _TransformationMatrix[4] + _tmp47;
  const Scalar _tmp65 = _tmp64 - p_d(0, 0);
  const Scalar _tmp66 = std::pow(Scalar(std::pow(_tmp63, Scalar(2)) + std::pow(_tmp65, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp67 = _tmp63 * _tmp66;
  const Scalar _tmp68 = _tmp65 * _tmp66;
  const Scalar _tmp69 = _TransformationMatrix[4] + _tmp56;
  const Scalar _tmp70 = _tmp69 - p_c(0, 0);
  const Scalar _tmp71 = _TransformationMatrix[5] + _tmp54;
  const Scalar _tmp72 = _tmp71 - p_c(1, 0);
  const Scalar _tmp73 = std::pow(Scalar(std::pow(_tmp70, Scalar(2)) + std::pow(_tmp72, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp74 = _tmp72 * _tmp73;
  const Scalar _tmp75 = _tmp70 * _tmp73;
  const Scalar _tmp76 = _tmp45 - p_b(1, 0);
  const Scalar _tmp77 = _tmp43 - p_b(0, 0);
  const Scalar _tmp78 =
      std::sqrt(Scalar(std::pow(_tmp76, Scalar(2)) + std::pow(_tmp77, Scalar(2))));
  const Scalar _tmp79 = Scalar(1.0) / (_tmp78);
  const Scalar _tmp80 = Scalar(1.0) / (_tmp77);
  const Scalar _tmp81 = _tmp78 * _tmp80;
  const Scalar _tmp82 = _tmp81 * (_tmp42 * _tmp76 * _tmp79 - _tmp44 * _tmp77 * _tmp79);
  const Scalar _tmp83 = _tmp54 * _tmp75 - _tmp56 * _tmp74 + _tmp75 * _tmp82;
  const Scalar _tmp84 = _tmp76 * _tmp80;
  const Scalar _tmp85 = -_tmp67 + _tmp68 * _tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (-_tmp74 + _tmp75 * _tmp84);
  const Scalar _tmp87 = _tmp85 * _tmp86;
  const Scalar _tmp88 = -_tmp47 * _tmp67 + _tmp52 * _tmp68 + _tmp68 * _tmp82 - _tmp83 * _tmp87;
  const Scalar _tmp89 = Scalar(1.0) / (_tmp88);
  const Scalar _tmp90 = _tmp36 + _tmp37;
  const Scalar _tmp91 = _tmp35 + _tmp90;
  const Scalar _tmp92 = _tmp34 + _tmp90;
  const Scalar _tmp93 = _tmp40 * _tmp75 - _tmp75 * _tmp92;
  const Scalar _tmp94 = _tmp40 * _tmp84;
  const Scalar _tmp95 = _tmp86 * (_tmp74 * _tmp92 - _tmp75 * _tmp94);
  const Scalar _tmp96 = _tmp67 * _tmp91 - _tmp68 * _tmp94 - _tmp85 * _tmp95;
  const Scalar _tmp97 = _tmp40 * _tmp68 - _tmp58 * _tmp96 - _tmp68 * _tmp91 - _tmp87 * _tmp93;
  const Scalar _tmp98 = _tmp89 * _tmp97;
  const Scalar _tmp99 = _tmp61 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp89;
  const Scalar _tmp101 = _tmp53 * _tmp61;
  const Scalar _tmp102 = -_tmp100 * _tmp96 + _tmp101 * _tmp98;
  const Scalar _tmp103 = Scalar(1.0) * _tmp55;
  const Scalar _tmp104 = _tmp30 - p_a(0, 0);
  const Scalar _tmp105 = _tmp19 - p_a(1, 0);
  const Scalar _tmp106 =
      std::pow(Scalar(std::pow(_tmp104, Scalar(2)) + std::pow(_tmp105, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp107 = _tmp105 * _tmp106;
  const Scalar _tmp108 = _tmp104 * _tmp106;
  const Scalar _tmp109 = fh1 * (_tmp107 * _tmp29 - _tmp108 * _tmp18);
  const Scalar _tmp110 = _tmp84 * _tmp86;
  const Scalar _tmp111 = _tmp84 * _tmp95 + _tmp94;
  const Scalar _tmp112 = _tmp110 * _tmp93 - _tmp111 * _tmp58 - _tmp40;
  const Scalar _tmp113 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp114 = _tmp113 * _tmp88;
  const Scalar _tmp115 = _tmp98 * (_tmp110 * _tmp83 - _tmp112 * _tmp114 - _tmp82);
  const Scalar _tmp116 = _tmp112 + _tmp115;
  const Scalar _tmp117 = _tmp113 * _tmp96;
  const Scalar _tmp118 = _tmp53 * _tmp60;
  const Scalar _tmp119 = _tmp111 + _tmp115 * _tmp118 - _tmp116 * _tmp117;
  const Scalar _tmp120 = _tmp108 * fh1;
  const Scalar _tmp121 = Scalar(1.0) * _tmp86;
  const Scalar _tmp122 = _tmp103 * _tmp57 * _tmp95 - _tmp121 * _tmp93;
  const Scalar _tmp123 = _tmp98 * (-_tmp114 * _tmp122 - _tmp121 * _tmp83);
  const Scalar _tmp124 = _tmp122 + _tmp123;
  const Scalar _tmp125 = -_tmp117 * _tmp124 + _tmp118 * _tmp123 - Scalar(1.0) * _tmp95;
  const Scalar _tmp126 = _tmp107 * fh1;
  const Scalar _tmp127 = _tmp48 + _tmp49 * _tmp58;
  const Scalar _tmp128 = 0;
  const Scalar _tmp129 = _tmp127 * _tmp60;
  const Scalar _tmp130 = -_tmp117 * _tmp128 - _tmp129 * _tmp53 + _tmp50;
  const Scalar _tmp131 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp132 = _tmp39 * fh1;
  const Scalar _tmp133 = _tmp108 * _tmp132 + Scalar(3.29616) * _tmp26 + _tmp29 * fv1;
  const Scalar _tmp134 = -_tmp107 * _tmp132 - Scalar(3.29616) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp135 = _tmp58 * _tmp61;
  const Scalar _tmp136 = _tmp59 * _tmp61 + Scalar(1.0);
  const Scalar _tmp137 = _tmp75 * _tmp86;
  const Scalar _tmp138 = _tmp113 * _tmp85;
  const Scalar _tmp139 = _tmp128 * _tmp138;
  const Scalar _tmp140 = _tmp113 * _tmp128;
  const Scalar _tmp141 = -_tmp124 * _tmp138 + Scalar(1.0);
  const Scalar _tmp142 = _tmp113 * _tmp68;
  const Scalar _tmp143 = -_tmp116 * _tmp138 - _tmp84;
  const Scalar _tmp144 = -_tmp109 * _tmp81 * (_tmp100 * _tmp68 - _tmp100 * _tmp75 * _tmp87) -
                         _tmp120 * _tmp81 * (_tmp116 * _tmp142 + _tmp137 * _tmp143 + Scalar(1.0)) -
                         _tmp126 * _tmp81 * (_tmp124 * _tmp142 + _tmp137 * _tmp141) -
                         _tmp131 * _tmp81 * (-_tmp137 * _tmp139 + _tmp140 * _tmp68);
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = std::asinh(
      _tmp145 * (Scalar(1.0) * _tmp109 * (-_tmp102 * _tmp103 + _tmp99) +
                 Scalar(1.0) * _tmp120 * (-_tmp103 * _tmp119 + _tmp115 * _tmp61) +
                 Scalar(1.0) * _tmp126 * (-_tmp103 * _tmp125 + _tmp123 * _tmp61) +
                 Scalar(1.0) * _tmp131 * (-_tmp103 * _tmp130 - _tmp127 * _tmp61 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp133 * (_tmp101 * _tmp55 - _tmp61) +
                 Scalar(1.0) * _tmp134 * (-_tmp103 * _tmp136 + _tmp135)));
  const Scalar _tmp147 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp148 = _tmp133 * _tmp61;
  const Scalar _tmp149 = _tmp100 * _tmp109;
  const Scalar _tmp150 = _tmp120 * _tmp143 * _tmp86 + _tmp126 * _tmp141 * _tmp86 -
                         _tmp131 * _tmp139 * _tmp86 - _tmp149 * _tmp87;
  const Scalar _tmp151 = Scalar(1.0) / (_tmp150);
  const Scalar _tmp152 =
      std::asinh(_tmp151 * (_tmp102 * _tmp109 * _tmp55 + _tmp119 * _tmp120 * _tmp55 +
                            _tmp125 * _tmp126 * _tmp55 + _tmp130 * _tmp131 * _tmp55 +
                            _tmp134 * _tmp136 * _tmp55 - _tmp148 * _tmp53 * _tmp55));
  const Scalar _tmp153 = std::pow(Scalar(-_tmp69 + p_c(0, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp71 + p_c(1, 0)), Scalar(2));
  const Scalar _tmp154 = Scalar(9.6622558468725703) * _tmp150;
  const Scalar _tmp155 = std::pow(Scalar(-_tmp62 + p_d(1, 0)), Scalar(2)) +
                         std::pow(Scalar(-_tmp64 + p_d(0, 0)), Scalar(2));
  const Scalar _tmp156 =
      _tmp113 * _tmp116 * _tmp120 + _tmp113 * _tmp124 * _tmp126 + _tmp131 * _tmp140 + _tmp149;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp157 * (-_tmp109 * _tmp99 - _tmp115 * _tmp120 * _tmp60 -
                                               _tmp123 * _tmp126 * _tmp60 + _tmp129 * _tmp131 -
                                               _tmp134 * _tmp135 + _tmp148));
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp156;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 * (-std::sinh(Scalar(1.0) * _tmp32) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp31) - _tmp32 * _tmp33))) -
      std::sqrt(Scalar(
          _tmp31 + std::pow(Scalar(-_TransformationMatrix[6] - _tmp39 + p_a(2, 0)), Scalar(2))));
  _res(1, 0) =
      _tmp147 *
          (-std::sinh(Scalar(1.0) * _tmp146) -
           std::sinh(Scalar(0.1034955) * _tmp145 * (-_tmp146 * _tmp147 - std::sqrt(_tmp46)))) -
      std::sqrt(Scalar(
          _tmp46 + std::pow(Scalar(-_TransformationMatrix[6] - _tmp40 + p_b(2, 0)), Scalar(2))));
  _res(2, 0) =
      _tmp154 *
          (-std::sinh(Scalar(1.0) * _tmp152) -
           std::sinh(Scalar(0.1034955) * _tmp151 * (-_tmp152 * _tmp154 - std::sqrt(_tmp153)))) -
      std::sqrt(Scalar(
          _tmp153 + std::pow(Scalar(-_TransformationMatrix[6] - _tmp92 + p_c(2, 0)), Scalar(2))));
  _res(3, 0) =
      _tmp159 *
          (-std::sinh(Scalar(1.0) * _tmp158) -
           std::sinh(Scalar(0.1034955) * _tmp157 * (-std::sqrt(_tmp155) - _tmp158 * _tmp159))) -
      std::sqrt(Scalar(
          _tmp155 + std::pow(Scalar(-_TransformationMatrix[6] - _tmp91 + p_d(2, 0)), Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym