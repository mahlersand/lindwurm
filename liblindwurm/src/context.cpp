#include <context.h>

LW::Context::Context()
{

}

void LW::Context::registerDefaultBackends()
{
	if(!registerControlBackend<LW::InternalBackends::TLSBackend>())
	{
		printf("Failed to register default Control Backend \n");
	}

	if(!registerAuthenticationBackend<LW::InternalBackends::LDAPAuthenticationBackend>())
	{
		printf("Failed to register default Authentication Backend \n");
	}

	return;
}

void LW::Context::demo()
{
	LW::InternalBackends::TLSBackend tls_backend;
	LW::InternalBackends::LDAPAuthenticationBackend ldap_backend;
}
