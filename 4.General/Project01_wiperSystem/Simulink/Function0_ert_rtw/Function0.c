/*
 * File: Function0.c
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

#include "Function0.h"
#include "rtwtypes.h"
#include "Function0_private.h"

/* Block signals (default storage) */
B_Function0_T Function0_B;

/* Block states (default storage) */
DW_Function0_T Function0_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Function0_T Function0_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Function0_T Function0_Y;

/* Real-time model */
static RT_MODEL_Function0_T Function0_M_;
RT_MODEL_Function0_T *const Function0_M = &Function0_M_;
real32_T look1_iu8lftf_binlcpw(uint8_T u0, const uint8_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    uint8_T bpLeftVar;
    bpLeftVar = bp0[iLeft];
    frac = (real32_T)((uint32_T)u0 - bpLeftVar) / (real32_T)((uint32_T)bp0[iLeft
      + 1U] - bpLeftVar);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 * Output and update for action system:
 *    '<S1>/Off'
 *    '<S2>/If Action Subsystem'
 */
void Function0_Off(real32_T *rty_wiprMotPwmDutyCyc)
{
  /* SignalConversion generated from: '<S5>/wiprMotPwmDutyCyc' incorporates:
   *  Constant: '<S5>/Constant'
   */
  *rty_wiprMotPwmDutyCyc = 0.0F;
}

/* Model step function */
void Function0_step(void)
{
  real32_T rtb_Gain1;

  /* Outputs for Atomic SubSystem: '<Root>/Function-Call Subsystem' */
  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/wiperMode'
   */
  switch (Function0_U.wiperMode) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Off' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    Function0_Off(&Function0_B.Merge);

    /* End of Outputs for SubSystem: '<S1>/Off' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Automatic' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Gain: '<S8>/Gain1' incorporates:
     *  UnitDelay: '<S2>/Unit Delay'
     */
    rtb_Gain1 = 0.1F * Function0_DW.UnitDelay_DSTATE;

    /* If: '<S2>/If' incorporates:
     *  Inport: '<Root>/rainSnsrErr'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (!Function0_U.rainSnsrErr) {
      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      Function0_Off(&Function0_DW.UnitDelay_DSTATE);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
       *  Inport: '<Root>/wiperSpdReq'
       *  UnitDelay: '<S2>/Unit Delay'
       */
      Function0_DW.UnitDelay_DSTATE = look1_iu8lftf_binlcpw
        (Function0_U.wiperSpdReq, Function0_ConstP.uDLookupTable_bp01Data,
         Function0_ConstP.uDLookupTable_tableData, 7U);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
    }

    /* End of If: '<S2>/If' */

    /* Sum: '<S8>/Add' incorporates:
     *  Gain: '<S8>/Gain'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    Function0_DW.UnitDelay_DSTATE = 0.1F * Function0_DW.UnitDelay_DSTATE +
      rtb_Gain1;

    /* Merge: '<S1>/Merge' incorporates:
     *  SignalConversion generated from: '<S2>/wiprMotPwmDutyCyc'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    Function0_B.Merge = Function0_DW.UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S1>/Automatic' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/LowSpeed' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Merge: '<S1>/Merge' incorporates:
     *  Constant: '<S4>/Constant'
     *  SignalConversion generated from: '<S4>/wiprMotPwmDutyCyc'
     */
    Function0_B.Merge = 0.4F;

    /* End of Outputs for SubSystem: '<S1>/LowSpeed' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S1>/HighSpeed' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Merge: '<S1>/Merge' incorporates:
     *  Constant: '<S3>/Constant'
     *  SignalConversion generated from: '<S3>/wiprMotPwmDutyCyc'
     */
    Function0_B.Merge = 0.7F;

    /* End of Outputs for SubSystem: '<S1>/HighSpeed' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */
  /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */

  /* Outport: '<Root>/wiprMotPwmDutyCyc' */
  Function0_Y.wiprMotPwmDutyCyc = Function0_B.Merge;

  /* Outputs for Atomic SubSystem: '<Root>/Function-Call Subsystem' */
  /* Outport: '<Root>/wiprActive' incorporates:
   *  Constant: '<S1>/Constant'
   *  Logic: '<S1>/NOT'
   *  RelationalOperator: '<S1>/GreaterThanOrEqual'
   */
  Function0_Y.wiprActive = !(Function0_B.Merge == 0.0F);

  /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
}

/* Model initialize function */
void Function0_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Function0_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
