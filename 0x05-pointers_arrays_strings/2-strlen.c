#include "main.h"
/**
  * _strlen - prints the length of the argument
  * @s: strings whose length is to be calculated
  * Return: 0 (Success)
  */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
}
