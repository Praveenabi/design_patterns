cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

project(app)

set(CMAKE_BUILD_TYPE release)

set(SRC
./src/main.cpp
)

add_executable(${PROJECT_NAME} ${SRC})