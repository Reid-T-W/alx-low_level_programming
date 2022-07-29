#include"hash_tables.h"
#include<stdio.h>
/**
 *hash_table_print - prints a hash table
 *@ht: hash table
 *
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **get_location = NULL;
	hash_node_t *list_iterator = NULL;
	unsigned long int index = 0;
	int first_print = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		get_location = ht->array + index;
		if (*get_location != NULL)
		{
			if (!first_print)
			{
				printf(", ");
			}
			list_iterator = *get_location;
			printf("'%s': '%s'", list_iterator->key, list_iterator->value);
			first_print = 0;
			while (list_iterator->next != NULL)
			{
				list_iterator = list_iterator->next;
				printf(", ");
				printf("'%s': '%s'", list_iterator->key, list_iterator->value);
			}
		}
		index = index + 1;
	}
	printf("}\n");

}
