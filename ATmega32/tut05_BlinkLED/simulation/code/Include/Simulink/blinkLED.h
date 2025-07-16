/*
 * File: blinkLED.h
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

#ifndef blinkLED_h_
#define blinkLED_h_
#ifndef blinkLED_COMMON_INCLUDES_
#define blinkLED_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* blinkLED_COMMON_INCLUDES_ */

#include "blinkLED_types.h"
#include "blinkLEDFucn.h"

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  DW_blinkLEDFucn blinkLEDFucn_d;      /* '<Root>/blinkLEDFucn' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T firstLamp_B;               /* '<Root>/firstLamp_B' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void blinkLED_initialize(void);
extern void blinkLED_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'blinkLED'
 * '<S1>'   : 'blinkLED/blinkLEDFucn'
 */
#endif                                 /* blinkLED_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
