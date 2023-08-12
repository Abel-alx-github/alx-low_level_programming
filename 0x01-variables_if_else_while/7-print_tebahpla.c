#include <stdio.h>
/**
*main - print alphabet in reverse order
*Return: always 0 success
*/
int main(void)
{
int i;
for (i = 122; (i >= 97 && i <= 122); --i)
{
putchar(i);
}
putchar('\n');
return (0);
}

