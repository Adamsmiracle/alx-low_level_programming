#include "main.h"
#include <string.h>
/**
  * _memset - fills the first n elements of with the b;
  * @s: input
  * @b: input
  * @n: input
  * Return: address if s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

