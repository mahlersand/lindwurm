add_library(liblindwurm
  context.cpp
)

target_include_directories(liblindwurm PUBLIC ../include)

target_compile_features(liblindwurm PRIVATE cxx_std_20)
