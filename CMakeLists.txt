cmake_minimum_required(VERSION 3.20)
project(RayTracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(RayTracing main.cpp main.cpp vec3.cpp vec3.h color.h cmake-build-debug/ray.h)
