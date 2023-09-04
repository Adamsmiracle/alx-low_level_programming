#include "main.h"
#include <stdio.h>
/**
  * _putchar - prints the character to the standard output
  * @c: input character
  * Return: 0 (Success)
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
