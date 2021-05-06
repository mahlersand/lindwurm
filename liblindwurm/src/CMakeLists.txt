set(LIBLINDWURM_SOURCE
	context.cpp
	instance.cpp
	hub.cpp
	backends/TLSBackend.cpp
	backends/LDAPAuthenticationBackend.cpp
)

set(LIBLINDWURM_HEADERS
	../include/lindwurm
	../include/liblindwurm_global.h
	../include/context.h
	../include/instance.h
	../include/hub.h
	../include/backends.h
	../include/backends/TLSBackend.h
	../include/backends/LDAPAuthenticationBackend.h
)

add_library(lindwurm
	${LIBLINDWURM_SOURCE}
	${LIBLINDWURM_HEADERS}
)

target_include_directories(lindwurm PUBLIC ../include)

target_compile_features(lindwurm PUBLIC cxx_std_20)

#target_link_libraries(lindwurm PRIVATE wireguard-linux)
target_link_libraries(lindwurm PRIVATE ldap)
target_link_libraries(lindwurm PRIVATE lber)
target_link_libraries(lindwurm PRIVATE ldapc++)
target_link_libraries(lindwurm PRIVATE Boost::system)
target_link_libraries(lindwurm PRIVATE pthread)
