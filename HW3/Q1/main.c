/* driver code to test delimiter matching


Your program should read a string of text of arbitrary length, and check if the left
and right delimiters match correctly. If the delimiters match, it should print a message
confirming the matching. Otherwise, it should stop at the first mismatched delimiter and print
the error message indicating which delimiter was encountered and which one was expected. You
can use Python language to implement it. If the language or system you use does not support
stacks, implement it using Lists

a. a*{[((b+c)-d)+ g-ft] – a}
b. a*{[((b+c)-d)+ g-pi) – a]}
c. a*{[((b+c)-d)+ g-ft] – (abc*r)}
d. a*{[((b+c)-d)+ g-pi] – (abc*r)]}
e. w*{[((a+c)-d)+ g-alpha] – pi*r)}

*/

#include "delimiter.h"


int main(){

    printf("ECE 341 HW 2 Q1: Delimiter Matching \nWilliam Neel \n");

    char test1[32] = "a*{[((b+c)-d)+ g-ft] - a}"; 
    char test2[34] = "a*{[((b+c)-d)+ g-pi) - a]}";
    char test3[40] = "a*{[((b+c)-d)+ g-ft] - (abc*r)}";
    char test4[41] = "a*{[((b+c)-d)+ g-pi] - (abc*r)]}";
    char test5[41] = "w*{[((a+c)-d)+ g-alpha] - pi*r)}";
    
    printf("Test 1 %s \n", test1);
    delimiterMatch(test1, 32);
    printf("Test 2 %s \n", test2);
    delimiterMatch(test2, 34);
    printf("Test 3 %s \n", test3);
    delimiterMatch(test3, 40);
    printf("Test 4 %s \n", test4);
    delimiterMatch(test4, 41);
    printf("Test 5 %s \n", test5);
    delimiterMatch(test5, 41);
    return 0;
}