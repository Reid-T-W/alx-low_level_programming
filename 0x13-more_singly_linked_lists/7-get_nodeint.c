#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: head of linked list
 *@index: index to be returned
 *Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter = 0;
listint_t *copy = head;

if (head == NULL)
return (NULL);
while (copy != NULL)
{
if (counter == index)
return (copy);
copy = copy->next;
counter++;
}
return (NULL);
}
