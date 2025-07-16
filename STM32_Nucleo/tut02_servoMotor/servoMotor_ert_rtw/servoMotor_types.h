/*
 * File: servoMotor_types.h
 *
 * Code generated for Simulink model 'servoMotor'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Jul 17 00:05:58 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef servoMotor_types_h_
#define servoMotor_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"

/* Custom Type definition for MATLABSystem: '<S3>/PWM Output' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_C3ug75osl8w3UN1OXa3ipB
#define struct_tag_C3ug75osl8w3UN1OXa3ipB

struct tag_C3ug75osl8w3UN1OXa3ipB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_C3ug75osl8w3UN1OXa3ipB */

#ifndef typedef_stm32cube_blocks_PWMOutput_se_T
#define typedef_stm32cube_blocks_PWMOutput_se_T

typedef struct tag_C3ug75osl8w3UN1OXa3ipB stm32cube_blocks_PWMOutput_se_T;

#endif                             /* typedef_stm32cube_blocks_PWMOutput_se_T */

/* Parameters (default storage) */
typedef struct P_servoMotor_T_ P_servoMotor_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_servoMotor_T RT_MODEL_servoMotor_T;

#endif                                 /* servoMotor_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
