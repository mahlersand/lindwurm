set(LIBLINDWURM_SOURCE
	context.cpp
	backends/TLSControlBackend.cpp
	backends/LDAPAuthenticationBackend.cpp
)

set(LIBLINDWURM_HEADERS
	../include/context.cpp
	../include/backends/TLSControlBackend.h
)

add_library(lindwurm
	${LIBLINDWURM_SOURCE}
)

target_include_directories(lindwurm PUBLIC ../include)

target_compile_features(lindwurm PUBLIC cxx_std_20)

target_link_libraries(lindwurm PRIVATE wireguard-linux)
target_link_libraries(lindwurm PRIVATE ldap)
target_link_libraries(lindwurm PRIVATE lber)
target_link_libraries(lindwurm PRIVATE ldapc++)
target_link_libraries(lindwurm PRIVATE Boost::system)
target_link_libraries(lindwurm PRIVATE pthread)
