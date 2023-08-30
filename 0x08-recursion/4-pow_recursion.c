#include "main.h"
/**
  * pow_recursion - prints the a number to the power another number
  * @x: number
  * @y: power
  * Return: The answer
  */

int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * pow_recursion(x, y - 1));
}
