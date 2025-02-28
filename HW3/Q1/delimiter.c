/*
C Program to perform delimiter matching using a stack 

4 given steps
1. read characters from the input string one by one
2. if character is a delimiter, check to see if it is opening, if yes, push it onto the stack
3. if a character is a delimiter, check to see if it is closing, if yes, pop the stack and check if the popped delimiter is the corresponding opening delimiter
4. if the stack is empty at the end of the string, then the delimiters are matched else failed
*/

#include "delimiter.h"

/*
Input: single character 
*/
int mapFunction(char c) {
    if (c == '(' || c == '[' || c == '{') {
        return 1;
    } else if (c == ')' || c == ']' || c == '}') {
        return -1;
    }

    return 0;
}

int delimiterMatch(char *str, int length){
    
    Stack s;
    initStack(&s);

    for (int i = 0; i < length-1; i++){
        switch(mapFunction(str[i])){
            case 1:
                push(&s, str[i]);
                break;
            case -1:
                if (isEmpty(&s)){ // if the stack is empty, the delimiters are not matched
                    printf("Expected %c but got %c \n", top(&s), str[i]);
                    printf("Delimiters are not matched \n");
                    return 0;
                }
                else{ // if the stack is not empty, check if the popped delimiter is the corresponding opening delimiter
                    pop(&s);
                    break;
                }
            default:
                break;
        }
    }
    
    // if the stack is empty, the delimiters are matched
    if (isEmpty(&s)){
        printf("Delimiters are matched \n");
        return 1;
    }

    // control should never reach here
    printf("Error during processing\n");
    return 0;
}              

// EOF