CC = gcc
CFLAGS = -Wall -fPIC
LIBNAME = libmysyslog-json

SRC = src/json_driver.c
OBJ = $(SRC:.c=.o)

all: $(LIBNAME).so

$(LIBNAME).so: $(OBJ)
	$(CC) -shared -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *.so

deb:
	# команды для создания deb-пакета
