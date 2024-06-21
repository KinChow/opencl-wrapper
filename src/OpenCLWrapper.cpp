/*
 * @Author: Zhou Zijian 
 * @Date: 2024-04-05 00:17:01 
 * @Last Modified by: Zhou Zijian
 * @Last Modified time: 2024-04-05 01:29:56
 */

#include <stdexcept>
#include <string>
#include <vector>
#include "LibLoader.h"
#include "OpenCLWrapper.h"

#ifdef USE_OPENCL_WRAPPER

namespace TAG {

bool OpenCLSymbol::UpdateSymbol(void *handle)
{
#define UPDATE_FUNC_PTR(func) func = reinterpret_cast<decltype(func)>(LoadFunc(handle, #func))
    UPDATE_FUNC_PTR(clGetPlatformIDs);
    UPDATE_FUNC_PTR(clGetPlatformInfo);
    UPDATE_FUNC_PTR(clBuildProgram);
    UPDATE_FUNC_PTR(clEnqueueNDRangeKernel);
    UPDATE_FUNC_PTR(clSetKernelArg);
    UPDATE_FUNC_PTR(clReleaseKernel);
    UPDATE_FUNC_PTR(clCreateProgramWithSource);
    UPDATE_FUNC_PTR(clCreateBuffer);
    UPDATE_FUNC_PTR(clCreateImage);
    UPDATE_FUNC_PTR(clCreateImage2D);
    UPDATE_FUNC_PTR(clRetainKernel);
    UPDATE_FUNC_PTR(clCreateKernel);
    UPDATE_FUNC_PTR(clGetProgramInfo);
    UPDATE_FUNC_PTR(clFlush);
    UPDATE_FUNC_PTR(clFinish);
    UPDATE_FUNC_PTR(clReleaseProgram);
    UPDATE_FUNC_PTR(clRetainContext);
    UPDATE_FUNC_PTR(clGetContextInfo);
    UPDATE_FUNC_PTR(clCreateProgramWithBinary);
    UPDATE_FUNC_PTR(clCreateCommandQueue);
    UPDATE_FUNC_PTR(clReleaseCommandQueue);
    UPDATE_FUNC_PTR(clEnqueueCopyBuffer);
    UPDATE_FUNC_PTR(clEnqueueMapBuffer);
    UPDATE_FUNC_PTR(clEnqueueMapImage);
    UPDATE_FUNC_PTR(clEnqueueCopyImage);
    UPDATE_FUNC_PTR(clRetainProgram);
    UPDATE_FUNC_PTR(clGetProgramBuildInfo);
    UPDATE_FUNC_PTR(clEnqueueReadBuffer);
    UPDATE_FUNC_PTR(clEnqueueWriteBuffer);
    UPDATE_FUNC_PTR(clWaitForEvents);
    UPDATE_FUNC_PTR(clReleaseEvent);
    UPDATE_FUNC_PTR(clCreateContext);
    UPDATE_FUNC_PTR(clCreateContextFromType);
    UPDATE_FUNC_PTR(clReleaseContext);
    UPDATE_FUNC_PTR(clRetainCommandQueue);
    UPDATE_FUNC_PTR(clEnqueueUnmapMemObject);
    UPDATE_FUNC_PTR(clRetainMemObject);
    UPDATE_FUNC_PTR(clReleaseMemObject);
    UPDATE_FUNC_PTR(clGetDeviceInfo);
    UPDATE_FUNC_PTR(clGetDeviceIDs);
    UPDATE_FUNC_PTR(clRetainEvent);
    UPDATE_FUNC_PTR(clGetKernelWorkGroupInfo);
    UPDATE_FUNC_PTR(clGetEventInfo);
    UPDATE_FUNC_PTR(clGetEventProfilingInfo);
    UPDATE_FUNC_PTR(clGetMemObjectInfo);
    UPDATE_FUNC_PTR(clGetImageInfo);
    UPDATE_FUNC_PTR(clEnqueueReadImage);
    UPDATE_FUNC_PTR(clEnqueueWriteImage);
    UPDATE_FUNC_PTR(clCreateFromGLBuffer);
    UPDATE_FUNC_PTR(clCreateFromGLTexture);
    UPDATE_FUNC_PTR(clEnqueueAcquireGLObjects);
    UPDATE_FUNC_PTR(clEnqueueReleaseGLObjects);
    UPDATE_FUNC_PTR(clRetainDevice);
    UPDATE_FUNC_PTR(clReleaseDevice);
    UPDATE_FUNC_PTR(clCreateCommandQueueWithProperties);
    UPDATE_FUNC_PTR(clSVMAlloc);
    UPDATE_FUNC_PTR(clSVMFree);
    UPDATE_FUNC_PTR(clEnqueueSVMMap);
    UPDATE_FUNC_PTR(clEnqueueSVMUnmap);
    UPDATE_FUNC_PTR(clSetKernelArgSVMPointer);
#undef UPDATE_FUNC_PTR

#define CHECK_FUNC_PTR(func)   \
    do {                       \
        if (func == nullptr) { \
            return false;      \
        }                      \
    } while (0)

    CHECK_FUNC_PTR(clGetPlatformIDs);
    CHECK_FUNC_PTR(clGetPlatformInfo);
    CHECK_FUNC_PTR(clBuildProgram);
    CHECK_FUNC_PTR(clEnqueueNDRangeKernel);
    CHECK_FUNC_PTR(clSetKernelArg);
    CHECK_FUNC_PTR(clReleaseKernel);
    CHECK_FUNC_PTR(clCreateProgramWithSource);
    CHECK_FUNC_PTR(clCreateBuffer);
    CHECK_FUNC_PTR(clCreateImage);
    CHECK_FUNC_PTR(clCreateImage2D);
    CHECK_FUNC_PTR(clRetainKernel);
    CHECK_FUNC_PTR(clCreateKernel);
    CHECK_FUNC_PTR(clGetProgramInfo);
    CHECK_FUNC_PTR(clFlush);
    CHECK_FUNC_PTR(clFinish);
    CHECK_FUNC_PTR(clReleaseProgram);
    CHECK_FUNC_PTR(clRetainContext);
    CHECK_FUNC_PTR(clGetContextInfo);
    CHECK_FUNC_PTR(clCreateProgramWithBinary);
    CHECK_FUNC_PTR(clCreateCommandQueue);
    CHECK_FUNC_PTR(clReleaseCommandQueue);
    CHECK_FUNC_PTR(clEnqueueCopyBuffer);
    CHECK_FUNC_PTR(clEnqueueMapBuffer);
    CHECK_FUNC_PTR(clEnqueueMapImage);
    CHECK_FUNC_PTR(clEnqueueCopyImage);
    CHECK_FUNC_PTR(clRetainProgram);
    CHECK_FUNC_PTR(clGetProgramBuildInfo);
    CHECK_FUNC_PTR(clEnqueueReadBuffer);
    CHECK_FUNC_PTR(clEnqueueWriteBuffer);
    CHECK_FUNC_PTR(clWaitForEvents);
    CHECK_FUNC_PTR(clReleaseEvent);
    CHECK_FUNC_PTR(clCreateContext);
    CHECK_FUNC_PTR(clCreateContextFromType);
    CHECK_FUNC_PTR(clReleaseContext);
    CHECK_FUNC_PTR(clRetainCommandQueue);
    CHECK_FUNC_PTR(clEnqueueUnmapMemObject);
    CHECK_FUNC_PTR(clRetainMemObject);
    CHECK_FUNC_PTR(clReleaseMemObject);
    CHECK_FUNC_PTR(clGetDeviceInfo);
    CHECK_FUNC_PTR(clGetDeviceIDs);
    CHECK_FUNC_PTR(clRetainEvent);
    CHECK_FUNC_PTR(clGetKernelWorkGroupInfo);
    CHECK_FUNC_PTR(clGetEventInfo);
    CHECK_FUNC_PTR(clGetEventProfilingInfo);
    CHECK_FUNC_PTR(clGetMemObjectInfo);
    CHECK_FUNC_PTR(clGetImageInfo);
    CHECK_FUNC_PTR(clEnqueueReadImage);
    CHECK_FUNC_PTR(clEnqueueWriteImage);
    CHECK_FUNC_PTR(clCreateFromGLBuffer);
    CHECK_FUNC_PTR(clCreateFromGLTexture);
    CHECK_FUNC_PTR(clEnqueueAcquireGLObjects);
    CHECK_FUNC_PTR(clEnqueueReleaseGLObjects);
    CHECK_FUNC_PTR(clRetainDevice);
    CHECK_FUNC_PTR(clReleaseDevice);
    CHECK_FUNC_PTR(clCreateCommandQueueWithProperties);
    CHECK_FUNC_PTR(clSVMAlloc);
    CHECK_FUNC_PTR(clSVMFree);
    CHECK_FUNC_PTR(clEnqueueSVMMap);
    CHECK_FUNC_PTR(clEnqueueSVMUnmap);
    CHECK_FUNC_PTR(clSetKernelArgSVMPointer);
#undef CHECK_FUNC_PTR
    return true;
}

void OpenCLSymbol::ClearSymbol()
{
#define CLEAR_FUNC_PTR(func) func = nullptr
    CLEAR_FUNC_PTR(clGetPlatformIDs);
    CLEAR_FUNC_PTR(clGetPlatformInfo);
    CLEAR_FUNC_PTR(clBuildProgram);
    CLEAR_FUNC_PTR(clEnqueueNDRangeKernel);
    CLEAR_FUNC_PTR(clSetKernelArg);
    CLEAR_FUNC_PTR(clReleaseKernel);
    CLEAR_FUNC_PTR(clCreateProgramWithSource);
    CLEAR_FUNC_PTR(clCreateBuffer);
    CLEAR_FUNC_PTR(clCreateImage);
    CLEAR_FUNC_PTR(clCreateImage2D);
    CLEAR_FUNC_PTR(clRetainKernel);
    CLEAR_FUNC_PTR(clCreateKernel);
    CLEAR_FUNC_PTR(clGetProgramInfo);
    CLEAR_FUNC_PTR(clFlush);
    CLEAR_FUNC_PTR(clFinish);
    CLEAR_FUNC_PTR(clReleaseProgram);
    CLEAR_FUNC_PTR(clRetainContext);
    CLEAR_FUNC_PTR(clGetContextInfo);
    CLEAR_FUNC_PTR(clCreateProgramWithBinary);
    CLEAR_FUNC_PTR(clCreateCommandQueue);
    CLEAR_FUNC_PTR(clReleaseCommandQueue);
    CLEAR_FUNC_PTR(clEnqueueCopyBuffer);
    CLEAR_FUNC_PTR(clEnqueueMapBuffer);
    CLEAR_FUNC_PTR(clEnqueueMapImage);
    CLEAR_FUNC_PTR(clEnqueueCopyImage);
    CLEAR_FUNC_PTR(clRetainProgram);
    CLEAR_FUNC_PTR(clGetProgramBuildInfo);
    CLEAR_FUNC_PTR(clEnqueueReadBuffer);
    CLEAR_FUNC_PTR(clEnqueueWriteBuffer);
    CLEAR_FUNC_PTR(clWaitForEvents);
    CLEAR_FUNC_PTR(clReleaseEvent);
    CLEAR_FUNC_PTR(clCreateContext);
    CLEAR_FUNC_PTR(clCreateContextFromType);
    CLEAR_FUNC_PTR(clReleaseContext);
    CLEAR_FUNC_PTR(clRetainCommandQueue);
    CLEAR_FUNC_PTR(clEnqueueUnmapMemObject);
    CLEAR_FUNC_PTR(clRetainMemObject);
    CLEAR_FUNC_PTR(clReleaseMemObject);
    CLEAR_FUNC_PTR(clGetDeviceInfo);
    CLEAR_FUNC_PTR(clGetDeviceIDs);
    CLEAR_FUNC_PTR(clRetainEvent);
    CLEAR_FUNC_PTR(clGetKernelWorkGroupInfo);
    CLEAR_FUNC_PTR(clGetEventInfo);
    CLEAR_FUNC_PTR(clGetEventProfilingInfo);
    CLEAR_FUNC_PTR(clGetMemObjectInfo);
    CLEAR_FUNC_PTR(clGetImageInfo);
    CLEAR_FUNC_PTR(clEnqueueReadImage);
    CLEAR_FUNC_PTR(clEnqueueWriteImage);
    CLEAR_FUNC_PTR(clCreateFromGLBuffer);
    CLEAR_FUNC_PTR(clCreateFromGLTexture);
    CLEAR_FUNC_PTR(clEnqueueAcquireGLObjects);
    CLEAR_FUNC_PTR(clEnqueueReleaseGLObjects);
    CLEAR_FUNC_PTR(clRetainDevice);
    CLEAR_FUNC_PTR(clReleaseDevice);
    CLEAR_FUNC_PTR(clCreateCommandQueueWithProperties);
    CLEAR_FUNC_PTR(clSVMAlloc);
    CLEAR_FUNC_PTR(clSVMFree);
    CLEAR_FUNC_PTR(clEnqueueSVMMap);
    CLEAR_FUNC_PTR(clEnqueueSVMUnmap);
    CLEAR_FUNC_PTR(clSetKernelArgSVMPointer);
#undef CLEAR_FUNC_PTR
}

const OpenCLSymbol &OpenCLWrapper::GetSymbol() { return m_symbol; }

OpenCLWrapper::OpenCLWrapper()
{
    static const std::vector<std::string> pathOpenCL = {
#if defined(__APPLE__) || defined(__MACOSX)
        "libOpenCL.so",
        "/System/Library/Frameworks/OpenCL.framework/OpenCL"
#elif defined(__ANDROID__)
        "libOpenCL.so",
        "libGLES_mali.so",
        "libmali.so",
        "libOpenCL-pixel.so",
#if defined(__aarch64__)
        // Qualcomm Adreno
        "/system/vendor/lib64/libOpenCL.so",
        "/system/lib64/libOpenCL.so",
        // Mali
        "/system/vendor/lib64/egl/libGLES_mali.so",
        "/system/lib64/egl/libGLES_mali.so",
#else
        // Qualcomm Adreno
        "/system/vendor/lib/libOpenCL.so",
        "/system/lib/libOpenCL.so",
        // Mali
        "/system/vendor/lib/egl/libGLES_mali.so",
        "/system/lib/egl/libGLES_mali.so",
        // other
        "/system/vendor/lib/libPVROCL.so",
        "/data/data/org.pocl.libs/files/lib/libpocl.so"
#endif
#elif defined(__linux__)
        "/usr/lib/libOpenCL.so",
        "/usr/local/lib/libOpenCL.so",
        "/usr/local/lib/libpocl.so",
        "/usr/lib64/libOpenCL.so",
        "/usr/lib32/libOpenCL.so",
        "libOpenCL.so"
#elif defined(_WIN64)
        "C:/Windows/System32/OpenCL.dll",
        "C:/Windows/SysWOW64/OpenCL.dll"
#elif defined(_WIN32)
        "C:/Windows/SysWOW64/OpenCL.dll",
        "C:/Windows/System32/OpenCL.dll"
#endif
    };

    for (const auto &lib : pathOpenCL) {
        if (OpenLib(lib.c_str(), &m_handle) == 0) {
            break;
        }
    }
    if (!m_handle) {
        throw std::runtime_error("OpenCL library not found");
    }
    if (!m_symbol.UpdateSymbol(m_handle)) {
        throw std::runtime_error("OpenCL symbol not found");
    }
}

OpenCLWrapper::~OpenCLWrapper()
{
    m_symbol.ClearSymbol();
    if (m_handle) {
        CloseLib(m_handle);
        m_handle = nullptr;
    }
}

}  // namespace TAG

