add_subdirectory(external)

add_subdirectory(backends)

add_subdirectory(src)



add_library(lindwurm
	liblindwurm.cpp
)
target_compile_features(lwcore
	PUBLIC cxx_std_20
)

target_link_libraries(lindwurm
	PUBLIC lwcore
	PUBLIC lwbackends
)

