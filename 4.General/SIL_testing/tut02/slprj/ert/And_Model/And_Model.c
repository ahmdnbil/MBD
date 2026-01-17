/*
 * File: And_Model.c
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

#include "And_Model.h"
#include "rtwtypes.h"
#include "And_Model_private.h"

/* Output and update for referenced model: 'And_Model' */
void And_Model(const boolean_T *rtu_In1, const boolean_T *rtu_In2, boolean_T
               *rty_Out1)
{
  /* Logic: '<Root>/AND' */
  *rty_Out1 = ((*rtu_In1) && (*rtu_In2));
}

/* Model initialize function */
void And_Model_initialize(const char_T **rt_errorStatus, RT_MODEL_And_Model_T *
  const And_Model_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(And_Model_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
