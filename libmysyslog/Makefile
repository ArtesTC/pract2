CC = gcc
CFLAGS = -Wall -Wextra -fPIC
TARGET = libmysyslog.a

all: $(TARGET)

libmysyslog.o: src/mysyslog.c
	$(CC) $(CFLAGS) -c src/mysyslog.c -o libmysyslog.o

$(TARGET): libmysyslog.o
	ar rcs $(TARGET) libmysyslog.o

clean:
	rm -f *.o $(TARGET)

install:
	cp $(TARGET) /usr/local/lib
	cp src/mysyslog.h /usr/local/include
