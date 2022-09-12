#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - main block
 * Description: Get a random number and print the number
 * and if its is positive, negative, or zero
 * Return: 0
=======
 *  main - main block
 *  Description: Get a random number and print the number
 *  and if its is positive, negative, or zero
 *  Return: 0
>>>>>>> 71f9a27c7326da6c784b6a6235190a375dacf31b
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
