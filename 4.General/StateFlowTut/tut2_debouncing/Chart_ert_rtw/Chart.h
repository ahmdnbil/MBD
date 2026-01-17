/*
 * File: Chart.h
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

#ifndef Chart_h_
#define Chart_h_
#ifndef Chart_COMMON_INCLUDES_
#define Chart_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Chart_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Chart;          /* '<Root>/Chart' */
  uint8_T is_c3_Chart;                 /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T Error;                     /* '<Root>/Error' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T StateNumber;                 /* '<Root>/StateNumber' */
  boolean_T Fault;                     /* '<Root>/Fault' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Chart_initialize(void);
extern void Chart_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('debounceAndHealing/Chart')    - opens subsystem debounceAndHealing/Chart
 * hilite_system('debounceAndHealing/Chart/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'debounceAndHealing'
 * '<S1>'   : 'debounceAndHealing/Chart'
 */
#endif                                 /* Chart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
