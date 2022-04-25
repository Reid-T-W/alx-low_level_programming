#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: head of linked list
 *Return: returns the head nodes data or 0 for empty list
 */
int pop_listint(listint_t **head)
{
listint_t *copy;
int n;

copy = *head;
if (copy == 0)
return (0);
n = copy->n;
*head = (*head)->next;
free(copy);
return (n);
}
