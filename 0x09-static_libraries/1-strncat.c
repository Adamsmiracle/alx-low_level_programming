#include "main.h"

/**
  * _strncat - concatenates n number of characters from src to dest
  * @dest: destination
  * @src: source
  * @n: number of characters to concatenat
  * Return: 1 (Success)
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
