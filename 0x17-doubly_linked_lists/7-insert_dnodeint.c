#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *insert_dnodeint_at_index - insert node at given index
 *@h: doubly linked list
 *@idx: required index
 *@n: number to insert
 *Return: node at index
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *node_index = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
	{
		return (NULL);
	}
	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(&*h, n));
	}
	if (*h == NULL)
	{
		return (NULL);
	}
	while (node_index != NULL)
	{
		if (count == idx)
		{
			if (node_index->next != NULL)
			{
				new->n = n;
				new->next = node_index;
				new->prev = node_index->prev;
				node_index->prev->next = new;
				node_index->prev = new;
				return (node_index);
			}
			else
			{
				return (add_dnodeint_end(&*h, n));
			}
		}
		node_index = node_index->next;
		count = count + 1;
	}
	return (NULL);
}
