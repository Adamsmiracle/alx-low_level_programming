#include "main.h"
/**
  * puts2 - prints every other character of a string
  * @str: string to be printed
  */

void puts2(char *str)
{
	int len;
	int i;
	char *y = str;

	len = 0;
	while (*y != '\0')
	{
		str++;
		len++;
	}
	len--;
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
