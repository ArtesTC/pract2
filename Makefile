# Общий Makefile для сборки всех модулей

.PHONY: all clean repo

all: libmysyslog/libmysyslog.a libmysyslog-text/libmysyslog-text.so libmysyslog-json/libmysyslog-json.so mysyslog-client/mysyslog-client mysyslog-daemon/mysyslog-daemon

clean:
	@echo "Cleaning all build files..."
	@find . -name "*.o" -exec rm -f {} \;
	@find . -name "*.so" -exec rm -f {} \;
	@find . -name "*.a" -exec rm -f {} \;
	@find . -name "*.deb" -exec rm -f {} \;

repo:
	@echo "Creating a repository..."
	# Здесь вы можете добавить команды для создания репозитория

# Определите цели для каждого модуля, если необходимо
