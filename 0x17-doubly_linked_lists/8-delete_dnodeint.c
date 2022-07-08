#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *delete_dnodeint_at_index - deletes node at given index
 *@head: doubly linked list
 *@index: required index
 *Return: int
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node_index = *head;
	dlistint_t *node_del;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		(*head)->next->prev = NULL;
		node_del = *head;
		*head = (*head)->next;
		free(node_del);
		return (1);
	}
	while (node_index != NULL)
	{
		if (count == index)
		{
			if (node_index->next != NULL)
			{
				handle_case1(node_index);
			}
			else
			{
				handle_case2(node_index);
			}
			return (1);
		}
		node_index = node_index->next;
		count = count + 1;
	}
	return (-1);
}
/**
 *handle_case1 - handles case one deletion
 *@node_index: node
 *Return: int
 */
void handle_case1(dlistint_t *node_index)
{
	dlistint_t *node_del;

	node_del = node_index;
	node_index->prev->next = node_index->next;
	node_index->next->prev = node_index->prev;
	free(node_del);
}
/**
 *handle_case2 - handles case two deletion
 *@node_index: node
 *Return: int
 */
void handle_case2(dlistint_t *node_index)
{
	dlistint_t *node_del;

	node_del = node_index;
	node_index->prev->next = node_index->next;
	free(node_del);
}
