// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/rot3.h>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: IK_residual_func_cost1_Nl3
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     encoder: Matrix41
 *     p_a: Matrix31
 *     p_b: Matrix31
 *     p_c: Matrix31
 *     p_d: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl3(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Eigen::Matrix<Scalar, 4, 1>& encoder,
    const Eigen::Matrix<Scalar, 3, 1>& p_a, const Eigen::Matrix<Scalar, 3, 1>& p_b,
    const Eigen::Matrix<Scalar, 3, 1>& p_c, const Eigen::Matrix<Scalar, 3, 1>& p_d,
    const sym::Rot3<Scalar>& Rot_init, const Scalar epsilon) {
  // Total ops: 484

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = Scalar(0.71007031138673404) * _tmp0;
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp7 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp8 = -_tmp7;
  const Scalar _tmp9 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp10 = 2 * _tmp5 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp3;
  const Scalar _tmp13 = _tmp10 - _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = 2 * _tmp3;
  const Scalar _tmp16 = _tmp15 * _tmp9;
  const Scalar _tmp17 = _tmp11 * _tmp5;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp14 - _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp8;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = -2 * std::pow(_tmp9, Scalar(2));
  const Scalar _tmp23 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp6;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = _tmp15 * _tmp5;
  const Scalar _tmp26 = _tmp11 * _tmp9;
  const Scalar _tmp27 = _tmp25 + _tmp26;
  const Scalar _tmp28 = -Scalar(0.010999999999999999) * _tmp27;
  const Scalar _tmp29 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp30 = _tmp28 - _tmp29;
  const Scalar _tmp31 = _tmp24 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = Scalar(1.4083112389913199) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp35 = -_tmp34;
  const Scalar _tmp36 = -Scalar(0.010999999999999999) * _tmp22 -
                        Scalar(0.010999999999999999) * _tmp4 + Scalar(-0.010999999999999999);
  const Scalar _tmp37 = Scalar(0.20999999999999999) * _tmp25 - Scalar(0.20999999999999999) * _tmp26;
  const Scalar _tmp38 = _tmp36 - _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp38;
  const Scalar _tmp40 = _tmp28 + _tmp29;
  const Scalar _tmp41 = _tmp24 + _tmp40;
  const Scalar _tmp42 = _tmp23 + _tmp40;
  const Scalar _tmp43 = Scalar(1.0) * _tmp42;
  const Scalar _tmp44 = -_tmp41 + _tmp43;
  const Scalar _tmp45 = _tmp14 + _tmp18;
  const Scalar _tmp46 = _tmp45 + _tmp7;
  const Scalar _tmp47 = Scalar(1.0) * _tmp46;
  const Scalar _tmp48 = -_tmp47;
  const Scalar _tmp49 = _tmp19 + _tmp7;
  const Scalar _tmp50 = Scalar(1.0) / (_tmp48 + _tmp49);
  const Scalar _tmp51 = Scalar(1.0) * _tmp50;
  const Scalar _tmp52 = _tmp34 + _tmp38;
  const Scalar _tmp53 = _tmp41 + position_vector(0, 0);
  const Scalar _tmp54 = _tmp53 - p_d(0, 0);
  const Scalar _tmp55 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp56 = _tmp55 - p_d(1, 0);
  const Scalar _tmp57 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp56, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 - p_c(0, 0);
  const Scalar _tmp61 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp62 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp63 = _tmp62 - p_c(1, 0);
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp36 + _tmp37;
  const Scalar _tmp66 = _tmp34 + _tmp65;
  const Scalar _tmp67 = _tmp54 * _tmp57;
  const Scalar _tmp68 = _tmp66 * _tmp67;
  const Scalar _tmp69 = Scalar(1.0) / (-_tmp58 + _tmp64 * _tmp67);
  const Scalar _tmp70 = _tmp69 * (_tmp52 * _tmp58 - _tmp64 * _tmp68);
  const Scalar _tmp71 = -_tmp52 * _tmp67 + _tmp68;
  const Scalar _tmp72 = Scalar(1.0) * _tmp69;
  const Scalar _tmp73 = _tmp44 * _tmp51 * _tmp70 - _tmp71 * _tmp72;
  const Scalar _tmp74 = _tmp35 + _tmp65;
  const Scalar _tmp75 = _tmp23 + _tmp30;
  const Scalar _tmp76 = _tmp75 + position_vector(0, 0);
  const Scalar _tmp77 = _tmp76 - p_b(0, 0);
  const Scalar _tmp78 = _tmp45 + _tmp8;
  const Scalar _tmp79 = _tmp78 + position_vector(1, 0);
  const Scalar _tmp80 = _tmp79 - p_b(1, 0);
  const Scalar _tmp81 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp80, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp82 = _tmp77 * _tmp81;
  const Scalar _tmp83 = _tmp66 * _tmp82;
  const Scalar _tmp84 = _tmp80 * _tmp81;
  const Scalar _tmp85 = _tmp64 * _tmp82 - _tmp84;
  const Scalar _tmp86 = _tmp69 * _tmp85;
  const Scalar _tmp87 = -_tmp64 * _tmp83 - _tmp70 * _tmp85 + _tmp74 * _tmp84;
  const Scalar _tmp88 = _tmp44 * _tmp50;
  const Scalar _tmp89 = -_tmp71 * _tmp86 - _tmp74 * _tmp82 + _tmp83 - _tmp87 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp63, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp61 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (_tmp42 * _tmp63 * _tmp92 - _tmp46 * _tmp60 * _tmp92);
  const Scalar _tmp95 = -_tmp41 * _tmp58 + _tmp49 * _tmp67 + _tmp67 * _tmp94;
  const Scalar _tmp96 = -_tmp75 * _tmp84 + _tmp78 * _tmp82 + _tmp82 * _tmp94 - _tmp86 * _tmp95;
  const Scalar _tmp97 = _tmp90 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp89 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp72 * _tmp95 - _tmp73 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp73;
  const Scalar _tmp102 = _tmp82 * _tmp90;
  const Scalar _tmp103 = _tmp85 * _tmp90;
  const Scalar _tmp104 = -_tmp101 * _tmp103 + Scalar(1.0);
  const Scalar _tmp105 = _tmp67 * _tmp69;
  const Scalar _tmp106 = _tmp21 - p_a(1, 0);
  const Scalar _tmp107 = _tmp32 - p_a(0, 0);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = Scalar(1.0) * _tmp98;
  const Scalar _tmp112 = _tmp67 * _tmp86;
  const Scalar _tmp113 = _tmp107 * _tmp108;
  const Scalar _tmp114 = fh1 * (_tmp109 * _tmp31 - _tmp113 * _tmp20);
  const Scalar _tmp115 = Scalar(333.54000000000002) - fv1;
  const Scalar _tmp116 = _tmp43 + _tmp47 * _tmp88;
  const Scalar _tmp117 = 0;
  const Scalar _tmp118 = _tmp64 * _tmp69;
  const Scalar _tmp119 = _tmp64 * _tmp66 + _tmp64 * _tmp70;
  const Scalar _tmp120 = _tmp118 * _tmp71 - _tmp119 * _tmp88 - _tmp66;
  const Scalar _tmp121 = _tmp99 * (_tmp118 * _tmp95 - _tmp120 * _tmp97 - _tmp94);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = -_tmp103 * _tmp122 - _tmp64;
  const Scalar _tmp124 = _tmp113 * fh1;
  const Scalar _tmp125 = -_tmp110 * _tmp93 * (_tmp101 * _tmp102 + _tmp104 * _tmp105) -
                         _tmp114 * _tmp93 * (-_tmp111 * _tmp112 + _tmp111 * _tmp82) -
                         _tmp115 * _tmp93 * (-_tmp112 * _tmp117 + _tmp117 * _tmp82) -
                         _tmp124 * _tmp93 * (_tmp102 * _tmp122 + _tmp105 * _tmp123 + Scalar(1.0));
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = Scalar(0.71007031138673404) * _tmp126;
  const Scalar _tmp128 = _tmp48 + _tmp78;
  const Scalar _tmp129 = _tmp128 * _tmp88;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 + _tmp43 - _tmp75);
  const Scalar _tmp131 = Scalar(1.0) * _tmp130;
  const Scalar _tmp132 = _tmp128 * _tmp50;
  const Scalar _tmp133 = _tmp39 * fh1;
  const Scalar _tmp134 = _tmp113 * _tmp133 + Scalar(40.024799999999999) * _tmp27 + _tmp31 * fv1;
  const Scalar _tmp135 = _tmp116 * _tmp130;
  const Scalar _tmp136 = -_tmp117 * _tmp87 - _tmp128 * _tmp135 + _tmp48;
  const Scalar _tmp137 = _tmp128 * _tmp130;
  const Scalar _tmp138 = _tmp87 * _tmp90;
  const Scalar _tmp139 = _tmp100 * _tmp137 - _tmp101 * _tmp138 - Scalar(1.0) * _tmp70;
  const Scalar _tmp140 = Scalar(1.0) * fh1;
  const Scalar _tmp141 = _tmp131 * _tmp99;
  const Scalar _tmp142 = -_tmp111 * _tmp87 + _tmp128 * _tmp141;
  const Scalar _tmp143 = -_tmp109 * _tmp133 - Scalar(40.024799999999999) * _tmp13 - _tmp20 * fv1;
  const Scalar _tmp144 = _tmp131 * _tmp88;
  const Scalar _tmp145 = _tmp129 * _tmp131 + Scalar(1.0);
  const Scalar _tmp146 = _tmp119 + _tmp121 * _tmp137 - _tmp122 * _tmp138;
  const Scalar _tmp147 = std::asinh(
      _tmp126 * (_tmp109 * _tmp140 * (_tmp100 * _tmp131 - _tmp139 * _tmp51) +
                 _tmp113 * _tmp140 * (_tmp121 * _tmp131 - _tmp146 * _tmp51) +
                 Scalar(1.0) * _tmp114 * (_tmp141 - _tmp142 * _tmp51) +
                 Scalar(1.0) * _tmp115 * (-_tmp116 * _tmp131 - _tmp136 * _tmp51 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp134 * (_tmp131 * _tmp132 - _tmp131) +
                 Scalar(1.0) * _tmp143 * (_tmp144 - _tmp145 * _tmp51)));
  const Scalar _tmp148 = Scalar(1.4083112389913199) * _tmp125;
  const Scalar _tmp149 = _tmp111 * _tmp114;
  const Scalar _tmp150 = _tmp115 * _tmp117;
  const Scalar _tmp151 =
      _tmp104 * _tmp110 * _tmp69 + _tmp123 * _tmp124 * _tmp69 - _tmp149 * _tmp86 - _tmp150 * _tmp86;
  const Scalar _tmp152 = Scalar(1.0) / (_tmp151);
  const Scalar _tmp153 = Scalar(0.71007031138673404) * _tmp152;
  const Scalar _tmp154 = _tmp131 * _tmp134;
  const Scalar _tmp155 =
      std::asinh(_tmp152 * (_tmp110 * _tmp139 * _tmp50 + _tmp114 * _tmp142 * _tmp50 +
                            _tmp115 * _tmp136 * _tmp50 + _tmp124 * _tmp146 * _tmp50 -
                            _tmp132 * _tmp154 + _tmp143 * _tmp145 * _tmp50));
  const Scalar _tmp156 = Scalar(1.4083112389913199) * _tmp151;
  const Scalar _tmp157 =
      _tmp101 * _tmp110 * _tmp90 + _tmp122 * _tmp124 * _tmp90 + _tmp149 + _tmp150;
  const Scalar _tmp158 = Scalar(1.0) / (_tmp157);
  const Scalar _tmp159 =
      std::asinh(_tmp158 * (-_tmp100 * _tmp110 * _tmp130 - _tmp114 * _tmp141 + _tmp115 * _tmp135 -
                            _tmp121 * _tmp124 * _tmp130 - _tmp143 * _tmp144 + _tmp154));
  const Scalar _tmp160 = Scalar(0.71007031138673404) * _tmp158;
  const Scalar _tmp161 = Scalar(1.4083112389913199) * _tmp157;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp33 * (_tmp2 * p_a(2, 0) + std::cosh(Scalar(1.0) * _tmp1) -
                 std::cosh(_tmp2 *
                           (-_tmp1 * _tmp33 -
                            std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + p_a(1, 0)), Scalar(2)) +
                                             std::pow(Scalar(-_tmp32 + p_a(0, 0)), Scalar(2))))))) +
      _tmp39 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp148 *
          (_tmp127 * p_c(2, 0) + std::cosh(Scalar(1.0) * _tmp147) -
           std::cosh(_tmp127 *
                     (-_tmp147 * _tmp148 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp59 + p_c(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp62 + p_c(1, 0)), Scalar(2))))))) +
      _tmp66 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp156 *
          (_tmp153 * p_d(2, 0) + std::cosh(Scalar(1.0) * _tmp155) -
           std::cosh(_tmp153 *
                     (-_tmp155 * _tmp156 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp53 + p_d(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp55 + p_d(1, 0)), Scalar(2))))))) +
      _tmp52 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp161 *
          (_tmp160 * p_b(2, 0) + std::cosh(Scalar(1.0) * _tmp159) -
           std::cosh(_tmp160 *
                     (-_tmp159 * _tmp161 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp76 + p_b(0, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp79 + p_b(1, 0)), Scalar(2))))))) +
      _tmp74 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
