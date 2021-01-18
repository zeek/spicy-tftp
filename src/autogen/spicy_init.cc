// Begin of spicy_init
// Compiled by HILTI version 0.4.0-1255

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>
#include <zeek-spicy/runtime-support.h>

namespace picy::zeek::rt {
    extern auto current_conn(const std::string& location) -> ::zeek::ValPtr;
}

namespace picy::zeek::rt {
    extern auto current_file(const std::string& location) -> ::zeek::ValPtr;
}

namespace picy::zeek::rt {
    extern auto current_is_orig(const std::string& location) -> ::zeek::ValPtr;
}

namespace picy::zeek::rt {
    extern void debug(const std::string& msg);
}

namespace picy::zeek::rt {
    extern auto event_arg_type(const ::zeek::EventHandlerPtr& handler, const hilti::rt::integer::safe<uint64_t>& idx, const std::string& location) -> ::zeek::TypePtr;
}

namespace picy::zeek::rt {
    extern auto have_handler(const ::zeek::EventHandlerPtr& handler) -> hilti::rt::Bool;
}

namespace picy::zeek::rt {
    extern auto internal_handler(const std::string& event) -> ::zeek::EventHandlerPtr;
}

namespace picy::zeek::rt {
    extern void raise_event(const ::zeek::EventHandlerPtr& handler, const hilti::rt::Vector<::zeek::ValPtr>& args, const std::string& location);
}

namespace picy::zeek::rt {
    extern void register_enum_type(const std::string& ns, const std::string& id, const hilti::rt::Vector<std::tuple<std::string, hilti::rt::integer::safe<int64_t>>>& labels);
}

namespace picy::zeek::rt {
    extern void register_file_analyzer(const std::string& name, const hilti::rt::Vector<std::string>& mime_types, const std::string& parser);
}

namespace picy::zeek::rt {
    extern void register_packet_analyzer(const std::string& name, const std::string& parser);
}

namespace picy::zeek::rt {
    extern void register_protocol_analyzer(const std::string& name, const hilti::rt::Protocol& protocol, const hilti::rt::Vector<hilti::rt::Port>& ports, const std::string& parser_orig, const std::string& parser_resp, const std::string& replaces);
}

namespace __hlt::spicy_init {
    extern void __init_module();
    extern void __register_module();
}

HILTI_PRE_INIT(__hlt::spicy_init::__register_module)

extern void __hlt::spicy_init::__init_module() { spicy::zeek::rt::register_protocol_analyzer(std::string("spicy_TFTP"), hilti::rt::Protocol::UDP, hilti::rt::Vector<hilti::rt::Port>({hilti::rt::Port("69/udp")}), std::string("TFTP::Packet"), std::string("TFTP::Packet"), std::string("")); }

extern void __hlt::spicy_init::__register_module() { hilti::rt::detail::registerModule({ "spicy_init", &__init_module, nullptr, nullptr}); }

/* __HILTI_LINKER_V1__
{"module":"spicy_init","namespace":"__hlt::spicy_init","path":"","version":1}
*/

