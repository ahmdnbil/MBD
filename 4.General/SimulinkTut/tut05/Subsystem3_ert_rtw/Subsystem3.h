/*
 * File: Subsystem3.h
 *
 * Code generated for Simulink model 'Subsystem3'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Aug  3 23:59:50 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Subsystem3_h_
#define Subsystem3_h_
#ifndef Subsystem3_COMMON_INCLUDES_
#define Subsystem3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* Subsystem3_COMMON_INCLUDES_ */

#include "Subsystem3_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T input1;                      /* '<Root>/input1' */
  uint8_T input2;                      /* '<Root>/input2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T output;                      /* '<Root>/output' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Subsystem3_initialize(void);
extern void Subsystem3_step(void);

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
 * hilite_system('multirate_control_model/Subsystem3')    - opens subsystem multirate_control_model/Subsystem3
 * hilite_system('multirate_control_model/Subsystem3/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'multirate_control_model'
 * '<S1>'   : 'multirate_control_model/Subsystem3'
 */
#endif                                 /* Subsystem3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
