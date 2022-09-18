#include "main.h"
/**
 *_isupper - function that checksfor uppercase character.
 *@c: input value to check
 *Return: return 1 if c is uppercase 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
