#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *dlistint_len - number of elements in doubly linked list
 *@h: doubly linked list
 *Return: size of the linked list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
