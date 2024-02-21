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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl11
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl11(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 644

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (216)
  const Scalar _tmp0 = Scalar(1.0) / (fh1);
  const Scalar _tmp1 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp2 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp3 = 2 * _tmp2;
  const Scalar _tmp4 = _tmp1 * _tmp3;
  const Scalar _tmp5 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp6 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp7 = _tmp5 * _tmp6;
  const Scalar _tmp8 = Scalar(0.20999999999999999) * _tmp4 + Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp9 = _tmp3 * _tmp5;
  const Scalar _tmp10 = _tmp1 * _tmp6;
  const Scalar _tmp11 = -_tmp10 + _tmp9;
  const Scalar _tmp12 = -Scalar(0.010999999999999999) * _tmp11;
  const Scalar _tmp13 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp14 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp15 = Scalar(0.20999999999999999) * _tmp13 +
                        Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999);
  const Scalar _tmp16 = _tmp12 - _tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp8;
  const Scalar _tmp18 = _tmp17 + position_vector(1, 0);
  const Scalar _tmp19 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp20 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp19;
  const Scalar _tmp21 = 2 * _tmp1 * _tmp5;
  const Scalar _tmp22 = _tmp2 * _tmp6;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -Scalar(0.010999999999999999) * _tmp23;
  const Scalar _tmp25 = Scalar(0.20999999999999999) * _tmp4 - Scalar(0.20999999999999999) * _tmp7;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp20 + _tmp26;
  const Scalar _tmp28 = _tmp27 + position_vector(0, 0);
  const Scalar _tmp29 = _tmp0 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -Scalar(0.1034955) * _tmp31 * fh1 -
      Scalar(12.936937500000001) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp28), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp18 - 1), Scalar(2))));
  const Scalar _tmp33 = _tmp0 * _tmp32;
  const Scalar _tmp34 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp35 =
      std::pow(Scalar(_tmp34 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp36 = Scalar(1.0) * _tmp30;
  const Scalar _tmp37 = -_tmp8;
  const Scalar _tmp38 = _tmp16 + _tmp37;
  const Scalar _tmp39 = _tmp38 + position_vector(1, 0);
  const Scalar _tmp40 = _tmp39 + Scalar(110.0);
  const Scalar _tmp41 = -_tmp20;
  const Scalar _tmp42 = _tmp26 + _tmp41;
  const Scalar _tmp43 = _tmp42 + position_vector(0, 0);
  const Scalar _tmp44 = _tmp43 + Scalar(125.0);
  const Scalar _tmp45 = std::pow(Scalar(std::pow(_tmp40, Scalar(2)) + std::pow(_tmp44, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp46 = _tmp44 * _tmp45;
  const Scalar _tmp47 = Scalar(0.20999999999999999) * _tmp10 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp48 =
      -Scalar(0.010999999999999999) * _tmp13 - Scalar(0.010999999999999999) * _tmp19;
  const Scalar _tmp49 = Scalar(0.20999999999999999) * _tmp21 - Scalar(0.20999999999999999) * _tmp22;
  const Scalar _tmp50 = _tmp48 - _tmp49;
  const Scalar _tmp51 = _tmp47 + _tmp50;
  const Scalar _tmp52 = -_tmp47;
  const Scalar _tmp53 = _tmp50 + _tmp52;
  const Scalar _tmp54 = _tmp40 * _tmp45;
  const Scalar _tmp55 = _tmp12 + _tmp15;
  const Scalar _tmp56 = _tmp37 + _tmp55;
  const Scalar _tmp57 = _tmp56 + position_vector(1, 0);
  const Scalar _tmp58 = _tmp57 + Scalar(-110.0);
  const Scalar _tmp59 = _tmp24 + _tmp25;
  const Scalar _tmp60 = _tmp41 + _tmp59;
  const Scalar _tmp61 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp62 = _tmp61 + Scalar(125.0);
  const Scalar _tmp63 = Scalar(1.0) / (_tmp62);
  const Scalar _tmp64 = _tmp58 * _tmp63;
  const Scalar _tmp65 = _tmp55 + _tmp8;
  const Scalar _tmp66 = _tmp65 + position_vector(1, 0);
  const Scalar _tmp67 = _tmp66 + Scalar(-110.0);
  const Scalar _tmp68 = _tmp20 + _tmp59;
  const Scalar _tmp69 = _tmp68 + position_vector(0, 0);
  const Scalar _tmp70 = _tmp69 + Scalar(-125.0);
  const Scalar _tmp71 = std::pow(Scalar(std::pow(_tmp67, Scalar(2)) + std::pow(_tmp70, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp72 = _tmp70 * _tmp71;
  const Scalar _tmp73 = _tmp51 * _tmp72;
  const Scalar _tmp74 = _tmp48 + _tmp49;
  const Scalar _tmp75 = _tmp47 + _tmp74;
  const Scalar _tmp76 = _tmp67 * _tmp71;
  const Scalar _tmp77 = -_tmp64 * _tmp73 + _tmp75 * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) / (_tmp64 * _tmp72 - _tmp76);
  const Scalar _tmp79 = _tmp46 * _tmp64 - _tmp54;
  const Scalar _tmp80 = _tmp78 * _tmp79;
  const Scalar _tmp81 = _tmp51 * _tmp64;
  const Scalar _tmp82 = -_tmp46 * _tmp81 + _tmp53 * _tmp54 - _tmp77 * _tmp80;
  const Scalar _tmp83 = Scalar(1.0) * _tmp56;
  const Scalar _tmp84 = -_tmp83;
  const Scalar _tmp85 = Scalar(1.0) / (_tmp65 + _tmp84);
  const Scalar _tmp86 = Scalar(1.0) * _tmp60;
  const Scalar _tmp87 = _tmp85 * (-_tmp68 + _tmp86);
  const Scalar _tmp88 = -_tmp72 * _tmp75 + _tmp73;
  const Scalar _tmp89 = _tmp46 * _tmp51 - _tmp46 * _tmp53 - _tmp80 * _tmp88 - _tmp82 * _tmp87;
  const Scalar _tmp90 = Scalar(1.0) / (_tmp89);
  const Scalar _tmp91 =
      std::sqrt(Scalar(std::pow(_tmp58, Scalar(2)) + std::pow(_tmp62, Scalar(2))));
  const Scalar _tmp92 = Scalar(1.0) / (_tmp91);
  const Scalar _tmp93 = _tmp63 * _tmp91;
  const Scalar _tmp94 = _tmp93 * (-_tmp56 * _tmp62 * _tmp92 + _tmp58 * _tmp60 * _tmp92);
  const Scalar _tmp95 = _tmp65 * _tmp72 - _tmp68 * _tmp76 + _tmp72 * _tmp94;
  const Scalar _tmp96 = Scalar(1.0) * _tmp78;
  const Scalar _tmp97 = _tmp77 * _tmp96;
  const Scalar _tmp98 = _tmp87 * _tmp97 - _tmp88 * _tmp96;
  const Scalar _tmp99 = _tmp38 * _tmp46 - _tmp42 * _tmp54 + _tmp46 * _tmp94 - _tmp80 * _tmp95;
  const Scalar _tmp100 = _tmp90 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (_tmp99);
  const Scalar _tmp102 = _tmp101 * _tmp89;
  const Scalar _tmp103 = _tmp102 * (-_tmp100 * _tmp98 - _tmp95 * _tmp96);
  const Scalar _tmp104 = _tmp103 + _tmp98;
  const Scalar _tmp105 = _tmp104 * _tmp90;
  const Scalar _tmp106 = _tmp79 * _tmp90;
  const Scalar _tmp107 = -_tmp104 * _tmp106 + Scalar(1.0);
  const Scalar _tmp108 = _tmp72 * _tmp78;
  const Scalar _tmp109 = _tmp18 + Scalar(110.0);
  const Scalar _tmp110 = _tmp28 + Scalar(-125.0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp109 * _tmp111;
  const Scalar _tmp113 = _tmp112 * _tmp93 * (_tmp105 * _tmp46 + _tmp107 * _tmp108);
  const Scalar _tmp114 = _tmp64 * _tmp78;
  const Scalar _tmp115 = _tmp114 * _tmp77 + _tmp81;
  const Scalar _tmp116 = _tmp114 * _tmp88 - _tmp115 * _tmp87 - _tmp51;
  const Scalar _tmp117 = _tmp102 * (-_tmp100 * _tmp116 + _tmp114 * _tmp95 - _tmp94);
  const Scalar _tmp118 = _tmp116 + _tmp117;
  const Scalar _tmp119 = -_tmp106 * _tmp118 - _tmp64;
  const Scalar _tmp120 = _tmp118 * _tmp90;
  const Scalar _tmp121 = _tmp110 * _tmp111;
  const Scalar _tmp122 = _tmp121 * _tmp93 * (_tmp108 * _tmp119 + _tmp120 * _tmp46 + Scalar(1.0));
  const Scalar _tmp123 = _tmp112 * _tmp27 - _tmp121 * _tmp17;
  const Scalar _tmp124 = _tmp101 * _tmp79 * _tmp96;
  const Scalar _tmp125 = Scalar(1.0) * _tmp101;
  const Scalar _tmp126 = _tmp123 * _tmp93 * (-_tmp124 * _tmp72 + _tmp125 * _tmp46);
  const Scalar _tmp127 = -_tmp113 - _tmp122 - _tmp126;
  const Scalar _tmp128 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp129 = _tmp83 * _tmp87 + _tmp86;
  const Scalar _tmp130 = 0;
  const Scalar _tmp131 = _tmp130 * _tmp90;
  const Scalar _tmp132 = -_tmp113 * fh1 - _tmp122 * fh1 - _tmp126 * fh1 -
                         _tmp128 * _tmp93 * (_tmp131 * _tmp46 - _tmp131 * _tmp72 * _tmp80);
  const Scalar _tmp133 = Scalar(1.0) / (_tmp132);
  const Scalar _tmp134 = _tmp38 + _tmp84;
  const Scalar _tmp135 = _tmp134 * _tmp87;
  const Scalar _tmp136 = Scalar(1.0) / (-_tmp135 - _tmp42 + _tmp86);
  const Scalar _tmp137 = Scalar(1.0) * _tmp136;
  const Scalar _tmp138 = _tmp102 * _tmp137;
  const Scalar _tmp139 = -_tmp125 * _tmp82 + _tmp134 * _tmp138;
  const Scalar _tmp140 = Scalar(1.0) * _tmp85;
  const Scalar _tmp141 = Scalar(1.0) * _tmp123;
  const Scalar _tmp142 = _tmp141 * (_tmp138 - _tmp139 * _tmp140);
  const Scalar _tmp143 = _tmp82 * _tmp90;
  const Scalar _tmp144 = _tmp134 * _tmp136;
  const Scalar _tmp145 = _tmp115 + _tmp117 * _tmp144 - _tmp118 * _tmp143;
  const Scalar _tmp146 = Scalar(1.0) * _tmp121 * (_tmp117 * _tmp137 - _tmp140 * _tmp145);
  const Scalar _tmp147 = _tmp103 * _tmp144 - _tmp104 * _tmp143 - _tmp97;
  const Scalar _tmp148 = Scalar(1.0) * _tmp112 * (_tmp103 * _tmp137 - _tmp140 * _tmp147);
  const Scalar _tmp149 = _tmp52 + _tmp74;
  const Scalar _tmp150 = _tmp149 * fh1;
  const Scalar _tmp151 = -Scalar(2.3544) * _tmp11 - _tmp112 * _tmp150 - _tmp17 * fv1;
  const Scalar _tmp152 = _tmp137 * _tmp87;
  const Scalar _tmp153 = _tmp85 * (_tmp135 * _tmp137 + Scalar(1.0));
  const Scalar _tmp154 = Scalar(1.0) * _tmp152 - Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = _tmp121 * _tmp150 + Scalar(2.3544) * _tmp23 + _tmp27 * fv1;
  const Scalar _tmp156 = _tmp134 * _tmp85;
  const Scalar _tmp157 = Scalar(1.0) * _tmp137 * _tmp156 - Scalar(1.0) * _tmp137;
  const Scalar _tmp158 = _tmp129 * _tmp136;
  const Scalar _tmp159 = -_tmp130 * _tmp143 - _tmp134 * _tmp158 + _tmp84;
  const Scalar _tmp160 =
      Scalar(1.0) * _tmp128 * (-_tmp129 * _tmp137 - _tmp140 * _tmp159 + Scalar(1.0)) +
      _tmp142 * fh1 + _tmp146 * fh1 + _tmp148 * fh1 + _tmp151 * _tmp154 + _tmp155 * _tmp157;
  const Scalar _tmp161 = std::asinh(_tmp133 * _tmp160);
  const Scalar _tmp162 = Scalar(9.6622558468725703) * _tmp161;
  const Scalar _tmp163 =
      -_tmp132 * _tmp162 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp57), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp61 - 1), Scalar(2))));
  const Scalar _tmp164 = Scalar(0.1034955) * _tmp133;
  const Scalar _tmp165 = _tmp163 * _tmp164;
  const Scalar _tmp166 = Scalar(1.0) * _tmp161;
  const Scalar _tmp167 = Scalar(9.6622558468725703) * _tmp132;
  const Scalar _tmp168 = std::pow(_tmp132, Scalar(-2));
  const Scalar _tmp169 = _tmp112 * _tmp149;
  const Scalar _tmp170 = _tmp121 * _tmp149;
  const Scalar _tmp171 = _tmp127 * _tmp168;
  const Scalar _tmp172 =
      (_tmp133 * (_tmp142 + _tmp146 + _tmp148 - _tmp154 * _tmp169 + _tmp157 * _tmp170) -
       _tmp160 * _tmp171) /
      std::sqrt(Scalar(std::pow(_tmp160, Scalar(2)) * _tmp168 + 1));
  const Scalar _tmp173 = _tmp123 * _tmp124;
  const Scalar _tmp174 = _tmp128 * _tmp131;
  const Scalar _tmp175 = _tmp119 * _tmp121 * _tmp78;
  const Scalar _tmp176 = _tmp107 * _tmp112 * _tmp78;
  const Scalar _tmp177 = -_tmp173 * fh1 - _tmp174 * _tmp80 + _tmp175 * fh1 + _tmp176 * fh1;
  const Scalar _tmp178 = Scalar(1.0) / (_tmp177);
  const Scalar _tmp179 = _tmp112 * _tmp147 * _tmp85;
  const Scalar _tmp180 = _tmp137 * _tmp155;
  const Scalar _tmp181 = _tmp121 * _tmp85;
  const Scalar _tmp182 = _tmp145 * _tmp181;
  const Scalar _tmp183 = _tmp123 * _tmp139 * _tmp85;
  const Scalar _tmp184 = _tmp128 * _tmp159 * _tmp85 + _tmp151 * _tmp153 - _tmp156 * _tmp180 +
                         _tmp179 * fh1 + _tmp182 * fh1 + _tmp183 * fh1;
  const Scalar _tmp185 = std::asinh(_tmp178 * _tmp184);
  const Scalar _tmp186 = Scalar(1.0) * _tmp185;
  const Scalar _tmp187 = Scalar(9.6622558468725703) * _tmp177;
  const Scalar _tmp188 =
      -_tmp185 * _tmp187 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp66), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp69), Scalar(2))));
  const Scalar _tmp189 = Scalar(0.1034955) * _tmp178;
  const Scalar _tmp190 = _tmp188 * _tmp189;
  const Scalar _tmp191 = -_tmp173 + _tmp175 + _tmp176;
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp191;
  const Scalar _tmp193 = std::pow(_tmp177, Scalar(-2));
  const Scalar _tmp194 = _tmp191 * _tmp193;
  const Scalar _tmp195 = (_tmp178 * (-_tmp134 * _tmp137 * _tmp149 * _tmp181 - _tmp153 * _tmp169 +
                                     _tmp179 + _tmp182 + _tmp183) -
                          _tmp184 * _tmp194) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp193 + 1));
  const Scalar _tmp196 = _tmp117 * _tmp121 * _tmp136;
  const Scalar _tmp197 = _tmp103 * _tmp112 * _tmp136;
  const Scalar _tmp198 = _tmp123 * _tmp138;
  const Scalar _tmp199 = _tmp128 * _tmp158 - _tmp151 * _tmp152 + _tmp180 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = _tmp101 * _tmp141;
  const Scalar _tmp201 = _tmp120 * _tmp121;
  const Scalar _tmp202 = _tmp105 * _tmp112;
  const Scalar _tmp203 = _tmp174 + _tmp200 * fh1 + _tmp201 * fh1 + _tmp202 * fh1;
  const Scalar _tmp204 = Scalar(1.0) / (_tmp203);
  const Scalar _tmp205 = std::asinh(_tmp199 * _tmp204);
  const Scalar _tmp206 = Scalar(1.0) * _tmp205;
  const Scalar _tmp207 = Scalar(9.6622558468725703) * _tmp203;
  const Scalar _tmp208 =
      -_tmp205 * _tmp207 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp39 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp43 - 1), Scalar(2))));
  const Scalar _tmp209 = Scalar(0.1034955) * _tmp204;
  const Scalar _tmp210 = _tmp208 * _tmp209;
  const Scalar _tmp211 = _tmp200 + _tmp201 + _tmp202;
  const Scalar _tmp212 = Scalar(9.6622558468725703) * _tmp211;
  const Scalar _tmp213 = std::pow(_tmp203, Scalar(-2));
  const Scalar _tmp214 = _tmp211 * _tmp213;
  const Scalar _tmp215 = (-_tmp199 * _tmp214 + _tmp204 * (_tmp137 * _tmp170 + _tmp152 * _tmp169 -
                                                          _tmp196 - _tmp197 - _tmp198)) /
                         std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp213 + 1));

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) =
      Scalar(9.6622558468725703) * fh1 *
          (Scalar(1.0) * _tmp34 * _tmp35 * fv1 * std::cosh(_tmp36) -
           (Scalar(0.1034955) * _tmp0 * (Scalar(9.6622558468725703) * _tmp29 * _tmp35 - _tmp31) -
            _tmp32 * _tmp34) *
               std::cosh(_tmp33)) -
      Scalar(9.6622558468725703) * std::sinh(_tmp33) -
      Scalar(9.6622558468725703) * std::sinh(_tmp36);
  _res(1, 0) = Scalar(9.6622558468725703) * _tmp127 * (-std::sinh(_tmp165) - std::sinh(_tmp166)) +
               _tmp167 * (-Scalar(1.0) * _tmp172 * std::cosh(_tmp166) -
                          (-Scalar(0.1034955) * _tmp163 * _tmp171 +
                           _tmp164 * (-_tmp127 * _tmp162 - _tmp167 * _tmp172)) *
                              std::cosh(_tmp165));
  _res(2, 0) = _tmp187 * (-Scalar(1.0) * _tmp195 * std::cosh(_tmp186) -
                          (-Scalar(0.1034955) * _tmp188 * _tmp194 +
                           _tmp189 * (-_tmp185 * _tmp192 - _tmp187 * _tmp195)) *
                              std::cosh(_tmp190)) +
               _tmp192 * (-std::sinh(_tmp186) - std::sinh(_tmp190));
  _res(3, 0) = _tmp207 * (-Scalar(1.0) * _tmp215 * std::cosh(_tmp206) -
                          (-Scalar(0.1034955) * _tmp208 * _tmp214 +
                           _tmp209 * (-_tmp205 * _tmp212 - _tmp207 * _tmp215)) *
                              std::cosh(_tmp210)) +
               _tmp212 * (-std::sinh(_tmp206) - std::sinh(_tmp210));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym