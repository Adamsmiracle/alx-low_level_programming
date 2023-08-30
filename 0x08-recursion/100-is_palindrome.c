#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
  * is_palindrome - checks for palindrome
  * @s: string to check for palindrome
  * Return: 1 if true else 0
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(0)));
}

/**
  * _strlen_recursion - checks the length of the string
  * @s: string
  * Return: length of the string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * check_pal - checks for palindrome
  * @s: the string to check for the palindrome
  * @i: iterative interger
  * @len: len of the string
  * Return: 1 if palindrome and 0 if otherwise
  */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}


