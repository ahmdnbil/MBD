/*
 * File: And_Model.h
 *
 * Code generated for Simulink model 'And_Model'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri May 30 02:10:49 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef And_Model_h_
#define And_Model_h_
#ifndef And_Model_COMMON_INCLUDES_
#define And_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* And_Model_COMMON_INCLUDES_ */

#include "And_Model_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_And_Model_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_And_Model_T rtm;
} MdlrefDW_And_Model_T;

/* Model reference registration function */
extern void And_Model_initialize(const char_T **rt_errorStatus,
  RT_MODEL_And_Model_T *const And_Model_M);
extern void And_Model(const boolean_T *rtu_In1, const boolean_T *rtu_In2,
                      boolean_T *rty_Out1);

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
 * '<Root>' : 'And_Model'
 */
#endif                                 /* And_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
