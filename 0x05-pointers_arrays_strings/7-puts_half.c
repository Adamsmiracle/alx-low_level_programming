#include "main.h"
/**
  * puts_half - prints half of the string followed by new line character
  * @str: string argument
  * Return: void
  */

void puts_half(char *str)
{
	int n, a, len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		len++;
	}

	n = (len / 2);

	if (len % 2 == 1)
	{
		n = ((longi + 1) / 2);
	}

	for (a = n; str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
