CC = gcc
CFLAGS = -Wall -fPIC
LIB = libmysyslog.so
OBJS = src/mysyslog.o

all: $(LIB)

$(LIB): $(OBJS)
 $(CC) -shared -o $(LIB) $(OBJS)

clean:
 rm -f $(OBJS) $(LIB)

deb:
 # Команды для сборки deb-пакета

