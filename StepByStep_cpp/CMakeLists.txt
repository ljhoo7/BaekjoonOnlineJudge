cmake_minimum_required(VERSION 3.10.0)

set(PROJECT_NAME BaekjunJudgeStepByStep)

project(${PROJECT_NAME})

file(GLOB SRC_FILES *.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})