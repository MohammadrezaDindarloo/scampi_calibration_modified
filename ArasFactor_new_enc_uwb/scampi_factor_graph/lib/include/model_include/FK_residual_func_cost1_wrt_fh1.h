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
 * Symbolic function: FK_residual_func_cost1_wrt_fh1
 *
 * Args:
 *     fh1: Scalar
 *     fv1: Scalar
 *     DeltaRot: Rot3
 *     position_vector: Matrix31
 *     Rot_init: Rot3
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
Eigen::Matrix<Scalar, 4, 1> FkResidualFuncCost1WrtFh1(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Eigen::Matrix<Scalar, 4, 1>& encoder, const Eigen::Matrix<Scalar, 3, 1>& p_a,
    const Eigen::Matrix<Scalar, 3, 1>& p_b, const Eigen::Matrix<Scalar, 3, 1>& p_c,
    const Eigen::Matrix<Scalar, 3, 1>& p_d, const Scalar epsilon) {
  // Total ops: 638

  // Unused inputs
  (void)encoder;
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (213)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = Scalar(0.1034955) * p_a(2, 0);
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp3 = -2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp5 = -2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = Scalar(0.20999999999999999) * _tmp3 + Scalar(0.20999999999999999) * _tmp5 +
                       Scalar(0.20999999999999999);
  const Scalar _tmp7 = -_tmp6;
  const Scalar _tmp8 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp9 = 2 * _tmp2;
  const Scalar _tmp10 = _tmp8 * _tmp9;
  const Scalar _tmp11 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp12 = _tmp11 * _tmp4;
  const Scalar _tmp13 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp14 = 2 * _tmp4 * _tmp8;
  const Scalar _tmp15 = _tmp11 * _tmp2;
  const Scalar _tmp16 = _tmp14 - _tmp15;
  const Scalar _tmp17 = -Scalar(0.010999999999999999) * _tmp16;
  const Scalar _tmp18 = -_tmp13 + _tmp17;
  const Scalar _tmp19 = _tmp18 + _tmp7;
  const Scalar _tmp20 = _tmp19 + position_vector(1, 0);
  const Scalar _tmp21 = 1 - 2 * std::pow(_tmp8, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp5;
  const Scalar _tmp23 = -_tmp22;
  const Scalar _tmp24 = _tmp4 * _tmp9;
  const Scalar _tmp25 = _tmp11 * _tmp8;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = -Scalar(0.010999999999999999) * _tmp26;
  const Scalar _tmp28 = Scalar(0.20999999999999999) * _tmp10 - Scalar(0.20999999999999999) * _tmp12;
  const Scalar _tmp29 = _tmp27 - _tmp28;
  const Scalar _tmp30 = _tmp23 + _tmp29;
  const Scalar _tmp31 = _tmp30 + position_vector(0, 0);
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
  const Scalar _tmp40 = Scalar(0.20999999999999999) * _tmp24 - Scalar(0.20999999999999999) * _tmp25;
  const Scalar _tmp41 = -_tmp40;
  const Scalar _tmp42 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp3;
  const Scalar _tmp43 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp41 + _tmp44;
  const Scalar _tmp46 = _tmp27 + _tmp28;
  const Scalar _tmp47 = _tmp23 + _tmp46;
  const Scalar _tmp48 = _tmp47 + position_vector(0, 0);
  const Scalar _tmp49 = _tmp48 - p_d(0, 0);
  const Scalar _tmp50 = _tmp18 + _tmp6;
  const Scalar _tmp51 = _tmp50 + position_vector(1, 0);
  const Scalar _tmp52 = _tmp51 - p_d(1, 0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp49, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp49 * _tmp53;
  const Scalar _tmp55 = _tmp42 - _tmp43;
  const Scalar _tmp56 = _tmp40 + _tmp55;
  const Scalar _tmp57 = _tmp52 * _tmp53;
  const Scalar _tmp58 = _tmp22 + _tmp46;
  const Scalar _tmp59 = _tmp58 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 - p_c(0, 0);
  const Scalar _tmp61 = _tmp13 + _tmp17;
  const Scalar _tmp62 = _tmp6 + _tmp61;
  const Scalar _tmp63 = _tmp62 + position_vector(1, 0);
  const Scalar _tmp64 = _tmp63 - p_c(1, 0);
  const Scalar _tmp65 = std::pow(Scalar(std::pow(_tmp60, Scalar(2)) + std::pow(_tmp64, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp66 = _tmp60 * _tmp65;
  const Scalar _tmp67 = _tmp22 + _tmp29;
  const Scalar _tmp68 = _tmp67 + position_vector(0, 0);
  const Scalar _tmp69 = _tmp68 - p_b(0, 0);
  const Scalar _tmp70 = Scalar(1.0) / (_tmp69);
  const Scalar _tmp71 = _tmp61 + _tmp7;
  const Scalar _tmp72 = _tmp71 + position_vector(1, 0);
  const Scalar _tmp73 = _tmp72 - p_b(1, 0);
  const Scalar _tmp74 = _tmp70 * _tmp73;
  const Scalar _tmp75 = _tmp56 * _tmp74;
  const Scalar _tmp76 = _tmp40 + _tmp44;
  const Scalar _tmp77 = _tmp64 * _tmp65;
  const Scalar _tmp78 = -_tmp66 * _tmp75 + _tmp76 * _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (_tmp66 * _tmp74 - _tmp77);
  const Scalar _tmp80 = _tmp54 * _tmp74 - _tmp57;
  const Scalar _tmp81 = _tmp79 * _tmp80;
  const Scalar _tmp82 = _tmp45 * _tmp57 - _tmp54 * _tmp75 - _tmp78 * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) * _tmp71;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp62 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp67;
  const Scalar _tmp87 = -_tmp58 + _tmp86;
  const Scalar _tmp88 = _tmp85 * _tmp87;
  const Scalar _tmp89 = _tmp79 * (_tmp56 * _tmp66 - _tmp66 * _tmp76);
  const Scalar _tmp90 = -_tmp45 * _tmp54 + _tmp54 * _tmp56 - _tmp80 * _tmp89 - _tmp82 * _tmp88;
  const Scalar _tmp91 = Scalar(1.0) / (_tmp90);
  const Scalar _tmp92 = Scalar(1.0) * _tmp85;
  const Scalar _tmp93 = _tmp78 * _tmp79 * _tmp87 * _tmp92 - Scalar(1.0) * _tmp89;
  const Scalar _tmp94 =
      std::sqrt(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp73, Scalar(2))));
  const Scalar _tmp95 = Scalar(1.0) / (_tmp94);
  const Scalar _tmp96 = _tmp70 * _tmp94;
  const Scalar _tmp97 = _tmp96 * (_tmp67 * _tmp73 * _tmp95 - _tmp69 * _tmp71 * _tmp95);
  const Scalar _tmp98 = -_tmp58 * _tmp77 + _tmp62 * _tmp66 + _tmp66 * _tmp97;
  const Scalar _tmp99 = -_tmp47 * _tmp57 + _tmp50 * _tmp54 + _tmp54 * _tmp97 - _tmp81 * _tmp98;
  const Scalar _tmp100 = _tmp91 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) * _tmp79;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp103 = _tmp102 * _tmp90;
  const Scalar _tmp104 = _tmp103 * (-_tmp100 * _tmp93 - _tmp101 * _tmp98);
  const Scalar _tmp105 = _tmp91 * (_tmp104 + _tmp93);
  const Scalar _tmp106 = _tmp79 * (-_tmp105 * _tmp80 + Scalar(1.0));
  const Scalar _tmp107 = _tmp20 - p_a(1, 0);
  const Scalar _tmp108 = _tmp31 - p_a(0, 0);
  const Scalar _tmp109 =
      std::pow(Scalar(std::pow(_tmp107, Scalar(2)) + std::pow(_tmp108, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp110 = _tmp107 * _tmp109;
  const Scalar _tmp111 = _tmp110 * _tmp96 * (_tmp105 * _tmp54 + _tmp106 * _tmp66);
  const Scalar _tmp112 = _tmp108 * _tmp109;
  const Scalar _tmp113 = _tmp110 * _tmp30 - _tmp112 * _tmp19;
  const Scalar _tmp114 = Scalar(1.0) * _tmp102;
  const Scalar _tmp115 = _tmp66 * _tmp81;
  const Scalar _tmp116 = _tmp113 * _tmp96 * (-_tmp114 * _tmp115 + _tmp114 * _tmp54);
  const Scalar _tmp117 = _tmp74 * _tmp79;
  const Scalar _tmp118 = _tmp117 * _tmp78 + _tmp75;
  const Scalar _tmp119 = -_tmp118 * _tmp88 - _tmp56 + _tmp74 * _tmp89;
  const Scalar _tmp120 = _tmp103 * (-_tmp100 * _tmp119 + _tmp117 * _tmp98 - _tmp97);
  const Scalar _tmp121 = _tmp91 * (_tmp119 + _tmp120);
  const Scalar _tmp122 = _tmp79 * (-_tmp121 * _tmp80 - _tmp74);
  const Scalar _tmp123 = _tmp112 * _tmp96 * (_tmp121 * _tmp54 + _tmp122 * _tmp66 + Scalar(1.0));
  const Scalar _tmp124 = -_tmp111 - _tmp116 - _tmp123;
  const Scalar _tmp125 = Scalar(43.164000000000001) - fv1;
  const Scalar _tmp126 = _tmp83 * _tmp88 + _tmp86;
  const Scalar _tmp127 = 0;
  const Scalar _tmp128 = -_tmp111 * fh1 - _tmp116 * fh1 - _tmp123 * fh1 -
                         _tmp125 * _tmp96 * (-_tmp115 * _tmp127 + _tmp127 * _tmp54);
  const Scalar _tmp129 = Scalar(1.0) / (_tmp128);
  const Scalar _tmp130 = Scalar(0.1034955) * _tmp129;
  const Scalar _tmp131 = _tmp41 + _tmp55;
  const Scalar _tmp132 = _tmp131 * fh1;
  const Scalar _tmp133 = _tmp112 * _tmp132 + Scalar(5.1796800000000003) * _tmp26 + _tmp30 * fv1;
  const Scalar _tmp134 = _tmp50 + _tmp84;
  const Scalar _tmp135 = _tmp134 * _tmp88;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp47 + _tmp86);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp134 * _tmp85;
  const Scalar _tmp139 = Scalar(1.0) * _tmp137 * _tmp138 - Scalar(1.0) * _tmp137;
  const Scalar _tmp140 = _tmp126 * _tmp136;
  const Scalar _tmp141 = -_tmp127 * _tmp82 - _tmp134 * _tmp140 + _tmp84;
  const Scalar _tmp142 = _tmp103 * _tmp137;
  const Scalar _tmp143 = -_tmp114 * _tmp82 + _tmp134 * _tmp142;
  const Scalar _tmp144 = Scalar(1.0) * _tmp113;
  const Scalar _tmp145 = _tmp144 * (_tmp142 - _tmp143 * _tmp92);
  const Scalar _tmp146 = -_tmp110 * _tmp132 - Scalar(5.1796800000000003) * _tmp16 - _tmp19 * fv1;
  const Scalar _tmp147 = _tmp85 * (_tmp135 * _tmp137 + Scalar(1.0));
  const Scalar _tmp148 = _tmp137 * _tmp88;
  const Scalar _tmp149 = -Scalar(1.0) * _tmp147 + Scalar(1.0) * _tmp148;
  const Scalar _tmp150 = _tmp134 * _tmp136;
  const Scalar _tmp151 = -_tmp101 * _tmp78 + _tmp104 * _tmp150 - _tmp105 * _tmp82;
  const Scalar _tmp152 = Scalar(1.0) * _tmp110 * (_tmp104 * _tmp137 - _tmp151 * _tmp92);
  const Scalar _tmp153 = _tmp118 + _tmp120 * _tmp150 - _tmp121 * _tmp82;
  const Scalar _tmp154 = Scalar(1.0) * _tmp112 * (_tmp120 * _tmp137 - _tmp153 * _tmp92);
  const Scalar _tmp155 =
      Scalar(1.0) * _tmp125 * (-_tmp126 * _tmp137 - _tmp141 * _tmp92 + Scalar(1.0)) +
      _tmp133 * _tmp139 + _tmp145 * fh1 + _tmp146 * _tmp149 + _tmp152 * fh1 + _tmp154 * fh1;
  const Scalar _tmp156 = std::asinh(_tmp129 * _tmp155);
  const Scalar _tmp157 = Scalar(9.6622558468725703) * _tmp156;
  const Scalar _tmp158 =
      -_tmp128 * _tmp157 - std::sqrt(Scalar(std::pow(Scalar(-_tmp68 + p_b(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp72 + p_b(1, 0)), Scalar(2))));
  const Scalar _tmp159 = _tmp130 * _tmp158;
  const Scalar _tmp160 = Scalar(1.0) * _tmp156;
  const Scalar _tmp161 = std::pow(_tmp128, Scalar(-2));
  const Scalar _tmp162 = _tmp110 * _tmp131;
  const Scalar _tmp163 = _tmp112 * _tmp131;
  const Scalar _tmp164 = _tmp124 * _tmp161;
  const Scalar _tmp165 =
      (_tmp129 * (_tmp139 * _tmp163 + _tmp145 - _tmp149 * _tmp162 + _tmp152 + _tmp154) -
       _tmp155 * _tmp164) /
      std::sqrt(Scalar(std::pow(_tmp155, Scalar(2)) * _tmp161 + 1));
  const Scalar _tmp166 = Scalar(0.1034955) * _tmp164;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp128;
  const Scalar _tmp168 = _tmp106 * _tmp110;
  const Scalar _tmp169 = _tmp112 * _tmp122;
  const Scalar _tmp170 = _tmp102 * _tmp144;
  const Scalar _tmp171 = _tmp170 * fh1;
  const Scalar _tmp172 = _tmp125 * _tmp127;
  const Scalar _tmp173 = _tmp168 * fh1 + _tmp169 * fh1 - _tmp171 * _tmp81 - _tmp172 * _tmp81;
  const Scalar _tmp174 = Scalar(1.0) / (_tmp173);
  const Scalar _tmp175 = _tmp112 * _tmp85;
  const Scalar _tmp176 = _tmp153 * _tmp175;
  const Scalar _tmp177 = _tmp110 * _tmp151 * _tmp85;
  const Scalar _tmp178 = _tmp113 * _tmp143 * _tmp85;
  const Scalar _tmp179 = _tmp133 * _tmp137;
  const Scalar _tmp180 = _tmp125 * _tmp141 * _tmp85 - _tmp138 * _tmp179 + _tmp146 * _tmp147 +
                         _tmp176 * fh1 + _tmp177 * fh1 + _tmp178 * fh1;
  const Scalar _tmp181 = std::asinh(_tmp174 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp173;
  const Scalar _tmp184 =
      -_tmp181 * _tmp183 - std::sqrt(Scalar(std::pow(Scalar(-_tmp59 + p_c(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp63 + p_c(1, 0)), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.1034955) * _tmp174;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = _tmp168 + _tmp169 - _tmp170 * _tmp81;
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp173, Scalar(-2));
  const Scalar _tmp190 = _tmp187 * _tmp189;
  const Scalar _tmp191 = (_tmp174 * (-_tmp131 * _tmp134 * _tmp137 * _tmp175 - _tmp147 * _tmp162 +
                                     _tmp176 + _tmp177 + _tmp178) -
                          _tmp180 * _tmp190) /
                         std::sqrt(Scalar(std::pow(_tmp180, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = Scalar(0.1034955) * _tmp190;
  const Scalar _tmp193 = _tmp112 * _tmp121;
  const Scalar _tmp194 = _tmp105 * _tmp110;
  const Scalar _tmp195 = _tmp171 + _tmp172 + _tmp193 * fh1 + _tmp194 * fh1;
  const Scalar _tmp196 = Scalar(1.0) / (_tmp195);
  const Scalar _tmp197 = Scalar(0.1034955) * _tmp196;
  const Scalar _tmp198 = _tmp104 * _tmp110 * _tmp136;
  const Scalar _tmp199 = _tmp113 * _tmp142;
  const Scalar _tmp200 = _tmp112 * _tmp120 * _tmp136;
  const Scalar _tmp201 = _tmp125 * _tmp140 - _tmp146 * _tmp148 + _tmp179 - _tmp198 * fh1 -
                         _tmp199 * fh1 - _tmp200 * fh1;
  const Scalar _tmp202 = std::asinh(_tmp196 * _tmp201);
  const Scalar _tmp203 = Scalar(9.6622558468725703) * _tmp195;
  const Scalar _tmp204 =
      -_tmp202 * _tmp203 - std::sqrt(Scalar(std::pow(Scalar(-_tmp48 + p_d(0, 0)), Scalar(2)) +
                                            std::pow(Scalar(-_tmp51 + p_d(1, 0)), Scalar(2))));
  const Scalar _tmp205 = _tmp197 * _tmp204;
  const Scalar _tmp206 = Scalar(1.0) * _tmp202;
  const Scalar _tmp207 = _tmp170 + _tmp193 + _tmp194;
  const Scalar _tmp208 = Scalar(9.6622558468725703) * _tmp207;
  const Scalar _tmp209 = std::pow(_tmp195, Scalar(-2));
  const Scalar _tmp210 = _tmp207 * _tmp209;
  const Scalar _tmp211 =
      (_tmp196 * (_tmp137 * _tmp163 + _tmp148 * _tmp162 - _tmp198 - _tmp199 - _tmp200) -
       _tmp201 * _tmp210) /
      std::sqrt(Scalar(std::pow(_tmp201, Scalar(2)) * _tmp209 + 1));
  const Scalar _tmp212 = Scalar(0.1034955) * _tmp210;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(9.6622558468725703) * _tmp0 * _tmp1 -
      Scalar(9.6622558468725703) * fh1 *
          (-_tmp1 * _tmp37 - Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::sinh(_tmp39) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp32 * _tmp38 - _tmp34) -
            _tmp35 * _tmp37) *
               std::sinh(_tmp36)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp36) -
      Scalar(9.6622558468725703) * std::cosh(_tmp39);
  _res(1, 0) = -Scalar(9.6622558468725703) * _tmp124 *
                   (_tmp130 * p_b(2, 0) - std::cosh(_tmp159) + std::cosh(_tmp160)) -
               _tmp167 * (Scalar(1.0) * _tmp165 * std::sinh(_tmp160) - _tmp166 * p_b(2, 0) -
                          (_tmp130 * (-_tmp124 * _tmp157 - _tmp165 * _tmp167) - _tmp158 * _tmp166) *
                              std::sinh(_tmp159));
  _res(2, 0) =
      -_tmp183 * (Scalar(1.0) * _tmp191 * std::sinh(_tmp182) - _tmp192 * p_c(2, 0) -
                  (-_tmp184 * _tmp192 + _tmp185 * (-_tmp181 * _tmp188 - _tmp183 * _tmp191)) *
                      std::sinh(_tmp186)) -
      _tmp188 * (_tmp185 * p_c(2, 0) + std::cosh(_tmp182) - std::cosh(_tmp186));
  _res(3, 0) =
      -_tmp203 * (Scalar(1.0) * _tmp211 * std::sinh(_tmp206) - _tmp212 * p_d(2, 0) -
                  (_tmp197 * (-_tmp202 * _tmp208 - _tmp203 * _tmp211) - _tmp204 * _tmp212) *
                      std::sinh(_tmp205)) -
      _tmp208 * (_tmp197 * p_d(2, 0) - std::cosh(_tmp205) + std::cosh(_tmp206));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym