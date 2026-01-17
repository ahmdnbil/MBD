/*
 * File: Function0.h
 *
 * Code generated for Simulink model 'Function0'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Aug  4 21:12:22 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Function0_h_
#define Function0_h_
#ifndef Function0_COMMON_INCLUDES_
#define Function0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* Function0_COMMON_INCLUDES_ */

#include "Function0_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T Merge;                      /* '<S1>/Merge' */
} B_Function0_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T UnitDelay_DSTATE;           /* '<S2>/Unit Delay' */
} DW_Function0_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S7>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[8];

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S7>/1-D Lookup Table'
   */
  uint8_T uDLookupTable_bp01Data[8];
} ConstP_Function0_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T wiperMode;                   /* '<Root>/wiperMode' */
  boolean_T rainSnsrErr;               /* '<Root>/rainSnsrErr' */
  uint8_T wiperSpdReq;                 /* '<Root>/wiperSpdReq' */
} ExtU_Function0_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T wiprMotPwmDutyCyc;          /* '<Root>/wiprMotPwmDutyCyc' */
  boolean_T wiprActive;                /* '<Root>/wiprActive' */
} ExtY_Function0_T;

/* Real-time Model Data Structure */
struct tag_RTM_Function0_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Function0_T Function0_B;

/* Block states (default storage) */
extern DW_Function0_T Function0_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Function0_T Function0_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Function0_T Function0_Y;

/* Constant parameters (default storage) */
extern const ConstP_Function0_T Function0_ConstP;

/* Model entry point functions */
extern void Function0_initialize(void);
extern void Function0_step(void);
extern void Function0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Function0_T *const Function0_M;

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
 * hilite_system('Project/Function-Call Subsystem')    - opens subsystem Project/Function-Call Subsystem
 * hilite_system('Project/Function-Call Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Project'
 * '<S1>'   : 'Project/Function-Call Subsystem'
 * '<S2>'   : 'Project/Function-Call Subsystem/Automatic'
 * '<S3>'   : 'Project/Function-Call Subsystem/HighSpeed'
 * '<S4>'   : 'Project/Function-Call Subsystem/LowSpeed'
 * '<S5>'   : 'Project/Function-Call Subsystem/Off'
 * '<S6>'   : 'Project/Function-Call Subsystem/Automatic/If Action Subsystem'
 * '<S7>'   : 'Project/Function-Call Subsystem/Automatic/If Action Subsystem1'
 * '<S8>'   : 'Project/Function-Call Subsystem/Automatic/loPassFilter'
 */
#endif                                 /* Function0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
