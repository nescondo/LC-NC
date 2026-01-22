cmake_minimum_required(VERSION 4.1)
project(LC_NC)

set(CMAKE_CXX_STANDARD 14)

include_directories(Data_Structures/Vector)

add_executable(LC_NC
        Data_Structures/Vector/vector.cpp
        Data_Structures/Vector/vector.h
        Data_Structures/main.cpp)
