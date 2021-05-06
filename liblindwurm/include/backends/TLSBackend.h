#pragma once

#include <string>
#include <boost/asio/ip/tcp.hpp>

namespace LW::backends {
	class TLSBackend
	{
		boost::asio::io_context asio_context;

	public:
		TLSBackend();

		static std::string cname();
		static std::string version();
	};
}
