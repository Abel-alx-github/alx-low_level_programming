#include "main.h"
/**
*more numbers - prints 10 times the numbers, from 0 to 14
*return:  10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
char a, b;
for (a = 1; a <= 10; a++)
{for (b = 0; b <= 14; b++)
{if (b > 9)
{
_putchar((b / 10) + '0');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
