#include <backends/LDAPAuthenticationBackend.h>

LW::backends::LDAPAuthenticationBackend::LDAPAuthenticationBackend()
{
	LDAPAsynConnection connection;
}

std::string LW::backends::LDAPAuthenticationBackend::cname()
{
	return "lw.auth.ldap";
}

std::string LW::backends::LDAPAuthenticationBackend::version()
{
	return "0.0.1";
}
