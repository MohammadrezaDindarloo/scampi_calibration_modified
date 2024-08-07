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
 * Symbolic function: IK_residual_func_cost1_Nl21
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1Nl21(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot, const Scalar p_init0,
    const Scalar p_init1, const Scalar p_init2, const Scalar rot_init_x, const Scalar rot_init_y,
    const Scalar rot_init_z, const Scalar rot_init_w, const Scalar epsilon) {
  // Total ops: 500

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();

  // Intermediate terms (152)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = -_DeltaRot[0] * rot_init_y + _DeltaRot[1] * rot_init_x +
                       _DeltaRot[2] * rot_init_w + _DeltaRot[3] * rot_init_z;
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * rot_init_z + _DeltaRot[1] * rot_init_w -
                       _DeltaRot[2] * rot_init_x + _DeltaRot[3] * rot_init_y;
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * rot_init_w - _DeltaRot[1] * rot_init_z +
                       _DeltaRot[2] * rot_init_y + _DeltaRot[3] * rot_init_x;
  const Scalar _tmp8 = 2 * _tmp1;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * rot_init_x - 2 * _DeltaRot[1] * rot_init_y -
                        2 * _DeltaRot[2] * rot_init_z + 2 * _DeltaRot[3] * rot_init_w;
  const Scalar _tmp11 = _tmp10 * _tmp3;
  const Scalar _tmp12 = _tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp15 = _tmp1 * _tmp10;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + p_init0;
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp20 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp22 = _tmp3 * _tmp8;
  const Scalar _tmp23 = _tmp10 * _tmp7;
  const Scalar _tmp24 = _tmp22 - _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + p_init1;
  const Scalar _tmp30 = std::asinh(_tmp0 * fv1);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * fh1;
  const Scalar _tmp32 = Scalar(0.20999999999999999) * _tmp22 + Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp33 =
      -Scalar(0.010999999999999999) * _tmp20 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp34 = -Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp35 = _tmp33 - _tmp34;
  const Scalar _tmp36 = _tmp32 + _tmp35;
  const Scalar _tmp37 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp38 = -_tmp21;
  const Scalar _tmp39 = _tmp25 + _tmp26;
  const Scalar _tmp40 = _tmp38 + _tmp39;
  const Scalar _tmp41 = Scalar(1.0) * _tmp40;
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = _tmp21 + _tmp39;
  const Scalar _tmp44 = Scalar(1.0) / (_tmp42 + _tmp43);
  const Scalar _tmp45 = _tmp27 + _tmp38;
  const Scalar _tmp46 = _tmp42 + _tmp45;
  const Scalar _tmp47 = _tmp13 - _tmp16;
  const Scalar _tmp48 = _tmp47 + _tmp5;
  const Scalar _tmp49 = Scalar(1.0) * _tmp48;
  const Scalar _tmp50 = _tmp47 + _tmp6;
  const Scalar _tmp51 = _tmp17 + _tmp5;
  const Scalar _tmp52 = _tmp44 * (_tmp49 - _tmp51);
  const Scalar _tmp53 = _tmp46 * _tmp52;
  const Scalar _tmp54 = Scalar(1.0) / (_tmp49 - _tmp50 - _tmp53);
  const Scalar _tmp55 = _tmp41 * _tmp52 + _tmp49;
  const Scalar _tmp56 = _tmp54 * _tmp55;
  const Scalar _tmp57 = -_tmp32;
  const Scalar _tmp58 = _tmp35 + _tmp57;
  const Scalar _tmp59 = _tmp45 + p_init1;
  const Scalar _tmp60 = _tmp59 + Scalar(8.3196563700000006);
  const Scalar _tmp61 = _tmp50 + p_init0;
  const Scalar _tmp62 = _tmp61 + Scalar(1.9874742000000001);
  const Scalar _tmp63 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp62, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp64 = _tmp60 * _tmp63;
  const Scalar _tmp65 = _tmp33 + _tmp34;
  const Scalar _tmp66 = _tmp32 + _tmp65;
  const Scalar _tmp67 = _tmp43 + p_init1;
  const Scalar _tmp68 = _tmp67 + Scalar(-4.7752063900000001);
  const Scalar _tmp69 = _tmp51 + p_init0;
  const Scalar _tmp70 = _tmp69 + Scalar(-2.71799795);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp68, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp68 * _tmp71;
  const Scalar _tmp73 = _tmp57 + _tmp65;
  const Scalar _tmp74 = _tmp48 + p_init0;
  const Scalar _tmp75 = _tmp74 + Scalar(-2.5202214700000001);
  const Scalar _tmp76 = Scalar(1.0) / (_tmp75);
  const Scalar _tmp77 = _tmp40 + p_init1;
  const Scalar _tmp78 = _tmp77 + Scalar(8.3888750099999996);
  const Scalar _tmp79 = _tmp76 * _tmp78;
  const Scalar _tmp80 = _tmp73 * _tmp79;
  const Scalar _tmp81 = _tmp70 * _tmp71;
  const Scalar _tmp82 = _tmp66 * _tmp72 - _tmp80 * _tmp81;
  const Scalar _tmp83 = _tmp62 * _tmp63;
  const Scalar _tmp84 = -_tmp64 + _tmp79 * _tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (-_tmp72 + _tmp79 * _tmp81);
  const Scalar _tmp86 = _tmp84 * _tmp85;
  const Scalar _tmp87 = _tmp58 * _tmp64 - _tmp80 * _tmp83 - _tmp82 * _tmp86;
  const Scalar _tmp88 = -_tmp66 * _tmp81 + _tmp73 * _tmp81;
  const Scalar _tmp89 = -_tmp52 * _tmp87 - _tmp58 * _tmp83 + _tmp73 * _tmp83 - _tmp86 * _tmp88;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 = 0;
  const Scalar _tmp92 = _tmp44 * (_tmp42 - _tmp46 * _tmp56 - _tmp87 * _tmp91);
  const Scalar _tmp93 = Scalar(1.0) * _tmp54;
  const Scalar _tmp94 = _tmp29 + Scalar(-4.8333311099999996);
  const Scalar _tmp95 = _tmp19 + Scalar(1.79662371);
  const Scalar _tmp96 = std::pow(Scalar(std::pow(_tmp94, Scalar(2)) + std::pow(_tmp95, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp97 = _tmp94 * _tmp96;
  const Scalar _tmp98 = _tmp36 * fh1;
  const Scalar _tmp99 = -Scalar(3.29616) * _tmp24 - _tmp28 * fv1 - _tmp97 * _tmp98;
  const Scalar _tmp100 = _tmp52 * _tmp93;
  const Scalar _tmp101 = _tmp53 * _tmp93 + Scalar(1.0);
  const Scalar _tmp102 = Scalar(1.0) * _tmp44;
  const Scalar _tmp103 =
      std::sqrt(Scalar(std::pow(_tmp75, Scalar(2)) + std::pow(_tmp78, Scalar(2))));
  const Scalar _tmp104 = Scalar(1.0) / (_tmp103);
  const Scalar _tmp105 = _tmp103 * _tmp76;
  const Scalar _tmp106 = _tmp105 * (-_tmp104 * _tmp40 * _tmp75 + _tmp104 * _tmp48 * _tmp78);
  const Scalar _tmp107 = _tmp106 * _tmp81 + _tmp43 * _tmp81 - _tmp51 * _tmp72;
  const Scalar _tmp108 = _tmp106 * _tmp83 - _tmp107 * _tmp86 + _tmp45 * _tmp83 - _tmp50 * _tmp64;
  const Scalar _tmp109 = Scalar(1.0) / (_tmp108);
  const Scalar _tmp110 = _tmp109 * _tmp89;
  const Scalar _tmp111 = _tmp110 * _tmp93;
  const Scalar _tmp112 = Scalar(1.0) * _tmp109;
  const Scalar _tmp113 = _tmp111 * _tmp46 - _tmp112 * _tmp87;
  const Scalar _tmp114 = _tmp95 * _tmp96;
  const Scalar _tmp115 = fh1 * (-_tmp114 * _tmp28 + _tmp18 * _tmp97);
  const Scalar _tmp116 = _tmp114 * _tmp98 + Scalar(3.29616) * _tmp12 + _tmp18 * fv1;
  const Scalar _tmp117 = _tmp44 * _tmp46;
  const Scalar _tmp118 = Scalar(1.0) * _tmp85;
  const Scalar _tmp119 = _tmp118 * _tmp82;
  const Scalar _tmp120 = -_tmp118 * _tmp88 + _tmp119 * _tmp52;
  const Scalar _tmp121 = _tmp108 * _tmp90;
  const Scalar _tmp122 = _tmp110 * (-_tmp107 * _tmp118 - _tmp120 * _tmp121);
  const Scalar _tmp123 = _tmp46 * _tmp54;
  const Scalar _tmp124 = _tmp90 * (_tmp120 + _tmp122);
  const Scalar _tmp125 = -_tmp119 + _tmp122 * _tmp123 - _tmp124 * _tmp87;
  const Scalar _tmp126 = _tmp97 * fh1;
  const Scalar _tmp127 = _tmp79 * _tmp85;
  const Scalar _tmp128 = _tmp127 * _tmp82 + _tmp80;
  const Scalar _tmp129 = _tmp127 * _tmp88 - _tmp128 * _tmp52 - _tmp73;
  const Scalar _tmp130 = _tmp110 * (-_tmp106 + _tmp107 * _tmp127 - _tmp121 * _tmp129);
  const Scalar _tmp131 = _tmp90 * (_tmp129 + _tmp130);
  const Scalar _tmp132 = _tmp123 * _tmp130 + _tmp128 - _tmp131 * _tmp87;
  const Scalar _tmp133 = _tmp114 * fh1;
  const Scalar _tmp134 = _tmp109 * _tmp118 * _tmp84;
  const Scalar _tmp135 = -_tmp131 * _tmp84 - _tmp79;
  const Scalar _tmp136 = _tmp81 * _tmp85;
  const Scalar _tmp137 = -_tmp124 * _tmp84 + Scalar(1.0);
  const Scalar _tmp138 = -_tmp105 * _tmp115 * (_tmp112 * _tmp83 - _tmp134 * _tmp81) -
                         _tmp105 * _tmp126 * (_tmp124 * _tmp83 + _tmp136 * _tmp137) -
                         _tmp105 * _tmp133 * (_tmp131 * _tmp83 + _tmp135 * _tmp136 + Scalar(1.0)) -
                         _tmp105 * _tmp37 * (-_tmp81 * _tmp86 * _tmp91 + _tmp83 * _tmp91);
  const Scalar _tmp139 = Scalar(1.0) / (_tmp138);
  const Scalar _tmp140 = std::asinh(
      _tmp139 * (Scalar(1.0) * _tmp115 * (-_tmp102 * _tmp113 + _tmp111) +
                 Scalar(1.0) * _tmp116 * (_tmp117 * _tmp93 - _tmp93) +
                 Scalar(1.0) * _tmp126 * (-_tmp102 * _tmp125 + _tmp122 * _tmp93) +
                 Scalar(1.0) * _tmp133 * (-_tmp102 * _tmp132 + _tmp130 * _tmp93) +
                 Scalar(1.0) * _tmp37 * (-_tmp55 * _tmp93 - Scalar(1.0) * _tmp92 + Scalar(1.0)) +
                 Scalar(1.0) * _tmp99 * (_tmp100 - _tmp101 * _tmp102)));
  const Scalar _tmp141 = Scalar(9.6622558468725703) * _tmp138;
  const Scalar _tmp142 = _tmp116 * _tmp93;
  const Scalar _tmp143 = _tmp37 * _tmp91;
  const Scalar _tmp144 = -_tmp115 * _tmp134 + _tmp126 * _tmp137 * _tmp85 +
                         _tmp133 * _tmp135 * _tmp85 - _tmp143 * _tmp86;
  const Scalar _tmp145 = Scalar(1.0) / (_tmp144);
  const Scalar _tmp146 = std::asinh(
      _tmp145 * (_tmp101 * _tmp44 * _tmp99 + _tmp113 * _tmp115 * _tmp44 - _tmp117 * _tmp142 +
                 _tmp125 * _tmp126 * _tmp44 + _tmp132 * _tmp133 * _tmp44 + _tmp37 * _tmp92));
  const Scalar _tmp147 = Scalar(9.6622558468725703) * _tmp144;
  const Scalar _tmp148 = _tmp112 * _tmp115 + _tmp124 * _tmp126 + _tmp131 * _tmp133 + _tmp143;
  const Scalar _tmp149 = Scalar(1.0) / (_tmp148);
  const Scalar _tmp150 =
      std::asinh(_tmp149 * (-_tmp100 * _tmp99 - _tmp111 * _tmp115 - _tmp122 * _tmp126 * _tmp54 -
                            _tmp130 * _tmp133 * _tmp54 + _tmp142 + _tmp37 * _tmp56));
  const Scalar _tmp151 = Scalar(9.6622558468725703) * _tmp148;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -_tmp31 *
          (Scalar(0.86625939559540499) * _tmp0 + std::cosh(Scalar(1.0) * _tmp30) -
           std::cosh(
               Scalar(0.1034955) * _tmp0 *
               (-_tmp30 * _tmp31 -
                Scalar(4.8333311099999996) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20689664689659551) * _tmp29), Scalar(2)) +
                        Scalar(0.13817235445745474) *
                            std::pow(Scalar(-Scalar(0.55659957866191134) * _tmp19 - 1),
                                     Scalar(2))))))) +
      _tmp36 + p_init2;
  _res(1, 0) =
      -_tmp141 *
          (Scalar(0.87653584775870996) * _tmp139 + std::cosh(Scalar(1.0) * _tmp140) -
           std::cosh(
               Scalar(0.1034955) * _tmp139 *
               (-_tmp140 * _tmp141 -
                Scalar(8.3888750099999996) *
                    std::sqrt(Scalar(
                        Scalar(0.090254729040973036) *
                            std::pow(Scalar(1 - Scalar(0.39679052492160538) * _tmp74), Scalar(2)) +
                        std::pow(Scalar(-Scalar(0.11920549523123722) * _tmp77 - 1),
                                 Scalar(2))))))) +
      _tmp73 + p_init2;
  _res(2, 0) =
      -_tmp147 *
          (Scalar(0.86565325453551001) * _tmp145 + std::cosh(Scalar(1.0) * _tmp146) -
           std::cosh(
               Scalar(0.1034955) * _tmp145 *
               (-_tmp146 * _tmp147 -
                Scalar(4.7752063900000001) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(1 - Scalar(0.20941503221602112) * _tmp67), Scalar(2)) +
                        Scalar(0.32397683292140877) *
                            std::pow(Scalar(1 - Scalar(0.36791786395571047) * _tmp69),
                                     Scalar(2))))))) +
      _tmp66 + p_init2;
  _res(3, 0) =
      -_tmp151 *
          (Scalar(0.87679799772039002) * _tmp149 + std::cosh(Scalar(1.0) * _tmp150) -
           std::cosh(
               Scalar(0.1034955) * _tmp149 *
               (-_tmp150 * _tmp151 -
                Scalar(8.3196563700000006) *
                    std::sqrt(Scalar(
                        std::pow(Scalar(-Scalar(0.12019727204189803) * _tmp59 - 1), Scalar(2)) +
                        Scalar(0.057067943376852184) *
                            std::pow(Scalar(-Scalar(0.50315118556004401) * _tmp61 - 1),
                                     Scalar(2))))))) +
      _tmp58 + p_init2;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
