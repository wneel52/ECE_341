// Delimiter Matching Header File
#include <string.h>
#include "stack.h"

/*
Input: character array, integer length
Output: integer
Checks if the delimiters in an inout string are matched
returns 1 if the delimiters are matched, 0 otherwise
*/
int delimiterMatch(char *str, int length);


/*
Input: single character 
Output: integer
Maps the input character to a corresponding integer value
Opening delimiters are mapped to 1 
Closing delimiters are mapped to -1
All other characters are mapped to 0
*/
int mapFunction(char c);

// EOF