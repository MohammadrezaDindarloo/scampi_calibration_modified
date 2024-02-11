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
 * Symbolic function: FK_residual_func_cost2
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     rot_init_x: Scalar
 *     rot_init_y: Scalar
 *     rot_init_z: Scalar
 *     rot_init_w: Scalar
 *     lc0: Scalar
 *     lc1: Scalar
 *     lc2: Scalar
 *     lc3: Scalar
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost2(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const Scalar rot_init_x,
    const Scalar rot_init_y, const Scalar rot_init_z, const Scalar rot_init_w, const Scalar lc0,
    const Scalar lc1, const Scalar lc2, const Scalar lc3, const Scalar epsilon) {
  // Total ops: 496

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (157)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp6 = -_DeltaRot[0] * rot_init_x - _DeltaRot[1] * rot_init_y -
                       _DeltaRot[2] * rot_init_z + _DeltaRot[3] * rot_init_w;
  const Scalar _tmp7 = 2 * _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = -_tmp8;
  const Scalar _tmp10 = 2 * _tmp1;
  const Scalar _tmp11 = _tmp10 * _tmp5;
  const Scalar _tmp12 = _tmp3 * _tmp6;
  const Scalar _tmp13 = _tmp11 - _tmp12;
  const Scalar _tmp14 = -Scalar(0.010999999999999999) * _tmp13;
  const Scalar _tmp15 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp16 = 1 - 2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp17 = Scalar(0.20999999999999999) * _tmp15 + Scalar(0.20999999999999999) * _tmp16;
  const Scalar _tmp18 = _tmp14 - _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp9;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp22 = -_tmp21;
  const Scalar _tmp23 = _tmp3 * _tmp5;
  const Scalar _tmp24 = _tmp10 * _tmp6;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp16 + Scalar(0.20999999999999999) * _tmp27;
  const Scalar _tmp29 = _tmp26 - _tmp28;
  const Scalar _tmp30 = _tmp22 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
  const Scalar _tmp32 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp33 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp34 = _tmp26 + _tmp28;
  const Scalar _tmp35 = _tmp21 + _tmp34;
  const Scalar _tmp36 = _tmp35 + position_vector(0, 0);
  const Scalar _tmp37 = _tmp36 + Scalar(-2.71799795);
  const Scalar _tmp38 = _tmp14 + _tmp17;
  const Scalar _tmp39 = _tmp38 + _tmp8;
  const Scalar _tmp40 = _tmp39 + position_vector(1, 0);
  const Scalar _tmp41 = _tmp40 + Scalar(-4.7752063900000001);
  const Scalar _tmp42 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp41, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp43 = _tmp37 * _tmp42;
  const Scalar _tmp44 = _tmp22 + _tmp34;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 + Scalar(-2.5202214700000001);
  const Scalar _tmp47 = _tmp18 + _tmp8;
  const Scalar _tmp48 = _tmp47 + position_vector(1, 0);
  const Scalar _tmp49 = _tmp48 + Scalar(8.3888750099999996);
  const Scalar _tmp50 =
      std::sqrt(Scalar(std::pow(_tmp46, Scalar(2)) + std::pow(_tmp49, Scalar(2))));
  const Scalar _tmp51 = Scalar(1.0) / (_tmp50);
  const Scalar _tmp52 = Scalar(1.0) / (_tmp46);
  const Scalar _tmp53 = _tmp50 * _tmp52;
  const Scalar _tmp54 = _tmp53 * (_tmp44 * _tmp49 * _tmp51 - _tmp46 * _tmp47 * _tmp51);
  const Scalar _tmp55 = _tmp41 * _tmp42;
  const Scalar _tmp56 = -_tmp35 * _tmp55 + _tmp39 * _tmp43 + _tmp43 * _tmp54;
  const Scalar _tmp57 = _tmp49 * _tmp52;
  const Scalar _tmp58 = Scalar(1.0) / (_tmp43 * _tmp57 - _tmp55);
  const Scalar _tmp59 = Scalar(1.0) * _tmp58;
  const Scalar _tmp60 = Scalar(1.0) * _tmp44;
  const Scalar _tmp61 = -_tmp35 + _tmp60;
  const Scalar _tmp62 = Scalar(0.20999999999999999) * _tmp23 - Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp63 = -Scalar(0.010999999999999999) * _tmp15 -
                        Scalar(0.010999999999999999) * _tmp27 + Scalar(-0.010999999999999999);
  const Scalar _tmp64 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp65 = _tmp63 - _tmp64;
  const Scalar _tmp66 = _tmp62 + _tmp65;
  const Scalar _tmp67 = _tmp43 * _tmp66;
  const Scalar _tmp68 = _tmp63 + _tmp64;
  const Scalar _tmp69 = _tmp62 + _tmp68;
  const Scalar _tmp70 = _tmp55 * _tmp69 - _tmp57 * _tmp67;
  const Scalar _tmp71 = Scalar(1.0) * _tmp47;
  const Scalar _tmp72 = -_tmp71;
  const Scalar _tmp73 = Scalar(1.0) / (_tmp39 + _tmp72);
  const Scalar _tmp74 = Scalar(1.0) * _tmp73;
  const Scalar _tmp75 = _tmp58 * (-_tmp43 * _tmp69 + _tmp67);
  const Scalar _tmp76 = _tmp58 * _tmp61 * _tmp70 * _tmp74 - Scalar(1.0) * _tmp75;
  const Scalar _tmp77 = _tmp38 + _tmp9;
  const Scalar _tmp78 = _tmp77 + position_vector(1, 0);
  const Scalar _tmp79 = _tmp78 + Scalar(-4.8333311099999996);
  const Scalar _tmp80 = _tmp21 + _tmp29;
  const Scalar _tmp81 = _tmp80 + position_vector(0, 0);
  const Scalar _tmp82 = _tmp81 + Scalar(1.79662371);
  const Scalar _tmp83 = std::pow(Scalar(std::pow(_tmp79, Scalar(2)) + std::pow(_tmp82, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp84 = _tmp82 * _tmp83;
  const Scalar _tmp85 = _tmp79 * _tmp83;
  const Scalar _tmp86 = _tmp57 * _tmp84 - _tmp85;
  const Scalar _tmp87 = -_tmp62;
  const Scalar _tmp88 = _tmp68 + _tmp87;
  const Scalar _tmp89 = _tmp57 * _tmp66;
  const Scalar _tmp90 = _tmp58 * _tmp86;
  const Scalar _tmp91 = -_tmp70 * _tmp90 - _tmp84 * _tmp89 + _tmp85 * _tmp88;
  const Scalar _tmp92 = _tmp61 * _tmp73;
  const Scalar _tmp93 = _tmp66 * _tmp84 - _tmp75 * _tmp86 - _tmp84 * _tmp88 - _tmp91 * _tmp92;
  const Scalar _tmp94 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp95 = _tmp54 * _tmp84 - _tmp56 * _tmp90 + _tmp77 * _tmp84 - _tmp80 * _tmp85;
  const Scalar _tmp96 = _tmp94 * _tmp95;
  const Scalar _tmp97 = Scalar(1.0) / (_tmp95);
  const Scalar _tmp98 = _tmp93 * _tmp97;
  const Scalar _tmp99 = _tmp98 * (-_tmp56 * _tmp59 - _tmp76 * _tmp96);
  const Scalar _tmp100 = _tmp76 + _tmp99;
  const Scalar _tmp101 = _tmp84 * _tmp94;
  const Scalar _tmp102 = _tmp86 * _tmp94;
  const Scalar _tmp103 = -_tmp100 * _tmp102 + Scalar(1.0);
  const Scalar _tmp104 = _tmp43 * _tmp58;
  const Scalar _tmp105 = _tmp20 + Scalar(8.3196563700000006);
  const Scalar _tmp106 = _tmp31 + Scalar(1.9874742000000001);
  const Scalar _tmp107 =
      std::pow(Scalar(std::pow(_tmp105, Scalar(2)) + std::pow(_tmp106, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp108 = _tmp105 * _tmp107;
  const Scalar _tmp109 = _tmp108 * fh1;
  const Scalar _tmp110 = _tmp57 * _tmp58;
  const Scalar _tmp111 = _tmp110 * _tmp70 + _tmp89;
  const Scalar _tmp112 = -_tmp111 * _tmp92 + _tmp57 * _tmp75 - _tmp66;
  const Scalar _tmp113 = _tmp98 * (_tmp110 * _tmp56 - _tmp112 * _tmp96 - _tmp54);
  const Scalar _tmp114 = _tmp112 + _tmp113;
  const Scalar _tmp115 = -_tmp102 * _tmp114 - _tmp57;
  const Scalar _tmp116 = _tmp106 * _tmp107;
  const Scalar _tmp117 = _tmp116 * fh1;
  const Scalar _tmp118 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp119 = _tmp60 + _tmp71 * _tmp92;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp120 * _tmp94;
  const Scalar _tmp122 = _tmp102 * _tmp120;
  const Scalar _tmp123 = Scalar(1.0) * _tmp97;
  const Scalar _tmp124 = fh1 * (_tmp108 * _tmp30 - _tmp116 * _tmp19);
  const Scalar _tmp125 = -_tmp109 * _tmp53 * (_tmp100 * _tmp101 + _tmp103 * _tmp104) -
                         _tmp117 * _tmp53 * (_tmp101 * _tmp114 + _tmp104 * _tmp115 + Scalar(1.0)) -
                         _tmp118 * _tmp53 * (-_tmp104 * _tmp122 + _tmp121 * _tmp84) -
                         _tmp124 * _tmp53 * (-_tmp123 * _tmp43 * _tmp90 + _tmp123 * _tmp84);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp72 + _tmp77;
  const Scalar _tmp128 = _tmp127 * _tmp92;
  const Scalar _tmp129 = Scalar(1.0) / (-_tmp128 + _tmp60 - _tmp80);
  const Scalar _tmp130 = Scalar(1.0) * _tmp129;
  const Scalar _tmp131 = _tmp130 * _tmp98;
  const Scalar _tmp132 = -_tmp123 * _tmp91 + _tmp127 * _tmp131;
  const Scalar _tmp133 = _tmp119 * _tmp129;
  const Scalar _tmp134 = _tmp91 * _tmp94;
  const Scalar _tmp135 = -_tmp120 * _tmp134 - _tmp127 * _tmp133 + _tmp72;
  const Scalar _tmp136 = _tmp127 * _tmp129;
  const Scalar _tmp137 = -_tmp100 * _tmp134 + _tmp136 * _tmp99 - _tmp59 * _tmp70;
  const Scalar _tmp138 = _tmp127 * _tmp73;
  const Scalar _tmp139 = fh1 * (_tmp65 + _tmp87);
  const Scalar _tmp140 = _tmp116 * _tmp139 + Scalar(3.29616) * _tmp25 + _tmp30 * fv1;
  const Scalar _tmp141 = _tmp128 * _tmp130 + Scalar(1.0);
  const Scalar _tmp142 = _tmp130 * _tmp92;
  const Scalar _tmp143 = -_tmp108 * _tmp139 - Scalar(3.29616) * _tmp13 - _tmp19 * fv1;
  const Scalar _tmp144 = _tmp111 + _tmp113 * _tmp136 - _tmp114 * _tmp134;
  const Scalar _tmp145 = std::asinh(
      _tmp126 * (Scalar(1.0) * _tmp109 * (_tmp130 * _tmp99 - _tmp137 * _tmp74) +
                 Scalar(1.0) * _tmp117 * (_tmp113 * _tmp130 - _tmp144 * _tmp74) +
                 Scalar(1.0) * _tmp118 * (-_tmp119 * _tmp130 - _tmp135 * _tmp74 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp124 * (_tmp131 - _tmp132 * _tmp74) +
                 Scalar(1.0) * _tmp140 * (_tmp130 * _tmp138 - _tmp130) +
                 Scalar(1.0) * _tmp143 * (-_tmp141 * _tmp74 + _tmp142)));
  const Scalar _tmp146 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp147 = _tmp130 * _tmp140;
  const Scalar _tmp148 = _tmp123 * _tmp124;
  const Scalar _tmp149 = _tmp103 * _tmp109 * _tmp58 + _tmp115 * _tmp117 * _tmp58 -
                         _tmp118 * _tmp122 * _tmp58 - _tmp148 * _tmp90;
  const Scalar _tmp150 = Scalar(1.0) / (_tmp149);
  const Scalar _tmp151 =
      std::asinh(_tmp150 * (_tmp109 * _tmp137 * _tmp73 + _tmp117 * _tmp144 * _tmp73 +
                            _tmp118 * _tmp135 * _tmp73 + _tmp124 * _tmp132 * _tmp73 -
                            _tmp138 * _tmp147 + _tmp141 * _tmp143 * _tmp73));
  const Scalar _tmp152 = Scalar(9.6622558468725703) * _tmp149;
  const Scalar _tmp153 =
      _tmp100 * _tmp109 * _tmp94 + _tmp114 * _tmp117 * _tmp94 + _tmp118 * _tmp121 + _tmp148;
  const Scalar _tmp154 = Scalar(1.0) / (_tmp153);
  const Scalar _tmp155 =
      std::asinh(_tmp154 * (-_tmp109 * _tmp129 * _tmp99 - _tmp113 * _tmp117 * _tmp129 +
                            _tmp118 * _tmp133 - _tmp124 * _tmp131 - _tmp142 * _tmp143 + _tmp147));
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp153;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      _tmp33 *
          (-std::sinh(Scalar(1.0) * _tmp32) -
           std::sinh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp32 * _tmp33 -
                Scalar(8.3196563700000006) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp20 - 1), Scalar(2)) +
                        Scalar(0.057067943376852184) *
                            std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp31 - 1),
                                     Scalar(2))))))) -
      lc0;
  _res(1, 0) =
      _tmp146 *
          (-std::sinh(Scalar(1.0) * _tmp145) -
           std::sinh(
               Scalar(0.1034955) * _tmp126 *
               (-_tmp145 * _tmp146 -
                Scalar(8.3888750099999996) *
                    std::sqrt(Scalar(
                        Scalar(0.090254729040973036) *
                            std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp45), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp48 - 1),
                                 Scalar(2))))))) -
      lc1;
  _res(2, 0) =
      _tmp152 *
          (-std::sinh(Scalar(1.0) * _tmp151) -
           std::sinh(
               Scalar(0.1034955) * _tmp150 *
               (-_tmp151 * _tmp152 -
                Scalar(4.7752063900000001) *
                    std::sqrt(Scalar(
                        Scalar(0.32397683292140877) *
                            std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp36), Scalar(2)) +
                        std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp40), Scalar(2))))))) -
      lc2;
  _res(3, 0) =
      _tmp156 *
          (-std::sinh(Scalar(1.0) * _tmp155) -
           std::sinh(
               Scalar(0.1034955) * _tmp154 *
               (-_tmp155 * _tmp156 -
                Scalar(4.8333311099999996) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp78), Scalar(2)) +
                        Scalar(0.13817235445745474) *
                            std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp81 - 1),
                                     Scalar(2))))))) -
      lc3;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
