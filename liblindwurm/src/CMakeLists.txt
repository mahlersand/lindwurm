add_library(liblindwurm SHARED
  lindwurm.cpp
  lwcontext.cpp
)

target_include_directories(liblindwurm PRIVATE ../include)

target_compile_definitions(liblindwurm PUBLIC cxx_std_20)
