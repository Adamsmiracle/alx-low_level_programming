#include "main.h"

/**
  * _islower - checks if the character is lower or not
  * @c: the character to be checked
  * Return: 1 if the character is lower and 0 if not
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
