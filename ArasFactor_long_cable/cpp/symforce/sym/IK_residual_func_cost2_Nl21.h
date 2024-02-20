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
 * Symbolic function: IK_residual_func_cost2_Nl21
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2Nl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 529

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (157)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 2 * _tmp3;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = _tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp1 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp23 = _tmp1 * _tmp8;
  const Scalar _tmp24 = _tmp10 * _tmp7;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp29), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp19 - 1), Scalar(2));
  const Scalar _tmp31 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp34 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp35 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp36 = _tmp34 - _tmp35;
  const Scalar _tmp37 = _tmp33 + _tmp36;
  const Scalar _tmp38 = -_tmp21;
  const Scalar _tmp39 = _tmp27 + _tmp38;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(110.0);
  const Scalar _tmp42 = _tmp13 - _tmp16;
  const Scalar _tmp43 = _tmp42 + _tmp6;
  const Scalar _tmp44 = _tmp43 + position_vector(0, 0);
  const Scalar _tmp45 = _tmp44 + Scalar(125.0);
  const Scalar _tmp46 = std::pow(Scalar(std::pow(_tmp41, Scalar(2)) + std::pow(_tmp45, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp47 = _tmp45 * _tmp46;
  const Scalar _tmp48 = -_tmp33;
  const Scalar _tmp49 = _tmp34 + _tmp35;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp47 * _tmp50;
  const Scalar _tmp52 = _tmp36 + _tmp48;
  const Scalar _tmp53 = _tmp41 * _tmp46;
  const Scalar _tmp54 = _tmp42 + _tmp5;
  const Scalar _tmp55 = _tmp54 + position_vector(0, 0);
  const Scalar _tmp56 = _tmp55 + Scalar(-125.0);
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = _tmp22 + _tmp26;
  const Scalar _tmp59 = _tmp38 + _tmp58;
  const Scalar _tmp60 = _tmp59 + position_vector(1, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(110.0);
  const Scalar _tmp62 = _tmp57 * _tmp61;
  const Scalar _tmp63 = _tmp47 * _tmp62 - _tmp53;
  const Scalar _tmp64 = _tmp21 + _tmp58;
  const Scalar _tmp65 = _tmp64 + position_vector(1, 0);
  const Scalar _tmp66 = _tmp65 + Scalar(-110.0);
  const Scalar _tmp67 = _tmp17 + _tmp5;
  const Scalar _tmp68 = _tmp67 + position_vector(0, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(-125.0);
  const Scalar _tmp70 = std::pow(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp71 = _tmp69 * _tmp70;
  const Scalar _tmp72 = _tmp66 * _tmp70;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp62 * _tmp71 - _tmp72);
  const Scalar _tmp74 = _tmp50 * _tmp71;
  const Scalar _tmp75 = _tmp33 + _tmp49;
  const Scalar _tmp76 = _tmp73 * (-_tmp62 * _tmp74 + _tmp72 * _tmp75);
  const Scalar _tmp77 = -_tmp51 * _tmp62 + _tmp52 * _tmp53 - _tmp63 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp59;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp64 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp54;
  const Scalar _tmp82 = -_tmp67 + _tmp81;
  const Scalar _tmp83 = _tmp80 * _tmp82;
  const Scalar _tmp84 = _tmp73 * (-_tmp71 * _tmp75 + _tmp74);
  const Scalar _tmp85 = -_tmp47 * _tmp52 + _tmp51 - _tmp63 * _tmp84 - _tmp77 * _tmp83;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = Scalar(1.0) * _tmp80;
  const Scalar _tmp88 = _tmp76 * _tmp82 * _tmp87 - Scalar(1.0) * _tmp84;
  const Scalar _tmp89 =
      std::sqrt(Scalar(std::pow(_tmp56, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = _tmp57 * _tmp89;
  const Scalar _tmp92 = _tmp91 * (_tmp54 * _tmp61 * _tmp90 - _tmp56 * _tmp59 * _tmp90);
  const Scalar _tmp93 = _tmp73 * (_tmp64 * _tmp71 - _tmp67 * _tmp72 + _tmp71 * _tmp92);
  const Scalar _tmp94 = _tmp39 * _tmp47 - _tmp43 * _tmp53 + _tmp47 * _tmp92 - _tmp63 * _tmp93;
  const Scalar _tmp95 = _tmp86 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp97 = _tmp85 * _tmp96;
  const Scalar _tmp98 = _tmp97 * (-_tmp88 * _tmp95 - Scalar(1.0) * _tmp93);
  const Scalar _tmp99 = _tmp86 * (_tmp88 + _tmp98);
  const Scalar _tmp100 = -_tmp63 * _tmp99 + Scalar(1.0);
  const Scalar _tmp101 = _tmp71 * _tmp73;
  const Scalar _tmp102 = _tmp29 + Scalar(-110.0);
  const Scalar _tmp103 = _tmp19 + Scalar(125.0);
  const Scalar _tmp104 =
      std::pow(Scalar(std::pow(_tmp102, Scalar(2)) + std::pow(_tmp103, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp105 * fh1;
  const Scalar _tmp107 = _tmp50 * _tmp62 + _tmp62 * _tmp76;
  const Scalar _tmp108 = -_tmp107 * _tmp83 - _tmp50 + _tmp62 * _tmp84;
  const Scalar _tmp109 = _tmp97 * (-_tmp108 * _tmp95 + _tmp62 * _tmp93 - _tmp92);
  const Scalar _tmp110 = _tmp86 * (_tmp108 + _tmp109);
  const Scalar _tmp111 = -_tmp110 * _tmp63 - _tmp62;
  const Scalar _tmp112 = _tmp103 * _tmp104;
  const Scalar _tmp113 = _tmp112 * fh1;
  const Scalar _tmp114 = Scalar(1.0) * _tmp96;
  const Scalar _tmp115 = _tmp101 * _tmp63;
  const Scalar _tmp116 = fh1 * (_tmp105 * _tmp18 - _tmp112 * _tmp28);
  const Scalar _tmp117 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp118 = _tmp78 * _tmp83 + _tmp81;
  const Scalar _tmp119 = 0;
  const Scalar _tmp120 = -_tmp106 * _tmp91 * (_tmp100 * _tmp101 + _tmp47 * _tmp99) -
                         _tmp113 * _tmp91 * (_tmp101 * _tmp111 + _tmp110 * _tmp47 + Scalar(1.0)) -
                         _tmp116 * _tmp91 * (-_tmp114 * _tmp115 + _tmp114 * _tmp47) -
                         _tmp117 * _tmp91 * (-_tmp115 * _tmp119 + _tmp119 * _tmp47);
  const Scalar _tmp121 = Scalar(1.0) / (_tmp120);
  const Scalar _tmp122 =
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp55), Scalar(2)) +
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp60 - 1), Scalar(2));
  const Scalar _tmp123 = _tmp39 + _tmp79;
  const Scalar _tmp124 = _tmp123 * _tmp83;
  const Scalar _tmp125 = Scalar(1.0) / (-_tmp124 - _tmp43 + _tmp81);
  const Scalar _tmp126 = Scalar(1.0) * _tmp125;
  const Scalar _tmp127 = _tmp123 * _tmp125;
  const Scalar _tmp128 = _tmp107 + _tmp109 * _tmp127 - _tmp110 * _tmp77;
  const Scalar _tmp129 = _tmp127 * _tmp98 - Scalar(1.0) * _tmp76 - _tmp77 * _tmp99;
  const Scalar _tmp130 = _tmp126 * _tmp83;
  const Scalar _tmp131 = _tmp124 * _tmp126 + Scalar(1.0);
  const Scalar _tmp132 = _tmp37 * fh1;
  const Scalar _tmp133 = -_tmp105 * _tmp132 - Scalar(2.3544) * _tmp25 - _tmp28 * fv1;
  const Scalar _tmp134 = _tmp126 * _tmp97;
  const Scalar _tmp135 = -_tmp114 * _tmp77 + _tmp123 * _tmp134;
  const Scalar _tmp136 = _tmp118 * _tmp125;
  const Scalar _tmp137 = -_tmp119 * _tmp77 - _tmp123 * _tmp136 + _tmp79;
  const Scalar _tmp138 = _tmp112 * _tmp132 + Scalar(2.3544) * _tmp12 + _tmp18 * fv1;
  const Scalar _tmp139 = _tmp123 * _tmp80;
  const Scalar _tmp140 = std::asinh(
      _tmp121 * (Scalar(1.0) * _tmp106 * (_tmp126 * _tmp98 - _tmp129 * _tmp87) +
                 Scalar(1.0) * _tmp113 * (_tmp109 * _tmp126 - _tmp128 * _tmp87) +
                 Scalar(1.0) * _tmp116 * (_tmp134 - _tmp135 * _tmp87) +
                 Scalar(1.0) * _tmp117 * (-_tmp118 * _tmp126 - _tmp137 * _tmp87 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp133 * (_tmp130 - _tmp131 * _tmp87) +
                 Scalar(1.0) * _tmp138 * (_tmp126 * _tmp139 - _tmp126)));
  const Scalar _tmp141 = Scalar(9.6622558468725703) * _tmp120;
  const Scalar _tmp142 =
      Scalar(12100.0) * std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp65), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp68), Scalar(2));
  const Scalar _tmp143 = _tmp80 * fh1;
  const Scalar _tmp144 = _tmp126 * _tmp138;
  const Scalar _tmp145 = _tmp114 * _tmp116;
  const Scalar _tmp146 = _tmp63 * _tmp73;
  const Scalar _tmp147 = _tmp117 * _tmp119;
  const Scalar _tmp148 = _tmp100 * _tmp106 * _tmp73 + _tmp111 * _tmp113 * _tmp73 -
                         _tmp145 * _tmp146 - _tmp146 * _tmp147;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 =
      std::asinh(_tmp149 * (_tmp105 * _tmp129 * _tmp143 + _tmp112 * _tmp128 * _tmp143 +
                            _tmp116 * _tmp135 * _tmp80 + _tmp117 * _tmp137 * _tmp80 +
                            _tmp131 * _tmp133 * _tmp80 - _tmp139 * _tmp144));
  const Scalar _tmp151 = Scalar(9.6622558468725703) * _tmp148;
  const Scalar _tmp152 = _tmp106 * _tmp99 + _tmp110 * _tmp113 + _tmp145 + _tmp147;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 =
      std::asinh(_tmp153 * (-_tmp106 * _tmp125 * _tmp98 - _tmp109 * _tmp113 * _tmp125 -
                            _tmp116 * _tmp134 + _tmp117 * _tmp136 - _tmp130 * _tmp133 + _tmp144));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;
  const Scalar _tmp156 =
      Scalar(12100.0) * std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp40 - 1), Scalar(2)) +
      Scalar(15625.0) * std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp44 - 1), Scalar(2));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp32 * (-std::sinh(Scalar(1.0) * _tmp31) -
                std::sinh(Scalar(0.1034955) * _tmp0 * (-std::sqrt(_tmp30) - _tmp31 * _tmp32))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp30 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp37 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(1, 0) =
      _tmp141 *
          (-std::sinh(Scalar(1.0) * _tmp140) -
           std::sinh(Scalar(0.1034955) * _tmp121 * (-std::sqrt(_tmp122) - _tmp140 * _tmp141))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp122 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp50 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(2, 0) =
      _tmp151 *
          (-std::sinh(Scalar(1.0) * _tmp150) -
           std::sinh(Scalar(0.1034955) * _tmp149 * (-std::sqrt(_tmp142) - _tmp150 * _tmp151))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp142 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp75 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));
  _res(3, 0) =
      _tmp155 *
          (-std::sinh(Scalar(1.0) * _tmp154) -
           std::sinh(Scalar(0.1034955) * _tmp153 * (-_tmp154 * _tmp155 - std::sqrt(_tmp156)))) -
      Scalar(48.0) * std::sqrt(Scalar(
                         Scalar(0.00043402777777777775) * _tmp156 +
                         std::pow(Scalar(-Scalar(0.020833333333333332) * _tmp52 -
                                         Scalar(0.020833333333333332) * position_vector(2, 0) + 1),
                                  Scalar(2))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
