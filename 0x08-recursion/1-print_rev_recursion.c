#include "main.h"
/**
  * _print_rev_recursion - prints the string in reverse
  * @s: input string
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	for (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
