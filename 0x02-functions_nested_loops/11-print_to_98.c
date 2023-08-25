#include <stdio.h>
#include "main.h"
/**
*print_to_98 -prints all natural numver from n to 98
*followed by a new line
*@n: print from this number
*/
void print_to_98(int n)
{
int i = n;
for (i = n; i < 98; i++)
	{
	printf("%d, ", i);
	}
for (i = n; i > 98; i--)
	{
	printf("%d, ", i);
	}
printf("98");
printf("\n");
}
