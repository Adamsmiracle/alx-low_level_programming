#include "main.h"
/**
  * *_strchr - check for  the occurrence of a character in a string.
  * @s: input
  * @c: input
  * Returns: a pointer to the first occurrence of c.
  */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;

	while (*s++)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			return (s[j]);
		}
	}
	return (0);
}
