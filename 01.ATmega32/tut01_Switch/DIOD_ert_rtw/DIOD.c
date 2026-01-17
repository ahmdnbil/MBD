/*
 * File: DIOD.c
 *
 * Code generated for Simulink model 'DIOD'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 13:30:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DIOD.h"
#include "indicatorLampFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU_DIOD_T DIOD_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DIOD_T DIOD_Y;

/* Real-time model */
static RT_MODEL_DIOD_T DIOD_M_;
RT_MODEL_DIOD_T *const DIOD_M = &DIOD_M_;

/* Model step function */
void DIOD_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/indicatorLampFunc' */

  /* Outport: '<Root>/indicatorlAMP_B' incorporates:
   *  Inport: '<Root>/ctrlSW_B'
   */
  DIOD_Y.indicatorlAMP_B = DIOD_indicatorLampFunc(DIOD_U.ctrlSW_B);

  /* End of Outputs for SubSystem: '<Root>/indicatorLampFunc' */
}

/* Model initialize function */
void DIOD_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void DIOD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
