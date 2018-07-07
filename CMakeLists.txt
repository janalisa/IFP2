cmake_minimum_required(VERSION 3.10)
project(IFP)

set(CMAKE_CXX_STANDARD 11)

add_executable(IFP main.cpp vektor.h vektor.cpp inhomo.cpp cmake-build-debug/feld.h)