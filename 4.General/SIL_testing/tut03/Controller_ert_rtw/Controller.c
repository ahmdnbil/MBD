/*
 * File: Controller.c
 *
 * Code generated for Simulink model 'Controller'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri May 30 02:26:45 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controller.h"

/* External inputs (root inport signals with default storage) */
ExtU_Controller_T Controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Controller_T Controller_Y;

/* Real-time model */
static RT_MODEL_Controller_T Controller_M_;
RT_MODEL_Controller_T *const Controller_M = &Controller_M_;

/* Model step function */
void Controller_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Controller Model' */
  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (Controller_U.In1 > 0.0) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    Controller_Y.Out1 = 20.0;
  } else {
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    Controller_Y.Out1 = -30.0;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Controller Model' */
}

/* Model initialize function */
void Controller_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Controller_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
