// Begin of __linker__
// Compiled by HILTI version 0.4.0-888.dirty

#include <hilti/rt/compiler-setup.h>

// 
// Linker code generated for modules:
//   - TFTP (/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy)
//   - Zeek_TFTP (/Users/robin/work/spicy/spicy-tftp/src/zeek_tftp.spicy)
//   - spicy_hooks_TFTP ()
//   - spicy_hooks_Zeek_TFTP ()
//   - spicy_init ()

#include <hilti/rt/libhilti.h>

namespace __hlt::TFTP {
    struct Acknowledgement;
    struct Data;
    struct Error;
    using Opcode = enum class Opcode : int64_t { RRQ = 1, WRQ = 2, DATA = 3, ACK = 4, ERROR = 5, Undef = -1 };
    struct Packet;
    struct Request;
    void __hook_Acknowledgement___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    void __hook_Acknowledgement___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    void __hook_Acknowledgement___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    void __hook_Acknowledgement___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    void __hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    void __hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    void __hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    void __hook_Data___on_data(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    void __hook_Data___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    void __hook_Error___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    void __hook_Error___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    void __hook_Error___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    void __hook_Error___on_code(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    void __hook_Error___on_msg(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Packet___on_0x25_done(hilti::rt::ValueReference<Packet>& __self);
    extern void __hook_Packet___on_0x25_done_0x7ff464c37940(hilti::rt::ValueReference<Packet>& __self);
    void __hook_Packet___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_ack(const hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_data(const hilti::rt::ValueReference<__hlt::TFTP::Data>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_error(const hilti::rt::ValueReference<__hlt::TFTP::Error>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_op(const TFTP::Opcode& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_rrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Packet___on_wrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    void __hook_Request___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    void __hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    void __hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    void __hook_Request___on_filename(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    void __hook_Request___on_mode(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
}

namespace __hlt::Zeek_TFTP {
    extern void __hook_Request___on_0x25_done_0x7ff466bf38a0(hilti::rt::ValueReference<TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_error_0x7ff466fc50c0(hilti::rt::ValueReference<TFTP::Request>& __self);
}

namespace __hlt::spicy_hooks_TFTP {
    extern void __hook_Acknowledgement___on_0x25_done_0x7ff4669fbbb0(hilti::rt::ValueReference<TFTP::Acknowledgement>& __self);
    extern void __hook_Data___on_0x25_done_0x7ff4669f06e0(hilti::rt::ValueReference<TFTP::Data>& __self);
    extern void __hook_Error___on_0x25_done_0x7ff466e54c80(hilti::rt::ValueReference<TFTP::Error>& __self);
    extern void __hook_Request___on_0x25_done_0x7ff464e14360(hilti::rt::ValueReference<TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_done_0x7ff4669f75c0(hilti::rt::ValueReference<TFTP::Request>& __self);
}

const char* __hlto_library_version __attribute__((weak)) = R"({"created":1600479267.527243,"debug":false,"hilti_version":400,"magic":"v1","optimize":true})";

void __hlt::TFTP::__hook_Acknowledgement___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self) { __hlt::spicy_hooks_TFTP::__hook_Acknowledgement___on_0x25_done_0x7ff4669fbbb0(__self); }

void __hlt::TFTP::__hook_Acknowledgement___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self) {  }

void __hlt::TFTP::__hook_Acknowledgement___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self) {  }

void __hlt::TFTP::__hook_Acknowledgement___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self) {  }

void __hlt::TFTP::__hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self) { __hlt::spicy_hooks_TFTP::__hook_Data___on_0x25_done_0x7ff4669f06e0(__self); }

void __hlt::TFTP::__hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self) {  }

void __hlt::TFTP::__hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self) {  }

void __hlt::TFTP::__hook_Data___on_data(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self) {  }

void __hlt::TFTP::__hook_Data___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self) {  }

void __hlt::TFTP::__hook_Error___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self) { __hlt::spicy_hooks_TFTP::__hook_Error___on_0x25_done_0x7ff466e54c80(__self); }

void __hlt::TFTP::__hook_Error___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self) {  }

void __hlt::TFTP::__hook_Error___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self) {  }

void __hlt::TFTP::__hook_Error___on_code(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self) {  }

void __hlt::TFTP::__hook_Error___on_msg(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self) {  }

extern void __hlt::TFTP::__hook_Packet___on_0x25_done(hilti::rt::ValueReference<Packet>& __self) { __hlt::TFTP::__hook_Packet___on_0x25_done_0x7ff464c37940(__self); }

void __hlt::TFTP::__hook_Packet___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_ack(const hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_data(const hilti::rt::ValueReference<__hlt::TFTP::Data>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_error(const hilti::rt::ValueReference<__hlt::TFTP::Error>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_op(const TFTP::Opcode& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_rrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Packet___on_wrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) {  }

void __hlt::TFTP::__hook_Request___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self) {
    __hlt::Zeek_TFTP::__hook_Request___on_0x25_done_0x7ff466bf38a0(__self);
    __hlt::spicy_hooks_TFTP::__hook_Request___on_0x25_done_0x7ff464e14360(__self);
    __hlt::spicy_hooks_TFTP::__hook_Request___on_0x25_done_0x7ff4669f75c0(__self);
}

void __hlt::TFTP::__hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self) { __hlt::Zeek_TFTP::__hook_Request___on_0x25_error_0x7ff466fc50c0(__self); }

void __hlt::TFTP::__hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self) {  }

void __hlt::TFTP::__hook_Request___on_filename(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self) {  }

void __hlt::TFTP::__hook_Request___on_mode(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self) {  }
