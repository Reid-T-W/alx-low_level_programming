#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *sum_dlistint - sum all elements of a linked list
 *@head: head of linked list
 *Return: sum of all data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
