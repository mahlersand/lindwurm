#pragma once

#include <string>
#include <boost/asio/ip/tcp.hpp>

#include <backend/AuthenticationBackend.h>
#include <backend/ControlBackend.h>

namespace LW::InternalBackends {
	using std::string;

	class TLSBackend :
	        public LW::backend::AuthenticationBackend,
	        public LW::backend::ControlBackend
	{
		boost::asio::io_context asio_context;

	public:
		TLSBackend();

		virtual string cname() const;
		virtual string version() const;
	};
}
