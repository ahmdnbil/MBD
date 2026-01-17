/*
 * File: xil_instrumentation.c
 *
 * Code generated for instrumentation.
 *
 * This file contains stub implementations of the instrumentation utility
 * functions. These stubs allow instrumented code to be compiled
 * into an executable that does not support collection of execution
 * instrumentation data.
 *
 */

#include "xil_instrumentation.h"

/* Code instrumentation offset(s) for model And_Model (ModelRefSIL) */
#define _MW_INSTRUM_R_0ba407540e940f54_offset 0
#include <string.h>

void __MW_INSTRUM_RECORD_HIT(uint32_T sectionId)
{
  /* Send information that instrumentation point was hit to host */
  xilUploadCodeInstrData((void *)0, (uint32_T)(0), sectionId);
}

#ifdef __cplusplus

extern "C"
{

#endif

  const unsigned int __mw_instrum_And_Model_hits_size = 13;

#ifdef __cplusplus

}

#endif

unsigned int __mw_instrum_And_Model_hits[13];

#ifdef __cplusplus

extern "C"
{

#endif

  unsigned int* __mw_instrum_And_Model_phits = &__mw_instrum_And_Model_hits[0];

#ifdef __cplusplus

}

#endif

void xilUploadCoverageSynthesis(void)
{
  uint32_T sz;
  sz = (uint32_T)(__mw_instrum_And_Model_hits_size * sizeof(uint32_T));
  xilUploadCodeInstrData((void *)__mw_instrum_And_Model_hits, sz, 1);
  memset((void *) __mw_instrum_And_Model_hits, 0, sz);
}

void xilInitCoverage(void)
{
  uint32_T sz;
  sz = (uint32_T)(__mw_instrum_And_Model_hits_size * sizeof(uint32_T));
  memset((void *) __mw_instrum_And_Model_hits, 0, sz);
}

/* Code instrumentation method(s) for model And_Model (ModelRefSIL) */
void _MW_INSTRUM_R_0ba407540e940f54(uint32_T sectionId)
{
  __MW_INSTRUM_RECORD_HIT(_MW_INSTRUM_R_0ba407540e940f54_offset + sectionId);
}

void InitEvent (void)
{
  /* callbacks executed when the sim starts */
  xilInitCoverage();
}

void PauseEvent (void)
{
  /* callbacks executed when the sim is paused */
  xilUploadCoverageSynthesis();
}

void TerminateEvent (void)
{
  /* callbacks executed when the sim ends */
  xilUploadCoverageSynthesis();
}

void StepCompletedEvent (void)
{
  /* callbacks executed when a step ends */
  xilUploadCoverageSynthesis();
}
