#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (Success)
  */

int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{

	if (c == 'q' || c == 'e')
	{
		break;
	}
	else
	{
		putchar(c);
	}
	c++;
}
putchar('\n');


}
