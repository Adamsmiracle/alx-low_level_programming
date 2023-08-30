#include "main.h"
/**
  * _puts_recursion - print the character of a string followed by a new line character
  * @s: string input
  * Return: void
  */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		i++;
	}
		return;
	_putchar(s[i]);
	_puts_recursion(s++);
}
