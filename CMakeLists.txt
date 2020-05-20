cmake_minimum_required(VERSION 3.16)
project(Wargame_a)

set(CMAKE_CXX_STANDARD 20)

add_executable(Wargame_a Demo.cpp ParamedicCommander.cpp Test.cpp Game.cpp Game.hpp)