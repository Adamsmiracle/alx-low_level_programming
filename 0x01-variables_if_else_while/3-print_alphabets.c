#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * Return: 0 (Success)
*/

int main(void)
{
	char c;
	char b;

	c = 'a';
	b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
			b++;
	}
	putchar('\n');
	return (0);

}
