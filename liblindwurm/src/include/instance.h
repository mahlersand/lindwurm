#pragma once

#include <list>
#include <filesystem>

#include <context.h>
#include <hub.h>

using std::list;
using std::filesystem::directory_entry;

namespace LW {
	class Instance {
		list<Hub> hubs;

		Instance(LW::Context const &context);

		void loadConfigurationFile(directory_entry file);
	};
}
