/*
 * File: DLCI.c
 *
 * Code generated for Simulink model 'DLCI'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 14:25:23 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DLCI.h"
#include "lampAlgo.h"

/* External inputs (root inport signals with default storage) */
ExtU_DLCI_T DLCI_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DLCI_T DLCI_Y;

/* Real-time model */
static RT_MODEL_DLCI_T DLCI_M_;
RT_MODEL_DLCI_T *const DLCI_M = &DLCI_M_;

/* Model step function */
void DLCI_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/lampAlgo' */

  /* Inport: '<Root>/rightSW_B' incorporates:
   *  Inport: '<Root>/leftSW_B'
   *  Outport: '<Root>/leftLamp_B'
   *  Outport: '<Root>/rightLamp_B'
   */
  DLCI_lampAlgo(DLCI_U.rightSW_B, DLCI_U.leftSW_B, &DLCI_Y.rightLamp_B,
                &DLCI_Y.leftLamp_B);

  /* End of Outputs for SubSystem: '<Root>/lampAlgo' */
}

/* Model initialize function */
void DLCI_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void DLCI_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
