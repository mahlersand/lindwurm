#pragma once

#include <string>
#include <type_traits>

namespace LW::backends {
	template <typename T>
	concept Backend = requires (T instance)
	{
	    //! The common name of the backend
	    { T::cname() } -> std::same_as<std::string>;

	    //! Version information about the backend
	    { T::version() } -> std::same_as<std::string>;
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
	    requires Backend<T>;
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
	    requires Backend<T>;
    };

	/*!
	 *	Implements the connection means via which the VPN traffic will be sent
	 *		e.g. DTLS for the standard implementation
	 */
	template<typename T>
	concept TransportBackend = requires
	{
	    requires Backend<T>;
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
