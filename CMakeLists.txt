cmake_minimum_required(VERSION 3.16)
project(Wargame_a)

set(CMAKE_CXX_STANDARD 20)

add_executable(War-Game DemoGame.cpp FootSoldier.cpp FootCommander.cpp Board.cpp)