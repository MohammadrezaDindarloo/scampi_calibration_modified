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
 * Symbolic function: IK_residual_func_cost3_wrt_fv1_Nl14
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
Eigen::Matrix<Scalar, 4, 1> IkResidualFuncCost3WrtFv1Nl14(
    const Scalar fh1, const Scalar fv1, const sym::Rot3<Scalar>& DeltaRot,
    const Eigen::Matrix<Scalar, 3, 1>& position_vector, const sym::Rot3<Scalar>& Rot_init,
    const Scalar epsilon) {
  // Total ops: 282

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _DeltaRot = DeltaRot.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _Rot_init = Rot_init.Data();

  // Intermediate terms (108)
  const Scalar _tmp0 = Scalar(19.620000000000001) - fv1;
  const Scalar _tmp1 = -_DeltaRot[0] * _Rot_init[1] + _DeltaRot[1] * _Rot_init[0] +
                       _DeltaRot[2] * _Rot_init[3] + _DeltaRot[3] * _Rot_init[2];
  const Scalar _tmp2 = -2 * std::pow(_tmp1, Scalar(2));
  const Scalar _tmp3 = _DeltaRot[0] * _Rot_init[2] + _DeltaRot[1] * _Rot_init[3] -
                       _DeltaRot[2] * _Rot_init[0] + _DeltaRot[3] * _Rot_init[1];
  const Scalar _tmp4 = 1 - 2 * std::pow(_tmp3, Scalar(2));
  const Scalar _tmp5 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp4;
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _DeltaRot[0] * _Rot_init[3] - _DeltaRot[1] * _Rot_init[2] +
                       _DeltaRot[2] * _Rot_init[1] + _DeltaRot[3] * _Rot_init[0];
  const Scalar _tmp8 = 2 * _tmp1;
  const Scalar _tmp9 = _tmp7 * _tmp8;
  const Scalar _tmp10 = -_DeltaRot[0] * _Rot_init[0] - _DeltaRot[1] * _Rot_init[1] -
                        _DeltaRot[2] * _Rot_init[2] + _DeltaRot[3] * _Rot_init[3];
  const Scalar _tmp11 = 2 * _tmp3;
  const Scalar _tmp12 = _tmp10 * _tmp11;
  const Scalar _tmp13 =
      -Scalar(0.010999999999999999) * _tmp12 - Scalar(0.010999999999999999) * _tmp9;
  const Scalar _tmp14 = _tmp11 * _tmp7;
  const Scalar _tmp15 = _tmp10 * _tmp8;
  const Scalar _tmp16 = Scalar(0.20999999999999999) * _tmp14 - Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp17 = _tmp13 + _tmp16;
  const Scalar _tmp18 = _tmp17 + _tmp6;
  const Scalar _tmp19 = position_vector(0, 0) + Scalar(125.0);
  const Scalar _tmp20 = _tmp18 + _tmp19;
  const Scalar _tmp21 = -2 * std::pow(_tmp7, Scalar(2));
  const Scalar _tmp22 = Scalar(0.20999999999999999) * _tmp2 + Scalar(0.20999999999999999) * _tmp21 +
                        Scalar(0.20999999999999999);
  const Scalar _tmp23 = _tmp1 * _tmp11;
  const Scalar _tmp24 = 2 * _tmp10 * _tmp7;
  const Scalar _tmp25 =
      -Scalar(0.010999999999999999) * _tmp23 + Scalar(0.010999999999999999) * _tmp24;
  const Scalar _tmp26 = Scalar(0.20999999999999999) * _tmp14 + Scalar(0.20999999999999999) * _tmp15;
  const Scalar _tmp27 = _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp22 + _tmp27;
  const Scalar _tmp29 = position_vector(1, 0) + Scalar(-110.0);
  const Scalar _tmp30 = _tmp28 + _tmp29;
  const Scalar _tmp31 = std::pow(Scalar(std::pow(_tmp20, Scalar(2)) + std::pow(_tmp30, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp32 = _tmp20 * _tmp31;
  const Scalar _tmp33 = _tmp13 - _tmp16;
  const Scalar _tmp34 = _tmp33 + _tmp5;
  const Scalar _tmp35 = Scalar(1.0) * _tmp34;
  const Scalar _tmp36 = -_tmp22;
  const Scalar _tmp37 = _tmp25 + _tmp26;
  const Scalar _tmp38 = _tmp36 + _tmp37;
  const Scalar _tmp39 = Scalar(1.0) * _tmp38;
  const Scalar _tmp40 = _tmp27 + _tmp36;
  const Scalar _tmp41 = _tmp33 + _tmp6;
  const Scalar _tmp42 = (_tmp35 - _tmp41) / (-_tmp39 + _tmp40);
  const Scalar _tmp43 = _tmp35 + _tmp39 * _tmp42;
  const Scalar _tmp44 = Scalar(0.20999999999999999) * _tmp23 + Scalar(0.20999999999999999) * _tmp24;
  const Scalar _tmp45 =
      -Scalar(0.010999999999999999) * _tmp21 - Scalar(0.010999999999999999) * _tmp4;
  const Scalar _tmp46 = -Scalar(0.20999999999999999) * _tmp12 + Scalar(0.20999999999999999) * _tmp9;
  const Scalar _tmp47 = _tmp45 - _tmp46;
  const Scalar _tmp48 = _tmp44 + _tmp47;
  const Scalar _tmp49 = -_tmp44;
  const Scalar _tmp50 = _tmp45 + _tmp46 + _tmp49;
  const Scalar _tmp51 = position_vector(1, 0) + Scalar(110.0);
  const Scalar _tmp52 = _tmp40 + _tmp51;
  const Scalar _tmp53 = _tmp19 + _tmp41;
  const Scalar _tmp54 = std::pow(Scalar(std::pow(_tmp52, Scalar(2)) + std::pow(_tmp53, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp55 = _tmp53 * _tmp54;
  const Scalar _tmp56 = _tmp47 + _tmp49;
  const Scalar _tmp57 = _tmp50 * _tmp55 - _tmp55 * _tmp56;
  const Scalar _tmp58 = position_vector(0, 0) + Scalar(-125.0);
  const Scalar _tmp59 = _tmp34 + _tmp58;
  const Scalar _tmp60 = Scalar(1.0) / (_tmp59);
  const Scalar _tmp61 = _tmp38 + _tmp51;
  const Scalar _tmp62 = _tmp60 * _tmp61;
  const Scalar _tmp63 = _tmp52 * _tmp54;
  const Scalar _tmp64 = Scalar(1.0) / (_tmp55 * _tmp62 - _tmp63);
  const Scalar _tmp65 = _tmp30 * _tmp31;
  const Scalar _tmp66 = _tmp32 * _tmp62 - _tmp65;
  const Scalar _tmp67 = _tmp64 * _tmp66;
  const Scalar _tmp68 = _tmp50 * _tmp62;
  const Scalar _tmp69 = -_tmp55 * _tmp68 + _tmp56 * _tmp63;
  const Scalar _tmp70 = -_tmp32 * _tmp48 + _tmp32 * _tmp50 -
                        _tmp42 * (-_tmp32 * _tmp68 + _tmp48 * _tmp65 - _tmp67 * _tmp69) -
                        _tmp57 * _tmp67;
  const Scalar _tmp71 = Scalar(1.0) / (_tmp70);
  const Scalar _tmp72 = 0;
  const Scalar _tmp73 = _tmp67 * _tmp72;
  const Scalar _tmp74 =
      std::sqrt(Scalar(std::pow(_tmp59, Scalar(2)) + std::pow(_tmp61, Scalar(2))));
  const Scalar _tmp75 = _tmp60 * _tmp74;
  const Scalar _tmp76 = _tmp75 * (_tmp32 * _tmp72 - _tmp55 * _tmp73);
  const Scalar _tmp77 = Scalar(1.0) / (_tmp74);
  const Scalar _tmp78 = _tmp75 * (_tmp34 * _tmp61 * _tmp77 - _tmp38 * _tmp59 * _tmp77);
  const Scalar _tmp79 = _tmp40 * _tmp55 - _tmp41 * _tmp63 + _tmp55 * _tmp78;
  const Scalar _tmp80 = Scalar(1.0) * _tmp64;
  const Scalar _tmp81 = _tmp42 * _tmp69 * _tmp80 - _tmp57 * _tmp80;
  const Scalar _tmp82 = -_tmp18 * _tmp65 + _tmp28 * _tmp32 + _tmp32 * _tmp78 - _tmp67 * _tmp79;
  const Scalar _tmp83 = _tmp71 * _tmp82;
  const Scalar _tmp84 = Scalar(1.0) / (_tmp82);
  const Scalar _tmp85 = _tmp70 * _tmp84;
  const Scalar _tmp86 = _tmp81 + _tmp85 * (-_tmp79 * _tmp80 - _tmp81 * _tmp83);
  const Scalar _tmp87 = _tmp66 * _tmp71;
  const Scalar _tmp88 = -_tmp86 * _tmp87 + Scalar(1.0);
  const Scalar _tmp89 = _tmp55 * _tmp64;
  const Scalar _tmp90 = _tmp32 * _tmp71;
  const Scalar _tmp91 = _tmp22 + _tmp37;
  const Scalar _tmp92 = _tmp29 + _tmp91;
  const Scalar _tmp93 = _tmp17 + _tmp5;
  const Scalar _tmp94 = _tmp58 + _tmp93;
  const Scalar _tmp95 = std::pow(Scalar(std::pow(_tmp92, Scalar(2)) + std::pow(_tmp94, Scalar(2))),
                                 Scalar(Scalar(-1) / Scalar(2)));
  const Scalar _tmp96 = _tmp92 * _tmp95;
  const Scalar _tmp97 = _tmp96 * fh1;
  const Scalar _tmp98 = Scalar(1.0) * _tmp84;
  const Scalar _tmp99 = _tmp66 * _tmp80 * _tmp84;
  const Scalar _tmp100 = _tmp94 * _tmp95;
  const Scalar _tmp101 = fh1 * (-_tmp100 * _tmp91 + _tmp93 * _tmp96);
  const Scalar _tmp102 = _tmp62 * _tmp64;
  const Scalar _tmp103 = _tmp102 * _tmp57 - _tmp42 * (_tmp102 * _tmp69 + _tmp68) - _tmp50;
  const Scalar _tmp104 = _tmp103 + _tmp85 * (_tmp102 * _tmp79 - _tmp103 * _tmp83 - _tmp78);
  const Scalar _tmp105 = -_tmp104 * _tmp87 - _tmp62;
  const Scalar _tmp106 = _tmp100 * fh1;
  const Scalar _tmp107 = _tmp0 * _tmp72;

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = 0;
  _res(1, 0) =
      -_tmp76 * std::exp(_tmp0 * _tmp76 + _tmp101 * _tmp75 * (_tmp32 * _tmp98 - _tmp55 * _tmp99) +
                         _tmp106 * _tmp75 * (_tmp104 * _tmp90 + _tmp105 * _tmp89 + Scalar(1.0)) +
                         _tmp75 * _tmp97 * (_tmp86 * _tmp90 + _tmp88 * _tmp89));
  _res(2, 0) = -_tmp73 * std::exp(_tmp101 * _tmp99 - _tmp105 * _tmp106 * _tmp64 + _tmp107 * _tmp67 -
                                  _tmp64 * _tmp88 * _tmp97);
  _res(3, 0) = _tmp72 * std::exp(-_tmp101 * _tmp98 - _tmp104 * _tmp106 * _tmp71 - _tmp107 -
                                 _tmp71 * _tmp86 * _tmp97);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym