/*
 * File: lampAlgo.c
 *
 * Code generated for Simulink model 'DLCI'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 14:25:23 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#include "lampAlgo.h"

/* Output and update for atomic system: '<Root>/lampAlgo' */
void DLCI_lampAlgo(boolean_T rtu_rightSW_B, boolean_T rtu_leftSW_B, boolean_T
                   *rty_rightLamp_B, boolean_T *rty_leftLamp_B)
{
  boolean_T tmp;
  boolean_T tmp_0;

  /* Logic: '<S1>/AND' incorporates:
   *  Logic: '<S1>/AND1'
   */
  tmp = !rtu_rightSW_B;
  tmp_0 = !rtu_leftSW_B;

  /* Switch: '<S1>/Switch2' incorporates:
   *  Logic: '<S1>/AND'
   */
  *rty_rightLamp_B = ((tmp_0 || tmp) && rtu_rightSW_B);

  /* Switch: '<S1>/Switch3' incorporates:
   *  Logic: '<S1>/AND1'
   */
  *rty_leftLamp_B = ((tmp || tmp_0) && rtu_leftSW_B);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
