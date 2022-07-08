#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_dnodeint_end - adds a node to the end of a doubly linked list
 *@head: head of linked list
 *@n: item to add to node
 *Return: added node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *iter_head = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (*head);
	}
	while (iter_head->next != NULL)
	{
		iter_head = iter_head->next;
	}
	new->prev = iter_head;
	new->next = iter_head->next;
	iter_head->next = new;
	return (new);
}
