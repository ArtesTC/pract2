all: libmysyslog libmysyslog-text libmysyslog-json mysyslog-client mysyslog-daemon

libmysyslog:
	$(MAKE) -C libmysyslog

libmysyslog-text:
	$(MAKE) -C libmysyslog-text

libmysyslog-json:
	$(MAKE) -C libmysyslog-json

mysyslog-client:
	$(MAKE) -C mysyslog-client

mysyslog-daemon:
	$(MAKE) -C mysyslog-daemon

clean:
	$(MAKE) -C libmysyslog clean
	$(MAKE) -C libmysyslog-text clean
	$(MAKE) -C libmysyslog-json clean
	$(MAKE) -C mysyslog-client clean
	$(MAKE) -C mysyslog-daemon clean

install:
	$(MAKE) -C libmysyslog install
	$(MAKE) -C libmysyslog-text install
	$(MAKE) -C libmysyslog-json install
	$(MAKE) -C mysyslog-client install
	$(MAKE) -C mysyslog-daemon install
