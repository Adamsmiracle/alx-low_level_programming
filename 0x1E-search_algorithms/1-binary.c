#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches a sorted array
 * @array: the array of date
 * @size: the number of elements in the array
 * @value: the value being searched for
 * Return: the position of the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t midpoint = (high - low) / size;

	while (low <= high)
	{
		midpoint = ((high + low) / (2));
		print_array(array, low, high + 1);

		if (array[midpoint] < value)
		{
			low = midpoint + 1;
		}

		if (array[midpoint] > value)
		{
			high = midpoint - 1;
		}

		else if (array[midpoint] == value)
		{
			return (midpoint);
		}
	}

	return (-1);
}

/**
 * print_array - print the array to the standard output
 * @array: the input array
 * @low: the index of the lowest element
 * @high: index of the highest element
 * Return: void
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i;


	printf("Searching in array: ");

	for (i = low; i < high; i++)
	{
		if (i == high - 1)
		{
			printf(" %d", array[i]);
		}

		else
		{
			printf(" %d,", array[i]);
		}
	}

	printf("\n");
}
