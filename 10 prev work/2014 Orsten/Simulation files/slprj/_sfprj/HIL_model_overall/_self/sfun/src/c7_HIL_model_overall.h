#ifndef __c7_HIL_model_overall_h__
#define __c7_HIL_model_overall_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c7_ResolvedFunctionInfo
#define typedef_c7_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c7_ResolvedFunctionInfo;

#endif                                 /*typedef_c7_ResolvedFunctionInfo*/

#ifndef typedef_SFc7_HIL_model_overallInstanceStruct
#define typedef_SFc7_HIL_model_overallInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c7_sfEvent;
  boolean_T c7_isStable;
  boolean_T c7_doneDoubleBufferReInit;
  uint8_T c7_is_active_c7_HIL_model_overall;
} SFc7_HIL_model_overallInstanceStruct;

#endif                                 /*typedef_SFc7_HIL_model_overallInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_HIL_model_overall_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c7_HIL_model_overall_get_check_sum(mxArray *plhs[]);
extern void c7_HIL_model_overall_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
