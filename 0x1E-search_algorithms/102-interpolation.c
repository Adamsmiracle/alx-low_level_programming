#include "search_algos.h"

/**
 * interpolation_search - finds the value in a sorted array
 * @array: the input data
 * @size: size of the array
 * @value: the key to search for
 * Return: the index of the key
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t midpoint, low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (array[high] != array[low] &&
			(value >= array[low]) && (value <= array[high]))
	{
		midpoint = low + ((value - array[low]) * (high - low) /
				(array[high] - array[low]));
		printf("Value checked array[%lu] = [%d]", midpoint, array[midpoint]);

		if (array[midpoint] < value)
			low = midpoint + 1;
		else if (array[midpoint] > value)
			high = midpoint - 1;
		else
			return (midpoint);

		if (value == array[low])
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			return (low);
		}


		midpoint = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
		printf("Value checked array[%lu] is out of range\n", midpoint);
		return (-1);
}
