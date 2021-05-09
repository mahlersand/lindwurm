#Source list
set(LWHeadersApi
	include/lindwurm
	include/liblindwurm_global.h
	include/context.h
	include/instance.h
	include/hub.h
	include/backend/concepts.h
	include/backend/BackendBase.h
	include/backend/AuthenticationBackend.h
	include/backend/ControlBackend.h
	include/backend/TransportBackend.h
	include/backend/TunnelBackend.h
)

set(LWHeadersPrivate

)

set(LWCoreSources
	context.cpp
	instance.cpp
	hub.cpp
)


#lwcore contains the core features of liblindwurm
add_library(lwcore STATIC
	${LWHeadersApi}
	${LWHeadersPrivate}
	${LWCoreSources}
)
target_compile_features(lwcore
	PRIVATE cxx_std_20
)

target_include_directories(lwcore
	PUBLIC include
)

target_link_libraries(lwcore
	#Link against the default backends for the include directories
	PRIVATE lwbackends
#	PRIVATE wireguard-linux
    PRIVATE Boost::system
	PRIVATE pthread
)
