/*
 * File: tut04.c
 *
 * Code generated for Simulink model 'tut04'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Aug  2 22:36:00 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "tut04.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void tut04_step(void)
{
  /* Outport: '<Root>/x' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/y'
   *  Sum: '<S1>/Subtract'
   */
  rtY.x = 2.0 * rtU.y - 1.0;
}

/* Model initialize function */
void tut04_initialize(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
  /* Outport: '<Root>/x' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  rtY.x = 0.0;

  /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
