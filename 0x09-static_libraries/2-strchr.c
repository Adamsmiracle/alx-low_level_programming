#include "main.h"
/**
  * _strchr - check for  the occurrence of a character in a string.
  * @s: input
  * @c: input
  * Returns: a pointer to the first occurrence of c.
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

