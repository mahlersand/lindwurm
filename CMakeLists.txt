cmake_minimum_required(VERSION 3.19)

project(lindwurm
    VERSION 0.0.0.1
    DESCRIPTION "A modern low-level VPN")

add_subdirectory(liblindwurm)

add_subdirectory(apps)
