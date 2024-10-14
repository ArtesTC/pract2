CC = gcc
CFLAGS = -Wall -fPIC
AR = ar
ARFLAGS = rcs
LIBNAME = mysyslog

SRC = src/mysyslog.c
OBJ = $(SRC:.c=.o)

all: $(LIBNAME).a

$(LIBNAME).a: $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c mysyslog.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *.a

deb:
	# команды для создания deb-пакета
