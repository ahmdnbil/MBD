/*
 * File: Adding_MIL.h
 *
 * Code generated for Simulink model 'Adding_MIL'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Aug  3 23:59:35 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef Adding_MIL_h_
#define Adding_MIL_h_
#ifndef Adding_MIL_COMMON_INCLUDES_
#define Adding_MIL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* Adding_MIL_COMMON_INCLUDES_ */

#include "Adding_MIL_types.h"

/* Real-time Model Data Structure */
struct Adding_MIL_tag_RTM {
  const char_T **errorStatus;
};

typedef struct {
  Adding_MIL_RT_MODEL rtm;
} Adding_MIL_MdlrefDW;

/* Model reference registration function */
extern void Adding_MIL_initialize(const char_T **rt_errorStatus,
  Adding_MIL_RT_MODEL *const Adding_MILrtM);

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
 * '<Root>' : 'Adding_MIL'
 */
#endif                                 /* Adding_MIL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
