#include "hash_tables.h"
#include <stdlib.h>
/**
 *hash_table_delete - deletes a hash table
 *@ht: hash table to delete
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
  hash_node_t **get_location = NULL;
  hash_node_t *list_iterator = NULL;
  hash_node_t *delete = NULL;
  unsigned long int index = 0;

  if (ht == NULL)
    {
      return;
    }
  while (index < ht->size)
    {
      get_location = ht->array + index;
      if (*get_location != NULL)
	{
	  list_iterator = *get_location;
	  while (list_iterator != NULL)
	    {
	      delete = list_iterator;
	      list_iterator = list_iterator->next;
	      free(delete);
	    }
	}
      index = index + 1;
    }
  free(ht->array);
  free(ht);
}
