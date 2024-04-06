/*
 * @Author: Zhou Zijian 
 * @Date: 2023-04-06 00:57:56 
 * @Last Modified by: Zhou Zijian
 * @Last Modified time: 2024-04-05 01:20:02
 */

#include <iostream>
#include <CL/opencl.h>

int main()
{
    void *handle = nullptr;
    cl_uint platformNum;
    int err = clGetPlatformIDs(0, nullptr, &platformNum);
    if (err != CL_SUCCESS) {
        std::cout << "run opencl failed! err=" << err << std::endl;
        return -1;
    }
    std::cout << "platformNum=" << platformNum << std::endl;
    return 0;
}
