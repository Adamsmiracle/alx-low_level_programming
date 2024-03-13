#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - sequential search algorithm
 * @array: the data structure
 * @size: the size of the the array
 * @value: the key to search for
 * Return: The position of the values, else none
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

