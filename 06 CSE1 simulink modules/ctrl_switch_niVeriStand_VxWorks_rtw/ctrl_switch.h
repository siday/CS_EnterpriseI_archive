/*
 * ctrl_switch.h
 *
 * Code generation for model "ctrl_switch".
 *
 * Model version              : 1.14
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Thu Mar 19 12:56:16 2015
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_ctrl_switch_h_
#define RTW_HEADER_ctrl_switch_h_
#include <string.h>
#include <stddef.h>
#ifndef ctrl_switch_COMMON_INCLUDES_
# define ctrl_switch_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* ctrl_switch_COMMON_INCLUDES_ */

#include "ctrl_switch_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define ctrl_switch_rtModel            RT_MODEL_ctrl_switch_T

/* Block signals (auto storage) */
typedef struct {
  real_T Triangle;                     /* '<S8>/Triangle' */
  real_T Circle;                       /* '<S8>/Circle' */
  real_T Cross;                        /* '<S8>/Cross' */
  real_T Square;                       /* '<S8>/Square' */
  real_T u_BT;                         /* '<S6>/u_BT' */
  real_T u_VSP2;                       /* '<S6>/u_VSP2' */
  real_T omega_VSP1;                   /* '<S6>/omega_VSP1' */
  real_T omega_VSP2;                   /* '<S6>/omega_VSP2' */
  real_T u_VSP1;                       /* '<S6>/u_VSP1' */
  real_T alpha_VSP1;                   /* '<S6>/alpha_VSP1' */
  real_T alpha_VSP2;                   /* '<S6>/alpha_VSP2' */
  real_T u_BT_i;                       /* '<S4>/u_BT' */
  real_T u_VSP2_c;                     /* '<S4>/u_VSP2' */
  real_T omega_VSP1_o;                 /* '<S4>/omega_VSP1' */
  real_T omega_VSP2_i;                 /* '<S4>/omega_VSP2' */
  real_T u_VSP1_i;                     /* '<S4>/u_VSP1' */
  real_T alpha_VSP1_b;                 /* '<S4>/alpha_VSP1' */
  real_T alpha_VSP2_j;                 /* '<S4>/alpha_VSP2' */
  real_T u_BT_c;                       /* '<S3>/u_BT' */
  real_T u_VSP2_m;                     /* '<S3>/u_VSP2' */
  real_T omega_VSP1_a;                 /* '<S3>/omega_VSP1' */
  real_T omega_VSP2_g;                 /* '<S3>/omega_VSP2' */
  real_T u_VSP1_o;                     /* '<S3>/u_VSP1' */
  real_T alpha_VSP1_g;                 /* '<S3>/alpha_VSP1' */
  real_T alpha_VSP2_l;                 /* '<S3>/alpha_VSP2' */
  real_T u_BT_m;                       /* '<S5>/u_BT' */
  real_T u_VSP2_e;                     /* '<S5>/u_VSP2' */
  real_T omega_VSP1_k;                 /* '<S5>/omega_VSP1' */
  real_T omega_VSP2_m;                 /* '<S5>/omega_VSP2' */
  real_T u_VSP1_c;                     /* '<S5>/u_VSP1' */
  real_T alpha_VSP1_k;                 /* '<S5>/alpha_VSP1' */
  real_T alpha_VSP2_h;                 /* '<S5>/alpha_VSP2' */
  real_T Saturation4;                  /* '<Root>/Saturation4' */
  real_T Saturation;                   /* '<Root>/Saturation' */
  real_T Saturation1;                  /* '<Root>/Saturation1' */
  real_T Saturation2;                  /* '<Root>/Saturation2' */
  real_T Saturation3;                  /* '<Root>/Saturation3' */
  real_T Saturation5;                  /* '<Root>/Saturation5' */
  real_T Saturation6;                  /* '<Root>/Saturation6' */
  real_T switch_signal;                /* '<S1>/Switch_function' */
  boolean_T ctrl_student;              /* '<S7>/C' */
  boolean_T ctrl_DP_basic;             /* '<S7>/C' */
  boolean_T ctrl_sixaxis2force;        /* '<S7>/C' */
  boolean_T ctrl_sixaxis2thruster;     /* '<S7>/C' */
  boolean_T fault;                     /* '<Root>/control limit checking' */
} B_ctrl_switch_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Triangle_DWORK1;              /* '<S8>/Triangle' */
  real_T Circle_DWORK1;                /* '<S8>/Circle' */
  real_T Cross_DWORK1;                 /* '<S8>/Cross' */
  real_T Square_DWORK1;                /* '<S8>/Square' */
  real_T Memory_PreviousInput;         /* '<S1>/Memory' */
  real_T u_BT_DWORK1;                  /* '<S6>/u_BT' */
  real_T u_VSP2_DWORK1;                /* '<S6>/u_VSP2' */
  real_T omega_VSP1_DWORK1;            /* '<S6>/omega_VSP1' */
  real_T omega_VSP2_DWORK1;            /* '<S6>/omega_VSP2' */
  real_T u_VSP1_DWORK1;                /* '<S6>/u_VSP1' */
  real_T alpha_VSP1_DWORK1;            /* '<S6>/alpha_VSP1' */
  real_T alpha_VSP2_DWORK1;            /* '<S6>/alpha_VSP2' */
  real_T u_BT_DWORK1_o;                /* '<S4>/u_BT' */
  real_T u_VSP2_DWORK1_g;              /* '<S4>/u_VSP2' */
  real_T omega_VSP1_DWORK1_j;          /* '<S4>/omega_VSP1' */
  real_T omega_VSP2_DWORK1_l;          /* '<S4>/omega_VSP2' */
  real_T u_VSP1_DWORK1_e;              /* '<S4>/u_VSP1' */
  real_T alpha_VSP1_DWORK1_n;          /* '<S4>/alpha_VSP1' */
  real_T alpha_VSP2_DWORK1_l;          /* '<S4>/alpha_VSP2' */
  real_T u_BT_DWORK1_m;                /* '<S3>/u_BT' */
  real_T u_VSP2_DWORK1_d;              /* '<S3>/u_VSP2' */
  real_T omega_VSP1_DWORK1_e;          /* '<S3>/omega_VSP1' */
  real_T omega_VSP2_DWORK1_b;          /* '<S3>/omega_VSP2' */
  real_T u_VSP1_DWORK1_p;              /* '<S3>/u_VSP1' */
  real_T alpha_VSP1_DWORK1_i;          /* '<S3>/alpha_VSP1' */
  real_T alpha_VSP2_DWORK1_d;          /* '<S3>/alpha_VSP2' */
  real_T u_BT_DWORK1_p;                /* '<S5>/u_BT' */
  real_T u_VSP2_DWORK1_f;              /* '<S5>/u_VSP2' */
  real_T omega_VSP1_DWORK1_c;          /* '<S5>/omega_VSP1' */
  real_T omega_VSP2_DWORK1_c;          /* '<S5>/omega_VSP2' */
  real_T u_VSP1_DWORK1_i;              /* '<S5>/u_VSP1' */
  real_T alpha_VSP1_DWORK1_j;          /* '<S5>/alpha_VSP1' */
  real_T alpha_VSP2_DWORK1_e;          /* '<S5>/alpha_VSP2' */
  real_T alpha_VSP2_DWORK1_m;          /* '<Root>/alpha_VSP2' */
  real_T u_BT_DWORK1_i;                /* '<Root>/u_BT' */
  real_T u_VSP1_DWORK1_d;              /* '<Root>/u_VSP1' */
  real_T u_VSP2_DWORK1_l;              /* '<Root>/u_VSP2' */
  real_T alpha_VSP1_DWORK1_c;          /* '<Root>/alpha_VSP1' */
  real_T omega_VSP1_DWORK1_k;          /* '<Root>/omega_VSP1' */
  real_T omega_VSP2_DWORK1_l5;         /* '<Root>/omega_VSP2' */
  real_T controlinputuexceedsbounds_DWOR;/* '<Root>/control input u exceeds bounds' */
  real_T ctrl_student_DWORK1;          /* '<S7>/ctrl_student' */
  real_T ctrl_DP_basic_DWORK1;         /* '<S7>/ctrl_DP_basic' */
  real_T ctrl_sixaxis2force_DWORK1;    /* '<S7>/ctrl_sixaxis2force' */
  real_T ctrl_sixaxis2thruster_DWORK1; /* '<S7>/ctrl_sixaxis2thruster' */
  uint8_T Triangle_DWORK2[12];         /* '<S8>/Triangle' */
  uint8_T Circle_DWORK2[12];           /* '<S8>/Circle' */
  uint8_T Cross_DWORK2[12];            /* '<S8>/Cross' */
  uint8_T Square_DWORK2[12];           /* '<S8>/Square' */
  uint8_T u_BT_DWORK2[12];             /* '<S6>/u_BT' */
  uint8_T u_VSP2_DWORK2[12];           /* '<S6>/u_VSP2' */
  uint8_T omega_VSP1_DWORK2[12];       /* '<S6>/omega_VSP1' */
  uint8_T omega_VSP2_DWORK2[12];       /* '<S6>/omega_VSP2' */
  uint8_T u_VSP1_DWORK2[12];           /* '<S6>/u_VSP1' */
  uint8_T alpha_VSP1_DWORK2[12];       /* '<S6>/alpha_VSP1' */
  uint8_T alpha_VSP2_DWORK2[12];       /* '<S6>/alpha_VSP2' */
  uint8_T u_BT_DWORK2_i[12];           /* '<S4>/u_BT' */
  uint8_T u_VSP2_DWORK2_n[12];         /* '<S4>/u_VSP2' */
  uint8_T omega_VSP1_DWORK2_a[12];     /* '<S4>/omega_VSP1' */
  uint8_T omega_VSP2_DWORK2_i[12];     /* '<S4>/omega_VSP2' */
  uint8_T u_VSP1_DWORK2_h[12];         /* '<S4>/u_VSP1' */
  uint8_T alpha_VSP1_DWORK2_b[12];     /* '<S4>/alpha_VSP1' */
  uint8_T alpha_VSP2_DWORK2_a[12];     /* '<S4>/alpha_VSP2' */
  uint8_T u_BT_DWORK2_g[12];           /* '<S3>/u_BT' */
  uint8_T u_VSP2_DWORK2_n2[12];        /* '<S3>/u_VSP2' */
  uint8_T omega_VSP1_DWORK2_i[12];     /* '<S3>/omega_VSP1' */
  uint8_T omega_VSP2_DWORK2_e[12];     /* '<S3>/omega_VSP2' */
  uint8_T u_VSP1_DWORK2_j[12];         /* '<S3>/u_VSP1' */
  uint8_T alpha_VSP1_DWORK2_i[12];     /* '<S3>/alpha_VSP1' */
  uint8_T alpha_VSP2_DWORK2_m[12];     /* '<S3>/alpha_VSP2' */
  uint8_T u_BT_DWORK2_o[12];           /* '<S5>/u_BT' */
  uint8_T u_VSP2_DWORK2_i[12];         /* '<S5>/u_VSP2' */
  uint8_T omega_VSP1_DWORK2_e[12];     /* '<S5>/omega_VSP1' */
  uint8_T omega_VSP2_DWORK2_b[12];     /* '<S5>/omega_VSP2' */
  uint8_T u_VSP1_DWORK2_a[12];         /* '<S5>/u_VSP1' */
  uint8_T alpha_VSP1_DWORK2_d[12];     /* '<S5>/alpha_VSP1' */
  uint8_T alpha_VSP2_DWORK2_o[12];     /* '<S5>/alpha_VSP2' */
  uint8_T alpha_VSP2_DWORK2_mq[12];    /* '<Root>/alpha_VSP2' */
  uint8_T u_BT_DWORK2_n[12];           /* '<Root>/u_BT' */
  uint8_T u_VSP1_DWORK2_n[12];         /* '<Root>/u_VSP1' */
  uint8_T u_VSP2_DWORK2_ih[12];        /* '<Root>/u_VSP2' */
  uint8_T alpha_VSP1_DWORK2_n[12];     /* '<Root>/alpha_VSP1' */
  uint8_T omega_VSP1_DWORK2_d[12];     /* '<Root>/omega_VSP1' */
  uint8_T omega_VSP2_DWORK2_er[12];    /* '<Root>/omega_VSP2' */
  uint8_T controlinputuexceedsbounds_DW_h[12];/* '<Root>/control input u exceeds bounds' */
  uint8_T ctrl_student_DWORK2[12];     /* '<S7>/ctrl_student' */
  uint8_T ctrl_DP_basic_DWORK2[12];    /* '<S7>/ctrl_DP_basic' */
  uint8_T ctrl_sixaxis2force_DWORK2[12];/* '<S7>/ctrl_sixaxis2force' */
  uint8_T ctrl_sixaxis2thruster_DWORK2[12];/* '<S7>/ctrl_sixaxis2thruster' */
} DW_ctrl_switch_T;

