/*
 * File: Function0_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef FUNCTION0_CA_H
#define FUNCTION0_CA_H

/* preprocessor validation checks */
#include "Function0_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Function0_HWRes;
extern CA_PWS_TestResults CA_Function0_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Function0_ExpHW;
extern CA_HWImpl CA_Function0_ActHW;

/* entry point function to run tests */
void Function0_caRunTests(void);

#endif                                 /* FUNCTION0_CA_H */
