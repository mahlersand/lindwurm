cmake_minimum_required(VERSION 3.19)
include(FindPkgConfig)

find_package(Boost
    1.75
    REQUIRED
    COMPONENTS system)

find_package(pybind11 REQUIRED)

#GTKmm signals
pkg_search_module(sigc++-3.0 REQUIRED sigc++-3.0>=3.0.6)

#openSSL
pkg_search_module(libssl REQUIRED libssl>=1.1.1.j)

#Botan
pkg_search_module(botan-2 REQUIRED botan-2>=2.17.3)




#Add the source subdirectory
add_subdirectory(src)
