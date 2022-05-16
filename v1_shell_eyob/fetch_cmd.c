#include "main.h"

/**
 * fetch_cmd - check if a command exists
 * @cmd: the command
 *
 * Return: a pointer to the full path of the command,
 * or NULL command not found
 */
char *fetch_cmd(char *cmd)
{
	path_t *head, *p;
	char *temp, *builtins[3] = {"exit", "env", NULL};
	struct stat st;
	int i, j, n;

	for (i = 0; builtins[i]; i++)
		if (_strcmp(cmd, builtins[i]) == 0)
			return (cmd);
	if (stat(cmd, &st) == 0) /* check if absolute path */
		return (cmd);
	head = NULL;
	link_path_dirs(&head);
	p = head;
	while (p != NULL)
	{
		n = _strlen(cmd) + _strlen(p->dir) + 2;
		temp = malloc(sizeof(char) * n);
		if (temp == NULL)
			return (NULL);
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
			return (temp);
		}
		free(temp);
		p = p->next;
	}
	free_list(head);
	return (NULL);
}

/*int main()
{
	char *cmd;

	cmd = fetch_cmd("false");
	if (cmd != NULL)
	{
		printf("It works! Full path: [[%s]]\n", cmd);
		free(cmd);
	}
	return (0);
}*/