cl_int CL_API_CALL clGetPlatformIDs(cl_uint num_entries, cl_platform_id *platforms, cl_uint *num_platforms)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetPlatformIDs;
    return func(num_entries, platforms, num_platforms);
}

cl_int CL_API_CALL clGetPlatformInfo(cl_platform_id platform,
    cl_platform_info param_name,
    size_t param_value_size,
    void *param_value,
    size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetPlatformInfo;
    return func(platform, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clGetDeviceIDs(
    cl_platform_id platform, cl_device_type device_type, cl_uint num_entries, cl_device_id *devices, cl_uint *num_devices)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetDeviceIDs;
    return func(platform, device_type, num_entries, devices, num_devices);
}

cl_int CL_API_CALL clGetDeviceInfo(cl_device_id device,
    cl_device_info param_name,
    size_t param_value_size,
    void *param_value,
    size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetDeviceInfo;
    return func(device, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_context CL_API_CALL clCreateContext(const cl_context_properties *properties,
    cl_uint num_devices,
    const cl_device_id *devices,
    void(CL_CALLBACK *pfn_notify)(const char *, const void *, size_t, void *),
    void *user_data,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateContext;
    return func(properties, num_devices, devices, pfn_notify, user_data, errcode_ret);
}

cl_context CL_API_CALL clCreateContextFromType(const cl_context_properties *properties,
    cl_device_type device_type,
    void(CL_CALLBACK *pfn_notify)(const char *, const void *, size_t, void *),
    void *user_data,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateContextFromType;
    return func(properties, device_type, pfn_notify, user_data, errcode_ret);
}

cl_int CL_API_CALL clRetainContext(cl_context context)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainContext;
    return func(context);
}

cl_int CL_API_CALL clReleaseContext(cl_context context)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseContext;
    return func(context);
}

cl_int CL_API_CALL clGetContextInfo(cl_context context,
    cl_context_info param_name,
    size_t param_value_size,
    void *param_value,
    size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetContextInfo;
    return func(context, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_program CL_API_CALL clCreateProgramWithSource(
    cl_context context, cl_uint count, const char **strings, const size_t *lengths, cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateProgramWithSource;
    return func(context, count, strings, lengths, errcode_ret);
}

cl_program CL_API_CALL clCreateProgramWithBinary(cl_context context,
    cl_uint count,
    const cl_device_id *device_list,
    const size_t *length,
    const unsigned char **buffer,
    cl_int *binary_status,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateProgramWithBinary;
    return func(context, count, device_list, length, buffer, binary_status, errcode_ret);
}

cl_int CL_API_CALL clGetProgramInfo(cl_program program,
    cl_program_info param_name,
    size_t param_value_size,
    void *param_value,
    size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetProgramInfo;
    return func(program, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clGetProgramBuildInfo(cl_program program,
    cl_device_id device,
    cl_program_build_info param_name,
    size_t param_value_size,
    void *param_value,
    size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetProgramBuildInfo;
    return func(program, device, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clRetainProgram(cl_program program)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainProgram;
    return func(program);
}

cl_int CL_API_CALL clReleaseProgram(cl_program program)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseProgram;
    return func(program);
}

cl_int CL_API_CALL clBuildProgram(cl_program program,
    cl_uint num_devices,
    const cl_device_id *device_list,
    const char *options,
    void(CL_CALLBACK *pfn_notify)(cl_program program, void *user_data),
    void *user_data)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clBuildProgram;
    return func(program, num_devices, device_list, options, pfn_notify, user_data);
}

cl_kernel CL_API_CALL clCreateKernel(cl_program program, const char *kernelName, cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateKernel;
    return func(program, kernelName, errcode_ret);
}

cl_int CL_API_CALL clRetainKernel(cl_kernel kernel)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainKernel;
    return func(kernel);
}

cl_int CL_API_CALL clReleaseKernel(cl_kernel kernel)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseKernel;
    return func(kernel);
}

cl_int CL_API_CALL clSetKernelArg(cl_kernel kernel, cl_uint arg_index, size_t arg_size, const void *arg_value)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clSetKernelArg;
    return func(kernel, arg_index, arg_size, arg_value);
}

cl_mem CL_API_CALL clCreateBuffer(
    cl_context context, cl_mem_flags flags, size_t size, void *host_ptr, cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateBuffer;
    return func(context, flags, size, host_ptr, errcode_ret);
}

cl_int CL_API_CALL clRetainMemObject(cl_mem memobj)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainMemObject;
    return func(memobj);
}

