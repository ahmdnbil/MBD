/*
 * File: Subsystem3.c
 *
 * Code generated for Simulink model 'Subsystem3'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Aug  3 23:59:50 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Subsystem3.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Subsystem3_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem3' */
  /* Outport: '<Root>/output' incorporates:
   *  Inport: '<Root>/input1'
   *  Inport: '<Root>/input2'
   *  Sum: '<S1>/Add'
   */
  rtY.output = (uint8_T)(rtU.input1 + rtU.input2);

  /* End of Outputs for SubSystem: '<Root>/Subsystem3' */
}

/* Model initialize function */
void Subsystem3_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
