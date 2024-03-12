#include "search_algos.h"
#include <stdio.h>
/**
*linear_search - function find the  index of query value
*@array: array of int
*@size: size of arry
*@value: int to search for
*Return: indx at which the value is found or -1
*/


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
