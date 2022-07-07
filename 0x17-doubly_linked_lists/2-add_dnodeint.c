#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_dnodeint - adds a node to a doubly linked list
 *@head: head of linked list
 *@n: item to add to node
 *Return: added node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	new->next->prev = new;
	*head = new;
	return (*head);
}
