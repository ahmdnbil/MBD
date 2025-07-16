/*
 * File: trafficLight.c
 *
 * Code generated for Simulink model 'trafficLight'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Jul 16 19:37:33 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "trafficLight.h"
#include "rtwtypes.h"
#include "trafficLight_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define trafficLight_IN_BlinkOff       ((uint8_T)1U)
#define trafficLight_IN_BlinkOn        ((uint8_T)2U)
#define trafficLight_IN_Fault          ((uint8_T)1U)
#define trafficLight_IN_Go             ((uint8_T)1U)
#define trafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define trafficLight_IN_Normal         ((uint8_T)2U)
#define trafficLight_IN_PrepareToStop  ((uint8_T)2U)
#define trafficLight_IN_Stop           ((uint8_T)3U)

/* Block signals (default storage) */
B_trafficLight_T trafficLight_B;

/* Block states (default storage) */
DW_trafficLight_T trafficLight_DW;

/* Real-time model */
static RT_MODEL_trafficLight_T trafficLight_M_;
RT_MODEL_trafficLight_T *const trafficLight_M = &trafficLight_M_;

/* Model step function */
void trafficLight_step(void)
{
  GPIO_TypeDef * portNameLoc;
  int32_T c;

  /* Chart: '<Root>/Chart' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read1'
   */
  if (trafficLight_DW.temporalCounter_i1 < 32767U) {
    trafficLight_DW.temporalCounter_i1++;
  }

  if (trafficLight_DW.is_active_c3_trafficLight == 0U) {
    trafficLight_DW.is_active_c3_trafficLight = 1U;
    trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Normal;
    trafficLight_DW.temporalCounter_i1 = 0U;
    trafficLight_DW.is_Normal = trafficLight_IN_Stop;

    /*  Red light */
    trafficLight_B.red = true;
    trafficLight_B.yellow = false;
    trafficLight_B.green = false;
  } else if (trafficLight_DW.is_c3_trafficLight == trafficLight_IN_Fault) {
    if (!trafficLight_DW.FaultCondition) {
      trafficLight_DW.is_Fault = trafficLight_IN_NO_ACTIVE_CHILD;
      trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Normal;
      trafficLight_DW.temporalCounter_i1 = 0U;
      trafficLight_DW.is_Normal = trafficLight_IN_Stop;

      /*  Red light */
      trafficLight_B.red = true;
      trafficLight_B.yellow = false;
      trafficLight_B.green = false;
    } else if (trafficLight_DW.is_Fault == trafficLight_IN_BlinkOff) {
      if (trafficLight_DW.temporalCounter_i1 >= 10000U) {
        trafficLight_DW.temporalCounter_i1 = 0U;
        trafficLight_DW.is_Fault = trafficLight_IN_BlinkOn;

        /*  Red light */
        trafficLight_B.red = true;
      }

      /* case IN_BlinkOn: */
    } else if (trafficLight_DW.temporalCounter_i1 >= 10000U) {
      trafficLight_DW.temporalCounter_i1 = 0U;
      trafficLight_DW.is_Fault = trafficLight_IN_BlinkOff;

      /*  No light */
      trafficLight_B.red = false;
    }

    /* case IN_Normal: */
  } else if (trafficLight_DW.FaultCondition) {
    trafficLight_DW.is_Normal = trafficLight_IN_NO_ACTIVE_CHILD;
    trafficLight_DW.is_c3_trafficLight = trafficLight_IN_Fault;
    trafficLight_B.yellow = false;
    trafficLight_B.green = false;
    trafficLight_DW.temporalCounter_i1 = 0U;
    trafficLight_DW.is_Fault = trafficLight_IN_BlinkOn;

    /*  Red light */
    trafficLight_B.red = true;
  } else {
    switch (trafficLight_DW.is_Normal) {
     case trafficLight_IN_Go:
      if (trafficLight_DW.temporalCounter_i1 >= 20000U) {
        trafficLight_DW.temporalCounter_i1 = 0U;
        trafficLight_DW.is_Normal = trafficLight_IN_PrepareToStop;

        /*  Yellow light */
        trafficLight_B.red = false;
        trafficLight_B.yellow = true;
        trafficLight_B.green = false;
      }
      break;

     case trafficLight_IN_PrepareToStop:
      if (trafficLight_DW.temporalCounter_i1 >= 20000U) {
        trafficLight_DW.temporalCounter_i1 = 0U;
        trafficLight_DW.is_Normal = trafficLight_IN_Stop;

        /*  Red light */
        trafficLight_B.red = true;
        trafficLight_B.yellow = false;
        trafficLight_B.green = false;
      }
      break;

     default:
      /* case IN_Stop: */
      if (trafficLight_DW.temporalCounter_i1 >= 20000U) {
        trafficLight_DW.temporalCounter_i1 = 0U;
        trafficLight_DW.is_Normal = trafficLight_IN_Go;

        /*  Green light */
        trafficLight_B.red = false;
        trafficLight_B.yellow = false;
        trafficLight_B.green = true;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<S8>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (trafficLight_B.yellow) {
    c = 2048;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 2048U);

  /* End of MATLABSystem: '<S8>/Digital Port Write' */

  /* MATLABSystem: '<S10>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (trafficLight_B.green) {
    c = 4096;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 4096U);

  /* End of MATLABSystem: '<S10>/Digital Port Write' */

  /* MATLABSystem: '<S12>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (trafficLight_B.red) {
    c = 1024;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 1024U);

  /* End of MATLABSystem: '<S12>/Digital Port Write' */
}

/* Model initialize function */
void trafficLight_initialize(void)
{
  /* Start for DataStoreMemory: '<Root>/Fault' */
  trafficLight_DW.FaultCondition = trafficLight_P.Fault_InitialValue;
}

/* Model terminate function */
void trafficLight_terminate(void)
{
  /* (no terminate code required) */
}

void trafficLight_configure_interrupts(void)
{
  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(55,&EXTI15_10_IRQHandler,2);
  MW_NVIC_EnableIRQ(55);
}

/* Hardware Interrupt Block: '<S16>/Hardware Interrupt' */
void EXTI15_10_IRQHandler(void)
{
  uint32_T priority_mask;
  priority_mask = MW_HWI_MaskInterrupt();

  /* Event: EXTI13 Event */
  /* Check event EXTI13 Event occurred */
  if (0 != ((0 != LL_EXTI_IsEnabledIT_0_31(LL_EXTI_LINE_13)) && (0 !=
        LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_13)))) {
    /* Clear occurred EXTI13 Event event */
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_13);
    if (1 == runModel) {
      {
        /* S-Function (HardwareInterrupt_sfun): '<S16>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/Function-Call Subsystem1' */

        /* If: '<S5>/If' incorporates:
         *  DataStoreRead: '<S5>/Data Store Read2'
         */
        if (!trafficLight_DW.FaultCondition) {
          /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S13>/Action Port'
           */
          /* DataStoreWrite: '<S13>/Data Store Write' incorporates:
           *  Constant: '<S13>/Constant1'
           */
          trafficLight_DW.FaultCondition = trafficLight_P.Constant1_Value;

          /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S14>/Action Port'
           */
          /* DataStoreWrite: '<S14>/Data Store Write' incorporates:
           *  Constant: '<S14>/Constant1'
           */
          trafficLight_DW.FaultCondition = trafficLight_P.Constant1_Value_o;

          /* End of Outputs for SubSystem: '<S5>/If Action Subsystem2' */
        }

        /* End of If: '<S5>/If' */

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S16>/Hardware Interrupt' */
      }
    }
  }

  __ISB();
  __DSB();
  MW_HWI_UnMaskInterrupt(priority_mask);
}

void trafficLight_unconfigure_interrupts (void)
{
  MW_NVIC_DisableIRQ(55);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
