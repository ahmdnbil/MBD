/*
 * File: Chart.c
 *
 * Code generated for Simulink model 'Chart'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Apr 12 13:01:01 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Chart.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define IN_Active                      ((uint8_T)1U)
#define IN_Debounce                    ((uint8_T)2U)
#define IN_Idle                        ((uint8_T)3U)

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Chart_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Error'
   */
  if (rtDW.temporalCounter_i1 < 31U) {
    rtDW.temporalCounter_i1++;
  }

  if (rtDW.is_active_c3_Chart == 0U) {
    rtDW.is_active_c3_Chart = 1U;
    rtDW.is_c3_Chart = IN_Idle;

    /* Outport: '<Root>/StateNumber' */
    rtY.StateNumber = 1U;

    /* Outport: '<Root>/Fault' */
    rtY.Fault = false;
  } else {
    switch (rtDW.is_c3_Chart) {
     case IN_Active:
      /* Outport: '<Root>/StateNumber' */
      rtY.StateNumber = 3U;
      if (rtDW.temporalCounter_i1 >= 20) {
        rtDW.is_c3_Chart = IN_Idle;

        /* Outport: '<Root>/StateNumber' */
        rtY.StateNumber = 1U;

        /* Outport: '<Root>/Fault' */
        rtY.Fault = false;
      }
      break;

     case IN_Debounce:
      /* Outport: '<Root>/StateNumber' */
      rtY.StateNumber = 2U;
      if (rtDW.temporalCounter_i1 >= 10) {
        rtDW.temporalCounter_i1 = 0U;
        rtDW.is_c3_Chart = IN_Active;

        /* Outport: '<Root>/StateNumber' */
        rtY.StateNumber = 3U;

        /* Outport: '<Root>/Fault' */
        rtY.Fault = true;
      } else if (!rtU.Error) {
        rtDW.is_c3_Chart = IN_Idle;

        /* Outport: '<Root>/StateNumber' */
        rtY.StateNumber = 1U;

        /* Outport: '<Root>/Fault' */
        rtY.Fault = false;
      }
      break;

     default:
      /* Outport: '<Root>/StateNumber' */
      /* case IN_Idle: */
      rtY.StateNumber = 1U;
      if (rtU.Error) {
        rtDW.temporalCounter_i1 = 0U;
        rtDW.is_c3_Chart = IN_Debounce;

        /* Outport: '<Root>/StateNumber' */
        rtY.StateNumber = 2U;

        /* Outport: '<Root>/Fault' */
        rtY.Fault = false;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Chart_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
