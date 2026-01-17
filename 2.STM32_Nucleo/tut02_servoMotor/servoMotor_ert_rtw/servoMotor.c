/*
 * File: servoMotor.c
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

#include "servoMotor.h"
#include "servoMotor_types.h"
#include "servoMotor_private.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include <math.h>

/* Block states (default storage) */
DW_servoMotor_T servoMotor_DW;

/* Real-time model */
static RT_MODEL_servoMotor_T servoMotor_M_;
RT_MODEL_servoMotor_T *const servoMotor_M = &servoMotor_M_;

/* Forward declaration for local functions */
static void servoMotor_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_se_T *obj);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void servoMotor_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_se_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S3>/PWM Output' */
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S3>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S3>/PWM Output' */
    enableCounter(obj->TimerHandle, false);
  }
}

/* Model step function */
void servoMotor_step(void)
{
  real_T tmp;
  uint32_T C1_DC;

  /* MATLABSystem: '<S3>/PWM Output' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  tmp = rt_roundd_snf(servoMotor_P.Constant3_Value);
  if (tmp < 4.294967296E+9) {
    if (tmp >= 0.0) {
      C1_DC = (uint32_T)tmp;
    } else {
      C1_DC = 0U;
    }
  } else {
    C1_DC = MAX_uint32_T;
  }

  C1_DC = checkFrequencyAndDutyCycleLimits(servoMotor_DW.obj.TimerHandle, C1_DC);
  setDutyCycleChannel1(servoMotor_DW.obj.TimerHandle, C1_DC);

  /* End of MATLABSystem: '<S3>/PWM Output' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  servoMotor_M->Timing.taskTime0 =
    ((time_T)(++servoMotor_M->Timing.clockTick0)) *
    servoMotor_M->Timing.stepSize0;
}

/* Model initialize function */
void servoMotor_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(servoMotor_M, -1);
  servoMotor_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  servoMotor_M->Sizes.checksums[0] = (3067117605U);
  servoMotor_M->Sizes.checksums[1] = (1380875614U);
  servoMotor_M->Sizes.checksums[2] = (2641856983U);
  servoMotor_M->Sizes.checksums[3] = (81810468U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    servoMotor_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(servoMotor_M->extModeInfo,
      &servoMotor_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(servoMotor_M->extModeInfo, servoMotor_M->Sizes.checksums);
    rteiSetTPtr(servoMotor_M->extModeInfo, rtmGetTPtr(servoMotor_M));
  }

  /* Start for MATLABSystem: '<S3>/PWM Output' */
  servoMotor_DW.obj.matlabCodegenIsDeleted = false;
  servoMotor_DW.obj.isSetupComplete = false;
  servoMotor_DW.obj.isInitialized = 1;
  servoMotor_PWMOutput_setupImpl(&servoMotor_DW.obj);
  servoMotor_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void servoMotor_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/PWM Output' */
  if (!servoMotor_DW.obj.matlabCodegenIsDeleted) {
    servoMotor_DW.obj.matlabCodegenIsDeleted = true;
    if ((servoMotor_DW.obj.isInitialized == 1) &&
        servoMotor_DW.obj.isSetupComplete) {
      disableCounter(servoMotor_DW.obj.TimerHandle);
      disableTimerInterrupts(servoMotor_DW.obj.TimerHandle, 0);
      disableTimerChannel1(servoMotor_DW.obj.TimerHandle, ENABLE_CH);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/PWM Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
