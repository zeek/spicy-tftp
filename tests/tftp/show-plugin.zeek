# @TEST-EXEC: zeek -B plugins -N | grep Zeek::TFTP | sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