/* Backward compatible GRT Identifiers */
#define rtB                            ctrl_switch_B
#define BlockIO                        B_ctrl_switch_T
#define rtP                            ctrl_switch_P
#define Parameters                     P_ctrl_switch_T
#define rtDWork                        ctrl_switch_DW
#define D_Work                         DW_ctrl_switch_T

/* Parameters (auto storage) */
struct P_ctrl_switch_T_ {
  real_T Triangle_P1;                  /* Expression: width
                                        * Referenced by: '<S8>/Triangle'
                                        */
  real_T Triangle_P2;                  /* Expression: dtype
                                        * Referenced by: '<S8>/Triangle'
                                        */
  real_T Triangle_P3;                  /* Expression: portnum
                                        * Referenced by: '<S8>/Triangle'
                                        */
  real_T Triangle_P4;                  /* Expression: stime
                                        * Referenced by: '<S8>/Triangle'
                                        */
  real_T Triangle_P5;                  /* Expression: stype
                                        * Referenced by: '<S8>/Triangle'
                                        */
  real_T Triangle_P6;                  /* Expression: btype
                                        * Referenced by: '<S8>/Triangle'
                                        */
  real_T Circle_P1;                    /* Expression: width
                                        * Referenced by: '<S8>/Circle'
                                        */
  real_T Circle_P2;                    /* Expression: dtype
                                        * Referenced by: '<S8>/Circle'
                                        */
  real_T Circle_P3;                    /* Expression: portnum
                                        * Referenced by: '<S8>/Circle'
                                        */
  real_T Circle_P4;                    /* Expression: stime
                                        * Referenced by: '<S8>/Circle'
                                        */
  real_T Circle_P5;                    /* Expression: stype
                                        * Referenced by: '<S8>/Circle'
                                        */
  real_T Circle_P6;                    /* Expression: btype
                                        * Referenced by: '<S8>/Circle'
                                        */
  real_T Cross_P1;                     /* Expression: width
                                        * Referenced by: '<S8>/Cross'
                                        */
  real_T Cross_P2;                     /* Expression: dtype
                                        * Referenced by: '<S8>/Cross'
                                        */
  real_T Cross_P3;                     /* Expression: portnum
                                        * Referenced by: '<S8>/Cross'
                                        */
  real_T Cross_P4;                     /* Expression: stime
                                        * Referenced by: '<S8>/Cross'
                                        */
  real_T Cross_P5;                     /* Expression: stype
                                        * Referenced by: '<S8>/Cross'
                                        */
  real_T Cross_P6;                     /* Expression: btype
                                        * Referenced by: '<S8>/Cross'
                                        */
  real_T Square_P1;                    /* Expression: width
                                        * Referenced by: '<S8>/Square'
                                        */
  real_T Square_P2;                    /* Expression: dtype
                                        * Referenced by: '<S8>/Square'
                                        */
  real_T Square_P3;                    /* Expression: portnum
                                        * Referenced by: '<S8>/Square'
                                        */
  real_T Square_P4;                    /* Expression: stime
                                        * Referenced by: '<S8>/Square'
                                        */
  real_T Square_P5;                    /* Expression: stype
                                        * Referenced by: '<S8>/Square'
                                        */
  real_T Square_P6;                    /* Expression: btype
                                        * Referenced by: '<S8>/Square'
                                        */
  real_T Memory_X0;                    /* Expression: 4
                                        * Referenced by: '<S1>/Memory'
                                        */
  real_T u_BT_P1;                      /* Expression: width
                                        * Referenced by: '<S6>/u_BT'
                                        */
  real_T u_BT_P2;                      /* Expression: dtype
                                        * Referenced by: '<S6>/u_BT'
                                        */
  real_T u_BT_P3;                      /* Expression: portnum
                                        * Referenced by: '<S6>/u_BT'
                                        */
  real_T u_BT_P4;                      /* Expression: stime
                                        * Referenced by: '<S6>/u_BT'
                                        */
  real_T u_BT_P5;                      /* Expression: stype
                                        * Referenced by: '<S6>/u_BT'
                                        */
  real_T u_BT_P6;                      /* Expression: btype
                                        * Referenced by: '<S6>/u_BT'
                                        */
  real_T u_VSP2_P1;                    /* Expression: width
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  real_T u_VSP2_P2;                    /* Expression: dtype
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  real_T u_VSP2_P3;                    /* Expression: portnum
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  real_T u_VSP2_P4;                    /* Expression: stime
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  real_T u_VSP2_P5;                    /* Expression: stype
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  real_T u_VSP2_P6;                    /* Expression: btype
                                        * Referenced by: '<S6>/u_VSP2'
                                        */
  real_T omega_VSP1_P1;                /* Expression: width
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  real_T omega_VSP1_P2;                /* Expression: dtype
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  real_T omega_VSP1_P3;                /* Expression: portnum
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  real_T omega_VSP1_P4;                /* Expression: stime
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  real_T omega_VSP1_P5;                /* Expression: stype
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  real_T omega_VSP1_P6;                /* Expression: btype
                                        * Referenced by: '<S6>/omega_VSP1'
                                        */
  real_T omega_VSP2_P1;                /* Expression: width
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  real_T omega_VSP2_P2;                /* Expression: dtype
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  real_T omega_VSP2_P3;                /* Expression: portnum
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  real_T omega_VSP2_P4;                /* Expression: stime
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  real_T omega_VSP2_P5;                /* Expression: stype
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  real_T omega_VSP2_P6;                /* Expression: btype
                                        * Referenced by: '<S6>/omega_VSP2'
                                        */
  real_T u_VSP1_P1;                    /* Expression: width
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  real_T u_VSP1_P2;                    /* Expression: dtype
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  real_T u_VSP1_P3;                    /* Expression: portnum
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  real_T u_VSP1_P4;                    /* Expression: stime
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  real_T u_VSP1_P5;                    /* Expression: stype
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  real_T u_VSP1_P6;                    /* Expression: btype
                                        * Referenced by: '<S6>/u_VSP1'
                                        */
  real_T alpha_VSP1_P1;                /* Expression: width
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P2;                /* Expression: dtype
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P3;                /* Expression: portnum
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P4;                /* Expression: stime
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P5;                /* Expression: stype
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P6;                /* Expression: btype
                                        * Referenced by: '<S6>/alpha_VSP1'
                                        */
  real_T alpha_VSP2_P1;                /* Expression: width
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P2;                /* Expression: dtype
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P3;                /* Expression: portnum
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P4;                /* Expression: stime
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P5;                /* Expression: stype
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P6;                /* Expression: btype
                                        * Referenced by: '<S6>/alpha_VSP2'
                                        */
  real_T u_BT_P1_g;                    /* Expression: width
                                        * Referenced by: '<S4>/u_BT'
                                        */
  real_T u_BT_P2_n;                    /* Expression: dtype
                                        * Referenced by: '<S4>/u_BT'
                                        */
  real_T u_BT_P3_e;                    /* Expression: portnum
                                        * Referenced by: '<S4>/u_BT'
                                        */
  real_T u_BT_P4_m;                    /* Expression: stime
                                        * Referenced by: '<S4>/u_BT'
                                        */
  real_T u_BT_P5_b;                    /* Expression: stype
                                        * Referenced by: '<S4>/u_BT'
                                        */
  real_T u_BT_P6_k;                    /* Expression: btype
                                        * Referenced by: '<S4>/u_BT'
                                        */
  real_T u_VSP2_P1_i;                  /* Expression: width
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  real_T u_VSP2_P2_e;                  /* Expression: dtype
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  real_T u_VSP2_P3_c;                  /* Expression: portnum
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  real_T u_VSP2_P4_o;                  /* Expression: stime
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  real_T u_VSP2_P5_a;                  /* Expression: stype
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  real_T u_VSP2_P6_o;                  /* Expression: btype
                                        * Referenced by: '<S4>/u_VSP2'
                                        */
  real_T omega_VSP1_P1_c;              /* Expression: width
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  real_T omega_VSP1_P2_k;              /* Expression: dtype
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  real_T omega_VSP1_P3_d;              /* Expression: portnum
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  real_T omega_VSP1_P4_e;              /* Expression: stime
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  real_T omega_VSP1_P5_e;              /* Expression: stype
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  real_T omega_VSP1_P6_d;              /* Expression: btype
                                        * Referenced by: '<S4>/omega_VSP1'
                                        */
  real_T omega_VSP2_P1_d;              /* Expression: width
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  real_T omega_VSP2_P2_g;              /* Expression: dtype
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  real_T omega_VSP2_P3_m;              /* Expression: portnum
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  real_T omega_VSP2_P4_f;              /* Expression: stime
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  real_T omega_VSP2_P5_e;              /* Expression: stype
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  real_T omega_VSP2_P6_l;              /* Expression: btype
                                        * Referenced by: '<S4>/omega_VSP2'
                                        */
  real_T u_VSP1_P1_o;                  /* Expression: width
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  real_T u_VSP1_P2_h;                  /* Expression: dtype
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  real_T u_VSP1_P3_l;                  /* Expression: portnum
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  real_T u_VSP1_P4_k;                  /* Expression: stime
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  real_T u_VSP1_P5_a;                  /* Expression: stype
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  real_T u_VSP1_P6_c;                  /* Expression: btype
                                        * Referenced by: '<S4>/u_VSP1'
                                        */
  real_T alpha_VSP1_P1_o;              /* Expression: width
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P2_j;              /* Expression: dtype
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P3_m;              /* Expression: portnum
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P4_i;              /* Expression: stime
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P5_o;              /* Expression: stype
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P6_a;              /* Expression: btype
                                        * Referenced by: '<S4>/alpha_VSP1'
                                        */
  real_T alpha_VSP2_P1_h;              /* Expression: width
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P2_l;              /* Expression: dtype
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P3_p;              /* Expression: portnum
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P4_k;              /* Expression: stime
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P5_l;              /* Expression: stype
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P6_o;              /* Expression: btype
                                        * Referenced by: '<S4>/alpha_VSP2'
                                        */
  real_T u_BT_P1_p;                    /* Expression: width
                                        * Referenced by: '<S3>/u_BT'
                                        */
  real_T u_BT_P2_h;                    /* Expression: dtype
                                        * Referenced by: '<S3>/u_BT'
                                        */
  real_T u_BT_P3_p;                    /* Expression: portnum
                                        * Referenced by: '<S3>/u_BT'
                                        */
  real_T u_BT_P4_c;                    /* Expression: stime
                                        * Referenced by: '<S3>/u_BT'
                                        */
  real_T u_BT_P5_c;                    /* Expression: stype
                                        * Referenced by: '<S3>/u_BT'
                                        */
  real_T u_BT_P6_f;                    /* Expression: btype
                                        * Referenced by: '<S3>/u_BT'
                                        */
  real_T u_VSP2_P1_n;                  /* Expression: width
                                        * Referenced by: '<S3>/u_VSP2'
                                        */
  real_T u_VSP2_P2_k;                  /* Expression: dtype
                                        * Referenced by: '<S3>/u_VSP2'
                                        */
  real_T u_VSP2_P3_f;                  /* Expression: portnum
                                        * Referenced by: '<S3>/u_VSP2'
                                        */
  real_T u_VSP2_P4_c;                  /* Expression: stime
                                        * Referenced by: '<S3>/u_VSP2'
                                        */
  real_T u_VSP2_P5_f;                  /* Expression: stype
                                        * Referenced by: '<S3>/u_VSP2'
                                        */
  real_T u_VSP2_P6_b;                  /* Expression: btype
                                        * Referenced by: '<S3>/u_VSP2'
                                        */
  real_T omega_VSP1_P1_m;              /* Expression: width
                                        * Referenced by: '<S3>/omega_VSP1'
                                        */
  real_T omega_VSP1_P2_o;              /* Expression: dtype
                                        * Referenced by: '<S3>/omega_VSP1'
                                        */
  real_T omega_VSP1_P3_b;              /* Expression: portnum
                                        * Referenced by: '<S3>/omega_VSP1'
                                        */
  real_T omega_VSP1_P4_d;              /* Expression: stime
                                        * Referenced by: '<S3>/omega_VSP1'
                                        */
  real_T omega_VSP1_P5_f;              /* Expression: stype
                                        * Referenced by: '<S3>/omega_VSP1'
                                        */
  real_T omega_VSP1_P6_n;              /* Expression: btype
                                        * Referenced by: '<S3>/omega_VSP1'
                                        */
  real_T omega_VSP2_P1_e;              /* Expression: width
                                        * Referenced by: '<S3>/omega_VSP2'
                                        */
  real_T omega_VSP2_P2_j;              /* Expression: dtype
                                        * Referenced by: '<S3>/omega_VSP2'
                                        */
  real_T omega_VSP2_P3_l;              /* Expression: portnum
                                        * Referenced by: '<S3>/omega_VSP2'
                                        */
  real_T omega_VSP2_P4_c;              /* Expression: stime
                                        * Referenced by: '<S3>/omega_VSP2'
                                        */
  real_T omega_VSP2_P5_p;              /* Expression: stype
                                        * Referenced by: '<S3>/omega_VSP2'
                                        */
  real_T omega_VSP2_P6_d;              /* Expression: btype
                                        * Referenced by: '<S3>/omega_VSP2'
                                        */
  real_T u_VSP1_P1_n;                  /* Expression: width
                                        * Referenced by: '<S3>/u_VSP1'
                                        */
  real_T u_VSP1_P2_k;                  /* Expression: dtype
                                        * Referenced by: '<S3>/u_VSP1'
                                        */
  real_T u_VSP1_P3_k;                  /* Expression: portnum
                                        * Referenced by: '<S3>/u_VSP1'
                                        */
  real_T u_VSP1_P4_kg;                 /* Expression: stime
                                        * Referenced by: '<S3>/u_VSP1'
                                        */
  real_T u_VSP1_P5_k;                  /* Expression: stype
                                        * Referenced by: '<S3>/u_VSP1'
                                        */
  real_T u_VSP1_P6_k;                  /* Expression: btype
                                        * Referenced by: '<S3>/u_VSP1'
                                        */
  real_T alpha_VSP1_P1_a;              /* Expression: width
                                        * Referenced by: '<S3>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P2_p;              /* Expression: dtype
                                        * Referenced by: '<S3>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P3_h;              /* Expression: portnum
                                        * Referenced by: '<S3>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P4_d;              /* Expression: stime
                                        * Referenced by: '<S3>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P5_m;              /* Expression: stype
                                        * Referenced by: '<S3>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P6_o;              /* Expression: btype
                                        * Referenced by: '<S3>/alpha_VSP1'
                                        */
  real_T alpha_VSP2_P1_p;              /* Expression: width
                                        * Referenced by: '<S3>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P2_j;              /* Expression: dtype
                                        * Referenced by: '<S3>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P3_pm;             /* Expression: portnum
                                        * Referenced by: '<S3>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P4_l;              /* Expression: stime
                                        * Referenced by: '<S3>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P5_c;              /* Expression: stype
                                        * Referenced by: '<S3>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P6_c;              /* Expression: btype
                                        * Referenced by: '<S3>/alpha_VSP2'
                                        */
  real_T u_BT_P1_m;                    /* Expression: width
                                        * Referenced by: '<S5>/u_BT'
                                        */
  real_T u_BT_P2_j;                    /* Expression: dtype
                                        * Referenced by: '<S5>/u_BT'
                                        */
  real_T u_BT_P3_l;                    /* Expression: portnum
                                        * Referenced by: '<S5>/u_BT'
                                        */
  real_T u_BT_P4_l;                    /* Expression: stime
                                        * Referenced by: '<S5>/u_BT'
                                        */
  real_T u_BT_P5_k;                    /* Expression: stype
                                        * Referenced by: '<S5>/u_BT'
                                        */
  real_T u_BT_P6_c;                    /* Expression: btype
                                        * Referenced by: '<S5>/u_BT'
                                        */
  real_T u_VSP2_P1_l;                  /* Expression: width
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  real_T u_VSP2_P2_l;                  /* Expression: dtype
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  real_T u_VSP2_P3_d;                  /* Expression: portnum
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  real_T u_VSP2_P4_l;                  /* Expression: stime
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  real_T u_VSP2_P5_j;                  /* Expression: stype
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  real_T u_VSP2_P6_k;                  /* Expression: btype
                                        * Referenced by: '<S5>/u_VSP2'
                                        */
  real_T omega_VSP1_P1_a;              /* Expression: width
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  real_T omega_VSP1_P2_a;              /* Expression: dtype
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  real_T omega_VSP1_P3_i;              /* Expression: portnum
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  real_T omega_VSP1_P4_o;              /* Expression: stime
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  real_T omega_VSP1_P5_j;              /* Expression: stype
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  real_T omega_VSP1_P6_a;              /* Expression: btype
                                        * Referenced by: '<S5>/omega_VSP1'
                                        */
  real_T omega_VSP2_P1_j;              /* Expression: width
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  real_T omega_VSP2_P2_i;              /* Expression: dtype
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  real_T omega_VSP2_P3_p;              /* Expression: portnum
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  real_T omega_VSP2_P4_fp;             /* Expression: stime
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  real_T omega_VSP2_P5_p3;             /* Expression: stype
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  real_T omega_VSP2_P6_c;              /* Expression: btype
                                        * Referenced by: '<S5>/omega_VSP2'
                                        */
  real_T u_VSP1_P1_f;                  /* Expression: width
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  real_T u_VSP1_P2_b;                  /* Expression: dtype
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  real_T u_VSP1_P3_g;                  /* Expression: portnum
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  real_T u_VSP1_P4_o;                  /* Expression: stime
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  real_T u_VSP1_P5_e;                  /* Expression: stype
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  real_T u_VSP1_P6_n;                  /* Expression: btype
                                        * Referenced by: '<S5>/u_VSP1'
                                        */
  real_T alpha_VSP1_P1_k;              /* Expression: width
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P2_f;              /* Expression: dtype
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P3_i;              /* Expression: portnum
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P4_b;              /* Expression: stime
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P5_p;              /* Expression: stype
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P6_c;              /* Expression: btype
                                        * Referenced by: '<S5>/alpha_VSP1'
                                        */
  real_T alpha_VSP2_P1_o;              /* Expression: width
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P2_jg;             /* Expression: dtype
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P3_j;              /* Expression: portnum
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P4_c;              /* Expression: stime
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P5_j;              /* Expression: stype
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P6_p;              /* Expression: btype
                                        * Referenced by: '<S5>/alpha_VSP2'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: pi
                                        * Referenced by: '<Root>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<Root>/Saturation4'
                                        */
  real_T alpha_VSP2_P1_hj;             /* Expression: width
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P2_m;              /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P3_i;              /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P4_g;              /* Expression: stime
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P5_p;              /* Expression: stype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T alpha_VSP2_P6_c1;             /* Expression: btype
                                        * Referenced by: '<Root>/alpha_VSP2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T u_BT_P1_b;                    /* Expression: width
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P2_e;                    /* Expression: dtype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P3_g;                    /* Expression: portnum
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P4_p;                    /* Expression: stime
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P5_g;                    /* Expression: stype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T u_BT_P6_g;                    /* Expression: btype
                                        * Referenced by: '<Root>/u_BT'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T u_VSP1_P1_j;                  /* Expression: width
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P2_hh;                 /* Expression: dtype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P3_i;                  /* Expression: portnum
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P4_l;                  /* Expression: stime
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P5_n;                  /* Expression: stype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T u_VSP1_P6_b;                  /* Expression: btype
                                        * Referenced by: '<Root>/u_VSP1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T u_VSP2_P1_h;                  /* Expression: width
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P2_n;                  /* Expression: dtype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P3_i;                  /* Expression: portnum
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P4_ch;                 /* Expression: stime
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P5_jc;                 /* Expression: stype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T u_VSP2_P6_h;                  /* Expression: btype
                                        * Referenced by: '<Root>/u_VSP2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: pi
                                        * Referenced by: '<Root>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<Root>/Saturation3'
                                        */
  real_T alpha_VSP1_P1_oe;             /* Expression: width
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P2_a;              /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P3_c;              /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P4_j;              /* Expression: stime
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P5_e;              /* Expression: stype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T alpha_VSP1_P6_k;              /* Expression: btype
                                        * Referenced by: '<Root>/alpha_VSP1'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -1
                                        * Referenced by: '<Root>/Saturation5'
                                        */
  real_T omega_VSP1_P1_c0;             /* Expression: width
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P2_f;              /* Expression: dtype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P3_f;              /* Expression: portnum
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P4_m;              /* Expression: stime
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P5_b;              /* Expression: stype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T omega_VSP1_P6_j;              /* Expression: btype
                                        * Referenced by: '<Root>/omega_VSP1'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 1
                                        * Referenced by: '<Root>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -1
                                        * Referenced by: '<Root>/Saturation6'
                                        */
  real_T omega_VSP2_P1_p;              /* Expression: width
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P2_k;              /* Expression: dtype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P3_b;              /* Expression: portnum
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P4_b;              /* Expression: stime
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P5_i;              /* Expression: stype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T omega_VSP2_P6_h;              /* Expression: btype
                                        * Referenced by: '<Root>/omega_VSP2'
                                        */
  real_T controlinputuexceedsbounds_P1;/* Expression: width
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  real_T controlinputuexceedsbounds_P2;/* Expression: dtype
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  real_T controlinputuexceedsbounds_P3;/* Expression: portnum
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  real_T controlinputuexceedsbounds_P4;/* Expression: stime
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  real_T controlinputuexceedsbounds_P5;/* Expression: stype
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  real_T controlinputuexceedsbounds_P6;/* Expression: btype
                                        * Referenced by: '<Root>/control input u exceeds bounds'
                                        */
  real_T ctrl_student_P1;              /* Expression: width
                                        * Referenced by: '<S7>/ctrl_student'
                                        */
  real_T ctrl_student_P2;              /* Expression: dtype
                                        * Referenced by: '<S7>/ctrl_student'
                                        */
  real_T ctrl_student_P3;              /* Expression: portnum
                                        * Referenced by: '<S7>/ctrl_student'
                                        */
  real_T ctrl_student_P4;              /* Expression: stime
                                        * Referenced by: '<S7>/ctrl_student'
                                        */
  real_T ctrl_student_P5;              /* Expression: stype
                                        * Referenced by: '<S7>/ctrl_student'
                                        */
  real_T ctrl_student_P6;              /* Expression: btype
                                        * Referenced by: '<S7>/ctrl_student'
                                        */
  real_T ctrl_DP_basic_P1;             /* Expression: width
                                        * Referenced by: '<S7>/ctrl_DP_basic'
                                        */
  real_T ctrl_DP_basic_P2;             /* Expression: dtype
                                        * Referenced by: '<S7>/ctrl_DP_basic'
                                        */
  real_T ctrl_DP_basic_P3;             /* Expression: portnum
                                        * Referenced by: '<S7>/ctrl_DP_basic'
                                        */
  real_T ctrl_DP_basic_P4;             /* Expression: stime
                                        * Referenced by: '<S7>/ctrl_DP_basic'
                                        */
  real_T ctrl_DP_basic_P5;             /* Expression: stype
                                        * Referenced by: '<S7>/ctrl_DP_basic'
                                        */
  real_T ctrl_DP_basic_P6;             /* Expression: btype
                                        * Referenced by: '<S7>/ctrl_DP_basic'
                                        */
  real_T ctrl_sixaxis2force_P1;        /* Expression: width
                                        * Referenced by: '<S7>/ctrl_sixaxis2force'
                                        */
  real_T ctrl_sixaxis2force_P2;        /* Expression: dtype
                                        * Referenced by: '<S7>/ctrl_sixaxis2force'
                                        */
  real_T ctrl_sixaxis2force_P3;        /* Expression: portnum
                                        * Referenced by: '<S7>/ctrl_sixaxis2force'
                                        */
  real_T ctrl_sixaxis2force_P4;        /* Expression: stime
                                        * Referenced by: '<S7>/ctrl_sixaxis2force'
                                        */
  real_T ctrl_sixaxis2force_P5;        /* Expression: stype
                                        * Referenced by: '<S7>/ctrl_sixaxis2force'
                                        */
  real_T ctrl_sixaxis2force_P6;        /* Expression: btype
                                        * Referenced by: '<S7>/ctrl_sixaxis2force'
                                        */
  real_T ctrl_sixaxis2thruster_P1;     /* Expression: width
                                        * Referenced by: '<S7>/ctrl_sixaxis2thruster'
                                        */
  real_T ctrl_sixaxis2thruster_P2;     /* Expression: dtype
                                        * Referenced by: '<S7>/ctrl_sixaxis2thruster'
                                        */
  real_T ctrl_sixaxis2thruster_P3;     /* Expression: portnum
                                        * Referenced by: '<S7>/ctrl_sixaxis2thruster'
                                        */
  real_T ctrl_sixaxis2thruster_P4;     /* Expression: stime
                                        * Referenced by: '<S7>/ctrl_sixaxis2thruster'
                                        */
  real_T ctrl_sixaxis2thruster_P5;     /* Expression: stype
                                        * Referenced by: '<S7>/ctrl_sixaxis2thruster'
                                        */
  real_T ctrl_sixaxis2thruster_P6;     /* Expression: btype
                                        * Referenced by: '<S7>/ctrl_sixaxis2thruster'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ctrl_switch_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_ctrl_switch_T ctrl_switch_P;

/* Block signals (auto storage) */
extern B_ctrl_switch_T ctrl_switch_B;

/* Block states (auto storage) */
extern DW_ctrl_switch_T ctrl_switch_DW;

/* Real-time Model object */
extern RT_MODEL_ctrl_switch_T *const ctrl_switch_M;

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
 * '<Root>' : 'ctrl_switch'
 * '<S1>'   : 'ctrl_switch/Switch_subsystem'
 * '<S2>'   : 'ctrl_switch/control limit checking'
 * '<S3>'   : 'ctrl_switch/ctrl_DP_basic'
 * '<S4>'   : 'ctrl_switch/ctrl_sixaxis2force'
 * '<S5>'   : 'ctrl_switch/ctrl_sixaxis2thruster'
 * '<S6>'   : 'ctrl_switch/ctrl_student'
 * '<S7>'   : 'ctrl_switch/indicator'
 * '<S8>'   : 'ctrl_switch/sixaxis'
 * '<S9>'   : 'ctrl_switch/Switch_subsystem/Switch_function'
 * '<S10>'  : 'ctrl_switch/indicator/C'
 */
#endif                                 /* RTW_HEADER_ctrl_switch_h_ */

/*========================================================================*
 * NI VeriStand Generated Code                                            *
 *========================================================================**/
#define NI_SIT_PARAMS
#ifdef NI_ROOTMODEL_ctrl_switch
#ifndef NI_VERISTAND_MODELDATAFILE
#ifdef NI_VERISTAND_MAINMODELFILE

int READSIDE = 0;
int tid = 0;

#ifdef MULTITASKING

P_ctrl_switch_T rtParameter[NUMST+!TID01EQ];
P_ctrl_switch_T *param_lookup[NUMST][2] = {
  { &rtParameter[0], &rtParameter[1] },
};

#else

P_ctrl_switch_T rtParameter[2];

#endif

#else

extern int READSIDE;

#ifdef MULTITASKING

extern int tid;
extern P_ctrl_switch_T* param_lookup[NUMST][2];

#else

extern P_ctrl_switch_T rtParameter[];

#endif
#endif

#ifdef MULTITASKING
#define ctrl_switch_P                  (*param_lookup[tid][READSIDE])
#else
#define ctrl_switch_P                  rtParameter[READSIDE]
#endif
#endif
#endif
