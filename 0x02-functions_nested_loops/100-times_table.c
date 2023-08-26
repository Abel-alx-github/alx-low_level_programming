#include "main.h"
#include <stdio.h>
void print_times_table(int n)
{
int i, j;


for (i = 0; n <= 15 && n >= 0 && i <= n; i++)
	{
	for (j = 0; n <= 15 && n >= 0 && j <= n; j++)
		{
		if (i * j < 10 && j == 0)
			{
			printf("%d", i * j);
			}
		if (i * j < 10 && j != 0)
			{
			printf(",   %d", i * j);
			}
		if (i * j >= 10 && i * j < 100)
			{
			printf(",  %d%d", (i * j) / 10, (i * j) % 10);
			}
		if (i * j > 99)
			{
			printf(", %d%d", (i * j) / 10, (i * j) % 10);
			}
		}
	printf("\n");
	}


}
