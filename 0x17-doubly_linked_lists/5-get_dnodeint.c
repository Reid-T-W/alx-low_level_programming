#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *get_dnodeint_at_index - get node at given index
 *@head: doubly linked list
 *@index: required index
 *Return: node at index
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node_index = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (count != index && node_index != NULL)
	{
		node_index = node_index->next;
		count = count + 1;
	}
	return (node_index);
}
