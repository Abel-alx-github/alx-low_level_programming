#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
*binary_search - search the indext of a given value
*@array: array of int
*@size: size of array
*@value: value int to be searched in array
*Return: the index at which the value exist or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i, j;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		i = low;
		j = high;
		printf("Searching in array: ");
		while (i < j)
		{
			printf("%d, ", array[i++]);
		}
		printf("%d\n", array[i]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;

	}
	return (-1);
}
