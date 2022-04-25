#include "lists.h"
#include "stddef.h"
/**
 *listint_len - determines the length of a linked list
 *@h: head of linked list
 *Return:number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t counter = 0;

while (h != 0)
{
counter++;
h = h->next;
}
return (counter);
}
