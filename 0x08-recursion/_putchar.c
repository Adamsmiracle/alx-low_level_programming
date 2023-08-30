#include "main.h"
#include <unistd.h>
/**
  * _putchar - print the character to the standard output
  * @c: input character
  * Return: 0 (Success)
  */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