cl_int CL_API_CALL clReleaseMemObject(cl_mem memobj)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseMemObject;
    return func(memobj);
}

cl_int CL_API_CALL clGetImageInfo(
    cl_mem image, cl_image_info param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetImageInfo;
    return func(image, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clRetainCommandQueue(cl_command_queue command_queue)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainCommandQueue;
    return func(command_queue);
}

cl_int CL_API_CALL clReleaseCommandQueue(cl_command_queue command_queue)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseCommandQueue;
    return func(command_queue);
}

cl_int CL_API_CALL clEnqueueReadBuffer(cl_command_queue command_queue,
    cl_mem buffer,
    cl_bool blocking_read,
    size_t offset,
    size_t size,
    void *ptr,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueReadBuffer;
    return func(
        command_queue, buffer, blocking_read, offset, size, ptr, num_events_in_wait_list, event_wait_list, event);
}

cl_int CL_API_CALL clEnqueueCopyBuffer(cl_command_queue command_queue,
    cl_mem src_buffer,
    cl_mem dst_buffer,
    size_t src_offset,
    size_t dst_offset,
    size_t size,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueCopyBuffer;
    return func(command_queue, src_buffer, dst_buffer, src_offset, dst_offset, size, num_events_in_wait_list,
        event_wait_list, event);
}

