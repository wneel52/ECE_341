/*
Author: William Neel

*/
#include "circularArray.h"

void testInitCircularArray() {
    CircularArray ca;
    int result = initCircularArray(&ca, 5);
    if (result == 1 && ca.N == 5 && ca.f == 0 && ca.r == 0 && ca.array != NULL) {
        printf("testInitCircularArray passed\n");
    } else {
        printf("testInitCircularArray failed\n");
    }
    free(ca.array);
}

void testInsertCircularArray() {
    CircularArray ca;
    initCircularArray(&ca, 5);

    int result = insertCircularArray(&ca, 10);
    if (result == 1 && ca.array[0] == 10 && ca.r == 1) {
        printf("testInsertCircularArray passed\n");
    } else {
        printf("testInsertCircularArray failed\n");
    }
    free(ca.array);
}

void testRemoveCircularArray() {
    CircularArray ca;
    initCircularArray(&ca, 5);

    insertCircularArray(&ca, 10);
    insertCircularArray(&ca, 20);
    int payload = removeCircularArray(&ca, 0);
    if (payload == 10 && ca.array[0] == 0 && ca.r == 1) {
        printf("testRemoveCircularArray passed\n");
    } else {
        printf("testRemoveCircularArray failed\n");
    }
    free(ca.array);
}

void testResizeCircularArray() {
    CircularArray ca;
    initCircularArray(&ca, 5);

    for (int i = 0; i < 5; i++) {
        insertCircularArray(&ca, i);
    }

    int result = resizeCircularArray(&ca, 10);
    if (result == 1 && ca.N == 10) {
        printf("testResizeCircularArray passed\n");
    } else {
        printf("testResizeCircularArray failed\n");
    }
    free(ca.array);
}

int main() {
    testInitCircularArray();
    testInsertCircularArray();
    testRemoveCircularArray();
    testResizeCircularArray();
    return 0;
}