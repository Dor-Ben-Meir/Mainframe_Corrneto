//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Corneto_flight_program_control_types.h
//
// Code generated for Simulink model 'Corneto_flight_program_control'.
//
// Model version                  : 1.7
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Tue Jun 29 11:53:12 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Corneto_flight_program_control_types_h_
#define RTW_HEADER_Corneto_flight_program_control_types_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include <uORB/topics/mavlink_log.h>
#include <uORB/topics/sensor_accel.h>
#include <uORB/topics/sensor_gyro.h>
#include <uORB/topics/debug_vect.h>
#include <uORB/topics/vehicle_gps_position.h>
#include <uORB/topics/vehicle_local_position.h>
#include <uORB/topics/vehicle_odometry.h>

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_struct_KbuHZdFirwgp0Ajtitq2dC_
#define DEFINED_TYPEDEF_FOR_struct_KbuHZdFirwgp0Ajtitq2dC_

struct struct_KbuHZdFirwgp0Ajtitq2dC
{
  real_T Ax_launch_accel_threshold_mps2;
  real_T Ax_launch_timer_threshold_sec;
  real_T Ax_MECO_timer_threshold_sec;
  real_T h_apogee_timer_threshold_sec;
  real_T apogee_recovery_timer_threshold_sec;
  real_T MECO_timeout_TOF_sec;
  real_T apogee_timeout_TOF_sec;
  real_T recovery_timeout_TOF_sec;
  real_T disable_recovery_manual;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_C1ErKKHKLGW5ZVBcCVCLBB_
#define DEFINED_TYPEDEF_FOR_struct_C1ErKKHKLGW5ZVBcCVCLBB_

struct struct_C1ErKKHKLGW5ZVBcCVCLBB
{
  real_T Kp_p_vec[30];
  real_T Kp_phi_vec[30];
  real_T Ki_phi_vec[30];
  real_T h_bkpts_m[3];
  real_T V_bkpts_mps[10];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_M8m2YJbQvwnCzbmWZGKwQE_
#define DEFINED_TYPEDEF_FOR_struct_M8m2YJbQvwnCzbmWZGKwQE_

struct struct_M8m2YJbQvwnCzbmWZGKwQE
{
  real_T Kp_r_vec[30];
  real_T Kp_ay_vec[30];
  real_T Ki_ay_vec[30];
  real_T h_bkpts_m[3];
  real_T V_bkpts_mps[10];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_p1tI4g4iafwNR5QbuQnvXC_
#define DEFINED_TYPEDEF_FOR_struct_p1tI4g4iafwNR5QbuQnvXC_

struct struct_p1tI4g4iafwNR5QbuQnvXC
{
  real_T Kp_q_vec[30];
  real_T Kp_az_vec[30];
  real_T Ki_az_vec[30];
  real_T h_bkpts_m[3];
  real_T V_bkpts_mps[10];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_FuH2ngUSrLPtrZS1Hkt11F_
#define DEFINED_TYPEDEF_FOR_struct_FuH2ngUSrLPtrZS1Hkt11F_

struct struct_FuH2ngUSrLPtrZS1Hkt11F
{
  struct_C1ErKKHKLGW5ZVBcCVCLBB Phi;
  struct_M8m2YJbQvwnCzbmWZGKwQE Ay;
  struct_p1tI4g4iafwNR5QbuQnvXC Az;
  real_T fin_def_max_rad;
  real_T fin_def_min_rad;
  real_T dela_cmd_bias_rad;
  real_T dele_cmd_bias_rad;
  real_T delr_cmd_bias_rad;
  real_T fin1_cmd_bias_rad;
  real_T fin2_cmd_bias_rad;
  real_T fin3_cmd_bias_rad;
  real_T fin4_cmd_bias_rad;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_utAnIhe7m7cRGcmWlKaoJH_
#define DEFINED_TYPEDEF_FOR_struct_utAnIhe7m7cRGcmWlKaoJH_

struct struct_utAnIhe7m7cRGcmWlKaoJH
{
  real_T euler[3];
  real_T Tr4r3[12];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_20D8cUUeS0Xpo6TMettltD_
#define DEFINED_TYPEDEF_FOR_struct_20D8cUUeS0Xpo6TMettltD_

struct struct_20D8cUUeS0Xpo6TMettltD
{
  real_T FCC;
  real_T Gimbal;
  real_T FlightGear;
  real_T MeasureServos;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_wt9OAyFSpMZjzxD2JWHKO_
#define DEFINED_TYPEDEF_FOR_struct_wt9OAyFSpMZjzxD2JWHKO_

struct struct_wt9OAyFSpMZjzxD2JWHKO
{
  struct_utAnIhe7m7cRGcmWlKaoJH FDM;
  struct_20D8cUUeS0Xpo6TMettltD VSS;
};

#endif

#ifndef struct_e_px4_internal_block_SampleTi_T
#define struct_e_px4_internal_block_SampleTi_T

struct e_px4_internal_block_SampleTi_T
{
  int32_T __dummy;
};

#endif                                // struct_e_px4_internal_block_SampleTi_T

#ifndef struct_px4_internal_block_Subscriber_T
#define struct_px4_internal_block_Subscriber_T

struct px4_internal_block_Subscriber_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_px4_internal_block_SampleTi_T SampleTimeHandler;
  pollfd_t eventStructObj;
  orb_metadata_t * orbMetadataObj;
};

#endif                                // struct_px4_internal_block_Subscriber_T

#ifndef struct_px4_internal_block_Publisher__T
#define struct_px4_internal_block_Publisher__T

struct px4_internal_block_Publisher__T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  orb_advert_t orbAdvertiseObj;
  orb_metadata_t * orbMetadataObj;
};

#endif                                // struct_px4_internal_block_Publisher__T

#ifndef struct_g_dsp_private_SlidingWindowAv_T
#define struct_g_dsp_private_SlidingWindowAv_T

struct g_dsp_private_SlidingWindowAv_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[9];
  real_T pCumRevIndex;
};

#endif                                // struct_g_dsp_private_SlidingWindowAv_T

#ifndef struct_px4_internal_block_PWM_Cornet_T
#define struct_px4_internal_block_PWM_Cornet_T

struct px4_internal_block_PWM_Cornet_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int pwmDevHandler;
  const char * pwmDevObj;
  unsigned int servoCount;
  int channelMask;
  boolean_T isMain;
  uint16_T errorStatus;
  orb_advert_t armAdvertiseObj;
  orb_advert_t actuatorAdvertiseObj;
  boolean_T isArmed;
};

#endif                                // struct_px4_internal_block_PWM_Cornet_T

// Custom Type definition for MATLABSystem: '<Root>/Read Parameter2'
#include "MW_Parameter.h"
#ifndef struct_px4_internal_block_ParameterU_T
#define struct_px4_internal_block_ParameterU_T

struct px4_internal_block_ParameterU_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
  MW_Param_Handle MW_PARAMHANDLE;
};

#endif                                // struct_px4_internal_block_ParameterU_T

#ifndef struct_cell_wrap_Corneto_flight_prog_T
#define struct_cell_wrap_Corneto_flight_prog_T

struct cell_wrap_Corneto_flight_prog_T
{
  uint32_T f1[8];
};

#endif                                // struct_cell_wrap_Corneto_flight_prog_T

#ifndef struct_dsp_simulink_MovingAverage_Co_T
#define struct_dsp_simulink_MovingAverage_Co_T

struct dsp_simulink_MovingAverage_Co_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_Corneto_flight_prog_T inputVarSize;
  g_dsp_private_SlidingWindowAv_T *pStatistic;
  int32_T NumChannels;
  g_dsp_private_SlidingWindowAv_T _pobj0;
};

#endif                                // struct_dsp_simulink_MovingAverage_Co_T

// Parameters (default storage)
typedef struct P_Corneto_flight_program_cont_T_ P_Corneto_flight_program_cont_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Corneto_flight_progra_T RT_MODEL_Corneto_flight_progr_T;

#endif                    // RTW_HEADER_Corneto_flight_program_control_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
