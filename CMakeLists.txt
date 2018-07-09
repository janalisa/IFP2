cmake_minimum_required(VERSION 3.10)
project(IFP)

set(CMAKE_CXX_STANDARD 11)

find_package(ROOT)


add_executable(IFP main.cpp vektor.h vektor.cpp inhomo.cpp feld.h feld.cpp)

target_link_libraries(IFP ${ROOT_LIBRARIES})