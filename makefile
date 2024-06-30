
CC=clang
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o chunk.o debug.o memory.o value.o
	$(CC) $(CFLAGS) main.o chunk.o debug.o memory.o value.o -o mainapp

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm a.out *.o mainapp
