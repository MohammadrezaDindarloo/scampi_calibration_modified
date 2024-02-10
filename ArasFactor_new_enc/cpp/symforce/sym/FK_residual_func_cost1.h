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
 * Symbolic function: FK_residual_func_cost1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     encoder: Matrix41
 *     pulley: Matrix43
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost1(const Scalar fh1, const Scalar fv1,
                                                const sym::Rot3<Scalar>& DeltaRot,
                                                const Eigen::Matrix<Scalar, 3, 1>& position_vector,
                                                const sym::Rot3<Scalar>& Rot_init,
                                                const Eigen::Matrix<Scalar, 4, 1>& encoder,
                                                const Eigen::Matrix<Scalar, 4, 3>& pulley,
                                                const Scalar epsilon) {
  // Total ops: 480

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (163)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp8;
  const Scalar _tmp10 = _tmp4 * _tmp9;
  const Scalar _tmp11 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = 2 * _tmp2;
  const Scalar _tmp13 = _tmp11 * _tmp12;
  const Scalar _tmp14 = _tmp10 - _tmp13;
  const Scalar _tmp15 = -Scalar(0.010999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp2 * _tmp9;
  const Scalar _tmp17 = 2 * _tmp11 * _tmp4;
  const Scalar _tmp18 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp19 = _tmp15 - _tmp18;
  const Scalar _tmp20 = _tmp19 + _tmp7;
  const Scalar _tmp21 = _tmp20 + position_vector(1, 0);
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp16 - Scalar(0.20999999999999999) * _tmp17;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = -2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp24 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp26 = _tmp12 * _tmp4;
  const Scalar _tmp27 = _tmp11 * _tmp9;
  const Scalar _tmp28 = _tmp26 + _tmp27;
  const Scalar _tmp29 = -Scalar(0.010999999999999999) * _tmp28;
  const Scalar _tmp30 = -_tmp25 + _tmp29;
  const Scalar _tmp31 = _tmp23 + _tmp30;
  const Scalar _tmp32 = _tmp31 + position_vector(0, 0);
  const Scalar _tmp33 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp34 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp35 = Scalar(0.20999999999999999) * _tmp26 - Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp36 = -_tmp35;
  const Scalar _tmp37 = -Scalar(0.010999999999999999) * _tmp24 -
                        Scalar(0.010999999999999999) * _tmp3 + Scalar(-0.010999999999999999);
  const Scalar _tmp38 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp39 = _tmp37 - _tmp38;
  const Scalar _tmp40 = _tmp36 + _tmp39;
  const Scalar _tmp41 = _tmp25 + _tmp29;
  const Scalar _tmp42 = _tmp23 + _tmp41;
  const Scalar _tmp43 = _tmp15 + _tmp18;
  const Scalar _tmp44 = _tmp43 + _tmp7;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 = _tmp45 - pulley(1, 1);
  const Scalar _tmp47 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp48 = _tmp47 - pulley(1, 0);
  const Scalar _tmp49 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp52 * (_tmp42 * _tmp46 * _tmp50 - _tmp44 * _tmp48 * _tmp50);
  const Scalar _tmp54 = _tmp43 + _tmp6;
  const Scalar _tmp55 = _tmp22 + _tmp41;
  const Scalar _tmp56 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp57 = _tmp56 - pulley(2, 0);
  const Scalar _tmp58 = _tmp54 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 - pulley(2, 1);
  const Scalar _tmp60 = std::pow(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp59, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp61 = _tmp57 * _tmp60;
  const Scalar _tmp62 = _tmp59 * _tmp60;
  const Scalar _tmp63 = _tmp53 * _tmp61 + _tmp54 * _tmp61 - _tmp55 * _tmp62;
  const Scalar _tmp64 = _tmp46 * _tmp51;
  const Scalar _tmp65 = Scalar(1.0) / (_tmp61 * _tmp64 - _tmp62);
  const Scalar _tmp66 = _tmp64 * _tmp65;
  const Scalar _tmp67 = _tmp37 + _tmp38;
  const Scalar _tmp68 = _tmp35 + _tmp67;
  const Scalar _tmp69 = _tmp35 + _tmp39;
  const Scalar _tmp70 = _tmp61 * _tmp69;
  const Scalar _tmp71 = _tmp62 * _tmp68 - _tmp64 * _tmp70;
  const Scalar _tmp72 = _tmp64 * _tmp69 + _tmp66 * _tmp71;
  const Scalar _tmp73 = Scalar(1.0) * _tmp44;
  const Scalar _tmp74 = -_tmp73;
  const Scalar _tmp75 = Scalar(1.0) / (_tmp54 + _tmp74);
  const Scalar _tmp76 = Scalar(1.0) * _tmp42;
  const Scalar _tmp77 = _tmp75 * (-_tmp55 + _tmp76);
  const Scalar _tmp78 = -_tmp61 * _tmp68 + _tmp70;
  const Scalar _tmp79 = _tmp66 * _tmp78 - _tmp69 - _tmp72 * _tmp77;
  const Scalar _tmp80 = _tmp19 + _tmp6;
  const Scalar _tmp81 = _tmp80 + position_vector(1, 0);
  const Scalar _tmp82 = _tmp81 - pulley(3, 1);
  const Scalar _tmp83 = _tmp22 + _tmp30;
  const Scalar _tmp84 = _tmp83 + position_vector(0, 0);
  const Scalar _tmp85 = _tmp84 - pulley(3, 0);
  const Scalar _tmp86 = std::pow(Scalar(std::pow(_tmp82, Scalar(2)) + std::pow(_tmp85, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp87 = _tmp82 * _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp86;
  const Scalar _tmp89 = _tmp64 * _tmp88 - _tmp87;
  const Scalar _tmp90 = _tmp65 * _tmp89;
  const Scalar _tmp91 = _tmp69 * _tmp88;
  const Scalar _tmp92 = _tmp36 + _tmp67;
  const Scalar _tmp93 = -_tmp64 * _tmp91 - _tmp71 * _tmp90 + _tmp87 * _tmp92;
  const Scalar _tmp94 = -_tmp77 * _tmp93 - _tmp78 * _tmp90 - _tmp88 * _tmp92 + _tmp91;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp53 * _tmp88 - _tmp63 * _tmp90 + _tmp80 * _tmp88 - _tmp83 * _tmp87;
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp96);
  const Scalar _tmp99 = _tmp94 * _tmp98;
  const Scalar _tmp100 = _tmp99 * (-_tmp53 + _tmp63 * _tmp66 - _tmp79 * _tmp97);
  const Scalar _tmp101 = _tmp100 + _tmp79;
  const Scalar _tmp102 = _tmp89 * _tmp95;
  const Scalar _tmp103 = -_tmp101 * _tmp102 - _tmp64;
  const Scalar _tmp104 = _tmp61 * _tmp65;
  const Scalar _tmp105 = _tmp88 * _tmp95;
  const Scalar _tmp106 = _tmp32 - pulley(0, 0);
  const Scalar _tmp107 = _tmp21 - pulley(0, 1);
  const Scalar _tmp108 =
      std::pow(Scalar(std::pow(_tmp106, Scalar(2)) + std::pow(_tmp107, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp109 = _tmp106 * _tmp108;
  const Scalar _tmp110 = _tmp109 * fh1;
  const Scalar _tmp111 = Scalar(1.0) * _tmp98;
  const Scalar _tmp112 = _tmp61 * _tmp90;
  const Scalar _tmp113 = _tmp107 * _tmp108;
  const Scalar _tmp114 = fh1 * (-_tmp109 * _tmp20 + _tmp113 * _tmp31);
  const Scalar _tmp115 = Scalar(1.0) * _tmp65;
  const Scalar _tmp116 = _tmp115 * _tmp71;
  const Scalar _tmp117 = -_tmp115 * _tmp78 + _tmp116 * _tmp77;
  const Scalar _tmp118 = _tmp99 * (-_tmp115 * _tmp63 - _tmp117 * _tmp97);
  const Scalar _tmp119 = _tmp117 + _tmp118;
  const Scalar _tmp120 = -_tmp102 * _tmp119 + Scalar(1.0);
  const Scalar _tmp121 = _tmp113 * fh1;
  const Scalar _tmp122 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp123 = _tmp73 * _tmp77 + _tmp76;
  const Scalar _tmp124 = 0;
  const Scalar _tmp125 = -_tmp110 * _tmp52 * (_tmp101 * _tmp105 + _tmp103 * _tmp104 + Scalar(1.0)) -
                         _tmp114 * _tmp52 * (-_tmp111 * _tmp112 + _tmp111 * _tmp88) -
                         _tmp121 * _tmp52 * (_tmp104 * _tmp120 + _tmp105 * _tmp119) -
                         _tmp122 * _tmp52 * (-_tmp112 * _tmp124 + _tmp124 * _tmp88);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp74 + _tmp80;
  const Scalar _tmp128 = _tmp127 * _tmp77;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 + _tmp76 - _tmp83);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp130 * _tmp99;
  const Scalar _tmp132 = _tmp127 * _tmp130;
  const Scalar _tmp133 = -_tmp111 * _tmp93 + _tmp132 * _tmp99;
  const Scalar _tmp134 = Scalar(1.0) * _tmp75;
  const Scalar _tmp135 = _tmp40 * fh1;
  const Scalar _tmp136 = _tmp109 * _tmp135 + Scalar(5.1796800000000003) * _tmp28 + _tmp31 * fv1;
  const Scalar _tmp137 = _tmp123 * _tmp129;
  const Scalar _tmp138 = _tmp75 * (-_tmp124 * _tmp93 - _tmp127 * _tmp137 + _tmp74);
  const Scalar _tmp139 = _tmp93 * _tmp95;
  const Scalar _tmp140 = _tmp127 * _tmp129;
  const Scalar _tmp141 = -_tmp116 + _tmp118 * _tmp140 - _tmp119 * _tmp139;
  const Scalar _tmp142 = _tmp100 * _tmp140 - _tmp101 * _tmp139 + _tmp72;
  const Scalar _tmp143 = -_tmp113 * _tmp135 - Scalar(5.1796800000000003) * _tmp14 - _tmp20 * fv1;
  const Scalar _tmp144 = _tmp128 * _tmp130 + Scalar(1.0);
  const Scalar _tmp145 = _tmp130 * _tmp77;
  const Scalar _tmp146 =
      std::asinh(_tmp126 * (Scalar(1.0) * _tmp110 * (_tmp100 * _tmp130 - _tmp134 * _tmp142) +
                            Scalar(1.0) * _tmp114 * (_tmp131 - _tmp133 * _tmp134) +
                            Scalar(1.0) * _tmp121 * (_tmp118 * _tmp130 - _tmp134 * _tmp141) +
                            Scalar(1.0) * _tmp122 *
                                (-_tmp123 * _tmp130 - Scalar(1.0) * _tmp138 + Scalar(1.0)) +
                            Scalar(1.0) * _tmp136 * (-_tmp130 + _tmp132 * _tmp75) +
                            Scalar(1.0) * _tmp143 * (-_tmp134 * _tmp144 + _tmp145)));
  const Scalar _tmp147 = Scalar(0.1034955) * _tmp126;
  const Scalar _tmp148 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp149 = _tmp130 * _tmp136;
  const Scalar _tmp150 = _tmp122 * _tmp124;
  const Scalar _tmp151 = _tmp65 * fh1;
  const Scalar _tmp152 = _tmp111 * _tmp114;
  const Scalar _tmp153 = _tmp103 * _tmp109 * _tmp151 + _tmp113 * _tmp120 * _tmp151 -
                         _tmp150 * _tmp90 - _tmp152 * _tmp90;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 =
      std::asinh(_tmp154 * (_tmp110 * _tmp142 * _tmp75 + _tmp114 * _tmp133 * _tmp75 +
                            _tmp121 * _tmp141 * _tmp75 + _tmp122 * _tmp138 -
                            _tmp127 * _tmp149 * _tmp75 + _tmp143 * _tmp144 * _tmp75));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp153;
  const Scalar _tmp157 = Scalar(0.1034955) * _tmp154;
  const Scalar _tmp158 =
      _tmp101 * _tmp110 * _tmp95 + _tmp119 * _tmp121 * _tmp95 + _tmp150 + _tmp152;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 = std::asinh(_tmp159 * (-_tmp100 * _tmp110 * _tmp129 - _tmp114 * _tmp131 -
                                               _tmp118 * _tmp121 * _tmp129 + _tmp122 * _tmp137 -
                                               _tmp143 * _tmp145 + _tmp149));
  const Scalar _tmp161 = Scalar(0.1034955) * _tmp159;
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp34 *
          (_tmp1 * pulley(0, 2) + std::cosh(Scalar(1.0) * _tmp33) -
           std::cosh(_tmp1 *
                     (-_tmp33 * _tmp34 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp21 + pulley(0, 1)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp32 + pulley(0, 0)), Scalar(2))))))) +
      _tmp40 + position_vector(2, 0);
  _res(1, 0) =
      -_tmp148 *
          (_tmp147 * pulley(1, 2) + std::cosh(Scalar(1.0) * _tmp146) -
           std::cosh(_tmp147 *
                     (-_tmp146 * _tmp148 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp45 + pulley(1, 1)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp47 + pulley(1, 0)), Scalar(2))))))) +
      _tmp69 + position_vector(2, 0);
  _res(2, 0) =
      -_tmp156 *
          (_tmp157 * pulley(2, 2) + std::cosh(Scalar(1.0) * _tmp155) -
           std::cosh(_tmp157 *
                     (-_tmp155 * _tmp156 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp56 + pulley(2, 0)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp58 + pulley(2, 1)), Scalar(2))))))) +
      _tmp68 + position_vector(2, 0);
  _res(3, 0) =
      -_tmp162 *
          (_tmp161 * pulley(3, 2) + std::cosh(Scalar(1.0) * _tmp160) -
           std::cosh(_tmp161 *
                     (-_tmp160 * _tmp162 -
                      std::sqrt(Scalar(std::pow(Scalar(-_tmp81 + pulley(3, 1)), Scalar(2)) +
                                       std::pow(Scalar(-_tmp84 + pulley(3, 0)), Scalar(2))))))) +
      _tmp92 + position_vector(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
