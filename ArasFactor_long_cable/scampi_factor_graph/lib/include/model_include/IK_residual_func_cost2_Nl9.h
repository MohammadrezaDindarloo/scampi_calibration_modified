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
 * Symbolic function: IK_residual_func_cost2_Nl9
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl9(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 532

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (162)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = -2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = 2 * _tmp1;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 = -_tmp12 + _tmp9;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp11 * _tmp7;
  const Scalar _tmp16 = 2 * _tmp10 * _tmp3;
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp14 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp6;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp23 = _tmp11 * _tmp3;
  const Scalar _tmp24 = _tmp10 * _tmp8;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = Scalar(0.20999999999999999) * _tmp15 - Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp28 = _tmp26 - _tmp27;
  const Scalar _tmp29 = _tmp22 + _tmp28;
  const Scalar _tmp30 = _tmp29 + position_vector(0, 0);
  const Scalar _tmp31 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp30), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp20 - 1), Scalar(2));
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp35 =
      -Scalar(0.010999999999999999) * _tmp2 - Scalar(0.010999999999999999) * _tmp21;
  const Scalar _tmp36 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp37 = _tmp35 - _tmp36;
  const Scalar _tmp38 = _tmp34 + _tmp37;
  const Scalar _tmp39 = _tmp35 + _tmp36;
  const Scalar _tmp40 = _tmp34 + _tmp39;
  const Scalar _tmp41 = _tmp26 + _tmp27;
  const Scalar _tmp42 = _tmp22 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp18 + _tmp5;
  const Scalar _tmp45 = _tmp44 + position_vector(1, 0);
  const Scalar _tmp46 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp43), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp45), Scalar(2));
  const Scalar _tmp47 = _tmp45 + Scalar(-110.0);
  const Scalar _tmp48 = _tmp43 + Scalar(-125.0);
  const Scalar _tmp49 =
      std::sqrt(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp48, Scalar(2))));
  const Scalar _tmp50 = Scalar(1.0) / (_tmp49);
  const Scalar _tmp51 = Scalar(1.0) / (_tmp48);
  const Scalar _tmp52 = _tmp49 * _tmp51;
  const Scalar _tmp53 = _tmp52 * (_tmp42 * _tmp47 * _tmp50 - _tmp44 * _tmp48 * _tmp50);
  const Scalar _tmp54 = _tmp47 * _tmp51;
  const Scalar _tmp55 = _tmp14 - _tmp17;
  const Scalar _tmp56 = _tmp5 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(-110.0);
  const Scalar _tmp59 = -_tmp22;
  const Scalar _tmp60 = _tmp41 + _tmp59;
  const Scalar _tmp61 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(125.0);
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp58 * _tmp63;
  const Scalar _tmp65 = _tmp62 * _tmp63;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp54 * _tmp65 - _tmp64);
  const Scalar _tmp67 = -_tmp34;
  const Scalar _tmp68 = _tmp39 + _tmp67;
  const Scalar _tmp69 = _tmp40 * _tmp65;
  const Scalar _tmp70 = _tmp66 * (-_tmp65 * _tmp68 + _tmp69);
  const Scalar _tmp71 = -_tmp54 * _tmp69 + _tmp64 * _tmp68;
  const Scalar _tmp72 = _tmp54 * _tmp66;
  const Scalar _tmp73 = _tmp40 * _tmp54 + _tmp71 * _tmp72;
  const Scalar _tmp74 = Scalar(1.0) * _tmp44;
  const Scalar _tmp75 = -_tmp74;
  const Scalar _tmp76 = Scalar(1.0) / (_tmp56 + _tmp75);
  const Scalar _tmp77 = Scalar(1.0) * _tmp42;
  const Scalar _tmp78 = -_tmp60 + _tmp77;
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = -_tmp40 + _tmp54 * _tmp70 - _tmp73 * _tmp79;
  const Scalar _tmp81 = _tmp37 + _tmp67;
  const Scalar _tmp82 = _tmp55 + _tmp6;
  const Scalar _tmp83 = _tmp82 + position_vector(1, 0);
  const Scalar _tmp84 = _tmp83 + Scalar(110.0);
  const Scalar _tmp85 = _tmp28 + _tmp59;
  const Scalar _tmp86 = _tmp85 + position_vector(0, 0);
  const Scalar _tmp87 = _tmp86 + Scalar(125.0);
  const Scalar _tmp88 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp87, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp89 = _tmp84 * _tmp88;
  const Scalar _tmp90 = _tmp87 * _tmp88;
  const Scalar _tmp91 = _tmp54 * _tmp90 - _tmp89;
  const Scalar _tmp92 = _tmp66 * _tmp91;
  const Scalar _tmp93 = _tmp40 * _tmp90;
  const Scalar _tmp94 = -_tmp54 * _tmp93 - _tmp71 * _tmp92 + _tmp81 * _tmp89;
  const Scalar _tmp95 = -_tmp70 * _tmp91 - _tmp79 * _tmp94 - _tmp81 * _tmp90 + _tmp93;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp97 = _tmp53 * _tmp65 + _tmp56 * _tmp65 - _tmp60 * _tmp64;
  const Scalar _tmp98 = _tmp53 * _tmp90 + _tmp82 * _tmp90 - _tmp85 * _tmp89 - _tmp92 * _tmp97;
  const Scalar _tmp99 = _tmp96 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp101 = _tmp100 * _tmp95;
  const Scalar _tmp102 = _tmp101 * (-_tmp53 + _tmp72 * _tmp97 - _tmp80 * _tmp99);
  const Scalar _tmp103 = _tmp75 + _tmp82;
  const Scalar _tmp104 = _tmp103 * _tmp79;
  const Scalar _tmp105 = Scalar(1.0) / (-_tmp104 + _tmp77 - _tmp85);
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp102 + _tmp80;
  const Scalar _tmp108 = _tmp94 * _tmp96;
  const Scalar _tmp109 = _tmp102 * _tmp106 - _tmp107 * _tmp108 + _tmp73;
  const Scalar _tmp110 = Scalar(1.0) * _tmp76;
  const Scalar _tmp111 = Scalar(1.0) * _tmp105;
  const Scalar _tmp112 = _tmp30 + Scalar(-125.0);
  const Scalar _tmp113 = _tmp20 + Scalar(110.0);
  const Scalar _tmp114 =
      std::pow(Scalar(std::pow(_tmp112, Scalar(2)) + std::pow(_tmp113, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp115 = _tmp112 * _tmp114;
  const Scalar _tmp116 = _tmp115 * fh1;
  const Scalar _tmp117 = _tmp110 * _tmp66 * _tmp71 * _tmp78 - Scalar(1.0) * _tmp70;
  const Scalar _tmp118 = Scalar(1.0) * _tmp66;
  const Scalar _tmp119 = _tmp101 * (-_tmp117 * _tmp99 - _tmp118 * _tmp97);
  const Scalar _tmp120 = _tmp117 + _tmp119;
  const Scalar _tmp121 = _tmp106 * _tmp119 - _tmp108 * _tmp120 - _tmp118 * _tmp71;
  const Scalar _tmp122 = _tmp113 * _tmp114;
  const Scalar _tmp123 = _tmp122 * fh1;
  const Scalar _tmp124 = _tmp103 * _tmp76;
  const Scalar _tmp125 = _tmp38 * fh1;
  const Scalar _tmp126 = _tmp115 * _tmp125 + Scalar(2.3544) * _tmp25 + _tmp29 * fv1;
  const Scalar _tmp127 = -_tmp122 * _tmp125 - Scalar(2.3544) * _tmp13 - _tmp19 * fv1;
  const Scalar _tmp128 = _tmp104 * _tmp111 + Scalar(1.0);
  const Scalar _tmp129 = _tmp111 * _tmp79;
  const Scalar _tmp130 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp131 = _tmp74 * _tmp79 + _tmp77;
  const Scalar _tmp132 = _tmp105 * _tmp131;
  const Scalar _tmp133 = 0;
  const Scalar _tmp134 = _tmp76 * (-_tmp103 * _tmp132 - _tmp108 * _tmp133 + _tmp75);
  const Scalar _tmp135 = _tmp101 * _tmp111;
  const Scalar _tmp136 = Scalar(1.0) * _tmp100;
  const Scalar _tmp137 = _tmp103 * _tmp135 - _tmp136 * _tmp94;
  const Scalar _tmp138 = fh1 * (-_tmp115 * _tmp19 + _tmp122 * _tmp29);
  const Scalar _tmp139 = _tmp133 * _tmp96;
  const Scalar _tmp140 = _tmp65 * _tmp66;
  const Scalar _tmp141 = _tmp91 * _tmp96;
  const Scalar _tmp142 = _tmp133 * _tmp141;
  const Scalar _tmp143 = _tmp90 * _tmp96;
  const Scalar _tmp144 = -_tmp120 * _tmp141 + Scalar(1.0);
  const Scalar _tmp145 = -_tmp107 * _tmp141 - _tmp54;
  const Scalar _tmp146 = -_tmp116 * _tmp52 * (_tmp107 * _tmp143 + _tmp140 * _tmp145 + Scalar(1.0)) -
                         _tmp123 * _tmp52 * (_tmp120 * _tmp143 + _tmp140 * _tmp144) -
                         _tmp130 * _tmp52 * (_tmp139 * _tmp90 - _tmp140 * _tmp142) -
                         _tmp138 * _tmp52 * (-_tmp136 * _tmp65 * _tmp92 + _tmp136 * _tmp90);
  const Scalar _tmp147 = Scalar(1.0) / (_tmp146);
  const Scalar _tmp148 =
      std::asinh(_tmp147 * (Scalar(1.0) * _tmp116 * (_tmp102 * _tmp111 - _tmp109 * _tmp110) +
                            Scalar(1.0) * _tmp123 * (-_tmp110 * _tmp121 + _tmp111 * _tmp119) +
                            Scalar(1.0) * _tmp126 * (_tmp111 * _tmp124 - _tmp111) +
                            Scalar(1.0) * _tmp127 * (-_tmp110 * _tmp128 + _tmp129) +
                            Scalar(1.0) * _tmp130 *
                                (-_tmp111 * _tmp131 - Scalar(1.0) * _tmp134 + Scalar(1.0)) +
                            Scalar(1.0) * _tmp138 * (-_tmp110 * _tmp137 + _tmp135)));
  const Scalar _tmp149 = Scalar(9.6622558468725703) * _tmp146;
  const Scalar _tmp150 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp57), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp61 - 1), Scalar(2));
  const Scalar _tmp151 = _tmp136 * _tmp138;
  const Scalar _tmp152 = _tmp116 * _tmp145 * _tmp66 + _tmp123 * _tmp144 * _tmp66 -
                         _tmp130 * _tmp142 * _tmp66 - _tmp151 * _tmp92;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = _tmp111 * _tmp126;
  const Scalar _tmp155 = std::asinh(
      _tmp153 * (_tmp109 * _tmp116 * _tmp76 + _tmp121 * _tmp123 * _tmp76 - _tmp124 * _tmp154 +
                 _tmp127 * _tmp128 * _tmp76 + _tmp130 * _tmp134 + _tmp137 * _tmp138 * _tmp76));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp157 =
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp83 - 1), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp86 - 1), Scalar(2));
  const Scalar _tmp158 =
      _tmp107 * _tmp116 * _tmp96 + _tmp120 * _tmp123 * _tmp96 + _tmp130 * _tmp139 + _tmp151;
  const Scalar _tmp159 = Scalar(1.0) / (_tmp158);
  const Scalar _tmp160 =
      std::asinh(_tmp159 * (-_tmp102 * _tmp105 * _tmp116 - _tmp105 * _tmp119 * _tmp123 -
                            _tmp127 * _tmp129 + _tmp130 * _tmp132 - _tmp135 * _tmp138 + _tmp154));
  const Scalar _tmp161 = Scalar(9.6622558468725703) * _tmp158;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 * (-std::sinh(Scalar(1.0) * _tmp32) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp31) - _tmp32 * _tmp33))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp31 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp38 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(1, 0) =
      _tmp149 *
          (-std::sinh(Scalar(1.0) * _tmp148) -
           std::sinh(Scalar(0.1034955) * _tmp147 * (-_tmp148 * _tmp149 - std::sqrt(_tmp46)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp46 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp40 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(2, 0) =
      _tmp156 *
          (-std::sinh(Scalar(1.0) * _tmp155) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-std::sqrt(_tmp150) - _tmp155 * _tmp156))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp150 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp68 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(3, 0) =
      _tmp161 *
          (-std::sinh(Scalar(1.0) * _tmp160) -
           std::sinh(Scalar(0.1034955) * _tmp159 * (-std::sqrt(_tmp157) - _tmp160 * _tmp161))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp157 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp81 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
