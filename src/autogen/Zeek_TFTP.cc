// Begin of Zeek_TFTP (from "/Users/bbannier/src/spicy-tftp/src/zeek_tftp.spicy")
// Compiled by HILTI version 0.4.0-branch

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>
#include <zeek-spicy/runtime-support.h>

namespace __hlt::TFTP {
    struct Acknowledgement;
    struct Data;
    struct Error;
    struct Packet;
    struct Request;
    enum class Opcode : int64_t { RRQ = 1, WRQ = 2, DATA = 3, ACK = 4, ERROR = 5, Undef = -1 };
}

namespace __hlt::type_info { namespace { 
    extern const hilti::rt::TypeInfo __ti_TFTP_Acknowledgement;
    extern const hilti::rt::TypeInfo __ti_TFTP_Data;
    extern const hilti::rt::TypeInfo __ti_TFTP_Error;
    extern const hilti::rt::TypeInfo __ti_TFTP_Opcode;
    extern const hilti::rt::TypeInfo __ti_TFTP_Packet;
    extern const hilti::rt::TypeInfo __ti_TFTP_Request;
    extern const hilti::rt::TypeInfo __ti_spicy_rt_Filters;
    extern const hilti::rt::TypeInfo __ti_spicy_rt_SinkState;
    extern const hilti::rt::TypeInfo __ti_strong_refx30spicy_rt_Filters;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Acknowledgement;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Data;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Error;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Request;
} }

namespace picy::zeek::rt {
    extern void confirm_protocol();
}

namespace picy::zeek::rt {
    extern void data_in_at_offset(const hilti::rt::Bytes& data, const hilti::rt::integer::safe<uint64_t>& offset);
}

namespace picy::zeek::rt {
    extern void file_begin();
}

namespace picy::zeek::rt {
    extern void file_data_in(const hilti::rt::Bytes& data);
}

namespace picy::zeek::rt {
    extern void file_end();
}

namespace picy::zeek::rt {
    extern void file_gap(const hilti::rt::integer::safe<uint64_t>& offset, const hilti::rt::integer::safe<uint64_t>& len);
}

namespace picy::zeek::rt {
    extern void file_set_size(const hilti::rt::integer::safe<uint64_t>& size);
}

namespace picy::zeek::rt {
    extern void flip_roles();
}

namespace picy::zeek::rt {
    extern auto is_orig() -> hilti::rt::Bool;
}

namespace picy::zeek::rt {
    extern auto number_packets() -> hilti::rt::integer::safe<uint64_t>;
}

namespace picy::zeek::rt {
    extern void reject_protocol(const std::string& reason);
}

namespace __hlt::TFTP {
    struct Acknowledgement : hilti::rt::trait::isStruct, hilti::rt::Controllable<Acknowledgement> {
        std::optional<hilti::rt::integer::safe<uint16_t>> num{};
        void __on_num(const hilti::rt::integer::safe<uint16_t>& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Acknowledgement>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        inline auto __self() { return hilti::rt::ValueReference<Acknowledgement>::self(this); }
        inline Acknowledgement();
        Acknowledgement(const Acknowledgement&) = default;
        Acknowledgement(Acknowledgement&&) = default;
        Acknowledgement& operator=(const Acknowledgement&) = default;
        Acknowledgement& operator=(Acknowledgement&&) = default;
        inline Acknowledgement(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> num);
        template<typename F> void __visit(F _) const { _("num", num); }
    };

    struct Data : hilti::rt::trait::isStruct, hilti::rt::Controllable<Data> {
        std::optional<hilti::rt::integer::safe<uint16_t>> num{};
        void __on_num(const hilti::rt::integer::safe<uint16_t>& __dd);
        std::optional<hilti::rt::Bytes> data{};
        void __on_data(const hilti::rt::Bytes& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        inline auto __self() { return hilti::rt::ValueReference<Data>::self(this); }
        inline Data();
        Data(const Data&) = default;
        Data(Data&&) = default;
        Data& operator=(const Data&) = default;
        Data& operator=(Data&&) = default;
        inline Data(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> num, std::optional<std::optional<hilti::rt::Bytes>> data);
        template<typename F> void __visit(F _) const { _("num", num); _("data", data); }
    };

