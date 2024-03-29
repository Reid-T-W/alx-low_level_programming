#include "hash_tables.h"
#include <stdlib.h>
/**
 *hash_table_create - creates a hash table
 *@size: size of array
 *Return: returns a pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(table));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc((size + 1) * sizeof(*table->array));
	if ((table->array) == NULL)
	{
		return (NULL);
	}
	return (table);
}
