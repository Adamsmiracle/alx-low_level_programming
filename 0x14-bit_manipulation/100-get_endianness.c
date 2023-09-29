#include "main.h"
/**
 * get_endianness - checkst the endianness of a machine
 * Return: 0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
	unsigned int i = 0;

	char *byte = (char *)&i;

	return (*byte);
}
