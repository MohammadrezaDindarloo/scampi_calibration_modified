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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl7
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl7(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 657

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (215)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp8 = 2 * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp8;
  const Scalar _tmp10 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                        2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = _tmp1 * _tmp10;
  const Scalar _tmp12 = -_tmp11 + _tmp9;
  const Scalar _tmp13 = -Scalar(0.010999999999999999) * _tmp12;
  const Scalar _tmp14 = _tmp1 * _tmp8;
  const Scalar _tmp15 = _tmp10 * _tmp3;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = _tmp18 + position_vector(1, 0);
  const Scalar _tmp20 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp21 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp22 = 2 * _tmp1 * _tmp3;
  const Scalar _tmp23 = _tmp10 * _tmp7;
  const Scalar _tmp24 = _tmp22 + _tmp23;
  const Scalar _tmp25 = -Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp21 + _tmp27;
  const Scalar _tmp29 = _tmp28 + position_vector(0, 0);
  const Scalar _tmp30 = _tmp0 * fv1;
  const Scalar _tmp31 = std::asinh(_tmp30);
  const Scalar _tmp32 = Scalar(9.6622558468725703) * _tmp31;
  const Scalar _tmp33 =
      -_tmp32 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp29), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp19 - 1), Scalar(2))));
  const Scalar _tmp34 = Scalar(0.1034955) * _tmp0;
  const Scalar _tmp35 = _tmp33 * _tmp34;
  const Scalar _tmp36 = Scalar(1.0) * _tmp31;
  const Scalar _tmp37 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp38 =
      std::pow(Scalar(_tmp37 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp39 = _tmp13 - _tmp16;
  const Scalar _tmp40 = _tmp39 + _tmp6;
  const Scalar _tmp41 = Scalar(1.0) * _tmp40;
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = _tmp17 + _tmp5;
  const Scalar _tmp44 = _tmp42 + _tmp43;
  const Scalar _tmp45 = _tmp39 + _tmp5;
  const Scalar _tmp46 = Scalar(1.0) / (_tmp42 + _tmp45);
  const Scalar _tmp47 = -_tmp21;
  const Scalar _tmp48 = _tmp25 + _tmp26;
  const Scalar _tmp49 = _tmp47 + _tmp48;
  const Scalar _tmp50 = _tmp27 + _tmp47;
  const Scalar _tmp51 = Scalar(1.0) * _tmp50;
  const Scalar _tmp52 = -_tmp49 + _tmp51;
  const Scalar _tmp53 = _tmp46 * _tmp52;
  const Scalar _tmp54 = _tmp44 * _tmp53;
  const Scalar _tmp55 = _tmp21 + _tmp48;
  const Scalar _tmp56 = Scalar(1.0) / (_tmp51 - _tmp54 - _tmp55);
  const Scalar _tmp57 = Scalar(1.0) * _tmp56;
  const Scalar _tmp58 = _tmp45 + position_vector(1, 0);
  const Scalar _tmp59 = _tmp58 + Scalar(-110.0);
  const Scalar _tmp60 = _tmp49 + position_vector(0, 0);
  const Scalar _tmp61 = _tmp60 + Scalar(125.0);
  const Scalar _tmp62 = std::pow(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp63 = _tmp59 * _tmp62;
  const Scalar _tmp64 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp65 = _tmp64 + Scalar(110.0);
  const Scalar _tmp66 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp67 = _tmp66 + Scalar(125.0);
  const Scalar _tmp68 = Scalar(1.0) / (_tmp67);
  const Scalar _tmp69 = _tmp65 * _tmp68;
  const Scalar _tmp70 = _tmp61 * _tmp62;
  const Scalar _tmp71 = Scalar(1.0) / (-_tmp63 + _tmp69 * _tmp70);
  const Scalar _tmp72 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp73 = -_tmp72;
  const Scalar _tmp74 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp75 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp76 = _tmp74 - _tmp75;
  const Scalar _tmp77 = _tmp73 + _tmp76;
  const Scalar _tmp78 = _tmp69 * _tmp77;
  const Scalar _tmp79 = _tmp72 + _tmp76;
  const Scalar _tmp80 = _tmp63 * _tmp79 - _tmp70 * _tmp78;
  const Scalar _tmp81 = Scalar(1.0) * _tmp46;
  const Scalar _tmp82 = _tmp70 * _tmp77 - _tmp70 * _tmp79;
  const Scalar _tmp83 = Scalar(1.0) * _tmp71;
  const Scalar _tmp84 = _tmp52 * _tmp71 * _tmp80 * _tmp81 - _tmp82 * _tmp83;
  const Scalar _tmp85 = _tmp43 + position_vector(1, 0);
  const Scalar _tmp86 = _tmp85 + Scalar(-110.0);
  const Scalar _tmp87 = _tmp55 + position_vector(0, 0);
  const Scalar _tmp88 = _tmp87 + Scalar(-125.0);
  const Scalar _tmp89 = std::pow(Scalar(std::pow(_tmp86, Scalar(2)) + std::pow(_tmp88, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp90 = _tmp88 * _tmp89;
  const Scalar _tmp91 = _tmp74 + _tmp75;
  const Scalar _tmp92 = _tmp72 + _tmp91;
  const Scalar _tmp93 = _tmp86 * _tmp89;
  const Scalar _tmp94 = _tmp69 * _tmp90 - _tmp93;
  const Scalar _tmp95 = _tmp71 * _tmp94;
  const Scalar _tmp96 = -_tmp78 * _tmp90 - _tmp80 * _tmp95 + _tmp92 * _tmp93;
  const Scalar _tmp97 = -_tmp53 * _tmp96 + _tmp77 * _tmp90 - _tmp82 * _tmp95 - _tmp90 * _tmp92;
  const Scalar _tmp98 = Scalar(1.0) / (_tmp97);
  const Scalar _tmp99 =
      std::sqrt(Scalar(std::pow(_tmp65, Scalar(2)) + std::pow(_tmp67, Scalar(2))));
  const Scalar _tmp100 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp101 = _tmp68 * _tmp99;
  const Scalar _tmp102 = _tmp101 * (-_tmp100 * _tmp40 * _tmp67 + _tmp100 * _tmp50 * _tmp65);
  const Scalar _tmp103 = _tmp102 * _tmp70 + _tmp45 * _tmp70 - _tmp49 * _tmp63;
  const Scalar _tmp104 = _tmp102 * _tmp90 - _tmp103 * _tmp95 + _tmp43 * _tmp90 - _tmp55 * _tmp93;
  const Scalar _tmp105 = _tmp104 * _tmp98;
  const Scalar _tmp106 = Scalar(1.0) / (_tmp104);
  const Scalar _tmp107 = _tmp106 * _tmp97;
  const Scalar _tmp108 = _tmp107 * (-_tmp103 * _tmp83 - _tmp105 * _tmp84);
  const Scalar _tmp109 = _tmp44 * _tmp56;
  const Scalar _tmp110 = _tmp108 + _tmp84;
  const Scalar _tmp111 = _tmp96 * _tmp98;
  const Scalar _tmp112 = _tmp108 * _tmp109 - _tmp110 * _tmp111 - _tmp80 * _tmp83;
  const Scalar _tmp113 = _tmp19 + Scalar(110.0);
  const Scalar _tmp114 = _tmp29 + Scalar(-125.0);
  const Scalar _tmp115 =
      std::pow(Scalar(std::pow(_tmp113, Scalar(2)) + std::pow(_tmp114, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp116 = _tmp113 * _tmp115;
  const Scalar _tmp117 = Scalar(1.0) * _tmp116 * (_tmp108 * _tmp57 - _tmp112 * _tmp81);
  const Scalar _tmp118 = _tmp41 * _tmp53 + _tmp51;
  const Scalar _tmp119 = _tmp118 * _tmp56;
  const Scalar _tmp120 = 0;
  const Scalar _tmp121 = -_tmp111 * _tmp120 - _tmp119 * _tmp44 + _tmp42;
  const Scalar _tmp122 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp123 = _tmp114 * _tmp115;
  const Scalar _tmp124 = _tmp73 + _tmp91;
  const Scalar _tmp125 = _tmp124 * fh1;
  const Scalar _tmp126 = _tmp123 * _tmp125 + Scalar(2.3544) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp127 = _tmp44 * _tmp46;
  const Scalar _tmp128 = Scalar(1.0) * _tmp127 * _tmp57 - Scalar(1.0) * _tmp57;
  const Scalar _tmp129 = -_tmp116 * _tmp125 - Scalar(2.3544) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp130 = _tmp54 * _tmp57 + Scalar(1.0);
  const Scalar _tmp131 = _tmp53 * _tmp57;
  const Scalar _tmp132 = -Scalar(1.0) * _tmp130 * _tmp81 + Scalar(1.0) * _tmp131;
  const Scalar _tmp133 = Scalar(1.0) * _tmp106;
  const Scalar _tmp134 = _tmp107 * _tmp57;
  const Scalar _tmp135 = -_tmp133 * _tmp96 + _tmp134 * _tmp44;
  const Scalar _tmp136 = _tmp116 * _tmp28 - _tmp123 * _tmp18;
  const Scalar _tmp137 = Scalar(1.0) * _tmp136 * (_tmp134 - _tmp135 * _tmp81);
  const Scalar _tmp138 = _tmp69 * _tmp71;
  const Scalar _tmp139 = _tmp138 * _tmp80 + _tmp78;
  const Scalar _tmp140 = _tmp138 * _tmp82 - _tmp139 * _tmp53 - _tmp77;
  const Scalar _tmp141 = _tmp107 * (-_tmp102 + _tmp103 * _tmp138 - _tmp105 * _tmp140);
  const Scalar _tmp142 = _tmp140 + _tmp141;
  const Scalar _tmp143 = _tmp109 * _tmp141 - _tmp111 * _tmp142 + _tmp139;
  const Scalar _tmp144 = Scalar(1.0) * _tmp123 * (_tmp141 * _tmp57 - _tmp143 * _tmp81);
  const Scalar _tmp145 =
      _tmp117 * fh1 + Scalar(1.0) * _tmp122 * (-_tmp118 * _tmp57 - _tmp121 * _tmp81 + Scalar(1.0)) +
      _tmp126 * _tmp128 + _tmp129 * _tmp132 + _tmp137 * fh1 + _tmp144 * fh1;
  const Scalar _tmp146 = _tmp110 * _tmp98;
  const Scalar _tmp147 = _tmp94 * _tmp98;
  const Scalar _tmp148 = _tmp71 * (-_tmp110 * _tmp147 + Scalar(1.0));
  const Scalar _tmp149 = _tmp101 * _tmp116 * (_tmp146 * _tmp90 + _tmp148 * _tmp70);
  const Scalar _tmp150 = _tmp70 * _tmp95;
  const Scalar _tmp151 = _tmp101 * _tmp136 * (-_tmp133 * _tmp150 + _tmp133 * _tmp90);
  const Scalar _tmp152 = _tmp120 * _tmp98;
  const Scalar _tmp153 = _tmp142 * _tmp98;
  const Scalar _tmp154 = _tmp71 * (-_tmp142 * _tmp147 - _tmp69);
  const Scalar _tmp155 = _tmp101 * _tmp123 * (_tmp153 * _tmp90 + _tmp154 * _tmp70 + Scalar(1.0));
  const Scalar _tmp156 = -_tmp101 * _tmp122 * (-_tmp150 * _tmp152 + _tmp152 * _tmp90) -
                         _tmp149 * fh1 - _tmp151 * fh1 - _tmp155 * fh1;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp145 * _tmp157);
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp156;
  const Scalar _tmp160 =
      -_tmp158 * _tmp159 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp64 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp66 - 1), Scalar(2))));
  const Scalar _tmp161 = Scalar(0.1034955) * _tmp157;
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = -_tmp149 - _tmp151 - _tmp155;
  const Scalar _tmp164 = Scalar(9.6622558468725703) * _tmp163;
  const Scalar _tmp165 = std::pow(_tmp156, Scalar(-2));
  const Scalar _tmp166 = _tmp163 * _tmp165;
  const Scalar _tmp167 = _tmp116 * _tmp124;
  const Scalar _tmp168 = _tmp123 * _tmp124;
  const Scalar _tmp169 = (-_tmp145 * _tmp166 + _tmp157 * (_tmp117 + _tmp128 * _tmp168 -
                                                          _tmp132 * _tmp167 + _tmp137 + _tmp144)) /
                         std::sqrt(Scalar(std::pow(_tmp145, Scalar(2)) * _tmp165 + 1));
  const Scalar _tmp170 = Scalar(1.0) * _tmp158;
  const Scalar _tmp171 = _tmp122 * _tmp152;
  const Scalar _tmp172 = _tmp116 * _tmp148;
  const Scalar _tmp173 = _tmp123 * _tmp154;
  const Scalar _tmp174 = _tmp133 * _tmp136;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = -_tmp171 * _tmp95 + _tmp172 * fh1 + _tmp173 * fh1 - _tmp175 * _tmp95;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp130 * _tmp46;
  const Scalar _tmp179 = _tmp126 * _tmp57;
  const Scalar _tmp180 = _tmp135 * _tmp136 * _tmp46;
  const Scalar _tmp181 = _tmp112 * _tmp116 * _tmp46;
  const Scalar _tmp182 = _tmp123 * _tmp46;
  const Scalar _tmp183 = _tmp143 * _tmp182;
  const Scalar _tmp184 = _tmp121 * _tmp122 * _tmp46 - _tmp127 * _tmp179 + _tmp129 * _tmp178 +
                         _tmp180 * fh1 + _tmp181 * fh1 + _tmp183 * fh1;
  const Scalar _tmp185 = std::asinh(_tmp177 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp188 = _tmp172 + _tmp173 - _tmp174 * _tmp95;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = (_tmp177 * (-_tmp124 * _tmp182 * _tmp44 * _tmp57 - _tmp167 * _tmp178 +
                                     _tmp180 + _tmp181 + _tmp183) -
                          _tmp184 * _tmp189) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp187 + 1));
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp192 =
      -_tmp185 * _tmp191 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp58), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp60 - 1), Scalar(2))));
  const Scalar _tmp193 = Scalar(9.6622558468725703) * _tmp188;
  const Scalar _tmp194 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp195 = _tmp192 * _tmp194;
  const Scalar _tmp196 = _tmp123 * _tmp141 * _tmp56;
  const Scalar _tmp197 = _tmp108 * _tmp116 * _tmp56;
  const Scalar _tmp198 = _tmp134 * _tmp136;
  const Scalar _tmp199 = _tmp119 * _tmp122 - _tmp129 * _tmp131 + _tmp179 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = _tmp116 * _tmp146;
  const Scalar _tmp201 = _tmp123 * _tmp153;
  const Scalar _tmp202 = _tmp171 + _tmp175 + _tmp200 * fh1 + _tmp201 * fh1;
  const Scalar _tmp203 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp204 = std::asinh(_tmp199 * _tmp203);
  const Scalar _tmp205 = Scalar(1.0) * _tmp204;
  const Scalar _tmp206 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp207 = _tmp174 + _tmp200 + _tmp201;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = (-_tmp199 * _tmp208 + _tmp203 * (_tmp131 * _tmp167 + _tmp168 * _tmp57 -
                                                          _tmp196 - _tmp197 - _tmp198)) /
                         std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp206 + 1));
  const Scalar _tmp210 = Scalar(9.6622558468725703) * _tmp202;
  const Scalar _tmp211 =
      -_tmp204 * _tmp210 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp85), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp87), Scalar(2))));
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp207;
  const Scalar _tmp213 = Scalar(0.1034955) * _tmp203;
  const Scalar _tmp214 = _tmp211 * _tmp213;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      -Scalar(48.000000000000007) * _tmp0 -
      Scalar(9.6622558468725703) * fh1 *
          (-Scalar(1.0) * _tmp37 * _tmp38 * fv1 * std::sinh(_tmp36) - Scalar(4.967784) * _tmp37 -
           (-Scalar(0.1034955) * _tmp33 * _tmp37 +
            _tmp34 * (Scalar(9.6622558468725703) * _tmp30 * _tmp38 - _tmp32)) *
               std::sinh(_tmp35)) +
      Scalar(9.6622558468725703) * std::cosh(_tmp35) -
      Scalar(9.6622558468725703) * std::cosh(_tmp36);
  _res(1, 0) =
      -_tmp159 * (-Scalar(4.967784) * _tmp166 + Scalar(1.0) * _tmp169 * std::sinh(_tmp170) -
                  (-Scalar(0.1034955) * _tmp160 * _tmp166 +
                   _tmp161 * (-_tmp158 * _tmp164 - _tmp159 * _tmp169)) *
                      std::sinh(_tmp162)) -
      _tmp164 * (Scalar(4.967784) * _tmp157 - std::cosh(_tmp162) + std::cosh(_tmp170));
  _res(2, 0) =
      -_tmp191 * (-Scalar(4.967784) * _tmp189 + Scalar(1.0) * _tmp190 * std::sinh(_tmp186) -
                  (-Scalar(0.1034955) * _tmp189 * _tmp192 +
                   _tmp194 * (-_tmp185 * _tmp193 - _tmp190 * _tmp191)) *
                      std::sinh(_tmp195)) -
      _tmp193 * (Scalar(4.967784) * _tmp177 + std::cosh(_tmp186) - std::cosh(_tmp195));
  _res(3, 0) =
      -_tmp210 * (-Scalar(4.967784) * _tmp208 + Scalar(1.0) * _tmp209 * std::sinh(_tmp205) -
                  (-Scalar(0.1034955) * _tmp208 * _tmp211 +
                   _tmp213 * (-_tmp204 * _tmp212 - _tmp209 * _tmp210)) *
                      std::sinh(_tmp214)) -
      _tmp212 * (Scalar(4.967784) * _tmp203 + std::cosh(_tmp205) - std::cosh(_tmp214));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
