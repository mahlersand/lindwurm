set(LIBLINDWURM_SOURCE
	context.cpp
)

add_library(lindwurm
	${LIBLINDWURM_SOURCE}
)

target_include_directories(lindwurm PUBLIC ../include)

target_compile_features(lindwurm PUBLIC cxx_std_20)

target_link_libraries(lindwurm PUBLIC wireguard-linux)

target_link_libraries(lindwurm PUBLIC libldap)
