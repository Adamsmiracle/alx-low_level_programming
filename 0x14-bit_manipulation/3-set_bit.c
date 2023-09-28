#include "main.h"
/**
 * set_bit - sets bit a index to 1
 * @n: the number to set the bit
 * @index: the index of the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
