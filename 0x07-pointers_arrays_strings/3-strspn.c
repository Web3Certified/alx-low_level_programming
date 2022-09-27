#include "main.h"

/**
 *strspn - Gets the length of a prefix substring.
 *@s: String where substring will look. 
 *@accept: Substring of accepted chars.
 *Return: Length of occurrence.
 */

unsigned int _strspn(char *s, char *accept)

{
unsigned int cont = 0;
int j = 0;
int flag;
while (*s != '\0')
{
flag = 0;
while (*(accept + j) != '\0')
{
if (*s == *(accept + j))
flag = 1;
j += 1;
}
j = 0;
if (flag == 0)
break;
cont += 1;
s++;
}
return (cont);
}
