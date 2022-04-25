#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *free_listint2 - free a linked list from memory
 *@head: pointer to pointer of head of linked list
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *copy;

while (*head != NULL)
{
copy = *head;
*head = (*head)->next;
free(copy);
}
head = NULL;
}
