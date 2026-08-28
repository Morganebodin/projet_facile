CC = gcc

CFLAGS = -Wall -Wextra

all: programme
programme: args.o errors.o main.o stat.o
	gcc args.o errors.o main.o stat.o -o programme
clean:
	 rm -f args.o errors.o main.o stat.o
args.o: args.c
errors.o: errors.c 
main.o: main.c
stat.o: stat.c 
args.o: args.h errors.h main.h stat.h
errors.o: args.h errors.h main.h
main.o: main.h stat.h args.h
stat.o: stat.h errors.h

