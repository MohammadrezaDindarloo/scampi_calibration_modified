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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl22
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl22(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 659

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
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
  const Scalar _tmp8 = 2 * _tmp3 * _tmp7;
  const Scalar _tmp9 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp10 = _tmp1 * _tmp9;
  const Scalar _tmp11 = _tmp10 + _tmp8;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = 2 * _tmp1;
  const Scalar _tmp14 = _tmp13 * _tmp7;
  const Scalar _tmp15 = _tmp3 * _tmp9;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp12 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(0, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp23 = _tmp13 * _tmp3;
  const Scalar _tmp24 = _tmp7 * _tmp9;
  const Scalar _tmp25 = _tmp23 - _tmp24;
  const Scalar _tmp26 = -Scalar(0.010999999999999999) * _tmp25;
  const Scalar _tmp27 = -_tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(1, 0);
  const Scalar _tmp30 = _tmp0 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * _tmp31;
  const Scalar _tmp33 =
      -Scalar(0.1034955) * _tmp32 * fh1 -
      Scalar(12.936937500000001) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp29), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp19 - 1), Scalar(2))));
  const Scalar _tmp34 = _tmp0 * _tmp33;
  const Scalar _tmp35 = Scalar(1.0) * _tmp31;
  const Scalar _tmp36 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp37 =
      std::pow(Scalar(_tmp36 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp38 = _tmp29 + Scalar(-110.0);
  const Scalar _tmp39 = _tmp19 + Scalar(125.0);
  const Scalar _tmp40 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp39, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp38 * _tmp40;
  const Scalar _tmp42 = _tmp39 * _tmp40;
  const Scalar _tmp43 = _tmp18 * _tmp41 - _tmp28 * _tmp42;
  const Scalar _tmp44 = -_tmp21;
  const Scalar _tmp45 = _tmp22 + _tmp26;
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 = _tmp46 + position_vector(1, 0);
  const Scalar _tmp48 = _tmp47 + Scalar(110.0);
  const Scalar _tmp49 = _tmp12 - _tmp16;
  const Scalar _tmp50 = _tmp49 + _tmp5;
  const Scalar _tmp51 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp52 = _tmp51 + Scalar(-125.0);
  const Scalar _tmp53 = std::pow(Scalar(std::pow(_tmp48, Scalar(2)) + std::pow(_tmp52, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp54 = _tmp52 * _tmp53;
  const Scalar _tmp55 = _tmp21 + _tmp45;
  const Scalar _tmp56 = _tmp55 + position_vector(1, 0);
  const Scalar _tmp57 = _tmp56 + Scalar(-110.0);
  const Scalar _tmp58 = _tmp17 + _tmp5;
  const Scalar _tmp59 = _tmp58 + position_vector(0, 0);
  const Scalar _tmp60 = _tmp59 + Scalar(-125.0);
  const Scalar _tmp61 =
      std::sqrt(Scalar(std::pow(_tmp57, Scalar(2)) + std::pow(_tmp60, Scalar(2))));
  const Scalar _tmp62 = Scalar(1.0) / (_tmp61);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp60);
  const Scalar _tmp64 = _tmp61 * _tmp63;
  const Scalar _tmp65 = _tmp64 * (-_tmp55 * _tmp60 * _tmp62 + _tmp57 * _tmp58 * _tmp62);
  const Scalar _tmp66 = _tmp48 * _tmp53;
  const Scalar _tmp67 = _tmp57 * _tmp63;
  const Scalar _tmp68 = _tmp54 * _tmp67 - _tmp66;
  const Scalar _tmp69 = _tmp27 + _tmp44;
  const Scalar _tmp70 = _tmp69 + position_vector(1, 0);
  const Scalar _tmp71 = _tmp70 + Scalar(110.0);
  const Scalar _tmp72 = _tmp49 + _tmp6;
  const Scalar _tmp73 = _tmp72 + position_vector(0, 0);
  const Scalar _tmp74 = _tmp73 + Scalar(125.0);
  const Scalar _tmp75 = std::pow(Scalar(std::pow(_tmp71, Scalar(2)) + std::pow(_tmp74, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp76 = _tmp74 * _tmp75;
  const Scalar _tmp77 = _tmp71 * _tmp75;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp67 * _tmp76 - _tmp77);
  const Scalar _tmp79 = _tmp78 * (_tmp65 * _tmp76 + _tmp69 * _tmp76 - _tmp72 * _tmp77);
  const Scalar _tmp80 = _tmp46 * _tmp54 - _tmp50 * _tmp66 + _tmp54 * _tmp65 - _tmp68 * _tmp79;
  const Scalar _tmp81 = Scalar(1.0) / (_tmp80);
  const Scalar _tmp82 = Scalar(1.0) * _tmp81;
  const Scalar _tmp83 = Scalar(1.0) * _tmp78;
  const Scalar _tmp84 = _tmp43 * _tmp64 * (_tmp54 * _tmp82 - _tmp68 * _tmp76 * _tmp81 * _tmp83);
  const Scalar _tmp85 = -Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp86 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp87 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp88 = _tmp86 - _tmp87;
  const Scalar _tmp89 = _tmp85 + _tmp88;
  const Scalar _tmp90 = -_tmp85;
  const Scalar _tmp91 = _tmp88 + _tmp90;
  const Scalar _tmp92 = _tmp86 + _tmp87;
  const Scalar _tmp93 = _tmp85 + _tmp92;
  const Scalar _tmp94 = _tmp67 * _tmp93;
  const Scalar _tmp95 = -_tmp76 * _tmp94 + _tmp77 * _tmp91;
  const Scalar _tmp96 = _tmp68 * _tmp78;
  const Scalar _tmp97 = -_tmp54 * _tmp94 + _tmp66 * _tmp89 - _tmp95 * _tmp96;
  const Scalar _tmp98 = Scalar(1.0) * _tmp55;
  const Scalar _tmp99 = -_tmp98;
  const Scalar _tmp100 = Scalar(1.0) / (_tmp69 + _tmp99);
  const Scalar _tmp101 = Scalar(1.0) * _tmp58;
  const Scalar _tmp102 = _tmp101 - _tmp72;
  const Scalar _tmp103 = _tmp100 * _tmp102;
  const Scalar _tmp104 = -_tmp76 * _tmp91 + _tmp76 * _tmp93;
  const Scalar _tmp105 = -_tmp103 * _tmp97 - _tmp104 * _tmp96 - _tmp54 * _tmp89 + _tmp54 * _tmp93;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp67 * _tmp78;
  const Scalar _tmp108 = _tmp107 * _tmp95 + _tmp94;
  const Scalar _tmp109 = -_tmp103 * _tmp108 + _tmp104 * _tmp107 - _tmp93;
  const Scalar _tmp110 = _tmp106 * _tmp80;
  const Scalar _tmp111 = _tmp105 * _tmp81;
  const Scalar _tmp112 = _tmp111 * (-_tmp109 * _tmp110 - _tmp65 + _tmp67 * _tmp79);
  const Scalar _tmp113 = _tmp109 + _tmp112;
  const Scalar _tmp114 = _tmp106 * _tmp113;
  const Scalar _tmp115 = _tmp106 * _tmp68;
  const Scalar _tmp116 = _tmp78 * (-_tmp113 * _tmp115 - _tmp67);
  const Scalar _tmp117 = _tmp42 * _tmp64 * (_tmp114 * _tmp54 + _tmp116 * _tmp76 + Scalar(1.0));
  const Scalar _tmp118 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp119 = _tmp101 + _tmp103 * _tmp98;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = _tmp115 * _tmp120 * _tmp78;
  const Scalar _tmp122 = _tmp106 * _tmp120;
  const Scalar _tmp123 = Scalar(1.0) * _tmp100;
  const Scalar _tmp124 = _tmp102 * _tmp123 * _tmp78 * _tmp95 - _tmp104 * _tmp83;
  const Scalar _tmp125 = _tmp111 * (-_tmp110 * _tmp124 - Scalar(1.0) * _tmp79);
  const Scalar _tmp126 = _tmp124 + _tmp125;
  const Scalar _tmp127 = _tmp106 * _tmp126;
  const Scalar _tmp128 = _tmp78 * (-_tmp115 * _tmp126 + Scalar(1.0));
  const Scalar _tmp129 = _tmp41 * _tmp64 * (_tmp127 * _tmp54 + _tmp128 * _tmp76);
  const Scalar _tmp130 = -_tmp117 * fh1 -
                         _tmp118 * _tmp64 * (-_tmp121 * _tmp76 + _tmp122 * _tmp54) - _tmp129 * fh1 -
                         _tmp84 * fh1;
  const Scalar _tmp131 = Scalar(9.6622558468725703) * _tmp130;
  const Scalar _tmp132 = std::pow(_tmp130, Scalar(-2));
  const Scalar _tmp133 = _tmp46 + _tmp99;
  const Scalar _tmp134 = _tmp103 * _tmp133;
  const Scalar _tmp135 = Scalar(1.0) / (_tmp101 - _tmp134 - _tmp50);
  const Scalar _tmp136 = Scalar(1.0) * _tmp135;
  const Scalar _tmp137 = _tmp111 * _tmp136;
  const Scalar _tmp138 = _tmp133 * _tmp137 - _tmp82 * _tmp97;
  const Scalar _tmp139 = Scalar(1.0) * _tmp43;
  const Scalar _tmp140 = _tmp139 * (-_tmp123 * _tmp138 + _tmp137);
  const Scalar _tmp141 = _tmp90 + _tmp92;
  const Scalar _tmp142 = _tmp141 * fh1;
  const Scalar _tmp143 = Scalar(2.3544) * _tmp11 + _tmp142 * _tmp42 + _tmp18 * fv1;
  const Scalar _tmp144 = _tmp100 * _tmp133;
  const Scalar _tmp145 = _tmp136 * _tmp144;
  const Scalar _tmp146 = -Scalar(1.0) * _tmp136 + Scalar(1.0) * _tmp145;
  const Scalar _tmp147 = _tmp133 * _tmp135;
  const Scalar _tmp148 = _tmp106 * _tmp97;
  const Scalar _tmp149 = _tmp125 * _tmp147 - _tmp126 * _tmp148 - _tmp83 * _tmp95;
  const Scalar _tmp150 = Scalar(1.0) * _tmp41 * (-_tmp123 * _tmp149 + _tmp125 * _tmp136);
  const Scalar _tmp151 = _tmp119 * _tmp135;
  const Scalar _tmp152 = -_tmp120 * _tmp148 - _tmp133 * _tmp151 + _tmp99;
  const Scalar _tmp153 = -_tmp142 * _tmp41 - Scalar(2.3544) * _tmp25 - _tmp28 * fv1;
  const Scalar _tmp154 = _tmp134 * _tmp136 + Scalar(1.0);
  const Scalar _tmp155 = _tmp103 * _tmp136;
  const Scalar _tmp156 = -Scalar(1.0) * _tmp123 * _tmp154 + Scalar(1.0) * _tmp155;
  const Scalar _tmp157 = _tmp108 + _tmp112 * _tmp147 - _tmp113 * _tmp148;
  const Scalar _tmp158 = Scalar(1.0) * _tmp42 * (_tmp112 * _tmp136 - _tmp123 * _tmp157);
  const Scalar _tmp159 =
      Scalar(1.0) * _tmp118 * (-_tmp119 * _tmp136 - _tmp123 * _tmp152 + Scalar(1.0)) +
      _tmp140 * fh1 + _tmp143 * _tmp146 + _tmp150 * fh1 + _tmp153 * _tmp156 + _tmp158 * fh1;
  const Scalar _tmp160 = _tmp141 * _tmp42;
  const Scalar _tmp161 = _tmp141 * _tmp41;
  const Scalar _tmp162 = Scalar(1.0) / (_tmp130);
  const Scalar _tmp163 = -_tmp117 - _tmp129 - _tmp84;
  const Scalar _tmp164 = _tmp132 * _tmp163;
  const Scalar _tmp165 = (-_tmp159 * _tmp164 + _tmp162 * (_tmp140 + _tmp146 * _tmp160 + _tmp150 -
                                                          _tmp156 * _tmp161 + _tmp158)) /
                         std::sqrt(Scalar(_tmp132 * std::pow(_tmp159, Scalar(2)) + 1));
  const Scalar _tmp166 = std::asinh(_tmp159 * _tmp162);
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp168 = Scalar(0.1034955) * _tmp162;
  const Scalar _tmp169 =
      -_tmp131 * _tmp166 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp56), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp59), Scalar(2))));
  const Scalar _tmp170 = _tmp168 * _tmp169;
  const Scalar _tmp171 = Scalar(1.0) * _tmp166;
  const Scalar _tmp172 = _tmp139 * _tmp81;
  const Scalar _tmp173 = _tmp172 * fh1;
  const Scalar _tmp174 = _tmp128 * _tmp41;
  const Scalar _tmp175 = _tmp116 * _tmp42;
  const Scalar _tmp176 = -_tmp118 * _tmp121 - _tmp173 * _tmp96 + _tmp174 * fh1 + _tmp175 * fh1;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp100 * _tmp154;
  const Scalar _tmp179 = _tmp100 * _tmp149 * _tmp41;
  const Scalar _tmp180 = _tmp100 * _tmp157 * _tmp42;
  const Scalar _tmp181 = _tmp100 * _tmp138 * _tmp43;
  const Scalar _tmp182 = _tmp136 * _tmp143;
  const Scalar _tmp183 = _tmp100 * _tmp118 * _tmp152 - _tmp144 * _tmp182 + _tmp153 * _tmp178 +
                         _tmp179 * fh1 + _tmp180 * fh1 + _tmp181 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp177 * _tmp183);
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp70 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp73 - 1), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = -_tmp172 * _tmp96 + _tmp174 + _tmp175;
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp190;
  const Scalar _tmp192 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp193 = _tmp190 * _tmp192;
  const Scalar _tmp194 =
      (_tmp177 * (-_tmp145 * _tmp160 - _tmp161 * _tmp178 + _tmp179 + _tmp180 + _tmp181) -
       _tmp183 * _tmp193) /
      std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp192 + 1));
  const Scalar _tmp195 = _tmp114 * _tmp42;
  const Scalar _tmp196 = _tmp127 * _tmp41;
  const Scalar _tmp197 = _tmp118 * _tmp122 + _tmp173 + _tmp195 * fh1 + _tmp196 * fh1;
  const Scalar _tmp198 = std::pow(_tmp197, Scalar(-2));
  const Scalar _tmp199 = _tmp172 + _tmp195 + _tmp196;
  const Scalar _tmp200 = _tmp198 * _tmp199;
  const Scalar _tmp201 = Scalar(9.6622558468725703) * _tmp197;
  const Scalar _tmp202 = _tmp125 * _tmp135 * _tmp41;
  const Scalar _tmp203 = _tmp137 * _tmp43;
  const Scalar _tmp204 = _tmp112 * _tmp135 * _tmp42;
  const Scalar _tmp205 = Scalar(1.0) / (_tmp197);
  const Scalar _tmp206 = _tmp118 * _tmp151 - _tmp153 * _tmp155 + _tmp182 - _tmp202 * fh1 -
                         _tmp203 * fh1 - _tmp204 * fh1;
  const Scalar _tmp207 = (-_tmp200 * _tmp206 + _tmp205 * (_tmp136 * _tmp160 + _tmp155 * _tmp161 -
                                                          _tmp202 - _tmp203 - _tmp204)) /
                         std::sqrt(Scalar(_tmp198 * std::pow(_tmp206, Scalar(2)) + 1));
  const Scalar _tmp208 = std::asinh(_tmp205 * _tmp206);
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp199;
  const Scalar _tmp210 = Scalar(0.1034955) * _tmp205;
  const Scalar _tmp211 =
      -_tmp201 * _tmp208 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp51), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp47 - 1), Scalar(2))));
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = Scalar(1.0) * _tmp208;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(48.000000000000007) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp36 * _tmp37 * fv1 * std::sinh(_tmp35) - Scalar(4.967784) * _tmp36 -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp30 * _tmp37 - _tmp32) -
            _tmp33 * _tmp36) *
               std::sinh(_tmp34)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp34) -
      Scalar(9.6622558468725703) * std::cosh(_tmp35);
  _res(1, 0) =
      -_tmp131 * (-Scalar(4.967784) * _tmp164 + Scalar(1.0) * _tmp165 * std::sinh(_tmp171) -
                  (-Scalar(0.1034955) * _tmp164 * _tmp169 +
                   _tmp168 * (-_tmp131 * _tmp165 - _tmp166 * _tmp167)) *
                      std::sinh(_tmp170)) -
      _tmp167 * (Scalar(4.967784) * _tmp162 - std::cosh(_tmp170) + std::cosh(_tmp171));
  _res(2, 0) =
      -_tmp185 * (-Scalar(4.967784) * _tmp193 + Scalar(1.0) * _tmp194 * std::sinh(_tmp189) -
                  (-Scalar(0.1034955) * _tmp186 * _tmp193 +
                   _tmp187 * (-_tmp184 * _tmp191 - _tmp185 * _tmp194)) *
                      std::sinh(_tmp188)) -
      _tmp191 * (Scalar(4.967784) * _tmp177 - std::cosh(_tmp188) + std::cosh(_tmp189));
  _res(3, 0) =
      -_tmp201 * (-Scalar(4.967784) * _tmp200 + Scalar(1.0) * _tmp207 * std::sinh(_tmp213) -
                  (-Scalar(0.1034955) * _tmp200 * _tmp211 +
                   _tmp210 * (-_tmp201 * _tmp207 - _tmp208 * _tmp209)) *
                      std::sinh(_tmp212)) -
      _tmp209 * (Scalar(4.967784) * _tmp205 - std::cosh(_tmp212) + std::cosh(_tmp213));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
