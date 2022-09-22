#include "main.h"

/**
 *string_toupper - a function that changes lowercase
 *letters of a string to uppercase
 *@str: pointer
 *@Return: capitalized string
 */

char *string_toupper(char *)
{
// the extra comments i wrote in this program
// is to help me or whoever reads this code understand
// the concept 
int i; //int i = 0;
for (i = 0; str[i] != '\0'; i++) //while(s[i] != '\0')
{
// In this second curly brace opening we would be
// converting lowercase to uppercase, how?
// the ASCII code for a-z are 97 - 122
// the ASCII code for A-Z are 65 - 90
// if you notice you will see the difference is 32
// therefore to convert uppercase to lowercase
// you will add 32
// and to convert from lowercase to uppercase 
// you will substract 32
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32; // can be rewritten this way	
// str[i] = str[i] - 32;
}
 return (str);
 }
