#include "hash_tables.h"

/**
 * key_index - gets index for a key given
 * @key: key
 * @size: size of the table
 *
 * Return: size of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
