/*
 * File: blinkLEDFucn.c
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

#include "blinkLEDFucn.h"
#include "rtwtypes.h"

/* Output and update for atomic system: '<Root>/blinkLEDFucn' */
boolean_T blinkLEDFucn(DW_blinkLEDFucn *localDW)
{
  int16_T rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
  rtb_PulseGenerator = ((localDW->clockTickCounter < 100L) &&
                        (localDW->clockTickCounter >= 0L));
  if (localDW->clockTickCounter >= 199L) {
    localDW->clockTickCounter = 0L;
  } else {
    localDW->clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  return rtb_PulseGenerator != 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
