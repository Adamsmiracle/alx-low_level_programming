#include "main.h"
/**
 * *_strncpy - copies the first n contents of src to dest
  * @dest: input
  * @src: input
  * @n: input
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
