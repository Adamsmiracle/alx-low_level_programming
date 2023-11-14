#include "main.h"

/**
  * _isalpha - checks if a character is an alphabet or not
  * @c: is the character to be checked
  * Return: 1 if the character is alphabet and 0 if not
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

