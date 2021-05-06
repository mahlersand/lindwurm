#include <backends/TLSBackend.h>


LW::backends::TLSBackend::TLSBackend() :
    asio_context()
{

}

std::string LW::backends::TLSBackend::cname()
{
	return "lw.control.tls";
}

std::string LW::backends::TLSBackend::version()
{
	return "0.0.1";
}
