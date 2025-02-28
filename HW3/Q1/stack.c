/*
C Program to implement a stack based array
reference: https://www.geeksforgeeks.org/implement-stack-in-c/

*/
#include "stack.h"

void initStack(Stack *s){
    s->top = empty; // set the top index to -1
}

bool isEmpty(Stack *s){
    return s->top == empty; // if the top index is -1, the stack is empty
}

bool isFull(Stack *s){
    return s->top == MAX - 1; // if the top index is equal to the maximum index, the stack is full
}

void push(Stack *s, char in){

    if(isFull(s)){
        throwExecption(s, full);
    }
    s->arr[++s->top] = in; // increment the top index and add the input to the stack
}

char pop(Stack *s){
    if(isEmpty(s)){
        throwExecption(s, empty);
    }
    char temp = s->arr[s->top]; // store top elemnt in temp before destroying it
    s->top--; // decrement the top index
    return temp; // return the top element
}

char top(Stack *s){
    if(isEmpty(s)){
        throwExecption(s, empty);
    }
    return s->arr[s->top]; // returns the top element 
}

void throwExecption(Stack *s, char err){

    switch(err){
        case full: // stack full
            printf("Stack at %p is full \n", s);
            break;
        case empty: // stack empty
            printf("Stack at %p is empty \n", s);
            break;
        default: // unknown error
            printf("Stack at %p suffered an unknown error \n", s);
            break;
    }
}

// EOF