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
	hash_node_t *list_iterator = NULL;
	char *dup_value;
	char *dup_key;

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
	dup_key = strdup(key);
	node->key = dup_key;
	dup_value = strdup(value);
	node->value = dup_value;
	index = key_index((const unsigned char *)key, ht->size);
	insert_location = ht->array + index;
	if (insert_location == NULL)
	{
		*insert_location = node;
		return (1);
	}
	else
	{
		list_iterator = *insert_location;
		while (list_iterator != NULL)
		{
			if (list_iterator->key == node->key)
			{
				list_iterator->value = node->value;
				return (1);
			}
			list_iterator = list_iterator->next;
		}
	}
	node->next = *insert_location;
	*insert_location = node;
	return (1);
}
