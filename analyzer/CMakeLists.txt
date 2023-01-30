spicy_add_analyzer(
    NAME TFTP
    PACKAGE_NAME spicy-tftp
    SOURCES tftp.spicy tftp.evt
    SCRIPTS __load__.zeek main.zeek dpd.sig)
