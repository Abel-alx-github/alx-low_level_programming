#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @b: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < (b - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (b - 1))
		{
			printf("%d", a[b - 1]);
		}
			printf("\n");
}

