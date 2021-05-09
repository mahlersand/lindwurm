set(LIBLDAP_INSTALL_PATH "/usr" CACHE STRING "The path prefix used for the local installation of libldap (openldap)")
set(LIBLDAPCPP_INSTALL_PATH "/usr" CACHE STRING "The path prefix used for the local installation of libldapc++ (openldap/contrib)")


#wireguard
add_library(wireguard-linux STATIC
	wireguard-tools/contrib/embeddable-wg-library/wireguard.c
)

target_include_directories(wireguard-linux PUBLIC
	wireguard-tools/contrib/embeddable-wg-library
)

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
