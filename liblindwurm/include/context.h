#ifndef CONTEXT_H
#define CONTEXT_H

#include "backends.h"
#include "liblindwurm_global.h"
#include "backends/TLSControlBackend.h"

#include <filesystem>

namespace LW {
	//! A lindwurm context object
	class Context
	{
	public:
		Context();

		template<LW::backends::AuthenticationBackend>
		bool registerAuthenticationBackend();

		template<LW::backends::ControlBackend>
		bool registerControlBackend();

		template<LW::backends::TransportBackend>
		bool registerTransportBackend();

		template<LW::backends::TunnelBackend>
		bool registerTunnelBackend();

		void registerDefaultBackends();
		void demo();
	};



	template<LW::backends::AuthenticationBackend Backend>
	inline bool registerAuthenticationBackend()
	{
		return false;
	}

	template<LW::backends::ControlBackend Backend>
	inline bool Context::registerControlBackend()
	{
		return false;
	}

	template<LW::backends::TransportBackend Backend>
	inline bool Context::registerTransportBackend()
	{
		return false;
	}

	template<LW::backends::TunnelBackend Backend>
	inline bool Context::registerTunnelBackend()
	{
		return false;
	}
}

#endif // CONTEXT_H
