/*
 * File: PCCI.c
 *
 * Code generated for Simulink model 'PCCI'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 15:41:05 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (8-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "PCCI.h"
#include "lampLogicFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void PCCI_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/lampLogicFunc' */

  /* Outport: '<Root>/LampLogic' incorporates:
   *  Inport: '<Root>/ADCreading'
   */
  lampLogicFunc(rtU.ADCreading, &rtY.LampLogic);

  /* End of Outputs for SubSystem: '<Root>/lampLogicFunc' */
}

/* Model initialize function */
void PCCI_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
