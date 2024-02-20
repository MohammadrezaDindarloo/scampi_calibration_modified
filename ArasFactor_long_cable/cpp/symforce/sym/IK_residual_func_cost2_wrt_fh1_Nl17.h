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
 * Symbolic function: IK_residual_func_cost2_wrt_fh1_Nl17
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost2WrtFh1Nl17(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 640

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (214)
  const Scalar _tmp0 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp1 = -2 * std::pow(_tmp0, Scalar(2));
  const Scalar _tmp2 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp3 = 1 - 2 * std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = Scalar(0.20999999999999999) * _tmp1 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp5 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp6 = 2 * _tmp2 * _tmp5;
  const Scalar _tmp7 = -2 * _DeltaRot[0] * _Rot_init[0] - 2 * _DeltaRot[1] * _Rot_init[1] -
                       2 * _DeltaRot[2] * _Rot_init[2] + 2 * _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp8 = _tmp0 * _tmp7;
  const Scalar _tmp9 = _tmp6 + _tmp8;
  const Scalar _tmp10 = -Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp11 = 2 * _tmp0;
  const Scalar _tmp12 = _tmp11 * _tmp5;
  const Scalar _tmp13 = _tmp2 * _tmp7;
  const Scalar _tmp14 = Scalar(0.20999999999999999) * _tmp12 - Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp15 = _tmp10 + _tmp14;
  const Scalar _tmp16 = _tmp15 + _tmp4;
  const Scalar _tmp17 = _tmp16 + position_vector(0, 0);
  const Scalar _tmp18 = -2 * std::pow(_tmp5, Scalar(2));
  const Scalar _tmp19 = Scalar(0.20999999999999999) * _tmp18 + Scalar(0.20999999999999999) * _tmp3;
  const Scalar _tmp20 = _tmp11 * _tmp2;
  const Scalar _tmp21 = _tmp5 * _tmp7;
  const Scalar _tmp22 = _tmp20 - _tmp21;
  const Scalar _tmp23 = -Scalar(0.010999999999999999) * _tmp22;
  const Scalar _tmp24 = Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp13;
  const Scalar _tmp25 = _tmp23 + _tmp24;
  const Scalar _tmp26 = _tmp19 + _tmp25;
  const Scalar _tmp27 = _tmp26 + position_vector(1, 0);
  const Scalar _tmp28 = Scalar(1.0) / (fh1);
  const Scalar _tmp29 = _tmp28 * fv1;
  const Scalar _tmp30 = std::asinh(_tmp29);
  const Scalar _tmp31 = Scalar(9.6622558468725703) * _tmp30;
  const Scalar _tmp32 =
      -_tmp31 * fh1 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp17), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp27), Scalar(2))));
  const Scalar _tmp33 = Scalar(0.1034955) * _tmp28;
  const Scalar _tmp34 = _tmp32 * _tmp33;
  const Scalar _tmp35 = std::pow(fh1, Scalar(-2));
  const Scalar _tmp36 =
      std::pow(Scalar(_tmp35 * std::pow(fv1, Scalar(2)) + 1), Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp37 = Scalar(1.0) * _tmp30;
  const Scalar _tmp38 = _tmp27 + Scalar(-110.0);
  const Scalar _tmp39 = _tmp17 + Scalar(-125.0);
  const Scalar _tmp40 = std::pow(Scalar(std::pow(_tmp38, Scalar(2)) + std::pow(_tmp39, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp41 = _tmp39 * _tmp40;
  const Scalar _tmp42 = Scalar(0.20999999999999999) * _tmp6 - Scalar(0.20999999999999999) * _tmp8;
  const Scalar _tmp43 = -Scalar(0.010999999999999999) * _tmp1 -
                        Scalar(0.010999999999999999) * _tmp18 + Scalar(-0.010999999999999999);
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp20 + Scalar(0.20999999999999999) * _tmp21;
  const Scalar _tmp45 = _tmp43 + _tmp44;
  const Scalar _tmp46 = _tmp42 + _tmp45;
  const Scalar _tmp47 = _tmp46 * fh1;
  const Scalar _tmp48 = _tmp16 * fv1 + _tmp41 * _tmp47 + Scalar(2.3544) * _tmp9;
  const Scalar _tmp49 = -_tmp4;
  const Scalar _tmp50 = _tmp15 + _tmp49;
  const Scalar _tmp51 = Scalar(1.0) * _tmp50;
  const Scalar _tmp52 = _tmp23 - _tmp24;
  const Scalar _tmp53 = _tmp19 + _tmp52;
  const Scalar _tmp54 = Scalar(1.0) * _tmp53;
  const Scalar _tmp55 = -_tmp54;
  const Scalar _tmp56 = -_tmp19;
  const Scalar _tmp57 = _tmp52 + _tmp56;
  const Scalar _tmp58 = _tmp55 + _tmp57;
  const Scalar _tmp59 = _tmp10 - _tmp14;
  const Scalar _tmp60 = _tmp4 + _tmp59;
  const Scalar _tmp61 = _tmp25 + _tmp56;
  const Scalar _tmp62 = Scalar(1.0) / (_tmp55 + _tmp61);
  const Scalar _tmp63 = _tmp62 * (_tmp51 - _tmp60);
  const Scalar _tmp64 = _tmp58 * _tmp63;
  const Scalar _tmp65 = _tmp49 + _tmp59;
  const Scalar _tmp66 = Scalar(1.0) / (_tmp51 - _tmp64 - _tmp65);
  const Scalar _tmp67 = Scalar(1.0) * _tmp66;
  const Scalar _tmp68 = _tmp58 * _tmp67;
  const Scalar _tmp69 = _tmp62 * _tmp68;
  const Scalar _tmp70 = -Scalar(1.0) * _tmp67 + Scalar(1.0) * _tmp69;
  const Scalar _tmp71 = _tmp38 * _tmp40;
  const Scalar _tmp72 = _tmp16 * _tmp71 - _tmp26 * _tmp41;
  const Scalar _tmp73 = -_tmp42;
  const Scalar _tmp74 = _tmp43 - _tmp44;
  const Scalar _tmp75 = _tmp73 + _tmp74;
  const Scalar _tmp76 = _tmp57 + position_vector(1, 0);
  const Scalar _tmp77 = _tmp76 + Scalar(110.0);
  const Scalar _tmp78 = _tmp65 + position_vector(0, 0);
  const Scalar _tmp79 = _tmp78 + Scalar(125.0);
  const Scalar _tmp80 = std::pow(Scalar(std::pow(_tmp77, Scalar(2)) + std::pow(_tmp79, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp81 = _tmp77 * _tmp80;
  const Scalar _tmp82 = _tmp42 + _tmp74;
  const Scalar _tmp83 = _tmp61 + position_vector(1, 0);
  const Scalar _tmp84 = _tmp83 + Scalar(110.0);
  const Scalar _tmp85 = _tmp60 + position_vector(0, 0);
  const Scalar _tmp86 = _tmp85 + Scalar(-125.0);
  const Scalar _tmp87 = std::pow(Scalar(std::pow(_tmp84, Scalar(2)) + std::pow(_tmp86, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp88 = _tmp84 * _tmp87;
  const Scalar _tmp89 = _tmp53 + position_vector(1, 0);
  const Scalar _tmp90 = _tmp89 + Scalar(-110.0);
  const Scalar _tmp91 = _tmp50 + position_vector(0, 0);
  const Scalar _tmp92 = _tmp91 + Scalar(125.0);
  const Scalar _tmp93 = Scalar(1.0) / (_tmp92);
  const Scalar _tmp94 = _tmp90 * _tmp93;
  const Scalar _tmp95 = _tmp45 + _tmp73;
  const Scalar _tmp96 = _tmp86 * _tmp87;
  const Scalar _tmp97 = _tmp95 * _tmp96;
  const Scalar _tmp98 = _tmp82 * _tmp88 - _tmp94 * _tmp97;
  const Scalar _tmp99 = _tmp79 * _tmp80;
  const Scalar _tmp100 = -_tmp81 + _tmp94 * _tmp99;
  const Scalar _tmp101 = Scalar(1.0) / (-_tmp88 + _tmp94 * _tmp96);
  const Scalar _tmp102 = _tmp100 * _tmp101;
  const Scalar _tmp103 = _tmp95 * _tmp99;
  const Scalar _tmp104 = -_tmp102 * _tmp98 - _tmp103 * _tmp94 + _tmp75 * _tmp81;
  const Scalar _tmp105 =
      std::sqrt(Scalar(std::pow(_tmp90, Scalar(2)) + std::pow(_tmp92, Scalar(2))));
  const Scalar _tmp106 = Scalar(1.0) / (_tmp105);
  const Scalar _tmp107 = _tmp105 * _tmp93;
  const Scalar _tmp108 = _tmp107 * (_tmp106 * _tmp50 * _tmp90 - _tmp106 * _tmp53 * _tmp92);
  const Scalar _tmp109 = _tmp101 * (_tmp108 * _tmp96 - _tmp60 * _tmp88 + _tmp61 * _tmp96);
  const Scalar _tmp110 = -_tmp100 * _tmp109 + _tmp108 * _tmp99 + _tmp57 * _tmp99 - _tmp65 * _tmp81;
  const Scalar _tmp111 = Scalar(1.0) / (_tmp110);
  const Scalar _tmp112 = Scalar(1.0) * _tmp111;
  const Scalar _tmp113 = -_tmp82 * _tmp96 + _tmp97;
  const Scalar _tmp114 = -_tmp102 * _tmp113 + _tmp103 - _tmp104 * _tmp63 - _tmp75 * _tmp99;
  const Scalar _tmp115 = _tmp111 * _tmp114;
  const Scalar _tmp116 = -_tmp104 * _tmp112 + _tmp115 * _tmp68;
  const Scalar _tmp117 = Scalar(1.0) * _tmp62;
  const Scalar _tmp118 = _tmp115 * _tmp67;
  const Scalar _tmp119 = Scalar(1.0) * _tmp72 * (-_tmp116 * _tmp117 + _tmp118);
  const Scalar _tmp120 = _tmp101 * _tmp94;
  const Scalar _tmp121 = _tmp120 * _tmp98 + _tmp94 * _tmp95;
  const Scalar _tmp122 = _tmp113 * _tmp120 - _tmp121 * _tmp63 - _tmp95;
  const Scalar _tmp123 = Scalar(1.0) / (_tmp114);
  const Scalar _tmp124 = _tmp110 * _tmp123;
  const Scalar _tmp125 = _tmp115 * (-_tmp108 + _tmp109 * _tmp94 - _tmp122 * _tmp124);
  const Scalar _tmp126 = _tmp122 + _tmp125;
  const Scalar _tmp127 = _tmp104 * _tmp123;
  const Scalar _tmp128 = _tmp58 * _tmp66;
  const Scalar _tmp129 = _tmp121 + _tmp125 * _tmp128 - _tmp126 * _tmp127;
  const Scalar _tmp130 = Scalar(1.0) * _tmp41 * (-_tmp117 * _tmp129 + _tmp125 * _tmp67);
  const Scalar _tmp131 = -Scalar(2.3544) * _tmp22 - _tmp26 * fv1 - _tmp47 * _tmp71;
  const Scalar _tmp132 = _tmp64 * _tmp67 + Scalar(1.0);
  const Scalar _tmp133 = _tmp63 * _tmp67;
  const Scalar _tmp134 = -Scalar(1.0) * _tmp117 * _tmp132 + Scalar(1.0) * _tmp133;
  const Scalar _tmp135 = Scalar(1.0) * _tmp101;
  const Scalar _tmp136 = _tmp135 * _tmp98;
  const Scalar _tmp137 = -_tmp113 * _tmp135 + _tmp136 * _tmp63;
  const Scalar _tmp138 = _tmp115 * (-Scalar(1.0) * _tmp109 - _tmp124 * _tmp137);
  const Scalar _tmp139 = _tmp123 * (_tmp137 + _tmp138);
  const Scalar _tmp140 = -_tmp104 * _tmp139 + _tmp128 * _tmp138 - _tmp136;
  const Scalar _tmp141 = Scalar(1.0) * _tmp71 * (-_tmp117 * _tmp140 + _tmp138 * _tmp67);
  const Scalar _tmp142 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp143 = _tmp51 + _tmp54 * _tmp63;
  const Scalar _tmp144 = 0;
  const Scalar _tmp145 = _tmp143 * _tmp66;
  const Scalar _tmp146 = -_tmp127 * _tmp144 - _tmp145 * _tmp58 + _tmp55;
  const Scalar _tmp147 =
      _tmp119 * fh1 + _tmp130 * fh1 + _tmp131 * _tmp134 + _tmp141 * fh1 +
      Scalar(1.0) * _tmp142 * (-_tmp117 * _tmp146 - _tmp143 * _tmp67 + Scalar(1.0)) +
      _tmp48 * _tmp70;
  const Scalar _tmp148 = _tmp101 * (-_tmp100 * _tmp139 + Scalar(1.0));
  const Scalar _tmp149 = _tmp107 * _tmp71 * (_tmp139 * _tmp99 + _tmp148 * _tmp96);
  const Scalar _tmp150 = _tmp123 * _tmp144;
  const Scalar _tmp151 = _tmp102 * _tmp96;
  const Scalar _tmp152 = _tmp123 * _tmp126;
  const Scalar _tmp153 = _tmp101 * (-_tmp100 * _tmp152 - _tmp94);
  const Scalar _tmp154 = _tmp107 * _tmp41 * (_tmp152 * _tmp99 + _tmp153 * _tmp96 + Scalar(1.0));
  const Scalar _tmp155 = _tmp107 * _tmp72 * (-_tmp112 * _tmp151 + _tmp112 * _tmp99);
  const Scalar _tmp156 = -_tmp107 * _tmp142 * (-_tmp150 * _tmp151 + _tmp150 * _tmp99) -
                         _tmp149 * fh1 - _tmp154 * fh1 - _tmp155 * fh1;
  const Scalar _tmp157 = Scalar(1.0) / (_tmp156);
  const Scalar _tmp158 = std::asinh(_tmp147 * _tmp157);
  const Scalar _tmp159 = Scalar(9.6622558468725703) * _tmp156;
  const Scalar _tmp160 =
      -_tmp158 * _tmp159 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp89), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp91 - 1), Scalar(2))));
  const Scalar _tmp161 = Scalar(0.1034955) * _tmp157;
  const Scalar _tmp162 = _tmp160 * _tmp161;
  const Scalar _tmp163 = Scalar(1.0) * _tmp158;
  const Scalar _tmp164 = -_tmp149 - _tmp154 - _tmp155;
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp166 = std::pow(_tmp156, Scalar(-2));
  const Scalar _tmp167 = _tmp164 * _tmp166;
  const Scalar _tmp168 = _tmp46 * _tmp71;
  const Scalar _tmp169 = _tmp41 * _tmp46;
  const Scalar _tmp170 = (-_tmp147 * _tmp167 + _tmp157 * (_tmp119 + _tmp130 - _tmp134 * _tmp168 +
                                                          _tmp141 + _tmp169 * _tmp70)) /
                         std::sqrt(Scalar(std::pow(_tmp147, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp171 = _tmp148 * _tmp71;
  const Scalar _tmp172 = _tmp142 * _tmp150;
  const Scalar _tmp173 = _tmp153 * _tmp41;
  const Scalar _tmp174 = _tmp112 * _tmp72;
  const Scalar _tmp175 = _tmp174 * fh1;
  const Scalar _tmp176 = -_tmp102 * _tmp172 - _tmp102 * _tmp175 + _tmp171 * fh1 + _tmp173 * fh1;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp140 * _tmp62 * _tmp71;
  const Scalar _tmp179 = _tmp132 * _tmp62;
  const Scalar _tmp180 = _tmp116 * _tmp62 * _tmp72;
  const Scalar _tmp181 = _tmp48 * _tmp67;
  const Scalar _tmp182 = _tmp129 * _tmp41 * _tmp62;
  const Scalar _tmp183 = _tmp131 * _tmp179 + _tmp142 * _tmp146 * _tmp62 + _tmp178 * fh1 +
                         _tmp180 * fh1 - _tmp181 * _tmp58 * _tmp62 + _tmp182 * fh1;
  const Scalar _tmp184 = std::asinh(_tmp177 * _tmp183);
  const Scalar _tmp185 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp186 =
      -_tmp184 * _tmp185 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp85), Scalar(2)) +
                     Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp83 - 1), Scalar(2))));
  const Scalar _tmp187 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp188 = _tmp186 * _tmp187;
  const Scalar _tmp189 = Scalar(1.0) * _tmp184;
  const Scalar _tmp190 = -_tmp102 * _tmp174 + _tmp171 + _tmp173;
  const Scalar _tmp191 = Scalar(9.6622558468725703) * _tmp190;
  const Scalar _tmp192 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp193 = _tmp190 * _tmp192;
  const Scalar _tmp194 =
      (_tmp177 * (-_tmp168 * _tmp179 - _tmp169 * _tmp69 + _tmp178 + _tmp180 + _tmp182) -
       _tmp183 * _tmp193) /
      std::sqrt(Scalar(std::pow(_tmp183, Scalar(2)) * _tmp192 + 1));
  const Scalar _tmp195 = _tmp125 * _tmp41 * _tmp66;
  const Scalar _tmp196 = _tmp118 * _tmp72;
  const Scalar _tmp197 = _tmp138 * _tmp66 * _tmp71;
  const Scalar _tmp198 = -_tmp131 * _tmp133 + _tmp142 * _tmp145 + _tmp181 - _tmp195 * fh1 -
                         _tmp196 * fh1 - _tmp197 * fh1;
  const Scalar _tmp199 = _tmp139 * _tmp71;
  const Scalar _tmp200 = _tmp152 * _tmp41;
  const Scalar _tmp201 = _tmp172 + _tmp175 + _tmp199 * fh1 + _tmp200 * fh1;
  const Scalar _tmp202 = Scalar(1.0) / (_tmp201);
  const Scalar _tmp203 = std::asinh(_tmp198 * _tmp202);
  const Scalar _tmp204 = Scalar(1.0) * _tmp203;
  const Scalar _tmp205 = std::pow(_tmp201, Scalar(-2));
  const Scalar _tmp206 = _tmp174 + _tmp199 + _tmp200;
  const Scalar _tmp207 = _tmp205 * _tmp206;
  const Scalar _tmp208 = (-_tmp198 * _tmp207 + _tmp202 * (_tmp133 * _tmp168 + _tmp169 * _tmp67 -
                                                          _tmp195 - _tmp196 - _tmp197)) /
                         std::sqrt(Scalar(std::pow(_tmp198, Scalar(2)) * _tmp205 + 1));
  const Scalar _tmp209 = Scalar(9.6622558468725703) * _tmp201;
  const Scalar _tmp210 =
      -_tmp203 * _tmp209 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp76 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp78 - 1), Scalar(2))));
  const Scalar _tmp211 = Scalar(0.1034955) * _tmp202;
  const Scalar _tmp212 = _tmp210 * _tmp211;
  const Scalar _tmp213 = Scalar(9.6622558468725703) * _tmp206;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = Scalar(9.6622558468725703) * fh1 *
                   (Scalar(1.0) * _tmp35 * _tmp36 * fv1 * std::cosh(_tmp37) -
                    (-Scalar(0.1034955) * _tmp32 * _tmp35 +
                     _tmp33 * (Scalar(9.6622558468725703) * _tmp29 * _tmp36 - _tmp31)) *
                        std::cosh(_tmp34)) -
               Scalar(9.6622558468725703) * std::sinh(_tmp34) -
               Scalar(9.6622558468725703) * std::sinh(_tmp37);
  _res(1, 0) = _tmp159 * (-Scalar(1.0) * _tmp170 * std::cosh(_tmp163) -
                          (-Scalar(0.1034955) * _tmp160 * _tmp167 +
                           _tmp161 * (-_tmp158 * _tmp165 - _tmp159 * _tmp170)) *
                              std::cosh(_tmp162)) +
               _tmp165 * (-std::sinh(_tmp162) - std::sinh(_tmp163));
  _res(2, 0) = _tmp185 * (-Scalar(1.0) * _tmp194 * std::cosh(_tmp189) -
                          (-Scalar(0.1034955) * _tmp186 * _tmp193 +
                           _tmp187 * (-_tmp184 * _tmp191 - _tmp185 * _tmp194)) *
                              std::cosh(_tmp188)) +
               _tmp191 * (-std::sinh(_tmp188) - std::sinh(_tmp189));
  _res(3, 0) = _tmp209 * (-Scalar(1.0) * _tmp208 * std::cosh(_tmp204) -
                          (-Scalar(0.1034955) * _tmp207 * _tmp210 +
                           _tmp211 * (-_tmp203 * _tmp213 - _tmp208 * _tmp209)) *
                              std::cosh(_tmp212)) +
               _tmp213 * (-std::sinh(_tmp204) - std::sinh(_tmp212));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
