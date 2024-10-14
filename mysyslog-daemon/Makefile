CC = gcc
CFLAGS = -Wall
LIBS = -L../libmysyslog -lmysyslog

SRC = src/daemon.c
OBJ = $(SRC:.c=.o)

all: mysyslog-daemon

mysyslog-daemon: $(OBJ)
	$(CC) $^ -o $@ $(LIBS)

clean:
	rm -f *.o mysyslog-daemon

deb:
	# команды для создания deb-пакета
