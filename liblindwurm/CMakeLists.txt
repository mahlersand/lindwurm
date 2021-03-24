cmake_minimum_required(VERSION 3.14)
include(FindPkgConfig)

project(liblindwurm
    VERSION 0.0.0.1
    LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost
    1.75
    REQUIRED
    COMPONENTS python)

#GTKmm signals
pkg_search_module(sigc++-3.0 REQUIRED sigc++-3.0>=3.0.6)

#openSSL
pkg_search_module(libssl REQUIRED libssl>=1.1.1.j)

#Botan
pkg_search_module(botan-2 REQUIRED botan-2>=2.17.3)

add_library(liblindwurm SHARED
  liblindwurm_global.h
  lindwurm.cpp
  lindwurm.h
)

target_compile_definitions(liblindwurm PRIVATE LIBLINDWURM_LIBRARY)
