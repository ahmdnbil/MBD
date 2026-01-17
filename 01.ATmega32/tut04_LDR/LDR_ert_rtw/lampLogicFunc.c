/*
 * File: lampLogicFunc.c
 *
 * Code generated for Simulink model 'LDR'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue May 20 18:34:20 2025
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
void lampLogicFunc(uint16_T rtu_ADCreading_u16, boolean_T *rty_firstLamp_B,
                   boolean_T *rty_secondLamp_B, boolean_T *rty_thirdLamp_B)
{
  uint8_T rtb_Divide;

  /* Product: '<S1>/Divide' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain1'
   */
  rtb_Divide = (uint8_T)(100UL * rtu_ADCreading_u16 / 1023UL);

  /* Truth Table: '<S1>/Truth Table' */
  /*  Example condition 1 */
  /*  Example condition 2 */
  /*  Condition #3 */
  if (rtb_Divide > 60) {
    /*  Example action 1 called from D1 & D2 column in condition table */
    *rty_firstLamp_B = true;
    *rty_secondLamp_B = true;
    *rty_thirdLamp_B = true;
  } else if (rtb_Divide > 40) {
    *rty_firstLamp_B = true;
    *rty_secondLamp_B = true;
    *rty_thirdLamp_B = false;
  } else if (rtb_Divide > 20) {
    /*  Example action 2 called from D3 column in condition table */
    *rty_firstLamp_B = true;
    *rty_secondLamp_B = false;
    *rty_thirdLamp_B = false;
  } else {
    /*  Default */
    *rty_firstLamp_B = false;
    *rty_secondLamp_B = false;
    *rty_thirdLamp_B = false;
  }

  /* End of Truth Table: '<S1>/Truth Table' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
