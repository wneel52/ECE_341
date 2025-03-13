/*
CircularArray.c

need to implement circular array to build vector ADT

*/

#include "circularArray.h"


int initCircularArray(CircularArray* ca, int N){
    ca->N = N;
    ca->f = 0;
    ca->r = 0;
    ca->array = (int*)malloc(N*sizeof(int)); // N*size(int) = arraty size, case int and allocate

    if(!ca){
        return -1;
    }
    return 1;
}

int resizeCircularArray(CircularArray *ca, int New){
    int newArray = (int*)realloc(ca->array,New*sizeof(int)); // realloc size of new array
    if(!newArray){
        printf("Error, realloc failure \n");
        return -1;// indicate failure
    }
    ca->array = newArray;
    ca->N = New;
    return 1; // indicate success

}

void CircularArrayExecption(int err){
    switch(err){
        case isFull:
            printf("Error: Circular Array is full\n");
            break;
        case isEmpty:
            printf("Error: Circular Array is empty\n");
            break;
        default:
            break;
    }
}

int insertCircularArray(CircularArray* ca, int payload){
    if( (ca->r+1)%ca->N == ca->f ){
        CircularArrayExecption(isFull);
        return -1;
    }
    ca->array[ca->r] = payload;
    ca->r = (ca->r+1)%ca->N; // r+1 mod N to keep track of the circular array
    return 1; // indicate success
}

int removeCircularArray(CircularArray* ca, int rank){
    if(ca->f == ca->r){
        CircularArrayExecption(isEmpty);
        return -1;
    }
    int index = (ca->f+rank)%(ca->N);
    int payload = ca->array[index];
    ca->array[index] = 0;
    ca->r = (ca->r -1)%(ca->N);

    return payload;
}