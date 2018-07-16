cmake_minimum_required(VERSION 3.10)
project(IFP)


set(CMAKE_CXX_STANDARD 11)
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})
find_package(ROOT REQUIRED COMPONENTS MathCore Hist Tree)


add_executable(IFP main.cpp vektor.h vektor.cpp inhomo.cpp feld.h feld.cpp)

target_link_libraries(IFP ${ROOT_LIBRARIES})