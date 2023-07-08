cmake_minimum_required(VERSION 3.17)
project(Patron_Singleton)

set(CMAKE_CXX_STANDARD 20)

add_executable(Patron_Singleton main.cpp Singleton.h Singleton.cpp)