#pragma once

#include <string>
#include <type_traits>

#include <backend/BackendBase.h>
#include <backend/AuthenticationBackend.h>
#include <backend/ControlBackend.h>
#include <backend/TransportBackend.h>
#include <backend/TunnelBackend.h>

namespace LW::concepts {
	template <typename T>
	concept Backend = requires (T instance)
	{
	    requires std::is_base_of_v<LW::backend::BackendBase, T>;
    };

	/*!
	 *	Handles authentication of clients to the server
	 *		- in principle, authenticates a connection against a user entry
	 *		- may create new users
	 *		e.g. LDAP authentication and TLSauth
	 */
	template<typename T>
	concept AuthenticationBackend = requires (T instance)
	{
	    requires std::is_base_of_v<LW::backend::AuthenticationBackend, T>;
    };

	/*!
	 *	Receives initial connection requests and negotiates connection settings
	 *		- requires synchronous connection
	 *		- handles traffic of authentication
	 *		e.g. TLS or later on TCP-like stuff over ICMP
	 */
	template<typename T>
	concept ControlBackend = requires
	{
	    requires std::is_base_of_v<LW::backend::ControlBackend, T>;
    };

	/*!
	 *	Implements the connection means via which the VPN traffic will be sent
	 *		e.g. DTLS for the standard implementation
	 */
	template<typename T>
	concept TransportBackend = requires
	{
	    requires std::is_base_of_v<LW::backend::TransportBackend, T>;
    };

	/*!
	 *	Local tunnel/virtual network device handling
	 */
	template<typename T>
	concept TunnelBackend = requires
	{
	    requires Backend<T>;
    };
}