cl_int CL_API_CALL clEnqueueWriteBuffer(cl_command_queue command_queue,
    cl_mem buffer,
    cl_bool blocking_write,
    size_t offset,
    size_t size,
    const void *ptr,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueWriteBuffer;
    return func(
        command_queue, buffer, blocking_write, offset, size, ptr, num_events_in_wait_list, event_wait_list, event);
}

cl_int CL_API_CALL clEnqueueReadImage(cl_command_queue command_queue,
    cl_mem cl_image,
    cl_bool is_block,
    const size_t *origin,
    const size_t *region,
    size_t row_pitch,
    size_t slice_pitch,
    void *ptr,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event) CL_API_SUFFIX__VERSION_1_0
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueReadImage;
    return func(command_queue, cl_image, is_block, origin, region, row_pitch, slice_pitch, ptr, num_events_in_wait_list,
        event_wait_list, event);
}

cl_int CL_API_CALL clEnqueueWriteImage(cl_command_queue command_queue,
    cl_mem cl_image,
    cl_bool is_block,
    const size_t *origin,
    const size_t *region,
    size_t row_pitch,
    size_t slice_pitch,
    const void *ptr,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueWriteImage;
    return func(command_queue, cl_image, is_block, origin, region, row_pitch, slice_pitch, ptr, num_events_in_wait_list,
        event_wait_list, event);
}