    struct Error : hilti::rt::trait::isStruct, hilti::rt::Controllable<Error> {
        std::optional<hilti::rt::integer::safe<uint16_t>> code{};
        void __on_code(const hilti::rt::integer::safe<uint16_t>& __dd);
        std::optional<hilti::rt::Bytes> msg{};
        void __on_msg(const hilti::rt::Bytes& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Error>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        inline auto __self() { return hilti::rt::ValueReference<Error>::self(this); }
        inline Error();
        Error(const Error&) = default;
        Error(Error&&) = default;
        Error& operator=(const Error&) = default;
        Error& operator=(Error&&) = default;
        inline Error(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> code, std::optional<std::optional<hilti::rt::Bytes>> msg);
        template<typename F> void __visit(F _) const { _("code", code); _("msg", msg); }
    };

    struct Packet : hilti::rt::trait::isStruct, hilti::rt::Controllable<Packet> {
        std::optional<TFTP::Opcode> op{};
        void __on_op(const TFTP::Opcode& __dd);
        std::optional<hilti::rt::ValueReference<Request>> rrq{};
        void __on_rrq(const hilti::rt::ValueReference<Request>& __dd);
        std::optional<hilti::rt::ValueReference<Request>> wrq{};
        void __on_wrq(const hilti::rt::ValueReference<Request>& __dd);
        std::optional<hilti::rt::ValueReference<Data>> data{};
        void __on_data(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<Acknowledgement>> ack{};
        void __on_ack(const hilti::rt::ValueReference<Acknowledgement>& __dd);
        std::optional<hilti::rt::ValueReference<Error>> error{};
        void __on_error(const hilti::rt::ValueReference<Error>& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len);
        void __on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_);
        void __on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq);
        void __on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data);
        inline static spicy::rt::Parser __parser{};
        spicy::rt::sink::detail::State* __sink{};
        hilti::rt::StrongReference<spicy::rt::filter::detail::Filters> __filters{};
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Packet>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        auto __parse_switch_case_1_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_4_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_5_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_TFTP_Packet_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        inline auto __self() { return hilti::rt::ValueReference<Packet>::self(this); }
        inline Packet();
        Packet(const Packet&) = default;
        Packet(Packet&&) = default;
        Packet& operator=(const Packet&) = default;
        Packet& operator=(Packet&&) = default;
        inline Packet(std::optional<std::optional<TFTP::Opcode>> op, std::optional<std::optional<hilti::rt::ValueReference<Request>>> rrq, std::optional<std::optional<hilti::rt::ValueReference<Request>>> wrq, std::optional<std::optional<hilti::rt::ValueReference<Data>>> data, std::optional<std::optional<hilti::rt::ValueReference<Acknowledgement>>> ack, std::optional<std::optional<hilti::rt::ValueReference<Error>>> error);
        template<typename F> void __visit(F _) const { _("op", op); _("rrq", rrq); _("wrq", wrq); _("data", data); _("ack", ack); _("error", error); }
    };

    struct Request : hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, hilti::rt::Controllable<Request> {
        std::optional<hilti::rt::Bytes> filename{};
        void __on_filename(const hilti::rt::Bytes& __dd);
        std::optional<hilti::rt::Bytes> mode{};
        void __on_mode(const hilti::rt::Bytes& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const hilti::rt::Bool& is_read) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        static auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View;
        inline auto __self() { return hilti::rt::ValueReference<Request>::self(this); }
        hilti::rt::Bool __p_is_read{};
        inline Request();
        Request(const Request&) = default;
        Request(Request&&) = default;
        Request& operator=(const Request&) = default;
        Request& operator=(Request&&) = default;
        inline Request(std::optional<std::optional<hilti::rt::Bytes>> filename, std::optional<std::optional<hilti::rt::Bytes>> mode);
        inline Request(const hilti::rt::Bool& __p_is_read);
        template<typename F> void __visit(F _) const { _("filename", filename); _("mode", mode); }
    };

