#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - prints all the elements in a linked list
 *@h: head of linked list
 *Return: number of items printed
 */
size_t print_listint(const listint_t *h)
{
size_t counter = 0;

while (h != 0)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}
return (counter);
}
