#include "main.h"
/**
  * _puts - prints a string to the scree
  * @str: string to be printed to the screen
  * Return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

