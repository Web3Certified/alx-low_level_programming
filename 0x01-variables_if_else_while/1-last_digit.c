#include <stdio.h>
/** main - main block
 * Description: last digit
 * Return: 0 if success
 */
int main(void)
{
int n;
int last n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("last digit of %d is %d and is zero\n", n, lastn);
}
else if (lastn < 6 && lastn != o)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
