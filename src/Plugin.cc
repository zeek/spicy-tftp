
#include "Plugin.h"

namespace plugin { namespace Zeek_TFTP { Plugin plugin; } }

using namespace plugin::Zeek_TFTP;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "Zeek::TFTP";
	config.description = "Spicy-based TFTP analyzer";
	config.version.major = 0;
	config.version.minor = 1;
	config.version.patch = 0;
	return config;
	}
