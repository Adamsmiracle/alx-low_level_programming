#include "main.h"

/**
  * _putchar - prints the character to the standard ouput
  * @c: Input character
  * Return: 0 (Success)
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
