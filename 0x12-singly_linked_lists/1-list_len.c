#include <stdio.h>
#include "lists.h"
/**
 *list_len - counts the number of elements in a linked list
 *@h: linked list
 *Return: returns the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
int nodes = 0;

while (h != 0)
{
nodes++;
h = h->next;
}
return (nodes);
}
