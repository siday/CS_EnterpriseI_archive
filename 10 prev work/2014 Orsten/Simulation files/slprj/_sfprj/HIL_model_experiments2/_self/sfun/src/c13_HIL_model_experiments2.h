#ifndef __c13_HIL_model_experiments2_h__
#define __c13_HIL_model_experiments2_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c13_ResolvedFunctionInfo
#define typedef_c13_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c13_ResolvedFunctionInfo;

#endif                                 /*typedef_c13_ResolvedFunctionInfo*/

#ifndef typedef_SFc13_HIL_model_experiments2InstanceStruct
#define typedef_SFc13_HIL_model_experiments2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c13_sfEvent;
  boolean_T c13_isStable;
  boolean_T c13_doneDoubleBufferReInit;
  uint8_T c13_is_active_c13_HIL_model_experiments2;
} SFc13_HIL_model_experiments2InstanceStruct;

#endif                                 /*typedef_SFc13_HIL_model_experiments2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c13_HIL_model_experiments2_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c13_HIL_model_experiments2_get_check_sum(mxArray *plhs[]);
extern void c13_HIL_model_experiments2_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
