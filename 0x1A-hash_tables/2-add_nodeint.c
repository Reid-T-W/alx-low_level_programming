#include "lists.h"
#include "stdlib.h"
#include <stddef.h>
/**
 *add_nodeint - adds a node at beginning of a linked list
 *@head: head of a singly linked list
 *@n: number to be added
 *Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(hash_node_t *head, hash_node_t *node)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
