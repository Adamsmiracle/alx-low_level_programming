#include "main.h"

/**
  * _strcat - concatenates the content of src to dest
  * @dest: destination string
  * @src: source string
  * Return: dest
  */

char *_strcat(char *dest, char *src)
	{
		int dest_len;

		dest_len = 0;
		while (*dest != '\0')
		{
			dest_len++;
		}
		char *ptrr = dest + dest_len;

		while (*src != '\0')
		{
			*ptrr++ = *src++;
		}
		return (dest);
	}
