
CC=clang
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o chunk.o debug.o memory.o value.o vm.o compiler.o scanner.o
	$(CC) $(CFLAGS) main.o chunk.o debug.o memory.o value.o vm.o compiler.o scanner.o -o mainapp

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm a.out *.o mainapp
