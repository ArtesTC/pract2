CC = gcc
CFLAGS = -Wall
LIBS = -L../libmysyslog -lmysyslog -L../libmysyslog-text -lmysyslog-text -L../libmysyslog-json -lmysyslog-json

SRC = src/client.c
OBJ = $(SRC:.c=.o)

all: mysyslog-client

mysyslog-client: $(OBJ)
	$(CC) $^ -o $@ $(LIBS)

clean:
	rm -f *.o mysyslog-client

deb:
	# команды для создания deb-пакета
