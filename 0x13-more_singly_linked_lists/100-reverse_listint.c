#include "lists.h"
#include <stdio.h>
/**
 *reverse_listint - reverse a linked list
 *@head: head of a linked list
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *copy = *head;
listint_t *prev = *head;

if (*head == NULL)
return (*head);
copy = copy->next;
prev = prev->next;
copy = copy->next;
(*head)->next = NULL;
while (copy != NULL)
{
prev->next = *head;
*head = prev;
prev = copy;
copy = copy->next;
}
prev->next = *head;
*head =  prev;
return (prev);
}
