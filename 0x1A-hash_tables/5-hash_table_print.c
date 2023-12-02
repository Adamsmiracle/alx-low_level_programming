#include "hash_tables.h"

/**
 * hash_table_print - prints all the elements of the hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *bucket;
	int not_final = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];

		while (bucket)
		{
			if (not_final)
				printf(",");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_final = 1;
			bucket = bucket->next;
		}
	}

	printf("}\n");
}
