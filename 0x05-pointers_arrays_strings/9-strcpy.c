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

	i = 0;
	while (*src != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
