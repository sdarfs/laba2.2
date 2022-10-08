cmake_minimum_required(VERSION 3.23)
project(task2)

set(CMAKE_CXX_STANDARD 14)

add_executable(task2 main.cpp POINTS.cpp POINTS.h LINES.cpp LINES.h TRIANGLES.cpp TRIANGLES.h SQUARES.cpp SQUARES.h CIRCLES.cpp CIRCLES.h)
