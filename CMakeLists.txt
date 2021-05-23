cmake_minimum_required(VERSION 3.19)
include(FindPkgConfig)
include(FetchContent)

project(lindwurm
	VERSION 0.0.0.1
	DESCRIPTION "A modern high-level VPN")

#Boost asio, property trees
find_package(Boost
	1.75
	REQUIRED
	COMPONENTS system)

#Pybind
find_package(pybind11 REQUIRED)

#GTKmm signals
pkg_search_module(sigc++-3.0 REQUIRED sigc++-3.0>=3.0.6)

#Botan
pkg_search_module(botan-2 REQUIRED botan-2>=2.17.3)

add_custom_target(readme
	ALL
	SOURCES README.md
)

add_subdirectory(liblindwurm)

add_subdirectory(apps)
