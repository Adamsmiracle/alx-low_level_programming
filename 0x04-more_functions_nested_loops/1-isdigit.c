#include "main.c"

/**
  * _isdigit - checks if a character is digit or not
  * @c: character to be checked
  * Return: 1 (Success)
  */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
