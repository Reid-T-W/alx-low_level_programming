#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table
 *@key: key
 *@value: value
 *Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t **insert_location;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL)
	{
		return (0);
	}
	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (0);
	}
	node->key = (char *)key;
	node->value = (char *)value;
	index = key_index((const unsigned char *)key, ht->size);
	insert_location = ht->array + index;
	node->next = *insert_location;
	*insert_location = node;
	return (1);
}
