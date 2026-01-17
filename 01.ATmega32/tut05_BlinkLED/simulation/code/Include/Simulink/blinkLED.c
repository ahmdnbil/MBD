/*
 * File: blinkLED.c
 *
 * Code generated for Simulink model 'blinkLED'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 23:06:30 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (8-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "blinkLED.h"
#include "blinkLEDFucn.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void blinkLED_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/blinkLEDFucn' */

  /* Outport: '<Root>/firstLamp_B' */
  rtY.firstLamp_B = blinkLEDFucn(&rtDW.blinkLEDFucn_d);

  /* End of Outputs for SubSystem: '<Root>/blinkLEDFucn' */
}

/* Model initialize function */
void blinkLED_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
