#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *i = str;
	int a;

	while (*i != '\0')
	{
		i++;
		len++;
	}
	t = len - 1;
	for (a = 0 ; a <= t ; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}

