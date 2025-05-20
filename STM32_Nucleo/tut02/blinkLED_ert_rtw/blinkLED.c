/*
 * File: blinkLED.c
 *
 * Code generated for Simulink model 'blinkLED'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Apr 22 14:37:34 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "blinkLED.h"
#include "rtwtypes.h"
#include "blinkLED_private.h"

/* Block states (default storage) */
DW_blinkLED_T blinkLED_DW;

/* Real-time model */
static RT_MODEL_blinkLED_T blinkLED_M_;
RT_MODEL_blinkLED_T *const blinkLED_M = &blinkLED_M_;

/* Model step function */
void blinkLED_step(void)
{
  GPIO_TypeDef * portNameLoc;
  real_T rtb_PulseGenerator;
  int32_T c;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (blinkLED_DW.clockTickCounter <
                        blinkLED_P.PulseGenerator_Duty) &&
    (blinkLED_DW.clockTickCounter >= 0) ? blinkLED_P.PulseGenerator_Amp : 0.0;
  if (blinkLED_DW.clockTickCounter >= blinkLED_P.PulseGenerator_Period - 1.0) {
    blinkLED_DW.clockTickCounter = 0;
  } else {
    blinkLED_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<S3>/Digital Port Write' */
  portNameLoc = GPIOC;
  if (rtb_PulseGenerator != 0.0) {
    c = 1024;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 1024U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  blinkLED_M->Timing.taskTime0 =
    ((time_T)(++blinkLED_M->Timing.clockTick0)) * blinkLED_M->Timing.stepSize0;
}

/* Model initialize function */
void blinkLED_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(blinkLED_M, -1);
  blinkLED_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  blinkLED_M->Sizes.checksums[0] = (323373445U);
  blinkLED_M->Sizes.checksums[1] = (82391939U);
  blinkLED_M->Sizes.checksums[2] = (713297047U);
  blinkLED_M->Sizes.checksums[3] = (1105770564U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    blinkLED_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(blinkLED_M->extModeInfo,
      &blinkLED_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(blinkLED_M->extModeInfo, blinkLED_M->Sizes.checksums);
    rteiSetTPtr(blinkLED_M->extModeInfo, rtmGetTPtr(blinkLED_M));
  }
}

/* Model terminate function */
void blinkLED_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
