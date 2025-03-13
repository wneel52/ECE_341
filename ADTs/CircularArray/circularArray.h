/*
circularArray.h

Header for circular array structure
*/

#include <stdio.h>
#include <stdlib.h>

#define isFull -1 
#define isEmpty -2
#define AVAIL 1

typedef struct {
    int N; // size of the array
    int f; // front index
    int r; // rear index
    int* array; // pointer to the array of elements -> must be point to allopw for dynamic resizing  
} CircularArray;

int initCircularArray(CircularArray* ca, int N);

int resizeCircularArray(CircularArray *ca, int New);

void CircularArrayExecption(int err);

int insertCircularArray(CircularArray* ca, int payload);

int removeCircularArray(CircularArray* ca, int rank);