#include "main.h"
void print_number(int* n)
{
int i, len = 0, sign = 1;
if (n[0] == '-')
	sign = -1;

for (; n[len] != '\0'; len++)
	{}
for (i = 0; i < len; i++)
	{	
	_putchar(n[i] * sign);
	}


}
