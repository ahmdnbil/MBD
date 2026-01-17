/*
 * File: PCCI.h
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

#ifndef PCCI_h_
#define PCCI_h_
#ifndef PCCI_COMMON_INCLUDES_
#define PCCI_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PCCI_COMMON_INCLUDES_ */

#include "PCCI_types.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T ADCreading;                 /* '<Root>/ADCreading' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T LampLogic;                 /* '<Root>/LampLogic' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void PCCI_initialize(void);
extern void PCCI_step(void);

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
 * '<Root>' : 'PCCI'
 * '<S1>'   : 'PCCI/lampLogicFunc'
 * '<S2>'   : 'PCCI/lampLogicFunc/If Action Subsystem'
 * '<S3>'   : 'PCCI/lampLogicFunc/If Action Subsystem1'
 */
#endif                                 /* PCCI_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
