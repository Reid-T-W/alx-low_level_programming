#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - delete a node at index
 *@head: head of linked list
 *@index: the index
 *Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter = 0;
listint_t *copy = *head;
listint_t *temp = *head;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
copy = copy->next;
free(*head);
*head = copy;
temp = NULL;
copy = NULL;
return (1);
}
while (copy != NULL)
{
if (counter == index)
{
temp->next = copy->next;
temp = copy;
copy = copy->next;
free(temp);
temp = NULL;
copy = NULL;
return (1);
}
temp = copy;
copy = copy->next;
counter++;
}
return (-1);
}
