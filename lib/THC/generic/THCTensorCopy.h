#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "generic/THCTensorCopy.h"
#else

THC_API void THCTensor_(copy)(THCState *state, THCTensor *self, THCTensor *src);
THC_API void THCTensor_(copyByte)(THCState *state, THCTensor *self, THByteTensor *src);
THC_API void THCTensor_(copyChar)(THCState *state, THCTensor *self, THCharTensor *src);
THC_API void THCTensor_(copyShort)(THCState *state, THCTensor *self, THShortTensor *src);
THC_API void THCTensor_(copyInt)(THCState *state, THCTensor *self, THIntTensor *src);
THC_API void THCTensor_(copyLong)(THCState *state, THCTensor *self, THLongTensor *src);
THC_API void THCTensor_(copyFloat)(THCState *state, THCTensor *self, THFloatTensor *src);
THC_API void THCTensor_(copyDouble)(THCState *state, THCTensor *self, THDoubleTensor *src);

THC_API void THCTensor_(copyCudaByte)(THCState *state, THCTensor *storage, struct THCudaByteTensor *src);
THC_API void THCTensor_(copyCudaChar)(THCState *state, THCTensor *storage, struct THCudaCharTensor *src);
THC_API void THCTensor_(copyCudaShort)(THCState *state, THCTensor *storage, struct THCudaShortTensor *src);
THC_API void THCTensor_(copyCudaInt)(THCState *state, THCTensor *storage, struct THCudaIntTensor *src);
THC_API void THCTensor_(copyCudaLong)(THCState *state, THCTensor *storage, struct THCudaLongTensor *src);
THC_API void THCTensor_(copyCudaFloat)(THCState *state, THCTensor *storage, struct THCudaTensor *src);
THC_API void THCTensor_(copyCudaDouble)(THCState *state, THCTensor *storage, struct THCudaDoubleTensor *src);

THC_API void TH_CONCAT_2(THByteTensor_copyCuda  , Real)  (THCState *state, THByteTensor *self, THCTensor *src);
THC_API void TH_CONCAT_2(THCharTensor_copyCuda  , Real)  (THCState *state, THCharTensor *self, THCTensor *src);
THC_API void TH_CONCAT_2(THShortTensor_copyCuda , Real)  (THCState *state, THShortTensor *self, THCTensor *src);
THC_API void TH_CONCAT_2(THIntTensor_copyCuda   , Real)  (THCState *state, THIntTensor *self, THCTensor *src);
THC_API void TH_CONCAT_2(THLongTensor_copyCuda  , Real)  (THCState *state, THLongTensor *self, THCTensor *src);
THC_API void TH_CONCAT_2(THFloatTensor_copyCuda , Real)  (THCState *state, THFloatTensor *self, THCTensor *src);
THC_API void TH_CONCAT_2(THDoubleTensor_copyCuda, Real)  (THCState *state, THDoubleTensor *self, THCTensor *src);
THC_API void THCTensor_(copyCuda) (THCState *state, THCTensor *self, THCTensor *src);
THC_API void THTensor_(copyCuda) (THCState *state, THTensor *self, THCTensor *src);
THC_API void THCTensor_(copyCPU) (THCState *state, THCTensor *self, THTensor *src);

THC_API void THCTensor_(copyAsyncCPU)(THCState *state, THCTensor *self, THTensor *src);
THC_API void THTensor_(copyAsyncCuda)(THCState *state, THTensor *self, THCTensor *src);

#endif
