#include <context.h>

LW::Context::Context()
{

}

void LW::Context::registerDefaultBackends()
{
	if(!registerControlBackend<LW::backends::TLSControlBackend>()) 
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
	LW::backends::TLSControlBackend tls_backend;
	LW::backends::LDAPAuthenticationBackend ldap_backend;
}
