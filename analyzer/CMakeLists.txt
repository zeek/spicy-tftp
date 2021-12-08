# Copyright (c) 2021 by the Zeek Project. See LICENSE for details.

spicy_add_analyzer(
    NAME TFTP
    PACKAGE_NAME TFTP
    SOURCES analyzer.spicy analyzer.evt zeek_analyzer.spicy
    SCRIPTS main.zeek __load__.zeek)
