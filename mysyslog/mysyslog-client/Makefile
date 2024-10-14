CC = gcc
CFLAGS = -Wall -Wextra
TARGET = mysyslog-client

all: $(TARGET)

client.o: src/client.c
	$(CC) $(CFLAGS) -c src/client.c -o client.o

$(TARGET): client.o
	$(CC) client.o -o $(TARGET) -L../libmysyslog -lmysyslog

clean:
	rm -f *.o $(TARGET)

install:
	cp $(TARGET) /usr/local/bin
