#pragma once

#include <string>
#include <boost/property_tree/ptree.hpp>

namespace LW::backend {
	using std::string;
	using boost::property_tree::ptree;

	class BackendBase;

	class BackendBase {

	public:
		//! The common name of the backend
		virtual string cname() const = 0;

		//! Version information about the backend
		virtual string version() const = 0;
	};
}
