#include "main.h"

/**
 * add_node_end - adds a node to the end of a path_t list
 * @head: the head of the list_t list
 * @str: the dir element of the node to be added
 *
 * Return: the address of the new element
 */
path_t *add_node_end(path_t **head, char *str)
{
	path_t *new, *p;

	p = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(path_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->dir = _strdup("(nil)");
		if (new->dir == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	else
	{
		new->dir = _strdup(str);
		if (new->dir == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
