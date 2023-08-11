#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - entry point
*description: print 0 if n is equl to zero,
*print positive if n is greater than zero,
*print negative if nis less than zero
*Return: always 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d, is positive\n", n);
}
if (n < 0)
{
printf("%d, is negative\n", n);
}
if (n == 0)
{
printf("%d, is zero\n", n);
}
	return (0);
}
