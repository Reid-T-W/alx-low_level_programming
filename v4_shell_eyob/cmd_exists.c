#include "main.h"

/**
 * cmd_exists - check if a command exists
 * @cmd: the command
 *
 * Return: 1 if command if found in PATH, 0 if not found,
 * -1 upon error
 */
int cmd_exists(char *cmd)
{
	path_t *head, *p;
	char *temp;
	struct stat st;
	int i, j, n;

	if (get_builtin(cmd))	/* check if cmd is a built-in */
		return (1);
	if (stat(cmd, &st) == 0) /* check if absolute path */
		return (1);
	head = NULL;
	link_path_dirs(&head);
	p = head;
	while (p != NULL)
	{
		n = _strlen(cmd) + _strlen(p->dir) + 2;
		temp = malloc(sizeof(char) * n);
		if (temp == NULL)
			return (-1);
		for (i = 0; i < n; i++)
			temp[i] = '\0';
		for (i = 0; (p->dir)[i]; i++)
			temp[i] = (p->dir)[i];
		temp[i++] = '/';
		for (j = 0; cmd[j]; i++, j++)
			temp[i] = cmd[j];
		if (stat(temp, &st) == 0)
		{
			free_list(head);
			free(temp);
			return (1);
		}
		free(temp);
		p = p->next;
	}
	free_list(head);
	return (0);
}
