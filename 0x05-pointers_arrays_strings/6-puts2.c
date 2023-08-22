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
	int o;

	len = 0;
	o = 0;
	while (*y != '\0')
	{
		y++;
		len++;
	}
	i = len - 1;
	for (o = 0; o < len; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
