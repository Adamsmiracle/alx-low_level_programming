#include <stdio.h>
/**
  * main - Prints the lower case alphabets in reverse order
  * Return: 0 (Success)
  */

int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;

	}
	putchar('\n');
	return (0);

}
