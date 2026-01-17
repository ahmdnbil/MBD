/*
 * File: LDR.h
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

#ifndef LDR_h_
#define LDR_h_
#ifndef LDR_COMMON_INCLUDES_
#define LDR_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LDR_COMMON_INCLUDES_ */

#include "LDR_types.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T ADCreading_u16;             /* '<Root>/ADCreading_u16' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T firstLamp_B;               /* '<Root>/firstLamp_B' */
  boolean_T secondLamp_B;              /* '<Root>/secondLamp_B' */
  boolean_T thirdLamp_B;               /* '<Root>/thirdLamp_B' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void LDR_initialize(void);
extern void LDR_step(void);

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
 * '<Root>' : 'LDR'
 * '<S1>'   : 'LDR/lampLogicFunc'
 * '<S2>'   : 'LDR/lampLogicFunc/Truth Table'
 */
#endif                                 /* LDR_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
