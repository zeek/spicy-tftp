// Begin of TFTP (from "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy")
// Compiled by HILTI version 0.4.0-888.dirty

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

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
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Acknowledgement;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Data;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Error;
    extern const hilti::rt::TypeInfo __ti_value_refx30TFTP_Requestx2abool_is_readx2b;
} }

namespace __hlt::TFTP {
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
        auto __parse_switch_case_1_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_2_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_3_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_4_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_4_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_5_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_case_5_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
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

    struct Data : hilti::rt::trait::isStruct, hilti::rt::Controllable<Data> {
        std::optional<hilti::rt::integer::safe<uint16_t>> num{};
        void __on_num(const hilti::rt::integer::safe<uint16_t>& __dd);
        std::optional<hilti::rt::Bytes> data{};
        void __on_data(const hilti::rt::Bytes& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
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

    struct Acknowledgement : hilti::rt::trait::isStruct, hilti::rt::Controllable<Acknowledgement> {
        std::optional<hilti::rt::integer::safe<uint16_t>> num{};
        void __on_num(const hilti::rt::integer::safe<uint16_t>& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
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

    struct Error : hilti::rt::trait::isStruct, hilti::rt::Controllable<Error> {
        std::optional<hilti::rt::integer::safe<uint16_t>> code{};
        void __on_code(const hilti::rt::integer::safe<uint16_t>& __dd);
        std::optional<hilti::rt::Bytes> msg{};
        void __on_msg(const hilti::rt::Bytes& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
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

    extern void __hook_Acknowledgement___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Acknowledgement___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Acknowledgement___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Acknowledgement___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& __self);
    extern void __hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_data(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Data___on_num(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Data>& __self);
    extern void __hook_Error___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_code(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Error___on_msg(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Error>& __self);
    extern void __hook_Packet___on_0x25_done(hilti::rt::ValueReference<Packet>& __self);
    extern void __hook_Packet___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Packet>& __self);
    extern void __hook_Packet___on_0x25_done_0x7ff464c37940(hilti::rt::ValueReference<Packet>& __self);
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
    extern void __hook_Request___on_0x25_done(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_filename(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __hook_Request___on_mode(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::TFTP::Request>& __self);
    extern void __init_module();
    extern void __register_TFTP_Packet();
    extern void __register_module();
    static auto operator<<(std::ostream& o, const __hlt::TFTP::Packet& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, Opcode x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::TFTP::Request& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::TFTP::Data& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::TFTP::Acknowledgement& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::TFTP::Error& x) -> std::ostream&;
}

namespace __hlt::type_info { namespace { 
    const hilti::rt::TypeInfo __ti_TFTP_Acknowledgement = { "TFTP::Acknowledgement", "TFTP::Acknowledgement", hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "num", &hilti::rt::type_info::uint16, offsetof(TFTP::Acknowledgement, num), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Data = { "TFTP::Data", "TFTP::Data", hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "num", &hilti::rt::type_info::uint16, offsetof(TFTP::Data, num), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }, hilti::rt::type_info::struct_::Field{ "data", &hilti::rt::type_info::bytes, offsetof(TFTP::Data, data), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Error = { "TFTP::Error", "TFTP::Error", hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "code", &hilti::rt::type_info::uint16, offsetof(TFTP::Error, code), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }, hilti::rt::type_info::struct_::Field{ "msg", &hilti::rt::type_info::bytes, offsetof(TFTP::Error, msg), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Opcode = { "TFTP::Opcode", "TFTP::Opcode", hilti::rt::type_info::Enum(std::vector<hilti::rt::type_info::enum_::Label>({hilti::rt::type_info::enum_::Label{ "RRQ", 1 }, hilti::rt::type_info::enum_::Label{ "WRQ", 2 }, hilti::rt::type_info::enum_::Label{ "DATA", 3 }, hilti::rt::type_info::enum_::Label{ "ACK", 4 }, hilti::rt::type_info::enum_::Label{ "ERROR", 5 }, hilti::rt::type_info::enum_::Label{ "Undef", -1 }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Packet = { "TFTP::Packet", "TFTP::Packet", hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "op", &type_info::__ti_TFTP_Opcode, offsetof(TFTP::Packet, op), hilti::rt::type_info::struct_::Field::accessor_optional<TFTP::Opcode>() }, hilti::rt::type_info::struct_::Field{ "rrq", &type_info::__ti_value_refx30TFTP_Requestx2abool_is_readx2b, offsetof(TFTP::Packet, rrq), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Request>>() }, hilti::rt::type_info::struct_::Field{ "wrq", &type_info::__ti_value_refx30TFTP_Requestx2abool_is_readx2b, offsetof(TFTP::Packet, wrq), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Request>>() }, hilti::rt::type_info::struct_::Field{ "data", &type_info::__ti_value_refx30TFTP_Data, offsetof(TFTP::Packet, data), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Data>>() }, hilti::rt::type_info::struct_::Field{ "ack", &type_info::__ti_value_refx30TFTP_Acknowledgement, offsetof(TFTP::Packet, ack), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>>() }, hilti::rt::type_info::struct_::Field{ "error", &type_info::__ti_value_refx30TFTP_Error, offsetof(TFTP::Packet, error), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::TFTP::Error>>() }})) };
    const hilti::rt::TypeInfo __ti_TFTP_Request = { "TFTP::Request", "TFTP::Request", hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "filename", &hilti::rt::type_info::bytes, offsetof(TFTP::Request, filename), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "mode", &hilti::rt::type_info::bytes, offsetof(TFTP::Request, mode), hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Acknowledgement = { {}, "value_ref<TFTP::Acknowledgement>", hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Acknowledgement, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Acknowledgement>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Data = { {}, "value_ref<TFTP::Data>", hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Data, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Data>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Error = { {}, "value_ref<TFTP::Error>", hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Error, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Error>()) };
    const hilti::rt::TypeInfo __ti_value_refx30TFTP_Requestx2abool_is_readx2b = { {}, "value_ref<TFTP::Request(bool is_read)>", hilti::rt::type_info::ValueReference(&type_info::__ti_TFTP_Request, hilti::rt::type_info::ValueReference::accessor<__hlt::TFTP::Request>()) };
} }

namespace hilti::rt::detail::adl {
    inline auto to_string(__hlt::TFTP::Opcode x, adl::tag) -> std::string;
}

namespace hlt::TFTP::Acknowledgement {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::Data {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::Error {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Error>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::Packet {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::TFTP::Packet>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
    extern auto parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable;
}

namespace hlt::TFTP::Request {
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

HILTI_PRE_INIT(__hlt::TFTP::__register_module)

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

auto __hlt::TFTP::Acknowledgement::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Acknowledgement::__self();
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:77:24-79:2");
        (*__self).__on_0x25_init();

        // Begin parsing production: Variable: num -> uint<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:78:10"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).num), __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num -> uint<16>;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:78:5");
        (*__self).__on_num(hilti::rt::optional::value((*__self).num, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:78:5"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:77:24-79:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        return std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( const hilti::rt::Exception& e ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:77:24-79:2");
        (*__self).__on_0x25_error();
        throw;
    }
}

extern auto __hlt::TFTP::Acknowledgement::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement> unit = hilti::rt::reference::make_value<__hlt::TFTP::Acknowledgement>((__hlt::TFTP::Acknowledgement()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Acknowledgement -> num;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Acknowledgement -> num;

    return ncur;
}

extern auto __hlt::TFTP::Acknowledgement::parse2(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Acknowledgement -> num;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Acknowledgement -> num;

    return ncur;
}

extern auto __hlt::TFTP::Acknowledgement::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement> unit = hilti::rt::reference::make_value<__hlt::TFTP::Acknowledgement>((__hlt::TFTP::Acknowledgement()));
    spicy::rt::ParsedUnit::initialize(gunit, unit, &type_info::__ti_TFTP_Acknowledgement);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Acknowledgement -> num;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Acknowledgement -> num;

    return ncur;
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

auto __hlt::TFTP::Data::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Data::__self();
    try {
        auto __ctor_1 = hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>();
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:64:13-67:2");
        (*__self).__on_0x25_init();

        // Begin parsing production: Variable: num -> uint<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:65:11"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).num), __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num -> uint<16>;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:65:5");
        (*__self).__on_num(hilti::rt::optional::value((*__self).num, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:65:5"));

        // Begin parsing production: Variable: data -> bytes;
        spicy::rt::detail::waitForEod(__data, __cur, __ctor_1);
        hilti::rt::optional::valueOrInit((*__self).data) = __cur.data();
        __cur = __cur.advance(__cur.size());
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: data -> bytes;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:66:5");
        (*__self).__on_data(hilti::rt::optional::value((*__self).data, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:65:5"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:64:13-67:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        return std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( const hilti::rt::Exception& e ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:64:13-67:2");
        (*__self).__on_0x25_error();
        throw;
    }
}

extern auto __hlt::TFTP::Data::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Data> unit = hilti::rt::reference::make_value<__hlt::TFTP::Data>((__hlt::TFTP::Data()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Data -> num data;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Data -> num data;

    return ncur;
}

extern auto __hlt::TFTP::Data::parse2(hilti::rt::ValueReference<__hlt::TFTP::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Data -> num data;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Data -> num data;

    return ncur;
}

extern auto __hlt::TFTP::Data::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Data> unit = hilti::rt::reference::make_value<__hlt::TFTP::Data>((__hlt::TFTP::Data()));
    spicy::rt::ParsedUnit::initialize(gunit, unit, &type_info::__ti_TFTP_Data);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Data -> num data;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Data -> num data;

    return ncur;
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

auto __hlt::TFTP::Error::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Error::__self();
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:88:14-91:2");
        (*__self).__on_0x25_init();

        // Begin parsing production: Variable: code -> uint<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:89:11"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).code), __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: code -> uint<16>;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:89:5");
        (*__self).__on_code(hilti::rt::optional::value((*__self).code, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:89:5"));

        // Begin parsing production: Variable: msg -> bytes;
        hilti::rt::Bytes __until_bytes = "\000"_b;
        hilti::rt::integer::safe<uint64_t> __until_bytes_sz = __until_bytes.size();
        hilti::rt::optional::valueOrInit((*__self).msg) = ""_b;
        while ( hilti::rt::Bool(true) ) {
            spicy::rt::detail::waitForInput(__data, __cur, __until_bytes_sz, std::string("end-of-data reached before &until expression found"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:90:11"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
            hilti::rt::Bool found;
            hilti::rt::stream::SafeConstIterator it;
            std::tie(found, it) = __cur.find(__until_bytes);
            hilti::rt::optional::value((*__self).msg, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:89:5").append(__cur.sub(it));
            if ( found ) {
                __cur = __cur.advance(it + __until_bytes_sz);
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
            else {
                __cur = __cur.advance(it);
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }
            }
        }

        // End parsing production: Variable: msg -> bytes;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:90:5");
        (*__self).__on_msg(hilti::rt::optional::value((*__self).msg, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:89:5"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:88:14-91:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        return std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( const hilti::rt::Exception& e ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:88:14-91:2");
        (*__self).__on_0x25_error();
        throw;
    }
}

extern auto __hlt::TFTP::Error::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Error> unit = hilti::rt::reference::make_value<__hlt::TFTP::Error>((__hlt::TFTP::Error()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Error -> code msg;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Error -> code msg;

    return ncur;
}

extern auto __hlt::TFTP::Error::parse2(hilti::rt::ValueReference<__hlt::TFTP::Error>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Error -> code msg;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Error -> code msg;

    return ncur;
}

extern auto __hlt::TFTP::Error::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Error> unit = hilti::rt::reference::make_value<__hlt::TFTP::Error>((__hlt::TFTP::Error()));
    spicy::rt::ParsedUnit::initialize(gunit, unit, &type_info::__ti_TFTP_Error);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Error -> code msg;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Error -> code msg;

    return ncur;
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

auto __hlt::TFTP::Packet::__parse_TFTP_Packet_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    hilti::rt::integer::safe<uint16_t> __parsed_op;

    // Begin parsing production: Variable: op  -> uint<16>;
    spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:17:9"), (*__self).__filters);
    std::tie(__parsed_op, __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Variable: op  -> uint<16>;

    {
        hilti::rt::integer::safe<uint16_t> __dd = __parsed_op;
        hilti::rt::optional::valueOrInit((*__self).op) = static_cast<TFTP::Opcode>(__dd.Ref());
    }

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:17:5");
    (*__self).__on_op(hilti::rt::optional::value((*__self).op, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:17:5"));

    // Begin parsing production: Switch: switch -> [Opcode::RRQ] -> switch_case_1 | [Opcode::WRQ] -> switch_case_2 | [Opcode::DATA] -> switch_case_3 | [Opcode::ACK] -> switch_case_4 | [Opcode::ERROR] -> switch_case_5;
    std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Switch: switch -> [Opcode::RRQ] -> switch_case_1 | [Opcode::WRQ] -> switch_case_2 | [Opcode::DATA] -> switch_case_3 | [Opcode::ACK] -> switch_case_4 | [Opcode::ERROR] -> switch_case_5;

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:16:22-27:2");
    (*__self).__on_0x25_done();
    spicy::rt::filter::disconnect(__self);
    hilti::rt::debug::dedent(std::string("spicy"));
    return std::make_tuple(__cur, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:16:22-27:2");
        (*__self).__on_0x25_init();
        if ( hilti::rt::StrongReference<hilti::rt::Stream> filtered = spicy::rt::filter::init(__self, __data, __cur); static_cast<bool>(filtered) ) {
            hilti::rt::ValueReference<hilti::rt::Stream> filtered_data = filtered.derefAsValue();
            return (*__self).__parse_TFTP_Packet_stage2(filtered_data, (*filtered_data).view(), __trim, __lah, __lahe);
        }

        return (*__self).__parse_TFTP_Packet_stage2(__data, __cur, __trim, __lah, __lahe);
    }
    catch ( const hilti::rt::Exception& e ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:16:22-27:2");
        (*__self).__on_0x25_error();
        spicy::rt::filter::disconnect(__self);
        throw;
    }
}

auto __hlt::TFTP::Packet::__parse_switch_case_1_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    return (*__self).__parse_switch_case_1_stage2(__data, __cur, __trim, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_1_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();

    // Begin parsing production: Resolved: TFTP_Request -> TFTP_Request (field 'rrq', id n/a, parser/composer, args: (True));

    // Begin parsing production: Unit: TFTP_Request -> filename mode;
    hilti::rt::optional::valueOrInit((*__self).rrq) = (__hlt::TFTP::Request(hilti::rt::Bool(true)));
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).rrq, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:19:26")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: TFTP_Request -> filename mode;

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:19:26");
    (*__self).__on_rrq(hilti::rt::optional::value((*__self).rrq, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:19:26"));
    // End parsing production: Resolved: TFTP_Request -> TFTP_Request (field 'rrq', id n/a, parser/composer, args: (True));

    return std::make_tuple(__cur, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    return (*__self).__parse_switch_case_2_stage2(__data, __cur, __trim, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_2_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();

    // Begin parsing production: Resolved: TFTP_Request -> TFTP_Request (field 'wrq', id n/a, parser/composer, args: (False));

    // Begin parsing production: Unit: TFTP_Request -> filename mode;
    hilti::rt::optional::valueOrInit((*__self).wrq) = (__hlt::TFTP::Request(hilti::rt::Bool(false)));
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).wrq, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:20:26")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: TFTP_Request -> filename mode;

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:20:26");
    (*__self).__on_wrq(hilti::rt::optional::value((*__self).wrq, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:20:26"));
    // End parsing production: Resolved: TFTP_Request -> TFTP_Request (field 'wrq', id n/a, parser/composer, args: (False));

    return std::make_tuple(__cur, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    return (*__self).__parse_switch_case_3_stage2(__data, __cur, __trim, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_3_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();

    // Begin parsing production: Resolved: TFTP_Data -> TFTP_Data;

    // Begin parsing production: Unit: TFTP_Data -> num data;
    hilti::rt::optional::valueOrInit((*__self).data) = (__hlt::TFTP::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).data, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:21:26")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: TFTP_Data -> num data;

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:21:26");
    (*__self).__on_data(hilti::rt::optional::value((*__self).data, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:21:26"));
    // End parsing production: Resolved: TFTP_Data -> TFTP_Data;

    return std::make_tuple(__cur, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_4_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    return (*__self).__parse_switch_case_4_stage2(__data, __cur, __trim, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_4_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();

    // Begin parsing production: Resolved: TFTP_Acknowledgement -> TFTP_Acknowledgement;

    // Begin parsing production: Unit: TFTP_Acknowledgement -> num_2;
    hilti::rt::optional::valueOrInit((*__self).ack) = (__hlt::TFTP::Acknowledgement());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).ack, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:22:26")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: TFTP_Acknowledgement -> num_2;

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:22:26");
    (*__self).__on_ack(hilti::rt::optional::value((*__self).ack, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:22:26"));
    // End parsing production: Resolved: TFTP_Acknowledgement -> TFTP_Acknowledgement;

    return std::make_tuple(__cur, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_5_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    return (*__self).__parse_switch_case_5_stage2(__data, __cur, __trim, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_case_5_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();

    // Begin parsing production: Resolved: TFTP_Error -> TFTP_Error;

    // Begin parsing production: Unit: TFTP_Error -> code msg;
    hilti::rt::optional::valueOrInit((*__self).error) = (__hlt::TFTP::Error());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).error, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:23:26")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: TFTP_Error -> code msg;

      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:23:26");
    (*__self).__on_error(hilti::rt::optional::value((*__self).error, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:23:26"));
    // End parsing production: Resolved: TFTP_Error -> TFTP_Error;

    return std::make_tuple(__cur, __lah, __lahe);
}

auto __hlt::TFTP::Packet::__parse_switch_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Packet::__self();
    hilti::rt::debug::indent(std::string("spicy"));
      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:5-24:11");
    if ( const auto __x = hilti::rt::optional::value((*__self).op, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:14"); __x == TFTP::Opcode::RRQ ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:25-19:47");

        // Begin parsing production: Sequence: switch_case_1 -> TFTP_Request;
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:25-19:47");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_case_1_stage1(__data, __cur, __trim, __lah, __lahe);
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:25-19:47");
        // End parsing production: Sequence: switch_case_1 -> TFTP_Request;
    }

    else if ( __x == TFTP::Opcode::WRQ ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:19:47-20:48");

        // Begin parsing production: Sequence: switch_case_2 -> TFTP_Request;
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:19:47-20:48");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_case_2_stage1(__data, __cur, __trim, __lah, __lahe);
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:19:47-20:48");
        // End parsing production: Sequence: switch_case_2 -> TFTP_Request;
    }

    else if ( __x == TFTP::Opcode::DATA ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:20:48-21:38");

        // Begin parsing production: Sequence: switch_case_3 -> TFTP_Data;
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:20:48-21:38");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_case_3_stage1(__data, __cur, __trim, __lah, __lahe);
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:20:48-21:38");
        // End parsing production: Sequence: switch_case_3 -> TFTP_Data;
    }

    else if ( __x == TFTP::Opcode::ACK ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:21:38-22:49");

        // Begin parsing production: Sequence: switch_case_4 -> TFTP_Acknowledgement;
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:21:38-22:49");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_case_4_stage1(__data, __cur, __trim, __lah, __lahe);
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:21:38-22:49");
        // End parsing production: Sequence: switch_case_4 -> TFTP_Acknowledgement;
    }

    else if ( __x == TFTP::Opcode::ERROR ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:22:49-23:39");

        // Begin parsing production: Sequence: switch_case_5 -> TFTP_Error;
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:22:49-23:39");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_case_5_stage1(__data, __cur, __trim, __lah, __lahe);
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:22:49-23:39");
        // End parsing production: Sequence: switch_case_5 -> TFTP_Error;
    }

    else  {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:5-24:11");
        throw spicy::rt::ParseError(std::string("no matching case in switch statement"), "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:18:5-24:11");
    }

    hilti::rt::debug::dedent(std::string("spicy"));
    return std::make_tuple(__cur, __lah, __lahe);
}

extern auto __hlt::TFTP::Packet::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Packet> unit = hilti::rt::reference::make_value<__hlt::TFTP::Packet>((__hlt::TFTP::Packet()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Packet -> op switch;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Packet -> op switch;

    return ncur;
}

extern auto __hlt::TFTP::Packet::parse2(hilti::rt::ValueReference<__hlt::TFTP::Packet>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Packet -> op switch;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Packet -> op switch;

    return ncur;
}

extern auto __hlt::TFTP::Packet::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::ValueReference<__hlt::TFTP::Packet> unit = hilti::rt::reference::make_value<__hlt::TFTP::Packet>((__hlt::TFTP::Packet()));
    spicy::rt::ParsedUnit::initialize(gunit, unit, &type_info::__ti_TFTP_Packet);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Packet -> op switch;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Packet -> op switch;

    return ncur;
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

auto __hlt::TFTP::Request::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Request::__self();
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:52:16-55:2");
        (*__self).__on_0x25_init();

        // Begin parsing production: Variable: filename -> bytes;
        hilti::rt::Bytes __until_bytes = "\000"_b;
        hilti::rt::integer::safe<uint64_t> __until_bytes_sz = __until_bytes.size();
        hilti::rt::optional::valueOrInit((*__self).filename) = ""_b;
        while ( hilti::rt::Bool(true) ) {
            spicy::rt::detail::waitForInput(__data, __cur, __until_bytes_sz, std::string("end-of-data reached before &until expression found"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:53:15"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
            hilti::rt::Bool found;
            hilti::rt::stream::SafeConstIterator it;
            std::tie(found, it) = __cur.find(__until_bytes);
            hilti::rt::optional::value((*__self).filename, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:53:5").append(__cur.sub(it));
            if ( found ) {
                __cur = __cur.advance(it + __until_bytes_sz);
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
            else {
                __cur = __cur.advance(it);
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }
            }
        }

        // End parsing production: Variable: filename -> bytes;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:53:5");
        (*__self).__on_filename(hilti::rt::optional::value((*__self).filename, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:53:5"));

        // Begin parsing production: Variable: mode -> bytes;
        hilti::rt::Bytes __until_bytes_2 = "\000"_b;
        hilti::rt::integer::safe<uint64_t> __until_bytes_sz_2 = __until_bytes_2.size();
        hilti::rt::optional::valueOrInit((*__self).mode) = ""_b;
        while ( hilti::rt::Bool(true) ) {
            spicy::rt::detail::waitForInput(__data, __cur, __until_bytes_sz_2, std::string("end-of-data reached before &until expression found"), std::string("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:54:15"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
            hilti::rt::Bool found;
            hilti::rt::stream::SafeConstIterator it;
            std::tie(found, it) = __cur.find(__until_bytes_2);
            hilti::rt::optional::value((*__self).mode, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:53:5").append(__cur.sub(it));
            if ( found ) {
                __cur = __cur.advance(it + __until_bytes_sz_2);
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }

                break;
            }
            else {
                __cur = __cur.advance(it);
                if ( __trim ) {
                    (*__data).trim(__cur.begin());
                }
            }
        }

        // End parsing production: Variable: mode -> bytes;

          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:54:5");
        (*__self).__on_mode(hilti::rt::optional::value((*__self).mode, "/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:53:5"));
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:52:16-55:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        return std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( const hilti::rt::Exception& e ) {
          __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:52:16-55:2");
        (*__self).__on_0x25_error();
        throw;
    }
}

extern auto __hlt::TFTP::Request::parse2(hilti::rt::ValueReference<__hlt::TFTP::Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::stream::View {
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: TFTP_Request -> filename mode;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: TFTP_Request -> filename mode;

    return ncur;
}

extern void __hlt::TFTP::__hook_Packet___on_0x25_done_0x7ff464c37940(hilti::rt::ValueReference<Packet>& __self) {
      __location__("/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy:26:16");
    hilti::rt::print(__self, hilti::rt::Bool(true));
}

extern void __hlt::TFTP::__init_module() { __hlt::TFTP::__register_TFTP_Packet(); }

extern void __hlt::TFTP::__register_TFTP_Packet() {
    TFTP::Packet::__parser = spicy::rt::Parser(std::string("TFTP::Packet"), hlt::TFTP::Packet::parse1, hlt::TFTP::Packet::parse2, hlt::TFTP::Packet::parse3, &type_info::__ti_TFTP_Packet, std::string(""), hilti::rt::Vector<spicy::rt::MIMEType>({}), hilti::rt::Vector<spicy::rt::ParserPort>({}));
    spicy::rt::detail::registerParser(TFTP::Packet::__parser, hilti::rt::StrongReference<__hlt::TFTP::Packet>());
}

extern void __hlt::TFTP::__register_module() { hilti::rt::detail::registerModule({ "TFTP", &__init_module, nullptr, nullptr}); }

static auto __hlt::TFTP::operator<<(std::ostream& o, const __hlt::TFTP::Packet& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::TFTP::operator<<(std::ostream& o, Opcode x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::TFTP::operator<<(std::ostream& o, const __hlt::TFTP::Request& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::TFTP::operator<<(std::ostream& o, const __hlt::TFTP::Data& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::TFTP::operator<<(std::ostream& o, const __hlt::TFTP::Acknowledgement& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::TFTP::operator<<(std::ostream& o, const __hlt::TFTP::Error& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

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

extern auto hlt::TFTP::Acknowledgement::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Acknowledgement::parse1(data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Acknowledgement::parse2(hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Acknowledgement::parse2(unit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Acknowledgement::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Acknowledgement::parse3(gunit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Data::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Data::parse1(data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Data::parse2(hilti::rt::ValueReference<__hlt::TFTP::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Data::parse2(unit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Data::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Data::parse3(gunit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Error::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Error::parse1(data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Error::parse2(hilti::rt::ValueReference<__hlt::TFTP::Error>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Error::parse2(unit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Error::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Error::parse3(gunit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Packet::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Packet::parse1(data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Packet::parse2(hilti::rt::ValueReference<__hlt::TFTP::Packet>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Packet::parse2(unit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Packet::parse3(spicy::rt::ParsedUnit& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Packet::parse3(gunit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

extern auto hlt::TFTP::Request::parse2(hilti::rt::ValueReference<__hlt::TFTP::Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur) -> hilti::rt::Resumable {
    auto cb = [&](hilti::rt::resumable::Handle* r) -> std::any {
        return __hlt::TFTP::Request::parse2(unit, data, cur);
    };

    hilti::rt::Resumable r = {std::move(cb)};
    r.run();
    return r;
}

/* __HILTI_LINKER_V1__
{"joins":{"__hlt::TFTP::__hook_Acknowledgement___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Acknowledgement","type":"struct Acknowledgement"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Acknowledgement___on_0x25_done","priority":0}],"__hlt::TFTP::__hook_Acknowledgement___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Acknowledgement","type":"struct Acknowledgement"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Acknowledgement___on_0x25_error","priority":0}],"__hlt::TFTP::__hook_Acknowledgement___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Acknowledgement","type":"struct Acknowledgement"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Acknowledgement___on_0x25_init","priority":0}],"__hlt::TFTP::__hook_Acknowledgement___on_num":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Acknowledgement","type":"struct Acknowledgement"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_num","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Acknowledgement___on_num","priority":0}],"__hlt::TFTP::__hook_Data___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Data>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Data___on_0x25_done","priority":0}],"__hlt::TFTP::__hook_Data___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Data>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Data___on_0x25_error","priority":0}],"__hlt::TFTP::__hook_Data___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Data>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Data___on_0x25_init","priority":0}],"__hlt::TFTP::__hook_Data___on_data":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Data","type":"struct Data"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Data>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_data","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Data___on_data","priority":0}],"__hlt::TFTP::__hook_Data___on_num":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Data","type":"struct Data"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Data>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_num","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Data___on_num","priority":0}],"__hlt::TFTP::__hook_Error___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Error","type":"struct Error"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Error>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Error___on_0x25_done","priority":0}],"__hlt::TFTP::__hook_Error___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Error","type":"struct Error"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Error>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Error___on_0x25_error","priority":0}],"__hlt::TFTP::__hook_Error___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Error","type":"struct Error"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Error>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Error___on_0x25_init","priority":0}],"__hlt::TFTP::__hook_Error___on_code":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Error","type":"struct Error"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Error>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_code","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Error___on_code","priority":0}],"__hlt::TFTP::__hook_Error___on_msg":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Error","type":"struct Error"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Error>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_msg","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Error___on_msg","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__hook_Packet___on_0x25_done_0x7ff464c37940","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::TFTP::__hook_Packet___on_0x25_done","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_done","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_error","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_gap":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"len","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_gap","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_gap","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_init","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_overlap":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"old","type":"const hilti::rt::Bytes&"},{"id":"new_","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_overlap","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_overlap","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_skipped":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_skipped","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_skipped","priority":0}],"__hlt::TFTP::__hook_Packet___on_0x25_undelivered":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"data","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_undelivered","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_0x25_undelivered","priority":0}],"__hlt::TFTP::__hook_Packet___on_ack":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::TFTP::Acknowledgement>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_ack","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_ack","priority":0}],"__hlt::TFTP::__hook_Packet___on_data":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::TFTP::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_data","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_data","priority":0}],"__hlt::TFTP::__hook_Packet___on_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::TFTP::Error>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_error","priority":0}],"__hlt::TFTP::__hook_Packet___on_op":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"},{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Opcode","type":"enum class Opcode : int64_t { RRQ = 1, WRQ = 2, DATA = 3, ACK = 4, ERROR = 5, Undef = -1 }"}],"callee":{"args":[{"id":"__dd","type":"const TFTP::Opcode&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_op","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_op","priority":0}],"__hlt::TFTP::__hook_Packet___on_rrq":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::TFTP::Request>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_rrq","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_rrq","priority":0}],"__hlt::TFTP::__hook_Packet___on_wrq":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Packet","type":"struct Packet"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::TFTP::Request>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Packet>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_wrq","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Packet___on_wrq","priority":0}],"__hlt::TFTP::__hook_Request___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Request___on_0x25_done","priority":0}],"__hlt::TFTP::__hook_Request___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Request___on_0x25_error","priority":0}],"__hlt::TFTP::__hook_Request___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Request___on_0x25_init","priority":0}],"__hlt::TFTP::__hook_Request___on_filename":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_filename","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Request___on_filename","priority":0}],"__hlt::TFTP::__hook_Request___on_mode":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::TFTP::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::TFTP::Request>&"}],"attribute":"","const":false,"id":"__hlt::TFTP::__on_mode","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::TFTP::__hook_Request___on_mode","priority":0}]},"module":"TFTP","namespace":"__hlt::TFTP","path":"/Users/robin/work/spicy/spicy-tftp/src/tftp.spicy","version":1}
*/

