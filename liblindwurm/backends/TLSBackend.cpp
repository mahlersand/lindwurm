#include <TLSBackend.h>


LW::InternalBackends::TLSBackend::TLSBackend() :
    asio_context()
{

}

LW::InternalBackends::TLSBackend::~TLSBackend()
{

}

std::string LW::InternalBackends::TLSBackend::cname() const
{
	return "lw.tls";
}

std::string LW::InternalBackends::TLSBackend::version() const
{
	return "0.0.1";
}
