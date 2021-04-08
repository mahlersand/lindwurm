#include <backends/TLSControlBackend.h>


LW::backends::TLSControlBackend::TLSControlBackend() :
    asio_context()
{

}

std::string LW::backends::TLSControlBackend::cname()
{
	return "lw.control.tls";
}

std::string LW::backends::TLSControlBackend::version()
{
	return "0.0.1";
}
