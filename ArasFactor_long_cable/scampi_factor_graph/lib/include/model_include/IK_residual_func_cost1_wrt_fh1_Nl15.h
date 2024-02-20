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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl15
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl15(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 653

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (211)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp7 = 2 * _tmp3 * _tmp6;
  const Scalar _tmp8 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp9 = _tmp1 * _tmp8;
  const Scalar _tmp10 = _tmp7 + _tmp9;
  const Scalar _tmp11 = -Scalar(0.010999999999999999) * _tmp10;
  const Scalar _tmp12 = 2 * _tmp1;
  const Scalar _tmp13 = _tmp12 * _tmp6;
  const Scalar _tmp14 = _tmp3 * _tmp8;
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 - Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp16 = _tmp11 + _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp5;
  const Scalar _tmp18 = _tmp17 + position_vector(0, 0);
  const Scalar _tmp19 = -2 * std::pow(_tmp6, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp19 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp21 = _tmp12 * _tmp3;
  const Scalar _tmp22 = _tmp6 * _tmp8;
  const Scalar _tmp23 = _tmp21 - _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp13 + Scalar(0.20999999999999999) * _tmp14;
  const Scalar _tmp26 = _tmp24 + _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(1, 0);
  const Scalar _tmp29 = _tmp0 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -Scalar(0.1034955) * _tmp31 * fh1 -
      Scalar(12.936937500000001) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp18), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp28), Scalar(2))));
  const Scalar _tmp33 = _tmp0 * _tmp32;
  const Scalar _tmp34 = Scalar(1.0) * _tmp30;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = _tmp28 + Scalar(-110.0);
  const Scalar _tmp38 = _tmp18 + Scalar(-125.0);
  const Scalar _tmp39 = std::pow(Scalar(std::pow(_tmp37, Scalar(2)) + std::pow(_tmp38, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp40 = _tmp38 * _tmp39;
  const Scalar _tmp41 = _tmp37 * _tmp39;
  const Scalar _tmp42 = _tmp17 * _tmp41 - _tmp27 * _tmp40;
  const Scalar _tmp43 = -_tmp20;
  const Scalar _tmp44 = _tmp24 - _tmp25;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp47 = _tmp46 + Scalar(110.0);
  const Scalar _tmp48 = -_tmp5;
  const Scalar _tmp49 = _tmp11 - _tmp15;
  const Scalar _tmp50 = _tmp48 + _tmp49;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(125.0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp47, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp52 * _tmp53;
  const Scalar _tmp55 = _tmp49 + _tmp5;
  const Scalar _tmp56 = _tmp26 + _tmp43;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(110.0);
  const Scalar _tmp59 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 + Scalar(-125.0);
  const Scalar _tmp61 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp64 * (_tmp55 * _tmp58 * _tmp62 - _tmp56 * _tmp60 * _tmp62);
  const Scalar _tmp66 = _tmp16 + _tmp48;
  const Scalar _tmp67 = _tmp20 + _tmp44;
  const Scalar _tmp68 = _tmp67 + position_vector(1, 0);
  const Scalar _tmp69 = _tmp68 + Scalar(-110.0);
  const Scalar _tmp70 = _tmp66 + position_vector(0, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(125.0);
  const Scalar _tmp72 = std::pow(Scalar(std::pow(_tmp69, Scalar(2)) + std::pow(_tmp71, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp73 = _tmp69 * _tmp72;
  const Scalar _tmp74 = _tmp71 * _tmp72;
  const Scalar _tmp75 = _tmp65 * _tmp74 - _tmp66 * _tmp73 + _tmp67 * _tmp74;
  const Scalar _tmp76 = _tmp58 * _tmp63;
  const Scalar _tmp77 = _tmp47 * _tmp53;
  const Scalar _tmp78 = _tmp54 * _tmp76 - _tmp77;
  const Scalar _tmp79 = Scalar(1.0) / (-_tmp73 + _tmp74 * _tmp76);
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp45 * _tmp54 - _tmp50 * _tmp77 + _tmp54 * _tmp65 - _tmp75 * _tmp80;
  const Scalar _tmp82 = Scalar(1.0) / (_tmp81);
  const Scalar _tmp83 = Scalar(1.0) * _tmp82;
  const Scalar _tmp84 = _tmp74 * _tmp80;
  const Scalar _tmp85 = _tmp42 * _tmp64 * (_tmp54 * _tmp83 - _tmp83 * _tmp84);
  const Scalar _tmp86 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp87 = Scalar(0.20999999999999999) * _tmp7 - Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp88 = -Scalar(0.010999999999999999) * _tmp19 -
                        Scalar(0.010999999999999999) * _tmp2 + Scalar(-0.010999999999999999);
  const Scalar _tmp89 = Scalar(0.20999999999999999) * _tmp21 + Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp90 = _tmp88 - _tmp89;
  const Scalar _tmp91 = _tmp87 + _tmp90;
  const Scalar _tmp92 = _tmp54 * _tmp91;
  const Scalar _tmp93 = -_tmp87;
  const Scalar _tmp94 = _tmp90 + _tmp93;
  const Scalar _tmp95 = _tmp88 + _tmp89;
  const Scalar _tmp96 = _tmp93 + _tmp95;
  const Scalar _tmp97 = _tmp74 * _tmp91;
  const Scalar _tmp98 = _tmp73 * _tmp96 - _tmp76 * _tmp97;
  const Scalar _tmp99 = -_tmp76 * _tmp92 + _tmp77 * _tmp94 - _tmp80 * _tmp98;
  const Scalar _tmp100 = Scalar(1.0) * _tmp56;
  const Scalar _tmp101 = -_tmp100;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp101 + _tmp67);
  const Scalar _tmp103 = Scalar(1.0) * _tmp55;
  const Scalar _tmp104 = _tmp103 - _tmp66;
  const Scalar _tmp105 = _tmp102 * _tmp104;
  const Scalar _tmp106 = _tmp79 * (-_tmp74 * _tmp96 + _tmp97);
  const Scalar _tmp107 = -_tmp105 * _tmp99 - _tmp106 * _tmp78 - _tmp54 * _tmp94 + _tmp92;
  const Scalar _tmp108 = Scalar(1.0) / (_tmp107);
  const Scalar _tmp109 = _tmp100 * _tmp105 + _tmp103;
  const Scalar _tmp110 = 0;
  const Scalar _tmp111 = _tmp76 * _tmp79;
  const Scalar _tmp112 = _tmp111 * _tmp98 + _tmp76 * _tmp91;
  const Scalar _tmp113 = -_tmp105 * _tmp112 + _tmp106 * _tmp76 - _tmp91;
  const Scalar _tmp114 = _tmp108 * _tmp81;
  const Scalar _tmp115 = _tmp107 * _tmp82;
  const Scalar _tmp116 = _tmp115 * (_tmp111 * _tmp75 - _tmp113 * _tmp114 - _tmp65);
  const Scalar _tmp117 = _tmp108 * (_tmp113 + _tmp116);
  const Scalar _tmp118 = _tmp79 * (-_tmp117 * _tmp78 - _tmp76);
  const Scalar _tmp119 = _tmp40 * _tmp64 * (_tmp117 * _tmp54 + _tmp118 * _tmp74 + Scalar(1.0));
  const Scalar _tmp120 = Scalar(1.0) * _tmp102;
  const Scalar _tmp121 = _tmp104 * _tmp120 * _tmp79 * _tmp98 - Scalar(1.0) * _tmp106;
  const Scalar _tmp122 = Scalar(1.0) * _tmp79;
  const Scalar _tmp123 = _tmp115 * (-_tmp114 * _tmp121 - _tmp122 * _tmp75);
  const Scalar _tmp124 = _tmp108 * (_tmp121 + _tmp123);
  const Scalar _tmp125 = _tmp79 * (-_tmp124 * _tmp78 + Scalar(1.0));
  const Scalar _tmp126 = _tmp41 * _tmp64 * (_tmp124 * _tmp54 + _tmp125 * _tmp74);
  const Scalar _tmp127 = -_tmp119 * fh1 - _tmp126 * fh1 -
                         _tmp64 * _tmp86 * (_tmp110 * _tmp54 - _tmp110 * _tmp84) - _tmp85 * fh1;
  const Scalar _tmp128 = Scalar(1.0) / (_tmp127);
  const Scalar _tmp129 = _tmp101 + _tmp45;
  const Scalar _tmp130 = _tmp105 * _tmp129;
  const Scalar _tmp131 = Scalar(1.0) / (_tmp103 - _tmp130 - _tmp50);
  const Scalar _tmp132 = Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = _tmp109 * _tmp131;
  const Scalar _tmp134 = _tmp101 - _tmp110 * _tmp99 - _tmp129 * _tmp133;
  const Scalar _tmp135 = _tmp129 * _tmp131;
  const Scalar _tmp136 = -_tmp122 * _tmp98 + _tmp123 * _tmp135 - _tmp124 * _tmp99;
  const Scalar _tmp137 = Scalar(1.0) * _tmp41 * (-_tmp120 * _tmp136 + _tmp123 * _tmp132);
  const Scalar _tmp138 = _tmp115 * _tmp132;
  const Scalar _tmp139 = _tmp129 * _tmp138 - _tmp83 * _tmp99;
  const Scalar _tmp140 = Scalar(1.0) * _tmp42;
  const Scalar _tmp141 = _tmp140 * (-_tmp120 * _tmp139 + _tmp138);
  const Scalar _tmp142 = _tmp87 + _tmp95;
  const Scalar _tmp143 = _tmp142 * fh1;
  const Scalar _tmp144 = Scalar(2.3544) * _tmp10 + _tmp143 * _tmp40 + _tmp17 * fv1;
  const Scalar _tmp145 = _tmp102 * _tmp129;
  const Scalar _tmp146 = _tmp132 * _tmp145;
  const Scalar _tmp147 = -Scalar(1.0) * _tmp132 + Scalar(1.0) * _tmp146;
  const Scalar _tmp148 = -_tmp143 * _tmp41 - Scalar(2.3544) * _tmp23 - _tmp27 * fv1;
  const Scalar _tmp149 = _tmp130 * _tmp132 + Scalar(1.0);
  const Scalar _tmp150 = _tmp105 * _tmp132;
  const Scalar _tmp151 = -Scalar(1.0) * _tmp120 * _tmp149 + Scalar(1.0) * _tmp150;
  const Scalar _tmp152 = _tmp112 + _tmp116 * _tmp135 - _tmp117 * _tmp99;
  const Scalar _tmp153 = Scalar(1.0) * _tmp40 * (_tmp116 * _tmp132 - _tmp120 * _tmp152);
  const Scalar _tmp154 =
      _tmp137 * fh1 + _tmp141 * fh1 + _tmp144 * _tmp147 + _tmp148 * _tmp151 + _tmp153 * fh1 +
      Scalar(1.0) * _tmp86 * (-_tmp109 * _tmp132 - _tmp120 * _tmp134 + Scalar(1.0));
  const Scalar _tmp155 = std::asinh(_tmp128 * _tmp154);
  const Scalar _tmp156 = Scalar(9.6622558468725703) * _tmp127;
  const Scalar _tmp157 =
      -_tmp155 * _tmp156 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp59), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp57 - 1), Scalar(2))));
  const Scalar _tmp158 = Scalar(0.1034955) * _tmp128;
  const Scalar _tmp159 = _tmp157 * _tmp158;
  const Scalar _tmp160 = Scalar(1.0) * _tmp155;
  const Scalar _tmp161 = -_tmp119 - _tmp126 - _tmp85;
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp163 = std::pow(_tmp127, Scalar(-2));
  const Scalar _tmp164 = _tmp161 * _tmp163;
  const Scalar _tmp165 = _tmp142 * _tmp41;
  const Scalar _tmp166 = _tmp142 * _tmp40;
  const Scalar _tmp167 =
      (_tmp128 * (_tmp137 + _tmp141 + _tmp147 * _tmp166 - _tmp151 * _tmp165 + _tmp153) -
       _tmp154 * _tmp164) /
      std::sqrt(Scalar(std::pow(_tmp154, Scalar(2)) * _tmp163 + 1));
  const Scalar _tmp168 = _tmp102 * _tmp139 * _tmp42;
  const Scalar _tmp169 = _tmp102 * _tmp149;
  const Scalar _tmp170 = _tmp132 * _tmp144;
  const Scalar _tmp171 = _tmp102 * _tmp152 * _tmp40;
  const Scalar _tmp172 = _tmp102 * _tmp136 * _tmp41;
  const Scalar _tmp173 = _tmp102 * _tmp134 * _tmp86 - _tmp145 * _tmp170 + _tmp148 * _tmp169 +
                         _tmp168 * fh1 + _tmp171 * fh1 + _tmp172 * fh1;
  const Scalar _tmp174 = _tmp140 * _tmp82;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = _tmp110 * _tmp86;
  const Scalar _tmp177 = _tmp125 * _tmp41;
  const Scalar _tmp178 = _tmp118 * _tmp40;
  const Scalar _tmp179 = -_tmp175 * _tmp80 - _tmp176 * _tmp80 + _tmp177 * fh1 + _tmp178 * fh1;
  const Scalar _tmp180 = Scalar(1.0) / (_tmp179);
  const Scalar _tmp181 = std::asinh(_tmp173 * _tmp180);
  const Scalar _tmp182 = Scalar(1.0) * _tmp181;
  const Scalar _tmp183 = Scalar(9.6622558468725703) * _tmp179;
  const Scalar _tmp184 =
      -_tmp181 * _tmp183 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp68), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp70 - 1), Scalar(2))));
  const Scalar _tmp185 = Scalar(0.1034955) * _tmp180;
  const Scalar _tmp186 = _tmp184 * _tmp185;
  const Scalar _tmp187 = -_tmp174 * _tmp80 + _tmp177 + _tmp178;
  const Scalar _tmp188 = Scalar(9.6622558468725703) * _tmp187;
  const Scalar _tmp189 = std::pow(_tmp179, Scalar(-2));
  const Scalar _tmp190 = _tmp187 * _tmp189;
  const Scalar _tmp191 = (-_tmp173 * _tmp190 + _tmp180 * (-_tmp146 * _tmp166 - _tmp165 * _tmp169 +
                                                          _tmp168 + _tmp171 + _tmp172)) /
                         std::sqrt(Scalar(std::pow(_tmp173, Scalar(2)) * _tmp189 + 1));
  const Scalar _tmp192 = _tmp124 * _tmp41;
  const Scalar _tmp193 = _tmp117 * _tmp40;
  const Scalar _tmp194 = _tmp175 + _tmp176 + _tmp192 * fh1 + _tmp193 * fh1;
  const Scalar _tmp195 = Scalar(1.0) / (_tmp194);
  const Scalar _tmp196 = _tmp138 * _tmp42;
  const Scalar _tmp197 = _tmp116 * _tmp131 * _tmp40;
  const Scalar _tmp198 = _tmp123 * _tmp131 * _tmp41;
  const Scalar _tmp199 = _tmp133 * _tmp86 - _tmp148 * _tmp150 + _tmp170 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = std::asinh(_tmp195 * _tmp199);
  const Scalar _tmp201 = Scalar(1.0) * _tmp200;
  const Scalar _tmp202 = std::pow(_tmp194, Scalar(-2));
  const Scalar _tmp203 = _tmp174 + _tmp192 + _tmp193;
  const Scalar _tmp204 = _tmp202 * _tmp203;
  const Scalar _tmp205 =
      (_tmp195 * (_tmp132 * _tmp166 + _tmp150 * _tmp165 - _tmp196 - _tmp197 - _tmp198) -
       _tmp199 * _tmp204) /
      std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp202 + 1));
  const Scalar _tmp206 = Scalar(9.6622558468725703) * _tmp194;
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp208 = Scalar(0.1034955) * _tmp195;
  const Scalar _tmp209 =
      -_tmp200 * _tmp206 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp46 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp51 - 1), Scalar(2))));
  const Scalar _tmp210 = _tmp208 * _tmp209;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(48.000000000000007) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::sinh(_tmp34) - Scalar(4.967784) * _tmp35 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp29 * _tmp36 - _tmp31) -
            _tmp32 * _tmp35) *
               std::sinh(_tmp33)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp33) -
      Scalar(9.6622558468725703) * std::cosh(_tmp34);
  _res(1, 0) =
      -_tmp156 * (-Scalar(4.967784) * _tmp164 + Scalar(1.0) * _tmp167 * std::sinh(_tmp160) -
                  (-Scalar(0.1034955) * _tmp157 * _tmp164 +
                   _tmp158 * (-_tmp155 * _tmp162 - _tmp156 * _tmp167)) *
                      std::sinh(_tmp159)) -
      _tmp162 * (Scalar(4.967784) * _tmp128 - std::cosh(_tmp159) + std::cosh(_tmp160));
  _res(2, 0) =
      -_tmp183 * (-Scalar(4.967784) * _tmp190 + Scalar(1.0) * _tmp191 * std::sinh(_tmp182) -
                  (-Scalar(0.1034955) * _tmp184 * _tmp190 +
                   _tmp185 * (-_tmp181 * _tmp188 - _tmp183 * _tmp191)) *
                      std::sinh(_tmp186)) -
      _tmp188 * (Scalar(4.967784) * _tmp180 + std::cosh(_tmp182) - std::cosh(_tmp186));
  _res(3, 0) =
      -_tmp206 * (-Scalar(4.967784) * _tmp204 + Scalar(1.0) * _tmp205 * std::sinh(_tmp201) -
                  (-Scalar(0.1034955) * _tmp204 * _tmp209 +
                   _tmp208 * (-_tmp200 * _tmp207 - _tmp205 * _tmp206)) *
                      std::sinh(_tmp210)) -
      _tmp207 * (Scalar(4.967784) * _tmp195 + std::cosh(_tmp201) - std::cosh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
