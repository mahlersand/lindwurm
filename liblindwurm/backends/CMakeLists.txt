add_library(lwbackends STATIC
	TLSBackend.h
	TLSBackend.cpp
	LDAPAuthenticationBackend.h
	LDAPAuthenticationBackend.cpp
)
target_compile_features(lwbackends
	PRIVATE cxx_std_20
)

target_include_directories(lwbackends
	PUBLIC .
)

target_link_libraries(lwbackends
	PRIVATE lwcore
	PRIVATE ldap
	PRIVATE lber
	PRIVATE ldapc++
)
