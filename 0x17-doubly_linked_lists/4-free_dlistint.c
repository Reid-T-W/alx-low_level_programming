#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *free_dlistint - frees a doubly linked list
 *@head: doubly linked list
 *Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_copy;
	while (head != NULL)
	{
		head_copy = head;
		head = head->next;
		free(head_copy);
	}
	free(head);
	return;
}
