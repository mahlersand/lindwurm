#pragma once

#include <boost/asio/ip/address.hpp>

#include <detail/endpoint.h>

namespace LW::detail {
	class Endpoint;

	class Endpoint
	{
		boost::asio::ip::address address;
	}; //Endpoint
} //LW::detail
