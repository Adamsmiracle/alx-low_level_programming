#include <stdlib.h>
/**
 * linear_search - sequential search algorithm
 * @array: the data structure
 * @size: the size of the the array
 * @value: the key to search for
 * Return: The position of the values, else none
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (i; i < size; i++)
	{
		if (!array)
			return (-1)
		if (array[i] == value)
			return (i);

		if (i == size)
		{
			return (NULL);
		}
	}

	return (NULL)
}

