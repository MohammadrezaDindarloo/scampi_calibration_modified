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
 * Symbolic function: IK_residual_func_cost1_wrt_fh1_Nl8
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost1WrtFh1Nl8(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 656

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
  const Scalar _tmp41 = _tmp40 + position_vector(1, 0);
  const Scalar _tmp42 = _tmp41 + Scalar(110.0);
  const Scalar _tmp43 = -_tmp21;
  const Scalar _tmp44 = _tmp27 + _tmp43;
  const Scalar _tmp45 = _tmp44 + position_vector(0, 0);
  const Scalar _tmp46 = _tmp45 + Scalar(125.0);
  const Scalar _tmp47 = std::pow(Scalar(std::pow(_tmp42, Scalar(2)) + std::pow(_tmp46, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp48 = _tmp46 * _tmp47;
  const Scalar _tmp49 = _tmp17 + _tmp5;
  const Scalar _tmp50 = _tmp49 + position_vector(1, 0);
  const Scalar _tmp51 = _tmp50 + Scalar(-110.0);
  const Scalar _tmp52 = _tmp25 + _tmp26;
  const Scalar _tmp53 = _tmp21 + _tmp52;
  const Scalar _tmp54 = _tmp53 + position_vector(0, 0);
  const Scalar _tmp55 = _tmp54 + Scalar(-125.0);
  const Scalar _tmp56 =
      std::sqrt(Scalar(std::pow(_tmp51, Scalar(2)) + std::pow(_tmp55, Scalar(2))));
  const Scalar _tmp57 = Scalar(1.0) / (_tmp56);
  const Scalar _tmp58 = Scalar(1.0) / (_tmp55);
  const Scalar _tmp59 = _tmp56 * _tmp58;
  const Scalar _tmp60 = _tmp59 * (-_tmp49 * _tmp55 * _tmp57 + _tmp51 * _tmp53 * _tmp57);
  const Scalar _tmp61 = _tmp42 * _tmp47;
  const Scalar _tmp62 = _tmp40 * _tmp48 - _tmp44 * _tmp61 + _tmp48 * _tmp60;
  const Scalar _tmp63 = _tmp51 * _tmp58;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp48 * _tmp63 - _tmp61);
  const Scalar _tmp65 = Scalar(1.0) * _tmp64;
  const Scalar _tmp66 = Scalar(0.20999999999999999) * _tmp11 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp67 = -_tmp66;
  const Scalar _tmp68 = -Scalar(0.010999999999999999) * _tmp2 -
                        Scalar(0.010999999999999999) * _tmp20 + Scalar(-0.010999999999999999);
  const Scalar _tmp69 = Scalar(0.20999999999999999) * _tmp22 - Scalar(0.20999999999999999) * _tmp23;
  const Scalar _tmp70 = _tmp68 - _tmp69;
  const Scalar _tmp71 = _tmp67 + _tmp70;
  const Scalar _tmp72 = _tmp68 + _tmp69;
  const Scalar _tmp73 = _tmp66 + _tmp72;
  const Scalar _tmp74 = -_tmp48 * _tmp71 + _tmp48 * _tmp73;
  const Scalar _tmp75 = _tmp63 * _tmp73;
  const Scalar _tmp76 = _tmp64 * (-_tmp48 * _tmp75 + _tmp61 * _tmp71);
  const Scalar _tmp77 = Scalar(1.0) * _tmp76;
  const Scalar _tmp78 = Scalar(1.0) * _tmp49;
  const Scalar _tmp79 = -_tmp78;
  const Scalar _tmp80 = Scalar(1.0) / (_tmp40 + _tmp79);
  const Scalar _tmp81 = Scalar(1.0) * _tmp53;
  const Scalar _tmp82 = _tmp80 * (-_tmp44 + _tmp81);
  const Scalar _tmp83 = -_tmp65 * _tmp74 + _tmp77 * _tmp82;
  const Scalar _tmp84 = _tmp66 + _tmp70;
  const Scalar _tmp85 = _tmp43 + _tmp52;
  const Scalar _tmp86 = _tmp85 + position_vector(0, 0);
  const Scalar _tmp87 = _tmp86 + Scalar(125.0);
  const Scalar _tmp88 = _tmp39 + _tmp5;
  const Scalar _tmp89 = _tmp88 + position_vector(1, 0);
  const Scalar _tmp90 = _tmp89 + Scalar(-110.0);
  const Scalar _tmp91 = std::pow(Scalar(std::pow(_tmp87, Scalar(2)) + std::pow(_tmp90, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp92 = _tmp87 * _tmp91;
  const Scalar _tmp93 = _tmp73 * _tmp92;
  const Scalar _tmp94 = _tmp90 * _tmp91;
  const Scalar _tmp95 = _tmp63 * _tmp92 - _tmp94;
  const Scalar _tmp96 = -_tmp63 * _tmp93 - _tmp76 * _tmp95 + _tmp84 * _tmp94;
  const Scalar _tmp97 = _tmp64 * _tmp95;
  const Scalar _tmp98 = -_tmp74 * _tmp97 - _tmp82 * _tmp96 - _tmp84 * _tmp92 + _tmp93;
  const Scalar _tmp99 = Scalar(1.0) / (_tmp98);
  const Scalar _tmp100 = _tmp60 * _tmp92 - _tmp62 * _tmp97 - _tmp85 * _tmp94 + _tmp88 * _tmp92;
  const Scalar _tmp101 = _tmp100 * _tmp99;
  const Scalar _tmp102 = Scalar(1.0) / (_tmp100);
  const Scalar _tmp103 = _tmp102 * _tmp98;
  const Scalar _tmp104 = _tmp103 * (-_tmp101 * _tmp83 - _tmp62 * _tmp65);
  const Scalar _tmp105 = _tmp104 + _tmp83;
  const Scalar _tmp106 = _tmp92 * _tmp99;
  const Scalar _tmp107 = _tmp95 * _tmp99;
  const Scalar _tmp108 = _tmp64 * (-_tmp105 * _tmp107 + Scalar(1.0));
  const Scalar _tmp109 = _tmp19 + Scalar(110.0);
  const Scalar _tmp110 = _tmp29 + Scalar(-125.0);
  const Scalar _tmp111 =
      std::pow(Scalar(std::pow(_tmp109, Scalar(2)) + std::pow(_tmp110, Scalar(2))),
               Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp112 = _tmp109 * _tmp111;
  const Scalar _tmp113 = _tmp112 * _tmp59 * (_tmp105 * _tmp106 + _tmp108 * _tmp48);
  const Scalar _tmp114 = _tmp110 * _tmp111;
  const Scalar _tmp115 = _tmp112 * _tmp28 - _tmp114 * _tmp18;
  const Scalar _tmp116 = Scalar(1.0) * _tmp102;
  const Scalar _tmp117 = _tmp48 * _tmp97;
  const Scalar _tmp118 = _tmp115 * _tmp59 * (-_tmp116 * _tmp117 + _tmp116 * _tmp92);
  const Scalar _tmp119 = _tmp63 * _tmp64;
  const Scalar _tmp120 = _tmp63 * _tmp76 + _tmp75;
  const Scalar _tmp121 = _tmp119 * _tmp74 - _tmp120 * _tmp82 - _tmp73;
  const Scalar _tmp122 = _tmp103 * (-_tmp101 * _tmp121 + _tmp119 * _tmp62 - _tmp60);
  const Scalar _tmp123 = _tmp121 + _tmp122;
  const Scalar _tmp124 = _tmp64 * (-_tmp107 * _tmp123 - _tmp63);
  const Scalar _tmp125 = _tmp114 * _tmp59 * (_tmp106 * _tmp123 + _tmp124 * _tmp48 + Scalar(1.0));
  const Scalar _tmp126 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp127 = _tmp78 * _tmp82 + _tmp81;
  const Scalar _tmp128 = 0;
  const Scalar _tmp129 = -_tmp113 * fh1 - _tmp118 * fh1 - _tmp125 * fh1 -
                         _tmp126 * _tmp59 * (-_tmp117 * _tmp128 + _tmp128 * _tmp92);
  const Scalar _tmp130 = Scalar(1.0) / (_tmp129);
  const Scalar _tmp131 = _tmp96 * _tmp99;
  const Scalar _tmp132 = _tmp79 + _tmp88;
  const Scalar _tmp133 = _tmp132 * _tmp82;
  const Scalar _tmp134 = Scalar(1.0) / (-_tmp133 + _tmp81 - _tmp85);
  const Scalar _tmp135 = _tmp132 * _tmp134;
  const Scalar _tmp136 = _tmp104 * _tmp135 - _tmp105 * _tmp131 - _tmp77;
  const Scalar _tmp137 = Scalar(1.0) * _tmp80;
  const Scalar _tmp138 = Scalar(1.0) * _tmp134;
  const Scalar _tmp139 = Scalar(1.0) * _tmp112 * (_tmp104 * _tmp138 - _tmp136 * _tmp137);
  const Scalar _tmp140 = _tmp120 + _tmp122 * _tmp135 - _tmp123 * _tmp131;
  const Scalar _tmp141 = Scalar(1.0) * _tmp114 * (_tmp122 * _tmp138 - _tmp137 * _tmp140);
  const Scalar _tmp142 = _tmp67 + _tmp72;
  const Scalar _tmp143 = _tmp142 * fh1;
  const Scalar _tmp144 = _tmp114 * _tmp143 + Scalar(2.3544) * _tmp24 + _tmp28 * fv1;
  const Scalar _tmp145 = _tmp132 * _tmp80;
  const Scalar _tmp146 = Scalar(1.0) * _tmp138 * _tmp145 - Scalar(1.0) * _tmp138;
  const Scalar _tmp147 = _tmp103 * _tmp138;
  const Scalar _tmp148 = _tmp80 * (-_tmp116 * _tmp96 + _tmp132 * _tmp147);
  const Scalar _tmp149 = Scalar(1.0) * _tmp115;
  const Scalar _tmp150 = _tmp149 * (_tmp147 - Scalar(1.0) * _tmp148);
  const Scalar _tmp151 = -_tmp112 * _tmp143 - Scalar(2.3544) * _tmp12 - _tmp18 * fv1;
  const Scalar _tmp152 = _tmp133 * _tmp138 + Scalar(1.0);
  const Scalar _tmp153 = _tmp138 * _tmp82;
  const Scalar _tmp154 = -Scalar(1.0) * _tmp137 * _tmp152 + Scalar(1.0) * _tmp153;
  const Scalar _tmp155 = _tmp127 * _tmp134;
  const Scalar _tmp156 = _tmp80 * (-_tmp128 * _tmp96 - _tmp132 * _tmp155 + _tmp79);
  const Scalar _tmp157 =
      Scalar(1.0) * _tmp126 * (-_tmp127 * _tmp138 - Scalar(1.0) * _tmp156 + Scalar(1.0)) +
      _tmp139 * fh1 + _tmp141 * fh1 + _tmp144 * _tmp146 + _tmp150 * fh1 + _tmp151 * _tmp154;
  const Scalar _tmp158 = std::asinh(_tmp130 * _tmp157);
  const Scalar _tmp159 = Scalar(1.0) * _tmp158;
  const Scalar _tmp160 = Scalar(9.6622558468725703) * _tmp129;
  const Scalar _tmp161 =
      -_tmp158 * _tmp160 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp50), Scalar(2)) +
                     std::pow(Scalar(1 - Scalar(0.0080000000000000002) * _tmp54), Scalar(2))));
  const Scalar _tmp162 = Scalar(0.1034955) * _tmp130;
  const Scalar _tmp163 = _tmp161 * _tmp162;
  const Scalar _tmp164 = -_tmp113 - _tmp118 - _tmp125;
  const Scalar _tmp165 = Scalar(9.6622558468725703) * _tmp164;
  const Scalar _tmp166 = std::pow(_tmp129, Scalar(-2));
  const Scalar _tmp167 = _tmp164 * _tmp166;
  const Scalar _tmp168 = _tmp112 * _tmp142;
  const Scalar _tmp169 = _tmp114 * _tmp142;
  const Scalar _tmp170 =
      (_tmp130 * (_tmp139 + _tmp141 + _tmp146 * _tmp169 + _tmp150 - _tmp154 * _tmp168) -
       _tmp157 * _tmp167) /
      std::sqrt(Scalar(std::pow(_tmp157, Scalar(2)) * _tmp166 + 1));
  const Scalar _tmp171 = _tmp126 * _tmp128;
  const Scalar _tmp172 = _tmp102 * _tmp149;
  const Scalar _tmp173 = _tmp172 * fh1;
  const Scalar _tmp174 = _tmp108 * _tmp112;
  const Scalar _tmp175 = _tmp114 * _tmp124;
  const Scalar _tmp176 = -_tmp171 * _tmp97 - _tmp173 * _tmp97 + _tmp174 * fh1 + _tmp175 * fh1;
  const Scalar _tmp177 = Scalar(1.0) / (_tmp176);
  const Scalar _tmp178 = _tmp112 * _tmp136 * _tmp80;
  const Scalar _tmp179 = _tmp152 * _tmp80;
  const Scalar _tmp180 = _tmp114 * _tmp80;
  const Scalar _tmp181 = _tmp140 * _tmp180;
  const Scalar _tmp182 = _tmp115 * _tmp148;
  const Scalar _tmp183 = _tmp138 * _tmp144;
  const Scalar _tmp184 = _tmp126 * _tmp156 - _tmp145 * _tmp183 + _tmp151 * _tmp179 + _tmp178 * fh1 +
                         _tmp181 * fh1 + _tmp182 * fh1;
  const Scalar _tmp185 = std::asinh(_tmp177 * _tmp184);
  const Scalar _tmp186 = Scalar(9.6622558468725703) * _tmp176;
  const Scalar _tmp187 =
      -_tmp185 * _tmp186 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(-Scalar(0.0090909090909090905) * _tmp41 - 1), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp45 - 1), Scalar(2))));
  const Scalar _tmp188 = Scalar(0.1034955) * _tmp177;
  const Scalar _tmp189 = _tmp187 * _tmp188;
  const Scalar _tmp190 = Scalar(1.0) * _tmp185;
  const Scalar _tmp191 = -_tmp172 * _tmp97 + _tmp174 + _tmp175;
  const Scalar _tmp192 = Scalar(9.6622558468725703) * _tmp191;
  const Scalar _tmp193 = std::pow(_tmp176, Scalar(-2));
  const Scalar _tmp194 = _tmp191 * _tmp193;
  const Scalar _tmp195 = (_tmp177 * (-_tmp132 * _tmp138 * _tmp142 * _tmp180 - _tmp168 * _tmp179 +
                                     _tmp178 + _tmp181 + _tmp182) -
                          _tmp184 * _tmp194) /
                         std::sqrt(Scalar(std::pow(_tmp184, Scalar(2)) * _tmp193 + 1));
  const Scalar _tmp196 = _tmp114 * _tmp122 * _tmp134;
  const Scalar _tmp197 = _tmp115 * _tmp147;
  const Scalar _tmp198 = _tmp104 * _tmp112 * _tmp134;
  const Scalar _tmp199 = _tmp126 * _tmp155 - _tmp151 * _tmp153 + _tmp183 - _tmp196 * fh1 -
                         _tmp197 * fh1 - _tmp198 * fh1;
  const Scalar _tmp200 = _tmp114 * _tmp123 * _tmp99;
  const Scalar _tmp201 = _tmp105 * _tmp112 * _tmp99;
  const Scalar _tmp202 = _tmp171 + _tmp173 + _tmp200 * fh1 + _tmp201 * fh1;
  const Scalar _tmp203 = Scalar(1.0) / (_tmp202);
  const Scalar _tmp204 = std::asinh(_tmp199 * _tmp203);
  const Scalar _tmp205 = Scalar(9.6622558468725703) * _tmp202;
  const Scalar _tmp206 =
      -_tmp204 * _tmp205 -
      Scalar(125.0) *
          std::sqrt(
              Scalar(Scalar(0.77439999999999998) *
                         std::pow(Scalar(1 - Scalar(0.0090909090909090905) * _tmp89), Scalar(2)) +
                     std::pow(Scalar(-Scalar(0.0080000000000000002) * _tmp86 - 1), Scalar(2))));
  const Scalar _tmp207 = Scalar(0.1034955) * _tmp203;
  const Scalar _tmp208 = _tmp206 * _tmp207;
  const Scalar _tmp209 = Scalar(1.0) * _tmp204;
  const Scalar _tmp210 = _tmp172 + _tmp200 + _tmp201;
  const Scalar _tmp211 = Scalar(9.6622558468725703) * _tmp210;
  const Scalar _tmp212 = std::pow(_tmp202, Scalar(-2));
  const Scalar _tmp213 = _tmp210 * _tmp212;
  const Scalar _tmp214 = (-_tmp199 * _tmp213 + _tmp203 * (_tmp138 * _tmp169 + _tmp153 * _tmp168 -
                                                          _tmp196 - _tmp197 - _tmp198)) /
                         std::sqrt(Scalar(std::pow(_tmp199, Scalar(2)) * _tmp212 + 1));

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
      -_tmp160 * (-Scalar(4.967784) * _tmp167 + Scalar(1.0) * _tmp170 * std::sinh(_tmp159) -
                  (-Scalar(0.1034955) * _tmp161 * _tmp167 +
                   _tmp162 * (-_tmp158 * _tmp165 - _tmp160 * _tmp170)) *
                      std::sinh(_tmp163)) -
      _tmp165 * (Scalar(4.967784) * _tmp130 + std::cosh(_tmp159) - std::cosh(_tmp163));
  _res(2, 0) =
      -_tmp186 * (-Scalar(4.967784) * _tmp194 + Scalar(1.0) * _tmp195 * std::sinh(_tmp190) -
                  (-Scalar(0.1034955) * _tmp187 * _tmp194 +
                   _tmp188 * (-_tmp185 * _tmp192 - _tmp186 * _tmp195)) *
                      std::sinh(_tmp189)) -
      _tmp192 * (Scalar(4.967784) * _tmp177 - std::cosh(_tmp189) + std::cosh(_tmp190));
  _res(3, 0) =
      -_tmp205 * (-Scalar(4.967784) * _tmp213 + Scalar(1.0) * _tmp214 * std::sinh(_tmp209) -
                  (-Scalar(0.1034955) * _tmp206 * _tmp213 +
                   _tmp207 * (-_tmp204 * _tmp211 - _tmp205 * _tmp214)) *
                      std::sinh(_tmp208)) -
      _tmp211 * (Scalar(4.967784) * _tmp203 - std::cosh(_tmp208) + std::cosh(_tmp209));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
