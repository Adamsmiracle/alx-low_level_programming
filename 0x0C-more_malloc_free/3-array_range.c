#include "main.h"
/**
  * array_range - prints the integer array from the min to the max
  * @min: minimum value;
  * @max: maximum value;
  * Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *p;
	int i;
	size_t size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}

	return (p);
}
