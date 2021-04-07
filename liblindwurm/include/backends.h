#pragma once

#include <string>
#include <type_traits>

namespace LW {
	namespace backends {
		template <typename T>
		concept Backend = requires (T instance)
		{
			//! The common name of the backend
			{ T::cname() } -> std::same_as<std::string>;

			//! Version information about the backend
			{ T::version() } -> std::same_as<std::string>;
		};

		template<typename T>
		concept AuthenticationBackend = requires (T instance)
		{
			requires Backend<T>;
		};

		template<typename T>
		concept ControlBackend = requires
		{
			requires Backend<T>;
		};

		template<typename T>
		concept TransportBackend = requires
		{
			requires Backend<T>;
		};

		template<typename T>
		concept TunnelBackend = requires
		{
			requires Backend<T>;
		};
	}
}
