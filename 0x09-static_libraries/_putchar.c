#include "main.h"
#include <unistd.h>
/**
  * _putchar - prints character to the standard output
  * @c: input character
  * Return: 1 (Success)
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
