#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	char *dup_value;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}
	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (0);
	}
	node->key = (char *)key;
	dup_value = strdup(value);
	node->value = dup_value;
	index = key_index((const unsigned char *)key, ht->size);
	insert_location = ht->array + index;
	node->next = *insert_location;
	*insert_location = node;
	return (1);
}
