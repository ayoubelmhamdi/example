#!/bin/make

CFLAGS=-g -Wno-format -Wno-deprecated-declarations -Wno-format-security -lm -lafile

all: top10


util.o: util.c util.h
	gcc  -c util.c $(CFLAGS)

main.o: main.c
	gcc -c main.c $(CFLAGS)

top10: main.o util.o
	gcc main.o util.o -o top10 $(CFLAGS)

clean:
	rm -rf *.o top10
