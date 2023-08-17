#include "main.h"

/**
  * print_sign - prints the sign of the number entered
  * @c - is the number whose sign is to be checked
  * Return: i if positive, 0 if 0 and -1 if negative
  */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (c == 0)
	{
		_putchar(0);
		return(0);
	}
	else 
	{
		_putchar('-');
		return(-1);
	}
}
