#include <LDAPAuthenticationBackend.h>

LW::InternalBackends::LDAPAuthenticationBackend::LDAPAuthenticationBackend()
{
	LDAPAsynConnection connection;
}

LW::InternalBackends::LDAPAuthenticationBackend::~LDAPAuthenticationBackend()
{

}

std::string LW::InternalBackends::LDAPAuthenticationBackend::cname() const
{
	return "lw.auth.ldap";
}

std::string LW::InternalBackends::LDAPAuthenticationBackend::version() const
{
	return "0.0.1";
}
