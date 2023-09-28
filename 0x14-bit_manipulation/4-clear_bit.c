#include "main.h"
/**
 * clear_bit - set the bit to 0
 * @n: the to set the bit in
 * @index: the index of the bit
 * Return: 1 success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);

	return (1);
}
