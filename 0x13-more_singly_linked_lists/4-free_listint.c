#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *free_listint - free a linked list from memory
 *@head: head of linked list
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *copy = head;

while (head != NULL)
{
copy = head;
head = head->next;
free(copy);
}
}
