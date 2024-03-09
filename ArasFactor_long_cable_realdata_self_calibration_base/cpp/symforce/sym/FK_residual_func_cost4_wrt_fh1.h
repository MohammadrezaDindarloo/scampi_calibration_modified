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
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost4WrtFh1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const sym::Pose3<Scalar>& TransformationMatrix, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const Scalar epsilon) {
  // Total ops: 488

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _TransformationMatrix = TransformationMatrix.Data();

  // Intermediate terms (164)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _tmp0 * p_a(2, 0);
  const Scalar _tmp2 =
      _DeltaRot[0] * _TransformationMatrix[2] + _DeltaRot[1] * _TransformationMatrix[3] -
      _DeltaRot[2] * _TransformationMatrix[0] + _DeltaRot[3] * _TransformationMatrix[1];
  const Scalar _tmp3 =
      _DeltaRot[0] * _TransformationMatrix[3] - _DeltaRot[1] * _TransformationMatrix[2] +
      _DeltaRot[2] * _TransformationMatrix[1] + _DeltaRot[3] * _TransformationMatrix[0];
  const Scalar _tmp4 = 2 * _tmp3;
  const Scalar _tmp5 = _tmp2 * _tmp4;
  const Scalar _tmp6 =
      -_DeltaRot[0] * _TransformationMatrix[1] + _DeltaRot[1] * _TransformationMatrix[0] +
      _DeltaRot[2] * _TransformationMatrix[3] + _DeltaRot[3] * _TransformationMatrix[2];
  const Scalar _tmp7 =
      -2 * _DeltaRot[0] * _TransformationMatrix[0] - 2 * _DeltaRot[1] * _TransformationMatrix[1] -
      2 * _DeltaRot[2] * _TransformationMatrix[2] + 2 * _DeltaRot[3] * _TransformationMatrix[3];
  const Scalar _tmp8 = _tmp6 * _tmp7;
  const Scalar _tmp9 = Scalar(0.20999999999999999) * _tmp5 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp12 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp11 +
                        Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999);
  const Scalar _tmp14 = 2 * _tmp2 * _tmp6;
  const Scalar _tmp15 = _tmp3 * _tmp7;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp10 + _tmp18;
  const Scalar _tmp20 = _TransformationMatrix[5] + _tmp19;
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp5 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp4 * _tmp6;
  const Scalar _tmp24 = _tmp2 * _tmp7;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp29 = _tmp26 - _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _TransformationMatrix[4] + _tmp30;
  const Scalar _tmp32 =
      std::cosh(Scalar(0.71007031138673404) * _tmp0 *
                (-Scalar(1.4083112389913199) * fh1 * std::asinh(_tmp0 * fv1) -
                 std::sqrt(Scalar(std::pow(Scalar(-_tmp20 + p_a(1, 0)), Scalar(2)) +
                                  std::pow(Scalar(-_tmp31 + p_a(0, 0)), Scalar(2))))));
  const Scalar _tmp33 = _tmp26 + _tmp28;
  const Scalar _tmp34 = _tmp21 + _tmp33;
  const Scalar _tmp35 = _TransformationMatrix[4] + _tmp34;
  const Scalar _tmp36 = _tmp35 - p_c(0, 0);
  const Scalar _tmp37 = _tmp13 + _tmp17;
  const Scalar _tmp38 = _tmp37 + _tmp9;
  const Scalar _tmp39 = _TransformationMatrix[5] + _tmp38;
  const Scalar _tmp40 = _tmp39 - p_c(1, 0);
  const Scalar _tmp41 = std::pow(Scalar(std::pow(_tmp36, Scalar(2)) + std::pow(_tmp40, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp42 = _tmp36 * _tmp41;
  const Scalar _tmp43 = _tmp18 + _tmp9;
  const Scalar _tmp44 = _TransformationMatrix[5] + _tmp43;
  const Scalar _tmp45 = _tmp44 - p_b(1, 0);
  const Scalar _tmp46 = _tmp22 + _tmp33;
  const Scalar _tmp47 = _TransformationMatrix[4] + _tmp46;
  const Scalar _tmp48 = _tmp47 - p_b(0, 0);
  const Scalar _tmp49 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp50 = _tmp45 * _tmp49;
  const Scalar _tmp51 = _tmp40 * _tmp41;
  const Scalar _tmp52 = Scalar(1.0) / (_tmp42 * _tmp50 - _tmp51);
  const Scalar _tmp53 = _tmp10 + _tmp37;
  const Scalar _tmp54 = _TransformationMatrix[5] + _tmp53;
  const Scalar _tmp55 = _tmp54 - p_d(1, 0);
  const Scalar _tmp56 = _tmp21 + _tmp29;
  const Scalar _tmp57 = _TransformationMatrix[4] + _tmp56;
  const Scalar _tmp58 = _tmp57 - p_d(0, 0);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp55, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp55 * _tmp59;
  const Scalar _tmp61 = _tmp58 * _tmp59;
  const Scalar _tmp62 = _tmp50 * _tmp61 - _tmp60;
  const Scalar _tmp63 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp64 =
      -Scalar(0.010999999999999999) * _tmp11 - Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp65 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp66 = _tmp64 - _tmp65;
  const Scalar _tmp67 = _tmp63 + _tmp66;
  const Scalar _tmp68 = -_tmp63;
  const Scalar _tmp69 = _tmp64 + _tmp65;
  const Scalar _tmp70 = _tmp68 + _tmp69;
  const Scalar _tmp71 = _tmp63 + _tmp69;
  const Scalar _tmp72 = _tmp42 * _tmp70 - _tmp42 * _tmp71;
  const Scalar _tmp73 = _tmp52 * _tmp62;
  const Scalar _tmp74 = _tmp50 * _tmp70;
  const Scalar _tmp75 = _tmp52 * (-_tmp42 * _tmp74 + _tmp51 * _tmp71);
  const Scalar _tmp76 = _tmp60 * _tmp67 - _tmp61 * _tmp74 - _tmp62 * _tmp75;
  const Scalar _tmp77 = Scalar(1.0) * _tmp43;
  const Scalar _tmp78 = -_tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp38 + _tmp78);
  const Scalar _tmp80 = Scalar(1.0) * _tmp46;
  const Scalar _tmp81 = -_tmp34 + _tmp80;
  const Scalar _tmp82 = _tmp79 * _tmp81;
  const Scalar _tmp83 = -_tmp61 * _tmp67 + _tmp61 * _tmp70 - _tmp72 * _tmp73 - _tmp76 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp83);
  const Scalar _tmp85 =
      std::sqrt(Scalar(std::pow(_tmp45, Scalar(2)) + std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp49 * _tmp85;
  const Scalar _tmp88 = _tmp87 * (-_tmp43 * _tmp48 * _tmp86 + _tmp45 * _tmp46 * _tmp86);
  const Scalar _tmp89 = -_tmp34 * _tmp51 + _tmp38 * _tmp42 + _tmp42 * _tmp88;
  const Scalar _tmp90 = _tmp50 * _tmp52;
  const Scalar _tmp91 = _tmp50 * _tmp75 + _tmp74;
  const Scalar _tmp92 = -_tmp70 + _tmp72 * _tmp90 - _tmp82 * _tmp91;
  const Scalar _tmp93 = _tmp53 * _tmp61 - _tmp56 * _tmp60 + _tmp61 * _tmp88 - _tmp73 * _tmp89;
  const Scalar _tmp94 = _tmp84 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp96 = _tmp83 * _tmp95;
  const Scalar _tmp97 = _tmp96 * (-_tmp88 + _tmp89 * _tmp90 - _tmp92 * _tmp94);
  const Scalar _tmp98 = _tmp84 * (_tmp92 + _tmp97);
  const Scalar _tmp99 = _tmp52 * (-_tmp50 - _tmp62 * _tmp98);
  const Scalar _tmp100 = _tmp31 - p_a(0, 0);
  const Scalar _tmp101 = _tmp20 - p_a(1, 0);
  const Scalar _tmp102 =
      std::pow(Scalar(std::pow(_tmp100, Scalar(2)) + std::pow(_tmp101, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp103 = _tmp100 * _tmp102;
  const Scalar _tmp104 = _tmp103 * _tmp87 * (_tmp42 * _tmp99 + _tmp61 * _tmp98 + Scalar(1.0));
  const Scalar _tmp105 = Scalar(1.0) * _tmp52;
  const Scalar _tmp106 = Scalar(1.0) * _tmp79;
  const Scalar _tmp107 = -_tmp105 * _tmp72 + _tmp106 * _tmp75 * _tmp81;
  const Scalar _tmp108 = _tmp96 * (-_tmp105 * _tmp89 - _tmp107 * _tmp94);
  const Scalar _tmp109 = _tmp84 * (_tmp107 + _tmp108);
  const Scalar _tmp110 = _tmp52 * (-_tmp109 * _tmp62 + Scalar(1.0));
  const Scalar _tmp111 = _tmp101 * _tmp102;
  const Scalar _tmp112 = _tmp111 * _tmp87 * (_tmp109 * _tmp61 + _tmp110 * _tmp42);
  const Scalar _tmp113 = -_tmp103 * _tmp19 + _tmp111 * _tmp30;
  const Scalar _tmp114 = Scalar(1.0) * _tmp95;
  const Scalar _tmp115 = _tmp42 * _tmp73;
  const Scalar _tmp116 = _tmp87 * (-_tmp114 * _tmp115 + _tmp114 * _tmp61);
  const Scalar _tmp117 = -_tmp104 - _tmp112 - _tmp113 * _tmp116;
  const Scalar _tmp118 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp119 = _tmp77 * _tmp82 + _tmp80;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp113 * fh1;
  const Scalar _tmp122 = -_tmp104 * fh1 - _tmp112 * fh1 - _tmp116 * _tmp121 -
                         _tmp118 * _tmp87 * (-_tmp115 * _tmp120 + _tmp120 * _tmp61);
  const Scalar _tmp123 = Scalar(1.0) / (_tmp122);
  const Scalar _tmp124 = Scalar(0.71007031138673404) * _tmp123;
  const Scalar _tmp125 = fh1 * (_tmp66 + _tmp68);
  const Scalar _tmp126 = -_tmp111 * _tmp125 - Scalar(40.024799999999999) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp127 = _tmp53 + _tmp78;
  const Scalar _tmp128 = _tmp127 * _tmp82;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 - _tmp56 + _tmp80);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp130 * _tmp82;
  const Scalar _tmp132 = _tmp128 * _tmp130 + Scalar(1.0);
  const Scalar _tmp133 = _tmp130 * _tmp96;
  const Scalar _tmp134 = -_tmp114 * _tmp76 + _tmp127 * _tmp133;
  const Scalar _tmp135 = _tmp127 * _tmp129;
  const Scalar _tmp136 = _tmp135 * _tmp97 - _tmp76 * _tmp98 + _tmp91;
  const Scalar _tmp137 = Scalar(1.0) * fh1;
  const Scalar _tmp138 = _tmp108 * _tmp135 - _tmp109 * _tmp76 - Scalar(1.0) * _tmp75;
  const Scalar _tmp139 = _tmp127 * _tmp79;
  const Scalar _tmp140 = _tmp103 * _tmp125 + Scalar(40.024799999999999) * _tmp25 + _tmp30 * fv1;
  const Scalar _tmp141 = _tmp119 * _tmp129;
  const Scalar _tmp142 = -_tmp120 * _tmp76 - _tmp127 * _tmp141 + _tmp78;
  const Scalar _tmp143 = std::cosh(
      _tmp124 *
      (-Scalar(1.4083112389913199) * _tmp122 *
           std::asinh(_tmp123 * (_tmp103 * _tmp137 * (-_tmp106 * _tmp136 + _tmp130 * _tmp97) +
                                 _tmp111 * _tmp137 * (-_tmp106 * _tmp138 + _tmp108 * _tmp130) +
                                 Scalar(1.0) * _tmp118 *
                                     (-_tmp106 * _tmp142 - _tmp119 * _tmp130 + Scalar(1.0)) +
                                 Scalar(1.0) * _tmp121 * (-_tmp106 * _tmp134 + _tmp133) +
                                 Scalar(1.0) * _tmp126 * (-_tmp106 * _tmp132 + _tmp131) +
                                 Scalar(1.0) * _tmp140 * (_tmp130 * _tmp139 - _tmp130))) -
       std::sqrt(Scalar(std::pow(Scalar(-_tmp44 + p_b(1, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp47 + p_b(0, 0)), Scalar(2))))));
  const Scalar _tmp144 = _tmp113 * _tmp114;
  const Scalar _tmp145 = _tmp144 * fh1;
  const Scalar _tmp146 = _tmp103 * _tmp99;
  const Scalar _tmp147 = _tmp118 * _tmp120;
  const Scalar _tmp148 = _tmp110 * _tmp111;
  const Scalar _tmp149 = -_tmp145 * _tmp73 + _tmp146 * fh1 - _tmp147 * _tmp73 + _tmp148 * fh1;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 = Scalar(0.71007031138673404) * _tmp150;
  const Scalar _tmp152 = _tmp79 * fh1;
  const Scalar _tmp153 = _tmp130 * _tmp140;
  const Scalar _tmp154 = std::cosh(
      _tmp151 *
      (-Scalar(1.4083112389913199) * _tmp149 *
           std::asinh(_tmp150 * (_tmp103 * _tmp136 * _tmp152 + _tmp111 * _tmp138 * _tmp152 +
                                 _tmp118 * _tmp142 * _tmp79 + _tmp121 * _tmp134 * _tmp79 +
                                 _tmp126 * _tmp132 * _tmp79 - _tmp139 * _tmp153)) -
       std::sqrt(Scalar(std::pow(Scalar(-_tmp35 + p_c(0, 0)), Scalar(2)) +
                        std::pow(Scalar(-_tmp39 + p_c(1, 0)), Scalar(2))))));
  const Scalar _tmp155 = -_tmp144 * _tmp73 + _tmp146 + _tmp148;
  const Scalar _tmp156 = _tmp103 * _tmp98;
  const Scalar _tmp157 = _tmp109 * _tmp111;
  const Scalar _tmp158 = _tmp144 + _tmp156 + _tmp157;
  const Scalar _tmp159 = _tmp145 + _tmp147 + _tmp156 * fh1 + _tmp157 * fh1;
  const Scalar _tmp160 = Scalar(1.0) / (_tmp159);
  const Scalar _tmp161 = Scalar(0.71007031138673404) * _tmp160;
  const Scalar _tmp162 = _tmp129 * fh1;
  const Scalar _tmp163 = std::cosh(
      _tmp161 * (-Scalar(1.4083112389913199) * _tmp159 *
                     std::asinh(_tmp160 * (-_tmp103 * _tmp162 * _tmp97 -
                                           _tmp108 * _tmp111 * _tmp162 + _tmp118 * _tmp141 -
                                           _tmp121 * _tmp133 - _tmp126 * _tmp131 + _tmp153)) -
                 std::sqrt(Scalar(std::pow(Scalar(-_tmp54 + p_d(1, 0)), Scalar(2)) +
                                  std::pow(Scalar(-_tmp57 + p_d(0, 0)), Scalar(2))))));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -Scalar(3.7747582837255322e-15) * _tmp1;
  _res(1, 0) = Scalar(1.0) * _tmp117 * _tmp123 * p_b(2, 0) -
               Scalar(1.4083112389913199) * _tmp117 * _tmp124 * p_b(2, 0);
  _res(2, 0) = Scalar(1.0) * _tmp150 * _tmp155 * p_c(2, 0) -
               Scalar(1.4083112389913199) * _tmp151 * _tmp155 * p_c(2, 0);
  _res(3, 0) = Scalar(1.0) * _tmp158 * _tmp160 * p_d(2, 0) -
               Scalar(1.4083112389913199) * _tmp158 * _tmp161 * p_d(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym