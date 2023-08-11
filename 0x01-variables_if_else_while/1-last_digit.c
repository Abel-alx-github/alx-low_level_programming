#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*description: if the last digit of n is greater than 5: the string
* and is greater than 5
*if the last digit of n is 0: the string and is 0
*if the last digit of n is less than 6 and not 0: the string and is
*less than 6 and not 0
*Return: always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

int ln = n % 10;
if (ln > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ln);
}
if (ln == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ln);
}
if (ln < 6 && ln > 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
}
return (0);
}
