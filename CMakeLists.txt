cmake_minimum_required(VERSION 3.17)
project(LoopSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(LoopSystem src/main.cpp src/Loop.cpp src/Loop.h src/api/Material.h src/api/FeedbackSystem.h src/Group.cpp src/Group.h)