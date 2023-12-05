cmake_minimum_required(VERSION 3.26)
project(Home)

set(CMAKE_CXX_STANDARD 17)

add_executable(Home main.cpp
        Person.h
        ApartmentOwner.h
        Apartment.h
        House.h)
