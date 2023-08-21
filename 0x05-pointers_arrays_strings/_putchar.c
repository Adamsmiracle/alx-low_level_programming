#include "main.h"
#include <unistd.h>

/**
  * _putchar - prints character to the standard output
  * @c: character to be printed to the ouput
  * Return: 1 (Success)
  * On error: -1 is returned
  */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
