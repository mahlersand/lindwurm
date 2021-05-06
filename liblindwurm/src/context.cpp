#include <context.h>

LW::Context::Context()
{

}

void LW::Context::registerDefaultBackends()
{
	if(!registerControlBackend<LW::backends::TLSBackend>())
	{
		printf("Failed to register default Control Backend \n");
	}

	if(!registerAuthenticationBackend<LW::backends::LDAPAuthenticationBackend>())
	{
		printf("Failed to register default Authentication Backend \n");
	}

	return;
}

void LW::Context::demo()
{
	LW::backends::TLSBackend tls_backend;
	LW::backends::LDAPAuthenticationBackend ldap_backend;
}
