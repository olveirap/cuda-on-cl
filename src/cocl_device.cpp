#include "cocl/cocl_device.h"

#include <iostream>
using namespace std;

size_t cuDeviceGet (CUdevice *device, int ordinal) {
    COCL_PRINT(cout << "cuDeviceGet redirected" << endl);
    *(int *)device = 0;
    return 0;
}

size_t cuDeviceGetCount (int *count) {
    return cudaGetDeviceCount(count);
}

size_t cudaGetDevice(CUdevice *device) {
    COCL_PRINT(cout << "cudaGetDevice" << endl);
    *device = 0;
    return 0;
}

size_t cudaGetDeviceCount (int *count) {
    COCL_PRINT(cout << "cudaGetDeviceCount" << endl);
    *count = 1;
    return 0;
}

size_t cudaSetDevice (CUdevice device) {
    COCL_PRINT(cout << "cudaSetDevice stub device=" << device << endl);
    return 0;
}
