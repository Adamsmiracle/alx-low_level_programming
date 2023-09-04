#include "main.h"
/**
 * _strdup - copies the argument to a newly created memory
 * @str: input string
 * Return: pointer to the memory location
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int t;
	char *p;

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	t = 0;
	while (t <= i)
	{
		p[t] = str[t];
		t++;
	}
	return (p);
}
