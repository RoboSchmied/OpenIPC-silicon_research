/*
 * 
 */

#ifndef __HI_RESAMPLER_API_H__
#define __HI_RESAMPLER_API_H__

#include "hi_type.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#define HI_ERR_RESAMPLE_PREFIX ERR_RESAMPLE_PREFIX
#define HI_ERR_RESAMPLE_HANDLE ERR_CODE_RESAMPLE_HANDLE
#define HI_ERR_RESAMPLE_PCMBUF ERR_CODE_RESAMPLE_PCMBUF
#define HI_ERR_RESAMPLE_SAMPLE_NUMBER ERR_CODE_RESAMPLE_SAMPLE_NUMBER
#define HI_ERR_RESAMPLE_OUTPCM_SPACE ERR_CODE_RESAMPLE_OUTPCM_SPACE
#define HI_ERR_PCM_CHANNEL ERR_CODE_PCM_CHANNEL
#define HI_ERR_PCM_FORMAT ERR_CODE_PCM_FORMAT
#define HI_ERR_INVALID_BYPASSFLAG ERR_CODE_INVALID_BYPASSFLAG
#define HI_ERR_UNKNOWN ERR_CODE_UNKNOWN
#define HI_ERR_INPUT_EMPTY_POINTER ERR_CODE_INPUT_EMPTY_POINTER

HI_VOID *HI_Resampler_Create(HI_S32 s32Inrate, HI_S32 s32Outrate, HI_S32 s32Chans);

HI_S32 HI_Resampler_Process(HI_VOID *inst, HI_S16 *s16Inbuf, HI_S32 s32Insamps, HI_S16 *s16Outbuf);

HI_VOID HI_Resampler_Destroy(HI_VOID *inst);

HI_S32 HI_Resampler_GetMaxOutputNum(HI_VOID *inst, HI_S32 s32Insamps);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif
#endif /* __HI_RESAMPLER_API_H__ */
