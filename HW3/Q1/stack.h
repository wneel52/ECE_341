/*
Header file for the stack data structure
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 1024
#define empty -1
#define full 1

/* 
stack data structure 
top: index of the top element
arr: array of characters
*/
typedef struct{
    int top; // index of the top element
    char arr[MAX]; // array of characters 
} Stack;

/*
Input: Stack pointer
Output: void
Initializes the stack by setting the top index to -1
*/
void initStack(Stack *s);

/*
Input: Stack pointer
Output: bool
Returns true if the stack is full, false otherwise
*/
bool isEmpty(Stack *s);

/*
Input: Stack pointer
Output: bool
Returns true if the stack is full, false otherwise
*/
bool isFull(Stack *s);

/*
Input: Stack pointer, char input
Output: void    
Pushes the input character onto the stack
If the stack is full, throws an exception
*/
void push(Stack *s, char in);


/*
Input: Stack pointer
Output: char -> the top element of the stack
Pops the top element of the stack
If the stack is empty, throws an exception
*/
char pop(Stack *s);

/*
Input: Stack pointer
Output: char -> the top element of the stack
Throws an exception if the stack is empty
*/
char top(Stack *s);

/*
Input: Stack pointer, int error code
Output: void
Throws an exception based on the error code
*/
void throwExecption(Stack *s, char err);

