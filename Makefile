
CC = clang
CXX = clang++

EXECUTABLE = main

CFLAGS	:= -Wall -Wextra

all: main_c

main_c:
	gcc main.c $(CFLAGS) -o $(EXECUTABLE)

clean:
	rm -f *.o main