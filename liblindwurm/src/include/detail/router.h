#pragma once

#include <unordered_map>
#include <string>

#include <detail/endpoint.h>

namespace LW::detail {
	using std::unordered_map;
	using std::string;

	class Router;

	class Router
	{
		unordered_map<string, Endpoint> endpoints;
	}; //Router
} //LW::detail
