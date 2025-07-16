/*
 * File: LDR.c
 *
 * Code generated for Simulink model 'LDR'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 18:34:20 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (8-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "LDR.h"
#include "lampLogicFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void LDR_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/lampLogicFunc' */

  /* Inport: '<Root>/ADCreading_u16' incorporates:
   *  Outport: '<Root>/firstLamp_B'
   *  Outport: '<Root>/secondLamp_B'
   *  Outport: '<Root>/thirdLamp_B'
   */
  lampLogicFunc(rtU.ADCreading_u16, &rtY.firstLamp_B, &rtY.secondLamp_B,
                &rtY.thirdLamp_B);

  /* End of Outputs for SubSystem: '<Root>/lampLogicFunc' */
}

/* Model initialize function */
void LDR_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
