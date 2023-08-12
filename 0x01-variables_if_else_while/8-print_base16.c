#include <stdio.h>
/**
  * main - Prints the hexadecimal numbers
  * Return: 0 (Success)
  */

int main(void)
{
int a;
char b;

a = 48;
b = 'a';

while (a < 58)
{
	putchar(a);
	a++;

}
while (b <= 'f')
{
	putchar(b);
	b++;
}
putchar('\n');
return (0);
}
