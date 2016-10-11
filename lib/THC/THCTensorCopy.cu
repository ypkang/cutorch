#include "THCApply.cuh"
#include "timing.h"
#include <iostream>

inline int curGPU() {
  int curDev;
  THCudaCheck(cudaGetDevice(&curDev));
  return curDev;
}

#include "generic/THCTensorCopy.cu"
#include "THCGenerateAllTypes.h"