    extern void __hook_Acknowledgement___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Acknowledgement___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Acknowledgement___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Acknowledgement___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern auto __hook_Acknowledgement___str__(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self) -> std::optional<std::string>;
    extern void __hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_data(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern auto __hook_Data___str__(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self) -> std::optional<std::string>;
    extern void __hook_Error___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_code(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_msg(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern auto __hook_Error___str__(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self) -> std::optional<std::string>;
    extern void __hook_Packet___on_0x25_done(hilti::rt::ValueReference<Packet>& __self);
    extern void __hook_Packet___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_done_0x7f9011527d50(hilti::rt::ValueReference<Packet>& __self);
    extern void __hook_Packet___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_ack(const hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_data(const hilti::rt::ValueReference<__hlt::TFTP::Data>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_error(const hilti::rt::ValueReference<__hlt::TFTP::Error>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_op(const TFTP::Opcode& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_rrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_wrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern auto __hook_Packet___str__(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self) -> std::optional<std::string>;
    extern void __hook_Request___on_0x25_done(hilti::rt::ValueReference<TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_error(hilti::rt::ValueReference<TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_filename(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_mode(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern auto __hook_Request___str__(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self) -> std::optional<std::string>;
    extern void __register_TFTP_Packet();
}

namespace __hlt::Zeek_TFTP {
    extern void __hook_Request___on_0x25_done_0x7f8ff2a640a0(hilti::rt::ValueReference<TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_error_0x7f8ff2a41eb0(hilti::rt::ValueReference<TFTP::Request>& __self);
    extern void __register_module();
}

namespace __hlt::type_info { namespace { 
    const hilti::rt::TypeInfo __ti_TFTP_Acknowledgement = { "TFTP::Acknowledgement", "TFTP::Acknowledgement", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "num", &hilti::rt::type_info::uint16, offsetof(TFTP::Acknowledgement, num), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Data = { "TFTP::Data", "TFTP::Data", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "num", &hilti::rt::type_info::uint16, offsetof(TFTP::Data, num), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }, hilti::rt::type_info::struct_::Field{ "data", &hilti::rt::type_info::bytes, offsetof(TFTP::Data, data), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Error = { "TFTP::Error", "TFTP::Error", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "code", &hilti::rt::type_info::uint16, offsetof(TFTP::Error, code), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }, hilti::rt::type_info::struct_::Field{ "msg", &hilti::rt::type_info::bytes, offsetof(TFTP::Error, msg), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Opcode = { "TFTP::Opcode", "TFTP::Opcode", new hilti::rt::type_info::Enum(std::vector<hilti::rt::type_info::enum_::Label>({hilti::rt::type_info::enum_::Label{ "RRQ", 1 }, hilti::rt::type_info::enum_::Label{ "WRQ", 2 }, hilti::rt::type_info::enum_::Label{ "DATA", 3 }, hilti::rt::type_info::enum_::Label{ "ACK", 4 }, hilti::rt::type_info::enum_::Label{ "ERROR", 5 }, hilti::rt::type_info::enum_::Label{ "Undef", -1 }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Packet = { "TFTP::Packet", "TFTP::Packet", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "op", &type_info::__ti_TFTP_Opcode, offsetof(TFTP::Packet, op), false, hilti::rt::type_info::struct_::Field::accessor_optional<TFTP::Opcode>() }, hilti::rt::type_info::struct_::Field{ "rrq", &type_info::__ti_value_refx30TFTP_Request, offsetof(TFTP::Packet, rrq), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Request>>() }, hilti::rt::type_info::struct_::Field{ "wrq", &type_info::__ti_value_refx30TFTP_Request, offsetof(TFTP::Packet, wrq), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Request>>() }, hilti::rt::type_info::struct_::Field{ "data", &type_info::__ti_value_refx30TFTP_Data, offsetof(TFTP::Packet, data), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Data>>() }, hilti::rt::type_info::struct_::Field{ "ack", &type_info::__ti_value_refx30TFTP_Acknowledgement, offsetof(TFTP::Packet, ack), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>>() }, hilti::rt::type_info::struct_::Field{ "error", &type_info::__ti_value_refx30TFTP_Error, offsetof(TFTP::Packet, error), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Error>>() }, hilti::rt::type_info::struct_::Field{ "__sink", &type_info::__ti_spicy_rt_SinkState, offsetof(TFTP::Packet, __sink), true }, hilti::rt::type_info::struct_::Field{ "__filters", &type_info::__ti_strong_refx30spicy_rt_Filters, offsetof(TFTP::Packet, __filters), true }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Request = { "TFTP::Request", "TFTP::Request", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "filename", &hilti::rt::type_info::bytes, offsetof(TFTP::Request, filename), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "mode", &hilti::rt::type_info::bytes, offsetof(TFTP::Request, mode), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_spicy_rt_Filters = { "spicy_rt::Filters", "spicy_rt::Filters", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_spicy_rt_SinkState = { "spicy_rt::SinkState", "spicy_rt::SinkState", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_strong_refx30spicy_rt_Filters = { {}, "strong_ref<spicy_rt::Filters>", new hilti::rt::type_info::StrongReference(&type_info::__ti_spicy_rt_Filters, hilti::rt::type_info::StrongReference::accessor<spicy::rt::filter::detail::Filters>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Acknowledgement = { {}, "value_ref<TFTP::Acknowledgement>", new hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Acknowledgement, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Acknowledgement>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Data = { {}, "value_ref<TFTP::Data>", new hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Data, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Data>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Error = { {}, "value_ref<TFTP::Error>", new hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Error, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Error>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Request = { {}, "value_ref<TFTP::Request>", new hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Request, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Request>()) };
} }

namespace hilti::rt::detail::adl {
    inline auto to_string(__hlt::TFTP::Opcode x, adl::tag) -> std::string;
}

namespace hlt::TFTP::TFTP::Acknowledgement {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::TFTP::Data {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::TFTP::Error {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Error>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::TFTP::Packet {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Packet>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::TFTP::Request {
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace __hlt::TFTP {
    inline Acknowledgement::Acknowledgement() {
    }

    inline Acknowledgement::Acknowledgement(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> num_) : Acknowledgement() {
        if ( num_ ) num = std::move(*num_);
    }

    
    inline Data::Data() {
    }

    inline Data::Data(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> num_, std::optional<std::optional<hilti::rt::Bytes>> data_) : Data() {
        if ( num_ ) num = std::move(*num_);
        if ( data_ ) data = std::move(*data_);
    }

    
    inline Error::Error() {
    }

    inline Error::Error(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> code_, std::optional<std::optional<hilti::rt::Bytes>> msg_) : Error() {
        if ( code_ ) code = std::move(*code_);
        if ( msg_ ) msg = std::move(*msg_);
    }

    
    inline Packet::Packet() {
    }

    inline Packet::Packet(std::optional<std::optional<TFTP::Opcode>> op_, std::optional<std::optional<hilti::rt::ValueReference<__hlt::TFTP::Request>>> rrq_, std::optional<std::optional<hilti::rt::ValueReference<__hlt::TFTP::Request>>> wrq_, std::optional<std::optional<hilti::rt::ValueReference<__hlt::TFTP::Data>>> data_, std::optional<std::optional<hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>>> ack_, std::optional<std::optional<hilti::rt::ValueReference<__hlt::TFTP::Error>>> error_) : Packet() {
        if ( op_ ) op = std::move(*op_);
        if ( rrq_ ) rrq = std::move(*rrq_);
        if ( wrq_ ) wrq = std::move(*wrq_);
        if ( data_ ) data = std::move(*data_);
        if ( ack_ ) ack = std::move(*ack_);
        if ( error_ ) error = std::move(*error_);
    }

    
    inline Request::Request() {
    }

    inline Request::Request(const hilti::rt::Bool& __p_is_read) : __p_is_read(std::move(__p_is_read)) {
    }

    inline Request::Request(std::optional<std::optional<hilti::rt::Bytes>> filename_, std::optional<std::optional<hilti::rt::Bytes>> mode_) : Request() {
        if ( filename_ ) filename = std::move(*filename_);
        if ( mode_ ) mode = std::move(*mode_);
    }

    
}

HILTI_PRE_INIT(__hlt::Zeek_TFTP::__register_module)

inline void __hlt::TFTP::Acknowledgement::__on_0x25_done() {
    auto __self = TFTP::Acknowledgement::__self();
    return __hlt::TFTP::__hook_Acknowledgement___on_0x25_done(__self);
}

inline void __hlt::TFTP::Acknowledgement::__on_0x25_error() {
    auto __self = TFTP::Acknowledgement::__self();
    return __hlt::TFTP::__hook_Acknowledgement___on_0x25_error(__self);
}

inline void __hlt::TFTP::Acknowledgement::__on_0x25_init() {
    auto __self = TFTP::Acknowledgement::__self();
    return __hlt::TFTP::__hook_Acknowledgement___on_0x25_init(__self);
}

inline void __hlt::TFTP::Acknowledgement::__on_num(const hilti::rt::integer::safe<uint16_t>& __dd) {
    auto __self = TFTP::Acknowledgement::__self();
    return __hlt::TFTP::__hook_Acknowledgement___on_num(__dd, __self);
}

inline auto __hlt::TFTP::Acknowledgement::__str__() -> std::optional<std::string> {
    auto __self = TFTP::Acknowledgement::__self();
    return __hlt::TFTP::__hook_Acknowledgement___str__(__self);
}

inline void __hlt::TFTP::Data::__on_0x25_done() {
    auto __self = TFTP::Data::__self();
    return __hlt::TFTP::__hook_Data___on_0x25_done(__self);
}

inline void __hlt::TFTP::Data::__on_0x25_error() {
    auto __self = TFTP::Data::__self();
    return __hlt::TFTP::__hook_Data___on_0x25_error(__self);
}

inline void __hlt::TFTP::Data::__on_0x25_init() {
    auto __self = TFTP::Data::__self();
    return __hlt::TFTP::__hook_Data___on_0x25_init(__self);
}

inline void __hlt::TFTP::Data::__on_data(const hilti::rt::Bytes& __dd) {
    auto __self = TFTP::Data::__self();
    return __hlt::TFTP::__hook_Data___on_data(__dd, __self);
}

inline void __hlt::TFTP::Data::__on_num(const hilti::rt::integer::safe<uint16_t>& __dd) {
    auto __self = TFTP::Data::__self();
    return __hlt::TFTP::__hook_Data___on_num(__dd, __self);
}

inline auto __hlt::TFTP::Data::__str__() -> std::optional<std::string> {
    auto __self = TFTP::Data::__self();
    return __hlt::TFTP::__hook_Data___str__(__self);
}

inline void __hlt::TFTP::Error::__on_0x25_done() {
    auto __self = TFTP::Error::__self();
    return __hlt::TFTP::__hook_Error___on_0x25_done(__self);
}

inline void __hlt::TFTP::Error::__on_0x25_error() {
    auto __self = TFTP::Error::__self();
    return __hlt::TFTP::__hook_Error___on_0x25_error(__self);
}

inline void __hlt::TFTP::Error::__on_0x25_init() {
    auto __self = TFTP::Error::__self();
    return __hlt::TFTP::__hook_Error___on_0x25_init(__self);
}

inline void __hlt::TFTP::Error::__on_code(const hilti::rt::integer::safe<uint16_t>& __dd) {
    auto __self = TFTP::Error::__self();
    return __hlt::TFTP::__hook_Error___on_code(__dd, __self);
}

inline void __hlt::TFTP::Error::__on_msg(const hilti::rt::Bytes& __dd) {
    auto __self = TFTP::Error::__self();
    return __hlt::TFTP::__hook_Error___on_msg(__dd, __self);
}

inline auto __hlt::TFTP::Error::__str__() -> std::optional<std::string> {
    auto __self = TFTP::Error::__self();
    return __hlt::TFTP::__hook_Error___str__(__self);
}

inline void __hlt::TFTP::Packet::__on_0x25_done() {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_done(__self);
}

inline void __hlt::TFTP::Packet::__on_0x25_error() {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_error(__self);
}

inline void __hlt::TFTP::Packet::__on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_gap(seq, len, __self);
}

inline void __hlt::TFTP::Packet::__on_0x25_init() {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_init(__self);
}

inline void __hlt::TFTP::Packet::__on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_overlap(seq, old, new_, __self);
}

inline void __hlt::TFTP::Packet::__on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_skipped(seq, __self);
}

inline void __hlt::TFTP::Packet::__on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_0x25_undelivered(seq, data, __self);
}

inline void __hlt::TFTP::Packet::__on_ack(const hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __dd) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_ack(__dd, __self);
}

inline void __hlt::TFTP::Packet::__on_data(const hilti::rt::ValueReference<__hlt::TFTP::Data>& __dd) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_data(__dd, __self);
}

inline void __hlt::TFTP::Packet::__on_error(const hilti::rt::ValueReference<__hlt::TFTP::Error>& __dd) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_error(__dd, __self);
}

inline void __hlt::TFTP::Packet::__on_op(const TFTP::Opcode& __dd) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_op(__dd, __self);
}

inline void __hlt::TFTP::Packet::__on_rrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_rrq(__dd, __self);
}

inline void __hlt::TFTP::Packet::__on_wrq(const hilti::rt::ValueReference<__hlt::TFTP::Request>& __dd) {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___on_wrq(__dd, __self);
}

inline auto __hlt::TFTP::Packet::__str__() -> std::optional<std::string> {
    auto __self = TFTP::Packet::__self();
    return __hlt::TFTP::__hook_Packet___str__(__self);
}

inline void __hlt::TFTP::Request::__on_0x25_done() {
    auto __self = TFTP::Request::__self();
    return __hlt::TFTP::__hook_Request___on_0x25_done(__self);
}

inline void __hlt::TFTP::Request::__on_0x25_error() {
    auto __self = TFTP::Request::__self();
    return __hlt::TFTP::__hook_Request___on_0x25_error(__self);
}

inline void __hlt::TFTP::Request::__on_0x25_init() {
    auto __self = TFTP::Request::__self();
    return __hlt::TFTP::__hook_Request___on_0x25_init(__self);
}

inline void __hlt::TFTP::Request::__on_filename(const hilti::rt::Bytes& __dd) {
    auto __self = TFTP::Request::__self();
    return __hlt::TFTP::__hook_Request___on_filename(__dd, __self);
}

inline void __hlt::TFTP::Request::__on_mode(const hilti::rt::Bytes& __dd) {
    auto __self = TFTP::Request::__self();
    return __hlt::TFTP::__hook_Request___on_mode(__dd, __self);
}

inline auto __hlt::TFTP::Request::__str__() -> std::optional<std::string> {
    auto __self = TFTP::Request::__self();
    return __hlt::TFTP::__hook_Request___str__(__self);
}

extern void __hlt::Zeek_TFTP::__hook_Request___on_0x25_done_0x7f8ff2a640a0(hilti::rt::ValueReference<TFTP::Request>& __self) {
      __location__("/Users/bbannier/src/spicy-tftp/src/zeek_tftp.spicy:8:26-9:29");
    spicy::zeek::rt::confirm_protocol();
}

extern void __hlt::Zeek_TFTP::__hook_Request___on_0x25_error_0x7f8ff2a41eb0(hilti::rt::ValueReference<TFTP::Request>& __self) {
      __location__("/Users/bbannier/src/spicy-tftp/src/zeek_tftp.spicy:12:27-13:62");
    spicy::zeek::rt::reject_protocol(std::string("error while parsing TFTP request"));
}

extern void __hlt::Zeek_TFTP::__register_module() { hilti::rt::detail::registerModule({ "Zeek_TFTP", nullptr, nullptr, nullptr}); }

inline auto hilti::rt::detail::adl::to_string(__hlt::TFTP::Opcode x, adl::tag) -> std::string {
    switch ( x ) {
        case __hlt::TFTP::Opcode::ERROR: 
            return "Opcode::ERROR";
        case __hlt::TFTP::Opcode::ACK: 
            return "Opcode::ACK";
        case __hlt::TFTP::Opcode::DATA: 
            return "Opcode::DATA";
        case __hlt::TFTP::Opcode::WRQ: 
            return "Opcode::WRQ";
        case __hlt::TFTP::Opcode::RRQ: 
            return "Opcode::RRQ";
        case __hlt::TFTP::Opcode::Undef: 
            return "Opcode::Undef";
        default: 
            return hilti::rt::fmt("Opcode::<unknown-%" PRIu64 ">", static_cast<uint64_t>(x));
    }
}

/* __HILTI_LINKER_V1__
{"joins":{"__hlt::TFTP::__hook_Request___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::Zeek_TFTP::__hook_Request___on_0x25_done_0x7f8ff2a640a0","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::TFTP::__hook_Request___on_0x25_done","priority":0}],"__hlt::TFTP::__hook_Request___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::Zeek_TFTP::__hook_Request___on_0x25_error_0x7f8ff2a41eb0","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::TFTP::__hook_Request___on_0x25_error","priority":0}]},"module":"Zeek_TFTP","namespace":"__hlt::Zeek_TFTP","path":"/Users/bbannier/src/spicy-tftp/src/zeek_tftp.spicy","version":1}
*/

