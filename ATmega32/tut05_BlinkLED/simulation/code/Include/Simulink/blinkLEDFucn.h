/*
 * File: blinkLEDFucn.h
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

#ifndef blinkLEDFucn_h_
#define blinkLEDFucn_h_
#ifndef blinkLED_COMMON_INCLUDES_
#define blinkLED_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* blinkLED_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>/blinkLEDFucn' */
typedef struct {
  int32_T clockTickCounter;            /* '<S1>/Pulse Generator' */
} DW_blinkLEDFucn;

extern boolean_T blinkLEDFucn(DW_blinkLEDFucn *localDW);

#endif                                 /* blinkLEDFucn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
