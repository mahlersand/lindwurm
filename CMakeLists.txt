cmake_minimum_required(VERSION 3.19)
include(FindPkgConfig)

set(LIBLDAP_INSTALL_PATH "/usr" CACHE STRING "The path prefix used for the local installation of libldap (openldap)")
set(LIBLDAPCPP_INSTALL_PATH "/usr" CACHE STRING "The path prefix used for the local installation of libldapc++ (openldap/contrib)")

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

#openldap
add_library(libldap SHARED IMPORTED GLOBAL)
set_property(
	TARGET libldap
	PROPERTY IMPORTED_LOCATION "${LIBLDAP_INSTALL_PATH}/lib/libldap.so"
)
target_include_directories(libldap
	INTERFACE "${LIBLDAP_INSTALL_PATH}/include"
)

#openldapc++
add_library(ldapc++ STATIC IMPORTED GLOBAL)
set_property(
        TARGET ldapc++
	PROPERTY IMPORTED_LOCATION "${LIBLDAPCPP_INSTALL_PATH}/lib/libldapcpp.a"
)
target_include_directories(ldapc++
	INTERFACE "${LIBLDAPCPP_INSTALL_PATH}/include"
)






add_custom_target(readme
	ALL
	SOURCES README.md
)

add_subdirectory(liblindwurm)

add_subdirectory(apps)
