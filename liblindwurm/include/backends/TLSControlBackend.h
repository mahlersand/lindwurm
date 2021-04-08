#pragma once

#include <string>
#include <boost/asio/ip/tcp.hpp>

namespace LW::backends {
	class TLSControlBackend {
		boost::asio::io_context asio_context;

	public:
		TLSControlBackend();

		static std::string cname();
		static std::string version();
	};
}
