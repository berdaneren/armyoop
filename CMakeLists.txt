cmake_minimum_required(VERSION 3.28)
project(armyoop)


add_executable(armyoop main.cpp
        classes.cpp
        classes.h
        weapon.cpp
        tank.cpp
        aircraft.cpp
)
set_property(TARGET armyoop PROPERTY CXX_STANDARD 20)