#include "main.h"
#include <unistd.h>

/**
  * _putchar - prints the character to the standard output
  * @c: The character to be printed 
  * Return: 1 Always
  */

int  _putchar(char c)
{
	return (write(1, &c, 1));
}

