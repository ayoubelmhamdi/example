#!/bin/make

# CFLAGS=-g -Wno-format -Wno-deprecated-declarations -Wno-format-security -lm -lafile
CFLAGS=-std=c99\
	-Werror-implicit-function-declaration \
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
	-Wbad-function-cast  -Wmissing-declarations -Wmissing-parameter-type  -Wmissing-prototypes  \
	-Wnested-externs -Wold-style-declaration  -Wstrict-prototypes \
	-Wdeclaration-after-statement \
	-Wpointer-sign \
	-Wtraditional-conversion \
	#-Wtraditional  \

all: top10


util.o: util.c util.h
	@gcc  -c util.c $(CFLAGS)

main.o: main.c
	@gcc -c main.c $(CFLAGS)

top10: main.o util.o
	@gcc main.o util.o -o top10 $(CFLAGS)

clean:
	rm -rf *.o top10
