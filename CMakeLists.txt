cmake_minimum_required(VERSION 3.8)
project(Module4)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES firstClass.cpp)
#set(SOURCE_FILES DistanceClass.cpp)
#set(SOURCE_FILES Counter.cpp)
#set(SOURCE_FILES PointClass.cpp)
set(SOURCE_FILES DistanceClassArguments.cpp)
add_executable(Module4 ${SOURCE_FILES})