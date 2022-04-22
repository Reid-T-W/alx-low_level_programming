#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node - adds a new node
 *@head: head of linked list
 *@str: string to be added to node
 *Return: address of newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
int string_len;
list_t *new;

string_len = string_length(str);
new = malloc(sizeof(list_t));
if (new == 0 || str == 0)
{
return (NULL);
}
new->str = strdup(str);
new->len = string_len;
new->next = *head;
*head = new;
return (*head);
}
