CC = gcc
CFLAGS = -Wall -Wextra
TARGET = mysyslog-daemon

all: $(TARGET)

daemon.o: src/daemon.c
	$(CC) $(CFLAGS) -c src/daemon.c -o daemon.o

$(TARGET): daemon.o
	$(CC) daemon.o -o $(TARGET) -L../libmysyslog -lmysyslog

clean:
	rm -f *.o $(TARGET)

install:
	cp $(TARGET) /usr/local/bin
