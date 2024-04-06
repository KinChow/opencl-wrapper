/*
 * @Author: Zhou Zijian 
 * @Date: 2024-04-04 11:01:47 
 * @Last Modified by: Zhou Zijian
 * @Last Modified time: 2024-04-05 01:19:50
 */

#ifndef OPENCLWRAPPER_H
#define OPENCLWRAPPER_H

#include <CL/opencl.h>

#ifdef USE_OPENCL_WRAPPER
namespace TAG {

class OpenCLSymbol {
public:
    bool UpdateSymbol(void *handle);
    void ClearSymbol();

#define SYMBOL_TYPE(func) using func##Func = decltype(&func)
    SYMBOL_TYPE(clGetPlatformIDs);
    SYMBOL_TYPE(clGetPlatformInfo);
    SYMBOL_TYPE(clBuildProgram);
    SYMBOL_TYPE(clEnqueueNDRangeKernel);
    SYMBOL_TYPE(clSetKernelArg);
    SYMBOL_TYPE(clReleaseKernel);
    SYMBOL_TYPE(clCreateProgramWithSource);
    SYMBOL_TYPE(clCreateBuffer);
    SYMBOL_TYPE(clCreateImage);
    SYMBOL_TYPE(clCreateImage2D);
    SYMBOL_TYPE(clRetainKernel);
    SYMBOL_TYPE(clCreateKernel);
    SYMBOL_TYPE(clGetProgramInfo);
    SYMBOL_TYPE(clFlush);
    SYMBOL_TYPE(clFinish);
    SYMBOL_TYPE(clReleaseProgram);
    SYMBOL_TYPE(clRetainContext);
    SYMBOL_TYPE(clGetContextInfo);
    SYMBOL_TYPE(clCreateProgramWithBinary);
    SYMBOL_TYPE(clCreateCommandQueue);
    SYMBOL_TYPE(clReleaseCommandQueue);
    SYMBOL_TYPE(clEnqueueCopyBuffer);
    SYMBOL_TYPE(clEnqueueMapBuffer);
    SYMBOL_TYPE(clEnqueueMapImage);
    SYMBOL_TYPE(clEnqueueCopyImage);
    SYMBOL_TYPE(clRetainProgram);
    SYMBOL_TYPE(clGetProgramBuildInfo);
    SYMBOL_TYPE(clEnqueueReadBuffer);
    SYMBOL_TYPE(clEnqueueWriteBuffer);
    SYMBOL_TYPE(clWaitForEvents);
    SYMBOL_TYPE(clReleaseEvent);
    SYMBOL_TYPE(clCreateContext);
    SYMBOL_TYPE(clCreateContextFromType);
    SYMBOL_TYPE(clReleaseContext);
    SYMBOL_TYPE(clRetainCommandQueue);
    SYMBOL_TYPE(clEnqueueUnmapMemObject);
    SYMBOL_TYPE(clRetainMemObject);
    SYMBOL_TYPE(clReleaseMemObject);
    SYMBOL_TYPE(clGetDeviceInfo);
    SYMBOL_TYPE(clGetDeviceIDs);
    SYMBOL_TYPE(clRetainEvent);
    SYMBOL_TYPE(clGetKernelWorkGroupInfo);
    SYMBOL_TYPE(clGetEventInfo);
    SYMBOL_TYPE(clGetEventProfilingInfo);
    SYMBOL_TYPE(clGetMemObjectInfo);
    SYMBOL_TYPE(clGetImageInfo);
    SYMBOL_TYPE(clEnqueueReadImage);
    SYMBOL_TYPE(clEnqueueWriteImage);
    SYMBOL_TYPE(clCreateFromGLBuffer);
    SYMBOL_TYPE(clCreateFromGLTexture);
    SYMBOL_TYPE(clEnqueueAcquireGLObjects);
    SYMBOL_TYPE(clEnqueueReleaseGLObjects);
    SYMBOL_TYPE(clRetainDevice);
    SYMBOL_TYPE(clReleaseDevice);
    SYMBOL_TYPE(clCreateCommandQueueWithProperties);
    SYMBOL_TYPE(clSVMAlloc);
    SYMBOL_TYPE(clSVMFree);
    SYMBOL_TYPE(clEnqueueSVMMap);
    SYMBOL_TYPE(clEnqueueSVMUnmap);
    SYMBOL_TYPE(clSetKernelArgSVMPointer);
#define DEFINE_FUNC_PTR(func) func##Func func = nullptr
    DEFINE_FUNC_PTR(clGetPlatformIDs);
    DEFINE_FUNC_PTR(clGetPlatformInfo);
    DEFINE_FUNC_PTR(clBuildProgram);
    DEFINE_FUNC_PTR(clEnqueueNDRangeKernel);
    DEFINE_FUNC_PTR(clSetKernelArg);
    DEFINE_FUNC_PTR(clReleaseKernel);
    DEFINE_FUNC_PTR(clCreateProgramWithSource);
    DEFINE_FUNC_PTR(clCreateBuffer);
    DEFINE_FUNC_PTR(clCreateImage);
    DEFINE_FUNC_PTR(clCreateImage2D);
    DEFINE_FUNC_PTR(clRetainKernel);
    DEFINE_FUNC_PTR(clCreateKernel);
    DEFINE_FUNC_PTR(clGetProgramInfo);
    DEFINE_FUNC_PTR(clFlush);
    DEFINE_FUNC_PTR(clFinish);
    DEFINE_FUNC_PTR(clReleaseProgram);
    DEFINE_FUNC_PTR(clRetainContext);
    DEFINE_FUNC_PTR(clGetContextInfo);
    DEFINE_FUNC_PTR(clCreateProgramWithBinary);
    DEFINE_FUNC_PTR(clCreateCommandQueue);
    DEFINE_FUNC_PTR(clReleaseCommandQueue);
    DEFINE_FUNC_PTR(clEnqueueCopyBuffer);
    DEFINE_FUNC_PTR(clEnqueueMapBuffer);
    DEFINE_FUNC_PTR(clEnqueueMapImage);
    DEFINE_FUNC_PTR(clEnqueueCopyImage);
    DEFINE_FUNC_PTR(clRetainProgram);
    DEFINE_FUNC_PTR(clGetProgramBuildInfo);
    DEFINE_FUNC_PTR(clEnqueueReadBuffer);
    DEFINE_FUNC_PTR(clEnqueueWriteBuffer);
    DEFINE_FUNC_PTR(clWaitForEvents);
    DEFINE_FUNC_PTR(clReleaseEvent);
    DEFINE_FUNC_PTR(clCreateContext);
    DEFINE_FUNC_PTR(clCreateContextFromType);
    DEFINE_FUNC_PTR(clReleaseContext);
    DEFINE_FUNC_PTR(clRetainCommandQueue);
    DEFINE_FUNC_PTR(clEnqueueUnmapMemObject);
    DEFINE_FUNC_PTR(clRetainMemObject);
    DEFINE_FUNC_PTR(clReleaseMemObject);
    DEFINE_FUNC_PTR(clGetDeviceInfo);
    DEFINE_FUNC_PTR(clGetDeviceIDs);
    DEFINE_FUNC_PTR(clRetainEvent);
    DEFINE_FUNC_PTR(clGetKernelWorkGroupInfo);
    DEFINE_FUNC_PTR(clGetEventInfo);
    DEFINE_FUNC_PTR(clGetEventProfilingInfo);
    DEFINE_FUNC_PTR(clGetMemObjectInfo);
    DEFINE_FUNC_PTR(clGetImageInfo);
    DEFINE_FUNC_PTR(clEnqueueReadImage);
    DEFINE_FUNC_PTR(clEnqueueWriteImage);
    DEFINE_FUNC_PTR(clCreateFromGLBuffer);
    DEFINE_FUNC_PTR(clCreateFromGLTexture);
    DEFINE_FUNC_PTR(clEnqueueAcquireGLObjects);
    DEFINE_FUNC_PTR(clEnqueueReleaseGLObjects);
    DEFINE_FUNC_PTR(clRetainDevice);
    DEFINE_FUNC_PTR(clReleaseDevice);
    DEFINE_FUNC_PTR(clCreateCommandQueueWithProperties);
    DEFINE_FUNC_PTR(clSVMAlloc);
    DEFINE_FUNC_PTR(clSVMFree);
    DEFINE_FUNC_PTR(clEnqueueSVMMap);
    DEFINE_FUNC_PTR(clEnqueueSVMUnmap);
    DEFINE_FUNC_PTR(clSetKernelArgSVMPointer);
#undef DEFINE_FUNC_PTR
};

class OpenCLWrapper {
public:
    static OpenCLWrapper &GetInstance()
    {
        static OpenCLWrapper instance;
        return instance;
    }
    const OpenCLSymbol &GetSymbol();
    // const string GetVersion();

private:
    OpenCLWrapper();
    ~OpenCLWrapper();
    OpenCLSymbol m_symbol;
    void *m_handle;
};

}  // namespace TAG
#endif  // USE_OPENCL_WRAPPER
#endif  // OPENCLWRAPPER_H