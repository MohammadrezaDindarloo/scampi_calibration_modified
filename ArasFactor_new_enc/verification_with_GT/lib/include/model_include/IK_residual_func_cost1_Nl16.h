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
 * Symbolic function: IK_residual_func_cost1_Nl16
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     p_init0: Scalar
 *     p_init1: Scalar
 *     p_init2: Scalar
 *     rot_init_x: Scalar
 *     rot_init_y: Scalar
 *     rot_init_z: Scalar
 *     rot_init_w: Scalar
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix41
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl16(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 507

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (156)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp2 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp5 = 1 - 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp8 = 2 * _tmp4;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp11 = _tmp10 * _tmp2;
  const Scalar _tmp12 = _tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp2 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp4;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + p_init0;
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp23 = _tmp2 * _tmp8;
  const Scalar _tmp24 = _tmp10 * _tmp7;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + p_init1;
  const Scalar _tmp30 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp31 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp32 = -Scalar(0.010999999999999999) * _tmp20 -
                        Scalar(0.010999999999999999) * _tmp3 + Scalar(-0.010999999999999999);
  const Scalar _tmp33 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp34 = _tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp31 + _tmp34;
  const Scalar _tmp36 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp37 = _tmp13 - _tmp16;
  const Scalar _tmp38 = _tmp37 + _tmp6;
  const Scalar _tmp39 = _tmp38 + p_init0;
  const Scalar _tmp40 = _tmp39 + Scalar(-2.5202214700000001);
  const Scalar _tmp41 = -_tmp21;
  const Scalar _tmp42 = _tmp27 + _tmp41;
  const Scalar _tmp43 = _tmp42 + p_init1;
  const Scalar _tmp44 = _tmp43 + Scalar(8.3888750099999996);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp40 * _tmp45;
  const Scalar _tmp47 = -_tmp31;
  const Scalar _tmp48 = _tmp34 + _tmp47;
  const Scalar _tmp49 = _tmp32 - _tmp33;
  const Scalar _tmp50 = _tmp31 + _tmp49;
  const Scalar _tmp51 = -_tmp22 + _tmp26;
  const Scalar _tmp52 = _tmp41 + _tmp51;
  const Scalar _tmp53 = _tmp52 + p_init1;
  const Scalar _tmp54 = _tmp53 + Scalar(8.3196563700000006);
  const Scalar _tmp55 = -_tmp6;
  const Scalar _tmp56 = _tmp37 + _tmp55;
  const Scalar _tmp57 = _tmp56 + p_init0;
  const Scalar _tmp58 = _tmp57 + Scalar(1.9874742000000001);
  const Scalar _tmp59 = std::pow(Scalar(std::pow(_tmp54, Scalar(2)) + std::pow(_tmp58, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp60 = _tmp58 * _tmp59;
  const Scalar _tmp61 = _tmp47 + _tmp49;
  const Scalar _tmp62 = _tmp48 * _tmp60 - _tmp60 * _tmp61;
  const Scalar _tmp63 = _tmp44 * _tmp45;
  const Scalar _tmp64 = _tmp21 + _tmp51;
  const Scalar _tmp65 = _tmp64 + p_init1;
  const Scalar _tmp66 = _tmp65 + Scalar(-4.8333311099999996);
  const Scalar _tmp67 = _tmp17 + _tmp55;
  const Scalar _tmp68 = _tmp67 + p_init0;
  const Scalar _tmp69 = _tmp68 + Scalar(1.79662371);
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp66 * _tmp70;
  const Scalar _tmp72 = _tmp46 * _tmp71 - _tmp63;
  const Scalar _tmp73 = _tmp54 * _tmp59;
  const Scalar _tmp74 = Scalar(1.0) / (_tmp60 * _tmp71 - _tmp73);
  const Scalar _tmp75 = _tmp72 * _tmp74;
  const Scalar _tmp76 = _tmp48 * _tmp71;
  const Scalar _tmp77 = -_tmp60 * _tmp76 + _tmp61 * _tmp73;
  const Scalar _tmp78 = -_tmp46 * _tmp76 + _tmp50 * _tmp63 - _tmp75 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) * _tmp64;
  const Scalar _tmp80 = -_tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp52 + _tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp67;
  const Scalar _tmp83 = -_tmp56 + _tmp82;
  const Scalar _tmp84 = _tmp81 * _tmp83;
  const Scalar _tmp85 = _tmp46 * _tmp48 - _tmp46 * _tmp50 - _tmp62 * _tmp75 - _tmp78 * _tmp84;
  const Scalar _tmp86 = Scalar(1.0) / (_tmp85);
  const Scalar _tmp87 = _tmp79 * _tmp84 + _tmp82;
  const Scalar _tmp88 = 0;
  const Scalar _tmp89 = _tmp86 * _tmp88;
  const Scalar _tmp90 = _tmp60 * _tmp74;
  const Scalar _tmp91 = _tmp72 * _tmp86;
  const Scalar _tmp92 = _tmp88 * _tmp91;
  const Scalar _tmp93 =
      std::sqrt(Scalar(std::pow(_tmp66, Scalar(2)) + std::pow(_tmp69, Scalar(2))));
  const Scalar _tmp94 = _tmp70 * _tmp93;
  const Scalar _tmp95 = Scalar(1.0) / (_tmp93);
  const Scalar _tmp96 = _tmp94 * (-_tmp64 * _tmp69 * _tmp95 + _tmp66 * _tmp67 * _tmp95);
  const Scalar _tmp97 = _tmp52 * _tmp60 - _tmp56 * _tmp73 + _tmp60 * _tmp96;
  const Scalar _tmp98 = -_tmp38 * _tmp63 + _tmp42 * _tmp46 + _tmp46 * _tmp96 - _tmp75 * _tmp97;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = Scalar(1.0) * _tmp74;
  const Scalar _tmp101 = _tmp100 * _tmp72 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) * _tmp99;
  const Scalar _tmp103 = _tmp29 + Scalar(-4.7752063900000001);
  const Scalar _tmp104 = _tmp19 + Scalar(-2.71799795);
  const Scalar _tmp105 =
      std::pow(Scalar(std::pow(_tmp103, Scalar(2)) + std::pow(_tmp104, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp106 = _tmp103 * _tmp105;
  const Scalar _tmp107 = _tmp104 * _tmp105;
  const Scalar _tmp108 = fh1 * (_tmp106 * _tmp18 - _tmp107 * _tmp28);
  const Scalar _tmp109 = Scalar(1.0) * _tmp81;
  const Scalar _tmp110 = -_tmp100 * _tmp62 + _tmp109 * _tmp74 * _tmp77 * _tmp83;
  const Scalar _tmp111 = _tmp86 * _tmp98;
  const Scalar _tmp112 = _tmp85 * _tmp99;
  const Scalar _tmp113 = _tmp112 * (-_tmp100 * _tmp97 - _tmp110 * _tmp111);
  const Scalar _tmp114 = _tmp110 + _tmp113;
  const Scalar _tmp115 = _tmp46 * _tmp86;
  const Scalar _tmp116 = -_tmp114 * _tmp91 + Scalar(1.0);
  const Scalar _tmp117 = _tmp106 * fh1;
  const Scalar _tmp118 = _tmp71 * _tmp74;
  const Scalar _tmp119 = _tmp118 * _tmp77 + _tmp76;
  const Scalar _tmp120 = _tmp118 * _tmp62 - _tmp119 * _tmp84 - _tmp48;
  const Scalar _tmp121 = _tmp112 * (-_tmp111 * _tmp120 + _tmp118 * _tmp97 - _tmp96);
  const Scalar _tmp122 = _tmp120 + _tmp121;
  const Scalar _tmp123 = -_tmp122 * _tmp91 - _tmp71;
  const Scalar _tmp124 = _tmp107 * fh1;
  const Scalar _tmp125 = -_tmp108 * _tmp94 * (-_tmp101 * _tmp60 + _tmp102 * _tmp46) -
                         _tmp117 * _tmp94 * (_tmp114 * _tmp115 + _tmp116 * _tmp90) -
                         _tmp124 * _tmp94 * (_tmp115 * _tmp122 + _tmp123 * _tmp90 + Scalar(1.0)) -
                         _tmp36 * _tmp94 * (_tmp46 * _tmp89 - _tmp90 * _tmp92);
  const Scalar _tmp126 = Scalar(1.0) / (_tmp125);
  const Scalar _tmp127 = _tmp78 * _tmp86;
  const Scalar _tmp128 = _tmp42 + _tmp80;
  const Scalar _tmp129 = _tmp128 * _tmp84;
  const Scalar _tmp130 = Scalar(1.0) / (-_tmp129 - _tmp38 + _tmp82);
  const Scalar _tmp131 = _tmp128 * _tmp130;
  const Scalar _tmp132 = _tmp119 + _tmp121 * _tmp131 - _tmp122 * _tmp127;
  const Scalar _tmp133 = Scalar(1.0) * _tmp130;
  const Scalar _tmp134 = _tmp130 * _tmp87;
  const Scalar _tmp135 = -_tmp128 * _tmp134 - _tmp78 * _tmp89 + _tmp80;
  const Scalar _tmp136 = _tmp112 * _tmp133;
  const Scalar _tmp137 = -_tmp102 * _tmp78 + _tmp128 * _tmp136;
  const Scalar _tmp138 = _tmp129 * _tmp133 + Scalar(1.0);
  const Scalar _tmp139 = _tmp133 * _tmp84;
  const Scalar _tmp140 = _tmp35 * fh1;
  const Scalar _tmp141 = -_tmp106 * _tmp140 - Scalar(3.29616) * _tmp25 - _tmp28 * fv1;
  const Scalar _tmp142 = _tmp128 * _tmp81;
  const Scalar _tmp143 = _tmp107 * _tmp140 + Scalar(3.29616) * _tmp12 + _tmp18 * fv1;
  const Scalar _tmp144 = -_tmp100 * _tmp77 + _tmp113 * _tmp131 - _tmp114 * _tmp127;
  const Scalar _tmp145 = std::asinh(
      _tmp126 * (Scalar(1.0) * _tmp108 * (-_tmp109 * _tmp137 + _tmp136) +
                 Scalar(1.0) * _tmp117 * (-_tmp109 * _tmp144 + _tmp113 * _tmp133) +
                 Scalar(1.0) * _tmp124 * (-_tmp109 * _tmp132 + _tmp121 * _tmp133) +
                 Scalar(1.0) * _tmp141 * (-_tmp109 * _tmp138 + _tmp139) +
                 Scalar(1.0) * _tmp143 * (_tmp133 * _tmp142 - _tmp133) +
                 Scalar(1.0) * _tmp36 * (-_tmp109 * _tmp135 - _tmp133 * _tmp87 + Scalar(1.0))));
  const Scalar _tmp146 = Scalar(9.6622558468725703) * _tmp125;
  const Scalar _tmp147 = -_tmp101 * _tmp108 + _tmp116 * _tmp117 * _tmp74 +
                         _tmp123 * _tmp124 * _tmp74 - _tmp36 * _tmp74 * _tmp92;
  const Scalar _tmp148 = Scalar(1.0) / (_tmp147);
  const Scalar _tmp149 = _tmp133 * _tmp143;
  const Scalar _tmp150 =
      std::asinh(_tmp148 * (_tmp108 * _tmp137 * _tmp81 + _tmp117 * _tmp144 * _tmp81 +
                            _tmp124 * _tmp132 * _tmp81 + _tmp135 * _tmp36 * _tmp81 +
                            _tmp138 * _tmp141 * _tmp81 - _tmp142 * _tmp149));
  const Scalar _tmp151 = Scalar(9.6622558468725703) * _tmp147;
  const Scalar _tmp152 =
      _tmp102 * _tmp108 + _tmp114 * _tmp117 * _tmp86 + _tmp122 * _tmp124 * _tmp86 + _tmp36 * _tmp89;
  const Scalar _tmp153 = Scalar(1.0) / (_tmp152);
  const Scalar _tmp154 = std::asinh(_tmp153 * (-_tmp108 * _tmp136 - _tmp113 * _tmp117 * _tmp130 -
                                               _tmp121 * _tmp124 * _tmp130 + _tmp134 * _tmp36 -
                                               _tmp139 * _tmp141 + _tmp149));
  const Scalar _tmp155 = Scalar(9.6622558468725703) * _tmp152;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp30 *
          (Scalar(0.86565325453551001) * _tmp0 + std::cosh(Scalar(1.0) * _tmp1) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp1 * _tmp30 -
                Scalar(4.7752063900000001) *
                    std::sqrt(Scalar(
                        Scalar(0.32397683292140877) *
                            std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp19), Scalar(2)) +
                        std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp29), Scalar(2))))))) +
      _tmp35 + p_init2;
  _res(1, 0) =
      -_tmp146 *
          (Scalar(0.86625939559540499) * _tmp126 + std::cosh(Scalar(1.0) * _tmp145) -
           std::cosh(
               Scalar(0.1034955) * _tmp126 *
               (-_tmp145 * _tmp146 -
                Scalar(4.8333311099999996) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp65), Scalar(2)) +
                        Scalar(0.13817235445745474) *
                            std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp68 - 1),
                                     Scalar(2))))))) +
      _tmp48 + p_init2;
  _res(2, 0) =
      -_tmp151 *
          (Scalar(0.87679799772039002) * _tmp148 + std::cosh(Scalar(1.0) * _tmp150) -
           std::cosh(
               Scalar(0.1034955) * _tmp148 *
               (-_tmp150 * _tmp151 -
                Scalar(8.3196563700000006) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp53 - 1), Scalar(2)) +
                        Scalar(0.057067943376852184) *
                            std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp57 - 1),
                                     Scalar(2))))))) +
      _tmp61 + p_init2;
  _res(3, 0) =
      -_tmp155 *
          (Scalar(0.87653584775870996) * _tmp153 + std::cosh(Scalar(1.0) * _tmp154) -
           std::cosh(
               Scalar(0.1034955) * _tmp153 *
               (-_tmp154 * _tmp155 -
                Scalar(8.3888750099999996) *
                    std::sqrt(Scalar(
                        Scalar(0.090254729040973036) *
                            std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp39), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp43 - 1),
                                 Scalar(2))))))) +
      _tmp50 + p_init2;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym