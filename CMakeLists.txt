cmake_minimum_required(VERSION 3.13)
project(6__Inheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(6__Inheritance
        Employee.cpp
        Employee.h
        Firm.cpp
        StaffMember.cpp
        StaffMember.h
        Volunteer.cpp
        Volunteer.h Executive.h Hourly.h Commission.h Executive.cpp Hourly.cpp Commission.cpp)
