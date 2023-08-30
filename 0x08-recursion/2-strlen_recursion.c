#include "main.h"
/**
  * _strlen_recursion - prinst the len of  the string using recursion
  * @s: input string
  * Return: length of the string
  */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
