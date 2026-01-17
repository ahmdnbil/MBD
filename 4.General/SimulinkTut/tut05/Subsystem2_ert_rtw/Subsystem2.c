/*
 * File: Subsystem2.c
 *
 * Code generated for Simulink model 'Subsystem2'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Aug  4 00:15:46 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Subsystem2.h"
#include "rtwtypes.h"
#include "Subsystem2_private.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Output and update for atomic system: '<Root>/Subsystem2' */
boolean_T Subsystem2_b(DW_Subsystem2 *localDW)
{
  int32_T rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
  rtb_PulseGenerator = ((localDW->clockTickCounter < 1000) &&
                        (localDW->clockTickCounter >= 0));
  if (localDW->clockTickCounter >= 1999) {
    localDW->clockTickCounter = 0;
  } else {
    localDW->clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  return rtb_PulseGenerator != 0;
}

/* Model step function */
void Subsystem2_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem2' */

  /* Outport: '<Root>/Out1' */
  rtY.Out1 = Subsystem2_b(&rtDW.Subsystem2_b4);

  /* End of Outputs for SubSystem: '<Root>/Subsystem2' */
}

/* Model initialize function */
void Subsystem2_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
