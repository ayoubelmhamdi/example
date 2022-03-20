#!/bin/make

# CFLAGS=-g -Wno-format -Wno-deprecated-declarations -Wno-format-security -lm -lafile
CFLAGS=-Werror-implicit-function-declaration \
			 -Wstrict-prototypes \
			 -Wmissing-prototypes \
			 -masm=intel \
			 -Wall \
			 -Wextra \
			 -Wfloat-equal \
			 -Os \
			 -ggdb \
			 -lm \
			 -lafile \
			 -Werror \
			 -Wformat=2 \
			 -std=c99 \
			 -Wbad-function-cast  -Wmissing-declarations -Wmissing-parameter-type  -Wmissing-prototypes  \
			 -Wnested-externs -Wold-style-declaration  -Wstrict-prototypes -Wtraditional  \
			 -Wtraditional-conversion -Wdeclaration-after-statement  -Wpointer-sign 

all: top10


util.o: util.c util.h
	@gcc  -c util.c $(CFLAGS)

main.o: main.c
	@gcc -c main.c $(CFLAGS)

top10: main.o util.o
	@gcc main.o util.o -o top10 $(CFLAGS)

clean:
	rm -rf *.o top10
