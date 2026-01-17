/*
 * File: And_Model_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef AND_MODEL_CA_H
#define AND_MODEL_CA_H

/* preprocessor validation checks */
#include "And_Model_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_And_Model_HWRes;
extern CA_PWS_TestResults CA_And_Model_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_And_Model_ExpHW;
extern CA_HWImpl CA_And_Model_ActHW;

/* entry point function to run tests */
void And_Model_caRunTests(void);

#endif                                 /* AND_MODEL_CA_H */
