# Copyright (c) 2021 by the Zeek Project. See LICENSE for details.

spicy_add_analyzer(
    NAME TFTP
    PACKAGE_NAME TFTP
    SOURCES TFTP.spicy TFTP.evt zeek_TFTP.spicy
    SCRIPTS main.zeek __load__.zeek)
