#include "main.h"
/**
  * *string_toupper - converts lower case character to uppercase
  * @n: input
  * Return: (n)
  */

char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}

		i++;
	}
	return (n);

}
