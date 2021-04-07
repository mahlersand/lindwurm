#pragma once

#include <string>
#include <boost/asio/ip/tcp.hpp>

namespace LW::backends {
	class TLSControlBackend {
		boost::asio::io_context asio_context;

	public:
		TLSControlBackend();

		static inline std::string cname()
		{
			return "lw.control.tls";
		}

		static inline std::string version()
		{
			return "0.0.1";
		}
	};
}
