/*
 * File: trafficLight.h
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

#ifndef trafficLight_h_
#define trafficLight_h_
#ifndef trafficLight_COMMON_INCLUDES_
#define trafficLight_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#include "main.h"
#endif                                 /* trafficLight_COMMON_INCLUDES_ */

#include "mw_stm32_nvic.h"
#include "trafficLight_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  boolean_T red;                       /* '<Root>/Chart' */
  boolean_T yellow;                    /* '<Root>/Chart' */
  boolean_T green;                     /* '<Root>/Chart' */
} B_trafficLight_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_trafficLight;   /* '<Root>/Chart' */
  uint8_T is_c3_trafficLight;          /* '<Root>/Chart' */
  uint8_T is_Fault;                    /* '<Root>/Chart' */
  uint8_T is_Normal;                   /* '<Root>/Chart' */
  boolean_T FaultCondition;            /* '<Root>/Fault' */
} DW_trafficLight_T;

/* Parameters (default storage) */
struct P_trafficLight_T_ {
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S13>/Constant1'
                                        */
  boolean_T Constant1_Value_o;         /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S14>/Constant1'
                                        */
  boolean_T Fault_InitialValue;        /* Computed Parameter: Fault_InitialValue
                                        * Referenced by: '<Root>/Fault'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_trafficLight_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_trafficLight_T trafficLight_P;

/* Block signals (default storage) */
extern B_trafficLight_T trafficLight_B;

/* Block states (default storage) */
extern DW_trafficLight_T trafficLight_DW;

/* Model entry point functions */
extern void trafficLight_initialize(void);
extern void trafficLight_step(void);
extern void trafficLight_terminate(void);

/* Real-time Model object */
extern RT_MODEL_trafficLight_T *const trafficLight_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  void EXTI15_10_IRQHandler(void);
  void trafficLight_configure_interrupts (void);
  void trafficLight_unconfigure_interrupts (void);

#ifdef __cpluscplus

}

#endif

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
 * '<Root>' : 'trafficLight'
 * '<S1>'   : 'trafficLight/Chart'
 * '<S2>'   : 'trafficLight/Digital Port Write1'
 * '<S3>'   : 'trafficLight/Digital Port Write2'
 * '<S4>'   : 'trafficLight/Digital Port Write3'
 * '<S5>'   : 'trafficLight/Function-Call Subsystem1'
 * '<S6>'   : 'trafficLight/Hardware Interrupt'
 * '<S7>'   : 'trafficLight/Digital Port Write1/ECSoC'
 * '<S8>'   : 'trafficLight/Digital Port Write1/ECSoC/ECSimCodegen'
 * '<S9>'   : 'trafficLight/Digital Port Write2/ECSoC'
 * '<S10>'  : 'trafficLight/Digital Port Write2/ECSoC/ECSimCodegen'
 * '<S11>'  : 'trafficLight/Digital Port Write3/ECSoC'
 * '<S12>'  : 'trafficLight/Digital Port Write3/ECSoC/ECSimCodegen'
 * '<S13>'  : 'trafficLight/Function-Call Subsystem1/If Action Subsystem1'
 * '<S14>'  : 'trafficLight/Function-Call Subsystem1/If Action Subsystem2'
 * '<S15>'  : 'trafficLight/Hardware Interrupt/ECSoC'
 * '<S16>'  : 'trafficLight/Hardware Interrupt/ECSoC/ECSimCodegen'
 */
#endif                                 /* trafficLight_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
