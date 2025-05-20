/*
 * File: servoMotor.c
 *
 * Code generated for Simulink model 'servoMotor'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Apr 22 14:31:58 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "servoMotor.h"
#include "rtwtypes.h"
#include "servoMotor_private.h"

/* Block states (default storage) */
DW_servoMotor_T servoMotor_DW;

/* Real-time model */
static RT_MODEL_servoMotor_T servoMotor_M_;
RT_MODEL_servoMotor_T *const servoMotor_M = &servoMotor_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void servoMotor_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(servoMotor_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (servoMotor_M->Timing.TaskCounters.TID[1])++;
  if ((servoMotor_M->Timing.TaskCounters.TID[1]) > 999) {/* Sample time: [1.0s, 0.0s] */
    servoMotor_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void servoMotor_step0(void)            /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  servoMotor_M->Timing.taskTime0 =
    ((time_T)(++servoMotor_M->Timing.clockTick0)) *
    servoMotor_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void servoMotor_step1(void)            /* Sample time: [1.0s, 0.0s] */
{
  GPIO_TypeDef * portNameLoc;
  real_T rtb_PulseGenerator;
  int32_T c;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (servoMotor_DW.clockTickCounter <
                        servoMotor_P.PulseGenerator_Duty) &&
    (servoMotor_DW.clockTickCounter >= 0) ? servoMotor_P.PulseGenerator_Amp :
    0.0;
  if (servoMotor_DW.clockTickCounter >= servoMotor_P.PulseGenerator_Period - 1.0)
  {
    servoMotor_DW.clockTickCounter = 0;
  } else {
    servoMotor_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<S3>/Digital Port Write' */
  portNameLoc = GPIOC;
  if (rtb_PulseGenerator != 0.0) {
    c = 1024;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 1024U);

  /* End of MATLABSystem: '<S3>/Digital Port Write' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  servoMotor_M->Timing.clockTick1++;
}

/* Model initialize function */
void servoMotor_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(servoMotor_M, -1);
  servoMotor_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  servoMotor_M->Sizes.checksums[0] = (2735242817U);
  servoMotor_M->Sizes.checksums[1] = (2841644632U);
  servoMotor_M->Sizes.checksums[2] = (2005629195U);
  servoMotor_M->Sizes.checksums[3] = (2387171541U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    servoMotor_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(servoMotor_M->extModeInfo,
      &servoMotor_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(servoMotor_M->extModeInfo, servoMotor_M->Sizes.checksums);
    rteiSetTPtr(servoMotor_M->extModeInfo, rtmGetTPtr(servoMotor_M));
  }
}

/* Model terminate function */
void servoMotor_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
