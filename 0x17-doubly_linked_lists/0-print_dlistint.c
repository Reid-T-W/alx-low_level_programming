#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_dlistint - print doubly linked list
 *@h: doubly linked list
 *Return: size of the linked list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
