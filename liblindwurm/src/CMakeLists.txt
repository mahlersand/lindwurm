set(LIBLINDWURM_SOURCE
	context.cpp
)

add_library(liblindwurm
	${LIBLINDWURM_SOURCE}
)

#pybind11_add_module(lindwurm_python SHARED
#	${LIBLINDWURM_SOURCE}
#)

target_include_directories(liblindwurm PUBLIC ../include)

target_compile_features(liblindwurm PUBLIC cxx_std_20)
