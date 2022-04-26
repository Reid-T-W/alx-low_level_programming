#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a new node at an index
 *@head: head of linked list
 *@idx: index
 *@n: number
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *copy = *head;
listint_t *new;
unsigned int counter = 0;

new = malloc(sizeof(listint_t));
new->n = n;
if (*head == NULL || new == NULL)
return (NULL);
if (idx == 0)
{
new->next = *head;
*head = new;
counter++;
return (*head);
}
while (counter != idx && copy->next != NULL)
{
copy = copy->next;
counter++;
}
if (counter == idx)
{
new->next = copy->next;
copy->next = new;
}
else
{
return (NULL);
}
return (*head);
}
