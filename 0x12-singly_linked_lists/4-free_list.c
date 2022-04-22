#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free's the memory of a linked list
 *@head: head of a linked list
 *Return: void
 */
void free_list(list_t *head)
{
list_t *copy = head;
while (head != NULL)
{
copy = copy->next;
free(head);
head = copy;
}
}