void *CL_API_CALL clEnqueueMapBuffer(cl_command_queue command_queue,
    cl_mem buffer,
    cl_bool blocking_map,
    cl_map_flags map_flags,
    size_t offset,
    size_t size,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueMapBuffer;
    return func(command_queue, buffer, blocking_map, map_flags, offset, size, num_events_in_wait_list, event_wait_list,
        event, errcode_ret);
}

void *CL_API_CALL clEnqueueMapImage(cl_command_queue command_queue,
    cl_mem image,
    cl_bool blocking_map,
    cl_map_flags map_flags,
    const size_t *origin,
    const size_t *region,
    size_t *image_row_pitch,
    size_t *image_slice_pitch,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueMapImage;
    return func(command_queue, image, blocking_map, map_flags, origin, region, image_row_pitch, image_slice_pitch,
        num_events_in_wait_list, event_wait_list, event, errcode_ret);
}

cl_int CL_API_CALL clEnqueueUnmapMemObject(cl_command_queue command_queue,
    cl_mem memobj,
    void *mapped_ptr,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueUnmapMemObject;
    return func(command_queue, memobj, mapped_ptr, num_events_in_wait_list, event_wait_list, event);
}

cl_int CL_API_CALL clGetKernelWorkGroupInfo(cl_kernel kernel,
    cl_device_id device,
    cl_kernel_work_group_info param_name,
    size_t param_value_size,
    void *param_value,
    size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetKernelWorkGroupInfo;
    return func(kernel, device, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clGetEventProfilingInfo(
    cl_event event, cl_profiling_info param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetEventProfilingInfo;
    return func(event, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clGetMemObjectInfo(
    cl_mem memobj, cl_mem_info param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetMemObjectInfo;
    return func(memobj, param_name, param_value_size, param_value, param_value_size_ret);
}
cl_int CL_API_CALL clEnqueueNDRangeKernel(cl_command_queue command_queue,
    cl_kernel kernel,
    cl_uint work_dim,
    const size_t *global_work_offset,
    const size_t *global_work_size,
    const size_t *local_work_size,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueNDRangeKernel;
    return func(command_queue, kernel, work_dim, global_work_offset, global_work_size, local_work_size,
        num_events_in_wait_list, event_wait_list, event);
}

cl_int CL_API_CALL clWaitForEvents(cl_uint num_events, const cl_event *event_list)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clWaitForEvents;
    return func(num_events, event_list);
}

cl_int CL_API_CALL clRetainEvent(cl_event event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainEvent;
    return func(event);
}

cl_int CL_API_CALL clReleaseEvent(cl_event event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseEvent;
    return func(event);
}

cl_int CL_API_CALL clGetEventInfo(
    cl_event event, cl_event_info param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clGetEventInfo;
    return func(event, param_name, param_value_size, param_value, param_value_size_ret);
}

cl_int CL_API_CALL clFlush(cl_command_queue command_queue)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clFlush;
    return func(command_queue);
}

cl_int CL_API_CALL clFinish(cl_command_queue command_queue)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clFinish;
    return func(command_queue);
}

cl_mem CL_API_CALL clCreateImage(cl_context context,
    cl_mem_flags flags,
    const cl_image_format *image_format,
    const cl_image_desc *image_desc,
    void *host_ptr,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateImage;
    return func(context, flags, image_format, image_desc, host_ptr, errcode_ret);
}

cl_mem CL_API_CALL clCreateImage2D(cl_context context,
    cl_mem_flags flags,
    const cl_image_format *image_format,
    size_t imageWidth,
    size_t imageHeight,
    size_t image_row_pitch,
    void *host_ptr,
    cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateImage2D;
    return func(context, flags, image_format, imageWidth, imageHeight, image_row_pitch, host_ptr, errcode_ret);
}

cl_command_queue CL_API_CALL clCreateCommandQueue(
    cl_context context, cl_device_id device, cl_command_queue_properties properties, cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateCommandQueue;
    return func(context, device, properties, errcode_ret);
}
cl_int CL_API_CALL clEnqueueCopyImage(cl_command_queue queue,
    cl_mem src_image,
    cl_mem dst_image,
    const size_t *src_origin,
    const size_t *dst_origin,
    const size_t *region,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueCopyImage;
    return func(
        queue, src_image, dst_image, src_origin, dst_origin, region, num_events_in_wait_list, event_wait_list, event);
}

cl_mem CL_API_CALL clCreateFromGLBuffer(cl_context context, cl_mem_flags flags, cl_GLuint bufobj, int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateFromGLBuffer;
    return func(context, flags, bufobj, errcode_ret);
}

cl_mem CL_API_CALL clCreateFromGLTexture(
    cl_context context, cl_mem_flags flags, cl_GLenum target, cl_GLint miplevel, cl_GLuint texture, cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateFromGLTexture;
    return func(context, flags, target, miplevel, texture, errcode_ret);
}

cl_int CL_API_CALL clEnqueueAcquireGLObjects(cl_command_queue command_queue,
    cl_uint num_objects,
    const cl_mem *mem_objects,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueAcquireGLObjects;
    return func(command_queue, num_objects, mem_objects, num_events_in_wait_list, event_wait_list, event);
}

cl_int CL_API_CALL clEnqueueReleaseGLObjects(cl_command_queue command_queue,
    cl_uint num_objects,
    const cl_mem *mem_objects,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueReleaseGLObjects;
    return func(command_queue, num_objects, mem_objects, num_events_in_wait_list, event_wait_list, event);
}

cl_int CL_API_CALL clRetainDevice(cl_device_id device)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clRetainDevice;
    return func(device);
}

