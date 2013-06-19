cmake_minimum_required(VERSION 2.6)
project(AWBot)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(AWBot ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(AWBot ${PROJECT_SOURCE_DIR}/lib/libaw_sdk.50.so.84)
