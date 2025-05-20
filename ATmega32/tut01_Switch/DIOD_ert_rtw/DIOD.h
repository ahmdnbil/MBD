/*
 * File: DIOD.h
 *
 * Code generated for Simulink model 'DIOD'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 13:30:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef DIOD_h_
#define DIOD_h_
#ifndef DIOD_COMMON_INCLUDES_
#define DIOD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DIOD_COMMON_INCLUDES_ */

#include "DIOD_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T ctrlSW_B;                  /* '<Root>/ctrlSW_B' */
} ExtU_DIOD_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T indicatorlAMP_B;           /* '<Root>/indicatorlAMP_B' */
} ExtY_DIOD_T;

/* Real-time Model Data Structure */
struct tag_RTM_DIOD_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_DIOD_T DIOD_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_DIOD_T DIOD_Y;

/* Model entry point functions */
extern void DIOD_initialize(void);
extern void DIOD_step(void);
extern void DIOD_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DIOD_T *const DIOD_M;

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
 * '<Root>' : 'DIOD'
 * '<S1>'   : 'DIOD/indicatorLampFunc'
 */
#endif                                 /* DIOD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
