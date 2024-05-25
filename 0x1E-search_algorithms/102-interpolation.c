#include "search_algos.h"
/**
*interpolation_search - search the index at which the value is found
*@array: intger of array
*@size: size of array
*@value: value to be search for
*Return: indx of value or -1 on failure
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;

	if (array)
	{
		while (low <= high)
		{
			if (value > array[high] || value < array[low])
				return (-1);
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (pos > size)
				return (-1);
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}
	return (-1);
}
