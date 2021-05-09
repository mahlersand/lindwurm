#pragma once

#include <string>
#include <LDAPAsynConnection.h>

#include <backend/AuthenticationBackend.h>

namespace LW::InternalBackends {
	class LDAPAuthenticationBackend :
	      public LW::backend::AuthenticationBackend
	{
	public:
		LDAPAuthenticationBackend();

		virtual std::string cname() const;
		virtual std::string version() const;
	};
}
