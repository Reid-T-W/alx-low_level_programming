#include "main.h"

/**
 * free_list - frees a path_t list
 * @head: the head of the list
 *
 * Return: void
 */
void free_list(path_t *head)
{
	path_t *p;

	if (head == NULL)
		return;
	p = head;
	if (p->next == NULL)
	{
		free(p->dir);
		free(p);
		p = NULL;
	}
	else
	{
		free_list(p->next);
		free(p->dir);
		free(p);
		p = NULL;
	}
}
