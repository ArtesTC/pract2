CC = gcc
CFLAGS = -Wall -Wextra -fPIC
TARGET = libmysyslog-text.a

all: $(TARGET)

text_driver.o: src/text_driver.c
	$(CC) $(CFLAGS) -c src/text_driver.c -o text_driver.o

$(TARGET): text_driver.o
	ar rcs $(TARGET) text_driver.o

clean:
	rm -f *.o $(TARGET)

install:
	cp $(TARGET) /usr/local/lib
	cp src/text_driver.h /usr/local/include
