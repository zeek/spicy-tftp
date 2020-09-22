# @TEST-EXEC: zeek -r ${TRACES}/tftp_rrq.pcap
# @TEST-EXEC: btest-diff conn.log
# @TEST-EXEC: btest-diff tftp.log
