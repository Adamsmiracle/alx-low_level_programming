#include "main.h"
/**
  * *_memcpy - copies the contend first n src elements to dest;
  * @dest: input
  * @src: input
  * @n: input
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i;

	i = n;
	r = 0;

	for (r < i; r++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
