#include "context.h"

LW::Context::Context()
{

}

void LW::Context::registerDefaultBackends()
{
	if(!registerControlBackend<LW::backends::TLSControlBackend>()) {

	}
	return;
}

void LW::Context::demo()
{
	LW::backends::TLSControlBackend tls_backend;
}
