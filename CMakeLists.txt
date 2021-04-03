cmake_minimum_required(VERSION 3.19)
include(FindPkgConfig)

project(lindwurm
	VERSION 0.0.0.1
	DESCRIPTION "A modern low-level VPN")

#Boost asio
find_package(Boost
	1.75
	REQUIRED
	COMPONENTS system)

#Pybind
find_package(pybind11 REQUIRED)

#GTKmm signals
pkg_search_module(sigc++-3.0 REQUIRED sigc++-3.0>=3.0.6)

#openSSL
pkg_search_module(libssl REQUIRED libssl>=1.1.1.j)

#Botan
pkg_search_module(botan-2 REQUIRED botan-2>=2.17.3)











add_subdirectory(liblindwurm)

add_subdirectory(apps)
