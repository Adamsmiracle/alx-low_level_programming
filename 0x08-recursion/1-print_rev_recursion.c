#include "main.h"
/**
  * _print_rev_recursion - prints the string in reverse
  * @s: input string
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	int i;

	i = s;

	for (*s)
	{
		i++;
	}

	for (s >= i)
	{
		_putchar(*s);
		_print_rev_recursion(s--);
	}
}