cl_int CL_API_CALL clReleaseDevice(cl_device_id device)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clReleaseDevice;
    return func(device);
}

// clCreateCommandQueueWithProperties wrapper
cl_command_queue CL_API_CALL clCreateCommandQueueWithProperties(
    cl_context context, cl_device_id device, const cl_queue_properties *properties, cl_int *errcode_ret)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clCreateCommandQueueWithProperties;
    return func(context, device, properties, errcode_ret);
}

// clSVMAlloc wrapper, use OpenCLWrapper function.
void *CL_API_CALL clSVMAlloc(cl_context context, cl_mem_flags flags, size_t size, cl_uint align)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clSVMAlloc;
    return func(context, flags, size, align);
}

// clSVMFree wrapper, use OpenCLWrapper function.
void CL_API_CALL clSVMFree(cl_context context, void *buffer)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clSVMFree;
    func(context, buffer);
}

// clEnqueueSVMMap wrapper, use OpenCLWrapper function.
cl_int CL_API_CALL clEnqueueSVMMap(cl_command_queue command_queue,
    cl_bool blocking,
    cl_map_flags flags,
    void *host_ptr,
    size_t size,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueSVMMap;
    return func(command_queue, blocking, flags, host_ptr, size, num_events_in_wait_list, event_wait_list, event);
}

// clEnqueueSVMUnmap wrapper, use OpenCLWrapper function.
cl_int CL_API_CALL clEnqueueSVMUnmap(cl_command_queue command_queue,
    void *host_ptr,
    cl_uint num_events_in_wait_list,
    const cl_event *event_wait_list,
    cl_event *event)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clEnqueueSVMUnmap;
    return func(command_queue, host_ptr, num_events_in_wait_list, event_wait_list, event);
}

// clSetKernelArgSVMPointer wrapper, use OpenCLWrapper function.
cl_int CL_API_CALL clSetKernelArgSVMPointer(cl_kernel kernel, cl_uint index, const void *host_ptr)
{
    auto func = TAG::OpenCLWrapper::GetInstance().GetSymbol().clSetKernelArgSVMPointer;
    return func(kernel, index, host_ptr);
}

#undef CHECK_SYMBOL

#endif  // USE_OPENCL_WRAPPER