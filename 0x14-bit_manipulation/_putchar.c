#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character to the standard output
 * @c: character to be printed
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
