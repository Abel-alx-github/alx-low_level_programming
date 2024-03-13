#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - function find the  index of query value
*
* @array: array of int
*
* @size: size of arry
*
* @value: int to search for
*
* Return: indx at which the value is found or -1
*
* Description : search the value in array and return its indx or -1
*/


int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	for (index = 0; array && size != 0 && index < size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
