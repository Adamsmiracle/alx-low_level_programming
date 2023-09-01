#include "main.h"
/**
  * _isupper - check whether the character is upper case
  * @c: The character to check`
  * Return: 0 (Success)
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

