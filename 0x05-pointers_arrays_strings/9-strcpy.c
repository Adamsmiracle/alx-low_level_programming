#include "main.h"
/**
  * _strcpy - copies the content of src to dest
  * @dest: destination pointer
  * @src: source pointer
  * Return: desk
  */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
