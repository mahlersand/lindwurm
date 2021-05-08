#include "LDAPAuthenticationBackend.h"

LW::backends::LDAPAuthenticationBackend::LDAPAuthenticationBackend()
{
	LDAPAsynConnection connection;
}

std::string LW::backends::LDAPAuthenticationBackend::cname() const
{
	return "lw.auth.ldap";
}

std::string LW::backends::LDAPAuthenticationBackend::version() const
{
	return "0.0.1";
}
