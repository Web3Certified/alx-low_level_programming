#include <stdio.h>
/**
 *main - prime number
 *Return: 0
 */
int main(void)
{
long int x = 612852475143;
long int cu;
for (cu = 2; cu < x; cu++)
{
if (x % cu == 0)
{
x = x / cu;
}
}
printf("%ld\n", cu);
return (0);
}
