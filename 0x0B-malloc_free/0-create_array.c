#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of space to allocate
 * @c: character to populate the allocated memory
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(*p) * size);

	i = 0;
	if (p == Null || p == 0)
	{
		return (Null);
	}

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

