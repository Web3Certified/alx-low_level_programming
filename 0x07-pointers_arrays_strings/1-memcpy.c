#include "main.h"

/**
 *_memcpy - function copies n byte from memory area
 *@dest: pointer to char params
 *@src: pointer to char param
 *@n: size
 *Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
