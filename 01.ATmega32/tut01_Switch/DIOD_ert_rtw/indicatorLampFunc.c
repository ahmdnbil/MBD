/*
 * File: indicatorLampFunc.c
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

#include "rtwtypes.h"
#include "indicatorLampFunc.h"

/* Output and update for atomic system: '<Root>/indicatorLampFunc' */
boolean_T DIOD_indicatorLampFunc(boolean_T rtu_ctrlSW_B)
{
  /* Switch: '<S1>/Switch' */
  return rtu_ctrlSW_B;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
