#include "main.h"
/**
  * print_rev - prints the reverse of the string passed
  * @s: string to be reversed
  * Return: void
  */

void print_rev(char *s)
{
	int len;
	int o;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
