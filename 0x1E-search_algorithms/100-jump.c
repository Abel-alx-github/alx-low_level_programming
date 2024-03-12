#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
*jump_search - search value using jump at step sqrt(size)
*@array: int array
*@size: size of array
*@value: value to be sarched
*Return: index at which the value is found or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, i;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i + step < size && array[i + step] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
			while (i < size)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}

		}
		else if (i + step < size)
		{
			i = i + step;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
			while (i < size)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}

		}
	}
	return (-1);
}
