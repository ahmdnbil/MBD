/*
 * File: xil_instrumentation.h
 *
 * Code generated for instrumentation.
 *
 */

#include "rtwtypes.h"

/* Upload code instrumentation data point */
void xilUploadCodeInstrData(
  void* pData, uint32_T numMemUnits, uint32_T sectionId);

/* Indicate that instrumentation point was hit */
void __MW_INSTRUM_RECORD_HIT(uint32_T sectionId);
void xilUploadCoverageSynthesis(void);
void xilInitCoverage(void);

/* Code instrumentation method(s) for model And_Model (ModelRefSIL) */
void _MW_INSTRUM_R_0ba407540e940f54(uint32_T sectionId);

/* Callback called when the simulation starts */
void InitEvent(void);

/* Callback called when the simulation is paused */
void PauseEvent (void);

/* Callback called when the simulation ends */
void TerminateEvent (void);

/* Callback called when a step ends */
void StepCompletedEvent (void);
