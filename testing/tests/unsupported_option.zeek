# Copyright (c) 2021 by the Zeek Project. See LICENSE for details.

# @TEST-EXEC: zeek -Cr ${TRACES}/tftp_oack.pcap ${PACKAGE} %INPUT >output 2>&1
# @TEST-EXEC: TEST_DIFF_CANONIFIER='zeek-cut uid service orig_ip_bytes resp_ip_bytes' btest-diff conn.log
# @TEST-EXEC: btest-diff tftp.log
# @TEST-EXEC: btest-diff tftp.log
# @TEST-EXEC: btest-diff weird.log
#
# @TEST-DOC: Test TFTP analyzer support for unsupported options.
