add_library(wireguard-linux STATIC
	wireguard-tools/contrib/embeddable-wg-library/wireguard.c
)

target_include_directories(wireguard-linux PUBLIC
	wireguard-tools/contrib/embeddable-wg-library
)

#add_custom_command(
#	OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/libldap.a"
#	WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
#	COMMAND mkdir -p openldap
#	COMMAND cd openldap
#	COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/openldap/configure"
#	COMMAND make -j
#	COMMAND cp "${CMAKE_CURRENT_BINARY_DIR}/openldap/libraries/libldap/.libs/libldap.a" "${CMAKE_CURRENT_BINARY_DIR}/libldap.a"
#	COMMAND cd "${CMAKE_CURRENT_BINARY_DIR}"
#	COMMAND rm -rf openldap
#)

#add_custom_target(libldap_build
#	DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/libldap.a"
#)

##libldap library target
#add_library(libldap-static STATIC IMPORTED GLOBAL)
#set_property(
#	TARGET libldap-static
#	PROPERTY IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/libldap.a"
#)

#target_include_directories(libldap-static
#	INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/openldap/include"
#)

#add_dependencies(libldap-static
#	libldap_build
#)

#add_custom_command(
#	OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/openldap/contrib/ldapc++/reconfigured.txt"
#	COMMAND autoupdate
#	COMMAND autoconf -f -i
#	COMMAND touch reconfigured.txt
#	WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/openldap/contrib/ldapc++"
#	COMMENT "Reconfigure ldapc++"
#)

#add_custom_target(reconfigure-ldapc++ ALL
#	DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/openldap/contrib/ldapc++/reconfigured.txt"
#)

