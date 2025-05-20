/*
 * File: lampLogicFunc.c
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

#include "rtwtypes.h"
#include "lampLogicFunc.h"

/* Output and update for atomic system: '<Root>/lampLogicFunc' */
void lampLogicFunc(uint16_T rtu_ADCreading, boolean_T *rty_LampLogic)
{
  /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S3>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
   *  ActionPort: '<S2>/Action Port'
   */
  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain'
   *  Product: '<S1>/Divide'
   *  SignalConversion generated from: '<S2>/Out1'
   *  SignalConversion generated from: '<S3>/Out1'
   */
  *rty_LampLogic = ((uint16_T)(100UL * rtu_ADCreading / 1023UL) >= 50U);

  /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
