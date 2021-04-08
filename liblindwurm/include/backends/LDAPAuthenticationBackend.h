#pragma once

#include <string>
#include <LDAPAsynConnection.h>

namespace LW::backends {
	class LDAPAuthenticationBackend
	{
	public:
		LDAPAuthenticationBackend();

		static std::string cname();
		static std::string version();
	};
}
