#include <stdio.h>
/**
*main - print heaxdecimal
*Return: always 0 success
*/
int main(void)
{
int i;
int a;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (a = 97; a < 103; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
