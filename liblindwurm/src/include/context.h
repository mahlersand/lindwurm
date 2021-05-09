#pragma once

#include <backend/concepts.h>
#include <liblindwurm_global.h>
#include <TLSBackend.h>
#include <LDAPAuthenticationBackend.h>

#include <filesystem>

namespace LW {
	//! A lindwurm context object
	class Context
	{
	public:
		Context();

		template<LW::concepts::AuthenticationBackend>
		bool registerAuthenticationBackend();

		template<LW::concepts::ControlBackend>
		bool registerControlBackend();

		template<LW::concepts::TransportBackend>
		bool registerTransportBackend();

		template<LW::concepts::TunnelBackend>
		bool registerTunnelBackend();

		void registerDefaultBackends();
		void demo();
	};



	template<LW::concepts::AuthenticationBackend Backend>
	inline bool Context::registerAuthenticationBackend()
	{
		return false;
	}

	template<LW::concepts::ControlBackend Backend>
	inline bool Context::registerControlBackend()
	{
		return false;
	}

	template<LW::concepts::TransportBackend Backend>
	inline bool Context::registerTransportBackend()
	{
		return false;
	}

	template<LW::concepts::TunnelBackend Backend>
	inline bool Context::registerTunnelBackend()
	{
		return false;
	}
}
