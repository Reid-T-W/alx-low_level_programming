#include "main.h"

/**
 * link_path_dirs - builds a linked list of
 * the directories in PATH
 * @head: the head of the list
 *
 * Return; void
 */
void link_path_dirs(path_t **head)
{
	char str[10240], *token, *dir;
	int i, j, currIndex;


	for (i = 0; environ[i] != NULL; i++)
	{
		currIndex = 0;
		for (j = 0; j < 10240; j++)
			str[j] = '\0';
		for (j = 0; environ[i][j] != '\0'; j++)
			str[j] = environ[i][j];
		str[j] = '\0';
		token = _strtok(str, "=", &currIndex);
		if (_strcmp(token, "PATH") == 0)
			while ((dir = _strtok(str, ":", &currIndex)))
			{
				add_node_end(head, dir);
				free(dir);
			}
		free(token);
	}
}
