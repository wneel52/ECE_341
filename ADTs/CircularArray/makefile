# Makefile for Q1 of ECE 341 HW #3
# William Neel 2/26/25

header = circularArray.h
cfiles = testCircularArray.c circularArray.c
objs = testCircularArray.o circularArray.o

CC = gcc 
CFLAGS = -g -Wall

all: carray
	$(CC) $(CFLAGS) -o carray $(objs)

carray: $(objs)
	$(CC) $(CFLAGS) -c $(cfiles)

clean:
	rm -rf $(objs) carray
