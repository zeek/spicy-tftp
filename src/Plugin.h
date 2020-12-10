
#pragma once

#if ZEEK_VERSION_NUMBER >= 30200

#include <zeek/plugin/Plugin.h>

#else

#include <plugin/Plugin.h>

namespace zeek {
namespace plugin {
using ::plugin::Configuration;
using ::plugin::Plugin;
}
}
#endif

namespace plugin {
namespace Zeek_TFTP {

class Plugin : public zeek::plugin::Plugin
{
protected:
	// Overridden from zeek::plugin::Plugin.
	zeek::plugin::Configuration Configure() override;
};

extern Plugin plugin;

}
}
