#include "TLSBackend.h"


LW::backends::TLSBackend::TLSBackend() :
    asio_context()
{

}

std::string LW::backends::TLSBackend::cname() const
{
	return "lw.tls";
}

std::string LW::backends::TLSBackend::version() const
{
	return "0.0.1";
}
