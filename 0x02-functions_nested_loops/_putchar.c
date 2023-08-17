#include "main.h"
#include <unistd.h>

/**
  * _putchar - Prints the character c to the standard output
  * @c - The character to print out
  * Return: 1 (Success)
  * On error. -1 is returned
  */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
