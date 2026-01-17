/*
 * File: BlinkLED.c
 *
 * Code generated for Simulink model 'BlinkLED'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Mar 16 00:19:06 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BlinkLED.h"
#include "rtwtypes.h"
#include "BlinkLED_private.h"

/* Block signals (default storage) */
B_BlinkLED_T BlinkLED_B;

/* Block states (default storage) */
DW_BlinkLED_T BlinkLED_DW;

/* Real-time model */
static RT_MODEL_BlinkLED_T BlinkLED_M_;
RT_MODEL_BlinkLED_T *const BlinkLED_M = &BlinkLED_M_;

/* Model step function */
void BlinkLED_step(void)
{
  GPIO_TypeDef * portNameLoc;
  int32_T c;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  BlinkLED_B.PulseGenerator = (BlinkLED_DW.clockTickCounter <
    BlinkLED_P.PulseGenerator_Duty) && (BlinkLED_DW.clockTickCounter >= 0) ?
    BlinkLED_P.PulseGenerator_Amp : 0.0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (BlinkLED_DW.clockTickCounter >= BlinkLED_P.PulseGenerator_Period - 1.0) {
    BlinkLED_DW.clockTickCounter = 0;
  } else {
    BlinkLED_DW.clockTickCounter++;
  }

  /* MATLABSystem: '<S3>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (BlinkLED_B.PulseGenerator != 0.0) {
    c = 32;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 32U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BlinkLED_M->Timing.taskTime0 =
    ((time_T)(++BlinkLED_M->Timing.clockTick0)) * BlinkLED_M->Timing.stepSize0;
}

/* Model initialize function */
void BlinkLED_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(BlinkLED_M, -1);
  BlinkLED_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  BlinkLED_M->Sizes.checksums[0] = (3387202420U);
  BlinkLED_M->Sizes.checksums[1] = (1846036109U);
  BlinkLED_M->Sizes.checksums[2] = (3664156589U);
  BlinkLED_M->Sizes.checksums[3] = (152546130U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    BlinkLED_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(BlinkLED_M->extModeInfo,
      &BlinkLED_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BlinkLED_M->extModeInfo, BlinkLED_M->Sizes.checksums);
    rteiSetTPtr(BlinkLED_M->extModeInfo, rtmGetTPtr(BlinkLED_M));
  }
}

/* Model terminate function */
void BlinkLED_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
