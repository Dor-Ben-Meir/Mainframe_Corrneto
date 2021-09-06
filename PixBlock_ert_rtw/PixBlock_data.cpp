//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PixBlock_data.cpp
//
// Code generated for Simulink model 'PixBlock'.
//
// Model version                  : 4.14
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sat Apr 10 12:35:07 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "PixBlock.h"
#include "PixBlock_private.h"

// Block parameters (default storage)
P_PixBlock_T PixBlock_P = {
  // Expression: 1
  //  Referenced by: '<S1>/100 Hz1'

  1.0,

  // Computed Parameter: u00Hz1_Period
  //  Referenced by: '<S1>/100 Hz1'

  10.0,

  // Computed Parameter: u00Hz1_Duty
  //  Referenced by: '<S1>/100 Hz1'

  5.0,

  // Expression: 0
  //  Referenced by: '<S1>/100 Hz1'

  0.0,

  // Computed Parameter: One9_Value
  //  Referenced by: '<S16>/One9'

  -1.0F,

  // Computed Parameter: One_Value
  //  Referenced by: '<S16>/One'

  -1.0F,

  // Computed Parameter: One1_Value
  //  Referenced by: '<S16>/One1'

  -1.0F,

  // Computed Parameter: One2_Value
  //  Referenced by: '<S16>/One2'

  -1.0F,

  // Computed Parameter: One3_Value
  //  Referenced by: '<S16>/One3'

  -1.0F,

  // Computed Parameter: One4_Value
  //  Referenced by: '<S16>/One4'

  -1.0F,

  // Computed Parameter: One5_Value
  //  Referenced by: '<S16>/One5'

  -1.0F,

  // Computed Parameter: One6_Value
  //  Referenced by: '<S16>/One6'

  -1.0F,

  // Computed Parameter: One7_Value
  //  Referenced by: '<S16>/One7'

  -1.0F,

  // Computed Parameter: One8_Value
  //  Referenced by: '<S16>/One8'

  -1.0F,

  // Computed Parameter: SerialOut_Y0
  //  Referenced by: '<S2>/Serial Out'

  0.0F,

  // Expression: HIL_Data.FDM.Tr4r3
  //  Referenced by: '<S15>/Constant7'

  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F, 1.0F, 1.0F, -1.0F },

  // Computed Parameter: Switch_6_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Gain_Gain
  //  Referenced by: '<S3>/Gain'

  -1.0F,

  // Computed Parameter: Switch_1_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Switch_2_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Switch_3_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: uDLookupTable3_tableData
  //  Referenced by: '<S13>/1-D Lookup Table3'

  { 0.30841F, 0.24701F, 0.22655F, 0.067F, 0.072F, 0.075925F, 0.028F, 0.02989F,
    0.03232F, 0.0165F, 0.0174F, 0.01828F, 0.0113F, 0.0118F, 0.01216F, 0.0085F,
    0.008722F, 0.009118F, 0.0068F, 0.007003F, 0.00721F, 0.00568F, 0.005806F,
    0.005986F, 0.00486F, 0.004951F, 0.005104F, 0.00422F, 0.004303F, 0.004456F },

  // Computed Parameter: uDLookupTable3_bp01Data
  //  Referenced by: '<S13>/1-D Lookup Table3'

  { 10.0F, 1000.0F, 2000.0F },

  // Computed Parameter: uDLookupTable3_bp02Data
  //  Referenced by: '<S13>/1-D Lookup Table3'

  { 20.0F, 50.0F, 80.0F, 110.0F, 140.0F, 170.0F, 200.0F, 230.0F, 260.0F, 290.0F
  },

  // Computed Parameter: uDLookupTable5_tableData
  //  Referenced by: '<S13>/1-D Lookup Table5'

  { 3.358F, 2.989F, 3.079F, 3.817F, 3.691F, 3.574F, 4.456F, 4.4F, 4.096F, 4.609F,
    4.609F, 4.609F, 5.14F, 4.951F, 5.014F, 5.32F, 5.32F, 5.284F, 5.626F, 5.437F,
    5.374F, 5.716F, 5.68F, 5.437F, 5.869F, 5.833F, 5.527F, 6.14F, 6.022F, 5.473F
  },

  // Computed Parameter: uDLookupTable5_bp01Data
  //  Referenced by: '<S13>/1-D Lookup Table5'

  { 10.0F, 1000.0F, 2000.0F },

  // Computed Parameter: uDLookupTable5_bp02Data
  //  Referenced by: '<S13>/1-D Lookup Table5'

  { 20.0F, 50.0F, 80.0F, 110.0F, 140.0F, 170.0F, 200.0F, 230.0F, 260.0F, 290.0F
  },

  // Computed Parameter: Switch_10_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Delay_InitialCondition
  //  Referenced by: '<S14>/Delay'

  0.0F,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S12>/Constant'

  0.0F,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S12>/Discrete-Time Integrator'

  0.001F,

  // Computed Parameter: DiscreteTransferFcn_NumCoef
  //  Referenced by: '<S3>/Discrete Transfer Fcn'

  { 0.385869533F, 0.385869533F },

  // Computed Parameter: DiscreteTransferFcn_DenCoef
  //  Referenced by: '<S3>/Discrete Transfer Fcn'

  { 1.0F, -0.228260905F },

  // Computed Parameter: DiscreteTransferFcn_InitialStates
  //  Referenced by: '<S3>/Discrete Transfer Fcn'

  0.0F,

  // Computed Parameter: Switch_7_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Zero_Value
  //  Referenced by: '<S3>/Zero'

  0.0F,

  // Computed Parameter: Switch_4_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Switch_5_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Switch_8_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Switch_9_Threshold
  //  Referenced by: '<S8>/Switch'

  0.0F,

  // Computed Parameter: Zero_Value_f
  //  Referenced by: '<S2>/Zero'

  0.0F,

  // Computed Parameter: Gain_Gain_j
  //  Referenced by: '<S18>/Gain'

  57.2957802F,

  // Computed Parameter: Saturation_UpperSat
  //  Referenced by: '<S10>/Saturation'

  20.0F,

  // Computed Parameter: Saturation_LowerSat
  //  Referenced by: '<S10>/Saturation'

  -20.0F,

  // Computed Parameter: Gain_Gain_o
  //  Referenced by: '<S10>/Gain'

  10.9890108F,

  // Computed Parameter: One_Value_a
  //  Referenced by: '<S10>/One'

  1500.0F,

  // Computed Parameter: Delay_InitialCondition_g
  //  Referenced by: '<S17>/Delay'

  0.0F,

  // Computed Parameter: Gain_Gain_os
  //  Referenced by: '<S19>/Gain'

  57.2957802F,

  // Computed Parameter: Saturation1_UpperSat
  //  Referenced by: '<S10>/Saturation1'

  20.0F,

  // Computed Parameter: Saturation1_LowerSat
  //  Referenced by: '<S10>/Saturation1'

  -20.0F,

  // Computed Parameter: Gain1_Gain
  //  Referenced by: '<S10>/Gain1'

  10.9890108F,

  // Computed Parameter: One1_Value_a
  //  Referenced by: '<S10>/One1'

  1500.0F,

  // Computed Parameter: Gain_Gain_p
  //  Referenced by: '<S20>/Gain'

  57.2957802F,

  // Computed Parameter: Saturation2_UpperSat
  //  Referenced by: '<S10>/Saturation2'

  20.0F,

  // Computed Parameter: Saturation2_LowerSat
  //  Referenced by: '<S10>/Saturation2'

  -20.0F,

  // Computed Parameter: Gain2_Gain
  //  Referenced by: '<S10>/Gain2'

  10.9890108F,

  // Computed Parameter: One2_Value_k
  //  Referenced by: '<S10>/One2'

  1500.0F,

  // Computed Parameter: Gain_Gain_g
  //  Referenced by: '<S21>/Gain'

  57.2957802F,

  // Computed Parameter: Saturation3_UpperSat
  //  Referenced by: '<S10>/Saturation3'

  20.0F,

  // Computed Parameter: Saturation3_LowerSat
  //  Referenced by: '<S10>/Saturation3'

  -20.0F,

  // Computed Parameter: Gain3_Gain
  //  Referenced by: '<S10>/Gain3'

  10.9890108F,

  // Computed Parameter: One3_Value_o
  //  Referenced by: '<S10>/One3'

  1500.0F,

  // Computed Parameter: uDLookupTable4_tableData
  //  Referenced by: '<S13>/1-D Lookup Table4'

  { 0.7945F, 1.279F, 1.126F, 1.369F, 1.432F, 1.432F, 1.549F, 1.792F, 1.675F,
    2.1493F, 1.981F, 1.765F, 2.1493F, 2.071F, 1.855F, 2.251F, 2.134F, 2.0F,
    2.314F, 2.224F, 2.224F, 2.35F, 2.287F, 2.458F, 2.35F, 2.3F, 2.62F, 2.35F,
    2.404F, 2.836F },

  // Computed Parameter: uDLookupTable4_bp01Data
  //  Referenced by: '<S13>/1-D Lookup Table4'

  { 10.0F, 1000.0F, 2000.0F },

  // Computed Parameter: uDLookupTable4_bp02Data
  //  Referenced by: '<S13>/1-D Lookup Table4'

  { 20.0F, 50.0F, 80.0F, 110.0F, 140.0F, 170.0F, 200.0F, 230.0F, 260.0F, 290.0F
  },

  // Computed Parameter: uDLookupTable3_maxIndex
  //  Referenced by: '<S13>/1-D Lookup Table3'

  { 2U, 9U },

  // Computed Parameter: uDLookupTable5_maxIndex
  //  Referenced by: '<S13>/1-D Lookup Table5'

  { 2U, 9U },

  // Computed Parameter: uDLookupTable4_maxIndex
  //  Referenced by: '<S13>/1-D Lookup Table4'

  { 2U, 9U },

  // Computed Parameter: One4_Value_p
  //  Referenced by: '<S10>/One4'

  0,

  // Computed Parameter: ManualSwitch_CurrentSetting
  //  Referenced by: '<S3>/Manual Switch'

  1U
};

//
// File trailer for generated code.
//
// [EOF]
//
