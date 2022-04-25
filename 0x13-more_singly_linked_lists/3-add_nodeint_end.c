#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: head of the linked list
 *@n: number to be added
 *Return: Returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *copy = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
new->n = n;
new->next = copy;
*head = new;
return (*head);
}
while (copy->next != NULL)
{
copy = copy->next;
}
new->n = n;
new->next = copy->next;
copy->next = new;
return (*head);
}
