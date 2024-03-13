#include <stdio.h>
#include "search_algos.h"


/**
 * jump_search - Implemeation of the jump search algorithm
 * jump search algorithm
 * @array: the array to traverse
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: index of value, -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, i, jump;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	prev = 0;
	jump = sqrt(size);

	for (i = 0; i < size && array[i] < value; prev = i, i += jump)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	printf("Value can be found between [%lu] and [%lu]\n", prev, i);

	for (; prev <= min(i, size - 1); prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);

}

/**
 * min - finds the minimun of the two argments
 * @a: first argument
 * @b: second argument
 * Return: the minimun of the two
 */

size_t min(size_t a, size_t b)
{
	return ((a <= b) ? a : b);
}
