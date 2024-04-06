# OpenCLWrapper

#### 介绍
OpenCLWrapper封装了 OpenCL 动态库调用。使用 OpenCLWrapper 后，无需使用 OpenCL 动态库进行编译构建，以便在不同的操作系统和硬件平台上提供一致的编程体验。






#### 安装教程

```shell
python build.py --platform=Windows --example
python build.py --clean
```

运行build.py安装程序，选项如下：

* platform：可以选择运行平台（Windows、Android、Linux），默认为Windows
* example：构建example可执行文件
* clean：清空构建目录和安装目录





#### 使用说明

可参考example

##### 编译

CMakeLists.txt

```cmake
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../include # 包含OpenCL头文件
    ${CMAKE_CURRENT_SOURCE_DIR}/../external/lib-loader/include # 包含lib-loader头文件
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/../src OPENCL_WRAPPER_SRCS) # 包含OpenCLWrapper源文件
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/../external/lib-loader/src LIB_LOADER_SRCS) # 包含lib-loader源文件

add_definitions(-DUSE_OPENCL_WRAPPER=1) # 使用OpenCLWrapper宏定义，1为使用，0为不使用

add_executable(example example.cpp ${OPENCL_WRAPPER_SRCS} ${LIB_LOADER_SRCS})
```





#### 参与贡献

1.  Fork 本仓库
2.  新建 Feat_xxx 分支
3.  提交代码
4.  新建 Pull Request

