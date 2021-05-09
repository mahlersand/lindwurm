#pragma once

#include <unordered_map>
#include <filesystem>
#include <string>

#include <context.h>
#include <hub.h>

namespace LW {
	using std::string;
	using std::unordered_map;
	using std::filesystem::directory_entry;

	class Instance {
		unordered_map<string, Hub> hubs;

	public:
		Instance(LW::Context const &context);

		void loadConfigurationFile(directory_entry file);
	};
}
