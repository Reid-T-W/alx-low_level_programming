#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free's the memory of a linked list
 *@head: head of a linked list
 *Return: void
 */
void free_list(list_t *head)
{
list_t *copy;
if (head == NULL)
{
return;
}
while (head != NULL)
{
copy = head;
head = head->next;
free(copy);
}
}
