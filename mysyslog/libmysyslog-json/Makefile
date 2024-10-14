CC = gcc
CFLAGS = -Wall -Wextra -fPIC
TARGET = libmysyslog-json.a

all: $(TARGET)

json_driver.o: src/json_driver.c
	$(CC) $(CFLAGS) -c src/json_driver.c -o json_driver.o

$(TARGET): json_driver.o
	ar rcs $(TARGET) json_driver.o

clean:
	rm -f *.o $(TARGET)

install:
	cp $(TARGET) /usr/local/lib
	cp src/json_driver.h /usr/local/include
