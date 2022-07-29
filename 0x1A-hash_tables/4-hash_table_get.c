#include"hash_tables.h"
#include<stdio.h>
#include<string.h>
/**
 *hash_table_get - gets the value associated with the key
 *@ht: hash table
 *@key: key used to retrieve value
 *Return: returns the key's value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t **get_location;
	hash_node_t *list_iterator = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	get_location = ht->array + index;
	list_iterator = *get_location;
	while (list_iterator != NULL)
	{
		if (strcmp((list_iterator)->key, key) == 0)
		{
			value = (list_iterator)->value;
			return (value);
		}
		list_iterator = list_iterator->next;
	}
	return (NULL);
}
