# Copyright (c) 2021 by the Zeek Project. See LICENSE for details.

# @TEST-EXEC: env >env
# @TEST-EXEC: zeek -r ${TRACES}/tftp_rrq.pcap ${PACKAGE} %INPUT
# @TEST-EXEC: cat conn.log | zeek-cut uid service > conn.log.tmp && mv conn.log.tmp conn.log
# @TEST-EXEC: btest-diff conn.log
# @TEST-EXEC: btest-diff tftp.log
#
# @TEST-DOC: Test TFTP analyzer with read request trace.
