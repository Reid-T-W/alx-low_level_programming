#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *add_node_end - adds a node to the end of a linked list
 *@head: - head of linked list
 *@str: string to be added to node
 *Return: addresss of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
int string_len;
list_t *new;
list_t **copy = head;
string_len = string_length(str);
new = malloc(sizeof(list_t));
if (new == 0 || str == 0)
{
return (NULL);
}
new->str = strdup(str);
printf("[%d] %s\n", string_len, new->str);
new->len = string_len;
if (*head != 0)
{
while ((*copy)->next != 0)
{
*copy = (*copy)->next;
}
new->next = (*copy)->next;
(*copy)->next = new;
return (*copy);
}
return (add_node(head, str));
}
