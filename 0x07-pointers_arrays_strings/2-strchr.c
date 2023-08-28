#include "main.h"
/**
  * *_strchr - check for  the occurrence of a character in a string.
  * @s: input
  * @c: input
  * Returns: a pointer to the first occurrence of c.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (*s);
		}
		s++;
	}
	return (0);
}
