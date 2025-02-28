# Makefile for Q1 of ECE 341 HW #3
# William Neel 2/26/25

header = delimiter.h stack.h
cfiles = main.c delimiter.c stack.c
objs = main.o delimiter.o stack.o

CC = gcc 
CFLAGS = -g -Wall

all: delimiter
	$(CC) $(CFLAGS) -o delimiter $(objs)

delimiter: $(objs)
	$(CC) $(CFLAGS) -c $(cfiles)

clean:
	rm -rf $(objs) delimiter
