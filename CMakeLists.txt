cmake_minimum_required(VERSION 3.0)
project(bitbit)
include_directories(include)
add_executable(bitbit
    src/main.cpp
    src/entity.cpp
    src/architecture.cpp
    src/module.cpp
    src/mux.cpp
)