#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *sum_listint - returns the sum of all the data of a linked list
 *@head: head of linked list
 *Return: sum of data
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
