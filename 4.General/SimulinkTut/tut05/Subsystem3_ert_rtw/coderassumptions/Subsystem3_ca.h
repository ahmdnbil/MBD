/*
 * File: Subsystem3_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef SUBSYSTEM3_CA_H
#define SUBSYSTEM3_CA_H

/* preprocessor validation checks */
#include "Subsystem3_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Subsystem3_HWRes;
extern CA_PWS_TestResults CA_Subsystem3_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Subsystem3_ExpHW;
extern CA_HWImpl CA_Subsystem3_ActHW;

/* entry point function to run tests */
void Subsystem3_caRunTests(void);

#endif                                 /* SUBSYSTEM3_CA_H */
