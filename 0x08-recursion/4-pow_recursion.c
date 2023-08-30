#include "main.h"
/**
  * _pow_recursion - prints the a number to the power another number
  * @x: number
  * @y: power
  * Return: The answer
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
