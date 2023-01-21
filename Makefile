CC=gcc
CFLAGS=-c -Wall

all: main

main: main.o mylib.o
	$(CC) main.o mylib.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c

mylib.o: mylib.c
	$(CC) $(CFLAGS) mylib.c

clean:
	rm -rf *o main





/* This Makefile is used to build the "main" executable by linking main.o and mylib.o object files.
The CC variable is set to "gcc", which is the C compiler.
The CFLAGS variable is set to "-c -Wall" which tells the compiler to generate object files and show all warnings.
The first command "all: main" specifies that the target "all" depends on the target "main", so when you run the "make" command, it will build the main target by default.
The main target is built by linking main.o and mylib.o object files using the "gcc" compiler.
The main.o and mylib.o object files are built by compiling main.c and mylib.c files respectively, using the CFLAGS defined above.
The "clean" target is used to remove the object files and the main executable. */ 
