#!/bin/bash

# 创建构建目录
mkdir -p build
cd build

# 运行 CMake 和 Make
cmake ..
make

# 提示编译完成
echo "编译完成！"