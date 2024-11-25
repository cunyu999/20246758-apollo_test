cmake_minimum_required(VERSION 3.10)
project(CaptureRegions)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(CaptureRegions src/main.cpp src/capture_regions.cpp)